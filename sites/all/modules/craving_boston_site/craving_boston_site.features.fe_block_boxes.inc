<?php
/**
 * @file
 * craving_boston_site.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function craving_boston_site_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About Craving Boston';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'block_about_craving_boston';
  $fe_block_boxes->body = '<p>It’s our mission to provide you thoughtful content you can use everyday, and inspire you to explore the deep connection between our region and its cuisine. Whether<br />
&nbsp;you want to learn more about how innovation is affecting our food culture, read about a new local restaurant, or are looking for a locally-inspired recipe for dinner tonight,<br />
<em>Craving Boston</em> is your daily destination for food in Boston and New England.</p>
';

  $export['block_about_craving_boston'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_logo';
  $fe_block_boxes->body = '<p><a href="/" title="Go home"><img alt="Craving Boston logo" src="/sites/all/themes/craving_boston/images/craving-boston-logo-footer.png" /></a></p>
';

  $export['block_footer_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Newsletter sign-up';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_newsletter_signup';
  $fe_block_boxes->body = '<p><a>Sign up for our newsletter!</a></p>

<p><input size="25" /><br />
<button class="btn btn-sm">Feed Me</button></p>
';

  $export['block_newsletter_signup'] = $fe_block_boxes;

  return $export;
}
