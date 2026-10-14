# Redmi Note 8 Pro (Begonia / MT6785) Vendor Tree - POX Project

Complete vendor tree and hardware abstraction layer (HAL) suite for Xiaomi Redmi Note 8 Pro (begonia / MT6785), structured in canonical LineageOS / AOSP format and maintained for the **POX Project**.

---

## 📁 Repository Structure

This repository provides full proprietary vendor binaries, build specifications, decompiled Java frameworks, and native C/C++ source code:

* **`proprietary/`**: Complete 100% audited proprietary vendor blobs (1,864 files) matching `begonia-vendor.mk` and `Android.bp` across `/vendor`, `/system_ext`, and `/system`.
* **`Android.bp`**: Soong blueprint declaring prebuilt shared libraries, executables, APKs, and framework JARs.
* **`Android.mk`**: Make-based build definitions for prebuilt Java and framework modules.
* **`BoardConfigVendor.mk`**: Board configuration defining target architecture (ARM64 / ARMv7-A) and vendor partition flags.
* **`begonia-vendor.mk`**: Canonical product copy file list (`PRODUCT_COPY_FILES`) installing vendor firmware, configs, and libraries into the target system image.
* **`source_code/reconstructed/`**: Clean C/C++ native source code reverse-engineered from stripped ARM/ARM64 vendor binaries, complete with demangled signatures and standard AOSP build files.
* **`source_code/hals/`**: Handcrafted, production-ready HAL implementations (lights, thermal, power, vibrator, consumer IR).
* **`source_code/shims/`**: Bionic and framework compatibility shims (`libshim_gui`, `libshim_audio`, `libshim_sensors`, etc.).
* **`scripts/`**: Automated vendor tree restoration, AnyKernel3 packaging, and binary fixup utilities.
* **`dist/`**: Pre-built AnyKernel3 flashable zips and recovery installers.

---

## 🛠️ Handcrafted Core HAL Implementations (`source_code/hals/`)

* **Lights HAL (`lights_mt6785`)**: Backlight, battery LED, notification LED, sysfs brightness control (`/sys/class/leds/lcd-backlight/brightness`), and RGB channels.
* **Sensors HAL (`sensors_mt6785`)**: Sensor hub driver for LSM6DSO (Accelerometer/Gyroscope), AKM09918 (Magnetometer), and STK3X3X (Ambient Light / Proximity), complete event polling loop, and batching.
* **Power HAL (`power_mt6785`)**: Schedutil rate limits, interactive scaling hints (`POWER_HINT_INTERACTION`, `POWER_HINT_LAUNCH`), MTK FPSGO boost, and double-tap-to-wake (`POWER_FEATURE_DOUBLE_TAP_TO_WAKE`).
* **Memtrack HAL (`memtrack_mt6785`)**: Graphics and GL memory accounting via `/proc/<pid>/smaps` scanning for Mali GPU and memory heaps.
* **Thermal HAL (`thermal_mt6785`)**: Linux kernel thermal zone monitoring (`/sys/class/thermal/thermal_zone*`) and per-CPU load calculations (`/proc/stat`).
* **Vibrator HAL (`vibrator_default`)**: Haptic driver interfacing with `/sys/class/leds/vibrator/`.
* **Consumer IR HAL (`consumerir_mt6785`)**: Infrared transmitter driver interfacing with `/dev/irtx` across standard carrier frequencies (30 kHz to 56 kHz).

---

## 📱 Decompiled Proprietary Apps & Framework JARs (`source_code/reconstructed/`)

### 1. Proprietary Applications (`source_code/reconstructed/apps/`)
All 26 precompiled vendor APKs and resource overlays decompiled into Java sources (via JADX), Smali assembly (via Apktool), decoded resources, and standard AOSP `Android.bp` build blueprints:
* **`SoterService`**: WeChat & Alipay TEE biometric authentication service.
* **`EmCamera`**: Engineer Mode Camera diagnostic utility.
* **`EngineerMode`**: Complete MediaTek engineering and hardware diagnostic application.
* **`ImsService`**: VoLTE / VoWiFi IP Multimedia Subsystem daemon.
* **`LocationEM2` & `YGPS`**: GPS, GLONASS, Galileo, and BeiDou satellite diagnostics and testing suites.
* **`HotwordEnrollmentOKGoogleCORTEXM4` & `HotwordEnrollmentXGoogleCORTEXM4`**: Low-power DSP hotword enrollment services.
* **18 Runtime Resource Overlays (RROs)**: `FrameworkResOverlay`, `WifiResOverlay`, `TetheringResOverlay`, `SettingsProviderResOverlay`, `MtkSettingsResOverlay`, `MtkTelephonyServiceResOverlay`, etc.

### 2. MediaTek Framework JARs (`source_code/reconstructed/framework/`)
All 10 proprietary MediaTek framework JARs decompiled to clean Java sources with standard AOSP `java_library` `Android.bp` blueprints:
* `mediatek-framework`: Core MediaTek OS extensions and hardware service managers.
* `mediatek-telephony-base` & `mediatek-telephony-common`: Dual-SIM and baseband telephony services.
* `mediatek-ims-base`, `mediatek-ims-common`, `mediatek-ims-legacy`, `mediatek-ims-extension-plugin`: MediaTek IMS stack.
* `mediatek-telecom-common`, `mediatek-common`, `com.android.hotwordenrollment.common.util`.

---

## 📦 AnyKernel3 & Flashable Packages

Pre-built flashable packages are located in `dist/`:

* **`dist/AnyKernel3-begonia-POX-Vendor-Fixes.zip`** (24 MB): Begonia AnyKernel3 package with kernel payload, boot image unpack/repack tools, and `/vendor` HAL fixup deployment.
* **`dist/Begonia-Reconstructed-HALs-Flashable.zip`** (255 MB): TWRP recovery installer for all reconstructed native HALs, daemons, and libraries.
* **`dist/Begonia-Reconstructed-HALs-Magisk-Module.zip`** (255 MB): Systemless Magisk overlay for testing reconstructed HALs on read-only system partitions.
* **`dist/Begonia-HAL-Blobs-Flashable.zip`** (28 MB): TWRP recovery installer for stock proprietary HAL blobs.
* **`dist/Begonia-HAL-Blobs-Revert.zip`**: One-click recovery rollback.

### Building AnyKernel3 Zip:
```bash
python3 scripts/build_anykernel3_zip.py
```

### Restoring to Vendor Tree:
```bash
python3 scripts/restore_to_vendor_tree.py
```

---

## 🧪 ABI Verification & Testing Suite

Verify ELF binaries, 64-bit AArch64 and 32-bit ARM architectures, and dynamic linking against Android Bionic:

```bash
# Verify Bionic ABI compatibility
python3 tests/verify_arm64_abi.py

# Run host functional tests on handcrafted HALs
./dist/hal_test_runner_host --dir /tmp/test_hals_host
```

---

## 📄 License & Credits
* Base vendor tree specifications inspired by [LineageOS `begonia-MT6785/android_vendor_redmi_begonia`](https://github.com/begonia-MT6785/android_vendor_redmi_begonia).
* Handcrafted HALs and reverse-engineered source code maintained by **POX Project**.
