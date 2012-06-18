<?php
/**
 * @file
 */

/**
 * Settings form for UoM custom module.
 */
function uom_custom_admin_settings() {
  $form['uom-staff-roles'] = array(
    '#title' => t('Enable customized user profile page for a role'),
    '#description' => t(
		'
			<p>If a role is selected, this means a customized profile page is available for the role.</p>

			<p>Example: to create a customized profile page for professor Jane<p/>
			<ul>			
				<li>A customized profile page should be available for the role <strong>professional staff</strong>.</li>
				<li>A <strong>View</strong> has been created for the customized profile page already.</li>
				<li>Jane has a role called <strong>professional staff</strong>.</li>
				<li>When Jane logs in, she will see a link to her customized profile.</li>
			</ul>
		'
	),
    '#type' => 'checkboxes',
    '#options' => user_roles(TRUE),
    '#default_value' => variable_get('uom-staff-roles', array()),
  );

  return system_settings_form($form);
}
