<?php
/**
 * @file
 * bosa_new_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bosa_new_product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bosa_voucher_new';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'BOSA Voucher new';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'BOSA Voucher new';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'product_id' => 'product_id',
    'field_product_date_and_stock' => 'field_product_date_and_stock',
    'title' => 'title',
    'sku' => 'sku',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'product_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_date_and_stock' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Commerce Product: Produkt-ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Product.';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Commerce Product: Varenummer */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Felt: Commerce Product: Produkt  dato og pladser */
  $handler->display->display_options['fields']['field_product_date_and_stock']['id'] = 'field_product_date_and_stock';
  $handler->display->display_options['fields']['field_product_date_and_stock']['table'] = 'field_data_field_product_date_and_stock';
  $handler->display->display_options['fields']['field_product_date_and_stock']['field'] = 'field_product_date_and_stock';
  $handler->display->display_options['fields']['field_product_date_and_stock']['label'] = 'Produkt  datoerne';
  $handler->display->display_options['fields']['field_product_date_and_stock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_date_and_stock']['alter']['text'] = '[field_product_date_and_stock]';
  $handler->display->display_options['fields']['field_product_date_and_stock']['click_sort_column'] = 'product_date';
  $handler->display->display_options['fields']['field_product_date_and_stock']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_date_and_stock']['multi_type'] = 'ul';
  /* Filterkriterie: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bosa_produkt' => 'bosa_produkt',
  );
  /* Filterkriterie: Commerce Product: Produkt  dato og pladser (field_product_date_and_stock:product_date) */
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['id'] = 'field_product_date_and_stock_product_date';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['table'] = 'field_data_field_product_date_and_stock';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['field'] = 'field_product_date_and_stock_product_date';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['operator_id'] = 'field_product_date_and_stock_product_date_op';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['operator'] = 'field_product_date_and_stock_product_date_op';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['identifier'] = 'field_product_date_and_stock_product_date';
  $handler->display->display_options['filters']['field_product_date_and_stock_product_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filterkriterie: Commerce Product: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bosa_produkt' => 'bosa_produkt',
  );
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if(function_exists(\'bosa_products_permissions_check\')){
  global $user;
  return !bosa_products_permissions_check($row->product_id, $user->uid);
}';
  $export['bosa_voucher_new'] = $view;

  return $export;
}
