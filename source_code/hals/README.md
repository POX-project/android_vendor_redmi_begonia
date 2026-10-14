# Production Open-Source HALs for Redmi Note 8 Pro (Begonia / MT6785)

This directory contains **production-ready, compilable C++ Hardware Abstraction Layer (HAL) implementations** developed and maintained for the **POX Project** and custom AOSP / LineageOS ROMs.

These HALs replace closed-source proprietary OEM blobs with clean, stable AIDL / HIDL services directly communicating with Linux sysfs and kernel character devices.

---

## 🚀 HAL Inventory

| Module | Interface | Description | Key Target Nodes / Devices |
|---|---|---|---|
| **`fingerprint/`** | `IBiometricsFingerprint@2.1` | **Unified Dual-Sensor Biometrics HAL**: Dynamically detects FPC1020 vs Goodix GF3208 at boot, fixes cancellation race conditions, and interfaces with TEE. | `/dev/teei_fp`, `/dev/goodix_fp`, `/sys/devices/platform/1100a000.spi0/` |
| **`light/`** | `ILights` (AIDL) | **Modern AIDL Lights HAL**: Dual Tianma/Huaxing panel LCD backlight scaling (2047/4095 levels), RGB battery/notification LED pulsing & blink patterns. | `/sys/class/leds/lcd-backlight/`, `/sys/class/leds/{red,green,blue,white}/` |
| **`consumerir/`** | `IConsumerIr@1.0` | **Consumer IR Blaster HAL**: Directly formats IR pulse timings and drives carrier frequencies (30 kHz – 60 kHz). | `/dev/irtx` |
| **`thermal/`** | `IThermal` (AIDL) | **AIDL Thermal Mitigation HAL**: Multi-zone thermal monitoring, virtual temperature estimation, and throttling mitigation. | `/sys/class/thermal/thermal_zone*`, `/proc/stat` |
| **`power-mediatek/`** | `IPower` (AIDL) | **AIDL Power & Performance HAL**: Schedutil rate limits, interactive scaling boosts (`POWER_HINT_INTERACTION`, `POWER_HINT_LAUNCH`), MTK FPSGO boost, and DT2W. | `/proc/perfmgr/boost_ctrl/`, `/sys/touchpanel/double_tap` |
| **`vibrator/`** | `IVibrator` (AIDL) | **AIDL Haptic Feedback HAL**: Rich haptic waveforms and amplitude control. | `/sys/class/leds/vibrator/` |
| **`health/`** | `IHealth` (AIDL) | **AIDL Battery & Power Supply HAL**: Battery capacity, health status, charging currents, and temperature. | `/sys/class/power_supply/battery/` |
| **`memtrack/`** | `IMemtrack` (AIDL) | **AIDL Memory Accounting HAL**: Mali GPU and system GL memory accounting via `/proc/<pid>/smaps`. | `/sys/class/kgsl/`, `/proc/<pid>/smaps` |
| **`bluetooth/`** | `IBluetoothAudioProviderFactory` (AIDL) | **Bluetooth Audio HAL**: High-resolution codec offload and A2DP routing. | MTK BT stack |
| **`gadget/`** & **`usb/`** | `IUsb` / `IUsbGadget` (AIDL) | **USB & USB-C Gadget Controller**: Dynamic USB role switching (MTP, ADB, PTP, MIDI, Accessory). | `/config/usb_gadget/` |
| **`mtkpower/`** | `IMtkPerf` / HIDL | **MediaTek Proprietary Performance Client**: Interface wrapper for MTK touch boost and EAS cluster scheduler hints. | `/dev/stune/` |

---

## 🛠️ Building with AOSP / LineageOS

Drop this directory into your device tree or hardware directory:

```bash
# In your device.mk or BoardConfig.mk:
PRODUCT_PACKAGES += \
    android.hardware.biometrics.fingerprint@2.1-service.begonia \
    android.hardware.lights-service.begonia \
    android.hardware.ir@1.0-service.begonia \
    android.hardware.thermal-service.mediatek \
    android.hardware.power-service.mediatek \
    android.hardware.vibrator-service.mediatek \
    android.hardware.health-service.mediatek \
    android.hardware.memtrack-service.mediatek
```
