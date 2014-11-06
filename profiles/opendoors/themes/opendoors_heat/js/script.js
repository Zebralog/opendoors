/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.

  }
};


})(jQuery, Drupal, this, this.document);



//
// on document ready
//
jQuery(document).ready(function() {


    //
    // give focus to textarea
    //
    // jQuery('textarea#edit-body-und-0-value').focus(); // TEMPORARILY DISABLED





    var searchForm = jQuery('form#views-exposed-form-proposal-discussion-page div.views-exposed-form');
    searchForm.hide();
    jQuery('ul.primary-filters li.filter-search').click(function(e){
        searchForm.toggle();
        e.preventDefault();
    })



    //
    // Toggle nav on tiny screens
    //
    jQuery('span#toggle-nav').click(function(){
        jQuery('nav#secondary-menu').toggleClass('expanded');
    });




});// END $(document).ready(function())