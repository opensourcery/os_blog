<?php

/**
 * Implementation of hook_content_default_fields().
 */
function os_blog_content_default_fields() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function os_blog_context_default_contexts() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_blog_ctools_plugin_api() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function os_blog_imagecache_default_presets() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function os_blog_node_info() {
  module_load_include('inc', 'os_blog', 'os_blog.features.node');
  $args = func_get_args();
  return call_user_func_array('_os_blog_node_info', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function os_blog_default_page_manager_pages() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function os_blog_user_default_permissions() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function os_blog_strongarm() {
  module_load_include('inc', 'os_blog', 'os_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_blog_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function os_blog_views_default_views() {
  module_load_include('inc', 'os_blog', 'os_blog.features.views');
  $args = func_get_args();
  return call_user_func_array('_os_blog_views_default_views', $args);
}
