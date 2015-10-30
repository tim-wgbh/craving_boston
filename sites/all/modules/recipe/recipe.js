(function ($) {

Drupal.behaviors.recipe = {
  attach: function (context) {
    $('.recipe-ingredient-delete input[type=submit]').click(function(e) {
      e.preventDefault();
      var $field = $(e.currentTarget).parent().parent();
      $field.find('input[type=text],select').each(function() {
        $(this).val(null);
      });
      $field.parent().fadeOut();
      
      // Restripe table
      $('#recipe-ingredient-values tr:visible').each(function(index) {
        $(this).removeClass('odd even');
        var stripeClass = (index % 2 == 0) ? 'even' : 'odd';
        $(this).addClass(stripeClass);
        console.log($(this));
      });
    });
  }

};
})(jQuery);
