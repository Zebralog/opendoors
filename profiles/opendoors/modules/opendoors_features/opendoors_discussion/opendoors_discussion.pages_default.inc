<?php
/**
 * @file
 * opendoors_discussion.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function opendoors_discussion_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discussion_page';
  $page->task = 'page';
  $page->admin_title = 'Discussion page';
  $page->admin_description = 'Browse proposals and submit your own proposal.';
  $page->path = 'browse-proposals';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussion_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'discussion_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
  $display->title = '';
  $display->uuid = '7e1007a6-fd59-4dbf-80e5-14bf8e8c74cb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-509c8bbd-a2c1-4246-b624-bc1cccb4e2fb';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_slider';
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
      'css_class' => 'welcome-text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '509c8bbd-a2c1-4246-b624-bc1cccb4e2fb';
    $display->content['new-509c8bbd-a2c1-4246-b624-bc1cccb4e2fb'] = $pane;
    $display->panels['middle'][0] = 'new-509c8bbd-a2c1-4246-b624-bc1cccb4e2fb';
    $pane = new stdClass();
    $pane->pid = 'new-f014d51d-1937-4cbe-9611-f5a975394446';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'show_content_by_id';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'opendoors-front-intro-message',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'welcome-text',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f014d51d-1937-4cbe-9611-f5a975394446';
    $display->content['new-f014d51d-1937-4cbe-9611-f5a975394446'] = $pane;
    $display->panels['middle'][1] = 'new-f014d51d-1937-4cbe-9611-f5a975394446';
    $pane = new stdClass();
    $pane->pid = 'new-aaeba8a0-3c5e-43e7-ae3c-6d5e1b1c2b3c';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'opendoors_discussion-proposal_add_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'proposal-form',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aaeba8a0-3c5e-43e7-ae3c-6d5e1b1c2b3c';
    $display->content['new-aaeba8a0-3c5e-43e7-ae3c-6d5e1b1c2b3c'] = $pane;
    $display->panels['middle'][2] = 'new-aaeba8a0-3c5e-43e7-ae3c-6d5e1b1c2b3c';
    $pane = new stdClass();
    $pane->pid = 'new-6e9142e6-1177-4a87-992f-677ba8cc1ec0';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'show_content_by_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'opendoors-front-proposal-discussion-intro',
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
      'css_id' => 'pane-proposal-discussion-intro',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6e9142e6-1177-4a87-992f-677ba8cc1ec0';
    $display->content['new-6e9142e6-1177-4a87-992f-677ba8cc1ec0'] = $pane;
    $display->panels['middle'][3] = 'new-6e9142e6-1177-4a87-992f-677ba8cc1ec0';
    $pane = new stdClass();
    $pane->pid = 'new-8414defa-03f5-48ac-b306-c46688d143ce';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'stats_block-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-stats-block',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8414defa-03f5-48ac-b306-c46688d143ce';
    $display->content['new-8414defa-03f5-48ac-b306-c46688d143ce'] = $pane;
    $display->panels['middle'][4] = 'new-8414defa-03f5-48ac-b306-c46688d143ce';
    $pane = new stdClass();
    $pane->pid = 'new-71717a28-2b31-469f-9d7f-897113b8fb64';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'opendoors_discussion-proposal_discussion_filter_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pane-proposal-discussion-filter',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '71717a28-2b31-469f-9d7f-897113b8fb64';
    $display->content['new-71717a28-2b31-469f-9d7f-897113b8fb64'] = $pane;
    $display->panels['middle'][5] = 'new-71717a28-2b31-469f-9d7f-897113b8fb64';
    $pane = new stdClass();
    $pane->pid = 'new-9e243d68-c8f2-4dd0-9349-a5add1a55301';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'proposal_discussion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '9',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
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
    $pane->css = array(
      'css_id' => 'pane-proposal-discussion',
      'css_class' => 'view-proposals',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9e243d68-c8f2-4dd0-9349-a5add1a55301';
    $display->content['new-9e243d68-c8f2-4dd0-9349-a5add1a55301'] = $pane;
    $display->panels['middle'][6] = 'new-9e243d68-c8f2-4dd0-9349-a5add1a55301';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discussion_page'] = $page;

  return $pages;

}
