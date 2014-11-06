(function ($) {

Drupal.behaviors.coolMessage = {
  attach: function (context, settings) {
    
    $('.messages', context).hide();
    $('.messages', context).fadeIn('slow');

    // Hide a message when clicked on it.
    $('.messages').click(function() {
      $(this).fadeOut('slow');
    });

  }
};

})(jQuery);
