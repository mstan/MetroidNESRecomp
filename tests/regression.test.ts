/**
 * Per-game regression test for nesrecomp.
 *
 * Reads test.config.json for ROM hash and smoke params.
 * Discovers paths relative to the game repo root (one level up from tests/).
 * Steps: verify ROM → regen → build → smoke → compare baseline.
 *
 * Usage:
 *   npx vitest run                       # run tests, create baseline if missing
 *   UPDATE_BASELINE=1 npx vitest run     # force-update baseline
 */
import { describe, it, expect } from "vitest";
import { execFileSync } from "child_process";
import {
  existsSync,
  readFileSync,
  writeFileSync,
  readdirSync,
  statSync,
} from "fs";
import { join, resolve, dirname } from "path";
import { createHash } from "crypto";

// ── Paths (all relative to game repo root) ──────────────────────────────────

const TESTS_DIR = import.meta.dirname;
const GAME_ROOT = resolve(TESTS_DIR, "..");
const CONFIG: {
  romSha256: string;
  smokeFrames: number;
  smokeInterval: number;
} = JSON.parse(readFileSync(join(TESTS_DIR, "test.config.json"), "utf-8"));

const UPDATE_BASELINE = !!process.env.UPDATE_BASELINE;

// Find NESRecomp.exe via the nesrecomp junction in the game dir
const NESRECOMP_EXE = resolve(
  GAME_ROOT,
  "nesrecomp/build/recompiler/Release/NESRecomp.exe"
);

// Find MSBuild — check common locations
const MSBUILD_CANDIDATES = [
  "C:/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe",
  "C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/MSBuild.exe",
  "C:/Program Files/Microsoft Visual Studio/2022/Professional/MSBuild/Current/Bin/MSBuild.exe",
];
const MSBUILD_EXE =
  process.env.MSBUILD_PATH ||
  MSBUILD_CANDIDATES.find((p) => existsSync(p)) ||
  "msbuild";

// ── ROM discovery ───────────────────────────────────────────────────────────

function findRom(): string | null {
  // Find any .nes file whose headerless SHA256 matches the config
  const files = readdirSync(GAME_ROOT).filter((f) =>
    f.toLowerCase().endsWith(".nes")
  );
  for (const f of files) {
    const full = join(GAME_ROOT, f);
    const data = readFileSync(full);
    if (data.length < 17) continue; // too small for iNES
    const romData = data.subarray(16);
    const hash = createHash("sha256").update(romData).digest("hex");
    if (hash === CONFIG.romSha256) return full;
  }
  return null;
}

function findToml(): string {
  const toml = join(GAME_ROOT, "game.toml");
  if (existsSync(toml)) return toml;
  throw new Error(`game.toml not found in ${GAME_ROOT}`);
}

function findSln(): string {
  const buildDir = join(GAME_ROOT, "build");
  if (!existsSync(buildDir)) throw new Error(`build/ not found in ${GAME_ROOT}`);
  const slns = readdirSync(buildDir).filter((f) => f.endsWith(".sln"));
  if (slns.length === 0) throw new Error(`No .sln found in ${buildDir}`);
  return join(buildDir, slns[0]);
}

function findExe(): string {
  const releaseDir = join(GAME_ROOT, "build/Release");
  if (!existsSync(releaseDir))
    throw new Error(`build/Release/ not found in ${GAME_ROOT}`);
  const exes = readdirSync(releaseDir).filter((f) => f.endsWith(".exe"));
  // Filter out SDL2.dll etc — find the main game exe
  const gameExes = exes.filter(
    (f) => !f.toLowerCase().startsWith("sdl") && f.endsWith("Recomp.exe")
  );
  if (gameExes.length === 0)
    throw new Error(`No *Recomp.exe found in ${releaseDir}`);
  return join(releaseDir, gameExes[0]);
}

function getOutputPrefix(): string {
  const tomlContent = readFileSync(findToml(), "utf-8");
  const match = tomlContent.match(/output_prefix\s*=\s*"([^"]+)"/);
  return match ? match[1] : "output";
}

// ── Helpers ─────────────────────────────────────────────────────────────────

interface SmokeResult {
  frames_run: number;
  dispatch_miss_count: number;
  dispatch_miss_unique: number;
  dispatch_misses: string[];
  frame_hashes: Record<string, string>;
}

interface Baseline {
  function_count: number;
  dispatch_entry_count: number;
  smoke: SmokeResult;
}

