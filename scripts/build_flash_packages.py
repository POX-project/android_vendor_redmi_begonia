#!/usr/bin/env python3
"""
Begonia Flashable ZIP & Magisk Module Builder
Packages all begonia HAL blobs into:
  1. Begonia-HAL-Blobs-Flashable.zip (TWRP/PBRP recovery installer with auto-backup)
  2. Begonia-HAL-Blobs-Revert.zip (TWRP/PBRP recovery reverter)
  3. Begonia-HAL-Blobs-Magisk-Module.zip (Systemless Magisk/KSU/APatch module)
"""

import os
import sys
import zipfile
import shutil

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
PROPRIETARY_DIR = os.path.join(ROOT_DIR, "proprietary", "vendor")
DIST_DIR = os.path.join(ROOT_DIR, "dist")

os.makedirs(DIST_DIR, exist_ok=True)

# ----------------------------------------------------------------------
# 1. Flashable Recovery Installer
# ----------------------------------------------------------------------
UPDATE_BINARY_INSTALLER = """#!/sbin/sh
# Begonia HAL Blobs Recovery Installer with Automatic Backup
OUTFD="$2"
ZIPFILE="$3"

ui_print() {
  echo "ui_print $1" > /proc/self/fd/$OUTFD
  echo "ui_print" > /proc/self/fd/$OUTFD
}

ui_print "=========================================="
ui_print " Begonia HAL Blobs Recovery Installer"
ui_print " Target: Redmi Note 8 Pro (begonia / MT6785)"
ui_print "=========================================="

ui_print "Mounting /vendor partition..."
mkdir -p /vendor
mount -o rw /vendor 2>/dev/null || mount -o remount,rw /vendor 2>/dev/null || mount /dev/block/mapper/vendor /vendor 2>/dev/null || true

if ! mount | grep -q " /vendor "; then
  ui_print "[ERROR] Failed to mount /vendor. Make sure dynamic partitions are mounted."
  exit 1
fi

BACKUP_DIR="/sdcard/begonia_hal_backup"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
CUR_BACKUP="${BACKUP_DIR}/backup_${TIMESTAMP}"

ui_print "Backing up current HAL blobs to ${CUR_BACKUP}..."
mkdir -p "${CUR_BACKUP}/lib/hw" "${CUR_BACKUP}/lib64/hw" "${CUR_BACKUP}/bin/hw" "${CUR_BACKUP}/etc/vintf" "${CUR_BACKUP}/etc/init" 2>/dev/null || true

cp -a /vendor/lib/hw/* "${CUR_BACKUP}/lib/hw/" 2>/dev/null || true
cp -a /vendor/lib64/hw/* "${CUR_BACKUP}/lib64/hw/" 2>/dev/null || true
cp -a /vendor/bin/hw/* "${CUR_BACKUP}/bin/hw/" 2>/dev/null || true
cp -a /vendor/etc/vintf/* "${CUR_BACKUP}/etc/vintf/" 2>/dev/null || true
cp -a /vendor/etc/init/* "${CUR_BACKUP}/etc/init/" 2>/dev/null || true

# Save latest pointer
rm -f "${BACKUP_DIR}/latest"
ln -s "${CUR_BACKUP}" "${BACKUP_DIR}/latest" 2>/dev/null || echo "${CUR_BACKUP}" > "${BACKUP_DIR}/latest"

ui_print "Extracting new HAL blobs into /vendor..."
mkdir -p /tmp/begonia_hal
unzip -o "$ZIPFILE" "vendor/*" -d /tmp/begonia_hal/ || exit 1

cp -a /tmp/begonia_hal/vendor/. /vendor/

ui_print "Setting correct permissions and SELinux contexts..."
chmod 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true
chmod 755 /vendor/bin/hw/* 2>/dev/null || true
chmod 644 /vendor/etc/vintf/*.xml /vendor/etc/vintf/manifest/*.xml 2>/dev/null || true
chmod 644 /vendor/etc/init/*.rc 2>/dev/null || true

chcon -R u:object_r:vendor_file:s0 /vendor/lib/hw /vendor/lib64/hw /vendor/bin/hw /vendor/etc/vintf /vendor/etc/init 2>/dev/null || true

rm -rf /tmp/begonia_hal
ui_print "[SUCCESS] Begonia HAL blobs installed successfully!"
ui_print "Reboot system to apply."
exit 0
"""

