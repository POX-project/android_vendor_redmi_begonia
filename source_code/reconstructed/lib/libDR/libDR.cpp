/*
 * Reverse-Engineered Source for: libDR.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libDR"

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
#include "libDR.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SfLpf::SfLpf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpfC2ERK12ConfigParams(void) {
    ALOGD("_ZN5SfLpfC2ERK12ConfigParams() called");
    return 0;
}

/* Exported Object: vtable for SfLpf */
extern "C" __attribute__((visibility("default"))) void* _ZTV5SfLpf = NULL;

/* Demangled: VehBodOrient::VboGrp::get_select_g_from_buff(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp22get_select_g_from_buffEjj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp22get_select_g_from_buffEjj() called");
    return 0;
}

/* Exported Object: matching */
extern "C" __attribute__((visibility("default"))) void* matching = NULL;

/* Demangled: SfLpf::alloc_and_ini_ptr_to_ptr(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf24alloc_and_ini_ptr_to_ptrEii(void) {
    ALOGD("_ZN5SfLpf24alloc_and_ini_ptr_to_ptrEii() called");
    return 0;
}

/* Demangled: SfSatt::protect_ekf_time_setting() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt24protect_ekf_time_settingEv(void) {
    ALOGD("_ZN6SfSatt24protect_ekf_time_settingEv() called");
    return 0;
}

/* Demangled: UDR::read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR20read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void) {
    ALOGD("_ZN3UDR20read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: v3_update_buffer */
extern "C" __attribute__((visibility("default"))) int v3_update_buffer(void) {
    ALOGD("v3_update_buffer() called");
    return 0;
}

/* Exported Object: vtable for SfSgb */
extern "C" __attribute__((visibility("default"))) void* _ZTV5SfSgb = NULL;

/* Demangled: SfSatt::meas_para_struct::meas_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16meas_para_structC1Ev(void) {
    ALOGD("_ZN6SfSatt16meas_para_structC1Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_Date::MAGtype_Date() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm12MAGtype_DateC2Ev(void) {
    ALOGD("_ZN5SfWmm12MAGtype_DateC2Ev() called");
    return 0;
}

/* Exported Object: Q_MX */
extern "C" __attribute__((visibility("default"))) void* Q_MX = NULL;

/* Demangled: SfGb::gbuff_struct::gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb12gbuff_structC2Ev(void) {
    ALOGD("_ZN4SfGb12gbuff_structC2Ev() called");
    return 0;
}

/* Demangled: InterpMems::interp_gyro(sf_mems_msg_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMems11interp_gyroEP18sf_mems_msg_structd(void) {
    ALOGD("_ZN10InterpMems11interp_gyroEP18sf_mems_msg_structd() called");
    return 0;
}

/* Demangled: Matrix::mMultSym(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix8mMultSymERKS_(void) {
    ALOGD("_ZN6Matrix8mMultSymERKS_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_alpha(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF9set_alphaEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF9set_alphaEPKd() called");
    return 0;
}

/* Demangled: UdrLpf::get_icm40607_gyro_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf28get_icm40607_gyro_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf28get_icm40607_gyro_para_200hzEv() called");
    return 0;
}

/* Exported Object: dr */
extern "C" __attribute__((visibility("default"))) void* dr = NULL;

/* Exported Object: UdrEkf::UpdLevEnum::StaticVel::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticVel5R_COVE = NULL;

/* Demangled: sf_timer_diff(sf_time_struct, sf_time_struct) */
extern "C" __attribute__((visibility("default"))) int _Z13sf_timer_diff14sf_time_structS_(void) {
    ALOGD("_Z13sf_timer_diff14sf_time_structS_() called");
    return 0;
}

/* Demangled: SfSgb::~SfSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgbD0Ev(void) {
    ALOGD("_ZN5SfSgbD0Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_AllocateSphVarMemory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm24MAG_AllocateSphVarMemoryEi(void) {
    ALOGD("_ZN5SfWmm24MAG_AllocateSphVarMemoryEi() called");
    return 0;
}

/* Demangled: UdrEkf::nhc_measurement_update(double, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22nhc_measurement_updateEdijj(void) {
    ALOGD("_ZN6UdrEkf22nhc_measurement_updateEdijj() called");
    return 0;
}

/* Demangled: InertialStaticMove::detect_static_move(UdrLpf const&, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove18detect_static_moveERK6UdrLpfP18sf_mems_msg_struct(void) {
    ALOGD("_ZN18InertialStaticMove18detect_static_moveERK6UdrLpfP18sf_mems_msg_struct() called");
    return 0;
}

/* Exported Object: sm */
extern "C" __attribute__((visibility("default"))) void* sm = NULL;

/* Demangled: PdrEkf::get_feedback_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf17get_feedback_flagEv(void) {
    ALOGD("_ZN6PdrEkf17get_feedback_flagEv() called");
    return 0;
}

/* Demangled: SystemStateControl::switch_fine_level(UdrEkf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17switch_fine_levelERK6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl17switch_fine_levelERK6UdrEkf() called");
    return 0;
}

/* Exported Object: B */
extern "C" __attribute__((visibility("default"))) void* B = NULL;

/* Exported Object: close_location_meter */
extern "C" __attribute__((visibility("default"))) void* close_location_meter = NULL;

/* Demangled: UdrEkf::restore_cvb(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf11restore_cvbERK6Matrix(void) {
    ALOGD("_ZN6UdrEkf11restore_cvbERK6Matrix() called");
    return 0;
}

/* Demangled: SfSatt::test_pred_x_by_dcm() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18test_pred_x_by_dcmEv(void) {
    ALOGD("_ZN6SfSatt18test_pred_x_by_dcmEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::~Rts() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3RtsD1Ev(void) {
    ALOGD("_ZN9CarAccelB3RtsD1Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_poly_gyro_bias(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias18get_poly_gyro_biasEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias18get_poly_gyro_biasEPd() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: InterpMems::~InterpMems() */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMemsD2Ev(void) {
    ALOGD("_ZN10InterpMemsD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::ctrl_para_struct::~ctrl_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ctrl_para_structD1Ev(void) {
    ALOGD("_ZN6SfSatt16ctrl_para_structD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::is_test_reset_p_of_ab() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt21is_test_reset_p_of_abEv(void) {
    ALOGD("_ZNK6SfSatt21is_test_reset_p_of_abEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSAtt::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt10R_UNIT_COVE = NULL;

/* Demangled: VehBodOrient::VboGrp::get_buff_idx() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp12get_buff_idxEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp12get_buff_idxEv() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::reforward_filt() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts14reforward_filtEv(void) {
    ALOGD("_ZN9CarAccelB3Rts14reforward_filtEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticVel::R_INIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticVel10R_INIT_COVE = NULL;

/* Demangled: VehBodOrient::VboGrp::comp_mean_of_gad_var(VehBodOrient::VboFbEnum::FbType const*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp20comp_mean_of_gad_varEPKNS_9VboFbEnum6FbTypeEPdS5_(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp20comp_mean_of_gad_varEPKNS_9VboFbEnum6FbTypeEPdS5_() called");
    return 0;
}

/* Demangled: PdrGb::comp_gyro_biases(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGb16comp_gyro_biasesERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structE(void) {
    ALOGD("_ZN5PdrGb16comp_gyro_biasesERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structE() called");
    return 0;
}

/* Demangled: PdrMheading::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading11meas_structC1Ev(void) {
    ALOGD("_ZN11PdrMheading11meas_structC1Ev() called");
    return 0;
}

/* Demangled: SfStaticDetect::~SfStaticDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetectD2Ev(void) {
    ALOGD("_ZN14SfStaticDetectD2Ev() called");
    return 0;
}

/* Demangled: safe_asin(double) */
extern "C" __attribute__((visibility("default"))) int _Z9safe_asind(void) {
    ALOGD("_Z9safe_asind() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GetDeg(double, double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm10MAG_GetDegEdPKdPd(void) {
    ALOGD("_ZN5SfWmm10MAG_GetDegEdPKdPd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_beta_var_sf() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF15get_beta_var_sfEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF15get_beta_var_sfEv() called");
    return 0;
}

/* Demangled: mpe_set_radio_information */
extern "C" __attribute__((visibility("default"))) int mpe_set_radio_information(void) {
    ALOGD("mpe_set_radio_information() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: SfSatt::ini_ekf() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt7ini_ekfEv(void) {
    ALOGD("_ZN6SfSatt7ini_ekfEv() called");
    return 0;
}

/* Demangled: SfSatt::~SfSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSattD0Ev(void) {
    ALOGD("_ZN6SfSattD0Ev() called");
    return 0;
}

/* Demangled: sf_check_ts_sec(double, sf_time_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z15sf_check_ts_secdP14sf_time_struct(void) {
    ALOGD("_Z15sf_check_ts_secdP14sf_time_struct() called");
    return 0;
}

/* Demangled: UdrEkf::get_use_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12get_use_flagEv(void) {
    ALOGD("_ZN6UdrEkf12get_use_flagEv() called");
    return 0;
}

/* Demangled: SfIsm::get_meas_and_past_avg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm21get_meas_and_past_avgEi(void) {
    ALOGD("_ZN5SfIsm21get_meas_and_past_avgEi() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gyro_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf17get_adv_gyro_tempEPd(void) {
    ALOGD("_ZNK5SfLpf17get_adv_gyro_tempEPd() called");
    return 0;
}

/* Demangled: SfSatt::select_meas_type() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16select_meas_typeEv(void) {
    ALOGD("_ZN6SfSatt16select_meas_typeEv() called");
    return 0;
}

/* Demangled: SfSatt::is_test_turn_off_pred() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt21is_test_turn_off_predEv(void) {
    ALOGD("_ZNK6SfSatt21is_test_turn_off_predEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::average(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect7averageEPdi(void) {
    ALOGD("_ZN14SfStaticDetect7averageEPdi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_len() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp12get_buff_lenEv(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp12get_buff_lenEv() called");
    return 0;
}

/* Demangled: SfSgb::stat_struct::stat_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb11stat_structC2Ev(void) {
    ALOGD("_ZN5SfSgb11stat_structC2Ev() called");
    return 0;
}

/* Demangled: mpe_get_euler_angle */
extern "C" __attribute__((visibility("default"))) int mpe_get_euler_angle(void) {
    ALOGD("mpe_get_euler_angle() called");
    return 0;
}

/* Demangled: PdrMheading::set_uncalib_mag(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading15set_uncalib_magEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN11PdrMheading15set_uncalib_magEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: DataProcess::rt_postprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14rt_postprocessEv(void) {
    ALOGD("_ZN11DataProcess14rt_postprocessEv() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::decrease_var(int, int, int, int, double const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct12decrease_varEiiiiPKd(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct12decrease_varEiiiiPKd() called");
    return 0;
}

/* Demangled: GnssAccelDecel::~GnssAccelDecel() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecelD1Ev(void) {
    ALOGD("_ZN14GnssAccelDecelD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_mag_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf16get_adv_mag_tempEPd(void) {
    ALOGD("_ZNK5SfLpf16get_adv_mag_tempEPd() called");
    return 0;
}

/* Demangled: SfSatt::alloc_ctrl_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15alloc_ctrl_paraEv(void) {
    ALOGD("_ZN6SfSatt15alloc_ctrl_paraEv() called");
    return 0;
}

/* Demangled: SfSatt::reset_p_accel_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18reset_p_accel_biasEv(void) {
    ALOGD("_ZN6SfSatt18reset_p_accel_biasEv() called");
    return 0;
}

/* Demangled: Barometer::normal_ini() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer10normal_iniEv(void) {
    ALOGD("_ZN9Barometer10normal_iniEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticVel::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticVel4NameE = NULL;

/* Demangled: SystemStateControl::check_cvb_dir_struct::reset_cnt() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_struct9reset_cntEv(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_struct9reset_cntEv() called");
    return 0;
}

/* Demangled: array_multiply */
extern "C" __attribute__((visibility("default"))) int array_multiply(void) {
    ALOGD("array_multiply() called");
    return 0;
}

/* Demangled: sensor_input_data_resampling_preparation */
extern "C" __attribute__((visibility("default"))) int sensor_input_data_resampling_preparation(void) {
    ALOGD("sensor_input_data_resampling_preparation() called");
    return 0;
}

/* Demangled: DataProcess::rt_forward_gnss() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess15rt_forward_gnssEv(void) {
    ALOGD("_ZN11DataProcess15rt_forward_gnssEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::UdrUpdTypeSelect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelectC1ERK12ConfigParams(void) {
    ALOGD("_ZN16UdrUpdTypeSelectC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: PdrIgp::delay_buff_struct::delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp17delay_buff_structC2Ev(void) {
    ALOGD("_ZN6PdrIgp17delay_buff_structC2Ev() called");
    return 0;
}

/* Demangled: PdrIsm::comp_w_iqr() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm10comp_w_iqrEv(void) {
    ALOGD("_ZN6PdrIsm10comp_w_iqrEv() called");
    return 0;
}

/* Demangled: DataProcess::get_mems_contain() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess16get_mems_containEv(void) {
    ALOGD("_ZN11DataProcess16get_mems_containEv() called");
    return 0;
}

/* Demangled: UdrStaticDetect::get_last_static_gyro() */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetect20get_last_static_gyroEv(void) {
    ALOGD("_ZN15UdrStaticDetect20get_last_static_gyroEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::~VboGdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm3D1Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm3D1Ev() called");
    return 0;
}

/* Demangled: update_interval_buffer */
extern "C" __attribute__((visibility("default"))) int update_interval_buffer(void) {
    ALOGD("update_interval_buffer() called");
    return 0;
}

/* Demangled: PdrEkf::init_mat() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf8init_matEv(void) {
    ALOGD("_ZN6PdrEkf8init_matEv() called");
    return 0;
}

/* Demangled: deep_copy_gnss_struct(sf_gnss_msg_struct&, sf_gnss_msg_struct const&) */
extern "C" __attribute__((visibility("default"))) int _Z21deep_copy_gnss_structR18sf_gnss_msg_structRKS_(void) {
    ALOGD("_Z21deep_copy_gnss_structR18sf_gnss_msg_structRKS_() called");
    return 0;
}

/* Demangled: CarAccelB::~CarAccelB() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelBD2Ev(void) {
    ALOGD("_ZN9CarAccelBD2Ev() called");
    return 0;
}

/* Demangled: best_run_ax_num */
extern "C" __attribute__((visibility("default"))) int best_run_ax_num(void) {
    ALOGD("best_run_ax_num() called");
    return 0;
}

/* Exported Object: Pre_Imu_orig */
extern "C" __attribute__((visibility("default"))) void* Pre_Imu_orig = NULL;

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: Matrix::neg() */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix3negEv(void) {
    ALOGD("_ZN6Matrix3negEv() called");
    return 0;
}

/* Demangled: SfSatt::set_dcm_gb_state_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21set_dcm_gb_state_paraEv(void) {
    ALOGD("_ZN6SfSatt21set_dcm_gb_state_paraEv() called");
    return 0;
}

/* Demangled: strtoi(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z6strtoiPKc(void) {
    ALOGD("_Z6strtoiPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: mpe_get_global_acceleration */
extern "C" __attribute__((visibility("default"))) int mpe_get_global_acceleration(void) {
    ALOGD("mpe_get_global_acceleration() called");
    return 0;
}

/* Demangled: PdrMheading::PdrMheading() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheadingC1Ev(void) {
    ALOGD("_ZN11PdrMheadingC1Ev() called");
    return 0;
}

/* Demangled: DataProcess::rt_eliminate_data() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess17rt_eliminate_dataEv(void) {
    ALOGD("_ZN11DataProcess17rt_eliminate_dataEv() called");
    return 0;
}

/* Demangled: inv_matrix(int, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z10inv_matrixiR6MatrixS0_(void) {
    ALOGD("_Z10inv_matrixiR6MatrixS0_() called");
    return 0;
}

/* Demangled: best_best_ax */
extern "C" __attribute__((visibility("default"))) int best_best_ax(void) {
    ALOGD("best_best_ax() called");
    return 0;
}

/* Demangled: SfSgb::check_whether_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb19check_whether_resetEv(void) {
    ALOGD("_ZN5SfSgb19check_whether_resetEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_mu(UdrUpdTypeSelect::MuEnum::MuType) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect6get_muENS_6MuEnum6MuTypeE(void) {
    ALOGD("_ZN16UdrUpdTypeSelect6get_muENS_6MuEnum6MuTypeE() called");
    return 0;
}

/* Demangled: UdrLpf::set_adv_gnss_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf21set_adv_gnss_lpf_paraEv(void) {
    ALOGD("_ZN6UdrLpf21set_adv_gnss_lpf_paraEv() called");
    return 0;
}

/* Exported Object: acc_final_adj_bias */
extern "C" __attribute__((visibility("default"))) void* acc_final_adj_bias = NULL;

/* Exported Object: gyr_static_reset_flag */
extern "C" __attribute__((visibility("default"))) void* gyr_static_reset_flag = NULL;

/* Demangled: PdrLpf::set_icm40607_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_r_ptr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_gnss_r_ptrEi(void) {
    ALOGD("_ZN11DataProcess14get_gnss_r_ptrEi() called");
    return 0;
}

/* Demangled: UdrLpf::UdrLpf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpfC1ERK12ConfigParams(void) {
    ALOGD("_ZN6UdrLpfC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: SfWmm::SfWmm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmmC2Ev(void) {
    ALOGD("_ZN5SfWmmC2Ev() called");
    return 0;
}

/* Demangled: InertialStaticMove::comp_sm_dist(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove12comp_sm_distEPdS0_(void) {
    ALOGD("_ZN18InertialStaticMove12comp_sm_distEPdS0_() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_dir_struct::accumulate_pos_neg(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct18accumulate_pos_negERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct18accumulate_pos_negERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_substitute_poor_pfb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl26coarse_substitute_poor_pfbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl26coarse_substitute_poor_pfbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: UdrEkf::get_Inno(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8get_InnoEi(void) {
    ALOGD("_ZN6UdrEkf8get_InnoEi() called");
    return 0;
}

/* Demangled: SystemStateControl::using_ekf_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl32using_ekf_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl32using_ekf_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::det_g_nb_b_dir(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess14det_g_nb_b_dirERKNS_6VboGrpEjj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess14det_g_nb_b_dirERKNS_6VboGrpEjj() called");
    return 0;
}

/* Exported Object: ATT_VAR_ACC */
extern "C" __attribute__((visibility("default"))) void* ATT_VAR_ACC = NULL;

/* Demangled: DataProcess::gnss_input(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess10gnss_inputEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN11DataProcess10gnss_inputEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: DataProcess::transfer_axis(sf_uncalib_sensor_struct*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess13transfer_axisEP24sf_uncalib_sensor_structiii(void) {
    ALOGD("_ZN11DataProcess13transfer_axisEP24sf_uncalib_sensor_structiii() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_dsd2d(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess14comp_avg_dsd2dEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess14comp_avg_dsd2dEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: SfIsm::classify_static_move(MonitorDataRate const&, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm20classify_static_moveERK15MonitorDataRatePK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfIsm20classify_static_moveERK15MonitorDataRatePK18sf_mems_msg_struct() called");
    return 0;
}

/* Exported Object: vtable for PdrLpf */
extern "C" __attribute__((visibility("default"))) void* _ZTV6PdrLpf = NULL;

/* Demangled: SfSatt::gen_sys_cov_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18gen_sys_cov_matrixEv(void) {
    ALOGD("_ZN6SfSatt18gen_sys_cov_matrixEv() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: PDR::process(MonitorDataRate&, sf_gnss_msg_struct const*, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN3PDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SfSatt::set_ekf_var_states() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18set_ekf_var_statesEv(void) {
    ALOGD("_ZN6SfSatt18set_ekf_var_statesEv() called");
    return 0;
}

/* Demangled: CarAccelB::rts_struct::reallocate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB10rts_struct10reallocateEii(void) {
    ALOGD("_ZN9CarAccelB10rts_struct10reallocateEii() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticVel::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticVel10R_UNIT_COVE = NULL;

/* Demangled: InertialAtt::cos_similarity(sf_uncalib_sensor_struct, sf_uncalib_sensor_struct) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt14cos_similarityE24sf_uncalib_sensor_structS0_(void) {
    ALOGD("_ZN11InertialAtt14cos_similarityE24sf_uncalib_sensor_structS0_() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level2(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20upd_rough_cvb_level2ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl20upd_rough_cvb_level2ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Exported Object: vtable for PdrSgb */
extern "C" __attribute__((visibility("default"))) void* _ZTV6PdrSgb = NULL;

/* Demangled: PdrIsm::comp_w_rng() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm10comp_w_rngEv(void) {
    ALOGD("_ZN6PdrIsm10comp_w_rngEv() called");
    return 0;
}

/* Demangled: UdrEkf::gnss_accel_struct::gnss_accel_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17gnss_accel_structC1Ev(void) {
    ALOGD("_ZN6UdrEkf17gnss_accel_structC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: PdrMheading::dyaw_nv_v_struct::dyaw_nv_v_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16dyaw_nv_v_structC2Ev(void) {
    ALOGD("_ZN11PdrMheading16dyaw_nv_v_structC2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_var_dot_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF21upd_var_dot_gyro_biasEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF21upd_var_dot_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::is_noisy_meas(double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp13is_noisy_measEdddd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp13is_noisy_measEdddd() called");
    return 0;
}

/* Demangled: has_invalid(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11has_invalidPKdi(void) {
    ALOGD("_Z11has_invalidPKdi() called");
    return 0;
}

/* Demangled: MonitorDataRate::monitor_hub_sensor_dr(double, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate21monitor_hub_sensor_drEdj(void) {
    ALOGD("_ZN15MonitorDataRate21monitor_hub_sensor_drEdj() called");
    return 0;
}

/* Demangled: moving_avg */
extern "C" __attribute__((visibility("default"))) int moving_avg(void) {
    ALOGD("moving_avg() called");
    return 0;
}

/* Exported Object: acc_last_gps_sec */
extern "C" __attribute__((visibility("default"))) void* acc_last_gps_sec = NULL;

/* Demangled: SfSgb::copy_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb7copy_gbEv(void) {
    ALOGD("_ZN5SfSgb7copy_gbEv() called");
    return 0;
}

/* Demangled: DataProcess::sensor_value_in_range(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess21sensor_value_in_rangeEddd(void) {
    ALOGD("_ZN11DataProcess21sensor_value_in_rangeEddd() called");
    return 0;
}

/* Demangled: MonitorDataRate::MonitorDataRate(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRateC1ERK12ConfigParams(void) {
    ALOGD("_ZN15MonitorDataRateC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: v3_noise_detected */
extern "C" __attribute__((visibility("default"))) int v3_noise_detected(void) {
    ALOGD("v3_noise_detected() called");
    return 0;
}

/* Demangled: PdrLpf::get_adv_gyro_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf17get_adv_gyro_50hzEv(void) {
    ALOGD("_ZN6PdrLpf17get_adv_gyro_50hzEv() called");
    return 0;
}

/* Demangled: PdrLpf::set_mmc5603_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: PdrLpf::set_bmi160_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::stop_feedback() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct13stop_feedbackEv(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct13stop_feedbackEv() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::reset_stop_feedback() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct19reset_stop_feedbackEv(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct19reset_stop_feedbackEv() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level0(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20upd_rough_cvb_level0ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl20upd_rough_cvb_level0ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Exported Object: ACC_correct */
extern "C" __attribute__((visibility("default"))) void* ACC_correct = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: SfIsm::results_struct::results_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm14results_structC2Ev(void) {
    ALOGD("_ZN5SfIsm14results_structC2Ev() called");
    return 0;
}

/* Demangled: Matrix::mT(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix2mTERKS_(void) {
    ALOGD("_ZN6Matrix2mTERKS_() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_dir_struct::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct5resetEv(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct5resetEv() called");
    return 0;
}

/* Demangled: Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN8WatchdogD2Ev(void) {
    ALOGD("_ZN8WatchdogD2Ev() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_r_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_gnss_r_ptrEv(void) {
    ALOGD("_ZN11DataProcess14get_gnss_r_ptrEv() called");
    return 0;
}

/* Demangled: SfLpf::dec_filt_accel(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14dec_filt_accelEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf14dec_filt_accelEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: Barometer::do_baro_smoo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer12do_baro_smooEv(void) {
    ALOGD("_ZN9Barometer12do_baro_smooEv() called");
    return 0;
}

/* Demangled: CarAccelB::sub_kf_buff_struct::~sub_kf_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18sub_kf_buff_structD2Ev(void) {
    ALOGD("_ZN9CarAccelB18sub_kf_buff_structD2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::cyclic_jacobi_eig(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess17cyclic_jacobi_eigEPdS1_S1_i(void) {
    ALOGD("_ZN12VehBodOrient7VboLess17cyclic_jacobi_eigEPdS1_S1_i() called");
    return 0;
}

/* Demangled: mpe_calculate_GEO_rotation_vector */
extern "C" __attribute__((visibility("default"))) int mpe_calculate_GEO_rotation_vector(void) {
    ALOGD("mpe_calculate_GEO_rotation_vector() called");
    return 0;
}

/* Demangled: eul2Cxy(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z7eul2CxyR6MatrixS0_(void) {
    ALOGD("_Z7eul2CxyR6MatrixS0_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_beta(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF8set_betaEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF8set_betaEPKd() called");
    return 0;
}

/* Exported Object: acc_static_gps_cnt */
extern "C" __attribute__((visibility("default"))) void* acc_static_gps_cnt = NULL;

/* Exported Object: acc_sum_roll */
extern "C" __attribute__((visibility("default"))) void* acc_sum_roll = NULL;

/* Demangled: SfSatt::get_general_dyn_coef_matrix_gp_gb_ab(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt36get_general_dyn_coef_matrix_gp_gb_abER6Matrix(void) {
    ALOGD("_ZN6SfSatt36get_general_dyn_coef_matrix_gp_gb_abER6Matrix() called");
    return 0;
}

/* Demangled: InertialStaticMove::interp1q(double, double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove8interp1qEddddd(void) {
    ALOGD("_ZN18InertialStaticMove8interp1qEddddd() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: calc_nmea_checksum(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z18calc_nmea_checksumPKc(void) {
    ALOGD("_Z18calc_nmea_checksumPKc() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_get_gnss_flag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17set_get_gnss_flagEb(void) {
    ALOGD("_ZN9CarAccelB5SubKF17set_get_gnss_flagEb() called");
    return 0;
}

/* Demangled: UDR::apply_cbv_reset(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR15apply_cbv_resetEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR15apply_cbv_resetEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SystemStateControl::does_get_fine_cvb_in_sys_level() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl30does_get_fine_cvb_in_sys_levelEv(void) {
    ALOGD("_ZN18SystemStateControl30does_get_fine_cvb_in_sys_levelEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::wei_avg_by_p(Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB3Rts12wei_avg_by_pERK6MatrixS3_S3_S3_RS1_(void) {
    ALOGD("_ZNK9CarAccelB3Rts12wei_avg_by_pERK6MatrixS3_S3_S3_RS1_() called");
    return 0;
}

/* Demangled: UdrEkf::get_vel_dir_pred() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16get_vel_dir_predEv(void) {
    ALOGD("_ZN6UdrEkf16get_vel_dir_predEv() called");
    return 0;
}

/* Demangled: PdrSgb::PdrSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgbC2Ev(void) {
    ALOGD("_ZN6PdrSgbC2Ev() called");
    return 0;
}

/* Demangled: Matrix::operator-(Matrix const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixmiERKS_(void) {
    ALOGD("_ZNK6MatrixmiERKS_() called");
    return 0;
}

/* Demangled: SfSatt::get_general_dyn_coef_matrix_gp_gb(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt33get_general_dyn_coef_matrix_gp_gbER6Matrix(void) {
    ALOGD("_ZN6SfSatt33get_general_dyn_coef_matrix_gp_gbER6Matrix() called");
    return 0;
}

/* Exported Object: ts */
extern "C" __attribute__((visibility("default"))) void* ts = NULL;

/* Demangled: PdrMheading::out_struct::out_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading10out_structC1Ev(void) {
    ALOGD("_ZN11PdrMheading10out_structC1Ev() called");
    return 0;
}

/* Demangled: Matrix::operator()(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixclEii(void) {
    ALOGD("_ZN6MatrixclEii() called");
    return 0;
}

/* Demangled: SfLpf::general_lpf(SfLpf::smoop_struct&, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf11general_lpfERNS_12smoop_structEPKd(void) {
    ALOGD("_ZN5SfLpf11general_lpfERNS_12smoop_structEPKd() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::~nw_shape_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_structD2Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_structD2Ev() called");
    return 0;
}

/* Exported Object: count_erasing_reason */
extern "C" __attribute__((visibility("default"))) void* count_erasing_reason = NULL;

/* Demangled: v3_sort */
extern "C" __attribute__((visibility("default"))) int v3_sort(void) {
    ALOGD("v3_sort() called");
    return 0;
}

/* Demangled: SfSatt::assign_intensity_into_r(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt23assign_intensity_into_rERK6Matrix(void) {
    ALOGD("_ZN6SfSatt23assign_intensity_into_rERK6Matrix() called");
    return 0;
}

/* Demangled: rounding_to_xdigit(float*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18rounding_to_xdigitPfi(void) {
    ALOGD("_Z18rounding_to_xdigitPfi() called");
    return 0;
}

/* Demangled: DataProcess::from_enu_to_ned(sf_uncalib_sensor_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess15from_enu_to_nedEP24sf_uncalib_sensor_struct(void) {
    ALOGD("_ZN11DataProcess15from_enu_to_nedEP24sf_uncalib_sensor_struct() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: PdrIgp::PdrIgp() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgpC1Ev(void) {
    ALOGD("_ZN6PdrIgpC1Ev() called");
    return 0;
}

/* Demangled: ascend_cmp(void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _Z10ascend_cmpPKvS0_(void) {
    ALOGD("_Z10ascend_cmpPKvS0_() called");
    return 0;
}

/* Demangled: DataProcess::~DataProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcessD1Ev(void) {
    ALOGD("_ZN11DataProcessD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::smoop_result_struct::~smoop_result_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf19smoop_result_structD2Ev(void) {
    ALOGD("_ZN5SfLpf19smoop_result_structD2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_RotateMagneticVector(SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_MagneticResults const&, SfWmm::MAGtype_MagneticResults*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm24MAG_RotateMagneticVectorERKNS_22MAGtype_CoordSphericalERKNS_21MAGtype_CoordGeodeticERKNS_23MAGtype_MagneticResultsEPS6_(void) {
    ALOGD("_ZN5SfWmm24MAG_RotateMagneticVectorERKNS_22MAGtype_CoordSphericalERKNS_21MAGtype_CoordGeodeticERKNS_23MAGtype_MagneticResultsEPS6_() called");
    return 0;
}

/* Demangled: CarAccelB::upd_kf_buff_imu(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB15upd_kf_buff_imuEPKdS1_(void) {
    ALOGD("_ZN9CarAccelB15upd_kf_buff_imuEPKdS1_() called");
    return 0;
}

/* Demangled: GnssAccelDecel::get_gad_value(GnssAccelDecel::GadEnum::GadType, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14GnssAccelDecel13get_gad_valueENS_7GadEnum7GadTypeEi(void) {
    ALOGD("_ZNK14GnssAccelDecel13get_gad_valueENS_7GadEnum7GadTypeEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_states() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF10get_statesEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF10get_statesEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::movavg(double, double, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias6movavgEddi(void) {
    ALOGD("_ZN14SimpleGyroBias6movavgEddi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::~VboFakeStart() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStartD1Ev(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStartD1Ev() called");
    return 0;
}

/* Exported Object: gyro_avg_buf */
extern "C" __attribute__((visibility("default"))) void* gyro_avg_buf = NULL;

/* Demangled: SfSgb::results_struct::results_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb14results_structC1Ev(void) {
    ALOGD("_ZN5SfSgb14results_structC1Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_TMfwd4(double, double, double, double, double*, double, double, double, double, int, double, double, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm10MAG_TMfwd4EddddPdddddiddS0_S0_S0_S0_(void) {
    ALOGD("_ZN5SfWmm10MAG_TMfwd4EddddPdddddiddS0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: SfWmm::MAG_Error(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm9MAG_ErrorEi(void) {
    ALOGD("_ZN5SfWmm9MAG_ErrorEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_discrete_process_noise_var() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF31comp_discrete_process_noise_varEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF31comp_discrete_process_noise_varEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSVel::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSVel10R_UNIT_COVE = NULL;

/* Exported Object: mapNodeCompany */
extern "C" __attribute__((visibility("default"))) void* mapNodeCompany = NULL;

/* Demangled: PdrSatt::upd_grav_proj_status(SfIsm::results_struct const&, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt20upd_grav_proj_statusERKN5SfIsm14results_structEPKdS5_(void) {
    ALOGD("_ZN7PdrSatt20upd_grav_proj_statusERKN5SfIsm14results_structEPKdS5_() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC2EiPKd(void) {
    ALOGD("_ZN6MatrixC2EiPKd() called");
    return 0;
}

/* Demangled: SfWmm::MAG_DegreeToDMSstring(double, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAG_DegreeToDMSstringEdPd(void) {
    ALOGD("_ZN5SfWmm21MAG_DegreeToDMSstringEdPd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_iad() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF9reset_iadEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF9reset_iadEv() called");
    return 0;
}

/* Demangled: SystemStateControl::ekf_cvb_to_check_ekf_fine_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl29ekf_cvb_to_check_ekf_fine_cvbEv(void) {
    ALOGD("_ZN18SystemStateControl29ekf_cvb_to_check_ekf_fine_cvbEv() called");
    return 0;
}

/* Demangled: CloneNearGnss::upd_nearest_gnss(sf_gnss_msg_struct*&) */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnss16upd_nearest_gnssERP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN13CloneNearGnss16upd_nearest_gnssERP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: DataProcess::get_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_reset_flagEv(void) {
    ALOGD("_ZN11DataProcess14get_reset_flagEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_mag_centripetal_accel(double const*, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF26comp_mag_centripetal_accelEPKdR6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF26comp_mag_centripetal_accelEPKdR6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::set_p2a(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_p2aER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_p2aER6Matrix() called");
    return 0;
}

/* Demangled: UdrLpf::set_adv_mag_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf20set_adv_mag_lpf_paraEv(void) {
    ALOGD("_ZN6UdrLpf20set_adv_mag_lpf_paraEv() called");
    return 0;
}

/* Demangled: PdrMotionDetect::update_smooth_status() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect20update_smooth_statusEv(void) {
    ALOGD("_ZN15PdrMotionDetect20update_smooth_statusEv() called");
    return 0;
}

/* Demangled: SfSgb::set_meas(double, double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb8set_measEdPKdd(void) {
    ALOGD("_ZN5SfSgb8set_measEdPKdd() called");
    return 0;
}

/* Demangled: norm_any_len_vector(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z19norm_any_len_vectorRK6Matrix(void) {
    ALOGD("_Z19norm_any_len_vectorRK6Matrix() called");
    return 0;
}

/* Demangled: SfSatt::comp_indirect_inno_ng_dcm() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt25comp_indirect_inno_ng_dcmEv(void) {
    ALOGD("_ZN6SfSatt25comp_indirect_inno_ng_dcmEv() called");
    return 0;
}

/* Exported Object: vtable for SfSatt */
extern "C" __attribute__((visibility("default"))) void* _ZTV6SfSatt = NULL;

/* Demangled: VehBodOrient::VboGrp::reset_dir_history() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp17reset_dir_historyEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp17reset_dir_historyEv() called");
    return 0;
}

/* Demangled: SfIsm::get_basic_feas_len() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm18get_basic_feas_lenEv(void) {
    ALOGD("_ZN5SfIsm18get_basic_feas_lenEv() called");
    return 0;
}

/* Demangled: PdrLpf::set_adv_gnss_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf21set_adv_gnss_lpf_paraEv(void) {
    ALOGD("_ZN6PdrLpf21set_adv_gnss_lpf_paraEv() called");
    return 0;
}

/* Demangled: SfLpf::set_default_dec_paras(sensor::SensorIDEnum::SensorIDType, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf21set_default_dec_parasEN6sensor12SensorIDEnum12SensorIDTypeEiRNS_12smoop_structERb(void) {
    ALOGD("_ZN5SfLpf21set_default_dec_parasEN6sensor12SensorIDEnum12SensorIDTypeEiRNS_12smoop_structERb() called");
    return 0;
}

/* Demangled: SfSatt::set_sf_ng_meas_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt19set_sf_ng_meas_paraEv(void) {
    ALOGD("_ZN6SfSatt19set_sf_ng_meas_paraEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::is_upd_buff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp11is_upd_buffEv(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp11is_upd_buffEv() called");
    return 0;
}

/* Demangled: wgslla2xyz_array(double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z16wgslla2xyz_arrayPKdPd(void) {
    ALOGD("_Z16wgslla2xyz_arrayPKdPd() called");
    return 0;
}

/* Demangled: get_pedometer_step_count_wo_buf */
extern "C" __attribute__((visibility("default"))) int get_pedometer_step_count_wo_buf(void) {
    ALOGD("get_pedometer_step_count_wo_buf() called");
    return 0;
}

/* Demangled: SfSatt::ekf_predict_x() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt13ekf_predict_xEv(void) {
    ALOGD("_ZN6SfSatt13ekf_predict_xEv() called");
    return 0;
}

/* Demangled: SfSatt::set_default_meas_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21set_default_meas_paraEv(void) {
    ALOGD("_ZN6SfSatt21set_default_meas_paraEv() called");
    return 0;
}

/* Demangled: UDR::update_fix_state(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR16update_fix_stateEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN3UDR16update_fix_stateEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::upd_specific_sf_pattern(VehBodOrient::VboGrp::hist_struct*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp23upd_specific_sf_patternEPNS0_11hist_structEPKd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp23upd_specific_sf_patternEPNS0_11hist_structEPKd() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_contain() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess16get_gnss_containEv(void) {
    ALOGD("_ZN11DataProcess16get_gnss_containEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_all_matrix(sf_gnss_msg_struct*, unsigned int*, Matrix&, Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17update_all_matrixEP18sf_gnss_msg_structPjR6MatrixS4_S4_S4_(void) {
    ALOGD("_ZN6UdrEkf17update_all_matrixEP18sf_gnss_msg_structPjR6MatrixS4_S4_S4_() called");
    return 0;
}

/* Demangled: InertialStaticMove::comp_sm_var(double**, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11comp_sm_varEPPdi(void) {
    ALOGD("_ZN18InertialStaticMove11comp_sm_varEPPdi() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::free_delay_buff_to_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect22free_delay_buff_to_cvbEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect22free_delay_buff_to_cvbEv() called");
    return 0;
}

/* Demangled: UdrEkf::get_R(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf5get_REi(void) {
    ALOGD("_ZN6UdrEkf5get_REi() called");
    return 0;
}

/* Demangled: Watchdog::is_state_dynamic_irregular(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog26is_state_dynamic_irregularEi(void) {
    ALOGD("_ZN8Watchdog26is_state_dynamic_irregularEi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::~VboGrp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrpD2Ev(void) {
    ALOGD("_ZN12VehBodOrient6VboGrpD2Ev() called");
    return 0;
}

/* Demangled: get_Eigenvalue2x2_double */
extern "C" __attribute__((visibility("default"))) int get_Eigenvalue2x2_double(void) {
    ALOGD("get_Eigenvalue2x2_double() called");
    return 0;
}

/* Exported Object: lpf_a */
extern "C" __attribute__((visibility("default"))) void* lpf_a = NULL;

/* Demangled: PdrGb::PdrGb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGbC2Ev(void) {
    ALOGD("_ZN5PdrGbC2Ev() called");
    return 0;
}

/* Demangled: Matrix::mEye(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4mEyeEPKdi(void) {
    ALOGD("_ZN6Matrix4mEyeEPKdi() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_accel_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf18get_dec_accel_tempEPd(void) {
    ALOGD("_ZNK5SfLpf18get_dec_accel_tempEPd() called");
    return 0;
}

/* Demangled: Watchdog::state_range_check(UdrEkf*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog17state_range_checkEP6UdrEkfP18sf_mems_msg_struct(void) {
    ALOGD("_ZN8Watchdog17state_range_checkEP6UdrEkfP18sf_mems_msg_struct() called");
    return 0;
}

/* Exported Object: lpf_b */
extern "C" __attribute__((visibility("default"))) void* lpf_b = NULL;

/* Demangled: SfSatt::set_default_state_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt22set_default_state_paraEv(void) {
    ALOGD("_ZN6SfSatt22set_default_state_paraEv() called");
    return 0;
}

/* Demangled: find_matching_point */
extern "C" __attribute__((visibility("default"))) int find_matching_point(void) {
    ALOGD("find_matching_point() called");
    return 0;
}

/* Demangled: CarAccelB::esti_car_accel_b(sf_mems_msg_struct*, UdrLpf const&, InertialStaticMove&, GnssAccelDecel&, SimpleGyroBias&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB16esti_car_accel_bEP18sf_mems_msg_structRK6UdrLpfR18InertialStaticMoveR14GnssAccelDecelR14SimpleGyroBias(void) {
    ALOGD("_ZN9CarAccelB16esti_car_accel_bEP18sf_mems_msg_structRK6UdrLpfR18InertialStaticMoveR14GnssAccelDecelR14SimpleGyroBias() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::sum_abs_dist(double const*, int, int, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct12sum_abs_distEPKdiiii(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct12sum_abs_distEPKdiiii() called");
    return 0;
}

/* Demangled: UdrEkf::set_cbv2cbv(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf11set_cbv2cbvER6Matrix(void) {
    ALOGD("_ZN6UdrEkf11set_cbv2cbvER6Matrix() called");
    return 0;
}

/* Demangled: UdrLpf::get_adv_accel_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf18get_adv_accel_50hzEv(void) {
    ALOGD("_ZN6UdrLpf18get_adv_accel_50hzEv() called");
    return 0;
}

/* Demangled: four_ax_consistency */
extern "C" __attribute__((visibility("default"))) int four_ax_consistency(void) {
    ALOGD("four_ax_consistency() called");
    return 0;
}

/* Demangled: InterpMems::use_interp_mems_and_upd_past_mems(sf_mems_msg_struct*, sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMems33use_interp_mems_and_upd_past_memsEP18sf_mems_msg_structPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN10InterpMems33use_interp_mems_and_upd_past_memsEP18sf_mems_msg_structPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: CarAccelB::delay_buff_struct::~delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17delay_buff_structD2Ev(void) {
    ALOGD("_ZN9CarAccelB17delay_buff_structD2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_select_label_from_buff(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp26get_select_label_from_buffEj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp26get_select_label_from_buffEj() called");
    return 0;
}

/* Exported Object: dr_state_1 */
extern "C" __attribute__((visibility("default"))) void* dr_state_1 = NULL;

/* Demangled: SfStaticDetect::get_is_acc_ok() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect13get_is_acc_okEv(void) {
    ALOGD("_ZN14SfStaticDetect13get_is_acc_okEv() called");
    return 0;
}

/* Demangled: UdrEkf::measurement_update(sf_gnss_msg_struct*, int, bool, int, unsigned int*, int*, bool, SimpleGyroBias const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18measurement_updateEP18sf_gnss_msg_structibiPjPibRK14SimpleGyroBias(void) {
    ALOGD("_ZN6UdrEkf18measurement_updateEP18sf_gnss_msg_structibiPjPibRK14SimpleGyroBias() called");
    return 0;
}

/* Demangled: InertialStaticMove::InertialStaticMove() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMoveC2Ev(void) {
    ALOGD("_ZN18InertialStaticMoveC2Ev() called");
    return 0;
}

/* Exported Object: acc_raw_window */
extern "C" __attribute__((visibility("default"))) void* acc_raw_window = NULL;

/* Demangled: SfLpf::~SfLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpfD2Ev(void) {
    ALOGD("_ZN5SfLpfD2Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_speed(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf18get_adv_gnss_speedEPd(void) {
    ALOGD("_ZNK5SfLpf18get_adv_gnss_speedEPd() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_sm_feas() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11get_sm_feasEv(void) {
    ALOGD("_ZN18InertialStaticMove11get_sm_feasEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::apply_raw_data(sf_mems_msg_struct*, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect14apply_raw_dataEP18sf_mems_msg_structR6Matrix(void) {
    ALOGD("_ZN14SfStaticDetect14apply_raw_dataEP18sf_mems_msg_structR6Matrix() called");
    return 0;
}

/* Demangled: set_log_level(int) */
extern "C" __attribute__((visibility("default"))) int _Z13set_log_leveli(void) {
    ALOGD("_Z13set_log_leveli() called");
    return 0;
}

/* Demangled: mpe_get_rotation_vector */
extern "C" __attribute__((visibility("default"))) int mpe_get_rotation_vector(void) {
    ALOGD("mpe_get_rotation_vector() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: SfSatt::ekf_upd_x() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt9ekf_upd_xEv(void) {
    ALOGD("_ZN6SfSatt9ekf_upd_xEv() called");
    return 0;
}

/* Exported Object: acc_last_gps_mean */
extern "C" __attribute__((visibility("default"))) void* acc_last_gps_mean = NULL;

/* Demangled: get_pedometer_step_freq */
extern "C" __attribute__((visibility("default"))) int get_pedometer_step_freq(void) {
    ALOGD("get_pedometer_step_freq() called");
    return 0;
}

/* Demangled: SfIsm::feas_struct::~feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11feas_structD2Ev(void) {
    ALOGD("_ZN5SfIsm11feas_structD2Ev() called");
    return 0;
}

/* Demangled: UdrStaticDetect::get_sensor_static() */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetect17get_sensor_staticEv(void) {
    ALOGD("_ZN15UdrStaticDetect17get_sensor_staticEv() called");
    return 0;
}

/* Demangled: best_walk_ax */
extern "C" __attribute__((visibility("default"))) int best_walk_ax(void) {
    ALOGD("best_walk_ax() called");
    return 0;
}

/* Demangled: DataProcess::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess5resetEv(void) {
    ALOGD("_ZN11DataProcess5resetEv() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: get_heading_difference(double, double) */
extern "C" __attribute__((visibility("default"))) int _Z22get_heading_differencedd(void) {
    ALOGD("_Z22get_heading_differencedd() called");
    return 0;
}

/* Demangled: split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEc(void) {
    ALOGD("_Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEc() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::upd_avg_buff_wei() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess16upd_avg_buff_weiEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess16upd_avg_buff_weiEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_DMSstringToDegree(double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAG_DMSstringToDegreeEPKdPd(void) {
    ALOGD("_ZN5SfWmm21MAG_DMSstringToDegreeEPKdPd() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gyro(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf12get_adv_gyroEPd(void) {
    ALOGD("_ZNK5SfLpf12get_adv_gyroEPd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_intermediate_ekf_matrix(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF28comp_intermediate_ekf_matrixEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF28comp_intermediate_ekf_matrixEPKd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_probability() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp20get_buff_probabilityEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp20get_buff_probabilityEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::reset_grp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp9reset_grpEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp9reset_grpEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::realloc_less(VehBodOrient::VboGrp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess12realloc_lessERKNS_6VboGrpE(void) {
    ALOGD("_ZN12VehBodOrient7VboLess12realloc_lessERKNS_6VboGrpE() called");
    return 0;
}

/* Demangled: s_ptr */
extern "C" __attribute__((visibility("default"))) int s_ptr(void) {
    ALOGD("s_ptr() called");
    return 0;
}

/* Demangled: update_feature_vector */
extern "C" __attribute__((visibility("default"))) int update_feature_vector(void) {
    ALOGD("update_feature_vector() called");
    return 0;
}

/* Demangled: Matrix::diag() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix4diagEv(void) {
    ALOGD("_ZNK6Matrix4diagEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::close_gdcm3_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp17close_gdcm3_resetEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp17close_gdcm3_resetEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::reverse_g_nv_v_dir(VehBodOrient::VboGdcm3 const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess18reverse_g_nv_v_dirERKNS_8VboGdcm3Ejj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess18reverse_g_nv_v_dirERKNS_8VboGdcm3Ejj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::~VboLess() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLessD2Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLessD2Ev() called");
    return 0;
}

/* Exported Object: envelop_show */
extern "C" __attribute__((visibility("default"))) void* envelop_show = NULL;

/* Demangled: MonitorDataRate::downsampling_sensors(mpe::ModeEnum::ModeType, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate20downsampling_sensorsEN3mpe8ModeEnum8ModeTypeEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN15MonitorDataRate20downsampling_sensorsEN3mpe8ModeEnum8ModeTypeEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SfSatt::ext_feas_struct::ext_feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15ext_feas_structC1Ev(void) {
    ALOGD("_ZN6SfSatt15ext_feas_structC1Ev() called");
    return 0;
}

/* Exported Object: lla_v_cos */
extern "C" __attribute__((visibility("default"))) void* lla_v_cos = NULL;

/* Demangled: InterpMems::InterpMems() */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMemsC1Ev(void) {
    ALOGD("_ZN10InterpMemsC1Ev() called");
    return 0;
}

/* Demangled: bound_inc_cnt(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13bound_inc_cntii(void) {
    ALOGD("_Z13bound_inc_cntii() called");
    return 0;
}

/* Demangled: SfLpf::set_imu_hub_dr(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14set_imu_hub_drEii(void) {
    ALOGD("_ZN5SfLpf14set_imu_hub_drEii() called");
    return 0;
}

/* Demangled: InertialStaticMove::meas_struct::~meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11meas_structD2Ev(void) {
    ALOGD("_ZN18InertialStaticMove11meas_structD2Ev() called");
    return 0;
}

/* Demangled: input_signal_smoothing */
extern "C" __attribute__((visibility("default"))) int input_signal_smoothing(void) {
    ALOGD("input_signal_smoothing() called");
    return 0;
}

/* Exported Object: v3_nonfoot_flag */
extern "C" __attribute__((visibility("default"))) void* v3_nonfoot_flag = NULL;

/* Demangled: PdrLpf::~PdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpfD1Ev(void) {
    ALOGD("_ZN6PdrLpfD1Ev() called");
    return 0;
}

/* Demangled: PdrIsm::get_min_feas_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm17get_min_feas_timeEv(void) {
    ALOGD("_ZN6PdrIsm17get_min_feas_timeEv() called");
    return 0;
}

/* Demangled: PdrSatt::~PdrSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSattD0Ev(void) {
    ALOGD("_ZN7PdrSattD0Ev() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::get_max_speed() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel13get_max_speedEv(void) {
    ALOGD("_ZN9Pedometer7SsModel13get_max_speedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: MonitorDataRate::dr_track_struct::dr_track_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate15dr_track_structC2Ev(void) {
    ALOGD("_ZN15MonitorDataRate15dr_track_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::set_J() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt5set_JEv(void) {
    ALOGD("_ZN6SfSatt5set_JEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_avg_v(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect16get_sensor_avg_vENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect16get_sensor_avg_vENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::find_max_idx(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess12find_max_idxEPdi(void) {
    ALOGD("_ZN12VehBodOrient7VboLess12find_max_idxEPdi() called");
    return 0;
}

/* Demangled: v3_noise_detection_init */
extern "C" __attribute__((visibility("default"))) int v3_noise_detection_init(void) {
    ALOGD("v3_noise_detection_init() called");
    return 0;
}

/* Demangled: UdrEkf::get_pos_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12get_pos_initEv(void) {
    ALOGD("_ZN6UdrEkf12get_pos_initEv() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_FreeLegendreMemory(SfWmm::MAGtype_LegendreFunction*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm22MAG_FreeLegendreMemoryEPNS_24MAGtype_LegendreFunctionE(void) {
    ALOGD("_ZN5SfWmm22MAG_FreeLegendreMemoryEPNS_24MAGtype_LegendreFunctionE() called");
    return 0;
}

/* Demangled: UdrEkf::set_reset_flag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf14set_reset_flagEb(void) {
    ALOGD("_ZN6UdrEkf14set_reset_flagEb() called");
    return 0;
}

/* Demangled: UdrLpf::~UdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpfD0Ev(void) {
    ALOGD("_ZN6UdrLpfD0Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_Warnings(int, double, SfWmm::MAGtype_MagneticModel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm12MAG_WarningsEidPKNS_21MAGtype_MagneticModelE(void) {
    ALOGD("_ZN5SfWmm12MAG_WarningsEidPKNS_21MAGtype_MagneticModelE() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_Geoid::MAGtype_Geoid(float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm13MAGtype_GeoidC1EPKf(void) {
    ALOGD("_ZN5SfWmm13MAGtype_GeoidC1EPKf() called");
    return 0;
}

/* Demangled: Ttff::get_ttff_state() */
extern "C" __attribute__((visibility("default"))) int _ZN4Ttff14get_ttff_stateEv(void) {
    ALOGD("_ZN4Ttff14get_ttff_stateEv() called");
    return 0;
}

/* Demangled: PDR::upd_igp(MonitorDataRate const&, sf_mems_msg_struct const*, PdrSatt::out_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR7upd_igpERK15MonitorDataRatePK18sf_mems_msg_structRKN7PdrSatt10out_structE(void) {
    ALOGD("_ZN3PDR7upd_igpERK15MonitorDataRatePK18sf_mems_msg_structRKN7PdrSatt10out_structE() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_mode(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf17get_adv_gnss_modeEPd(void) {
    ALOGD("_ZNK5SfLpf17get_adv_gnss_modeEPd() called");
    return 0;
}

/* Demangled: PdrSatt::est_var_w_for_pred_gp_components(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt32est_var_w_for_pred_gp_componentsER6Matrix(void) {
    ALOGD("_ZN7PdrSatt32est_var_w_for_pred_gp_componentsER6Matrix() called");
    return 0;
}

/* Demangled: FIR_filtering */
extern "C" __attribute__((visibility("default"))) int FIR_filtering(void) {
    ALOGD("FIR_filtering() called");
    return 0;
}

/* Demangled: PdrEkf::get_ekf_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf12get_ekf_flagEv(void) {
    ALOGD("_ZN6PdrEkf12get_ekf_flagEv() called");
    return 0;
}

/* Demangled: PdrSatt::out_struct::out_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt10out_structC2Ev(void) {
    ALOGD("_ZN7PdrSatt10out_structC2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::roll_constrain(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf14roll_constrainEd(void) {
    ALOGD("_ZN6UdrEkf14roll_constrainEd() called");
    return 0;
}

/* Demangled: VehBodOrient::get_min_proba_diff() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient18get_min_proba_diffEv(void) {
    ALOGD("_ZN12VehBodOrient18get_min_proba_diffEv() called");
    return 0;
}

/* Demangled: PdrMheading::get_filt_len() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading12get_filt_lenEv(void) {
    ALOGD("_ZN11PdrMheading12get_filt_lenEv() called");
    return 0;
}

/* Demangled: CarAccelB::delay_buff_struct::get_delay_t() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17delay_buff_struct11get_delay_tEv(void) {
    ALOGD("_ZNK9CarAccelB17delay_buff_struct11get_delay_tEv() called");
    return 0;
}

/* Demangled: UdrEkf::roll_measurement_update() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf23roll_measurement_updateEv(void) {
    ALOGD("_ZN6UdrEkf23roll_measurement_updateEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::get_dyn_gyro_bias_var(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias13AlterGyroBias21get_dyn_gyro_bias_varEi(void) {
    ALOGD("_ZNK14SimpleGyroBias13AlterGyroBias21get_dyn_gyro_bias_varEi() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: Barometer::p2h(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer3p2hEd(void) {
    ALOGD("_ZN9Barometer3p2hEd() called");
    return 0;
}

/* Demangled: CarAccelB::CarAccelB() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelBC1Ev(void) {
    ALOGD("_ZN9CarAccelBC1Ev() called");
    return 0;
}

/* Exported Object: max_historical_count */
extern "C" __attribute__((visibility("default"))) void* max_historical_count = NULL;

/* Demangled: PdrUpdTypeSelect::~PdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelectD2Ev(void) {
    ALOGD("_ZN16PdrUpdTypeSelectD2Ev() called");
    return 0;
}

/* Exported Object: gyro_raw_bias */
extern "C" __attribute__((visibility("default"))) void* gyro_raw_bias = NULL;

/* Demangled: operator+(Matrix const&, double) */
extern "C" __attribute__((visibility("default"))) int _ZplRK6Matrixd(void) {
    ALOGD("_ZplRK6Matrixd() called");
    return 0;
}

/* Demangled: UdrEkf::accel_measurement_update(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf24accel_measurement_updateEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf24accel_measurement_updateEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: UdrEkf::get_valid_flag() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf14get_valid_flagEv(void) {
    ALOGD("_ZNK6UdrEkf14get_valid_flagEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::get_sum_sqr(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel11get_sum_sqrEPdi(void) {
    ALOGD("_ZN14GnssAccelDecel11get_sum_sqrEPdi() called");
    return 0;
}

/* Exported Object: vtable for SfStaticDetect */
extern "C" __attribute__((visibility("default"))) void* _ZTV14SfStaticDetect = NULL;

/* Demangled: CarAccelB::SubKF::set_adned_head_var(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF18set_adned_head_varEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF18set_adned_head_varEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::esti_condi_proba_in_gad(VehBodOrient::VboFbEnum::FbType*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp23esti_condi_proba_in_gadEPNS_9VboFbEnum6FbTypeE(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp23esti_condi_proba_in_gadEPNS_9VboFbEnum6FbTypeE() called");
    return 0;
}

/* Exported Object: acc_curr_roll_diff */
extern "C" __attribute__((visibility("default"))) void* acc_curr_roll_diff = NULL;

/* Demangled: DataProcess::batch_postprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess17batch_postprocessEv(void) {
    ALOGD("_ZN11DataProcess17batch_postprocessEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: eul2Cyx(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z7eul2CyxR6MatrixS0_(void) {
    ALOGD("_Z7eul2CyxR6MatrixS0_() called");
    return 0;
}

/* Demangled: VehBodOrient::esti_vb_orient(CarAccelB::output_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient14esti_vb_orientERKN9CarAccelB13output_structE(void) {
    ALOGD("_ZN12VehBodOrient14esti_vb_orientERKN9CarAccelB13output_structE() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_var_a_predict(Matrix const&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF18comp_var_a_predictERK6MatrixRS1_(void) {
    ALOGD("_ZN9CarAccelB5SubKF18comp_var_a_predictERK6MatrixRS1_() called");
    return 0;
}

/* Demangled: UdrEkf::imu_sf_as_gamma_struct::upd_past(sf_gnss_msg_struct const*, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22imu_sf_as_gamma_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_S6_(void) {
    ALOGD("_ZN6UdrEkf22imu_sf_as_gamma_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_S6_() called");
    return 0;
}

/* Exported Object: dr_bias_state */
extern "C" __attribute__((visibility("default"))) void* dr_bias_state = NULL;

/* Demangled: mpe_get_heading_axis */
extern "C" __attribute__((visibility("default"))) int mpe_get_heading_axis(void) {
    ALOGD("mpe_get_heading_axis() called");
    return 0;
}

/* Demangled: norm(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z4normddd(void) {
    ALOGD("_Z4normddd() called");
    return 0;
}

/* Demangled: SfSatt::upd_meas_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15upd_meas_matrixEv(void) {
    ALOGD("_ZN6SfSatt15upd_meas_matrixEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_PcupHigh(double*, double*, double, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm12MAG_PcupHighEPdS0_di(void) {
    ALOGD("_ZN5SfWmm12MAG_PcupHighEPdS0_di() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_beta_scale_a_pred() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF21get_beta_scale_a_predEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF21get_beta_scale_a_predEv() called");
    return 0;
}

/* Demangled: InertialAtt::InertialAtt(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAttC1ERK12ConfigParams(void) {
    ALOGD("_ZN11InertialAttC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_axis_angle_diff_q(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess22comp_axis_angle_diff_qEPKdS2_(void) {
    ALOGD("_ZN12VehBodOrient7VboLess22comp_axis_angle_diff_qEPKdS2_() called");
    return 0;
}

/* Demangled: PdrMheading::quality_check_struct::quality_check_struct(int, double, double, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading20quality_check_structC1EiddPd(void) {
    ALOGD("_ZN11PdrMheading20quality_check_structC1EiddPd() called");
    return 0;
}

/* Demangled: PdrMheading::upd_out() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading7upd_outEv(void) {
    ALOGD("_ZN11PdrMheading7upd_outEv() called");
    return 0;
}

/* Demangled: pedometer_algorithm_init */
extern "C" __attribute__((visibility("default"))) int pedometer_algorithm_init(void) {
    ALOGD("pedometer_algorithm_init() called");
    return 0;
}

/* Demangled: SfLpf::alloc_and_ini_ptr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17alloc_and_ini_ptrEi(void) {
    ALOGD("_ZN5SfLpf17alloc_and_ini_ptrEi() called");
    return 0;
}

/* Demangled: mpe_get_quaternion */
extern "C" __attribute__((visibility("default"))) int mpe_get_quaternion(void) {
    ALOGD("mpe_get_quaternion() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::variance(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel8varianceERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void) {
    ALOGD("_ZN9Pedometer7SsModel8varianceERKNSt3__16vectorIdNS1_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: SimpleGyroBias::reset_gbuff() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias11reset_gbuffEv(void) {
    ALOGD("_ZN14SimpleGyroBias11reset_gbuffEv() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::upd_buff(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::eye(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess3eyeEPdi(void) {
    ALOGD("_ZN12VehBodOrient7VboLess3eyeEPdi() called");
    return 0;
}

/* Demangled: mpe_get_global_rotation */
extern "C" __attribute__((visibility("default"))) int mpe_get_global_rotation(void) {
    ALOGD("mpe_get_global_rotation() called");
    return 0;
}

/* Demangled: PdrIsm::copy_results() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6PdrIsm12copy_resultsEv(void) {
    ALOGD("_ZNK6PdrIsm12copy_resultsEv() called");
    return 0;
}

/* Demangled: PdrIsm::ini_feas_ptrs() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm13ini_feas_ptrsEv(void) {
    ALOGD("_ZN6PdrIsm13ini_feas_ptrsEv() called");
    return 0;
}

/* Exported Object: QualityCheck::filt_norm */
extern "C" __attribute__((visibility("default"))) void* _ZN12QualityCheck9filt_normE = NULL;

/* Demangled: VehBodOrient::VboGrp::aided_group() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp11aided_groupEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp11aided_groupEv() called");
    return 0;
}

/* Exported Object: Q_AX */
extern "C" __attribute__((visibility("default"))) void* Q_AX = NULL;

/* Demangled: PdrIgp::get_stored_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp15get_stored_timeEv(void) {
    ALOGD("_ZN6PdrIgp15get_stored_timeEv() called");
    return 0;
}

/* Demangled: SfSatt::state_para_struct::~state_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17state_para_structD1Ev(void) {
    ALOGD("_ZN6SfSatt17state_para_structD1Ev() called");
    return 0;
}

/* Demangled: navrate(double, double, Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z7navrateddR6MatrixS0_S0_(void) {
    ALOGD("_Z7navrateddR6MatrixS0_S0_() called");
    return 0;
}

/* Demangled: InertialStaticMove::ini_sm_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove12ini_sm_parasEv(void) {
    ALOGD("_ZN18InertialStaticMove12ini_sm_parasEv() called");
    return 0;
}

/* Exported Object: Q_AY */
extern "C" __attribute__((visibility("default"))) void* Q_AY = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Exported Object: Q_AZ */
extern "C" __attribute__((visibility("default"))) void* Q_AZ = NULL;

/* Demangled: PdrEkf::mg_heading_diff_struct::mg_heading_diff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf22mg_heading_diff_structC2Ev(void) {
    ALOGD("_ZN6PdrEkf22mg_heading_diff_structC2Ev() called");
    return 0;
}

/* Demangled: SfIsm::comp_sm_rng(double const* const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11comp_sm_rngEPKPKdi(void) {
    ALOGD("_ZN5SfIsm11comp_sm_rngEPKPKdi() called");
    return 0;
}

/* Demangled: SfSgb::stable_struct::stable_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb13stable_structC2Ev(void) {
    ALOGD("_ZN5SfSgb13stable_structC2Ev() called");
    return 0;
}

/* Demangled: GnssAccelDecel::esti_acc_dec(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel12esti_acc_decEb(void) {
    ALOGD("_ZN14GnssAccelDecel12esti_acc_decEb() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: Pedometer::process_step_model(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer18process_step_modelEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN9Pedometer18process_step_modelEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: PdrIsm::~PdrIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsmD2Ev(void) {
    ALOGD("_ZN6PdrIsmD2Ev() called");
    return 0;
}

/* Demangled: SfIsm::upd_meas_buff(double, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm13upd_meas_buffEdPKdS1_(void) {
    ALOGD("_ZN5SfIsm13upd_meas_buffEdPKdS1_() called");
    return 0;
}

/* Demangled: recursive_mkdir(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z15recursive_mkdirPKcb(void) {
    ALOGD("_Z15recursive_mkdirPKcb() called");
    return 0;
}

/* Demangled: CarAccelB::cross(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5crossEPdS0_S0_i(void) {
    ALOGD("_ZN9CarAccelB5crossEPdS0_S0_i() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::~UdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelectD2Ev(void) {
    ALOGD("_ZN16UdrUpdTypeSelectD2Ev() called");
    return 0;
}

/* Exported Object: processing_count */
extern "C" __attribute__((visibility("default"))) void* processing_count = NULL;

/* Demangled: earthrad(double*, double*, double) */
extern "C" __attribute__((visibility("default"))) int _Z8earthradPdS_d(void) {
    ALOGD("_Z8earthradPdS_d() called");
    return 0;
}

/* Demangled: operator*(Matrix const&, double) */
extern "C" __attribute__((visibility("default"))) int _ZmlRK6Matrixd(void) {
    ALOGD("_ZmlRK6Matrixd() called");
    return 0;
}

/* Demangled: SfSatt::is_test_meas_upd_on_x() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt21is_test_meas_upd_on_xEv(void) {
    ALOGD("_ZNK6SfSatt21is_test_meas_upd_on_xEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_gdcm3_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp20get_gdcm3_reset_flagEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp20get_gdcm3_reset_flagEv() called");
    return 0;
}

/* Demangled: Integration::sf_process_data() */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration15sf_process_dataEv(void) {
    ALOGD("_ZN11Integration15sf_process_dataEv() called");
    return 0;
}

/* Exported Object: acc_gps_conf_flag */
extern "C" __attribute__((visibility("default"))) void* acc_gps_conf_flag = NULL;

/* Demangled: trigger_wave_ped */
extern "C" __attribute__((visibility("default"))) int trigger_wave_ped(void) {
    ALOGD("trigger_wave_ped() called");
    return 0;
}

/* Demangled: Matrix::set_val(int const*, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7set_valEPKiRKS_(void) {
    ALOGD("_ZN6Matrix7set_valEPKiRKS_() called");
    return 0;
}

/* Demangled: Matrix::is_vector() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix9is_vectorEv(void) {
    ALOGD("_ZNK6Matrix9is_vectorEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::upd_buff(double, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts8upd_buffEdPKd(void) {
    ALOGD("_ZN9CarAccelB3Rts8upd_buffEdPKd() called");
    return 0;
}

/* Demangled: mpe_get_udr_struct */
extern "C" __attribute__((visibility("default"))) int mpe_get_udr_struct(void) {
    ALOGD("mpe_get_udr_struct() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: Matrix::get_row_num() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix11get_row_numEv(void) {
    ALOGD("_ZNK6Matrix11get_row_numEv() called");
    return 0;
}

/* Demangled: SfSatt::set_sf_meas_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16set_sf_meas_paraEv(void) {
    ALOGD("_ZN6SfSatt16set_sf_meas_paraEv() called");
    return 0;
}

/* Demangled: CarAccelB::upd_kf_buff_idx() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB15upd_kf_buff_idxEv(void) {
    ALOGD("_ZN9CarAccelB15upd_kf_buff_idxEv() called");
    return 0;
}

/* Demangled: CarAccelB::sub_kf_buff_struct::sub_kf_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18sub_kf_buff_structC1Ev(void) {
    ALOGD("_ZN9CarAccelB18sub_kf_buff_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::stored_bias_struct::stored_bias_struct(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_structC1Eid(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_structC1Eid() called");
    return 0;
}

/* Demangled: Watchdog::is_state_range_irregular(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog24is_state_range_irregularEi(void) {
    ALOGD("_ZN8Watchdog24is_state_range_irregularEi() called");
    return 0;
}

/* Demangled: ABAT */
extern "C" __attribute__((visibility("default"))) int ABAT(void) {
    ALOGD("ABAT() called");
    return 0;
}

/* Demangled: SfSgb::upd_stat_no_outlier() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb19upd_stat_no_outlierEv(void) {
    ALOGD("_ZN5SfSgb19upd_stat_no_outlierEv() called");
    return 0;
}

/* Demangled: SfSatt::comp_kalman_gain(Matrix const&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16comp_kalman_gainERK6MatrixRS0_(void) {
    ALOGD("_ZN6SfSatt16comp_kalman_gainERK6MatrixRS0_() called");
    return 0;
}

/* Demangled: SfWmm::MAG_AssociatedLegendreFunction(SfWmm::MAGtype_CoordSpherical const&, int, SfWmm::MAGtype_LegendreFunction*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm30MAG_AssociatedLegendreFunctionERKNS_22MAGtype_CoordSphericalEiPNS_24MAGtype_LegendreFunctionE(void) {
    ALOGD("_ZN5SfWmm30MAG_AssociatedLegendreFunctionERKNS_22MAGtype_CoordSphericalEiPNS_24MAGtype_LegendreFunctionE() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::~AlterGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBiasD1Ev(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBiasD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_mag(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf11get_adv_magEPd(void) {
    ALOGD("_ZNK5SfLpf11get_adv_magEPd() called");
    return 0;
}

/* Demangled: SfWmm::MAG_FreeMagneticModelMemory(SfWmm::MAGtype_MagneticModel*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm27MAG_FreeMagneticModelMemoryEPNS_21MAGtype_MagneticModelE(void) {
    ALOGD("_ZN5SfWmm27MAG_FreeMagneticModelMemoryEPNS_21MAGtype_MagneticModelE() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_p_gyro_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17reset_p_gyro_biasEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF17reset_p_gyro_biasEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::cyclic_jacobi(double, double, double, double*, int, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess13cyclic_jacobiEdddPdiS1_(void) {
    ALOGD("_ZN12VehBodOrient7VboLess13cyclic_jacobiEdddPdiS1_() called");
    return 0;
}

/* Demangled: SfLpf::set_smooth_pack(SfLpf::para_struct const*, int, SfLpf::smoop_struct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf15set_smooth_packEPKNS_11para_structEiRNS_12smoop_structE(void) {
    ALOGD("_ZN5SfLpf15set_smooth_packEPKNS_11para_structEiRNS_12smoop_structE() called");
    return 0;
}

/* Demangled: Matrix::set_val(int*, int*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7set_valEPiS0_Pdi(void) {
    ALOGD("_ZN6Matrix7set_valEPiS0_Pdi() called");
    return 0;
}

/* Demangled: UdrEkf::set_w2a(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_w2aER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_w2aER6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::get_Rvel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8get_RvelEi(void) {
    ALOGD("_ZN6UdrEkf8get_RvelEi() called");
    return 0;
}

/* Demangled: mpe_get_rotation_matrix */
extern "C" __attribute__((visibility("default"))) int mpe_get_rotation_matrix(void) {
    ALOGD("mpe_get_rotation_matrix() called");
    return 0;
}

/* Demangled: CloneNearGnss::~CloneNearGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnssD1Ev(void) {
    ALOGD("_ZN13CloneNearGnssD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::smoop_struct::~smoop_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12smoop_structD2Ev(void) {
    ALOGD("_ZN5SfLpf12smoop_structD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::ini_I_NS() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt8ini_I_NSEv(void) {
    ALOGD("_ZN6SfSatt8ini_I_NSEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_proj_nv_v() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF15reset_proj_nv_vEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF15reset_proj_nv_vEv() called");
    return 0;
}

/* Demangled: UDR::algo_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR10algo_resetEv(void) {
    ALOGD("_ZN3UDR10algo_resetEv() called");
    return 0;
}

/* Demangled: Ttff::Ttff() */
extern "C" __attribute__((visibility("default"))) int _ZN4TtffC1Ev(void) {
    ALOGD("_ZN4TtffC1Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::mov_sample_var(double*, double*, double, double, double, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias14mov_sample_varEPdS0_dddi(void) {
    ALOGD("_ZN14SimpleGyroBias14mov_sample_varEPdS0_dddi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::nw_shape_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_structC1Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_structC1Ev() called");
    return 0;
}

/* Demangled: update_smoothing_idx */
extern "C" __attribute__((visibility("default"))) int update_smoothing_idx(void) {
    ALOGD("update_smoothing_idx() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: PdrIsm::comp_sf_var() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm11comp_sf_varEv(void) {
    ALOGD("_ZN6PdrIsm11comp_sf_varEv() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_rest() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess13get_gnss_restEv(void) {
    ALOGD("_ZN11DataProcess13get_gnss_restEv() called");
    return 0;
}

/* Demangled: SfLpf::smoop_result_struct::smoop_result_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf19smoop_result_structC1Ev(void) {
    ALOGD("_ZN5SfLpf19smoop_result_structC1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_var_grav_proj_meas() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF22get_var_grav_proj_measEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF22get_var_grav_proj_measEv() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_bt_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove12get_bt_parasEv(void) {
    ALOGD("_ZN18InertialStaticMove12get_bt_parasEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_gyro_bias_var(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias17get_gyro_bias_varEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias17get_gyro_bias_varEPd() called");
    return 0;
}

/* Demangled: DataProcess::time_split(double, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess10time_splitEdPiS0_(void) {
    ALOGD("_ZN11DataProcess10time_splitEdPiS0_() called");
    return 0;
}

/* Demangled: SimpleGyroBias::upd_mov_statistics_with_outlier_remove_gyro(double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias43upd_mov_statistics_with_outlier_remove_gyroEPdd(void) {
    ALOGD("_ZN14SimpleGyroBias43upd_mov_statistics_with_outlier_remove_gyroEPdd() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::weighted_least_squares(std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double&, double&, double&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel22weighted_least_squaresERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_S7_RdS8_S8_(void) {
    ALOGD("_ZN9Pedometer7SsModel22weighted_least_squaresERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_S7_RdS8_S8_() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_var_v(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect16get_sensor_var_vENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect16get_sensor_var_vENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::gen_fake_cvb(CarAccelB::output_struct const&, VehBodOrient&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart12gen_fake_cvbERKN9CarAccelB13output_structERS_(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart12gen_fake_cvbERKN9CarAccelB13output_structERS_() called");
    return 0;
}

/* Demangled: SfLpf::check_mmc5603_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf26check_mmc5603_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf26check_mmc5603_dec_num_axisEi() called");
    return 0;
}

/* Demangled: PdrMheading::mag_model_struct::mag_model_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16mag_model_structC1Ev(void) {
    ALOGD("_ZN11PdrMheading16mag_model_structC1Ev() called");
    return 0;
}

/* Demangled: SfSatt::upd_ekf_pred_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17upd_ekf_pred_timeEv(void) {
    ALOGD("_ZN6SfSatt17upd_ekf_pred_timeEv() called");
    return 0;
}

/* Demangled: sf_set_default_timer(sf_time_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z20sf_set_default_timerP14sf_time_struct(void) {
    ALOGD("_Z20sf_set_default_timerP14sf_time_struct() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_sm_feas_len() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove15get_sm_feas_lenEv(void) {
    ALOGD("_ZN18InertialStaticMove15get_sm_feas_lenEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_bmi160_accel_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26get_bmi160_accel_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf26get_bmi160_accel_para_50hzEv() called");
    return 0;
}

/* Exported Object: acc_sth_pre_1 */
extern "C" __attribute__((visibility("default"))) void* acc_sth_pre_1 = NULL;

/* Demangled: PdrSatt::adv_start_ekf_condi_struct::adv_start_ekf_condi_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt26adv_start_ekf_condi_structC1Ev(void) {
    ALOGD("_ZN7PdrSatt26adv_start_ekf_condi_structC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_head_var(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess17comp_avg_head_varEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess17comp_avg_head_varEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Exported Object: relative_height */
extern "C" __attribute__((visibility("default"))) void* relative_height = NULL;

/* Exported Object: acc_sth_pre_2 */
extern "C" __attribute__((visibility("default"))) void* acc_sth_pre_2 = NULL;

/* Demangled: PdrIsm::ini_feas() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm8ini_feasEv(void) {
    ALOGD("_ZN6PdrIsm8ini_feasEv() called");
    return 0;
}

/* Demangled: get_user_archive() */
extern "C" __attribute__((visibility("default"))) int _Z16get_user_archivev(void) {
    ALOGD("_Z16get_user_archivev() called");
    return 0;
}

/* Demangled: MonitorDataRate::set_cfg_dr(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate10set_cfg_drEjii(void) {
    ALOGD("_ZN15MonitorDataRate10set_cfg_drEjii() called");
    return 0;
}

/* Demangled: norm_any_len_vector(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z19norm_any_len_vectorPKdi(void) {
    ALOGD("_Z19norm_any_len_vectorPKdi() called");
    return 0;
}

/* Demangled: PdrSgb::upd_stat() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgb8upd_statEv(void) {
    ALOGD("_ZN6PdrSgb8upd_statEv() called");
    return 0;
}

/* Demangled: PdrLpf::get_lsm6dsm_gyro_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf26get_lsm6dsm_gyro_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf26get_lsm6dsm_gyro_para_50hzEv() called");
    return 0;
}

/* Demangled: SfSatt::alloc_meas_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15alloc_meas_paraEv(void) {
    ALOGD("_ZN6SfSatt15alloc_meas_paraEv() called");
    return 0;
}

/* Demangled: SfSatt::meas_para_struct::meas_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16meas_para_structC2Ev(void) {
    ALOGD("_ZN6SfSatt16meas_para_structC2Ev() called");
    return 0;
}

/* Demangled: Barometer::set_ini_hei() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer11set_ini_heiEv(void) {
    ALOGD("_ZN9Barometer11set_ini_heiEv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: PDR::~PDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDRD0Ev(void) {
    ALOGD("_ZN3PDRD0Ev() called");
    return 0;
}

/* Exported Object: vtable for PdrGb */
extern "C" __attribute__((visibility("default"))) void* _ZTV5PdrGb = NULL;

/* Demangled: PdrLpf::get_akm099xx_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf22get_akm099xx_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf22get_akm099xx_para_50hzEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::guess_the_dir(VehBodOrient::VboGrp&, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess13guess_the_dirERNS_6VboGrpEPd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess13guess_the_dirERNS_6VboGrpEPd() called");
    return 0;
}

/* Demangled: dot */
extern "C" __attribute__((visibility("default"))) int dot(void) {
    ALOGD("dot() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: SfSgb::set_sm_results_s(SfIsm::results_struct) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb16set_sm_results_sEN5SfIsm14results_structE(void) {
    ALOGD("_ZN5SfSgb16set_sm_results_sEN5SfIsm14results_structE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::VboGrp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrpC1Ev(void) {
    ALOGD("_ZN12VehBodOrient6VboGrpC1Ev() called");
    return 0;
}

/* Demangled: SfSgb::~SfSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgbD1Ev(void) {
    ALOGD("_ZN5SfSgbD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::comp_indirect_inno() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18comp_indirect_innoEv(void) {
    ALOGD("_ZN6SfSatt18comp_indirect_innoEv() called");
    return 0;
}

/* Demangled: UdrEkf::modify_P(int, UdrEkf::PEnum::PType) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8modify_PEiNS_5PEnum5PTypeE(void) {
    ALOGD("_ZN6UdrEkf8modify_PEiNS_5PEnum5PTypeE() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: PdrIsm::ini_results() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm11ini_resultsEv(void) {
    ALOGD("_ZN6PdrIsm11ini_resultsEv() called");
    return 0;
}

/* Demangled: SfLpf::check_bmi160_accel_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf31check_bmi160_accel_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf31check_bmi160_accel_dec_num_axisEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::is_valid_above_this_level(bool*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect25is_valid_above_this_levelEPbjj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect25is_valid_above_this_levelEPbjj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::retune_wei() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess10retune_weiEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess10retune_weiEv() called");
    return 0;
}

/* Demangled: SfIsm::copy_meas_buff(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm14copy_meas_buffEii(void) {
    ALOGD("_ZN5SfIsm14copy_meas_buffEii() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_GeoMagneticElements::MAGtype_GeoMagneticElements() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm27MAGtype_GeoMagneticElementsC1Ev(void) {
    ALOGD("_ZN5SfWmm27MAGtype_GeoMagneticElementsC1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::delay_buff_struct::delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17delay_buff_structC1Ev(void) {
    ALOGD("_ZN9CarAccelB17delay_buff_structC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::gen_fake_stat_quat(VehBodOrient::stat_quat_struct&, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart18gen_fake_stat_quatERNS_16stat_quat_structEPKd(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart18gen_fake_stat_quatERNS_16stat_quat_structEPKd() called");
    return 0;
}

/* Demangled: Matrix::check_this_size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix15check_this_sizeEv(void) {
    ALOGD("_ZNK6Matrix15check_this_sizeEv() called");
    return 0;
}

/* Demangled: dot(double const*, double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z3dotPKdS0_i(void) {
    ALOGD("_Z3dotPKdS0_i() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::~Rts() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3RtsD2Ev(void) {
    ALOGD("_ZN9CarAccelB3RtsD2Ev() called");
    return 0;
}

/* Demangled: most_stable_ax */
extern "C" __attribute__((visibility("default"))) int most_stable_ax(void) {
    ALOGD("most_stable_ax() called");
    return 0;
}

/* Demangled: PdrLpf::get_bmi160_gyro_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf25get_bmi160_gyro_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf25get_bmi160_gyro_para_50hzEv() called");
    return 0;
}

/* Demangled: algo_input_data_generation */
extern "C" __attribute__((visibility("default"))) int algo_input_data_generation(void) {
    ALOGD("algo_input_data_generation() called");
    return 0;
}

/* Demangled: SfSatt::ctrl_para_struct::~ctrl_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ctrl_para_structD2Ev(void) {
    ALOGD("_ZN6SfSatt16ctrl_para_structD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::renormalize_dcm_p(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17renormalize_dcm_pER6Matrix(void) {
    ALOGD("_ZN6SfSatt17renormalize_dcm_pER6Matrix() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: CarAccelB::comp_wbased_wei_var(CarAccelB::sub_kf_buff_struct const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB19comp_wbased_wei_varEPKNS_18sub_kf_buff_structEPd(void) {
    ALOGD("_ZNK9CarAccelB19comp_wbased_wei_varEPKNS_18sub_kf_buff_structEPd() called");
    return 0;
}

/* Demangled: UdrEkf::check_Corr_to_remove_P_Correlation(Matrix&, unsigned int*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf34check_Corr_to_remove_P_CorrelationER6MatrixPjd(void) {
    ALOGD("_ZN6UdrEkf34check_Corr_to_remove_P_CorrelationER6MatrixPjd() called");
    return 0;
}

/* Demangled: UdrEkf::get_Rpos(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8get_RposEi(void) {
    ALOGD("_ZN6UdrEkf8get_RposEi() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::~mag_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_structD1Ev(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_structD1Ev() called");
    return 0;
}

/* Demangled: PdrMheading::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading11meas_structC2Ev(void) {
    ALOGD("_ZN11PdrMheading11meas_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::ekf_predict_p() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt13ekf_predict_pEv(void) {
    ALOGD("_ZN6SfSatt13ekf_predict_pEv() called");
    return 0;
}

/* Demangled: array_multiply_double */
extern "C" __attribute__((visibility("default"))) int array_multiply_double(void) {
    ALOGD("array_multiply_double() called");
    return 0;
}

/* Demangled: PdrMheading::copy_out() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading8copy_outEv(void) {
    ALOGD("_ZN11PdrMheading8copy_outEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::_max(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect4_maxEPdi(void) {
    ALOGD("_ZN14SfStaticDetect4_maxEPdi() called");
    return 0;
}

/* Demangled: SfLpf::set_smooth_result(SfLpf::smoop_result_struct&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17set_smooth_resultERNS_19smoop_result_structEi(void) {
    ALOGD("_ZN5SfLpf17set_smooth_resultERNS_19smoop_result_structEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::pred_state_covariance_matrix(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF28pred_state_covariance_matrixER6MatrixS2_(void) {
    ALOGD("_ZN9CarAccelB5SubKF28pred_state_covariance_matrixER6MatrixS2_() called");
    return 0;
}

/* Demangled: PdrMheading::compare_meas_wmm() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16compare_meas_wmmEv(void) {
    ALOGD("_ZN11PdrMheading16compare_meas_wmmEv() called");
    return 0;
}

/* Demangled: SfIsm::feas_struct::feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11feas_structC1Ev(void) {
    ALOGD("_ZN5SfIsm11feas_structC1Ev() called");
    return 0;
}

/* Demangled: SfSatt::~SfSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSattD1Ev(void) {
    ALOGD("_ZN6SfSattD1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::increase_var(int, int, int, int, double const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct12increase_varEiiiiPKd(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct12increase_varEiiiiPKd() called");
    return 0;
}

/* Exported Object: mapRegion */
extern "C" __attribute__((visibility("default"))) void* mapRegion = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::total_activate_bin() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel18total_activate_binEv(void) {
    ALOGD("_ZN9Pedometer7SsModel18total_activate_binEv() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::SsModel(ConfigParams const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModelC2ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd(void) {
    ALOGD("_ZN9Pedometer7SsModelC2ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd() called");
    return 0;
}

/* Demangled: tag_log(int, char const*, char const*, char const*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z7tag_logiPKcS0_S0_iS0_(void) {
    ALOGD("_Z7tag_logiPKcS0_S0_iS0_() called");
    return 0;
}

/* Exported Object: UdrEkf::R_MATRIX_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf12R_MATRIX_COVE = NULL;

/* Demangled: SfLpf::set_adv_default_imu_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf28set_adv_default_imu_lpf_paraEv(void) {
    ALOGD("_ZN5SfLpf28set_adv_default_imu_lpf_paraEv() called");
    return 0;
}

/* Demangled: SfGb::upd_buff(double, double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb8upd_buffEdPKdd(void) {
    ALOGD("_ZN4SfGb8upd_buffEdPKdd() called");
    return 0;
}

/* Demangled: UdrEkf::set_sf2v(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8set_sf2vER6Matrix(void) {
    ALOGD("_ZN6UdrEkf8set_sf2vER6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::upd_gdcm3_buff(CarAccelB::output_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm314upd_gdcm3_buffERKN9CarAccelB13output_structE(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm314upd_gdcm3_buffERKN9CarAccelB13output_structE() called");
    return 0;
}

/* Demangled: GnssAccelDecel::~GnssAccelDecel() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecelD2Ev(void) {
    ALOGD("_ZN14GnssAccelDecelD2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_gad() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp16get_buff_avg_gadEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp16get_buff_avg_gadEv() called");
    return 0;
}

/* Demangled: PdrSgb::~PdrSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgbD0Ev(void) {
    ALOGD("_ZN6PdrSgbD0Ev() called");
    return 0;
}

/* Exported Object: acc_final_static_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_final_static_pitch = NULL;

/* Exported Object: acc_raw_bias */
extern "C" __attribute__((visibility("default"))) void* acc_raw_bias = NULL;

/* Demangled: PdrEkf::comp_init_conditions(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf20comp_init_conditionsEd(void) {
    ALOGD("_ZN6PdrEkf20comp_init_conditionsEd() called");
    return 0;
}

/* Exported Object: vtable for PositioningMethod */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PositioningMethod = NULL;

/* Demangled: CarAccelB::SubKF::SubKF() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKFC1Ev(void) {
    ALOGD("_ZN9CarAccelB5SubKFC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::VboLess() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLessC1Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLessC1Ev() called");
    return 0;
}

/* Demangled: DataProcess::batch_handle_irregular_mems() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess27batch_handle_irregular_memsEv(void) {
    ALOGD("_ZN11DataProcess27batch_handle_irregular_memsEv() called");
    return 0;
}

/* Demangled: degree_to_degree_minutes(double) */
extern "C" __attribute__((visibility("default"))) int _Z24degree_to_degree_minutesd(void) {
    ALOGD("_Z24degree_to_degree_minutesd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::is_good_fake_grav_proj(CarAccelB::output_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart22is_good_fake_grav_projERKN9CarAccelB13output_structE(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart22is_good_fake_grav_projERKN9CarAccelB13output_structE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: is_any_not_zero(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15is_any_not_zeroPKdi(void) {
    ALOGD("_Z15is_any_not_zeroPKdi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_gad(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess12comp_avg_gadEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess12comp_avg_gadEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::~VboGdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm3D2Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm3D2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::set_v2p(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_v2pER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_v2pER6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::UdrEkf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkfC2ERK12ConfigParams(void) {
    ALOGD("_ZN6UdrEkfC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: InertialStaticMove::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11meas_structC1Ev(void) {
    ALOGD("_ZN18InertialStaticMove11meas_structC1Ev() called");
    return 0;
}

/* Demangled: Matrix::mT() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix2mTEv(void) {
    ALOGD("_ZNK6Matrix2mTEv() called");
    return 0;
}

/* Demangled: SfSatt::ekf_upd_p() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt9ekf_upd_pEv(void) {
    ALOGD("_ZN6SfSatt9ekf_upd_pEv() called");
    return 0;
}

/* Demangled: Barometer::get_height_state() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer16get_height_stateEv(void) {
    ALOGD("_ZN9Barometer16get_height_stateEv() called");
    return 0;
}

/* Demangled: VehBodOrient::~VehBodOrient() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrientD1Ev(void) {
    ALOGD("_ZN12VehBodOrientD1Ev() called");
    return 0;
}

/* Demangled: SystemStateControl::check_cvb_dir_struct::check_cvb_dir_struct(SystemStateControl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_structC1ERKS_(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_structC1ERKS_() called");
    return 0;
}

/* Demangled: PdrMheading::PdrMheading() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheadingC2Ev(void) {
    ALOGD("_ZN11PdrMheadingC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::set_gp_gb_state_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt20set_gp_gb_state_paraEv(void) {
    ALOGD("_ZN6SfSatt20set_gp_gb_state_paraEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_out(CarAccelB::output_struct&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF7upd_outERNS_13output_structE(void) {
    ALOGD("_ZN9CarAccelB5SubKF7upd_outERNS_13output_structE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::reset_less_buff() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15reset_less_buffEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15reset_less_buffEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_q_from_qq(VehBodOrient::stat_quat_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess18comp_avg_q_from_qqEPNS_16stat_quat_structE(void) {
    ALOGD("_ZN12VehBodOrient7VboLess18comp_avg_q_from_qqEPNS_16stat_quat_structE() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: PdrSatt::copy_out() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt8copy_outEv(void) {
    ALOGD("_ZN7PdrSatt8copy_outEv() called");
    return 0;
}

/* Demangled: SfSatt::ekf_set_ctrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt12ekf_set_ctrlEv(void) {
    ALOGD("_ZN6SfSatt12ekf_set_ctrlEv() called");
    return 0;
}

/* Demangled: SfLpf::set_sensor_dec(sensor::SensorIDEnum::SensorIDType, int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14set_sensor_decEN6sensor12SensorIDEnum12SensorIDTypeEidiRNS_12smoop_structERb(void) {
    ALOGD("_ZN5SfLpf14set_sensor_decEN6sensor12SensorIDEnum12SensorIDTypeEidiRNS_12smoop_structERb() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_select_a_from_buff(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp22get_select_a_from_buffEjj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp22get_select_a_from_buffEjj() called");
    return 0;
}

/* Demangled: MINOR */
extern "C" __attribute__((visibility("default"))) int MINOR(void) {
    ALOGD("MINOR() called");
    return 0;
}

/* Demangled: PdrEkf::upd_heading_diff(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf16upd_heading_diffEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6PdrEkf16upd_heading_diffEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GetUserInput(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm16MAG_GetUserInputEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN5SfWmm16MAG_GetUserInputEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: pedometer_divide32 */
extern "C" __attribute__((visibility("default"))) int pedometer_divide32(void) {
    ALOGD("pedometer_divide32() called");
    return 0;
}

/* Demangled: PdrUpdTypeSelect::update(sf_gnss_msg_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelect6updateEP18sf_gnss_msg_structd(void) {
    ALOGD("_ZN16PdrUpdTypeSelect6updateEP18sf_gnss_msg_structd() called");
    return 0;
}

/* Demangled: almost_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z12almost_equalddd(void) {
    ALOGD("_Z12almost_equalddd() called");
    return 0;
}

/* Demangled: get_pedometer_step_count */
extern "C" __attribute__((visibility("default"))) int get_pedometer_step_count(void) {
    ALOGD("get_pedometer_step_count() called");
    return 0;
}

/* Demangled: UDR::process(MonitorDataRate&, sf_gnss_msg_struct const*, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::fake_quat(CarAccelB::output_struct const&, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart9fake_quatERKN9CarAccelB13output_structEPd(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart9fake_quatERKN9CarAccelB13output_structEPd() called");
    return 0;
}

/* Demangled: Matrix::mSub(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4mSubERS_S0_(void) {
    ALOGD("_ZN6Matrix4mSubERS_S0_() called");
    return 0;
}

/* Demangled: PdrIsm::comp_w_dist() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm11comp_w_distEv(void) {
    ALOGD("_ZN6PdrIsm11comp_w_distEv() called");
    return 0;
}

/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetectD0Ev(void) {
    ALOGD("_ZN15PdrMotionDetectD0Ev() called");
    return 0;
}

/* Demangled: UdrEkf::get_init_ekf_ready() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf18get_init_ekf_readyEv(void) {
    ALOGD("_ZNK6UdrEkf18get_init_ekf_readyEv() called");
    return 0;
}

/* Demangled: PdrMotionDetect::get_smooth_sensor_motion() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect24get_smooth_sensor_motionEv(void) {
    ALOGD("_ZN15PdrMotionDetect24get_smooth_sensor_motionEv() called");
    return 0;
}

/* Demangled: PdrGb::~PdrGb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGbD0Ev(void) {
    ALOGD("_ZN5PdrGbD0Ev() called");
    return 0;
}

/* Demangled: ConfigParams::mapping_gyro_id(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12ConfigParams15mapping_gyro_idEPc(void) {
    ALOGD("_ZN12ConfigParams15mapping_gyro_idEPc() called");
    return 0;
}

/* Demangled: UdrEkf::modify_P(int, int, UdrEkf::PEnum::PType) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8modify_PEiiNS_5PEnum5PTypeE(void) {
    ALOGD("_ZN6UdrEkf8modify_PEiiNS_5PEnum5PTypeE() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::is_available_temperature(double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias24is_available_temperatureEd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias24is_available_temperatureEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::is_straight(VehBodOrient::VboGrp const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess11is_straightERKNS_6VboGrpEj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess11is_straightERKNS_6VboGrpEj() called");
    return 0;
}

/* Demangled: cross(Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z5crossRK6MatrixS1_(void) {
    ALOGD("_Z5crossRK6MatrixS1_() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::tune_var(CarAccelB::sub_kf_buff_struct const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct8tune_varEPKNS_18sub_kf_buff_structEPd(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct8tune_varEPKNS_18sub_kf_buff_structEPd() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorAtt::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorAtt5R_COVE = NULL;

/* Demangled: UdrLpf::set_adv_imu_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf20set_adv_imu_lpf_paraEv(void) {
    ALOGD("_ZN6UdrLpf20set_adv_imu_lpf_paraEv() called");
    return 0;
}

/* Demangled: SystemStateControl::control_ekf_cvb_update(UdrEkf&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl22control_ekf_cvb_updateER6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl22control_ekf_cvb_updateER6UdrEkf() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::reverse_label() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp13reverse_labelEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp13reverse_labelEv() called");
    return 0;
}

/* Demangled: SfLpf::adv_filt_gnss(MonitorDataRate const&, CloneNearGnss&, sf_gnss_msg_struct*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf13adv_filt_gnssERK15MonitorDataRateR13CloneNearGnssRP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN5SfLpf13adv_filt_gnssERK15MonitorDataRateR13CloneNearGnssRP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfWmm::MAG_PrintUserDataWithUncertainty(SfWmm::MAGtype_GeoMagneticElements const&, SfWmm::MAGtype_MagneticModel*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm32MAG_PrintUserDataWithUncertaintyERKNS_27MAGtype_GeoMagneticElementsEPNS_21MAGtype_MagneticModelE(void) {
    ALOGD("_ZN5SfWmm32MAG_PrintUserDataWithUncertaintyERKNS_27MAGtype_GeoMagneticElementsEPNS_21MAGtype_MagneticModelE() called");
    return 0;
}

/* Demangled: UdrEkf::gnss_accel_struct::gnss_accel_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17gnss_accel_structC2Ev(void) {
    ALOGD("_ZN6UdrEkf17gnss_accel_structC2Ev() called");
    return 0;
}

/* Demangled: Matrix::operator+(Matrix const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixplERKS_(void) {
    ALOGD("_ZNK6MatrixplERKS_() called");
    return 0;
}

/* Demangled: SfSgb::check_struct::check_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb12check_structC1Ev(void) {
    ALOGD("_ZN5SfSgb12check_structC1Ev() called");
    return 0;
}

/* Demangled: UdrLpf::set_bmi160_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_centripetal_a() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp26get_buff_avg_centripetal_aEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp26get_buff_avg_centripetal_aEv() called");
    return 0;
}

/* Exported Object: smd_detected */
extern "C" __attribute__((visibility("default"))) void* smd_detected = NULL;

/* Exported Object: acc_no_fix_cnt */
extern "C" __attribute__((visibility("default"))) void* acc_no_fix_cnt = NULL;

/* Demangled: PdrUpdTypeSelect::PdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelectC1Ev(void) {
    ALOGD("_ZN16PdrUpdTypeSelectC1Ev() called");
    return 0;
}

/* Demangled: SfIsm::SfIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsmC2Ev(void) {
    ALOGD("_ZN5SfIsmC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: UdrEkf::zupt_measurement_update(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf23zupt_measurement_updateEjj(void) {
    ALOGD("_ZN6UdrEkf23zupt_measurement_updateEjj() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_substitute_good_fb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl25coarse_substitute_good_fbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl25coarse_substitute_good_fbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: PdrMheading::comp_calib_mag(double) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading14comp_calib_magEd(void) {
    ALOGD("_ZN11PdrMheading14comp_calib_magEd() called");
    return 0;
}

/* Demangled: UdrEkf::update_init_cali_flag(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21update_init_cali_flagEPj(void) {
    ALOGD("_ZN6UdrEkf21update_init_cali_flagEPj() called");
    return 0;
}

/* Demangled: UDR::is_service_active() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR17is_service_activeEv(void) {
    ALOGD("_ZN3UDR17is_service_activeEv() called");
    return 0;
}

/* Exported Object: acc_curr_gps_cnt */
extern "C" __attribute__((visibility("default"))) void* acc_curr_gps_cnt = NULL;

/* Demangled: PdrEkf::get_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf9get_stateEi(void) {
    ALOGD("_ZN6PdrEkf9get_stateEi() called");
    return 0;
}

/* Demangled: DataProcess::check_data_is_valid() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess19check_data_is_validEv(void) {
    ALOGD("_ZN11DataProcess19check_data_is_validEv() called");
    return 0;
}

/* Demangled: upd_raw_while_initial(SfLpf::smoop_struct&, double const*) */
extern "C" __attribute__((visibility("default"))) int _Z21upd_raw_while_initialRN5SfLpf12smoop_structEPKd(void) {
    ALOGD("_Z21upd_raw_while_initialRN5SfLpf12smoop_structEPKd() called");
    return 0;
}

/* Demangled: eul2qua(Matrix&, double*) */
extern "C" __attribute__((visibility("default"))) int _Z7eul2quaR6MatrixPd(void) {
    ALOGD("_Z7eul2quaR6MatrixPd() called");
    return 0;
}

/* Demangled: SfSatt::comp_indirect_inno_ng_gp() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt24comp_indirect_inno_ng_gpEv(void) {
    ALOGD("_ZN6SfSatt24comp_indirect_inno_ng_gpEv() called");
    return 0;
}

/* Demangled: sf_strncpy(char*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z10sf_strncpyPcPKcj(void) {
    ALOGD("_Z10sf_strncpyPcPKcj() called");
    return 0;
}

/* Demangled: SfWmm::MAG_CalculateGeoMagneticElements(SfWmm::MAGtype_MagneticResults*, SfWmm::MAGtype_GeoMagneticElements*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm32MAG_CalculateGeoMagneticElementsEPNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm32MAG_CalculateGeoMagneticElementsEPNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: UdrEkf::update_ekf_init_flag(sf_gnss_msg_struct*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf20update_ekf_init_flagEP18sf_gnss_msg_structi(void) {
    ALOGD("_ZN6UdrEkf20update_ekf_init_flagEP18sf_gnss_msg_structi() called");
    return 0;
}

/* Demangled: SystemStateControl::check_cvb_dir_struct::reset_pass() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_struct10reset_passEv(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_struct10reset_passEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_adned_head_var() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp27get_buff_avg_adned_head_varEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp27get_buff_avg_adned_head_varEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::get_gdcm3_select_ext_g_from_buff(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient8VboGdcm332get_gdcm3_select_ext_g_from_buffEjj(void) {
    ALOGD("_ZNK12VehBodOrient8VboGdcm332get_gdcm3_select_ext_g_from_buffEjj() called");
    return 0;
}

/* Exported Object: vehicle_gyro */
extern "C" __attribute__((visibility("default"))) void* vehicle_gyro = NULL;

/* Exported Object: ATT_acc_avg_buf */
extern "C" __attribute__((visibility("default"))) void* ATT_acc_avg_buf = NULL;

/* Demangled: find_road_direction_deviation */
extern "C" __attribute__((visibility("default"))) int find_road_direction_deviation(void) {
    ALOGD("find_road_direction_deviation() called");
    return 0;
}

/* Demangled: PdrLpf::PdrLpf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpfC2ERK12ConfigParams(void) {
    ALOGD("_ZN6PdrLpfC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: PdrMotionDetect::update_gravity(sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect14update_gravityEP18sf_mems_msg_struct(void) {
    ALOGD("_ZN15PdrMotionDetect14update_gravityEP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: Pedometer::update_step_type(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer16update_step_typeEi(void) {
    ALOGD("_ZN9Pedometer16update_step_typeEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double>(double&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJdEEEvDpOT_() called");
    return 0;
}

/* Demangled: get_pedometer_best_run_axis */
extern "C" __attribute__((visibility("default"))) int get_pedometer_best_run_axis(void) {
    ALOGD("get_pedometer_best_run_axis() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: SfSatt::gen_sys_cov_matrix_dcm_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt25gen_sys_cov_matrix_dcm_gbEv(void) {
    ALOGD("_ZN6SfSatt25gen_sys_cov_matrix_dcm_gbEv() called");
    return 0;
}

/* Demangled: UdrEkf::set_p2v(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_p2vER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_p2vER6Matrix() called");
    return 0;
}

/* Demangled: UdrLpf::set_icm40607_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level3(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20upd_rough_cvb_level3ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl20upd_rough_cvb_level3ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Exported Object: acc_curr_gps_mean */
extern "C" __attribute__((visibility("default"))) void* acc_curr_gps_mean = NULL;

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: comp_variance(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13comp_variancePKdi(void) {
    ALOGD("_Z13comp_variancePKdi() called");
    return 0;
}

/* Demangled: matrix_to_array3x3(Matrix const&, double (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _Z18matrix_to_array3x3RK6MatrixPA3_d(void) {
    ALOGD("_Z18matrix_to_array3x3RK6MatrixPA3_d() called");
    return 0;
}

/* Demangled: SfSgb::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb11meas_structC1Ev(void) {
    ALOGD("_ZN5SfSgb11meas_structC1Ev() called");
    return 0;
}

/* Demangled: UDR::get_pvt_result() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR14get_pvt_resultEv(void) {
    ALOGD("_ZN3UDR14get_pvt_resultEv() called");
    return 0;
}

/* Demangled: SystemStateControl::trigger_preprocessing_to_less_out(VehBodOrient::less_output_struct const&, UdrUpdTypeSelect&, SystemStateControl::CoarseCvbEnum::CoarseCvbType, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl33trigger_preprocessing_to_less_outERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelectNS_13CoarseCvbEnum13CoarseCvbTypeES7_(void) {
    ALOGD("_ZN18SystemStateControl33trigger_preprocessing_to_less_outERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelectNS_13CoarseCvbEnum13CoarseCvbTypeES7_() called");
    return 0;
}

/* Demangled: v3_predict_by_tree */
extern "C" __attribute__((visibility("default"))) int v3_predict_by_tree(void) {
    ALOGD("v3_predict_by_tree() called");
    return 0;
}

/* Demangled: PdrLpf::get_mmc5603_para_5hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf20get_mmc5603_para_5hzEv(void) {
    ALOGD("_ZN6PdrLpf20get_mmc5603_para_5hzEv() called");
    return 0;
}

/* Demangled: Matrix::mMult(Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix5mMultERKS_S1_(void) {
    ALOGD("_ZN6Matrix5mMultERKS_S1_() called");
    return 0;
}

/* Demangled: UdrEkf::imu_sf_as_gamma_struct::imu_sf_as_gamma_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22imu_sf_as_gamma_structC1Ev(void) {
    ALOGD("_ZN6UdrEkf22imu_sf_as_gamma_structC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::interp_gdcm3_to_sync_grp(VehBodOrient::VboGrp&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm324interp_gdcm3_to_sync_grpERNS_6VboGrpE(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm324interp_gdcm3_to_sync_grpERNS_6VboGrpE() called");
    return 0;
}

/* Demangled: sf_read_data */
extern "C" __attribute__((visibility("default"))) int sf_read_data(void) {
    ALOGD("sf_read_data() called");
    return 0;
}

/* Demangled: mov_wei_avg(double*, double const*, double, int) */
extern "C" __attribute__((visibility("default"))) int _Z11mov_wei_avgPdPKddi(void) {
    ALOGD("_Z11mov_wei_avgPdPKddi() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::reforward_meas_upd(int, int, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts18reforward_meas_updEiiR6MatrixS2_(void) {
    ALOGD("_ZN9CarAccelB3Rts18reforward_meas_updEiiR6MatrixS2_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_Q_grav_proj(Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF16comp_Q_grav_projERK6MatrixS3_S3_RS1_(void) {
    ALOGD("_ZNK9CarAccelB5SubKF16comp_Q_grav_projERK6MatrixS3_S3_RS1_() called");
    return 0;
}

/* Demangled: GnssAccelDecel::cnt_ava_data(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel12cnt_ava_dataEPdi(void) {
    ALOGD("_ZN14GnssAccelDecel12cnt_ava_dataEPdi() called");
    return 0;
}

/* Demangled: min_distance */
extern "C" __attribute__((visibility("default"))) int min_distance(void) {
    ALOGD("min_distance() called");
    return 0;
}

/* Demangled: SfLpf::set_mag_dec() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf11set_mag_decEv(void) {
    ALOGD("_ZN5SfLpf11set_mag_decEv() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::~phone_yaw_moved_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD1Ev(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::set_cbv2v(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf9set_cbv2vER6Matrix(void) {
    ALOGD("_ZN6UdrEkf9set_cbv2vER6Matrix() called");
    return 0;
}

/* Demangled: SimpleGyroBias::gbuff_struct::~gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias12gbuff_structD1Ev(void) {
    ALOGD("_ZN14SimpleGyroBias12gbuff_structD1Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_avoiding_gnss_update(double) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect24get_avoiding_gnss_updateEd(void) {
    ALOGD("_ZN16UdrUpdTypeSelect24get_avoiding_gnss_updateEd() called");
    return 0;
}

/* Demangled: SfLpf::get_default_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf16get_default_paraEv(void) {
    ALOGD("_ZN5SfLpf16get_default_paraEv() called");
    return 0;
}

/* Demangled: SfLpf::set_gnss_lpf_paras(SfLpf::para_struct const*, SfLpf::para_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf18set_gnss_lpf_parasEPKNS_11para_structES2_(void) {
    ALOGD("_ZN5SfLpf18set_gnss_lpf_parasEPKNS_11para_structES2_() called");
    return 0;
}

/* Demangled: PDR::algo_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR10algo_resetEv(void) {
    ALOGD("_ZN3PDR10algo_resetEv() called");
    return 0;
}

/* Demangled: PdrMheading::out_struct::out_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading10out_structC2Ev(void) {
    ALOGD("_ZN11PdrMheading10out_structC2Ev() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::is_model_available(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel18is_model_availableEd(void) {
    ALOGD("_ZN9Pedometer7SsModel18is_model_availableEd() called");
    return 0;
}

/* Demangled: DataProcess::mems_preprocess(sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess15mems_preprocessEP18sf_mems_msg_struct(void) {
    ALOGD("_ZN11DataProcess15mems_preprocessEP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_head_auy(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf21get_adv_gnss_head_auyEPd(void) {
    ALOGD("_ZNK5SfLpf21get_adv_gnss_head_auyEPd() called");
    return 0;
}

/* Demangled: UdrEkf::state_accumulate(Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16state_accumulateER6MatrixS1_S1_(void) {
    ALOGD("_ZN6UdrEkf16state_accumulateER6MatrixS1_S1_() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::update(sf_gnss_msg_struct*, UdrEkf*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect6updateEP18sf_gnss_msg_structP6UdrEkfii(void) {
    ALOGD("_ZN16UdrUpdTypeSelect6updateEP18sf_gnss_msg_structP6UdrEkfii() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level1(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20upd_rough_cvb_level1ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl20upd_rough_cvb_level1ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: initialize_ped */
extern "C" __attribute__((visibility("default"))) int initialize_ped(void) {
    ALOGD("initialize_ped() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: PdrIsm::PdrIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsmC1Ev(void) {
    ALOGD("_ZN6PdrIsmC1Ev() called");
    return 0;
}

/* Demangled: PdrIgp::PdrIgp() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgpC2Ev(void) {
    ALOGD("_ZN6PdrIgpC2Ev() called");
    return 0;
}

/* Demangled: PdrIsm::comp_sf_iqr() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm11comp_sf_iqrEv(void) {
    ALOGD("_ZN6PdrIsm11comp_sf_iqrEv() called");
    return 0;
}

/* Demangled: ConfigParams::ConfigParams(sf_user_param_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN12ConfigParamsC2EP20sf_user_param_struct(void) {
    ALOGD("_ZN12ConfigParamsC2EP20sf_user_param_struct() called");
    return 0;
}

/* Demangled: DataProcess::~DataProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcessD2Ev(void) {
    ALOGD("_ZN11DataProcessD2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_Geoid::MAGtype_Geoid(float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm13MAGtype_GeoidC2EPKf(void) {
    ALOGD("_ZN5SfWmm13MAGtype_GeoidC2EPKf() called");
    return 0;
}

/* Demangled: SystemStateControl::assign_coarse_cvb(UdrEkf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17assign_coarse_cvbERK6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl17assign_coarse_cvbERK6UdrEkf() called");
    return 0;
}

/* Demangled: SystemStateControl::is_ekf_cvb_converged_to_oppo_dir() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl32is_ekf_cvb_converged_to_oppo_dirEv(void) {
    ALOGD("_ZN18SystemStateControl32is_ekf_cvb_converged_to_oppo_dirEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::~VboFakeStart() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStartD2Ev(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStartD2Ev() called");
    return 0;
}

/* Demangled: PdrSatt::tuning_struct::tuning_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt13tuning_structC1Ev(void) {
    ALOGD("_ZN7PdrSatt13tuning_structC1Ev() called");
    return 0;
}

/* Demangled: SfSgb::results_struct::results_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb14results_structC2Ev(void) {
    ALOGD("_ZN5SfSgb14results_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::is_test_pred_by_dcm() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt19is_test_pred_by_dcmEv(void) {
    ALOGD("_ZNK6SfSatt19is_test_pred_by_dcmEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::gad_buff_struct::~gad_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel15gad_buff_structD1Ev(void) {
    ALOGD("_ZN14GnssAccelDecel15gad_buff_structD1Ev() called");
    return 0;
}

/* Demangled: SystemStateControl::does_get_fine_cvb_in_ekf_level() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl30does_get_fine_cvb_in_ekf_levelEv(void) {
    ALOGD("_ZN18SystemStateControl30does_get_fine_cvb_in_ekf_levelEv() called");
    return 0;
}

/* Demangled: v3_feature_extraction */
extern "C" __attribute__((visibility("default"))) int v3_feature_extraction(void) {
    ALOGD("v3_feature_extraction() called");
    return 0;
}

/* Demangled: SfGb::SfGb() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGbC2Ev(void) {
    ALOGD("_ZN4SfGbC2Ev() called");
    return 0;
}

/* Demangled: SfLpf::set_imu_dec() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf11set_imu_decEv(void) {
    ALOGD("_ZN5SfLpf11set_imu_decEv() called");
    return 0;
}

/* Demangled: SfLpf::replace_original_sensor_data(sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf28replace_original_sensor_dataEP18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf28replace_original_sensor_dataEP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: UdrEkf::pitch_constrain(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf15pitch_constrainEd(void) {
    ALOGD("_ZN6UdrEkf15pitch_constrainEd() called");
    return 0;
}

/* Demangled: VehBodOrient::get_min_t_to_est_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient20get_min_t_to_est_cvbEv(void) {
    ALOGD("_ZN12VehBodOrient20get_min_t_to_est_cvbEv() called");
    return 0;
}

/* Demangled: SystemStateControl::comp_coarse_cvb_diff(Matrix const&, double&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20comp_coarse_cvb_diffERK6MatrixRdRb(void) {
    ALOGD("_ZN18SystemStateControl20comp_coarse_cvb_diffERK6MatrixRdRb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: UdrLpf::get_icm40607_accel_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf29get_icm40607_accel_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf29get_icm40607_accel_para_200hzEv() called");
    return 0;
}

/* Exported Object: acc_static_roll */
extern "C" __attribute__((visibility("default"))) void* acc_static_roll = NULL;

/* Exported Object: dr_FixConstant */
extern "C" __attribute__((visibility("default"))) void* dr_FixConstant = NULL;

/* Exported Object: mapWayCompany */
extern "C" __attribute__((visibility("default"))) void* mapWayCompany = NULL;

/* Exported Object: matching_location_degree */
extern "C" __attribute__((visibility("default"))) void* matching_location_degree = NULL;

/* Demangled: DataProcess::get_mems_rest() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess13get_mems_restEv(void) {
    ALOGD("_ZN11DataProcess13get_mems_restEv() called");
    return 0;
}

/* Demangled: UdrEkf::predict_acceleration_estimate(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf29predict_acceleration_estimateEb(void) {
    ALOGD("_ZN6UdrEkf29predict_acceleration_estimateEb() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SfSatt::select_ctrl_type() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16select_ctrl_typeEv(void) {
    ALOGD("_ZN6SfSatt16select_ctrl_typeEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::dump_meas_upd_results() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF21dump_meas_upd_resultsEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF21dump_meas_upd_resultsEv() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_ekf_cvb_info(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl16upd_ekf_cvb_infoERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl16upd_ekf_cvb_infoERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: SfLpf::smoop_struct::smoop_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12smoop_structC1Ev(void) {
    ALOGD("_ZN5SfLpf12smoop_structC1Ev() called");
    return 0;
}

/* Demangled: SfSatt::set_Rk() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt6set_RkEv(void) {
    ALOGD("_ZN6SfSatt6set_RkEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_bmi160_gyro_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf25get_bmi160_gyro_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf25get_bmi160_gyro_para_50hzEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::comp_nw_shape(VehBodOrient::VboGrp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_struct13comp_nw_shapeERKNS_6VboGrpE(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_struct13comp_nw_shapeERKNS_6VboGrpE() called");
    return 0;
}

/* Demangled: SystemStateControl::update(sf_mems_msg_struct*, UdrUpdTypeSelect&, InertialAtt&, CarAccelB const&, VehBodOrient const&, UdrStaticDetect&, UdrEkf&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl6updateEP18sf_mems_msg_structR16UdrUpdTypeSelectR11InertialAttRK9CarAccelBRK12VehBodOrientR15UdrStaticDetectR6UdrEkfb(void) {
    ALOGD("_ZN18SystemStateControl6updateEP18sf_mems_msg_structR16UdrUpdTypeSelectR11InertialAttRK9CarAccelBRK12VehBodOrientR15UdrStaticDetectR6UdrEkfb() called");
    return 0;
}

/* Exported Object: pedometer_out */
extern "C" __attribute__((visibility("default"))) void* pedometer_out = NULL;

/* Demangled: PDR::upd_ism_and_gb(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR14upd_ism_and_gbERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE(void) {
    ALOGD("_ZN3PDR14upd_ism_and_gbERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE() called");
    return 0;
}

/* Demangled: SfWmm::get_wmm_elements(sf_gnss_msg_struct const*, SfWmm::MAGtype_GeoMagneticElements&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm16get_wmm_elementsEPK18sf_gnss_msg_structRNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm16get_wmm_elementsEPK18sf_gnss_msg_structRNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: SystemStateControl::switch_coarse_level(double, VehBodOrient::VboAtEnum::AtType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl19switch_coarse_levelEdN12VehBodOrient9VboAtEnum6AtTypeE(void) {
    ALOGD("_ZN18SystemStateControl19switch_coarse_levelEdN12VehBodOrient9VboAtEnum6AtTypeE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: PdrIsm::comp_sf_rng() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm11comp_sf_rngEv(void) {
    ALOGD("_ZN6PdrIsm11comp_sf_rngEv() called");
    return 0;
}

/* Demangled: PdrLpf::get_mmc5603_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf21get_mmc5603_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf21get_mmc5603_para_50hzEv() called");
    return 0;
}

/* Demangled: SfSatt::gen_state_transition_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt27gen_state_transition_matrixEv(void) {
    ALOGD("_ZN6SfSatt27gen_state_transition_matrixEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::reset_gpart_tmp_stat() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias20reset_gpart_tmp_statEv(void) {
    ALOGD("_ZN14SimpleGyroBias20reset_gpart_tmp_statEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: SfSatt::set_ekf_var_pred() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16set_ekf_var_predEv(void) {
    ALOGD("_ZN6SfSatt16set_ekf_var_predEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_ConvertGeoidToEllipsoidHeight(SfWmm::MAGtype_CoordGeodetic*, SfWmm::MAGtype_Geoid*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm33MAG_ConvertGeoidToEllipsoidHeightEPNS_21MAGtype_CoordGeodeticEPNS_13MAGtype_GeoidE(void) {
    ALOGD("_ZN5SfWmm33MAG_ConvertGeoidToEllipsoidHeightEPNS_21MAGtype_CoordGeodeticEPNS_13MAGtype_GeoidE() called");
    return 0;
}

/* Demangled: UdrEkf::init_accumulate_parameter() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25init_accumulate_parameterEv(void) {
    ALOGD("_ZN6UdrEkf25init_accumulate_parameterEv() called");
    return 0;
}

/* Demangled: UDR::is_solution_stable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR18is_solution_stableEb(void) {
    ALOGD("_ZN3UDR18is_solution_stableEb() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl29coarse_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl29coarse_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: state_to_rotationM */
extern "C" __attribute__((visibility("default"))) int state_to_rotationM(void) {
    ALOGD("state_to_rotationM() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_CoordSpherical::MAGtype_CoordSpherical() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm22MAGtype_CoordSphericalC1Ev(void) {
    ALOGD("_ZN5SfWmm22MAGtype_CoordSphericalC1Ev() called");
    return 0;
}

/* Demangled: UDR::get_mnl_result() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR14get_mnl_resultEv(void) {
    ALOGD("_ZN3UDR14get_mnl_resultEv() called");
    return 0;
}

/* Demangled: UDR::UDR(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDRC2ERK12ConfigParams(void) {
    ALOGD("_ZN3UDRC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: InertialAtt::est_cvb(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt7est_cvbER6Matrix(void) {
    ALOGD("_ZN11InertialAtt7est_cvbER6Matrix() called");
    return 0;
}

/* Demangled: SfLpf::dec_filt_gyro(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf13dec_filt_gyroEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf13dec_filt_gyroEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SystemStateControl::assign_fine_cvb(double, UdrEkf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl15assign_fine_cvbEdRK6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl15assign_fine_cvbEdRK6UdrEkf() called");
    return 0;
}

/* Demangled: PdrMotionDetect::get_sensor_motion() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect17get_sensor_motionEv(void) {
    ALOGD("_ZN15PdrMotionDetect17get_sensor_motionEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_var(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect14get_sensor_varENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect14get_sensor_varENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: SfWmm::MAG_CalculateSecularVariationElements(SfWmm::MAGtype_MagneticResults const&, SfWmm::MAGtype_GeoMagneticElements*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm37MAG_CalculateSecularVariationElementsERKNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm37MAG_CalculateSecularVariationElementsERKNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_var_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17upd_var_gyro_biasEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF17upd_var_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::real_symmetric_for_q(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess20real_symmetric_for_qEPdS1_(void) {
    ALOGD("_ZN12VehBodOrient7VboLess20real_symmetric_for_qEPdS1_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::free_less() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess9free_lessEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess9free_lessEv() called");
    return 0;
}

/* Demangled: comp_max(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z8comp_maxPKdi(void) {
    ALOGD("_Z8comp_maxPKdi() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::cross_product(std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel13cross_productERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_(void) {
    ALOGD("_ZN9Pedometer7SsModel13cross_productERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_() called");
    return 0;
}

/* Demangled: UdrLpf::set_bmi160_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::is_first_full() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp13is_first_fullEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp13is_first_fullEv() called");
    return 0;
}

/* Exported Object: vtable for PdrMotionDetect */
extern "C" __attribute__((visibility("default"))) void* _ZTV15PdrMotionDetect = NULL;

/* Demangled: UdrEkf::height_measurement_update(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25height_measurement_updateEd(void) {
    ALOGD("_ZN6UdrEkf25height_measurement_updateEd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::~SimpleGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBiasD1Ev(void) {
    ALOGD("_ZN14SimpleGyroBiasD1Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_mu_level(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect12get_mu_levelEPj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect12get_mu_levelEPj() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_poly_gb_ready() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias16is_poly_gb_readyEv(void) {
    ALOGD("_ZNK14SimpleGyroBias16is_poly_gb_readyEv() called");
    return 0;
}

/* Demangled: dr_radio_location_update */
extern "C" __attribute__((visibility("default"))) int dr_radio_location_update(void) {
    ALOGD("dr_radio_location_update() called");
    return 0;
}

/* Demangled: mpe_get_gravity */
extern "C" __attribute__((visibility("default"))) int mpe_get_gravity(void) {
    ALOGD("mpe_get_gravity() called");
    return 0;
}

/* Demangled: PdrIsm::get_rf_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm12get_rf_parasEv(void) {
    ALOGD("_ZN6PdrIsm12get_rf_parasEv() called");
    return 0;
}

/* Demangled: PdrMheading::upd_igp_out(PdrSatt::out_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading11upd_igp_outERKN7PdrSatt10out_structE(void) {
    ALOGD("_ZN11PdrMheading11upd_igp_outERKN7PdrSatt10out_structE() called");
    return 0;
}

/* Demangled: SfWmm::MAG_Summation(SfWmm::MAGtype_LegendreFunction*, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm13MAG_SummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void) {
    ALOGD("_ZN5SfWmm13MAG_SummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::backward_filt() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts13backward_filtEv(void) {
    ALOGD("_ZN9CarAccelB3Rts13backward_filtEv() called");
    return 0;
}

/* Demangled: UdrEkf::init_covariance_array() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21init_covariance_arrayEv(void) {
    ALOGD("_ZN6UdrEkf21init_covariance_arrayEv() called");
    return 0;
}

/* Demangled: UdrEkf::zihr_measurement_update(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf23zihr_measurement_updateEjj(void) {
    ALOGD("_ZN6UdrEkf23zihr_measurement_updateEjj() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_dir_struct::is_reliable_dir() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct15is_reliable_dirEv(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct15is_reliable_dirEv() called");
    return 0;
}

/* Demangled: VehBodOrient::stat_quat_struct::reset_stat_q() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient16stat_quat_struct12reset_stat_qEv(void) {
    ALOGD("_ZN12VehBodOrient16stat_quat_struct12reset_stat_qEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::construct_pseudo_a_nv_v(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess23construct_pseudo_a_nv_vEj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess23construct_pseudo_a_nv_vEj() called");
    return 0;
}

/* Demangled: Matrix::set_val(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7set_valEid(void) {
    ALOGD("_ZN6Matrix7set_valEid() called");
    return 0;
}

/* Demangled: UDR::is_state_irregular(sf_mems_msg_struct*, Watchdog::DynamicEnum::DynamicType) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR18is_state_irregularEP18sf_mems_msg_structN8Watchdog11DynamicEnum11DynamicTypeE(void) {
    ALOGD("_ZN3UDR18is_state_irregularEP18sf_mems_msg_structN8Watchdog11DynamicEnum11DynamicTypeE() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::get_speed_status(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel16get_speed_statusEdd(void) {
    ALOGD("_ZN9Pedometer7SsModel16get_speed_statusEdd() called");
    return 0;
}

/* Demangled: SfSatt::upd_w_corr() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt10upd_w_corrEv(void) {
    ALOGD("_ZN6SfSatt10upd_w_corrEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_min_resi_dop_do(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect19get_min_resi_dop_doEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN16UdrUpdTypeSelect19get_min_resi_dop_doEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: cross */
extern "C" __attribute__((visibility("default"))) int cross(void) {
    ALOGD("cross() called");
    return 0;
}

/* Demangled: SfLpf::run_two_stage_lpf(MonitorDataRate const&, CloneNearGnss&, InterpMems&, sf_mems_msg_struct*, sf_gnss_msg_struct*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17run_two_stage_lpfERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN5SfLpf17run_two_stage_lpfERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfSatt::ext_feas_struct::ext_feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15ext_feas_structC2Ev(void) {
    ALOGD("_ZN6SfSatt15ext_feas_structC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::comp_ref_forward_accel_by_abs_max(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp33comp_ref_forward_accel_by_abs_maxEPdi(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp33comp_ref_forward_accel_by_abs_maxEPdi() called");
    return 0;
}

/* Demangled: InterpMems::InterpMems() */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMemsC2Ev(void) {
    ALOGD("_ZN10InterpMemsC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::ctrl_para_struct::ctrl_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ctrl_para_structC1Ev(void) {
    ALOGD("_ZN6SfSatt16ctrl_para_structC1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_meas_inno_covariance_matrix(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF32comp_meas_inno_covariance_matrixER6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF32comp_meas_inno_covariance_matrixER6Matrix() called");
    return 0;
}

/* Demangled: PdrEkf::PdrEkf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkfC2ERK12ConfigParams(void) {
    ALOGD("_ZN6PdrEkfC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: Barometer::check_bs_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer14check_bs_resetEv(void) {
    ALOGD("_ZN9Barometer14check_bs_resetEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_var_w() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF9get_var_wEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF9get_var_wEv() called");
    return 0;
}

/* Demangled: PdrLpf::~PdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpfD2Ev(void) {
    ALOGD("_ZN6PdrLpfD2Ev() called");
    return 0;
}

/* Demangled: PdrMotionDetect::PdrMotionDetect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetectC2ERK12ConfigParams(void) {
    ALOGD("_ZN15PdrMotionDetectC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: is_all_not_zeros(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16is_all_not_zerosPKdi(void) {
    ALOGD("_Z16is_all_not_zerosPKdi() called");
    return 0;
}

/* Demangled: sf_set_log_path(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z15sf_set_log_pathPKc(void) {
    ALOGD("_Z15sf_set_log_pathPKc() called");
    return 0;
}

/* Demangled: SfSatt::renormalize_dcm_states(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt22renormalize_dcm_statesER6Matrix(void) {
    ALOGD("_ZN6SfSatt22renormalize_dcm_statesER6Matrix() called");
    return 0;
}

/* Demangled: max */
extern "C" __attribute__((visibility("default"))) int max(void) {
    ALOGD("max() called");
    return 0;
}

/* Exported Object: reporting_interval */
extern "C" __attribute__((visibility("default"))) void* reporting_interval = NULL;

/* Demangled: set_pedometer_report_interval */
extern "C" __attribute__((visibility("default"))) int set_pedometer_report_interval(void) {
    ALOGD("set_pedometer_report_interval() called");
    return 0;
}

/* Demangled: Matrix::skew_xyz(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix8skew_xyzERS_(void) {
    ALOGD("_ZN6Matrix8skew_xyzERS_() called");
    return 0;
}

/* Demangled: SimpleGyroBias::alloc_gbuff() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias11alloc_gbuffEv(void) {
    ALOGD("_ZN14SimpleGyroBias11alloc_gbuffEv() called");
    return 0;
}

/* Demangled: PdrEkf::is_mag_work() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf11is_mag_workEv(void) {
    ALOGD("_ZN6PdrEkf11is_mag_workEv() called");
    return 0;
}

/* Demangled: PdrSatt::~PdrSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSattD1Ev(void) {
    ALOGD("_ZN7PdrSattD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::check_lpf_coef(SfLpf::smoop_struct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14check_lpf_coefERNS_12smoop_structE(void) {
    ALOGD("_ZN5SfLpf14check_lpf_coefERNS_12smoop_structE() called");
    return 0;
}

/* Demangled: SfSatt::set_K() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt5set_KEv(void) {
    ALOGD("_ZN6SfSatt5set_KEv() called");
    return 0;
}

/* Exported Object: latest_report_count */
extern "C" __attribute__((visibility("default"))) void* latest_report_count = NULL;

/* Demangled: PdrUpdTypeSelect::get_se(PdrUpdTypeSelect::SeEnum::SeType) */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE(void) {
    ALOGD("_ZN16PdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE() called");
    return 0;
}

/* Demangled: SfSatt::ekf_stop_pred_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18ekf_stop_pred_timeEv(void) {
    ALOGD("_ZN6SfSatt18ekf_stop_pred_timeEv() called");
    return 0;
}

/* Demangled: SfSatt::test_gen_state_transition_matrix_for_dcm() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt40test_gen_state_transition_matrix_for_dcmEv(void) {
    ALOGD("_ZN6SfSatt40test_gen_state_transition_matrix_for_dcmEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_lsm6dsm_gyro_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27get_lsm6dsm_gyro_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf27get_lsm6dsm_gyro_para_200hzEv() called");
    return 0;
}

/* Exported Object: gps_kf_heading */
extern "C" __attribute__((visibility("default"))) void* gps_kf_heading = NULL;

/* Demangled: sf_set_archive_path(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z19sf_set_archive_pathPKc(void) {
    ALOGD("_Z19sf_set_archive_pathPKc() called");
    return 0;
}

/* Demangled: SfIsm::meas_struct::~meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11meas_structD1Ev(void) {
    ALOGD("_ZN5SfIsm11meas_structD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::alloc_state_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16alloc_state_paraEv(void) {
    ALOGD("_ZN6SfSatt16alloc_state_paraEv() called");
    return 0;
}

/* Demangled: UdrEkf::predict_velocity_estimate(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25predict_velocity_estimateEd(void) {
    ALOGD("_ZN6UdrEkf25predict_velocity_estimateEd() called");
    return 0;
}

/* Demangled: UdrLpf::~UdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpfD1Ev(void) {
    ALOGD("_ZN6UdrLpfD1Ev() called");
    return 0;
}

/* Demangled: length */
extern "C" __attribute__((visibility("default"))) int length(void) {
    ALOGD("length() called");
    return 0;
}

/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double&>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRdEEEvDpOT_() called");
    return 0;
}

/* Demangled: upd_rot_matrix(Matrix&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z14upd_rot_matrixR6MatrixRKS_(void) {
    ALOGD("_Z14upd_rot_matrixR6MatrixRKS_() called");
    return 0;
}

/* Exported Object: UdrEkf::R_INIT_MATRIX_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf17R_INIT_MATRIX_COVE = NULL;

/* Demangled: GnssAccelDecel::GnssAccelDecel() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecelC1Ev(void) {
    ALOGD("_ZN14GnssAccelDecelC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::free_gdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm310free_gdcm3Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm310free_gdcm3Ev() called");
    return 0;
}

/* Exported Object: matching_location */
extern "C" __attribute__((visibility("default"))) void* matching_location = NULL;

/* Demangled: Matrix::Matrix(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC1Ei(void) {
    ALOGD("_ZN6MatrixC1Ei() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_gsd_var(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF11set_gsd_varEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF11set_gsd_varEd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_P1_P2_P3(Matrix const&, Matrix const&, Matrix&, Matrix&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF13comp_P1_P2_P3ERK6MatrixS3_RS1_S4_S4_(void) {
    ALOGD("_ZNK9CarAccelB5SubKF13comp_P1_P2_P3ERK6MatrixS3_RS1_S4_S4_() called");
    return 0;
}

/* Demangled: SfSgb::esti_rough_gyro_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb20esti_rough_gyro_biasEv(void) {
    ALOGD("_ZN5SfSgb20esti_rough_gyro_biasEv() called");
    return 0;
}

/* Demangled: SfLpf::adv_filt_mag(MonitorDataRate const&, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12adv_filt_magERK15MonitorDataRatePK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf12adv_filt_magERK15MonitorDataRatePK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_imu() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF7upd_imuEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF7upd_imuEv() called");
    return 0;
}

/* Demangled: CarAccelB::comp_static_var(double const*, InertialStaticMove::ManeuverEnum::ManeuverType const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB15comp_static_varEPKdPKN18InertialStaticMove12ManeuverEnum12ManeuverTypeEi(void) {
    ALOGD("_ZNK9CarAccelB15comp_static_varEPKdPKN18InertialStaticMove12ManeuverEnum12ManeuverTypeEi() called");
    return 0;
}

/* Demangled: GnssAccelDecel::round_ava_ad() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel12round_ava_adEv(void) {
    ALOGD("_ZN14GnssAccelDecel12round_ava_adEv() called");
    return 0;
}

/* Demangled: dr_utm2lla */
extern "C" __attribute__((visibility("default"))) int dr_utm2lla(void) {
    ALOGD("dr_utm2lla() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_gad(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF7set_gadEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF7set_gadEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::VboGdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm3C1Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm3C1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::CarAccelB() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelBC2Ev(void) {
    ALOGD("_ZN9CarAccelBC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::set_wei(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess7set_weiERKNS_6VboGrpEjj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess7set_weiERKNS_6VboGrpEjj() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::esti_dynamic_gyro_bias(double, double const*, double const*, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias22esti_dynamic_gyro_biasEdPKdS2_dd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias22esti_dynamic_gyro_biasEdPKdS2_dd() called");
    return 0;
}

/* Demangled: _sf_read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> >) */
extern "C" __attribute__((visibility("default"))) int _Z24_sf_read_avoid_gnss_listNSt3__16vectorIdNS_9allocatorIdEEEE(void) {
    ALOGD("_Z24_sf_read_avoid_gnss_listNSt3__16vectorIdNS_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_accel_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf18get_adv_accel_tempEPd(void) {
    ALOGD("_ZNK5SfLpf18get_adv_accel_tempEPd() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorAtt::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorAtt4NameE = NULL;

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorPos::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorPos4NameE = NULL;

/* Demangled: SystemStateControl::get_control() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl11get_controlEv(void) {
    ALOGD("_ZN18SystemStateControl11get_controlEv() called");
    return 0;
}

/* Demangled: CarAccelB::get_cad_delay_info(double*, double*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18get_cad_delay_infoEPdS0_Pi(void) {
    ALOGD("_ZN9CarAccelB18get_cad_delay_infoEPdS0_Pi() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_dyn_gyro_bias_var(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias21get_dyn_gyro_bias_varEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias21get_dyn_gyro_bias_varEPd() called");
    return 0;
}

/* Exported Object: activity_recognition */
extern "C" __attribute__((visibility("default"))) void* activity_recognition = NULL;

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: SfGb::gbuff_struct::~gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb12gbuff_structD1Ev(void) {
    ALOGD("_ZN4SfGb12gbuff_structD1Ev() called");
    return 0;
}

/* Demangled: cos_similarity_vec3(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _Z19cos_similarity_vec3PKdS0_(void) {
    ALOGD("_Z19cos_similarity_vec3PKdS0_() called");
    return 0;
}

/* Demangled: SfStaticDetect::_min(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect4_minEPdi(void) {
    ALOGD("_ZN14SfStaticDetect4_minEPdi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_head_var() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp21get_buff_avg_head_varEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp21get_buff_avg_head_varEv() called");
    return 0;
}

/* Demangled: PdrLpf::get_adv_accel_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf18get_adv_accel_50hzEv(void) {
    ALOGD("_ZN6PdrLpf18get_adv_accel_50hzEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticAtt::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticAtt4NameE = NULL;

/* Demangled: SystemStateControl::check_cvb_dir_struct::track_ekf_cvb_dir(CarAccelB const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_struct17track_ekf_cvb_dirERK9CarAccelB(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_struct17track_ekf_cvb_dirERK9CarAccelB() called");
    return 0;
}

/* Demangled: Matrix::Matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC1Ev(void) {
    ALOGD("_ZN6MatrixC1Ev() called");
    return 0;
}

/* Demangled: PdrEkf::upd_pos_vel(sf_gnss_msg_struct const*, Pedometer::step_info_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf11upd_pos_velEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structE(void) {
    ALOGD("_ZN6PdrEkf11upd_pos_velEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structE() called");
    return 0;
}

/* Demangled: DataProcess::get_mems_loc(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess12get_mems_locEi(void) {
    ALOGD("_ZN11DataProcess12get_mems_locEi() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: UdrEkf::UpdLevEnum::StaticPos::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticPos4NameE = NULL;

/* Demangled: Pedometer::SsModel::update_model(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel12update_modelEd(void) {
    ALOGD("_ZN9Pedometer7SsModel12update_modelEd() called");
    return 0;
}

/* Demangled: SfSatt::check_type_setting() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18check_type_settingEv(void) {
    ALOGD("_ZN6SfSatt18check_type_settingEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GeodeticToSpherical(SfWmm::MAGtype_Ellipsoid const&, SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_CoordSpherical*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm23MAG_GeodeticToSphericalERKNS_17MAGtype_EllipsoidERKNS_21MAGtype_CoordGeodeticEPNS_22MAGtype_CoordSphericalE(void) {
    ALOGD("_ZN5SfWmm23MAG_GeodeticToSphericalERKNS_17MAGtype_EllipsoidERKNS_21MAGtype_CoordGeodeticEPNS_22MAGtype_CoordSphericalE() called");
    return 0;
}

/* Demangled: UdrEkf::stored_bias_struct::~stored_bias_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_structD1Ev(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_structD1Ev() called");
    return 0;
}

/* Exported Object: lla_r */
extern "C" __attribute__((visibility("default"))) void* lla_r = NULL;

/* Demangled: SfSatt::upd_ext_feas_a(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt14upd_ext_feas_aERK6Matrix(void) {
    ALOGD("_ZN6SfSatt14upd_ext_feas_aERK6Matrix() called");
    return 0;
}

/* Demangled: SfSatt::state_para_struct::~state_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17state_para_structD2Ev(void) {
    ALOGD("_ZN6SfSatt17state_para_structD2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::state_assign(sf_gnss_msg_struct*, bool, bool, bool, bool, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12state_assignEP18sf_gnss_msg_structbbbbPj(void) {
    ALOGD("_ZN6UdrEkf12state_assignEP18sf_gnss_msg_structbbbbPj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::comp_gcnt(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm39comp_gcntEiii(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm39comp_gcntEiii() called");
    return 0;
}

/* Demangled: PdrMotionDetect::update_static_status(sf_mems_msg_struct*, sf_gnss_msg_struct*, Matrix&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv(void) {
    ALOGD("_ZN15PdrMotionDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv() called");
    return 0;
}

/* Demangled: SfSatt::ini_ekf_var() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt11ini_ekf_varEv(void) {
    ALOGD("_ZN6SfSatt11ini_ekf_varEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_adned_head_var(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess23comp_avg_adned_head_varEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess23comp_avg_adned_head_varEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: set_pedometer_t_s */
extern "C" __attribute__((visibility("default"))) int set_pedometer_t_s(void) {
    ALOGD("set_pedometer_t_s() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_is_mag_ok() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect13get_is_mag_okEv(void) {
    ALOGD("_ZN14SfStaticDetect13get_is_mag_okEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticPos::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticPos10R_UNIT_COVE = NULL;

/* Demangled: UdrEkf::restore_velocity(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16restore_velocityEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf16restore_velocityEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_cvb_struct::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_cvb_struct5resetEv(void) {
    ALOGD("_ZN18SystemStateControl17coarse_cvb_struct5resetEv() called");
    return 0;
}

/* Demangled: SystemStateControl::set_fine_cvb_from_ekf_level(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl27set_fine_cvb_from_ekf_levelENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl27set_fine_cvb_from_ekf_levelENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::alloc_gdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm311alloc_gdcm3Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm311alloc_gdcm3Ev() called");
    return 0;
}

/* Demangled: mpe_get_pedometer */
extern "C" __attribute__((visibility("default"))) int mpe_get_pedometer(void) {
    ALOGD("mpe_get_pedometer() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: SfSatt::ekf_set_predict() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15ekf_set_predictEv(void) {
    ALOGD("_ZN6SfSatt15ekf_set_predictEv() called");
    return 0;
}

/* Demangled: Matrix::get_col_num() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix11get_col_numEv(void) {
    ALOGD("_ZNK6Matrix11get_col_numEv() called");
    return 0;
}

/* Demangled: Barometer::baro_smoo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer9baro_smooEv(void) {
    ALOGD("_ZN9Barometer9baro_smooEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_Rk(double, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF6set_RkEdRK6MatrixS3_S3_S3_RS1_(void) {
    ALOGD("_ZNK9CarAccelB5SubKF6set_RkEdRK6MatrixS3_S3_S3_RS1_() called");
    return 0;
}

/* Demangled: UdrEkf::heading_measurement_update(double, double*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf26heading_measurement_updateEdPdjj(void) {
    ALOGD("_ZN6UdrEkf26heading_measurement_updateEdPdjj() called");
    return 0;
}

/* Demangled: SystemStateControl::SystemStateControl() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControlC1Ev(void) {
    ALOGD("_ZN18SystemStateControlC1Ev() called");
    return 0;
}

/* Demangled: Integration::sf_read_data(sf_gnss_msg_struct*, sf_mems_msg_struct*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration12sf_read_dataEP18sf_gnss_msg_structP18sf_mems_msg_structi(void) {
    ALOGD("_ZN11Integration12sf_read_dataEP18sf_gnss_msg_structP18sf_mems_msg_structi() called");
    return 0;
}

/* Demangled: upd_rot_matrix(Matrix&, Matrix const&, double) */
extern "C" __attribute__((visibility("default"))) int _Z14upd_rot_matrixR6MatrixRKS_d(void) {
    ALOGD("_Z14upd_rot_matrixR6MatrixRKS_d() called");
    return 0;
}

/* Demangled: sf_timer_to_str(double*, int*, sf_time_struct) */
extern "C" __attribute__((visibility("default"))) int _Z15sf_timer_to_strPdPi14sf_time_struct(void) {
    ALOGD("_Z15sf_timer_to_strPdPi14sf_time_struct() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::is_fail_estimation() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF18is_fail_estimationEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF18is_fail_estimationEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorPos::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorPos10R_UNIT_COVE = NULL;

/* Demangled: SfSatt::reset_p_grav_proj() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17reset_p_grav_projEv(void) {
    ALOGD("_ZN6SfSatt17reset_p_grav_projEv() called");
    return 0;
}

/* Demangled: Barometer::prev_baro_err() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer13prev_baro_errEv(void) {
    ALOGD("_ZN9Barometer13prev_baro_errEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_icm40607_accel_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf28get_icm40607_accel_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf28get_icm40607_accel_para_50hzEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_rough_gb_var_ready() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias21is_rough_gb_var_readyEv(void) {
    ALOGD("_ZN14SimpleGyroBias21is_rough_gb_var_readyEv() called");
    return 0;
}

/* Demangled: dr_lla2utm_int */
extern "C" __attribute__((visibility("default"))) int dr_lla2utm_int(void) {
    ALOGD("dr_lla2utm_int() called");
    return 0;
}

/* Demangled: PdrIgp::run_att_filt(double, double const*, double const*, double const*, double const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp12run_att_filtEdPKdS1_S1_S1_RKN5SfIsm14results_structERKN5SfSgb14results_structE(void) {
    ALOGD("_ZN6PdrIgp12run_att_filtEdPKdS1_S1_S1_RKN5SfIsm14results_structERKN5SfSgb14results_structE() called");
    return 0;
}

/* Demangled: SfSatt::gen_sys_cov_matrix_gp_gb_ab() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt27gen_sys_cov_matrix_gp_gb_abEv(void) {
    ALOGD("_ZN6SfSatt27gen_sys_cov_matrix_gp_gb_abEv() called");
    return 0;
}

/* Demangled: CarAccelB::sub_kf_buff_struct::sub_kf_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18sub_kf_buff_structC2Ev(void) {
    ALOGD("_ZN9CarAccelB18sub_kf_buff_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::upd_states() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt10upd_statesEv(void) {
    ALOGD("_ZN6SfSatt10upd_statesEv() called");
    return 0;
}

/* Demangled: Integration::sf_buffer_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration15sf_buffer_resetEv(void) {
    ALOGD("_ZN11Integration15sf_buffer_resetEv() called");
    return 0;
}

/* Demangled: get_current_count */
extern "C" __attribute__((visibility("default"))) int get_current_count(void) {
    ALOGD("get_current_count() called");
    return 0;
}

/* Exported Object: dr_acc_bias_variance_1 */
extern "C" __attribute__((visibility("default"))) void* dr_acc_bias_variance_1 = NULL;

/* Demangled: mpe_get_dr_position */
extern "C" __attribute__((visibility("default"))) int mpe_get_dr_position(void) {
    ALOGD("mpe_get_dr_position() called");
    return 0;
}

/* Demangled: SfStaticDetect::distance(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect8distanceEPdi(void) {
    ALOGD("_ZN14SfStaticDetect8distanceEPdi() called");
    return 0;
}

/* Demangled: SfWmm::MAG_ValidateDMSstring(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAG_ValidateDMSstringEddd(void) {
    ALOGD("_ZN5SfWmm21MAG_ValidateDMSstringEddd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::~AlterGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBiasD2Ev(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBiasD2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_sf() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF6get_sfEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF6get_sfEv() called");
    return 0;
}

/* Demangled: UDR::algo(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR4algoEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR4algoEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: cross(double const*, double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z5crossPKdS0_Pd(void) {
    ALOGD("_Z5crossPKdS0_Pd() called");
    return 0;
}

/* Demangled: SfLpf::set_mag_hub_dr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14set_mag_hub_drEi(void) {
    ALOGD("_ZN5SfLpf14set_mag_hub_drEi() called");
    return 0;
}

/* Demangled: best_ax_num */
extern "C" __attribute__((visibility("default"))) int best_ax_num(void) {
    ALOGD("best_ax_num() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: CloneNearGnss::~CloneNearGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnssD2Ev(void) {
    ALOGD("_ZN13CloneNearGnssD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::upd_ekf_meas_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17upd_ekf_meas_timeEv(void) {
    ALOGD("_ZN6SfSatt17upd_ekf_meas_timeEv() called");
    return 0;
}

/* Demangled: SfSatt::upd_var_dot_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21upd_var_dot_gyro_biasEPKd(void) {
    ALOGD("_ZN6SfSatt21upd_var_dot_gyro_biasEPKd() called");
    return 0;
}

/* Exported Object: vtable for UdrLpf */
extern "C" __attribute__((visibility("default"))) void* _ZTV6UdrLpf = NULL;

/* Demangled: PdrMheading::quality_check_struct::quality_check_struct(int, double, double, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading20quality_check_structC2EiddPd(void) {
    ALOGD("_ZN11PdrMheading20quality_check_structC2EiddPd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_meas_inno() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF14comp_meas_innoEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF14comp_meas_innoEv() called");
    return 0;
}

/* Demangled: Ttff::Ttff() */
extern "C" __attribute__((visibility("default"))) int _ZN4TtffC2Ev(void) {
    ALOGD("_ZN4TtffC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::nw_shape_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_structC2Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_structC2Ev() called");
    return 0;
}

/* Demangled: PdrIgp::delay_buff_struct::~delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp17delay_buff_structD1Ev(void) {
    ALOGD("_ZN6PdrIgp17delay_buff_structD1Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_robustReadMagModels(SfWmm::MAGtype_MagneticModel* (*) [1]) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm23MAG_robustReadMagModelsEPA1_PNS_21MAGtype_MagneticModelE(void) {
    ALOGD("_ZN5SfWmm23MAG_robustReadMagModelsEPA1_PNS_21MAGtype_MagneticModelE() called");
    return 0;
}

/* Demangled: UdrEkf::prediction(sf_mems_msg_struct*, double, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf10predictionEP18sf_mems_msg_structdb(void) {
    ALOGD("_ZN6UdrEkf10predictionEP18sf_mems_msg_structdb() called");
    return 0;
}

/* Demangled: SfLpf::set_imu_id(sensor::SensorIDEnum::SensorIDType, sensor::SensorIDEnum::SensorIDType) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf10set_imu_idEN6sensor12SensorIDEnum12SensorIDTypeES2_(void) {
    ALOGD("_ZN5SfLpf10set_imu_idEN6sensor12SensorIDEnum12SensorIDTypeES2_() called");
    return 0;
}

/* Demangled: SfLpf::smoop_result_struct::smoop_result_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf19smoop_result_structC2Ev(void) {
    ALOGD("_ZN5SfLpf19smoop_result_structC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::VboFakeStart() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStartC1Ev(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStartC1Ev() called");
    return 0;
}

/* Exported Object: interval_buf */
extern "C" __attribute__((visibility("default"))) void* interval_buf = NULL;

/* Demangled: PdrEkf::get_R() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf5get_REv(void) {
    ALOGD("_ZN6PdrEkf5get_REv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: UdrEkf::predict_covariance_estimate(double, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf27predict_covariance_estimateEdb(void) {
    ALOGD("_ZN6UdrEkf27predict_covariance_estimateEdb() called");
    return 0;
}

/* Demangled: VehBodOrient::upd_out(double, VehBodOrient::stat_quat_struct const&, VehBodOrient::stat_quat_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7upd_outEdRKNS_16stat_quat_structES2_(void) {
    ALOGD("_ZN12VehBodOrient7upd_outEdRKNS_16stat_quat_structES2_() called");
    return 0;
}

/* Demangled: wgsxyz2lla_array(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z16wgsxyz2lla_arrayPdS_(void) {
    ALOGD("_Z16wgsxyz2lla_arrayPdS_() called");
    return 0;
}

/* Demangled: SfSatt::ini_ext_matrices() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ini_ext_matricesEv(void) {
    ALOGD("_ZN6SfSatt16ini_ext_matricesEv() called");
    return 0;
}

/* Demangled: SystemStateControl::set_fine_cvb_from_gnss_level(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl28set_fine_cvb_from_gnss_levelENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl28set_fine_cvb_from_gnss_levelENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: two_ax_consistency */
extern "C" __attribute__((visibility("default"))) int two_ax_consistency(void) {
    ALOGD("two_ax_consistency() called");
    return 0;
}

/* Demangled: PDR::PDR(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3PDRC2ERK12ConfigParams(void) {
    ALOGD("_ZN3PDRC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: PdrMheading::mag_model_struct::mag_model_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16mag_model_structC2Ev(void) {
    ALOGD("_ZN11PdrMheading16mag_model_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::set_Bd() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt6set_BdEv(void) {
    ALOGD("_ZN6SfSatt6set_BdEv() called");
    return 0;
}

/* Demangled: heading_constrain(double) */
extern "C" __attribute__((visibility("default"))) int _Z17heading_constraind(void) {
    ALOGD("_Z17heading_constraind() called");
    return 0;
}

/* Demangled: PdrSatt::est_sensor_attitude() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt19est_sensor_attitudeEv(void) {
    ALOGD("_ZN7PdrSatt19est_sensor_attitudeEv() called");
    return 0;
}

/* Demangled: PdrSatt::adv_start_ekf_condi_struct::adv_start_ekf_condi_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt26adv_start_ekf_condi_structC2Ev(void) {
    ALOGD("_ZN7PdrSatt26adv_start_ekf_condi_structC2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_Geomag(SfWmm::MAGtype_Ellipsoid, SfWmm::MAGtype_CoordSpherical, SfWmm::MAGtype_CoordGeodetic, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_GeoMagneticElements*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm10MAG_GeomagENS_17MAGtype_EllipsoidENS_22MAGtype_CoordSphericalENS_21MAGtype_CoordGeodeticEPNS_21MAGtype_MagneticModelEPNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm10MAG_GeomagENS_17MAGtype_EllipsoidENS_22MAGtype_CoordSphericalENS_21MAGtype_CoordGeodeticEPNS_21MAGtype_MagneticModelEPNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: UdrStaticDetect::get_sensor_static_rough() */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetect23get_sensor_static_roughEv(void) {
    ALOGD("_ZN15UdrStaticDetect23get_sensor_static_roughEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::quat2rot(double const*, double (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess8quat2rotEPKdPA3_d(void) {
    ALOGD("_ZN12VehBodOrient7VboLess8quat2rotEPKdPA3_d() called");
    return 0;
}

/* Demangled: SfWmm::~SfWmm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmmD1Ev(void) {
    ALOGD("_ZN5SfWmmD1Ev() called");
    return 0;
}

/* Demangled: DataProcess::DataProcess(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcessC2ERK12ConfigParams(void) {
    ALOGD("_ZN11DataProcessC2ERK12ConfigParams() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSPos::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSPos10R_UNIT_COVE = NULL;

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::pseudo_reset_buff() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_struct17pseudo_reset_buffEv(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_struct17pseudo_reset_buffEv() called");
    return 0;
}

/* Demangled: SfLpf::set_decimation() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf14set_decimationEv(void) {
    ALOGD("_ZN5SfLpf14set_decimationEv() called");
    return 0;
}

/* Demangled: SfSatt::set_meas_matrix_ng() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18set_meas_matrix_ngEv(void) {
    ALOGD("_ZN6SfSatt18set_meas_matrix_ngEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: Barometer::ini_b_temp_limit() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer16ini_b_temp_limitEv(void) {
    ALOGD("_ZN9Barometer16ini_b_temp_limitEv() called");
    return 0;
}

/* Demangled: PDR::~PDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDRD1Ev(void) {
    ALOGD("_ZN3PDRD1Ev() called");
    return 0;
}

/* Demangled: PdrLpf::set_lsm6dsm_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::interp_gad(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF10interp_gadER6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF10interp_gadER6Matrix() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::construct_rls_meas_matrix(double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias25construct_rls_meas_matrixEd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias25construct_rls_meas_matrixEd() called");
    return 0;
}

/* Demangled: PdrSatt::upd_tuning_paras(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt16upd_tuning_parasEPKdS1_(void) {
    ALOGD("_ZN7PdrSatt16upd_tuning_parasEPKdS1_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::VboGrp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrpC2Ev(void) {
    ALOGD("_ZN12VehBodOrient6VboGrpC2Ev() called");
    return 0;
}

/* Demangled: PDR::is_service_active() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR17is_service_activeEv(void) {
    ALOGD("_ZN3PDR17is_service_activeEv() called");
    return 0;
}

/* Demangled: SfSgb::~SfSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgbD2Ev(void) {
    ALOGD("_ZN5SfSgbD2Ev() called");
    return 0;
}

/* Demangled: sign(double) */
extern "C" __attribute__((visibility("default"))) int _Z4signd(void) {
    ALOGD("_Z4signd() called");
    return 0;
}

/* Demangled: UDR::publish_gnss_pvt_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR23publish_gnss_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR23publish_gnss_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: InertialAtt::update_mean_var(double, int, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt15update_mean_varEdiPdS0_(void) {
    ALOGD("_ZN11InertialAtt15update_mean_varEdiPdS0_() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::get_step_speed(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel14get_step_speedEd(void) {
    ALOGD("_ZN9Pedometer7SsModel14get_step_speedEd() called");
    return 0;
}

/* Demangled: SfIsm::~SfIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsmD0Ev(void) {
    ALOGD("_ZN5SfIsmD0Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_GeoMagneticElements::MAGtype_GeoMagneticElements() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm27MAGtype_GeoMagneticElementsC2Ev(void) {
    ALOGD("_ZN5SfWmm27MAGtype_GeoMagneticElementsC2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::delay_buff_struct::delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17delay_buff_structC2Ev(void) {
    ALOGD("_ZN9CarAccelB17delay_buff_structC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::dump_sf_pattern_from_history(VehBodOrient::VboGrp::hist_struct const*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp28dump_sf_pattern_from_historyEPKNS0_11hist_structEPdS4_S4_(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp28dump_sf_pattern_from_historyEPKNS0_11hist_structEPdS4_S4_() called");
    return 0;
}

/* Exported Object: acc_static_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_static_pitch = NULL;

/* Demangled: PdrLpf::get_lsm6dsm_accel_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf27get_lsm6dsm_accel_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf27get_lsm6dsm_accel_para_50hzEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double const&>(double const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRKdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRKdEEEvDpOT_() called");
    return 0;
}

/* Demangled: init_data_resampling */
extern "C" __attribute__((visibility("default"))) int init_data_resampling(void) {
    ALOGD("init_data_resampling() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: get_pedometer_status */
extern "C" __attribute__((visibility("default"))) int get_pedometer_status(void) {
    ALOGD("get_pedometer_status() called");
    return 0;
}

/* Demangled: SfLpf::gnss_lla_lpf(SfLpf::smoop_result_struct&, double const*, SfLpf::smoop_struct&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12gnss_lla_lpfERNS_19smoop_result_structEPKdRNS_12smoop_structE(void) {
    ALOGD("_ZN5SfLpf12gnss_lla_lpfERNS_19smoop_result_structEPKdRNS_12smoop_structE() called");
    return 0;
}

/* Demangled: UdrEkf::predict_control_input(sf_mems_msg_struct*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21predict_control_inputEP18sf_mems_msg_structb(void) {
    ALOGD("_ZN6UdrEkf21predict_control_inputEP18sf_mems_msg_structb() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::reset_vbo() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart9reset_vboEv(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart9reset_vboEv() called");
    return 0;
}

/* Demangled: get_step_count_without_buffer */
extern "C" __attribute__((visibility("default"))) int get_step_count_without_buffer(void) {
    ALOGD("get_step_count_without_buffer() called");
    return 0;
}

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::~mag_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_structD2Ev(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_structD2Ev() called");
    return 0;
}

/* Demangled: Pedometer::process_velocity_model(sf_gnss_msg_struct const*, PdrUpdTypeSelect&, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer22process_velocity_modelEPK18sf_gnss_msg_structR16PdrUpdTypeSelectib(void) {
    ALOGD("_ZN9Pedometer22process_velocity_modelEPK18sf_gnss_msg_structR16PdrUpdTypeSelectib() called");
    return 0;
}

/* Demangled: SfSatt::upd_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt13upd_gyro_biasEPKd(void) {
    ALOGD("_ZN6SfSatt13upd_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: pedometer_forcing_time_out */
extern "C" __attribute__((visibility("default"))) int pedometer_forcing_time_out(void) {
    ALOGD("pedometer_forcing_time_out() called");
    return 0;
}

/* Exported Object: accel_avg_buf */
extern "C" __attribute__((visibility("default"))) void* accel_avg_buf = NULL;

/* Exported Object: dead_reckoning_mode */
extern "C" __attribute__((visibility("default"))) void* dead_reckoning_mode = NULL;

/* Demangled: safe_acos(double) */
extern "C" __attribute__((visibility("default"))) int _Z9safe_acosd(void) {
    ALOGD("_Z9safe_acosd() called");
    return 0;
}

/* Demangled: SfSatt::print_setting_messages() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt22print_setting_messagesEv(void) {
    ALOGD("_ZN6SfSatt22print_setting_messagesEv() called");
    return 0;
}

/* Demangled: PdrMheading::upd_dyaw(double const*, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading8upd_dyawEPKdS1_S1_(void) {
    ALOGD("_ZN11PdrMheading8upd_dyawEPKdS1_S1_() called");
    return 0;
}

/* Demangled: SfSatt::~SfSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSattD2Ev(void) {
    ALOGD("_ZN6SfSattD2Ev() called");
    return 0;
}

/* Demangled: SfIsm::feas_struct::feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11feas_structC2Ev(void) {
    ALOGD("_ZN5SfIsm11feas_structC2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::get_K(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf5get_KEi(void) {
    ALOGD("_ZN6UdrEkf5get_KEi() called");
    return 0;
}

/* Demangled: MonitorDataRate::ini_cfg() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate7ini_cfgEv(void) {
    ALOGD("_ZN15MonitorDataRate7ini_cfgEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticAtt::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_UNIT_COVE = NULL;

/* Demangled: GnssAccelDecel::reset_gad_buff() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel14reset_gad_buffEv(void) {
    ALOGD("_ZN14GnssAccelDecel14reset_gad_buffEv() called");
    return 0;
}

/* Demangled: PdrEkf::replace_pdr2mnl_msg(sf2mnl_msg_struct*, double, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int, int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectiid(void) {
    ALOGD("_ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectiid() called");
    return 0;
}

/* Demangled: PDR::is_solution_stable() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR18is_solution_stableEv(void) {
    ALOGD("_ZN3PDR18is_solution_stableEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorAtt::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorAtt10R_UNIT_COVE = NULL;

/* Demangled: PdrSgb::~PdrSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgbD1Ev(void) {
    ALOGD("_ZN6PdrSgbD1Ev() called");
    return 0;
}

/* Demangled: PdrMheading::driver_calib_struct::driver_calib_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading19driver_calib_structC1Ev(void) {
    ALOGD("_ZN11PdrMheading19driver_calib_structC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::count_intersect_direction_number(VehBodOrient::VboFbEnum::FbType const*, VehBodOrient::VboFbEnum::FbType const*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp32count_intersect_direction_numberEPKNS_9VboFbEnum6FbTypeES4_PiS5_(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp32count_intersect_direction_numberEPKNS_9VboFbEnum6FbTypeES4_PiS5_() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_avg(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect14get_sensor_avgENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect14get_sensor_avgENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: get_pedometer_step_detector */
extern "C" __attribute__((visibility("default"))) int get_pedometer_step_detector(void) {
    ALOGD("get_pedometer_step_detector() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::SubKF() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKFC2Ev(void) {
    ALOGD("_ZN9CarAccelB5SubKFC2Ev() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSVel::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSVel5R_COVE = NULL;

/* Demangled: UdrUpdTypeSelect::get_mu_level(UdrStaticDetect*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect12get_mu_levelEP15UdrStaticDetectPj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect12get_mu_levelEP15UdrStaticDetectPj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::VboLess() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLessC2Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLessC2Ev() called");
    return 0;
}

/* Exported Object: vtable for SfGb */
extern "C" __attribute__((visibility("default"))) void* _ZTV4SfGb = NULL;

/* Demangled: InterpMems::interp(double, double, double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMems6interpEddPdd(void) {
    ALOGD("_ZN10InterpMems6interpEddPdd() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_gyro(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf12get_dec_gyroEPd(void) {
    ALOGD("_ZNK5SfLpf12get_dec_gyroEPd() called");
    return 0;
}

/* Demangled: operator+(double, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZpldRK6Matrix(void) {
    ALOGD("_ZpldRK6Matrix() called");
    return 0;
}

/* Demangled: Pedometer::update_step_info_from_pedometer(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer31update_step_info_from_pedometerEd(void) {
    ALOGD("_ZN9Pedometer31update_step_info_from_pedometerEd() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: SfWmm::MAG_SecVarSummation(SfWmm::MAGtype_LegendreFunction*, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm19MAG_SecVarSummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void) {
    ALOGD("_ZN5SfWmm19MAG_SecVarSummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE() called");
    return 0;
}

/* Demangled: UdrEkf::gb_measurement_update(SimpleGyroBias const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21gb_measurement_updateERK14SimpleGyroBias(void) {
    ALOGD("_ZN6UdrEkf21gb_measurement_updateERK14SimpleGyroBias() called");
    return 0;
}

/* Demangled: get_pedometer_best_walk_axis */
extern "C" __attribute__((visibility("default"))) int get_pedometer_best_walk_axis(void) {
    ALOGD("get_pedometer_best_walk_axis() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_gamma(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF9set_gammaEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF9set_gammaEPKd() called");
    return 0;
}

/* Demangled: UdrEkf::remove_P_correlation(unsigned int*, bool, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf20remove_P_correlationEPjbd(void) {
    ALOGD("_ZN6UdrEkf20remove_P_correlationEPjbd() called");
    return 0;
}

/* Demangled: InertialStaticMove::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11meas_structC2Ev(void) {
    ALOGD("_ZN18InertialStaticMove11meas_structC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::self_group() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp10self_groupEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp10self_groupEv() called");
    return 0;
}

/* Demangled: PdrEkf::gen_heading_meas_noise_cov_matrix(sf_gnss_msg_struct const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf33gen_heading_meas_noise_cov_matrixEPK18sf_gnss_msg_structi(void) {
    ALOGD("_ZN6PdrEkf33gen_heading_meas_noise_cov_matrixEPK18sf_gnss_msg_structi() called");
    return 0;
}

/* Demangled: SfGb::~SfGb() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGbD0Ev(void) {
    ALOGD("_ZN4SfGbD0Ev() called");
    return 0;
}

/* Demangled: UdrEkf::restore_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17restore_gyro_biasEPKd(void) {
    ALOGD("_ZN6UdrEkf17restore_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: VehBodOrient::~VehBodOrient() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrientD2Ev(void) {
    ALOGD("_ZN12VehBodOrientD2Ev() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::comp_bound_variance(double const*, int, int, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct19comp_bound_varianceEPKdiiii(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct19comp_bound_varianceEPKdiiii() called");
    return 0;
}

/* Demangled: SimpleGyroBias::comp_static_gyro_bias(UdrLpf const&, sf_mems_msg_struct*, InertialStaticMove::ManeuverEnum::ManeuverType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias21comp_static_gyro_biasERK6UdrLpfP18sf_mems_msg_structN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void) {
    ALOGD("_ZN14SimpleGyroBias21comp_static_gyro_biasERK6UdrLpfP18sf_mems_msg_structN18InertialStaticMove12ManeuverEnum12ManeuverTypeE() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_rough_gb_ready() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias17is_rough_gb_readyEv(void) {
    ALOGD("_ZN14SimpleGyroBias17is_rough_gb_readyEv() called");
    return 0;
}

/* Demangled: SfSgb::robust_movavg() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb13robust_movavgEv(void) {
    ALOGD("_ZN5SfSgb13robust_movavgEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_dist_v(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect17get_sensor_dist_vENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect17get_sensor_dist_vENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: SfWmm::MAG_PcupLow(double*, double*, double, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm11MAG_PcupLowEPdS0_di(void) {
    ALOGD("_ZN5SfWmm11MAG_PcupLowEPdS0_di() called");
    return 0;
}

/* Demangled: Barometer::quality_check(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer13quality_checkEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN9Barometer13quality_checkEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_dgsd(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF8set_dgsdEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF8set_dgsdEd() called");
    return 0;
}

/* Demangled: SfSgb::does_not_have_outliers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfSgb22does_not_have_outliersEv(void) {
    ALOGD("_ZNK5SfSgb22does_not_have_outliersEv() called");
    return 0;
}

/* Demangled: UdrEkf::get_vel_norm_pred() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf17get_vel_norm_predEv(void) {
    ALOGD("_ZNK6UdrEkf17get_vel_norm_predEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::store_sf_fb_pattern(double, double, double, double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp19store_sf_fb_patternEdddPKdd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp19store_sf_fb_patternEdddPKdd() called");
    return 0;
}

/* Exported Object: matching_search */
extern "C" __attribute__((visibility("default"))) void* matching_search = NULL;

/* Demangled: Matrix::set_m3(int, int, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix6set_m3EiiRKS_(void) {
    ALOGD("_ZN6Matrix6set_m3EiiRKS_() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::build_bias_table() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias16build_bias_tableEv(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias16build_bias_tableEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::get_bias_from_table(double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias19get_bias_from_tableEPdd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias19get_bias_from_tableEPdd() called");
    return 0;
}

/* Demangled: Matrix::operator*(Matrix const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixmlERKS_(void) {
    ALOGD("_ZNK6MatrixmlERKS_() called");
    return 0;
}

/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetectD1Ev(void) {
    ALOGD("_ZN15PdrMotionDetectD1Ev() called");
    return 0;
}

/* Exported Object: vtable for SfIsm */
extern "C" __attribute__((visibility("default"))) void* _ZTV5SfIsm = NULL;

/* Demangled: SfSatt::set_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt9set_stateEv(void) {
    ALOGD("_ZN6SfSatt9set_stateEv() called");
    return 0;
}

/* Demangled: UDR::set_pvt_from_gnss(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR17set_pvt_from_gnssEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN3UDR17set_pvt_from_gnssEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: PdrGb::~PdrGb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGbD1Ev(void) {
    ALOGD("_ZN5PdrGbD1Ev() called");
    return 0;
}

/* Demangled: mpe_get_game_rotation_vector */
extern "C" __attribute__((visibility("default"))) int mpe_get_game_rotation_vector(void) {
    ALOGD("mpe_get_game_rotation_vector() called");
    return 0;
}

/* Demangled: DataProcess::rt_preprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess13rt_preprocessEv(void) {
    ALOGD("_ZN11DataProcess13rt_preprocessEv() called");
    return 0;
}

/* Demangled: UDR::~UDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDRD0Ev(void) {
    ALOGD("_ZN3UDRD0Ev() called");
    return 0;
}

/* Demangled: UdrLpf::get_adv_gmode_1hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf17get_adv_gmode_1hzEv(void) {
    ALOGD("_ZN6UdrLpf17get_adv_gmode_1hzEv() called");
    return 0;
}

/* Demangled: Watchdog::Watchdog(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8WatchdogC2ERK12ConfigParams(void) {
    ALOGD("_ZN8WatchdogC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: mpe_set_fusion_mode */
extern "C" __attribute__((visibility("default"))) int mpe_set_fusion_mode(void) {
    ALOGD("mpe_set_fusion_mode() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: PdrIsm::cfy(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm3cfyEPKd(void) {
    ALOGD("_ZN6PdrIsm3cfyEPKd() called");
    return 0;
}

/* Demangled: PdrLpf::set_icm40607_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: Matrix::operator/(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixdvEd(void) {
    ALOGD("_ZN6MatrixdvEd() called");
    return 0;
}

/* Demangled: pedometer_update_acc */
extern "C" __attribute__((visibility("default"))) int pedometer_update_acc(void) {
    ALOGD("pedometer_update_acc() called");
    return 0;
}

/* Demangled: MonitorDataRate::check_hub_dr_changes(unsigned int, bool&, int&, double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK15MonitorDataRate20check_hub_dr_changesEjRbRiRd(void) {
    ALOGD("_ZNK15MonitorDataRate20check_hub_dr_changesEjRbRiRd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::upd_gb_table(double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias12upd_gb_tableEPKdd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias12upd_gb_tableEPKdd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::get_poly_gyro_bias(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias13AlterGyroBias18get_poly_gyro_biasEi(void) {
    ALOGD("_ZNK14SimpleGyroBias13AlterGyroBias18get_poly_gyro_biasEi() called");
    return 0;
}

/* Exported Object: acc_static_gps_bias */
extern "C" __attribute__((visibility("default"))) void* acc_static_gps_bias = NULL;

/* Demangled: operator*(double, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZmldRK6Matrix(void) {
    ALOGD("_ZmldRK6Matrix() called");
    return 0;
}

/* Demangled: SfSgb::check_struct::check_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb12check_structC2Ev(void) {
    ALOGD("_ZN5SfSgb12check_structC2Ev() called");
    return 0;
}

/* Demangled: InterpMems::interp_accel(sf_mems_msg_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMems12interp_accelEP18sf_mems_msg_structd(void) {
    ALOGD("_ZN10InterpMems12interp_accelEP18sf_mems_msg_structd() called");
    return 0;
}

/* Demangled: VehBodOrient::get_grp_bit_true_data(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient21get_grp_bit_true_dataEPdi(void) {
    ALOGD("_ZN12VehBodOrient21get_grp_bit_true_dataEPdi() called");
    return 0;
}

/* Exported Object: dr_lla2utm_init_done */
extern "C" __attribute__((visibility("default"))) void* dr_lla2utm_init_done = NULL;

/* Demangled: PdrSatt::gen_meas_cov_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt19gen_meas_cov_matrixEv(void) {
    ALOGD("_ZN7PdrSatt19gen_meas_cov_matrixEv() called");
    return 0;
}

/* Demangled: PdrUpdTypeSelect::PdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelectC2Ev(void) {
    ALOGD("_ZN16PdrUpdTypeSelectC2Ev() called");
    return 0;
}

/* Demangled: DataProcess::mems_input(sf_mems_msg_struct*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess10mems_inputEP18sf_mems_msg_structi(void) {
    ALOGD("_ZN11DataProcess10mems_inputEP18sf_mems_msg_structi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: InertialStaticMove::~InertialStaticMove() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMoveD1Ev(void) {
    ALOGD("_ZN18InertialStaticMoveD1Ev() called");
    return 0;
}

/* Demangled: GnssAccelDecel::down_sample_gad_gnss(sf_gnss_msg_struct*, UdrLpf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel20down_sample_gad_gnssEP18sf_gnss_msg_structRK6UdrLpf(void) {
    ALOGD("_ZN14GnssAccelDecel20down_sample_gad_gnssEP18sf_gnss_msg_structRK6UdrLpf() called");
    return 0;
}

/* Demangled: SystemStateControl::reset_ekf_cvb_after_compare_with_hist(SystemStateControl::FineCvbEnum::FineCvbType, double) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl37reset_ekf_cvb_after_compare_with_histENS_11FineCvbEnum11FineCvbTypeEd(void) {
    ALOGD("_ZN18SystemStateControl37reset_ekf_cvb_after_compare_with_histENS_11FineCvbEnum11FineCvbTypeEd() called");
    return 0;
}

/* Demangled: maplla2utm */
extern "C" __attribute__((visibility("default"))) int maplla2utm(void) {
    ALOGD("maplla2utm() called");
    return 0;
}

/* Demangled: PdrLpf::set_lsm6dsm_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: SfLpf::replace_dec_sensor_data(MonitorDataRate const&, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf23replace_dec_sensor_dataERK15MonitorDataRateP18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf23replace_dec_sensor_dataERK15MonitorDataRateP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::merge_states(Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF12merge_statesERK6MatrixS3_(void) {
    ALOGD("_ZN9CarAccelB5SubKF12merge_statesERK6MatrixS3_() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorVel::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorVel4NameE = NULL;

/* Demangled: UdrEkf::predict_F_matrix(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16predict_F_matrixEb(void) {
    ALOGD("_ZN6UdrEkf16predict_F_matrixEb() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSAtt::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt4NameE = NULL;

/* Demangled: UdrEkf::upd_less_buff(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf13upd_less_buffEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf13upd_less_buffEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_sm_window_t() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove15get_sm_window_tEv(void) {
    ALOGD("_ZN18InertialStaticMove15get_sm_window_tEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_min_resi_dop_pr(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect19get_min_resi_dop_prEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN16UdrUpdTypeSelect19get_min_resi_dop_prEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Exported Object: vehicle_GYR */
extern "C" __attribute__((visibility("default"))) void* vehicle_GYR = NULL;

/* Exported Object: UdrEkf::UpdLevEnum::GNSSPos::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSPos4NameE = NULL;

/* Exported Object: UdrEkf::UpdLevEnum::StaticPos::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticPos5R_COVE = NULL;

/* Demangled: mpe_get_dr_acc_bias */
extern "C" __attribute__((visibility("default"))) int mpe_get_dr_acc_bias(void) {
    ALOGD("mpe_get_dr_acc_bias() called");
    return 0;
}

/* Demangled: SfLpf::adv_filt_imu(MonitorDataRate const&, sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12adv_filt_imuERK15MonitorDataRatePK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf12adv_filt_imuERK15MonitorDataRatePK18sf_mems_msg_struct() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSPos::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSPos5R_COVE = NULL;

/* Demangled: Watchdog::average(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog7averageEPd(void) {
    ALOGD("_ZN8Watchdog7averageEPd() called");
    return 0;
}

/* Exported Object: interval_buf_copy */
extern "C" __attribute__((visibility("default"))) void* interval_buf_copy = NULL;

/* Demangled: PdrLpf::get_lsm6dsm_gyro_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf27get_lsm6dsm_gyro_para_200hzEv(void) {
    ALOGD("_ZN6PdrLpf27get_lsm6dsm_gyro_para_200hzEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::bound_inc_cnt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel13bound_inc_cntEii(void) {
    ALOGD("_ZN14GnssAccelDecel13bound_inc_cntEii() called");
    return 0;
}

/* Demangled: sf_set_param */
extern "C" __attribute__((visibility("default"))) int sf_set_param(void) {
    ALOGD("sf_set_param() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_imu_available() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf21get_dec_imu_availableEv(void) {
    ALOGD("_ZNK5SfLpf21get_dec_imu_availableEv() called");
    return 0;
}

/* Demangled: SfSatt::is_ready() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt8is_readyEv(void) {
    ALOGD("_ZN6SfSatt8is_readyEv() called");
    return 0;
}

/* Demangled: SfSgb::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb11meas_structC2Ev(void) {
    ALOGD("_ZN5SfSgb11meas_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::reset_p_gyro_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17reset_p_gyro_biasEv(void) {
    ALOGD("_ZN6SfSatt17reset_p_gyro_biasEv() called");
    return 0;
}

/* Demangled: SfSatt::set_P() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt5set_PEv(void) {
    ALOGD("_ZN6SfSatt5set_PEv() called");
    return 0;
}

/* Demangled: SfSatt::is_test_reset_x_of_ab() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt21is_test_reset_x_of_abEv(void) {
    ALOGD("_ZNK6SfSatt21is_test_reset_x_of_abEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::Rts(CarAccelB::SubKF&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3RtsC2ERNS_5SubKFE(void) {
    ALOGD("_ZN9CarAccelB3RtsC2ERNS_5SubKFE() called");
    return 0;
}

/* Demangled: PdrMheading::call_wmm(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading8call_wmmEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN11PdrMheading8call_wmmEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: UdrEkf::imu_sf_as_gamma_struct::imu_sf_as_gamma_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22imu_sf_as_gamma_structC2Ev(void) {
    ALOGD("_ZN6UdrEkf22imu_sf_as_gamma_structC2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::get_buff_stored_period() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient22get_buff_stored_periodEv(void) {
    ALOGD("_ZN12VehBodOrient22get_buff_stored_periodEv() called");
    return 0;
}

/* Exported Object: am_var */
extern "C" __attribute__((visibility("default"))) void* am_var = NULL;

/* Demangled: Array3x3_Invert_double */
extern "C" __attribute__((visibility("default"))) int Array3x3_Invert_double(void) {
    ALOGD("Array3x3_Invert_double() called");
    return 0;
}

/* Demangled: SfSatt::start_ekf_struct::start_ekf_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16start_ekf_structC1Ev(void) {
    ALOGD("_ZN6SfSatt16start_ekf_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::~phone_yaw_moved_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD2Ev(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD2Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::gbuff_struct::~gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias12gbuff_structD2Ev(void) {
    ALOGD("_ZN14SimpleGyroBias12gbuff_structD2Ev() called");
    return 0;
}

/* Demangled: MonitorDataRate::ini_list() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate8ini_listEv(void) {
    ALOGD("_ZN15MonitorDataRate8ini_listEv() called");
    return 0;
}

/* Demangled: SfSatt::state_para_struct::state_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17state_para_structC1Ev(void) {
    ALOGD("_ZN6SfSatt17state_para_structC1Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_CoordGeodetic::MAGtype_CoordGeodetic() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAGtype_CoordGeodeticC1Ev(void) {
    ALOGD("_ZN5SfWmm21MAGtype_CoordGeodeticC1Ev() called");
    return 0;
}

/* Demangled: _sf_init_object */
extern "C" __attribute__((visibility("default"))) int _sf_init_object(void) {
    ALOGD("_sf_init_object() called");
    return 0;
}

/* Exported Object: gyr_last_static_temp_diff */
extern "C" __attribute__((visibility("default"))) void* gyr_last_static_temp_diff = NULL;

/* Demangled: CarAccelB::Rts::reforward_predict(int, int, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts17reforward_predictEiiR6MatrixS2_(void) {
    ALOGD("_ZN9CarAccelB3Rts17reforward_predictEiiR6MatrixS2_() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_dyn_gyro_bias(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias17get_dyn_gyro_biasEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias17get_dyn_gyro_biasEPd() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_gyro_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf17get_dec_gyro_tempEPd(void) {
    ALOGD("_ZNK5SfLpf17get_dec_gyro_tempEPd() called");
    return 0;
}

/* Demangled: Matrix::swap_row(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix8swap_rowEii(void) {
    ALOGD("_ZN6Matrix8swap_rowEii() called");
    return 0;
}

/* Demangled: UdrEkf::set_v2a(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_v2aER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_v2aER6Matrix() called");
    return 0;
}

/* Demangled: PdrIsm::PdrIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsmC2Ev(void) {
    ALOGD("_ZN6PdrIsmC2Ev() called");
    return 0;
}

/* Demangled: Matrix::mMultSparse(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix11mMultSparseERS_S0_(void) {
    ALOGD("_ZN6Matrix11mMultSparseERS_S0_() called");
    return 0;
}

/* Demangled: GnssAccelDecel::alloc_gad_buff() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel14alloc_gad_buffEv(void) {
    ALOGD("_ZN14GnssAccelDecel14alloc_gad_buffEv() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level4(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20upd_rough_cvb_level4ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl20upd_rough_cvb_level4ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: PdrIsm::comp_feas() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm9comp_feasEv(void) {
    ALOGD("_ZN6PdrIsm9comp_feasEv() called");
    return 0;
}

/* Demangled: PdrSatt::tuning_struct::tuning_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt13tuning_structC2Ev(void) {
    ALOGD("_ZN7PdrSatt13tuning_structC2Ev() called");
    return 0;
}

/* Demangled: SfStaticDetect::~SfStaticDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetectD0Ev(void) {
    ALOGD("_ZN14SfStaticDetectD0Ev() called");
    return 0;
}

/* Demangled: Barometer::set_cur_sps_rds_ts() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer18set_cur_sps_rds_tsEv(void) {
    ALOGD("_ZN9Barometer18set_cur_sps_rds_tsEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_stable_flag(sf_gnss_msg_struct*, unsigned int*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18update_stable_flagEP18sf_gnss_msg_structPjib(void) {
    ALOGD("_ZN6UdrEkf18update_stable_flagEP18sf_gnss_msg_structPjib() called");
    return 0;
}

/* Demangled: GnssAccelDecel::gad_buff_struct::~gad_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel15gad_buff_structD2Ev(void) {
    ALOGD("_ZN14GnssAccelDecel15gad_buff_structD2Ev() called");
    return 0;
}

/* Demangled: det */
extern "C" __attribute__((visibility("default"))) int det(void) {
    ALOGD("det() called");
    return 0;
}

/* Demangled: DataProcess::rt_forward_mems() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess15rt_forward_memsEv(void) {
    ALOGD("_ZN11DataProcess15rt_forward_memsEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_rough_gyro_bias(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias19get_rough_gyro_biasEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias19get_rough_gyro_biasEPd() called");
    return 0;
}

/* Exported Object: latest_report_ts */
extern "C" __attribute__((visibility("default"))) void* latest_report_ts = NULL;

/* Demangled: SfLpf::set_imu_lpf_paras(SfLpf::para_struct const*, SfLpf::para_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17set_imu_lpf_parasEPKNS_11para_structES2_(void) {
    ALOGD("_ZN5SfLpf17set_imu_lpf_parasEPKNS_11para_structES2_() called");
    return 0;
}

/* Demangled: MonitorDataRate::dr_track_struct::~dr_track_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate15dr_track_structD1Ev(void) {
    ALOGD("_ZN15MonitorDataRate15dr_track_structD1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::ekf_ab_measurement_update() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25ekf_ab_measurement_updateEv(void) {
    ALOGD("_ZN6UdrEkf25ekf_ab_measurement_updateEv() called");
    return 0;
}

/* Exported Object: MI_correct */
extern "C" __attribute__((visibility("default"))) void* MI_correct = NULL;

/* Demangled: Matrix::init(int, int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4initEiiPKd(void) {
    ALOGD("_ZN6Matrix4initEiiPKd() called");
    return 0;
}

/* Demangled: SfSatt::test_pred_x_gp_gb_ab() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt20test_pred_x_gp_gb_abEv(void) {
    ALOGD("_ZN6SfSatt20test_pred_x_gp_gb_abEv() called");
    return 0;
}

/* Demangled: split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEcRNS_6vectorIS5_NS3_IS5_EEEE(void) {
    ALOGD("_Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEcRNS_6vectorIS5_NS3_IS5_EEEE() called");
    return 0;
}

/* Demangled: interp1q(double, double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z8interp1qddddd(void) {
    ALOGD("_Z8interp1qddddd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::AlterGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBiasC1Ev(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBiasC1Ev() called");
    return 0;
}

/* Demangled: SystemStateControl::trigger_to_get_rough_cvb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl24trigger_to_get_rough_cvbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl24trigger_to_get_rough_cvbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Exported Object: acc_curr_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_curr_pitch = NULL;

/* Demangled: mpe_dr_deinitialize */
extern "C" __attribute__((visibility("default"))) int mpe_dr_deinitialize(void) {
    ALOGD("mpe_dr_deinitialize() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_is_gyro_ok() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect14get_is_gyro_okEv(void) {
    ALOGD("_ZN14SfStaticDetect14get_is_gyro_okEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_ekf_meas_time(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17upd_ekf_meas_timeEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF17upd_ekf_meas_timeEd() called");
    return 0;
}

/* Demangled: UdrEkf::stored_bias_struct::pseudo_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_struct12pseudo_resetEv(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_struct12pseudo_resetEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::get_avg(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel7get_avgEPdi(void) {
    ALOGD("_ZN14GnssAccelDecel7get_avgEPdi() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_rough_cvb_level_fake(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl24upd_rough_cvb_level_fakeERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl24upd_rough_cvb_level_fakeERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: PdrMheading::reset_upd() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading9reset_updEv(void) {
    ALOGD("_ZN11PdrMheading9reset_updEv() called");
    return 0;
}

/* Demangled: PdrSatt::avg_gp_struct::avg_gp_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt13avg_gp_structC1Ev(void) {
    ALOGD("_ZN7PdrSatt13avg_gp_structC1Ev() called");
    return 0;
}

/* Demangled: DataProcess::get_mems_count() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_mems_countEv(void) {
    ALOGD("_ZN11DataProcess14get_mems_countEv() called");
    return 0;
}

/* Exported Object: acc_curr_std_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_curr_std_pitch = NULL;

/* Demangled: movavg(double*, double const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z6movavgPdPKdii(void) {
    ALOGD("_Z6movavgPdPKdii() called");
    return 0;
}

/* Demangled: CloneNearGnss::CloneNearGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnssC1Ev(void) {
    ALOGD("_ZN13CloneNearGnssC1Ev() called");
    return 0;
}

/* Demangled: PdrIsm::ini_meas() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm8ini_measEv(void) {
    ALOGD("_ZN6PdrIsm8ini_measEv() called");
    return 0;
}

/* Demangled: SfLpf::smoop_struct::smoop_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12smoop_structC2Ev(void) {
    ALOGD("_ZN5SfLpf12smoop_structC2Ev() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorVel::R_UNIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorVel10R_UNIT_COVE = NULL;

/* Exported Object: dr_bias_variance_1 */
extern "C" __attribute__((visibility("default"))) void* dr_bias_variance_1 = NULL;

/* Demangled: UdrEkf::stored_bias_struct::check_convergence(Matrix const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_struct17check_convergenceERK6Matrixj(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_struct17check_convergenceERK6Matrixj() called");
    return 0;
}

/* Demangled: AT */
extern "C" __attribute__((visibility("default"))) int AT(void) {
    ALOGD("AT() called");
    return 0;
}

/* Demangled: PdrEkf::state_update(sf_gnss_msg_struct const*, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf12state_updateEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structEP16PdrUpdTypeSelecti(void) {
    ALOGD("_ZN6PdrEkf12state_updateEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structEP16PdrUpdTypeSelecti() called");
    return 0;
}

/* Demangled: PdrEkf::predict_upd_ekf_heading(sf_gnss_msg_struct const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf23predict_upd_ekf_headingEPK18sf_gnss_msg_structiii(void) {
    ALOGD("_ZN6PdrEkf23predict_upd_ekf_headingEPK18sf_gnss_msg_structiii() called");
    return 0;
}

/* Demangled: SfLpf::set_adv_default_mag_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf28set_adv_default_mag_lpf_paraEv(void) {
    ALOGD("_ZN5SfLpf28set_adv_default_mag_lpf_paraEv() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC2Eii(void) {
    ALOGD("_ZN6MatrixC2Eii() called");
    return 0;
}

/* Demangled: update_activity_monitor */
extern "C" __attribute__((visibility("default"))) int update_activity_monitor(void) {
    ALOGD("update_activity_monitor() called");
    return 0;
}

/* Demangled: Matrix::operator()(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixclEi(void) {
    ALOGD("_ZN6MatrixclEi() called");
    return 0;
}

/* Demangled: monotonic_time_diff(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _Z19monotonic_time_diffxx(void) {
    ALOGD("_Z19monotonic_time_diffxx() called");
    return 0;
}

/* Demangled: SfLpf::dec_filt_sensors(MonitorDataRate const&, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf16dec_filt_sensorsERK15MonitorDataRateP18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf16dec_filt_sensorsERK15MonitorDataRateP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: InertialStaticMove::comp_sm_rng(double**, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11comp_sm_rngEPPdi(void) {
    ALOGD("_ZN18InertialStaticMove11comp_sm_rngEPPdi() called");
    return 0;
}

/* Demangled: PdrIgp::copy_out() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp8copy_outEv(void) {
    ALOGD("_ZN6PdrIgp8copy_outEv() called");
    return 0;
}

/* Exported Object: vtable for PdrIsm */
extern "C" __attribute__((visibility("default"))) void* _ZTV6PdrIsm = NULL;

/* Demangled: SfSatt::upd_ext_feas_dcm(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16upd_ext_feas_dcmERK6Matrix(void) {
    ALOGD("_ZN6SfSatt16upd_ext_feas_dcmERK6Matrix() called");
    return 0;
}

/* Demangled: CarAccelB::upd_dbuff(CarAccelB::delay_buff_struct&, double const*, double const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB9upd_dbuffERNS_17delay_buff_structEPKdS3_(void) {
    ALOGD("_ZNK9CarAccelB9upd_dbuffERNS_17delay_buff_structEPKdS3_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_discrete_meas_covariance_matrix(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF36comp_discrete_meas_covariance_matrixEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF36comp_discrete_meas_covariance_matrixEPKd() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_use_gnss_after_zupt() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect23set_use_gnss_after_zuptEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect23set_use_gnss_after_zuptEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::close_less_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp16close_less_resetEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp16close_less_resetEv() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_CoordSpherical::MAGtype_CoordSpherical() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm22MAGtype_CoordSphericalC2Ev(void) {
    ALOGD("_ZN5SfWmm22MAGtype_CoordSphericalC2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_CalculateGridVariation(SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_GeoMagneticElements*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm26MAG_CalculateGridVariationERKNS_21MAGtype_CoordGeodeticEPNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm26MAG_CalculateGridVariationERKNS_21MAGtype_CoordGeodeticEPNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: UdrEkf::pop_ekf_main_state(UdrEkf::ekf_main_state_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18pop_ekf_main_stateEPNS_21ekf_main_state_structE(void) {
    ALOGD("_ZN6UdrEkf18pop_ekf_main_stateEPNS_21ekf_main_state_structE() called");
    return 0;
}

/* Demangled: Watchdog::variance(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog8varianceEPd(void) {
    ALOGD("_ZN8Watchdog8varianceEPd() called");
    return 0;
}

/* Exported Object: acc_curr_mean_roll */
extern "C" __attribute__((visibility("default"))) void* acc_curr_mean_roll = NULL;

/* Demangled: PdrIgp::get_win_len() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp11get_win_lenEv(void) {
    ALOGD("_ZN6PdrIgp11get_win_lenEv() called");
    return 0;
}

/* Demangled: floor_math(float) */
extern "C" __attribute__((visibility("default"))) int _Z10floor_mathf(void) {
    ALOGD("_Z10floor_mathf() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_dir_struct::dump_hist_cvb(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct13dump_hist_cvbER6Matrix(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct13dump_hist_cvbER6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::fit_3_pts(unsigned int, unsigned int, unsigned int, double const*, VehBodOrient::VboLess::VboNwShapeEnum::NwShapeType*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_struct9fit_3_ptsEjjjPKdPNS0_14VboNwShapeEnum11NwShapeTypeE(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_struct9fit_3_ptsEjjjPKdPNS0_14VboNwShapeEnum11NwShapeTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_select_w_from_buff(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp22get_select_w_from_buffEjj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp22get_select_w_from_buffEjj() called");
    return 0;
}

/* Demangled: SfSatt::out_imu_struct::out_imu_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt14out_imu_structC1Ev(void) {
    ALOGD("_ZN6SfSatt14out_imu_structC1Ev() called");
    return 0;
}

/* Demangled: SfSgb::tol_struct::tol_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb10tol_structC1Ev(void) {
    ALOGD("_ZN5SfSgb10tol_structC1Ev() called");
    return 0;
}

/* Demangled: MonitorDataRate::downsampling_sensors_pointer(sf_mems_msg_struct const*, MonitorDataRate::downsample_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate28downsampling_sensors_pointerEPK18sf_mems_msg_structPNS_17downsample_structE(void) {
    ALOGD("_ZN15MonitorDataRate28downsampling_sensors_pointerEPK18sf_mems_msg_structPNS_17downsample_structE() called");
    return 0;
}

/* Demangled: SfWmm::MAG_WMMErrorCalc(double, SfWmm::MAGtype_GeoMagneticElements*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm16MAG_WMMErrorCalcEdPNS_27MAGtype_GeoMagneticElementsE(void) {
    ALOGD("_ZN5SfWmm16MAG_WMMErrorCalcEdPNS_27MAGtype_GeoMagneticElementsE() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC2EiiPKd(void) {
    ALOGD("_ZN6MatrixC2EiiPKd() called");
    return 0;
}

/* Demangled: UdrEkf::cbv_measurement_update(sf_ned_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22cbv_measurement_updateERK13sf_ned_struct(void) {
    ALOGD("_ZN6UdrEkf22cbv_measurement_updateERK13sf_ned_struct() called");
    return 0;
}

/* Demangled: UdrEkf::get_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf9get_stateEi(void) {
    ALOGD("_ZN6UdrEkf9get_stateEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_p_grav_proj() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17reset_p_grav_projEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF17reset_p_grav_projEv() called");
    return 0;
}

/* Demangled: PdrMheading::comp_tilt_compensated_mag_heading(MonitorDataRate const&, sf_mems_msg_struct const*, sf_gnss_msg_struct const*, PdrSatt::out_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading33comp_tilt_compensated_mag_headingERK15MonitorDataRatePK18sf_mems_msg_structPK18sf_gnss_msg_structRKN7PdrSatt10out_structE(void) {
    ALOGD("_ZN11PdrMheading33comp_tilt_compensated_mag_headingERK15MonitorDataRatePK18sf_mems_msg_structPK18sf_gnss_msg_structRKN7PdrSatt10out_structE() called");
    return 0;
}

/* Demangled: UdrEkf::replace_udr2mnl_msg(sf2mnl_msg_struct*, double, int, int*, UdrUpdTypeSelect&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelectd(void) {
    ALOGD("_ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelectd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::~SimpleGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBiasD2Ev(void) {
    ALOGD("_ZN14SimpleGyroBiasD2Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::update_scenario_type(sf_gnss_msg_struct*, UdrEkf*, double, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect20update_scenario_typeEP18sf_gnss_msg_structP6UdrEkfdbb(void) {
    ALOGD("_ZN16UdrUpdTypeSelect20update_scenario_typeEP18sf_gnss_msg_structP6UdrEkfdbb() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_proba_prev() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp19get_buff_proba_prevEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp19get_buff_proba_prevEv() called");
    return 0;
}

/* Demangled: PdrEkf::get_magh() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf8get_maghEv(void) {
    ALOGD("_ZN6PdrEkf8get_maghEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_prev_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17update_prev_stateEv(void) {
    ALOGD("_ZN6UdrEkf17update_prev_stateEv() called");
    return 0;
}

/* Demangled: wgsxyz2enu(Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z10wgsxyz2enuR6MatrixS0_S0_(void) {
    ALOGD("_Z10wgsxyz2enuR6MatrixS0_S0_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::assign_less(VehBodOrient::VboGrp const&, VehBodOrient::VboGdcm3 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess11assign_lessERKNS_6VboGrpERKNS_8VboGdcm3E(void) {
    ALOGD("_ZN12VehBodOrient7VboLess11assign_lessERKNS_6VboGrpERKNS_8VboGdcm3E() called");
    return 0;
}

/* Demangled: SfLpf::check_lsm6dsm_accel_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf32check_lsm6dsm_accel_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf32check_lsm6dsm_accel_dec_num_axisEi() called");
    return 0;
}

/* Demangled: SfSatt::ekf_set_meas_upd() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ekf_set_meas_updEv(void) {
    ALOGD("_ZN6SfSatt16ekf_set_meas_updEv() called");
    return 0;
}

/* Demangled: UdrEkf::set_cbv2a(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf9set_cbv2aER6Matrix(void) {
    ALOGD("_ZN6UdrEkf9set_cbv2aER6Matrix() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_good_gnss_flag_for_cvb(sf_gnss_msg_struct*, double, UdrLpf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect26set_good_gnss_flag_for_cvbEP18sf_gnss_msg_structdRK6UdrLpf(void) {
    ALOGD("_ZN16UdrUpdTypeSelect26set_good_gnss_flag_for_cvbEP18sf_gnss_msg_structdRK6UdrLpf() called");
    return 0;
}

/* Demangled: clear_all_axes_counts */
extern "C" __attribute__((visibility("default"))) int clear_all_axes_counts(void) {
    ALOGD("clear_all_axes_counts() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: UdrStaticDetect::update_static_status(sf_mems_msg_struct*, sf_gnss_msg_struct*, Matrix&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv(void) {
    ALOGD("_ZN15UdrStaticDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv() called");
    return 0;
}

/* Demangled: PdrEkf::mg_heading_diff_struct::~mg_heading_diff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf22mg_heading_diff_structD1Ev(void) {
    ALOGD("_ZN6PdrEkf22mg_heading_diff_structD1Ev() called");
    return 0;
}

/* Exported Object: vtable for PDR */
extern "C" __attribute__((visibility("default"))) void* _ZTV3PDR = NULL;

/* Demangled: SfSatt::ekf_struct::ekf_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt10ekf_structC1Ev(void) {
    ALOGD("_ZN6SfSatt10ekf_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::get_state_init_for_fix() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22get_state_init_for_fixEv(void) {
    ALOGD("_ZN6UdrEkf22get_state_init_for_fixEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_aid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp17get_buff_aid_typeEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp17get_buff_aid_typeEv() called");
    return 0;
}

/* Exported Object: acc_avg_show */
extern "C" __attribute__((visibility("default"))) void* acc_avg_show = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: SfSatt::ctrl_para_struct::ctrl_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16ctrl_para_structC2Ev(void) {
    ALOGD("_ZN6SfSatt16ctrl_para_structC2Ev() called");
    return 0;
}

/* Demangled: UdrStaticDetect::UdrStaticDetect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetectC2ERK12ConfigParams(void) {
    ALOGD("_ZN15UdrStaticDetectC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: VehBodOrient::get_gdcm3_bit_true_data(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient23get_gdcm3_bit_true_dataEPdi(void) {
    ALOGD("_ZN12VehBodOrient23get_gdcm3_bit_true_dataEPdi() called");
    return 0;
}

/* Exported Object: acc_final_static_bias */
extern "C" __attribute__((visibility("default"))) void* acc_final_static_bias = NULL;

/* Demangled: CarAccelB::SubKF::set_dsd2d(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF9set_dsd2dEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF9set_dsd2dEd() called");
    return 0;
}

/* Demangled: UdrEkf::cal_chi_square(Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf14cal_chi_squareER6MatrixS1_S1_(void) {
    ALOGD("_ZN6UdrEkf14cal_chi_squareER6MatrixS1_S1_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::free_fs() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart7free_fsEv(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart7free_fsEv() called");
    return 0;
}

/* Exported Object: run_detected */
extern "C" __attribute__((visibility("default"))) void* run_detected = NULL;

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::mag_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_structC1Ev(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_structC1Ev() called");
    return 0;
}

/* Demangled: SfLpf::set_mag_id(sensor::SensorIDEnum::SensorIDType) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf10set_mag_idEN6sensor12SensorIDEnum12SensorIDTypeE(void) {
    ALOGD("_ZN5SfLpf10set_mag_idEN6sensor12SensorIDEnum12SensorIDTypeE() called");
    return 0;
}

/* Demangled: Matrix::mEye(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4mEyeEd(void) {
    ALOGD("_ZN6Matrix4mEyeEd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF13upd_gyro_biasEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF13upd_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_sf_dynamic_var_beta(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF23upd_sf_dynamic_var_betaER6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF23upd_sf_dynamic_var_betaER6Matrix() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_gb_var_ready() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias15is_gb_var_readyEv(void) {
    ALOGD("_ZN14SimpleGyroBias15is_gb_var_readyEv() called");
    return 0;
}

/* Demangled: SfLpf::set_dec_lpf_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17set_dec_lpf_parasEv(void) {
    ALOGD("_ZN5SfLpf17set_dec_lpf_parasEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::count_direction_number(VehBodOrient::VboFbEnum::FbType const*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp22count_direction_numberEPKNS_9VboFbEnum6FbTypeEPiS5_(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp22count_direction_numberEPKNS_9VboFbEnum6FbTypeEPiS5_() called");
    return 0;
}

/* Demangled: PdrSatt::~PdrSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSattD2Ev(void) {
    ALOGD("_ZN7PdrSattD2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_static_var_grav_proj_meas(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF29upd_static_var_grav_proj_measEPKdS2_(void) {
    ALOGD("_ZN9CarAccelB5SubKF29upd_static_var_grav_proj_measEPKdS2_() called");
    return 0;
}

/* Demangled: UdrEkf::get_Corr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8get_CorrEi(void) {
    ALOGD("_ZN6UdrEkf8get_CorrEi() called");
    return 0;
}

/* Demangled: UdrEkf::UdrEkf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkfC1ERK12ConfigParams(void) {
    ALOGD("_ZN6UdrEkfC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: sf_ts_shift_sec(double, int) */
extern "C" __attribute__((visibility("default"))) int _Z15sf_ts_shift_secdi(void) {
    ALOGD("_Z15sf_ts_shift_secdi() called");
    return 0;
}

/* Demangled: CarAccelB::upd_ini_gp_info() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB15upd_ini_gp_infoEv(void) {
    ALOGD("_ZN9CarAccelB15upd_ini_gp_infoEv() called");
    return 0;
}

/* Demangled: UdrEkf::correction_check(sf_gnss_msg_struct*, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16correction_checkEP18sf_gnss_msg_structR6Matrix(void) {
    ALOGD("_ZN6UdrEkf16correction_checkEP18sf_gnss_msg_structR6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::adjust_K_and_Corr(Matrix&, Matrix&, Matrix&, unsigned int*, bool, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17adjust_K_and_CorrER6MatrixS1_S1_Pjbd(void) {
    ALOGD("_ZN6UdrEkf17adjust_K_and_CorrER6MatrixS1_S1_Pjbd() called");
    return 0;
}

/* Demangled: SystemStateControl::get_cvb(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl7get_cvbER6Matrix(void) {
    ALOGD("_ZN18SystemStateControl7get_cvbER6Matrix() called");
    return 0;
}

/* Demangled: UdrLpf::get_adv_gnss_1hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf16get_adv_gnss_1hzEv(void) {
    ALOGD("_ZN6UdrLpf16get_adv_gnss_1hzEv() called");
    return 0;
}

/* Demangled: SfIsm::meas_struct::~meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11meas_structD2Ev(void) {
    ALOGD("_ZN5SfIsm11meas_structD2Ev() called");
    return 0;
}

/* Demangled: Matrix::row_sub_cRow(int, int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix12row_sub_cRowEiid(void) {
    ALOGD("_ZN6Matrix12row_sub_cRowEiid() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC1EiPKd(void) {
    ALOGD("_ZN6MatrixC1EiPKd() called");
    return 0;
}

/* Demangled: UdrLpf::~UdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpfD2Ev(void) {
    ALOGD("_ZN6UdrLpfD2Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_default_gyro_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf21get_default_gyro_paraEv(void) {
    ALOGD("_ZN5SfLpf21get_default_gyro_paraEv() called");
    return 0;
}

/* Exported Object: Integration::calculation_ts */
extern "C" __attribute__((visibility("default"))) void* _ZN11Integration14calculation_tsE = NULL;

/* Demangled: CarAccelB::SubKF::upd_basic_sf_var() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF16upd_basic_sf_varEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF16upd_basic_sf_varEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::GnssAccelDecel() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecelC2Ev(void) {
    ALOGD("_ZN14GnssAccelDecelC2Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::upd_mov_statistics_gyro(double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias23upd_mov_statistics_gyroEPdd(void) {
    ALOGD("_ZN14SimpleGyroBias23upd_mov_statistics_gyroEPdd() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC2Ei(void) {
    ALOGD("_ZN6MatrixC2Ei() called");
    return 0;
}

/* Demangled: Matrix::operator()(int const*, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixclEPKiS1_(void) {
    ALOGD("_ZN6MatrixclEPKiS1_() called");
    return 0;
}

/* Demangled: Barometer::dect_baro_drift() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer15dect_baro_driftEv(void) {
    ALOGD("_ZN9Barometer15dect_baro_driftEv() called");
    return 0;
}

/* Demangled: UdrEkf::get_vel_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12get_vel_initEv(void) {
    ALOGD("_ZN6UdrEkf12get_vel_initEv() called");
    return 0;
}

/* Demangled: PdrLpf::get_bmi160_accel_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf26get_bmi160_accel_para_50hzEv(void) {
    ALOGD("_ZN6PdrLpf26get_bmi160_accel_para_50hzEv() called");
    return 0;
}

/* Demangled: DataProcess::sensor_range_check(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess18sensor_range_checkEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN11DataProcess18sensor_range_checkEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::pseudo_reset_buff() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct17pseudo_reset_buffEv(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct17pseudo_reset_buffEv() called");
    return 0;
}

/* Demangled: SystemStateControl::check_cvb_dir_struct::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_struct5resetEv(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_struct5resetEv() called");
    return 0;
}

/* Demangled: almost_greater_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z20almost_greater_equalddd(void) {
    ALOGD("_Z20almost_greater_equalddd() called");
    return 0;
}

/* Demangled: PdrSgb::ini_tol() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgb7ini_tolEv(void) {
    ALOGD("_ZN6PdrSgb7ini_tolEv() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: PdrGb::copy_sgb_rough_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGb17copy_sgb_rough_gbEv(void) {
    ALOGD("_ZN5PdrGb17copy_sgb_rough_gbEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_K_and_Corr(Matrix&, Matrix&, Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17update_K_and_CorrER6MatrixS1_S1_S1_S1_(void) {
    ALOGD("_ZN6UdrEkf17update_K_and_CorrER6MatrixS1_S1_S1_S1_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::VboGdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm3C2Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm3C2Ev() called");
    return 0;
}

/* Demangled: Pedometer::Pedometer(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9PedometerC2ERK12ConfigParams(void) {
    ALOGD("_ZN9PedometerC2ERK12ConfigParams() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: VehBodOrient::VboGdcm3::reset_ext_gdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm315reset_ext_gdcm3Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm315reset_ext_gdcm3Ev() called");
    return 0;
}

/* Demangled: SfStaticDetect::SfStaticDetect(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetectC2Eii(void) {
    ALOGD("_ZN14SfStaticDetectC2Eii() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: UdrEkf::yaw_constrian(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf13yaw_constrianEPj(void) {
    ALOGD("_ZN6UdrEkf13yaw_constrianEPj() called");
    return 0;
}

/* Demangled: VehBodOrient::VehBodOrient() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrientC1Ev(void) {
    ALOGD("_ZN12VehBodOrientC1Ev() called");
    return 0;
}

/* Exported Object: acc_sum_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_sum_pitch = NULL;

/* Exported Object: dr_lon_ref */
extern "C" __attribute__((visibility("default"))) void* dr_lon_ref = NULL;

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: operator-(Matrix const&, double) */
extern "C" __attribute__((visibility("default"))) int _ZmiRK6Matrixd(void) {
    ALOGD("_ZmiRK6Matrixd() called");
    return 0;
}

/* Demangled: SystemStateControl::ini_cvb_to_ekf(UdrEkf&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl14ini_cvb_to_ekfER6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl14ini_cvb_to_ekfER6UdrEkf() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::less_quat(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess9less_quatEPd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess9less_quatEPd() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: acc_smooth_ready */
extern "C" __attribute__((visibility("default"))) void* acc_smooth_ready = NULL;

/* Demangled: pedometer_dsp_sqrt */
extern "C" __attribute__((visibility("default"))) int pedometer_dsp_sqrt(void) {
    ALOGD("pedometer_dsp_sqrt() called");
    return 0;
}

/* Demangled: PdrEkf::accumulate_mag_difference(PdrSatt::out_struct, PdrMheading::out_struct) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf25accumulate_mag_differenceEN7PdrSatt10out_structEN11PdrMheading10out_structE(void) {
    ALOGD("_ZN6PdrEkf25accumulate_mag_differenceEN7PdrSatt10out_structEN11PdrMheading10out_structE() called");
    return 0;
}

/* Demangled: SfLpf::set_mag_lpf_paras(SfLpf::para_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17set_mag_lpf_parasEPKNS_11para_structE(void) {
    ALOGD("_ZN5SfLpf17set_mag_lpf_parasEPKNS_11para_structE() called");
    return 0;
}

/* Demangled: SfSatt::upd_meas_para_tot_len() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21upd_meas_para_tot_lenEv(void) {
    ALOGD("_ZN6SfSatt21upd_meas_para_tot_lenEv() called");
    return 0;
}

/* Demangled: UdrEkf::get_Cbv() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf7get_CbvEv(void) {
    ALOGD("_ZNK6UdrEkf7get_CbvEv() called");
    return 0;
}

/* Demangled: UdrLpf::set_mmc5603_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: Integration::~Integration() */
extern "C" __attribute__((visibility("default"))) int _ZN11IntegrationD1Ev(void) {
    ALOGD("_ZN11IntegrationD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::meas_para_struct::~meas_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16meas_para_structD1Ev(void) {
    ALOGD("_ZN6SfSatt16meas_para_structD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::select_state_type() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17select_state_typeEv(void) {
    ALOGD("_ZN6SfSatt17select_state_typeEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_ComputeSphericalHarmonicVariables(SfWmm::MAGtype_Ellipsoid const&, SfWmm::MAGtype_CoordSpherical const&, int, SfWmm::MAGtype_SphericalHarmonicVariables*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm37MAG_ComputeSphericalHarmonicVariablesERKNS_17MAGtype_EllipsoidERKNS_22MAGtype_CoordSphericalEiPNS_34MAGtype_SphericalHarmonicVariablesE(void) {
    ALOGD("_ZN5SfWmm37MAG_ComputeSphericalHarmonicVariablesERKNS_17MAGtype_EllipsoidERKNS_22MAGtype_CoordSphericalEiPNS_34MAGtype_SphericalHarmonicVariablesE() called");
    return 0;
}

/* Demangled: UdrEkf::ekf_main_state_struct::ekf_main_state_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21ekf_main_state_structC1Ev(void) {
    ALOGD("_ZN6UdrEkf21ekf_main_state_structC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: SfGb::gbuff_struct::~gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb12gbuff_structD2Ev(void) {
    ALOGD("_ZN4SfGb12gbuff_structD2Ev() called");
    return 0;
}

/* Demangled: Matrix::find_max_inCol(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix14find_max_inColEi(void) {
    ALOGD("_ZN6Matrix14find_max_inColEi() called");
    return 0;
}

/* Demangled: SfStaticDetect::get_sensor_dist(SfStaticDetect::SensorEnum::SensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect15get_sensor_distENS_10SensorEnum10SensorTypeE(void) {
    ALOGD("_ZN14SfStaticDetect15get_sensor_distENS_10SensorEnum10SensorTypeE() called");
    return 0;
}

/* Demangled: UdrEkf::get_chi_square_velocity() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf23get_chi_square_velocityEv(void) {
    ALOGD("_ZN6UdrEkf23get_chi_square_velocityEv() called");
    return 0;
}

/* Demangled: UdrEkf::predict_attitude_estimate(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25predict_attitude_estimateEd(void) {
    ALOGD("_ZN6UdrEkf25predict_attitude_estimateEd() called");
    return 0;
}

/* Demangled: SystemStateControl::get_coarse_ekf_cvb_bit_true_data(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl32get_coarse_ekf_cvb_bit_true_dataEPdi(void) {
    ALOGD("_ZN18SystemStateControl32get_coarse_ekf_cvb_bit_true_dataEPdi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_select_ac_from_buff(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp23get_select_ac_from_buffEj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp23get_select_ac_from_buffEj() called");
    return 0;
}

/* Demangled: AT_double */
extern "C" __attribute__((visibility("default"))) int AT_double(void) {
    ALOGD("AT_double() called");
    return 0;
}

/* Demangled: PdrLpf::PdrLpf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpfC1ERK12ConfigParams(void) {
    ALOGD("_ZN6PdrLpfC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: PdrLpf::set_adv_mag_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf20set_adv_mag_lpf_paraEv(void) {
    ALOGD("_ZN6PdrLpf20set_adv_mag_lpf_paraEv() called");
    return 0;
}

/* Demangled: SfSatt::comp_direct_inno() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16comp_direct_innoEv(void) {
    ALOGD("_ZN6SfSatt16comp_direct_innoEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_SetDefaults(SfWmm::MAGtype_Ellipsoid*, SfWmm::MAGtype_Geoid*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm15MAG_SetDefaultsEPNS_17MAGtype_EllipsoidEPNS_13MAGtype_GeoidE(void) {
    ALOGD("_ZN5SfWmm15MAG_SetDefaultsEPNS_17MAGtype_EllipsoidEPNS_13MAGtype_GeoidE() called");
    return 0;
}

/* Demangled: UdrEkf::get_P(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf5get_PEi(void) {
    ALOGD("_ZN6UdrEkf5get_PEi() called");
    return 0;
}

/* Demangled: GnssAccelDecel::comp_2d_avg_dspeed(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel18comp_2d_avg_dspeedEi(void) {
    ALOGD("_ZN14GnssAccelDecel18comp_2d_avg_dspeedEi() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::update_mu_level_with_dr_mode(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect28update_mu_level_with_dr_modeEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN16UdrUpdTypeSelect28update_mu_level_with_dr_modeEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Exported Object: smd_reported */
extern "C" __attribute__((visibility("default"))) void* smd_reported = NULL;

/* Exported Object: RadioSpeedIndex */
extern "C" __attribute__((visibility("default"))) void* RadioSpeedIndex = NULL;

/* Demangled: Matrix::mEye() */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4mEyeEv(void) {
    ALOGD("_ZN6Matrix4mEyeEv() called");
    return 0;
}

/* Demangled: SfStaticDetect::variance(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetect8varianceEPdi(void) {
    ALOGD("_ZN14SfStaticDetect8varianceEPdi() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GetAltitude(SfWmm::MAGtype_Geoid*, SfWmm::MAGtype_CoordGeodetic*, double const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm15MAG_GetAltitudeEPNS_13MAGtype_GeoidEPNS_21MAGtype_CoordGeodeticEPKdi(void) {
    ALOGD("_ZN5SfWmm15MAG_GetAltitudeEPNS_13MAGtype_GeoidEPNS_21MAGtype_CoordGeodeticEPKdi() called");
    return 0;
}

/* Demangled: SfWmm::MAG_AllocateLegendreFunctionMemory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm34MAG_AllocateLegendreFunctionMemoryEi(void) {
    ALOGD("_ZN5SfWmm34MAG_AllocateLegendreFunctionMemoryEi() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_rough_gyro_bias_var(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias23get_rough_gyro_bias_varEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias23get_rough_gyro_bias_varEPd() called");
    return 0;
}

/* Demangled: PdrMotionDetect::transition_update() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect17transition_updateEv(void) {
    ALOGD("_ZN15PdrMotionDetect17transition_updateEv() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::update_default_model_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel25update_default_model_biasEv(void) {
    ALOGD("_ZN9Pedometer7SsModel25update_default_model_biasEv() called");
    return 0;
}

/* Demangled: ConfigParams::ConfigParams(sf_user_param_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN12ConfigParamsC1EP20sf_user_param_struct(void) {
    ALOGD("_ZN12ConfigParamsC1EP20sf_user_param_struct() called");
    return 0;
}

/* Demangled: DataProcess::get_refer_utc_time() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess18get_refer_utc_timeEv(void) {
    ALOGD("_ZN11DataProcess18get_refer_utc_timeEv() called");
    return 0;
}

/* Demangled: open_archive_file(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17open_archive_filePKci(void) {
    ALOGD("_Z17open_archive_filePKci() called");
    return 0;
}

/* Demangled: Matrix::Matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC2Ev(void) {
    ALOGD("_ZN6MatrixC2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_q_gyro_bias() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF15get_q_gyro_biasEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF15get_q_gyro_biasEv() called");
    return 0;
}

/* Demangled: UdrEkf::constrain_P_lower_limit(unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf23constrain_P_lower_limitEPjb(void) {
    ALOGD("_ZN6UdrEkf23constrain_P_lower_limitEPjb() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::update_mu_level(sf_gnss_msg_struct*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect15update_mu_levelEP18sf_gnss_msg_structb(void) {
    ALOGD("_ZN16UdrUpdTypeSelect15update_mu_levelEP18sf_gnss_msg_structb() called");
    return 0;
}

/* Exported Object: gyr_static_flag */
extern "C" __attribute__((visibility("default"))) void* gyr_static_flag = NULL;

/* Demangled: UdrEkf::stored_bias_struct::~stored_bias_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_structD2Ev(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_structD2Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::reset_gpart_stable_stat() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias23reset_gpart_stable_statEv(void) {
    ALOGD("_ZN14SimpleGyroBias23reset_gpart_stable_statEv() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_vel(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf16get_adv_gnss_velEPd(void) {
    ALOGD("_ZNK5SfLpf16get_adv_gnss_velEPd() called");
    return 0;
}

/* Demangled: extract_normal_gravity(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z22extract_normal_gravityR6MatrixS0_(void) {
    ALOGD("_Z22extract_normal_gravityR6MatrixS0_() called");
    return 0;
}

/* Demangled: CarAccelB::upd_gyro_bias_info(SimpleGyroBias const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18upd_gyro_bias_infoERK14SimpleGyroBias(void) {
    ALOGD("_ZN9CarAccelB18upd_gyro_bias_infoERK14SimpleGyroBias() called");
    return 0;
}

/* Demangled: mpe_get_linear_acceleration */
extern "C" __attribute__((visibility("default"))) int mpe_get_linear_acceleration(void) {
    ALOGD("mpe_get_linear_acceleration() called");
    return 0;
}

/* Demangled: SfSatt::upd_var_gyro_bias(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17upd_var_gyro_biasEPKd(void) {
    ALOGD("_ZN6SfSatt17upd_var_gyro_biasEPKd() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::update_gnss_fsm(sf_gnss_msg_struct*, double, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect15update_gnss_fsmEP18sf_gnss_msg_structdb(void) {
    ALOGD("_ZN16UdrUpdTypeSelect15update_gnss_fsmEP18sf_gnss_msg_structdb() called");
    return 0;
}

/* Demangled: Matrix::operator()(int const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixclEPKii(void) {
    ALOGD("_ZNK6MatrixclEPKii() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: SfLpf::get_default_gnss_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf21get_default_gnss_paraEv(void) {
    ALOGD("_ZN5SfLpf21get_default_gnss_paraEv() called");
    return 0;
}

/* Demangled: SfLpf::~SfLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpfD0Ev(void) {
    ALOGD("_ZN5SfLpfD0Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_dad(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess12comp_avg_dadEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess12comp_avg_dadEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: SfLpf::get_default_mag_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf20get_default_mag_paraEv(void) {
    ALOGD("_ZN5SfLpf20get_default_mag_paraEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSVel::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSVel4NameE = NULL;

/* Demangled: UdrEkf::predict_G_Q_GT_matrix(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21predict_G_Q_GT_matrixEb(void) {
    ALOGD("_ZN6UdrEkf21predict_G_Q_GT_matrixEb() called");
    return 0;
}

/* Demangled: SystemStateControl::SystemStateControl() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControlC2Ev(void) {
    ALOGD("_ZN18SystemStateControlC2Ev() called");
    return 0;
}

/* Demangled: wgslla2xyz(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z10wgslla2xyzR6MatrixS0_(void) {
    ALOGD("_Z10wgslla2xyzR6MatrixS0_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: UdrEkf::get_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf14get_reset_flagEv(void) {
    ALOGD("_ZN6UdrEkf14get_reset_flagEv() called");
    return 0;
}

/* Demangled: adjoint */
extern "C" __attribute__((visibility("default"))) int adjoint(void) {
    ALOGD("adjoint() called");
    return 0;
}

/* Demangled: Matrix::operator()(int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixclEPKi(void) {
    ALOGD("_ZN6MatrixclEPKi() called");
    return 0;
}

/* Demangled: SfSatt::set_ekf_var_meas() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16set_ekf_var_measEv(void) {
    ALOGD("_ZN6SfSatt16set_ekf_var_measEv() called");
    return 0;
}

/* Demangled: SfSatt::is_test_meas_upd_by_dcm() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt23is_test_meas_upd_by_dcmEv(void) {
    ALOGD("_ZNK6SfSatt23is_test_meas_upd_by_dcmEv() called");
    return 0;
}

/* Demangled: UdrEkf::set_w2w(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_w2wER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_w2wER6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::m2n(double const (*) [3], double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess3m2nEPA3_KdPd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess3m2nEPA3_KdPd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::sync_gdcm3_with_grp(CarAccelB::output_struct const&, VehBodOrient::VboGrp&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm319sync_gdcm3_with_grpERKN9CarAccelB13output_structERNS_6VboGrpE(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm319sync_gdcm3_with_grpERKN9CarAccelB13output_structERNS_6VboGrpE() called");
    return 0;
}

/* Demangled: cmp_func */
extern "C" __attribute__((visibility("default"))) int cmp_func(void) {
    ALOGD("cmp_func() called");
    return 0;
}

/* Demangled: PdrLpf::get_lsm6dsm_accel_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf28get_lsm6dsm_accel_para_200hzEv(void) {
    ALOGD("_ZN6PdrLpf28get_lsm6dsm_accel_para_200hzEv() called");
    return 0;
}

/* Demangled: UdrEkf::set_valid_flag_to_invalid() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25set_valid_flag_to_invalidEv(void) {
    ALOGD("_ZN6UdrEkf25set_valid_flag_to_invalidEv() called");
    return 0;
}

/* Demangled: set_user_archive(sf_user_archive_struct&) */
extern "C" __attribute__((visibility("default"))) int _Z16set_user_archiveR22sf_user_archive_struct(void) {
    ALOGD("_Z16set_user_archiveR22sf_user_archive_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::alloc_less() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess10alloc_lessEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess10alloc_lessEv() called");
    return 0;
}

/* Exported Object: mag_raw_window */
extern "C" __attribute__((visibility("default"))) void* mag_raw_window = NULL;

/* Demangled: UdrUpdTypeSelect::get_mu_level(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect12get_mu_levelEj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect12get_mu_levelEj() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::phone_yaw_moved_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC1Ev(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::get_Resi(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8get_ResiEi(void) {
    ALOGD("_ZN6UdrEkf8get_ResiEi() called");
    return 0;
}

/* Demangled: UDR::publish_udr_mnl_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR22publish_udr_mnl_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR22publish_udr_mnl_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SimpleGyroBias::gbuff_struct::gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias12gbuff_structC1Ev(void) {
    ALOGD("_ZN14SimpleGyroBias12gbuff_structC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_norm_w() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp19get_buff_avg_norm_wEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp19get_buff_avg_norm_wEv() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: CarAccelB::upd_gnss_info(GnssAccelDecel const&, double&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB13upd_gnss_infoERK14GnssAccelDecelRd(void) {
    ALOGD("_ZN9CarAccelB13upd_gnss_infoERK14GnssAccelDecelRd() called");
    return 0;
}

/* Demangled: UdrEkf::heading_constrain(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17heading_constrainEd(void) {
    ALOGD("_ZN6UdrEkf17heading_constrainEd() called");
    return 0;
}

/* Demangled: MonitorDataRate::ini_ds_monitor() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate14ini_ds_monitorEv(void) {
    ALOGD("_ZN15MonitorDataRate14ini_ds_monitorEv() called");
    return 0;
}

/* Exported Object: UdrUpdTypeSelect::MuStateEnum::Name */
extern "C" __attribute__((visibility("default"))) void* _ZN16UdrUpdTypeSelect11MuStateEnum4NameE = NULL;

/* Demangled: VehBodOrient::VboGrp::get_buff_max_gad_var() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp20get_buff_max_gad_varEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp20get_buff_max_gad_varEv() called");
    return 0;
}

/* Demangled: PdrIgp::delay_buff_struct::~delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp17delay_buff_structD2Ev(void) {
    ALOGD("_ZN6PdrIgp17delay_buff_structD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::ekf_set_meas_time() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17ekf_set_meas_timeEv(void) {
    ALOGD("_ZN6SfSatt17ekf_set_meas_timeEv() called");
    return 0;
}

/* Demangled: normalize_rot_matrix(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z20normalize_rot_matrixR6Matrix(void) {
    ALOGD("_Z20normalize_rot_matrixR6Matrix() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::tune_alpha(CarAccelB::sub_kf_buff_struct const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct10tune_alphaEPKNS_18sub_kf_buff_structEPd(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct10tune_alphaEPKNS_18sub_kf_buff_structEPd() called");
    return 0;
}

/* Demangled: PdrEkf::replace_pdr2mnl_msg(sf2mnl_msg_struct*, double, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectii(void) {
    ALOGD("_ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectii() called");
    return 0;
}

/* Demangled: SfSatt::comp_gb_intensity() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17comp_gb_intensityEv(void) {
    ALOGD("_ZN6SfSatt17comp_gb_intensityEv() called");
    return 0;
}

/* Demangled: logically_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z15logically_equalddd(void) {
    ALOGD("_Z15logically_equalddd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::VboFakeStart() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStartC2Ev(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStartC2Ev() called");
    return 0;
}

/* Demangled: PdrEkf::update_prev_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf17update_prev_stateEv(void) {
    ALOGD("_ZN6PdrEkf17update_prev_stateEv() called");
    return 0;
}

/* Demangled: SfSatt::SfSatt(SfSatt::TURN_ON_STATE_STRUCT const&, SfSatt::TURN_ON_MEAS_STRUCT const&, SfSatt::EKF_TIME_CTRL_STRUCT const&, SfSatt::TEST_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSattC2ERKNS_20TURN_ON_STATE_STRUCTERKNS_19TURN_ON_MEAS_STRUCTERKNS_20EKF_TIME_CTRL_STRUCTERKNS_11TEST_STRUCTE(void) {
    ALOGD("_ZN6SfSattC2ERKNS_20TURN_ON_STATE_STRUCTERKNS_19TURN_ON_MEAS_STRUCTERKNS_20EKF_TIME_CTRL_STRUCTERKNS_11TEST_STRUCTE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: MonitorDataRate::~MonitorDataRate() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRateD1Ev(void) {
    ALOGD("_ZN15MonitorDataRateD1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::replace_udr2mnl_msg(sf2mnl_msg_struct*, double, int, int*, UdrUpdTypeSelect&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelect(void) {
    ALOGD("_ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelect() called");
    return 0;
}

/* Demangled: GnssAccelDecel::gad_buff_struct::gad_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel15gad_buff_structC1Ev(void) {
    ALOGD("_ZN14GnssAccelDecel15gad_buff_structC1Ev() called");
    return 0;
}

/* Demangled: PdrMheading::~PdrMheading() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheadingD1Ev(void) {
    ALOGD("_ZN11PdrMheadingD1Ev() called");
    return 0;
}

/* Demangled: omega2rates(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z11omega2ratesR6MatrixS0_(void) {
    ALOGD("_Z11omega2ratesR6MatrixS0_() called");
    return 0;
}

/* Demangled: SystemStateControl::check_and_upd_fine_cvb(UdrEkf&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl22check_and_upd_fine_cvbER6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl22check_and_upd_fine_cvbER6UdrEkf() called");
    return 0;
}

/* Demangled: Array3x3_Invert */
extern "C" __attribute__((visibility("default"))) int Array3x3_Invert(void) {
    ALOGD("Array3x3_Invert() called");
    return 0;
}

/* Demangled: PdrSgb::upd_max_min_w() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgb13upd_max_min_wEv(void) {
    ALOGD("_ZN6PdrSgb13upd_max_min_wEv() called");
    return 0;
}

/* Demangled: SfSatt::set_H() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt5set_HEv(void) {
    ALOGD("_ZN6SfSatt5set_HEv() called");
    return 0;
}

/* Demangled: SfSatt::set_ctrl() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt8set_ctrlEv(void) {
    ALOGD("_ZN6SfSatt8set_ctrlEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::upd_stable_stat() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias15upd_stable_statEv(void) {
    ALOGD("_ZN14SimpleGyroBias15upd_stable_statEv() called");
    return 0;
}

/* Demangled: SfSgb::copy_stable_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb14copy_stable_gbEv(void) {
    ALOGD("_ZN5SfSgb14copy_stable_gbEv() called");
    return 0;
}

/* Demangled: SfSatt::set_meas() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt8set_measEv(void) {
    ALOGD("_ZN6SfSatt8set_measEv() called");
    return 0;
}

/* Demangled: SystemStateControl::set_fine_cvb_from_sys_level(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl27set_fine_cvb_from_sys_levelENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl27set_fine_cvb_from_sys_levelENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: SystemStateControl::set_fine_cvb_from_ekf_sys_level(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl31set_fine_cvb_from_ekf_sys_levelENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl31set_fine_cvb_from_ekf_sys_levelENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: SfSgb::reset_sgb_upd_status() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb20reset_sgb_upd_statusEv(void) {
    ALOGD("_ZN5SfSgb20reset_sgb_upd_statusEv() called");
    return 0;
}

/* Demangled: Matrix::mAdd(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4mAddERS_S0_(void) {
    ALOGD("_ZN6Matrix4mAddERS_S0_() called");
    return 0;
}

/* Demangled: SfWmm::~SfWmm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmmD2Ev(void) {
    ALOGD("_ZN5SfWmmD2Ev() called");
    return 0;
}

/* Demangled: comp_cos_angle_diff(Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z19comp_cos_angle_diffRK6MatrixS1_(void) {
    ALOGD("_Z19comp_cos_angle_diffRK6MatrixS1_() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_highest_level(bool*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect17get_highest_levelEPbj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect17get_highest_levelEPbj() called");
    return 0;
}

/* Exported Object: state_gesture_show */
extern "C" __attribute__((visibility("default"))) void* state_gesture_show = NULL;

/* Demangled: PdrSgb::esti_static_gyro_bias(double, double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgb21esti_static_gyro_biasEdPKdd(void) {
    ALOGD("_ZN6PdrSgb21esti_static_gyro_biasEdPKdd() called");
    return 0;
}

/* Demangled: wgsxyz2ned(Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z10wgsxyz2nedR6MatrixS0_S0_(void) {
    ALOGD("_Z10wgsxyz2nedR6MatrixS0_S0_() called");
    return 0;
}

/* Demangled: Barometer::ini_baro_smoo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer13ini_baro_smooEv(void) {
    ALOGD("_ZN9Barometer13ini_baro_smooEv() called");
    return 0;
}

/* Demangled: UDR::UDR(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDRC1ERK12ConfigParams(void) {
    ALOGD("_ZN3UDRC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::UdrUpdTypeSelect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelectC2ERK12ConfigParams(void) {
    ALOGD("_ZN16UdrUpdTypeSelectC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: cut_to_4g */
extern "C" __attribute__((visibility("default"))) int cut_to_4g(void) {
    ALOGD("cut_to_4g() called");
    return 0;
}

/* Demangled: v3_predict_noise */
extern "C" __attribute__((visibility("default"))) int v3_predict_noise(void) {
    ALOGD("v3_predict_noise() called");
    return 0;
}

/* Exported Object: log_level */
extern "C" __attribute__((visibility("default"))) void* log_level = NULL;

/* Demangled: PDR::~PDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDRD2Ev(void) {
    ALOGD("_ZN3PDRD2Ev() called");
    return 0;
}

/* Demangled: SfLpf::safe_set_smooth_pack(SfLpf::para_struct const*, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf20safe_set_smooth_packEPKNS_11para_structEiRNS_12smoop_structERb(void) {
    ALOGD("_ZN5SfLpf20safe_set_smooth_packEPKNS_11para_structEiRNS_12smoop_structERb() called");
    return 0;
}

/* Demangled: SfSatt::set_Qk() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt6set_QkEv(void) {
    ALOGD("_ZN6SfSatt6set_QkEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::ini_for_static_gyro_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias24ini_for_static_gyro_biasEv(void) {
    ALOGD("_ZN14SimpleGyroBias24ini_for_static_gyro_biasEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_norm_w(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15comp_avg_norm_wEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15comp_avg_norm_wEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: FIR_LPF */
extern "C" __attribute__((visibility("default"))) int FIR_LPF(void) {
    ALOGD("FIR_LPF() called");
    return 0;
}

/* Demangled: DataProcess::sensor_delta_in_range(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess21sensor_delta_in_rangeEddd(void) {
    ALOGD("_ZN11DataProcess21sensor_delta_in_rangeEddd() called");
    return 0;
}

/* Demangled: Matrix::operator()(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixclEii(void) {
    ALOGD("_ZNK6MatrixclEii() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect19set_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void) {
    ALOGD("_ZN16UdrUpdTypeSelect19set_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: SfSatt::gen_sys_cov_matrix_gp_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt24gen_sys_cov_matrix_gp_gbEv(void) {
    ALOGD("_ZN6SfSatt24gen_sys_cov_matrix_gp_gbEv() called");
    return 0;
}

/* Demangled: skew_xyz(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z8skew_xyzRK6Matrix(void) {
    ALOGD("_Z8skew_xyzRK6Matrix() called");
    return 0;
}

/* Demangled: Matrix::operator-() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixngEv(void) {
    ALOGD("_ZNK6MatrixngEv() called");
    return 0;
}

/* Demangled: SfSatt::get_general_dyn_coef_matrix_dcm_gb(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt34get_general_dyn_coef_matrix_dcm_gbER6Matrix(void) {
    ALOGD("_ZN6SfSatt34get_general_dyn_coef_matrix_dcm_gbER6Matrix() called");
    return 0;
}

/* Exported Object: expect_car_accel */
extern "C" __attribute__((visibility("default"))) void* expect_car_accel = NULL;

/* Demangled: mpe_update_posture */
extern "C" __attribute__((visibility("default"))) int mpe_update_posture(void) {
    ALOGD("mpe_update_posture() called");
    return 0;
}

/* Demangled: PdrLpf::get_akm099xx_para_5hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf21get_akm099xx_para_5hzEv(void) {
    ALOGD("_ZN6PdrLpf21get_akm099xx_para_5hzEv() called");
    return 0;
}

/* Demangled: DataProcess::get_last_mems_ts() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess16get_last_mems_tsEv(void) {
    ALOGD("_ZN11DataProcess16get_last_mems_tsEv() called");
    return 0;
}

/* Demangled: SfIsm::~SfIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsmD1Ev(void) {
    ALOGD("_ZN5SfIsmD1Ev() called");
    return 0;
}

/* Demangled: is_all_not_zeros(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z16is_all_not_zerosRK6Matrix(void) {
    ALOGD("_Z16is_all_not_zerosRK6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::set_a2a(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_a2aER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_a2aER6Matrix() called");
    return 0;
}

/* Demangled: UdrLpf::set_akm099xx_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: UdrLpf::UdrLpf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpfC2ERK12ConfigParams(void) {
    ALOGD("_ZN6UdrLpfC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: SfLpf::check_icm40607_accel_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf33check_icm40607_accel_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf33check_icm40607_accel_dec_num_axisEi() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_less_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp19get_less_reset_flagEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp19get_less_reset_flagEv() called");
    return 0;
}

/* Demangled: _sf_destory_object */
extern "C" __attribute__((visibility("default"))) int _sf_destory_object(void) {
    ALOGD("_sf_destory_object() called");
    return 0;
}

/* Demangled: correct_rot_matrix(Matrix&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z18correct_rot_matrixR6MatrixRKS_(void) {
    ALOGD("_Z18correct_rot_matrixR6MatrixRKS_() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::sf_pattern_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17sf_pattern_structC1Ev(void) {
    ALOGD("_ZN9CarAccelB17sf_pattern_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::restore_all_info(sf_gnss_msg_struct const*, double const*, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16restore_all_infoEPK18sf_gnss_msg_structPKdRK6Matrix(void) {
    ALOGD("_ZN6UdrEkf16restore_all_infoEPK18sf_gnss_msg_structPKdRK6Matrix() called");
    return 0;
}

/* Demangled: Matrix::set_val(int const*, int const*, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7set_valEPKiS1_RKS_(void) {
    ALOGD("_ZN6Matrix7set_valEPKiS1_RKS_() called");
    return 0;
}

/* Demangled: SfWmm::MAG_SummationSpecial(SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm20MAG_SummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void) {
    ALOGD("_ZN5SfWmm20MAG_SummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE() called");
    return 0;
}

/* Demangled: ABAT_double */
extern "C" __attribute__((visibility("default"))) int ABAT_double(void) {
    ALOGD("ABAT_double() called");
    return 0;
}

/* Demangled: DataProcess::gnss_preprocess(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess15gnss_preprocessEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN11DataProcess15gnss_preprocessEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: Matrix::get_tot_size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix12get_tot_sizeEv(void) {
    ALOGD("_ZNK6Matrix12get_tot_sizeEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::get_dyn_gyro_bias(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias13AlterGyroBias17get_dyn_gyro_biasEi(void) {
    ALOGD("_ZNK14SimpleGyroBias13AlterGyroBias17get_dyn_gyro_biasEi() called");
    return 0;
}

/* Demangled: PdrEkf::PdrEkf(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkfC1ERK12ConfigParams(void) {
    ALOGD("_ZN6PdrEkfC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: SfSatt::upd_jacobian_for_p(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18upd_jacobian_for_pERK6Matrix(void) {
    ALOGD("_ZN6SfSatt18upd_jacobian_for_pERK6Matrix() called");
    return 0;
}

/* Demangled: Barometer::Barometer(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9BarometerC1ERK12ConfigParams(void) {
    ALOGD("_ZN9BarometerC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: UdrEkf::nhc_measurement_update_2d(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25nhc_measurement_update_2dEijj(void) {
    ALOGD("_ZN6UdrEkf25nhc_measurement_update_2dEijj() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::group_by_hist(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp13group_by_histEPd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp13group_by_histEPd() called");
    return 0;
}

/* Demangled: clear_one_axis_count */
extern "C" __attribute__((visibility("default"))) int clear_one_axis_count(void) {
    ALOGD("clear_one_axis_count() called");
    return 0;
}

/* Demangled: PdrMotionDetect::PdrMotionDetect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetectC1ERK12ConfigParams(void) {
    ALOGD("_ZN15PdrMotionDetectC1ERK12ConfigParams() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: CarAccelB::SubKF::set_t(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF5set_tEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF5set_tEd() called");
    return 0;
}

/* Demangled: SimpleGyroBias::SimpleGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBiasC1Ev(void) {
    ALOGD("_ZN14SimpleGyroBiasC1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_gad_var(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess16comp_avg_gad_varEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess16comp_avg_gad_varEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGdcm3::reset_gdcm3() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient8VboGdcm311reset_gdcm3Ev(void) {
    ALOGD("_ZN12VehBodOrient8VboGdcm311reset_gdcm3Ev() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::summation(std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel9summationERKNSt3__16vectorINS2_IdNS1_9allocatorIdEEEENS3_IS5_EEEE(void) {
    ALOGD("_ZN9Pedometer7SsModel9summationERKNSt3__16vectorINS2_IdNS1_9allocatorIdEEEENS3_IS5_EEEE() called");
    return 0;
}

/* Demangled: SfSatt::comp_dcm_intensity() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt18comp_dcm_intensityEv(void) {
    ALOGD("_ZN6SfSatt18comp_dcm_intensityEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_vel_with_lever_arm(sf_ned_struct, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25update_vel_with_lever_armE13sf_ned_structR6Matrix(void) {
    ALOGD("_ZN6UdrEkf25update_vel_with_lever_armE13sf_ned_structR6Matrix() called");
    return 0;
}

/* Exported Object: dr_variance_1 */
extern "C" __attribute__((visibility("default"))) void* dr_variance_1 = NULL;

/* Demangled: MonitorDataRate::MonitorDataRate(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRateC2ERK12ConfigParams(void) {
    ALOGD("_ZN15MonitorDataRateC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: UdrEkf::get_yaw_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12get_yaw_initEv(void) {
    ALOGD("_ZN6UdrEkf12get_yaw_initEv() called");
    return 0;
}

/* Demangled: Watchdog::state_dynamic_check(UdrEkf*, sf_mems_msg_struct*, Watchdog::DynamicEnum::DynamicType) */
extern "C" __attribute__((visibility("default"))) int _ZN8Watchdog19state_dynamic_checkEP6UdrEkfP18sf_mems_msg_structNS_11DynamicEnum11DynamicTypeE(void) {
    ALOGD("_ZN8Watchdog19state_dynamic_checkEP6UdrEkfP18sf_mems_msg_structNS_11DynamicEnum11DynamicTypeE() called");
    return 0;
}

/* Demangled: PdrGb::ini_gbuff() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGb9ini_gbuffEv(void) {
    ALOGD("_ZN5PdrGb9ini_gbuffEv() called");
    return 0;
}

/* Demangled: PdrSgb::~PdrSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgbD2Ev(void) {
    ALOGD("_ZN6PdrSgbD2Ev() called");
    return 0;
}

/* Demangled: PdrMheading::driver_calib_struct::driver_calib_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading19driver_calib_structC2Ev(void) {
    ALOGD("_ZN11PdrMheading19driver_calib_structC2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::modify_P(UdrEkf::PEnum::PType) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8modify_PENS_5PEnum5PTypeE(void) {
    ALOGD("_ZN6UdrEkf8modify_PENS_5PEnum5PTypeE() called");
    return 0;
}

/* Demangled: SfIsm::comp_sm_iqr(double const* const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11comp_sm_iqrEPKPKdi(void) {
    ALOGD("_ZN5SfIsm11comp_sm_iqrEPKPKdi() called");
    return 0;
}

/* Demangled: UdrEkf::set_state(double const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf9set_stateEPKdii(void) {
    ALOGD("_ZN6UdrEkf9set_stateEPKdii() called");
    return 0;
}

/* Demangled: UDR::set_pvt_ts(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR10set_pvt_tsEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR10set_pvt_tsEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::get_ini_less_out() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient16get_ini_less_outEv(void) {
    ALOGD("_ZN12VehBodOrient16get_ini_less_outEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::is_pseudo_continuity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp20is_pseudo_continuityEv(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp20is_pseudo_continuityEv() called");
    return 0;
}

/* Exported Object: global_count */
extern "C" __attribute__((visibility("default"))) void* global_count = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: PdrLpf::get_adv_mag_5hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf15get_adv_mag_5hzEv(void) {
    ALOGD("_ZN6PdrLpf15get_adv_mag_5hzEv() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: PdrIgp::~PdrIgp() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgpD1Ev(void) {
    ALOGD("_ZN6PdrIgpD1Ev() called");
    return 0;
}

/* Demangled: PdrIsm::~PdrIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsmD0Ev(void) {
    ALOGD("_ZN6PdrIsmD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: SfSatt::imu_meas_struct::imu_meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15imu_meas_structC1Ev(void) {
    ALOGD("_ZN6SfSatt15imu_meas_structC1Ev() called");
    return 0;
}

/* Demangled: SfGb::~SfGb() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGbD1Ev(void) {
    ALOGD("_ZN4SfGbD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_vel_auy(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf20get_adv_gnss_vel_auyEPd(void) {
    ALOGD("_ZNK5SfLpf20get_adv_gnss_vel_auyEPd() called");
    return 0;
}

/* Demangled: Integration::Integration(sf_user_param_struct*, void (*)(sf_pvt_msg_struct*), void (*)(char*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN11IntegrationC2EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE(void) {
    ALOGD("_ZN11IntegrationC2EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE() called");
    return 0;
}

/* Demangled: PdrSatt::PdrSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSattC1Ev(void) {
    ALOGD("_ZN7PdrSattC1Ev() called");
    return 0;
}

/* Demangled: SfLpf::check_icm40607_gyro_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf32check_icm40607_gyro_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf32check_icm40607_gyro_dec_num_axisEi() called");
    return 0;
}

/* Demangled: ConfigParams::mapping_acc_id(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12ConfigParams14mapping_acc_idEPc(void) {
    ALOGD("_ZN12ConfigParams14mapping_acc_idEPc() called");
    return 0;
}

/* Demangled: SystemStateControl::upd_level_if_high_drpy(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl22upd_level_if_high_drpyERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl22upd_level_if_high_drpyERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE() called");
    return 0;
}

/* Demangled: Integration::sf_read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration23sf_read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void) {
    ALOGD("_ZN11Integration23sf_read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: mpe_gyro_filter */
extern "C" __attribute__((visibility("default"))) int mpe_gyro_filter(void) {
    ALOGD("mpe_gyro_filter() called");
    return 0;
}

/* Demangled: MonitorDataRate::get_sensor_available_time(sf_mems_msg_struct const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate25get_sensor_available_timeEPK18sf_mems_msg_structj(void) {
    ALOGD("_ZN15MonitorDataRate25get_sensor_available_timeEPK18sf_mems_msg_structj() called");
    return 0;
}

/* Demangled: InertialAtt::est_device_fix(sf_mems_msg_struct*, bool, UdrStaticDetect&) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt14est_device_fixEP18sf_mems_msg_structbR15UdrStaticDetect(void) {
    ALOGD("_ZN11InertialAtt14est_device_fixEP18sf_mems_msg_structbR15UdrStaticDetect() called");
    return 0;
}

/* Demangled: UdrLpf::get_icm40607_gyro_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27get_icm40607_gyro_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf27get_icm40607_gyro_para_50hzEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::alloc_grp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp9alloc_grpEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp9alloc_grpEv() called");
    return 0;
}

/* Exported Object: gyro_out_of_range */
extern "C" __attribute__((visibility("default"))) void* gyro_out_of_range = NULL;

/* Demangled: DataProcess::batch_handle_irregular_gnss() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess27batch_handle_irregular_gnssEv(void) {
    ALOGD("_ZN11DataProcess27batch_handle_irregular_gnssEv() called");
    return 0;
}

/* Demangled: SfIsm::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11meas_structC1Ev(void) {
    ALOGD("_ZN5SfIsm11meas_structC1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::get_feedback_flag() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf17get_feedback_flagEv(void) {
    ALOGD("_ZNK6UdrEkf17get_feedback_flagEv() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_substitute_ekf_cvb(VehBodOrient::less_output_struct const&, UdrUpdTypeSelect&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl25coarse_substitute_ekf_cvbERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelect(void) {
    ALOGD("_ZN18SystemStateControl25coarse_substitute_ekf_cvbERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelect() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_good_gnss_t() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect15get_good_gnss_tEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect15get_good_gnss_tEv() called");
    return 0;
}

/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetectD2Ev(void) {
    ALOGD("_ZN15PdrMotionDetectD2Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_scenario_type() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect17get_scenario_typeEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect17get_scenario_typeEv() called");
    return 0;
}

/* Demangled: PdrGb::~PdrGb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGbD2Ev(void) {
    ALOGD("_ZN5PdrGbD2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_AllocateModelMemory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm23MAG_AllocateModelMemoryEi(void) {
    ALOGD("_ZN5SfWmm23MAG_AllocateModelMemoryEi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_sm(InertialStaticMove::ManeuverEnum::ManeuverType) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF6set_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void) {
    ALOGD("_ZN9CarAccelB5SubKF6set_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE() called");
    return 0;
}

/* Demangled: SystemStateControl::check_cvb_dir_struct::check_cvb_dir_struct(SystemStateControl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_structC2ERKS_(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_structC2ERKS_() called");
    return 0;
}

/* Demangled: is_pedometer_noise */
extern "C" __attribute__((visibility("default"))) int is_pedometer_noise(void) {
    ALOGD("is_pedometer_noise() called");
    return 0;
}

/* Demangled: ConfigParams::mapping_mag_id(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12ConfigParams14mapping_mag_idEPc(void) {
    ALOGD("_ZN12ConfigParams14mapping_mag_idEPc() called");
    return 0;
}

/* Demangled: SfWmm::MAG_TimelyModifyMagneticModel(SfWmm::MAGtype_Date const&, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_MagneticModel*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm29MAG_TimelyModifyMagneticModelERKNS_12MAGtype_DateEPNS_21MAGtype_MagneticModelES4_(void) {
    ALOGD("_ZN5SfWmm29MAG_TimelyModifyMagneticModelERKNS_12MAGtype_DateEPNS_21MAGtype_MagneticModelES4_() called");
    return 0;
}

/* Demangled: UDR::~UDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDRD1Ev(void) {
    ALOGD("_ZN3UDRD1Ev() called");
    return 0;
}

/* Demangled: InertialAtt::est_roll_pitch(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt14est_roll_pitchEPdS0_(void) {
    ALOGD("_ZN11InertialAtt14est_roll_pitchEPdS0_() called");
    return 0;
}

/* Demangled: UdrLpf::set_lsm6dsm_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: UdrLpf::set_lsm6dsm_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: PdrIgp::upd_dbuff(double, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp9upd_dbuffEdPKdS1_(void) {
    ALOGD("_ZN6PdrIgp9upd_dbuffEdPKdS1_() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GetTransverseMercator(SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_UTMParameters*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm25MAG_GetTransverseMercatorERKNS_21MAGtype_CoordGeodeticEPNS_21MAGtype_UTMParametersE(void) {
    ALOGD("_ZN5SfWmm25MAG_GetTransverseMercatorERKNS_21MAGtype_CoordGeodeticEPNS_21MAGtype_UTMParametersE() called");
    return 0;
}

/* Demangled: PdrSatt::reset_out_status() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt16reset_out_statusEv(void) {
    ALOGD("_ZN7PdrSatt16reset_out_statusEv() called");
    return 0;
}

/* Demangled: Matrix::is_col_vector() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix13is_col_vectorEv(void) {
    ALOGD("_ZNK6Matrix13is_col_vectorEv() called");
    return 0;
}

/* Demangled: cos_similarity_vec3_p(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _Z21cos_similarity_vec3_pPKdS0_(void) {
    ALOGD("_Z21cos_similarity_vec3_pPKdS0_() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::rauch_tung_striebel_smoother(double, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts28rauch_tung_striebel_smootherEdPKd(void) {
    ALOGD("_ZN9CarAccelB3Rts28rauch_tung_striebel_smootherEdPKd() called");
    return 0;
}

/* Demangled: SystemStateControl::coarse_dir_struct::comp_best_hist_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct18comp_best_hist_cvbEv(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct18comp_best_hist_cvbEv() called");
    return 0;
}

/* Demangled: UdrEkf::set_v2v(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_v2vER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_v2vER6Matrix() called");
    return 0;
}

/* Demangled: UdrEkf::set_sf2sf(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf9set_sf2sfER6Matrix(void) {
    ALOGD("_ZN6UdrEkf9set_sf2sfER6Matrix() called");
    return 0;
}

/* Demangled: GnssAccelDecel::reset_ava_ad_info() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel17reset_ava_ad_infoEv(void) {
    ALOGD("_ZN14GnssAccelDecel17reset_ava_ad_infoEv() called");
    return 0;
}

/* Demangled: InertialStaticMove::~InertialStaticMove() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMoveD2Ev(void) {
    ALOGD("_ZN18InertialStaticMoveD2Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::reinit_mu_level() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect15reinit_mu_levelEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect15reinit_mu_levelEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_head_var(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF12set_head_varEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF12set_head_varEd() called");
    return 0;
}

/* Demangled: UdrEkf::replace_partial_udr2mnl_msg(sf2mnl_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf27replace_partial_udr2mnl_msgEP17sf2mnl_msg_struct(void) {
    ALOGD("_ZN6UdrEkf27replace_partial_udr2mnl_msgEP17sf2mnl_msg_struct() called");
    return 0;
}

/* Exported Object: vtable for UDR */
extern "C" __attribute__((visibility("default"))) void* _ZTV3UDR = NULL;

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_dad() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp16get_buff_avg_dadEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp16get_buff_avg_dadEv() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::reset_delay_buff_to_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect23reset_delay_buff_to_cvbEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect23reset_delay_buff_to_cvbEv() called");
    return 0;
}

/* Demangled: PdrEkf::prediction(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf10predictionEd(void) {
    ALOGD("_ZN6PdrEkf10predictionEd() called");
    return 0;
}

/* Demangled: PdrMheading::build_rotation_matrix_n_to_b() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading28build_rotation_matrix_n_to_bEv(void) {
    ALOGD("_ZN11PdrMheading28build_rotation_matrix_n_to_bEv() called");
    return 0;
}

/* Demangled: Matrix::mSparseMult(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix11mSparseMultERS_S0_(void) {
    ALOGD("_ZN6Matrix11mSparseMultERS_S0_() called");
    return 0;
}

/* Demangled: upd_qua(double*, Matrix&, double) */
extern "C" __attribute__((visibility("default"))) int _Z7upd_quaPdR6Matrixd(void) {
    ALOGD("_Z7upd_quaPdR6Matrixd() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_Date::MAGtype_Date() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm12MAGtype_DateC1Ev(void) {
    ALOGD("_ZN5SfWmm12MAGtype_DateC1Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_dyn_gb_ready() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias15is_dyn_gb_readyEv(void) {
    ALOGD("_ZNK14SimpleGyroBias15is_dyn_gb_readyEv() called");
    return 0;
}

/* Demangled: SfGb::gbuff_struct::gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb12gbuff_structC1Ev(void) {
    ALOGD("_ZN4SfGb12gbuff_structC1Ev() called");
    return 0;
}

/* Demangled: Integration::Integration(sf_user_param_struct*, void (*)(sf_pvt_msg_struct*), void (*)(char*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN11IntegrationC1EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE(void) {
    ALOGD("_ZN11IntegrationC1EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE() called");
    return 0;
}

/* Demangled: reinit_counters */
extern "C" __attribute__((visibility("default"))) int reinit_counters(void) {
    ALOGD("reinit_counters() called");
    return 0;
}

/* Demangled: PdrEkf::get_gnss_fb_code() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf16get_gnss_fb_codeEv(void) {
    ALOGD("_ZN6PdrEkf16get_gnss_fb_codeEv() called");
    return 0;
}

/* Demangled: PdrSgb::ini_sm_results() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgb14ini_sm_resultsEv(void) {
    ALOGD("_ZN6PdrSgb14ini_sm_resultsEv() called");
    return 0;
}

/* Exported Object: absolute_height */
extern "C" __attribute__((visibility("default"))) void* absolute_height = NULL;

/* Demangled: mpe_get_dr_entry */
extern "C" __attribute__((visibility("default"))) int mpe_get_dr_entry(void) {
    ALOGD("mpe_get_dr_entry() called");
    return 0;
}

/* Demangled: Matrix::set_tot_size_val(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix16set_tot_size_valEPd(void) {
    ALOGD("_ZN6Matrix16set_tot_size_valEPd() called");
    return 0;
}

/* Demangled: SfSatt::start_ekf_struct::start_ekf_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16start_ekf_structC2Ev(void) {
    ALOGD("_ZN6SfSatt16start_ekf_structC2Ev() called");
    return 0;
}

/* Demangled: UDR::set_temp_comp_flag(sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR18set_temp_comp_flagEP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR18set_temp_comp_flagEP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::alloc_fs() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart8alloc_fsEv(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart8alloc_fsEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_symmetric_qq(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess17comp_symmetric_qqEPdS1_(void) {
    ALOGD("_ZN12VehBodOrient7VboLess17comp_symmetric_qqEPdS1_() called");
    return 0;
}

/* Demangled: wgsxyz2enu_array(double const*, double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z16wgsxyz2enu_arrayPKdS0_Pd(void) {
    ALOGD("_Z16wgsxyz2enu_arrayPKdS0_Pd() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: CarAccelB::SubKF::comp_state_transition_matrix(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF28comp_state_transition_matrixER6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF28comp_state_transition_matrixER6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::VboFakeStart::need_quick_start() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient12VboFakeStart16need_quick_startEv(void) {
    ALOGD("_ZN12VehBodOrient12VboFakeStart16need_quick_startEv() called");
    return 0;
}

/* Exported Object: acc_last_gps_vel */
extern "C" __attribute__((visibility("default"))) void* acc_last_gps_vel = NULL;

/* Demangled: Matrix::operator()(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixclEi(void) {
    ALOGD("_ZNK6MatrixclEi() called");
    return 0;
}

/* Demangled: SfSatt::state_para_struct::state_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17state_para_structC2Ev(void) {
    ALOGD("_ZN6SfSatt17state_para_structC2Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAGtype_CoordGeodetic::MAGtype_CoordGeodetic() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAGtype_CoordGeodeticC2Ev(void) {
    ALOGD("_ZN5SfWmm21MAGtype_CoordGeodeticC2Ev() called");
    return 0;
}

/* Demangled: almost_less_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z17almost_less_equalddd(void) {
    ALOGD("_Z17almost_less_equalddd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_gad_var(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF11set_gad_varEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF11set_gad_varEd() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::reset_model() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel11reset_modelEv(void) {
    ALOGD("_ZN9Pedometer7SsModel11reset_modelEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: SfWmm::MAG_GetUTMParameters(double, double, int*, char*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm20MAG_GetUTMParametersEddPiPcPd(void) {
    ALOGD("_ZN5SfWmm20MAG_GetUTMParametersEddPiPcPd() called");
    return 0;
}

/* Demangled: earthrate(double, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z9earthratedR6Matrix(void) {
    ALOGD("_Z9earthratedR6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_thresh(double const*, int, double&, double&, double&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess11comp_threshEPKdiRdS3_S3_(void) {
    ALOGD("_ZN12VehBodOrient7VboLess11comp_threshEPKdiRdS3_S3_() called");
    return 0;
}

/* Demangled: InterpMems::~InterpMems() */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMemsD1Ev(void) {
    ALOGD("_ZN10InterpMemsD1Ev() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_count() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_gnss_countEv(void) {
    ALOGD("_ZN11DataProcess14get_gnss_countEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::Rts(CarAccelB::SubKF&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3RtsC1ERNS_5SubKFE(void) {
    ALOGD("_ZN9CarAccelB3RtsC1ERNS_5SubKFE() called");
    return 0;
}

/* Demangled: SfLpf::adv_filt_sensors(MonitorDataRate const&, CloneNearGnss&, InterpMems&, sf_mems_msg_struct*, sf_gnss_msg_struct*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf16adv_filt_sensorsERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN5SfLpf16adv_filt_sensorsERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_mag_temp(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf16get_dec_mag_tempEPd(void) {
    ALOGD("_ZNK5SfLpf16get_dec_mag_tempEPd() called");
    return 0;
}

/* Demangled: SfStaticDetect::~SfStaticDetect() */
extern "C" __attribute__((visibility("default"))) int _ZN14SfStaticDetectD1Ev(void) {
    ALOGD("_ZN14SfStaticDetectD1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_state_covariance_matrix(Matrix&, Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF27upd_state_covariance_matrixER6MatrixS2_S2_S2_(void) {
    ALOGD("_ZN9CarAccelB5SubKF27upd_state_covariance_matrixER6MatrixS2_S2_S2_() called");
    return 0;
}

/* Demangled: mpe_dr_re_initialize */
extern "C" __attribute__((visibility("default"))) int mpe_dr_re_initialize(void) {
    ALOGD("mpe_dr_re_initialize() called");
    return 0;
}

/* Demangled: mpe_get_static_bias */
extern "C" __attribute__((visibility("default"))) int mpe_get_static_bias(void) {
    ALOGD("mpe_get_static_bias() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: DataProcess::get_last_gnss_ts() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess16get_last_gnss_tsEv(void) {
    ALOGD("_ZN11DataProcess16get_last_gnss_tsEv() called");
    return 0;
}

/* Demangled: InertialStaticMove::classify_static_move() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove20classify_static_moveEv(void) {
    ALOGD("_ZN18InertialStaticMove20classify_static_moveEv() called");
    return 0;
}

/* Demangled: PdrLpf::set_bmi160_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: MonitorDataRate::dr_track_struct::~dr_track_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate15dr_track_structD2Ev(void) {
    ALOGD("_ZN15MonitorDataRate15dr_track_structD2Ev() called");
    return 0;
}

/* Demangled: SfWmm::ATanH(double) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm5ATanHEd(void) {
    ALOGD("_ZN5SfWmm5ATanHEd() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_sm_win_info(double*, double*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove15get_sm_win_infoEPdS0_Pi(void) {
    ALOGD("_ZN18InertialStaticMove15get_sm_win_infoEPdS0_Pi() called");
    return 0;
}

/* Demangled: UdrEkf::nhc_pos_constraint_measurement_update() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf37nhc_pos_constraint_measurement_updateEv(void) {
    ALOGD("_ZN6UdrEkf37nhc_pos_constraint_measurement_updateEv() called");
    return 0;
}

/* Demangled: PdrMheading::set_driver_calib(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16set_driver_calibEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN11PdrMheading16set_driver_calibEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: SfWmm::MAG_GetDecimalTime(double, int, SfWmm::MAGtype_MagneticModel const*, SfWmm::MAGtype_Date*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm18MAG_GetDecimalTimeEdiPKNS_21MAGtype_MagneticModelEPNS_12MAGtype_DateE(void) {
    ALOGD("_ZN5SfWmm18MAG_GetDecimalTimeEdiPKNS_21MAGtype_MagneticModelEPNS_12MAGtype_DateE() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorVel::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorVel5R_COVE = NULL;

/* Demangled: UdrLpf::get_bmi160_gyro_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26get_bmi160_gyro_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf26get_bmi160_gyro_para_200hzEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: DataProcess::get_gnss_loc(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess12get_gnss_locEi(void) {
    ALOGD("_ZN11DataProcess12get_gnss_locEi() called");
    return 0;
}

/* Demangled: SfSgb::stat_struct::stat_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb11stat_structC1Ev(void) {
    ALOGD("_ZN5SfSgb11stat_structC1Ev() called");
    return 0;
}

/* Demangled: GnssAccelDecel::set_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel9set_parasEv(void) {
    ALOGD("_ZN14GnssAccelDecel9set_parasEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::AlterGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBiasC2Ev(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBiasC2Ev() called");
    return 0;
}

/* Exported Object: worker */
extern "C" __attribute__((visibility("default"))) void* worker = NULL;

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: PDR::PDR(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3PDRC1ERK12ConfigParams(void) {
    ALOGD("_ZN3PDRC1ERK12ConfigParams() called");
    return 0;
}

/* Exported Object: ignore_err_msg_flag */
extern "C" __attribute__((visibility("default"))) void* ignore_err_msg_flag = NULL;

/* Demangled: PdrSatt::avg_gp_struct::avg_gp_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt13avg_gp_structC2Ev(void) {
    ALOGD("_ZN7PdrSatt13avg_gp_structC2Ev() called");
    return 0;
}

/* Demangled: InertialStaticMove::comp_sm_iqr(double**, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11comp_sm_iqrEPPdi(void) {
    ALOGD("_ZN18InertialStaticMove11comp_sm_iqrEPPdi() called");
    return 0;
}

/* Demangled: CloneNearGnss::CloneNearGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnssC2Ev(void) {
    ALOGD("_ZN13CloneNearGnssC2Ev() called");
    return 0;
}

/* Demangled: DataProcess::DataProcess(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcessC1ERK12ConfigParams(void) {
    ALOGD("_ZN11DataProcessC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: open_log_file(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z13open_log_filePKc(void) {
    ALOGD("_Z13open_log_filePKc() called");
    return 0;
}

/* Demangled: UdrEkf::ekf_gb_measurement_update() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25ekf_gb_measurement_updateEv(void) {
    ALOGD("_ZN6UdrEkf25ekf_gb_measurement_updateEv() called");
    return 0;
}

/* Demangled: SystemStateControl::ekf_cvb_to_check_sys_fine_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl29ekf_cvb_to_check_sys_fine_cvbEv(void) {
    ALOGD("_ZN18SystemStateControl29ekf_cvb_to_check_sys_fine_cvbEv() called");
    return 0;
}

/* Demangled: MonitorDataRate::is_mag_downsampling_to_tar_dr(mpe::ModeEnum::ModeType) const */
extern "C" __attribute__((visibility("default"))) int _ZNK15MonitorDataRate29is_mag_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE(void) {
    ALOGD("_ZNK15MonitorDataRate29is_mag_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE() called");
    return 0;
}

/* Demangled: UdrEkf::update_pos_with_lever_arm(sf_llh_struct, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25update_pos_with_lever_armE13sf_llh_structR6MatrixS2_(void) {
    ALOGD("_ZN6UdrEkf25update_pos_with_lever_armE13sf_llh_structR6MatrixS2_() called");
    return 0;
}

/* Demangled: PdrIgp::delay_buff_struct::delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp17delay_buff_structC1Ev(void) {
    ALOGD("_ZN6PdrIgp17delay_buff_structC1Ev() called");
    return 0;
}

/* Demangled: meter_to_knots(double) */
extern "C" __attribute__((visibility("default"))) int _Z14meter_to_knotsd(void) {
    ALOGD("_Z14meter_to_knotsd() called");
    return 0;
}

/* Exported Object: gps_ls_heading */
extern "C" __attribute__((visibility("default"))) void* gps_ls_heading = NULL;

/* Demangled: qua2eul(double*, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z7qua2eulPdR6Matrix(void) {
    ALOGD("_Z7qua2eulPdR6Matrix() called");
    return 0;
}

/* Demangled: SfSatt::comp_gp_intensity() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17comp_gp_intensityEv(void) {
    ALOGD("_ZN6SfSatt17comp_gp_intensityEv() called");
    return 0;
}

/* Demangled: CarAccelB::~CarAccelB() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelBD1Ev(void) {
    ALOGD("_ZN9CarAccelBD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::upd_ext_feas(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt12upd_ext_feasERK6Matrix(void) {
    ALOGD("_ZN6SfSatt12upd_ext_feasERK6Matrix() called");
    return 0;
}

/* Demangled: SfLpf::make_dec_available_to_false_if_not_model(sensor::SensorIDEnum::SensorIDType) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf40make_dec_available_to_false_if_not_modelEN6sensor12SensorIDEnum12SensorIDTypeE(void) {
    ALOGD("_ZN5SfLpf40make_dec_available_to_false_if_not_modelEN6sensor12SensorIDEnum12SensorIDTypeE() called");
    return 0;
}

/* Demangled: PdrSatt::upd_out() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt7upd_outEv(void) {
    ALOGD("_ZN7PdrSatt7upd_outEv() called");
    return 0;
}

/* Demangled: Matrix::SubMatrix::operator=(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix9SubMatrixaSERKS_(void) {
    ALOGD("_ZN6Matrix9SubMatrixaSERKS_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: InterpMems::reassign_mems_time(sf_mems_msg_struct*, sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10InterpMems18reassign_mems_timeEP18sf_mems_msg_structPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN10InterpMems18reassign_mems_timeEP18sf_mems_msg_structPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfSatt::set_Ad() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt6set_AdEv(void) {
    ALOGD("_ZN6SfSatt6set_AdEv() called");
    return 0;
}

/* Demangled: Barometer::get_bs_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer17get_bs_reset_flagEv(void) {
    ALOGD("_ZN9Barometer17get_bs_reset_flagEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_lsm6dsm_accel_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27get_lsm6dsm_accel_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf27get_lsm6dsm_accel_para_50hzEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::mark_gad_label(int*, VehBodOrient::VboFbEnum::FbType*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp14mark_gad_labelEPiPNS_9VboFbEnum6FbTypeE(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp14mark_gad_labelEPiPNS_9VboFbEnum6FbTypeE() called");
    return 0;
}

/* Demangled: SfLpf::check_akm099xx_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf27check_akm099xx_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf27check_akm099xx_dec_num_axisEi() called");
    return 0;
}

/* Demangled: SfSatt::test_pred_x_gp_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17test_pred_x_gp_gbEv(void) {
    ALOGD("_ZN6SfSatt17test_pred_x_gp_gbEv() called");
    return 0;
}

/* Demangled: SfWmm::SfWmm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmmC1Ev(void) {
    ALOGD("_ZN5SfWmmC1Ev() called");
    return 0;
}

/* Demangled: SfSgb::tol_struct::tol_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb10tol_structC2Ev(void) {
    ALOGD("_ZN5SfSgb10tol_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::out_imu_struct::out_imu_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt14out_imu_structC2Ev(void) {
    ALOGD("_ZN6SfSatt14out_imu_structC2Ev() called");
    return 0;
}

/* Demangled: UdrEkf::predict_G_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16predict_G_matrixEv(void) {
    ALOGD("_ZN6UdrEkf16predict_G_matrixEv() called");
    return 0;
}

/* Demangled: UdrEkf::pos_measurement_update(sf_llh_struct const&, double*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22pos_measurement_updateERK13sf_llh_structPdjj(void) {
    ALOGD("_ZN6UdrEkf22pos_measurement_updateERK13sf_llh_structPdjj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_() called");
    return 0;
}

/* Demangled: SystemStateControl::rotate_cvb_to_update_sys_fine_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl33rotate_cvb_to_update_sys_fine_cvbEv(void) {
    ALOGD("_ZN18SystemStateControl33rotate_cvb_to_update_sys_fine_cvbEv() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Exported Object: ATT_SMA_acc */
extern "C" __attribute__((visibility("default"))) void* ATT_SMA_acc = NULL;

/* Demangled: Pedometer::SsModel::average(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel7averageERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void) {
    ALOGD("_ZN9Pedometer7SsModel7averageERKNSt3__16vectorIdNS1_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: SfSatt::set_ekf_z() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt9set_ekf_zEv(void) {
    ALOGD("_ZN6SfSatt9set_ekf_zEv() called");
    return 0;
}

/* Demangled: SystemStateControl::check_cvb_dir_struct::rotate_cvb_yaw_dir(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl20check_cvb_dir_struct18rotate_cvb_yaw_dirERK6Matrix(void) {
    ALOGD("_ZN18SystemStateControl20check_cvb_dir_struct18rotate_cvb_yaw_dirERK6Matrix() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: SfSgb::SfSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgbC2Ev(void) {
    ALOGD("_ZN5SfSgbC2Ev() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::ini_reforward_filt() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts18ini_reforward_filtEv(void) {
    ALOGD("_ZN9CarAccelB3Rts18ini_reforward_filtEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::smoo_proj_vec_n_to_v(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF20smoo_proj_vec_n_to_vER6MatrixS2_(void) {
    ALOGD("_ZN9CarAccelB5SubKF20smoo_proj_vec_n_to_vER6MatrixS2_() called");
    return 0;
}

/* Demangled: UDR::set_pvt_from_ekf(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR16set_pvt_from_ekfEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR16set_pvt_from_ekfEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: UdrLpf::get_bmi160_accel_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf27get_bmi160_accel_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf27get_bmi160_accel_para_200hzEv() called");
    return 0;
}

/* Exported Object: acc_curr_mean_pitch */
extern "C" __attribute__((visibility("default"))) void* acc_curr_mean_pitch = NULL;

/* Demangled: mpe_re_initialize */
extern "C" __attribute__((visibility("default"))) int mpe_re_initialize(void) {
    ALOGD("mpe_re_initialize() called");
    return 0;
}

/* Demangled: SfGb::preprocessing(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGb13preprocessingEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN4SfGb13preprocessingEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: close_log_file() */
extern "C" __attribute__((visibility("default"))) int _Z14close_log_filev(void) {
    ALOGD("_Z14close_log_filev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_var_mag_ac() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF14get_var_mag_acEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF14get_var_mag_acEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::get_gad_win_info(double*, double*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel16get_gad_win_infoEPdS0_Pi(void) {
    ALOGD("_ZN14GnssAccelDecel16get_gad_win_infoEPdS0_Pi() called");
    return 0;
}

/* Demangled: PdrEkf::get_K() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf5get_KEv(void) {
    ALOGD("_ZN6PdrEkf5get_KEv() called");
    return 0;
}

/* Demangled: PdrMheading::dyaw_nv_v_struct::dyaw_nv_v_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheading16dyaw_nv_v_structC1Ev(void) {
    ALOGD("_ZN11PdrMheading16dyaw_nv_v_structC1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::upd_kf_buff_t(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB13upd_kf_buff_tEd(void) {
    ALOGD("_ZN9CarAccelB13upd_kf_buff_tEd() called");
    return 0;
}

/* Demangled: UdrEkf::init_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf11init_matrixEv(void) {
    ALOGD("_ZN6UdrEkf11init_matrixEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_lsm6dsm_gyro_para_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf26get_lsm6dsm_gyro_para_50hzEv(void) {
    ALOGD("_ZN6UdrLpf26get_lsm6dsm_gyro_para_50hzEv() called");
    return 0;
}

/* Demangled: DataProcess::get_mems_r_ptr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14get_mems_r_ptrEi(void) {
    ALOGD("_ZN11DataProcess14get_mems_r_ptrEi() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC1EiiPKd(void) {
    ALOGD("_ZN6MatrixC1EiiPKd() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::SensorPos::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9SensorPos5R_COVE = NULL;

/* Demangled: PdrEkf::mg_heading_diff_struct::~mg_heading_diff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf22mg_heading_diff_structD2Ev(void) {
    ALOGD("_ZN6PdrEkf22mg_heading_diff_structD2Ev() called");
    return 0;
}

/* Demangled: SfLpf::set_adv_default_gnss_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf29set_adv_default_gnss_lpf_paraEv(void) {
    ALOGD("_ZN5SfLpf29set_adv_default_gnss_lpf_paraEv() called");
    return 0;
}

/* Demangled: Matrix::rowMult(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7rowMultEid(void) {
    ALOGD("_ZN6Matrix7rowMultEid() called");
    return 0;
}

/* Demangled: SfSatt::ekf_struct::ekf_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt10ekf_structC2Ev(void) {
    ALOGD("_ZN6SfSatt10ekf_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::protect_sf_as_gp_in_meas_cov_matrix() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt35protect_sf_as_gp_in_meas_cov_matrixEv(void) {
    ALOGD("_ZN6SfSatt35protect_sf_as_gp_in_meas_cov_matrixEv() called");
    return 0;
}

/* Demangled: ascend_cmp_struct(void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _Z17ascend_cmp_structPKvS0_(void) {
    ALOGD("_Z17ascend_cmp_structPKvS0_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_state_covariance_matrix() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF27get_state_covariance_matrixEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF27get_state_covariance_matrixEv() called");
    return 0;
}

/* Demangled: UdrEkf::get_Cvb() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6UdrEkf7get_CvbEv(void) {
    ALOGD("_ZNK6UdrEkf7get_CvbEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::less_gad(double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel8less_gadEPdS0_S0_S0_(void) {
    ALOGD("_ZN14GnssAccelDecel8less_gadEPdS0_S0_S0_() called");
    return 0;
}

/* Exported Object: last_step_ts */
extern "C" __attribute__((visibility("default"))) void* last_step_ts = NULL;

/* Demangled: get_map_matching_result */
extern "C" __attribute__((visibility("default"))) int get_map_matching_result(void) {
    ALOGD("get_map_matching_result() called");
    return 0;
}

/* Demangled: PdrLpf::set_adv_imu_lpf_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf20set_adv_imu_lpf_paraEv(void) {
    ALOGD("_ZN6PdrLpf20set_adv_imu_lpf_paraEv() called");
    return 0;
}

/* Demangled: SimpleGyroBias::is_gb_ready() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias11is_gb_readyEv(void) {
    ALOGD("_ZNK14SimpleGyroBias11is_gb_readyEv() called");
    return 0;
}

/* Demangled: InertialAtt::InertialAtt(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAttC2ERK12ConfigParams(void) {
    ALOGD("_ZN11InertialAttC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: SimpleGyroBias::AlterGyroBias::comp_polyval_from_bias_table(double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias13AlterGyroBias28comp_polyval_from_bias_tableEPdd(void) {
    ALOGD("_ZN14SimpleGyroBias13AlterGyroBias28comp_polyval_from_bias_tableEPdd() called");
    return 0;
}

/* Demangled: Pedometer::update_last_step_info() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer21update_last_step_infoEv(void) {
    ALOGD("_ZN9Pedometer21update_last_step_infoEv() called");
    return 0;
}

/* Demangled: MonitorDataRate::comp_sensor_data_rate(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate21comp_sensor_data_rateEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN15MonitorDataRate21comp_sensor_data_rateEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: UdrEkf::state_update(sf_gnss_msg_struct*, unsigned int*, int, bool, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf12state_updateEP18sf_gnss_msg_structPjibib(void) {
    ALOGD("_ZN6UdrEkf12state_updateEP18sf_gnss_msg_structPjibib() called");
    return 0;
}

/* Demangled: GnssAccelDecel::est_gnss_accel_decel(sf_mems_msg_struct*, sf_gnss_msg_struct*, UdrLpf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel20est_gnss_accel_decelEP18sf_mems_msg_structP18sf_gnss_msg_structRK6UdrLpf(void) {
    ALOGD("_ZN14GnssAccelDecel20est_gnss_accel_decelEP18sf_mems_msg_structP18sf_gnss_msg_structRK6UdrLpf() called");
    return 0;
}

/* Demangled: PdrEkf::predict_pos(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf11predict_posEd(void) {
    ALOGD("_ZN6PdrEkf11predict_posEd() called");
    return 0;
}

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::mag_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_structC2Ev(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_structC2Ev() called");
    return 0;
}

/* Demangled: SfIsm::results_struct::results_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm14results_structC1Ev(void) {
    ALOGD("_ZN5SfIsm14results_structC1Ev() called");
    return 0;
}

/* Demangled: is_all_similar(double const*, double const*, int, double) */
extern "C" __attribute__((visibility("default"))) int _Z14is_all_similarPKdS0_id(void) {
    ALOGD("_Z14is_all_similarPKdS0_id() called");
    return 0;
}

/* Demangled: Pedometer::get_lpf_result(SfLpf::smoop_struct&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer14get_lpf_resultERN5SfLpf12smoop_structE(void) {
    ALOGD("_ZN9Pedometer14get_lpf_resultERN5SfLpf12smoop_structE() called");
    return 0;
}

/* Demangled: inv_matrix3x3(Matrix const&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z13inv_matrix3x3RK6MatrixRS_(void) {
    ALOGD("_Z13inv_matrix3x3RK6MatrixRS_() called");
    return 0;
}

/* Demangled: Barometer::p2dh(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer4p2dhEdd(void) {
    ALOGD("_ZN9Barometer4p2dhEdd() called");
    return 0;
}

/* Demangled: CarAccelB::run_sub_ekf() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB11run_sub_ekfEv(void) {
    ALOGD("_ZN9CarAccelB11run_sub_ekfEv() called");
    return 0;
}

/* Demangled: Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN8WatchdogD1Ev(void) {
    ALOGD("_ZN8WatchdogD1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::sub_kf_buff_struct::~sub_kf_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB18sub_kf_buff_structD1Ev(void) {
    ALOGD("_ZN9CarAccelB18sub_kf_buff_structD1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::stored_bias_struct::stored_bias_struct(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18stored_bias_structC2Eid(void) {
    ALOGD("_ZN6UdrEkf18stored_bias_structC2Eid() called");
    return 0;
}

/* Demangled: SfWmm::MAG_DateToYear(SfWmm::MAGtype_Date*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm14MAG_DateToYearEPNS_12MAGtype_DateE(void) {
    ALOGD("_ZN5SfWmm14MAG_DateToYearEPNS_12MAGtype_DateE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::is_full_buff() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp12is_full_buffEv(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp12is_full_buffEv() called");
    return 0;
}

/* Demangled: te_divide32 */
extern "C" __attribute__((visibility("default"))) int te_divide32(void) {
    ALOGD("te_divide32() called");
    return 0;
}

/* Exported Object: acc_curr_roll */
extern "C" __attribute__((visibility("default"))) void* acc_curr_roll = NULL;

/* Demangled: Barometer::ini_tol_auy_hei() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer15ini_tol_auy_heiEv(void) {
    ALOGD("_ZN9Barometer15ini_tol_auy_heiEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::dump_pred_results() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17dump_pred_resultsEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF17dump_pred_resultsEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::free_nw_shape() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_struct13free_nw_shapeEv(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_struct13free_nw_shapeEv() called");
    return 0;
}

/* Exported Object: acc_curr_std_roll */
extern "C" __attribute__((visibility("default"))) void* acc_curr_std_roll = NULL;

/* Demangled: Pedometer::SsModel::get_min_speed() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel13get_min_speedEv(void) {
    ALOGD("_ZN9Pedometer7SsModel13get_min_speedEv() called");
    return 0;
}

/* Demangled: CarAccelB::reset_sync_sf_to_sm() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB19reset_sync_sf_to_smEv(void) {
    ALOGD("_ZN9CarAccelB19reset_sync_sf_to_smEv() called");
    return 0;
}

/* Demangled: UdrEkf::predict_M_N_omega() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17predict_M_N_omegaEv(void) {
    ALOGD("_ZN6UdrEkf17predict_M_N_omegaEv() called");
    return 0;
}

/* Demangled: UdrEkf::update_estimate_with_measurement(unsigned int*, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf32update_estimate_with_measurementEPjR6Matrix(void) {
    ALOGD("_ZN6UdrEkf32update_estimate_with_measurementEPjR6Matrix() called");
    return 0;
}

/* Demangled: PdrSgb::PdrSgb() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrSgbC1Ev(void) {
    ALOGD("_ZN6PdrSgbC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vehicle_Acc */
extern "C" __attribute__((visibility("default"))) void* vehicle_Acc = NULL;

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: SfLpf::set_adv_lpf_paras() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf17set_adv_lpf_parasEv(void) {
    ALOGD("_ZN5SfLpf17set_adv_lpf_parasEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::add_sample(double, double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel10add_sampleEddddd(void) {
    ALOGD("_ZN9Pedometer7SsModel10add_sampleEddddd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_ekf_pred_time(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF17upd_ekf_pred_timeEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF17upd_ekf_pred_timeEd() called");
    return 0;
}

/* Demangled: UdrEkf::predict_PHI_matrix(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf18predict_PHI_matrixEd(void) {
    ALOGD("_ZN6UdrEkf18predict_PHI_matrixEd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::nw_shape_struct::~nw_shape_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15nw_shape_structD1Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15nw_shape_structD1Ev() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: SfLpf::smoop_result_struct::~smoop_result_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf19smoop_result_structD1Ev(void) {
    ALOGD("_ZN5SfLpf19smoop_result_structD1Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_accel(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf13get_dec_accelEPd(void) {
    ALOGD("_ZNK5SfLpf13get_dec_accelEPd() called");
    return 0;
}

/* Exported Object: close_location_degree */
extern "C" __attribute__((visibility("default"))) void* close_location_degree = NULL;

/* Demangled: DataProcess::rt_align_data() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess13rt_align_dataEv(void) {
    ALOGD("_ZN11DataProcess13rt_align_dataEv() called");
    return 0;
}

/* Demangled: logically_greater_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z23logically_greater_equalddd(void) {
    ALOGD("_Z23logically_greater_equalddd() called");
    return 0;
}

/* Demangled: UdrEkf::gnss_accel_struct::upd_past(sf_gnss_msg_struct const*, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf17gnss_accel_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_(void) {
    ALOGD("_ZN6UdrEkf17gnss_accel_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::approximate_symmetric(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess21approximate_symmetricEPd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess21approximate_symmetricEPd() called");
    return 0;
}

/* Demangled: SfIsm::tree_predict(SfIsm::tree_struct const&, double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm12tree_predictERKNS_11tree_structEPKdPd(void) {
    ALOGD("_ZN5SfIsm12tree_predictERKNS_11tree_structEPKdPd() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: Watchdog::Watchdog(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8WatchdogC1ERK12ConfigParams(void) {
    ALOGD("_ZN8WatchdogC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: VehBodOrient::VehBodOrient() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrientC2Ev(void) {
    ALOGD("_ZN12VehBodOrientC2Ev() called");
    return 0;
}

/* Exported Object: vtable for PdrSatt */
extern "C" __attribute__((visibility("default"))) void* _ZTV7PdrSatt = NULL;

/* Demangled: comp_median(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11comp_medianPdi(void) {
    ALOGD("_Z11comp_medianPdi() called");
    return 0;
}

/* Demangled: Barometer::Barometer(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9BarometerC2ERK12ConfigParams(void) {
    ALOGD("_ZN9BarometerC2ERK12ConfigParams() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_static_var_w(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF16upd_static_var_wEPKdS2_(void) {
    ALOGD("_ZN9CarAccelB5SubKF16upd_static_var_wEPKdS2_() called");
    return 0;
}

/* Demangled: SfSgb::reset_check_stat() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb16reset_check_statEv(void) {
    ALOGD("_ZN5SfSgb16reset_check_statEv() called");
    return 0;
}

/* Demangled: inv_matrix2x2(Matrix const&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z13inv_matrix2x2RK6MatrixRS_(void) {
    ALOGD("_Z13inv_matrix2x2RK6MatrixRS_() called");
    return 0;
}

/* Demangled: InertialStaticMove::compute_sm_features(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove19compute_sm_featuresEPdS0_(void) {
    ALOGD("_ZN18InertialStaticMove19compute_sm_featuresEPdS0_() called");
    return 0;
}

/* Demangled: Integration::~Integration() */
extern "C" __attribute__((visibility("default"))) int _ZN11IntegrationD2Ev(void) {
    ALOGD("_ZN11IntegrationD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: Pre_Imu_smoo */
extern "C" __attribute__((visibility("default"))) void* Pre_Imu_smoo = NULL;

/* Demangled: PdrGb::copy_sgb_stable_gb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGb18copy_sgb_stable_gbEv(void) {
    ALOGD("_ZN5PdrGb18copy_sgb_stable_gbEv() called");
    return 0;
}

/* Demangled: SfSatt::meas_para_struct::~meas_para_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt16meas_para_structD2Ev(void) {
    ALOGD("_ZN6SfSatt16meas_para_structD2Ev() called");
    return 0;
}

/* Demangled: Barometer::est_tol_auy_hei() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer15est_tol_auy_heiEv(void) {
    ALOGD("_ZN9Barometer15est_tol_auy_heiEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_sys_process_matrix(Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF22set_sys_process_matrixERK6MatrixS3_S3_RS1_(void) {
    ALOGD("_ZNK9CarAccelB5SubKF22set_sys_process_matrixERK6MatrixS3_S3_RS1_() called");
    return 0;
}

/* Demangled: UdrEkf::ekf_main_state_struct::ekf_main_state_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf21ekf_main_state_structC2Ev(void) {
    ALOGD("_ZN6UdrEkf21ekf_main_state_structC2Ev() called");
    return 0;
}

/* Demangled: get_pedometer_smd_event */
extern "C" __attribute__((visibility("default"))) int get_pedometer_smd_event(void) {
    ALOGD("get_pedometer_smd_event() called");
    return 0;
}

/* Demangled: SfSgb::upd_stable() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb10upd_stableEv(void) {
    ALOGD("_ZN5SfSgb10upd_stableEv() called");
    return 0;
}

/* Demangled: Cxn2eul(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z7Cxn2eulR6MatrixS0_(void) {
    ALOGD("_Z7Cxn2eulR6MatrixS0_() called");
    return 0;
}

/* Demangled: GnssAccelDecel::is_gad_ready() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14GnssAccelDecel12is_gad_readyEv(void) {
    ALOGD("_ZNK14GnssAccelDecel12is_gad_readyEv() called");
    return 0;
}

/* Demangled: Matrix::is_row_vector() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6Matrix13is_row_vectorEv(void) {
    ALOGD("_ZNK6Matrix13is_row_vectorEv() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::comp_bound_mean(double const*, int, int, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct15comp_bound_meanEPKdiiii(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct15comp_bound_meanEPKdiiii() called");
    return 0;
}

/* Demangled: SystemStateControl::new_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl26new_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void) {
    ALOGD("_ZN18SystemStateControl26new_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::~VboGrp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrpD1Ev(void) {
    ALOGD("_ZN12VehBodOrient6VboGrpD1Ev() called");
    return 0;
}

/* Demangled: Matrix::set_val(int, int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix7set_valEiid(void) {
    ALOGD("_ZN6Matrix7set_valEiid() called");
    return 0;
}

/* Demangled: PdrGb::PdrGb() */
extern "C" __attribute__((visibility("default"))) int _ZN5PdrGbC1Ev(void) {
    ALOGD("_ZN5PdrGbC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::find_freq_idx(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel13find_freq_idxEd(void) {
    ALOGD("_ZN9Pedometer7SsModel13find_freq_idxEd() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::SsModel(ConfigParams const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModelC1ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd(void) {
    ALOGD("_ZN9Pedometer7SsModelC1ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd() called");
    return 0;
}

/* Demangled: UdrLpf::set_icm40607_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6UdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: best_run_ax */
extern "C" __attribute__((visibility("default"))) int best_run_ax(void) {
    ALOGD("best_run_ax() called");
    return 0;
}

/* Exported Object: dr_acc_bias_state */
extern "C" __attribute__((visibility("default"))) void* dr_acc_bias_state = NULL;

/* Exported Object: lpf_parameter */
extern "C" __attribute__((visibility("default"))) void* lpf_parameter = NULL;

/* Demangled: SystemStateControl::coarse_dir_struct::is_coarse_dir() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17coarse_dir_struct13is_coarse_dirEv(void) {
    ALOGD("_ZN18SystemStateControl17coarse_dir_struct13is_coarse_dirEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::group_inertial_dir(CarAccelB::output_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp18group_inertial_dirERKN9CarAccelB13output_structE(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp18group_inertial_dirERKN9CarAccelB13output_structE() called");
    return 0;
}

/* Demangled: next_idx */
extern "C" __attribute__((visibility("default"))) int next_idx(void) {
    ALOGD("next_idx() called");
    return 0;
}

/* Demangled: MonitorDataRate::is_imu_downsampling_to_tar_dr(mpe::ModeEnum::ModeType) const */
extern "C" __attribute__((visibility("default"))) int _ZNK15MonitorDataRate29is_imu_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE(void) {
    ALOGD("_ZNK15MonitorDataRate29is_imu_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE() called");
    return 0;
}

/* Demangled: PdrIsm::comp_sf_dist() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm12comp_sf_distEv(void) {
    ALOGD("_ZN6PdrIsm12comp_sf_distEv() called");
    return 0;
}

/* Demangled: mpe_get_dr_gyro_bias */
extern "C" __attribute__((visibility("default"))) int mpe_get_dr_gyro_bias(void) {
    ALOGD("mpe_get_dr_gyro_bias() called");
    return 0;
}

/* Demangled: SfWmm::calculate_num_terms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm19calculate_num_termsEi(void) {
    ALOGD("_ZN5SfWmm19calculate_num_termsEi() called");
    return 0;
}

/* Demangled: CarAccelB::delay_buff_struct::~delay_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17delay_buff_structD1Ev(void) {
    ALOGD("_ZN9CarAccelB17delay_buff_structD1Ev() called");
    return 0;
}

/* Demangled: UdrEkf::update_P(Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf8update_PER6MatrixS1_(void) {
    ALOGD("_ZN6UdrEkf8update_PER6MatrixS1_() called");
    return 0;
}

/* Exported Object: step_detected_count */
extern "C" __attribute__((visibility("default"))) void* step_detected_count = NULL;

/* Demangled: PdrEkf::ekf_fine_heading(sf_gnss_msg_struct const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf16ekf_fine_headingEPK18sf_gnss_msg_structii(void) {
    ALOGD("_ZN6PdrEkf16ekf_fine_headingEPK18sf_gnss_msg_structii() called");
    return 0;
}

/* Demangled: SfIsm::comp_sm_var(double const* const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11comp_sm_varEPKPKdi(void) {
    ALOGD("_ZN5SfIsm11comp_sm_varEPKPKdi() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::tune_gamma(CarAccelB::sub_kf_buff_struct const*, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB17sf_pattern_struct10tune_gammaEPKNS_18sub_kf_buff_structEPd(void) {
    ALOGD("_ZNK9CarAccelB17sf_pattern_struct10tune_gammaEPKNS_18sub_kf_buff_structEPd() called");
    return 0;
}

/* Demangled: InertialStaticMove::InertialStaticMove() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMoveC1Ev(void) {
    ALOGD("_ZN18InertialStaticMoveC1Ev() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: SfLpf::~SfLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpfD1Ev(void) {
    ALOGD("_ZN5SfLpfD1Ev() called");
    return 0;
}

/* Demangled: SfWmm::MAG_FreeSphVarMemory(SfWmm::MAGtype_SphericalHarmonicVariables*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm20MAG_FreeSphVarMemoryEPNS_34MAGtype_SphericalHarmonicVariablesE(void) {
    ALOGD("_ZN5SfWmm20MAG_FreeSphVarMemoryEPNS_34MAGtype_SphericalHarmonicVariablesE() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_sf_meas(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF11set_sf_measEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF11set_sf_measEPKd() called");
    return 0;
}

/* Exported Object: acc_final_gps_vel */
extern "C" __attribute__((visibility("default"))) void* acc_final_gps_vel = NULL;

/* Exported Object: gesture_ped */
extern "C" __attribute__((visibility("default"))) void* gesture_ped = NULL;

/* Demangled: SfSgb::is_not_pass_first_stage() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfSgb23is_not_pass_first_stageEv(void) {
    ALOGD("_ZNK5SfSgb23is_not_pass_first_stageEv() called");
    return 0;
}

/* Demangled: SfSatt::comp_inno() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt9comp_innoEv(void) {
    ALOGD("_ZN6SfSatt9comp_innoEv() called");
    return 0;
}

/* Demangled: UdrEkf::rpy_constrain() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf13rpy_constrainEv(void) {
    ALOGD("_ZN6UdrEkf13rpy_constrainEv() called");
    return 0;
}

/* Demangled: get_3d_distance(sf_llh_struct, sf_llh_struct) */
extern "C" __attribute__((visibility("default"))) int _Z15get_3d_distance13sf_llh_structS_(void) {
    ALOGD("_Z15get_3d_distance13sf_llh_structS_() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::comp_kalman_gain(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF16comp_kalman_gainER6Matrix(void) {
    ALOGD("_ZN9CarAccelB5SubKF16comp_kalman_gainER6Matrix() called");
    return 0;
}

/* Demangled: VehBodOrient::get_cvb_info() const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient12get_cvb_infoEv(void) {
    ALOGD("_ZNK12VehBodOrient12get_cvb_infoEv() called");
    return 0;
}

/* Demangled: Integration::sf_algo_reset() */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration13sf_algo_resetEv(void) {
    ALOGD("_ZN11Integration13sf_algo_resetEv() called");
    return 0;
}

/* Demangled: SfLpf::check_lsm6dsm_gyro_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf31check_lsm6dsm_gyro_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf31check_lsm6dsm_gyro_dec_num_axisEi() called");
    return 0;
}

/* Demangled: SfLpf::reset_dec_available() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf19reset_dec_availableEv(void) {
    ALOGD("_ZN5SfLpf19reset_dec_availableEv() called");
    return 0;
}

/* Demangled: Matrix::operator()(int const*, int const*, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6MatrixclEPKiS1_ii(void) {
    ALOGD("_ZNK6MatrixclEPKiS1_ii() called");
    return 0;
}

/* Demangled: CarAccelB::upd_kf_buff_sm(InertialStaticMove::ManeuverEnum::ManeuverType) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB14upd_kf_buff_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void) {
    ALOGD("_ZN9CarAccelB14upd_kf_buff_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE() called");
    return 0;
}

/* Demangled: Ttff::first_fix_mechanism(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Ttff19first_fix_mechanismEb(void) {
    ALOGD("_ZN4Ttff19first_fix_mechanismEb() called");
    return 0;
}

/* Demangled: SfIsm::feas_struct::~feas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11feas_structD1Ev(void) {
    ALOGD("_ZN5SfIsm11feas_structD1Ev() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_static_info(sf_gnss_msg_struct*, int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect15get_static_infoEP18sf_gnss_msg_structiiPii(void) {
    ALOGD("_ZN16UdrUpdTypeSelect15get_static_infoEP18sf_gnss_msg_structiiPii() called");
    return 0;
}

/* Demangled: array3x3_to_matrix(double const (*) [3], Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z18array3x3_to_matrixPA3_KdR6Matrix(void) {
    ALOGD("_Z18array3x3_to_matrixPA3_KdR6Matrix() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_var_gyro_bias() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF17get_var_gyro_biasEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF17get_var_gyro_biasEv() called");
    return 0;
}

/* Demangled: Integration::choose_mnl_result(sf2mnl_msg_struct const&, sf2mnl_msg_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11Integration17choose_mnl_resultERK17sf2mnl_msg_structS2_(void) {
    ALOGD("_ZN11Integration17choose_mnl_resultERK17sf2mnl_msg_structS2_() called");
    return 0;
}

/* Demangled: min */
extern "C" __attribute__((visibility("default"))) int min(void) {
    ALOGD("min() called");
    return 0;
}

/* Exported Object: write_log_flag */
extern "C" __attribute__((visibility("default"))) void* write_log_flag = NULL;

/* Demangled: MonitorDataRate::ini_indices() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate11ini_indicesEv(void) {
    ALOGD("_ZN15MonitorDataRate11ini_indicesEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::get_se(UdrUpdTypeSelect::SeEnum::SeType) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE(void) {
    ALOGD("_ZN16UdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE() called");
    return 0;
}

/* Exported Object: acc_last_gps_conf_vel */
extern "C" __attribute__((visibility("default"))) void* acc_last_gps_conf_vel = NULL;

/* Exported Object: acc_main_heading_axis */
extern "C" __attribute__((visibility("default"))) void* acc_main_heading_axis = NULL;

/* Demangled: dr_lla2utm */
extern "C" __attribute__((visibility("default"))) int dr_lla2utm(void) {
    ALOGD("dr_lla2utm() called");
    return 0;
}

/* Demangled: SfSatt::set_default_ctrl_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21set_default_ctrl_paraEv(void) {
    ALOGD("_ZN6SfSatt21set_default_ctrl_paraEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_Qk(double, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF6set_QkEdRK6MatrixS3_S3_S3_S3_S3_RS1_(void) {
    ALOGD("_ZNK9CarAccelB5SubKF6set_QkEdRK6MatrixS3_S3_S3_S3_S3_RS1_() called");
    return 0;
}

/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::phone_yaw_moved_caused_pos_drift_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC2Ev(void) {
    ALOGD("_ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC2Ev() called");
    return 0;
}

/* Demangled: SimpleGyroBias::gbuff_struct::gbuff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBias12gbuff_structC2Ev(void) {
    ALOGD("_ZN14SimpleGyroBias12gbuff_structC2Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_accel(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf13get_adv_accelEPd(void) {
    ALOGD("_ZNK5SfLpf13get_adv_accelEPd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::~VboLess() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLessD1Ev(void) {
    ALOGD("_ZN12VehBodOrient7VboLessD1Ev() called");
    return 0;
}

/* Demangled: smallest_of_8_axes */
extern "C" __attribute__((visibility("default"))) int smallest_of_8_axes(void) {
    ALOGD("smallest_of_8_axes() called");
    return 0;
}

/* Demangled: mpe_update_dead_reckoning */
extern "C" __attribute__((visibility("default"))) int mpe_update_dead_reckoning(void) {
    ALOGD("mpe_update_dead_reckoning() called");
    return 0;
}

/* Demangled: PdrEkf::mag_caused_pos_drift_struct::upd_buff(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf27mag_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6PdrEkf27mag_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: SfSatt::set_gp_gb_ab_state_para() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt23set_gp_gb_ab_state_paraEv(void) {
    ALOGD("_ZN6SfSatt23set_gp_gb_ab_state_paraEv() called");
    return 0;
}

/* Demangled: SfIsm::reset_all_upd_flags() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm19reset_all_upd_flagsEv(void) {
    ALOGD("_ZN5SfIsm19reset_all_upd_flagsEv() called");
    return 0;
}

/* Demangled: is_same_size(Matrix const&, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z12is_same_sizeRK6MatrixS1_(void) {
    ALOGD("_Z12is_same_sizeRK6MatrixS1_() called");
    return 0;
}

/* Demangled: SfSatt::upd_ext_feas_gp(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15upd_ext_feas_gpERK6Matrix(void) {
    ALOGD("_ZN6SfSatt15upd_ext_feas_gpERK6Matrix() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_mu_level(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect12set_mu_levelEPj(void) {
    ALOGD("_ZN16UdrUpdTypeSelect12set_mu_levelEPj() called");
    return 0;
}

/* Demangled: DataProcess::update_odo_cal(double) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess14update_odo_calEd(void) {
    ALOGD("_ZN11DataProcess14update_odo_calEd() called");
    return 0;
}

/* Demangled: UdrEkf::set_a2v(Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf7set_a2vER6Matrix(void) {
    ALOGD("_ZN6UdrEkf7set_a2vER6Matrix() called");
    return 0;
}

/* Demangled: SystemStateControl::get_state() */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl9get_stateEv(void) {
    ALOGD("_ZN18SystemStateControl9get_stateEv() called");
    return 0;
}

/* Demangled: InertialStaticMove::meas_struct::~meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove11meas_structD1Ev(void) {
    ALOGD("_ZN18InertialStaticMove11meas_structD1Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::esti_proba_prev_x_gad(double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp21esti_proba_prev_x_gadEd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp21esti_proba_prev_x_gadEd() called");
    return 0;
}

/* Exported Object: Imu_orig */
extern "C" __attribute__((visibility("default"))) void* Imu_orig = NULL;

/* Demangled: PdrLpf::~PdrLpf() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpfD0Ev(void) {
    ALOGD("_ZN6PdrLpfD0Ev() called");
    return 0;
}

/* Demangled: MonitorDataRate::~MonitorDataRate() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRateD2Ev(void) {
    ALOGD("_ZN15MonitorDataRateD2Ev() called");
    return 0;
}

/* Demangled: SfSatt::reset_p_dcm() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt11reset_p_dcmEv(void) {
    ALOGD("_ZN6SfSatt11reset_p_dcmEv() called");
    return 0;
}

/* Demangled: GnssAccelDecel::gad_buff_struct::gad_buff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN14GnssAccelDecel15gad_buff_structC2Ev(void) {
    ALOGD("_ZN14GnssAccelDecel15gad_buff_structC2Ev() called");
    return 0;
}

/* Demangled: PdrMheading::~PdrMheading() */
extern "C" __attribute__((visibility("default"))) int _ZN11PdrMheadingD2Ev(void) {
    ALOGD("_ZN11PdrMheadingD2Ev() called");
    return 0;
}

/* Demangled: close_archive_file() */
extern "C" __attribute__((visibility("default"))) int _Z18close_archive_filev(void) {
    ALOGD("_Z18close_archive_filev() called");
    return 0;
}

/* Demangled: MonitorDataRate::dr_track_struct::dr_track_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate15dr_track_structC1Ev(void) {
    ALOGD("_ZN15MonitorDataRate15dr_track_structC1Ev() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_var_sf(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF10upd_var_sfEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF10upd_var_sfEPKd() called");
    return 0;
}

/* Exported Object: force_timeout_flag */
extern "C" __attribute__((visibility("default"))) void* force_timeout_flag = NULL;

/* Demangled: MonitorDataRate::ini_mdr() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate7ini_mdrEv(void) {
    ALOGD("_ZN15MonitorDataRate7ini_mdrEv() called");
    return 0;
}

/* Exported Object: UdrEkf::R_UNIT_MATRIX_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf17R_UNIT_MATRIX_COVE = NULL;

/* Demangled: CloneNearGnss::use_nearest_gnss(sf_gnss_msg_struct*&) */
extern "C" __attribute__((visibility("default"))) int _ZN13CloneNearGnss16use_nearest_gnssERP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN13CloneNearGnss16use_nearest_gnssERP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: Matrix::init(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4initEii(void) {
    ALOGD("_ZN6Matrix4initEii() called");
    return 0;
}

/* Demangled: norm2(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z5norm2Pdi(void) {
    ALOGD("_Z5norm2Pdi() called");
    return 0;
}

/* Exported Object: linear_ACC */
extern "C" __attribute__((visibility("default"))) void* linear_ACC = NULL;

/* Demangled: PdrMotionDetect::get_gravity(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect11get_gravityEPd(void) {
    ALOGD("_ZN15PdrMotionDetect11get_gravityEPd() called");
    return 0;
}

/* Demangled: SfLpf::check_bmi160_gyro_dec_num_axis(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf30check_bmi160_gyro_dec_num_axisEi(void) {
    ALOGD("_ZN5SfLpf30check_bmi160_gyro_dec_num_axisEi() called");
    return 0;
}

/* Demangled: PdrEkf::ekf_coarse_heading(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf18ekf_coarse_headingEiii(void) {
    ALOGD("_ZN6PdrEkf18ekf_coarse_headingEiii() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::alloc_delay_buff_to_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect23alloc_delay_buff_to_cvbEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect23alloc_delay_buff_to_cvbEv() called");
    return 0;
}

/* Demangled: PdrSatt::out_struct::out_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSatt10out_structC1Ev(void) {
    ALOGD("_ZN7PdrSatt10out_structC1Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_dec_mag(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf11get_dec_magEPd(void) {
    ALOGD("_ZNK5SfLpf11get_dec_magEPd() called");
    return 0;
}

/* Demangled: UdrEkf::push_ekf_main_state(UdrEkf::ekf_main_state_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf19push_ekf_main_stateEPNS_21ekf_main_state_structE(void) {
    ALOGD("_ZN6UdrEkf19push_ekf_main_stateEPNS_21ekf_main_state_structE() called");
    return 0;
}

/* Demangled: SimpleGyroBias::get_gyro_bias(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14SimpleGyroBias13get_gyro_biasEPd(void) {
    ALOGD("_ZNK14SimpleGyroBias13get_gyro_biasEPd() called");
    return 0;
}

/* Demangled: Matrix::Matrix(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6MatrixC1Eii(void) {
    ALOGD("_ZN6MatrixC1Eii() called");
    return 0;
}

/* Demangled: PdrIsm::comp_w_var() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsm10comp_w_varEv(void) {
    ALOGD("_ZN6PdrIsm10comp_w_varEv() called");
    return 0;
}

/* Demangled: SfLpf::dec_filt_mag(sf_mems_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12dec_filt_magEPK18sf_mems_msg_struct(void) {
    ALOGD("_ZN5SfLpf12dec_filt_magEPK18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: CarAccelB::reset_cab_out() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB13reset_cab_outEv(void) {
    ALOGD("_ZN9CarAccelB13reset_cab_outEv() called");
    return 0;
}

/* Demangled: InertialStaticMove::get_sm_label() const */
extern "C" __attribute__((visibility("default"))) int _ZNK18InertialStaticMove12get_sm_labelEv(void) {
    ALOGD("_ZNK18InertialStaticMove12get_sm_labelEv() called");
    return 0;
}

/* Demangled: UdrEkf::pitch_measurement_update() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf24pitch_measurement_updateEv(void) {
    ALOGD("_ZN6UdrEkf24pitch_measurement_updateEv() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_delay_time_to_cvb() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect21set_delay_time_to_cvbEv(void) {
    ALOGD("_ZN16UdrUpdTypeSelect21set_delay_time_to_cvbEv() called");
    return 0;
}

/* Demangled: PdrUpdTypeSelect::~PdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16PdrUpdTypeSelectD1Ev(void) {
    ALOGD("_ZN16PdrUpdTypeSelectD1Ev() called");
    return 0;
}

/* Demangled: PDR::get_pvt_result() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR14get_pvt_resultEv(void) {
    ALOGD("_ZN3PDR14get_pvt_resultEv() called");
    return 0;
}

/* Demangled: SfIsm::~SfIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsmD2Ev(void) {
    ALOGD("_ZN5SfIsmD2Ev() called");
    return 0;
}

/* Demangled: PdrMotionDetect::is_gravity_available() */
extern "C" __attribute__((visibility("default"))) int _ZN15PdrMotionDetect20is_gravity_availableEv(void) {
    ALOGD("_ZN15PdrMotionDetect20is_gravity_availableEv() called");
    return 0;
}

/* Demangled: SfSgb::esti_robust_gyro_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb21esti_robust_gyro_biasEv(void) {
    ALOGD("_ZN5SfSgb21esti_robust_gyro_biasEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticAtt::R_INIT_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_INIT_COVE = NULL;

/* Demangled: UdrEkf::predict_position_estimate(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf25predict_position_estimateEd(void) {
    ALOGD("_ZN6UdrEkf25predict_position_estimateEd() called");
    return 0;
}

/* Exported Object: local_max */
extern "C" __attribute__((visibility("default"))) void* local_max = NULL;

/* Demangled: comp_mean(double const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z9comp_meanPKdi(void) {
    ALOGD("_Z9comp_meanPKdi() called");
    return 0;
}

/* Demangled: PdrEkf::upd_mg_heading_diff_buff(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf24upd_mg_heading_diff_buffEdd(void) {
    ALOGD("_ZN6PdrEkf24upd_mg_heading_diff_buffEdd() called");
    return 0;
}

/* Demangled: MonitorDataRate::clean_all_cfg_reset_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate24clean_all_cfg_reset_flagEv(void) {
    ALOGD("_ZN15MonitorDataRate24clean_all_cfg_reset_flagEv() called");
    return 0;
}

/* Demangled: SfSatt::is_test_turn_on_pred_only() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt25is_test_turn_on_pred_onlyEv(void) {
    ALOGD("_ZNK6SfSatt25is_test_turn_on_pred_onlyEv() called");
    return 0;
}

/* Demangled: CarAccelB::Rts::vec_q_to_mat_q(int, int, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB3Rts14vec_q_to_mat_qEiiRK6Matrix(void) {
    ALOGD("_ZN9CarAccelB3Rts14vec_q_to_mat_qEiiRK6Matrix() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_gsd(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF7set_gsdEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF7set_gsdEd() called");
    return 0;
}

/* Demangled: UdrEkf::vel_measurement_update(sf_ned_struct const&, double*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf22vel_measurement_updateERK13sf_ned_structPdjj(void) {
    ALOGD("_ZN6UdrEkf22vel_measurement_updateERK13sf_ned_structPdjj() called");
    return 0;
}

/* Demangled: UdrLpf::get_lsm6dsm_accel_para_200hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf28get_lsm6dsm_accel_para_200hzEv(void) {
    ALOGD("_ZN6UdrLpf28get_lsm6dsm_accel_para_200hzEv() called");
    return 0;
}

/* Demangled: v3_noise_majority_vote */
extern "C" __attribute__((visibility("default"))) int v3_noise_majority_vote(void) {
    ALOGD("v3_noise_majority_vote() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::sf_pattern_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17sf_pattern_structC2Ev(void) {
    ALOGD("_ZN9CarAccelB17sf_pattern_structC2Ev() called");
    return 0;
}

/* Demangled: set_pedometer_transition */
extern "C" __attribute__((visibility("default"))) int set_pedometer_transition(void) {
    ALOGD("set_pedometer_transition() called");
    return 0;
}

/* Exported Object: dr_lat_ref */
extern "C" __attribute__((visibility("default"))) void* dr_lat_ref = NULL;

/* Demangled: PdrIgp::esti_imu_grav_proj_b(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgp20esti_imu_grav_proj_bERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE(void) {
    ALOGD("_ZN6PdrIgp20esti_imu_grav_proj_bERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE() called");
    return 0;
}

/* Demangled: eul2CxyCyx(Matrix&, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _Z10eul2CxyCyxR6MatrixS0_S0_(void) {
    ALOGD("_Z10eul2CxyCyxR6MatrixS0_S0_() called");
    return 0;
}

/* Demangled: CarAccelB::construct_rotation_matrix(double*, double*, Matrix&, Matrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB25construct_rotation_matrixEPdS0_R6MatrixS2_(void) {
    ALOGD("_ZN9CarAccelB25construct_rotation_matrixEPdS0_R6MatrixS2_() called");
    return 0;
}

/* Demangled: get_3d_distance_sep(sf_llh_struct, sf_llh_struct) */
extern "C" __attribute__((visibility("default"))) int _Z19get_3d_distance_sep13sf_llh_structS_(void) {
    ALOGD("_Z19get_3d_distance_sep13sf_llh_structS_() called");
    return 0;
}

/* Demangled: get_pedometer_best_set */
extern "C" __attribute__((visibility("default"))) int get_pedometer_best_set(void) {
    ALOGD("get_pedometer_best_set() called");
    return 0;
}

/* Demangled: CarAccelB::sf_pattern_struct::fit_3_pts(CarAccelB::sub_kf_buff_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB17sf_pattern_struct9fit_3_ptsEPKNS_18sub_kf_buff_structE(void) {
    ALOGD("_ZN9CarAccelB17sf_pattern_struct9fit_3_ptsEPKNS_18sub_kf_buff_structE() called");
    return 0;
}

/* Demangled: UdrEkf::sf_as_gamma_measurement_update(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf30sf_as_gamma_measurement_updateEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf30sf_as_gamma_measurement_updateEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: UdrStaticDetect::UdrStaticDetect(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15UdrStaticDetectC1ERK12ConfigParams(void) {
    ALOGD("_ZN15UdrStaticDetectC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::set_first_loc(UdrEkf*) */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelect13set_first_locEP6UdrEkf(void) {
    ALOGD("_ZN16UdrUpdTypeSelect13set_first_locEP6UdrEkf() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_buff_avg_dsd2d() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp18get_buff_avg_dsd2dEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp18get_buff_avg_dsd2dEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: SfLpf::gnss_heading_lpf(SfLpf::smoop_result_struct&, double const*, SfLpf::smoop_struct const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf16gnss_heading_lpfERNS_19smoop_result_structEPKdRKNS_12smoop_structE(void) {
    ALOGD("_ZN5SfLpf16gnss_heading_lpfERNS_19smoop_result_structEPKdRKNS_12smoop_structE() called");
    return 0;
}

/* Demangled: mEye(Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _Z4mEyeRK6Matrix(void) {
    ALOGD("_Z4mEyeRK6Matrix() called");
    return 0;
}

/* Demangled: Matrix::cMult(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix5cMultEd(void) {
    ALOGD("_ZN6Matrix5cMultEd() called");
    return 0;
}

/* Demangled: mEye(int) */
extern "C" __attribute__((visibility("default"))) int _Z4mEyei(void) {
    ALOGD("_Z4mEyei() called");
    return 0;
}

/* Demangled: SimpleGyroBias::SimpleGyroBias() */
extern "C" __attribute__((visibility("default"))) int _ZN14SimpleGyroBiasC2Ev(void) {
    ALOGD("_ZN14SimpleGyroBiasC2Ev() called");
    return 0;
}

/* Demangled: pedometer_dsp_norm */
extern "C" __attribute__((visibility("default"))) int pedometer_dsp_norm(void) {
    ALOGD("pedometer_dsp_norm() called");
    return 0;
}

/* Exported Object: dr_state */
extern "C" __attribute__((visibility("default"))) void* dr_state = NULL;

/* Demangled: Pedometer::SsModel::update_default_model() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel20update_default_modelEv(void) {
    ALOGD("_ZN9Pedometer7SsModel20update_default_modelEv() called");
    return 0;
}

/* Demangled: rounding_to_xdigit(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18rounding_to_xdigitPdi(void) {
    ALOGD("_Z18rounding_to_xdigitPdi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::upd_static_grav_proj(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF20upd_static_grav_projEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF20upd_static_grav_projEPKd() called");
    return 0;
}

/* Exported Object: acc_final_delta_vel */
extern "C" __attribute__((visibility("default"))) void* acc_final_delta_vel = NULL;

/* Demangled: mpe_update_altitude */
extern "C" __attribute__((visibility("default"))) int mpe_update_altitude(void) {
    ALOGD("mpe_update_altitude() called");
    return 0;
}

/* Demangled: UdrEkf::get_state_change(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16get_state_changeEi(void) {
    ALOGD("_ZN6UdrEkf16get_state_changeEi() called");
    return 0;
}

/* Demangled: PdrEkf::get_valid_flag() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf14get_valid_flagEv(void) {
    ALOGD("_ZN6PdrEkf14get_valid_flagEv() called");
    return 0;
}

/* Demangled: SfIsm::comp_sm_dist(double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm12comp_sm_distEPKdS1_(void) {
    ALOGD("_ZN5SfIsm12comp_sm_distEPKdS1_() called");
    return 0;
}

/* Demangled: SystemStateControl::check_and_upd_coarse_cvb(UdrEkf&) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl24check_and_upd_coarse_cvbER6UdrEkf(void) {
    ALOGD("_ZN18SystemStateControl24check_and_upd_coarse_cvbER6UdrEkf() called");
    return 0;
}

/* Demangled: Pedometer::get_step_info() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer13get_step_infoEv(void) {
    ALOGD("_ZN9Pedometer13get_step_infoEv() called");
    return 0;
}

/* Demangled: DataProcess::sensor_value_in_range(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess21sensor_value_in_rangeEdd(void) {
    ALOGD("_ZN11DataProcess21sensor_value_in_rangeEdd() called");
    return 0;
}

/* Demangled: SfSatt::upd_skew_mat_of_angular_rate() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt28upd_skew_mat_of_angular_rateEv(void) {
    ALOGD("_ZN6SfSatt28upd_skew_mat_of_angular_rateEv() called");
    return 0;
}

/* Demangled: SfSatt::upd_skew_mat_of_gp_components() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt29upd_skew_mat_of_gp_componentsEv(void) {
    ALOGD("_ZN6SfSatt29upd_skew_mat_of_gp_componentsEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_accel_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF16reset_accel_biasEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF16reset_accel_biasEv() called");
    return 0;
}

/* Demangled: UdrEkf::restore_attitude(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16restore_attitudeEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf16restore_attitudeEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Exported Object: dr_acc_bias_state_1 */
extern "C" __attribute__((visibility("default"))) void* dr_acc_bias_state_1 = NULL;

/* Demangled: PdrEkf::mg_heading_diff_struct::mg_heading_diff_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf22mg_heading_diff_structC1Ev(void) {
    ALOGD("_ZN6PdrEkf22mg_heading_diff_structC1Ev() called");
    return 0;
}

/* Demangled: SfSgb::stable_struct::stable_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb13stable_structC1Ev(void) {
    ALOGD("_ZN5SfSgb13stable_structC1Ev() called");
    return 0;
}

/* Demangled: operator-(double, Matrix const&) */
extern "C" __attribute__((visibility("default"))) int _ZmidRK6Matrix(void) {
    ALOGD("_ZmidRK6Matrix() called");
    return 0;
}

/* Demangled: MonitorDataRate::ini_ava_list() */
extern "C" __attribute__((visibility("default"))) int _ZN15MonitorDataRate12ini_ava_listEv(void) {
    ALOGD("_ZN15MonitorDataRate12ini_ava_listEv() called");
    return 0;
}

/* Demangled: SfSatt::is_test_ekf_model_err() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6SfSatt21is_test_ekf_model_errEv(void) {
    ALOGD("_ZNK6SfSatt21is_test_ekf_model_errEv() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::reset_p_accel_bias() */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF18reset_p_accel_biasEv(void) {
    ALOGD("_ZN9CarAccelB5SubKF18reset_p_accel_biasEv() called");
    return 0;
}

/* Demangled: UdrEkf::restore_position(sf_gnss_msg_struct const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrEkf16restore_positionEPK18sf_gnss_msg_struct(void) {
    ALOGD("_ZN6UdrEkf16restore_positionEPK18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: InertialAtt::update_acc_mean_var(sf_uncalib_sensor_struct) */
extern "C" __attribute__((visibility("default"))) int _ZN11InertialAtt19update_acc_mean_varE24sf_uncalib_sensor_struct(void) {
    ALOGD("_ZN11InertialAtt19update_acc_mean_varE24sf_uncalib_sensor_struct() called");
    return 0;
}

/* Demangled: PdrIsm::~PdrIsm() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIsmD1Ev(void) {
    ALOGD("_ZN6PdrIsmD1Ev() called");
    return 0;
}

/* Demangled: PdrIgp::~PdrIgp() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrIgpD2Ev(void) {
    ALOGD("_ZN6PdrIgpD2Ev() called");
    return 0;
}

/* Demangled: SfLpf::get_default_accel_para() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf22get_default_accel_paraEv(void) {
    ALOGD("_ZN5SfLpf22get_default_accel_paraEv() called");
    return 0;
}

/* Demangled: SfSatt::imu_meas_struct::imu_meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt15imu_meas_structC2Ev(void) {
    ALOGD("_ZN6SfSatt15imu_meas_structC2Ev() called");
    return 0;
}

/* Demangled: SfSatt::comp_ab_intensity() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17comp_ab_intensityEv(void) {
    ALOGD("_ZN6SfSatt17comp_ab_intensityEv() called");
    return 0;
}

/* Demangled: SfSatt::upd_ctrl_para_tot_len() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt21upd_ctrl_para_tot_lenEv(void) {
    ALOGD("_ZN6SfSatt21upd_ctrl_para_tot_lenEv() called");
    return 0;
}

/* Demangled: SfWmm::MAG_SecVarSummationSpecial(SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm26MAG_SecVarSummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void) {
    ALOGD("_ZN5SfWmm26MAG_SecVarSummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_dgad(double) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF8set_dgadEd(void) {
    ALOGD("_ZN9CarAccelB5SubKF8set_dgadEd() called");
    return 0;
}

/* Demangled: UdrUpdTypeSelect::~UdrUpdTypeSelect() */
extern "C" __attribute__((visibility("default"))) int _ZN16UdrUpdTypeSelectD1Ev(void) {
    ALOGD("_ZN16UdrUpdTypeSelectD1Ev() called");
    return 0;
}

/* Demangled: SystemStateControl::comp_cos_val_rp_y(VehBodOrient::less_output_struct const&, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN18SystemStateControl17comp_cos_val_rp_yERKN12VehBodOrient18less_output_structEPdS4_(void) {
    ALOGD("_ZN18SystemStateControl17comp_cos_val_rp_yERKN12VehBodOrient18less_output_structEPdS4_() called");
    return 0;
}

/* Exported Object: dynamic_mode_latch */
extern "C" __attribute__((visibility("default"))) void* dynamic_mode_latch = NULL;

/* Demangled: PdrLpf::get_adv_gnss_1hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf16get_adv_gnss_1hzEv(void) {
    ALOGD("_ZN6PdrLpf16get_adv_gnss_1hzEv() called");
    return 0;
}

/* Exported Object: vtable for UdrStaticDetect */
extern "C" __attribute__((visibility("default"))) void* _ZTV15UdrStaticDetect = NULL;

/* Demangled: SfGb::~SfGb() */
extern "C" __attribute__((visibility("default"))) int _ZN4SfGbD2Ev(void) {
    ALOGD("_ZN4SfGbD2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::free_grp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp8free_grpEv(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp8free_grpEv() called");
    return 0;
}

/* Demangled: Array4x4_Invert */
extern "C" __attribute__((visibility("default"))) int Array4x4_Invert(void) {
    ALOGD("Array4x4_Invert() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Demangled: Pedometer::Pedometer(ConfigParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9PedometerC1ERK12ConfigParams(void) {
    ALOGD("_ZN9PedometerC1ERK12ConfigParams() called");
    return 0;
}

/* Demangled: PdrSatt::PdrSatt() */
extern "C" __attribute__((visibility("default"))) int _ZN7PdrSattC2Ev(void) {
    ALOGD("_ZN7PdrSattC2Ev() called");
    return 0;
}

/* Demangled: mpe_get_fusion_mode */
extern "C" __attribute__((visibility("default"))) int mpe_get_fusion_mode(void) {
    ALOGD("mpe_get_fusion_mode() called");
    return 0;
}

/* Demangled: mov_wei_sample_var(double*, double*, double const*, double const*, double const*, double, double, double, int) */
extern "C" __attribute__((visibility("default"))) int _Z18mov_wei_sample_varPdS_PKdS1_S1_dddi(void) {
    ALOGD("_Z18mov_wei_sample_varPdS_PKdS1_S1_dddi() called");
    return 0;
}

/* Demangled: Barometer::altitude_correction(sf_gnss_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer19altitude_correctionEP18sf_gnss_msg_struct(void) {
    ALOGD("_ZN9Barometer19altitude_correctionEP18sf_gnss_msg_struct() called");
    return 0;
}

/* Demangled: UDR::publish_udr_pvt_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN3UDR22publish_udr_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void) {
    ALOGD("_ZN3UDR22publish_udr_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::det_a_nb_b_dir(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess14det_a_nb_b_dirERKNS_6VboGrpEjj(void) {
    ALOGD("_ZN12VehBodOrient7VboLess14det_a_nb_b_dirERKNS_6VboGrpEjj() called");
    return 0;
}

/* Exported Object: gyr_last_static_temp */
extern "C" __attribute__((visibility("default"))) void* gyr_last_static_temp = NULL;

/* Demangled: SfSatt::set_gyro_bias(double const*, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt13set_gyro_biasEPKdS1_S1_(void) {
    ALOGD("_ZN6SfSatt13set_gyro_biasEPKdS1_S1_() called");
    return 0;
}

/* Demangled: SfIsm::meas_struct::meas_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfIsm11meas_structC2Ev(void) {
    ALOGD("_ZN5SfIsm11meas_structC2Ev() called");
    return 0;
}

/* Demangled: Barometer::set_pre_sps_rds_ts() */
extern "C" __attribute__((visibility("default"))) int _ZN9Barometer18set_pre_sps_rds_tsEv(void) {
    ALOGD("_ZN9Barometer18set_pre_sps_rds_tsEv() called");
    return 0;
}

/* Demangled: SfSatt::set_imu_meas(double, double const*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt12set_imu_measEdPKdS1_(void) {
    ALOGD("_ZN6SfSatt12set_imu_measEdPKdS1_() called");
    return 0;
}

/* Demangled: Pedometer::SsModel::total_model_size() */
extern "C" __attribute__((visibility("default"))) int _ZN9Pedometer7SsModel16total_model_sizeEv(void) {
    ALOGD("_ZN9Pedometer7SsModel16total_model_sizeEv() called");
    return 0;
}

/* Demangled: DataProcess::batch_preprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN11DataProcess16batch_preprocessEv(void) {
    ALOGD("_ZN11DataProcess16batch_preprocessEv() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::guess_forward_backward_by_gad(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient6VboGrp29guess_forward_backward_by_gadEPd(void) {
    ALOGD("_ZN12VehBodOrient6VboGrp29guess_forward_backward_by_gadEPd() called");
    return 0;
}

/* Demangled: PDR::get_mnl_result() */
extern "C" __attribute__((visibility("default"))) int _ZN3PDR14get_mnl_resultEv(void) {
    ALOGD("_ZN3PDR14get_mnl_resultEv() called");
    return 0;
}

/* Demangled: SfLpf::smoop_struct::~smoop_struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf12smoop_structD1Ev(void) {
    ALOGD("_ZN5SfLpf12smoop_structD1Ev() called");
    return 0;
}

/* Demangled: SfSatt::upd_P1_P2_P3() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt12upd_P1_P2_P3Ev(void) {
    ALOGD("_ZN6SfSatt12upd_P1_P2_P3Ev() called");
    return 0;
}

/* Demangled: logically_less_equal(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z20logically_less_equalddd(void) {
    ALOGD("_Z20logically_less_equalddd() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::set_w_meas(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CarAccelB5SubKF10set_w_measEPKd(void) {
    ALOGD("_ZN9CarAccelB5SubKF10set_w_measEPKd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::est_q_based_cvb(VehBodOrient&, VehBodOrient::VboGrp&, VehBodOrient::VboGdcm3&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess15est_q_based_cvbERS_RNS_6VboGrpERNS_8VboGdcm3E(void) {
    ALOGD("_ZN12VehBodOrient7VboLess15est_q_based_cvbERS_RNS_6VboGrpERNS_8VboGdcm3E() called");
    return 0;
}

/* Exported Object: dr_bias_state_1 */
extern "C" __attribute__((visibility("default"))) void* dr_bias_state_1 = NULL;

/* Demangled: SfSatt::set_gp_components(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt17set_gp_componentsEPKd(void) {
    ALOGD("_ZN6SfSatt17set_gp_componentsEPKd() called");
    return 0;
}

/* Demangled: upd_smoo_while_initial(SfLpf::smoop_struct&, double const*) */
extern "C" __attribute__((visibility("default"))) int _Z22upd_smoo_while_initialRN5SfLpf12smoop_structEPKd(void) {
    ALOGD("_Z22upd_smoo_while_initialRN5SfLpf12smoop_structEPKd() called");
    return 0;
}

/* Demangled: MonitorDataRate::copy_indices() const */
extern "C" __attribute__((visibility("default"))) int _ZNK15MonitorDataRate12copy_indicesEv(void) {
    ALOGD("_ZNK15MonitorDataRate12copy_indicesEv() called");
    return 0;
}

/* Demangled: UdrLpf::get_adv_gyro_50hz() */
extern "C" __attribute__((visibility("default"))) int _ZN6UdrLpf17get_adv_gyro_50hzEv(void) {
    ALOGD("_ZN6UdrLpf17get_adv_gyro_50hzEv() called");
    return 0;
}

/* Demangled: SfLpf::get_adv_gnss_lla(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5SfLpf16get_adv_gnss_llaEPd(void) {
    ALOGD("_ZNK5SfLpf16get_adv_gnss_llaEPd() called");
    return 0;
}

/* Demangled: SfWmm::MAG_readMagneticModel(SfWmm::MAGtype_MagneticModel*) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfWmm21MAG_readMagneticModelEPNS_21MAGtype_MagneticModelE(void) {
    ALOGD("_ZN5SfWmm21MAG_readMagneticModelEPNS_21MAGtype_MagneticModelE() called");
    return 0;
}

/* Demangled: UDR::~UDR() */
extern "C" __attribute__((visibility("default"))) int _ZN3UDRD2Ev(void) {
    ALOGD("_ZN3UDRD2Ev() called");
    return 0;
}

/* Demangled: VehBodOrient::VboGrp::get_select_t_from_buff(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12VehBodOrient6VboGrp22get_select_t_from_buffEj(void) {
    ALOGD("_ZNK12VehBodOrient6VboGrp22get_select_t_from_buffEj() called");
    return 0;
}

/* Demangled: sf_str_to_timer(double, int, sf_time_struct*) */
extern "C" __attribute__((visibility("default"))) int _Z15sf_str_to_timerdiP14sf_time_struct(void) {
    ALOGD("_Z15sf_str_to_timerdiP14sf_time_struct() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: acc_final_static_roll */
extern "C" __attribute__((visibility("default"))) void* acc_final_static_roll = NULL;

/* Demangled: PdrEkf::get_P() */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf5get_PEv(void) {
    ALOGD("_ZN6PdrEkf5get_PEv() called");
    return 0;
}

/* Demangled: PdrEkf::set_ins(double*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrEkf7set_insEPdii(void) {
    ALOGD("_ZN6PdrEkf7set_insEPdii() called");
    return 0;
}

/* Demangled: SfSgb::run_three_stage_sgb(double, double const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfSgb19run_three_stage_sgbEdPKdd(void) {
    ALOGD("_ZN5SfSgb19run_three_stage_sgbEdPKdd() called");
    return 0;
}

/* Demangled: PdrLpf::set_akm099xx_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN6PdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb(void) {
    ALOGD("_ZN6PdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb() called");
    return 0;
}

/* Demangled: Matrix::zero() */
extern "C" __attribute__((visibility("default"))) int _ZN6Matrix4zeroEv(void) {
    ALOGD("_ZN6Matrix4zeroEv() called");
    return 0;
}

/* Demangled: SfSatt::upd_state_para_tot_len() */
extern "C" __attribute__((visibility("default"))) int _ZN6SfSatt22upd_state_para_tot_lenEv(void) {
    ALOGD("_ZN6SfSatt22upd_state_para_tot_lenEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::StaticAtt::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum9StaticAtt5R_COVE = NULL;

/* Demangled: InertialStaticMove::get_sm_tar_feas(double*) */
extern "C" __attribute__((visibility("default"))) int _ZN18InertialStaticMove15get_sm_tar_feasEPd(void) {
    ALOGD("_ZN18InertialStaticMove15get_sm_tar_feasEPd() called");
    return 0;
}

/* Demangled: VehBodOrient::VboLess::comp_avg_centripetal_a(VehBodOrient::stat_quat_struct*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN12VehBodOrient7VboLess22comp_avg_centripetal_aEPNS_16stat_quat_structEd(void) {
    ALOGD("_ZN12VehBodOrient7VboLess22comp_avg_centripetal_aEPNS_16stat_quat_structEd() called");
    return 0;
}

/* Demangled: SfLpf::reset_dec_when_hub_dr_changes(MonitorDataRate const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5SfLpf29reset_dec_when_hub_dr_changesERK15MonitorDataRate(void) {
    ALOGD("_ZN5SfLpf29reset_dec_when_hub_dr_changesERK15MonitorDataRate() called");
    return 0;
}

/* Demangled: comp_abs_max(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12comp_abs_maxPdi(void) {
    ALOGD("_Z12comp_abs_maxPdi() called");
    return 0;
}

/* Demangled: CarAccelB::SubKF::get_q_accel_bias() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CarAccelB5SubKF16get_q_accel_biasEv(void) {
    ALOGD("_ZNK9CarAccelB5SubKF16get_q_accel_biasEv() called");
    return 0;
}

/* Exported Object: UdrEkf::UpdLevEnum::GNSSAtt::R_COV */
extern "C" __attribute__((visibility("default"))) void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt5R_COVE = NULL;
