<?php
/**
 * @file
 * craving_boston_site.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function craving_boston_site_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/all/themes/craving_boston/images/craving-boston-open-graph.gif',
      ),
      'og:image:type' => array(
        'value' => 'image/gif',
      ),
      'og:image:width' => array(
        'value' => 1000,
      ),
      'og:image:height' => array(
        'value' => 524,
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:image:src' => array(
        'value' => '[site:url]/sites/all/themes/craving_boston/images/craving-boston-stacked-og.gif',
      ),
      'twitter:image:width' => array(
        'value' => 600,
      ),
      'twitter:image:height' => array(
        'value' => 600,
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
    ),
  );

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'config' => array(
      'og:type' => array(
        'value' => 'food',
      ),
      'og:title' => array(
        'value' => '[node:field_headline]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:type' => array(
        'value' => 'image/jpeg',
      ),
      'twitter:card' => array(
        'value' => 'photo',
      ),
      'twitter:title' => array(
        'value' => '[node:field_headline]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:multi_recipe.
  $config['node:multi_recipe'] = array(
    'instance' => 'node:multi_recipe',
    'config' => array(
      'og:type' => array(
        'value' => 'food',
      ),
      'og:title' => array(
        'value' => '[node:field_headline]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:type' => array(
        'value' => 'image/jpeg',
      ),
      'twitter:card' => array(
        'value' => 'photo',
      ),
      'twitter:title' => array(
        'value' => '[node:field_headline]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:recipe.
  $config['node:recipe'] = array(
    'instance' => 'node:recipe',
    'config' => array(
      'og:type' => array(
        'value' => 'food',
      ),
      'og:title' => array(
        'value' => '[node:field_headline]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:type' => array(
        'value' => 'image/jpeg',
      ),
      'twitter:card' => array(
        'value' => 'photo',
      ),
      'twitter:title' => array(
        'value' => '[node:field_headline]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  return $config;
}
