(function ($) {

Drupal.behaviors.wgbhBrandingModule = {
  attach: function (context) {
    
    $('body').css({'margin-top': '0'});
    // Create WGBH links
    var links =
      "<div class='wgbh-links'>\n" +
      "  <div class='wgbh-logo'><a href='http://www.wgbh.org' title='WGBH.org'  class='image'><img src='/sites/all/modules/wgbh_branding/images/wgbh_mini_logo.png' alt='WGBH' /></a></div>\n" +
      "  <div class='my-wgbh'><a href='http://www.wgbh.org/mywgbh' title='Go to myWGBH'>myWGBH</a></div>\n" +
      "  <div class='donate-button'><a href='http://www.wgbh.org/donateButton' title='Donate to WGBH'>Donate</a></div>\n" +
      "</div>\n";      
    
    
    $('body').prepend(links);
    $('body').animate({ 'margin-top' : '47px' });
    $('body .wgbh-links').animate({ 'top' : '0' });
  }
};

})(jQuery);
