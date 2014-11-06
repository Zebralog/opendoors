<?php

/**
 * @file
 *
 * Implement Wysiwyg module hooks.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_linebreaks_linebreaks_plugin() {
  $plugins['linebreaks'] = array(
    'title' => t('Force linebreaks'),
    'vendor url' => 'http://drupal.org/project/wysiwyg_linebreaks',
    'icon title' => t('Converts all p and br tags to linebreaks, and vice-versa'),
    'settings' => array(),
  );
  $plugins['convert_linebreaks'] = array(
    'title' => t('Convert linebreaks'),
    'vendor url' => 'http://drupal.org/project/wysiwyg_linebreaks',
    'icon title' => t('Converts all p and br tags to linebreaks'),
    'settings' => array(),
  );
  return $plugins;
}
