<#
Build a local USA/NTSC Windows cycle preview archive by default.
No ROM or player data ships. This script does not publish releases.

  powershell -File tools\make_release.ps1 -UsaRom F:\ROMs\metroid.nes -EuropeRom F:\ROMs\metroid-eu.nes
  powershell -File tools\make_release.ps1 -SkipBuild

Existing regional CMake caches retain engine/compiler overrides and ROM paths.
Use -Variant europe or both to include explicit Europe/PAL builds.
#>
param(
    [ValidateSet('both', 'usa', 'europe')][string]$Variant = 'usa',
    [string]$UsaRom,
    [string]$EuropeRom,
    [string]$BuildDir,
    [string]$ArchiveName,
    [switch]$SkipBuild
)
$ErrorActionPreference = 'Stop'
if ($Variant -eq 'both' -and ($BuildDir -or $ArchiveName)) { throw 'Custom BuildDir/ArchiveName requires one explicit variant.' }
if ($ArchiveName -and ([IO.Path]::GetFileName($ArchiveName) -cne $ArchiveName -or -not $ArchiveName.EndsWith('.zip'))) { throw 'ArchiveName must be a ZIP filename.' }
$root = [IO.Path]::GetFullPath((Split-Path -Parent $PSScriptRoot))
$out = Join-Path $root 'release'
New-Item -ItemType Directory -Force -Path $out | Out-Null

function Get-CacheValue([string]$Cache, [string]$Name) {
    $match = [regex]::Match($Cache, '(?m)^' + [regex]::Escape($Name) + ':[^=]+=(.*)\r?$')
    if ($match.Success) { return $match.Groups[1].Value.TrimEnd("`r") }
    return ''
}

function Invoke-HiddenBuild([string]$Executable, [string[]]$ToolArguments) {
    # Quote Windows argv without ShellExecute, terminal windows or shell shims.
    $quoted = foreach ($value in $ToolArguments) {
        $escaped = [regex]::Replace($value, '(\\*)"', '$1$1\"')
        $escaped = [regex]::Replace($escaped, '(\\+)$', '$1$1')
        '"' + $escaped + '"'
    }
    $info = New-Object System.Diagnostics.ProcessStartInfo
    $info.FileName = $Executable
    $info.Arguments = $quoted -join ' '
    $info.WorkingDirectory = $root
    $info.UseShellExecute = $false
    $info.CreateNoWindow = $true
    $info.WindowStyle = [Diagnostics.ProcessWindowStyle]::Hidden
    $info.RedirectStandardOutput = $true
    $info.RedirectStandardError = $true
    $process = New-Object System.Diagnostics.Process
    $process.StartInfo = $info
    try {
        $null = $process.Start()
        $stdout = $process.StandardOutput.ReadToEndAsync()
        $stderr = $process.StandardError.ReadToEndAsync()
        $process.WaitForExit()
        Write-Output $stdout.GetAwaiter().GetResult()
        Write-Output $stderr.GetAwaiter().GetResult()
        if ($process.ExitCode -ne 0) { throw "$Executable failed ($($process.ExitCode))" }
    } finally { $process.Dispose() }
}

