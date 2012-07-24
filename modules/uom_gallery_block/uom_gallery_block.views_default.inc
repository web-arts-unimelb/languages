<?php
/**
 * @file
 * uom_gallery_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uom_gallery_block_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_gallery']['separator'] = ' ';
  $handler->display->display_options['fields']['field_gallery']['field_api_classes'] = 0;
  /* Sort criterion: Content: Gallery (field_gallery:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
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
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['gallery'] = $view;

  return $export;
}
