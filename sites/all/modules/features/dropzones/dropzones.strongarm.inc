<?php
/**
 * @file
 * dropzones.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dropzones_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dropzone';
  $strongarm->value = 0;
  $export['comment_anonymous_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dropzone';
  $strongarm->value = 1;
  $export['comment_default_mode_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dropzone';
  $strongarm->value = '50';
  $export['comment_default_per_page_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dropzone';
  $strongarm->value = '1';
  $export['comment_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dropzone';
  $strongarm->value = 1;
  $export['comment_form_location_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dropzone';
  $strongarm->value = '1';
  $export['comment_preview_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dropzone';
  $strongarm->value = 1;
  $export['comment_subject_field_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__dropzone';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'product_list' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'product_list' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
        ),
        'product:title_field' => array(
          'product_list' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dropzone';
  $strongarm->value = '0';
  $export['language_content_type_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_dropzone';
  $strongarm->value = array();
  $export['menu_options_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_dropzone';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dropzone';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dropzone';
  $strongarm->value = '1';
  $export['node_preview_dropzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dropzone';
  $strongarm->value = 0;
  $export['node_submitted_dropzone'] = $strongarm;

  return $export;
}
