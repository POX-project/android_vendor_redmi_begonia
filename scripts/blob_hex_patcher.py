#!/usr/bin/env python3
"""
Begonia Blob Hex Patcher & Binary Diffing Tool
Performs binary diffing, opcode replacement, string/path patching,
and symbol redirection on compiled ARM64/ARM32 ELF binaries.
"""

import sys
import os
import struct
import shutil
import subprocess

# Common ARM64 opcodes (little-endian bytes)
ARM64_NOP = b"\x1f\x20\x03\xd5"          # nop
ARM64_RET_0 = b"\x00\x00\x80\x52\xc0\x03\x5f\xd6"  # mov w0, #0; ret
ARM64_RET_1 = b"\x20\x00\x80\x52\xc0\x03\x5f\xd6"  # mov w0, #1; ret
ARM64_RET = b"\xc0\x03\x5f\xd6"          # ret


def read_elf_needed(file_path):
    """Returns list of DT_NEEDED libraries from ELF."""
    try:
        out = subprocess.check_output(["readelf", "-d", file_path], text=True)
        needed = []
        for line in out.splitlines():
            if "(NEEDED)" in line and "[" in line:
                needed.append(line.split("[")[1].split("]")[0])
        return needed
    except Exception as e:
        return [f"Error: {e}"]


def read_elf_symbols(file_path):
    """Returns dict of defined and undefined dynamic symbols."""
    try:
        out = subprocess.check_output(["readelf", "--dyn-syms", "-W", file_path], text=True)
        defined = {}
        undefined = set()
        for line in out.splitlines():
            parts = line.split()
            if len(parts) >= 8 and parts[0].replace(":", "").isdigit():
                sym_type = parts[3]
                ndx = parts[6]
                name = parts[7]
                if ndx == "UND":
                    undefined.add(name)
                else:
                    defined[name] = {"value": parts[1], "size": parts[2], "type": sym_type}
        return {"defined": defined, "undefined": undefined}
    except Exception as e:
        return {"error": str(e)}


def diff_blobs(blob_a, blob_b):
    """Compares two ELF blobs and reports differences in symbols, dependencies, and size."""
    print("=" * 60)
    print(f"DIFFING: {os.path.basename(blob_a)}  VS  {os.path.basename(blob_b)}")
    print("=" * 60)
    
    size_a = os.path.getsize(blob_a)
    size_b = os.path.getsize(blob_b)
    print(f"File size: A = {size_a} bytes | B = {size_b} bytes (diff: {size_b - size_a})")

    needed_a = set(read_elf_needed(blob_a))
    needed_b = set(read_elf_needed(blob_b))
    print(f"\n[Dependencies DT_NEEDED]")
    print(f"  Only in A: {needed_a - needed_b or 'None'}")
    print(f"  Only in B: {needed_b - needed_a or 'None'}")

    syms_a = read_elf_symbols(blob_a)
    syms_b = read_elf_symbols(blob_b)
    
    if "error" not in syms_a and "error" not in syms_b:
        def_a = set(syms_a["defined"].keys())
        def_b = set(syms_b["defined"].keys())
        und_a = syms_a["undefined"]
        und_b = syms_b["undefined"]

        print(f"\n[Defined Symbols]")
        print(f"  Only in A: {len(def_a - def_b)} symbols")
        print(f"  Only in B: {len(def_b - def_a)} symbols")
        
        print(f"\n[Undefined / Imported Symbols]")
        print(f"  Only in A: {len(und_a - und_b)} symbols")
        print(f"  Only in B: {len(und_b - und_a)} symbols")
        if und_b - und_a:
            print("  New unresolved imports in B:")
            for s in list(und_b - und_a)[:10]:
                print(f"    - {s}")


def patch_hex(target_file, search_hex, replace_hex, offset=None):
    """
    Safely patches hex patterns inside a binary.
    Ensures replacement has identical length to maintain ELF section offsets.
    """
    search_bytes = bytes.fromhex(search_hex.replace(" ", ""))
    replace_bytes = bytes.fromhex(replace_hex.replace(" ", ""))

    if len(search_bytes) != len(replace_bytes):
        raise ValueError(
            f"Search bytes length ({len(search_bytes)}) must equal replace bytes length ({len(replace_bytes)}) "
            f"to preserve ELF layout integrity!"
        )

    with open(target_file, "rb") as f:
        data = bytearray(f.read())

    # Backup original
    backup_file = target_file + ".orig"
    if not os.path.exists(backup_file):
        shutil.copy2(target_file, backup_file)
        print(f"Original backed up to: {backup_file}")

    if offset is not None:
        actual = data[offset : offset + len(search_bytes)]
        if actual != search_bytes:
            print(f"[WARN] Bytes at offset 0x{offset:X} ({actual.hex()}) do not match search pattern ({search_bytes.hex()})!")
            return False
        data[offset : offset + len(replace_bytes)] = replace_bytes
        print(f"Patched 0x{offset:X}: {search_bytes.hex()} -> {replace_bytes.hex()}")
    else:
        idx = 0
        matches = 0
        while True:
            idx = data.find(search_bytes, idx)
            if idx == -1:
                break
            data[idx : idx + len(replace_bytes)] = replace_bytes
            print(f"Patched occurrence at 0x{idx:X}: {search_bytes.hex()} -> {replace_bytes.hex()}")
            matches += 1
            idx += len(replace_bytes)

        if matches == 0:
            print(f"[ERROR] Pattern '{search_hex}' not found in {target_file}")
            return False
        print(f"Total replacements: {matches}")

    with open(target_file, "wb") as f:
        f.write(data)
    print(f"[SUCCESS] {target_file} updated successfully.")
    return True


def patch_string(target_file, old_str, new_str):
    """Replaces an ASCII/UTF-8 string with null-padding if new_str is shorter."""
    if len(new_str) > len(old_str):
        raise ValueError("New string cannot be longer than old string (would corrupt ELF layout)!")
    
    # Pad new string with null bytes up to old string length
    padded_new = new_str.encode("utf-8") + b"\x00" * (len(old_str) - len(new_str))
    old_bytes = old_str.encode("utf-8")
    return patch_hex(target_file, old_bytes.hex(), padded_new.hex())


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage:")
        print("  diff <blob_a> <blob_b>                    - Diff symbols and dependencies")
        print("  hex-patch <file> <search_hex> <repl_hex>  - Patch hex pattern")
        print("  str-patch <file> <old_str> <new_str>      - Patch string with null padding")
        sys.exit(1)

    cmd = sys.argv[1]
    if cmd == "diff" and len(sys.argv) == 4:
        diff_blobs(sys.argv[2], sys.argv[3])
    elif cmd == "hex-patch" and len(sys.argv) >= 4:
        patch_hex(sys.argv[2], sys.argv[3], sys.argv[4])
    elif cmd == "str-patch" and len(sys.argv) == 4:
        patch_string(sys.argv[2], sys.argv[3], sys.argv[4])
    else:
        print("Invalid arguments. Run with no arguments for usage.")
