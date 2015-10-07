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
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_about_craving_boston';
  $fe_block_boxes->body = '<p>WGBH and award-winning journalist Catherine Smart are on a mission to bring you the best local food stories, served fresh daily. For decades, we&#39;ve delivered the cooking shows you know and love. Now we&rsquo;re going out into the community to explore all aspects of our region&#39;s food culture.</p><p>Whether you want to learn more about how innovation is affecting the way we eat, find out if the fries at that new hotspot are really worth the wait, or need a tried and tested recipe for an impromptu dinner party, <em>Craving Boston</em> is your one-stop shop for all things food in Boston and New England.</p><p><a href="/about" title="Learn more">Learn more &gt;</a></p>';

  $export['block_about_craving_boston'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_logo';
  $fe_block_boxes->body = '<p><a href="/" title="Go home"><img alt="Craving Boston logo" src="/sites/all/themes/craving_boston/images/craving-boston-logo-footer.png" /></a></p>

';

  $export['block_footer_logo'] = $fe_block_boxes;


  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Rail Newsletter Signup';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rail_newsletter_signup';
  $fe_block_boxes->body = '<p>Sign-up for updates from <em>Craving Boston</em>, and explore New England\'s food, one spoonful at a time!</p><p><iframe align="left" frameborder="0" height="80" marginheight="0" marginwidth="0" scrolling="no" src="http://be.wgbh.org/subscription/cravingboston.htm" width="250"></iframe></p><div class="clearfix">&nbsp;</div>';

  $export['rail_newsletter_signup'] = $fe_block_boxes;

  return $export;
}
