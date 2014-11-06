<?php
/**
 * @file
 * Admimistrative functions for the Overlay paths ui module.
 */

/**
 * Main administration form for Overlay Paths ui module.
 */
function overlay_paths_admin_form($form, &$form_state) {
  $paths = variable_get('overlay_paths_ui_paths', _overlay_paths_ui_default());
  $default = '';
  foreach ($paths as $path => $option) {
    $default .= $path;
    if (is_array($option) && isset($option['width'])) {
      $default .= '|' . $option['width'];
    }
    elseif ($option === FALSE) {
      $default .= '|FALSE';
    }
    $default .= "\n";
  }

  $form['overlay_paths_ui_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Non-admin overlay paths'),
    '#description' => t("Specify non-admin pages that should appear in the overlay by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are blog for the blog page and blog/* for every personal blog. <front> is the front page. You may also use a '|' (pipe) character after the path to specify an option, either a CSS width, to specify a width for that path in the overlay, or FALSE to specify that that path shouldn't appear in the overlay. For example node/add|600px or user/register/step/2|FALSE"),
    '#default_value' => $default,
    '#element_validate' => array('overlay_paths_admin_form_paths_element_validate'),
  );

  return system_settings_form($form);
}

/**
 * Form validation callback.
 *
 * @see overlay_paths_admin_form()
 */
function overlay_paths_admin_form_paths_element_validate($element, &$form_state) {
  $value = $element['#value'];
  $new_value = array();
  foreach (explode("\n", $value) as $line) {
    $line = trim($line);
    if (!empty($line)) {
      if (strpos($line, '|') === FALSE) {
        $new_value[$line] = TRUE;
      }
      else {
        list($path, $option) = explode('|', $line, 2);
        if (empty($option)) {
          $new_value[$path] = TRUE;
        }
        elseif ($option == 'FALSE') {
          $new_value[$path] = FALSE;
        }
        elseif ($width = overlay_paths_match_width($option)) {
          $new_value[$path] = array(
            'width' => $width,
          );
        }
      }
    }
  }
  form_set_value($element, $new_value, $form_state);
}
