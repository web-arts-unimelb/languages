<?php
/**
 * @file
 * Drush plugin to globally search & replace data in ALL text fields.
 *
 * Eg: replace /sites/languages.dev.arts.unimelb.edu.au/files/ with a given
 * path or the default new files dir in all defined text fields.
 */

/**
 * Implements hook_drush_command().
 */
function uom_custom_drush_command() {
  $items['uom-custom-replace'] = array(
    'callback' => 'drush_uom_custom_replace',
    'description' => dt('Replace hardcoded file paths in all content.'),
    'arguments' => array(
      'old-path' => dt('Existing path in the database.'),
      'new-path' => dt('The optional path to update to. If not set, the configure files path will be used.'),
    ),
    'bootstrap' => DRUSH_DRUPAL_BOOTSTRAP,
  );

  return $items;
}

/**
 * Implements hook_hook_drush_command_validate().
 */
function drush_uom_custom_replace_validate() {
  $args = func_get_args();
  if (empty($args[0])) {
    drush_set_error('NO_OLD_PATH', dt('You must specify a path to replace.'));
  }
}

/**
 * Command callback.
 */
function drush_uom_custom_replace() {
  $args = func_get_args();
  $old = $args[0];
  if (empty($args[1])) {
    $new = variable_get('file_public_path', '');
  }
  else {
    $new = $args[1];
  }

  drush_print(dt('Going perform a search & replace on all text fields in all bundles.'));
  drush_print(dt('  "@old" => "@new"', array('@old' => $old, '@new' => $new)));
  drush_print(dt(' '));
  $continue = drush_confirm(dt('There is no undo. Are you sure this is what you want to do?'));
  if (empty($continue)) {
    drush_log(dt('Aborting'), 'warning');
    return 0;
  }

  // Grab all defined fields, then cycle through them and run update queries.
  $fields = field_info_fields();
  foreach ($fields as $field) {
    // Skip fields that aren't provided by the text module.
    if ($field['module'] != 'text') {
      continue;
    }

    // Use (private, naughty) API calls to grab the table and column names.
    $data_table = _field_sql_storage_tablename($field);
    $revision_table = _field_sql_storage_revision_tablename($field);
    $column = _field_sql_storage_columnname($field['field_name'], 'value');

    $bundles = array();
    foreach ($field['bundles'] as $entity => $bundle) {
      $bundles += array_values($bundle);
    }

    drush_log(dt('Processing field @name (@bundles)', array('@name' => $field['field_name'], '@bundles' => implode(', ', $bundles))), 'ok');

    // Update data in FIELD_LOAD_CURRENT.
    $updated = db_update($data_table)
      ->expression($column, "REPLACE(${column}, :old, :new)", array(':old' => $old, ':new' => $new))
      ->execute();
    drush_log(dt('  Updated @bundle.', array('@bundle' => format_plural($updated, '1 bundle', '@count bundles'))), 'ok');

    // Update data in FIELD_LOAD_REVISION.
    $updated = db_update($revision_table)
      ->expression($column, "REPLACE(${column}, :old, :new)", array(':old' => $old, ':new' => $new))
      ->execute();
    drush_log(dt('  Updated @revision.', array('@revision' => format_plural($updated, '1 bundle revision', '@count bundle revisions'))), 'ok');
  }

  return 1;
}
