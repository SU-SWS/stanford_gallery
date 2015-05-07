Drupal.behaviors.stanford_gallery = {
  attach: function(context, settings) {

  (function ($) {

    // var cboxOptions = {
    //   width: '95%',
    //   height: '95%',
    //   maxWidth: '960px',
    //   maxHeight: '960px',
    // };

    // $('.cbox-link', context).colorbox(cboxOptions);

    // $(window).resize(function(){
    //     $.colorbox.resize({
    //       width: window.innerWidth > parseInt(cboxOptions.maxWidth) ? cboxOptions.maxWidth : cboxOptions.width,
    //       height: window.innerHeight > parseInt(cboxOptions.maxHeight) ? cboxOptions.maxHeight : cboxOptions.height
    //     });
    // });

    // $('#cboxLoadedContent', context).bind('cbox_complete', function(){
    //   $('form input:first', context).focus();
    // });

  $(".field-name-field-s-image-info .field-items a", context).addClass("stanford-gallery-image");
  $(".stanford-gallery-image").colorbox({rel : "group1"});

  })(jQuery);

  }
};


