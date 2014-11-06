<?php

/**
 * Administrative settings for Statistics block.
 */
function stats_block_settings($form_state) {
 $piwik_settings = _stats_block_get_settings();
  
  $form['stats_block_base_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Piwik base URL'),
    '#description' => t('Base URL of the piwik server (e.g. <em>http://myserver.com/piwik/index.php</em>).'),
    '#default_value' => $piwik_settings['base_url'],
  );

  $form['stats_block_id_site'] = array(
    '#type' => 'textfield',
    '#title' => t('Piwik ID'),
  	'#description' => t('The id number, piwik gave your site. If in doubt, log into piwik and search for URLs containing the <em>idSite</em> parameter.'),
    '#default_value' => $piwik_settings['id_site'],
  );
  
  $form['stats_block_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Piwik API key'),
  	'#description' => t('The API key of your piwik account.<br/><strong>Be careful: </strong> Never provide the API key of the piwik administrator. It can be used to get administrative access to Piwik.<br/><strong>Hint:</strong> Create a separate user in piwik for your drupal server.'),
    '#default_value' => $piwik_settings['api_key'],
  );
  
  $form['stats_block_project_start_date'] = array(
    '#type' => 'date',
    '#title' => t('Date of project start'),
  	'#description' => t('Indicate a start date which will be used to query the statistics.'),
    '#default_value' => $piwik_settings['project_start_date'],
  );

  
  // Gather available metrics from implemented hooks
  $metrics = module_invoke_all('stats_block_metrics');

  $available_metrics = array();
  foreach ($metrics as $key => $val) {

    // Default string substitutions for translation, of none is given
    if (!isset($val['substitutions'])) {
      $val['substitutions'] = array();
    }

    $label = $key;
    if (isset($val['label'])) {
      $label = t($val['label'], $val['substitutions']);
    }
    if (isset($val['value'])) {
      $label .= ': ' . $val['value'];
    }
    if (isset($val['description'])) {
      $label .= ' <span class="description">' . t($val['description'], $val['substitutions']) . '</span>';
    }
    $available_metrics[$key] = $label;
  }
  //dpm($available_metrics);

  // Order items descending by their values
  uasort($available_metrics, 'stats_block_sort_value');

  // Get already configured metrics
  $show_metrics = variable_get('stats_block_show_metrics', array());
 
  $form['stats_block_show_metrics'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Show metrics'),
    '#options' => $available_metrics,
    '#default_value' => $show_metrics,
    '#description' => t('Check the metrics that should be shown in stats block. Items will be ordered by their value, descending. Use translation system on this page for changing labels and value description. New values are available after next cron run.'),
  );

  return system_settings_form($form);
}
