<?php
/**
 * @file
 * opendoors_discussion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opendoors_discussion_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moderation|node|proposal|form';
  $field_group->group_name = 'group_moderation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation',
    'weight' => '6',
    'children' => array(
      0 => 'field_moderation_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-moderation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_moderation|node|proposal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_municipal_response|node|proposal|form';
  $field_group->group_name = 'group_municipal_response';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Response of the municipality',
    'weight' => '3',
    'children' => array(
      0 => 'field_municipal_response',
      1 => 'field_municipal_response_image',
      2 => 'field_municipal_response_author',
      3 => 'field_municipal_response_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-municipal-response field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_municipal_response|node|proposal|form'] = $field_group;

  return $export;
}
