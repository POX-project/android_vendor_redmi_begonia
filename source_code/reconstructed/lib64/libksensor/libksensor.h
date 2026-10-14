/*
 * Reverse-Engineered ABI Specification for: libksensor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libksensor.so
 */

#ifndef BEGONIA_RE_LIBKSENSOR_H
#define BEGONIA_RE_LIBKSENSOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: stored_temper_min */
/* Demangled: stored_temper_min */
extern void* stored_temper_min;

/* Symbol: Array3x3_Invert_for_cal */
/* Demangled: Array3x3_Invert_for_cal */
int Array3x3_Invert_for_cal(void);

/* Symbol: Gyro_init_calibration */
/* Demangled: Gyro_init_calibration */
int Gyro_init_calibration(void);

/* Symbol: calibrate_raw_data_acc */
/* Demangled: calibrate_raw_data_acc */
int calibrate_raw_data_acc(void);

/* Symbol: mpe_set_acc_bias */
/* Demangled: mpe_set_acc_bias */
int mpe_set_acc_bias(void);

/* Symbol: dot_product */
/* Demangled: dot_product */
int dot_product(void);

/* Symbol: adjoint_for_cal */
/* Demangled: adjoint_for_cal */
int adjoint_for_cal(void);

/* Symbol: stored_temper_max */
/* Demangled: stored_temper_max */
extern void* stored_temper_max;

/* Symbol: Gyro_run_calibration */
/* Demangled: Gyro_run_calibration */
int Gyro_run_calibration(void);

/* Symbol: Acc_run_factory_calibration */
/* Demangled: Acc_run_factory_calibration */
int Acc_run_factory_calibration(void);

/* Symbol: Gyro_get_calibration_parameter */
/* Demangled: Gyro_get_calibration_parameter */
int Gyro_get_calibration_parameter(void);

/* Symbol: mpe_get_acc_mean_var */
/* Demangled: mpe_get_acc_mean_var */
int mpe_get_acc_mean_var(void);

/* Symbol: selected_axis */
/* Demangled: selected_axis */
extern void* selected_axis;

/* Symbol: mpe_set_gyro_bias */
/* Demangled: mpe_set_gyro_bias */
int mpe_set_gyro_bias(void);

/* Symbol: mpe_update_acc_calib */
/* Demangled: mpe_update_acc_calib */
int mpe_update_acc_calib(void);

/* Symbol: mpe_update_acc_factory_calib */
/* Demangled: mpe_update_acc_factory_calib */
int mpe_update_acc_factory_calib(void);

/* Symbol: Acc_get_calibration_parameter */
/* Demangled: Acc_get_calibration_parameter */
int Acc_get_calibration_parameter(void);

/* Symbol: thermal_smoothing */
/* Demangled: thermal_smoothing */
int thermal_smoothing(void);

/* Symbol: mpe_update_gyro_thermal_calib */
/* Demangled: mpe_update_gyro_thermal_calib */
int mpe_update_gyro_thermal_calib(void);

/* Symbol: thermo_a */
/* Demangled: thermo_a */
extern void* thermo_a;

/* Symbol: thermo_b */
/* Demangled: thermo_b */
extern void* thermo_b;

/* Symbol: thmo_avg_buf */
/* Demangled: thmo_avg_buf */
extern void* thmo_avg_buf;

/* Symbol: mpe_get_gyro_bias */
/* Demangled: mpe_get_gyro_bias */
int mpe_get_gyro_bias(void);

/* Symbol: is_gyro_static */
/* Demangled: is_gyro_static */
int is_gyro_static(void);

/* Symbol: Acc_init_calibration */
/* Demangled: Acc_init_calibration */
int Acc_init_calibration(void);

/* Symbol: Gyro_run_factory_calibration */
/* Demangled: Gyro_run_factory_calibration */
int Gyro_run_factory_calibration(void);

/* Symbol: array_multiply_for_cal */
/* Demangled: array_multiply_for_cal */
int array_multiply_for_cal(void);

/* Symbol: MINOR_for_cal */
/* Demangled: MINOR_for_cal */
int MINOR_for_cal(void);

/* Symbol: is_acc_static */
/* Demangled: is_acc_static */
int is_acc_static(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: mpe_get_acc_bias */
/* Demangled: mpe_get_acc_bias */
int mpe_get_acc_bias(void);

/* Symbol: mpe_init_gyro_calib */
/* Demangled: mpe_init_gyro_calib */
int mpe_init_gyro_calib(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: mpe_init_acc_calib */
/* Demangled: mpe_init_acc_calib */
int mpe_init_acc_calib(void);

/* Symbol: mpe_get_gyro_mean_var */
/* Demangled: mpe_get_gyro_mean_var */
int mpe_get_gyro_mean_var(void);

/* Symbol: thermo_least_square */
/* Demangled: thermo_least_square */
extern void* thermo_least_square;

/* Symbol: Acc_run_calibration */
/* Demangled: Acc_run_calibration */
int Acc_run_calibration(void);

/* Symbol: mpe_update_gyro_factory_thermal_calib */
/* Demangled: mpe_update_gyro_factory_thermal_calib */
int mpe_update_gyro_factory_thermal_calib(void);

/* Symbol: det_for_cal */
/* Demangled: det_for_cal */
int det_for_cal(void);

/* Symbol: SMA_temperature */
/* Demangled: SMA_temperature */
extern void* SMA_temperature;

/* Symbol: Array4x4_Invert_for_cal */
/* Demangled: Array4x4_Invert_for_cal */
int Array4x4_Invert_for_cal(void);

/* Symbol: calibrate_raw_data_gyro */
/* Demangled: calibrate_raw_data_gyro */
int calibrate_raw_data_gyro(void);

/* Symbol: storage_data_account */
/* Demangled: storage_data_account */
extern void* storage_data_account;

__END_DECLS

#endif /* BEGONIA_RE_LIBKSENSOR_H */
