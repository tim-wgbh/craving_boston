<?php
/**
 * @file
 * craving_boston_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function craving_boston_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(),
    'module' => 'overlay',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer DFP'.
  $permissions['administer DFP'] = array(
    'name' => 'administer DFP',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'dfp',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer addtoany'.
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'addtoany',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer disqus'.
  $permissions['administer disqus'] = array(
    'name' => 'administer disqus',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'administer event status'.
  $permissions['administer event status'] = array(
    'name' => 'administer event status',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'event_calendar',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer google tag manager'.
  $permissions['administer google tag manager'] = array(
    'name' => 'administer google tag manager',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'google_tag',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer npr api'.
  $permissions['administer npr api'] = array(
    'name' => 'administer npr api',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'npr_api',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer publication date'.
  $permissions['administer publication date'] = array(
    'name' => 'administer publication date',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'administer qtip'.
  $permissions['administer qtip'] = array(
    'name' => 'administer qtip',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'qtip',
  );

  // Exported permission: 'administer radioactivity'.
  $permissions['administer radioactivity'] = array(
    'name' => 'administer radioactivity',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'radioactivity',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer s3fs'.
  $permissions['administer s3fs'] = array(
    'name' => 'administer s3fs',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 's3fs',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcut per role'.
  $permissions['administer shortcut per role'] = array(
    'name' => 'administer shortcut per role',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcutperrole',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer twitter block'.
  $permissions['administer twitter block'] = array(
    'name' => 'administer twitter block',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'twitter_block',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bio content'.
  $permissions['create bio content'] = array(
    'name' => 'create bio content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_calendar content'.
  $permissions['create event_calendar content'] = array(
    'name' => 'create event_calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create multi_recipe content'.
  $permissions['create multi_recipe content'] = array(
    'name' => 'create multi_recipe content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create npr_story content'.
  $permissions['create npr_story content'] = array(
    'name' => 'create npr_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create recipe content'.
  $permissions['create recipe content'] = array(
    'name' => 'create recipe content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any bio content'.
  $permissions['delete any bio content'] = array(
    'name' => 'delete any bio content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event_calendar content'.
  $permissions['delete any event_calendar content'] = array(
    'name' => 'delete any event_calendar content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any multi_recipe content'.
  $permissions['delete any multi_recipe content'] = array(
    'name' => 'delete any multi_recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any npr_story content'.
  $permissions['delete any npr_story content'] = array(
    'name' => 'delete any npr_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any recipe content'.
  $permissions['delete any recipe content'] = array(
    'name' => 'delete any recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own bio content'.
  $permissions['delete own bio content'] = array(
    'name' => 'delete own bio content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event_calendar content'.
  $permissions['delete own event_calendar content'] = array(
    'name' => 'delete own event_calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own multi_recipe content'.
  $permissions['delete own multi_recipe content'] = array(
    'name' => 'delete own multi_recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own npr_story content'.
  $permissions['delete own npr_story content'] = array(
    'name' => 'delete own npr_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own recipe content'.
  $permissions['delete own recipe content'] = array(
    'name' => 'delete own recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in dfp_ad_categories'.
  $permissions['delete terms in dfp_ad_categories'] = array(
    'name' => 'delete terms in dfp_ad_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in flavor_profile'.
  $permissions['delete terms in flavor_profile'] = array(
    'name' => 'delete terms in flavor_profile',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sections'.
  $permissions['delete terms in sections'] = array(
    'name' => 'delete terms in sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display disqus comments on profile'.
  $permissions['display disqus comments on profile'] = array(
    'name' => 'display disqus comments on profile',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any bio content'.
  $permissions['edit any bio content'] = array(
    'name' => 'edit any bio content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event_calendar content'.
  $permissions['edit any event_calendar content'] = array(
    'name' => 'edit any event_calendar content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any multi_recipe content'.
  $permissions['edit any multi_recipe content'] = array(
    'name' => 'edit any multi_recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any npr_story content'.
  $permissions['edit any npr_story content'] = array(
    'name' => 'edit any npr_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any recipe content'.
  $permissions['edit any recipe content'] = array(
    'name' => 'edit any recipe content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own bio content'.
  $permissions['edit own bio content'] = array(
    'name' => 'edit own bio content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event_calendar content'.
  $permissions['edit own event_calendar content'] = array(
    'name' => 'edit own event_calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own multi_recipe content'.
  $permissions['edit own multi_recipe content'] = array(
    'name' => 'edit own multi_recipe content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own npr_story content'.
  $permissions['edit own npr_story content'] = array(
    'name' => 'edit own npr_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own recipe content'.
  $permissions['edit own recipe content'] = array(
    'name' => 'edit own recipe content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit radioactivity'.
  $permissions['edit radioactivity'] = array(
    'name' => 'edit radioactivity',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'radioactivity',
  );

  // Exported permission: 'edit terms in dfp_ad_categories'.
  $permissions['edit terms in dfp_ad_categories'] = array(
    'name' => 'edit terms in dfp_ad_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in flavor_profile'.
  $permissions['edit terms in flavor_profile'] = array(
    'name' => 'edit terms in flavor_profile',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sections'.
  $permissions['edit terms in sections'] = array(
    'name' => 'edit terms in sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export recipes'.
  $permissions['export recipes'] = array(
    'name' => 'export recipes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'recipe',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import recipes'.
  $permissions['import recipes'] = array(
    'name' => 'import recipes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'recipe',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'preview focal point'.
  $permissions['preview focal point'] = array(
    'name' => 'preview focal point',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'focal_point',
  );

  // Exported permission: 'pull NPR content'.
  $permissions['pull NPR content'] = array(
    'name' => 'pull NPR content',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'npr_pull',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set any published on date'.
  $permissions['set any published on date'] = array(
    'name' => 'set any published on date',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set article published on date'.
  $permissions['set article published on date'] = array(
    'name' => 'set article published on date',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set bio published on date'.
  $permissions['set bio published on date'] = array(
    'name' => 'set bio published on date',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set event_calendar published on date'.
  $permissions['set event_calendar published on date'] = array(
    'name' => 'set event_calendar published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set faq published on date'.
  $permissions['set faq published on date'] = array(
    'name' => 'set faq published on date',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set multi_recipe published on date'.
  $permissions['set multi_recipe published on date'] = array(
    'name' => 'set multi_recipe published on date',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set npr_story published on date'.
  $permissions['set npr_story published on date'] = array(
    'name' => 'set npr_story published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set page published on date'.
  $permissions['set page published on date'] = array(
    'name' => 'set page published on date',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set recipe published on date'.
  $permissions['set recipe published on date'] = array(
    'name' => 'set recipe published on date',
    'roles' => array(
      'editor' => 'editor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'toggle disqus comments'.
  $permissions['toggle disqus comments'] = array(
    'name' => 'toggle disqus comments',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view disqus comments'.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'event contributor' => 'event contributor',
      'site administrator' => 'site administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
