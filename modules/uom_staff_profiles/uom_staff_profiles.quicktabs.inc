<?php
/**
 * @file
 * uom_staff_profiles.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function uom_staff_profiles_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'staff_profile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Staff Profile';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'profiles',
      'display' => 'academic_staff',
      'args' => '%1',
      'title' => 'Academic Staff Profile',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'profiles',
      'display' => 'academic_staff_bibliography',
      'args' => '%1',
      'title' => 'Bibliography',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'profiles',
      'display' => 'professional_staff',
      'args' => '%1',
      'title' => 'Professional Staff Profile',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Staff Profile');
  t('Bibliography');
  t('Professional Staff Profile');
  t('Staff Profile');

  $export['staff_profile'] = $quicktabs;

  return $export;
}
