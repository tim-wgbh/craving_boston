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
    
    $('#search-block-form').on('click', 'input#edit-submit', function(e) {
      e.preventDefault();
      $('#edit-search-block-form--2').slide('left');
    });
  }
};

})(jQuery);
