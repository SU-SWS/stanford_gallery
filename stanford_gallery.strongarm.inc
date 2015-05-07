<?php
/**
 * @file
 * stanford_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_gallery';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_gallery_pattern';
  $strongarm->value = 'gallery/[node:title]';
  $export['pathauto_node_stanford_gallery_pattern'] = $strongarm;

  return $export;
}
