# Metroid — macOS (Apple Silicon) build

Native arm64 macOS build of Metroid, attached to release **v0.0.2** as
`MetroidNESRecomp-macos-arm64.zip`.

## What this is
- The original game statically recompiled to native arm64 (no emulator core shipped).
- Self-contained `.app`: SDL2 bundled via `@executable_path`, ad-hoc codesigned.
- Verified by manual play on Apple Silicon (looks/sounds correct on the golden path).

## Status
Largely untested / experimental. Please report any bugs by filing an issue on the repository.


## Install
1. Download `MetroidNESRecomp-macos-arm64.zip` from the **v0.0.2** release and unzip.
2. First launch: right-click `Metroid.app` -> Open (ad-hoc signed), or
   `xattr -dr com.apple.quarantine "Metroid.app"`.
3. ROM not included — supply your own dump: Metroid (USA) .nes dump
4. Run: `"Metroid.app/Contents/MacOS/Metroid" /path/to/rom`

## Build it yourself
`scripts/release-mac.sh` reproduces this artifact (build -> .app -> zip);
`scripts/release-mac.sh --publish` re-attaches it to the latest release.
Requires: `brew install cmake ninja sdl2 dylibbundler` on Apple Silicon.
