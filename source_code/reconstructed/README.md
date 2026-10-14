# Begonia (MT6785) Reconstructed Hardware Abstraction Layer (HAL) Suite

This directory contains the reverse-engineered C++ source code, headers, Android.bp build specifications, and standalone Makefiles for all 188 proprietary hardware modules and services extracted from the Redmi Note 8 Pro (Begonia / MT6785).

---

## 📂 Directory Layout

```text
source_code/reconstructed/
├── bin/hw/              # 56 Executable service daemons (64-bit ARM64)
│   ├── android_hardware_audio_service_mediatek/
│   ├── android_hardware_bluetooth_1_0_service_mediatek/
│   ├── android_hardware_camera_provider_2_4_service/
│   ├── camerahalserver/
│   ├── hostapd/
│   ├── mtkfusionrild/
│   ├── wpa_supplicant/
│   ├── ... (56 total services)
│   ├── INDEX.md
│   └── modules_index.json
│
├── lib64/hw/            # 71 Shared hardware libraries (64-bit ARM64)
│   ├── android_hardware_audio_6_0_impl_mediatek/
│   ├── android_hardware_camera_provider_2_4_impl_mediatek/
│   ├── audio_primary_mt6785/
│   ├── hwcomposer_mt6785/
│   ├── sensors_mt6785/
│   ├── gatekeeper_beanpod/
│   ├── kmsetkey_beanpod/
│   ├── vendor_mediatek_hardware_pq_2_6_impl/
│   ├── ... (71 total libraries)
│   ├── INDEX.md
│   └── modules_index.json
│
└── lib/hw/              # 61 Shared hardware libraries (32-bit ARMv7)
    ├── audio_primary_mt6785/
    ├── sound_trigger_primary_mt6785/
    ├── ... (61 total 32-bit libraries)
    ├── INDEX.md
    └── modules_index.json
```

---

## ⚙️ Architecture & Features

Each reverse-engineered module contains:
1. **`<module_name>.h`**: Reconstructed ABI header containing:
   - Full demangled C++ signatures
   - Exported C API boundaries
   - `HMI` (`struct hw_module_t`) hardware module definitions
   - Exported global data objects & vtables
2. **`<module_name>.cpp`**: Reconstructed C++ implementation containing:
   - **Device Node Handlers**: Automatic access routines for hardware character devices (`/dev/mali`, `/dev/CAM_CAL_DRV`, `/dev/audio_ipi`, `/dev/ccci_aud`, `/dev/m_*_misc`).
   - **Daemon Main Harness**: For executables, provides signal trapping (`SIGTERM`, `SIGINT`), Binder threadpool initialization, and logging.
3. **`Android.bp`**: Native Android build configuration compatible with AOSP / LineageOS source trees.
4. **`Makefile`**: Standalone build configuration using the portable Android NDK Clang compiler.

---

## 🛠️ Building

To build all 188 modules in parallel using the portable NDK toolchain:
```bash
./scripts/build_reconstructed.py -j8
```
Compiled binaries and shared objects are output directly to:
* `dist/reconstructed_libs/vendor/bin/hw/`
* `dist/reconstructed_libs/vendor/lib64/hw/`
* `dist/reconstructed_libs/vendor/lib/hw/`

To build an individual module:
```bash
./scripts/compile_reconstructed.py source_code/reconstructed/lib64/hw/audio_primary_mt6785
```

---

## 📲 Flashing to Device

Flash all reconstructed HALs directly to a connected device:
```bash
./flash_blobs.sh reconstructed
```
Or flash via Recovery (TWRP/PBRP) or Magisk using packages in `dist/`:
* `dist/Begonia-Reconstructed-HALs-Flashable.zip` (Recovery installer with auto-backup)
* `dist/Begonia-Reconstructed-HALs-Magisk-Module.zip` (Systemless Magisk overlay)
* `dist/Begonia-HAL-Blobs-Revert.zip` (One-click recovery rollback)
