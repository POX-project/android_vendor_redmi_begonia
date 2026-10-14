#!/usr/bin/env python3
"""
AnyKernel3 Flashable ZIP Builder for Redmi Note 8 Pro (Begonia / MT6785)
========================================================================
Configured for POX-project (https://github.com/POX-project).
Packages osm0sis AnyKernel3 recovery installer with:
  - Custom boot partition patcher (/dev/block/by-name/boot, A-only)
  - Ramdisk enhancements
  - Begonia kernel Image (if provided)
  - Vendor HAL fixes and hardware profiles for /vendor
"""

import os
import sys
import shutil
import zipfile
import argparse

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
AK3_BASE = "/media/dev/work/ak3base/v8"
DIST_DIR = os.path.join(ROOT_DIR, "dist")
OUTPUT_ZIP = os.path.join(DIST_DIR, "AnyKernel3-begonia-POX-Vendor-Fixes.zip")

ANYKERNEL_SCRIPT = """# AnyKernel3 Ramdisk Mod Script
# POX-project: Begonia (Redmi Note 8 Pro / MT6785)
# Maintainer: POX-project (https://github.com/POX-project)

### AnyKernel setup
properties() { '
kernel.string=POX Kernel & Vendor HAL Fixes for Redmi Note 8 Pro (begonia)
do.devicecheck=1
do.modules=0
do.systemless=1
do.cleanup=1
do.cleanuponabort=0
device.name1=begonia
device.name2=begonian
device.name3=Redmi Note 8 Pro
device.name4=mt6785
device.name5=
supported.versions=
supported.patchlevels=
supported.vendorpatchlevels=
'; } # end properties

### AnyKernel install
boot_attributes() {
set_perm_recursive 0 0 755 644 $RAMDISK/*;
set_perm_recursive 0 0 750 750 $RAMDISK/init* $RAMDISK/sbin;
} # end attributes

# boot shell variables
BLOCK=/dev/block/by-name/boot;
IS_SLOT_DEVICE=0;
RAMDISK_COMPRESSION=auto;
PATCH_VBMETA_FLAG=auto;

# import functions/variables and setup patching
. tools/ak3-core.sh;

ui_print " ";
ui_print " ============================================";
ui_print "  POX-project Begonia AnyKernel3 Installer   ";
ui_print "  Device: Redmi Note 8 Pro (begonia/MT6785)  ";
ui_print " ============================================";
ui_print " ";

## Boot install
if [ -f "Image.gz" ] || [ -f "zImage" ] || [ -f "kernel" ]; then
    ui_print " [*] Unpacking and patching boot image...";
    dump_boot;
    write_boot;
    ui_print " [✓] Boot image patched successfully!";
else
    ui_print " [*] No raw kernel binary bundled; skipping boot write.";
fi

## Vendor HAL and Fixes Installation
ui_print " [*] Mounting /vendor partition...";
mkdir -p /vendor
mount -o rw /vendor 2>/dev/null || mount -o remount,rw /vendor 2>/dev/null || true

if [ -d "vendor_patch" ]; then
    ui_print " [*] Applying POX vendor HAL fixes...";
    cp -a vendor_patch/. /vendor/
    chmod 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true
    chmod 755 /vendor/bin/hw/* /vendor/bin/* 2>/dev/null || true
    chcon -R u:object_r:vendor_file:s0 /vendor/lib/hw /vendor/lib64/hw /vendor/bin 2>/dev/null || true
    ui_print " [✓] Vendor fixes applied successfully!";
fi

ui_print " ";
ui_print " [SUCCESS] Begonia POX installation complete!";
ui_print " ";
"""

