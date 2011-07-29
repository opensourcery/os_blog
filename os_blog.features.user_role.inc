<?php
/**
 * @file
 * os_blog.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function os_blog_user_default_roles() {
  $roles = array();

  // Exported role: blog administrator
  $roles['blog administrator'] = array(
    'name' => 'blog administrator',
    'weight' => '3',
  );

  return $roles;
}
