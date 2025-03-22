set POTF_ProjectPath=%cd%
:: Build all projects within Sharpmake
dotnet build "%POTF_ProjectPath%/Sharpmake/Sharpmake.sln"
cd %POTF_ProjectPath%
:: Use Sharpmake Applications to build POTF
cd Sharpmake/Sharpmake.Application/bin/Debug/net6.0
Sharpmake.Application /sources('../../../../../POTF_Sharpmake_Script.cs')
pause