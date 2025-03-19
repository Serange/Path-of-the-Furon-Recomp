set POTF_ProjectPath=%cd%
set pathMSBuild="C:/Windows/Microsoft.NET/Framework64/v4.0.30319/"
cls
cd %pathMSBuild%
msbuild.exe "%POTF_ProjectPath%/Sharpmake/Sharpmake.sln" -target:Sharpmake_Application
cd %POTF_ProjectPath%
cd Sharpmake/Sharpmake.Application/bin/Debug/net6.0
Sharpmake.Application /sources('../../../../../POTF_Sharpmake_Script.cs')
pause