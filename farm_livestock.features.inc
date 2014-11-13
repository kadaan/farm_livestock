<?php
/**
 * @file
 * farm_livestock.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_livestock_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_farm_asset_type().
 */
function farm_livestock_default_farm_asset_type() {
  $items = array();
  $items['animal'] = entity_import('farm_asset_type', '{
    "type" : "animal",
    "label" : "Animal",
    "weight" : 0,
    "rdf_mapping" : []
  }');
  return $items;
}