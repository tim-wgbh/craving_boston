<?php
/**
 * @file
 * craving_boston_site.default_dfp_tags.inc
 */

/**
 * Implements hook_default_dfp_tag().
 */
function craving_boston_site_default_dfp_tag() {
  $export = array();

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'leaderboard';
  $tag->slot = 'Leaderboard (with super leaderboard)';
  $tag->adunit = 'craving_boston_leaderboard';
  $tag->size = '970x90,728x90, 320x50';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '<none>',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '970x300',
        'ad_sizes' => '970x90',
      ),
      1 => array(
        'browser_size' => '728x300',
        'ad_sizes' => '728x90',
      ),
      2 => array(
        'browser_size' => '320x300',
        'ad_sizes' => '320x50',
      ),
    ),
  );
  $export['leaderboard'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'medium_rectangle_1';
  $tag->slot = 'Medium Rectangle 1';
  $tag->adunit = 'craving_boston_mr_1';
  $tag->size = '300x250,320x50';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '320x300',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['medium_rectangle_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'medium_rectangle_2';
  $tag->slot = 'Medium Rectangle 2';
  $tag->adunit = 'craving_boston_mr_2';
  $tag->size = '300x250,320x50';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '320x300',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['medium_rectangle_2'] = $tag;

  return $export;
}
