<?php
/**
 * @file
 * uom_beverage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uom_beverage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uom_beverage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uom_beverage_node_info() {
  $items = array(
    'beverage' => array(
      'name' => t('Beverage'),
      'base' => 'node_content',
      'description' => t('A beverage is a delicious liquid for drinking. Add many, drink them all.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
