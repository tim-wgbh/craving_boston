(function ($) {

Drupal.behaviors.wgbhSurveyGizmoModule = {
  attach: function (context) {
    $('#sg-popup').wrap('<div id="sg-modal"><div id="sg-popup-wrapper"></div></div>');
    $('#sg-popup').show();
  }
};
})(jQuery);
