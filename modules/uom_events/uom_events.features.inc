<?php
/**
 * @file
 * uom_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uom_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uom_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uom_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An <em>Event</em> is limited in time by a start and end date and time. Events can be listed on the site\'s font page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
