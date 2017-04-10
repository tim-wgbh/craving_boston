<?php

drupal_add_js(drupal_get_path('theme', 'craving_boston') . '/craving_boston.js');

define('AUDIO_ICON','<i class="fo fo-audio"></i>');
define('VIDEO_ICON','<i class="fo fo-video"></i>');
define('RECIPE_ICON','<i class="fo fo-recipe"></i>');

/**
 * Theming the video field makes it possible to move it around as necessary using
 * the admin interface
 */
function craving_boston_field__field_video_file($vars) {

  global $conf;

  // No label and we must convert the file name to video and post files
  // $video_file = s3_file($vars['items'][0]['#markup'] . '.mp4');
  // $poster = s3_file($vars['items'][0]['#markup'] . '.jpg');
  $video_file = cloudfront_file($vars['items'][0]['#markup'] . '.mp4');
  $poster = cloudfront_file($vars['items'][0]['#markup'] . '.jpg');

  $output = <<<EOC
    <div class="player-wrapper">
      <video class="mejs-ted" style="width:100%; height: 100%" width="100%" height="100%" type="video/mp4" poster="$poster">
        <source src="$video_file" type="video/mp4" >
        Your browser does not support the video tag.
      </video>
    </div>
EOC;
  return $output;
}

/**
 * Theme audio output
 */
// function craving_boston_field__field_audio($vars) {
//   global $conf;
//   $output = '';
//   if (isset($vars['items'][0]['#markup'])) {
//       $audio = $vars['items'][0]['#markup'];
//       $output .= '<div class="player-wrapper">';
//       $output .= <<<EOD
//         <audio controls width="100%">
//           <source src="" type="audio/mp3">
//           Your browser doesn't support the audio tag.
//         </audio>
//       </div>
//       <div class="clearfix"></div>
// EOD;
//   }
//   return $output;
// }

/**
 * Theme story source output
 */
function craving_boston_field__field_story_source($vars) {
  $output = '';
  if (isset($vars['items'][0]['#markup'])) {
    $output = '<p><span class="label">From:</span> <em>' .  $vars['items'][0]['#markup']. '</em></p>';
  }
  return $output;
}

/**
 * Theme an img tag for displaying the image.
 */
function craving_boston_image_display($node, $label, $url, $attributes) {
  $attributes['class'] = "caption ". (isset($attributes['class']) ? $attributes['class'] : "");
  return theme('image', $url, $node->title, $node->title, $attributes, FALSE);
}


function craving_boston_preprocess_html(&$vars) {
  $topics = ["food","drink","reviews","recipes","neighborhoods","table-talk","topic"];
  $path = explode('/',preg_replace("/#.*/", '',drupal_get_path_alias()));

  if (in_array($path[0], $topics)) {
    $vars['classes_array'][] = 'topic-page';
  }
  if (user_access('access_toolbar')) {
    $vars['classes_array'][] = 'is_admin';
  }
  if (preg_match('/food\-and\-wine\-festival/', $path[0])) {
    $vars['classes_array'][] = 'food-and-wine-festival';
  }
}
function craving_boston_preprocess_page(&$vars) {
  if (preg_match('/admin/', current_path()) || preg_match('/node\/add/', current_path())) {
    $vars['admin_page'] = true;
  } else {
    $vars['admin_page'] = false;
  }

  // Food and wine page template
  $path = explode('/',preg_replace("/#.*/", '',drupal_get_path_alias()));
  if (preg_match('/food\-and\-wine\-festival\/.+/', $path[0])) {
    $vars['theme_hook_suggestions'][] = 'page__food_wine';
  }

  if  (preg_match('/^taxonomy/', current_path())) {
    $vars['title_prefix'] = "<div class='title-prefix'>Tag:</div>\n";
    $vars['tag_page'] = true;
  } else {
    $vars['tag_page'] = false;
  }

  // No sidebar for about page, faqs, contact
  if (preg_match('/(about|faqs|contact)/', current_path())) {
    $vars['page']['sidebar_first'] = null;
  }

  //Set title icon
  $vars['title_icon'] = '';
  if (isset($vars['node'])) {
    if (strpos($vars['node']->type, 'recipe') !== false) {
      $vars['title_icon'] = RECIPE_ICON;
    } else if (isset($vars['node']->field_video_file['und']) || isset($vars['node']->field_internet_video['und'])) {
      $vars['title_icon'] = VIDEO_ICON;
    } else if ( isset($vars['node']->field_audio['und']) ||
                isset($vars['node']->field_soundcloud['und']) ||
                isset($vars['node']->npr_audio['und'])) {
      $vars['title_icon'] = AUDIO_ICON;
    }
  }
}

