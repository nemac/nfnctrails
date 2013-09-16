<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */


function nfnc_preprocess_page(&$variables) {

  // add css only on front page
  if ($variables['is_front'] || (array_key_exists('node', $variables) && $variables['node']->nid == 44)) {
    drupal_add_css(drupal_get_path('theme', 'nfnc') . '/css/frontpage.css');
  }

  // add multigraph js on 'trail' nodes
  if (array_key_exists('node', $variables) && $variables['node']->type == 'trail') {
    $theme_path = drupal_get_path('theme', 'nfnc');
    drupal_add_js('var D$ = $, DjQuery = jQuery;', 'inline');
    drupal_add_js($theme_path . '/js/multigraph-min.js', 'file');
    drupal_add_js($theme_path . '/js/multigraph-degrade.js', 'file');
    drupal_add_js('$ = D$; jQuery = DjQuery', 'inline');
  }
}
	


/**
 * Overrides theme_field
 *
 * @param $variables
 *   An associative array containing:
 *   - label_hidden: A boolean indicating to show or hide the field label.
 *   - title_attributes: A string containing the attributes for the title.
 *   - label: The label for the field.
 *   - content_attributes: A string containing the attributes for the content's
 *     div.
 *   - items: An array of field items.
 *   - item_attributes: An array of attributes for each item.
 *   - classes: A string containing the classes for the wrapping div.
 *   - attributes: A string containing the attributes for the wrapping div.
 *
 * @see template_preprocess_field()
 * @see template_process_field()
 * @see field.tpl.php
 *
 * @ingroup themeable
 */
function nfnc_field__field_elevation_mugl__trail($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'multigraph';
    $attributes = '';
    $attributes .= 'data-src="' . base_path() . variable_get('file_public_path', conf_path() . '/files') . '/' . $item['#file']->filename . '"';
    $attributes .= ' data-swf="' . base_path() . drupal_get_path('theme', 'nfnc') . '/flash/Multigraph.swf"';
    $attributes .= ' data-width=445"';
    $attributes .= ' data-height="240"';
    $output .= '<div style="width:445px; height:240px;" class="' . $classes . '"' . $attributes . '></div>';
  }

  return $output;
}
