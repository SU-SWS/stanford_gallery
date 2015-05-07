<?php
/**
 * @file
 * stanford_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_gal_cntnts|node|stanford_gallery|form';
  $field_group->group_name = 'group_s_gal_cntnts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_gal_cntnts|node|stanford_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_gal_imgs|node|stanford_gallery|form';
  $field_group->group_name = 'group_s_gal_imgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_image_info',
      1 => 'field_s_gallery_view_mode',
      2 => 'field_s_gallery_show_capt',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s-gal-imgs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_gal_imgs|node|stanford_gallery|form'] = $field_group;

  return $export;
}
