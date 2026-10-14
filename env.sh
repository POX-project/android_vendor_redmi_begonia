#!/usr/bin/env bash
# ==============================================================================
# Begonia Blobs Portable Development & Reverse Engineering Environment
# Targets: ARM64 (AArch64) & ARM32 for Redmi Note 8 Pro (MT6785)
# ==============================================================================

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
KERDEVDEP_DIR="/mnt/9f4d8733-a954-435d-b92f-f33c068c3b1e/begoker/kerdevdep"
NDK_DIR="/media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin"

if [ -d "${NDK_DIR}" ]; then
    export PATH="${NDK_DIR}:${PATH}"
fi

if [ -f "${KERDEVDEP_DIR}/env.sh" ]; then
    source "${KERDEVDEP_DIR}/env.sh"
fi

export JAVA_HOME="/media/dev/work/flutter_dev/portable_sdk/jdk"
export PATH="${JAVA_HOME}/bin:${SCRIPT_DIR}/tools/jadx/bin:${SCRIPT_DIR}/tools/bin:${PATH}"

export PATH="${SCRIPT_DIR}/scripts:${PATH}"
export BEGONIA_BLOBS_DIR="${SCRIPT_DIR}/proprietary"
export BEGONIA_DIST_DIR="${SCRIPT_DIR}/dist"
export BEGONIA_SRC_DIR="${SCRIPT_DIR}/source_code"
export BEGONIA_TOOLS_DIR="${SCRIPT_DIR}/tools"

echo "=========================================================="
echo " Begonia Portable Dev & Reverse Engineering Environment Loaded"
echo " Android Clang: $(which aarch64-linux-android30-clang 2>/dev/null || which clang)"
echo " Assembler    : $(which aarch64-linux-android-as 2>/dev/null || echo 'as')"
echo " Source Code available in: source_code/"
echo "   - source_code/reconstructed/ : Reverse-engineered native C++ HALs & daemons"
echo "   - source_code/hals/          : Handcrafted HALs (lights, thermal, power, etc.)"
echo "   - source_code/shims/         : Audio, sensor, camera shims"
echo "=========================================================="
