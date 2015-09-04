(function ($) {

Drupal.behaviors.wgbhBrandingModule = {
  attach: function (context) {
    
    $('body').css({'margin-top': '0'});
    // Create WGBH links
    var links =
      "<div class='wgbh-links'>\n" +
      "  <ul class='menu pull-left'>\n" +
      "    <li><a href='http://www.wgbh.org' title='WGBH.org'  class='image'><img src='/sites/all/modules/wgbh_branding/images/wgbh_mini_logo.png' alt='WGBH' /></a>\n" +
      "  </ul>\n" +
      "  <ul class='menu pull-right'>\n" +
      "    <li class='my-wgbh'><a href='http://www.wgbh.org/mywgbh' title='Go to myWGBH'>myWGBH</a></li>\n" +
      "    <li><a href='http://www.wgbh.org/donateButton' title='Donate to WGBH'  class='donate'>Donate</a></li>\n" +
      "  </ul>\n" +
      "</div>\n";      
    
    
    $('body').prepend(links);
    $('body').animate({ 'margin-top' : '47px' });
    $('body .wgbh-links').animate({ 'top' : '0' });
  }
};

})(jQuery);
