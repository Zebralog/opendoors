<?php
/**
 * @file delayed-ownership-attributables.tpl.php
 * Theme the delayed ownership attributables block content.
 *
 * Avalables variables:
 * - $title: The title of the list. Usually only printed as the block title.
 * - $intro: Intro text to explain the delayed ownership.
 * - $items: Array of strings to be print out as labeled titles of the user's
 *     anonymous contributions.
 */
?>
<div class="delayed-ownership-intro">
  <p><?php print $intro; ?></p>
</div>
<?php print theme('item_list', array('items' => $items)); ?>
