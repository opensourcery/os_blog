<?php
/**
 * @file
 * os_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog_post content.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any blog_post content.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own blog_post content.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any blog_post content.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own blog_post content.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
