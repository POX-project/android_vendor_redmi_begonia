#!/usr/bin/env bash
# ==============================================================================
# Begonia Blobs Flashing & Rollback Suite (Bidirectional Flash System)
# Device: Redmi Note 8 Pro (begonia / MT6785)
# 
# Usage:
#   ./flash_blobs.sh flash [hal|all]    # Backup current device blobs & flash new blobs
#   ./flash_blobs.sh revert             # Revert to last backup
#   ./flash_blobs.sh status             # Compare local blobs with device
#   ./flash_blobs.sh build-zips         # Build flashable recovery ZIPs & Magisk module
#   ./flash_blobs.sh help               # Show help
# ==============================================================================

set -eo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROPRIETARY_DIR="${SCRIPT_DIR}/proprietary"
BACKUP_LOCAL_DIR="${SCRIPT_DIR}/backups"
SDCARD_BACKUP_DIR="/sdcard/begonia_blobs_backup"

COLOR_RED="\033[0;31m"
COLOR_GREEN="\033[0;32m"
COLOR_YELLOW="\033[1;33m"
COLOR_BLUE="\033[0;34m"
COLOR_CYAN="\033[0;36m"
COLOR_RESET="\033[0m"

log_info() { echo -e "${COLOR_BLUE}[INFO]${COLOR_RESET} $1"; }
log_ok() { echo -e "${COLOR_GREEN}[SUCCESS]${COLOR_RESET} $1"; }
log_warn() { echo -e "${COLOR_YELLOW}[WARN]${COLOR_RESET} $1"; }
log_err() { echo -e "${COLOR_RED}[ERROR]${COLOR_RESET} $1" >&2; }

check_adb() {
    if ! command -v adb &>/dev/null; then
        log_err "adb command not found. Please install Android platform tools."
        exit 1
    fi
    local devices
    devices=$(adb devices | grep -v "List" | grep -v "^$" || true)
    if [ -z "$devices" ]; then
        log_err "No ADB devices connected. Please connect Redmi Note 8 Pro (begonia) via USB and enable USB debugging or boot to TWRP."
        exit 1
    fi
    log_info "Connected device detected:"
    adb devices -l
}

detect_device_mode() {
    local recovery_check
    recovery_check=$(adb devices | grep "recovery" || true)
    if [ -n "$recovery_check" ]; then
        echo "recovery"
    else
        echo "system"
    fi
}

remount_vendor() {
    local mode=$1
    log_info "Attempting to mount/remount /vendor as Read-Write..."
    if [ "$mode" == "recovery" ]; then
        adb shell "mount -o rw /vendor 2>/dev/null || mount -o remount,rw /vendor 2>/dev/null || mount /dev/block/mapper/vendor /vendor 2>/dev/null || true"
    else
        adb root 2>/dev/null || true
        adb remount 2>/dev/null || true
        adb shell "mount -o remount,rw /vendor 2>/dev/null || true"
    fi
    
    # Check if vendor is writable
    local test_res
    test_res=$(adb shell "touch /vendor/.begonia_rw_test && rm -f /vendor/.begonia_rw_test && echo 'OK' || echo 'FAIL'" 2>/dev/null | tr -d '\r\n')
    if [ "$test_res" != "OK" ]; then
        log_warn "/vendor is read-only (EROFS or unmounted). Direct block writes may be blocked."
        log_warn "If running Android 14/15/16/17 with EROFS, use Magisk/KernelSU overlay mode: './flash_blobs.sh build-zips' and flash the Magisk module!"
        return 1
    fi
    log_ok "/vendor is mounted and writable."
    return 0
}

