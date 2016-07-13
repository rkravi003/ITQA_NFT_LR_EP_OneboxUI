

Action()
{

	web_reg_find("Text={pappname}", LAST);
	             
	   

//	web_reg_find("Text=<![CDATA[ CMS - XML ({pappname}) ]]>", 
//		LAST);
//OneBox listings 

lr_start_transaction("01_OneBox_listings");

			web_custom_request("onebox",
		"URL=http://gsainternalsearch-env.us-west-2.elasticbeanstalk.com/rest/onebox?query={pappname}",
		"Method=GET",
		"Resource=1",
		"RecContentType=application/xml",
		"Referer=",
		"Snapshot=t2.inf",
		LAST);



	


	lr_end_transaction("01_OneBox_listings",LR_AUTO);
	
	


lr_start_transaction("02_Typeahead_suggestions");

	web_custom_request("onebox",
		"URL=http://gsainternalsearch-env.us-west-2.elasticbeanstalk.com/rest/suggest?query={pappname}",
		"Method=GET",
		"Resource=1",
		"RecContentType=application/xml",
		"Referer=",
		"Snapshot=t2.inf",
		LAST);

	

		
		
		lr_end_transaction("02_Typeahead_suggestions",LR_AUTO);
		
		
		
	return 0;
}