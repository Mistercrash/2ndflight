<?php
/**
 * @file
 * advertisement.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function advertisement_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*advertisement_ad_campaign*field_advertisement_ads*node*advertisement_ad*field_advertisement_ad_campaigns';
  $cnr_obj->enabled = 0;
  $export['node*advertisement_ad_campaign*field_advertisement_ads*node*advertisement_ad*field_advertisement_ad_campaigns'] = $cnr_obj;

  return $export;
}