function countDispatchEntries(): number {
  const prefix = getOutputPrefix();
  const dispatchFile = join(GAME_ROOT, `generated/${prefix}_dispatch.c`);
  if (!existsSync(dispatchFile)) return -1;
  const content = readFileSync(dispatchFile, "utf-8");
  return (content.match(/case 0x/g) || []).length;
}

function regen(romPath: string): number {
  const stderr = execFileSync(NESRECOMP_EXE, [romPath, "--game", findToml()], {
    cwd: GAME_ROOT,
    timeout: 120_000,
    maxBuffer: 50 * 1024 * 1024,
    encoding: "utf-8",
    stdio: ["pipe", "pipe", "pipe"],
  });
  // Function count is printed to stdout (captured in stderr due to merge)
  const combined = stderr.toString();
  const match = combined.match(/Found (\d+) functions/);
  return match ? parseInt(match[1], 10) : -1;
}

function build(): void {
  const sln = findSln();
  execFileSync(MSBUILD_EXE, [sln, "-p:Configuration=Release", "-m"], {
    cwd: GAME_ROOT,
    timeout: 300_000,
    maxBuffer: 100 * 1024 * 1024, // 100MB — large games produce huge MSBuild output
    encoding: "utf-8",
    stdio: ["pipe", "pipe", "pipe"],
  });
}

function runSmoke(romPath: string): SmokeResult {
  const exe = findExe();
  const outPath = join(TESTS_DIR, "smoke_result.json");

  execFileSync(exe, [
    romPath,
    "--smoke", String(CONFIG.smokeFrames),
    "--smoke-interval", String(CONFIG.smokeInterval),
    "--smoke-output", outPath,
  ], {
    cwd: dirname(exe),
    timeout: 120_000,
    encoding: "utf-8",
    stdio: ["pipe", "pipe", "pipe"],
  });

  return JSON.parse(readFileSync(outPath, "utf-8"));
}

function loadBaseline(): Baseline | null {
  const path = join(TESTS_DIR, "baseline.json");
  if (!existsSync(path)) return null;
  return JSON.parse(readFileSync(path, "utf-8"));
}

function saveBaseline(baseline: Baseline): void {
  writeFileSync(
    join(TESTS_DIR, "baseline.json"),
    JSON.stringify(baseline, null, 2) + "\n"
  );
}

// ── Tests ───────────────────────────────────────────────────────────────────

const gameName = GAME_ROOT.split("/").pop() || "unknown";

describe(gameName, () => {
  const romPath = findRom();

  it("ROM exists and matches expected SHA256", () => {
    expect(romPath, `No ROM matching SHA256 ${CONFIG.romSha256} found`).not.toBeNull();
  });

  it.skipIf(!romPath)("regen produces valid output", () => {
    const functionCount = regen(romPath!);
    expect(functionCount).toBeGreaterThan(0);
  });

  it.skipIf(!romPath)("build succeeds", () => {
    build();
  });

  it.skipIf(!romPath)("smoke test passes", () => {
    const result = runSmoke(romPath!);
    const functionCount = regen(romPath!); // quick — already cached
    const dispatchEntries = countDispatchEntries();

    const current: Baseline = {
      function_count: functionCount,
      dispatch_entry_count: dispatchEntries,
      smoke: result,
    };

    if (UPDATE_BASELINE) {
      saveBaseline(current);
      console.log(`  [baseline] Updated`);
      return;
    }

    const baseline = loadBaseline();
    if (!baseline) {
      saveBaseline(current);
      console.log(`  [baseline] Created initial baseline`);
      return;
    }

    // Frame hashes: HARD FAIL
    for (const [frame, hash] of Object.entries(baseline.smoke.frame_hashes)) {
      expect(
        result.frame_hashes[frame],
        `Frame ${frame} hash mismatch — visual regression`
      ).toBe(hash);
    }

    // Must complete expected frames
    expect(result.frames_run).toBe(CONFIG.smokeFrames);

    // Function count: WARN
    if (current.function_count !== baseline.function_count) {
      console.warn(
        `  ⚠ function count changed: ${baseline.function_count} → ${current.function_count}`
      );
    }

    // Dispatch entries: WARN
    if (current.dispatch_entry_count !== baseline.dispatch_entry_count) {
      console.warn(
        `  ⚠ dispatch entries changed: ${baseline.dispatch_entry_count} → ${current.dispatch_entry_count}`
      );
    }

    // Dispatch misses: WARN on increase
    if (result.dispatch_miss_count > baseline.smoke.dispatch_miss_count) {
      console.warn(
        `  ⚠ dispatch misses increased: ${baseline.smoke.dispatch_miss_count} → ${result.dispatch_miss_count}`
      );
    }
  });
});
