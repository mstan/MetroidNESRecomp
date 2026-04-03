# NES Recompilation – Claude Rules & Protocol

This project is a **static NES recompilation system**.

We are NOT building an emulator.
We are NOT trying to "make the game look correct".

We are achieving **byte-level equivalence with an emulator oracle**.

## What we're building

**nesrecomp** (the recompiler + runner in the `nesrecomp/` submodule) is an **incomplete tool under active development**. Metroid is a complex game with 6502 patterns and hardware behaviors not yet fully supported by the recompiler or runner. The generated code may compile and run but produce incorrect logic. Finding and fixing these gaps IS the primary work of this project.

- The **recompiler** (`code_generator.c`, `function_finder.c`, `game_config.c`) translates 6502 → C. It handles dispatch patterns, bank switching, stack manipulation. It is NOT finished — new games expose new 6502 idioms that require codegen changes.
- The **runner** (`runtime.c`, `ppu_renderer.c`, `main_runner.c`, `mapper.c`) simulates NES hardware (PPU, APU, mappers, memory map, NMI timing). It is NOT finished — each game exercises different hardware behaviors that must be implemented or corrected.
- **Game repos** (like MetroidNESRecomp) contain `game.toml`, `extras.c`, and generated output. `game.toml` provides game-specific hints (dispatch patterns, excluded data regions, extra functions) that the recompiler needs to handle the ROM correctly.

When something is wrong, the fix belongs in the recompiler or runner (nesrecomp), or in the game's configuration (`game.toml`). Never hand-edit generated output.

---

# 🔴 HARD RULES (NON-NEGOTIABLE)

If ANY rule is violated:
- The response is INVALID
- STOP immediately
- Restart using the correct protocol

---

## 1. NO GUESSING

- Do NOT say:
  - "likely"
  - "probably"
  - "this might be"
- Every claim MUST be backed by measured data

---

## 2. NO STDOUT DEBUGGING

- printf/logging is FORBIDDEN
- No ad-hoc logs
- ALL debugging must use structured state inspection (TCP ring buffer)

---

## 3. ALWAYS USE ORACLE COMPARISON

- Native vs emulator MUST be compared
- If no comparison is performed → STOP

---

## 4. FIX ROOT CAUSE ONLY

- Do NOT patch symptoms
- Do NOT make speculative fixes
- Do NOT rewrite systems without proof

---

## 5. DO NOT TRUST THE SYSTEM

- Assume BOTH:
  - recompiler MAY be wrong
  - runner MAY be wrong
- No assumptions of correctness without verification

---

## 6. FIX THE TOOL, NOT THE OUTPUT

- NEVER modify generated code
- Fix:
  - code generator (recompiler)
  - or runner

---

# 🔴 REQUIRED DEBUGGING PROTOCOL

ALL debugging MUST follow this EXACT sequence.

---

## STEP 1 — SYNC STATE

Frames between emulator and native may NOT align.

You MUST:

- Find a comparable state using:
  - PPU state
  - scroll position
  - palette snapshot
  - or other stable markers

NOT frame number alone.

If sync cannot be established → STOP

---

## STEP 2 — DUMP STATE (BOTH SIDES)

You MUST dump:

- CHR RAM
- Nametable
- Palette
- PPU registers
- (optional) CPU state

From:

- Native (TCP ring buffer)
- Emulator (oracle)

---

## STEP 3 — DIFF

You MUST produce a byte-level diff.

Required format:

Frame: <synced>
Location: 0xXXXX
Expected: 0xYY
Actual:   0xZZ

If no exact diff is produced → STOP

---

## STEP 4 — FIRST DIVERGENCE

- Identify FIRST frame where mismatch occurs
- NOT a later symptom

---

## STEP 5 — TRACE WRITE

You MUST identify:

- Function
- Instruction
- Address written
- Call path

If write cannot be identified → STOP

---

## STEP 6 — CLASSIFY

Bug MUST be one of:

- Codegen (incorrect data generated)
- Runner (incorrect memory handling)
- Timing (NMI / PPU timing issue)

---

## STEP 7 — FIX

ONLY after all prior steps are complete:

- Apply minimal fix
- Modify ONLY:
  - generator OR runner
- NEVER patch generated output

---

# 🔴 REQUIRED RESPONSE FORMAT

Every debugging response MUST include:

1. Sync method used
2. State dumped (what + from where)
3. Exact diff (address + values)
4. First divergence frame
5. Write trace (function + address)
6. Classification (codegen / runner / timing)
7. Proposed fix (only if justified)

If ANY section is missing → STOP

---

# 🔴 TCP DEBUGGING REQUIREMENTS

TCP ring buffer is the PRIMARY debugging interface.
All analysis MUST go through it.

There are TWO TCP systems:

1. **Native build TCP server** (port 5370) — recompiled game
2. **Emulator (oracle) TCP server** — Nestopia-based emulated build

Both MUST be used for ALL debugging.

### REQUIRED CAPABILITIES

Claude MUST be able to:

- Query arbitrary memory (CPU RAM, PRG, CHR)
- Query PPU state (registers, nametable, palette)
- Query timeseries across frame ranges
- Identify writes over time

