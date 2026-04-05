"""
Multi-death cycle automation via TCP.

Monitors game state ($1E) via TCP polling, sends controller input via set_input,
and logs recomp stack depth at each cycle to detect C stack leaks.

Usage:
  1. Launch the game:  MetroidNESRecomp.exe "metroid.nes" > C:/temp/death_log.txt 2>&1
  2. Run this script:  python tools/multi_death.py

The script will navigate title->gameplay, walk into enemies to die,
navigate the death/password screens, and repeat for N cycles.
"""
import socket
import json
import time
import sys

PORT = 5370
TARGET_CYCLES = 6  # enough to trigger stack overflow (~4-5 needed)

# NES controller button masks (matching runner input handling)
BTN_A      = 0x80
BTN_B      = 0x40
BTN_SELECT = 0x20
BTN_START  = 0x10
BTN_UP     = 0x08
BTN_DOWN   = 0x04
BTN_LEFT   = 0x02
BTN_RIGHT  = 0x01

def tcp_cmd(cmd, timeout=5):
    """Send a TCP command and return parsed JSON response."""
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", PORT))
    if isinstance(cmd, str):
        s.sendall((cmd + "\n").encode())
    else:
        s.sendall((json.dumps(cmd) + "\n").encode())
    data = b""
    while True:
        try:
            chunk = s.recv(65536)
            if not chunk:
                break
            data += chunk
            try:
                json.loads(data.decode())
                break
            except json.JSONDecodeError:
                continue
        except socket.timeout:
            break
    s.close()
    return json.loads(data.decode())


def ping():
    """Ping and return frame count."""
    r = tcp_cmd("ping")
    return r.get("frame", 0)


def read_ram(addr, length=1):
    """Read RAM bytes. Returns list of ints."""
    r = tcp_cmd({"cmd": "dump_ram", "addr": f"{addr:04X}", "len": length})
    hex_str = r.get("hex", "")
    if hex_str:
        return [int(hex_str[i:i+2], 16) for i in range(0, len(hex_str), 2)]
    return [0] * length


def get_game_mode():
    """Read $1E (game mode)."""
    return read_ram(0x1E, 1)[0]


def get_call_stack():
    """Get recomp call stack depth and top entries."""
    try:
        r = tcp_cmd({"cmd": "call_stack"})
        return r.get("depth", -1), r.get("stack", [])
    except Exception:
        return -1, []


def set_input(buttons):
    """Set controller input override."""
    tcp_cmd({"cmd": "set_input", "buttons": f"{buttons:02X}"})


def clear_input():
    """Clear controller input override."""
    tcp_cmd({"cmd": "clear_input"})


def press_button(button, hold_frames=3):
    """Press a button for a short duration then release."""
    set_input(button)
    wait_frames(hold_frames)
    clear_input()


def wait_frames(n):
    """Wait approximately n frames (at 60fps)."""
    time.sleep(n / 60.0)


def wait_for_mode(target, timeout_s=30):
    """Poll $1E until it matches target. Returns True if matched, False if timeout."""
    start = time.time()
    while time.time() - start < timeout_s:
        mode = get_game_mode()
        if mode == target:
            return True
        time.sleep(0.05)  # poll ~20x/sec
    return False


def wait_for_mode_change(current, timeout_s=30):
    """Poll $1E until it changes from current value. Returns new value or None."""
    start = time.time()
    while time.time() - start < timeout_s:
        mode = get_game_mode()
        if mode != current:
            return mode
        time.sleep(0.05)
    return None


def wait_for_connect(timeout_s=30):
    """Wait for TCP server to be available."""
    start = time.time()
    while time.time() - start < timeout_s:
        try:
            ping()
            return True
        except Exception:
            time.sleep(0.5)
    return False


def log(msg):
    print(f"[{time.strftime('%H:%M:%S')}] {msg}", flush=True)


def discover_state_machine(duration_s=5):
    """Poll $1E for a while and log all transitions."""
    log("Discovering state machine...")
    prev = None
    start = time.time()
    while time.time() - start < duration_s:
        mode = get_game_mode()
        if mode != prev:
            frame = ping()
            log(f"  $1E transition: {f'0x{prev:02X}' if prev is not None else '?'} -> 0x{mode:02X} at frame {frame}")
            prev = mode
        time.sleep(0.03)
    return prev


def boot_to_gameplay():
    """Navigate from title screen to gameplay. Returns True on success."""
    log("Booting to gameplay...")

    # Wait for game to start up
    wait_frames(120)

    # Check current state
    mode = get_game_mode()
    log(f"  Current mode: 0x{mode:02X}")

    if mode == 0x03:
        log("  Already in gameplay!")
        return True

    # Discovery: log what happens as we press START
    log("  Pressing START...")
    press_button(BTN_START, 3)
    wait_frames(30)

    mode = get_game_mode()
    log(f"  After first START: $1E=0x{mode:02X}")

    if mode == 0x03:
        log("  In gameplay after first START!")
        return True

    # May need a second START press
    wait_frames(30)
    log("  Pressing START again...")
    press_button(BTN_START, 3)
    wait_frames(60)

    mode = get_game_mode()
    log(f"  After second START: $1E=0x{mode:02X}")

    if mode == 0x03:
        log("  In gameplay!")
        return True

    # Wait longer and try again
    log("  Waiting for mode 0x03...")
    if wait_for_mode(0x03, timeout_s=10):
        log("  In gameplay!")
        return True

    log(f"  WARNING: Could not reach gameplay. Current mode: 0x{mode:02X}")
    return False


