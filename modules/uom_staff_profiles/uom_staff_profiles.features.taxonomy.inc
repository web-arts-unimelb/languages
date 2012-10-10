<?php
/**
 * @file
 * uom_staff_profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uom_staff_profiles_taxonomy_default_vocabularies() {
  return array(
    'academic_staff_type' => array(
      'name' => 'Academic staff type',
      'machine_name' => 'academic_staff_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'disciplines' => array(
      'name' => 'Disciplines',
      'machine_name' => 'disciplines',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'org_unit' => array(
      'name' => 'Organisation unit',
      'machine_name' => 'org_unit',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