if (-not $SkipBuild) {
    $cmake = 'C:\Program Files\CMake\bin\cmake.exe'
    if (-not (Test-Path -LiteralPath $cmake)) {
        $cmake = (Get-Command cmake.exe -ErrorAction Stop).Source
    }
}
$variants = if ($Variant -eq 'both') { @('usa', 'europe') } else { @($Variant) }
foreach ($region in $variants) {
    $build = if($BuildDir) { [IO.Path]::GetFullPath($(if([IO.Path]::IsPathRooted($BuildDir)){$BuildDir}else{Join-Path $root $BuildDir})) } else { Join-Path $root "build-cycle-$region" }
    $cachePath = Join-Path $build 'CMakeCache.txt'
    $cache = if (Test-Path -LiteralPath $cachePath) { Get-Content -LiteralPath $cachePath -Raw } else { '' }
    if (-not $SkipBuild) {
        $rom = if ($region -eq 'usa') { $UsaRom } else { $EuropeRom }
        if (-not $rom) { $rom = Get-CacheValue $cache 'NESRECOMP_ROM' }
        if (-not $rom) { $rom = Join-Path $root $(if ($region -eq 'usa') { 'metroid.nes' } else { 'metroid-eu.nes' }) }
        if (-not (Test-Path -LiteralPath $rom -PathType Leaf)) { throw "Missing $region ROM: $rom. Supply -UsaRom/-EuropeRom." }
        $rom = (Resolve-Path -LiteralPath $rom).Path
        Invoke-HiddenBuild $cmake @('-S', $root, '-B', $build, '-DNESRECOMP_BACKEND=cycle', "-DMETROID_VARIANT=$region", "-DNESRECOMP_ROM=$rom", '-DNESRECOMP_ENABLE_TRACE:BOOL=OFF')
        Invoke-HiddenBuild $cmake @('--build', $build, '--config', 'Release')
        $cache = Get-Content -LiteralPath $cachePath -Raw
    }
    if ((Get-CacheValue $cache 'NESRECOMP_BACKEND') -ne 'cycle' -or (Get-CacheValue $cache 'METROID_VARIANT') -ne $region) {
        throw "Expected a cycle $region build in $build; refusing legacy or mismatched artifacts."
    }
    $configuredSource = Get-CacheValue $cache 'CMAKE_HOME_DIRECTORY'
    if (-not $configuredSource -or [IO.Path]::GetFullPath($configuredSource).TrimEnd('\') -ine $root.TrimEnd('\')) {
        throw 'Release packaging requires the normal game project, not a private wrapper source.'
    }
    if ((Get-CacheValue $cache 'NESRECOMP_ENABLE_TRACE') -notin @('OFF','FALSE','0') -or
        (Get-CacheValue $cache 'METROID_PROGRESSION_QA') -in @('ON','TRUE','1')) { throw 'Release packaging requires tracing and progression QA disabled.' }
    $bin = if(Test-Path -LiteralPath (Join-Path $build 'Release\MetroidNESRecomp.exe')) {Join-Path $build 'Release'} else {$build}
    $exe = Join-Path $bin 'MetroidNESRecomp.exe'
    $packages = Join-Path $bin 'mods\packages'
    foreach ($dependency in @($exe, (Join-Path $bin 'SDL2.dll'), (Join-Path $bin 'assets'), $packages)) {
        if (-not (Test-Path -LiteralPath $dependency)) { throw "Missing release dependency: $dependency" }
    }
    $crc = if ($region -eq 'usa') { '70080810' } else { '7751588d' }
    $label = if ($region -eq 'usa') { 'USA-NTSC' } else { 'Europe-PAL' }
    $wholeCrc = if ($region -eq 'usa') { 'A2C89CB9' } else { 'A591CC24' }
    $manifests = @(Get-ChildItem -LiteralPath $packages -Filter manifest.toml -File -Recurse)
    if ($manifests.Count -ne 2) { throw 'Expected only the widescreen and first-person packages.' }
    foreach ($manifest in $manifests) {
        $text = Get-Content -LiteralPath $manifest.FullName -Raw
        $targets = [regex]::Matches($text, '(?m)^rom_crc32\s*=\s*"([^"]+)"')
        if ($targets.Count -ne 1 -or $targets[0].Groups[1].Value -cne $crc) { throw "Wrong region in $($manifest.FullName)" }
    }
    if (Test-Path -LiteralPath (Join-Path $packages 'metroid.enhancement.voxel-diorama')) { throw 'Retired diorama package must not ship.' }
    $stage = Join-Path $out ('stage-' + [guid]::NewGuid().ToString('N'))
    New-Item -ItemType Directory -Path $stage | Out-Null
    try {
        Copy-Item -LiteralPath $exe -Destination $stage
        Copy-Item -LiteralPath (Join-Path $bin 'SDL2.dll') -Destination $stage
        foreach ($runtime in 'msvcp140.dll', 'vcruntime140.dll', 'vcruntime140_1.dll',
                             'msvcp140_1.dll','msvcp140_2.dll','concrt140.dll','vccorlib140.dll',
                             'msvcp140_atomic_wait.dll','msvcp140_codecvt_ids.dll') {
            $runtimePath = Join-Path $bin $runtime
            if (Test-Path -LiteralPath $runtimePath) { Copy-Item -LiteralPath $runtimePath -Destination $stage }
        }
        Copy-Item -LiteralPath (Join-Path $bin 'assets') -Recurse -Destination (Join-Path $stage 'assets')
        New-Item -ItemType Directory -Path (Join-Path $stage 'mods') | Out-Null
        Copy-Item -LiteralPath $packages -Recurse -Destination (Join-Path $stage 'mods\packages')
        foreach ($doc in 'WIDESCREEN.md', 'RELEASE_NOTES.md', 'CYCLE-MIGRATION.md') {
            Copy-Item -LiteralPath (Join-Path $root $doc) -Destination $stage
        }
        $engineRoot = Get-CacheValue $cache 'NESRECOMP_ROOT'
        $uiRoot = Get-CacheValue $cache 'NESRECOMP_RECOMP_UI'
        if (-not $engineRoot) { $engineRoot = Join-Path $root 'nesrecomp' }
        if (-not $uiRoot) { $uiRoot = Join-Path $root 'recomp-ui' }
        if ((Get-CacheValue $cache 'NESRECOMP_STARTUP_DIAGNOSTICS') -eq 'ON') {
            Copy-Item -LiteralPath (Join-Path $root 'DIAGNOSTICS.md') -Destination $stage
            Copy-Item -LiteralPath (Join-Path $root 'tools/Collect-Diagnostics.cmd') -Destination $stage
            Copy-Item -LiteralPath (Join-Path $engineRoot 'tools/Collect-Diagnostics.ps1') -Destination $stage
        }
        $licenses = @{
            'Game-LICENSE.txt' = (Join-Path $root 'LICENSE')
            'NESRecomp-LICENSE.txt' = (Join-Path $engineRoot 'LICENSE')
            'SDL2-COPYING.txt' = (Join-Path $engineRoot 'runner/external/SDL2/COPYING.txt')
            'ImGui-LICENSE.txt' = (Join-Path $uiRoot 'src/third_party/imgui/LICENSE.txt')
        }
        New-Item -ItemType Directory -Path (Join-Path $stage 'licenses') | Out-Null
        foreach ($name in $licenses.Keys) {
            if (-not (Test-Path -LiteralPath $licenses[$name])) { throw "Missing license: $($licenses[$name])" }
            Copy-Item -LiteralPath $licenses[$name] -Destination (Join-Path $stage "licenses/$name")
        }
        $readme = @"
Metroid - $label cycle preview

No ROM is included. On first launch, choose your matching Metroid ROM.
Whole-file CRC32: $wholeCrc. Headerless PRG+CHR CRC32: $crc.
Use the separate USA/NTSC or Europe/PAL package for the other region.

Arrow keys: D-pad. Z: A/jump. X: B/shoot. Enter: Start. Backslash: Select.
Escape: settings/menu. Hold Tab: fast-forward. F8/F9: save/load cycle state.
F11: fullscreen. F12: screenshot. Gamepads and remapping are supported.

Passwords save automatically to metroid.srm with a rolling history in
metroid_password_log.txt. Existing password sidecars remain usable. The
launcher SAVE panel lets you review/edit your password, and CONTINUE prefills
it in the game. Legacy binary states cannot be loaded by this cycle build;
passwords carry progress between backends. --no-save disables persistence.

Enable Metroid Widescreen or Voxel 3D (first person) in the launcher Mods panel.
Both start disabled. Widescreen offers Fit, 16:9, 21:9 and 32:9, plus optional
viewport actors, expanded sprites and reduced slowdown. These enhancements
remain experimental; see WIDESCREEN.md for their coverage and limitations.
First-person camera: numpad 8/2 pitch, 4/6 yaw, 7/9 roll, +/- field of view,
1/3 sprite scale, 0 toggle, 5 reset.

This is a development preview. Brief regression routes and playtests do not
cover every room, boss or ending. See CYCLE-MIGRATION.md and RELEASE_NOTES.md.

Startup logs and crash dumps are automatic. After a failure, send the diagnostics
folder beside the executable. See DIAGNOSTICS.md; Collect-Diagnostics.cmd also
captures Windows loader failures.
"@
        [IO.File]::WriteAllText((Join-Path $stage 'README.txt'), $readme, [Text.Encoding]::UTF8)
        $forbidden = @(Get-ChildItem -LiteralPath $stage -File -Recurse | Where-Object {
            $_.Extension -in '.nes', '.fds', '.rom', '.srm', '.sav', '.state', '.cycstate', '.log', '.pdb' -or
            $_.Name -in 'debug.ini', 'config.ini', 'keybinds.ini', 'rom.cfg', 'state.toml', 'metroid_password_log.txt'
        })
        if ($forbidden.Count) { throw 'Player/debug data found in release staging.' }
        $zip = Join-Path $out $(if($ArchiveName){$ArchiveName}else{"MetroidNESRecomp-$label-cycle-preview-windows-x64.zip"})
        if (Test-Path -LiteralPath $zip) { Remove-Item -LiteralPath $zip }
        Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip
        Write-Host "Created local preview: $zip"
        Write-Host "SHA256: $((Get-FileHash -LiteralPath $zip -Algorithm SHA256).Hash)"
    } finally {
        $stageAbsolute = [IO.Path]::GetFullPath($stage)
        $outPrefix = [IO.Path]::GetFullPath($out).TrimEnd('\') + '\'
        if (-not $stageAbsolute.StartsWith($outPrefix, [StringComparison]::OrdinalIgnoreCase)) { throw "Refusing cleanup outside release directory: $stageAbsolute" }
        Remove-Item -LiteralPath $stageAbsolute -Recurse -Force
    }
}
