<?php
/**
 * @file
 * uom_staff_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function uom_staff_profiles_user_default_roles() {
  $roles = array();

  // Exported role: academic staff.
  $roles['academic staff'] = array(
    'name' => 'academic staff',
    'weight' => '3',
  );

  // Exported role: professional staff.
  $roles['professional staff'] = array(
    'name' => 'professional staff',
    'weight' => '2',
  );

  return $roles;
}
