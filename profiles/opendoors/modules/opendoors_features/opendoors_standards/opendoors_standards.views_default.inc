<?php
/**
 * @file
 * opendoors_standards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opendoors_standards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'show_content_by_id';
  $view->description = 'This view can be used by panels to show nodes independently from their nid.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show content by ID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Content ID (field_pane_embedded_id) */
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['id'] = 'field_pane_embedded_id_value';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['table'] = 'field_data_field_pane_embedded_id';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['field'] = 'field_pane_embedded_id_value';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['default_argument_options']['argument'] = '[No content yet.]';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pane_embedded_id_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pane_embedded' => 'pane_embedded',
  );
  $translatables['show_content_by_id'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('All'),
  );
  $export['show_content_by_id'] = $view;

  return $export;
}
