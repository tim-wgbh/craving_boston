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
  if ($module == "dfp" && $api == "default_dfp_tags") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
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

  // Exported image style: default_large.
  $styles['default_large'] = array(
    'label' => 'Default Large',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_medium.
  $styles['default_medium'] = array(
    'label' => 'Default Medium',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_small.
  $styles['default_small'] = array(
    'label' => 'Default Small',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
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
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_sub_medium.
  $styles['featured_sub_medium'] = array(
    'label' => 'featured_sub_medium',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 520,
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
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
          'weight' => 0,
        ),
        'weight' => 0,
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
