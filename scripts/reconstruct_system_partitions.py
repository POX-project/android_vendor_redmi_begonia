#!/usr/bin/env python3
"""
Begonia System & System_Ext Reverse Engineering Engine
======================================================
Reconstructs all 124 non-vendor proprietary ELF binaries (daemons, JNI libraries,
IMS bridges, telephony HALs, and video telephony services) across:
  - proprietary/system_ext (79 binaries)
  - proprietary/lib64, proprietary/lib, proprietary/bin, proprietary/system (45 binaries)
"""

import os
import sys
import json
from concurrent.futures import ProcessPoolExecutor, as_completed

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
sys.path.insert(0, os.path.join(ROOT, "scripts"))
from reverse_engineer_blob import analyze_and_generate

def main():
    print("==================================================")
    print(" RECONSTRUCTING SYSTEM & SYSTEM_EXT PROPRIETARY BLOBS")
    print("==================================================")

    # 1. system_ext
    system_ext_dir = os.path.join(ROOT, "proprietary", "system_ext")
    out_system_ext = os.path.join(ROOT, "source_code", "reconstructed", "system_ext")
    os.makedirs(out_system_ext, exist_ok=True)

    candidates_sys_ext = []
    for root, _, files in os.walk(system_ext_dir):
        for f in files:
            p = os.path.join(root, f)
            if not os.path.islink(p) and not f.endswith(".orig"):
                try:
                    with open(p, "rb") as fp:
                        if fp.read(4) == b"\x7fELF":
                            candidates_sys_ext.append((p, out_system_ext, system_ext_dir))
                except Exception:
                    pass

    # 2. system (lib64, lib, bin, system)
    system_dirs = ["lib64", "lib", "bin", "system"]
    out_system = os.path.join(ROOT, "source_code", "reconstructed", "system")
    os.makedirs(out_system, exist_ok=True)

    candidates_system = []
    for d in system_dirs:
        p_dir = os.path.join(ROOT, "proprietary", d)
        if not os.path.exists(p_dir):
            continue
        for root, _, files in os.walk(p_dir):
            for f in files:
                p = os.path.join(root, f)
                if not os.path.islink(p) and not f.endswith(".orig"):
                    try:
                        with open(p, "rb") as fp:
                            if fp.read(4) == b"\x7fELF":
                                candidates_system.append((p, out_system, os.path.join(ROOT, "proprietary")))
                    except Exception:
                        pass

    all_candidates = candidates_sys_ext + candidates_system
    print(f"[*] Total proprietary system ELF binaries to reconstruct: {len(all_candidates)}")
    print(f"    - system_ext: {len(candidates_sys_ext)}")
    print(f"    - system:     {len(candidates_system)}")

    results = []
    with ProcessPoolExecutor(max_workers=8) as executor:
        futures = {executor.submit(analyze_and_generate, c[0], c[1], c[2]): c[0] for c in all_candidates}
        for fut in as_completed(futures):
            res = fut.result()
            if res:
                results.append(res)
                print(f"  [✓] Reconstructed: {res['rel_dir']}/{res['filename']} ({res['export_count']} exports)")

    print("\n" + "="*50)
    print(f"[SUCCESS] Reconstructed {len(results)}/{len(all_candidates)} system modules!")
    print("==================================================")

if __name__ == "__main__":
    main()
