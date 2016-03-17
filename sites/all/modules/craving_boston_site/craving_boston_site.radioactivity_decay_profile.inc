<?php
/**
 * @file
 * craving_boston_site.radioactivity_decay_profile.inc
 */

/**
 * Implements hook_default_radioactivity_decay_profile().
 */
function craving_boston_site_default_radioactivity_decay_profile() {
  $export = array();

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'most_popular_all_time';
  $radioactivity_decay_profile->name = 'Most Popular All-time';
  $radioactivity_decay_profile->description = '';
  $radioactivity_decay_profile->enable_decay = 0;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 21600;
  $radioactivity_decay_profile->cut_off = '0.1';
  $radioactivity_decay_profile->storage = 'Live';
  $export['most_popular_all_time'] = $radioactivity_decay_profile;

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'most_popular_now';
  $radioactivity_decay_profile->name = 'Most Popular Now';
  $radioactivity_decay_profile->description = 'What people are looking at now';
  $radioactivity_decay_profile->enable_decay = 1;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 2160;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['most_popular_now'] = $radioactivity_decay_profile;

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'most_popular_recently';
  $radioactivity_decay_profile->name = 'Most Popular Recently';
  $radioactivity_decay_profile->description = '';
  $radioactivity_decay_profile->enable_decay = 1;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 60480;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['most_popular_recently'] = $radioactivity_decay_profile;

  return $export;
}
