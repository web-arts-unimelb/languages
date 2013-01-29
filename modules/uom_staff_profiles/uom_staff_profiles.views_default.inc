<?php
/**
 * @file
 * uom_staff_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uom_staff_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profiles';
  $view->description = 'Profiles';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Full publications */
  $handler->display->display_options['fields']['field_bibliography']['id'] = 'field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['table'] = 'field_data_field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['field'] = 'field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['label'] = '';
  $handler->display->display_options['fields']['field_bibliography']['element_label_colon'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Full publications (field_bibliography) */
  $handler->display->display_options['filters']['field_bibliography_value']['id'] = 'field_bibliography_value';
  $handler->display->display_options['filters']['field_bibliography_value']['table'] = 'field_data_field_bibliography';
  $handler->display->display_options['filters']['field_bibliography_value']['field'] = 'field_bibliography_value';
  $handler->display->display_options['filters']['field_bibliography_value']['operator'] = 'not empty';

  /* Display: Profiles */
  $handler = $view->new_display('page', 'Profiles', 'Profiles');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Family name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user-profile/[uid]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_last_name] [picture]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user-profile/[uid]';
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_position']['alter']['text'] = '<div>[field_position]</div>';
  $handler->display->display_options['fields']['field_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_position']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Details';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_type][field_position][field_org_units][field_organisation]';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<div>[field_phone]</div>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_room']['alter']['text'] = '<div>Room: [field_room]</div>';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['text'] = '<div>[field_building]</div>';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_building']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_building']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Contact';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_phone][field_mobile][field_email][field_url][field_room][field_building]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'user-profiles';

  /* Display: User */
  $handler = $view->new_display('page', 'User', 'Profile');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  /* Field: User: Given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Family name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<h3 class="user-profile-title">[field_first_name] [field_last_name]</h3>';
  $handler->display->display_options['fields']['field_last_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_last_name][picture]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_position']['alter']['text'] = '<div>[field_position]</div>
';
  $handler->display->display_options['fields']['field_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_position']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_type][field_position][field_org_units][field_organisation]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<div>Phone: [field_phone]</div>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_room']['alter']['text'] = '<div>Room: [field_room]</div>';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_room']['hide_alter_empty'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_building']['alter']['text'] = '<div>[field_building]</div>';
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_building']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_building']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_phone][field_mobile][field_email][field_url][field_room][field_building]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_postal_address_line_1] [field_postal_address_line_2] [field_city_or_suburb] [field_postcode_or_zip_code] [field_state_or_territory] [field_country]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'user-profile/%';

  /* Display: Academic Staff Profile */
  $handler = $view->new_display('page', 'Academic Staff Profile', 'academic_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Family name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: User: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['label'] = '';
  $handler->display->display_options['fields']['field_discipline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['text'] = '[description]';
  $handler->display->display_options['fields']['field_discipline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path'] = 'staff/academic-staff/[field_discipline]';
  $handler->display->display_options['fields']['field_discipline']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_discipline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discipline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_discipline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_discipline']['group_column'] = 'value';
  /* Field: User: Organisation unit */
  $handler->display->display_options['fields']['field_org_unit']['id'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['table'] = 'field_data_field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['field'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['label'] = '';
  $handler->display->display_options['fields']['field_org_unit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_org_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_org_unit']['alter']['text'] = '[field_org_unit]<br />';
  $handler->display->display_options['fields']['field_org_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_unit']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_org_unit']['delta_offset'] = '0';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: External profile */
  $handler->display->display_options['fields']['field_external_profile']['id'] = 'field_external_profile';
  $handler->display->display_options['fields']['field_external_profile']['table'] = 'field_data_field_external_profile';
  $handler->display->display_options['fields']['field_external_profile']['field'] = 'field_external_profile';
  $handler->display->display_options['fields']['field_external_profile']['label'] = '';
  $handler->display->display_options['fields']['field_external_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_profile']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_profile']['type'] = 'link_url';
  /* Field: User: Image uploader */
  $handler->display->display_options['fields']['field_account_image']['id'] = 'field_account_image';
  $handler->display->display_options['fields']['field_account_image']['table'] = 'field_data_field_account_image';
  $handler->display->display_options['fields']['field_account_image']['field'] = 'field_account_image';
  $handler->display->display_options['fields']['field_account_image']['label'] = '';
  $handler->display->display_options['fields']['field_account_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_account_image']['element_class'] = 'account-images';
  $handler->display->display_options['fields']['field_account_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_account_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_account_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_account_image']['settings'] = array(
    'colorbox_node_style' => 'book_cover',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'profile',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_account_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_account_image']['separator'] = '<br />';
  /* Field: User: Notice */
  $handler->display->display_options['fields']['field_notice']['id'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['table'] = 'field_data_field_notice';
  $handler->display->display_options['fields']['field_notice']['field'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_notice']['alter']['text'] = '<p class="notice">[field_notice]</p>';
  $handler->display->display_options['fields']['field_notice']['element_label_colon'] = FALSE;
  /* Field: User: Qualifications */
  $handler->display->display_options['fields']['field_qualifications']['id'] = 'field_qualifications';
  $handler->display->display_options['fields']['field_qualifications']['table'] = 'field_data_field_qualifications';
  $handler->display->display_options['fields']['field_qualifications']['field'] = 'field_qualifications';
  $handler->display->display_options['fields']['field_qualifications']['label'] = '';
  $handler->display->display_options['fields']['field_qualifications']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_qualifications']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_qualifications']['alter']['text'] = '<h3>Qualifications</h3>
[field_qualifications]';
  $handler->display->display_options['fields']['field_qualifications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qualifications']['hide_empty'] = TRUE;
  /* Field: User: Research interests/areas of supervision */
  $handler->display->display_options['fields']['field_research_interest']['id'] = 'field_research_interest';
  $handler->display->display_options['fields']['field_research_interest']['table'] = 'field_data_field_research_interest';
  $handler->display->display_options['fields']['field_research_interest']['field'] = 'field_research_interest';
  $handler->display->display_options['fields']['field_research_interest']['label'] = '';
  $handler->display->display_options['fields']['field_research_interest']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_interest']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_research_interest']['alter']['text'] = '<h3>Research interests/areas of supervision</h3>
[field_research_interest]';
  $handler->display->display_options['fields']['field_research_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_interest']['hide_empty'] = TRUE;
  /* Field: User: Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_biography']['alter']['text'] = '<h3>Biography</h3>
[field_biography]';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography']['hide_empty'] = TRUE;
  /* Field: User: Research projects */
  $handler->display->display_options['fields']['field_research_projects']['id'] = 'field_research_projects';
  $handler->display->display_options['fields']['field_research_projects']['table'] = 'field_data_field_research_projects';
  $handler->display->display_options['fields']['field_research_projects']['field'] = 'field_research_projects';
  $handler->display->display_options['fields']['field_research_projects']['label'] = '';
  $handler->display->display_options['fields']['field_research_projects']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_projects']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_research_projects']['alter']['text'] = '<h3>Research projects</h3>
[field_research_projects]';
  $handler->display->display_options['fields']['field_research_projects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_projects']['hide_empty'] = TRUE;
  /* Field: User: Selected publications */
  $handler->display->display_options['fields']['field_publications']['id'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['table'] = 'field_data_field_publications';
  $handler->display->display_options['fields']['field_publications']['field'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['label'] = '';
  $handler->display->display_options['fields']['field_publications']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publications']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publications']['alter']['text'] = '<h3>Selected publications</h3>
<div class="account-images">[field_account_image]</div>
[field_publications]';
  $handler->display->display_options['fields']['field_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publications']['hide_empty'] = TRUE;
  /* Field: User: Awards and grants */
  $handler->display->display_options['fields']['field_awards_and_grants']['id'] = 'field_awards_and_grants';
  $handler->display->display_options['fields']['field_awards_and_grants']['table'] = 'field_data_field_awards_and_grants';
  $handler->display->display_options['fields']['field_awards_and_grants']['field'] = 'field_awards_and_grants';
  $handler->display->display_options['fields']['field_awards_and_grants']['label'] = '';
  $handler->display->display_options['fields']['field_awards_and_grants']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_awards_and_grants']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_awards_and_grants']['alter']['text'] = '<h3>Awards and grants</h3>
[field_awards_and_grants]';
  $handler->display->display_options['fields']['field_awards_and_grants']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_awards_and_grants']['hide_empty'] = TRUE;
  /* Field: User: Teaching */
  $handler->display->display_options['fields']['field_teaching']['id'] = 'field_teaching';
  $handler->display->display_options['fields']['field_teaching']['table'] = 'field_data_field_teaching';
  $handler->display->display_options['fields']['field_teaching']['field'] = 'field_teaching';
  $handler->display->display_options['fields']['field_teaching']['label'] = '';
  $handler->display->display_options['fields']['field_teaching']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaching']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaching']['alter']['text'] = '<h3>Teaching</h3>
[field_teaching]';
  $handler->display->display_options['fields']['field_teaching']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaching']['hide_empty'] = TRUE;
  /* Field: User: Presentations */
  $handler->display->display_options['fields']['field_presentations']['id'] = 'field_presentations';
  $handler->display->display_options['fields']['field_presentations']['table'] = 'field_data_field_presentations';
  $handler->display->display_options['fields']['field_presentations']['field'] = 'field_presentations';
  $handler->display->display_options['fields']['field_presentations']['label'] = '';
  $handler->display->display_options['fields']['field_presentations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presentations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentations']['alter']['text'] = '<h3>Presentations</h3>
[field_presentations]';
  $handler->display->display_options['fields']['field_presentations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentations']['hide_empty'] = TRUE;
  /* Field: User: Engagement */
  $handler->display->display_options['fields']['field_engagement']['id'] = 'field_engagement';
  $handler->display->display_options['fields']['field_engagement']['table'] = 'field_data_field_engagement';
  $handler->display->display_options['fields']['field_engagement']['field'] = 'field_engagement';
  $handler->display->display_options['fields']['field_engagement']['label'] = '';
  $handler->display->display_options['fields']['field_engagement']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_engagement']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_engagement']['alter']['text'] = '<h3>Engagement</h3>
[field_engagement]';
  $handler->display->display_options['fields']['field_engagement']['element_label_colon'] = FALSE;
  /* Field: User: Other information */
  $handler->display->display_options['fields']['field_other_information']['id'] = 'field_other_information';
  $handler->display->display_options['fields']['field_other_information']['table'] = 'field_data_field_other_information';
  $handler->display->display_options['fields']['field_other_information']['field'] = 'field_other_information';
  $handler->display->display_options['fields']['field_other_information']['label'] = '';
  $handler->display->display_options['fields']['field_other_information']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_information']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other_information']['alter']['text'] = '<h3>Other information</h3>
