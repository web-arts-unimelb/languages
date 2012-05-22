<?php
/**
 * @file
 * uom_beverage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uom_beverage_user_default_permissions() {
  $permissions = array();

  // Exported permission: create beverage content.
  $permissions['create beverage content'] = array(
    'name' => 'create beverage content',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any beverage content.
  $permissions['delete any beverage content'] = array(
    'name' => 'delete any beverage content',
    'roles' => array(
      0 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own beverage content.
  $permissions['delete own beverage content'] = array(
    'name' => 'delete own beverage content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any beverage content.
  $permissions['edit any beverage content'] = array(
    'name' => 'edit any beverage content',
    'roles' => array(
      0 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own beverage content.
  $permissions['edit own beverage content'] = array(
    'name' => 'edit own beverage content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
