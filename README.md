Text sitemap
============

Creates a virtual sitemap.txt file for indexing by search engines.

Text sitemaps are supported by [Google](https://support.google.com/webmasters/answer/183668?hl=en), [Bing](https://www.bing.com/webmaster/help/how-to-submit-sitemaps-82a15bd4), and [Yandex](https://yandex.com/support/webmaster/indexing-options/sitemap.xml).

If you use this module, and want to override listing a specific node, you could use robots.txt to make an exclusion or unpublish it.

Caching
-------

The sitemap.txt file is cached in the database so may not reflect new content until after one of Backdrop's routine cache flushes.

Output limit
------------

The sitemap.txt file lists the 50,000 most recently changed URLs. The [sitemaps.org text file specification](http://www.sitemaps.org/protocol.html) is the origin of the limit. The 50,000 URLs is the module limit and it does not support creating separate, continuation files.

Configuration
-------------

None.

Current Maintainer
------------------

- David Norman (https://github.com/deekayen)

Credits
-----------

- Originally written for Drupal by David Norman as URL list
  (https://www.drupal.org/project/urllist)
- Ported to Backdrop by David Norman (https://github.com/deekayen)

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
