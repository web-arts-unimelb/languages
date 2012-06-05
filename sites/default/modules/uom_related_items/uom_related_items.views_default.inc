<?php
/**
 * @file
 * uom_related_items.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uom_related_items_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'related_items';
  $view->description = 'This view displays related events, pages and web sites for pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_events_target_id']['id'] = 'field_events_target_id';
  $handler->display->display_options['relationships']['field_events_target_id']['table'] = 'field_data_field_events';
  $handler->display->display_options['relationships']['field_events_target_id']['field'] = 'field_events_target_id';
  $handler->display->display_options['relationships']['field_events_target_id']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dates']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dates']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dates']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dates']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dates']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dates']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="event-title">[title] <br />
[field_dates]<br />
[field_location]<p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = '1';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'event' => 'event',
    'page' => 'page',
  );

  /* Display: Related Events Block */
  $handler = $view->new_display('block', 'Related Events Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_events_target_id']['id'] = 'field_events_target_id';
  $handler->display->display_options['relationships']['field_events_target_id']['table'] = 'field_data_field_events';
  $handler->display->display_options['relationships']['field_events_target_id']['field'] = 'field_events_target_id';
  $handler->display->display_options['relationships']['field_events_target_id']['label'] = 'Related Event';
  $handler->display->display_options['relationships']['field_events_target_id']['required'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Related events (field_events:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_events';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Related events (field_events) */
  $handler->display->display_options['filters']['field_events_target_id']['id'] = 'field_events_target_id';
  $handler->display->display_options['filters']['field_events_target_id']['table'] = 'field_data_field_events';
  $handler->display->display_options['filters']['field_events_target_id']['field'] = 'field_events_target_id';
  $handler->display->display_options['filters']['field_events_target_id']['operator'] = 'not empty';

  /* Display: Related Pages Block */
  $handler = $view->new_display('block', 'Related Pages Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Pages';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_pages_target_id']['id'] = 'field_related_pages_target_id';
  $handler->display->display_options['relationships']['field_related_pages_target_id']['table'] = 'field_data_field_related_pages';
  $handler->display->display_options['relationships']['field_related_pages_target_id']['field'] = 'field_related_pages_target_id';
  $handler->display->display_options['relationships']['field_related_pages_target_id']['label'] = 'Related Page';
  $handler->display->display_options['relationships']['field_related_pages_target_id']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_pages_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Related pages (field_related_pages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_related_pages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Related pages (field_related_pages) */
  $handler->display->display_options['filters']['field_related_pages_target_id']['id'] = 'field_related_pages_target_id';
  $handler->display->display_options['filters']['field_related_pages_target_id']['table'] = 'field_data_field_related_pages';
  $handler->display->display_options['filters']['field_related_pages_target_id']['field'] = 'field_related_pages_target_id';
  $handler->display->display_options['filters']['field_related_pages_target_id']['operator'] = 'not empty';

  /* Display: Related Websites Block */
  $handler = $view->new_display('block', 'Related Websites Block', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related websites */
  $handler->display->display_options['fields']['field_related_url']['id'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['table'] = 'field_data_field_related_url';
  $handler->display->display_options['fields']['field_related_url']['field'] = 'field_related_url';
  $handler->display->display_options['fields']['field_related_url']['label'] = '';
  $handler->display->display_options['fields']['field_related_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_related_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_related_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_related_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_url']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_related_url']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_url']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_related_url']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_related_url']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Related websites (field_related_url:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_related_url';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Related websites (field_related_url:url) */
  $handler->display->display_options['filters']['field_related_url_url']['id'] = 'field_related_url_url';
  $handler->display->display_options['filters']['field_related_url_url']['table'] = 'field_data_field_related_url';
  $handler->display->display_options['filters']['field_related_url_url']['field'] = 'field_related_url_url';
  $handler->display->display_options['filters']['field_related_url_url']['operator'] = 'not empty';
  $export['related_items'] = $view;

  return $export;
}
