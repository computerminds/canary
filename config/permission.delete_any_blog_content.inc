<?php
/**
 * @file
 * permission.delete_any_blog_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => NULL,
  'roles' => array(),
);

$dependencies = array(
  'content_type.blog' => 'content_type.blog',
);

$optional = array();

$modules = array(
  0 => '',
);
