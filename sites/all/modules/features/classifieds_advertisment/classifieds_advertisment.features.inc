<?php
/**
 * @file
 * classifieds_advertisment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function classifieds_advertisment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function classifieds_advertisment_node_info() {
  $items = array(
    'classified' => array(
      'name' => t('Classified'),
      'base' => 'node_content',
      'description' => t('A classified groups classified items into one single classified. It will inherit all relations from the classifieds it is referencing. By default a classified will be indexed as one group with all it\'s related terms. If the user wishes to sell the classified items seperately he/she can provide a discount on the main classified. This will enable the seperate items to be indexed individually. Otherwise site visitors will always end up on the main classifieds page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'classified_item' => array(
      'name' => t('Classified item'),
      'base' => 'node_content',
      'description' => t('A classified item is defined by it\'s relation, price and picture. These are grouped by the main classified content type. They can be sold seperately as well, when a discount is provided, as explained above. Classfied items are the main source for categorising classifieds. They respectivily have effect on the display location of advertisement ads.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
