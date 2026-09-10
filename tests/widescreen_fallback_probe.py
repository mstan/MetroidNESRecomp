"""Regression for stock-picture flicker during leftward room construction.

Uses the isolated TRACE=ON harness. --state accepts an existing owner's save
read-only; without it, the route collects Morph Ball from a fresh game.
"""
import argparse
import hashlib
import json
from pathlib import Path
from widescreen_probe import Probe


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--exe', required=True)
    parser.add_argument('--rom', required=True)
    parser.add_argument('--out', required=True)
    parser.add_argument('--aspect', default='32:9')
    parser.add_argument('--state', help='existing savestate to inspect without modifying it')
    args = parser.parse_args()
    p = Probe(args.exe, args.rom, args.out, args.aspect)
    try:
        if args.state:
            state = Path(args.state).resolve()
            original_hash = hashlib.sha256(state.read_bytes()).hexdigest()
            p.cmd('load_state', path=state.as_posix())
            p.advance(1)
            p.capture('restored')
            for i in range(6):
                p.advance(20)
                p.capture(f'idle_{i}')
            assert all(r['stats']['frames_fallback'] == 0 for r in p.records)
            assert hashlib.sha256(state.read_bytes()).hexdigest() == original_hash
        else:
            p.advance(600); p.advance(2, 0x10); p.advance(120)
            p.advance(2, 0x10); p.advance(650)
            initial = p.capture('spawn')['stats']
            p.protect_player = True  # declared renderer fixture; no gear grant
            pending = None
            # Catch and save the first interval where a camera room is bound
            # but its logical terrain is still under construction.
            for _ in range(20):
                p.advance(1, 0x02)
                stats = p.cmd('ws_stats')
                if pending is not None and not (p.out / 'pending_expected.png').exists():
                    p.capture('pending_expected')
                if pending is None and all(c[0] >= 0 for c in stats['nt_cells']) and stats['room_ready_mask'] != 3:
                    pending = stats
                    p.cmd('save_state', path=(p.out / 'pending.sav').as_posix())
            assert pending is not None, 'Route did not reach a room under construction'
            p.advance(40, 0xc2); p.advance(15, 0x42)
            p.capture('left_00')
            for i in range(1, 10):
                p.advance(20, 0x02); p.advance(40, 0xc2); p.advance(15, 0x42)
                p.capture(f'left_{i:02}')
            assert all(r['stats']['frames_fallback'] == initial['frames_fallback'] for r in p.records)
            gear = int(p.cmd('read_ram', addr='6878', len=1)['hex'], 16)
            assert gear & 0x10, 'Route did not collect Morph Ball'
            p.cmd('load_state', path=(p.out / 'pending.sav').as_posix())
            restored = p.cmd('ws_stats')
            for field in ('nt_cells', 'room_ready_mask', 'streamed_columns', 'streamed_rows'):
                assert restored[field] == pending[field], (field, pending, restored)
            p.advance(1, 0x02)
            p.capture('pending_actual')
            hashes = {name: hashlib.sha256((p.out / f'pending_{name}.png').read_bytes()).hexdigest()
                      for name in ('expected', 'actual')}
            (p.out / 'pending_replay.json').write_text(json.dumps(hashes, indent=2))
            assert hashes['expected'] == hashes['actual'], hashes
            p.advance(60)  # stopping during construction must remain wide too
            assert p.capture('pending_idle')['stats']['frames_fallback'] == 0
        assert all(r['stats']['render_width'] > 256 and r['stats']['gated_wide'] for r in p.records)
        p.check_results()
    finally:
        p.close()


if __name__ == '__main__':
    main()
