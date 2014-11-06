<?php
/**
 * @file
 * opendoors_standards.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opendoors_standards_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pane_embedded';
  $strongarm->value = '0';
  $export['comment_anonymous_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pane_embedded';
  $strongarm->value = 1;
  $export['comment_default_mode_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pane_embedded';
  $strongarm->value = '50';
  $export['comment_default_per_page_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pane_embedded';
  $strongarm->value = 1;
  $export['comment_form_location_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pane_embedded';
  $strongarm->value = '0';
  $export['comment_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pane_embedded';
  $strongarm->value = '1';
  $export['comment_preview_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pane_embedded';
  $strongarm->value = 1;
  $export['comment_subject_field_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_pane_embedded';
  $strongarm->value = 1;
  $export['i18n_node_extended_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_pane_embedded';
  $strongarm->value = array();
  $export['i18n_node_options_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pane_embedded';
  $strongarm->value = '0';
  $export['language_content_type_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pane_embedded';
  $strongarm->value = array();
  $export['menu_options_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pane_embedded';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pane_embedded';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pane_embedded';
  $strongarm->value = '0';
  $export['node_preview_pane_embedded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pane_embedded';
  $strongarm->value = 0;
  $export['node_submitted_pane_embedded'] = $strongarm;

  return $export;
}
