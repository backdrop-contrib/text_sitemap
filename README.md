Text sitemap
============

Creates a virtual sitemap.txt file for indexing by search engines.

Text sitemaps are supported by [Google](https://support.google.com/webmasters/answer/183668?hl=en), [Bing](https://www.bing.com/webmaster/help/how-to-submit-sitemaps-82a15bd4), and [Yandex](https://yandex.com/support/webmaster/indexing-options/sitemap.xml) as part of the [sitemaps.org text file specification](http://www.sitemaps.org/protocol.html).

If you use this module, and want to override listing a specific node, you could use robots.txt to make an exclusion or unpublish it.

Caching
-------

The sitemap.txt file is cached in the database so may not reflect new content until after one of Backdrop's routine cache flushes.

Output limit
------------

The database query looks for the 50,000 most recently changed URLs, but the results are filtered to display only URLs which are viewable by anonymous, unauthenticated users. The result output may be fewer than the maximum 50,000 URLs permitted by the sitemaps.org specification.

Configuration
-------------

None.

Current Maintainer
------------------

- None

Credits
-----------

- Originally written for Drupal by David Norman as URL list
  (https://www.drupal.org/project/urllist)
- Ported to Backdrop by David Norman (https://github.com/deekayen)

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
