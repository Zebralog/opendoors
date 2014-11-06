<?php

/**
 * @file
 * Hooks provided by the overlay paths module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Define non-administrative overlay paths.
 *
 * Modules may specify whether or not the paths they define in hook_menu()
 * should be displayed in the overlay, with the standard site theme.
 *
 * To change the overlay status of menu items defined in another module's
 * hook_menu(), modules should implement hook_overlay_paths_alter().
 *
 * @return
 *   An associative array. For each item, the key is the path in question, in
 *   a format acceptable to drupal_match_path(). The value for each item should
 *   be FALSE (to explicitly stop the path using the overlay), TRUE, or an
 *   associative array with the following possible keys:
 *   - 'width': The width of the overlay when viewing this path, this can be
 *     specified in 'px', 'em' or '%' or no units, which will default to using
 *     'px'.
 *
 * @see hook_menu()
 * @see drupal_match_path()
 * @see hook_admin_paths()
 * @see hook_overlay_paths_alter()
 */
function hook_overlay_paths() {
  $paths = array(
    'mymodule/*/add' => TRUE,
    'mymodule/*/edit' => array(
      'width' => 500,
    ),
  );
  return $paths;
}

/**
 * Redefine non-administrative overlay paths defined by other modules.
 *
 * @param $paths
 *   An associative array of overlay using paths, as defined by implementations
 *   of hook_overlay_paths().
 *
 * @see hook_overlay_paths()
 */
function hook_overlay_paths_alter(&$paths) {
  // All user pages should appear in the overlay.
  $paths['user'] = TRUE;
  $paths['user/*'] = TRUE;
  $paths['user/*/edit'] = FALSE;
}

/**
 * @} End of "addtogroup hooks".
 */
