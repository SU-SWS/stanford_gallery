Drupal.behaviors.stanford_gallery = {
  attach: function(context, settings) {

  (function ($) {

    // Define selector.
    var selector = "stanford-gallery-image";

    // Default settings.
    var cboxsettings = {
      rel : "group",
      scalePhotos : true,
      returnFocus : true,
      maxWidth : "98%",
      maxHeight : "90%"
    };

    // Start by adding the appropriate class to all of the items.
    $(".field-name-field-s-gallery-image-info .field-items a", context).addClass(selector);

    // Store the selected items for use.
    var items = $("." + selector);

    // If the captions setting is available set it.
    if (Drupal.settings.stanford_gallery.captions.length) {
      $.each(items, function(i, v) {
        $(v).attr('title', Drupal.settings.stanford_gallery.captions[i]);
      });
    }

    // Init each gallery independantly
    $.each($(".field-name-field-s-gallery-image-info"), function(i,v) {
      var galleryItems = $(v).find("." + selector);
      cboxsettings.rel = "group" + i;
      // Initialize the gallery.
      galleryItems.colorbox(cboxsettings);
    });

  })(jQuery);

  }
};


