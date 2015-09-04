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
        
    // Add placeholder to search box
//     $('#block-search-form .form-type-textfield input').attr('placeholder',"Search...");
//     $('#block-search-form .form-type-textfield input').on('focus', function(e) {
//       $('#search-block-form .container-inline .form-type-textfield').animate({'right': '80px'}, function() { 
//         $('#search-block-form .container-inline #edit-actions').css({'display': 'inline-block'})
//       });
//       $('#search-block-form .container-inline .form-type-textfield input').animate({boxShadow: '3px 1px 2px #999'});
//     });
    $('.wgbh-food-links a').append('&nbsp;&nbsp;>');
    
    // Mobile menu
    $('body').on('click','#mobile-select a', function() {
      $('#mobile-menu').animate({ left: 0 });
      $('#mobile-select').animate({right: -100});
    });
  }
};

})(jQuery);
