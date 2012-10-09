<?php
/**
 * @file
 * uom_blog_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uom_blog_feeds_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
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
function uom_blog_feeds_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uom_blog_feeds_node_info() {
  $items = array(
    'feed' => array(
      'name' => t('Feed'),
      'base' => 'node_content',
      'description' => t('A <em>feed</em> holds a URL for an RSS feed, which provides <em>feed items</em> for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feed_item' => array(
      'name' => t('Feed Item'),
      'base' => 'node_content',
      'description' => t('A <em>Feed Item</em> is automatically generated from elements in an RSS Feed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
