(function ($) {

Drupal.behaviors.cravingBostonTheme = {
  attach: function (context) {
    // Create captions for images with titles
    $('.field-name-field-image picture, .field-name-body img').each(function() {
      var $element = $(this);
      var title = $element.attr('title').trim();
      if (title != '') {
        $element.wrap('<div class="image-with-caption"></div>');
        $element.parent().append('<div class="image-caption">Photo: ' + title + '</div>') 
      }
    });
  }
};

})(jQuery);
