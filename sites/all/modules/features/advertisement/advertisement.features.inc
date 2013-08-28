<?php
/**
 * @file
 * advertisement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function advertisement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function advertisement_node_info() {
  $items = array(
    'advertisement_ad' => array(
      'name' => t('Advertisement ad'),
      'base' => 'node_content',
      'description' => t('An advertisement ad can be published through advertisement ad campaigns. It will be shown wherever attached relations occur. An advertisement ad will automatically be published whenever there is an active advertisement campaign ongoing that has referenced the advertisement ad. If no campaigns are referencing the advertisment ad it will be unpublished.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'advertisement_ad_campaign' => array(
      'name' => t('Advertisement ad campaign'),
      'base' => 'node_content',
      'description' => t('An advertisement ad campaign contains advertisement ad items. These campaigns can be published as long as the owner has sufficient credits. An advertisement ad campaign owner can run a campaign forever or between to user defined dates. When the campaign is unpublished because of insufficient credits or the campaign has reached its end, it will remove the advertisement ad from it\'s references.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
