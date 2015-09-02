<div class="wgbh-food-links">
  <div class="headline">FOOD @ <img alt="WGBH" src="/sites/all/themes/craving_boston/images/wgbh-blue-shadow.png" /></div>
  <?php
    $menu = menu_navigation_links('menu-wgbh-food-links'); 
    print theme('links__menu_wgbh_food_links', array('links' => $menu)); 
  ?>
</div>