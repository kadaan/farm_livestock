<?php
/**
 * @file
 * farm_livestock_eggs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function farm_livestock_eggs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_log_type().
 */
function farm_livestock_eggs_default_log_type() {
  $items = array();
  $items['farm_eggs'] = entity_import('log_type', '{
    "type" : "farm_eggs",
    "label" : "Eggs",
    "weight" : 0,
    "name_pattern" : "Collected [log:field-farm-egg-qty] egg(s)",
    "name_edit" : "0",
    "done" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
