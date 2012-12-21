<?php
/**
 * @file
 * permission.delete_any_new_content_type_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any new_content_type content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.new_content_type' => 'content_type.new_content_type',
);

$optional = array();

$modules = array(
  0 => 'node',
);
