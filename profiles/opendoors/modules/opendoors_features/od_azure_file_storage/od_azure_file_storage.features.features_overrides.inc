<?php
/**
 * @file
 * od_azure_file_storage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function od_azure_file_storage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_image.settings|uri_scheme"] = 'opendoorsstorage';
  $overrides["field_base.field_municipal_response_image.settings|uri_scheme"] = 'opendoorsstorage';
  $overrides["field_base.field_pane_embedded_downloads.settings|uri_scheme"] = 'opendoorsstorage';

 return $overrides;
}
