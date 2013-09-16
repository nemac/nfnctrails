<?php
/**
 * @file
 * trail_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trail_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'geojson_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GeoJSON Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GeoJSON Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'geofield';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'title';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'title';
  $handler->display->display_options['style_options']['data_source']['bbox_top'] = 'title';
  $handler->display->display_options['style_options']['data_source']['bbox_right'] = 'title';
  $handler->display->display_options['style_options']['data_source']['bbox_bottom'] = 'title';
  $handler->display->display_options['style_options']['data_source']['bbox_left'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = '';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Geofield GeoJSON */
  $handler->display->display_options['fields']['field_geofield_geojson']['id'] = 'field_geofield_geojson';
  $handler->display->display_options['fields']['field_geofield_geojson']['table'] = 'field_data_field_geofield_geojson';
  $handler->display->display_options['fields']['field_geofield_geojson']['field'] = 'field_geofield_geojson';
  $handler->display->display_options['fields']['field_geofield_geojson']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield_geojson']['type'] = 'geofield_geojson';
  $handler->display->display_options['fields']['field_geofield_geojson']['settings'] = array(
    'data' => 'full',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'trail' => 'trail',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'geojson-feed';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'trail' => 'trail',
  );
  /* Filter criterion: Content: Difficulty (field_difficulty) */
  $handler->display->display_options['filters']['field_difficulty_value']['id'] = 'field_difficulty_value';
  $handler->display->display_options['filters']['field_difficulty_value']['table'] = 'field_data_field_difficulty';
  $handler->display->display_options['filters']['field_difficulty_value']['field'] = 'field_difficulty_value';
  $handler->display->display_options['filters']['field_difficulty_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['operator_id'] = 'field_difficulty_value_op';
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['label'] = 'Difficulty (field_difficulty)';
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['operator'] = 'field_difficulty_value_op';
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['identifier'] = 'field_difficulty_value';
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['geojson_feed'] = $view;

  return $export;
}
