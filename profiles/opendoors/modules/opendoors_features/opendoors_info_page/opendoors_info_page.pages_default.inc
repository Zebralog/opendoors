<?php
/**
 * @file
 * opendoors_info_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function opendoors_info_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'info_page';
  $page->task = 'page';
  $page->admin_title = 'Info page';
  $page->admin_description = '';
  $page->path = 'infos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_info_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'info_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'info-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Projektinfos';
  $display->uuid = 'af0523d3-f96c-4595-9932-4bf046ebc12a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa04c351-1d48-4529-adc6-86a01a1192ea';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'show_content_by_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'info-page-intro',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel_1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa04c351-1d48-4529-adc6-86a01a1192ea';
    $display->content['new-fa04c351-1d48-4529-adc6-86a01a1192ea'] = $pane;
    $display->panels['middle'][0] = 'new-fa04c351-1d48-4529-adc6-86a01a1192ea';
    $pane = new stdClass();
    $pane->pid = 'new-024f10d6-c14b-4302-9926-5b31e8045e32';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'phases';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '024f10d6-c14b-4302-9926-5b31e8045e32';
    $display->content['new-024f10d6-c14b-4302-9926-5b31e8045e32'] = $pane;
    $display->panels['middle'][1] = 'new-024f10d6-c14b-4302-9926-5b31e8045e32';
    $pane = new stdClass();
    $pane->pid = 'new-5f592390-b0ef-45c4-86e5-8c2fc1246d31';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'info_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel_2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5f592390-b0ef-45c4-86e5-8c2fc1246d31';
    $display->content['new-5f592390-b0ef-45c4-86e5-8c2fc1246d31'] = $pane;
    $display->panels['middle'][2] = 'new-5f592390-b0ef-45c4-86e5-8c2fc1246d31';
    $pane = new stdClass();
    $pane->pid = 'new-4a5d1f80-67f6-4111-9960-25d4cdd32aef';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'show_content_by_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'info-page-footer',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel_3',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4a5d1f80-67f6-4111-9960-25d4cdd32aef';
    $display->content['new-4a5d1f80-67f6-4111-9960-25d4cdd32aef'] = $pane;
    $display->panels['middle'][3] = 'new-4a5d1f80-67f6-4111-9960-25d4cdd32aef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5f592390-b0ef-45c4-86e5-8c2fc1246d31';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['info_page'] = $page;

  return $pages;

}
