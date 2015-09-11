<div class="wgbh-food-links">
  <div class="headline">FOOD @ <img alt="WGBH" src="<?php print base_path() . drupal_get_path('module', 'wgbh_branding'); ?>/images/wgbh-blue-shadow.png" /></div>
  <?php
    $menu = menu_navigation_links('wgbh-food-links-menu'); 
    print theme('links__wgbh_food_links_menu', array('links' => $menu)); 
  ?>
</div>