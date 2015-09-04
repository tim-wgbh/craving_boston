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

  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database and files or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_devel-generate-image-providers:admin/config/development/devel_generate_image_provider
  $menu_links['management_devel-generate-image-providers:admin/config/development/devel_generate_image_provider'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel_generate_image_provider',
    'router_path' => 'admin/config/development/devel_generate_image_provider',
    'link_title' => 'Devel Generate Image Providers',
    'options' => array(
      'attributes' => array(
        'title' => 'Allow choose image provider in content generation',
      ),
      'identifier' => 'management_devel-generate-image-providers:admin/config/development/devel_generate_image_provider',
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
  // Exported menu link: management_video-embed-styles:admin/config/media/vef_video_styles
  $menu_links['management_video-embed-styles:admin/config/media/vef_video_styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/vef_video_styles',
    'router_path' => 'admin/config/media/vef_video_styles',
    'link_title' => 'Video Embed Styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Video Embed Field\'s video styles.',
      ),
      'identifier' => 'management_video-embed-styles:admin/config/media/vef_video_styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
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
  // Exported menu link: menu-wgbh-food-links_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87
  $menu_links['menu-wgbh-food-links_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87'] = array(
    'menu_name' => 'menu-wgbh-food-links',
    'link_path' => 'http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    'router_path' => '',
    'link_title' => 'America\'s Test Kitchen',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to WGBH.org',
      ),
      'identifier' => 'menu-wgbh-food-links_americas-test-kitchen:http://www.wgbh.org/programs/Americas-Test-Kitchen-87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-wgbh-food-links_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859
  $menu_links['menu-wgbh-food-links_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859'] = array(
    'menu_name' => 'menu-wgbh-food-links',
    'link_path' => 'http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    'router_path' => '',
    'link_title' => 'Neighborhood Kitchens',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to WGBH.org',
      ),
      'identifier' => 'menu-wgbh-food-links_neighborhood-kitchens:http://www.wgbh.org/programs/Neighborhood-Kitchens-1859',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-wgbh-food-links_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86
  $menu_links['menu-wgbh-food-links_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86'] = array(
    'menu_name' => 'menu-wgbh-food-links',
    'link_path' => 'http://www.wgbh.org/programs/Simply-Ming-86',
    'router_path' => '',
    'link_title' => 'Simply Ming',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to WGBH.org',
      ),
      'identifier' => 'menu-wgbh-food-links_simply-ming:http://www.wgbh.org/programs/Simply-Ming-86',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('America\'s Test Kitchen');
  t('Backup and Migrate');
  t('Chew On This');
  t('Contact');
  t('Devel Generate Image Providers');
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
  t('Recipes');
  t('Reviews');
  t('Simply Ming');
  t('Support/Become a Member');
  t('Table Talk');
  t('Terms of Use');
  t('That\'s the Spirit');
  t('Topics');
  t('User menu');
  t('Video Embed Styles');
  t('jQuery Update');

  return $menu_links;
}
