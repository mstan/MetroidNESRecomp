<#
make_release.ps1 -- build the Windows release zip for MetroidNESRecomp.

Ships ONE windows zip (never a bare exe -- the exe needs SDL2.dll and the
launcher/ assets):

  MetroidNESRecomp-windows-x64.zip
      MetroidNESRecomp.exe + SDL2.dll + keybinds.ini + launcher/ + README.txt

Builds build_release\ via build_all.bat (regen, oracle OFF), then stages and
zips. The zip lands in release\ (gitignored) and never contains debug.ini,
config.ini, a ROM, the player's password save (metroid.srm) / logs, or shots.

The build targets Metroid (USA) -- headerless PRG+CHR CRC32 70080810, whole-file
CRC32 A2C89CB9 -- and the runner rejects any other ROM. Metroid (Europe)
(7751588D) is NOT supported by this build; the repo keeps it as metroid-eu.nes
only as the reference for a future EU variant (see README, "Retargeting to
another ROM revision"). build_release\ must stay a production build
(NESRECOMP_ENABLE_TRACE=OFF, no TCP debug server) -- that is what ships here; use
a separate build_trace\ tree for the debug-server tests (see tests\README.md).

Publish AFTER smoke-testing the zip from a scratch directory:

  gh release create vX.Y.Z release\MetroidNESRecomp-windows-x64.zip `
      --title "vX.Y.Z -- <headline>" --notes-file RELEASE_NOTES.md

Usage: powershell -File tools\make_release.ps1 [-SkipBuild]
#>
param(
  [switch]$SkipBuild
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$bin  = Join-Path $root 'build_release'
$out  = Join-Path $root 'release'
New-Item -ItemType Directory -Force $out | Out-Null

if (-not $SkipBuild) {
  & cmd /c (Join-Path $root 'build_all.bat')
  if ($LASTEXITCODE -ne 0) { throw "build_all.bat failed ($LASTEXITCODE)" }
}

$exe = Join-Path $bin 'MetroidNESRecomp.exe'
if (-not (Test-Path $exe)) { throw "missing $exe -- run build_all.bat first" }

$readme = @'
Metroid - Static Recompilation
==============================

A native PC build of Metroid, produced by statically recompiling the NES
ROM's 6502 code to C with the NESRecomp framework (github.com/mstan/nesrecomp).

No ROM is included. On first launch, select your legally-obtained Metroid
(USA) ROM -- CRC32 A2C89CB9 (70080810 without the iNES header). The path is
remembered for future launches. Other revisions are rejected: the European
ROM in particular is a different program and will not run in this build.

PASSWORD SAVE
-------------
Metroid saves progress with a 24-character password rather than battery-backed
SRAM. This build captures your password automatically as you play and stores it
in metroid.srm next to the exe, then auto-fills it on the password screen when
you choose CONTINUE -- so you can resume without ever copying a password by hand.
The pre-boot launcher's SAVE panel shows your current password and lets you edit
it (or paste an older one, with a confirmation step) to roll back to an earlier
point. A rolling history of captured passwords is also kept in
metroid_password_log.txt.

Controls: arrow keys = D-Pad, Z = A, X = B, Enter = Start, Tab = Select.
F5 turbo, F6 save state, F7 load state. Gamepads are supported; all bindings
are configurable in keybinds.ini.
'@

$stage = Join-Path $out 'stage'
if (Test-Path $stage) { Remove-Item -Recurse -Force $stage }
New-Item -ItemType Directory -Force $stage | Out-Null

Copy-Item $exe $stage
foreach ($extra in 'SDL2.dll', 'keybinds.ini') {
  $p = Join-Path $bin $extra
  if (Test-Path $p) { Copy-Item $p $stage }
}
# The pre-boot GUI launcher (and its SAVE/password panel) needs its assets.
$launcher = Join-Path $bin 'launcher'
if (Test-Path $launcher) { Copy-Item -Recurse $launcher (Join-Path $stage 'launcher') }

$readme | Out-File -Encoding ascii (Join-Path $stage 'README.txt')

# Belt-and-braces: never ship debug/dev artifacts, a ROM, or the player's save.
foreach ($banned in 'debug.ini', 'config.ini', 'baserom.nes', 'metroid.srm',
                    'metroid_password_log.txt', 'rom.cfg', 'dispatch_misses.log') {
  $p = Join-Path $stage $banned
  if (Test-Path $p) { Remove-Item $p }
}
Get-ChildItem $stage -Filter '*.nes' -ErrorAction SilentlyContinue | Remove-Item
Get-ChildItem $stage -Filter '*_shot_*.png' -ErrorAction SilentlyContinue | Remove-Item

$zip = Join-Path $out 'MetroidNESRecomp-windows-x64.zip'
if (Test-Path $zip) { Remove-Item $zip }
Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip
Remove-Item -Recurse -Force $stage
Write-Host "staged $zip"
