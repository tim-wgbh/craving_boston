(function ($) {
Drupal.behaviors.wgbhPmp = {
  attach: function (context) {

    $('body').on('click', '.preview', function(e) {
      e.preventDefault();
      $(this).parent().parent().addClass('current');
      $('body').append('<div id="pmp-modal"><p class="help">(ESC) to close</p></div>');
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
    $('body').on('click', '.pull', function(e) {
      e.preventDefault();
      window.scrollTo(0,0);
      $('#content').prepend('<div id="console" class="clearfix"><div class="messages status">Pulling... <img src="/sites/all/themes/craving_boston/images/ajax-loader.gif" /></div></div>');
      var guid = $(this).attr('id').replace('pull_', '');
      $.get('/admin/content/pmp/pull/' + guid, function(data) {
        if (data.status == 'error') {
          msg = 'There was a problem importing the article from the PMP';
          $('#content .messages').removeClass('status').addClass('error');
        } else {
          msg = 'The article was successfully imported. (<a href="/node/' + data.nid + '">view</a>)';
        }
        $('#content .messages').html(msg);
      }, 'json');  
    });
  }
};
})(jQuery);
