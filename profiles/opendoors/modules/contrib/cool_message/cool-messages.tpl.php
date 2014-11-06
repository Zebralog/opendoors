<?php

/**
 * @file
 * Default theme implementation for wrapping system messages.
 *
 * Available variables:
 * - $type
 * - $title
 * - $messages
 *
 * @see template_preprocess_cool_messages().
 */
?>
<div class="messages <?php print $type; ?>"><div class="context">
  <?php if ($title): ?>
    <h2 class="element-invisible"><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print $messages; ?>
</div></div>
