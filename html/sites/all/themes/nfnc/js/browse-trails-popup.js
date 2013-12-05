(function ($) {
    $(document).ready(function () {
	    var mapRegions = $(".nfnc-browse-trails-map .nfnc-browse-trails-map-link"),
		mapPopupContainer = $("#nfnc-browse-trails-tooltip"),
		mobileClass = "mobile-selected";

	    var displayMapPopup = function (elem) {
		mapPopupContainer.addClass("nfnc-browse-trails-tooltip-displayed")
                .html(elem.clone().removeClass("nfnc-browse-trails-map-link"));
		elem.attr("title", "");
	    };

	    var hideMapPopup = function (elem) {
		mapPopupContainer.removeClass("nfnc-browse-trails-tooltip-displayed");
		elem.attr("title", elem.attr("data-title"));
	    };

	    mapRegions.hover(function () {
		    displayMapPopup($(this));
		}, function () {
		    hideMapPopup($(this));
		});

	});
}(window.jQuery));