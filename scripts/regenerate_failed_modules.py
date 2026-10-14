#!/usr/bin/env python3
"""
Regenerates and verifies specific modules that had symbol conflicts or special characters.
"""

import os
import sys
import glob

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
if ROOT_DIR not in sys.path:
    sys.path.insert(0, ROOT_DIR)

from scripts.reverse_engineer_blob import analyze_and_generate
from scripts.build_reconstructed import compile_target, INCLUDE_DIR, CLANG64_XX, CLANG32_XX
RECON_ROOT = os.path.join(ROOT_DIR, "source_code", "reconstructed")
PROPRIETARY_ROOT = os.path.join(ROOT_DIR, "proprietary", "vendor")

TARGET_BLOBS = [
    "lib64/libmfllcore.so",
    "lib64/libcamera_scene.so",
    "lib64/libarmnn.so",
    "lib64/libalhLDC.so",
    "lib64/libmibokeh_mt6785.so",
    "lib64/libmtkcam_device3_app.so",
    "lib64/libsn100u_fw.so",
    "lib64/libtflite_mtk.so",
    "lib64/libtflite_mtk_static_R.so",
    "lib64/libneuropilot_jni_R.so",
    "lib/libudf.so",
    "lib/libarmnn_ndk_mtk.so",
    "lib/libnir_neon_driver.so",
    "lib/libnir_neon_driver_ndk_mtk.so",
    "lib/libcmdl_ndk_mtk.so",
    "lib/libwo.so",
    "lib/libwvhidl.so",
    "lib/libmtkcam_ulog.so",
    "lib/libvc1dec_sa_ca7.so",
    "lib/libmp4enc_sa_ca7.so",
    "lib/libmp4enc_xa_ca7.so",
    "lib/mediadrm/libwvdrmengine.so",
    "lib/modules/wlan_drv_gen4m.ko",
]

def main():
    print("=" * 60)
    print(" REGENERATING PREVIOUSLY FAILED MODULES")
    print("=" * 60)

    for rel in TARGET_BLOBS:
        blob_path = os.path.join(PROPRIETARY_ROOT, rel)
        if not os.path.exists(blob_path):
            # Try finding
            m = glob.glob(f"{PROPRIETARY_ROOT}/**/{os.path.basename(rel)}", recursive=True)
            if m: blob_path = m[0]
            else:
                print(f"[-] Not found: {rel}")
                continue

        base_dir = "lib64" if "lib64" in rel else "lib"
        out_root = os.path.join(RECON_ROOT, base_dir)
        res = analyze_and_generate(blob_path, out_root, os.path.dirname(blob_path))
        if res:
            print(f"  [✓] Regenerated: {res['name']} ({res['export_count']} exports)")

            # Test compile
            mod_dir = res["output_dir"]
            cpp_file = os.path.join(mod_dir, f"{res['name']}.cpp")
            target = {
                "module_dir": mod_dir,
                "rel_path": os.path.relpath(mod_dir, RECON_ROOT),
                "parent_rel": os.path.dirname(os.path.relpath(mod_dir, RECON_ROOT)),
                "module_name": res["name"],
                "cpp_file": cpp_file,
                "is_bin": False,
                "is_32bit": (base_dir == "lib")
            }
            ok, rpath, err = compile_target(target)
            if ok:
                print(f"    \033[32m[PASS]\033[0m Successfully built: {rpath}")
            else:
                print(f"    \033[31m[FAIL]\033[0m Failed building {rpath}: {err[:200]}")

if __name__ == "__main__":
    main()
