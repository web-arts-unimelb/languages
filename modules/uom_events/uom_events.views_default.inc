<?php
/**
 * @file
 * uom_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uom_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Seminars';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a>French, Italian and Spanish Studies</a><br><strong>Email:</strong> <a href="mailto:jld@unimelb.edu.au">Dr Jacqueline Dutton</a><br> <strong>Phone:</strong> +61 3 8344 6985</li>
<li><a>German, Swedish and Russian Studies</a><br><strong>Email:</strong> <a href="mailto:heinz@unimelb.edu.au">Dr Leo Kretzenbacher</a><br> <strong>Phone:</strong> +61 3 8344 5209</li>
<li><a>Linguistics and Applied Linguistics</a><br><strong>Email:</strong> <a>Dr Barbara Kelly</a><br> <strong>Phone:</strong> +61 3 8344 8986</li>
</ul>
<p class="notice">Seminar announcements are sent regularly by the School of Languages and Linguistics.<br>If you would like to be added to our list please email <a href="mailto:jeremy.taylor@unimelb.edu.au">Jeremy Taylor</a> with your details.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<h3>Research seminars archive</h3>
<ul>
<li><a href="/research/seminars-archive">Previous research seminars</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No upcoming events were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_event_speaker']['id'] = 'field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['table'] = 'field_data_field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['field'] = 'field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_event_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['text'] = '<strong>[field_event_speaker]</strong>';
  $handler->display->display_options['fields']['field_event_speaker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_speaker']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_speaker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_speaker']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_speaker']['field_api_classes'] = 0;
  /* Field: Content: Speaker Organisation */
  $handler->display->display_options['fields']['field_event_speaker_organisation']['id'] = 'field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['table'] = 'field_data_field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['field'] = 'field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['label'] = 'Presenter';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['text'] = '[field_event_speaker]<br />
[field_event_speaker_organisation]';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<em>[title]</em>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
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
  /* Field: Content: Document uploader */
  $handler->display->display_options['fields']['field_event_document']['id'] = 'field_event_document';
  $handler->display->display_options['fields']['field_event_document']['table'] = 'field_data_field_event_document';
  $handler->display->display_options['fields']['field_event_document']['field'] = 'field_event_document';
  $handler->display->display_options['fields']['field_event_document']['label'] = '';
  $handler->display->display_options['fields']['field_event_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_document']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_document']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_document']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_document']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_document']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_document']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_document']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_document']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_document']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_document']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_document']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_document']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_document']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_event_document']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_event_detail']['id'] = 'field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['table'] = 'field_data_field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['field'] = 'field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['label'] = 'Title';
  $handler->display->display_options['fields']['field_event_detail']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_detail']['alter']['text'] = '[title]<br />
[field_event_detail]';
  $handler->display->display_options['fields']['field_event_detail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_detail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_detail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_detail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_detail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_detail']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_event_detail']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_event_detail']['field_api_classes'] = 0;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_dates']['alter']['text'] = '<strong>[field_dates]</strong>';
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
  $handler->display->display_options['fields']['field_location']['label'] = 'Time and Location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[field_dates]<br />
[field_location]';
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
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Sort criterion: Content: Dates -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Sort criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['order'] = 'DESC';
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
  );
  /* Filter criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['filters']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_dates_value2']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    69 => '69',
    68 => '68',
    66 => '66',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';

  /* Display: Research Seminars */
  $handler = $view->new_display('page', 'Research Seminars', 'page');
  $handler->display->display_options['path'] = 'research/seminars';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Research seminars';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Conferences, symposia and public lectures */
  $handler = $view->new_display('page', 'Conferences, symposia and public lectures', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conferences, symposia and public lectures';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p class="notice">Event announcements are sent regularly by the School of Languages and Linguistics.<br>If you would like to be added to our list please email <a href="mailto:jeremy.taylor@unimelb.edu.au">Jeremy Taylor</a> with your details.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<h3>Conferences, symposia and public lectures archive</h3>
<ul>
<li><a href="/research/conferences-symposia-lectures-archive">Previous Conferences, Symposia and Public Lectures</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  );
  /* Filter criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['filters']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_dates_value2']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    65 => '65',
    64 => '64',
    67 => '67',
    70 => '70',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['path'] = 'research/conferences-symposia-lectures';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Conferences, symposia and public lectures';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Upcoming Events */
  $handler = $view->new_display('page', 'Upcoming Events', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<ul>
<li><a href="/about/events-archive">Archived events</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  );
  /* Filter criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['filters']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_dates_value2']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'about/events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Archived Events */
  $handler = $view->new_display('page', 'Archived Events', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Archived Events';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<ul>
<li><a href="/about/events">Upcoming events</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No archived events were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  );
  /* Filter criterion: Content: Dates - end date (field_dates:value2) */
  $handler->display->display_options['filters']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_dates_value2']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    69 => '69',
    68 => '68',
    66 => '66',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['path'] = 'about/events-archive';
  $export['events'] = $view;

  return $export;
}
