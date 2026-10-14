#!/usr/bin/env python3
"""
Reconstruct all remaining proprietary targets (soundtrigger, soter, and TEE trustlets)
"""

import os
import sys
import shutil

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
sys.path.insert(0, os.path.join(ROOT, "scripts"))
from reverse_engineer_blob import analyze_and_generate

def main():
    print("==================================================")
    print(" RECONSTRUCTING SOUNDTRIGGER, SOTER & TEE TRUSTLETS")
    print("==================================================")

    # 1. Clean up misspelled folders
    misspelled = [
        os.path.join(ROOT, "source_code", "reconstructed", "hw", "android_hardwareundtrigger_2_3_impl"),
        os.path.join(ROOT, "source_code", "reconstructed", "lib64", "hw", "android_hardwareundtrigger_2_3_impl"),
        os.path.join(ROOT, "source_code", "reconstructed", "lib", "hw", "android_hardwareundtrigger_2_3_impl"),
        os.path.join(ROOT, "source_code", "reconstructed", "bin", "hw", "vendor_microtrust_hardwareter_1_0_service"),
        os.path.join(ROOT, "source_code", "reconstructed", "lib64", "vendor_microtrust_hardwareter_1_0"),
        os.path.join(ROOT, "dist", "reconstructed_libs", "vendor", "bin", "hw", "vendor_microtrust_hardwareter_1_0_service"),
        os.path.join(ROOT, "dist", "reconstructed_libs", "vendor", "lib64", "hw", "android_hardwareundtrigger_2_3_impl.so"),
        os.path.join(ROOT, "dist", "reconstructed_libs", "vendor", "lib", "hw", "android_hardwareundtrigger_2_3_impl.so"),
    ]
    for m in misspelled:
        if os.path.isdir(m):
            shutil.rmtree(m)
            print(f"[*] Removed obsolete directory: {os.path.relpath(m, ROOT)}")
        elif os.path.isfile(m):
            os.remove(m)
            print(f"[*] Removed obsolete file: {os.path.relpath(m, ROOT)}")

    # 2. Reconstruct correct targets
    targets = [
        ("proprietary/vendor/lib64/hw/android.hardware.soundtrigger@2.3-impl.so", "source_code/reconstructed/lib64/hw"),
        ("proprietary/vendor/lib/hw/android.hardware.soundtrigger@2.3-impl.so", "source_code/reconstructed/lib/hw"),
        ("proprietary/vendor/bin/hw/vendor.microtrust.hardware.soter@1.0-service", "source_code/reconstructed/bin/hw"),
        ("proprietary/vendor/lib64/vendor.microtrust.hardware.soter@1.0.so", "source_code/reconstructed/lib64"),
    ]

    for blob_rel, out_rel in targets:
        blob_path = os.path.join(ROOT, blob_rel)
        out_root = os.path.join(ROOT, out_rel)
        print(f"[*] Reconstructing: {blob_rel} -> {out_rel}")
        res = analyze_and_generate(blob_path, out_root, os.path.join(ROOT, "proprietary", "vendor"))
        if res:
            print(f"    [✓] Generated {res['name']} ({res['export_count']} exports)")

    # 3. Reconstruct 35 TEE Trustlets
    ta_dir = os.path.join(ROOT, "proprietary", "vendor", "thh", "ta")
    out_ta = os.path.join(ROOT, "source_code", "reconstructed", "vendor", "thh", "ta")
    os.makedirs(out_ta, exist_ok=True)

    ta_count = 0
    for f in os.listdir(ta_dir):
        if f.endswith(".ta"):
            p = os.path.join(ta_dir, f)
            res = analyze_and_generate(p, out_ta, os.path.join(ROOT, "proprietary", "vendor"))
            if res:
                ta_count += 1
                print(f"    [✓] Reconstructed TA: {f} -> {res['name']}")

    print(f"\n[SUCCESS] Reconstructed all {len(targets)} HAL/services and {ta_count} TEE trustlets!")

if __name__ == "__main__":
    main()
