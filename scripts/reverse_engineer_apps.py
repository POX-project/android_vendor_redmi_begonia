#!/usr/bin/env python3
"""
Begonia (MT6785) Comprehensive App & Framework Reverse Engineering Engine
==========================================================================
Decompiles all vendor/system/product APK applications, resource overlays,
and MediaTek proprietary framework JARs into human-readable Java source code,
Smali assembly, decoded resources, and complete AOSP Android.bp blueprints.
"""

import os
import sys
import json
import shutil
import subprocess
import argparse
import re
from typing import Dict, List, Any
from concurrent.futures import ProcessPoolExecutor, as_completed

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
PROPRIETARY_DIR = os.path.join(ROOT_DIR, "proprietary")
OUT_APPS_DIR = os.path.join(ROOT_DIR, "source_code", "reconstructed", "apps")
OUT_FRAMEWORK_DIR = os.path.join(ROOT_DIR, "source_code", "reconstructed", "framework")

JAVA_BIN = "/media/dev/work/flutter_dev/portable_sdk/jdk/bin/java"
JADX_BIN = os.path.join(ROOT_DIR, "tools", "jadx", "bin", "jadx")
APKTOOL_JAR = os.path.join(ROOT_DIR, "tools", "bin", "apktool.jar")

if not os.path.exists(APKTOOL_JAR):
    APKTOOL_JAR = "/media/dev/work/apklab/apktool.jar"

ENV = os.environ.copy()
ENV["JAVA_HOME"] = "/media/dev/work/flutter_dev/portable_sdk/jdk"
ENV["PATH"] = f"{ENV['JAVA_HOME']}/bin:{ENV['PATH']}"

def decompile_single_app(apk_path: str, out_base: str) -> Dict[str, Any]:
    apk_name = os.path.splitext(os.path.basename(apk_path))[0]
    app_out = os.path.join(out_base, apk_name)
    java_out = os.path.join(app_out, "src")
    smali_out = os.path.join(app_out, "apktool_res")
    is_overlay = "Overlay" in apk_name or "Res" in apk_name
    
    os.makedirs(app_out, exist_ok=True)
    print(f"[*] Decompiling APK: {apk_name}...")

    # 1. JADX Decompilation to Java Sources
    if not is_overlay:
        try:
            jadx_cmd = [
                JADX_BIN,
                "-d", java_out,
                "--no-debug-info",
                "--show-bad-code",
                apk_path
            ]
            subprocess.run(jadx_cmd, env=ENV, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=120)
        except Exception as e:
            print(f"  [!] JADX warning on {apk_name}: {e}")

    # 2. Apktool Decompilation to Smali & Resources
    try:
        apktool_cmd = [
            JAVA_BIN,
            "-jar", APKTOOL_JAR,
            "d", apk_path,
            "-o", smali_out,
            "-f"
        ]
        subprocess.run(apktool_cmd, env=ENV, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=120)
    except Exception as e:
        print(f"  [!] Apktool warning on {apk_name}: {e}")

    # 3. Promote manifest and resources
    root_manifest = os.path.join(app_out, "AndroidManifest.xml")
    sub_manifest = os.path.join(smali_out, "AndroidManifest.xml")
    if not os.path.exists(root_manifest) and os.path.exists(sub_manifest):
        shutil.copy2(sub_manifest, root_manifest)

    root_res = os.path.join(app_out, "res")
    sub_res = os.path.join(smali_out, "res")
    if not os.path.exists(root_res) and os.path.exists(sub_res):
        shutil.copytree(sub_res, root_res, dirs_exist_ok=True)

    # 4. Extract package and permissions
    package_name = "unknown"
    target_package = "android"
    permissions = []
    if os.path.exists(root_manifest):
        try:
            with open(root_manifest, "r", encoding="utf-8", errors="ignore") as f:
                content = f.read()
                m_pkg = re.search(r'package="([^"]+)"', content)
                if m_pkg: package_name = m_pkg.group(1)
                m_tgt = re.search(r'android:targetPackage="([^"]+)"', content)
                if m_tgt: target_package = m_tgt.group(1)
                for m_perm in re.finditer(r'<uses-permission\s+android:name="([^"]+)"', content):
                    permissions.append(m_perm.group(1))
        except Exception:
            pass

    # 5. Generate Android.bp
    bp_path = os.path.join(app_out, "Android.bp")
    if is_overlay:
        bp_content = f"""//
// LineageOS Reconstructed Overlay for Begonia (Redmi Note 8 Pro)
//

runtime_resource_overlay {{
    name: "{apk_name}",
    theme: "{apk_name}",
    resource_dirs: ["res"],
    vendor: true,
    sdk_version: "current",
}}
"""
    else:
        bp_content = f"""//
// LineageOS Reconstructed Application for Begonia (Redmi Note 8 Pro)
//

android_app {{
    name: "{apk_name}",
    srcs: [
        "src/sources/**/*.java",
    ],
    resource_dirs: ["res"],
    manifest: "AndroidManifest.xml",
    vendor: true,
    platform_apis: true,
    certificate: "platform",
    privileged: true,
    dex_preopt: {{
        enabled: false,
    }},
}}
"""
    with open(bp_path, "w") as f:
        f.write(bp_content)

    return {
        "name": apk_name,
        "package": package_name,
        "is_overlay": is_overlay,
        "target_package": target_package,
        "apk_path": apk_path,
        "output_dir": app_out,
        "permissions": permissions,
        "has_java": os.path.exists(java_out),
        "has_smali": os.path.exists(smali_out)
    }

