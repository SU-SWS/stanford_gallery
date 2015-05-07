<?php
/**
 * @file
 * stanford_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Images';
  $handler->display->display_options['css_class'] = 'views-grid-four';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'field_s_gallery_image';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_gallery_image']['id'] = 'field_s_gallery_image';
  $handler->display->display_options['fields']['field_s_gallery_image']['table'] = 'field_data_field_s_gallery_image';
  $handler->display->display_options['fields']['field_s_gallery_image']['field'] = 'field_s_gallery_image';
  $handler->display->display_options['fields']['field_s_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_gallery_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_s_gallery_image']['settings'] = array(
    'colorbox_node_style' => 'large',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_gallery_image_1']['id'] = 'field_s_gallery_image_1';
  $handler->display->display_options['fields']['field_s_gallery_image_1']['table'] = 'field_data_field_s_gallery_image';
  $handler->display->display_options['fields']['field_s_gallery_image_1']['field'] = 'field_s_gallery_image';
  $handler->display->display_options['fields']['field_s_gallery_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_gallery_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_gallery_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_gallery_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_s_gallery_image_1]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '100%';
  $handler->display->display_options['fields']['colorbox']['height'] = '80%';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Gallery (field_s_gallery_reference) */
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['id'] = 'field_s_gallery_reference_target_id';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['table'] = 'field_data_field_s_gallery_reference';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['field'] = 'field_s_gallery_reference_target_id';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_gallery_reference_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_image' => 'stanford_image',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['gallery_images'] = array(
    t('Master'),
    t('Gallery Images'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['gallery_images'] = $view;

  return $export;
}
