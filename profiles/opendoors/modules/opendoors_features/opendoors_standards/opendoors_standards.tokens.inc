<?php

/**
 * Provide tokens for this module. The following tokens are available:
 * 
 * - node:body-short-50: A shortened version of the body field.
 */

/**
 * Implements hook_token_info().
 */
function opendoors_standards_token_info() {
  $node['body-short-50'] = array(
    'name' => t("Body short 50"),
    'description' => t("A shortened version of the body field. 50 characters. Plain text."),
  );

  return array(
    'tokens' => array('node' => $node),
  );
}

/**
 * Implements hook_tokens().
 */
function opendoors_standards_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  if ($type == 'node' & !empty($data['node'])) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      if ($name == 'body-short-50') {
        $body_short = substr(strip_tags($node->body[LANGUAGE_NONE][0]['value']), 0, 50);
        $replacements[$original] = $body_short;
      }
    }
  }

  return $replacements;
}
