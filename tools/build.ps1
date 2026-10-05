param([string]$Rom, [string]$BuildDir='build_release', [string]$EngineRoot, [string]$RecompUi, [ValidateSet('usa','europe')][string]$Region='usa')
$ErrorActionPreference='Stop'
$root=Split-Path -Parent $PSScriptRoot
if (-not $EngineRoot) { $EngineRoot=Join-Path $root 'nesrecomp' }
if (-not $Rom) {
    $images=@(Get-ChildItem -LiteralPath $root -File | Where-Object { $_.Extension -ieq '.nes' })
    if ($images.Count -eq 1) { $Rom=$images[0].FullName }
}
if (-not $Rom) { throw 'Supply -Rom with the original ROM for the selected region.' }
& (Join-Path $EngineRoot 'tools/build_cycle_windows.ps1') -ProjectRoot $root -Rom $Rom -BuildDir $BuildDir -EngineRoot $EngineRoot -RecompUi $RecompUi -CMakeArgs @("-DMETROID_VARIANT=$Region")
