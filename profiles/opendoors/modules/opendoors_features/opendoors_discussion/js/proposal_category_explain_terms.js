/* TODO @tneitsch documentation */
/*
jQuery(document).ready(function() {
	if(jQuery("body").hasClass("html")){
	var radioerror = false;
	var newselectbox = '<ul class="newselectbox"></ul>';
  var selectLabel = Drupal.t('Please select your category');
	jQuery("#proposal-node-form #edit-field-category").prepend('<label class="clickme">' + selectLabel + '</label>');
	
	jQuery("#proposal-node-form #edit-field-category label.clickme").after(newselectbox);	
	jQuery("#proposal-node-form #edit-field-category .newselectbox").after('<div class="descriptioncontainer"></div>');
	jQuery("#proposal-node-form #edit-field-category .form-type-radio").each(function(){
		
		var radiovalue = jQuery(this).find(".form-radio").attr("value");	
		if(jQuery(this).find(".form-radio").hasClass("error")){
			radioerror = true;
		};	
		var activevalue = "";
		
		if(jQuery(this).find(".form-radio").attr("checked")){
			activevalue = "active";
		}
	
		var radiooptiontitle = jQuery(this).find("label").html();
		var radiooptiondescription = '<span class="radiooptiondescription">'+jQuery(this).find(".description").text()+'</span>';
		radio = '<li class="" id="radiovalue_'+radiovalue+'"><a href="#'+radiovalue+'" class="radiovalue '+activevalue+'">'+radiooptiontitle+radiooptiondescription+'</a></li>';
		jQuery(".newselectbox").append(radio);
		
		
		jQuery(this).hide();
	
	})
	if(radioerror){
		jQuery(".clickme").addClass("error");
		}
	jQuery("a.radiovalue").click(function(){
		var checkedradiovalue = jQuery(this).attr("href").replace('#','');
		jQuery("#proposal-node-form input[type='radio'][value='"+checkedradiovalue+"']").attr("checked","checked");
		
		jQuery(".descriptioncontainer").text(jQuery(this).find(".radiooptiondescription").text());
		jQuery(".clickme").removeClass("error");
		
		jQuery("a.radiovalue").each(function(){
			jQuery(this).removeClass("active")	;
		})
		jQuery(this).addClass("active");
		checkedradiotitle = jQuery(this).find(".taxonomy-title").text();
		jQuery("#proposal-node-form #edit-field-category label.clickme").text(checkedradiotitle);
		jQuery(".newselectbox").toggle(500);
		
		return false;
	})
	
	jQuery("label.clickme").click(function(){
			jQuery(".newselectbox").toggle(500);
	})
	}
});
    */