<?php
/**
 * @file
 */

/**
 * Settings form for UoM custom module.
 */
function uom_custom_admin_settings() {
  $form['uom-staff-roles'] = array(
    '#title' => t('Enable customised user profile pages for roles'),
    '#description' => t(
		'
			<p>If a role is selected, this means a customised profile page is available for the role.</p>

			<p>Example: to create a customized profile page for professor Jane<p/>
			<ul>
				<li>A customised profile page should be available for the role <strong>professional staff</strong>.</li>
				<li><strong>!view</strong> have been created for customised profile pages already. These views are displayed in a <strong>!panel</strong> using <strong>!quicktabs</strong>.</li>
				<li>Jane has a role called <strong>professional staff</strong>.</li>
				<li>When Jane logs in, she will see her customized profile.</li>
			</ul>
		',
		array(
			'!view' => l('Views', 'admin/structure/views/view/profiles'),
			'!panel' => l('Panel', 'admin/structure/pages/nojs/operation/user_view/handlers/user_view_panel_context/content'),
			'!quicktabs' => l('Quick Tabs', 'admin/structure/quicktabs/manage/staff_profile/edit')
		)
	),
    '#type' => 'checkboxes',
    '#options' => user_roles(TRUE),
    '#default_value' => variable_get('uom-staff-roles', array()),
  );

  return system_settings_form($form);
}
