@ECHO OFF


@ECHO ON
del /s /q c:\itqaloadtestreport\ITQA_NFT_LR_EP_OneboxUI\*
"C:\Program Files (x86)\HP\LoadRunner\bin\wlrun.exe" -Run -TestPath "./Scenario1.lrs" -ResultName "C:\itqaloadtestreport\ITQA_NFT_LR_EP_OneboxUI\5users_2mins"
"C:\Program Files (x86)\HP\LoadRunner\bin\AnalysisUI.exe" -RESULTPATH "C:\itqaloadtestreport\ITQA_NFT_LR_EP_OneboxUI\5users_2mins\5users_2mins.lrr"
cd c:\Taskkill /im /F AnalysisUI.exe
blat -html -to rkravi@juniper.net -f rkravi@juniper.net -s "ITQA-Automated-Performance-Execution-Report-%date%" -server smtp.juniper.net -port 25 -body "DO NOT REPLY TO THIS EMAIL<br />-----------------------<br /> Please find the Performance Results ITQA_NFT_LR_EP_InternalsearchUI \\p-lr-ctr1\\itqaloadtestreport\\ITQA_NFT_LR_EP_OneboxUI\\5users_2mins\\An_Report1.html

exit 0

