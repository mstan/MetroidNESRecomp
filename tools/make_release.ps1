<#
make_release.ps1 -- build the Windows release zip for MetroidNESRecomp.

Ships ONE windows zip (never a bare exe -- the exe needs SDL2.dll and the
launcher/ assets):

  MetroidNESRecomp-USA-widescreen-preview-windows-x64.zip
      MetroidNESRecomp.exe + SDL2.dll + launcher/ + mods/
      + README.txt + WIDESCREEN.md + RELEASE_NOTES.md

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

  gh release create vX.Y.Z release\MetroidNESRecomp-USA-widescreen-preview-windows-x64.zip `
      --title "vX.Y.Z -- <headline>" --notes-file RELEASE_NOTES.md

Usage: powershell -File tools\make_release.ps1 [-SkipBuild]
#>
param(
  [switch]$SkipBuild,
  [string]$BuildDir = 'build_release',
  [string]$ArchiveName = 'MetroidNESRecomp-USA-widescreen-preview-windows-x64.zip'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$bin  = if ([IO.Path]::IsPathRooted($BuildDir)) { $BuildDir } else { Join-Path $root $BuildDir }
$out  = Join-Path $root 'release'
if ([IO.Path]::GetFileName($ArchiveName) -ne $ArchiveName) { throw 'ArchiveName must be a filename.' }
New-Item -ItemType Directory -Force $out | Out-Null

if (-not $SkipBuild) {
  if ($BuildDir -ne 'build_release') { throw 'For an alternate production build directory, use -SkipBuild -BuildDir <path>.' }
  & cmd /c (Join-Path $root 'build_all.bat')
  if ($LASTEXITCODE -ne 0) { throw "build_all.bat failed ($LASTEXITCODE)" }
}

$exe = Join-Path $bin 'MetroidNESRecomp.exe'
if (-not (Test-Path $exe)) { throw "missing $exe -- run build_all.bat first" }
$cache = Get-Content -LiteralPath (Join-Path $bin 'CMakeCache.txt') -Raw
if ($cache -notmatch '(?m)^NESRECOMP_ENABLE_TRACE:BOOL=OFF\s*$') {
  throw 'Release packaging requires NESRECOMP_ENABLE_TRACE=OFF'
}
if ($cache -match '(?m)^METROID_PROGRESSION_QA:[^=]+=ON\s*$') {
  throw 'Release packaging refuses the private progression QA build'
}

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

Controls: arrow keys = D-Pad, Z = A, X = B, Enter = Start, Backslash = Select.
F5 turbo, F6 save state, F7 load state. Gamepads are supported; all bindings
are configurable in keybinds.ini.

ADAPTIVE WIDESCREEN (USA PREVIEW)
-------------------------------
Enable Metroid Widescreen in the launcher mod controls, or run:
  MetroidNESRecomp.exe metroid.nes --widescreen fit
Presets: 16:9, 21:9, 32:9. Append ,center to keep the HUD in its stock position.
Use --widescreen off for the stock picture. Additional rooms use the original
map; enemy activation depends on the selected widescreen options.
Read WIDESCREEN.md for presets, enemy activation options and known limitations.
Passwords carry progress between builds. Experimental binary save states require
a matching build. Key bindings are created with normal defaults on first launch.
'@

$stage = Join-Path $out ('stage-' + [guid]::NewGuid().ToString('N'))
New-Item -ItemType Directory -Force $stage | Out-Null

Copy-Item -LiteralPath $exe -Destination $stage
foreach ($extra in 'SDL2.dll') {
  $p = Join-Path $bin $extra
  if (-not (Test-Path -LiteralPath $p)) { throw "missing release dependency: $p" }
  Copy-Item -LiteralPath $p -Destination $stage
}
# The current launcher stages assets/; older production builds used launcher/.
$assetName = if (Test-Path -LiteralPath (Join-Path $bin 'assets')) { 'assets' } else { 'launcher' }
$launcher = Join-Path $bin $assetName
if (-not (Test-Path -LiteralPath $launcher)) { throw "missing launcher assets: $launcher" }
Copy-Item -LiteralPath $launcher -Recurse -Destination (Join-Path $stage $assetName)
# Runtime scans mods/packages, matching CMake's staging layout.
Copy-Item -LiteralPath (Join-Path $root 'mods\preloaded') -Recurse -Destination (Join-Path $stage 'mods')
foreach ($doc in 'WIDESCREEN.md', 'RELEASE_NOTES.md') {
  Copy-Item -LiteralPath (Join-Path $root $doc) -Destination $stage
}

$readme | Out-File -Encoding ascii (Join-Path $stage 'README.txt')

# Only staged allowlisted inputs ship; fail if assets accidentally contain user data.
$forbidden = Get-ChildItem -LiteralPath $stage -File -Recurse | Where-Object {
  $_.Extension -in '.nes', '.fds', '.sav', '.srm', '.state', '.cycstate', '.log' -or
  $_.Name -in 'debug.ini', 'config.ini', 'keybinds.ini', 'rom.cfg', 'state.toml', 'metroid_password_log.txt'
}
if ($forbidden) { throw 'Forbidden user/debug data found in release staging' }

$zip = Join-Path $out $ArchiveName
if (Test-Path -LiteralPath $zip) { Remove-Item -LiteralPath $zip }
Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip
$stageAbsolute = [IO.Path]::GetFullPath($stage)
$outPrefix = [IO.Path]::GetFullPath($out).TrimEnd('\') + '\'
if (-not $stageAbsolute.StartsWith($outPrefix, [StringComparison]::OrdinalIgnoreCase)) {
  throw "Refusing cleanup outside release directory: $stageAbsolute"
}
Remove-Item -LiteralPath $stageAbsolute -Recurse -Force
Write-Host "staged $zip"
