<?php
/**
 * @file
 * opendoors_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opendoors_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opendoors_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opendoors_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A <em>slide</em> is introducing content on the frontpage. Add an image that is displayed in the original size and link to follow up pages from within the body text. If there are more than one slide created, the introduction turns into a slideshow of these items with the newsest slide first.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
