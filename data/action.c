Action()
{

	web_reg_find("Text=<Field name=\"appName\">", 
		LAST);

	web_reg_find("Text=<![CDATA[ CMS - XML (TeamSite) ]]>", 
		LAST);

	web_custom_request("types", 
		"URL=http://btags.sndbx.junipercloud.net:8000/tags/types", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_custom_request("onebox", 
		"URL=http://gsainternalsearch-env.us-west-2.elasticbeanstalk.com/rest/onebox?query=teamsite", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_custom_request("actions", 
		"URL=http://btags.sndbx.junipercloud.net:8000/tags/actions", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	/* Request with GET method to URL "http://gsainternalsearch-env.us-west-2.elasticbeanstalk.com/favicon.ico" failed during recording. Server response : 404*/

	web_custom_request("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_custom_request("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_cookie("SMSV=ADHTe-A4wPJO8QtF3BIsfm_-BTrOuflREqdvPvSlqJu17hf1awibwuIlnCdLuQ6A2Jebmgn57oL9dOsKz5IFAawvRO-WfvJGiAsJCiuEt8gzF36DKw_UjQE; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=Ayqe46xbLxuBhOUpJ; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=A9kynOWbabLFEiGYa; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=W2FLx3TsYZIQW92u/ADeIef12ZJufDwXd3; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=xc01Hld-RBEJrBT5/Afmy7dKFuVlObZNdE; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7mcAr-6qKTR-1Zg8XK8qexB6IhdU7kwJPtHDPFnK4-8ZMBcFwB7MMpPQO7NAzJoNvIGNlW0xuC43nWwtNUpzl450Lg6C5i5etDiekEO8W9nPrFOfp8o33qYwdKAYsp1RgH9z4r; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|mail|o.mail.google.com|s.IN|s.blogger|wise|writely:DQAAACQBAABr48ULJoZWln2rei74zshxbWn9gjSkgQ8HvWDmesioFFvgt6nchP_FkdUXfUVbn1JkmFXAPUZ8MqLD4l7xX2-7PCOxYaNTD-KN4oZNvubsjVelHurA0XpI8f1wUIf0RpRqskt2yBk1SMIkEiNRrdiyXdHs-2JO-WT0VJu6Vp5u8q6gW2ggA3HLSc48EMTsvzTvHwGuXxNQtW2zuOSx04qQ4x8PazC8gILj_YL5fFdUnzdynJtmGn7f7QgeS7gId42aJPDoG197I0BMQYkZm0dlRK_7ngnD55j_hz9KtUvzl5fXJce-ZD3Q9f0hqL-PlC8_HxQgnS1wL_zX59eUKfLTUHqs4gl9UASN4tun334xtAqdBlVx1-1IwaueQXZkgK0P4zbmPL67ySOkkcS0pjUh; DOMAIN="
		"accounts.google.com");

	web_add_cookie("SID=DQAAACMBAADsz7fJAFsZYxrR5s46WNGdroo7NR1Ky29vowpnKd8436C3IU-v3tviXRiwClPTEshmIxO-NTJNNPXgN9y9DkNN2uNCbdUiWK-UbcStHHuIZP4SqAJoSxhu5kNvzP45UeRyZGFQjF2zG75XN1pDpZR_2Df85HsEGgjWG1_IRfvifveUo-bn0eEdia9fQmUbQ8KrvxurrQRI8KO7ehTbmHp_MZpRbOuvIsPlnQJmjoN7NlmIQmzCLh0sCrfLvUa0g_WwLiXQvSCaJdlBrxQlyA_KHCACcUAEc6F5qfSoaIV47B2ODw5iJCC6B38gtihE-VXQnQ7NZLeZrUG00mzjHnPJa8dTFZHQH7VbRyxIJpGtXHwE0MeKw4-N5WuPvoQ1qqUNDCmfAWjU2r_Nq4OPXDwe; DOMAIN=accounts.google.com");

	web_add_cookie("NID=78=X3nggwklg5tl35vVWRjAHo1Nv8kioMaRBU08ntoRJPdPGpbu2FloZyjmh2R1U-IWJ95e-QpRso-YgxE5jOe0qld0JQhH9wd9tNtzofEZe7sbU-jjdkO1D8ZKIDSlK1KKQMoG1EDGg-3PRIMD8vlIjFg6qnur9_WHS_X94VOhcxcePdiqIyOphGHQO6vggX7Nm30vY1dOXhnjLTAuozEC; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:3eknKOPjrb19o1h9nzCuQbH0BPZ99A:Pp_ZvFlrhqYZeVwh; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_custom_request("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}