<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _os_blog_content_default_fields() {
  $fields = array();

  // Exported field: field_blog_images
  $fields[] = array(
    'field_name' => 'field_blog_images',
    'type_name' => 'blog',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '[title-raw]',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'image' => 'image',
        'imagecache_blog-list' => 'imagecache_blog-list',
        'auto' => 0,
        'link' => 0,
        'imagecache_event-list' => 0,
        'imagecache_medium-content' => 0,
        'imagecache_primary-menu' => 0,
        'imagecache_menu_icon' => 0,
      ),
      'insert_default' => 'image',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Image(s)',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  array(
    t('Image(s)'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _os_blog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_archive';
  $context->description = '';
  $context->tag = 'Blog';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog_archive:page' => 'blog_archive:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['blog_archive'] = array(
    t('Blog'),
  );

  $export['blog_archive'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_individual';
  $context->description = '';
  $context->tag = 'Blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_archive-block' => array(
          'module' => 'views',
          'delta' => 'blog_archive-block',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['blog_individual'] = array(
    t('Blog'),
  );

  $export['blog_individual'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_list';
  $context->description = '';
  $context->tag = 'Blog';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog:page_1' => 'blog:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_archive-block' => array(
          'module' => 'views',
          'delta' => 'blog_archive-block',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['blog_list'] = array(
    t('Blog'),
  );

  $export['blog_list'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _os_blog_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _os_blog_imagecache_default_presets() {
  $items = array(
    'blog-list' => array(
      'presetname' => 'blog-list',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '220',
            'height' => '220',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_default_page_manager_pages().
 */
function _os_blog_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_add';
  $page->task = 'page';
  $page->admin_title = 'Blog: new blog post';
  $page->admin_description = '';
  $page->path = 'blog/add';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add new blog post',
    'name' => 'navigation',
    'weight' => '27',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_add_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_add';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'blog',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_add'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_admin';
  $page->task = 'page';
  $page->admin_title = 'Blog: Administer blogs';
  $page->admin_description = '';
  $page->path = 'blog/admin';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer posts',
    'name' => 'navigation',
    'weight' => '42',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_admin_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_admin';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'views_bulk_menu',
    'context_admin_vbo_views_bulk_node_type' => 'blog',
    'context_admin_vbo_views_bulk_published' => 'both',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_admin'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_admin_tags';
  $page->task = 'page';
  $page->admin_title = 'Blog: Administer tags';
  $page->admin_description = '';
  $page->path = 'blog/tags';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer taxonomy',
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer tags',
    'name' => 'navigation',
    'weight' => '77',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_admin_tags_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_admin_tags';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => OS_BLOG_TAGS_VID,
    'context_admin_vocabulary_options' => 'list',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_admin_tags'] = $page;

 return $pages;

}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _os_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments
  $permissions[] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer comments
  $permissions[] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site editor',
    ),
  );

  // Exported permission: post comments
  $permissions[] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions[] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _os_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog';
  $strongarm->value = 2;

  $export['comment_anonymous_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog';
  $strongarm->value = '2';

  $export['comment_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_blog';
  $strongarm->value = '3';

  $export['comment_controls_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog';
  $strongarm->value = '2';

  $export['comment_default_mode_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_blog';
  $strongarm->value = '2';

  $export['comment_default_order_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog';
  $strongarm->value = '50';

  $export['comment_default_per_page_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog';
  $strongarm->value = '1';

  $export['comment_form_location_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog';
  $strongarm->value = '0';

  $export['comment_preview_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog';
  $strongarm->value = '0';

  $export['comment_subject_field_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_blog';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '4',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '3',
  );

  $export['content_extra_weights_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[yyyy]/[mm]/[title-raw]';

  $export['pathauto_node_blog_pattern'] = $strongarm;
  return $export;
}
