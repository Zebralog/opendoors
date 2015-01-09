<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  STARTERKIT_preprocess_html($variables, $hook);
  STARTERKIT_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function opendoors_heat_preprocess_node(&$vars, $hook) {
  // $vars['title_prefix'][] = array('#children' => render($vars['content']['field_image']));

  // Optionally, run node-type-specific preprocess functions, like
  // STARTERKIT_preprocess_node_page() or STARTERKIT_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}

function opendoors_heat_preprocess_node_pane_embedded(&$vars, $hook) {
  // Show image before node title.
  $vars['title_prefix'][] = array('#children' => render($vars['content']['field_image']));
}

function opendoors_heat_preprocess_node_proposal(&$vars, $hook) {
  // Add css class based on hotness
  $hotness = $vars['content']['field_hotness'][0]['#markup'];
  $vars['classes_array'][] = 'hotness-' . $hotness;
  
  // In teaser view: Remove link tags from body because the full teaser view is a link
  if ($vars['teaser']) {
    $vars['content']['body'][0]['#markup'] = strip_tags( $vars['content']['body'][0]['#markup'], "<b><strong><i><em><ul><ol><li>" );
    $vars['submitted'] = strip_tags( $vars['submitted'], "<span><time>" );
  }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */



/**
 * Bring back livereload functionality to D7
 * 
 * WARNING: Never commit this function un-out-commented into git!
 * 
 * This will disable CSS caching which will stop Internet Explorer
 * from loading all CSS stylesheets (if it's more than 31 files).
 * 
 * @see http://annertech.com/news/livereload-and-drupal-7
 */
/* function opendoors_heat_css_alter(&$css) {
    // Alter css to display as link tags.
    foreach ($css as $key => $value) {
        $css[$key]['preprocess'] = FALSE;
    }
} */

/**
 * Set count label for rate widgets.
 */
function opendoors_heat_preprocess_rate_template_thumbs_up(&$vars) {
  // Overwrite rate widget behaviour: In info text we show vote count instead of 
  // default text (2 users have voted.)
  $vars['info'] = '<span title="' . $vars['info'] . '">' . $vars['results']['count'] . '</span>';
}


/**
 * Implements theme_stats_block().
 */
function opendoors_heat_stats_block($metrics) {
  $output = '';

  foreach ($metrics as $key => $val) {
    if (!isset($val['description']) || !is_array($val)) {
      continue;
    }

    $output .= '<div class="statistics-row statisticsRow stats-' . $key . '" title="' . t($val['description'], $val['substitutions']) . '">';
    $output .= '<span class="label">' . t($val['label'], $val['substitutions']) . '</span> ';
    $output .= '<span class="value">' . number_format($val['value'], 0, ',', '.') . '</span> ';
    $output .= '</div>';
  }

  return $output;
}

