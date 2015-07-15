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
  // Exported menu: menu-wgbh-food-links.
  $menus['menu-wgbh-food-links'] = array(
    'menu_name' => 'menu-wgbh-food-links',
    'title' => 'WGBH Food Links',
    'description' => 'Food links from the WGBH web site',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Development');
  t('Development link');
  t('Features');
  t('Food links from the WGBH web site');
  t('Footer Menu');
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
  t('WGBH Food Links');


  return $menus;
}
