#!/usr/bin/env python3
"""
Begonia (MT6785) Reconstructed Modules Master Builder
=====================================================
Builds all reverse-engineered HAL modules and services into drop-in
ARM64 (64-bit) and ARMv7 (32-bit) binaries and shared libraries using
the portable Android NDK toolchain.
"""

import os
import sys
import re
import subprocess
import argparse
from concurrent.futures import ProcessPoolExecutor, as_completed
from typing import Dict, List, Tuple

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
NDK_BIN = "/media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin"

CLANG64_XX = os.path.join(NDK_BIN, "aarch64-linux-android30-clang++")
CLANG32_XX = os.path.join(NDK_BIN, "armv7a-linux-androideabi30-clang++")

INCLUDE_DIR = os.path.join(ROOT_DIR, "source_code", "include")
RECONSTRUCTED_ROOT = os.path.join(ROOT_DIR, "source_code", "reconstructed")
DIST_LIBS_ROOT = os.path.join(ROOT_DIR, "dist", "reconstructed_libs")

def find_reconstructed_targets(base_dir: str) -> List[Dict]:
    targets = []
    for root, dirs, files in os.walk(base_dir):
        if "Android.bp" in files and any(f.endswith(".cpp") for f in files):
            rel = os.path.relpath(root, RECONSTRUCTED_ROOT)
            parts = rel.split(os.sep)
            
            # Determine category: bin/hw, lib64/hw, or lib/hw
            is_bin = ("bin" in parts)
            is_32bit = ("lib" in parts and "lib64" not in parts)
            
            mod_name = parts[-1]
            parent_rel = os.path.dirname(rel)
            
            # Extract authentic original filename from Makefile if available
            orig_filename = mod_name
            if "Makefile" in files:
                try:
                    with open(os.path.join(root, "Makefile"), "r", errors="ignore") as mfp:
                        first_line = mfp.readline()
                    m = re.search(r"Standalone Makefile for\s+([^\s]+)", first_line)
                    if m:
                        orig_filename = m.group(1).strip()
                except Exception:
                    pass
            
            cpp_file = [f for f in files if f.endswith(".cpp")][0]
            
            targets.append({
                "module_dir": root,
                "rel_path": rel,
                "parent_rel": parent_rel,
                "module_name": mod_name,
                "orig_filename": orig_filename,
                "cpp_file": os.path.join(root, cpp_file),
                "is_bin": is_bin,
                "is_32bit": is_32bit
            })
    return targets

def compile_target(target: Dict) -> Tuple[bool, str, str]:
    mod_dir = target["module_dir"]
    is_bin = target["is_bin"]
    is_32bit = target["is_32bit"]
    
    compiler = CLANG32_XX if is_32bit else CLANG64_XX
    parts = target["rel_path"].split(os.sep)
    
    # Destination directory structure matching partition
    if parts[0] in ("system_ext", "system", "vendor"):
        out_parent = os.path.join(DIST_LIBS_ROOT, target["parent_rel"])
    elif parts[0] == "hw":
        hw_arch = "lib" if is_32bit else "lib64"
        out_parent = os.path.join(DIST_LIBS_ROOT, "vendor", hw_arch, "hw")
    else:
        out_parent = os.path.join(DIST_LIBS_ROOT, "vendor", target["parent_rel"])
    os.makedirs(out_parent, exist_ok=True)
    
    out_name = target["orig_filename"]
    if not is_bin and not out_name.endswith(".so") and not out_name.endswith(".ta"):
        out_name += ".so"
    
    out_file = os.path.join(out_parent, out_name)
    
    cmd = [
        compiler,
        "-O2",
        f"-I{INCLUDE_DIR}",
        f"-I{mod_dir}",
        "-Wno-unused-parameter",
        "-Wno-unused-variable",
        "-Wno-missing-declarations",
        "-Wno-return-type-c-linkage",
        "-fno-rtti",
    ]
    
    if not is_bin:
        cmd.extend(["-shared", "-fPIC"])
    
    cmd.append(target["cpp_file"])
    cmd.extend(["-o", out_file, "-llog"])
    
    try:
        subprocess.run(cmd, capture_output=True, text=True, check=True)
        # Create sanitized symlink alias if name differs
        sanitized_name = target["module_name"]
        if not is_bin and not sanitized_name.endswith(".so"):
            sanitized_name += ".so"
        if sanitized_name != out_name:
            alias_path = os.path.join(out_parent, sanitized_name)
            try:
                if os.path.lexists(alias_path):
                    os.remove(alias_path)
                os.symlink(out_name, alias_path)
            except Exception:
                pass
        if out_name == "libSoftGatekeeper.so":
            gk_alias = os.path.join(out_parent, "gatekeeper.default.so")
            try:
                if os.path.lexists(gk_alias):
                    os.remove(gk_alias)
                os.symlink(out_name, gk_alias)
            except Exception:
                pass
        return (True, target["rel_path"], out_file)
    except subprocess.CalledProcessError as e:
        return (False, target["rel_path"], e.stderr)

def main():
    parser = argparse.ArgumentParser(description="Build Reconstructed Begonia HAL Modules")
    parser.add_argument("--workers", "-j", type=int, default=8, help="Number of parallel compiler threads")
    parser.add_argument("--filter", "-f", type=str, default="", help="Filter targets by name substring")
    args = parser.parse_args()

    targets = find_reconstructed_targets(RECONSTRUCTED_ROOT)
    if args.filter:
        targets = [t for t in targets if args.filter in t["rel_path"]]

    print(f"[*] Found {len(targets)} reconstructed targets to build")
    print(f"[*] Compiling with {args.workers} parallel workers...")

    success_count = 0
    fail_count = 0

    with ProcessPoolExecutor(max_workers=args.workers) as executor:
        futures = {executor.submit(compile_target, t): t for t in targets}
        for fut in as_completed(futures):
            ok, rel, msg = fut.result()
            if ok:
                success_count += 1
                print(f"  [✓] Built: {rel} -> {os.path.basename(msg)}")
            else:
                fail_count += 1
                print(f"  [✗] Failed: {rel}")
                if msg:
                    first_err = [l for l in msg.splitlines() if "error:" in l]
                    err_txt = first_err[0] if first_err else msg[:150].replace("\n", " ")
                    print(f"      {err_txt}")

    print("\n" + "="*50)
    print(f"[BUILD SUMMARY] Successfully built: {success_count}/{len(targets)} modules")
    if fail_count > 0:
        print(f"[!] Modules with warnings/errors: {fail_count}")
    print(f"Output directory: {DIST_LIBS_ROOT}")
    print("="*50)

if __name__ == "__main__":
    main()
