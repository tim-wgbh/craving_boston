(function ($) {

Drupal.behaviors.wgbhSurveyGizmoModule = {
  attach: function (context) {
  
    // Set cookie function
    function setCookie(cname, cvalue, exdays) {
      var d = new Date();
      d.setTime(d.getTime() + (exdays*24*60*60*1000));
      var expires = "expires="+d.toUTCString();
      document.cookie = cname + "=" + cvalue + "; " + expires + ";path=/";
    }   
    // Fetch cookie function
    function getCookie(cname) {
      var name = cname + "=";
      var ca = document.cookie.split(';');
      for(var i=0; i<ca.length; i++) {
        var c = ca[i];
        while (c.charAt(0)==' ') c = c.substring(1);
        if (c.indexOf(name) == 0) return c.substring(name.length,c.length);
      }
      return "";
    }
         
    $('#sg-popup').wrap('<div id="sg-modal"><div id="sg-popup-wrapper"></div></div>');
    $('#sg-popup').show();

    /* Kill the modal if someone clicks on one of the links */
    $('body').on('click', '#sg-popup a', function() {
      $('#sg-modal').fadeOut();
    });
    
    //If no cookie is found, display the modal
    if (getCookie("survey_gizmo") != "shown") {
      $('#sg-modal').fadeIn();
    }

    // If sg-popup exists, set the cookie
    if ($('#sg-modal:visible').size() > 0) {
      setCookie('survey_gizmo', 'shown', 365);
    }     
  }
};
})(jQuery);
