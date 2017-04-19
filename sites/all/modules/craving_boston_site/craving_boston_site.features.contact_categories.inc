<?php
/**
 * @file
 * craving_boston_site.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function craving_boston_site_contact_categories_defaults() {
  return array(
    'General inquiries' => array(
      'category' => 'General inquiries',
      'recipients' => 'stacy_buchanan@wgbh.org,andrea_wolanin@wgbh.org',
      'reply' => 'Thanks for your email! We\'ll be in touch as soon as the soufflé is done.

Best regards,
The Craving Boston team',
      'weight' => 0,
      'selected' => 1,
    ),
    'Press & Events' => array(
      'category' => 'Press & Events',
      'recipients' => 'stacy_buchanan@wgbh.org,andrea_wolanin@wgbh.org',
      'reply' => 'Thanks for your email! We\'ll be in touch as soon as the soufflé is done.

Best regards,
Stacy Buchanan, Craving Boston producer',
      'weight' => 0,
      'selected' => 0,
    ),
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'tim_kinnel@wgbh.org',
      'reply' => '',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
