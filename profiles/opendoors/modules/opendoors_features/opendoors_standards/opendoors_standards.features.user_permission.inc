<?php
/**
 * @file
 * opendoors_standards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opendoors_standards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create content content'.
  $permissions['create content content'] = array(
    'name' => 'create content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any content content'.
  $permissions['delete any content content'] = array(
    'name' => 'delete any content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
