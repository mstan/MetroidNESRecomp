@echo off
setlocal enabledelayedexpansion

:: nesrecomp/ and recomp-ui/ are git submodules; fetch them at the commits this
:: repo pins (the gitlinks recorded in the index; see .gitmodules).
git submodule update --init --recursive nesrecomp recomp-ui
if errorlevel 1 ( echo Error: submodule update failed & exit /b 1 )

:: Junction nestopia-core from nesrecomp's copy (no admin required).
if not exist "nestopia-core" (
    mklink /J nestopia-core nesrecomp\runner\nestopia-core
    echo Created junction: nestopia-core -^> nesrecomp\runner\nestopia-core
)

echo Ready - nesrecomp + recomp-ui checked out at their pinned commits.
