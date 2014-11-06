<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function STARTERKIT_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['STARTERKIT_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('STARTERKIT sample setting'),
    '#default_value' => theme_get_setting('STARTERKIT_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  /* -- Delete this line if you want to turn off this setting.
  unset($form['themedev']['zen_wireframes']); // We don't need to toggle wireframes on this site.
  // */

  // We are editing the $form in place, so we don't need to return anything.
}



// Configurable header background image
// header_background_1 is by default set to "true"
$form['theme_settings']['header_background_1'] = array(
		'#type' => 'checkbox',
		'#title' => t('Default header background image'),
		'#default_value' => theme_get_setting('header_background_1'),
);

// Configurable theme colors
function opendoors_heat_form_system_theme_settings_alter(&$form, &$form_state) {
	$form['theme_settings']['text_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Text color - Default: #000000'),
    '#default_value' => theme_get_setting('text_color'),
  );
	$form['theme_settings']['page_background_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Page background color - Default: #EAEAEA'),
    '#default_value' => theme_get_setting('page_background_color'),
  );

	// Filter bar links
  $form['theme_settings']['filterbar_links'] = array(
    '#type' => 'textfield',
    '#title' => t('Filter bar links color - Default: #191919'),
    '#default_value' => theme_get_setting('filterbar_links'),
  );
  // Filter bar hover
  $form['theme_settings']['filterbar_links_hover'] = array(
    '#type' => 'textfield',
    '#title' => t('Filter bar links active and hover color - Default: #AD003A'),
    '#default_value' => theme_get_setting('filterbar_links_hover'),
  );
  // Filter bar category labels
  $form['theme_settings']['category_labels_bg'] = array(
    '#type' => 'textfield',
    '#title' => t('Filter bar category labels background - Default: #656565'),
    '#default_value' => theme_get_setting('category_labels_bg'),
  );
	// Filter bar category labels hover
	$form['theme_settings']['category_labels_bg_active'] = array(
			'#type' => 'textfield',
			'#title' => t('Filter bar category labels background active - Default: #333333'),
			'#default_value' => theme_get_setting('category_labels_bg_active'),
	);
  // Filter bar category labels font color
  $form['theme_settings']['category_labels_font_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Filter bar category labels font color - Default: #F2F2F2'),
    '#default_value' => theme_get_setting('category_labels_font_color'),
  );

  // Main bubble background color
  $form['theme_settings']['main_bubble_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Main bubble background color - Default: #004963'),
    '#default_value' => theme_get_setting('main_bubble_color'),
  );
  // Response bubble background color
  $form['theme_settings']['response_bubble_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Response bubble background color - Default: #0071BC'),
    '#default_value' => theme_get_setting('response_bubble_color'),
  );

  // Heatmap items
  $form['theme_settings']['heatmap_color_0'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 0 - Default: #004963'),
    '#default_value' => theme_get_setting('heatmap_color_0'),
  );
  $form['theme_settings']['heatmap_color_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 1 - Default: #003866'),
    '#default_value' => theme_get_setting('heatmap_color_1'),
  );
  $form['theme_settings']['heatmap_color_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 2 - Default: #1d1d68'),
    '#default_value' => theme_get_setting('heatmap_color_2'),
  );
  $form['theme_settings']['heatmap_color_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 3 - Default: #480f6d'),
    '#default_value' => theme_get_setting('heatmap_color_3'),
  );
  $form['theme_settings']['heatmap_color_4'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 4 - Default: #990062'),
    '#default_value' => theme_get_setting('heatmap_color_4'),
  );
  $form['theme_settings']['heatmap_color_5'] = array(
    '#type' => 'textfield',
    '#title' => t('Heatmap color 5 - Default: #ad003a'),
    '#default_value' => theme_get_setting('heatmap_color_5'),
  );

}