def die_to_enemies():
    """Walk into enemies until we die (mode leaves 0x03)."""
    log("  Walking into enemies to die...")

    # Walk right continuously - enemies will damage Samus
    # Alternate direction occasionally to not get stuck
    cycle = 0
    while True:
        mode = get_game_mode()
        if mode != 0x03:
            log(f"  Left gameplay! $1E=0x{mode:02X}")
            return mode

        # Walk right, occasionally jump (to fall into enemies/lava)
        if cycle % 4 == 0:
            set_input(BTN_RIGHT | BTN_A)  # jump right
        elif cycle % 4 == 2:
            set_input(BTN_LEFT | BTN_A)   # jump left
        else:
            set_input(BTN_RIGHT)           # walk right

        cycle += 1
        wait_frames(30)

    clear_input()


def navigate_death_to_restart():
    """After dying, navigate through game over / password screens back to gameplay.
    This is discovery-mode: we log every $1E transition and try pressing START
    at each stable state until we reach gameplay (0x03)."""

    log("  Navigating death screens...")
    clear_input()

    # Track all mode transitions
    prev_mode = get_game_mode()
    attempts = 0
    max_attempts = 40  # prevent infinite loop

    while attempts < max_attempts:
        mode = get_game_mode()
        if mode != prev_mode:
            log(f"  $1E transition: 0x{prev_mode:02X} -> 0x{mode:02X}")
            prev_mode = mode

        if mode == 0x03:
            log("  Back in gameplay!")
            clear_input()
            return True

        # For any non-gameplay state, wait a bit then try pressing START
        # Some states (like death animation) need time to play out
        attempts += 1
        wait_frames(60)  # wait ~1 second

        mode = get_game_mode()
        if mode == 0x03:
            log("  Back in gameplay!")
            clear_input()
            return True

        log(f"  Trying START in mode 0x{mode:02X}...")
        press_button(BTN_START, 3)
        wait_frames(30)

        mode = get_game_mode()
        if mode != prev_mode:
            log(f"  $1E transition: 0x{prev_mode:02X} -> 0x{mode:02X}")
            prev_mode = mode

    log("  WARNING: Failed to navigate back to gameplay!")
    return False


def main():
    log(f"Multi-death cycle automation - targeting {TARGET_CYCLES} cycles")
    log(f"Connecting to TCP port {PORT}...")

    if not wait_for_connect():
        log("ERROR: Could not connect to game. Is it running?")
        sys.exit(1)

    frame = ping()
    log(f"Connected! Current frame: {frame}")

    # Get initial stack state
    depth, stack = get_call_stack()
    log(f"Initial recomp stack depth: {depth}")

    # Boot to gameplay
    if not boot_to_gameplay():
        log("ERROR: Failed to reach gameplay. Aborting.")
        sys.exit(1)

    # Wait a moment for gameplay to stabilize
    wait_frames(120)

    # Get baseline stack depth at gameplay start
    depth, stack = get_call_stack()
    log(f"Baseline recomp stack depth at gameplay: {depth}")
    if stack:
        log(f"  Stack: {' < '.join(stack[:5])}")

    # Main death cycle loop
    for cycle in range(1, TARGET_CYCLES + 1):
        log(f"")
        log(f"===== DEATH CYCLE {cycle}/{TARGET_CYCLES} =====")

        # Record stack depth before this cycle
        depth_before, stack_before = get_call_stack()
        log(f"Stack depth before cycle: {depth_before}")

        # Die to enemies
        death_mode = die_to_enemies()
        wait_frames(10)

        # Record stack depth right after death
        depth_after_death, _ = get_call_stack()
        log(f"Stack depth after death: {depth_after_death}")

        # Navigate back to gameplay
        if not navigate_death_to_restart():
            log("FATAL: Cannot restart. Dumping final stack state.")
            depth, stack = get_call_stack()
            log(f"Final stack depth: {depth}")
            for i, fn in enumerate(stack):
                log(f"  [{i}] {fn}")
            sys.exit(1)

        # Wait for gameplay to stabilize
        wait_frames(180)

        # Record stack depth after restart
        depth_after, stack_after = get_call_stack()
        log(f"Stack depth after restart: {depth_after}")
        if stack_after:
            log(f"  Stack: {' < '.join(stack_after[:10])}")

        # Check for leak
        if depth_after > depth_before:
            log(f"  *** STACK LEAK DETECTED: {depth_before} -> {depth_after} (+{depth_after - depth_before}) ***")
        else:
            log(f"  Stack stable: {depth_before} -> {depth_after}")

    # Final state
    log("")
    log("===== FINAL STATE =====")
    depth, stack = get_call_stack()
    log(f"Final recomp stack depth: {depth}")
    for i, fn in enumerate(stack):
        log(f"  [{i}] {fn}")

    frame = ping()
    log(f"Final frame: {frame}")
    log("Done!")


if __name__ == "__main__":
    main()
