<?php
/**
 * @file
 * craving_boston_site.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function craving_boston_site_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addtoany-addtoany_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'addtoany_button',
    'module' => 'addtoany',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_about_craving_boston'] = array(
    'cache' => -1,
    'css_class' => 'info',
    'custom' => 0,
    'machine_name' => 'block_about_craving_boston',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -28,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'About Craving Boston',
    'visibility' => 0,
  );

  $export['block-block_footer_logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_footer_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_newsletter_signup'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_newsletter_signup',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-block_support_banner'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_support_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => -24,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-craft_beer_ad'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'craft_beer_ad',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => -20,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-food_wine_ad'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'food_wine_ad',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => -19,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rail_newsletter_signup'] = array(
    'cache' => -1,
    'css_class' => 'signup',
    'custom' => 0,
    'machine_name' => 'rail_newsletter_signup',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -24,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar_legend',
    'module' => 'calendar',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dfp-leaderboard'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'leaderboard',
    'module' => 'dfp',
    'node_types' => array(),
    'pages' => 'users/*
admin/*
faqs
about
rss.xml',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -25,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dfp-medium_rectangle_1'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'medium_rectangle_1',
    'module' => 'dfp',
    'node_types' => array(),
    'pages' => 'users/*
admin/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -27,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dfp-medium_rectangle_2'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'medium_rectangle_2',
    'module' => 'dfp',
    'node_types' => array(),
    'pages' => 'users/*
admin/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -26,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_combination_widget'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_combination_widget',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_comments'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_popular_threads'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_popular_threads',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_recent_comments'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_recent_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_top_commenters'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_top_commenters',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['logintoboggan-logintoboggan_logged_in'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logintoboggan_logged_in',
    'module' => 'logintoboggan',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-craving-boston'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-craving-boston',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-dashboard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-dashboard',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'admin/dashboard',
    'roles' => array(
      'editor' => 5,
      'site administrator' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-site-management-tasks'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-site-management-tasks',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'admin/dashboard',
    'roles' => array(
      'site administrator' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-topics'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-topics',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-wgbh-links-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'wgbh-links-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'footer_third',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'WGBH',
    'visibility' => 0,
  );

  $export['menu-wgbh-related-links-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'wgbh-related-links-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -25,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Try This',
    'visibility' => 0,
  );

  $export['menu-wgbh-support-links-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'wgbh-support-links-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'footer_fourth',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Support WGBH',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['recipe-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'recipe',
    'node_types' => array(),
    'pages' => 'recipes

recipes/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['recipe-summary'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'summary',
    'module' => 'recipe',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => -18,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'social-media-links',
    'module' => 'social_media_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'craving_boston',
        'weight' => -26,
      ),
      'ember' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ember',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 10,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => -18,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendar-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-dashboard-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dashboard-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'admin/dashboard',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-featured-lead_article'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured-lead_article',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_1-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'nodequeue_1-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_3-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'nodequeue_3-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_4-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'nodequeue_4-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'craving_boston' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'craving_boston',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
