#!/usr/bin/env python3
"""
Extract data regions from WLA-DX 6502 assembly files (Metroid NES disassembly).

Parses .section orga addresses, follows .include directives, tracks data vs code
lines, and outputs [[data_region]] entries for game.toml.

Build-target aware: `.if BUILDTARGET == ...` conditionals are resolved against
--target (default NES_NTSC, the variant this repo's metroid.nes is). Pass
--target NES_PAL to derive the regions for the EU ROM instead.
"""

import argparse
import re
import sys
import os

# Resolved from the command line in main(); every .if BUILDTARGET test is
# evaluated against this name.
BUILD_TARGET = 'NES_NTSC'

SRC_DIR = os.path.normpath(os.path.join(os.path.dirname(__file__),
                                         '..', 'disasm', 'm1disasm', 'SRC'))

# -- Symbol table for ZP resolution ------------------------------------------

def build_symbol_table():
    """Build symbol -> address mapping from constants_ram.asm and hardware.asm.

    For enum fields, uses the address comments (;$XX) as ground truth to avoid
    the complexity of tracking .union/.nextu/.endu and instanceof with struct sizes.
    """
    symbols = {}

    # Parse hardware.asm (simple KEY = $VALUE)
    hw_path = os.path.join(SRC_DIR, 'hardware.asm')
    if os.path.exists(hw_path):
        with open(hw_path) as f:
            for line in f:
                stripped = line.split(';')[0].strip()
                m = re.match(r'(\w+)\s*=\s*\$([0-9A-Fa-f]+)', stripped)
                if m:
                    symbols[m.group(1)] = int(m.group(2), 16)

    # Parse constants_ram.asm
    ram_path = os.path.join(SRC_DIR, 'constants_ram.asm')
    if os.path.exists(ram_path):
        with open(ram_path) as f:
            lines = f.readlines()

        for line in lines:
            full_line = line.strip()
            stripped = line.split(';')[0].strip()

            # Direct assignment: NAME = $XXXX
            am = re.match(r'(\w+)\s*=\s*\$([0-9A-Fa-f]+)', stripped)
            if am:
                symbols[am.group(1)] = int(am.group(2), 16)
                continue

            # Enum field with address comment: "Name db/dw/ds/instanceof ... ;$XX"
            fm = re.match(r'(\w+)\s+(?:db|dw|ds|instanceof\b)', stripped)
            if fm:
                name = fm.group(1)
                # Look for address in comment: ;$XX or ;$XXXX or ;$XX-$YY
                cm = re.search(r';\$([0-9A-Fa-f]+)', full_line)
                if cm:
                    addr_str = cm.group(1).split('-')[0]
                    symbols[name] = int(addr_str, 16)

    # Parse constants.asm for any additional symbols
    const_path = os.path.join(SRC_DIR, 'constants.asm')
    if os.path.exists(const_path):
        with open(const_path) as f:
            for line in f:
                stripped = line.split(';')[0].strip()
                am = re.match(r'(\w+)\s*=\s*\$([0-9A-Fa-f]+)', stripped)
                if am:
                    symbols[am.group(1)] = int(am.group(2), 16)

    return symbols


# Build global symbol table
SYMBOLS = build_symbol_table()
ZP_SYMBOLS = {name for name, addr in SYMBOLS.items() if addr <= 0xFF}

# -- 6502 mnemonics -----------------------------------------------------------
MNEMONICS = {
    'ADC','AND','ASL','BCC','BCS','BEQ','BIT','BMI','BNE','BPL','BRK','BVC',
    'BVS','CLC','CLD','CLI','CLV','CMP','CPX','CPY','DEC','DEX','DEY','EOR',
    'INC','INX','INY','JMP','JSR','LDA','LDX','LDY','LSR','NOP','ORA','PHA',
    'PHP','PLA','PLP','ROL','ROR','RTI','RTS','SBC','SEC','SED','SEI','STA',
    'STX','STY','TAX','TAY','TSX','TXA','TXS','TYA',
    # Unofficial
    'SLO','RLA','SRE','RRA','SAX','LAX','DCP','ISC','ANC','ALR','ARR','XAA',
    'AHX','TAS','SHX','SHY','LAS','ISB',
}

