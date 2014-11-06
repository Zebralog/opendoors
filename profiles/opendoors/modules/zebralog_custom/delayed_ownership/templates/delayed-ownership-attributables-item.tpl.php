<?php
/**
 * @file delayed-ownership-attributables--item.tpl.php
 * Themes a single item that is to be displayed in a list auf attributable guest
 * contributions.
 *
 * Available variables:
 * - $entityclass: The entity type as a css-class
 * - $label: The readable entity class as a label
 * - $title: The title of the node or the subject of the comment
 * - $time: Time left for deleayed ownership, printed in brackets.
 * - $timeclass: A class variable describing changing with urgency:
 *     'do-time-ok', 'do-time-urgent', 'do-time-expiring'
 */
?>
<div class="<?php print "$entityclass $timeclass"; ?>">
  <span class="do-item-label"><?php print $label; ?></span>
  <span class="do-item-title"><?php print $title; ?></span>
  <span class="do-item-time"><?php print $time; ?></span>
</div>
