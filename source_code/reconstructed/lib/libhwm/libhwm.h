/*
 * Reverse-Engineered ABI Specification for: libhwm.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libhwm.so
 */

#ifndef BEGONIA_RE_LIBHWM_H
#define BEGONIA_RE_LIBHWM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: als_get_static_calibration */
/* Demangled: als_get_static_calibration */
int als_get_static_calibration(void);

/* Symbol: als_set_backlight_bias */
/* Demangled: als_set_backlight_bias */
int als_set_backlight_bias(void);

/* Symbol: alsps_read_nvram */
/* Demangled: alsps_read_nvram */
int alsps_read_nvram(void);

/* Symbol: sar_init */
/* Demangled: sar_init */
int sar_init(void);

/* Symbol: calculate_psensor_max_value */
/* Demangled: calculate_psensor_max_value */
int calculate_psensor_max_value(void);

/* Symbol: calculate_psensor_unit_value */
/* Demangled: calculate_psensor_unit_value */
int calculate_psensor_unit_value(void);

/* Symbol: gyroscope_open */
/* Demangled: gyroscope_open */
int gyroscope_open(void);

/* Symbol: sar_enable_cali */
/* Demangled: sar_enable_cali */
int sar_enable_cali(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: XM_get_psensor_threshold */
/* Demangled: XM_get_psensor_threshold */
int XM_get_psensor_threshold(void);

/* Symbol: sar_get_cali */
/* Demangled: sar_get_cali */
int sar_get_cali(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: do_calibration */
/* Demangled: do_calibration */
int do_calibration(void);

/* Symbol: get_psensor_data */
/* Demangled: get_psensor_data */
int get_psensor_data(void);

/* Symbol: gyroscope_get_static_calibration */
/* Demangled: gyroscope_get_static_calibration */
int gyroscope_get_static_calibration(void);

/* Symbol: sar_get_data */
/* Demangled: sar_get_data */
int sar_get_data(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: gyroscope_enable_cali */
/* Demangled: gyroscope_enable_cali */
int gyroscope_enable_cali(void);

/* Symbol: alsps_close */
/* Demangled: alsps_close */
int alsps_close(void);

/* Symbol: gsensor_get_static_calibration */
/* Demangled: gsensor_get_static_calibration */
int gsensor_get_static_calibration(void);

/* Symbol: gyroscope_close */
/* Demangled: gyroscope_close */
int gyroscope_close(void);

/* Symbol: msensor_close */
/* Demangled: msensor_close */
int msensor_close(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: als_set_static_calibration */
/* Demangled: als_set_static_calibration */
int als_set_static_calibration(void);

/* Symbol: gsensor_enable_cali */
/* Demangled: gsensor_enable_cali */
int gsensor_enable_cali(void);

/* Symbol: alsps_read */
/* Demangled: alsps_read */
int alsps_read(void);

/* Symbol: do_gyroscope_calibration */
/* Demangled: do_gyroscope_calibration */
int do_gyroscope_calibration(void);

/* Symbol: gyroscope_do_selftest */
/* Demangled: gyroscope_do_selftest */
int gyroscope_do_selftest(void);

/* Symbol: checkGyroscopeData */
/* Demangled: checkGyroscopeData */
int checkGyroscopeData(void);

/* Symbol: gsensor_self_test */
/* Demangled: gsensor_self_test */
int gsensor_self_test(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: gsensor_do_selftest */
/* Demangled: gsensor_do_selftest */
int gsensor_do_selftest(void);

/* Symbol: msensor_do_selftest */
/* Demangled: msensor_do_selftest */
int msensor_do_selftest(void);

/* Symbol: clear_psensor_calibration */
/* Demangled: clear_psensor_calibration */
int clear_psensor_calibration(void);

/* Symbol: alsps_calibration */
/* Demangled: alsps_calibration */
int alsps_calibration(void);

/* Symbol: alsps_get_cali */
/* Demangled: alsps_get_cali */
int alsps_get_cali(void);

/* Symbol: gsensor_calibration */
/* Demangled: gsensor_calibration */
int gsensor_calibration(void);

/* Symbol: gsensor_close */
/* Demangled: gsensor_close */
int gsensor_close(void);

/* Symbol: gsensor_set_static_calibration */
/* Demangled: gsensor_set_static_calibration */
int gsensor_set_static_calibration(void);

/* Symbol: gyroscope_init */
/* Demangled: gyroscope_init */
int gyroscope_init(void);

/* Symbol: gyroscope_read */
/* Demangled: gyroscope_read */
int gyroscope_read(void);

/* Symbol: alsps_ps_enable_cali */
/* Demangled: alsps_ps_enable_cali */
int alsps_ps_enable_cali(void);

/* Symbol: alsps_rst_cali */
/* Demangled: alsps_rst_cali */
int alsps_rst_cali(void);

/* Symbol: get_gyroscope_calibration */
/* Demangled: get_gyroscope_calibration */
int get_gyroscope_calibration(void);

/* Symbol: sar_write_nvram */
/* Demangled: sar_write_nvram */
int sar_write_nvram(void);

/* Symbol: alsps_set_cali */
/* Demangled: alsps_set_cali */
int alsps_set_cali(void);

/* Symbol: gsensor_open */
/* Demangled: gsensor_open */
int gsensor_open(void);

/* Symbol: gsensor_update_nvram */
/* Demangled: gsensor_update_nvram */
int gsensor_update_nvram(void);

/* Symbol: gyroscope_calibration */
/* Demangled: gyroscope_calibration */
int gyroscope_calibration(void);

/* Symbol: gyroscope_set_static_calibration */
/* Demangled: gyroscope_set_static_calibration */
int gyroscope_set_static_calibration(void);

/* Symbol: msensor_open */
/* Demangled: msensor_open */
int msensor_open(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: als_start_static_calibration */
/* Demangled: als_start_static_calibration */
int als_start_static_calibration(void);

/* Symbol: sar_get_static_calibration */
/* Demangled: sar_get_static_calibration */
int sar_get_static_calibration(void);

/* Symbol: sar_start_static_calibration */
/* Demangled: sar_start_static_calibration */
int sar_start_static_calibration(void);

/* Symbol: set_psensor_threshold */
/* Demangled: set_psensor_threshold */
int set_psensor_threshold(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: do_gsensor_calibration */
/* Demangled: do_gsensor_calibration */
int do_gsensor_calibration(void);

/* Symbol: get_psensor_min_value */
/* Demangled: get_psensor_min_value */
int get_psensor_min_value(void);

/* Symbol: gsensor_reset_nvram */
/* Demangled: gsensor_reset_nvram */
int gsensor_reset_nvram(void);

/* Symbol: calculateStandardCalibration */
/* Demangled: calculateStandardCalibration */
int calculateStandardCalibration(void);

/* Symbol: get_gsensor_calibration */
/* Demangled: get_gsensor_calibration */
int get_gsensor_calibration(void);

/* Symbol: gsensor_read_nvram */
/* Demangled: gsensor_read_nvram */
int gsensor_read_nvram(void);

/* Symbol: sar_close */
/* Demangled: sar_close */
int sar_close(void);

/* Symbol: sar_open */
/* Demangled: sar_open */
int sar_open(void);

/* Symbol: alsps_set_threshold */
/* Demangled: alsps_set_threshold */
int alsps_set_threshold(void);

/* Symbol: alsps_write_nvram */
/* Demangled: alsps_write_nvram */
int alsps_write_nvram(void);

/* Symbol: get_psensor_max_value */
/* Demangled: get_psensor_max_value */
int get_psensor_max_value(void);

/* Symbol: gsensor_write_nvram */
/* Demangled: gsensor_write_nvram */
int gsensor_write_nvram(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: XM_set_psensor_threshold */
/* Demangled: XM_set_psensor_threshold */
int XM_set_psensor_threshold(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: checkAccelerometerData */
/* Demangled: checkAccelerometerData */
int checkAccelerometerData(void);

/* Symbol: gyroscope_read_nvram */
/* Demangled: gyroscope_read_nvram */
int gyroscope_read_nvram(void);

/* Symbol: libhwm_wait_delay */
/* Demangled: libhwm_wait_delay */
int libhwm_wait_delay(void);

/* Symbol: gsensor_get_cali */
/* Demangled: gsensor_get_cali */
int gsensor_get_cali(void);

/* Symbol: gsensor_start_static_calibration */
/* Demangled: gsensor_start_static_calibration */
int gsensor_start_static_calibration(void);

/* Symbol: gyroscope_start_static_calibration */
/* Demangled: gyroscope_start_static_calibration */
int gyroscope_start_static_calibration(void);

/* Symbol: gyroscope_write_nvram */
/* Demangled: gyroscope_write_nvram */
int gyroscope_write_nvram(void);

/* Symbol: sar_read_nvram */
/* Demangled: sar_read_nvram */
int sar_read_nvram(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: gsensor_rst_cali */
/* Demangled: gsensor_rst_cali */
int gsensor_rst_cali(void);

/* Symbol: gyroscope_rst_cali */
/* Demangled: gyroscope_rst_cali */
int gyroscope_rst_cali(void);

/* Symbol: XM_enable_ps_calibration */
/* Demangled: XM_enable_ps_calibration */
int XM_enable_ps_calibration(void);

/* Symbol: gsensor_set_cali */
/* Demangled: gsensor_set_cali */
int gsensor_set_cali(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: alsps_open */
/* Demangled: alsps_open */
int alsps_open(void);

/* Symbol: clear_gsensor_calibration */
/* Demangled: clear_gsensor_calibration */
int clear_gsensor_calibration(void);

/* Symbol: gsensor_init */
/* Demangled: gsensor_init */
int gsensor_init(void);

/* Symbol: gsensor_poll_data */
/* Demangled: gsensor_poll_data */
int gsensor_poll_data(void);

/* Symbol: gsensor_read */
/* Demangled: gsensor_read */
int gsensor_read(void);

/* Symbol: gyroscope_get_cali */
/* Demangled: gyroscope_get_cali */
int gyroscope_get_cali(void);

/* Symbol: libhwm_current_ms */
/* Demangled: libhwm_current_ms */
int libhwm_current_ms(void);

/* Symbol: als_set_cali */
/* Demangled: als_set_cali */
int als_set_cali(void);

/* Symbol: getGravityStandard */
/* Demangled: getGravityStandard */
int getGravityStandard(void);

/* Symbol: get_psensor_threshold */
/* Demangled: get_psensor_threshold */
int get_psensor_threshold(void);

/* Symbol: calculate_psensor_min_value */
/* Demangled: calculate_psensor_min_value */
int calculate_psensor_min_value(void);

/* Symbol: clear_gyroscope_calibration */
/* Demangled: clear_gyroscope_calibration */
int clear_gyroscope_calibration(void);

/* Symbol: gsensor_enable_selftest */
/* Demangled: gsensor_enable_selftest */
int gsensor_enable_selftest(void);

/* Symbol: gsensor_selftest */
/* Demangled: gsensor_selftest */
int gsensor_selftest(void);

/* Symbol: gyroscope_set_cali */
/* Demangled: gyroscope_set_cali */
int gyroscope_set_cali(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBHWM_H */
