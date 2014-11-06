(function ($) {

/**
 * overlayFixScroll() - handles window scroll when opening and closing overlays
 */
Drupal.behaviors.overlayFixScroll =
{
	attach: function (context, settings)
	{
		var pageIdentifier = window.location.host+window.location.pathname+window.location.search;
		
		$(document).bind('drupalOverlayCloseDone',function()
		{
			Drupal.overlayFixScroll.checkScroll(pageIdentifier);
		});
		
		$(document).bind('drupalOverlayBeforeOpen',function()
		{
			window.name = 'overlay_helper_scroll['+pageIdentifier+']='+$(window).scrollTop();
		});
		
		Drupal.overlayFixScroll.checkScroll(pageIdentifier);
	}
}

Drupal.overlayFixScroll = Drupal.overlayFixScroll || {};
Drupal.overlayFixScroll.checkScroll = function(pageIdentifier)
{
	if(!Drupal.overlay.isOpen)
	{
		// test if window.name starts with overlay_helper_scroll...
		var search = 'overlay_helper_scroll['+pageIdentifier+']=';
		if(window.name != '' && window.name.substring(0, search.length) === search)
		{
			// now get the value, and test if it's numeric
			var val = parseInt( window.name.substring(search.length), 10 );
			if(val > 0)
			{
				$('html,body').scrollTop(val);
			}
			//clear the window.name, so that we don't jump to the scroll value on the next refresh as well
			window.name = '';
		}
	}
}

})(jQuery);