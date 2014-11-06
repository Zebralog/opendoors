<?php
/**
 * @file
 * od_azure_file_storage.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function od_azure_file_storage_field_default_field_bases_alter(&$data) {
  if (isset($data['field_image'])) {
    $data['field_image']['settings']['uri_scheme'] = 'opendoorsstorage'; /* WAS: 'public' */
  }
  if (isset($data['field_municipal_response_image'])) {
    $data['field_municipal_response_image']['settings']['uri_scheme'] = 'opendoorsstorage'; /* WAS: 'public' */
  }
  if (isset($data['field_pane_embedded_downloads'])) {
    $data['field_pane_embedded_downloads']['settings']['uri_scheme'] = 'opendoorsstorage'; /* WAS: 'public' */
  }
}
