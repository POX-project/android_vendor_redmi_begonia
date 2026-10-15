#!/usr/bin/env python3
"""
Package Begonia Open-Source Hardware Tools into a Magisk module zip.
Includes:
  - open_source_hal_tester (wrapper with LD_LIBRARY_PATH)
  - open_source_hal_tester_bin (ARM64 static ELF binary)
  - begonia_ir_blast (ARM64 static ELF binary)
  - begonia_backlight_ctrl (ARM64 static ELF binary)
  - begonia_haptic_pulse (ARM64 static ELF binary)
"""

import os
import zipfile

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
DIST_DIR = os.path.join(ROOT_DIR, "dist")
OUTPUT_ZIP = os.path.join(DIST_DIR, "Begonia-OpenSource-HAL-Tools.zip")

MODULE_PROP = """id=begonia_opensource_hals
name=Begonia Open-Source Hardware Tools & HALs
version=v1.0.1
versionCode=101
author=POX-project & Antigravity
description=Systemless open-source Begonia hardware tools & HAL verification: open_source_hal_tester, begonia_ir_blast, begonia_backlight_ctrl, begonia_haptic_pulse.
"""

UPDATE_BIN = """#!/sbin/sh
OUTFD=$2
ZIPFILE=$3
mount /data 2>/dev/null
[ -f /data/adb/magisk/util_functions.sh ] || { echo "! Please install Magisk v20.4+"; exit 1; }
. /data/adb/magisk/util_functions.sh
install_module
exit 0
"""

WRAPPER_SCRIPT = """#!/system/bin/sh
export LD_LIBRARY_PATH=/vendor/lib64:/vendor/lib64/hw:$LD_LIBRARY_PATH
if [ -x /system/bin/open_source_hal_tester_bin ]; then
    exec /system/bin/open_source_hal_tester_bin "$@"
elif [ -x /data/local/tmp/open_source_hal_tester_bin ]; then
    exec /data/local/tmp/open_source_hal_tester_bin "$@"
else
    exec open_source_hal_tester_bin "$@"
fi
"""

def main():
    os.makedirs(DIST_DIR, exist_ok=True)
    
    # Check binary files
    bin_files = {
        "begonia_ir_blast": os.path.join(DIST_DIR, "begonia_ir_blast"),
        "begonia_backlight_ctrl": os.path.join(DIST_DIR, "begonia_backlight_ctrl"),
        "begonia_haptic_pulse": os.path.join(DIST_DIR, "begonia_haptic_pulse"),
        "open_source_hal_tester_bin": os.path.join(DIST_DIR, "open_source_hal_tester"),
    }
    
    for name, path in bin_files.items():
        if not os.path.exists(path):
            raise FileNotFoundError(f"Missing required binary: {path}")

    with zipfile.ZipFile(OUTPUT_ZIP, "w", zipfile.ZIP_DEFLATED) as zf:
        zf.writestr("module.prop", MODULE_PROP)
        
        zi_bin = zipfile.ZipInfo("META-INF/com/google/android/update-binary")
        zi_bin.create_system = 3
        zi_bin.external_attr = 0o755 << 16
        zf.writestr(zi_bin, UPDATE_BIN)
        zf.writestr("META-INF/com/google/android/updater-script", "#MAGISK\n")
        
        # Add wrapper script
        zi_wrap = zipfile.ZipInfo("system/bin/open_source_hal_tester")
        zi_wrap.create_system = 3
        zi_wrap.external_attr = 0o755 << 16
        zf.writestr(zi_wrap, WRAPPER_SCRIPT)
        
        # Add compiled binaries
        for dest_name, src_path in bin_files.items():
            zi = zipfile.ZipInfo(f"system/bin/{dest_name}")
            zi.create_system = 3
            zi.external_attr = 0o755 << 16
            with open(src_path, "rb") as fh:
                zf.writestr(zi, fh.read())

    print(f"[✓] Created: {OUTPUT_ZIP} ({os.path.getsize(OUTPUT_ZIP)} bytes)")

if __name__ == "__main__":
    main()
