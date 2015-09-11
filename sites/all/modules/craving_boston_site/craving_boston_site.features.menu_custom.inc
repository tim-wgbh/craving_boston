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

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-craving-boston.
  $menus['menu-craving-boston'] = array(
    'menu_name' => 'menu-craving-boston',
    'title' => 'Craving Boston',
    'description' => 'Footer menu for Craving Boston business',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-topics.
  $menus['menu-topics'] = array(
    'menu_name' => 'menu-topics',
    'title' => 'Topics',
    'description' => 'The main topic menu',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
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
  t('Craving Boston');
  t('Development');
  t('Development link');
  t('Features');
  t('Footer Menu');
  t('Footer menu for Craving Boston business');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('The main topic menu');
  t('Topics');
  t('User menu');
  t('WGBH Identity Links');
  t('WGBH Related Links');
  t('WGBH Support Links');


  return $menus;
}
