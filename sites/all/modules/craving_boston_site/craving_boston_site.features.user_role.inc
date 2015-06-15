<?php
/**
 * @file
 * craving_boston_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function craving_boston_site_user_default_roles() {
  $roles = array();

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  // Exported role: site administrator.
  $roles['site administrator'] = array(
    'name' => 'site administrator',
    'weight' => 2,
  );

  return $roles;
}
