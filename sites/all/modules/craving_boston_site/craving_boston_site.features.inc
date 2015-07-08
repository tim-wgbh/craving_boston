<?php
/**
 * @file
 * craving_boston_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function craving_boston_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "qtip" && $api == "qtip_default") {
    return array("version" => "1.0");
  }
}

/**
 * Implements hook_views_api().
 */
function craving_boston_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function craving_boston_site_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_articles
  $nodequeues['featured_articles'] = array(
    'name' => 'featured_articles',
    'title' => 'Featured Articles',
    'subqueue_title' => '',
    'size' => 4,
    'link' => 'add to featured articles',
    'link_remove' => 'remove from featured articles',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'multi_recipe',
      2 => 'recipe',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

  // Exported nodequeues: latest_articles
  $nodequeues['latest_articles'] = array(
    'name' => 'latest_articles',
    'title' => 'Latest Articles',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'add to lastest articles',
    'link_remove' => 'remove from latest articles',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'multi_recipe',
      2 => 'recipe',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function craving_boston_site_image_default_styles() {
  $styles = array();

  // Exported image style: article_image.
  $styles['article_image'] = array(
    'label' => 'Article Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 770,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: articlebreakpoints_theme_craving_boston_mobile_1x.
  $styles['articlebreakpoints_theme_craving_boston_mobile_1x'] = array(
    'label' => 'articlebreakpoints_theme_craving_boston_mobile_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: articlebreakpoints_theme_craving_boston_narrow_1x.
  $styles['articlebreakpoints_theme_craving_boston_narrow_1x'] = array(
    'label' => 'articlebreakpoints_theme_craving_boston_narrow_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 510,
          'height' => 340,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: articlebreakpoints_theme_craving_boston_normal_1x.
  $styles['articlebreakpoints_theme_craving_boston_normal_1x'] = array(
    'label' => 'articlebreakpoints_theme_craving_boston_normal_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 520,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: articlebreakpoints_theme_craving_boston_wide_1x.
  $styles['articlebreakpoints_theme_craving_boston_wide_1x'] = array(
    'label' => 'articlebreakpoints_theme_craving_boston_wide_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 520,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_main_large.
  $styles['featured_main_large'] = array(
    'label' => 'featured_main_large',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 915,
          'height' => 610,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_main_mobile.
  $styles['featured_main_mobile'] = array(
    'label' => 'featured_main_mobile',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_sub_large.
  $styles['featured_sub_large'] = array(
    'label' => 'featured_sub_large',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 305,
          'height' => 202,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_sub_mobile.
  $styles['featured_sub_mobile'] = array(
    'label' => 'featured_sub_mobile',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_mobile.
  $styles['node_mobile'] = array(
    'label' => 'node_mobile',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_narrow.
  $styles['node_narrow'] = array(
    'label' => 'node_narrow',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => ' 780',
          'height' => 520,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_normal.
  $styles['node_normal'] = array(
    'label' => 'node_normal',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 683,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_wide.
  $styles['node_wide'] = array(
    'label' => 'node_wide',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function craving_boston_site_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for general article contributions to this site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'multi_recipe' => array(
      'name' => t('Multi-Recipe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
