#!/vendor/bin/sh
if ! applypatch --check EMMC:/dev/block/platform/bootdevice/by-name/recovery$(getprop ro.boot.slot_suffix):67108864:c0d4e02995947b4ac7c4529c373ea3b5afd63522; then
  applypatch  \
          --patch /vendor/recovery-from-boot.p \
          --source EMMC:/dev/block/platform/bootdevice/by-name/boot$(getprop ro.boot.slot_suffix):67108864:751f03e5611c3bc067d50bd693d53fff852ed4d5 \
          --target EMMC:/dev/block/platform/bootdevice/by-name/recovery$(getprop ro.boot.slot_suffix):67108864:c0d4e02995947b4ac7c4529c373ea3b5afd63522 && \
      log -t recovery "Installing new recovery image: succeeded" && \
        echo "Installing new recovery image: succeeded" > /cache/recovery/last_install_recovery_status || \
      (log -t recovery "Installing new recovery image: failed" && \
        echo "Installing new recovery image: failed" > /cache/recovery/last_install_recovery_status)
else
  log -t recovery "Recovery image already installed" && \
  echo "Recovery image already installed" > /cache/recovery/last_install_recovery_status
fi
