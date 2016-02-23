(function ($) {

Drupal.behaviors.wgbhSurveyGizmoModule = {
  attach: function (context) {
    $('#sg-popup').wrap('<div id="sg-popup-wrapper"></div>');
    $('#sg-popup').show();
  }
};
})(jQuery);
