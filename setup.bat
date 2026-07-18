@echo off
setlocal

:: Initialize the framework and nested dependencies at the gitlink commit.
git submodule update --init --recursive
if errorlevel 1 exit /b %errorlevel%

:: Junction nestopia-core into project root (no admin required)
if not exist "nestopia-core" (
    mklink /J nestopia-core nesrecomp\runner\nestopia-core
    echo Created junction: nestopia-core -^> nesrecomp\runner\nestopia-core
)

echo Ready — framework submodules initialized
