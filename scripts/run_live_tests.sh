#!/bin/bash
#
# Begonia (MT6785) Open-Source HAL Live Test Runner
#

DEVICE_SERIAL="hitsfmamp7pb8xlz"
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BIN="$DIR/dist/open_source_hal_tester"

if [ ! -f "$BIN" ]; then
    echo "[!] Test binary $BIN not found! Compile it first."
    exit 1
fi

echo "[*] Waiting for Begonia ($DEVICE_SERIAL) on ADB..."
adb -s "$DEVICE_SERIAL" wait-for-device

echo "[*] Device detected! Pushing test harness..."
adb -s "$DEVICE_SERIAL" push "$BIN" /data/local/tmp/open_source_hal_tester
adb -s "$DEVICE_SERIAL" shell "chmod 755 /data/local/tmp/open_source_hal_tester"

echo "[*] Executing Open-Source HAL Live Hardware Verification Suite as root..."
echo "--------------------------------------------------------"
adb -s "$DEVICE_SERIAL" shell "su -c '/data/local/tmp/open_source_hal_tester'"
RC=$?
echo "--------------------------------------------------------"
if [ $RC -eq 0 ]; then
    echo "[SUCCESS] All Open-Source HAL hardware tests passed!"
else
    echo "[!] One or more tests failed (code $RC)."
fi
exit $RC
