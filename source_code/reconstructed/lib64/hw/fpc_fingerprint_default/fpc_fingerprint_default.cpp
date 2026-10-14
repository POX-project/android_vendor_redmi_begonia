/*
 * Reverse-Engineered Source for: fpc_fingerprint.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "fpc_fingerprint_default"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "fpc_fingerprint_default.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_TEEI_FP "/dev/teei_fp"
#define DEV_DEV_UINPUT "/dev/uinput"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_TEEI_FP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TEEI_FP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TEEI_FP, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_UINPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_UINPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_UINPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int fpc_fingerprint_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int fpc_fingerprint_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t fpc_fingerprint_default_module_methods = {
    .open = fpc_fingerprint_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "fpc",
    .name = "Begonia fpc_fingerprint_default Module",
    .author = "LineageOS / Community RE",
    .methods = &fpc_fingerprint_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int fpc_fingerprint_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int fpc_fingerprint_default_close(struct hw_device_t* dev) {
    ALOGI("Closing fpc_fingerprint_default module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: fpc_tee_get_last_cac_result */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_last_cac_result(void) {
    ALOGD("fpc_tee_get_last_cac_result() called");
    return 0;
}

/* Demangled: fpc_tee_get_sensor_info */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_sensor_info(void) {
    ALOGD("fpc_tee_get_sensor_info() called");
    return 0;
}

/* Demangled: fpc_tee_load_empty_db */
extern "C" __attribute__((visibility("default"))) int fpc_tee_load_empty_db(void) {
    ALOGD("fpc_tee_load_empty_db() called");
    return 0;
}

/* Demangled: fpc_tee_set_auth_challenge */
extern "C" __attribute__((visibility("default"))) int fpc_tee_set_auth_challenge(void) {
    ALOGD("fpc_tee_set_auth_challenge() called");
    return 0;
}

/* Demangled: fpc_irq_clear_cancel */
extern "C" __attribute__((visibility("default"))) int fpc_irq_clear_cancel(void) {
    ALOGD("fpc_irq_clear_cancel() called");
    return 0;
}

