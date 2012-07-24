<?php
/**
 * @file
 * uom_blog_feeds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uom_blog_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      0 => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear rss_feed feeds.
  $permissions['clear rss_feed feeds'] = array(
    'name' => 'clear rss_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import rss_feed feeds.
  $permissions['import rss_feed feeds'] = array(
    'name' => 'import rss_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