function craving_boston_preprocess_node(&$vars) {

  $vars['title_icon'] = '';

  $node = $vars['node'];

  $vars['date'] = t('!datetime', array('!datetime' =>  date('F j, Y', $vars['created'])));

  $vars['publication_date'] = t('!datetime', array('!datetime' =>  date('F j, Y', $node->published_at)));

  # Get byline
  $vars['byline'] = '';
  $part_of_multi_recipe = false;
  switch ($node->type) {
    case 'recipe':
      $vars['title_icon'] = RECIPE_ICON;
      if (!empty($node->field_source)) {
        $vars['byline'] = strip_tags($node->field_source['und'][0]['safe_value']);
      }
      $vars['print_button'] = '<a href="javascript:window.print()"><i class="glyphicon glyphicon-print"></i></a>';
      $part_of_multi_recipe = ($node->field_part_of_multi_recipe['und'][0]['value'] == "1");

    case 'multi_recipe':
      $vars['title_icon'] = RECIPE_ICON;
      if (!empty($node->field_author)) {
        $vars['byline'] = $node->field_author['und'][0]['safe_value'];
      }
      $vars['print_button'] = '<a href="javascript:window.print()" class="print-button"><i class="glyphicon glyphicon-print"></i></a>';
    case 'article':
      if (!empty($node->field_author)) {
        $vars['byline'] = $node->field_author['und'][0]['safe_value'];
      }
    case 'npr_story':
      if (!empty($node->field_npr_byline)) {
        $vars['byline'] = $node->field_npr_byline['und'][0]['safe_value'];
      }
  }

  // If the hide hero checkbox is set, hide the hero image for full-page displays
  if ($vars['page'] && isset($node->field_hide_hero['und']) && $node->field_hide_hero['und'][0]['value'] == '1') {
    hide($vars['content']['field_image']);
  }

  // Handle related content
  if (in_array($node->type, array('article', 'recipe', 'multi_recipe', 'npr_story')) && !$part_of_multi_recipe) {
    $view = views_get_view('cb_similar_by_terms');
    $preview = $view->preview('block');
    if (count($view->result) > 0) {
      $vars['related_content'] = "<h3>" . $view->get_title() . "</h3>\n" . $preview;
    }
  }

  //Handle corporate sponsor for food & wine
  if ($node->type == 'corporate_sponsor') {
    $style_name = 'food_wine_logo';
    $url = image_style_url($style_name, $node->field_image['und'][0]['uri']);
    $vars['sponsor_link'] = $node->field_link['url'];
    $vars['logo'] = "<img src='$url' alt='$node->title' />";
  }

  # Set up video display for articles
  if ($node->type == 'article') {

    // If there is audio, set the audio variable
    if (isset($node->field_audio['und'])) {
      $vars['audio'] =  $node->field_audio['und'][0]['value'];
      $vars['title_icon'] = AUDIO_ICON;
      hide($vars['content']['field_soundcloud']);
    } else if (isset($node->field_soundcloud['und'])) {
      $vars['audio'] =  $node->field_soundcloud['und'][0]['content'];
      $vars['title_icon'] = AUDIO_ICON;
      hide($vars['content']['field_audio']);
    } else {
      hide($vars['content']['field_audio']);
      hide($vars['content']['field_soundcloud']);
    }

    if (isset($node->field_pmp_guid['und'])) {
      hide($vars['content']['field_pmp_guid']);
      $vars['classes_array'][] = 'pmp-article';
    }

    // If there is a story source, set it
    if (isset($node->field_story_source['und'])) {
      $vars['story_source'] =  $node->field_story_source['und'][0]['value'];
    } else {
      hide($vars['content']['story_source']);
    }

    if (isset($node->field_pmp_source['und'])) {
      $vars['content']['field_source'] = theme('story_source', $node->field_pmp_source['und'][0]['value']);
    }

    // Video processing for HLS streaming S3 videos
    $vars['video'] = '';
    $vars['poster'] = '';
    if (!empty($node->field_internet_video) || !empty($node->field_video_file)) {
      $vars['title_icon'] = VIDEO_ICON;

      $key = array_search('node-article', $vars['classes_array']);
      $vars['classes_array'][$key] = 'node-video';
      if (!empty($node->field_internet_video)) {
        $vars['video'] = $node->field_internet_video['und'][0]['video_url'];
      } else {
        $vars['video'] = s3_file($node->field_video_file['und'][0]['value'] . ".mp4");
        $vars['poster'] = s3_file($node->field_video_file['und'][0]['value'] . ".jpg");
      }
    }
  }
}