[field_other_information]';
  $handler->display->display_options['fields']['field_other_information']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="col-4 first">
<h2>[field_title] [field_first_name] [field_last_name]</h2>
<h5>[field_position]</h5>
[field_discipline]<br />
[field_org_unit]

<strong>Email:</strong> [mail]<br/>
<strong>Location:</strong> [field_room] [field_building]<br/>
<strong>Phone:</strong> [field_phone]<br />
[field_external_profile]
[field_notice]
</div>

<div class="profile_align col-2 last">
[field_profile_image]
</div>

[field_qualifications]
[field_research_interest]
[field_biography]
[field_research_projects]
[field_publications]
[field_awards_and_grants]
[field_teaching]
[field_presentations]
[field_engagement]
[field_other_information]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['path'] = 'user/%/panel/academic';

  /* Display: Bibliography */
  $handler = $view->new_display('page', 'Bibliography', 'academic_staff_bibliography');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Family name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: User: Full publications */
  $handler->display->display_options['fields']['field_bibliography']['id'] = 'field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['table'] = 'field_data_field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['field'] = 'field_bibliography';
  $handler->display->display_options['fields']['field_bibliography']['label'] = '';
  $handler->display->display_options['fields']['field_bibliography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibliography']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-5 first">
<h2>Full publications</h2>
<h5>[field_title] [field_first_name] [field_last_name]</h5>
</div>

