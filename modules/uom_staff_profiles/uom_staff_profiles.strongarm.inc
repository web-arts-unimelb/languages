<?php
/**
 * @file
 * uom_staff_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uom_staff_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '21',
        ),
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '32',
        ),
        'contact' => array(
          'weight' => '25',
        ),
        'wysiwyg' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = '[user:uom-staff-type]/[user:field-first-name]-[user:field-last-name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field-title] [user:field-first-name] [user:field_last_name]';
  $export['realname_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uom-staff-roles';
  $strongarm->value = array(
    7 => '7',
    6 => '6',
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $export['uom-staff-roles'] = $strongarm;

  return $export;
}
