<?php
/**
 * @file
 * opendoors_standards.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function opendoors_standards_user_default_roles() {
  $roles = array();

  // Exported role: Moderation.
  $roles['Moderation'] = array(
    'name' => 'Moderation',
    'weight' => 4,
  );

  // Exported role: Redaktion.
  $roles['Redaktion'] = array(
    'name' => 'Redaktion',
    'weight' => 3,
  );

  return $roles;
}
