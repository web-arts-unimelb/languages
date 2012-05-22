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
          'weight' => '15',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '26',
        ),
        'contact' => array(
          'weight' => '25',
        ),
        'wysiwyg' => array(
          'weight' => '2',
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