### IF TOOLING IS MISSING

If a required query/tool does NOT exist:

- You MUST implement it in the native TCP server OR emulator TCP server
- You MUST NOT work around missing tooling
- You MUST NOT fall back to logging or guessing

**IF TOOLING IS MISSING → BUILD IT FIRST → THEN CONTINUE**

### KNOWN GAP: Emulator oracle TCP

The `--emulated` mode runs Nestopia internally, but the TCP ring buffer may not expose Nestopia's true internal PPU/VRAM state (`g_ram` does NOT reflect Nestopia's internal state). Nestopia's source is in `nestopia-core/` and CAN be modified to expose this data. This gap MUST be either:

- **Fixed** — modify Nestopia to expose full internal state over TCP, OR
- **Accepted and documented** — explicitly note what cannot be compared and why

Do NOT proceed with oracle comparison that silently uses incomplete emulator data.

---

# 🔴 FULL STATE REQUIREMENT ("ALL STATE")

"ALL STATE" is NOT optional and NOT partial.

A state dump MUST include:

### CPU
- Registers: A, X, Y, SP, flags
- Full CPU RAM (0x0000–0x07FF)

### PPU
- PPUCTRL, PPUMASK, PPUSTATUS
- OAMADDR, OAMDATA
- PPUSCROLL, PPUADDR
- Internal latch state (ppuaddr_latch, scroll_latch)

### VRAM
- Nametable memory (0x2000–0x2FFF)
- Attribute tables
- CHR RAM / CHR ROM (pattern tables, 0x0000–0x1FFF)
- Palette (0x3F00–0x3F1F)

### MAPPER
- Current PRG bank mapping
- Current CHR bank mapping
- Mapper registers (MMC1 shift/ctrl/chr0/chr1/prg)

### TIMING
- Frame number
- NMI/VBlank depth state

### KNOWN GAPS (not yet captured in ring buffer — build if needed)
- PC is not meaningful in recompiled code (`last_func` is stored instead)
- Cycle count (`s_ops_count`) — not per-frame in ring buffer
- PRG ROM mapped content — `read_frame_ram` doesn't support PRG range reads
- Latch state (ppuaddr_latch, scroll_latch) — verify if captured

If ANY of the above required state is missing from a dump:

- The dump is INVALID
- STOP and fix tooling

### NO PARTIAL STATE

- Dumping only RAM is INVALID
- Dumping only PPU is INVALID
- Dumping "what seems relevant" is INVALID

---

# 🔴 STATE VALIDATION REQUIREMENT

After dumping state, you MUST explicitly confirm:

- All CPU state present
- All PPU state present
- All VRAM present
- Mapper state present

If not, STOP and correct the dump.

You MUST NOT proceed with partial data.

---

# 🔴 TIMESERIES REQUIREMENT

Single-frame inspection is NOT sufficient.

You MUST:

- Analyze a RANGE of frames
- Identify when divergence FIRST appears
- Track how state evolves over time

If only a single frame is analyzed → STOP

---

# 🔴 NO WORKAROUNDS

If a problem cannot be analyzed with current tools:

- DO NOT:
  - add logs
  - guess behavior
  - patch blindly

- INSTEAD:
  - extend TCP tooling
  - add missing observability
  - then re-run analysis

WORKAROUNDS ARE FORBIDDEN

---

# 🔴 FORBIDDEN BEHAVIOR

- Guessing
- Skipping steps
- "Quick fixes"
- Visual-only debugging
- Rewriting unrelated systems
- Avoiding available tools

---

# 🔴 FAILURE CONDITIONS

If you:

- Propose a fix without diffing
- Avoid TCP tools
- Skip oracle comparison
- Make assumptions without data

You MUST STOP and restart analysis.

---

# 🔴 GHIDRA REQUIREMENT

Before investigating ANY unknown 6502 address or function:

- Call `mcp__ghidra__get_program_info` to verify Ghidra is running
- If Ghidra is not running → STOP and ask user to load the bank
- Use Ghidra to understand what the code does — never guess 6502 behavior

---

# 🔴 PROCESS RULES

- **Kill all game instances** before launching new ones — never leave orphans
- **No indiscriminate screenshots** — don't auto-screenshot every N frames from the runner. Script-triggered screenshots for targeted visual comparison are encouraged.
- **TCP commands use JSON**: `{"cmd":"read_ppu","addr":"3F00","len":32}` — see `reference_debug_tools.md` in memory for the full command reference

---

# 🔴 STATE SYNC CLARIFICATION

Step 1 says "sync state, not frame number." This means:

- The emulator and native build may reach the same game state at DIFFERENT frame numbers
- You MUST find equivalent states by comparing PPU state, scroll, palette, or game RAM — not by assuming frame N native == frame N emulator
- Use ring buffer timeseries to search for matching states across frame ranges

---

# 🔴 SESSION START REQUIREMENT

Before doing ANY work:

1. Read this file fully
2. Summarize the rules
3. Confirm you will follow them EXACTLY
4. Explicitly state:
   - You will NOT guess
   - You will rely ONLY on measured divergence
   - You will use TCP + oracle comparison

If this is not done → STOP