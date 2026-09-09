@echo off
setlocal enabledelayedexpansion

rem build_all.bat — Release (non-debug) Windows build for MetroidNESRecomp.
rem
rem Produces: build_release\MetroidNESRecomp.exe
rem Regen:    plain, from the committed game.toml — generated/ matches the pinned
rem           recompiler (nesrecomp.pin). Mirrors FaxanaduRecomp\build_all.bat.
rem
rem tools\make_release.ps1 calls this.

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64 >nul 2>&1

rem Strip msys2/mingw off PATH so the VS toolchain (cl/cmake/ninja) wins.
set "CLEANPATH="
for %%p in ("%PATH:;=" "%") do (
    echo %%~p | findstr /i /c:"msys64" /c:"mingw" >nul 2>&1
    if errorlevel 1 (
        if defined CLEANPATH (set "CLEANPATH=!CLEANPATH!;%%~p") else (set "CLEANPATH=%%~p")
    )
)
set "PATH=%CLEANPATH%"

set "VSCMAKE=C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin"
set "VSNINJA=C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja"
set "PATH=%VSCMAKE%;%VSNINJA%;%PATH%"

echo === STEP 1: Build recompiler ===
cd /d %~dp0nesrecomp
if not exist build_recomp\CMakeCache.txt (
    cmake -S recompiler -B build_recomp -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=cl
    if !ERRORLEVEL! NEQ 0 ( echo RECOMPILER CMAKE FAILED & exit /b 1 )
)
cmake --build build_recomp
if !ERRORLEVEL! NEQ 0 ( echo RECOMPILER BUILD FAILED & exit /b 1 )

echo === STEP 2: Regen game code (plain, from game.toml) ===
cd /d %~dp0
rem metroid.nes = Metroid (USA), headerless CRC32 70080810 (metroid-eu.nes is the
rem EU reference copy and is NOT what this build recompiles).
nesrecomp\build_recomp\NESRecomp.exe metroid.nes --game game.toml
if !ERRORLEVEL! NEQ 0 ( echo REGEN FAILED & exit /b 2 )

echo === STEP 3: Configure + build release ===
rem Force a clean configure so stale developer settings cannot leak in.
if exist build_release\CMakeCache.txt del build_release\CMakeCache.txt
cmake -S . -B build_release -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=cl -DCMAKE_CXX_COMPILER=cl
if !ERRORLEVEL! NEQ 0 ( echo CMAKE FAILED & exit /b 3 )
cmake --build build_release
if !ERRORLEVEL! NEQ 0 ( echo BUILD FAILED & exit /b 4 )

rem Release builds never ship debug.ini — strip if a stale copy exists.
if exist build_release\debug.ini del build_release\debug.ini

echo === RELEASE BUILD DONE: build_release\MetroidNESRecomp.exe ===
