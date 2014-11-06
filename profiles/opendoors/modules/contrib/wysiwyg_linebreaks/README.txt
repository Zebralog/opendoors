
## SUMMARY ##

This module allows you to use wysiwyg editors on legacy content that may not
already have HTML formatting applied, and also allows you to keep your nodes
free of extraneous HTML formatting, instead relying on Drupal's input formats
to format your code properly.

Basically, this module adds two Buttons / Plugins you can use in your WYSIWYG
profiles (edit a profile for an input format, and check the box next to the
method you'd like to use):

1. Force linebreaks

Using this plugin will make your content always have linebreaks instead of
paragraph and break tags. This means that if you disable your wysiwyg editor,
your text will typically display with an extra line between each block of
text. This plugin is great for sites that often toggle wysiwyg editors on and
off, as it's much easier to edit content from a wysiwyg by hand if it doesn't
have a ton of <p> and <br /> tags running together.

2. Convert linebreaks

Using this plugin will take content that has linebreaks, but no <p> and <br />
tags, and convert it so it still looks correct in wysiwyg editors. If you are
dealing with legacy content, or want to start using a wysiwyg editor after
you've already added lots of content to your site without one, this plugin
will help ease that transition.

The two plugins should NOT be used together (unfortunately, there's no way for
us to prevent you from doing that, though). Pick one method of conversion, and
stick with it. You can switch between the two, if you'd like, with no harmful
effect.


## REQUIREMENTS ##

  - Wysiwyg API


## INSTALLATION ##

Install as usual, see http://drupal.org/node/70151 for further information.


## CONFIGURATION ##

Enable either the Force linebreaks button or the Convert linebreaks button in
the plugins/buttons configuration of the wysiwyg profiles of your choice. (See
'Summary' above for more information about what the buttons do).


## CONTACT / MAINTAINERS ##

Current maintainer:

  - Jeff Geerling: http://drupal.org/user/389011

