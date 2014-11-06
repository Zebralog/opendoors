<?php
/**
 * @file
 * Returns the HTML for comments.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728216
 */
?>

<?
/*
* Create Classes for a – yet unknown – count of columns.
* Assume we deal with a THREE-COL situation, we mind ONLY the $colXof3 classes. (Which would read like "col1of3", "col2of3" or "col3of3".)
* When we find ourselves in a TWO-COL situation, we utilize ONLY the $colXof2 classes, which could either be "col1of2" or "col2of2".
*
* If we are in either of both situations, is controlled by a @media-query potion in the stylesheet!
*
* Note: other situations are possible too. (For conveniance the $colXof1 and the $colXof4 classes are ready to use.)
* */
?>
<article class="<?php print $classes; ?> <?php if(isset($colXof1)) print $colXof1; ?> <?php if(isset($colXof2)) print $colXof2; ?> <?php if(isset($colXof3)) print $colXof3; ?> <?php if(isset($colXof4)) print $colXof4; ?> clearfix"<?php print $attributes; ?>>

  <div class="comment-bubble">

    <header>
      <p class="submitted">
        <?php print $picture; ?>
        <?php print $submitted; ?>
        <?php if ( isset($permalink)) {
          print $permalink;
        } ?>
      </p>

      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h3<?php print $title_attributes; ?>>
          <?php print $title; ?>
          <?php if ($new): ?>
            <mark class="new"><?php print $new; ?></mark>
          <?php endif; ?>
        </h3>
      <?php elseif ($new): ?>
        <mark class="new"><?php print $new; ?></mark>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($status == 'comment-unpublished'): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);
      print render($content);
    ?>

    <?php if ($signature): ?>
      <footer class="user-signature clearfix">
        <?php print $signature; ?>
      </footer>
    <?php endif; ?>

    <?php print render($content['links']) ?>

  </div><!-- /.comment-bubble -->

</article>
