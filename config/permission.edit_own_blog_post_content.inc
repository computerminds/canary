<?php
/**
 * @file
 * permission.edit_own_blog_post_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own blog_post content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.blog_post' => 'content_type.blog_post',
);

$optional = array();

$modules = array(
  0 => 'node',
);
