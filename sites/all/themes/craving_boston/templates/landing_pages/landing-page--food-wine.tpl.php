<div id="page" class="landing-page">
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