<div class="profile_align col-1 last">
[field_profile_image]
</div>

<div class="col-6">
[field_bibliography]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'user/panel/%/bibliography';

  /* Display: Professional Staff Profile */
  $handler = $view->new_display('page', 'Professional Staff Profile', 'professional_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: User: Given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Family name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: Organisation unit */
  $handler->display->display_options['fields']['field_org_unit']['id'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['table'] = 'field_data_field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['field'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['label'] = '';
  $handler->display->display_options['fields']['field_org_unit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_org_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_unit']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_org_unit']['delta_offset'] = '0';
  /* Field: User: Responsibilities */
  $handler->display->display_options['fields']['field_responsibilities']['id'] = 'field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['table'] = 'field_data_field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['field'] = 'field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['label'] = '';
  $handler->display->display_options['fields']['field_responsibilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_responsibilities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_responsibilities']['alter']['text'] = '<h3>Responsibilities</h3>
[field_responsibilities]';
  $handler->display->display_options['fields']['field_responsibilities']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="col-4 first">
<h2>[field_title] [field_first_name] [field_last_name]</h2>
<h5>[field_position]</h5>
[field_org_unit]<br /><br/>

<strong>Email:</strong> [mail]<br/>
<strong>Location:</strong> [field_room] [field_building]<br/>
<strong>Phone:</strong> [field_phone]
</div>

<div class="profile_align col-2 last">
[field_profile_image]
</div>

[field_responsibilities]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'user/%/panel/professional';
  $export['profiles'] = $view;

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_position' => 'field_position',
    'field_building' => 'field_building',
    'field_room' => 'field_room',
    'nothing' => 'nothing',
    'field_discipline' => 'field_discipline',
    'field_phone' => 'field_phone',
    'mail' => 'mail',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_building' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room' => array(
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
    'field_discipline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Sort criterion: User: Family name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    6 => '6',
  );

  /* Display: All Staff */
  $handler = $view->new_display('page', 'All Staff', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: User: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['text'] = '[description]';
  $handler->display->display_options['fields']['field_discipline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path'] = 'staff/academic-staff/[field_discipline]';
  $handler->display->display_options['fields']['field_discipline']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_discipline']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Office';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = ' [field_room] [field_building]';
  /* Field: User: Share profile */
  $handler->display->display_options['fields']['field_share_profile']['id'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['field'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['label'] = '';
  $handler->display->display_options['fields']['field_share_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_share_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    6 => '6',
  );
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'about/staff/all';

  /* Display: Academic Staff */
  $handler = $view->new_display('page', 'Academic Staff', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academic staff';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path'] = 'staff/academic-staff/[field_discipline]';
  $handler->display->display_options['fields']['description']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: User: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['text'] = '[description]';
  $handler->display->display_options['fields']['field_discipline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path'] = 'staff/academic-staff/[field_discipline]';
  $handler->display->display_options['fields']['field_discipline']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_discipline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_discipline']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Office';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_room] [field_building]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Academic staff category (field_academic_staff_type) */
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['id'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['table'] = 'field_data_field_academic_staff_type';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['field'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['value'] = array(
    71 => '71',
  );
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['vocabulary'] = 'academic_staff_type';
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'staff/academic-staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Academic Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Professional staff */
  $handler = $view->new_display('page', 'Professional staff', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional staff';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Organisation unit (field_org_unit) */
  $handler->display->display_options['relationships']['field_org_unit_tid']['id'] = 'field_org_unit_tid';
  $handler->display->display_options['relationships']['field_org_unit_tid']['table'] = 'field_data_field_org_unit';
  $handler->display->display_options['relationships']['field_org_unit_tid']['field'] = 'field_org_unit_tid';
  $handler->display->display_options['relationships']['field_org_unit_tid']['label'] = 'Organisational Unit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: User: Organisation unit */
  $handler->display->display_options['fields']['field_org_unit']['id'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['table'] = 'field_data_field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['field'] = 'field_org_unit';
  $handler->display->display_options['fields']['field_org_unit']['label'] = 'Unit';
  $handler->display->display_options['fields']['field_org_unit']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_org_unit']['alter']['path'] = 'staff/professional-staff/[field_org_unit]';
  $handler->display->display_options['fields']['field_org_unit']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_org_unit']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_org_unit']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_org_unit']['delta_offset'] = '0';
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position_1']['id'] = 'field_position_1';
  $handler->display->display_options['fields']['field_position_1']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position_1']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position_1']['element_label_colon'] = FALSE;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Office';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_room] [field_building]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_org_unit_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Professional Staff for %1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'upper';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  /* Filter criterion: User: Academic staff category (field_academic_staff_type) */
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['id'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['table'] = 'field_data_field_academic_staff_type';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['field'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['value'] = array(
    71 => '71',
  );
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['vocabulary'] = 'academic_staff_type';
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'staff/professional-staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Professional Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Academic Administrators */
  $handler = $view->new_display('page', 'Academic Administrators', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academic administrators';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path'] = 'staff/academic-administrators/[field_discipline]';
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: User: Academic administrator role */
  $handler->display->display_options['fields']['field_academic_admin_role']['id'] = 'field_academic_admin_role';
  $handler->display->display_options['fields']['field_academic_admin_role']['table'] = 'field_data_field_academic_admin_role';
  $handler->display->display_options['fields']['field_academic_admin_role']['field'] = 'field_academic_admin_role';
  $handler->display->display_options['fields']['field_academic_admin_role']['label'] = 'Admin role';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Office';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_room] [field_building]';
  /* Field: User: Share profile */
  $handler->display->display_options['fields']['field_share_profile']['id'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['field'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['label'] = '';
  $handler->display->display_options['fields']['field_share_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_share_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Administrative %1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Academic staff category (field_academic_staff_type) */
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['id'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['table'] = 'field_data_field_academic_staff_type';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['field'] = 'field_academic_staff_type_tid';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_staff_type_tid']['vocabulary'] = 'academic_staff_type';
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'staff/academic-administrators';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Academic Administrators';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Fellows */
  $handler = $view->new_display('page', 'Fellows', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fellows';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: User: Building */
  $handler->display->display_options['fields']['field_building']['id'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['table'] = 'field_data_field_building';
  $handler->display->display_options['fields']['field_building']['field'] = 'field_building';
  $handler->display->display_options['fields']['field_building']['label'] = '';
  $handler->display->display_options['fields']['field_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building']['element_label_colon'] = FALSE;
  /* Field: User: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: User: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path'] = 'staff/fellows/[field_discipline]';
  $handler->display->display_options['fields']['field_discipline']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_discipline']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'uom_html5_phone_link';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Office';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_building] [field_room]';
  /* Field: User: Share profile */
  $handler->display->display_options['fields']['field_share_profile']['id'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['field'] = 'field_share_profile';
  $handler->display->display_options['fields']['field_share_profile']['label'] = '';
  $handler->display->display_options['fields']['field_share_profile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_share_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1 Fellows';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Share profile (field_share_profile) */
  $handler->display->display_options['filters']['field_share_profile_value']['id'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['table'] = 'field_data_field_share_profile';
  $handler->display->display_options['filters']['field_share_profile_value']['field'] = 'field_share_profile_value';
  $handler->display->display_options['filters']['field_share_profile_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'staff/fellows';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Fellows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Notices: Academic Staff */
  $handler = $view->new_display('attachment', 'Notices: Academic Staff', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'realname' => 'realname',
    'field_notice' => 'field_notice',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Discipline (field_discipline) */
  $handler->display->display_options['relationships']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['relationships']['field_discipline_tid']['label'] = 'Discipline';
  $handler->display->display_options['relationships']['field_discipline_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['label'] = '';
  $handler->display->display_options['fields']['field_discipline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_discipline']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: User: Notice */
  $handler->display->display_options['fields']['field_notice']['id'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['table'] = 'field_data_field_notice';
  $handler->display->display_options['fields']['field_notice']['field'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_discipline_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    6 => '6',
  );
  /* Filter criterion: User: Notice (field_notice) */
  $handler->display->display_options['filters']['field_notice_value']['id'] = 'field_notice_value';
  $handler->display->display_options['filters']['field_notice_value']['table'] = 'field_data_field_notice';
  $handler->display->display_options['filters']['field_notice_value']['field'] = 'field_notice_value';
  $handler->display->display_options['filters']['field_notice_value']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Notices: Professional Staff */
  $handler = $view->new_display('attachment', 'Notices: Professional Staff', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'realname' => 'realname',
    'field_notice' => 'field_notice',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Organisation unit (field_org_unit) */
  $handler->display->display_options['relationships']['field_org_unit_tid']['id'] = 'field_org_unit_tid';
  $handler->display->display_options['relationships']['field_org_unit_tid']['table'] = 'field_data_field_org_unit';
  $handler->display->display_options['relationships']['field_org_unit_tid']['field'] = 'field_org_unit_tid';
  $handler->display->display_options['relationships']['field_org_unit_tid']['label'] = 'Organisational Unit';
  $handler->display->display_options['relationships']['field_org_unit_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Staff';
  /* Field: User: Notice */
  $handler->display->display_options['fields']['field_notice']['id'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['table'] = 'field_data_field_notice';
  $handler->display->display_options['fields']['field_notice']['field'] = 'field_notice';
  $handler->display->display_options['fields']['field_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_org_unit_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  /* Filter criterion: User: Notice (field_notice) */
  $handler->display->display_options['filters']['field_notice_value']['id'] = 'field_notice_value';
  $handler->display->display_options['filters']['field_notice_value']['table'] = 'field_data_field_notice';
  $handler->display->display_options['filters']['field_notice_value']['field'] = 'field_notice_value';
  $handler->display->display_options['filters']['field_notice_value']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['staff'] = $view;

  return $export;
}
