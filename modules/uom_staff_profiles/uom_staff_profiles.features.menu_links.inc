<?php
/**
 * @file
 * uom_staff_profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uom_staff_profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:about/staff/academic-administrators
  $menu_links['main-menu:about/staff/academic-administrators'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/staff/academic-administrators',
    'router_path' => 'about/staff/academic-administrators',
    'link_title' => 'Academic Administrators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/100',
  );
  // Exported menu link: main-menu:about/staff/academic-staff
  $menu_links['main-menu:about/staff/academic-staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/staff/academic-staff',
    'router_path' => 'about/staff/academic-staff',
    'link_title' => 'Academic Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/100',
  );
  // Exported menu link: main-menu:about/staff/fellows
  $menu_links['main-menu:about/staff/fellows'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/staff/fellows',
    'router_path' => 'about/staff/fellows',
    'link_title' => 'Fellows',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/100',
  );
  // Exported menu link: main-menu:about/staff/professional-staff
  $menu_links['main-menu:about/staff/professional-staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/staff/professional-staff',
    'router_path' => 'about/staff/professional-staff',
    'link_title' => 'Professional Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/100',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Administrators');
  t('Academic Staff');
  t('Fellows');
  t('Professional Staff');


  return $menu_links;
}