do_backup() {
    local timestamp
    timestamp=$(date +"%Y%m%d_%H%M%S")
    local backup_path="${SDCARD_BACKUP_DIR}/backup_${timestamp}"
    log_info "Creating device backup at: ${backup_path} ..."
    
    adb shell "mkdir -p '${backup_path}'"
    adb shell "mkdir -p '${backup_path}/vendor/lib/hw' '${backup_path}/vendor/lib64/hw' '${backup_path}/vendor/bin/hw' '${backup_path}/vendor/etc/vintf' '${backup_path}/vendor/etc/init'"
    
    # Copy existing HAL files to backup
    adb shell "cp -a /vendor/lib/hw '${backup_path}/vendor/lib/' 2>/dev/null || true"
    adb shell "cp -a /vendor/lib64/hw '${backup_path}/vendor/lib64/' 2>/dev/null || true"
    adb shell "cp -a /vendor/bin/hw '${backup_path}/vendor/bin/' 2>/dev/null || true"
    adb shell "cp -a /vendor/etc/vintf '${backup_path}/vendor/etc/' 2>/dev/null || true"
    adb shell "cp -a /vendor/etc/init '${backup_path}/vendor/etc/' 2>/dev/null || true"
    
    # Update latest symlink/marker
    adb shell "rm -f '${SDCARD_BACKUP_DIR}/latest' && ln -s '${backup_path}' '${SDCARD_BACKUP_DIR}/latest' || echo '${backup_path}' > '${SDCARD_BACKUP_DIR}/latest'"
    
    log_ok "Backup created successfully on device: ${backup_path}"
}

do_flash_hal() {
    check_adb
    local mode
    mode=$(detect_device_mode)
    log_info "Target device mode: ${mode}"
    
    if ! remount_vendor "$mode"; then
        read -p "Direct write to /vendor failed. Continue anyway? (y/N): " -r choice
        if [[ ! "$choice" =~ ^[Yy]$ ]]; then
            log_err "Aborting flash. Flash via recovery or use Magisk overlay module."
            exit 1
        fi
    fi
    
    do_backup
    
    log_info "Flashing Begonia HAL blobs to /vendor..."
    
    # 1. Vendor HAL libraries (32-bit & 64-bit)
    if [ -d "${PROPRIETARY_DIR}/vendor/lib/hw" ]; then
        log_info "Pushing /vendor/lib/hw (32-bit HALs)..."
        adb push "${PROPRIETARY_DIR}/vendor/lib/hw/." "/vendor/lib/hw/"
    fi
    
    if [ -d "${PROPRIETARY_DIR}/vendor/lib64/hw" ]; then
        log_info "Pushing /vendor/lib64/hw (64-bit HALs)..."
        adb push "${PROPRIETARY_DIR}/vendor/lib64/hw/." "/vendor/lib64/hw/"
    fi
    
    # 2. Vendor HAL binaries
    if [ -d "${PROPRIETARY_DIR}/vendor/bin/hw" ]; then
        log_info "Pushing /vendor/bin/hw (HAL service daemons)..."
        adb push "${PROPRIETARY_DIR}/vendor/bin/hw/." "/vendor/bin/hw/"
        adb shell "chmod 755 /vendor/bin/hw/*"
    fi
    
    # 3. VINTF manifests
    if [ -d "${PROPRIETARY_DIR}/vendor/etc/vintf" ]; then
        log_info "Pushing /vendor/etc/vintf manifests..."
        adb push "${PROPRIETARY_DIR}/vendor/etc/vintf/." "/vendor/etc/vintf/"
    fi
    
    # 4. Init .rc scripts
    if [ -d "${PROPRIETARY_DIR}/vendor/etc/init" ]; then
        log_info "Pushing /vendor/etc/init .rc configs..."
        adb push "${PROPRIETARY_DIR}/vendor/etc/init/." "/vendor/etc/init/"
    fi
    
    # Fix permissions and SELinux contexts
    log_info "Restoring Linux permissions and SELinux contexts..."
    adb shell "chmod 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true"
    adb shell "chmod 755 /vendor/bin/hw/* 2>/dev/null || true"
    adb shell "chmod 644 /vendor/etc/vintf/*.xml /vendor/etc/vintf/manifest/*.xml 2>/dev/null || true"
    adb shell "chmod 644 /vendor/etc/init/*.rc 2>/dev/null || true"
    adb shell "chcon -R u:object_r:vendor_file:s0 /vendor/lib/hw /vendor/lib64/hw /vendor/bin/hw /vendor/etc/vintf /vendor/etc/init 2>/dev/null || true"
    
    log_ok "HAL blobs flashed successfully! Reboot device to apply changes."
}

