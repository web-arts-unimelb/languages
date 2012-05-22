<?php
/**
 * @file
 * uom_beverage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uom_beverage_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'beverages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Beverages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beverages';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_temperature' => 'field_temperature',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temperature' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Temperature */
  $handler->display->display_options['fields']['field_temperature']['id'] = 'field_temperature';
  $handler->display->display_options['fields']['field_temperature']['table'] = 'field_data_field_temperature';
  $handler->display->display_options['fields']['field_temperature']['field'] = 'field_temperature';
  $handler->display->display_options['fields']['field_temperature']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_temperature']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_temperature']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_temperature']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_temperature']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_temperature']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_temperature']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_temperature']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_temperature']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_temperature']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_temperature']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_temperature']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_temperature']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_temperature']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'beverage' => 'beverage',
  );
  /* Filter criterion: Content: Temperature (field_temperature) */
  $handler->display->display_options['filters']['field_temperature_value']['id'] = 'field_temperature_value';
  $handler->display->display_options['filters']['field_temperature_value']['table'] = 'field_data_field_temperature';
  $handler->display->display_options['filters']['field_temperature_value']['field'] = 'field_temperature_value';
  $handler->display->display_options['filters']['field_temperature_value']['value'] = array(
    'all' => 'all',
    'cold' => 'cold',
    'hot' => 'hot',
  );
  $handler->display->display_options['filters']['field_temperature_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperature_value']['expose']['operator_id'] = 'field_temperature_value_op';
  $handler->display->display_options['filters']['field_temperature_value']['expose']['label'] = 'Temperature';
  $handler->display->display_options['filters']['field_temperature_value']['expose']['operator'] = 'field_temperature_value_op';
  $handler->display->display_options['filters']['field_temperature_value']['expose']['identifier'] = 'field_temperature_value';
  $handler->display->display_options['filters']['field_temperature_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_temperature_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_temperature_value']['expose']['reduce'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'beverages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Beverages';
  $handler->display->display_options['menu']['description'] = 'View available beverages';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['beverages'] = $view;

  return $export;
}
