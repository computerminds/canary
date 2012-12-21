<?php
/**
 * @file
 * context.global.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'global';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'devel-execute_php' => array(
        'module' => 'devel',
        'delta' => 'execute_php',
        'region' => 'footer',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
