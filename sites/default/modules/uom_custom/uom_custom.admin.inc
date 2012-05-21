<?php
/**
 * @file
 */

/**
 * Settings form for UoM custom module.
 */
function uom_custom_admin_settings() {
  $form['uom-staff-roles'] = array(
    '#title' => t('Staff Roles'),
    '#description' => t('Select the Drupal roles that have an associated staff profile. Staff members will see a staff profile link on their user account page for each of these roles that they are a member of.'),
    '#type' => 'checkboxes',
    '#options' => user_roles(TRUE),
    '#default_value' => variable_get('uom-staff-roles', array()),
  );

  return system_settings_form($form);
}
