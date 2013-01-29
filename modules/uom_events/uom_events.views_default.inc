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

  $view = new view();
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
  $handler->display->display_options['title'] = 'Research seminars archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_dates_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_speaker' => 'field_event_speaker',
    'field_event_speaker_organisation' => 'field_event_speaker_organisation',
    'title' => 'title',
    'field_event_document' => 'field_event_document',
    'field_event_detail' => 'field_event_detail',
    'nothing' => 'nothing',
    'field_dates' => 'field_dates',
    'field_location' => 'field_location',
    'field_dates_1' => 'field_dates_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_speaker_organisation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_document' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_detail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a>French, Italian and Spanish Studies</a><br><strong>Email:</strong> <a href="mailto:jld@unimelb.edu.au">Dr Jacqueline Dutton</a><br> <strong>Phone:</strong> +61 3 8344 6985</li>
<li><a>German, Swedish and Russian Studies</a><br><strong>Email:</strong> <a href="mailto:heinz@unimelb.edu.au">Dr Leo Kretzenbacher</a><br> <strong>Phone:</strong> +61 3 8344 5209</li>
<li><a>Linguistics and Applied Linguistics</a><br><strong>Email:</strong> <a>Dr Barbara Kelly</a><br> <strong>Phone:</strong> +61 3 8344 8986</li>
</ul>
<p class="notice">Seminar announcements are sent regularly by the School of Languages and Linguistics.<br>If you would like to be added to our list please email <a href="mailto:jeremy.taylor@unimelb.edu.au">Jeremy Taylor</a> with your details.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Research seminars archive</h3>
<ul>
<li><a href="/research/seminars-archive">Previous research seminars</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No upcoming events were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_event_speaker']['id'] = 'field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['table'] = 'field_data_field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['field'] = 'field_event_speaker';
  $handler->display->display_options['fields']['field_event_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_event_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_speaker']['alter']['text'] = '<strong>[field_event_speaker]</strong>';
  $handler->display->display_options['fields']['field_event_speaker']['element_label_colon'] = FALSE;
  /* Field: Content: Speaker Organisation */
  $handler->display->display_options['fields']['field_event_speaker_organisation']['id'] = 'field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['table'] = 'field_data_field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['field'] = 'field_event_speaker_organisation';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['label'] = 'Presenter';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_speaker_organisation']['alter']['text'] = '[field_event_speaker]<br />
[field_event_speaker_organisation]<br />
<br />
<em>[field_event_type]</em>';
  $handler->display->display_options['fields']['field_event_speaker_organisation']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<em>[title]</em>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Document uploader */
  $handler->display->display_options['fields']['field_event_document']['id'] = 'field_event_document';
  $handler->display->display_options['fields']['field_event_document']['table'] = 'field_data_field_event_document';
  $handler->display->display_options['fields']['field_event_document']['field'] = 'field_event_document';
  $handler->display->display_options['fields']['field_event_document']['label'] = '';
  $handler->display->display_options['fields']['field_event_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_document']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_document']['multi_type'] = 'ul';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_event_detail']['id'] = 'field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['table'] = 'field_data_field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['field'] = 'field_event_detail';
  $handler->display->display_options['fields']['field_event_detail']['label'] = '';
  $handler->display->display_options['fields']['field_event_detail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_detail']['alter']['text'] = '[title]<br />
[field_event_detail]';
  $handler->display->display_options['fields']['field_event_detail']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_event_detail']['alter']['preserve_tags'] = '<p><br>';
  $handler->display->display_options['fields']['field_event_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_detail']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_event_detail']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br />
[field_event_detail]';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['alter']['text'] = '<strong>[field_dates]</strong>';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Time and Location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[field_dates]<br />
[field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';

  /* Display: Research Seminars */
  $handler = $view->new_display('page', 'Research Seminars', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research seminars';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<h3>Research seminars archive</h3>
<ul>
<li><a href="/research/seminars-archive">Previous research seminars</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    69 => '69',
    68 => '68',
    66 => '66',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="notice">Event announcements are sent regularly by the School of Languages and Linguistics.<br>If you would like to be added to our list please email <a href="mailto:jeremy.taylor@unimelb.edu.au">Jeremy Taylor</a> with your details.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Conferences, symposia and public lectures archive</h3>
<ul>
<li><a href="/research/conferences-symposia-lectures-archive">Previous Conferences, Symposia and Public Lectures</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<ul>
<li><a href="/about/events-archive">Archived events</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['title'] = 'Archived events';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<ul>
<li><a href="/about/events">Upcoming events</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No archived events were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['path'] = 'about/events-archive';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events archive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Archived Research Seminars */
  $handler = $view->new_display('page', 'Archived Research Seminars', 'page_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<h3>Upcoming research seminars</h3>
<ul>
<li><a href="/research/seminars">Upcoming research seminars</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No archived research seminars were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'research/seminars-archive';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Research seminars archive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['events'] = $view;

  return $export;
}
