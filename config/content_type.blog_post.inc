<?php
/**
 * @file
 * content_type.blog_post.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'blog_post',
  'name' => 'Blog post',
  'description' => 'A simple blog post content type.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__blog_post' => 'variable.field_bundle_settings_node__blog_post',
  'variable.node_options_blog_post' => 'variable.node_options_blog_post',
  'variable.node_preview_blog_post' => 'variable.node_preview_blog_post',
  'variable.node_submitted_blog_post' => 'variable.node_submitted_blog_post',
);

$optional = array(
  'field.node.body.blog_post' => 'field.node.body.blog_post',
  'field.node.field_new_field.blog_post' => 'field.node.field_new_field.blog_post',
  'permission.create_blog_post_content' => 'permission.create_blog_post_content',
  'permission.edit_own_blog_post_content' => 'permission.edit_own_blog_post_content',
  'permission.edit_any_blog_post_content' => 'permission.edit_any_blog_post_content',
  'permission.delete_own_blog_post_content' => 'permission.delete_own_blog_post_content',
  'permission.delete_any_blog_post_content' => 'permission.delete_any_blog_post_content',
);

$modules = array(
  0 => 'node',
);
