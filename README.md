## Stanford Gallery


[Stanford Gallery](https://github.com/SU-SWS/stanford_gallery)
##### Version: 7.x-2.x-dev

Maintainers: [jbickar](https://github.com/jbickar), [sherakama](https://github.com/sherakama)
[Changelog.txt](CHANGELOG.txt)

This module creates a responsive image gallery using the jQuery colorbox plugin.

Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)

Use
---

1. Create new gallery content types and upload images.
2. Create blocks to use gallery content types through the Stanford Gallery Bean.

### Known Issues

1. There is a finite limit to the number of images that can be placed in a Gallery. It is dependent upon server resources, but it is somewhere shy of 100.
2. If gallery images won't load: the captions need to be set for each image and "Show Captions" needs to be enabled for the light box to work correctly. The error message is `TypeError: undefined is not an object (evaluating 'Drupal.settings.stanford_gallery.captions')`
3. Multiple Gallery BEANs per page can cause issues with captions if there are empty field collections in a Gallery. The symptom will be captions offset from their images (e.g., caption C will appear on image D).

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