UPDATER_SCRIPT_DUMMY = "# Dummy script for update-binary compatibility\n"

# ----------------------------------------------------------------------
# 2. Flashable Recovery Reverter
# ----------------------------------------------------------------------
UPDATE_BINARY_REVERTER = """#!/sbin/sh
# Begonia HAL Blobs Revert Script
OUTFD="$2"

ui_print() {
  echo "ui_print $1" > /proc/self/fd/$OUTFD
  echo "ui_print" > /proc/self/fd/$OUTFD
}

ui_print "=========================================="
ui_print " Begonia HAL Blobs Rollback / Reverter"
ui_print " Target: Redmi Note 8 Pro (begonia)"
ui_print "=========================================="

ui_print "Mounting /vendor..."
mkdir -p /vendor
mount -o rw /vendor 2>/dev/null || mount -o remount,rw /vendor 2>/dev/null || true

BACKUP_DIR="/sdcard/begonia_hal_backup"
if [ -L "${BACKUP_DIR}/latest" ]; then
  SRC=$(readlink "${BACKUP_DIR}/latest")
elif [ -f "${BACKUP_DIR}/latest" ]; then
  SRC=$(cat "${BACKUP_DIR}/latest")
else
  ui_print "[ERROR] No backup found at ${BACKUP_DIR}/latest!"
  exit 1
fi

ui_print "Restoring from ${SRC}..."
cp -a "${SRC}/." /vendor/

ui_print "Fixing permissions..."
chmod 644 /vendor/lib/hw/*.so /vendor/lib64/hw/*.so 2>/dev/null || true
chmod 755 /vendor/bin/hw/* 2>/dev/null || true
chcon -R u:object_r:vendor_file:s0 /vendor/lib/hw /vendor/lib64/hw /vendor/bin/hw /vendor/etc/vintf /vendor/etc/init 2>/dev/null || true

ui_print "[SUCCESS] Original HAL blobs restored successfully!"
exit 0
"""

# ----------------------------------------------------------------------
# 3. Magisk / KernelSU / APatch Module Metadata
# ----------------------------------------------------------------------
MODULE_PROP = """id=begonia_hal_blobs
name=Begonia Proprietary HAL Blobs Overlay
version=v1.0.0
versionCode=100
author=txorav & Antigravity
description=Systemless overlay of proprietary Begonia (MT6785) HAL blobs, services, configs, and libraries for Android 11-17.
"""

SERVICE_SH = """#!/system/bin/sh
# Begonia HAL Service trigger
MODDIR=${0%/*}
"""


def build_installer_zip():
    zip_path = os.path.join(DIST_DIR, "Begonia-HAL-Blobs-Flashable.zip")
    print(f"Creating {zip_path} ...")
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as zf:
        # Update binary & script
        info_bin = zipfile.ZipInfo("META-INF/com/google/android/update-binary")
        info_bin.external_attr = 0o755 << 16
        zf.writestr(info_bin, UPDATE_BINARY_INSTALLER)
        zf.writestr("META-INF/com/google/android/updater-script", UPDATER_SCRIPT_DUMMY)

        # Include HAL files: lib/hw, lib64/hw, bin/hw, etc/vintf, etc/init
        hal_dirs = ["lib/hw", "lib64/hw", "bin/hw", "etc/vintf", "etc/init"]
        count = 0
        for hdir in hal_dirs:
            full_hdir = os.path.join(PROPRIETARY_DIR, hdir)
            if not os.path.exists(full_hdir):
                continue
            for root, dirs, files in os.walk(full_hdir):
                for f in files:
                    fp = os.path.join(root, f)
                    rel = os.path.relpath(fp, PROPRIETARY_DIR)
                    arcname = f"vendor/{rel}"
                    is_bin = "/bin/" in fp
                    zi = zipfile.ZipInfo(arcname)
                    zi.create_system = 3  # Unix
                    
                    if os.path.islink(fp):
                        link_target = os.readlink(fp)
                        zi.external_attr = 0o120777 << 16  # S_IFLNK | 0777
                        zf.writestr(zi, link_target)
                    else:
                        zi.external_attr = (0o755 if is_bin else 0o644) << 16
                        with open(fp, "rb") as fh:
                            zf.writestr(zi, fh.read())
                    count += 1
        print(f"  Added {count} HAL files to installer ZIP.")


