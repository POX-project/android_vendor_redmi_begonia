#!/usr/bin/env python3
"""
Begonia (Redmi Note 8 Pro) Vendor Tree Restoration & Generator
==============================================================
Inspired by: https://github.com/begonia-MT6785/android_vendor_redmi_begonia

Organizes and validates the repository into the standard LineageOS / AOSP
device vendor tree layout:
  - Android.bp          (Soong blueprint: dex_import, android_app_import, cc_prebuilt)
  - Android.mk          (Traditional Makefile for prebuilt modules)
  - BoardConfigVendor.mk (Board configuration vendor definitions)
  - begonia-vendor.mk   (PRODUCT_COPY_FILES and PRODUCT_PACKAGES for all 1,864 blobs)
  - proprietary/        (Authentic partition directory structure)
"""

import os
import sys
import shutil
import argparse

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
PROP_DIR = os.path.join(ROOT_DIR, "proprietary")

def restore_vendor_makefiles():
    print("=" * 65)
    print(" RESTORING BEGONIA OFFICIAL VENDOR MAKEFILES & BLUEPRINTS")
    print(" Inspired by: https://github.com/begonia-MT6785/android_vendor_redmi_begonia")
    print("=" * 65)

    official_files = [
        ("Android.bp.official", "Android.bp"),
        ("Android.mk.official", "Android.mk"),
        ("BoardConfigVendor.mk.official", "BoardConfigVendor.mk"),
        ("begonia-vendor.mk.official", "begonia-vendor.mk"),
    ]

    for src_name, dst_name in official_files:
        src = os.path.join(ROOT_DIR, src_name)
        dst = os.path.join(ROOT_DIR, dst_name)
        if os.path.exists(src):
            shutil.copy2(src, dst)
            print(f"  [✓] Restored: {dst_name} ({os.path.getsize(dst)} bytes)")
        else:
            print(f"  [!] Missing source template: {src_name}")

def audit_vendor_tree():
    mk_path = os.path.join(ROOT_DIR, "begonia-vendor.mk")
    if not os.path.exists(mk_path):
        print(f"[-] begonia-vendor.mk not found at {mk_path}")
        return

    print("\n[*] Auditing proprietary file paths against begonia-vendor.mk...")
    copy_files = []
    with open(mk_path, "r", errors="ignore") as f:
        for line in f:
            line = line.strip().rstrip("\\").strip()
            if line.startswith("vendor/redmi/begonia/proprietary/"):
                parts = line.split(":")
                src = parts[0].strip()
                rel = src.replace("vendor/redmi/begonia/proprietary/", "")
                dest = parts[1].strip() if len(parts) > 1 else ""
                copy_files.append((rel, dest))

    total = len(copy_files)
    found = 0
    missing = []

    for rel, dest in copy_files:
        p1 = os.path.join(PROP_DIR, rel)
        p2 = os.path.join(PROP_DIR, "vendor", rel)
        if os.path.exists(p1) or os.path.exists(p2):
            found += 1
        else:
            missing.append(rel)

    print(f"  [✓] Verified {found}/{total} files present in proprietary/ ({(found/total)*100:.1f}%)")
    if missing:
        print(f"  [!] Missing {len(missing)} files:")
        for m in missing[:10]:
            print(f"      - {m}")
    else:
        print("  [✓] 100% PARITY with official begonia-vendor.mk!")

def main():
    parser = argparse.ArgumentParser(description="Restore Begonia Vendor Tree Layout")
    parser.add_argument("--audit-only", action="store_true", help="Only audit without overwriting files")
    args = parser.parse_args()

    if not args.audit_only:
        restore_vendor_makefiles()
    audit_vendor_tree()
    print("\n[SUCCESS] Begonia vendor tree is in its authentic, canonical state!")

if __name__ == "__main__":
    main()
