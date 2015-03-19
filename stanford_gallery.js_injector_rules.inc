<?php
/**
 * @file
 * stanford_gallery.js_injector_rules.inc
 */

/**
 * Implements hook_js_injector_rule().
 */
function stanford_gallery_js_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Colorbox Responsive Modal';
  $rule->admin_description = 'makes the colorbox the overlay responsive';
  $rule->js = 'var cboxOptions = {
  width: \'95%\',
  height: \'95%\',
  maxWidth: \'960px\',
  maxHeight: \'960px\',
}

jQuery(\'.cbox-link\').colorbox(cboxOptions);

jQuery(window).resize(function(){
    jQuery.colorbox.resize({
      width: window.innerWidth > parseInt(cboxOptions.maxWidth) ? cboxOptions.maxWidth : cboxOptions.width,
      height: window.innerHeight > parseInt(cboxOptions.maxHeight) ? cboxOptions.maxHeight : cboxOptions.height
    });
});



jQuery(\'#cboxLoadedContent\').bind(\'cbox_complete\', function(){
        jQuery(\'form input:first\').focus();
});';
  $rule->position = 'header';
  $rule->preprocess = 0;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'gallery/*';
  $export['Colorbox Responsive Modal'] = $rule;

  return $export;
}