def build_reverter_zip():
    zip_path = os.path.join(DIST_DIR, "Begonia-HAL-Blobs-Revert.zip")
    print(f"Creating {zip_path} ...")
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as zf:
        info_bin = zipfile.ZipInfo("META-INF/com/google/android/update-binary")
        info_bin.create_system = 3
        info_bin.external_attr = 0o755 << 16
        zf.writestr(info_bin, UPDATE_BINARY_REVERTER)
        zf.writestr("META-INF/com/google/android/updater-script", UPDATER_SCRIPT_DUMMY)


def build_magisk_module():
    zip_path = os.path.join(DIST_DIR, "Begonia-HAL-Blobs-Magisk-Module.zip")
    print(f"Creating {zip_path} ...")
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as zf:
        zf.writestr("module.prop", MODULE_PROP)
        
        info_srv = zipfile.ZipInfo("service.sh")
        info_srv.create_system = 3
        info_srv.external_attr = 0o755 << 16
        zf.writestr(info_srv, SERVICE_SH)

        hal_dirs = ["lib/hw", "lib64/hw", "bin/hw", "etc/vintf", "etc/init"]
        count = 0
        for hdir in hal_dirs:
            full_hdir = os.path.join(PROPRIETARY_DIR, hdir)
            if not os.path.exists(full_hdir):
                continue
            for root, dirs, files in os.walk(full_hdir):
                for f in files:
                    fp = os.path.join(root, f)
                    rel = os.path.relpath(fp, PROPRIETARY_DIR)
                    arcname = f"system/vendor/{rel}"
                    is_bin = "/bin/" in fp
                    zi = zipfile.ZipInfo(arcname)
                    zi.create_system = 3  # Unix
                    
                    if os.path.islink(fp):
                        link_target = os.readlink(fp)
                        zi.external_attr = 0o120777 << 16  # S_IFLNK | 0777
                        zf.writestr(zi, link_target)
                    else:
                        zi.external_attr = (0o755 if is_bin else 0o644) << 16
                        with open(fp, "rb") as fh:
                            zf.writestr(zi, fh.read())
                    count += 1
        print(f"  Added {count} HAL files to Magisk overlay module.")





# ----------------------------------------------------------------------
# 5. Reconstructed HALs Recovery Installer
# ----------------------------------------------------------------------
def build_reconstructed_flashable_zip():
    reconstructed_dir = os.path.join(DIST_DIR, "reconstructed_libs")
    if not os.path.exists(reconstructed_dir):
        print(f"[-] Reconstructed directory {reconstructed_dir} does not exist, skipping.")
        return

    out_zip = os.path.join(DIST_DIR, "Begonia-Reconstructed-HALs-Flashable.zip")
    print(f"Creating {out_zip}...")

    installer_script = """#!/sbin/sh
OUTFD="$2"
ZIPFILE="$3"
ui_print() { echo "ui_print $1" > /proc/self/fd/$OUTFD; echo "ui_print" > /proc/self/fd/$OUTFD; }

ui_print "=========================================="
ui_print " Begonia Reconstructed HALs Installer"
ui_print " Target: Redmi Note 8 Pro (begonia / MT6785)"
ui_print "=========================================="

ui_print "Mounting partitions..."
mkdir -p /vendor /system_ext /system
mount -o rw /vendor 2>/dev/null || mount -o remount,rw /vendor 2>/dev/null || true
mount -o rw /system_ext 2>/dev/null || mount -o remount,rw /system_ext 2>/dev/null || true
mount -o rw /system 2>/dev/null || mount -o remount,rw /system 2>/dev/null || true

BACKUP_DIR="/sdcard/begonia_reconstructed_backup"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
CUR_BACKUP="${BACKUP_DIR}/backup_${TIMESTAMP}"
mkdir -p "${CUR_BACKUP}" 2>/dev/null || true

ui_print "Backing up current vendor HALs to ${CUR_BACKUP}..."
cp -a /vendor/bin "${CUR_BACKUP}/" 2>/dev/null || true
cp -a /vendor/lib64 "${CUR_BACKUP}/" 2>/dev/null || true
cp -a /vendor/lib "${CUR_BACKUP}/" 2>/dev/null || true

ui_print "Installing reconstructed modules & service daemons..."
mkdir -p /tmp/recon
unzip -o "$ZIPFILE" "vendor/*" "system_ext/*" "system/*" -d /tmp/recon/
if [ -d "/tmp/recon/vendor" ]; then cp -a /tmp/recon/vendor/. /vendor/; fi
if [ -d "/tmp/recon/system_ext" ]; then cp -a /tmp/recon/system_ext/. /system_ext/; fi
if [ -d "/tmp/recon/system" ]; then cp -a /tmp/recon/system/. /system/; fi

ui_print "Setting permissions & SELinux contexts..."
chmod -R 755 /vendor/bin /system_ext/bin /system/bin 2>/dev/null || true
chmod -R 644 /vendor/lib* /system_ext/lib* /system/lib* 2>/dev/null || true
chcon -R u:object_r:vendor_file:s0 /vendor/bin /vendor/lib /vendor/lib64 2>/dev/null || true
chcon -R u:object_r:system_file:s0 /system_ext /system 2>/dev/null || true

rm -rf /tmp/recon
ui_print "[SUCCESS] Reconstructed modules suite installed successfully!"
exit 0
"""

    with zipfile.ZipFile(out_zip, "w", zipfile.ZIP_DEFLATED) as zf:
        info_bin = zipfile.ZipInfo("META-INF/com/google/android/update-binary")
        info_bin.create_system = 3
        info_bin.external_attr = 0o755 << 16
        zf.writestr(info_bin, installer_script)
        zf.writestr("META-INF/com/google/android/updater-script", UPDATER_SCRIPT_DUMMY)

        count = 0
        for root, dirs, files in os.walk(reconstructed_dir):
            for file in files:
                full_path = os.path.join(root, file)
                rel_path = os.path.relpath(full_path, reconstructed_dir)
                is_bin = ("bin" in rel_path)
                
                zi = zipfile.ZipInfo(rel_path)
                zi.create_system = 3
                zi.external_attr = (0o755 if is_bin else 0o644) << 16
                
                with open(full_path, "rb") as fh:
                    zf.writestr(zi, fh.read())
                count += 1

        print(f"  Packaged {count} reconstructed files into {os.path.basename(out_zip)}")


