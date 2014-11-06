<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<?php



//
// Teaser view (on frontpage) ##########################################################################################
// Teaser view (on frontpage) ##########################################################################################
// Teaser view (on frontpage) ##########################################################################################
//
if( $teaser ):

/*
 * Create Classes for a – yet unknown – count of columns.
 * Assume we deal with a THREE-COL situation, we mind ONLY the $colXof3 classes. (Which would read like "col1of3", "col2of3" or "col3of3".)
 * When we find ourselves in a TWO-COL situation, we utilize ONLY the $colXof2 classes, which could either be "col1of2" or "col2of2".
 *
 * If we are in either of both situations, is controlled by a @media-query potion in the stylesheet!
 *
 * Note: other situations are possible too. (For conveniance the $colXof1 and the $colXof4 classes are ready to use.)
 * */
$colXof1 =  "col1of1";
if ( isset($view->row_index) ){
  $colXof2 =  "col" . ((($view->row_index) % 2 ) + 1) . "of2";
  $colXof3 =  "col" . ((($view->row_index) % 3 ) + 1) . "of3";
  $colXof4 =  "col" . ((($view->row_index) % 4 ) + 1) . "of4";
}
?>
<article class="teaser-view node-<?php print $node->nid; ?> <?php print $classes; ?> <?php print $colXof1; ?> <?php if(isset($colXof2)) print $colXof2; ?> <?php if(isset($colXof3)) print $colXof3; ?> <?php if(isset($colXof4)) print $colXof4; ?> clearfix"<?php print $attributes; ?>>

  <?php // krumo($node); ?>

  <?php // print render($title_suffix); // NOTE: moved to outside the link to not have it break the heatmap wrapping link!!! ?>

  <a class="node-url" href="<?php print $node_url; ?>">

    <div class="heatmap teaser-view">

      <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>

        <header>
          <?php //print render($title_prefix); ?>
          <?php /* if (!$page && $title): ?>
            <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
          <?php endif; */ ?>

          <span class="category-label"><?php print render($content["field_category"]); ?></span>
          <span class="comment-count"><?php print $comment_count; ?></span>
          <span class="rate-count"><?php print render($content['rate_vote_on_proposals']); ?></span>

          <?php // NOTE: moved to outside the link to not have it break the heatmap wrapping link!!! print render($content['field_category']); ?>

          <?php if ($unpublished): ?>
            <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
          <?php endif; ?>
        </header>
      <?php endif; ?>



      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_hotness']);
      hide($content['municipal_response_short']);
      hide($content['field_municipal_response']);
      hide($content['field_municipal_response_image']);
      hide($content['rate_vote_on_proposals']);
      hide($content['share_links']);

      ?>



      <div class="bubble bubble-teaser">
        <span class="border-cover-snippet"></span>
        <?php if ($display_submitted): ?>
          <div class="submitted">
            <?php print $user_picture; ?>
            <span><?php print $submitted; /* clean output from links. links break the wrapping huge link */ ?></span>
          </div>
        <?php endif; ?>
        <?php print render($content) ; ?>
      </div>



      <div class="answered">
        <?php print render($content['municipal_response_short']); ?>
      </div>

    </div><!-- /.heatmap -->

  </a>
  <?php /* </a> */ ?>


  <?php /*
 //
 // NOTE: jQuery is not possible in divs, which are loaded via infinite scrolling. (Infinite scrolling strips out Javascript.)
 // Therefor this pur CSS-Method was choosen to show social-share links when hovering over the little social-share icon
 //
 */ ?>
  <div class="hover-box-css">
    <span class="trigger" href=""></span>
    <div class="content-container">
      <?php print render($content['share_links']); ?>
    </div>
  </div>



</article>


<?php
else:
//
// Node detail view (on node displays) #################################################################################
// Node detail view (on node displays) #################################################################################
// Node detail view (on node displays) #################################################################################
//
?>

  <?php // krumo($content); ?>


  <article class="detail-view node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <div class="heatmap detail-view">

      <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
        <header>
          <?php print render($title_prefix); ?>
          <?php if (!$page && $title): ?>
            <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
          <?php endif; ?>
          <?php print render($title_suffix); ?>

          <a href="#comments-list" title="<?php print t('comment');?>"><span class="comment-count"><?php print $comment_count; ?></span></a>
          <span class="rate-count"><?php print render($content['rate_vote_on_proposals']); ?></span>

          <?php
          print render($content['field_category']);
          ?>

          <?php if ($unpublished): ?>
            <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
          <?php endif; ?>
        </header>
      <?php endif; ?>

      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['share_links']);
      hide($content['field_hotness']);
      hide($content['municipal_response_short']);
      hide($content['field_municipal_response']);
      hide($content['field_municipal_response_image']);
      hide($content['field_municipal_response_date']);
      hide($content['field_municipal_response_author']);
      ?>

      <div class="bubble bubble-detail-view">
        <span class="border-cover-snippet"></span>
        <?php if ($display_submitted): ?>
          <div class="submitted">
            <?php print $user_picture; ?>
            <a href="<?php print $node_url; ?>"><?php print $submitted; ?></a>
          </div>
        <?php endif; ?>
        <?php print render($content); ?>
      </div>

    </div><!-- /.heatmap.detail-view -->


    <?php /*
  //
  // NOTE: jQuery is not possible in divs, which are loaded via infinite scrolling. (Infinite scrolling strips out Javascript.)
  // Therefor this pur CSS-Method was choosen to show social-share links when hovering over the little social-share icon
  //*/
    ?>
    <div class="hover-box-css">
      <span class="trigger" href=""></span>
      <div class="content-container">
        <?php print render($content['share_links']); ?>
      </div>
    </div>



    <div class="response-bubble-container">


      <div class="answered">
        <?php print render($content['municipal_response_short']); ?>
        <?php print render($content['field_municipal_response_author']); ?>
        <?php print render($content['field_municipal_response_date']); ?>        
      </div>

      <?php
      // check, if there is a response to this question. If yes: render. If not: do not even render the bubble.
      if( sizeof($field_municipal_response) > 0 ):
      ?>
      <div class="response-bubble">
        <span class="border-cover-snippet"></span>
        <?php
        if( isset ( $content['field_municipal_response_image'][0] ) || isset($content["field_municipal_response"][0]["#markup"]) ): ?>
          <div class="municiap-response">
            <?php print render( $content["field_municipal_response_image"]); ?>
            <?php print render( $content["field_municipal_response"]); ?>
          </div>
        <?php
        endif;
        ?>
      </div><!-- /.response-bubble -->
      <?php
      endif;
      ?>
    </div><!-- /.response-bubble-container -->


  </article>

  <?php print render($content['comments']); ?>

<?php
  endif;
?>