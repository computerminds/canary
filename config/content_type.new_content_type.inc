<?php
/**
 * @file
 * content_type.new_content_type.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'new_content_type',
  'name' => 'New content type',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__new_content_type' => 'variable.field_bundle_settings_node__new_content_type',
  'variable.node_options_new_content_type' => 'variable.node_options_new_content_type',
  'variable.node_preview_new_content_type' => 'variable.node_preview_new_content_type',
  'variable.node_submitted_new_content_type' => 'variable.node_submitted_new_content_type',
);

$optional = array(
  'field.node.body.new_content_type' => 'field.node.body.new_content_type',
  'permission.create_new_content_type_content' => 'permission.create_new_content_type_content',
  'permission.edit_own_new_content_type_content' => 'permission.edit_own_new_content_type_content',
  'permission.edit_any_new_content_type_content' => 'permission.edit_any_new_content_type_content',
  'permission.delete_own_new_content_type_content' => 'permission.delete_own_new_content_type_content',
  'permission.delete_any_new_content_type_content' => 'permission.delete_any_new_content_type_content',
);

$modules = array(
  0 => 'node',
);
