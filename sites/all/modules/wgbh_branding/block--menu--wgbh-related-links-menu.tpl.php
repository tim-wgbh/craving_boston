<div class="wgbh-related-links">
  <div class="headline"><?php print variable_get('wgbh_related_links_type', 'Related Content'); ?> @ <img alt="WGBH" src="<?php print base_path() . drupal_get_path('module', 'wgbh_branding'); ?>/images/wgbh-blue-shadow.png" /></div>
  <?php
    $menu = menu_navigation_links('wgbh-related-links-menu'); 
    print theme('links__wgbh_related_links_menu', array('links' => $menu)); 
  ?>
</div>