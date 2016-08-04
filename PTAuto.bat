@ECHO OFF

set scenario=%1
set resultsDate=%2
set emailTo=%3
set firstName=%4
set lastName=%5

@ECHO ON
"C:\Program Files (x86)\HP\LoadRunner\bin\wlrun.exe" -Run -TestPath "./Scenario1.lrs"

exit 0

