<?php
/**
 * @file
 * bosa_new_product.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function bosa_new_product_commerce_product_default_types() {
  $items = array(
    'bosa_produkt' => array(
      'type' => 'bosa_produkt',
      'name' => 'BOSA Produkt',
      'description' => 'Bosa produkttype med flere eller uden dato, pladser på dato. osv',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function bosa_new_product_views_api() {
  return array("version" => "3.0");
}
