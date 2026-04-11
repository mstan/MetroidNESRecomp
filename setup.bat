@echo off
setlocal enabledelayedexpansion

set "REPO=https://github.com/mstan/nesrecomp.git"

:: Parse SHA from nesrecomp.pin
set "SHA="
for /f "usebackq tokens=1,* delims==" %%a in ("nesrecomp.pin") do (
    set "key=%%a"
    set "key=!key: =!"
    if "!key!"=="sha" (
        set "SHA=%%b"
        set "SHA=!SHA: =!"
    )
)
if not defined SHA (
    echo Error: no sha found in nesrecomp.pin
    exit /b 1
)

:: Clone nesrecomp if missing
if not exist "nesrecomp\.git" (
    echo Cloning nesrecomp...
    git clone --recurse-submodules %REPO% nesrecomp
)

:: Checkout pinned version
git -C nesrecomp checkout %SHA%
git -C nesrecomp submodule update --init --recursive

:: Junction nestopia-core into project root (no admin required)
if not exist "nestopia-core" (
    mklink /J nestopia-core nesrecomp\runner\nestopia-core
    echo Created junction: nestopia-core -^> nesrecomp\runner\nestopia-core
)

echo Ready — nesrecomp at %SHA%
