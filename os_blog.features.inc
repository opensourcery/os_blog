<?php
/**
 * @file
 * os_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os_blog_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Blog posts can be used to publish articles, information and press releases; highlights in external media; or feature upcoming events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
