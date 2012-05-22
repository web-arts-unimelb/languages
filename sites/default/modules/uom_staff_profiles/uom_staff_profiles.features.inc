<?php
/**
 * @file
 * uom_staff_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uom_staff_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uom_staff_profiles_views_api() {
  return array("version" => "3.0");
}
