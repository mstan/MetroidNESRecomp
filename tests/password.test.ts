/**
 * Password save-system regression tests (synthetic SRAM).
 *
 * Guards the invariants that are easy to break when the out-of-band encoder
 * pattern is touched for ANOTHER game and a discriminator is missed:
 *
 *   1. CAPTURE IS SIDE-EFFECT-FREE — calling the game's encoder out-of-band
 *      (every ~5s during play) must NOT change any live game state. This is the
 *      bug that caused Metroid's stack to drift (g_cpu.S +2 + dirtied stack page)
 *      → garbled health / "TIME" on screen / lockup. We pause the game (so there
 *      is zero natural drift), snapshot CPU regs + all work RAM, trigger one
 *      capture (pw_now), snapshot again, and assert byte-for-byte identical.
 *
 *   2. CAPTURE IS DETERMINISTIC & STATE-SENSITIVE — the same progress must always
 *      yield the same password (forced shift), and different progress must yield
 *      a different, non-blank password (catches wrong buffer offsets / a stubbed
 *      encoder — the other bug we hit, reading $799A instead of $699A).
 *
 * Drives the native build over the TCP debug server. Requires a built exe; the
 * test is skipped (not failed) if none is found, so it never blocks unrelated CI.
 *
 *   npx vitest run password
 */
import { describe, it, expect, beforeAll, afterAll } from "vitest";
import { spawn, execFileSync, type ChildProcess } from "child_process";
import { existsSync, readFileSync, writeFileSync, readdirSync } from "fs";
import { join, resolve, dirname } from "path";
import { createHash } from "crypto";
import net from "net";

const TESTS_DIR = import.meta.dirname;
const GAME_ROOT = resolve(TESTS_DIR, "..");
const PORT = 5393; // dedicated test port (avoids clashing with a dev instance on 5370)

// NES controller bit masks (as the runner sees them).
const BTN = { A: 0x80, B: 0x40, SELECT: 0x20, START: 0x10, UP: 8, DOWN: 4, LEFT: 2, RIGHT: 1 };

// ── locate exe + ROM ─────────────────────────────────────────────────────────
function findExe(): string | null {
  // These tests drive the TCP debug server, which only exists in a build
  // configured with -DNESRECOMP_ENABLE_TRACE=ON. build_release/ is the RELEASE
  // tree (tools/make_release.ps1 ships it) and is deliberately production, so
  // point the tests at a trace build with NESRECOMP_TEST_EXE. See tests/README.md.
  const override = process.env.NESRECOMP_TEST_EXE;
  if (override) {
    const p = resolve(GAME_ROOT, override);
    if (!existsSync(p)) throw new Error(`NESRECOMP_TEST_EXE does not exist: ${p}`);
    return p;
  }
  // Prefer the Ninja build (build_release/), fall back to the VS build (build/Release).
  for (const rel of ["build_release", "build/Release"]) {
    const dir = join(GAME_ROOT, rel);
    if (!existsSync(dir)) continue;
    const exe = readdirSync(dir).find(
      (f) => f.endsWith("Recomp.exe") && !f.toLowerCase().startsWith("sdl")
    );
    if (exe) return join(dir, exe);
  }
  return null;
}

function findRom(): string | null {
  const cfgPath = join(TESTS_DIR, "test.config.json");
  const sha: string | undefined = existsSync(cfgPath)
    ? JSON.parse(readFileSync(cfgPath, "utf-8")).romSha256
    : undefined;
  const nes = readdirSync(GAME_ROOT).filter((f) => f.toLowerCase().endsWith(".nes"));
  for (const f of nes) {
    const data = readFileSync(join(GAME_ROOT, f));
    if (data.length < 17) continue;
    if (!sha) return join(GAME_ROOT, f); // no hash configured — take the first ROM
    const hash = createHash("sha256").update(data.subarray(16)).digest("hex");
    if (hash === sha) return join(GAME_ROOT, f);
  }
  return nes.length ? join(GAME_ROOT, nes[0]) : null;
}

// ── minimal JSON-over-newline TCP client ─────────────────────────────────────
class Dbg {
  private sock: net.Socket;
  private buf = "";
  private waiters: ((line: string) => void)[] = [];
  constructor(sock: net.Socket) {
    this.sock = sock;
    sock.setEncoding("utf-8");
    sock.on("data", (d: string) => {
      this.buf += d;
      let nl: number;
      while ((nl = this.buf.indexOf("\n")) >= 0) {
        const line = this.buf.slice(0, nl).trim();
        this.buf = this.buf.slice(nl + 1);
        const w = this.waiters.shift();
        if (w && line) w(line);
      }
    });
  }
  static connect(port: number, timeoutMs = 15000): Promise<Dbg> {
    return new Promise((res, rej) => {
      const deadline = Date.now() + timeoutMs;
      const tryConnect = () => {
        const s = net.connect(port, "127.0.0.1");
        s.once("connect", () => res(new Dbg(s)));
        s.once("error", () => {
          s.destroy();
          if (Date.now() > deadline) rej(new Error("debug server never came up"));
          else setTimeout(tryConnect, 300);
        });
      };
      tryConnect();
    });
  }
  cmd(obj: Record<string, unknown>): Promise<any> {
    return new Promise((res, rej) => {
      const t = setTimeout(() => rej(new Error("cmd timeout: " + JSON.stringify(obj))), 6000);
      this.waiters.push((line) => {
        clearTimeout(t);
        try { res(JSON.parse(line)); } catch { res({ raw: line }); }
      });
      this.sock.write(JSON.stringify(obj) + "\n");
    });
  }
  close() { this.sock.destroy(); }
}

