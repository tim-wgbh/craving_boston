(function ($) {

Drupal.behaviors.wgbhLinksModule = {
  attach: function (context) {
    
    $('body').css({'margin-top': '0'});
    // Create WGBH links
    var links =
      "<div class='wgbh-links'>\n" +
      "  <ul class='menu'>\n" +
      "    <li><a href='http://www.wgbh.org' title='WGBH.org'  class='image'><img src='/sites/all/modules/wgbh_links/images/wgbh_mini_logo.png' alt='WGBH' /></a>\n" +
      "    <li><a href='http://www.wgbh.org/donateButton' title='Donate to WGBH'  class='donate'>Donate</a></li>\n" +
      "    <li><a href='http://www.wgbh.org/support' title='Find out all the ways to support WGBH'>Support</a></li>\n" +
      "    <li><a href='http://www.wgbh.org/mywgbh' title='Got to myWGBH'>MyWGBH</a></li>\n" +
      "  </ul>\n" +
      "</div>\n";      
    
    
    $('body').prepend(links);
    $('body').animate({ 'margin-top' : '47px' });
    $('body .wgbh-links').animate({ 'top' : '0' });
  }
};

})(jQuery);
