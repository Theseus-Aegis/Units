@echo off

if exist a3 (
  rmdir a3
)
mklink /j a3 include\a3

mkdir x
mkdir x\tacu
if exist x\tacu\addons (
  rmdir x\tacu\addons
)
mklink /j x\tacu\addons addons

hemtt build
set BUILD_STATUS=%errorlevel%

rmdir a3
rmdir x\tacu\addons
rmdir x\tacu
rmdir x

if %BUILD_STATUS% neq 0 (
  echo Build failed
  exit /b %errorlevel%
) else (
  echo Build successful
)
