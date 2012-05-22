<?php
/**
 * @file
 * uom_beverage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uom_beverage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_beverage';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_beverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_beverage';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_beverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_beverage';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_beverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_beverage';
  $strongarm->value = '1';
  $export['node_preview_beverage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_beverage';
  $strongarm->value = 1;
  $export['node_submitted_beverage'] = $strongarm;

  return $export;
}
