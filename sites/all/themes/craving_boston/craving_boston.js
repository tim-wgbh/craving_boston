(function ($) {

Drupal.behaviors.cravingBostonTheme = {
  attach: function (context) {
      
    // Create captions for images with titles
//     $('.field-name-field-image picture, .field-name-body img').each(function() {
    $('.field-item img').each(function() {
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
      $('#mobile-menu').animate({ left: 1024, width: 0}, function() {
        $(this).css({'display': 'none'});
        });
     }); 
      
    $('body').on('click','#mobile-select', function() {
      $('#mobile-menu').css({display:'block', width: '100%' }).animate({ left: 0 });
    });
    $('body').on('click', '.mobile-back-to-top a', function(e) {
      e.preventDefault();
      window.scrollTo(0,0);
    });
    
    // Do the following only for mobile
    $(window).scroll(function() {
      if ($(window).width() < 480) {
        $('.mobile-back-to-top').show().delay(4000).fadeOut();
      }
    });
    
    // qtips for icons
    $('i').qtip({
      content: {
        text: function() {
          if ($(this).hasClass('fo-recipe'))  {
            return 'Recipe!';
          } else if ($(this).hasClass('fo-video')) {
            return 'Video!';
          } else if ($(this).hasClass('fo-audio')) {
            return 'Audio!';
          } else if ($(this).hasClass('glyphicon-print')) {
            return 'Print it!';
          }
        }
      },
      position: {
        my: 'bottom right',
        at: 'top left'
      },
      style: {
        classes: 'qtip-light qtip-bootstrap'
      }
    });
  }
};

})(jQuery);