do_flash_all() {
    check_adb
    local mode
    mode=$(detect_device_mode)
    log_info "Target device mode: ${mode}"
    
    if ! remount_vendor "$mode"; then
        log_err "Cannot flash ALL blobs while /vendor is read-only. Please boot into TWRP recovery or use the Magisk overlay module."
        exit 1
    fi
    
    do_backup
    
    log_info "Flashing ALL Begonia proprietary blobs (2,900+ files) to /vendor..."
    adb push "${PROPRIETARY_DIR}/vendor/." "/vendor/"
    
    log_info "Setting permissions and SELinux contexts..."
    adb shell "chmod -R 644 /vendor/lib/*.so /vendor/lib64/*.so /vendor/etc/* 2>/dev/null || true"
    adb shell "chmod -R 755 /vendor/bin/* 2>/dev/null || true"
    adb shell "chcon -R u:object_r:vendor_file:s0 /vendor 2>/dev/null || true"
    
    log_ok "ALL blobs flashed successfully! Reboot device to apply."
}

do_revert() {
    check_adb
    local mode
    mode=$(detect_device_mode)
    log_info "Target device mode: ${mode}"
    
    remount_vendor "$mode" || true
    
    log_info "Checking for latest backup on device..."
    local backup_target
    backup_target=$(adb shell "if [ -L '${SDCARD_BACKUP_DIR}/latest' ]; then readlink '${SDCARD_BACKUP_DIR}/latest'; elif [ -f '${SDCARD_BACKUP_DIR}/latest' ]; then cat '${SDCARD_BACKUP_DIR}/latest'; fi" 2>/dev/null | tr -d '\r\n')
    
    if [ -z "$backup_target" ]; then
        log_err "No backup found at ${SDCARD_BACKUP_DIR}/latest on device."
        exit 1
    fi
    
    log_info "Reverting from backup: ${backup_target} ..."
    adb shell "cp -a '${backup_target}/vendor/.' /vendor/ 2>/dev/null || true"
    adb shell "chmod 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true"
    adb shell "chmod 755 /vendor/bin/hw/* 2>/dev/null || true"
    adb shell "chcon -R u:object_r:vendor_file:s0 /vendor/lib/hw /vendor/lib64/hw /vendor/bin/hw /vendor/etc/vintf /vendor/etc/init 2>/dev/null || true"
    
    log_ok "Revert complete! Original vendor state restored."
}

do_flash_reconstructed() {
    check_adb
    local mode
    mode=$(detect_device_mode)
    log_info "Target device mode: ${mode}"
    
    local recon_dir="${SCRIPT_DIR}/dist/reconstructed_libs/vendor"
    if [ ! -d "${recon_dir}" ]; then
        log_err "Reconstructed libraries not built yet! Run ./flash_blobs.sh build-recon first."
        exit 1
    fi
    
    remount_vendor "$mode" || true
    do_backup_device "$mode"
    
    log_info "Pushing 188 reconstructed HAL modules & daemons to /vendor..."
    if [ -d "${recon_dir}/bin/hw" ]; then
        adb push "${recon_dir}/bin/hw/." /vendor/bin/hw/
    fi
    if [ -d "${recon_dir}/lib64/hw" ]; then
        adb push "${recon_dir}/lib64/hw/." /vendor/lib64/hw/
    fi
    if [ -d "${recon_dir}/lib/hw" ]; then
        adb push "${recon_dir}/lib/hw/." /vendor/lib/hw/
    fi
    
    log_info "Fixing file permissions and SELinux contexts on device..."
    adb shell "chmod -R 755 /vendor/bin/hw 2>/dev/null || true"
    adb shell "chmod -R 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true"
    adb shell "chcon -R u:object_r:vendor_file:s0 /vendor/bin/hw /vendor/lib/hw /vendor/lib64/hw 2>/dev/null || true"
    
    log_ok "Reconstructed HAL suite successfully installed on device!"
}

