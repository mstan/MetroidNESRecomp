# ROM header compatibility

The launcher verifies the original PRG+CHR game data. The runtime also checks
the cartridge board needed by native code. Equivalent legacy iNES and NES 2.0
headers are accepted after resolving known legacy board details. NTSC and PAL
profiles remain separate; different game data, board wiring, RAM geometry or
console metadata cannot bypass these checks.

No ROM is included. USA retail images remain preferred where available.
This patch retains the existing renderer and enhancement packages. Automated
release checks cover header acceptance, startup and native/interpreter
execution; they do not constitute a new complete stage/mechanics audit.
