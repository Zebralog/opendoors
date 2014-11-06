<?php

/**
 * @file
 * Migrate files between storage engines.
 */

/**
 * Implements hook_drush_command().
 */
function azure_storage_drush_command() {
  $items['azure-storage-migrate'] = array(
    'description' => dt('Migrate files between storage engines'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'core' => array(7),
    'arguments' => array(
      'source' => dt('The name of the source storage (for example: public, private, azure, etc.).'),
      'destination' => dt('The name of the destination storage.'),
    ),
  );
  return $items;
}

function drush_azure_storage_migrate($source_storage = NULL, $destination_storage = NULL) {
  if (!isset($source_storage)) {
    return drush_set_error('DRUSH_AZURE_STORAGE_NO_SOURCE', dt('Missing argument: source.'));
  }
  if (!isset($destination_storage)) {
    return drush_set_error('DRUSH_AZURE_STORAGE_NO_DESTINATION', dt('Missing argument: destination.'));
  }

  $query = db_select('file_managed', 'f')
    ->fields('f')
    ->condition('f.uri', $source_storage . '://%', 'LIKE');

  // Fetch the total number of files for feedback.
  $total = $query->countQuery()->execute()->fetchField();

  $count = 0;
  foreach ($query->execute() as $file) {
    $destination_uri = $destination_storage . '://' . file_uri_target($file->uri);
    file_move($file, $destination_uri, FILE_EXISTS_REPLACE);

    $count++;
    if (time() - $last_feedback >= 10) {
      drush_log(dt('Migrated !count files out of !total.', array('!count' => $count, '!total' => $total)), 'ok');
      $last_feedback = time();
    }
  }

  drush_log(dt('Migrated !count files.', array('!count' => $count)), 'ok');
}
