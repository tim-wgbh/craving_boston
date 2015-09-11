<?php
/**
 * @file
 * craving_boston_site.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function craving_boston_site_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery Update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_node-export:admin/config/content/node_export
  $menu_links['management_node-export:admin/config/content/node_export'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/node_export',
    'router_path' => 'admin/config/content/node_export',
    'link_title' => 'Node export',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the settings for Node export.',
      ),
      'identifier' => 'management_node-export:admin/config/content/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_topics:admin/structure/menu/manage/menu-topics
  $menu_links['management_topics:admin/structure/menu/manage/menu-topics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-topics',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Topics',
    'options' => array(
      'identifier' => 'management_topics:admin/structure/menu/manage/menu-topics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-craving-boston_about:node/169
  $menu_links['menu-craving-boston_about:node/169'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'node/169',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Get the back-story',
      ),
      'identifier' => 'menu-craving-boston_about:node/169',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_contact-us:contact
  $menu_links['menu-craving-boston_contact-us:contact'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Get in touch',
      ),
      'identifier' => 'menu-craving-boston_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_faqs:about/faqs
  $menu_links['menu-craving-boston_faqs:about/faqs'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'about/faqs',
    'router_path' => 'about/faqs',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => 'Just the faqs, ma\'am',
      ),
      'identifier' => 'menu-craving-boston_faqs:about/faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-craving-boston_rss-feed-no-pun-intended:rss.xml
  $menu_links['menu-craving-boston_rss-feed-no-pun-intended:rss.xml'] = array(
    'menu_name' => 'menu-craving-boston',
    'link_path' => 'rss.xml',
    'router_path' => 'rss.xml',
    'link_title' => 'RSS Feed (no pun intended)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-craving-boston_rss-feed-no-pun-intended:rss.xml',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:contact
  $menu_links['menu-footer-menu_contact:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Display the contact form',
      ),
      'identifier' => 'menu-footer-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
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
  // Exported menu link: menu-footer-menu_supportbecome-a-member:<front>
  $menu_links['menu-footer-menu_supportbecome-a-member:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Support/Become a Member',
    'options' => array(
      'attributes' => array(
        'title' => 'Get involved - we owe our success to you!',
      ),
      'identifier' => 'menu-footer-menu_supportbecome-a-member:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
  // Exported menu link: menu-topics_home:<front>
  $menu_links['menu-topics_home:<front>'] = array(
    'menu_name' => 'menu-topics',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topics_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: navigation_index-by-ingredient:recipe/by_ing
  $menu_links['navigation_index-by-ingredient:recipe/by_ing'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'recipe/by_ing',
    'router_path' => 'recipe/by_ing',
    'link_title' => 'Index by ingredient',
    'options' => array(
      'identifier' => 'navigation_index-by-ingredient:recipe/by_ing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'navigation_recipes:recipe',
  );
  // Exported menu link: navigation_index-by-name:recipe/by_name
  $menu_links['navigation_index-by-name:recipe/by_name'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'recipe/by_name',
    'router_path' => 'recipe/by_name',
    'link_title' => 'Index by name',
    'options' => array(
      'identifier' => 'navigation_index-by-name:recipe/by_name',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'navigation_recipes:recipe',
  );
  // Exported menu link: navigation_node-export-import:node/add/node_export
  $menu_links['navigation_node-export-import:node/add/node_export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
      'identifier' => 'navigation_node-export-import:node/add/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: wgbh-food-links-menu_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87
  $menu_links['wgbh-food-links-menu_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87'] = array(
    'menu_name' => 'wgbh-food-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    'router_path' => '',
    'link_title' => 'America\'s Test Kitchen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-food-links-menu_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-food-links-menu_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859
  $menu_links['wgbh-food-links-menu_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859'] = array(
    'menu_name' => 'wgbh-food-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    'router_path' => '',
    'link_title' => 'Neighborhood Kitchens',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-food-links-menu_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-food-links-menu_random-food:http://food.example.com
  $menu_links['wgbh-food-links-menu_random-food:http://food.example.com'] = array(
    'menu_name' => 'wgbh-food-links-menu',
    'link_path' => 'http://food.example.com',
    'router_path' => '',
    'link_title' => 'Random Food',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-food-links-menu_random-food:http://food.example.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: wgbh-food-links-menu_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86
  $menu_links['wgbh-food-links-menu_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86'] = array(
    'menu_name' => 'wgbh-food-links-menu',
    'link_path' => 'http://www.wgbh.org/programs/Simply-Ming-86',
    'router_path' => '',
    'link_title' => 'Simply Ming',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'wgbh-food-links-menu_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_about-wgbh:http://www.wgbh.org/about
  $menu_links['wgbh-links-menu_about-wgbh:http://www.wgbh.org/about'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/about',
    'router_path' => '',
    'link_title' => 'About WGBH',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn more about WGBH',
      ),
      'identifier' => 'wgbh-links-menu_about-wgbh:http://www.wgbh.org/about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm
  $menu_links['wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/about/contact.cfm',
    'router_path' => '',
    'link_title' => 'Contact WGBH',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact the larger WGBH organization',
      ),
      'identifier' => 'wgbh-links-menu_contact-wgbh:http://www.wgbh.org/about/contact.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm
  $menu_links['wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/info/privacy.cfm',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about our privacy policy',
      ),
      'identifier' => 'wgbh-links-menu_privacy-policy:http://www.wgbh.org/info/privacy.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm
  $menu_links['wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm'] = array(
    'menu_name' => 'wgbh-links-menu',
    'link_path' => 'http://www.wgbh.org/info/terms.cfm',
    'router_path' => '',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(
        'title' => 'The legal stuff',
      ),
      'identifier' => 'wgbh-links-menu_terms-of-use:http://www.wgbh.org/info/terms.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_become-a-member:http://www.wghb.org/support
  $menu_links['wgbh-support-links-menu_become-a-member:http://www.wghb.org/support'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wghb.org/support',
    'router_path' => '',
    'link_title' => 'Become a Member',
    'options' => array(
      'attributes' => array(
        'title' => 'Find out how to become a WGBH member',
      ),
      'identifier' => 'wgbh-support-links-menu_become-a-member:http://www.wghb.org/support',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm
  $menu_links['wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/corporateSponsorship.cfm',
    'router_path' => '',
    'link_title' => 'Corporate Sponsorship',
    'options' => array(
      'attributes' => array(
        'title' => 'We love it when corporate sponsors help out, too',
      ),
      'identifier' => 'wgbh-support-links-menu_corporate-sponsorship:http://www.wgbh.org/support/corporateSponsorship.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm
  $menu_links['wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/makeagift.cfm',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'We can\'t do it without you',
      ),
      'identifier' => 'wgbh-support-links-menu_donate:http://www.wgbh.org/support/makeagift.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm
  $menu_links['wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm'] = array(
    'menu_name' => 'wgbh-support-links-menu',
    'link_path' => 'http://www.wgbh.org/support/volunteer.cfm',
    'router_path' => '',
    'link_title' => 'Volunteering',
    'options' => array(
      'attributes' => array(
        'title' => 'Short on cash but like what we do? There are other ways to help!',
      ),
      'identifier' => 'wgbh-support-links-menu_volunteering:http://www.wgbh.org/support/volunteer.cfm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About WGBH');
  t('America\'s Test Kitchen');
  t('Become a Member');
  t('Chew On This');
  t('Contact');
  t('Contact Us');
  t('Contact WGBH');
  t('Corporate Sponsorship');
  t('Donate');
  t('FAQs');
  t('Home');
  t('Index by ingredient');
  t('Index by name');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Neighborhood Kitchens');
  t('Neighborhood Nosh');
  t('Node export');
  t('Node export: import');
  t('Privacy Policy');
  t('RSS Feed (no pun intended)');
  t('Random Food');
  t('Recipes');
  t('Reviews');
  t('Simply Ming');
  t('Support/Become a Member');
  t('Table Talk');
  t('Terms of Use');
  t('That\'s the Spirit');
  t('Topics');
  t('User menu');
  t('Volunteering');
  t('jQuery Update');

  return $menu_links;
}
