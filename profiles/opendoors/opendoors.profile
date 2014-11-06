<?php 

/**
 * Inspired by mark-a-spot
 */

/**
 * Implements form_alter().
 */
function opendoors_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'install_configure_form') {
    // Disable update notifications feature. This is because we need to update
    // the distribution as a whole.
    if (!isset($form_state['input']['update_status_module'])) {
      $form['update_notifications']['#access'] = FALSE;
      $form['update_notifications']['update_status_module']['#default_value'][0] = 0;
      $form['update_notifications']['update_status_module']['#default_value'][1] = 0;
    }
  }
}
