/*
 * Reverse-Engineered ABI Specification for: fpc_fingerprint.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: fpc_fingerprint.default.so
 */

#ifndef BEGONIA_RE_FPC_FINGERPRINT_DEFAULT_H
#define BEGONIA_RE_FPC_FINGERPRINT_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: fpc_tee_get_last_cac_result */
/* Demangled: fpc_tee_get_last_cac_result */
int fpc_tee_get_last_cac_result(void);

/* Symbol: fpc_tee_get_sensor_info */
/* Demangled: fpc_tee_get_sensor_info */
int fpc_tee_get_sensor_info(void);

/* Symbol: fpc_tee_load_empty_db */
/* Demangled: fpc_tee_load_empty_db */
int fpc_tee_load_empty_db(void);

/* Symbol: fpc_tee_set_auth_challenge */
/* Demangled: fpc_tee_set_auth_challenge */
int fpc_tee_set_auth_challenge(void);

/* Symbol: fpc_irq_clear_cancel */
/* Demangled: fpc_irq_clear_cancel */
int fpc_irq_clear_cancel(void);

/* Symbol: fpc_tee_nav_get_debug_buffer_size */
/* Demangled: fpc_tee_nav_get_debug_buffer_size */
int fpc_tee_nav_get_debug_buffer_size(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: fingerprint_hal_goto_idle */
/* Demangled: fingerprint_hal_goto_idle */
int fingerprint_hal_goto_idle(void);

/* Symbol: fpc_tee_set_cancel */
/* Demangled: fpc_tee_set_cancel */
int fpc_tee_set_cancel(void);

/* Symbol: fpc_tee_write_ta_log */
/* Demangled: fpc_tee_write_ta_log */
int fpc_tee_write_ta_log(void);

/* Symbol: fpc_tee_get_auth_result */
/* Demangled: fpc_tee_get_auth_result */
int fpc_tee_get_auth_result(void);

/* Symbol: fpc_tac_open */
/* Demangled: fpc_tac_open */
int fpc_tac_open(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC1EP22fpc_hal_ext_sensortest */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::FingerprintSensorTest(fpc_hal_ext_sensortest*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC1EP22fpc_hal_ext_sensortest(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_NS2_22IFingerprintSensorTestE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSensorTest-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_NS2_22IFingerprintSensorTestE;

/* Symbol: fpc_navigation_destroy */
/* Demangled: fpc_navigation_destroy */
int fpc_navigation_destroy(void);

/* Symbol: fpc_tee_bio_init */
/* Demangled: fpc_tee_bio_init */
int fpc_tee_bio_init(void);

/* Symbol: fpc_tee_nav_poll_data */
/* Demangled: fpc_tee_nav_poll_data */
int fpc_tee_nav_poll_data(void);

/* Symbol: fpc_tee_wait_finger_lost_nav */
/* Demangled: fpc_tee_wait_finger_lost_nav */
int fpc_tee_wait_finger_lost_nav(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13cancelCaptureEv */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::cancelCapture() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13cancelCaptureEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest9sInstanceE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::sInstance */
extern void* _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest9sInstanceE;

/* Symbol: fpc_set_active_group */
/* Demangled: fpc_set_active_group */
int fpc_set_active_group(void);

/* Symbol: fpc_sense_touch_get_config */
/* Demangled: fpc_sense_touch_get_config */
int fpc_sense_touch_get_config(void);

/* Symbol: fpc_tee_wait_for_button_up_force */
/* Demangled: fpc_tee_wait_for_button_up_force */
int fpc_tee_wait_for_button_up_force(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: fingerprint_hal_resume */
/* Demangled: fingerprint_hal_resume */
int fingerprint_hal_resume(void);

/* Symbol: fpc_tee_engineering_enabled */
/* Demangled: fpc_tee_engineering_enabled */
int fpc_tee_engineering_enabled(void);

/* Symbol: fpc_tee_kpi_stop */
/* Demangled: fpc_tee_kpi_stop */
int fpc_tee_kpi_stop(void);

/* Symbol: fpc_tee_kpi_stop_sequence */
/* Demangled: fpc_tee_kpi_stop_sequence */
int fpc_tee_kpi_stop_sequence(void);

/* Symbol: fpc_navigation_new */
/* Demangled: fpc_navigation_new */
int fpc_navigation_new(void);

/* Symbol: fpc_sensortest_destroy */
/* Demangled: fpc_sensortest_destroy */
int fpc_sensortest_destroy(void);

/* Symbol: fpc_tee_capture_image */
/* Demangled: fpc_tee_capture_image */
int fpc_tee_capture_image(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE8_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE8_N7android8hardware20hidl_death_recipientE;

/* Symbol: fpc_tee_identify */
/* Demangled: fpc_tee_identify */
int fpc_tee_identify(void);

/* Symbol: fpc_tee_get_sensor_otp_info */
/* Demangled: fpc_tee_get_sensor_otp_info */
int fpc_tee_get_sensor_otp_info(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: fpc_tee_kpi_start */
/* Demangled: fpc_tee_kpi_start */
int fpc_tee_kpi_start(void);

/* Symbol: fpc_tee_status_irq */
/* Demangled: fpc_tee_status_irq */
int fpc_tee_status_irq(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::runSensorTest(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&, com::fingerprints::extension::V1_0::SensorTest const&, com::fingerprints::extension::V1_0::SensorTestInput const&) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern void* _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE;

/* Symbol: fpc_tee_authorize_enrol */
/* Demangled: fpc_tee_authorize_enrol */
int fpc_tee_authorize_enrol(void);

/* Symbol: fpc_tee_clear_cancel */
/* Demangled: fpc_tee_clear_cancel */
int fpc_tee_clear_cancel(void);

/* Symbol: fpc_tee_init_hw_auth */
/* Demangled: fpc_tee_init_hw_auth */
int fpc_tee_init_hw_auth(void);

/* Symbol: fpc_tee_load_template_db */
/* Demangled: fpc_tee_load_template_db */
int fpc_tee_load_template_db(void);

/* Symbol: add_sensortest_service */
/* Demangled: add_sensortest_service */
int add_sensortest_service(void);

/* Symbol: fpc_sense_touch_load_config */
/* Demangled: fpc_sense_touch_load_config */
int fpc_sense_touch_load_config(void);

/* Symbol: fpc_tee_sensor_release */
/* Demangled: fpc_tee_sensor_release */
int fpc_tee_sensor_release(void);

/* Symbol: fpc_irq_wait */
/* Demangled: fpc_irq_wait */
int fpc_irq_wait(void);

/* Symbol: fpc_tac_free_shared */
/* Demangled: fpc_tac_free_shared */
int fpc_tac_free_shared(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: fpc_tee_store_template_db */
/* Demangled: fpc_tee_store_template_db */
int fpc_tee_store_template_db(void);

/* Symbol: fpc_hal_ext_get_raw_image */
/* Demangled: fpc_hal_ext_get_raw_image */
int fpc_hal_ext_get_raw_image(void);

/* Symbol: fpc_tee_debug_disable_check_pixels */
/* Demangled: fpc_tee_debug_disable_check_pixels */
int fpc_tee_debug_disable_check_pixels(void);

/* Symbol: fpc_tee_begin_enrol */
/* Demangled: fpc_tee_begin_enrol */
int fpc_tee_begin_enrol(void);

/* Symbol: fpc_tee_early_stop_ctrl */
/* Demangled: fpc_tee_early_stop_ctrl */
int fpc_tee_early_stop_ctrl(void);

/* Symbol: fpc_hal_ext_free_image */
/* Demangled: fpc_hal_ext_free_image */
int fpc_hal_ext_free_image(void);

/* Symbol: fpc_tee_store_template_db_host */
/* Demangled: fpc_tee_store_template_db_host */
int fpc_tee_store_template_db_host(void);

/* Symbol: fpc_remove */
/* Demangled: fpc_remove */
int fpc_remove(void);

/* Symbol: fpc_engineering_destroy */
/* Demangled: fpc_engineering_destroy */
int fpc_engineering_destroy(void);

/* Symbol: fpc_enroll_state */
/* Demangled: fpc_enroll_state */
extern void* fpc_enroll_state;

/* Symbol: fpc_irq_wakeup_enable */
/* Demangled: fpc_irq_wakeup_enable */
int fpc_irq_wakeup_enable(void);

/* Symbol: fpc_tee_wait_finger_down_nav */
/* Demangled: fpc_tee_wait_finger_down_nav */
int fpc_tee_wait_finger_down_nav(void);

/* Symbol: fpc_sysfs_path_by_attr */
/* Demangled: fpc_sysfs_path_by_attr */
int fpc_sysfs_path_by_attr(void);

/* Symbol: fpc_tee_wait_irq */
/* Demangled: fpc_tee_wait_irq */
int fpc_tee_wait_irq(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern void* _ZTTN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest17captureOnAcquiredEPvi */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::captureOnAcquired(void*, int) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest17captureOnAcquiredEPvi(void);

/* Symbol: fpc_sense_touch_new */
/* Demangled: fpc_sense_touch_new */
int fpc_sense_touch_new(void);

/* Symbol: fpc_tee_log_build_info */
/* Demangled: fpc_tee_log_build_info */
int fpc_tee_log_build_info(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern void* _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE;

/* Symbol: fpc_worker_join_task */
/* Demangled: fpc_worker_join_task */
int fpc_worker_join_task(void);

/* Symbol: fpc_irq_wakeup_disable */
/* Demangled: fpc_irq_wakeup_disable */
int fpc_irq_wakeup_disable(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11isSupportedEv */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::isSupported() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11isSupportedEv(void);

/* Symbol: fpc_pre_enroll */
/* Demangled: fpc_pre_enroll */
int fpc_pre_enroll(void);

/* Symbol: fpc_tee_get_enrol_challenge */
/* Demangled: fpc_tee_get_enrol_challenge */
int fpc_tee_get_enrol_challenge(void);

/* Symbol: fpc_tee_sensetouch_enabled */
/* Demangled: fpc_tee_sensetouch_enabled */
int fpc_tee_sensetouch_enabled(void);

/* Symbol: fpc_tee_sensortest_get_log */
/* Demangled: fpc_tee_sensortest_get_log */
int fpc_tee_sensortest_get_log(void);

/* Symbol: fpc_tee_end_enrol */
/* Demangled: fpc_tee_end_enrol */
int fpc_tee_end_enrol(void);

/* Symbol: fpc_worker_destroy */
/* Demangled: fpc_worker_destroy */
int fpc_worker_destroy(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14captureOnErrorEPvi */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::captureOnError(void*, int) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14captureOnErrorEPvi(void);

/* Symbol: fpc_navigation_pause */
/* Demangled: fpc_navigation_pause */
int fpc_navigation_pause(void);

/* Symbol: fpc_authenticate */
/* Demangled: fpc_authenticate */
int fpc_authenticate(void);

/* Symbol: fpc_navigation_resume */
/* Demangled: fpc_navigation_resume */
int fpc_navigation_resume(void);

/* Symbol: fpc_tee_get_sensor_force_value */
/* Demangled: fpc_tee_get_sensor_force_value */
int fpc_tee_get_sensor_force_value(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest12testOnResultEPvP36fpc_hal_ext_sensortest_test_result_t */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::testOnResult(void*, fpc_hal_ext_sensortest_test_result_t*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest12testOnResultEPvP36fpc_hal_ext_sensortest_test_result_t(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::getSensorTests(std::__1::function<void (android::hardware::hidl_vec<com::fingerprints::extension::V1_0::SensorTest> const&)>) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE(void);

/* Symbol: fpc_tee_set_token_validation_enable */
/* Demangled: fpc_tee_set_token_validation_enable */
int fpc_tee_set_token_validation_enable(void);

/* Symbol: fpc_tee_navigation_force_sw_enabled */
/* Demangled: fpc_tee_navigation_force_sw_enabled */
int fpc_tee_navigation_force_sw_enabled(void);

/* Symbol: fpc_tee_delete_template */
/* Demangled: fpc_tee_delete_template */
int fpc_tee_delete_template(void);

/* Symbol: fpc_tee_init */
/* Demangled: fpc_tee_init */
int fpc_tee_init(void);

/* Symbol: fpc_tee_nav_cancelled */
/* Demangled: fpc_tee_nav_cancelled */
int fpc_tee_nav_cancelled(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern void* _ZTVN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE;

/* Symbol: add_sense_touch_service */
/* Demangled: add_sense_touch_service */
int add_sense_touch_service(void);

/* Symbol: fpc_tee_debug_get_raw_size */
/* Demangled: fpc_tee_debug_get_raw_size */
int fpc_tee_debug_get_raw_size(void);

/* Symbol: fpc_tee_wait_finger_down */
/* Demangled: fpc_tee_wait_finger_down */
int fpc_tee_wait_finger_down(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch8getForceEv */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::getForce() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch8getForceEv(void);

/* Symbol: g_dummy_device */
/* Demangled: g_dummy_device */
extern void* g_dummy_device;

/* Symbol: fpc_hal_close */
/* Demangled: fpc_hal_close */
int fpc_hal_close(void);

/* Symbol: fpc_enroll_timeout_sec */
/* Demangled: fpc_enroll_timeout_sec */
extern void* fpc_enroll_timeout_sec;

/* Symbol: fpc_error_str */
/* Demangled: fpc_error_str */
int fpc_error_str(void);

/* Symbol: fpc_tee_update_template */
/* Demangled: fpc_tee_update_template */
int fpc_tee_update_template(void);

/* Symbol: destroy_input_device */
/* Demangled: destroy_input_device */
int destroy_input_device(void);

/* Symbol: fpc_tee_get_identify_statistics */
/* Demangled: fpc_tee_get_identify_statistics */
int fpc_tee_get_identify_statistics(void);

/* Symbol: fpc_tee_sensor_cancelled */
/* Demangled: fpc_tee_sensor_cancelled */
int fpc_tee_sensor_cancelled(void);

/* Symbol: g_fpc_sensor */
/* Demangled: g_fpc_sensor */
extern void* g_fpc_sensor;

/* Symbol: fpc_sysfs_node_write */
/* Demangled: fpc_sysfs_node_write */
int fpc_sysfs_node_write(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC1EP15fpc_sense_touch */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::FingerprintSenseTouch(fpc_sense_touch*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC1EP15fpc_sense_touch(void);

/* Symbol: _ZThn8_N3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZThn8_N3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11serviceDiedEmRKN7android2wpINS5_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: fpc_cancel */
/* Demangled: fpc_cancel */
int fpc_cancel(void);

/* Symbol: fpc_enroll */
/* Demangled: fpc_enroll */
int fpc_enroll(void);

/* Symbol: fpc_tee_get_finger_ids */
/* Demangled: fpc_tee_get_finger_ids */
int fpc_tee_get_finger_ids(void);

/* Symbol: fpc_irq_set_cancel */
/* Demangled: fpc_irq_set_cancel */
int fpc_irq_set_cancel(void);

/* Symbol: fpc_tee_is_sensor_force_supported */
/* Demangled: fpc_tee_is_sensor_force_supported */
int fpc_tee_is_sensor_force_supported(void);

/* Symbol: fpc_irq_status */
/* Demangled: fpc_irq_status */
int fpc_irq_status(void);

/* Symbol: fpc_worker_run_task */
/* Demangled: fpc_worker_run_task */
int fpc_worker_run_task(void);

/* Symbol: fpc_tee_get_template_db_id */
/* Demangled: fpc_tee_get_template_db_id */
int fpc_tee_get_template_db_id(void);

/* Symbol: fpc_tee_debug_inject */
/* Demangled: fpc_tee_debug_inject */
int fpc_tee_debug_inject(void);

/* Symbol: fpc_tee_capture_image_swipe */
/* Demangled: fpc_tee_capture_image_swipe */
int fpc_tee_capture_image_swipe(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11instantiateEP22fpc_hal_ext_sensortest */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::instantiate(fpc_hal_ext_sensortest*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest11instantiateEP22fpc_hal_ext_sensortest(void);

/* Symbol: fingerprint_hal_do_async_work */
/* Demangled: fingerprint_hal_do_async_work */
int fingerprint_hal_do_async_work(void);

/* Symbol: fpc_tac_transfer */
/* Demangled: fpc_tac_transfer */
int fpc_tac_transfer(void);

/* Symbol: fpc_tee_check_finger_lost */
/* Demangled: fpc_tee_check_finger_lost */
int fpc_tee_check_finger_lost(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD1Ev(void);

/* Symbol: fpc_tee_nav_init */
/* Demangled: fpc_tee_nav_init */
int fpc_tee_nav_init(void);

/* Symbol: fpc_tee_nav_get_debug_buffer */
/* Demangled: fpc_tee_nav_get_debug_buffer */
int fpc_tee_nav_get_debug_buffer(void);

/* Symbol: fpc_tee_sensortest_run_test */
/* Demangled: fpc_tee_sensortest_run_test */
int fpc_tee_sensortest_run_test(void);

/* Symbol: fpc_tac_alloc_shared */
/* Demangled: fpc_tac_alloc_shared */
int fpc_tac_alloc_shared(void);

/* Symbol: fpc_add_dummy_service */
/* Demangled: fpc_add_dummy_service */
int fpc_add_dummy_service(void);

/* Symbol: create_input_device */
/* Demangled: create_input_device */
int create_input_device(void);

/* Symbol: fpc_irq_release */
/* Demangled: fpc_irq_release */
int fpc_irq_release(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::capture(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&, bool, bool) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb(void);

/* Symbol: fpc_tee_bio_release */
/* Demangled: fpc_tee_bio_release */
int fpc_tee_bio_release(void);

/* Symbol: fpc_tee_log_to_file_enabled */
/* Demangled: fpc_tee_log_to_file_enabled */
int fpc_tee_log_to_file_enabled(void);

/* Symbol: fpc_hal_ext_get_enhanced_image */
/* Demangled: fpc_hal_ext_get_enhanced_image */
int fpc_hal_ext_get_enhanced_image(void);

/* Symbol: fpc_tee_debug_retrieve */
/* Demangled: fpc_tee_debug_retrieve */
int fpc_tee_debug_retrieve(void);

/* Symbol: fpc_sense_touch_set_auth_mode */
/* Demangled: fpc_sense_touch_set_auth_mode */
int fpc_sense_touch_set_auth_mode(void);

/* Symbol: fpc_tee_load_template_db_host */
/* Demangled: fpc_tee_load_template_db_host */
int fpc_tee_load_template_db_host(void);

/* Symbol: fpc_sense_touch_destroy */
/* Demangled: fpc_sense_touch_destroy */
int fpc_sense_touch_destroy(void);

/* Symbol: fpc_tee_release */
/* Demangled: fpc_tee_release */
int fpc_tee_release(void);

/* Symbol: fpc_wait_finger_down */
/* Demangled: fpc_wait_finger_down */
extern void* fpc_wait_finger_down;

/* Symbol: fpc_tee_wait_finger_lost */
/* Demangled: fpc_tee_wait_finger_lost */
int fpc_tee_wait_finger_lost(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::readConfig(std::__1::function<void (com::fingerprints::extension::V1_0::SenseTouchConfig const&)>) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::setAuthMode(com::fingerprints::extension::V1_0::SenseTouchAuthenticationMode, unsigned int) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj(void);

/* Symbol: fpc_irq_init */
/* Demangled: fpc_irq_init */
int fpc_irq_init(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::getSensorInfo(std::__1::function<void (com::fingerprints::extension::V1_0::SensorInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE(void);

/* Symbol: fpc_get_authenticator_id */
/* Demangled: fpc_get_authenticator_id */
int fpc_get_authenticator_id(void);

/* Symbol: fpc_tee_sensortest_enabled */
/* Demangled: fpc_tee_sensortest_enabled */
int fpc_tee_sensortest_enabled(void);

/* Symbol: fpc_sensortest_tests */
/* Demangled: fpc_sensortest_tests */
extern void* fpc_sensortest_tests;

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC2EP15fpc_sense_touch */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::FingerprintSenseTouch(fpc_sense_touch*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchC2EP15fpc_sense_touch(void);

/* Symbol: add_dummy_sensortest_service */
/* Demangled: add_dummy_sensortest_service */
int add_dummy_sensortest_service(void);

/* Symbol: fpc_tee_set_gid */
/* Demangled: fpc_tee_set_gid */
int fpc_tee_set_gid(void);

/* Symbol: fpc_tac_release */
/* Demangled: fpc_tac_release */
int fpc_tac_release(void);

/* Symbol: fpc_tee_navigation_debug_enabled */
/* Demangled: fpc_tee_navigation_debug_enabled */
int fpc_tee_navigation_debug_enabled(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD2Ev(void);

/* Symbol: fpc_post_enroll */
/* Demangled: fpc_post_enroll */
int fpc_post_enroll(void);

/* Symbol: fpc_tee_navigation_enabled */
/* Demangled: fpc_tee_navigation_enabled */
int fpc_tee_navigation_enabled(void);

/* Symbol: fpc_tee_sensor_init */
/* Demangled: fpc_tee_sensor_init */
int fpc_tee_sensor_init(void);

/* Symbol: report_input_event */
/* Demangled: report_input_event */
int report_input_event(void);

/* Symbol: fpc_tee_sensortest_is_test_supported */
/* Demangled: fpc_tee_sensortest_is_test_supported */
int fpc_tee_sensortest_is_test_supported(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch9sInstanceE */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::sInstance */
extern void* _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch9sInstanceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC2EP22fpc_hal_ext_sensortest */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::FingerprintSensorTest(fpc_hal_ext_sensortest*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestC2EP22fpc_hal_ext_sensortest(void);

/* Symbol: fpc_tee_enrol */
/* Demangled: fpc_tee_enrol */
int fpc_tee_enrol(void);

/* Symbol: fpc_tee_get_max_number_of_templates */
/* Demangled: fpc_tee_get_max_number_of_templates */
int fpc_tee_get_max_number_of_templates(void);

/* Symbol: fpc_tee_kpi_start_sequence */
/* Demangled: fpc_tee_kpi_start_sequence */
int fpc_tee_kpi_start_sequence(void);

/* Symbol: fpc_tee_wait_for_button_down_force */
/* Demangled: fpc_tee_wait_for_button_down_force */
int fpc_tee_wait_for_button_down_force(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSenseTouch-in-com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE;

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::~FingerprintSenseTouch() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouchD0Ev(void);

/* Symbol: fpc_sensortest_new */
/* Demangled: fpc_sensortest_new */
int fpc_sensortest_new(void);

/* Symbol: fpc_worker_new */
/* Demangled: fpc_worker_new */
int fpc_worker_new(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: fpc_check_hwid */
/* Demangled: fpc_check_hwid */
int fpc_check_hwid(void);

/* Symbol: fpc_tee_force_sensor_enabled */
/* Demangled: fpc_tee_force_sensor_enabled */
int fpc_tee_force_sensor_enabled(void);

/* Symbol: fpc_tee_sensortest_capture_uncalibrated */
/* Demangled: fpc_tee_sensortest_capture_uncalibrated */
int fpc_tee_sensortest_capture_uncalibrated(void);

/* Symbol: fpc_tee_nav_exit */
/* Demangled: fpc_tee_nav_exit */
int fpc_tee_nav_exit(void);

/* Symbol: fpc_tee_nav_set_config */
/* Demangled: fpc_tee_nav_set_config */
int fpc_tee_nav_set_config(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11instantiateEP15fpc_sense_touch */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::instantiate(fpc_sense_touch*) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch11instantiateEP15fpc_sense_touch(void);

/* Symbol: fpc_enumerate */
/* Demangled: fpc_enumerate */
int fpc_enumerate(void);

/* Symbol: fpc_hal_open */
/* Demangled: fpc_hal_open */
int fpc_hal_open(void);

/* Symbol: fpc_tee_nav_get_config */
/* Demangled: fpc_tee_nav_get_config */
int fpc_tee_nav_get_config(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch17finishCalibrationEjj */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSenseTouch::finishCalibration(unsigned int, unsigned int) */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSenseTouch17finishCalibrationEjj(void);

/* Symbol: fpc_engineering_new */
/* Demangled: fpc_engineering_new */
int fpc_engineering_new(void);

/* Symbol: fpc_tee_get_build_info */
/* Demangled: fpc_tee_get_build_info */
int fpc_tee_get_build_info(void);

/* Symbol: fpc_tee_get_mqt_limits */
/* Demangled: fpc_tee_get_mqt_limits */
int fpc_tee_get_mqt_limits(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest16cancelSensorTestEv */
/* Demangled: com::fingerprints::extension::V1_0::implementation::FingerprintSensorTest::cancelSensorTest() */
int _ZN3com12fingerprints9extension4V1_014implementation21FingerprintSensorTest16cancelSensorTestEv(void);

__END_DECLS

#endif /* BEGONIA_RE_FPC_FINGERPRINT_DEFAULT_H */
