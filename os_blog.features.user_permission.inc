<?php
/**
 * @file
 * os_blog.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function os_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog content
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
  );

  // Exported permission: delete any blog content
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
  );

  // Exported permission: delete own blog content
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any blog content
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
  );

  // Exported permission: edit own blog content
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