const sleep = (ms: number) => new Promise((r) => setTimeout(r, ms));

async function readRamFull(d: Dbg): Promise<Buffer> {
  const out = Buffer.alloc(0x800);
  for (let base = 0; base < 0x800; base += 256) {
    const r = await d.cmd({ cmd: "read_ram", addr: base.toString(16), len: 256 });
    Buffer.from(r.hex, "hex").copy(out, base);
  }
  return out;
}

async function readByte(d: Dbg, addr: number): Promise<number> {
  const r = await d.cmd({ cmd: "read_ram", addr: addr.toString(16), len: 1 });
  return parseInt(r.hex.slice(0, 2), 16);
}

// Title → START → START/CONTINUE menu → START (new game) → gameplay ($1D==0).
async function startGameplay(d: Dbg): Promise<boolean> {
  await d.cmd({ cmd: "press", buttons: BTN.START, frames: 8 });
  await sleep(1200);
  await d.cmd({ cmd: "press", buttons: BTN.START, frames: 8 });
  for (let i = 0; i < 40; i++) {
    await sleep(150);
    if ((await readByte(d, 0x1d)) === 0) return true; // $1D==0 = in gameplay
  }
  return false;
}

// ── harness ──────────────────────────────────────────────────────────────────
const exe = findExe();
const rom = findRom();
const ready = !!exe && !!rom;
let proc: ChildProcess | undefined;
let dbg: Dbg | undefined;

describe("Metroid password capture", () => {
  beforeAll(async () => {
    if (!ready) return;
    try { execFileSync("taskkill", ["/F", "/IM", "MetroidNESRecomp.exe"], { stdio: "ignore" }); } catch {}
    // Enable the native TCP debug server on a dedicated port.
    writeFileSync(join(dirname(exe!), "debug.ini"), `port=${PORT}\n`);
    proc = spawn(exe!, [rom!], { cwd: dirname(exe!), stdio: "ignore", detached: false });
    dbg = await Dbg.connect(PORT);
    const inGame = await startGameplay(dbg);
    expect(inGame, "failed to reach gameplay ($1D never went 0)").toBe(true);
  }, 60000);

  afterAll(async () => {
    try { dbg?.cmd({ cmd: "quit" }); } catch {}
    dbg?.close();
    try { execFileSync("taskkill", ["/F", "/IM", "MetroidNESRecomp.exe"], { stdio: "ignore" }); } catch {}
    proc?.kill();
  });

  it.skipIf(!ready)("capture is side-effect-free (no stack/state corruption)", async () => {
    // Pause so nothing drifts naturally; any change is purely from the capture.
    await dbg!.cmd({ cmd: "pause" });
    const r1 = await dbg!.cmd({ cmd: "get_registers" });
    const before = await readRamFull(dbg!);

    const pw = await dbg!.cmd({ cmd: "pw_now" }); // runs the out-of-band encoder
    expect(pw.ok, "pw_now failed — is this a password-save build?").toBe(true);

    const r2 = await dbg!.cmd({ cmd: "get_registers" });
    const after = await readRamFull(dbg!);
    await dbg!.cmd({ cmd: "continue" });

    // Stack pointer must be unchanged (the original drift was S +2 per call).
    expect(r2.S, `S drifted ${r1.S} -> ${r2.S} — capture not stack-balanced`).toBe(r1.S);
    // The 6502 stack ($0100-$01FF) grows down from S. Bytes at/below the entry
    // pointer ($0100..$0100+S) are FREE space a capture may use as scratch during
    // its call (harmless — never read as live data). Exclude that region; the rest
    // (zero page, the LIVE stack above S, $0200-$07FF) must be byte-identical.
    const freeStackEnd = 0x100 + parseInt(r1.S, 16);
    const changed: string[] = [];
    for (let i = 0; i < 0x800; i++) {
      if (i >= 0x100 && i <= freeStackEnd) continue; // free stack scratch — harmless
      if (before[i] !== after[i]) changed.push(`$${i.toString(16).padStart(3, "0")}`);
    }
    expect(changed, `capture mutated live RAM at: ${changed.slice(0, 16).join(",")}`).toEqual([]);
  });

  it.skipIf(!ready)("capture is deterministic and reflects progress", async () => {
    const poke = (addr: number, val: number) =>
      dbg!.cmd({ cmd: "write_ram", addr: addr.toString(16), val: val.toString(16) });
    const capture = async () => (await dbg!.cmd({ cmd: "pw_now" })).password as string;
    const blank = "0".repeat(24);

    // State A — a known item/stat configuration → a stable, non-blank password.
    await poke(0x6878, 0x3f); await poke(0x6879, 0x0f); await poke(0x687d, 0x05);
    const a1 = await capture();
    const a2 = await capture();
    expect(a1, "blank password for non-trivial progress — wrong buffer offset?").not.toBe(blank);
    expect(a1.length).toBe(24);
    expect(a2, "same progress must yield the same password (shift not deterministic?)").toBe(a1);

    // State B — different progress must change the password.
    await poke(0x6879, 0x33); await poke(0x687e, 0x18);
    const b1 = await capture();
    expect(b1, "password did not change when progress changed").not.toBe(a1);

    // Back to A — must reproduce exactly (deterministic, state-driven).
    await poke(0x6879, 0x0f); await poke(0x687e, 0x00);
    expect(await capture()).toBe(a1);
  });
});