BRANCHES = {'BCC','BCS','BEQ','BMI','BNE','BPL','BVC','BVS'}

IMPLIED = {
    'ASL','BRK','CLC','CLD','CLI','CLV','DEX','DEY','INX','INY','LSR',
    'NOP','PHA','PHP','PLA','PLP','ROL','ROR','RTI','RTS','SEC','SED',
    'SEI','TAX','TAY','TSX','TXA','TXS','TYA',
}


def _extract_base_symbol(operand):
    """Extract the base symbol name from an operand expression."""
    # Remove ,X ,Y suffix
    base = re.sub(r'\s*,\s*[XYxy]$', '', operand)
    # Remove any +N or -N suffix
    base = re.split(r'[+\-]', base)[0].strip()
    # Handle indirect: strip parens
    base = base.strip('(').strip(')')
    return base


def _is_zp_operand(operand):
    """Check if an operand references a zero-page address."""
    # Strip ,X ,Y
    base = re.sub(r'\s*,\s*[XYxy]$', '', operand)
    # Strip parens for indirect
    base = base.strip('(').strip(')')
    # Numeric: $XX
    m = re.match(r'^\$([0-9A-Fa-f]+)$', base.split('+')[0].split('-')[0].strip())
    if m:
        return int(m.group(1), 16) <= 0xFF
    # Symbolic: check against known symbols
    sym = _extract_base_symbol(operand)
    if sym in ZP_SYMBOLS:
        return True
    if sym in SYMBOLS:
        return SYMBOLS[sym] <= 0xFF
    return False


def get_instruction_size(mnemonic, operand):
    mnem = mnemonic.upper()
    if mnem in BRANCHES:
        return 2
    operand = operand.strip()
    if not operand or operand.upper() == 'A':
        return 1
    if operand.startswith('#'):
        return 2
    if operand.startswith('('):
        if mnem == 'JMP':
            return 3
        return 2
    # JMP/JSR always 3 bytes
    if mnem in ('JMP', 'JSR'):
        return 3
    # Check for ZP addressing
    if _is_zp_operand(operand):
        return 2
    # Check explicit numeric
    base = re.sub(r'\s*,\s*[XYxy]$', '', operand)
    m = re.match(r'^\$([0-9A-Fa-f]+)$', base)
    if m:
        val = int(m.group(1), 16)
        return 2 if val <= 0xFF else 3
    return 3  # unknown symbolic = assume absolute


def parse_int(s):
    """Parse an integer that might be hex ($XX) or decimal."""
    s = s.strip()
    if s.startswith('$'):
        return int(s[1:], 16)
    if s.startswith('0x') or s.startswith('0X'):
        return int(s, 16)
    return int(s)


def count_byte_args(args_str):
    """Count bytes from a .byte/.db line's arguments."""
    total = 0
    in_string = False
    current = ''
    for ch in args_str:
        if ch == '"':
            if in_string:
                # closing quote - count string chars
                total += len(current)
                current = ''
                in_string = False
            else:
                in_string = True
                current = ''
            continue
        if in_string:
            current += ch
            continue
        if ch == ',':
            total += 1
        elif ch == ';':
            break
    if not in_string:
        # last entry (if any non-empty content after last comma)
        total += 1
    return total


def count_word_args(args_str):
    """Count words from a .word/.dw line's arguments."""
    # Remove comments
    args_str = args_str.split(';')[0].strip()
    if not args_str:
        return 0
    entries = split_args(args_str)
    return len(entries)


def split_args(args_str):
    """Split comma-separated args, respecting parens and strings."""
    entries = []
    depth = 0
    in_string = False
    current = ''
    for ch in args_str:
        if ch == '"':
            in_string = not in_string
            current += ch
        elif in_string:
            current += ch
        elif ch == '(':
            depth += 1
            current += ch
        elif ch == ')':
            depth -= 1
            current += ch
        elif ch == ',' and depth == 0:
            if current.strip():
                entries.append(current.strip())
            current = ''
        elif ch == ';':
            break
        else:
            current += ch
    if current.strip():
        entries.append(current.strip())
    return entries


