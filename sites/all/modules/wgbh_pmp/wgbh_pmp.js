(function ($) {
Drupal.behaviors.wgbhPmp = {
  attach: function (context) {

    $('body').on('click', '.preview', function(e) {
      e.preventDefault();
      $(this).parent().parent().addClass('current');
      $('body').append('<div id="pmp-modal"><p class="help">(ESC) to close</div>');
      var guid = $(this).attr('id').replace('preview_', '');
      $('#pmp-modal').html('<div class="modal-wrapper">' + $('#' + guid).html() + '</div>');
      $('#pmp-modal').slideDown();
    });
    $('body').keypress(function(e) {
      if (e.keyCode == 27) {
        //Clean up
        $('#pmp-modal').slideUp(function() {
          $('#pmp-modal .modal-wrapper').html('');
          setTimeout(function() {
            $('.page-admin-content-pmp tr.current').removeClass('current');
            }, 2000);
        });
      }        
    });
  }
};
})(jQuery);
