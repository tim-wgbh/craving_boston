<?php
/**
 * @file
 * craving_boston.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function craving_boston_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:the-latest
  $menu_links['main-menu_home:the-latest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'the-latest',
    'router_path' => 'the-latest',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:the-latest',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_about:<front>
  $menu_links['menu-footer-menu_about:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:<front>
  $menu_links['menu-footer-menu_contact:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_privacy-policy:<front>
  $menu_links['menu-footer-menu_privacy-policy:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_privacy-policy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-of-use:<front>
  $menu_links['menu-footer-menu_terms-of-use:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_terms-of-use:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_chew-on-this:food
  $menu_links['menu-topics_chew-on-this:food'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'food',
    'router_path' => 'food',
    'link_title' => 'Chew On This',
    'options' => array(
      'attributes' => array(
        'title' => 'Editorial articles about food',
      ),
      'identifier' => 'menu-topics_chew-on-this:food',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_neighborhood-nosh:neighborhoods
  $menu_links['menu-topics_neighborhood-nosh:neighborhoods'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'neighborhoods',
    'router_path' => 'neighborhoods',
    'link_title' => 'Neighborhood Nosh',
    'options' => array(
      'attributes' => array(
        'title' => 'Food stories from the neighborhoods of Metro Boston',
      ),
      'identifier' => 'menu-topics_neighborhood-nosh:neighborhoods',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_recipes:recipes
  $menu_links['menu-topics_recipes:recipes'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'recipes',
    'router_path' => 'recipes',
    'link_title' => 'Recipes',
    'options' => array(
      'attributes' => array(
        'title' => 'Pretty much self-explanatory',
      ),
      'identifier' => 'menu-topics_recipes:recipes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_reviews:reviews
  $menu_links['menu-topics_reviews:reviews'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'reviews',
    'router_path' => 'reviews',
    'link_title' => 'Reviews',
    'options' => array(
      'attributes' => array(
        'title' => 'Reviews of restaurants, food purveyors, and other food experiences',
      ),
      'identifier' => 'menu-topics_reviews:reviews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_table-talk:table-talk
  $menu_links['menu-topics_table-talk:table-talk'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'table-talk',
    'router_path' => 'table-talk',
    'link_title' => 'Table Talk',
    'options' => array(
      'attributes' => array(
        'title' => 'Editorials and weekly wrap-ups',
      ),
      'identifier' => 'menu-topics_table-talk:table-talk',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-topics_thats-the-spirit:drink
  $menu_links['menu-topics_thats-the-spirit:drink'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => 'drink',
    'router_path' => 'drink',
    'link_title' => 'That\'s the Spirit',
    'options' => array(
      'attributes' => array(
        'title' => 'Articles about drink',
      ),
      'identifier' => 'menu-topics_thats-the-spirit:drink',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Chew On This');
  t('Contact');
  t('Home');
  t('Log out');
  t('Neighborhood Nosh');
  t('Privacy Policy');
  t('Recipes');
  t('Reviews');
  t('Table Talk');
  t('Terms of Use');
  t('That\'s the Spirit');
  t('User account');


  return $menu_links;
}
