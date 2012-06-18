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
    'disciplines' => array(
      'name' => 'Disciplines',
      'machine_name' => 'disciplines',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
