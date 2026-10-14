#!/usr/bin/env python3
"""
Compiles Reconstructed C/C++ Sources into ARM64 Shared Libraries and Binaries
=============================================================================
Uses the standalone NDK toolchain to build reverse-engineered HAL modules
into flashable/testable ARM64 ELF libraries.
"""

import os
import sys
import subprocess
import argparse

NDK_BIN = "/media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin"
CLANGXX = os.path.join(NDK_BIN, "aarch64-linux-android30-clang++")
CLANG = os.path.join(NDK_BIN, "aarch64-linux-android30-clang")

INCLUDE_DIR = "/media/dev/work/begonia_blobs_code/source_code/include"
DIST_DIR = "/media/dev/work/begonia_blobs_code/dist/reconstructed_libs"

def compile_module(module_dir: str, out_dir: str = DIST_DIR):
    os.makedirs(out_dir, exist_ok=True)
    module_name = os.path.basename(os.path.normpath(module_dir))
    
    cpp_files = [os.path.join(module_dir, f) for f in os.listdir(module_dir) if f.endswith(".cpp") or f.endswith(".cc")]
    c_files = [os.path.join(module_dir, f) for f in os.listdir(module_dir) if f.endswith(".c")]
    
    all_sources = cpp_files + c_files
    if not all_sources:
        print(f"[-] No source files found in {module_dir}", file=sys.stderr)
        return False

    out_file = os.path.join(out_dir, f"{module_name}.so")
    
    cmd = [
        CLANGXX,
        "-shared",
        "-fPIC",
        "-O2",
        f"-I{INCLUDE_DIR}",
        f"-I{module_dir}",
        "-Wno-unused-parameter",
        "-Wno-unused-variable",
        "-Wno-missing-declarations",
        "-Wno-return-type-c-linkage",
    ]
    cmd.extend(all_sources)
    cmd.extend(["-o", out_file, "-llog"])

    print(f"[*] Compiling {module_name} -> {out_file}...")
    try:
        res = subprocess.run(cmd, capture_output=True, text=True, check=True)
        print(f"[✓] Successfully built: {out_file}")
        return True
    except subprocess.CalledProcessError as e:
        print(f"[-] Compilation failed for {module_name}:\n{e.stderr}", file=sys.stderr)
        return False

def main():
    parser = argparse.ArgumentParser(description="Compile Reconstructed Begonia Modules")
    parser.add_argument("module_dir", help="Directory containing reconstructed .cpp and .h files")
    parser.add_argument("--out", "-o", default=DIST_DIR, help="Output directory")
    args = parser.parse_args()

    success = compile_module(args.module_dir, args.out)
    sys.exit(0 if success else 1)

if __name__ == "__main__":
    main()
