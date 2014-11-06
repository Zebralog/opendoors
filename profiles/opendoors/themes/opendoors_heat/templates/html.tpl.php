<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="lt-ie9" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width">
  <?php endif; ?>
  <meta http-equiv="cleartype" content="on">

  <?php print $styles; ?>

  <!-- Custom colors, defined via theme-settings.php and opendoors_heat.info -->
  <style>

		/* Page generals */
		body {
			background: <?php print theme_get_setting('page_background_color'); ?>;
			color: <?php print theme_get_setting('text_color'); ?>;
		}

		/* Header background image */
		header#header {
			<?php	if (theme_get_setting('header_background_1')):	?>
			background: url('<?php print url($directory . '/header_background_1.png'); ?>');
			<?php	endif; ?>
		}

    /* Filter bar links */
    div#pane-proposal-discussion-filter ul.primary-filters li a,
    div#pane-proposal-discussion-filter ul.primary-filters li span { color: <?php print theme_get_setting('filterbar_links'); ?>; }
    div#pane-proposal-discussion-filter ul.primary-filters li a:hover,
    div#pane-proposal-discussion-filter ul.primary-filters li.query-active a,
    div#pane-proposal-discussion-filter ul.primary-filters li span:hover { color: <?php print theme_get_setting('filterbar_links_hover'); ?>; }

		/* Category Chooser background */
		div#edit-field-category div#edit-field-category-und {
			background-color: <?php print theme_get_setting('page_background_color'); ?>;
		}
    /* Category Chooser + Filter bar category items */
		div#edit-field-category div.form-type-radio label,
    div#pane-proposal-discussion-filter ul.secondary-filters li a.active {
      color: <?php print theme_get_setting('category_labels_font_color'); ?>;
      background-color: <?php print theme_get_setting('category_labels_bg'); ?>;
    }
		div#edit-field-category div.form-type-radio label:hover, div#edit-field-category div.form-type-radio label:focus,
		div#pane-proposal-discussion-filter ul.secondary-filters li a:hover, div#pane-proposal-discussion-filter ul.secondary-filters li a:focus, div#pane-proposal-discussion-filter ul.secondary-filters li a.active-term {
			background-color: <?php print theme_get_setting('category_labels_bg_active'); ?>;
		}

    /* Main bubble */
    div.proposal-form,
    div.proposal-form div.form-textarea-wrapper:before
    { background-color: <?php print theme_get_setting('main_bubble_color'); ?>; }

    /* Response bubble background color */
    body.node-type-proposal div.response-bubble-container, div#overlay div.response-bubble-container,
    div.response-bubble span.border-cover-snippet
    {
      background-color: <?php print theme_get_setting('response_bubble_color'); ?>;
    }

    /* Heatmap elements */
    article.node-proposal.hotness-0   div.heatmap,
    .hotness-0   span.border-cover-snippet,
    div.heatmap-legend li.hotness-0   { background-color: <?php print theme_get_setting('heatmap_color_0'); ?>; }
    article.node-proposal.hotness-20  div.heatmap,
    .hotness-20  span.border-cover-snippet,
    div.heatmap-legend li.hotness-20  { background-color: <?php print theme_get_setting('heatmap_color_1'); ?>; }
    article.node-proposal.hotness-40  div.heatmap,
    .hotness-40  span.border-cover-snippet,
    div.heatmap-legend li.hotness-40  { background-color: <?php print theme_get_setting('heatmap_color_2'); ?>; }
    article.node-proposal.hotness-60  div.heatmap,
    .hotness-60  span.border-cover-snippet,
    div.heatmap-legend li.hotness-60  { background-color: <?php print theme_get_setting('heatmap_color_3'); ?>; }
    article.node-proposal.hotness-80  div.heatmap,
    .hotness-80  span.border-cover-snippet,
    div.heatmap-legend li.hotness-80  { background-color: <?php print theme_get_setting('heatmap_color_4'); ?>; }
    article.node-proposal.hotness-100 div.heatmap,
    .hotness-100 span.border-cover-snippet,
    div.heatmap-legend li.hotness-100 { background-color: <?php print theme_get_setting('heatmap_color_5'); ?>; }

    article.node-proposal.hotness-0   div.field-name-field-category, article.node-proposal.hotness-0 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_0'); ?>; }
    article.node-proposal.hotness-20  div.field-name-field-category, article.node-proposal.hotness-1 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_1'); ?>; }
    article.node-proposal.hotness-40  div.field-name-field-category, article.node-proposal.hotness-2 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_2'); ?>; }
    article.node-proposal.hotness-60  div.field-name-field-category, article.node-proposal.hotness-3 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_3'); ?>; }
    article.node-proposal.hotness-80  div.field-name-field-category, article.node-proposal.hotness-4 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_4'); ?>; }
    article.node-proposal.hotness-100 div.field-name-field-category, article.node-proposal.hotness-5 div.field-name-field-category a { color: <?php print theme_get_setting('heatmap_color_5'); ?>; }



  </style>


  <?php print $scripts; ?>
  <?php if ($add_html5_shim and !$add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5.js"></script>
    <![endif]-->
  <?php elseif ($add_html5_shim and $add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5-respond.js"></script>
    <![endif]-->
  <?php elseif ($add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/respond.js"></script>
    <![endif]-->
  <?php endif; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
