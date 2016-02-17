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
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "qtip" && $api == "qtip_default") {
    return array("version" => "1.0");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
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

  // Exported nodequeues: contributor_bios
  $nodequeues['contributor_bios'] = array(
    'name' => 'contributor_bios',
    'title' => 'Contributor Bios',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add bio',
    'link_remove' => 'Remove bio',
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
      0 => 'bio',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

  // Exported nodequeues: faqs
  $nodequeues['faqs'] = array(
    'name' => 'faqs',
    'title' => 'FAQs',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add FAQ',
    'link_remove' => 'Remove FAQ',
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
      0 => 'faq',
    ),
    'roles' => array(
      0 => 'editor',
    ),
    'count' => 0,
  );

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
    'link' => 'add to latest articles',
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

  // Exported image style: default_large.
  $styles['default_large'] = array(
    'label' => 'Default Large',
    'effects' => array(
      28 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 460,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: default_medium.
  $styles['default_medium'] = array(
    'label' => 'Default Medium 1x',
    'effects' => array(
      26 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_medium_2x.
  $styles['default_medium_2x'] = array(
    'label' => 'Default Medium 2x',
    'effects' => array(
      27 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 640,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_small.
  $styles['default_small'] = array(
    'label' => 'Default Small 1x',
    'effects' => array(
      21 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 213,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_small_2x.
  $styles['default_small_2x'] = array(
    'label' => 'Default Small 2x',
    'effects' => array(
      25 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 427,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_image.
  $styles['event_image'] = array(
    'label' => 'Event Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'upscale' => 0,
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
        'name' => 'focal_point_scale_and_crop',
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
        'name' => 'focal_point_scale_and_crop',
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
        'name' => 'focal_point_scale_and_crop',
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
      1 => array(
        'name' => 'focal_point_scale_and_crop',
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
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: half_mobile_square.
  $styles['half_mobile_square'] = array(
    'label' => 'Half Mobile Square',
    'effects' => array(
      24 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mobile_square.
  $styles['mobile_square'] = array(
    'label' => 'Mobile Square',
    'effects' => array(
      23 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 320,
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
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => t('Site contributor biographies'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'event_calendar' => array(
      'name' => t('Event Listing'),
      'base' => 'node_content',
      'description' => t('A content type to create events for calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Frequently asked question'),
      'has_title' => '1',
      'title_label' => t('Question'),
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
