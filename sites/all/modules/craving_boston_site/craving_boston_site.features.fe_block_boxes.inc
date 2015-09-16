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
  $fe_block_boxes->info = 'Newsletter sign-up';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_newsletter_signup';
  $fe_block_boxes->body = '<p><a>Sign up for our newsletter</a></p>



<p><input size="10" /><button class="btn sign-up">Feed Me</button></p>

';

  $export['block_newsletter_signup'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Support Banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_support_banner';
  $fe_block_boxes->body = '<div id="support-banner"><img alt="Support WGBH. We couldn\'t do it without you." src="/sites/all/modules/wgbh_branding/images/wgbh-support-banner.jpg" /></div>

';

  $export['block_support_banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Fake Ad Craft Beer Festival';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'craft_beer_ad';
  $fe_block_boxes->body = '<p><img alt="" src="/sites/default/files/Craft-Beer-Festival.jpg" style="height:264px; width:309px" /></p>

';

  $export['craft_beer_ad'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Fake Ad Food & Wine';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'food_wine_ad';
  $fe_block_boxes->body = '<p><img alt="" src="/sites/default/files/Food+Wine-ad.jpg" /></p>

';

  $export['food_wine_ad'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Rail Newsletter Signup';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rail_newsletter_signup';
  $fe_block_boxes->body = '<p>Sign-up for updates from the WGBH <strong><em>Your Don&#39;t-Miss List</em></strong>, WGBH promotions, and previews of what&#39;s coming up on WGBH TV.</p><p><iframe align="left" frameborder="0" height="80" marginheight="0" marginwidth="0" scrolling="no" src="http://be.wgbh.org/subscription/atgbhsignupcravingboston.htm" width="250"></iframe></p><div class="clearfix">&nbsp;</div>';

  $export['rail_newsletter_signup'] = $fe_block_boxes;

  return $export;
}
