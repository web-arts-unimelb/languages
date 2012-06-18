<?php
/**
 * @file
 * uom_staff_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uom_staff_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_account_document.
  $permissions['create field_account_document'] = array(
    'name' => 'create field_account_document',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_account_image.
  $permissions['create field_account_image'] = array(
    'name' => 'create field_account_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_awards_and_grants.
  $permissions['create field_awards_and_grants'] = array(
    'name' => 'create field_awards_and_grants',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_bibliography.
  $permissions['create field_bibliography'] = array(
    'name' => 'create field_bibliography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_biography.
  $permissions['create field_biography'] = array(
    'name' => 'create field_biography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_discipline.
  $permissions['create field_discipline'] = array(
    'name' => 'create field_discipline',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_event_document.
  $permissions['create field_event_document'] = array(
    'name' => 'create field_event_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_event_image.
  $permissions['create field_event_image'] = array(
    'name' => 'create field_event_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_page_document.
  $permissions['create field_page_document'] = array(
    'name' => 'create field_page_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_page_image.
  $permissions['create field_page_image'] = array(
    'name' => 'create field_page_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_presentations.
  $permissions['create field_presentations'] = array(
    'name' => 'create field_presentations',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_profile_image.
  $permissions['create field_profile_image'] = array(
    'name' => 'create field_profile_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_publications.
  $permissions['create field_publications'] = array(
    'name' => 'create field_publications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_qualifications.
  $permissions['create field_qualifications'] = array(
    'name' => 'create field_qualifications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_research_interest.
  $permissions['create field_research_interest'] = array(
    'name' => 'create field_research_interest',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_research_projects.
  $permissions['create field_research_projects'] = array(
    'name' => 'create field_research_projects',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_responsibilities.
  $permissions['create field_responsibilities'] = array(
    'name' => 'create field_responsibilities',
    'roles' => array(
      0 => 'admin',
      1 => 'professional staff',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_teaching.
  $permissions['create field_teaching'] = array(
    'name' => 'create field_teaching',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_account_document.
  $permissions['edit field_account_document'] = array(
    'name' => 'edit field_account_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_account_image.
  $permissions['edit field_account_image'] = array(
    'name' => 'edit field_account_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_awards_and_grants.
  $permissions['edit field_awards_and_grants'] = array(
    'name' => 'edit field_awards_and_grants',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_bibliography.
  $permissions['edit field_bibliography'] = array(
    'name' => 'edit field_bibliography',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_biography.
  $permissions['edit field_biography'] = array(
    'name' => 'edit field_biography',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_discipline.
  $permissions['edit field_discipline'] = array(
    'name' => 'edit field_discipline',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_event_document.
  $permissions['edit field_event_document'] = array(
    'name' => 'edit field_event_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_event_image.
  $permissions['edit field_event_image'] = array(
    'name' => 'edit field_event_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_page_document.
  $permissions['edit field_page_document'] = array(
    'name' => 'edit field_page_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_page_image.
  $permissions['edit field_page_image'] = array(
    'name' => 'edit field_page_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_presentations.
  $permissions['edit field_presentations'] = array(
    'name' => 'edit field_presentations',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_image.
  $permissions['edit field_profile_image'] = array(
    'name' => 'edit field_profile_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_publications.
  $permissions['edit field_publications'] = array(
    'name' => 'edit field_publications',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_qualifications.
  $permissions['edit field_qualifications'] = array(
    'name' => 'edit field_qualifications',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_research_interest.
  $permissions['edit field_research_interest'] = array(
    'name' => 'edit field_research_interest',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_research_projects.
  $permissions['edit field_research_projects'] = array(
    'name' => 'edit field_research_projects',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_responsibilities.
  $permissions['edit field_responsibilities'] = array(
    'name' => 'edit field_responsibilities',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_teaching.
  $permissions['edit field_teaching'] = array(
    'name' => 'edit field_teaching',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_account_document.
  $permissions['edit own field_account_document'] = array(
    'name' => 'edit own field_account_document',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_account_image.
  $permissions['edit own field_account_image'] = array(
    'name' => 'edit own field_account_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_awards_and_grants.
  $permissions['edit own field_awards_and_grants'] = array(
    'name' => 'edit own field_awards_and_grants',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bibliography.
  $permissions['edit own field_bibliography'] = array(
    'name' => 'edit own field_bibliography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_biography.
  $permissions['edit own field_biography'] = array(
    'name' => 'edit own field_biography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_discipline.
  $permissions['edit own field_discipline'] = array(
    'name' => 'edit own field_discipline',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_event_document.
  $permissions['edit own field_event_document'] = array(
    'name' => 'edit own field_event_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_event_image.
  $permissions['edit own field_event_image'] = array(
    'name' => 'edit own field_event_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_page_document.
  $permissions['edit own field_page_document'] = array(
    'name' => 'edit own field_page_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_page_image.
  $permissions['edit own field_page_image'] = array(
    'name' => 'edit own field_page_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_presentations.
  $permissions['edit own field_presentations'] = array(
    'name' => 'edit own field_presentations',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_image.
  $permissions['edit own field_profile_image'] = array(
    'name' => 'edit own field_profile_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_publications.
  $permissions['edit own field_publications'] = array(
    'name' => 'edit own field_publications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_qualifications.
  $permissions['edit own field_qualifications'] = array(
    'name' => 'edit own field_qualifications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_research_interest.
  $permissions['edit own field_research_interest'] = array(
    'name' => 'edit own field_research_interest',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_research_projects.
  $permissions['edit own field_research_projects'] = array(
    'name' => 'edit own field_research_projects',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_responsibilities.
  $permissions['edit own field_responsibilities'] = array(
    'name' => 'edit own field_responsibilities',
    'roles' => array(
      0 => 'admin',
      1 => 'professional staff',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_teaching.
  $permissions['edit own field_teaching'] = array(
    'name' => 'edit own field_teaching',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_account_document.
  $permissions['view field_account_document'] = array(
    'name' => 'view field_account_document',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_account_image.
  $permissions['view field_account_image'] = array(
    'name' => 'view field_account_image',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_awards_and_grants.
  $permissions['view field_awards_and_grants'] = array(
    'name' => 'view field_awards_and_grants',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_bibliography.
  $permissions['view field_bibliography'] = array(
    'name' => 'view field_bibliography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_biography.
  $permissions['view field_biography'] = array(
    'name' => 'view field_biography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_discipline.
  $permissions['view field_discipline'] = array(
    'name' => 'view field_discipline',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'professional staff',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_event_document.
  $permissions['view field_event_document'] = array(
    'name' => 'view field_event_document',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_event_image.
  $permissions['view field_event_image'] = array(
    'name' => 'view field_event_image',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_page_document.
  $permissions['view field_page_document'] = array(
    'name' => 'view field_page_document',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'professional staff',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_page_image.
  $permissions['view field_page_image'] = array(
    'name' => 'view field_page_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'professional staff',
      5 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_presentations.
  $permissions['view field_presentations'] = array(
    'name' => 'view field_presentations',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_image.
  $permissions['view field_profile_image'] = array(
    'name' => 'view field_profile_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_publications.
  $permissions['view field_publications'] = array(
    'name' => 'view field_publications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_qualifications.
  $permissions['view field_qualifications'] = array(
    'name' => 'view field_qualifications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_research_interest.
  $permissions['view field_research_interest'] = array(
    'name' => 'view field_research_interest',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_research_projects.
  $permissions['view field_research_projects'] = array(
    'name' => 'view field_research_projects',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_responsibilities.
  $permissions['view field_responsibilities'] = array(
    'name' => 'view field_responsibilities',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_teaching.
  $permissions['view field_teaching'] = array(
    'name' => 'view field_teaching',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'anonymous user',
      3 => 'authenticated user',
      4 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_account_document.
  $permissions['view own field_account_document'] = array(
    'name' => 'view own field_account_document',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_account_image.
  $permissions['view own field_account_image'] = array(
    'name' => 'view own field_account_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_awards_and_grants.
  $permissions['view own field_awards_and_grants'] = array(
    'name' => 'view own field_awards_and_grants',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bibliography.
  $permissions['view own field_bibliography'] = array(
    'name' => 'view own field_bibliography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_biography.
  $permissions['view own field_biography'] = array(
    'name' => 'view own field_biography',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_discipline.
  $permissions['view own field_discipline'] = array(
    'name' => 'view own field_discipline',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_event_document.
  $permissions['view own field_event_document'] = array(
    'name' => 'view own field_event_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_event_image.
  $permissions['view own field_event_image'] = array(
    'name' => 'view own field_event_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_page_document.
  $permissions['view own field_page_document'] = array(
    'name' => 'view own field_page_document',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_page_image.
  $permissions['view own field_page_image'] = array(
    'name' => 'view own field_page_image',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_presentations.
  $permissions['view own field_presentations'] = array(
    'name' => 'view own field_presentations',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_image.
  $permissions['view own field_profile_image'] = array(
    'name' => 'view own field_profile_image',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_publications.
  $permissions['view own field_publications'] = array(
    'name' => 'view own field_publications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_qualifications.
  $permissions['view own field_qualifications'] = array(
    'name' => 'view own field_qualifications',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_research_interest.
  $permissions['view own field_research_interest'] = array(
    'name' => 'view own field_research_interest',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_research_projects.
  $permissions['view own field_research_projects'] = array(
    'name' => 'view own field_research_projects',
    'roles' => array(
      0 => 'academic staff',
      1 => 'admin',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_responsibilities.
  $permissions['view own field_responsibilities'] = array(
    'name' => 'view own field_responsibilities',
    'roles' => array(
      0 => 'admin',
      1 => 'professional staff',
      2 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_teaching.
  $permissions['view own field_teaching'] = array(
    'name' => 'view own field_teaching',
    'roles' => array(
      0 => 'admin',
      1 => 'site admin',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
