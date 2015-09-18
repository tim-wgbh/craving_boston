(function ($) {

Drupal.behaviors.cravingBostonTheme = {
  attach: function (context) {
      
    // Create captions for images with titles
    $('.field-name-field-image picture, .field-name-body img').each(function() {
      var $element = $(this);
      var caption = $element.attr('title');
      if (typeof caption !== typeof undefined && caption !== false && caption.trim() != '') {
        $element.wrap('<div class="image-with-caption"></div>');
        $element.parent().append('<div class="image-caption">' + caption + '</div>') 
      }
    });
    $('.image-with-caption').each(function() {
      if ($(this).parent().prop('tagName') == 'STRONG') $(this).unwrap().unwrap();
    });
            
    // Mobile menu
    // Add close button
    $('#mobile-menu > ul').append('<li class="close-menu"><a href="#"><img src="/sites/all/themes/craving_boston/images/banned.png" alt="close" /></a></li>');
    $('body').on('click', '#mobile-menu > ul > li.close-menu', function () {
      $('#mobile-menu').animate({ left: 1024});
     }); 
      
    $('body').on('click','#mobile-select', function() {
      $('#mobile-menu').css({display:'block', width: '100%' }).animate({ left: 0 });
    });
    
  }
};

})(jQuery);
