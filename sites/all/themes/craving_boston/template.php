<?php

drupal_add_js(drupal_get_path('theme', 'craving_boston') . '/craving_boston.js');

/**
 * Theme an img tag for displaying the image.
 */
function craving_boston_image_display($node, $label, $url, $attributes) {
  $attributes['class'] = "caption ". (isset($attributes['class']) ? $attributes['class'] : "");
  return theme('image', $url, $node->title, $node->title, $attributes, FALSE);
}


function craving_boston_preprocess_page(&$vars) {
  if (preg_match('/admin/', current_path()) || preg_match('/node\/add/', current_path())) {
    $vars['admin_page'] = true;
  } else {
    $vars['admin_page'] = false;
  }
}
    
function craving_boston_preprocess_node(&$vars) {
  
  $node = $vars['node'];
//   if ($vars['view_mode'] == 'full' && node_is_page($vars['node'])) {
//      $vars['classes_array'][] = 'node-full';
//    }
  $vars['date'] = t('!datetime', array('!datetime' =>  date('j F Y', $vars['created'])));
  
  if ($node->type != 'article') return;
      
  // Video processing for HLS streaming S3 videos
  if (!empty($node->field_video_file['und'][0]['value'])) {
    $key = array_search('node-article', $vars['classes_array']);
    $vars['classes_array'][$key] = 'node-video';
    $vars['video'] = wowza_stream($node->field_video_file['und'][0]['value']);
    $vars['poster'] = s3_file($node->field_video_poster['und'][0]['value']);
    $vars['has_video'] = true;
  } else {
    $vars['video'] = '';
    $vars['poster'] = '';
    $vars['has_video'] = false;
  }
}

function craving_boston_preprocess_views_view_fields(&$vars) {
  $vars['display'] = true;
  $fields = $vars['fields'];
  if (in_array($vars['view']->name, ['topic', 'the_latest'])) {
    if (empty($fields['field_video_file']->content)) {
      $vars['image'] = $fields['field_image']->content;
      $vars['has_video'] = false;
    } else {
      $vars['image'] = '<img typeof="foaf:Image" src="' . s3_file($fields['field_video_poster']->content) . '" />' ;
      $vars['has_video'] = true;
    }

    if ($fields['type']->raw == 'recipe') {
      if ($fields['field_part_of_multi_recipe']->content == 'yes') {
        $vars['display'] = false;
      }
      $vars['is_recipe'] = true;
      $vars['deck'] = null;
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
 
function s3_file($filename) {
  global $conf;
  return 'http://s3.amazonaws.com/' . $conf['amazons3_bucket'].'/' . $conf['wgbh_site'].'/' . $filename;
}

function wowza_stream($filename) {
  global $conf;
  
  $video = str_replace('.mp4', '', $filename);
  return 'http://' . $conf['amazon_domain'] . '/vods3/_definst_/mp4:amazons3/' . $conf['amazons3_bucket'] . '/' . $conf['wgbh_site'] . '/' . $video . '/playlist.m3u8';
}

