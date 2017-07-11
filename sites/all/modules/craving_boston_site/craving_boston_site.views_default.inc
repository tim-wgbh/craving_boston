<?php
/**
 * @file
 * craving_boston_site.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function craving_boston_site_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about';
  $view->description = 'About section plus contributors';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bio';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'About text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>WGBH’s Craving Boston aims to provide you thoughtful content you can use everyday, and to inspire you to explore the deep connection between our region and its cuisine.</p>
<p>Whether you want to learn more about how innovation is affecting our fare culture, read about a new restaurant, or to look for a locally inspired recipe for dinner tonight, we\'re your destination for all things food in Boston and New England.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'contributor_bios' => 'contributor_bios',
    'featured_articles' => 0,
    'latest_articles' => 0,
    'faqs' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'half_mobile_square',
    'image_link' => '',
  );
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_facebook']['element_type'] = '0';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['type'] = 'text_plain';
  /* Field: Content: Instagram */
  $handler->display->display_options['fields']['field_instagram']['id'] = 'field_instagram';
  $handler->display->display_options['fields']['field_instagram']['table'] = 'field_data_field_instagram';
  $handler->display->display_options['fields']['field_instagram']['field'] = 'field_instagram';
  $handler->display->display_options['fields']['field_instagram']['label'] = '';
  $handler->display->display_options['fields']['field_instagram']['element_type'] = '0';
  $handler->display->display_options['fields']['field_instagram']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_instagram']['type'] = 'text_plain';
  /* Field: Content: Pinterest */
  $handler->display->display_options['fields']['field_pinterest']['id'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['table'] = 'field_data_field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['field'] = 'field_pinterest';
  $handler->display->display_options['fields']['field_pinterest']['label'] = '';
  $handler->display->display_options['fields']['field_pinterest']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pinterest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pinterest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pinterest']['type'] = 'text_plain';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['element_type'] = '0';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['type'] = 'text_plain';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about';
  $export['about'] = $view;

  $view = new view();
  $view->name = 'article_archive';
  $view->description = 'Archived list of all articles';
  $view->tag = 'Article Content';
  $view->base_table = 'node';
  $view->human_name = 'Article Archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Date';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'short';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );

  /* Display: All Articles */
  $handler = $view->new_display('page', 'All Articles', 'page');
  $handler->display->display_options['path'] = 'all-posts';
  $export['article_archive'] = $view;

  $view = new view();
  $view->name = 'cb_similar_by_terms';
  $view->description = 'Similar By Terms';
  $view->tag = 'Article Content';
  $view->base_table = 'node';
  $view->human_name = 'CB Similar By Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'You might also like:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'related_content',
    'image_link' => 'content',
  );
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['similar_nid']['vocabularies'] = array(
    'tags' => 'tags',
    'sections' => 'sections',
    'flavor_profile' => 0,
    'dfp_ad_categories' => 0,
    'event_calendar_status' => 0,
  );
  $handler->display->display_options['arguments']['similar_nid']['include_args'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '4';
  $export['cb_similar_by_terms'] = $view;

  $view = new view();
  $view->name = 'dashboard';
  $view->description = 'Administrative post listing';
  $view->tag = 'Dashboard';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard: Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = 'Author';
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'short';
  $handler->display->display_options['fields']['publish_on']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['empty'] = '(unpublished)';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'short';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Nodequeue: Add/remove links */
  $handler->display->display_options['fields']['nodequeue_links']['id'] = 'nodequeue_links';
  $handler->display->display_options['fields']['nodequeue_links']['table'] = 'node';
  $handler->display->display_options['fields']['nodequeue_links']['field'] = 'nodequeue_links';
  $handler->display->display_options['fields']['nodequeue_links']['label'] = 'Feature';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );

  /* Display: Dashboard:Posts */
  $handler = $view->new_display('block', 'Dashboard:Posts', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Posts';
  $handler->display->display_options['display_description'] = 'Articles, recipes, and multi-recipes';

  /* Display: Dashboard: Food & Wine Pages */
  $handler = $view->new_display('block', 'Dashboard: Food & Wine Pages', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food & Wine Pages';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'food_wine_page' => 'food_wine_page',
  );

  /* Display: Dashboard: Food & Wine Event */
  $handler = $view->new_display('block', 'Dashboard: Food & Wine Event', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food & Wine Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'food_wine_event' => 'food_wine_event',
  );
  $export['dashboard'] = $view;

  $view = new view();
  $view->name = 'event_list';
  $view->description = 'A listing of events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No-events text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We don\'t know of any upcoming food-related events at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'event_image',
    'image_link' => '',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* Sort criterion: Content: Date -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_calendar' => 'event_calendar',
  );
  /* Filter criterion: Events after  */
  $handler->display->display_options['filters']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['filters']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['filters']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['filters']['event_calendar_date_value']['ui_name'] = 'Events after ';
  $handler->display->display_options['filters']['event_calendar_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['event_calendar_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['event_calendar_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['event_calendar_date_value']['year_range'] = '-1:+3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'events.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['event_list'] = $view;

  $view = new view();
  $view->name = 'faqs';
  $view->description = 'List of FAQs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'faq';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'faqs' => 'faqs',
    'featured_articles' => 0,
    'latest_articles' => 0,
    'contributor_bios' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'faqs';
  $export['faqs'] = $view;

  $view = new view();
  $view->name = 'featured';
  $view->description = 'Featured content for the front page image block';
  $view->tag = 'Article Content';
  $view->base_table = 'node';
  $view->human_name = 'Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_image' => 'field_image',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Featured Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_articles' => 'featured_articles',
    'latest_articles' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'featured_sub_mapping',
    'fallback_image_style' => 'featured_sub_medium',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
  );
  /* Field: Content: Part of multi-recipe */
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['id'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['field'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['label'] = '';
  $handler->display->display_options['fields']['field_internet_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['label'] = '';
  $handler->display->display_options['fields']['field_soundcloud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: NPR Image */
  $handler->display->display_options['fields']['field_npr_image']['id'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['table'] = 'field_data_field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['field'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_npr_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_npr_image']['settings'] = array(
    'picture_mapping' => 'featured_sub_mapping',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';

  /* Display: Lead Article */
  $handler = $view->new_display('block', 'Lead Article', 'lead_article');
  $handler->display->display_options['display_description'] = 'Provides the main image for the website lead';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'featured_main_mapping',
    'fallback_image_style' => 'featured_main_large',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
  );
  /* Field: Content: Part of multi-recipe */
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['id'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['field'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: NPR Image */
  $handler->display->display_options['fields']['field_npr_image']['id'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['table'] = 'field_data_field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['field'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['label'] = '';
  $handler->display->display_options['fields']['field_npr_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_npr_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_npr_image']['settings'] = array(
    'picture_mapping' => 'featured_main_mapping',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'featured_web_link' => 'featured_web_link',
    'multi_recipe' => 'multi_recipe',
    'npr_story' => 'npr_story',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['value']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Lead Article';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'lead_article_attachment');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'featured_web_link' => 'featured_web_link',
    'multi_recipe' => 'multi_recipe',
    'npr_story' => 'npr_story',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  /* Filter criterion: Nodequeue: Position */
  $handler->display->display_options['filters']['position']['id'] = 'position';
  $handler->display->display_options['filters']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['position']['field'] = 'position';
  $handler->display->display_options['filters']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['position']['operator'] = '>';
  $handler->display->display_options['filters']['position']['value']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'lead_article' => 'lead_article',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['featured'] = $view;

  $view = new view();
  $view->name = 'food_and_wine_people';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine People Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food & Wine People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/bio">Add a person</a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    824 => '824',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'bio_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['food_and_wine_people'] = $view;

  $view = new view();
  $view->name = 'food_wine_event_schedule';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Event Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'food_wine_event' => 'food_wine_event',
  );

  /* Display: Schedule */
  $handler = $view->new_display('page', 'Schedule', 'page');
  $handler->display->display_options['path'] = 'food-and-wine-festival/schedule';

  /* Display: Chef Demos */
  $handler = $view->new_display('page', 'Chef Demos', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Demos & Signings';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'food_wine_event' => 'food_wine_event',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2086',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'food_wine_event';
  $handler->display->display_options['path'] = 'food-and-wine-festival/demos';
  $export['food_wine_event_schedule'] = $view;

  $view = new view();
  $view->name = 'food_wine_event_sponsors';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Event Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food & Wine Event Sponsors & Participants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsor_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div style="width:650px;height:400px;"><iframe align="left" frameborder="0" height="400" marginheight="0" marginwidth="0" scrolling="no" src="http://be.wgbh.org/2017FoodandWineSponsor.htm" style="padding:20px 20px 25px 10px;!important;margin:0!important;" width="650"></iframe></div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Sponsor type */
  $handler->display->display_options['fields']['field_sponsor_type']['id'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['field'] = 'field_sponsor_type';
  $handler->display->display_options['fields']['field_sponsor_type']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sponsor_type']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Sort criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['sorts']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corporate_sponsor' => 'corporate_sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    839 => '839',
    838 => '838',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';

  /* Display: Sponsor Page */
  $handler = $view->new_display('page', 'Sponsor Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food & Wine Event Sponsors';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div style="width:650px;height:400px;"><iframe align="left" frameborder="0" height="400" marginheight="0" marginwidth="0" scrolling="no" src="http://be.wgbh.org/2017FoodandWineSponsor.htm" style="padding:20px 20px 25px 10px;!important;margin:0!important;" width="650"></iframe></div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corporate_sponsor' => 'corporate_sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    833 => '833',
    834 => '834',
    836 => '836',
    835 => '835',
    837 => '837',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';
  $handler->display->display_options['path'] = 'food-and-wine-festival/sponsors';

  /* Display: Vendor Page */
  $handler = $view->new_display('page', 'Vendor Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food & Wine Event Vendors';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corporate_sponsor' => 'corporate_sponsor',
  );
  /* Filter criterion: Content: Sponsor type (field_sponsor_type) */
  $handler->display->display_options['filters']['field_sponsor_type_tid']['id'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['table'] = 'field_data_field_sponsor_type';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['field'] = 'field_sponsor_type_tid';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['value'] = array(
    839 => '839',
    838 => '838',
  );
  $handler->display->display_options['filters']['field_sponsor_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_type_tid']['vocabulary'] = 'sponsor_type';
  $handler->display->display_options['path'] = 'food-and-wine-festival/vendors';
  $export['food_wine_event_sponsors'] = $view;

  $view = new view();
  $view->name = 'food_wine_featured_personalities';
  $view->description = 'About section plus contributors';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Featured Personalities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Personalities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bio';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'half_mobile_square',
    'image_link' => '',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    824 => '824',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'bio_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'food-and-wine-festival/personalities';
  $export['food_wine_featured_personalities'] = $view;

  $view = new view();
  $view->name = 'food_wine_sponsors';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Sponsors Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food & Wine Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/bio">Add a sponsor/vendor</a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Sponsor/Vendor';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corporate_sponsor' => 'corporate_sponsor',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['food_wine_sponsors'] = $view;

  $view = new view();
  $view->name = 'food_wine_volunteering';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Volunteering';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food & Wine Volunteering';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Calling all food and wine enthusiasts!</p>

<p>WGBH is excited to host the fifth season of the Taste of WGBH Food &amp; Wine Festival, October 5-8, 2017. We are again collaborating with the best chefs, producers, wineries and breweries to deliver the finest food and wine in the region. The four-day festival will include an Opening Chef&rsquo;s Gala Reception, The Artisan Taste, Brunch Bar and the return of the WGBH Food Fight. Thousands of guests are expected to join us for a weekend full of delicious festivities.</p>

<p>We need your help to ensure this year&rsquo;s festival is even bigger and better than last year&rsquo;s. Volunteer positions range from set-up crew, on-site event assistants and breakdown crew...this will be an amazing opportunity to get on-site events/festival experience and help produce one of Boston&#39;s most fun food festivals!</p>

<p>Please review all The Taste of WGBH: Food &amp; Wine Festival volunteer activities listed below and email me at jaime_reese@wgbh.org no later than Wednesday, August 31 if you&#39;d like to help.</p>

<p>Please make sure to include the following information in your email response: Your full name Preferred activity including</p>

<ul>
	<li>Date (e.g. Opening Gala Reception Prep &ndash; September 13)</li>
	<li>Preferred shift (if there are multiple shifts)</li>
	<li>Prior related experience (e.g. volunteer work, customer service and food-related experience, etc.)</li>
</ul>

<p>Please note that volunteers should be comfortable standing for 4-6 hours. Volunteers working with set-up and/or breakdown must be 16+, and volunteers working during the event must be 21+.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'The fifth annual Taste of WGBH Food & Wine Festival helps to support the great educational and cultural programming on WGBH. WGBH members, community friends, and a host of celebrity chefs will mix and mingle around their favorite topic: good food. Be sure to join us this year! Think your friends and family may also want to volunteer for this event? If so, feel free to pass this information on to them, too!
Cheers!
Jaime
Volunteer & Marketing Manager, WGBH';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Position(s) */
  $handler->display->display_options['fields']['field_event_position_s_']['id'] = 'field_event_position_s_';
  $handler->display->display_options['fields']['field_event_position_s_']['table'] = 'field_data_field_event_position_s_';
  $handler->display->display_options['fields']['field_event_position_s_']['field'] = 'field_event_position_s_';
  /* Field: Content: Shifts Available */
  $handler->display->display_options['fields']['field_shifts_available']['id'] = 'field_shifts_available';
  $handler->display->display_options['fields']['field_shifts_available']['table'] = 'field_data_field_shifts_available';
  $handler->display->display_options['fields']['field_shifts_available']['field'] = 'field_shifts_available';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteering' => 'volunteering',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'food-and-wine-festival/volunteer';
  $export['food_wine_volunteering'] = $view;

  $view = new view();
  $view->name = 'food_wine_volunteering_admin';
  $view->description = '';
  $view->tag = 'Food & Wine Festival';
  $view->base_table = 'node';
  $view->human_name = 'Food & Wine Volunteering Admin List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food & Wine Volunteer Tasks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/volunteering">Add a volunteer task</a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteering' => 'volunteering',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['food_wine_volunteering_admin'] = $view;

  $view = new view();
  $view->name = 'most_popular_now';
  $view->description = 'What\'s hot and what\'s popular ';
  $view->tag = 'Article Content';
  $view->base_table = 'node';
  $view->human_name = 'Most Popular';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s Hot';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'most_popular',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subhead']['type'] = 'text_plain';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['label'] = '';
  $handler->display->display_options['fields']['field_internet_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internet_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['label'] = '';
  $handler->display->display_options['fields']['field_soundcloud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundcloud']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Popularity now (field_popularity_now:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_energy']['id'] = 'field_popularity_now_radioactivity_energy';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_energy']['table'] = 'field_data_field_popularity_now';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_energy']['field'] = 'field_popularity_now_radioactivity_energy';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_energy']['order'] = 'DESC';
  /* Sort criterion: Content: Popularity now (field_popularity_now:radioactivity_timestamp) */
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_timestamp']['id'] = 'field_popularity_now_radioactivity_timestamp';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_timestamp']['table'] = 'field_data_field_popularity_now';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_timestamp']['field'] = 'field_popularity_now_radioactivity_timestamp';
  $handler->display->display_options['sorts']['field_popularity_now_radioactivity_timestamp']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );

  /* Display: Most Popular Now Block */
  $handler = $view->new_display('block', 'Most Popular Now Block', 'block');

  /* Display: Recently Popular Block */
  $handler = $view->new_display('block', 'Recently Popular Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Popular';
  $handler->display->display_options['display_description'] = 'Popular Recently';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['label'] = '';
  $handler->display->display_options['fields']['field_internet_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internet_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['label'] = '';
  $handler->display->display_options['fields']['field_soundcloud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundcloud']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'default_small',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Recent popularity (field_recent_popularity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_energy']['id'] = 'field_recent_popularity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_energy']['table'] = 'field_data_field_recent_popularity';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_energy']['field'] = 'field_recent_popularity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_energy']['order'] = 'DESC';
  /* Sort criterion: Content: Recent popularity (field_recent_popularity:radioactivity_timestamp) */
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_timestamp']['id'] = 'field_recent_popularity_radioactivity_timestamp';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_timestamp']['table'] = 'field_data_field_recent_popularity';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_timestamp']['field'] = 'field_recent_popularity_radioactivity_timestamp';
  $handler->display->display_options['sorts']['field_recent_popularity_radioactivity_timestamp']['order'] = 'DESC';
  $export['most_popular_now'] = $view;

  $view = new view();
  $view->name = 'related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'You might also like:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'related_content',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return preg_replace(\'/node\\//\', \'\', $_GET[\'q\']);';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['related_content'] = $view;

  $view = new view();
  $view->name = 'rss';
  $view->description = 'Custom RSS feed for Craving Boston';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RSS';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'RSS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Craving Boston - a blog about the Boston food scene by WGBH';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'field_headline';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'field_subhead';
  $handler->display->display_options['row_options']['creator_field'] = 'field_author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['path'] = 'rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $export['rss'] = $view;

  $view = new view();
  $view->name = 'the_latest';
  $view->description = 'Most recent content for front page';
  $view->tag = 'Article Content';
  $view->base_table = 'node';
  $view->human_name = 'The Latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Link to all articles';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<p><a href="/all-posts" class="cb-button">View all posts</a></p>';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Latest Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_articles' => 'featured_articles',
    'latest_articles' => 'latest_articles',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Video poster */
  $handler->display->display_options['fields']['field_video_poster']['id'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['table'] = 'field_data_field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['field'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['label'] = '';
  $handler->display->display_options['fields']['field_video_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_poster']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['recipe_description']['id'] = 'recipe_description';
  $handler->display->display_options['fields']['recipe_description']['table'] = 'field_data_recipe_description';
  $handler->display->display_options['fields']['recipe_description']['field'] = 'recipe_description';
  $handler->display->display_options['fields']['recipe_description']['label'] = '';
  $handler->display->display_options['fields']['recipe_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['recipe_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['recipe_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['recipe_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Part of multi-recipe */
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['id'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['field'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['element_label_colon'] = FALSE;
  /* Field: Content: Recipe */
  $handler->display->display_options['fields']['field_recipe']['id'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['table'] = 'field_data_field_recipe';
  $handler->display->display_options['fields']['field_recipe']['field'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_recipe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subhead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subhead']['type'] = 'text_plain';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['label'] = '';
  $handler->display->display_options['fields']['field_soundcloud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: Internet Video */
  $handler->display->display_options['fields']['field_internet_video']['id'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['table'] = 'field_data_field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['field'] = 'field_internet_video';
  $handler->display->display_options['fields']['field_internet_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_internet_video']['type'] = 'video_embed_field_url';
  $handler->display->display_options['fields']['field_internet_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_npr_byline']['id'] = 'field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['table'] = 'field_data_field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['field'] = 'field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['label'] = '';
  $handler->display->display_options['fields']['field_npr_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npr_byline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_npr_byline']['type'] = 'text_plain';
  /* Field: Content: NPR Image */
  $handler->display->display_options['fields']['field_npr_image']['id'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['table'] = 'field_data_field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['field'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['label'] = '';
  $handler->display->display_options['fields']['field_npr_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_npr_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_npr_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: By Date */
  $handler = $view->new_display('page', 'By Date', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Featured Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_articles' => 'featured_articles',
    'latest_articles' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'npr_story' => 'npr_story',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['path'] = 'the-latest';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Home';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['the_latest'] = $view;

  $view = new view();
  $view->name = 'topic';
  $view->description = 'Topic listings corresponding to the main menu';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Topic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topic';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'article';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Video poster */
  $handler->display->display_options['fields']['field_video_poster']['id'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['table'] = 'field_data_field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['field'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['label'] = '';
  $handler->display->display_options['fields']['field_video_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_poster']['type'] = 'text_plain';
  /* Field: Content: Carousel */
  $handler->display->display_options['fields']['field_carousel']['id'] = 'field_carousel';
  $handler->display->display_options['fields']['field_carousel']['table'] = 'field_data_field_carousel';
  $handler->display->display_options['fields']['field_carousel']['field'] = 'field_carousel';
  $handler->display->display_options['fields']['field_carousel']['label'] = '';
  $handler->display->display_options['fields']['field_carousel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel']['type'] = 'picture';
  $handler->display->display_options['fields']['field_carousel']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_carousel']['delta_offset'] = '0';
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Content: Part of multi-recipe */
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['id'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['field'] = 'field_part_of_multi_recipe';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['type'] = 'text_plain';
  /* Field: Content: Soundcloud */
  $handler->display->display_options['fields']['field_soundcloud']['id'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['table'] = 'field_data_field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['field'] = 'field_soundcloud';
  $handler->display->display_options['fields']['field_soundcloud']['label'] = '';
  $handler->display->display_options['fields']['field_soundcloud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soundcloud']['type'] = 'soundcloud_link';
  /* Field: Content: NPR Image */
  $handler->display->display_options['fields']['field_npr_image']['id'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['table'] = 'field_data_field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['field'] = 'field_npr_image';
  $handler->display->display_options['fields']['field_npr_image']['label'] = '';
  $handler->display->display_options['fields']['field_npr_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_npr_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_npr_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_npr_byline']['id'] = 'field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['table'] = 'field_data_field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['field'] = 'field_npr_byline';
  $handler->display->display_options['fields']['field_npr_byline']['label'] = '';
  $handler->display->display_options['fields']['field_npr_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_npr_byline']['type'] = 'text_plain';
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';

  /* Display: Example Page */
  $handler = $view->new_display('page', 'Example Page', 'page');
  $handler->display->display_options['display_description'] = 'Base the actual top pages on this display';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'npr_story' => 'npr_story',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    814 => '814',
    816 => '816',
    815 => '815',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'topic_view';

  /* Display: Chew on This */
  $handler = $view->new_display('page', 'Chew on This', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chew on This';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Food (news) for thought';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'food';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Chew On This';
  $handler->display->display_options['menu']['description'] = 'Editorial articles about food';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: That's the Spirit */
  $handler = $view->new_display('page', 'That\'s the Spirit', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'That\'s the Spirit';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Articles about beverages';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Wine, craft beer, cocktails – curated to quench your thirst';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Video name */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['label'] = '';
  $handler->display->display_options['fields']['field_video_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_file']['type'] = 'text_plain';
  /* Field: Content: Video poster */
  $handler->display->display_options['fields']['field_video_poster']['id'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['table'] = 'field_data_field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['field'] = 'field_video_poster';
  $handler->display->display_options['fields']['field_video_poster']['label'] = '';
  $handler->display->display_options['fields']['field_video_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_poster']['type'] = 'text_plain';
  /* Field: Content: Recipe */
  $handler->display->display_options['fields']['field_recipe']['id'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['table'] = 'field_data_field_recipe';
  $handler->display->display_options['fields']['field_recipe']['field'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_recipe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_recipe']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_recipe']['multi_type'] = 'ul';
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subhead']['type'] = 'text_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['recipe_description']['id'] = 'recipe_description';
  $handler->display->display_options['fields']['recipe_description']['table'] = 'field_data_recipe_description';
  $handler->display->display_options['fields']['recipe_description']['field'] = 'recipe_description';
  $handler->display->display_options['fields']['recipe_description']['label'] = '';
  $handler->display->display_options['fields']['recipe_description']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'drink';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'That\'s the Spirit';
  $handler->display->display_options['menu']['description'] = 'Articles about drink';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Reviews */
  $handler = $view->new_display('page', 'Reviews', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reviews';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Restaurant reviews from around Boston and New England';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'reviews';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reviews';
  $handler->display->display_options['menu']['description'] = 'Reviews of restaurants, food purveyors, and other food experiences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Recipes */
  $handler = $view->new_display('page', 'Recipes', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recipes';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Recipes';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Hand-picked local recipes&mdash;prepare something wicked fresh tonight';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: By */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'article_mapping',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Recipe */
  $handler->display->display_options['fields']['field_recipe']['id'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['table'] = 'field_data_field_recipe';
  $handler->display->display_options['fields']['field_recipe']['field'] = 'field_recipe';
  $handler->display->display_options['fields']['field_recipe']['label'] = '';
  $handler->display->display_options['fields']['field_recipe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_recipe']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_recipe']['multi_type'] = 'ul';
  /* Field: Content: Part of multi-recipe */
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['id'] = 'field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['fields']['field_part_of_multi_recipe']['field'] = 'field_part_of_multi_recipe';
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Zinger Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multi_recipe' => 'multi_recipe',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'recipes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recipes';
  $handler->display->display_options['menu']['description'] = 'Pretty much self-explanatory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Neighborhood Nosh */
  $handler = $view->new_display('page', 'Neighborhood Nosh', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhood Nosh';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Stories from Boston\'s neighborhoods';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Good stories and great eats from your favorite local neighborhoods';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'neighborhoods';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Neighborhood Nosh';
  $handler->display->display_options['menu']['description'] = 'Food stories from the neighborhoods of Metro Boston';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Table Talk */
  $handler = $view->new_display('page', 'Table Talk', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table Talk';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Editorials and weekly wrap-ups';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Commentaries about the rich connection our region has with its local food, and weekly editorials to keep you updated';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['path'] = 'table-talk';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Table Talk';
  $handler->display->display_options['menu']['description'] = 'Editorials and weekly wrap-ups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-topics';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Topic/% */
  $handler = $view->new_display('page', 'Topic/%', 'page_7');
  $handler->display->display_options['display_description'] = 'One view to cover multiple sections';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'List of topics';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<p>Please select from this list of topics:</p>
<ul class="list-unstyled">
  <li><h2><a href="/topics/dine-out">DINE OUT</a></h2></li>
  <li><h2><a href="/topics/eat-in">EAT IN</a></h2></li>
  <li><h2><a href="/topics/features">FEATURES</a></h2></li>
</ul>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'sections' => 'sections',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'multi_recipe' => 'multi_recipe',
    'npr_story' => 'npr_story',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Part of multi-recipe (field_part_of_multi_recipe) */
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['id'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['table'] = 'field_data_field_part_of_multi_recipe';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['field'] = 'field_part_of_multi_recipe_value';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_part_of_multi_recipe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'topics/%';
  $export['topic'] = $view;

  return $export;
}