def build_anykernel_zip(include_kernel=True):
    os.makedirs(DIST_DIR, exist_ok=True)
    stage_dir = os.path.join(DIST_DIR, "ak3_stage")
    if os.path.exists(stage_dir):
        shutil.rmtree(stage_dir)
    os.makedirs(stage_dir, exist_ok=True)

    print("=" * 60)
    print(" BUILDING ANYKERNEL3 ZIP FOR BEGONIA (POX-PROJECT)")
    print("=" * 60)

    # 1. Copy core AK3 tools & META-INF from base
    tools_src = os.path.join(AK3_BASE, "tools")
    meta_src = os.path.join(AK3_BASE, "META-INF")
    
    shutil.copytree(tools_src, os.path.join(stage_dir, "tools"))
    shutil.copytree(meta_src, os.path.join(stage_dir, "META-INF"))
    print("  [✓] Copied AnyKernel3 tools & META-INF installer")

    # 2. Write custom anykernel.sh for begonia
    ak_script_path = os.path.join(stage_dir, "anykernel.sh")
    with open(ak_script_path, "w") as f:
        f.write(ANYKERNEL_SCRIPT)
    os.chmod(ak_script_path, 0o755)
    print("  [✓] Generated custom begonia anykernel.sh")

    # 3. Optional Kernel payload
    kernel_sources = [
        "/mnt/9f4d8733-a954-435d-b92f-f33c068c3b1e/begoker/build/Image.gz",
        "/media/dev/work/repack bego/kernel",
        os.path.join(ROOT_DIR, "dist", "Image.gz"),
    ]
    bundled_kernel = None
    if include_kernel:
        for ks in kernel_sources:
            if os.path.exists(ks):
                bundled_kernel = ks
                dst_k = os.path.join(stage_dir, "Image.gz" if ks.endswith(".gz") else "kernel")
                shutil.copy2(ks, dst_k)
                print(f"  [✓] Bundled kernel payload: {os.path.basename(ks)} ({os.path.getsize(dst_k)} bytes)")
                break

    # 4. Bundle curated vendor HAL fixes
    vendor_patch_dir = os.path.join(stage_dir, "vendor_patch")
    os.makedirs(os.path.join(vendor_patch_dir, "lib64", "hw"), exist_ok=True)
    os.makedirs(os.path.join(vendor_patch_dir, "lib", "hw"), exist_ok=True)

    # Copy lights, thermal, and gatekeeper fixes
    hal_files = [
        ("dist/reconstructed_libs/vendor/lib64/hw/lights.mt6785.so", "lib64/hw/lights.mt6785.so"),
        ("dist/reconstructed_libs/vendor/lib/hw/lights.mt6785.so", "lib/hw/lights.mt6785.so"),
        ("dist/reconstructed_libs/vendor/lib64/hw/thermal.mt6785.so", "lib64/hw/thermal.mt6785.so"),
        ("dist/reconstructed_libs/vendor/lib/hw/thermal.mt6785.so", "lib/hw/thermal.mt6785.so"),
        ("dist/reconstructed_libs/vendor/lib64/hw/power.default.so", "lib64/hw/power.default.so"),
    ]
    copied_hals = 0
    for src_rel, dst_rel in hal_files:
        src = os.path.join(ROOT_DIR, src_rel)
        dst = os.path.join(vendor_patch_dir, dst_rel)
        if os.path.exists(src):
            shutil.copy2(src, dst)
            copied_hals += 1

    print(f"  [✓] Bundled {copied_hals} vendor HAL modules into vendor_patch/")

    # 5. Create ZIP archive
    print(f"[*] Packaging AnyKernel3 zip: {OUTPUT_ZIP}...")
    with zipfile.ZipFile(OUTPUT_ZIP, "w", zipfile.ZIP_DEFLATED) as zf:
        for root, dirs, files in os.walk(stage_dir):
            for file in files:
                full = os.path.join(root, file)
                rel = os.path.relpath(full, stage_dir)
                is_exec = file.endswith((".sh", "magiskboot", "busybox", "update-binary", "fec", "lptools_static"))
                
                zi = zipfile.ZipInfo(rel)
                zi.create_system = 3
                zi.external_attr = (0o755 if is_exec else 0o644) << 16
                
                with open(full, "rb") as fh:
                    zf.writestr(zi, fh.read())

    shutil.rmtree(stage_dir)
    zip_size = os.path.getsize(OUTPUT_ZIP) / (1024 * 1024)
    print(f"[SUCCESS] Created {os.path.basename(OUTPUT_ZIP)} ({zip_size:.2f} MB)")
    print(f"Output path: {OUTPUT_ZIP}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Build AnyKernel3 Flashable Zip for Begonia")
    parser.add_argument("--no-kernel", action="store_true", help="Do not bundle kernel binary")
    args = parser.parse_args()
    build_anykernel_zip(include_kernel=not args.no_kernel)
