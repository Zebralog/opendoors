<?php

/**
 * @file
 * Hooks provided by the Stats Block module.
 *
 * @author Marco Rademacher <rademacher@zebralog.de>
 */

/**
 * Set all values a module wants to provide to the stats block.
 *
 * Each element should calculate its own value for itself, so calculation
 * functions should be included. Stats block calculates these values by cron
 * at the given time span, so heavy load on calculation is not a major problem.
 * Some values needn't be calculated for they can be pulled from the piwik site
 * the stats block is configured for.
 *
 * @return
 *   An associative array whose keys should be site-wide unique, so they are
 *   better prefixed with the name of the module. Each array element
 *   represents one value that is shown in the stats block and has the folling
 *   items itself:
 *   - label (required): String of the name of the value that is diplayed in
 *     stats block. The translation will be handled from the stats block itself
 *     when the values are displayed. So don't use a t()-function here.
 *   - description (optional): String of the description of the given value.
 *     Usually it is shown while hovering across the value's label, so
 *     don't use double quotes (") in here as it will break the tag format.
 *   - substitutions (optional): Array for tokens in label and
 *     description where the key is the placeholder and the value is the string.
 *     Example: array('@title' => $metric->title)
 *   - value (optional): The integer representing the value. Usually you define
 *     a calculation function before.
 *   - piwik-query (optional): The name of the piwik API method that calculates
 *     the needed value (string). Use this key only if a piwik action should be
 *     created and no value is given.
 */
function hook_stats_block_metrics() {

  $metrics = array();

  // Example implementation of a piwik request in stats_block.module
  $metrics['piwik_actions'] = array(
    'label' => 'Site actions',
    'piwik-query' => 'VisitsSummary.getActions',
    'description' => 'Total count of page views, downloads and clicks on outlinks.',
  );

  // Example calculation of number of comments from stats_block.module
  $value = db_select('comment', 'c')
      ->fields('c')
      ->execute()
      ->rowCount();

  $metrics['comments'] = array(
    'label' => 'Comments',
    'value' => $value,
    'description' => 'Total count of comments on postings of any type, no matter if they are published or unpublished.'
  );
  watchdog('Statistics', '@count comments', array('@count' => $value), WATCHDOG_NOTICE, NULL);

  return $metrics;
}
