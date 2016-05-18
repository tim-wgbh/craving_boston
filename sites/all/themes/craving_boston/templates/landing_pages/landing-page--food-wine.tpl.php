<div id="page" class="landing-page">
  <header id="masthead" class="site-header container" role="banner">
    <div class="row">
      <div class="col-md-3 col-xs-12">
        <div id="site-banner">
          <a href="/" title="Home">
            <img src="/sites/all/themes/craving_boston/images/craving-boston-banner-logo-landing.png" />
          </a>
        </div>
      </div>
      <div class="col-md-9 col-xs-12">
        <div class="row mainmenu">
          <nav id="navigation" role="navigation">
            <div id="main-menu">
              <?php 
                $topic_menu = menu_navigation_links('menu-topics');
                print theme('links__menu_topics_menu', array('links' => $topic_menu));
              ?>
            </div>
          </nav>
        </div>
      </div>
    </div>
  </header>
  <div id="main-content" class="container">
    <div class="row">
      <div class="col-md-12">
        <?php print $node->body['und'][0]['value']; ?>
      </div>
    </div>
  </div>  
</div>
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
</footer>