def decompile_single_jar(jar_path: str, out_base: str) -> Dict[str, Any]:
    jar_name = os.path.splitext(os.path.basename(jar_path))[0]
    jar_out = os.path.join(out_base, jar_name)
    src_out = os.path.join(jar_out, "src")
    
    os.makedirs(src_out, exist_ok=True)
    print(f"[*] Decompiling Framework JAR: {jar_name}...")

    # JADX Decompilation
    try:
        jadx_cmd = [
            JADX_BIN,
            "-d", src_out,
            "--no-debug-info",
            "--show-bad-code",
            jar_path
        ]
        subprocess.run(jadx_cmd, env=ENV, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=180)
    except Exception as e:
        print(f"  [!] JADX warning on {jar_name}: {e}")

    # Generate Android.bp
    bp_path = os.path.join(jar_out, "Android.bp")
    bp_content = f"""//
// LineageOS Reconstructed MediaTek Framework Library: {jar_name}
//

java_library {{
    name: "{jar_name}",
    srcs: [
        "src/sources/**/*.java",
    ],
    installable: true,
    platform_apis: true,
}}
"""
    with open(bp_path, "w") as f:
        f.write(bp_content)

    readme_path = os.path.join(jar_out, "README.md")
    with open(readme_path, "w") as f:
        f.write(f"""# {jar_name}

MediaTek Proprietary Framework Library decompiled into editable Java source code.
Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785).

## Build Blueprint
- Defined in [`Android.bp`](./Android.bp) as `java_library`.
""")

    return {
        "name": jar_name,
        "jar_path": jar_path,
        "output_dir": jar_out,
        "has_java": os.path.exists(os.path.join(src_out, "sources"))
    }

def main():
    parser = argparse.ArgumentParser(description="Reverse Engineer All Proprietary Apps & Framework JARs")
    parser.add_argument("--workers", "-j", type=int, default=8, help="Worker threads")
    args = parser.parse_args()

    os.makedirs(OUT_APPS_DIR, exist_ok=True)
    os.makedirs(OUT_FRAMEWORK_DIR, exist_ok=True)

    apks = []
    jars = []
    for root, _, files in os.walk(PROPRIETARY_DIR):
        for f in files:
            p = os.path.join(root, f)
            if f.endswith(".apk"):
                apks.append(p)
            elif f.endswith(".jar"):
                jars.append(p)

    print(f"[*] Found {len(apks)} APKs and {len(jars)} Framework JARs across entire proprietary tree.")

    # 1. Decompile APKs
    app_results = []
    with ProcessPoolExecutor(max_workers=args.workers) as executor:
        futures = {executor.submit(decompile_single_app, apk, OUT_APPS_DIR): apk for apk in apks}
        for fut in as_completed(futures):
            res = fut.result()
            if res:
                app_results.append(res)
                print(f"  [✓] Processed APK: {res['name']} ({res['package']})")

    # 2. Decompile Framework JARs
    jar_results = []
    with ProcessPoolExecutor(max_workers=args.workers) as executor:
        futures = {executor.submit(decompile_single_jar, jar, OUT_FRAMEWORK_DIR): jar for jar in jars}
        for fut in as_completed(futures):
            res = fut.result()
            if res:
                jar_results.append(res)
                print(f"  [✓] Processed Framework JAR: {res['name']}")

    # Save Catalog Indices
    with open(os.path.join(OUT_APPS_DIR, "apps_index.json"), "w") as f:
        json.dump(app_results, f, indent=2)

    with open(os.path.join(OUT_FRAMEWORK_DIR, "framework_index.json"), "w") as f:
        json.dump(jar_results, f, indent=2)

    with open(os.path.join(OUT_FRAMEWORK_DIR, "INDEX.md"), "w") as f:
        f.write("# Reconstructed Begonia MediaTek Framework Libraries\n\n")
        f.write(f"Total Framework Libraries Reverse-Engineered: **{len(jar_results)}**\n\n")
        f.write("| Framework Library | Java Sources | Build Blueprint |\n")
        f.write("|---|---|---|\n")
        for r in sorted(jar_results, key=lambda x: x['name']):
            f.write(f"| [`{r['name']}`]({r['name']}/) | {'✓' if r['has_java'] else '✗'} | [`Android.bp`]({r['name']}/Android.bp) |\n")

    print("\n" + "="*60)
    print(f"[SUCCESS] Fully reverse-engineered {len(app_results)} APKs and {len(jar_results)} Framework JARs!")
    print(f"  - Apps directory:      {OUT_APPS_DIR}")
    print(f"  - Framework directory: {OUT_FRAMEWORK_DIR}")
    print("="*60)

if __name__ == "__main__":
    main()
