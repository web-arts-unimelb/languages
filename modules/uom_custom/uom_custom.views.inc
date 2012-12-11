<?php
/**
 * @file
 * Views hooks for the uom_custom module.
 */

/**
 * Implements hook_views_pre_render().
 *
 * @TODO: Seed the replacements array from the stringoverrides module.
 */
function uom_custom_views_pre_render(&$view) {
  $replacements = array(
    'Linguistics and applied linguistics staff' => 'Linguistics and Applied Linguistics staff',
    'Esl staff' => 'ESL staff',
  );

  // Just fixup all taxo terms. Really.
  $disciplines = taxonomy_get_tree(8);
  foreach ($disciplines as $term) {
    $replacements[$term->name] = $replcements[strtr($term->name, array(' ' => '-'))] = t('@description staff', array('@description' => strip_tags($term->description)));
  }

  // Fix the capitalisation on some view titles.
  if ($view->name == 'staff' && !empty($view->build_info['substitutions'])) {
    foreach ($view->build_info['substitutions'] as $key => $value) {
      $view->build_info['substitutions'][$key] = strtr($value, $replacements);
    }
  }
}

/**
 * Implements hook_views_data().
 */
function uom_custom_views_data() {
  $data['acl_user'] = array(

  );

  $data['acl_node'] = array(

  );
}