def get_incbin_size(filename, skip=0, read_len=None):
    """Get the effective size of an .incbin directive."""
    fpath = os.path.join(SRC_DIR, filename)
    if not os.path.exists(fpath):
        # Try without path separators converted
        fpath2 = os.path.join(SRC_DIR, filename.replace('/', os.sep))
        if os.path.exists(fpath2):
            fpath = fpath2
        else:
            print(f"  WARNING: .incbin file not found: {filename} (tried {fpath})", file=sys.stderr)
            return 0
    fsize = os.path.getsize(fpath)
    if read_len is not None:
        return read_len
    return fsize - skip


def parse_incbin_args(rest):
    """Parse .incbin "file" [skip N] [read N] and return (filename, size)."""
    m = re.match(r'"([^"]+)"(.*)', rest.strip())
    if not m:
        return None, 0
    filename = m.group(1)
    remainder = m.group(2).strip()

    skip = 0
    read_len = None

    # Parse skip and read
    skip_m = re.search(r'skip\s+(\$[0-9A-Fa-f]+|\d+)', remainder, re.IGNORECASE)
    if skip_m:
        skip = parse_int(skip_m.group(1))

    read_m = re.search(r'read\s+(\$[0-9A-Fa-f]+|\d+)', remainder, re.IGNORECASE)
    if read_m:
        read_len = parse_int(read_m.group(1))

    size = get_incbin_size(filename, skip, read_len)
    return filename, size


# Known data-emitting macros and their approximate byte sizes
# These are all macros from macros.asm that emit data bytes
MACRO_BYTE_SIZES = {
    'SignMagSpeed': 2,           # .byte duration, .byte packed
    'VRAMStructEnd': 1,         # .byte $00
    'VRAMStructDataRepeat': 4,  # .byte hi, lo, count|$40, byte
    'EnemyMovementInstr_TriggerResting': 1,
    'EnemyMovementInstr_StopMovement': 1,
    'EnemyMovementInstr_RepeatPreviousUntilFailure': 1,
    'EnemyMovementInstr_ClearEnJumpDsplcmnt': 1,
    'EnemyMovementInstr_RepeatPreviousUntilNoDeltaYThenTriggerResting': 1,
    'EnemyMovementInstr_Restart': 1,
    'SongEnd': 1,               # .byte $00
    'SongRest': 1,              # .byte specific value
}


def estimate_vram_struct_data_size(args_str):
    """VRAMStructData emits: 2 (ppuAddr) + 1 (length) + N data bytes."""
    # Count the data arguments after the first (ppuAddress)
    parts = split_args(args_str)
    if len(parts) < 2:
        return 3  # minimum: addr(2) + length(1)
    # First arg is ppuAddress, rest are data bytes
    # Each remaining arg is 1 byte (immediate) or variable (string)
    data_bytes = 0
    for p in parts[1:]:
        p = p.strip().strip('\\').strip()
        if not p:
            continue
        if p.startswith('"'):
            # String - count chars between quotes
            m = re.match(r'"([^"]*)"', p)
            if m:
                data_bytes += len(m.group(1))
            else:
                data_bytes += 1
        else:
            data_bytes += 1
    return 2 + 1 + data_bytes  # ppuAddr(2) + length(1) + data


def estimate_song_header_size(args_str):
    """SongHeader emits: complex, approximately 7-8 bytes."""
    return 8  # approximate


def estimate_song_note_size(args_str):
    """SongNote emits 1 byte (note index)."""
    return 1


def estimate_song_note_length_size(args_str):
    """SongNoteLength emits 1 byte."""
    return 1


def estimate_song_repeat_setup_size(args_str):
    """SongRepeatSetup emits 1 byte."""
    return 1


def estimate_song_repeat_size(args_str):
    """SongRepeat emits 1 byte."""
    return 1


def estimate_enemy_movement_choice_size(args_str):
    """EnemyMovementChoiceEntry emits 1 + NARGS bytes."""
    parts = split_args(args_str)
    return 1 + len(parts)


