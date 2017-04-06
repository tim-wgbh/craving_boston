<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.5&appId=146487272381428";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<div id="mobile-menu">
  <?php
    $topic_menu = menu_navigation_links('menu-topics');
    print theme('links__menu_topics_menu', array('links' => $topic_menu));
  ?>
</div>
<div class="mobile-back-to-top">
  <a href="#"><img src="/sites/all/themes/craving_boston/images/up-button.png" /></a>
</div>
<div id="page">
  <header id="masthead" class="site-header container" role="banner">
    <div class="row">
      <div class="col-md-12">
        <div id="site-banner">
          <a href="/food-and-wine-festival/welcome" title="Food & Wine Festival home">
            <img src="/sites/all/themes/craving_boston/images/food-wine-logo-2017-temp.jpg" />
          </a>
        </div>
      </div>
    </div>
    <div id="mobile-select"><img src="/sites/all/themes/craving_boston/images/menu-button.png" /></div>
  </header>

  <?php if ($is_front): ?>
    <div class="container">
      <?php print views_embed_view('featured', 'lead_article'); ?>
    </div>
  <?php endif; ?>

  <?php if($page['preface_first'] || $page['preface_middle'] || $page['preface_last']) : ?>
    <?php $preface_col = ( 12 / ( (bool) $page['preface_first'] + (bool) $page['preface_middle'] + (bool) $page['preface_last'] ) ); ?>
    <div id="preface-area">
      <div class="container">
        <div class="row">
          <?php if($page['preface_first']): ?><div class="preface-block col-xs-<?php print $preface_col; ?>">
            <?php print render ($page['preface_first']); ?>
          </div><?php endif; ?>
          <?php if($page['preface_middle']): ?><div class="preface-block col-xs-<?php print $preface_col; ?>">
            <?php print render ($page['preface_middle']); ?>
          </div><?php endif; ?>
          <?php if($page['preface_last']): ?><div class="preface-block col-xs-<?php print $preface_col; ?>">
            <?php print render ($page['preface_last']); ?>
          </div><?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if($page['header']) : ?>
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <div id="support">
            <?php print render($page['header']); ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

    <div id="main-content">
    <div class="container">
      <div class="row">
        <?php if($page['sidebar_first'] && !$admin_page) { $primary_col = 8; } else { $primary_col = 12; } ?>
        <div id="primary" class="content-area col-md-<?php print $primary_col; ?> col-print-offset-1 col-print-10">
          <section id="content" role="main" class="clearfix">
            <?php print $messages; ?>
            <?php if ($page['content_top']): ?><div id="content_top"><?php print render($page['content_top']); ?></div><?php endif; ?>
            <div id="content-wrap">
              <?php print render($title_prefix); ?>
              <?php if ($tag_page) { ?>
                <h1 class="page-title"><span class="tag-heading"><?php print $title; ?></span></h1>
              <?php } else if ($title) { ?>
                <h1 class="page-title"><?php print $title_icon; ?><?php print $title; ?></h1>
              <?php } ?>
              <?php print render($title_suffix); ?>
              <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
              <?php print render($page['help']); ?>
              <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
              <?php print render($page['content']); ?>
            </div>
          </section>
        </div>
        <?php if ($page['sidebar_first'] && !$admin_page): ?>
          <aside id="sidebar" class="col-md-4 col-xs-12" role="complementary">
           <?php print render($page['sidebar_first']); ?>
          </aside>
        <?php endif; ?>
      </div>
    </div>
  </div>

  <?php if($page['footer']) : ?>
    <div id="footer-block">
      <div class="container">
        <div class="row">
          <div class="col-xs-12">
            <?php print render($page['footer']); ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <div id="cb-bottom-links">
    <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third'] || $page['footer_fourth']): ?>
      <?php $footer_col = ( 12 / ( (bool) $page['footer_first'] + (bool) $page['footer_second'] + (bool) $page['footer_third'] + (bool) $page['footer_fourth'] ) ); ?>
      <div class="container">
        <div class="row">
          <div class="footer-block col-sm-3">
            <div class="region region-footer-first">
              <p>
                <img alt="WGBH" src="/sites/all/modules/wgbh_branding/images/wgbh-white-shadow-w150.png">
              </p>
            </div>
            <?php # if ($page['footer_first']) print render ($page['footer_first']); ?>
          </div>
          <div class="footer-block col-sm-3">
            <?php if ($page['footer_second']) print render ($page['footer_second']); ?>
          </div>
          <div class="footer-block col-sm-3">
            <?php if ($page['footer_third']) print render ($page['footer_third']); ?>
          </div>
          <div class="footer-block col-sm-3">
            <?php if ($page['footer_fourth']) print render ($page['footer_fourth']); ?>
          </div>
        </div>
      </div>
    <?php endif; ?>
  </div>

  <footer id="colophon" class="site-footer" role="contentinfo">
    <div class="container">
      <div class="row">
        <div class="fcred col-xs-12">
          &copy; <?php echo date("Y"); ?> The WGBH Educational Foundation
        </div>
      </div>
    </div>
  </div>
</div>
