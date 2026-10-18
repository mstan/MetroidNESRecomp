@echo off
setlocal enabledelayedexpansion

:: nesrecomp/ and recomp-ui/ are git submodules; fetch them at the commits this
:: repo pins (the gitlinks recorded in the index; see .gitmodules).
git submodule update --init --recursive nesrecomp recomp-ui
if errorlevel 1 ( echo Error: submodule update failed & exit /b 1 )

echo Ready - engine and UI checked out at their pinned commits.
echo Supply your ROM with -DNESRECOMP_ROM and choose -DMETROID_VARIANT=usa or europe.
