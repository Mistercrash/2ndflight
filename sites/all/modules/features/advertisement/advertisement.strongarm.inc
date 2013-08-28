<?php
/**
 * @file
 * advertisement.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function advertisement_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_advertisement_ad';
  $strongarm->value = '1';
  $export['comment_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_advertisement_ad_campaign';
  $strongarm->value = '1';
  $export['comment_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_advertisement_ad';
  $strongarm->value = 0;
  $export['comment_anonymous_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_advertisement_ad_campaign';
  $strongarm->value = 0;
  $export['comment_anonymous_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_advertisement_ad';
  $strongarm->value = 1;
  $export['comment_default_mode_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_advertisement_ad_campaign';
  $strongarm->value = 1;
  $export['comment_default_mode_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_advertisement_ad';
  $strongarm->value = '50';
  $export['comment_default_per_page_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_advertisement_ad_campaign';
  $strongarm->value = '50';
  $export['comment_default_per_page_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_advertisement_ad';
  $strongarm->value = 1;
  $export['comment_form_location_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_advertisement_ad_campaign';
  $strongarm->value = 1;
  $export['comment_form_location_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_advertisement_ad';
  $strongarm->value = '1';
  $export['comment_preview_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_advertisement_ad_campaign';
  $strongarm->value = '1';
  $export['comment_preview_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_advertisement_ad';
  $strongarm->value = 1;
  $export['comment_subject_field_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_advertisement_ad_campaign';
  $strongarm->value = 1;
  $export['comment_subject_field_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__advertisement_ad';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__advertisement_ad_campaign';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_advertisement_ad';
  $strongarm->value = '0';
  $export['language_content_type_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_advertisement_ad_campaign';
  $strongarm->value = '0';
  $export['language_content_type_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advertisement_ad';
  $strongarm->value = array();
  $export['menu_options_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advertisement_ad_campaign';
  $strongarm->value = array();
  $export['menu_options_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advertisement_ad';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advertisement_ad_campaign';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advertisement_ad';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advertisement_ad_campaign';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advertisement_ad';
  $strongarm->value = '0';
  $export['node_preview_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advertisement_ad_campaign';
  $strongarm->value = '0';
  $export['node_preview_advertisement_ad_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advertisement_ad';
  $strongarm->value = 0;
  $export['node_submitted_advertisement_ad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advertisement_ad_campaign';
  $strongarm->value = 0;
  $export['node_submitted_advertisement_ad_campaign'] = $strongarm;

  return $export;
}
