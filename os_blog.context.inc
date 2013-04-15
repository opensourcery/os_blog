<?php
/**
 * @file
 * os_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_detail';
  $context->description = 'Context for individual blog nodes';
  $context->tag = 'os_blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_listing-block' => array(
          'module' => 'views',
          'delta' => 'blog_listing-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for individual blog nodes');
  t('os_blog');
  $export['blog_detail'] = $context;

  return $export;
}
