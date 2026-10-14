# Reconstructed Begonia Hardware Modules & Services

Total Modules Reverse-Engineered: **56**

| Module Name | Original File | Arch | Type | Kernel Devnodes | Exports |
|---|---|---|---|---|---|
| [`android_hardware_audio_service_mediatek`](/android_hardware_audio_service_mediatek/) | `android.hardware.audio.service.mediatek` | 32-bit | Service Daemon | `/dev/vndbinder` | 3 |
| [`android_hardware_bluetooth_1_0_service_mediatek`](/android_hardware_bluetooth_1_0_service_mediatek/) | `android.hardware.bluetooth@1.0-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_cas_1_2_service`](/android_hardware_cas_1_2_service/) | `android.hardware.cas@1.2-service` | 32-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_configstore_1_1_service`](/android_hardware_configstore_1_1_service/) | `android.hardware.configstore@1.1-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_drm_1_3_service_clearkey`](/android_hardware_drm_1_3_service_clearkey/) | `android.hardware.drm@1.3-service.clearkey` | 64-bit | Service Daemon | `Standard` | 6 |
| [`android_hardware_drm_1_3_service_widevine`](/android_hardware_drm_1_3_service_widevine/) | `android.hardware.drm@1.3-service.widevine` | 32-bit | Service Daemon | `Standard` | 1 |
| [`android_hardware_dumpstate_1_1_service_xiaomi`](/android_hardware_dumpstate_1_1_service_xiaomi/) | `android.hardware.dumpstate@1.1-service.xiaomi` | 64-bit | Service Daemon | `/dev/logfs/uefilog0, /dev/logfs/uefilog1` | 9 |
| [`android_hardware_gatekeeper_1_0_service`](/android_hardware_gatekeeper_1_0_service/) | `android.hardware.gatekeeper@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_gnss_2_1_service_mediatek`](/android_hardware_gnss_2_1_service_mediatek/) | `android.hardware.gnss@2.1-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_graphics_allocator_4_0_service_mediatek`](/android_hardware_graphics_allocator_4_0_service_mediatek/) | `android.hardware.graphics.allocator@4.0-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_graphics_composer_2_1_service`](/android_hardware_graphics_composer_2_1_service/) | `android.hardware.graphics.composer@2.1-service` | 64-bit | Service Daemon | `/dev/vndbinder` | 0 |
| [`android_hardware_health_2_1_service`](/android_hardware_health_2_1_service/) | `android.hardware.health@2.1-service` | 64-bit | Service Daemon | `Standard` | 11 |
| [`android_hardware_ir_1_0_service`](/android_hardware_ir_1_0_service/) | `android.hardware.ir@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_keymaster_4_0_service_beanpod`](/android_hardware_keymaster_4_0_service_beanpod/) | `android.hardware.keymaster@4.0-service.beanpod` | 64-bit | Service Daemon | `Standard` | 1 |
| [`android_hardware_lights_service_mediatek`](/android_hardware_lights_service_mediatek/) | `android.hardware.lights-service.mediatek` | 64-bit | Service Daemon | `Standard` | 7 |
| [`android_hardware_media_omx_1_0_service`](/android_hardware_media_omx_1_0_service/) | `android.hardware.media.omx@1.0-service` | 32-bit | Service Daemon | `/dev/vndbinder` | 1 |
| [`android_hardware_memtrack_1_0_service`](/android_hardware_memtrack_1_0_service/) | `android.hardware.memtrack@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_neuralnetworks_1_3_service_mtk_neuron`](/android_hardware_neuralnetworks_1_3_service_mtk_neuron/) | `android.hardware.neuralnetworks@1.3-service-mtk-neuron` | 64-bit | Service Daemon | `Standard` | 117 |
| [`android_hardware_secure_element_1_0_service_mediatek`](/android_hardware_secure_element_1_0_service_mediatek/) | `android.hardware.secure_element@1.0-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_sensors_1_0_service_mediatek`](/android_hardware_sensors_1_0_service_mediatek/) | `android.hardware.sensors@1.0-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_thermal_2_0_service_mtk`](/android_hardware_thermal_2_0_service_mtk/) | `android.hardware.thermal@2.0-service.mtk` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_usb_1_1_service_mediatek`](/android_hardware_usb_1_1_service_mediatek/) | `android.hardware.usb@1.1-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_vibrator_service_mediatek`](/android_hardware_vibrator_service_mediatek/) | `android.hardware.vibrator-service.mediatek` | 64-bit | Service Daemon | `Standard` | 10 |
| [`android_hardware_vibrator_1_0_service_mediatek`](/android_hardware_vibrator_1_0_service_mediatek/) | `android.hardware.vibrator@1.0-service-mediatek` | 64-bit | Service Daemon | `Standard` | 0 |
| [`android_hardware_wifi_1_0_service_lazy`](/android_hardware_wifi_1_0_service_lazy/) | `android.hardware.wifi@1.0-service-lazy` | 64-bit | Service Daemon | `Standard` | 17 |
| [`camerahalserver`](/camerahalserver/) | `camerahalserver` | 64-bit | Service Daemon | `/dev/vndbinder` | 0 |
| [`hostapd`](/hostapd/) | `hostapd` | 64-bit | Service Daemon | `/dev/rfkill` | 12 |
| [`mfp_daemon`](/mfp_daemon/) | `mfp-daemon` | 64-bit | Service Daemon | `/dev/goodix_fp` | 2 |
| [`mtkfusionrild`](/mtkfusionrild/) | `mtkfusionrild` | 64-bit | Service Daemon | `Standard` | 2 |
| [`power_native_test_v_1_0`](/power_native_test_v_1_0/) | `power_native_test_v_1_0` | 64-bit | Service Daemon | `Standard` | 0 |
| [`power_native_test_v_1_1`](/power_native_test_v_1_1/) | `power_native_test_v_1_1` | 64-bit | Service Daemon | `Standard` | 3 |
| [`vendor_dolby_hardware_dms_2_0_service`](/vendor_dolby_hardware_dms_2_0_service/) | `vendor.dolby.hardware.dms@2.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_aee_1_0_service`](/vendor_mediatek_hardware_aee_1_0_service/) | `vendor.mediatek.hardware.aee@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_dfps_1_0_service`](/vendor_mediatek_hardware_dfps_1_0_service/) | `vendor.mediatek.hardware.dfps@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_dplanner_2_0_service`](/vendor_mediatek_hardware_dplanner_2_0_service/) | `vendor.mediatek.hardware.dplanner@2.0-service` | 64-bit | Service Daemon | `Standard` | 37 |
| [`vendor_mediatek_hardware_gpu_1_0_service`](/vendor_mediatek_hardware_gpu_1_0_service/) | `vendor.mediatek.hardware.gpu@1.0-service` | 64-bit | Service Daemon | `Standard` | 2 |
| [`vendor_mediatek_hardware_keymaster_attestation_1_1_service`](/vendor_mediatek_hardware_keymaster_attestation_1_1_service/) | `vendor.mediatek.hardware.keymaster_attestation@1.1-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_mms_1_5_service`](/vendor_mediatek_hardware_mms_1_5_service/) | `vendor.mediatek.hardware.mms@1.5-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_mtkcodecservice_1_1_service`](/vendor_mediatek_hardware_mtkcodecservice_1_1_service/) | `vendor.mediatek.hardware.mtkcodecservice@1.1-service` | 32-bit | Service Daemon | `Standard` | 3 |
| [`vendor_mediatek_hardware_mtkpower_1_0_service`](/vendor_mediatek_hardware_mtkpower_1_0_service/) | `vendor.mediatek.hardware.mtkpower@1.0-service` | 64-bit | Service Daemon | `Standard` | 14 |
| [`vendor_mediatek_hardware_nvram_1_1_service`](/vendor_mediatek_hardware_nvram_1_1_service/) | `vendor.mediatek.hardware.nvram@1.1-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_nwk_opt_1_0_service`](/vendor_mediatek_hardware_nwk_opt_1_0_service/) | `vendor.mediatek.hardware.nwk_opt@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mediatek_hardware_pq_2_2_service`](/vendor_mediatek_hardware_pq_2_2_service/) | `vendor.mediatek.hardware.pq@2.2-service` | 64-bit | Service Daemon | `Standard` | 6 |
| [`vendor_microtrust_hardware_se_1_0_service`](/vendor_microtrust_hardware_se_1_0_service/) | `vendor.microtrust.hardware.se@1.0-service` | 64-bit | Service Daemon | `Standard` | 1 |
| [`vendor_microtrust_hardwareter_1_0_service`](/vendor_microtrust_hardwareter_1_0_service/) | `vendor.microtrust.hardware.soter@1.0-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_mtk_hardware_vibrator_1_2_service`](/vendor_mtk_hardware_vibrator_1_2_service/) | `vendor.mtk.hardware.vibrator@1.2-service` | 64-bit | Service Daemon | `/dev/input/` | 0 |
| [`vendor_nxp_hardware_nfc_1_1_service`](/vendor_nxp_hardware_nfc_1_1_service/) | `vendor.nxp.hardware.nfc@1.1-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_xiaomi_hardware_citsensorservice_1_1_service`](/vendor_xiaomi_hardware_citsensorservice_1_1_service/) | `vendor.xiaomi.hardware.citsensorservice@1.1-service` | 64-bit | Service Daemon | `Standard` | 0 |
| [`vendor_xiaomi_hardware_displayfeature_1_0_service`](/vendor_xiaomi_hardware_displayfeature_1_0_service/) | `vendor.xiaomi.hardware.displayfeature@1.0-service` | 64-bit | Service Daemon | `/dev/vndbinder` | 0 |
| [`vendor_xiaomi_hardware_micharge_1_0_service`](/vendor_xiaomi_hardware_micharge_1_0_service/) | `vendor.xiaomi.hardware.micharge@1.0-service` | 64-bit | Service Daemon | `Standard` | 16 |
| [`vendor_xiaomi_hardware_misys_1_0_service`](/vendor_xiaomi_hardware_misys_1_0_service/) | `vendor.xiaomi.hardware.misys@1.0-service` | 64-bit | Service Daemon | `Standard` | 17 |
| [`vendor_xiaomi_hardware_misys_2_0_service`](/vendor_xiaomi_hardware_misys_2_0_service/) | `vendor.xiaomi.hardware.misys@2.0-service` | 64-bit | Service Daemon | `Standard` | 17 |
| [`vendor_xiaomi_hardware_misys_3_0_service`](/vendor_xiaomi_hardware_misys_3_0_service/) | `vendor.xiaomi.hardware.misys@3.0-service` | 64-bit | Service Daemon | `Standard` | 17 |
| [`vendor_xiaomi_hardware_touchfeature_1_0_service`](/vendor_xiaomi_hardware_touchfeature_1_0_service/) | `vendor.xiaomi.hardware.touchfeature@1.0-service` | 64-bit | Service Daemon | `/dev/vndbinder` | 0 |
| [`vtservice_hidl`](/vtservice_hidl/) | `vtservice_hidl` | 32-bit | Service Daemon | `Standard` | 3 |
| [`wpa_supplicant`](/wpa_supplicant/) | `wpa_supplicant` | 64-bit | Service Daemon | `/dev/rfkill` | 125 |
