<?php
/**
 * @file
 * craving_boston_site.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function craving_boston_site_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-craving-boston.
  $menus['menu-craving-boston'] = array(
    'menu_name' => 'menu-craving-boston',
    'title' => 'Craving Boston',
    'description' => 'Footer menu for Craving Boston business',
  );
  // Exported menu: menu-dashboard.
  $menus['menu-dashboard'] = array(
    'menu_name' => 'menu-dashboard',
    'title' => 'Editorial Tasks',
    'description' => 'Convenient links for site managers',
  );
  // Exported menu: menu-site-management-tasks.
  $menus['menu-site-management-tasks'] = array(
    'menu_name' => 'menu-site-management-tasks',
    'title' => 'Site Management Tasks',
    'description' => '',
  );
  // Exported menu: menu-topics.
  $menus['menu-topics'] = array(
    'menu_name' => 'menu-topics',
    'title' => 'Topics',
    'description' => 'The main topic menu',
  );
  // Exported menu: wgbh-links-menu.
  $menus['wgbh-links-menu'] = array(
    'menu_name' => 'wgbh-links-menu',
    'title' => 'WGBH Identity Links',
    'description' => NULL,
  );
  // Exported menu: wgbh-related-links-menu.
  $menus['wgbh-related-links-menu'] = array(
    'menu_name' => 'wgbh-related-links-menu',
    'title' => 'WGBH Related Links',
    'description' => '',
  );
  // Exported menu: wgbh-support-links-menu.
  $menus['wgbh-support-links-menu'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'title' => 'WGBH Support Links',
    'description' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Convenient links for site managers');
  t('Craving Boston');
  t('Editorial Tasks');
  t('Footer menu for Craving Boston business');
  t('Site Management Tasks');
  t('The main topic menu');
  t('Topics');
  t('WGBH Identity Links');
  t('WGBH Related Links');
  t('WGBH Support Links');


  return $menus;
}