/* Demangled: fpc_tee_nav_get_debug_buffer_size */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_get_debug_buffer_size(void) {
    ALOGD("fpc_tee_nav_get_debug_buffer_size() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: fingerprint_hal_goto_idle */
extern "C" __attribute__((visibility("default"))) int fingerprint_hal_goto_idle(void) {
    ALOGD("fingerprint_hal_goto_idle() called");
    return 0;
}

/* Demangled: fpc_tee_set_cancel */
extern "C" __attribute__((visibility("default"))) int fpc_tee_set_cancel(void) {
    ALOGD("fpc_tee_set_cancel() called");
    return 0;
}

/* Demangled: fpc_tee_write_ta_log */
extern "C" __attribute__((visibility("default"))) int fpc_tee_write_ta_log(void) {
    ALOGD("fpc_tee_write_ta_log() called");
    return 0;
}

/* Demangled: fpc_tee_get_auth_result */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_auth_result(void) {
    ALOGD("fpc_tee_get_auth_result() called");
    return 0;
}

/* Demangled: fpc_tac_open */
extern "C" __attribute__((visibility("default"))) int fpc_tac_open(void) {
    ALOGD("fpc_tac_open() called");
    return 0;
}

/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev(void) {
    ALOGD("_ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::FingerprintSensorTest(fpc_hal_ext_sensortest*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC1EP22fpc_hal_ext_sensortest(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC1EP22fpc_hal_ext_sensortest() called");
    return 0;
}

/* Exported Object: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSensorTest-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_NS2_22IFingerprintSensorTestE = NULL;

/* Demangled: fpc_navigation_destroy */
extern "C" __attribute__((visibility("default"))) int fpc_navigation_destroy(void) {
    ALOGD("fpc_navigation_destroy() called");
    return 0;
}

/* Demangled: fpc_tee_bio_init */
extern "C" __attribute__((visibility("default"))) int fpc_tee_bio_init(void) {
    ALOGD("fpc_tee_bio_init() called");
    return 0;
}

/* Demangled: fpc_tee_nav_poll_data */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_poll_data(void) {
    ALOGD("fpc_tee_nav_poll_data() called");
    return 0;
}

/* Demangled: fpc_tee_wait_finger_lost_nav */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_finger_lost_nav(void) {
    ALOGD("fpc_tee_wait_finger_lost_nav() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::cancelCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13cancelCaptureEv(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13cancelCaptureEv() called");
    return 0;
}

/* Exported Object: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest9sInstanceE = NULL;

/* Demangled: fpc_set_active_group */
extern "C" __attribute__((visibility("default"))) int fpc_set_active_group(void) {
    ALOGD("fpc_set_active_group() called");
    return 0;
}

/* Demangled: fpc_sense_touch_get_config */
extern "C" __attribute__((visibility("default"))) int fpc_sense_touch_get_config(void) {
    ALOGD("fpc_sense_touch_get_config() called");
    return 0;
}

/* Demangled: fpc_tee_wait_for_button_up_force */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_for_button_up_force(void) {
    ALOGD("fpc_tee_wait_for_button_up_force() called");
    return 0;
}

/* Demangled: property_get */
extern "C" __attribute__((visibility("default"))) int property_get(void) {
    ALOGD("property_get() called");
    return 0;
}

/* Demangled: fingerprint_hal_resume */
extern "C" __attribute__((visibility("default"))) int fingerprint_hal_resume(void) {
    ALOGD("fingerprint_hal_resume() called");
    return 0;
}

/* Demangled: fpc_tee_engineering_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_engineering_enabled(void) {
    ALOGD("fpc_tee_engineering_enabled() called");
    return 0;
}

/* Demangled: fpc_tee_kpi_stop */
extern "C" __attribute__((visibility("default"))) int fpc_tee_kpi_stop(void) {
    ALOGD("fpc_tee_kpi_stop() called");
    return 0;
}

/* Demangled: fpc_tee_kpi_stop_sequence */
extern "C" __attribute__((visibility("default"))) int fpc_tee_kpi_stop_sequence(void) {
    ALOGD("fpc_tee_kpi_stop_sequence() called");
    return 0;
}

/* Demangled: fpc_navigation_new */
extern "C" __attribute__((visibility("default"))) int fpc_navigation_new(void) {
    ALOGD("fpc_navigation_new() called");
    return 0;
}

/* Demangled: fpc_sensortest_destroy */
extern "C" __attribute__((visibility("default"))) int fpc_sensortest_destroy(void) {
    ALOGD("fpc_sensortest_destroy() called");
    return 0;
}

/* Demangled: fpc_tee_capture_image */
extern "C" __attribute__((visibility("default"))) int fpc_tee_capture_image(void) {
    ALOGD("fpc_tee_capture_image() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE8_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: fpc_tee_identify */
extern "C" __attribute__((visibility("default"))) int fpc_tee_identify(void) {
    ALOGD("fpc_tee_identify() called");
    return 0;
}

/* Demangled: fpc_tee_get_sensor_otp_info */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_sensor_otp_info(void) {
    ALOGD("fpc_tee_get_sensor_otp_info() called");
    return 0;
}

/* Demangled: property_set */
extern "C" __attribute__((visibility("default"))) int property_set(void) {
    ALOGD("property_set() called");
    return 0;
}

/* Demangled: fpc_tee_kpi_start */
extern "C" __attribute__((visibility("default"))) int fpc_tee_kpi_start(void) {
    ALOGD("fpc_tee_kpi_start() called");
    return 0;
}

/* Demangled: fpc_tee_status_irq */
extern "C" __attribute__((visibility("default"))) int fpc_tee_status_irq(void) {
    ALOGD("fpc_tee_status_irq() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::runSensorTest(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&, com::fingerprints::extension::V1_0::SensorTest const&, com::fingerprints::extension::V1_0::SensorTestInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE() called");
    return 0;
}

/* Exported Object: VTT for com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE = NULL;

/* Demangled: fpc_tee_authorize_enrol */
extern "C" __attribute__((visibility("default"))) int fpc_tee_authorize_enrol(void) {
    ALOGD("fpc_tee_authorize_enrol() called");
    return 0;
}

/* Demangled: fpc_tee_clear_cancel */
extern "C" __attribute__((visibility("default"))) int fpc_tee_clear_cancel(void) {
    ALOGD("fpc_tee_clear_cancel() called");
    return 0;
}

/* Demangled: fpc_tee_init_hw_auth */
extern "C" __attribute__((visibility("default"))) int fpc_tee_init_hw_auth(void) {
    ALOGD("fpc_tee_init_hw_auth() called");
    return 0;
}

/* Demangled: fpc_tee_load_template_db */
extern "C" __attribute__((visibility("default"))) int fpc_tee_load_template_db(void) {
    ALOGD("fpc_tee_load_template_db() called");
    return 0;
}

/* Demangled: add_sensortest_service */
extern "C" __attribute__((visibility("default"))) int add_sensortest_service(void) {
    ALOGD("add_sensortest_service() called");
    return 0;
}

/* Demangled: fpc_sense_touch_load_config */
extern "C" __attribute__((visibility("default"))) int fpc_sense_touch_load_config(void) {
    ALOGD("fpc_sense_touch_load_config() called");
    return 0;
}

/* Demangled: fpc_tee_sensor_release */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensor_release(void) {
    ALOGD("fpc_tee_sensor_release() called");
    return 0;
}

/* Demangled: fpc_irq_wait */
extern "C" __attribute__((visibility("default"))) int fpc_irq_wait(void) {
    ALOGD("fpc_irq_wait() called");
    return 0;
}

/* Demangled: fpc_tac_free_shared */
extern "C" __attribute__((visibility("default"))) int fpc_tac_free_shared(void) {
    ALOGD("fpc_tac_free_shared() called");
    return 0;
}

/* Demangled: property_list */
extern "C" __attribute__((visibility("default"))) int property_list(void) {
    ALOGD("property_list() called");
    return 0;
}

/* Demangled: fpc_tee_store_template_db */
extern "C" __attribute__((visibility("default"))) int fpc_tee_store_template_db(void) {
    ALOGD("fpc_tee_store_template_db() called");
    return 0;
}

/* Demangled: fpc_hal_ext_get_raw_image */
extern "C" __attribute__((visibility("default"))) int fpc_hal_ext_get_raw_image(void) {
    ALOGD("fpc_hal_ext_get_raw_image() called");
    return 0;
}

/* Demangled: fpc_tee_debug_disable_check_pixels */
extern "C" __attribute__((visibility("default"))) int fpc_tee_debug_disable_check_pixels(void) {
    ALOGD("fpc_tee_debug_disable_check_pixels() called");
    return 0;
}

/* Demangled: fpc_tee_begin_enrol */
extern "C" __attribute__((visibility("default"))) int fpc_tee_begin_enrol(void) {
    ALOGD("fpc_tee_begin_enrol() called");
    return 0;
}

/* Demangled: fpc_tee_early_stop_ctrl */
extern "C" __attribute__((visibility("default"))) int fpc_tee_early_stop_ctrl(void) {
    ALOGD("fpc_tee_early_stop_ctrl() called");
    return 0;
}

/* Demangled: fpc_hal_ext_free_image */
extern "C" __attribute__((visibility("default"))) int fpc_hal_ext_free_image(void) {
    ALOGD("fpc_hal_ext_free_image() called");
    return 0;
}

/* Demangled: fpc_tee_store_template_db_host */
extern "C" __attribute__((visibility("default"))) int fpc_tee_store_template_db_host(void) {
    ALOGD("fpc_tee_store_template_db_host() called");
    return 0;
}

/* Demangled: fpc_remove */
extern "C" __attribute__((visibility("default"))) int fpc_remove(void) {
    ALOGD("fpc_remove() called");
    return 0;
}

/* Demangled: fpc_engineering_destroy */
extern "C" __attribute__((visibility("default"))) int fpc_engineering_destroy(void) {
    ALOGD("fpc_engineering_destroy() called");
    return 0;
}

/* Exported Object: fpc_enroll_state */
extern "C" __attribute__((visibility("default"))) void* fpc_enroll_state = NULL;

/* Demangled: fpc_irq_wakeup_enable */
extern "C" __attribute__((visibility("default"))) int fpc_irq_wakeup_enable(void) {
    ALOGD("fpc_irq_wakeup_enable() called");
    return 0;
}

/* Demangled: fpc_tee_wait_finger_down_nav */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_finger_down_nav(void) {
    ALOGD("fpc_tee_wait_finger_down_nav() called");
    return 0;
}

/* Demangled: fpc_sysfs_path_by_attr */
extern "C" __attribute__((visibility("default"))) int fpc_sysfs_path_by_attr(void) {
    ALOGD("fpc_sysfs_path_by_attr() called");
    return 0;
}

/* Demangled: fpc_tee_wait_irq */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_irq(void) {
    ALOGD("fpc_tee_wait_irq() called");
    return 0;
}

/* Exported Object: VTT for com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern "C" __attribute__((visibility("default"))) void* _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE = NULL;

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::captureOnAcquired(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest17captureOnAcquiredEPvi(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest17captureOnAcquiredEPvi() called");
    return 0;
}

/* Demangled: fpc_sense_touch_new */
extern "C" __attribute__((visibility("default"))) int fpc_sense_touch_new(void) {
    ALOGD("fpc_sense_touch_new() called");
    return 0;
}

/* Demangled: fpc_tee_log_build_info */
extern "C" __attribute__((visibility("default"))) int fpc_tee_log_build_info(void) {
    ALOGD("fpc_tee_log_build_info() called");
    return 0;
}

/* Exported Object: vtable for com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE = NULL;

/* Demangled: fpc_worker_join_task */
extern "C" __attribute__((visibility("default"))) int fpc_worker_join_task(void) {
    ALOGD("fpc_worker_join_task() called");
    return 0;
}

/* Demangled: fpc_irq_wakeup_disable */
extern "C" __attribute__((visibility("default"))) int fpc_irq_wakeup_disable(void) {
    ALOGD("fpc_irq_wakeup_disable() called");
    return 0;
}

/* Demangled: property_get_int32 */
extern "C" __attribute__((visibility("default"))) int property_get_int32(void) {
    ALOGD("property_get_int32() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::isSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11isSupportedEv(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11isSupportedEv() called");
    return 0;
}

/* Demangled: fpc_pre_enroll */
extern "C" __attribute__((visibility("default"))) int fpc_pre_enroll(void) {
    ALOGD("fpc_pre_enroll() called");
    return 0;
}

/* Demangled: fpc_tee_get_enrol_challenge */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_enrol_challenge(void) {
    ALOGD("fpc_tee_get_enrol_challenge() called");
    return 0;
}

/* Demangled: fpc_tee_sensetouch_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensetouch_enabled(void) {
    ALOGD("fpc_tee_sensetouch_enabled() called");
    return 0;
}

/* Demangled: fpc_tee_sensortest_get_log */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensortest_get_log(void) {
    ALOGD("fpc_tee_sensortest_get_log() called");
    return 0;
}

/* Demangled: fpc_tee_end_enrol */
extern "C" __attribute__((visibility("default"))) int fpc_tee_end_enrol(void) {
    ALOGD("fpc_tee_end_enrol() called");
    return 0;
}

/* Demangled: fpc_worker_destroy */
extern "C" __attribute__((visibility("default"))) int fpc_worker_destroy(void) {
    ALOGD("fpc_worker_destroy() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::captureOnError(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14captureOnErrorEPvi(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14captureOnErrorEPvi() called");
    return 0;
}

/* Demangled: fpc_navigation_pause */
extern "C" __attribute__((visibility("default"))) int fpc_navigation_pause(void) {
    ALOGD("fpc_navigation_pause() called");
    return 0;
}

/* Demangled: fpc_authenticate */
extern "C" __attribute__((visibility("default"))) int fpc_authenticate(void) {
    ALOGD("fpc_authenticate() called");
    return 0;
}

/* Demangled: fpc_navigation_resume */
extern "C" __attribute__((visibility("default"))) int fpc_navigation_resume(void) {
    ALOGD("fpc_navigation_resume() called");
    return 0;
}

/* Demangled: fpc_tee_get_sensor_force_value */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_sensor_force_value(void) {
    ALOGD("fpc_tee_get_sensor_force_value() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::testOnResult(void*, fpc_hal_ext_sensortest_test_result_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest12testOnResultEPvP36fpc_hal_ext_sensortest_test_result_t(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest12testOnResultEPvP36fpc_hal_ext_sensortest_test_result_t() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::getSensorTests(std::__1::function<void (android::hardware::hidl_vec<com::fingerprints::extension::V1_0::SensorTest> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE() called");
    return 0;
}

/* Demangled: fpc_tee_set_token_validation_enable */
extern "C" __attribute__((visibility("default"))) int fpc_tee_set_token_validation_enable(void) {
    ALOGD("fpc_tee_set_token_validation_enable() called");
    return 0;
}

/* Demangled: fpc_tee_navigation_force_sw_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_navigation_force_sw_enabled(void) {
    ALOGD("fpc_tee_navigation_force_sw_enabled() called");
    return 0;
}

/* Demangled: fpc_tee_delete_template */
extern "C" __attribute__((visibility("default"))) int fpc_tee_delete_template(void) {
    ALOGD("fpc_tee_delete_template() called");
    return 0;
}

/* Demangled: fpc_tee_init */
extern "C" __attribute__((visibility("default"))) int fpc_tee_init(void) {
    ALOGD("fpc_tee_init() called");
    return 0;
}

/* Demangled: fpc_tee_nav_cancelled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_cancelled(void) {
    ALOGD("fpc_tee_nav_cancelled() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev() called");
    return 0;
}

/* Exported Object: vtable for com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE = NULL;

/* Demangled: add_sense_touch_service */
extern "C" __attribute__((visibility("default"))) int add_sense_touch_service(void) {
    ALOGD("add_sense_touch_service() called");
    return 0;
}

/* Demangled: fpc_tee_debug_get_raw_size */
extern "C" __attribute__((visibility("default"))) int fpc_tee_debug_get_raw_size(void) {
    ALOGD("fpc_tee_debug_get_raw_size() called");
    return 0;
}

/* Demangled: fpc_tee_wait_finger_down */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_finger_down(void) {
    ALOGD("fpc_tee_wait_finger_down() called");
    return 0;
}

/* Demangled: property_get_int64 */
extern "C" __attribute__((visibility("default"))) int property_get_int64(void) {
    ALOGD("property_get_int64() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::getForce() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch8getForceEv(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch8getForceEv() called");
    return 0;
}

/* Exported Object: g_dummy_device */
extern "C" __attribute__((visibility("default"))) void* g_dummy_device = NULL;

/* Demangled: fpc_hal_close */
extern "C" __attribute__((visibility("default"))) int fpc_hal_close(void) {
    ALOGD("fpc_hal_close() called");
    return 0;
}

/* Exported Object: fpc_enroll_timeout_sec */
extern "C" __attribute__((visibility("default"))) void* fpc_enroll_timeout_sec = NULL;

/* Demangled: fpc_error_str */
extern "C" __attribute__((visibility("default"))) int fpc_error_str(void) {
    ALOGD("fpc_error_str() called");
    return 0;
}

/* Demangled: fpc_tee_update_template */
extern "C" __attribute__((visibility("default"))) int fpc_tee_update_template(void) {
    ALOGD("fpc_tee_update_template() called");
    return 0;
}

/* Demangled: destroy_input_device */
extern "C" __attribute__((visibility("default"))) int destroy_input_device(void) {
    ALOGD("destroy_input_device() called");
    return 0;
}

/* Demangled: fpc_tee_get_identify_statistics */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_identify_statistics(void) {
    ALOGD("fpc_tee_get_identify_statistics() called");
    return 0;
}

/* Demangled: fpc_tee_sensor_cancelled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensor_cancelled(void) {
    ALOGD("fpc_tee_sensor_cancelled() called");
    return 0;
}

/* Exported Object: g_fpc_sensor */
extern "C" __attribute__((visibility("default"))) void* g_fpc_sensor = NULL;

/* Demangled: fpc_sysfs_node_write */
extern "C" __attribute__((visibility("default"))) int fpc_sysfs_node_write(void) {
    ALOGD("fpc_sysfs_node_write() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::FingerprintSenseTouch(fpc_sense_touch*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC1EP15fpc_sense_touch(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC1EP15fpc_sense_touch() called");
    return 0;
}

/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn8_N3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: fpc_cancel */
extern "C" __attribute__((visibility("default"))) int fpc_cancel(void) {
    ALOGD("fpc_cancel() called");
    return 0;
}

/* Demangled: fpc_enroll */
extern "C" __attribute__((visibility("default"))) int fpc_enroll(void) {
    ALOGD("fpc_enroll() called");
    return 0;
}

/* Demangled: fpc_tee_get_finger_ids */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_finger_ids(void) {
    ALOGD("fpc_tee_get_finger_ids() called");
    return 0;
}

/* Demangled: fpc_irq_set_cancel */
extern "C" __attribute__((visibility("default"))) int fpc_irq_set_cancel(void) {
    ALOGD("fpc_irq_set_cancel() called");
    return 0;
}

/* Demangled: fpc_tee_is_sensor_force_supported */
extern "C" __attribute__((visibility("default"))) int fpc_tee_is_sensor_force_supported(void) {
    ALOGD("fpc_tee_is_sensor_force_supported() called");
    return 0;
}

/* Demangled: fpc_irq_status */
extern "C" __attribute__((visibility("default"))) int fpc_irq_status(void) {
    ALOGD("fpc_irq_status() called");
    return 0;
}

/* Demangled: fpc_worker_run_task */
extern "C" __attribute__((visibility("default"))) int fpc_worker_run_task(void) {
    ALOGD("fpc_worker_run_task() called");
    return 0;
}

/* Demangled: fpc_tee_get_template_db_id */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_template_db_id(void) {
    ALOGD("fpc_tee_get_template_db_id() called");
    return 0;
}

/* Demangled: fpc_tee_debug_inject */
extern "C" __attribute__((visibility("default"))) int fpc_tee_debug_inject(void) {
    ALOGD("fpc_tee_debug_inject() called");
    return 0;
}

/* Demangled: fpc_tee_capture_image_swipe */
extern "C" __attribute__((visibility("default"))) int fpc_tee_capture_image_swipe(void) {
    ALOGD("fpc_tee_capture_image_swipe() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::instantiate(fpc_hal_ext_sensortest*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11instantiateEP22fpc_hal_ext_sensortest(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11instantiateEP22fpc_hal_ext_sensortest() called");
    return 0;
}

/* Demangled: fingerprint_hal_do_async_work */
extern "C" __attribute__((visibility("default"))) int fingerprint_hal_do_async_work(void) {
    ALOGD("fingerprint_hal_do_async_work() called");
    return 0;
}

/* Demangled: fpc_tac_transfer */
extern "C" __attribute__((visibility("default"))) int fpc_tac_transfer(void) {
    ALOGD("fpc_tac_transfer() called");
    return 0;
}

/* Demangled: fpc_tee_check_finger_lost */
extern "C" __attribute__((visibility("default"))) int fpc_tee_check_finger_lost(void) {
    ALOGD("fpc_tee_check_finger_lost() called");
    return 0;
}

/* Demangled: property_get_bool */
extern "C" __attribute__((visibility("default"))) int property_get_bool(void) {
    ALOGD("property_get_bool() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev() called");
    return 0;
}

/* Demangled: fpc_tee_nav_init */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_init(void) {
    ALOGD("fpc_tee_nav_init() called");
    return 0;
}

/* Demangled: fpc_tee_nav_get_debug_buffer */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_get_debug_buffer(void) {
    ALOGD("fpc_tee_nav_get_debug_buffer() called");
    return 0;
}

/* Demangled: fpc_tee_sensortest_run_test */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensortest_run_test(void) {
    ALOGD("fpc_tee_sensortest_run_test() called");
    return 0;
}

/* Demangled: fpc_tac_alloc_shared */
extern "C" __attribute__((visibility("default"))) int fpc_tac_alloc_shared(void) {
    ALOGD("fpc_tac_alloc_shared() called");
    return 0;
}

/* Demangled: fpc_add_dummy_service */
extern "C" __attribute__((visibility("default"))) int fpc_add_dummy_service(void) {
    ALOGD("fpc_add_dummy_service() called");
    return 0;
}

/* Demangled: create_input_device */
extern "C" __attribute__((visibility("default"))) int create_input_device(void) {
    ALOGD("create_input_device() called");
    return 0;
}

/* Demangled: fpc_irq_release */
extern "C" __attribute__((visibility("default"))) int fpc_irq_release(void) {
    ALOGD("fpc_irq_release() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::capture(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb() called");
    return 0;
}

/* Demangled: fpc_tee_bio_release */
extern "C" __attribute__((visibility("default"))) int fpc_tee_bio_release(void) {
    ALOGD("fpc_tee_bio_release() called");
    return 0;
}

/* Demangled: fpc_tee_log_to_file_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_log_to_file_enabled(void) {
    ALOGD("fpc_tee_log_to_file_enabled() called");
    return 0;
}

/* Demangled: fpc_hal_ext_get_enhanced_image */
extern "C" __attribute__((visibility("default"))) int fpc_hal_ext_get_enhanced_image(void) {
    ALOGD("fpc_hal_ext_get_enhanced_image() called");
    return 0;
}

/* Demangled: fpc_tee_debug_retrieve */
extern "C" __attribute__((visibility("default"))) int fpc_tee_debug_retrieve(void) {
    ALOGD("fpc_tee_debug_retrieve() called");
    return 0;
}

/* Demangled: fpc_sense_touch_set_auth_mode */
extern "C" __attribute__((visibility("default"))) int fpc_sense_touch_set_auth_mode(void) {
    ALOGD("fpc_sense_touch_set_auth_mode() called");
    return 0;
}

/* Demangled: fpc_tee_load_template_db_host */
extern "C" __attribute__((visibility("default"))) int fpc_tee_load_template_db_host(void) {
    ALOGD("fpc_tee_load_template_db_host() called");
    return 0;
}

/* Demangled: fpc_sense_touch_destroy */
extern "C" __attribute__((visibility("default"))) int fpc_sense_touch_destroy(void) {
    ALOGD("fpc_sense_touch_destroy() called");
    return 0;
}

/* Demangled: fpc_tee_release */
extern "C" __attribute__((visibility("default"))) int fpc_tee_release(void) {
    ALOGD("fpc_tee_release() called");
    return 0;
}

/* Exported Object: fpc_wait_finger_down */
extern "C" __attribute__((visibility("default"))) void* fpc_wait_finger_down = NULL;

/* Demangled: fpc_tee_wait_finger_lost */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_finger_lost(void) {
    ALOGD("fpc_tee_wait_finger_lost() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::readConfig(std::__1::function<void (com::fingerprints::extension::V1_0::SenseTouchConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::setAuthMode(com::fingerprints::extension::V1_0::SenseTouchAuthenticationMode, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj() called");
    return 0;
}

/* Demangled: fpc_irq_init */
extern "C" __attribute__((visibility("default"))) int fpc_irq_init(void) {
    ALOGD("fpc_irq_init() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::getSensorInfo(std::__1::function<void (com::fingerprints::extension::V1_0::SensorInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE() called");
    return 0;
}

/* Demangled: fpc_get_authenticator_id */
extern "C" __attribute__((visibility("default"))) int fpc_get_authenticator_id(void) {
    ALOGD("fpc_get_authenticator_id() called");
    return 0;
}

/* Demangled: fpc_tee_sensortest_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensortest_enabled(void) {
    ALOGD("fpc_tee_sensortest_enabled() called");
    return 0;
}

/* Exported Object: fpc_sensortest_tests */
extern "C" __attribute__((visibility("default"))) void* fpc_sensortest_tests = NULL;

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::FingerprintSenseTouch(fpc_sense_touch*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC2EP15fpc_sense_touch(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC2EP15fpc_sense_touch() called");
    return 0;
}

/* Demangled: add_dummy_sensortest_service */
extern "C" __attribute__((visibility("default"))) int add_dummy_sensortest_service(void) {
    ALOGD("add_dummy_sensortest_service() called");
    return 0;
}

/* Demangled: fpc_tee_set_gid */
extern "C" __attribute__((visibility("default"))) int fpc_tee_set_gid(void) {
    ALOGD("fpc_tee_set_gid() called");
    return 0;
}

/* Demangled: fpc_tac_release */
extern "C" __attribute__((visibility("default"))) int fpc_tac_release(void) {
    ALOGD("fpc_tac_release() called");
    return 0;
}

/* Demangled: fpc_tee_navigation_debug_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_navigation_debug_enabled(void) {
    ALOGD("fpc_tee_navigation_debug_enabled() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD2Ev(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD2Ev() called");
    return 0;
}

/* Demangled: fpc_post_enroll */
extern "C" __attribute__((visibility("default"))) int fpc_post_enroll(void) {
    ALOGD("fpc_post_enroll() called");
    return 0;
}

/* Demangled: fpc_tee_navigation_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_navigation_enabled(void) {
    ALOGD("fpc_tee_navigation_enabled() called");
    return 0;
}

/* Demangled: fpc_tee_sensor_init */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensor_init(void) {
    ALOGD("fpc_tee_sensor_init() called");
    return 0;
}

/* Demangled: report_input_event */
extern "C" __attribute__((visibility("default"))) int report_input_event(void) {
    ALOGD("report_input_event() called");
    return 0;
}

/* Demangled: fpc_tee_sensortest_is_test_supported */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensortest_is_test_supported(void) {
    ALOGD("fpc_tee_sensortest_is_test_supported() called");
    return 0;
}

/* Exported Object: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch9sInstanceE = NULL;

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::FingerprintSensorTest(fpc_hal_ext_sensortest*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC2EP22fpc_hal_ext_sensortest(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC2EP22fpc_hal_ext_sensortest() called");
    return 0;
}

/* Demangled: fpc_tee_enrol */
extern "C" __attribute__((visibility("default"))) int fpc_tee_enrol(void) {
    ALOGD("fpc_tee_enrol() called");
    return 0;
}

/* Demangled: fpc_tee_get_max_number_of_templates */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_max_number_of_templates(void) {
    ALOGD("fpc_tee_get_max_number_of_templates() called");
    return 0;
}

/* Demangled: fpc_tee_kpi_start_sequence */
extern "C" __attribute__((visibility("default"))) int fpc_tee_kpi_start_sequence(void) {
    ALOGD("fpc_tee_kpi_start_sequence() called");
    return 0;
}

/* Demangled: fpc_tee_wait_for_button_down_force */
extern "C" __attribute__((visibility("default"))) int fpc_tee_wait_for_button_down_force(void) {
    ALOGD("fpc_tee_wait_for_button_down_force() called");
    return 0;
}

/* Exported Object: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSenseTouch-in-com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE = NULL;

/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev(void) {
    ALOGD("_ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev() called");
    return 0;
}

/* Demangled: fpc_sensortest_new */
extern "C" __attribute__((visibility("default"))) int fpc_sensortest_new(void) {
    ALOGD("fpc_sensortest_new() called");
    return 0;
}

/* Demangled: fpc_worker_new */
extern "C" __attribute__((visibility("default"))) int fpc_worker_new(void) {
    ALOGD("fpc_worker_new() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: fpc_check_hwid */
extern "C" __attribute__((visibility("default"))) int fpc_check_hwid(void) {
    ALOGD("fpc_check_hwid() called");
    return 0;
}

/* Demangled: fpc_tee_force_sensor_enabled */
extern "C" __attribute__((visibility("default"))) int fpc_tee_force_sensor_enabled(void) {
    ALOGD("fpc_tee_force_sensor_enabled() called");
    return 0;
}

/* Demangled: fpc_tee_sensortest_capture_uncalibrated */
extern "C" __attribute__((visibility("default"))) int fpc_tee_sensortest_capture_uncalibrated(void) {
    ALOGD("fpc_tee_sensortest_capture_uncalibrated() called");
    return 0;
}

/* Demangled: fpc_tee_nav_exit */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_exit(void) {
    ALOGD("fpc_tee_nav_exit() called");
    return 0;
}

/* Demangled: fpc_tee_nav_set_config */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_set_config(void) {
    ALOGD("fpc_tee_nav_set_config() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::instantiate(fpc_sense_touch*) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11instantiateEP15fpc_sense_touch(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11instantiateEP15fpc_sense_touch() called");
    return 0;
}

/* Demangled: fpc_enumerate */
extern "C" __attribute__((visibility("default"))) int fpc_enumerate(void) {
    ALOGD("fpc_enumerate() called");
    return 0;
}

/* Demangled: fpc_hal_open */
extern "C" __attribute__((visibility("default"))) int fpc_hal_open(void) {
    ALOGD("fpc_hal_open() called");
    return 0;
}

/* Demangled: fpc_tee_nav_get_config */
extern "C" __attribute__((visibility("default"))) int fpc_tee_nav_get_config(void) {
    ALOGD("fpc_tee_nav_get_config() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::finishCalibration(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch17finishCalibrationEjj(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch17finishCalibrationEjj() called");
    return 0;
}

/* Demangled: fpc_engineering_new */
extern "C" __attribute__((visibility("default"))) int fpc_engineering_new(void) {
    ALOGD("fpc_engineering_new() called");
    return 0;
}

/* Demangled: fpc_tee_get_build_info */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_build_info(void) {
    ALOGD("fpc_tee_get_build_info() called");
    return 0;
}

/* Demangled: fpc_tee_get_mqt_limits */
extern "C" __attribute__((visibility("default"))) int fpc_tee_get_mqt_limits(void) {
    ALOGD("fpc_tee_get_mqt_limits() called");
    return 0;
}

/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::cancelSensorTest() */
extern "C" __attribute__((visibility("default"))) int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest16cancelSensorTestEv(void) {
    ALOGD("_ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest16cancelSensorTestEv() called");
    return 0;
}
