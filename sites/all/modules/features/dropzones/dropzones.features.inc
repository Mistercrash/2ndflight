<?php
/**
 * @file
 * dropzones.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dropzones_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dropzones_node_info() {
  $items = array(
    'dropzone' => array(
      'name' => t('Dropzone'),
      'base' => 'node_content',
      'description' => t('A dropzone can be created by any registered user. A registered dropzone can claim it by buying it\'s automatically created product. Registered users can only create classifieds when their "home" dropzone has been claimed. This prevents users with bad intentions from creating fake classifieds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
