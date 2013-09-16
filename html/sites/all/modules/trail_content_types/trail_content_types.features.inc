<?php
/**
 * @file
 * trail_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trail_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function trail_content_types_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function trail_content_types_node_info() {
  $items = array(
    'trail' => array(
      'name' => t('Trail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trail_system' => array(
      'name' => t('Trail System'),
      'base' => 'node_content',
      'description' => t('Trail System'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trailhead' => array(
      'name' => t('trailhead'),
      'base' => 'node_content',
      'description' => t('trailhead'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
