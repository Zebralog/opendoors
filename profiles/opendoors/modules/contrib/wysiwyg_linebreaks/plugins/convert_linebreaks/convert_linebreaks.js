// Adopted from Wordpress 2.8.1-beta editor.js.

Drupal.wysiwyg.plugins.convert_linebreaks = {

  invoke: function(data, settings, instanceId) {
    alert('This button does nothing, it belongs to the convert linebreaks plugin.');
  },

  attach: function(content, settings, instanceId) {
    content = this.linebreaks_attach(content);
    return content;
  },

  detach: function(content, settings, instanceId) {
    // Don't need to do anything here.
    return content;
  },

  // Prepare the content for the WYSIWYG Editor.
  linebreaks_attach : function(content) {

    var blocklist = 'table|thead|tfoot|caption|col|colgroup|tbody|tr|td|th|div|dl|dd|dt|ul|ol|li|hr|pre|select|form|blockquote|address|math|p|h[1-6]';

    if (content == "") {
      return content;
    }

    // Handle <object> and <embed> tags.
    if (content.indexOf('<object') != -1) {
      content = content.replace(/<object[\s\S]+?<\/object>/g, function(a) {
        return a.replace(/[\r\n]+/g, '');
      });
    }
    if (content.indexOf('<embed') != -1) {
      content = content.replace(/<embed[\s\S]+?<\/embed>/g, function(a) {
        return a.replace(/[\r\n]+/g, '');
      });
    }

    content = content.replace(/<[^<>]+>/g, function(a) {
      return a.replace(/[\r\n]+/g, ' ');
    });

    content = content + "\n\n";
    content = content.replace(new RegExp('<br />\\s*<br />', 'gi'), "\n\n");
    content = content.replace(new RegExp('(<(?:'+blocklist+')[^>]*>)', 'gi'), "\n$1");
    content = content.replace(new RegExp('(</(?:'+blocklist+')>)', 'gi'), "$1\n\n");
    content = content.replace(new RegExp("\\r\\n|\\r", 'g'), "\n");
    content = content.replace(new RegExp("\\n\\s*\\n+", 'g'), "\n\n");
    content = content.replace(new RegExp('([\\s\\S]+?)\\n\\n', 'mg'), "<p>$1</p>\n");
    content = content.replace(new RegExp('<p>\\s*?</p>', 'gi'), '');
    content = content.replace(new RegExp('<p>\\s*(</?(?:'+blocklist+')[^>]*>)\\s*</p>', 'gi'), "$1");
    content = content.replace(new RegExp("<p>(<li.+?)</p>", 'gi'), "$1");
    content = content.replace(new RegExp('<p>\\s*<blockquote([^>]*)>', 'gi'), "<blockquote$1><p>");
    content = content.replace(new RegExp('</blockquote>\\s*</p>', 'gi'), '</p></blockquote>');
    content = content.replace(new RegExp('<p>\\s*(</?(?:'+blocklist+')[^>]*>)', 'gi'), "$1");
    content = content.replace(new RegExp('(</?(?:'+blocklist+')[^>]*>)\\s*</p>', 'gi'), "$1");
    content = content.replace(new RegExp('([^>])\\s*\\n', 'gi'), "$1<br />\n");
    content = content.replace(new RegExp('(</?(?:'+blocklist+')[^>]*>)\\s*<br />', 'gi'), "$1");
    content = content.replace(new RegExp('<br />(\\s*</?(?:p|li|div|dl|dd|dt|th|pre|td|ul|ol)>)', 'gi'), '$1');
    content = content.replace(new RegExp('(?:<p>|<br ?/?>)*\\s*\\[caption([^\\[]+)\\[/caption\\]\\s*(?:</p>|<br ?/?>)*', 'gi'), '[caption$1[/caption]');

    // Fix <pre> and <script> tags.
    content = content.replace(/<(pre|script)[^>]*>[\s\S]+?<\/\1>/g, function(a) {
      a = a.replace(/<br ?\/?>[\r\n]*/g, '\n');
      return a.replace(/<\/?p( [^>]*)?>[\r\n]*/g, '\n');
    });

    return content;
  }
};
