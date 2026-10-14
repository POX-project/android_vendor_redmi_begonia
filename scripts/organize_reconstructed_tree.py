#!/usr/bin/env python3
"""
Begonia (MT6785) Reconstructed Tree Organizer
==============================================
Sorts all reverse-engineered modules into clean vendor directory structures:
- source_code/reconstructed/bin/       (64-bit and 32-bit service daemons)
- source_code/reconstructed/lib64/     (64-bit HAL and shared libraries)
- source_code/reconstructed/lib/       (32-bit HAL and shared libraries)
- source_code/reconstructed/apps/      (Decompiled vendor APK applications & overlays)
- source_code/reconstructed/framework/ (Decompiled MediaTek framework JARs)
"""

import os
import shutil
import glob
import re

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
RECON_DIR = os.path.join(ROOT_DIR, "source_code", "reconstructed")

PROTECTED_DIRS = {"bin", "lib64", "lib", "apps", "framework"}

def organize():
    print("=" * 60)
    print(" ORGANIZING RECONSTRUCTED SOURCE TREE")
    print("=" * 60)

    entries = [d for d in os.listdir(RECON_DIR) 
               if os.path.isdir(os.path.join(RECON_DIR, d)) and d not in PROTECTED_DIRS]

    counts = {"bin": 0, "lib64": 0, "lib": 0}

    for entry in sorted(entries):
        src_path = os.path.join(RECON_DIR, entry)
        cpp_files = glob.glob(os.path.join(src_path, "*.cpp"))
        
        # Check subdirectories (like soundfx, egl, mediadrm)
        if not cpp_files:
            subdirs = [d for d in os.listdir(src_path) if os.path.isdir(os.path.join(src_path, d))]
            if subdirs:
                # Subdirectory containing modules (e.g. soundfx/libswdap)
                for sub in subdirs:
                    sub_path = os.path.join(src_path, sub)
                    sub_cpps = glob.glob(os.path.join(sub_path, "*.cpp"))
                    if sub_cpps:
                        with open(sub_cpps[0], "r", encoding="utf-8", errors="ignore") as f:
                            content = f.read(500)
                            is_64 = "64-bit" in content
                            dest_base = "lib64" if is_64 else "lib"
                            dest_dir = os.path.join(RECON_DIR, dest_base, entry, sub)
                            os.makedirs(os.path.dirname(dest_dir), exist_ok=True)
                            if not os.path.exists(dest_dir):
                                shutil.move(sub_path, dest_dir)
                                counts[dest_base] += 1
                try:
                    os.rmdir(src_path)
                except Exception:
                    pass
                continue

        if not cpp_files:
            continue

        cpp_file = cpp_files[0]
        with open(cpp_file, "r", encoding="utf-8", errors="ignore") as f:
            header_sample = f.read(1500)
            is_64 = "64-bit" in header_sample
            is_bin = ("int main(" in header_sample) or ("main" in header_sample and "service" in entry)

        if is_bin:
            dest_dir = os.path.join(RECON_DIR, "bin", entry)
            counts["bin"] += 1
        elif is_64:
            dest_dir = os.path.join(RECON_DIR, "lib64", entry)
            counts["lib64"] += 1
        else:
            dest_dir = os.path.join(RECON_DIR, "lib", entry)
            counts["lib"] += 1

        if not os.path.exists(dest_dir):
            shutil.move(src_path, dest_dir)
        else:
            # Merge or remove duplicate
            shutil.rmtree(src_path)

    print(f"[✓] Moved {counts['bin']} modules to source_code/reconstructed/bin/")
    print(f"[✓] Moved {counts['lib64']} modules to source_code/reconstructed/lib64/")
    print(f"[✓] Moved {counts['lib']} modules to source_code/reconstructed/lib/")
    print("=" * 60)

if __name__ == "__main__":
    organize()
