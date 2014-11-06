<?php
/**
 * @file
 * opendoors_standards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opendoors_standards_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opendoors_standards_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opendoors_standards_node_info() {
  $items = array(
    'pane_embedded' => array(
      'name' => t('Content in panels'),
      'base' => 'node_content',
      'description' => t('Use this content type to reference content in panels. Use the field Content ID for referencing in panels. This content type is not indexed by search.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
