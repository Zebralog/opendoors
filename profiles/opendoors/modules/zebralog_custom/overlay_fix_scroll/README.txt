This module fixes the problem the scroll position is discarded when opening an
overlay popup window.

The problem is described here: 
https://drupal.org/node/1468902 (Restore scroll position after closing overlay)

This module is derived from the sandbox project 
Overlay Helper (https://drupal.org/sandbox/prinds/1918678) by prinds.

Install and use this module
- enable the module
- apply a patch for the overlay module (adds two JS events)
https://drupal.org/files/extra_events_for_overlay-1918692-10.patch
- done