(function ($) {

Drupal.behaviors.wgbhSurveyGizmoModule = {
  attach: function (context) {
    $('#sg_popup').wrap('<div id="sg_popup-wrapper"></div>');
    $('#sg_popup').show();
  }
};
})(jQuery);
