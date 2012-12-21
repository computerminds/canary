<?php
/**
 * @file
 * permission.create_new_content_type_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create new_content_type content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.new_content_type' => 'content_type.new_content_type',
);

$optional = array();

$modules = array(
  0 => 'node',
);
