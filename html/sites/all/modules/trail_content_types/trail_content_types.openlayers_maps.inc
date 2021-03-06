<?php
/**
 * @file
 * trail_content_types.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function trail_content_types_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'trailgeofieldformattermap';
  $openlayers_maps->title = 'Trail Geofield Formatter Map';
  $openlayers_maps->description = 'Trail Map Used for Geofield Output';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-83.11157085537552, 35.43381939566359',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'trailhead_locations_2_openlayers_1' => 'trailhead_locations_2_openlayers_1',
          'geofield_formatter' => 0,
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'geofield_formatter' => 'geofield_formatter',
          'google_satellite' => 0,
          'google_hybrid' => 0,
          'google_normal' => 0,
          'trailhead_locations_2_openlayers_1' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'geofield_formatter' => 'geofield_formatter',
      'trailhead_locations_2_openlayers_1' => 'trailhead_locations_2_openlayers_1',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'trailhead_locations_2_openlayers_1' => '0',
      'trailhead_locations_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'greenways' => '0',
      'json' => '0',
      'geojson_feed_page' => '0',
    ),
    'layer_styles' => array(
      'geojson_feed_page' => '0',
      'greenways' => '0',
      'json' => '0',
      'openlayers_geojson_picture_this' => '0',
      'trailhead_locations_openlayers_1' => 'default_marker_black_small',
      'geofield_formatter' => 'default',
      'trailhead_locations_2_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geojson_feed_page' => '0',
      'greenways' => '0',
      'json' => '0',
      'openlayers_geojson_picture_this' => '0',
      'trailhead_locations_openlayers_1' => 'default_marker_black_small',
      'geofield_formatter' => 'default',
      'trailhead_locations_2_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'trailhead_locations_2_openlayers_1' => 'trailhead_locations_2_openlayers_1',
      'geojson_feed_page' => 0,
      'greenways' => 0,
      'json' => 0,
      'openlayers_geojson_picture_this' => 0,
      'trailhead_locations_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 'geofield_formatter',
      'trailhead_locations_2_openlayers_1' => 'trailhead_locations_2_openlayers_1',
      'geojson_feed_page' => 0,
      'greenways' => 0,
      'json' => 0,
      'openlayers_geojson_picture_this' => 0,
      'trailhead_locations_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['trailgeofieldformattermap'] = $openlayers_maps;

  return $export;
}
