<?php
/**
 * @file
 * permission.edit_own_new_content_type_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own new_content_type content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.new_content_type' => 'content_type.new_content_type',
);

$optional = array();

$modules = array(
  0 => 'node',
);