def estimate_gfx_info_entry_size(args_str):
    """GFXInfoEntry emits: .byte bank + .word ptr + .word dest + .word sizeof = 7 bytes."""
    return 7


class AsmParser:
    """Parse WLA-DX assembly tracking addresses and data/code regions."""

    def __init__(self, bank, base_addr, min_region_size=8):
        self.bank = bank
        self.addr = base_addr
        self.min_region_size = min_region_size
        self.data_regions = []  # list of (start, end) tuples

        # Current data region tracking
        self._data_start = None
        self._data_size = 0

        # Conditional tracking: stack of (took_branch, currently_active)
        # took_branch: True if any branch in this .if/.elif/.else chain was taken
        # currently_active: True if we're in the active (non-skipped) branch
        self._cond_stack = []
        # For nested skipping: if an outer conditional is skipping, inner ones
        # are all skipped regardless
        self._outer_skip_count = 0

        # Include recursion guard
        self._include_stack = set()

    def _flush_data(self):
        """Flush current data region if large enough."""
        if self._data_start is not None and self._data_size >= self.min_region_size:
            self.data_regions.append((self._data_start, self._data_start + self._data_size))
        self._data_start = None
        self._data_size = 0

    def _add_data(self, nbytes):
        """Record data bytes at current address."""
        if nbytes <= 0:
            return
        if self._data_start is None:
            self._data_start = self.addr
            self._data_size = 0
        self._data_size += nbytes
        self.addr += nbytes

    def _add_code(self, nbytes):
        """Record code bytes at current address."""
        self._flush_data()
        self.addr += nbytes

    @property
    def _skipping(self):
        """Are we currently in a skipped conditional branch?"""
        if self._outer_skip_count > 0:
            return True
        if self._cond_stack:
            return not self._cond_stack[-1][1]  # not currently_active
        return False

    def _eval_condition(self, condition):
        """Evaluate a simple condition. Returns True/False/None (unknown)."""
        # BUILDTARGET checks
        if 'BUILDTARGET' in condition:
            if BUILD_TARGET in condition:
                return True
            return False

        # BANK checks: "BANK == N"
        bm = re.search(r'BANK\s*==\s*(\d+)', condition)
        if bm:
            return self.bank == int(bm.group(1))

        # Unknown condition - assume true (include the content)
        return None

    def _handle_conditional(self, line):
        """Handle .if / .ifdef / .ifndef / .elif / .else / .endif.
        Returns True if the line was a conditional directive (consumed)."""
        stripped = line.strip()

        # .if / .ifdef / .ifndef
        if_m = re.match(r'\.(if|IF|ifdef|IFDEF|ifndef|IFNDEF)\b\s*(.*)', stripped)
        if if_m:
            directive = if_m.group(1).lower()
            condition = if_m.group(2)

            if self._skipping:
                # We're already in a skipped block; push inactive and track outer skip
                self._outer_skip_count += 1
                self._cond_stack.append((True, False))
                return True

            if directive in ('ifdef', 'ifndef'):
                # Assume defined symbols are defined (conservative: include content)
                active = True
            else:
                result = self._eval_condition(condition)
                active = result is not False  # True or None -> active

            self._cond_stack.append((active, active))
            return True

        # .elif
        elif_m = re.match(r'\.(elif|ELIF)\b\s*(.*)', stripped)
        if elif_m:
            if not self._cond_stack:
                return True
            if self._outer_skip_count > 0:
                return True

            took_branch, currently_active = self._cond_stack[-1]
            if took_branch:
                # A previous branch was taken; skip all remaining branches
                self._cond_stack[-1] = (True, False)
            else:
                # No branch taken yet; evaluate this one
                condition = elif_m.group(2)
                result = self._eval_condition(condition)
                if result is not False:
                    self._cond_stack[-1] = (True, True)
                else:
                    self._cond_stack[-1] = (False, False)
            return True

        # .else
        if re.match(r'\.(else|ELSE)\s*$', stripped):
            if not self._cond_stack:
                return True
            if self._outer_skip_count > 0:
                return True

            took_branch, currently_active = self._cond_stack[-1]
            if took_branch:
                # A previous branch was taken; skip .else
                self._cond_stack[-1] = (True, False)
            else:
                # No branch taken; .else is the fallback
                self._cond_stack[-1] = (True, True)
            return True

        # .endif
        if re.match(r'\.(endif|ENDIF)\b', stripped):
            if self._cond_stack:
                self._cond_stack.pop()
            if self._outer_skip_count > 0:
                self._outer_skip_count -= 1
            return True

        return False

    def parse_file(self, filepath):
        """Parse a single file, following .include directives."""
        norm = os.path.normpath(filepath)
        if norm in self._include_stack:
            return
        self._include_stack.add(norm)

        if not os.path.exists(filepath):
            print(f"  WARNING: file not found: {filepath}", file=sys.stderr)
            return

        with open(filepath, 'r') as f:
            lines = f.readlines()

        i = 0
        while i < len(lines):
            line = lines[i]
            i += 1

            # Handle multi-line continuations (backslash at end)
            while line.rstrip().endswith('\\') and i < len(lines):
                line = line.rstrip()[:-1] + ' ' + lines[i]
                i += 1

            # Handle .repeat N [index VAR] ... .endr
            stripped_check = self._strip_comment(line).strip()
            rpt_m = re.match(r'\.repeat\s+(\d+)', stripped_check, re.IGNORECASE)
            if rpt_m:
                repeat_count = int(rpt_m.group(1))
                # Collect lines until .endr
                repeat_body = []
                depth = 1
                while i < len(lines) and depth > 0:
                    rline = lines[i]
                    i += 1
                    rstripped = self._strip_comment(rline).strip()
                    if re.match(r'\.repeat\b', rstripped, re.IGNORECASE):
                        depth += 1
                    elif re.match(r'\.endr\b', rstripped, re.IGNORECASE):
                        depth -= 1
                        if depth == 0:
                            break
                    # Handle multi-line continuations inside repeat
                    while rline.rstrip().endswith('\\') and i < len(lines):
                        rline = rline.rstrip()[:-1] + ' ' + lines[i]
                        i += 1
                    repeat_body.append(rline)
                # Process body N times
                for _ in range(repeat_count):
                    for rline in repeat_body:
                        self._process_line(rline)
                continue

            self._process_line(line)

        self._include_stack.discard(norm)

    def _process_line(self, line):
        """Process a single line of assembly."""
        # Handle conditionals first
        if self._handle_conditional(line):
            return
        if self._skipping:
            return

        # Check for label with address comment for recalibration
        # Patterns: "Label: ; NN:XXXX" or "Label: ;$XXXX" or "Label: ;($XXXX)"
        # or "Label: ; $XXXX"
        recal_m = re.match(r'^(\w+)\s*:\s*;.*?[\( ]\$([0-9A-Fa-f]{4})\)?', line)
        if not recal_m:
            recal_m = re.match(r'^(\w+)\s*:\s*;\s*\d+:([0-9A-Fa-f]{4})\b', line)
        if not recal_m:
            recal_m = re.match(r'^(\w+)\s*:\s*;\$([0-9A-Fa-f]{4})\b', line)
        if recal_m:
            expected_addr = int(recal_m.group(2), 16)
            if self.addr is not None and abs(self.addr - expected_addr) <= 200:
                # Recalibrate -- only if drift is reasonable (not a different section)
                self.addr = expected_addr

        # Strip comments (careful with strings and semicolons)
        stripped = self._strip_comment(line).strip()
        if not stripped:
            return

        # .section with orga
        sec_m = re.search(r'orga\s+\$([0-9A-Fa-f]+)', stripped)
        if sec_m and '.section' in stripped.lower():
            self._flush_data()
            self.addr = int(sec_m.group(1), 16)
            return

        # .include
        inc_m = re.match(r'\s*\.include\s+"([^"]+)"', stripped, re.IGNORECASE)
        if inc_m:
            fname = inc_m.group(1)
            # Skip non-code includes (constants, hardware defs, macros, memory layout)
            skip_names = {'hardware.asm', 'constants.asm', 'macros.asm',
                          'constants_ram.asm', 'memory_layout.asm', 'charmap.tbl'}
            if os.path.basename(fname) in skip_names:
                return
            fpath = os.path.join(SRC_DIR, fname)
            self.parse_file(fpath)
            return

        # Handle label prefix: "Label: <rest>"
        lm = re.match(r'^(@?\w+)\s*:\s*(.*)', stripped)
        if lm:
            rest = lm.group(2).strip()
            if not rest:
                return
            stripped = rest

        # Skip directives that don't emit bytes
        if re.match(r'\.(def|redef|section|ends|enum|ende|macro|endm|rept|endr|'
                    r'bank|slot|org|export|import|global|ifdef|ifndef|'
                    r'fail|print|undef|shift|repeat|endr|assert|'
                    r'TABLE|table|charmap|CHARMAP|stringmaptable|STRINGMAPTABLE)\b', stripped, re.IGNORECASE):
            return

        # .stringmap emits bytes equal to the string length
        sm = re.match(r'\.stringmap\s+\w+\s*,\s*"([^"]*)"', stripped, re.IGNORECASE)
        if sm:
            nbytes = len(sm.group(1))
            self._add_data(nbytes)
            return

        # .db / .byte
        db_m = re.match(r'\.(db|byte|DB|BYTE)\s+(.*)', stripped, re.IGNORECASE)
        if db_m:
            args = db_m.group(2)
            nbytes = count_byte_args(args)
            self._add_data(nbytes)
            return

        # .dw / .word
        dw_m = re.match(r'\.(dw|word|DW|WORD)\s+(.*)', stripped, re.IGNORECASE)
        if dw_m:
            args = dw_m.group(2)
            nwords = count_word_args(args)
            self._add_data(nwords * 2)
            return

        # .ds / .dsb (fill N bytes)
        ds_m = re.match(r'\.(ds|dsb|DS|DSB)\s+(\$[0-9A-Fa-f]+|\d+)', stripped, re.IGNORECASE)
        if ds_m:
            nbytes = parse_int(ds_m.group(2))
            self._add_data(nbytes)
            return

        # .dsw (fill N words)
        dsw_m = re.match(r'\.(dsw|DSW)\s+(\$[0-9A-Fa-f]+|\d+)', stripped, re.IGNORECASE)
        if dsw_m:
            nwords = parse_int(dsw_m.group(2))
            self._add_data(nwords * 2)
            return

        # .incbin
        incbin_m = re.match(r'\.incbin\s+(.*)', stripped, re.IGNORECASE)
        if incbin_m:
            _, size = parse_incbin_args(incbin_m.group(1))
            self._add_data(size)
            return

        # Known data-emitting macros
        for macro_name, macro_size in MACRO_BYTE_SIZES.items():
            if stripped.startswith(macro_name) and (
                len(stripped) == len(macro_name) or
                stripped[len(macro_name)] in (' ', '\t', ';')
            ):
                self._add_data(macro_size)
                return

        # Variable-size macros
        vsd_m = re.match(r'VRAMStructData\s+(.*)', stripped)
        if vsd_m:
            size = estimate_vram_struct_data_size(vsd_m.group(1))
            self._add_data(size)
            return

        gfx_m = re.match(r'GFXInfoEntry\s+(.*)', stripped)
        if gfx_m:
            self._add_data(estimate_gfx_info_entry_size(gfx_m.group(1)))
            return

        emc_m = re.match(r'EnemyMovementChoiceEntry\s+(.*)', stripped)
        if emc_m:
            self._add_data(estimate_enemy_movement_choice_size(emc_m.group(1)))
            return

        sh_m = re.match(r'SongHeader\s+(.*)', stripped)
        if sh_m:
            self._add_data(estimate_song_header_size(sh_m.group(1)))
            return

        sn_m = re.match(r'SongNote\s+(.*)', stripped)
        if sn_m:
            self._add_data(estimate_song_note_size(sn_m.group(1)))
            return

        snl_m = re.match(r'SongNoteLength\s+(.*)', stripped)
        if snl_m:
            self._add_data(estimate_song_note_length_size(snl_m.group(1)))
            return

        srs_m = re.match(r'SongRepeatSetup\s+(.*)', stripped)
        if srs_m:
            self._add_data(estimate_song_repeat_setup_size(srs_m.group(1)))
            return

        sr_m = re.match(r'SongRepeat\b', stripped)
        if sr_m:
            self._add_data(estimate_song_repeat_size(''))
            return

        # PtrTableEntry / PtrTableEntryArea -- each emits .word (2 bytes) = data
        pte_m = re.match(r'PtrTableEntry(Area)?\s+', stripped)
        if pte_m:
            self._add_data(2)
            return

        # NES_CNSUS_IllegalOpcode42 -- emits a 2-byte illegal opcode
        if stripped.startswith('NES_CNSUS_IllegalOpcode42'):
            # In NTSC build this is probably a .db $42 or similar
            self._add_code(1)
            return

        # 6502 instruction
        instr_m = re.match(r'([A-Za-z]{3})\s*(.*)', stripped)
        if instr_m:
            mnem = instr_m.group(1).upper()
            if mnem in MNEMONICS:
                operand = instr_m.group(2).split(';')[0].strip()
                size = get_instruction_size(mnem, operand)
                self._add_code(size)
                return

        # Lines we don't understand - don't advance address, don't change state
        # (labels, assignments, etc.)

    def _strip_comment(self, line):
        """Strip ; comments but preserve strings."""
        result = []
        in_string = False
        for ch in line:
            if ch == '"':
                in_string = not in_string
            elif ch == ';' and not in_string:
                break
            result.append(ch)
        return ''.join(result)

    def finish(self):
        """Flush any remaining data region."""
        self._flush_data()
        return self.data_regions

    def merge_adjacent(self, gap=0):
        """Merge regions that are adjacent or within `gap` bytes of each other."""
        if not self.data_regions:
            return []
        sorted_regions = sorted(self.data_regions)
        merged = [sorted_regions[0]]
        for start, end in sorted_regions[1:]:
            prev_start, prev_end = merged[-1]
            if start <= prev_end + gap:
                merged[-1] = (prev_start, max(prev_end, end))
            else:
                merged.append((start, end))
        return merged