function craving_boston_preprocess_views_view_fields(&$vars) {

  $content_views = ['featured', 'topic', 'the_latest', 'article_archive', 'cb_similar_by_terms', 'most_popular_now'];

  # Get byline
  $fields = $vars['fields'];

  if (!isset($fields['type'])) return;

  $vars['byline'] = '';

  if (array_key_exists('field_author', $fields) && $fields['field_author']->content) {
    $vars['byline'] = $fields['field_author']->content;
  } else if (array_key_exists('field_npr_byline', $fields) && $fields['field_npr_byline']->content) {
    $vars['byline'] = $fields['field_npr_byline']->content;
  }


  # Handle title/headline
  if (!empty($fields['field_headline']->content)) {
    $vars['headline'] =  $fields['field_headline']->content;
  } else {
    $vars['headline'] =  $fields['title']->content;
  }

  # Handle video
  $vars['display'] = true;
  $title_icon = '';

  if (in_array($vars['view']->name, $content_views)) {
    if (!empty($fields['field_carousel']->content)) {
      $vars['image'] = render($vars['row']->field_field_carousel[0]['rendered']);
    } else if (!empty($fields['field_npr_image']->content)) {
      $vars['image'] = $fields['field_npr_image']->content;
    } else {
      $vars['image'] = $fields['field_image']->content;
    }
    if (!empty($fields['field_video_file']->content) || !empty($fields['field_internet_video']->content)) {
      $vars['image'] = $fields['field_image']->content;
//       $vars['image'] = '<img typeof="foaf:Image" src="' . s3_file($fields['field_video_poster']->content) . '" />' ;
       $title_icon = VIDEO_ICON;
    }

    $vars['is_recipe'] = false;
    if ($fields['type']->raw == 'recipe') {
       $title_icon = RECIPE_ICON;
      if (!empty($fields['field_part_of_multi_recipe']) && $fields['field_part_of_multi_recipe']->content == 'yes') {
        $vars['display'] = false;
      }
      $vars['is_recipe'] = true;
    } else if ($fields['type']->raw == 'multi_recipe') {
      $title_icon = RECIPE_ICON;
      $vars['is_recipe'] = true;
    }
    if (!empty($fields['field_audio']->content) || !empty($fields['field_soundcloud']->content)) {
      $title_icon = AUDIO_ICON;
    }

    // Set the deck to the subhead
    $vars['deck'] = _subhead_deck($fields);
  } else if ($vars['view']->name == 'featured') {
    $vars['image'] = $fields['field_image']->content;
  }

  $vars['headline'] = $title_icon . $vars['headline'];
}

function _subhead_deck($fields) {
  if (!empty($fields['field_subhead']) && !empty($fields['field_subhead']->content)) {
    $deck = '<p>' . $fields['field_subhead']->content . '</p>';
  } else if (!empty($fields['body']) && !empty($fields['body']->content)) {
    $deck = '<p>' . $fields['body']->content . '</p>';
  } else {
    $deck = false;
  }
  return $deck;
}

/**
* hook_form_FORM_ID_alter
*/
function craving_boston_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
  $form['search_block_form']['#size']          = 25;  // define size of the textfield
  $form['actions']['submit']['#type'] = 'image_button';
  $form['actions']['submit']['#value'] = '';
  $form['actions']['submit'] = array(
    '#type' => 'image_button',
    '#src' => base_path() . drupal_get_path('theme', 'craving_boston') . '/images/search_button_image.png'
  );

  // Alternative (HTML5) placeholder attribute instead of using the javascript
  $form['search_block_form']['#attributes']['placeholder'] = t('Search...');
}

/**********
 * Utility functions to handle S3 and streaming files
 */
function cloudfront_file($filename) {
  global $conf;
  return 'http://' . $conf['cloudfront_domain'] . '/video/' . $filename;
}

function s3_file($filename) {
  global $conf;
  return 'http://s3.amazonaws.com/' . $conf['s3fs_bucket'].'/video/' . $filename;
}

function wowza_stream($filename) {
  global $conf;

  $video = str_replace('.mp4', '', $filename);
  return 'http://' . $conf['amazon_domain'] . '/vods3/_definst_/mp4:amazons3/' . $conf['amazons3_bucket'] . '/' . $conf['wgbh_site'] . '/' . $video . '/playlist.m3u8';
}
