<?php
/**
 * @file
 * uom_staff_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uom_staff_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_awards_and_grants|user|user|form';
  $field_group->group_name = 'group_awards_and_grants';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Awards and grants',
    'weight' => '20',
    'children' => array(
      0 => 'field_awards_and_grants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Awards and grants',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_awards_and_grants|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibliography_link|user|user|form';
  $field_group->group_name = 'group_bibliography_link';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bibliography link',
    'weight' => '23',
    'children' => array(
      0 => 'field_bibliography_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bibliography link',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_bibliography_link|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibliography|user|user|form';
  $field_group->group_name = 'group_bibliography';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bibliography',
    'weight' => '24',
    'children' => array(
      0 => 'field_bibliography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bibliography',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_bibliography|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography|user|user|form';
  $field_group->group_name = 'group_biography';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '17',
    'children' => array(
      0 => 'field_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Biography',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_biography|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentations|user|user|form';
  $field_group->group_name = 'group_presentations';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presentations',
    'weight' => '22',
    'children' => array(
      0 => 'field_presentations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Presentations',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_presentations|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|user|user|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '19',
    'children' => array(
      0 => 'field_publications',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publications',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_publications|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_interest|user|user|form';
  $field_group->group_name = 'group_research_interest';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research interests/areas of supervision',
    'weight' => '16',
    'children' => array(
      0 => 'field_research_interest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research interests/areas of supervision',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_research_interest|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_projects|user|user|form';
  $field_group->group_name = 'group_research_projects';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research projects',
    'weight' => '18',
    'children' => array(
      0 => 'field_research_projects',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research projects',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_research_projects|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaching|user|user|form';
  $field_group->group_name = 'group_teaching';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaching',
    'weight' => '21',
    'children' => array(
      0 => 'field_teaching',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teaching',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_teaching|user|user|form'] = $field_group;

  return $export;
}
