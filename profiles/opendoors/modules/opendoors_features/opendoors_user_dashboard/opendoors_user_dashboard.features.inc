<?php
/**
 * @file
 * opendoors_user_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opendoors_user_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opendoors_user_dashboard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