# ----------------------------------------------------------------------
# 6. Reconstructed HALs Magisk Module
# ----------------------------------------------------------------------
def build_reconstructed_magisk_module():
    reconstructed_dir = os.path.join(DIST_DIR, "reconstructed_libs")
    if not os.path.exists(reconstructed_dir):
        return

    out_zip = os.path.join(DIST_DIR, "Begonia-Reconstructed-HALs-Magisk-Module.zip")
    print(f"Creating {out_zip}...")

    module_prop = """id=begonia_reconstructed_hals
name=Begonia Reconstructed HAL Suite
version=v1.0
versionCode=100
author=LineageOS / Community RE
description=Systemless overlay providing 1,332 reverse-engineered HAL modules and daemons for Redmi Note 8 Pro (MT6785).
"""

    with zipfile.ZipFile(out_zip, "w", zipfile.ZIP_DEFLATED) as zf:
        zf.writestr("module.prop", module_prop)
        zf.writestr("auto_mount", "")

        info_post = zipfile.ZipInfo("post-fs-data.sh")
        info_post.create_system = 3
        info_post.external_attr = 0o755 << 16
        zf.writestr(info_post, "#!/system/bin/sh\n")

        info_srv = zipfile.ZipInfo("service.sh")
        info_srv.create_system = 3
        info_srv.external_attr = 0o755 << 16
        zf.writestr(info_srv, "#!/system/bin/sh\n")

        count = 0
        for root, dirs, files in os.walk(reconstructed_dir):
            for file in files:
                full_path = os.path.join(root, file)
                rel_path = os.path.relpath(full_path, reconstructed_dir)
                magisk_path = os.path.join("system", rel_path)
                is_bin = ("bin" in rel_path)

                zi = zipfile.ZipInfo(magisk_path)
                zi.create_system = 3
                zi.external_attr = (0o755 if is_bin else 0o644) << 16

                with open(full_path, "rb") as fh:
                    zf.writestr(zi, fh.read())
                count += 1

        print(f"  Packaged {count} files into systemless Magisk module: {os.path.basename(out_zip)}")


if __name__ == "__main__":
    build_installer_zip()
    build_reverter_zip()
    build_magisk_module()
    build_reconstructed_flashable_zip()
    build_reconstructed_magisk_module()
    print("Done! All flashable packages ready in dist/.")