# -- Bank definitions ----------------------------------------------------------

BANK_FILES = [
    (0, 'prg0_title.asm',    0x8000),
    (1, 'prg1_brinstar.asm', 0x8000),
    (2, 'prg2_norfair.asm',  0x8000),
    (3, 'prg3_tourian.asm',  0x8000),
    (4, 'prg4_kraid.asm',    0x8000),
    (5, 'prg5_ridley.asm',   0x8000),
    (6, 'prg6_graphics.asm', 0x8000),
    (7, 'prg7_engine.asm',   0xC000),
]


def main():
    global BUILD_TARGET
    ap = argparse.ArgumentParser()
    ap.add_argument('--target', default='NES_NTSC',
                    help='m1disasm BUILDTARGET to resolve .if conditionals against')
    a = ap.parse_args()
    BUILD_TARGET = a.target

    all_regions = []

    for bank, filename, base_addr in BANK_FILES:
        filepath = os.path.join(SRC_DIR, filename)
        if not os.path.exists(filepath):
            print(f"WARNING: {filepath} not found, skipping bank {bank}", file=sys.stderr)
            continue

        parser = AsmParser(bank, base_addr, min_region_size=8)
        parser.parse_file(filepath)
        regions = parser.finish()
        merged = parser.merge_adjacent(gap=0)

        print(f"# Bank {bank}: {filename} ({len(merged)} data regions)", file=sys.stderr)
        for start, end in merged:
            size = end - start
            print(f"#   ${start:04X}-${end:04X} ({size} bytes)", file=sys.stderr)
            all_regions.append((bank, start, end))

    # Output as game.toml entries
    print()
    print("# -- Data regions ----------------------------------------------------------")
    print("# Auto-extracted from WLA-DX disassembly (target %s). "
          "Excludes regions < 8 bytes." % BUILD_TARGET)
    for bank, start, end in sorted(all_regions):
        print(f'[[data_region]]')
        print(f'bank = {bank}')
        print(f'start = 0x{start:04X}')
        print(f'end = 0x{end:04X}')
        print()


if __name__ == '__main__':
    main()
