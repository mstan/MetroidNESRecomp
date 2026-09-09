<#
build_wla_dx.ps1 -- build the WLA-DX assembler/linker the m1disasm submodule needs.

m1disasm (disasm/m1disasm) requires WLA-DX >= 10.7, which is not on winget or
in any release zip; it must be built from source. This clones vhelin/wla-dx
at a pinned commit into tools/wla-dx/src and builds wla-6502.exe + wlalink.exe
into tools/wla-dx/bin with the VS 2022 toolchain (cl + VS-bundled cmake/ninja).
Both directories are gitignored.

Usage: powershell -File tools\build_wla_dx.ps1 [-Ref <git ref>]
Then:  python tools\gen_symbols.py
#>
param([string]$Ref = "master")
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$dir  = Join-Path $root 'tools\wla-dx'
$src  = Join-Path $dir 'src'
$bld  = Join-Path $dir 'build'
$bin  = Join-Path $dir 'bin'
$vs   = "C:\Program Files\Microsoft Visual Studio\2022\Community"
New-Item -ItemType Directory -Force $dir,$bin | Out-Null

if (-not (Test-Path (Join-Path $src '.git'))) {
  git clone --quiet https://github.com/vhelin/wla-dx.git $src
}
git -C $src fetch --quiet origin
git -C $src checkout --quiet $Ref
if ($Ref -eq 'master') { git -C $src reset --quiet --hard origin/master }
"wla-dx @ " + (git -C $src rev-parse --short HEAD)

Import-Module "$vs\Common7\Tools\Microsoft.VisualStudio.DevShell.dll"
Enter-VsDevShell -VsInstallPath $vs -SkipAutomaticLocation -DevCmdArguments '-arch=x64' | Out-Null
$env:PATH = (($env:PATH -split ';') | Where-Object { $_ -notmatch 'msys64|mingw' }) -join ';'
$cmake = "$vs\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
$ninja = "$vs\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe"

& $cmake -S $src -B $bld -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=cl "-DCMAKE_MAKE_PROGRAM=$ninja" | Out-Null
if ($LASTEXITCODE -ne 0) { throw "wla-dx cmake configure failed" }
& $cmake --build $bld --target wla-6502 wlalink | Out-Null
if ($LASTEXITCODE -ne 0) { throw "wla-dx build failed" }

foreach ($exe in 'wla-6502.exe','wlalink.exe') {
  $found = Get-ChildItem -Recurse $bld -Filter $exe | Select-Object -First 1
  if (-not $found) { throw "missing $exe after build" }
  Copy-Item $found.FullName (Join-Path $bin $exe) -Force
}
"built: " + (Join-Path $bin 'wla-6502.exe') + ", " + (Join-Path $bin 'wlalink.exe')
& (Join-Path $bin 'wla-6502.exe') 2>&1 | Select-Object -First 1
