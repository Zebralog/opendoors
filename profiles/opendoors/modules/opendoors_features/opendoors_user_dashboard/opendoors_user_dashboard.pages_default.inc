<?php
/**
 * @file
 * opendoors_user_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function opendoors_user_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_dashboard';
  $page->task = 'page';
  $page->admin_title = 'User dashboard';
  $page->admin_description = 'An additional dashboard page in the user section that displays most recent activity.';
  $page->path = 'user/%user/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer users',
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Benutzer: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_dashboard';
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a2edeed3-f6a0-4959-be9c-c5e905c6afd9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfe2b676-11c4-4ebc-aad7-a0d5e39e33f8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfe2b676-11c4-4ebc-aad7-a0d5e39e33f8';
    $display->content['new-cfe2b676-11c4-4ebc-aad7-a0d5e39e33f8'] = $pane;
    $display->panels['middle'][0] = 'new-cfe2b676-11c4-4ebc-aad7-a0d5e39e33f8';
    $pane = new stdClass();
    $pane->pid = 'new-f7651d1d-5720-40e8-835b-1623d08de08a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_comments-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
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
    $pane->uuid = 'f7651d1d-5720-40e8-835b-1623d08de08a';
    $display->content['new-f7651d1d-5720-40e8-835b-1623d08de08a'] = $pane;
    $display->panels['middle'][1] = 'new-f7651d1d-5720-40e8-835b-1623d08de08a';
    $pane = new stdClass();
    $pane->pid = 'new-6b0ae69f-5e52-4f1b-bb84-dbf3b0caacbb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_nodes-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b0ae69f-5e52-4f1b-bb84-dbf3b0caacbb';
    $display->content['new-6b0ae69f-5e52-4f1b-bb84-dbf3b0caacbb'] = $pane;
    $display->panels['middle'][2] = 'new-6b0ae69f-5e52-4f1b-bb84-dbf3b0caacbb';
    $pane = new stdClass();
    $pane->pid = 'new-15322d71-5b61-4b3e-82a4-92ef3af5e6a5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'opendoors_user_dashboard-action_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '15322d71-5b61-4b3e-82a4-92ef3af5e6a5';
    $display->content['new-15322d71-5b61-4b3e-82a4-92ef3af5e6a5'] = $pane;
    $display->panels['middle'][3] = 'new-15322d71-5b61-4b3e-82a4-92ef3af5e6a5';
    $pane = new stdClass();
    $pane->pid = 'new-3ec529d6-ef16-4022-bbec-370ce4fe0072';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'opendoors_user_dashboard-settings_links';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3ec529d6-ef16-4022-bbec-370ce4fe0072';
    $display->content['new-3ec529d6-ef16-4022-bbec-370ce4fe0072'] = $pane;
    $display->panels['middle'][4] = 'new-3ec529d6-ef16-4022-bbec-370ce4fe0072';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_dashboard'] = $page;

  return $pages;

}
