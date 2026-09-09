# Tests

```bash
cd tests
npm install          # once
npx vitest run       # everything
npx vitest run password.test.ts
```

`test.config.json` pins `romSha256` to the SHA-256 of the **Metroid (USA)** ROM
body (the file minus its 16-byte iNES header), which is how `findRom()` picks
`metroid.nes` out of the repo root and ignores `metroid-eu.nes`. If you retarget
the repo at another ROM revision, update that hash too.

## The password tests need a debug-server build

`password.test.ts` drives the running game over the TCP debug server (`pause`,
`get_registers`, `read_ram`, `write_ram`, `pw_now`). That server only exists when
the runner is built with `-DNESRECOMP_ENABLE_TRACE=ON`; a production build
compiles `debug_server_stub.c` instead, opens no port, and the test fails in
`beforeAll` with *"debug server never came up"*.

`build_release/` is the **release** tree (`tools/make_release.ps1` ships it), so it
stays production. Build a separate trace tree and point the tests at it with
`NESRECOMP_TEST_EXE`:

```powershell
# VS dev shell, VS-bundled cmake + ninja (see build_all.bat for the PATH scrub)
cmake -S . -B build_trace -G Ninja -DCMAKE_BUILD_TYPE=Release `
      -DCMAKE_C_COMPILER=cl -DCMAKE_CXX_COMPILER=cl -DNESRECOMP_ENABLE_TRACE=ON
cmake --build build_trace

cd tests
$env:NESRECOMP_TEST_EXE = "..\build_trace\MetroidNESRecomp.exe"
npx vitest run password.test.ts
```

Without `NESRECOMP_TEST_EXE` the tests keep their old behaviour: `build_release/`
first, then `build/Release/`.

The same trace build is what exposes the frame-record ring buffer that carries
the widescreen compositor's stats (`metroid_ws_fill_stats` → `game_data[16..31]`,
read back with `get_frame` / `frame_range`).
