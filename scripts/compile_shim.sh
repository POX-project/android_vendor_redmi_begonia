#!/usr/bin/env bash
# ==============================================================================
# Helper to compile ARM64 shared libraries and shims using portable toolchain
# Usage:
#   compile_shim.sh <source.s|source.c> <output_lib.so>
# ==============================================================================

set -eo pipefail

if [ $# -lt 2 ]; then
    echo "Usage: compile_shim.sh <source.s|source.c> <output.so>"
    exit 1
fi

SRC="$1"
OUT="$2"
TMP_OBJ="/tmp/$(basename "$SRC").o"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
KERDEVDEP_DIR="/mnt/9f4d8733-a954-435d-b92f-f33c068c3b1e/begoker/kerdevdep"

if [ -f "${KERDEVDEP_DIR}/env.sh" ]; then
    source "${KERDEVDEP_DIR}/env.sh"
fi

echo "Compiling ${SRC} -> ${OUT} (ARM64)..."

if [[ "$SRC" == *.s || "$SRC" == *.S ]]; then
    aarch64-linux-android-as -o "${TMP_OBJ}" "${SRC}"
    aarch64-linux-android-ld -shared -o "${OUT}" "${TMP_OBJ}"
elif [[ "$SRC" == *.c ]]; then
    if command -v aarch64-linux-android30-clang &>/dev/null; then
        aarch64-linux-android30-clang -shared -fPIC -O2 -o "${OUT}" "${SRC}"
    else
        clang -target aarch64-linux-android -nostdinc -shared -fPIC -o "${OUT}" "${SRC}"
    fi
elif [[ "$SRC" == *.cpp || "$SRC" == *.cc ]]; then
    if command -v aarch64-linux-android30-clang++ &>/dev/null; then
        aarch64-linux-android30-clang++ -shared -fPIC -O2 -o "${OUT}" "${SRC}"
    else
        clang++ -target aarch64-linux-android -nostdinc -shared -fPIC -o "${OUT}" "${SRC}"
    fi
fi

rm -f "${TMP_OBJ}"
echo "[SUCCESS] Built ARM64 shared object: ${OUT}"
readelf -h "${OUT}" | grep -E "Class|Machine"
readelf -s "${OUT}" | grep -E "GLOBAL|FUNC"
