<?php

drupal_add_js(drupal_get_path('theme', 'craving_boston') . '/craving_boston.js');

/**
 * Theming the video field makes it possible to move it around as necessary using
 * the admin interface
 */
function craving_boston_field__field_video_file($vars) {
  
  // No label and we must convert the file name to video and post files
  $video_file = cloudfront_file($vars['items'][0]['#markup'] . '.mp4');
  $poster = cloudfront_file($vars['items'][0]['#markup'] . '.jpg');
  $output = <<<EOC
    <script src="http://jwpsrv.com/library/jYGMQmQVEeOdAyIACmOLpg.js"></script>
    <div id="jw-player"></div>
    <script type='text/javascript'>
      jwplayer('jw-player').setup({
        file: "$video_file",
        image: "$poster",
        width:  640,
        height: 360,
        primary: 'flash'
      });
    </script>
EOC;
  return $output;
// 
//   // Render the label, if it's not hidden.
//   if (!$variables['label_hidden']) {
//     $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
//   }
//   // Render the items.
//   $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
//   foreach ($variables['items'] as $delta => $item) {
//     $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
//     $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
//   }
//   $output .= '</div>';
//   // Render the top-level DIV.
//   $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';
//   return $output;
}

/**
 * Theme an img tag for displaying the image.
 */
function craving_boston_image_display($node, $label, $url, $attributes) {
  $attributes['class'] = "caption ". (isset($attributes['class']) ? $attributes['class'] : "");
  return theme('image', $url, $node->title, $node->title, $attributes, FALSE);
}


function craving_boston_preprocess_html(&$vars) {
  $topics = ["food","drink","reviews","recipes","neighborhoods","table-talk"];
  $path = explode('/',preg_replace("/#.*/", '',drupal_get_path_alias()));
  if (in_array($path[0], $topics)) {
    $vars['classes_array'][] = 'topic-page';
  }
  if (user_access('access_toolbar')) {
    $vars['classes_array'][] = 'is_admin';
  }
}
function craving_boston_preprocess_page(&$vars) {
  if (preg_match('/admin/', current_path()) || preg_match('/node\/add/', current_path())) {
    $vars['admin_page'] = true;
  } else {
    $vars['admin_page'] = false;
  }
}
    
function craving_boston_preprocess_node(&$vars) {

  $vars['has_video'] = false; 
  
  $node = $vars['node'];
//   if ($vars['view_mode'] == 'full' && node_is_page($vars['node'])) {
//      $vars['classes_array'][] = 'node-full';
//    }
  $vars['date'] = t('!datetime', array('!datetime' =>  date('j F Y', $vars['created'])));
  
  # Combine byline and subhead
  $byline = '';
  switch ($node->type) {
    case 'recipe':
      if (!empty($node->field_source)) {
        $byline = 'By ' . strip_tags($node->field_source['und'][0]['safe_value']);
      }
    default:
      if (!empty($node->field_source)) {
        $byline = 'By ' . $node->field_author['und'][0]['safe_value'];
      }
  }
  
  if ($node->field_subhead && array_key_exists('und', $node->field_subhead)) {
    $vars['subhead_byline'] = strip_tags($node->field_subhead['und'][0]['safe_value']) . '&nbsp;&nbsp;' . $byline;
  } else {
    $vars['subhead_byline'] = $byline;  
  }
  
  # Set up video display for articles
  if ($node->type != 'article') return;
      
  // Video processing for HLS streaming S3 videos
  $vars['video'] = '';
  $vars['poster'] = '';
  if (!empty($node->field_internet_video) || !empty($node->field_video_file)) {
    $vars['has_video'] = true;
    $key = array_search('node-article', $vars['classes_array']);
    $vars['classes_array'][$key] = 'node-video';
    if (!empty($node->field_internet_video)) {
      $vars['video'] = $node->field_internet_video['und'][0]['video_url'];
    } else {
      $vars['video'] = s3_file($node->field_video_file['und'][0]['value'] . ".mp4");
      $vars['poster'] = s3_file($node->field_video_file['und'][0]['value'] . ".jpg");
    
    //NO STREAMING VIDEO FOR THE MOMENT
//       if (preg_match('/\.m3u8$/', $node->field_video_file['und'][0]['value'])) {
//         $vars['video'] = wowza_stream($node->field_video_file['und'][0]['value']);
//       } else {
//         $vars['video'] = s3_file($node->field_video_file['und'][0]['value']);
//       }      
//       $vars['poster'] = s3_file($node->field_video_poster['und'][0]['value']);
    }
  }
}

function craving_boston_preprocess_views_view_fields(&$vars) {
  $vars['display'] = true;
  $vars['has_video'] = false;
  $fields = $vars['fields'];
  if (in_array($vars['view']->name, ['topic', 'the_latest'])) {
    $vars['image'] = $fields['field_image']->content;
    if (!empty($fields['field_video_file']->content) && !empty($fields['field_internet_video']->content)) {
      $vars['image'] = '<img typeof="foaf:Image" src="' . s3_file($fields['field_video_poster']->content) . '" />' ;
       $vars['has_video'] = true;
    }
    if ($fields['type']->raw == 'recipe') {
      if ($fields['field_part_of_multi_recipe']->content == 'yes') {
        $vars['display'] = false;
      }
      $vars['is_recipe'] = true;
      $vars['deck'] = $fields['recipe_description']->content;
//       $vars['deck'] = $fields['recipe_description']->content;
    } else if ($fields['type']->raw == 'multi_recipe') {
      $vars['is_recipe'] = true;
      $vars['deck'] = $fields['field_recipe']->content;
//      $vars['deck'] = $fields['body']->content;
    } else {
      $vars['is_recipe'] = false;
      $vars['deck'] = $fields['body']->content;
    }
  }
}
/**********
 * Utility functions to handle S3 and streaming files
 */
function cloudfront_file($filename) {
  global $conf;
  return 'http://' . $conf['cloudfront_domain'] . '/'  . $conf['wgbh_site'].'/' . $filename;
}
 
function s3_file($filename) {
  global $conf;
  return 'http://s3.amazonaws.com/' . $conf['amazons3_bucket'].'/' . $conf['wgbh_site'].'/' . $filename;
}

function wowza_stream($filename) {
  global $conf;
  
  $video = str_replace('.mp4', '', $filename);
  return 'http://' . $conf['amazon_domain'] . '/vods3/_definst_/mp4:amazons3/' . $conf['amazons3_bucket'] . '/' . $conf['wgbh_site'] . '/' . $video . '/playlist.m3u8';
}