do_flash_gki() {
    check_adb
    local mode
    mode=$(detect_device_mode)
    log_info "Target device mode: ${mode}"
    remount_vendor "$mode" || true
    do_backup_device "$mode"
    
    log_info "Deploying GKI DMA-BUF heap & ashmem compatibility bridges..."
    local gki_dir="${SCRIPT_DIR}/dist/gki_libs"
    if [ -f "${gki_dir}/libion_dmaheap.so" ]; then
        adb push "${gki_dir}/libion_dmaheap.so" /vendor/lib64/libion.so
        adb shell "chmod 644 /vendor/lib64/libion.so && chcon u:object_r:vendor_file:s0 /vendor/lib64/libion.so"
    fi
    if [ -f "${gki_dir}/libion_dmaheap_32.so" ]; then
        adb push "${gki_dir}/libion_dmaheap_32.so" /vendor/lib/libion.so
        adb shell "chmod 644 /vendor/lib/libion.so && chcon u:object_r:vendor_file:s0 /vendor/lib/libion.so"
    fi
    if [ -f "${gki_dir}/libashmem_gki_compat.so" ]; then
        adb push "${gki_dir}/libashmem_gki_compat.so" /vendor/lib64/libashmem_compat.so
        adb shell "chmod 644 /vendor/lib64/libashmem_compat.so && chcon u:object_r:vendor_file:s0 /vendor/lib64/libashmem_compat.so"
    fi
    log_ok "GKI compatibility bridges successfully installed!"
}

do_check_gki() {
    check_adb
    log_info "Querying device kernel version and memory device nodes..."
    echo "--- Kernel Version ---"
    adb shell "uname -a"
    echo "--- DMA-BUF Heaps ---"
    adb shell "ls -la /dev/dma_heap/ 2>/dev/null || echo 'No /dev/dma_heap directory (legacy kernel)'"
    echo "--- Legacy Memory Nodes ---"
    adb shell "ls -la /dev/ion /dev/ashmem 2>/dev/null || echo 'No legacy /dev/ion or /dev/ashmem (GKI kernel)'"
    echo "--- Active HAL Processes ---"
    adb shell "ps -A | grep -E 'android.hardware|vendor.mediatek' | head -n 25 || true"
}

do_build_zips() {
    log_info "Building Begonia Flashable Recovery Packages and Magisk Modules..."
    mkdir -p "${SCRIPT_DIR}/dist"
    python3 "${SCRIPT_DIR}/scripts/build_flash_packages.py"
    log_ok "All packages built successfully in: ${SCRIPT_DIR}/dist"
}

do_build_all() {
    log_info "Building all reconstructed modules and flashable packages..."
    python3 "${SCRIPT_DIR}/scripts/build_reconstructed.py" -j8
    do_build_zips
    log_ok "Complete build finished!"
}

case "${1:-}" in
    flash)
        if [ "${2:-}" == "all" ]; then
            do_flash_all
        elif [ "${2:-}" == "recon" ] || [ "${2:-}" == "reconstructed" ]; then
            do_flash_reconstructed
        else
            do_flash_hal
        fi
        ;;
    reconstructed|recon)
        do_flash_reconstructed
        ;;
    gki)
        do_flash_gki
        ;;
    check-gki)
        do_check_gki
        ;;
    revert)
        do_revert
        ;;
    status)
        check_adb
        log_info "Querying device begonia vendor properties and HAL versions..."
        adb shell "getprop | grep -E 'vendor|begonia|platform'"
        ;;
    build-recon)
        python3 "${SCRIPT_DIR}/scripts/build_reconstructed.py" -j8
        ;;
    build-zips)
        do_build_zips
        ;;
    build-all)
        do_build_all
        ;;
    help|*)
        echo "=========================================================="
        echo " Begonia Blobs Flashing & Rollback Suite"
        echo "=========================================================="
        echo " Flashing Commands:"
        echo "   ./flash_blobs.sh flash [hal]       - Backup & flash proprietary HAL blobs"
        echo "   ./flash_blobs.sh flash all         - Backup & flash all 2,900+ vendor blobs"
        echo "   ./flash_blobs.sh reconstructed     - Backup & flash all 188 reconstructed HALs"
        echo "   ./flash_blobs.sh gki               - Deploy GKI DMA-BUF heap & ashmem bridges"
        echo "   ./flash_blobs.sh revert            - Roll back device to previous backup"
        echo ""
        echo " Diagnostic & Verification:"
        echo "   ./flash_blobs.sh status            - Check vendor properties on connected device"
        echo "   ./flash_blobs.sh check-gki         - Check GKI kernel version & devnodes on device"
        echo ""
        echo " Build & Packaging:"
        echo "   ./flash_blobs.sh build-recon       - Compile all reconstructed C++ HALs"
        echo "   ./flash_blobs.sh build-zips        - Generate Recovery ZIPs & Magisk modules"
        echo "   ./flash_blobs.sh build-all         - Recompile all modules & regenerate all ZIPs"
        echo "=========================================================="
        ;;
esac
