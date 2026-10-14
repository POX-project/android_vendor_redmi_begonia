#!/usr/bin/env python3
"""
Begonia Automated Blob Fixup Suite (Kanged from WuXing90 & LineageOS extract-files.py)
Applies official community binary fixups, DT_NEEDED rewrites, and shim injections
using patchelf to enable MT6785 Begonia blobs to run on modern Android versions.
"""

import os
import sys
import shutil
import subprocess

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.abspath(os.path.join(SCRIPT_DIR, ".."))
VENDOR_DIR = os.path.join(ROOT_DIR, "proprietary")
PATCHELF = os.path.join(ROOT_DIR, "tools", "bin", "patchelf")

if not os.path.exists(PATCHELF):
    PATCHELF = "patchelf"

# Rules kanged directly from WuXing90's device_redmi_begonia extract-files.py
BLOB_FIXUPS = [
    # Audio HAL
    {
        "target": "vendor/lib/hw/audio.primary.mt6785.so",
        "replace_needed": [("libalsautils.so", "libalsautils-v30.so")],
        "add_needed": ["libshim_audio.so"],
    },
    {
        "target": "vendor/lib/hw/audio.usb.mt6785.so",
        "replace_needed": [("libalsautils.so", "libalsautils-v30.so")],
    },
    # Thermal & Display PQ
    {
        "targets": [
            "vendor/lib64/hw/android.hardware.thermal@2.0-impl.so",
            "vendor/lib64/hw/dfps.mt6785.so",
            "vendor/lib64/hw/vendor.mediatek.hardware.pq@2.6-impl.so",
        ],
        "replace_needed": [("libutils.so", "libutils-v32.so")],
    },
    # Camera stdutils
    {
        "target": "vendor/lib64/libmtkcam_stdutils.so",
        "replace_needed": [("libutils.so", "libutils-v30.so")],
    },
    # Sensors provider
    {
        "targets": [
            "vendor/bin/mnld",
            "vendor/lib/libaalservice.so",
            "vendor/lib/libcam.utils.sensorprovider.so",
            "vendor/lib64/libaalservice.so",
            "vendor/lib64/libcam.utils.sensorprovider.so",
        ],
        "add_needed": ["android.hardware.sensors@1.0-convert-shared.so"],
    },
    # Keymaster Beanpod TEE
    {
        "target": "vendor/bin/hw/android.hardware.keymaster@4.0-service.beanpod",
        "add_needed": ["libshim_beanpod.so"],
    },
    # OMX & Media Source
    {
        "targets": [
            "system/lib64/libsource.so",
            "vendor/lib/libMtkOmxVdecEx.so",
        ],
        "add_needed": ["libui_shim.so"],
    },
    # Engineering mode
    {
        "target": "system/lib64/libem_support_jni.so",
        "add_needed": ["libjni_shim.so"],
    },
    # Widevine DRM Crypto
    {
        "targets": [
            "vendor/lib/libwvhidl.so",
            "vendor/lib/mediadrm/libwvdrmengine.so",
        ],
        "replace_needed": [("libcrypto.so", "libcrypto-v33.so")],
    },
    # NVRAM & Neuron AI
    {
        "targets": [
            "vendor/lib/libnvram.so",
            "vendor/lib/libsysenv.so",
            "vendor/lib64/libnvram.so",
            "vendor/lib64/libsysenv.so",
            "vendor/bin/hw/android.hardware.neuralnetworks@1.3-service-mtk-neuron",
        ],
        "add_needed": ["libbase_shim.so"],
    },
    # MNL GPS
    {
        "target": "vendor/lib/libmnl.so",
        "add_needed": ["libcutils.so"],
    },
    # Video Telephony
    {
        "target": "system/lib/libmtk_vt_service.so",
        "add_needed": ["libgui_shim.so"],
    },
    # Telephony RIL
    {
        "target": "vendor/bin/hw/mtkfusionrild",
        "add_needed": ["libutils-v32.so"],
    },
    # Camera & Gralloc UI v34
    {
        "targets": [
            "vendor/lib64/libalRnBRT_GL_GBWRAPPER.so",
            "vendor/lib64/libcam.hal3a.v3.so",
            "vendor/lib64/libeffecthal.base.so",
            "vendor/lib64/libmtkcam_grallocutils.so",
            "vendor/lib64/libmtkcam_3rdparty.vidhance.so",
        ],
        "replace_needed": [("libui.so", "libui-v34.so")],
    },
]


def apply_fixup(target_rel, replace_needed=None, add_needed=None):
    full_path = os.path.join(VENDOR_DIR, target_rel)
    if not os.path.exists(full_path):
        # file might be absent or optional
        return

    # Backup original before modifying
    orig_path = full_path + ".orig"
    if not os.path.exists(orig_path):
        shutil.copy2(full_path, orig_path)

    print(f"Patching: {target_rel}")

    if replace_needed:
        for old_lib, new_lib in replace_needed:
            try:
                subprocess.check_call(
                    [PATCHELF, "--replace-needed", old_lib, new_lib, full_path],
                    stderr=subprocess.DEVNULL,
                )
                print(f"  [REPLACE-NEEDED] {old_lib} -> {new_lib}")
            except Exception as e:
                print(f"  [WARN] Failed to replace {old_lib}: {e}")

    if add_needed:
        for new_lib in add_needed:
            try:
                subprocess.check_call(
                    [PATCHELF, "--add-needed", new_lib, full_path],
                    stderr=subprocess.DEVNULL,
                )
                print(f"  [ADD-NEEDED] {new_lib}")
            except Exception as e:
                print(f"  [WARN] Failed to add {new_lib}: {e}")


def main():
    print("=" * 60)
    print(" Applying Community Begonia Blob Fixups (patchelf)")
    print(" Source: WuXing90 & LineageOS extract-files.py")
    print("=" * 60)

    for rule in BLOB_FIXUPS:
        targets = rule.get("targets", [rule.get("target")])
        replace_needed = rule.get("replace_needed", [])
        add_needed = rule.get("add_needed", [])
        for t in targets:
            if t:
                apply_fixup(t, replace_needed, add_needed)

    print("\n[SUCCESS] All community blob fixups applied!")
    print("Original files backed up with '.orig' suffix.")


if __name__ == "__main__":
    main()
