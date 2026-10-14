/*
 * Reverse-Engineered ABI Specification for: libDR.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libDR.so
 */

#ifndef BEGONIA_RE_LIBDR_H
#define BEGONIA_RE_LIBDR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5SfLpfC2ERK12ConfigParams */
/* Demangled: SfLpf::SfLpf(ConfigParams const&) */
int _ZN5SfLpfC2ERK12ConfigParams(void);

/* Symbol: _ZTV5SfLpf */
/* Demangled: vtable for SfLpf */
extern void* _ZTV5SfLpf;

/* Symbol: _ZNK12VehBodOrient6VboGrp22get_select_g_from_buffEjj */
/* Demangled: VehBodOrient::VboGrp::get_select_g_from_buff(unsigned int, unsigned int) const */
int _ZNK12VehBodOrient6VboGrp22get_select_g_from_buffEjj(void);

/* Symbol: matching */
/* Demangled: matching */
extern void* matching;

/* Symbol: _ZN5SfLpf24alloc_and_ini_ptr_to_ptrEii */
/* Demangled: SfLpf::alloc_and_ini_ptr_to_ptr(int, int) */
int _ZN5SfLpf24alloc_and_ini_ptr_to_ptrEii(void);

/* Symbol: _ZN6SfSatt24protect_ekf_time_settingEv */
/* Demangled: SfSatt::protect_ekf_time_setting() */
int _ZN6SfSatt24protect_ekf_time_settingEv(void);

/* Symbol: _ZN3UDR20read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE */
/* Demangled: UDR::read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN3UDR20read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void);

/* Symbol: v3_update_buffer */
/* Demangled: v3_update_buffer */
int v3_update_buffer(void);

/* Symbol: _ZTV5SfSgb */
/* Demangled: vtable for SfSgb */
extern void* _ZTV5SfSgb;

/* Symbol: _ZN6SfSatt16meas_para_structC1Ev */
/* Demangled: SfSatt::meas_para_struct::meas_para_struct() */
int _ZN6SfSatt16meas_para_structC1Ev(void);

/* Symbol: _ZN5SfWmm12MAGtype_DateC2Ev */
/* Demangled: SfWmm::MAGtype_Date::MAGtype_Date() */
int _ZN5SfWmm12MAGtype_DateC2Ev(void);

/* Symbol: Q_MX */
/* Demangled: Q_MX */
extern void* Q_MX;

/* Symbol: _ZN4SfGb12gbuff_structC2Ev */
/* Demangled: SfGb::gbuff_struct::gbuff_struct() */
int _ZN4SfGb12gbuff_structC2Ev(void);

/* Symbol: _ZN10InterpMems11interp_gyroEP18sf_mems_msg_structd */
/* Demangled: InterpMems::interp_gyro(sf_mems_msg_struct*, double) */
int _ZN10InterpMems11interp_gyroEP18sf_mems_msg_structd(void);

/* Symbol: _ZN6Matrix8mMultSymERKS_ */
/* Demangled: Matrix::mMultSym(Matrix const&) */
int _ZN6Matrix8mMultSymERKS_(void);

/* Symbol: _ZN9CarAccelB5SubKF9set_alphaEPKd */
/* Demangled: CarAccelB::SubKF::set_alpha(double const*) */
int _ZN9CarAccelB5SubKF9set_alphaEPKd(void);

/* Symbol: _ZN6UdrLpf28get_icm40607_gyro_para_200hzEv */
/* Demangled: UdrLpf::get_icm40607_gyro_para_200hz() */
int _ZN6UdrLpf28get_icm40607_gyro_para_200hzEv(void);

/* Symbol: dr */
/* Demangled: dr */
extern void* dr;

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticVel5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticVel::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticVel5R_COVE;

/* Symbol: _Z13sf_timer_diff14sf_time_structS_ */
/* Demangled: sf_timer_diff(sf_time_struct, sf_time_struct) */
int _Z13sf_timer_diff14sf_time_structS_(void);

/* Symbol: _ZN5SfSgbD0Ev */
/* Demangled: SfSgb::~SfSgb() */
int _ZN5SfSgbD0Ev(void);

/* Symbol: _ZN5SfWmm24MAG_AllocateSphVarMemoryEi */
/* Demangled: SfWmm::MAG_AllocateSphVarMemory(int) */
int _ZN5SfWmm24MAG_AllocateSphVarMemoryEi(void);

/* Symbol: _ZN6UdrEkf22nhc_measurement_updateEdijj */
/* Demangled: UdrEkf::nhc_measurement_update(double, int, unsigned int, unsigned int) */
int _ZN6UdrEkf22nhc_measurement_updateEdijj(void);

/* Symbol: _ZN18InertialStaticMove18detect_static_moveERK6UdrLpfP18sf_mems_msg_struct */
/* Demangled: InertialStaticMove::detect_static_move(UdrLpf const&, sf_mems_msg_struct*) */
int _ZN18InertialStaticMove18detect_static_moveERK6UdrLpfP18sf_mems_msg_struct(void);

/* Symbol: sm */
/* Demangled: sm */
extern void* sm;

/* Symbol: _ZN6PdrEkf17get_feedback_flagEv */
/* Demangled: PdrEkf::get_feedback_flag() */
int _ZN6PdrEkf17get_feedback_flagEv(void);

/* Symbol: _ZN18SystemStateControl17switch_fine_levelERK6UdrEkf */
/* Demangled: SystemStateControl::switch_fine_level(UdrEkf const&) */
int _ZN18SystemStateControl17switch_fine_levelERK6UdrEkf(void);

/* Symbol: B */
/* Demangled: B */
extern void* B;

/* Symbol: close_location_meter */
/* Demangled: close_location_meter */
extern void* close_location_meter;

/* Symbol: _ZN6UdrEkf11restore_cvbERK6Matrix */
/* Demangled: UdrEkf::restore_cvb(Matrix const&) */
int _ZN6UdrEkf11restore_cvbERK6Matrix(void);

/* Symbol: _ZN6SfSatt18test_pred_x_by_dcmEv */
/* Demangled: SfSatt::test_pred_x_by_dcm() */
int _ZN6SfSatt18test_pred_x_by_dcmEv(void);

/* Symbol: _ZN9CarAccelB3RtsD1Ev */
/* Demangled: CarAccelB::Rts::~Rts() */
int _ZN9CarAccelB3RtsD1Ev(void);

/* Symbol: _ZNK14SimpleGyroBias18get_poly_gyro_biasEPd */
/* Demangled: SimpleGyroBias::get_poly_gyro_bias(double*) const */
int _ZNK14SimpleGyroBias18get_poly_gyro_biasEPd(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _ZN10InterpMemsD2Ev */
/* Demangled: InterpMems::~InterpMems() */
int _ZN10InterpMemsD2Ev(void);

/* Symbol: _ZN6SfSatt16ctrl_para_structD1Ev */
/* Demangled: SfSatt::ctrl_para_struct::~ctrl_para_struct() */
int _ZN6SfSatt16ctrl_para_structD1Ev(void);

/* Symbol: _ZNK6SfSatt21is_test_reset_p_of_abEv */
/* Demangled: SfSatt::is_test_reset_p_of_ab() const */
int _ZNK6SfSatt21is_test_reset_p_of_abEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSAtt10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSAtt::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt10R_UNIT_COVE;

/* Symbol: _ZN12VehBodOrient6VboGrp12get_buff_idxEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_idx() */
int _ZN12VehBodOrient6VboGrp12get_buff_idxEv(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZN9CarAccelB3Rts14reforward_filtEv */
/* Demangled: CarAccelB::Rts::reforward_filt() */
int _ZN9CarAccelB3Rts14reforward_filtEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticVel10R_INIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticVel::R_INIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticVel10R_INIT_COVE;

/* Symbol: _ZN12VehBodOrient6VboGrp20comp_mean_of_gad_varEPKNS_9VboFbEnum6FbTypeEPdS5_ */
/* Demangled: VehBodOrient::VboGrp::comp_mean_of_gad_var(VehBodOrient::VboFbEnum::FbType const*, double*, double*) */
int _ZN12VehBodOrient6VboGrp20comp_mean_of_gad_varEPKNS_9VboFbEnum6FbTypeEPdS5_(void);

/* Symbol: _ZN5PdrGb16comp_gyro_biasesERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structE */
/* Demangled: PdrGb::comp_gyro_biases(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&) */
int _ZN5PdrGb16comp_gyro_biasesERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structE(void);

/* Symbol: _ZN11PdrMheading11meas_structC1Ev */
/* Demangled: PdrMheading::meas_struct::meas_struct() */
int _ZN11PdrMheading11meas_structC1Ev(void);

/* Symbol: _ZN14SfStaticDetectD2Ev */
/* Demangled: SfStaticDetect::~SfStaticDetect() */
int _ZN14SfStaticDetectD2Ev(void);

/* Symbol: _Z9safe_asind */
/* Demangled: safe_asin(double) */
int _Z9safe_asind(void);

/* Symbol: _ZN5SfWmm10MAG_GetDegEdPKdPd */
/* Demangled: SfWmm::MAG_GetDeg(double, double const*, double*) */
int _ZN5SfWmm10MAG_GetDegEdPKdPd(void);

/* Symbol: _ZNK9CarAccelB5SubKF15get_beta_var_sfEv */
/* Demangled: CarAccelB::SubKF::get_beta_var_sf() const */
int _ZNK9CarAccelB5SubKF15get_beta_var_sfEv(void);

/* Symbol: mpe_set_radio_information */
/* Demangled: mpe_set_radio_information */
int mpe_set_radio_information(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN6SfSatt7ini_ekfEv */
/* Demangled: SfSatt::ini_ekf() */
int _ZN6SfSatt7ini_ekfEv(void);

/* Symbol: _ZN6SfSattD0Ev */
/* Demangled: SfSatt::~SfSatt() */
int _ZN6SfSattD0Ev(void);

/* Symbol: _Z15sf_check_ts_secdP14sf_time_struct */
/* Demangled: sf_check_ts_sec(double, sf_time_struct*) */
int _Z15sf_check_ts_secdP14sf_time_struct(void);

/* Symbol: _ZN6UdrEkf12get_use_flagEv */
/* Demangled: UdrEkf::get_use_flag() */
int _ZN6UdrEkf12get_use_flagEv(void);

/* Symbol: _ZN5SfIsm21get_meas_and_past_avgEi */
/* Demangled: SfIsm::get_meas_and_past_avg(int) */
int _ZN5SfIsm21get_meas_and_past_avgEi(void);

/* Symbol: _ZNK5SfLpf17get_adv_gyro_tempEPd */
/* Demangled: SfLpf::get_adv_gyro_temp(double*) const */
int _ZNK5SfLpf17get_adv_gyro_tempEPd(void);

/* Symbol: _ZN6SfSatt16select_meas_typeEv */
/* Demangled: SfSatt::select_meas_type() */
int _ZN6SfSatt16select_meas_typeEv(void);

/* Symbol: _ZNK6SfSatt21is_test_turn_off_predEv */
/* Demangled: SfSatt::is_test_turn_off_pred() const */
int _ZNK6SfSatt21is_test_turn_off_predEv(void);

/* Symbol: _ZN14SfStaticDetect7averageEPdi */
/* Demangled: SfStaticDetect::average(double*, int) */
int _ZN14SfStaticDetect7averageEPdi(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp12get_buff_lenEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_len() const */
int _ZNK12VehBodOrient6VboGrp12get_buff_lenEv(void);

/* Symbol: _ZN5SfSgb11stat_structC2Ev */
/* Demangled: SfSgb::stat_struct::stat_struct() */
int _ZN5SfSgb11stat_structC2Ev(void);

/* Symbol: mpe_get_euler_angle */
/* Demangled: mpe_get_euler_angle */
int mpe_get_euler_angle(void);

/* Symbol: _ZN11PdrMheading15set_uncalib_magEPK18sf_mems_msg_struct */
/* Demangled: PdrMheading::set_uncalib_mag(sf_mems_msg_struct const*) */
int _ZN11PdrMheading15set_uncalib_magEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN11DataProcess14rt_postprocessEv */
/* Demangled: DataProcess::rt_postprocess() */
int _ZN11DataProcess14rt_postprocessEv(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct12decrease_varEiiiiPKd */
/* Demangled: CarAccelB::sf_pattern_struct::decrease_var(int, int, int, int, double const*) const */
int _ZNK9CarAccelB17sf_pattern_struct12decrease_varEiiiiPKd(void);

/* Symbol: _ZN14GnssAccelDecelD1Ev */
/* Demangled: GnssAccelDecel::~GnssAccelDecel() */
int _ZN14GnssAccelDecelD1Ev(void);

/* Symbol: _ZNK5SfLpf16get_adv_mag_tempEPd */
/* Demangled: SfLpf::get_adv_mag_temp(double*) const */
int _ZNK5SfLpf16get_adv_mag_tempEPd(void);

/* Symbol: _ZN6SfSatt15alloc_ctrl_paraEv */
/* Demangled: SfSatt::alloc_ctrl_para() */
int _ZN6SfSatt15alloc_ctrl_paraEv(void);

/* Symbol: _ZN6SfSatt18reset_p_accel_biasEv */
/* Demangled: SfSatt::reset_p_accel_bias() */
int _ZN6SfSatt18reset_p_accel_biasEv(void);

/* Symbol: _ZN9Barometer10normal_iniEv */
/* Demangled: Barometer::normal_ini() */
int _ZN9Barometer10normal_iniEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticVel4NameE */
/* Demangled: UdrEkf::UpdLevEnum::StaticVel::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticVel4NameE;

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_struct9reset_cntEv */
/* Demangled: SystemStateControl::check_cvb_dir_struct::reset_cnt() */
int _ZN18SystemStateControl20check_cvb_dir_struct9reset_cntEv(void);

/* Symbol: array_multiply */
/* Demangled: array_multiply */
int array_multiply(void);

/* Symbol: sensor_input_data_resampling_preparation */
/* Demangled: sensor_input_data_resampling_preparation */
int sensor_input_data_resampling_preparation(void);

/* Symbol: _ZN11DataProcess15rt_forward_gnssEv */
/* Demangled: DataProcess::rt_forward_gnss() */
int _ZN11DataProcess15rt_forward_gnssEv(void);

/* Symbol: _ZN16UdrUpdTypeSelectC1ERK12ConfigParams */
/* Demangled: UdrUpdTypeSelect::UdrUpdTypeSelect(ConfigParams const&) */
int _ZN16UdrUpdTypeSelectC1ERK12ConfigParams(void);

/* Symbol: _ZN6PdrIgp17delay_buff_structC2Ev */
/* Demangled: PdrIgp::delay_buff_struct::delay_buff_struct() */
int _ZN6PdrIgp17delay_buff_structC2Ev(void);

/* Symbol: _ZN6PdrIsm10comp_w_iqrEv */
/* Demangled: PdrIsm::comp_w_iqr() */
int _ZN6PdrIsm10comp_w_iqrEv(void);

/* Symbol: _ZN11DataProcess16get_mems_containEv */
/* Demangled: DataProcess::get_mems_contain() */
int _ZN11DataProcess16get_mems_containEv(void);

/* Symbol: _ZN15UdrStaticDetect20get_last_static_gyroEv */
/* Demangled: UdrStaticDetect::get_last_static_gyro() */
int _ZN15UdrStaticDetect20get_last_static_gyroEv(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm3D1Ev */
/* Demangled: VehBodOrient::VboGdcm3::~VboGdcm3() */
int _ZN12VehBodOrient8VboGdcm3D1Ev(void);

/* Symbol: update_interval_buffer */
/* Demangled: update_interval_buffer */
int update_interval_buffer(void);

/* Symbol: _ZN6PdrEkf8init_matEv */
/* Demangled: PdrEkf::init_mat() */
int _ZN6PdrEkf8init_matEv(void);

/* Symbol: _Z21deep_copy_gnss_structR18sf_gnss_msg_structRKS_ */
/* Demangled: deep_copy_gnss_struct(sf_gnss_msg_struct&, sf_gnss_msg_struct const&) */
int _Z21deep_copy_gnss_structR18sf_gnss_msg_structRKS_(void);

/* Symbol: _ZN9CarAccelBD2Ev */
/* Demangled: CarAccelB::~CarAccelB() */
int _ZN9CarAccelBD2Ev(void);

/* Symbol: best_run_ax_num */
/* Demangled: best_run_ax_num */
int best_run_ax_num(void);

/* Symbol: Pre_Imu_orig */
/* Demangled: Pre_Imu_orig */
extern void* Pre_Imu_orig;

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _ZN6Matrix3negEv */
/* Demangled: Matrix::neg() */
int _ZN6Matrix3negEv(void);

/* Symbol: _ZN6SfSatt21set_dcm_gb_state_paraEv */
/* Demangled: SfSatt::set_dcm_gb_state_para() */
int _ZN6SfSatt21set_dcm_gb_state_paraEv(void);

/* Symbol: _Z6strtoiPKc */
/* Demangled: strtoi(char const*) */
int _Z6strtoiPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: mpe_get_global_acceleration */
/* Demangled: mpe_get_global_acceleration */
int mpe_get_global_acceleration(void);

/* Symbol: _ZN11PdrMheadingC1Ev */
/* Demangled: PdrMheading::PdrMheading() */
int _ZN11PdrMheadingC1Ev(void);

/* Symbol: _ZN11DataProcess17rt_eliminate_dataEv */
/* Demangled: DataProcess::rt_eliminate_data() */
int _ZN11DataProcess17rt_eliminate_dataEv(void);

/* Symbol: _Z10inv_matrixiR6MatrixS0_ */
/* Demangled: inv_matrix(int, Matrix&, Matrix&) */
int _Z10inv_matrixiR6MatrixS0_(void);

/* Symbol: best_best_ax */
/* Demangled: best_best_ax */
int best_best_ax(void);

/* Symbol: _ZN5SfSgb19check_whether_resetEv */
/* Demangled: SfSgb::check_whether_reset() */
int _ZN5SfSgb19check_whether_resetEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect6get_muENS_6MuEnum6MuTypeE */
/* Demangled: UdrUpdTypeSelect::get_mu(UdrUpdTypeSelect::MuEnum::MuType) */
int _ZN16UdrUpdTypeSelect6get_muENS_6MuEnum6MuTypeE(void);

/* Symbol: _ZN6UdrLpf21set_adv_gnss_lpf_paraEv */
/* Demangled: UdrLpf::set_adv_gnss_lpf_para() */
int _ZN6UdrLpf21set_adv_gnss_lpf_paraEv(void);

/* Symbol: acc_final_adj_bias */
/* Demangled: acc_final_adj_bias */
extern void* acc_final_adj_bias;

/* Symbol: gyr_static_reset_flag */
/* Demangled: gyr_static_reset_flag */
extern void* gyr_static_reset_flag;

/* Symbol: _ZN6PdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_icm40607_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN11DataProcess14get_gnss_r_ptrEi */
/* Demangled: DataProcess::get_gnss_r_ptr(int) */
int _ZN11DataProcess14get_gnss_r_ptrEi(void);

/* Symbol: _ZN6UdrLpfC1ERK12ConfigParams */
/* Demangled: UdrLpf::UdrLpf(ConfigParams const&) */
int _ZN6UdrLpfC1ERK12ConfigParams(void);

/* Symbol: _ZN5SfWmmC2Ev */
/* Demangled: SfWmm::SfWmm() */
int _ZN5SfWmmC2Ev(void);

/* Symbol: _ZN18InertialStaticMove12comp_sm_distEPdS0_ */
/* Demangled: InertialStaticMove::comp_sm_dist(double*, double*) */
int _ZN18InertialStaticMove12comp_sm_distEPdS0_(void);

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct18accumulate_pos_negERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::coarse_dir_struct::accumulate_pos_neg(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl17coarse_dir_struct18accumulate_pos_negERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN18SystemStateControl26coarse_substitute_poor_pfbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::coarse_substitute_poor_pfb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl26coarse_substitute_poor_pfbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN6UdrEkf8get_InnoEi */
/* Demangled: UdrEkf::get_Inno(int) */
int _ZN6UdrEkf8get_InnoEi(void);

/* Symbol: _ZN18SystemStateControl32using_ekf_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::using_ekf_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl32using_ekf_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: _ZN12VehBodOrient7VboLess14det_g_nb_b_dirERKNS_6VboGrpEjj */
/* Demangled: VehBodOrient::VboLess::det_g_nb_b_dir(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
int _ZN12VehBodOrient7VboLess14det_g_nb_b_dirERKNS_6VboGrpEjj(void);

/* Symbol: ATT_VAR_ACC */
/* Demangled: ATT_VAR_ACC */
extern void* ATT_VAR_ACC;

/* Symbol: _ZN11DataProcess10gnss_inputEP18sf_gnss_msg_struct */
/* Demangled: DataProcess::gnss_input(sf_gnss_msg_struct*) */
int _ZN11DataProcess10gnss_inputEP18sf_gnss_msg_struct(void);

/* Symbol: _ZN11DataProcess13transfer_axisEP24sf_uncalib_sensor_structiii */
/* Demangled: DataProcess::transfer_axis(sf_uncalib_sensor_struct*, int, int, int) */
int _ZN11DataProcess13transfer_axisEP24sf_uncalib_sensor_structiii(void);

/* Symbol: _ZN12VehBodOrient7VboLess14comp_avg_dsd2dEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_dsd2d(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess14comp_avg_dsd2dEPNS_16stat_quat_structEd(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _ZN5SfIsm20classify_static_moveERK15MonitorDataRatePK18sf_mems_msg_struct */
/* Demangled: SfIsm::classify_static_move(MonitorDataRate const&, sf_mems_msg_struct const*) */
int _ZN5SfIsm20classify_static_moveERK15MonitorDataRatePK18sf_mems_msg_struct(void);

/* Symbol: _ZTV6PdrLpf */
/* Demangled: vtable for PdrLpf */
extern void* _ZTV6PdrLpf;

/* Symbol: _ZN6SfSatt18gen_sys_cov_matrixEv */
/* Demangled: SfSatt::gen_sys_cov_matrix() */
int _ZN6SfSatt18gen_sys_cov_matrixEv(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZN3PDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct */
/* Demangled: PDR::process(MonitorDataRate&, sf_gnss_msg_struct const*, sf_mems_msg_struct const*) */
int _ZN3PDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct(void);

/* Symbol: _ZN6SfSatt18set_ekf_var_statesEv */
/* Demangled: SfSatt::set_ekf_var_states() */
int _ZN6SfSatt18set_ekf_var_statesEv(void);

/* Symbol: _ZN9CarAccelB10rts_struct10reallocateEii */
/* Demangled: CarAccelB::rts_struct::reallocate(int, int) */
int _ZN9CarAccelB10rts_struct10reallocateEii(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticVel10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticVel::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticVel10R_UNIT_COVE;

/* Symbol: _ZN11InertialAtt14cos_similarityE24sf_uncalib_sensor_structS0_ */
/* Demangled: InertialAtt::cos_similarity(sf_uncalib_sensor_struct, sf_uncalib_sensor_struct) */
int _ZN11InertialAtt14cos_similarityE24sf_uncalib_sensor_structS0_(void);

/* Symbol: _ZN18SystemStateControl20upd_rough_cvb_level2ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level2(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl20upd_rough_cvb_level2ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZTV6PdrSgb */
/* Demangled: vtable for PdrSgb */
extern void* _ZTV6PdrSgb;

/* Symbol: _ZN6PdrIsm10comp_w_rngEv */
/* Demangled: PdrIsm::comp_w_rng() */
int _ZN6PdrIsm10comp_w_rngEv(void);

/* Symbol: _ZN6UdrEkf17gnss_accel_structC1Ev */
/* Demangled: UdrEkf::gnss_accel_struct::gnss_accel_struct() */
int _ZN6UdrEkf17gnss_accel_structC1Ev(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: _ZN11PdrMheading16dyaw_nv_v_structC2Ev */
/* Demangled: PdrMheading::dyaw_nv_v_struct::dyaw_nv_v_struct() */
int _ZN11PdrMheading16dyaw_nv_v_structC2Ev(void);

/* Symbol: _ZN9CarAccelB5SubKF21upd_var_dot_gyro_biasEPKd */
/* Demangled: CarAccelB::SubKF::upd_var_dot_gyro_bias(double const*) */
int _ZN9CarAccelB5SubKF21upd_var_dot_gyro_biasEPKd(void);

/* Symbol: _ZN12VehBodOrient6VboGrp13is_noisy_measEdddd */
/* Demangled: VehBodOrient::VboGrp::is_noisy_meas(double, double, double, double) */
int _ZN12VehBodOrient6VboGrp13is_noisy_measEdddd(void);

/* Symbol: _Z11has_invalidPKdi */
/* Demangled: has_invalid(double const*, int) */
int _Z11has_invalidPKdi(void);

/* Symbol: _ZN15MonitorDataRate21monitor_hub_sensor_drEdj */
/* Demangled: MonitorDataRate::monitor_hub_sensor_dr(double, unsigned int) */
int _ZN15MonitorDataRate21monitor_hub_sensor_drEdj(void);

/* Symbol: moving_avg */
/* Demangled: moving_avg */
int moving_avg(void);

/* Symbol: acc_last_gps_sec */
/* Demangled: acc_last_gps_sec */
extern void* acc_last_gps_sec;

/* Symbol: _ZN5SfSgb7copy_gbEv */
/* Demangled: SfSgb::copy_gb() */
int _ZN5SfSgb7copy_gbEv(void);

/* Symbol: _ZN11DataProcess21sensor_value_in_rangeEddd */
/* Demangled: DataProcess::sensor_value_in_range(double, double, double) */
int _ZN11DataProcess21sensor_value_in_rangeEddd(void);

/* Symbol: _ZN15MonitorDataRateC1ERK12ConfigParams */
/* Demangled: MonitorDataRate::MonitorDataRate(ConfigParams const&) */
int _ZN15MonitorDataRateC1ERK12ConfigParams(void);

/* Symbol: v3_noise_detected */
/* Demangled: v3_noise_detected */
int v3_noise_detected(void);

/* Symbol: _ZN6PdrLpf17get_adv_gyro_50hzEv */
/* Demangled: PdrLpf::get_adv_gyro_50hz() */
int _ZN6PdrLpf17get_adv_gyro_50hzEv(void);

/* Symbol: _ZN6PdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_mmc5603_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6PdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_bmi160_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct13stop_feedbackEv */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::stop_feedback() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct13stop_feedbackEv(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct19reset_stop_feedbackEv */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::reset_stop_feedback() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct19reset_stop_feedbackEv(void);

/* Symbol: _ZN18SystemStateControl20upd_rough_cvb_level0ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level0(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl20upd_rough_cvb_level0ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: ACC_correct */
/* Demangled: ACC_correct */
extern void* ACC_correct;

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN5SfIsm14results_structC2Ev */
/* Demangled: SfIsm::results_struct::results_struct() */
int _ZN5SfIsm14results_structC2Ev(void);

/* Symbol: _ZN6Matrix2mTERKS_ */
/* Demangled: Matrix::mT(Matrix const&) */
int _ZN6Matrix2mTERKS_(void);

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct5resetEv */
/* Demangled: SystemStateControl::coarse_dir_struct::reset() */
int _ZN18SystemStateControl17coarse_dir_struct5resetEv(void);

/* Symbol: _ZN8WatchdogD2Ev */
/* Demangled: Watchdog::~Watchdog() */
int _ZN8WatchdogD2Ev(void);

/* Symbol: _ZN11DataProcess14get_gnss_r_ptrEv */
/* Demangled: DataProcess::get_gnss_r_ptr() */
int _ZN11DataProcess14get_gnss_r_ptrEv(void);

/* Symbol: _ZN5SfLpf14dec_filt_accelEPK18sf_mems_msg_struct */
/* Demangled: SfLpf::dec_filt_accel(sf_mems_msg_struct const*) */
int _ZN5SfLpf14dec_filt_accelEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN9Barometer12do_baro_smooEv */
/* Demangled: Barometer::do_baro_smoo() */
int _ZN9Barometer12do_baro_smooEv(void);

/* Symbol: _ZN9CarAccelB18sub_kf_buff_structD2Ev */
/* Demangled: CarAccelB::sub_kf_buff_struct::~sub_kf_buff_struct() */
int _ZN9CarAccelB18sub_kf_buff_structD2Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess17cyclic_jacobi_eigEPdS1_S1_i */
/* Demangled: VehBodOrient::VboLess::cyclic_jacobi_eig(double*, double*, double*, int) */
int _ZN12VehBodOrient7VboLess17cyclic_jacobi_eigEPdS1_S1_i(void);

/* Symbol: mpe_calculate_GEO_rotation_vector */
/* Demangled: mpe_calculate_GEO_rotation_vector */
int mpe_calculate_GEO_rotation_vector(void);

/* Symbol: _Z7eul2CxyR6MatrixS0_ */
/* Demangled: eul2Cxy(Matrix&, Matrix&) */
int _Z7eul2CxyR6MatrixS0_(void);

/* Symbol: _ZN9CarAccelB5SubKF8set_betaEPKd */
/* Demangled: CarAccelB::SubKF::set_beta(double const*) */
int _ZN9CarAccelB5SubKF8set_betaEPKd(void);

/* Symbol: acc_static_gps_cnt */
/* Demangled: acc_static_gps_cnt */
extern void* acc_static_gps_cnt;

/* Symbol: acc_sum_roll */
/* Demangled: acc_sum_roll */
extern void* acc_sum_roll;

/* Symbol: _ZN6SfSatt36get_general_dyn_coef_matrix_gp_gb_abER6Matrix */
/* Demangled: SfSatt::get_general_dyn_coef_matrix_gp_gb_ab(Matrix&) */
int _ZN6SfSatt36get_general_dyn_coef_matrix_gp_gb_abER6Matrix(void);

/* Symbol: _ZN18InertialStaticMove8interp1qEddddd */
/* Demangled: InertialStaticMove::interp1q(double, double, double, double, double) */
int _ZN18InertialStaticMove8interp1qEddddd(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _Z18calc_nmea_checksumPKc */
/* Demangled: calc_nmea_checksum(char const*) */
int _Z18calc_nmea_checksumPKc(void);

/* Symbol: _ZN9CarAccelB5SubKF17set_get_gnss_flagEb */
/* Demangled: CarAccelB::SubKF::set_get_gnss_flag(bool) */
int _ZN9CarAccelB5SubKF17set_get_gnss_flagEb(void);

/* Symbol: _ZN3UDR15apply_cbv_resetEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::apply_cbv_reset(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR15apply_cbv_resetEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN18SystemStateControl30does_get_fine_cvb_in_sys_levelEv */
/* Demangled: SystemStateControl::does_get_fine_cvb_in_sys_level() */
int _ZN18SystemStateControl30does_get_fine_cvb_in_sys_levelEv(void);

/* Symbol: _ZNK9CarAccelB3Rts12wei_avg_by_pERK6MatrixS3_S3_S3_RS1_ */
/* Demangled: CarAccelB::Rts::wei_avg_by_p(Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
int _ZNK9CarAccelB3Rts12wei_avg_by_pERK6MatrixS3_S3_S3_RS1_(void);

/* Symbol: _ZN6UdrEkf16get_vel_dir_predEv */
/* Demangled: UdrEkf::get_vel_dir_pred() */
int _ZN6UdrEkf16get_vel_dir_predEv(void);

/* Symbol: _ZN6PdrSgbC2Ev */
/* Demangled: PdrSgb::PdrSgb() */
int _ZN6PdrSgbC2Ev(void);

/* Symbol: _ZNK6MatrixmiERKS_ */
/* Demangled: Matrix::operator-(Matrix const&) const */
int _ZNK6MatrixmiERKS_(void);

/* Symbol: _ZN6SfSatt33get_general_dyn_coef_matrix_gp_gbER6Matrix */
/* Demangled: SfSatt::get_general_dyn_coef_matrix_gp_gb(Matrix&) */
int _ZN6SfSatt33get_general_dyn_coef_matrix_gp_gbER6Matrix(void);

/* Symbol: ts */
/* Demangled: ts */
extern void* ts;

/* Symbol: _ZN11PdrMheading10out_structC1Ev */
/* Demangled: PdrMheading::out_struct::out_struct() */
int _ZN11PdrMheading10out_structC1Ev(void);

/* Symbol: _ZN6MatrixclEii */
/* Demangled: Matrix::operator()(int, int) */
int _ZN6MatrixclEii(void);

/* Symbol: _ZN5SfLpf11general_lpfERNS_12smoop_structEPKd */
/* Demangled: SfLpf::general_lpf(SfLpf::smoop_struct&, double const*) */
int _ZN5SfLpf11general_lpfERNS_12smoop_structEPKd(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_structD2Ev */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::~nw_shape_struct() */
int _ZN12VehBodOrient7VboLess15nw_shape_structD2Ev(void);

/* Symbol: count_erasing_reason */
/* Demangled: count_erasing_reason */
extern void* count_erasing_reason;

/* Symbol: v3_sort */
/* Demangled: v3_sort */
int v3_sort(void);

/* Symbol: _ZN6SfSatt23assign_intensity_into_rERK6Matrix */
/* Demangled: SfSatt::assign_intensity_into_r(Matrix const&) */
int _ZN6SfSatt23assign_intensity_into_rERK6Matrix(void);

/* Symbol: _Z18rounding_to_xdigitPfi */
/* Demangled: rounding_to_xdigit(float*, int) */
int _Z18rounding_to_xdigitPfi(void);

/* Symbol: _ZN11DataProcess15from_enu_to_nedEP24sf_uncalib_sensor_struct */
/* Demangled: DataProcess::from_enu_to_ned(sf_uncalib_sensor_struct*) */
int _ZN11DataProcess15from_enu_to_nedEP24sf_uncalib_sensor_struct(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6PdrIgpC1Ev */
/* Demangled: PdrIgp::PdrIgp() */
int _ZN6PdrIgpC1Ev(void);

/* Symbol: _Z10ascend_cmpPKvS0_ */
/* Demangled: ascend_cmp(void const*, void const*) */
int _Z10ascend_cmpPKvS0_(void);

/* Symbol: _ZN11DataProcessD1Ev */
/* Demangled: DataProcess::~DataProcess() */
int _ZN11DataProcessD1Ev(void);

/* Symbol: _ZN5SfLpf19smoop_result_structD2Ev */
/* Demangled: SfLpf::smoop_result_struct::~smoop_result_struct() */
int _ZN5SfLpf19smoop_result_structD2Ev(void);

/* Symbol: _ZN5SfWmm24MAG_RotateMagneticVectorERKNS_22MAGtype_CoordSphericalERKNS_21MAGtype_CoordGeodeticERKNS_23MAGtype_MagneticResultsEPS6_ */
/* Demangled: SfWmm::MAG_RotateMagneticVector(SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_MagneticResults const&, SfWmm::MAGtype_MagneticResults*) */
int _ZN5SfWmm24MAG_RotateMagneticVectorERKNS_22MAGtype_CoordSphericalERKNS_21MAGtype_CoordGeodeticERKNS_23MAGtype_MagneticResultsEPS6_(void);

/* Symbol: _ZN9CarAccelB15upd_kf_buff_imuEPKdS1_ */
/* Demangled: CarAccelB::upd_kf_buff_imu(double const*, double const*) */
int _ZN9CarAccelB15upd_kf_buff_imuEPKdS1_(void);

/* Symbol: _ZNK14GnssAccelDecel13get_gad_valueENS_7GadEnum7GadTypeEi */
/* Demangled: GnssAccelDecel::get_gad_value(GnssAccelDecel::GadEnum::GadType, int) const */
int _ZNK14GnssAccelDecel13get_gad_valueENS_7GadEnum7GadTypeEi(void);

/* Symbol: _ZNK9CarAccelB5SubKF10get_statesEv */
/* Demangled: CarAccelB::SubKF::get_states() const */
int _ZNK9CarAccelB5SubKF10get_statesEv(void);

/* Symbol: _ZN14SimpleGyroBias6movavgEddi */
/* Demangled: SimpleGyroBias::movavg(double, double, int) */
int _ZN14SimpleGyroBias6movavgEddi(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStartD1Ev */
/* Demangled: VehBodOrient::VboFakeStart::~VboFakeStart() */
int _ZN12VehBodOrient12VboFakeStartD1Ev(void);

/* Symbol: gyro_avg_buf */
/* Demangled: gyro_avg_buf */
extern void* gyro_avg_buf;

/* Symbol: _ZN5SfSgb14results_structC1Ev */
/* Demangled: SfSgb::results_struct::results_struct() */
int _ZN5SfSgb14results_structC1Ev(void);

/* Symbol: _ZN5SfWmm10MAG_TMfwd4EddddPdddddiddS0_S0_S0_S0_ */
/* Demangled: SfWmm::MAG_TMfwd4(double, double, double, double, double*, double, double, double, double, int, double, double, double*, double*, double*, double*) */
int _ZN5SfWmm10MAG_TMfwd4EddddPdddddiddS0_S0_S0_S0_(void);

/* Symbol: _ZN5SfWmm9MAG_ErrorEi */
/* Demangled: SfWmm::MAG_Error(int) */
int _ZN5SfWmm9MAG_ErrorEi(void);

/* Symbol: _ZN9CarAccelB5SubKF31comp_discrete_process_noise_varEv */
/* Demangled: CarAccelB::SubKF::comp_discrete_process_noise_var() */
int _ZN9CarAccelB5SubKF31comp_discrete_process_noise_varEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSVel10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSVel::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSVel10R_UNIT_COVE;

/* Symbol: mapNodeCompany */
/* Demangled: mapNodeCompany */
extern void* mapNodeCompany;

/* Symbol: _ZN7PdrSatt20upd_grav_proj_statusERKN5SfIsm14results_structEPKdS5_ */
/* Demangled: PdrSatt::upd_grav_proj_status(SfIsm::results_struct const&, double const*, double const*) */
int _ZN7PdrSatt20upd_grav_proj_statusERKN5SfIsm14results_structEPKdS5_(void);

/* Symbol: _ZN6MatrixC2EiPKd */
/* Demangled: Matrix::Matrix(int, double const*) */
int _ZN6MatrixC2EiPKd(void);

/* Symbol: _ZN5SfWmm21MAG_DegreeToDMSstringEdPd */
/* Demangled: SfWmm::MAG_DegreeToDMSstring(double, double*) */
int _ZN5SfWmm21MAG_DegreeToDMSstringEdPd(void);

/* Symbol: _ZN9CarAccelB5SubKF9reset_iadEv */
/* Demangled: CarAccelB::SubKF::reset_iad() */
int _ZN9CarAccelB5SubKF9reset_iadEv(void);

/* Symbol: _ZN18SystemStateControl29ekf_cvb_to_check_ekf_fine_cvbEv */
/* Demangled: SystemStateControl::ekf_cvb_to_check_ekf_fine_cvb() */
int _ZN18SystemStateControl29ekf_cvb_to_check_ekf_fine_cvbEv(void);

/* Symbol: _ZN13CloneNearGnss16upd_nearest_gnssERP18sf_gnss_msg_struct */
/* Demangled: CloneNearGnss::upd_nearest_gnss(sf_gnss_msg_struct*&) */
int _ZN13CloneNearGnss16upd_nearest_gnssERP18sf_gnss_msg_struct(void);

/* Symbol: _ZN11DataProcess14get_reset_flagEv */
/* Demangled: DataProcess::get_reset_flag() */
int _ZN11DataProcess14get_reset_flagEv(void);

/* Symbol: _ZN9CarAccelB5SubKF26comp_mag_centripetal_accelEPKdR6Matrix */
/* Demangled: CarAccelB::SubKF::comp_mag_centripetal_accel(double const*, Matrix&) */
int _ZN9CarAccelB5SubKF26comp_mag_centripetal_accelEPKdR6Matrix(void);

/* Symbol: _ZN6UdrEkf7set_p2aER6Matrix */
/* Demangled: UdrEkf::set_p2a(Matrix&) */
int _ZN6UdrEkf7set_p2aER6Matrix(void);

/* Symbol: _ZN6UdrLpf20set_adv_mag_lpf_paraEv */
/* Demangled: UdrLpf::set_adv_mag_lpf_para() */
int _ZN6UdrLpf20set_adv_mag_lpf_paraEv(void);

/* Symbol: _ZN15PdrMotionDetect20update_smooth_statusEv */
/* Demangled: PdrMotionDetect::update_smooth_status() */
int _ZN15PdrMotionDetect20update_smooth_statusEv(void);

/* Symbol: _ZN5SfSgb8set_measEdPKdd */
/* Demangled: SfSgb::set_meas(double, double const*, double) */
int _ZN5SfSgb8set_measEdPKdd(void);

/* Symbol: _Z19norm_any_len_vectorRK6Matrix */
/* Demangled: norm_any_len_vector(Matrix const&) */
int _Z19norm_any_len_vectorRK6Matrix(void);

/* Symbol: _ZN6SfSatt25comp_indirect_inno_ng_dcmEv */
/* Demangled: SfSatt::comp_indirect_inno_ng_dcm() */
int _ZN6SfSatt25comp_indirect_inno_ng_dcmEv(void);

/* Symbol: _ZTV6SfSatt */
/* Demangled: vtable for SfSatt */
extern void* _ZTV6SfSatt;

/* Symbol: _ZN12VehBodOrient6VboGrp17reset_dir_historyEv */
/* Demangled: VehBodOrient::VboGrp::reset_dir_history() */
int _ZN12VehBodOrient6VboGrp17reset_dir_historyEv(void);

/* Symbol: _ZN5SfIsm18get_basic_feas_lenEv */
/* Demangled: SfIsm::get_basic_feas_len() */
int _ZN5SfIsm18get_basic_feas_lenEv(void);

/* Symbol: _ZN6PdrLpf21set_adv_gnss_lpf_paraEv */
/* Demangled: PdrLpf::set_adv_gnss_lpf_para() */
int _ZN6PdrLpf21set_adv_gnss_lpf_paraEv(void);

/* Symbol: _ZN5SfLpf21set_default_dec_parasEN6sensor12SensorIDEnum12SensorIDTypeEiRNS_12smoop_structERb */
/* Demangled: SfLpf::set_default_dec_paras(sensor::SensorIDEnum::SensorIDType, int, SfLpf::smoop_struct&, bool&) */
int _ZN5SfLpf21set_default_dec_parasEN6sensor12SensorIDEnum12SensorIDTypeEiRNS_12smoop_structERb(void);

/* Symbol: _ZN6SfSatt19set_sf_ng_meas_paraEv */
/* Demangled: SfSatt::set_sf_ng_meas_para() */
int _ZN6SfSatt19set_sf_ng_meas_paraEv(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp11is_upd_buffEv */
/* Demangled: VehBodOrient::VboGrp::is_upd_buff() const */
int _ZNK12VehBodOrient6VboGrp11is_upd_buffEv(void);

/* Symbol: _Z16wgslla2xyz_arrayPKdPd */
/* Demangled: wgslla2xyz_array(double const*, double*) */
int _Z16wgslla2xyz_arrayPKdPd(void);

/* Symbol: get_pedometer_step_count_wo_buf */
/* Demangled: get_pedometer_step_count_wo_buf */
int get_pedometer_step_count_wo_buf(void);

/* Symbol: _ZN6SfSatt13ekf_predict_xEv */
/* Demangled: SfSatt::ekf_predict_x() */
int _ZN6SfSatt13ekf_predict_xEv(void);

/* Symbol: _ZN6SfSatt21set_default_meas_paraEv */
/* Demangled: SfSatt::set_default_meas_para() */
int _ZN6SfSatt21set_default_meas_paraEv(void);

/* Symbol: _ZN3UDR16update_fix_stateEP18sf_gnss_msg_struct */
/* Demangled: UDR::update_fix_state(sf_gnss_msg_struct*) */
int _ZN3UDR16update_fix_stateEP18sf_gnss_msg_struct(void);

/* Symbol: _ZN12VehBodOrient6VboGrp23upd_specific_sf_patternEPNS0_11hist_structEPKd */
/* Demangled: VehBodOrient::VboGrp::upd_specific_sf_pattern(VehBodOrient::VboGrp::hist_struct*, double const*) */
int _ZN12VehBodOrient6VboGrp23upd_specific_sf_patternEPNS0_11hist_structEPKd(void);

/* Symbol: _ZN11DataProcess16get_gnss_containEv */
/* Demangled: DataProcess::get_gnss_contain() */
int _ZN11DataProcess16get_gnss_containEv(void);

/* Symbol: _ZN6UdrEkf17update_all_matrixEP18sf_gnss_msg_structPjR6MatrixS4_S4_S4_ */
/* Demangled: UdrEkf::update_all_matrix(sf_gnss_msg_struct*, unsigned int*, Matrix&, Matrix&, Matrix&, Matrix&) */
int _ZN6UdrEkf17update_all_matrixEP18sf_gnss_msg_structPjR6MatrixS4_S4_S4_(void);

/* Symbol: _ZN18InertialStaticMove11comp_sm_varEPPdi */
/* Demangled: InertialStaticMove::comp_sm_var(double**, int) */
int _ZN18InertialStaticMove11comp_sm_varEPPdi(void);

/* Symbol: _ZN16UdrUpdTypeSelect22free_delay_buff_to_cvbEv */
/* Demangled: UdrUpdTypeSelect::free_delay_buff_to_cvb() */
int _ZN16UdrUpdTypeSelect22free_delay_buff_to_cvbEv(void);

/* Symbol: _ZN6UdrEkf5get_REi */
/* Demangled: UdrEkf::get_R(int) */
int _ZN6UdrEkf5get_REi(void);

/* Symbol: _ZN8Watchdog26is_state_dynamic_irregularEi */
/* Demangled: Watchdog::is_state_dynamic_irregular(int) */
int _ZN8Watchdog26is_state_dynamic_irregularEi(void);

/* Symbol: _ZN12VehBodOrient6VboGrpD2Ev */
/* Demangled: VehBodOrient::VboGrp::~VboGrp() */
int _ZN12VehBodOrient6VboGrpD2Ev(void);

/* Symbol: get_Eigenvalue2x2_double */
/* Demangled: get_Eigenvalue2x2_double */
int get_Eigenvalue2x2_double(void);

/* Symbol: lpf_a */
/* Demangled: lpf_a */
extern void* lpf_a;

/* Symbol: _ZN5PdrGbC2Ev */
/* Demangled: PdrGb::PdrGb() */
int _ZN5PdrGbC2Ev(void);

/* Symbol: _ZN6Matrix4mEyeEPKdi */
/* Demangled: Matrix::mEye(double const*, int) */
int _ZN6Matrix4mEyeEPKdi(void);

/* Symbol: _ZNK5SfLpf18get_dec_accel_tempEPd */
/* Demangled: SfLpf::get_dec_accel_temp(double*) const */
int _ZNK5SfLpf18get_dec_accel_tempEPd(void);

/* Symbol: _ZN8Watchdog17state_range_checkEP6UdrEkfP18sf_mems_msg_struct */
/* Demangled: Watchdog::state_range_check(UdrEkf*, sf_mems_msg_struct*) */
int _ZN8Watchdog17state_range_checkEP6UdrEkfP18sf_mems_msg_struct(void);

/* Symbol: lpf_b */
/* Demangled: lpf_b */
extern void* lpf_b;

/* Symbol: _ZN6SfSatt22set_default_state_paraEv */
/* Demangled: SfSatt::set_default_state_para() */
int _ZN6SfSatt22set_default_state_paraEv(void);

/* Symbol: find_matching_point */
/* Demangled: find_matching_point */
int find_matching_point(void);

/* Symbol: _ZN9CarAccelB16esti_car_accel_bEP18sf_mems_msg_structRK6UdrLpfR18InertialStaticMoveR14GnssAccelDecelR14SimpleGyroBias */
/* Demangled: CarAccelB::esti_car_accel_b(sf_mems_msg_struct*, UdrLpf const&, InertialStaticMove&, GnssAccelDecel&, SimpleGyroBias&) */
int _ZN9CarAccelB16esti_car_accel_bEP18sf_mems_msg_structRK6UdrLpfR18InertialStaticMoveR14GnssAccelDecelR14SimpleGyroBias(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct12sum_abs_distEPKdiiii */
/* Demangled: CarAccelB::sf_pattern_struct::sum_abs_dist(double const*, int, int, int, int) const */
int _ZNK9CarAccelB17sf_pattern_struct12sum_abs_distEPKdiiii(void);

/* Symbol: _ZN6UdrEkf11set_cbv2cbvER6Matrix */
/* Demangled: UdrEkf::set_cbv2cbv(Matrix&) */
int _ZN6UdrEkf11set_cbv2cbvER6Matrix(void);

/* Symbol: _ZN6UdrLpf18get_adv_accel_50hzEv */
/* Demangled: UdrLpf::get_adv_accel_50hz() */
int _ZN6UdrLpf18get_adv_accel_50hzEv(void);

/* Symbol: four_ax_consistency */
/* Demangled: four_ax_consistency */
int four_ax_consistency(void);

/* Symbol: _ZN10InterpMems33use_interp_mems_and_upd_past_memsEP18sf_mems_msg_structPK18sf_gnss_msg_struct */
/* Demangled: InterpMems::use_interp_mems_and_upd_past_mems(sf_mems_msg_struct*, sf_gnss_msg_struct const*) */
int _ZN10InterpMems33use_interp_mems_and_upd_past_memsEP18sf_mems_msg_structPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN9CarAccelB17delay_buff_structD2Ev */
/* Demangled: CarAccelB::delay_buff_struct::~delay_buff_struct() */
int _ZN9CarAccelB17delay_buff_structD2Ev(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp26get_select_label_from_buffEj */
/* Demangled: VehBodOrient::VboGrp::get_select_label_from_buff(unsigned int) const */
int _ZNK12VehBodOrient6VboGrp26get_select_label_from_buffEj(void);

/* Symbol: dr_state_1 */
/* Demangled: dr_state_1 */
extern void* dr_state_1;

/* Symbol: _ZN14SfStaticDetect13get_is_acc_okEv */
/* Demangled: SfStaticDetect::get_is_acc_ok() */
int _ZN14SfStaticDetect13get_is_acc_okEv(void);

/* Symbol: _ZN6UdrEkf18measurement_updateEP18sf_gnss_msg_structibiPjPibRK14SimpleGyroBias */
/* Demangled: UdrEkf::measurement_update(sf_gnss_msg_struct*, int, bool, int, unsigned int*, int*, bool, SimpleGyroBias const&) */
int _ZN6UdrEkf18measurement_updateEP18sf_gnss_msg_structibiPjPibRK14SimpleGyroBias(void);

/* Symbol: _ZN18InertialStaticMoveC2Ev */
/* Demangled: InertialStaticMove::InertialStaticMove() */
int _ZN18InertialStaticMoveC2Ev(void);

/* Symbol: acc_raw_window */
/* Demangled: acc_raw_window */
extern void* acc_raw_window;

/* Symbol: _ZN5SfLpfD2Ev */
/* Demangled: SfLpf::~SfLpf() */
int _ZN5SfLpfD2Ev(void);

/* Symbol: _ZNK5SfLpf18get_adv_gnss_speedEPd */
/* Demangled: SfLpf::get_adv_gnss_speed(double*) const */
int _ZNK5SfLpf18get_adv_gnss_speedEPd(void);

/* Symbol: _ZN18InertialStaticMove11get_sm_feasEv */
/* Demangled: InertialStaticMove::get_sm_feas() */
int _ZN18InertialStaticMove11get_sm_feasEv(void);

/* Symbol: _ZN14SfStaticDetect14apply_raw_dataEP18sf_mems_msg_structR6Matrix */
/* Demangled: SfStaticDetect::apply_raw_data(sf_mems_msg_struct*, Matrix&) */
int _ZN14SfStaticDetect14apply_raw_dataEP18sf_mems_msg_structR6Matrix(void);

/* Symbol: _Z13set_log_leveli */
/* Demangled: set_log_level(int) */
int _Z13set_log_leveli(void);

/* Symbol: mpe_get_rotation_vector */
/* Demangled: mpe_get_rotation_vector */
int mpe_get_rotation_vector(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6SfSatt9ekf_upd_xEv */
/* Demangled: SfSatt::ekf_upd_x() */
int _ZN6SfSatt9ekf_upd_xEv(void);

/* Symbol: acc_last_gps_mean */
/* Demangled: acc_last_gps_mean */
extern void* acc_last_gps_mean;

/* Symbol: get_pedometer_step_freq */
/* Demangled: get_pedometer_step_freq */
int get_pedometer_step_freq(void);

/* Symbol: _ZN5SfIsm11feas_structD2Ev */
/* Demangled: SfIsm::feas_struct::~feas_struct() */
int _ZN5SfIsm11feas_structD2Ev(void);

/* Symbol: _ZN15UdrStaticDetect17get_sensor_staticEv */
/* Demangled: UdrStaticDetect::get_sensor_static() */
int _ZN15UdrStaticDetect17get_sensor_staticEv(void);

/* Symbol: best_walk_ax */
/* Demangled: best_walk_ax */
int best_walk_ax(void);

/* Symbol: _ZN11DataProcess5resetEv */
/* Demangled: DataProcess::reset() */
int _ZN11DataProcess5resetEv(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Z22get_heading_differencedd */
/* Demangled: get_heading_difference(double, double) */
int _Z22get_heading_differencedd(void);

/* Symbol: _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEc */
/* Demangled: split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
int _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEc(void);

/* Symbol: _ZN12VehBodOrient7VboLess16upd_avg_buff_weiEv */
/* Demangled: VehBodOrient::VboLess::upd_avg_buff_wei() */
int _ZN12VehBodOrient7VboLess16upd_avg_buff_weiEv(void);

/* Symbol: _ZN5SfWmm21MAG_DMSstringToDegreeEPKdPd */
/* Demangled: SfWmm::MAG_DMSstringToDegree(double const*, double*) */
int _ZN5SfWmm21MAG_DMSstringToDegreeEPKdPd(void);

/* Symbol: _ZNK5SfLpf12get_adv_gyroEPd */
/* Demangled: SfLpf::get_adv_gyro(double*) const */
int _ZNK5SfLpf12get_adv_gyroEPd(void);

/* Symbol: _ZN9CarAccelB5SubKF28comp_intermediate_ekf_matrixEPKd */
/* Demangled: CarAccelB::SubKF::comp_intermediate_ekf_matrix(double const*) */
int _ZN9CarAccelB5SubKF28comp_intermediate_ekf_matrixEPKd(void);

/* Symbol: _ZN12VehBodOrient6VboGrp20get_buff_probabilityEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_probability() */
int _ZN12VehBodOrient6VboGrp20get_buff_probabilityEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp9reset_grpEv */
/* Demangled: VehBodOrient::VboGrp::reset_grp() */
int _ZN12VehBodOrient6VboGrp9reset_grpEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess12realloc_lessERKNS_6VboGrpE */
/* Demangled: VehBodOrient::VboLess::realloc_less(VehBodOrient::VboGrp const&) */
int _ZN12VehBodOrient7VboLess12realloc_lessERKNS_6VboGrpE(void);

/* Symbol: s_ptr */
/* Demangled: s_ptr */
int s_ptr(void);

/* Symbol: update_feature_vector */
/* Demangled: update_feature_vector */
int update_feature_vector(void);

/* Symbol: _ZNK6Matrix4diagEv */
/* Demangled: Matrix::diag() const */
int _ZNK6Matrix4diagEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp17close_gdcm3_resetEv */
/* Demangled: VehBodOrient::VboGrp::close_gdcm3_reset() */
int _ZN12VehBodOrient6VboGrp17close_gdcm3_resetEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess18reverse_g_nv_v_dirERKNS_8VboGdcm3Ejj */
/* Demangled: VehBodOrient::VboLess::reverse_g_nv_v_dir(VehBodOrient::VboGdcm3 const&, unsigned int, unsigned int) */
int _ZN12VehBodOrient7VboLess18reverse_g_nv_v_dirERKNS_8VboGdcm3Ejj(void);

/* Symbol: _ZN12VehBodOrient7VboLessD2Ev */
/* Demangled: VehBodOrient::VboLess::~VboLess() */
int _ZN12VehBodOrient7VboLessD2Ev(void);

/* Symbol: envelop_show */
/* Demangled: envelop_show */
extern void* envelop_show;

/* Symbol: _ZN15MonitorDataRate20downsampling_sensorsEN3mpe8ModeEnum8ModeTypeEPK18sf_mems_msg_struct */
/* Demangled: MonitorDataRate::downsampling_sensors(mpe::ModeEnum::ModeType, sf_mems_msg_struct const*) */
int _ZN15MonitorDataRate20downsampling_sensorsEN3mpe8ModeEnum8ModeTypeEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN6SfSatt15ext_feas_structC1Ev */
/* Demangled: SfSatt::ext_feas_struct::ext_feas_struct() */
int _ZN6SfSatt15ext_feas_structC1Ev(void);

/* Symbol: lla_v_cos */
/* Demangled: lla_v_cos */
extern void* lla_v_cos;

/* Symbol: _ZN10InterpMemsC1Ev */
/* Demangled: InterpMems::InterpMems() */
int _ZN10InterpMemsC1Ev(void);

/* Symbol: _Z13bound_inc_cntii */
/* Demangled: bound_inc_cnt(int, int) */
int _Z13bound_inc_cntii(void);

/* Symbol: _ZN5SfLpf14set_imu_hub_drEii */
/* Demangled: SfLpf::set_imu_hub_dr(int, int) */
int _ZN5SfLpf14set_imu_hub_drEii(void);

/* Symbol: _ZN18InertialStaticMove11meas_structD2Ev */
/* Demangled: InertialStaticMove::meas_struct::~meas_struct() */
int _ZN18InertialStaticMove11meas_structD2Ev(void);

/* Symbol: input_signal_smoothing */
/* Demangled: input_signal_smoothing */
int input_signal_smoothing(void);

/* Symbol: v3_nonfoot_flag */
/* Demangled: v3_nonfoot_flag */
extern void* v3_nonfoot_flag;

/* Symbol: _ZN6PdrLpfD1Ev */
/* Demangled: PdrLpf::~PdrLpf() */
int _ZN6PdrLpfD1Ev(void);

/* Symbol: _ZN6PdrIsm17get_min_feas_timeEv */
/* Demangled: PdrIsm::get_min_feas_time() */
int _ZN6PdrIsm17get_min_feas_timeEv(void);

/* Symbol: _ZN7PdrSattD0Ev */
/* Demangled: PdrSatt::~PdrSatt() */
int _ZN7PdrSattD0Ev(void);

/* Symbol: _ZN9Pedometer7SsModel13get_max_speedEv */
/* Demangled: Pedometer::SsModel::get_max_speed() */
int _ZN9Pedometer7SsModel13get_max_speedEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN15MonitorDataRate15dr_track_structC2Ev */
/* Demangled: MonitorDataRate::dr_track_struct::dr_track_struct() */
int _ZN15MonitorDataRate15dr_track_structC2Ev(void);

/* Symbol: _ZN6SfSatt5set_JEv */
/* Demangled: SfSatt::set_J() */
int _ZN6SfSatt5set_JEv(void);

/* Symbol: _ZN14SfStaticDetect16get_sensor_avg_vENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_avg_v(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect16get_sensor_avg_vENS_10SensorEnum10SensorTypeE(void);

/* Symbol: _ZN12VehBodOrient7VboLess12find_max_idxEPdi */
/* Demangled: VehBodOrient::VboLess::find_max_idx(double*, int) */
int _ZN12VehBodOrient7VboLess12find_max_idxEPdi(void);

/* Symbol: v3_noise_detection_init */
/* Demangled: v3_noise_detection_init */
int v3_noise_detection_init(void);

/* Symbol: _ZN6UdrEkf12get_pos_initEv */
/* Demangled: UdrEkf::get_pos_init() */
int _ZN6UdrEkf12get_pos_initEv(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN5SfWmm22MAG_FreeLegendreMemoryEPNS_24MAGtype_LegendreFunctionE */
/* Demangled: SfWmm::MAG_FreeLegendreMemory(SfWmm::MAGtype_LegendreFunction*) */
int _ZN5SfWmm22MAG_FreeLegendreMemoryEPNS_24MAGtype_LegendreFunctionE(void);

/* Symbol: _ZN6UdrEkf14set_reset_flagEb */
/* Demangled: UdrEkf::set_reset_flag(bool) */
int _ZN6UdrEkf14set_reset_flagEb(void);

/* Symbol: _ZN6UdrLpfD0Ev */
/* Demangled: UdrLpf::~UdrLpf() */
int _ZN6UdrLpfD0Ev(void);

/* Symbol: _ZN5SfWmm12MAG_WarningsEidPKNS_21MAGtype_MagneticModelE */
/* Demangled: SfWmm::MAG_Warnings(int, double, SfWmm::MAGtype_MagneticModel const*) */
int _ZN5SfWmm12MAG_WarningsEidPKNS_21MAGtype_MagneticModelE(void);

/* Symbol: _ZN5SfWmm13MAGtype_GeoidC1EPKf */
/* Demangled: SfWmm::MAGtype_Geoid::MAGtype_Geoid(float const*) */
int _ZN5SfWmm13MAGtype_GeoidC1EPKf(void);

/* Symbol: _ZN4Ttff14get_ttff_stateEv */
/* Demangled: Ttff::get_ttff_state() */
int _ZN4Ttff14get_ttff_stateEv(void);

/* Symbol: _ZN3PDR7upd_igpERK15MonitorDataRatePK18sf_mems_msg_structRKN7PdrSatt10out_structE */
/* Demangled: PDR::upd_igp(MonitorDataRate const&, sf_mems_msg_struct const*, PdrSatt::out_struct const&) */
int _ZN3PDR7upd_igpERK15MonitorDataRatePK18sf_mems_msg_structRKN7PdrSatt10out_structE(void);

/* Symbol: _ZNK5SfLpf17get_adv_gnss_modeEPd */
/* Demangled: SfLpf::get_adv_gnss_mode(double*) const */
int _ZNK5SfLpf17get_adv_gnss_modeEPd(void);

/* Symbol: _ZN7PdrSatt32est_var_w_for_pred_gp_componentsER6Matrix */
/* Demangled: PdrSatt::est_var_w_for_pred_gp_components(Matrix&) */
int _ZN7PdrSatt32est_var_w_for_pred_gp_componentsER6Matrix(void);

/* Symbol: FIR_filtering */
/* Demangled: FIR_filtering */
int FIR_filtering(void);

/* Symbol: _ZN6PdrEkf12get_ekf_flagEv */
/* Demangled: PdrEkf::get_ekf_flag() */
int _ZN6PdrEkf12get_ekf_flagEv(void);

/* Symbol: _ZN7PdrSatt10out_structC2Ev */
/* Demangled: PdrSatt::out_struct::out_struct() */
int _ZN7PdrSatt10out_structC2Ev(void);

/* Symbol: _ZN6UdrEkf14roll_constrainEd */
/* Demangled: UdrEkf::roll_constrain(double) */
int _ZN6UdrEkf14roll_constrainEd(void);

/* Symbol: _ZN12VehBodOrient18get_min_proba_diffEv */
/* Demangled: VehBodOrient::get_min_proba_diff() */
int _ZN12VehBodOrient18get_min_proba_diffEv(void);

/* Symbol: _ZN11PdrMheading12get_filt_lenEv */
/* Demangled: PdrMheading::get_filt_len() */
int _ZN11PdrMheading12get_filt_lenEv(void);

/* Symbol: _ZNK9CarAccelB17delay_buff_struct11get_delay_tEv */
/* Demangled: CarAccelB::delay_buff_struct::get_delay_t() const */
int _ZNK9CarAccelB17delay_buff_struct11get_delay_tEv(void);

/* Symbol: _ZN6UdrEkf23roll_measurement_updateEv */
/* Demangled: UdrEkf::roll_measurement_update() */
int _ZN6UdrEkf23roll_measurement_updateEv(void);

/* Symbol: _ZNK14SimpleGyroBias13AlterGyroBias21get_dyn_gyro_bias_varEi */
/* Demangled: SimpleGyroBias::AlterGyroBias::get_dyn_gyro_bias_var(int) const */
int _ZNK14SimpleGyroBias13AlterGyroBias21get_dyn_gyro_bias_varEi(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN9Barometer3p2hEd */
/* Demangled: Barometer::p2h(double) */
int _ZN9Barometer3p2hEd(void);

/* Symbol: _ZN9CarAccelBC1Ev */
/* Demangled: CarAccelB::CarAccelB() */
int _ZN9CarAccelBC1Ev(void);

/* Symbol: max_historical_count */
/* Demangled: max_historical_count */
extern void* max_historical_count;

/* Symbol: _ZN16PdrUpdTypeSelectD2Ev */
/* Demangled: PdrUpdTypeSelect::~PdrUpdTypeSelect() */
int _ZN16PdrUpdTypeSelectD2Ev(void);

/* Symbol: gyro_raw_bias */
/* Demangled: gyro_raw_bias */
extern void* gyro_raw_bias;

/* Symbol: _ZplRK6Matrixd */
/* Demangled: operator+(Matrix const&, double) */
int _ZplRK6Matrixd(void);

/* Symbol: _ZN6UdrEkf24accel_measurement_updateEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::accel_measurement_update(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf24accel_measurement_updateEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZNK6UdrEkf14get_valid_flagEv */
/* Demangled: UdrEkf::get_valid_flag() const */
int _ZNK6UdrEkf14get_valid_flagEv(void);

/* Symbol: _ZN14GnssAccelDecel11get_sum_sqrEPdi */
/* Demangled: GnssAccelDecel::get_sum_sqr(double*, int) */
int _ZN14GnssAccelDecel11get_sum_sqrEPdi(void);

/* Symbol: _ZTV14SfStaticDetect */
/* Demangled: vtable for SfStaticDetect */
extern void* _ZTV14SfStaticDetect;

/* Symbol: _ZN9CarAccelB5SubKF18set_adned_head_varEd */
/* Demangled: CarAccelB::SubKF::set_adned_head_var(double) */
int _ZN9CarAccelB5SubKF18set_adned_head_varEd(void);

/* Symbol: _ZN12VehBodOrient6VboGrp23esti_condi_proba_in_gadEPNS_9VboFbEnum6FbTypeE */
/* Demangled: VehBodOrient::VboGrp::esti_condi_proba_in_gad(VehBodOrient::VboFbEnum::FbType*) */
int _ZN12VehBodOrient6VboGrp23esti_condi_proba_in_gadEPNS_9VboFbEnum6FbTypeE(void);

/* Symbol: acc_curr_roll_diff */
/* Demangled: acc_curr_roll_diff */
extern void* acc_curr_roll_diff;

/* Symbol: _ZN11DataProcess17batch_postprocessEv */
/* Demangled: DataProcess::batch_postprocess() */
int _ZN11DataProcess17batch_postprocessEv(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _Z7eul2CyxR6MatrixS0_ */
/* Demangled: eul2Cyx(Matrix&, Matrix&) */
int _Z7eul2CyxR6MatrixS0_(void);

/* Symbol: _ZN12VehBodOrient14esti_vb_orientERKN9CarAccelB13output_structE */
/* Demangled: VehBodOrient::esti_vb_orient(CarAccelB::output_struct const&) */
int _ZN12VehBodOrient14esti_vb_orientERKN9CarAccelB13output_structE(void);

/* Symbol: _ZN9CarAccelB5SubKF18comp_var_a_predictERK6MatrixRS1_ */
/* Demangled: CarAccelB::SubKF::comp_var_a_predict(Matrix const&, Matrix&) */
int _ZN9CarAccelB5SubKF18comp_var_a_predictERK6MatrixRS1_(void);

/* Symbol: _ZN6UdrEkf22imu_sf_as_gamma_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_S6_ */
/* Demangled: UdrEkf::imu_sf_as_gamma_struct::upd_past(sf_gnss_msg_struct const*, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&) */
int _ZN6UdrEkf22imu_sf_as_gamma_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_S6_(void);

/* Symbol: dr_bias_state */
/* Demangled: dr_bias_state */
extern void* dr_bias_state;

/* Symbol: mpe_get_heading_axis */
/* Demangled: mpe_get_heading_axis */
int mpe_get_heading_axis(void);

/* Symbol: _Z4normddd */
/* Demangled: norm(double, double, double) */
int _Z4normddd(void);

/* Symbol: _ZN6SfSatt15upd_meas_matrixEv */
/* Demangled: SfSatt::upd_meas_matrix() */
int _ZN6SfSatt15upd_meas_matrixEv(void);

/* Symbol: _ZN5SfWmm12MAG_PcupHighEPdS0_di */
/* Demangled: SfWmm::MAG_PcupHigh(double*, double*, double, int) */
int _ZN5SfWmm12MAG_PcupHighEPdS0_di(void);

/* Symbol: _ZNK9CarAccelB5SubKF21get_beta_scale_a_predEv */
/* Demangled: CarAccelB::SubKF::get_beta_scale_a_pred() const */
int _ZNK9CarAccelB5SubKF21get_beta_scale_a_predEv(void);

/* Symbol: _ZN11InertialAttC1ERK12ConfigParams */
/* Demangled: InertialAtt::InertialAtt(ConfigParams const&) */
int _ZN11InertialAttC1ERK12ConfigParams(void);

/* Symbol: _ZN12VehBodOrient7VboLess22comp_axis_angle_diff_qEPKdS2_ */
/* Demangled: VehBodOrient::VboLess::comp_axis_angle_diff_q(double const*, double const*) */
int _ZN12VehBodOrient7VboLess22comp_axis_angle_diff_qEPKdS2_(void);

/* Symbol: _ZN11PdrMheading20quality_check_structC1EiddPd */
/* Demangled: PdrMheading::quality_check_struct::quality_check_struct(int, double, double, double*) */
int _ZN11PdrMheading20quality_check_structC1EiddPd(void);

/* Symbol: _ZN11PdrMheading7upd_outEv */
/* Demangled: PdrMheading::upd_out() */
int _ZN11PdrMheading7upd_outEv(void);

/* Symbol: pedometer_algorithm_init */
/* Demangled: pedometer_algorithm_init */
int pedometer_algorithm_init(void);

/* Symbol: _ZN5SfLpf17alloc_and_ini_ptrEi */
/* Demangled: SfLpf::alloc_and_ini_ptr(int) */
int _ZN5SfLpf17alloc_and_ini_ptrEi(void);

/* Symbol: mpe_get_quaternion */
/* Demangled: mpe_get_quaternion */
int mpe_get_quaternion(void);

/* Symbol: _ZN9Pedometer7SsModel8varianceERKNSt3__16vectorIdNS1_9allocatorIdEEEE */
/* Demangled: Pedometer::SsModel::variance(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN9Pedometer7SsModel8varianceERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void);

/* Symbol: _ZN14SimpleGyroBias11reset_gbuffEv */
/* Demangled: SimpleGyroBias::reset_gbuff() */
int _ZN14SimpleGyroBias11reset_gbuffEv(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::upd_buff(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN12VehBodOrient7VboLess3eyeEPdi */
/* Demangled: VehBodOrient::VboLess::eye(double*, int) */
int _ZN12VehBodOrient7VboLess3eyeEPdi(void);

/* Symbol: mpe_get_global_rotation */
/* Demangled: mpe_get_global_rotation */
int mpe_get_global_rotation(void);

/* Symbol: _ZNK6PdrIsm12copy_resultsEv */
/* Demangled: PdrIsm::copy_results() const */
int _ZNK6PdrIsm12copy_resultsEv(void);

/* Symbol: _ZN6PdrIsm13ini_feas_ptrsEv */
/* Demangled: PdrIsm::ini_feas_ptrs() */
int _ZN6PdrIsm13ini_feas_ptrsEv(void);

/* Symbol: _ZN12QualityCheck9filt_normE */
/* Demangled: QualityCheck::filt_norm */
extern void* _ZN12QualityCheck9filt_normE;

/* Symbol: _ZN12VehBodOrient6VboGrp11aided_groupEv */
/* Demangled: VehBodOrient::VboGrp::aided_group() */
int _ZN12VehBodOrient6VboGrp11aided_groupEv(void);

/* Symbol: Q_AX */
/* Demangled: Q_AX */
extern void* Q_AX;

/* Symbol: _ZN6PdrIgp15get_stored_timeEv */
/* Demangled: PdrIgp::get_stored_time() */
int _ZN6PdrIgp15get_stored_timeEv(void);

/* Symbol: _ZN6SfSatt17state_para_structD1Ev */
/* Demangled: SfSatt::state_para_struct::~state_para_struct() */
int _ZN6SfSatt17state_para_structD1Ev(void);

/* Symbol: _Z7navrateddR6MatrixS0_S0_ */
/* Demangled: navrate(double, double, Matrix&, Matrix&, Matrix&) */
int _Z7navrateddR6MatrixS0_S0_(void);

/* Symbol: _ZN18InertialStaticMove12ini_sm_parasEv */
/* Demangled: InertialStaticMove::ini_sm_paras() */
int _ZN18InertialStaticMove12ini_sm_parasEv(void);

/* Symbol: Q_AY */
/* Demangled: Q_AY */
extern void* Q_AY;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: Q_AZ */
/* Demangled: Q_AZ */
extern void* Q_AZ;

/* Symbol: _ZN6PdrEkf22mg_heading_diff_structC2Ev */
/* Demangled: PdrEkf::mg_heading_diff_struct::mg_heading_diff_struct() */
int _ZN6PdrEkf22mg_heading_diff_structC2Ev(void);

/* Symbol: _ZN5SfIsm11comp_sm_rngEPKPKdi */
/* Demangled: SfIsm::comp_sm_rng(double const* const*, int) */
int _ZN5SfIsm11comp_sm_rngEPKPKdi(void);

/* Symbol: _ZN5SfSgb13stable_structC2Ev */
/* Demangled: SfSgb::stable_struct::stable_struct() */
int _ZN5SfSgb13stable_structC2Ev(void);

/* Symbol: _ZN14GnssAccelDecel12esti_acc_decEb */
/* Demangled: GnssAccelDecel::esti_acc_dec(bool) */
int _ZN14GnssAccelDecel12esti_acc_decEb(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN9Pedometer18process_step_modelEPK18sf_mems_msg_struct */
/* Demangled: Pedometer::process_step_model(sf_mems_msg_struct const*) */
int _ZN9Pedometer18process_step_modelEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN6PdrIsmD2Ev */
/* Demangled: PdrIsm::~PdrIsm() */
int _ZN6PdrIsmD2Ev(void);

/* Symbol: _ZN5SfIsm13upd_meas_buffEdPKdS1_ */
/* Demangled: SfIsm::upd_meas_buff(double, double const*, double const*) */
int _ZN5SfIsm13upd_meas_buffEdPKdS1_(void);

/* Symbol: _Z15recursive_mkdirPKcb */
/* Demangled: recursive_mkdir(char const*, bool) */
int _Z15recursive_mkdirPKcb(void);

/* Symbol: _ZN9CarAccelB5crossEPdS0_S0_i */
/* Demangled: CarAccelB::cross(double*, double*, double*, int) */
int _ZN9CarAccelB5crossEPdS0_S0_i(void);

/* Symbol: _ZN16UdrUpdTypeSelectD2Ev */
/* Demangled: UdrUpdTypeSelect::~UdrUpdTypeSelect() */
int _ZN16UdrUpdTypeSelectD2Ev(void);

/* Symbol: processing_count */
/* Demangled: processing_count */
extern void* processing_count;

/* Symbol: _Z8earthradPdS_d */
/* Demangled: earthrad(double*, double*, double) */
int _Z8earthradPdS_d(void);

/* Symbol: _ZmlRK6Matrixd */
/* Demangled: operator*(Matrix const&, double) */
int _ZmlRK6Matrixd(void);

/* Symbol: _ZNK6SfSatt21is_test_meas_upd_on_xEv */
/* Demangled: SfSatt::is_test_meas_upd_on_x() const */
int _ZNK6SfSatt21is_test_meas_upd_on_xEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp20get_gdcm3_reset_flagEv */
/* Demangled: VehBodOrient::VboGrp::get_gdcm3_reset_flag() */
int _ZN12VehBodOrient6VboGrp20get_gdcm3_reset_flagEv(void);

/* Symbol: _ZN11Integration15sf_process_dataEv */
/* Demangled: Integration::sf_process_data() */
int _ZN11Integration15sf_process_dataEv(void);

/* Symbol: acc_gps_conf_flag */
/* Demangled: acc_gps_conf_flag */
extern void* acc_gps_conf_flag;

/* Symbol: trigger_wave_ped */
/* Demangled: trigger_wave_ped */
int trigger_wave_ped(void);

/* Symbol: _ZN6Matrix7set_valEPKiRKS_ */
/* Demangled: Matrix::set_val(int const*, Matrix const&) */
int _ZN6Matrix7set_valEPKiRKS_(void);

/* Symbol: _ZNK6Matrix9is_vectorEv */
/* Demangled: Matrix::is_vector() const */
int _ZNK6Matrix9is_vectorEv(void);

/* Symbol: _ZN9CarAccelB3Rts8upd_buffEdPKd */
/* Demangled: CarAccelB::Rts::upd_buff(double, double const*) */
int _ZN9CarAccelB3Rts8upd_buffEdPKd(void);

/* Symbol: mpe_get_udr_struct */
/* Demangled: mpe_get_udr_struct */
int mpe_get_udr_struct(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: _ZNK6Matrix11get_row_numEv */
/* Demangled: Matrix::get_row_num() const */
int _ZNK6Matrix11get_row_numEv(void);

/* Symbol: _ZN6SfSatt16set_sf_meas_paraEv */
/* Demangled: SfSatt::set_sf_meas_para() */
int _ZN6SfSatt16set_sf_meas_paraEv(void);

/* Symbol: _ZN9CarAccelB15upd_kf_buff_idxEv */
/* Demangled: CarAccelB::upd_kf_buff_idx() */
int _ZN9CarAccelB15upd_kf_buff_idxEv(void);

/* Symbol: _ZN9CarAccelB18sub_kf_buff_structC1Ev */
/* Demangled: CarAccelB::sub_kf_buff_struct::sub_kf_buff_struct() */
int _ZN9CarAccelB18sub_kf_buff_structC1Ev(void);

/* Symbol: _ZN6UdrEkf18stored_bias_structC1Eid */
/* Demangled: UdrEkf::stored_bias_struct::stored_bias_struct(int, double) */
int _ZN6UdrEkf18stored_bias_structC1Eid(void);

/* Symbol: _ZN8Watchdog24is_state_range_irregularEi */
/* Demangled: Watchdog::is_state_range_irregular(int) */
int _ZN8Watchdog24is_state_range_irregularEi(void);

/* Symbol: ABAT */
/* Demangled: ABAT */
int ABAT(void);

/* Symbol: _ZN5SfSgb19upd_stat_no_outlierEv */
/* Demangled: SfSgb::upd_stat_no_outlier() */
int _ZN5SfSgb19upd_stat_no_outlierEv(void);

/* Symbol: _ZN6SfSatt16comp_kalman_gainERK6MatrixRS0_ */
/* Demangled: SfSatt::comp_kalman_gain(Matrix const&, Matrix&) */
int _ZN6SfSatt16comp_kalman_gainERK6MatrixRS0_(void);

/* Symbol: _ZN5SfWmm30MAG_AssociatedLegendreFunctionERKNS_22MAGtype_CoordSphericalEiPNS_24MAGtype_LegendreFunctionE */
/* Demangled: SfWmm::MAG_AssociatedLegendreFunction(SfWmm::MAGtype_CoordSpherical const&, int, SfWmm::MAGtype_LegendreFunction*) */
int _ZN5SfWmm30MAG_AssociatedLegendreFunctionERKNS_22MAGtype_CoordSphericalEiPNS_24MAGtype_LegendreFunctionE(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBiasD1Ev */
/* Demangled: SimpleGyroBias::AlterGyroBias::~AlterGyroBias() */
int _ZN14SimpleGyroBias13AlterGyroBiasD1Ev(void);

/* Symbol: _ZNK5SfLpf11get_adv_magEPd */
/* Demangled: SfLpf::get_adv_mag(double*) const */
int _ZNK5SfLpf11get_adv_magEPd(void);

/* Symbol: _ZN5SfWmm27MAG_FreeMagneticModelMemoryEPNS_21MAGtype_MagneticModelE */
/* Demangled: SfWmm::MAG_FreeMagneticModelMemory(SfWmm::MAGtype_MagneticModel*) */
int _ZN5SfWmm27MAG_FreeMagneticModelMemoryEPNS_21MAGtype_MagneticModelE(void);

/* Symbol: _ZN9CarAccelB5SubKF17reset_p_gyro_biasEv */
/* Demangled: CarAccelB::SubKF::reset_p_gyro_bias() */
int _ZN9CarAccelB5SubKF17reset_p_gyro_biasEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess13cyclic_jacobiEdddPdiS1_ */
/* Demangled: VehBodOrient::VboLess::cyclic_jacobi(double, double, double, double*, int, double*) */
int _ZN12VehBodOrient7VboLess13cyclic_jacobiEdddPdiS1_(void);

/* Symbol: _ZN5SfLpf15set_smooth_packEPKNS_11para_structEiRNS_12smoop_structE */
/* Demangled: SfLpf::set_smooth_pack(SfLpf::para_struct const*, int, SfLpf::smoop_struct&) */
int _ZN5SfLpf15set_smooth_packEPKNS_11para_structEiRNS_12smoop_structE(void);

/* Symbol: _ZN6Matrix7set_valEPiS0_Pdi */
/* Demangled: Matrix::set_val(int*, int*, double*, int) */
int _ZN6Matrix7set_valEPiS0_Pdi(void);

/* Symbol: _ZN6UdrEkf7set_w2aER6Matrix */
/* Demangled: UdrEkf::set_w2a(Matrix&) */
int _ZN6UdrEkf7set_w2aER6Matrix(void);

/* Symbol: _ZN6UdrEkf8get_RvelEi */
/* Demangled: UdrEkf::get_Rvel(int) */
int _ZN6UdrEkf8get_RvelEi(void);

/* Symbol: mpe_get_rotation_matrix */
/* Demangled: mpe_get_rotation_matrix */
int mpe_get_rotation_matrix(void);

/* Symbol: _ZN13CloneNearGnssD1Ev */
/* Demangled: CloneNearGnss::~CloneNearGnss() */
int _ZN13CloneNearGnssD1Ev(void);

/* Symbol: _ZN5SfLpf12smoop_structD2Ev */
/* Demangled: SfLpf::smoop_struct::~smoop_struct() */
int _ZN5SfLpf12smoop_structD2Ev(void);

/* Symbol: _ZN6SfSatt8ini_I_NSEv */
/* Demangled: SfSatt::ini_I_NS() */
int _ZN6SfSatt8ini_I_NSEv(void);

/* Symbol: _ZN9CarAccelB5SubKF15reset_proj_nv_vEv */
/* Demangled: CarAccelB::SubKF::reset_proj_nv_v() */
int _ZN9CarAccelB5SubKF15reset_proj_nv_vEv(void);

/* Symbol: _ZN3UDR10algo_resetEv */
/* Demangled: UDR::algo_reset() */
int _ZN3UDR10algo_resetEv(void);

/* Symbol: _ZN4TtffC1Ev */
/* Demangled: Ttff::Ttff() */
int _ZN4TtffC1Ev(void);

/* Symbol: _ZN14SimpleGyroBias14mov_sample_varEPdS0_dddi */
/* Demangled: SimpleGyroBias::mov_sample_var(double*, double*, double, double, double, int) */
int _ZN14SimpleGyroBias14mov_sample_varEPdS0_dddi(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_structC1Ev */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::nw_shape_struct() */
int _ZN12VehBodOrient7VboLess15nw_shape_structC1Ev(void);

/* Symbol: update_smoothing_idx */
/* Demangled: update_smoothing_idx */
int update_smoothing_idx(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN6PdrIsm11comp_sf_varEv */
/* Demangled: PdrIsm::comp_sf_var() */
int _ZN6PdrIsm11comp_sf_varEv(void);

/* Symbol: _ZN11DataProcess13get_gnss_restEv */
/* Demangled: DataProcess::get_gnss_rest() */
int _ZN11DataProcess13get_gnss_restEv(void);

/* Symbol: _ZN5SfLpf19smoop_result_structC1Ev */
/* Demangled: SfLpf::smoop_result_struct::smoop_result_struct() */
int _ZN5SfLpf19smoop_result_structC1Ev(void);

/* Symbol: _ZNK9CarAccelB5SubKF22get_var_grav_proj_measEv */
/* Demangled: CarAccelB::SubKF::get_var_grav_proj_meas() const */
int _ZNK9CarAccelB5SubKF22get_var_grav_proj_measEv(void);

/* Symbol: _ZN18InertialStaticMove12get_bt_parasEv */
/* Demangled: InertialStaticMove::get_bt_paras() */
int _ZN18InertialStaticMove12get_bt_parasEv(void);

/* Symbol: _ZNK14SimpleGyroBias17get_gyro_bias_varEPd */
/* Demangled: SimpleGyroBias::get_gyro_bias_var(double*) const */
int _ZNK14SimpleGyroBias17get_gyro_bias_varEPd(void);

/* Symbol: _ZN11DataProcess10time_splitEdPiS0_ */
/* Demangled: DataProcess::time_split(double, int*, int*) */
int _ZN11DataProcess10time_splitEdPiS0_(void);

/* Symbol: _ZN14SimpleGyroBias43upd_mov_statistics_with_outlier_remove_gyroEPdd */
/* Demangled: SimpleGyroBias::upd_mov_statistics_with_outlier_remove_gyro(double*, double) */
int _ZN14SimpleGyroBias43upd_mov_statistics_with_outlier_remove_gyroEPdd(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _ZN9Pedometer7SsModel22weighted_least_squaresERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_S7_RdS8_S8_ */
/* Demangled: Pedometer::SsModel::weighted_least_squares(std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double&, double&, double&) */
int _ZN9Pedometer7SsModel22weighted_least_squaresERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_S7_RdS8_S8_(void);

/* Symbol: _ZN14SfStaticDetect16get_sensor_var_vENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_var_v(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect16get_sensor_var_vENS_10SensorEnum10SensorTypeE(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart12gen_fake_cvbERKN9CarAccelB13output_structERS_ */
/* Demangled: VehBodOrient::VboFakeStart::gen_fake_cvb(CarAccelB::output_struct const&, VehBodOrient&) */
int _ZN12VehBodOrient12VboFakeStart12gen_fake_cvbERKN9CarAccelB13output_structERS_(void);

/* Symbol: _ZN5SfLpf26check_mmc5603_dec_num_axisEi */
/* Demangled: SfLpf::check_mmc5603_dec_num_axis(int) */
int _ZN5SfLpf26check_mmc5603_dec_num_axisEi(void);

/* Symbol: _ZN11PdrMheading16mag_model_structC1Ev */
/* Demangled: PdrMheading::mag_model_struct::mag_model_struct() */
int _ZN11PdrMheading16mag_model_structC1Ev(void);

/* Symbol: _ZN6SfSatt17upd_ekf_pred_timeEv */
/* Demangled: SfSatt::upd_ekf_pred_time() */
int _ZN6SfSatt17upd_ekf_pred_timeEv(void);

/* Symbol: _Z20sf_set_default_timerP14sf_time_struct */
/* Demangled: sf_set_default_timer(sf_time_struct*) */
int _Z20sf_set_default_timerP14sf_time_struct(void);

/* Symbol: _ZN18InertialStaticMove15get_sm_feas_lenEv */
/* Demangled: InertialStaticMove::get_sm_feas_len() */
int _ZN18InertialStaticMove15get_sm_feas_lenEv(void);

/* Symbol: _ZN6UdrLpf26get_bmi160_accel_para_50hzEv */
/* Demangled: UdrLpf::get_bmi160_accel_para_50hz() */
int _ZN6UdrLpf26get_bmi160_accel_para_50hzEv(void);

/* Symbol: acc_sth_pre_1 */
/* Demangled: acc_sth_pre_1 */
extern void* acc_sth_pre_1;

/* Symbol: _ZN7PdrSatt26adv_start_ekf_condi_structC1Ev */
/* Demangled: PdrSatt::adv_start_ekf_condi_struct::adv_start_ekf_condi_struct() */
int _ZN7PdrSatt26adv_start_ekf_condi_structC1Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess17comp_avg_head_varEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_head_var(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess17comp_avg_head_varEPNS_16stat_quat_structEd(void);

/* Symbol: relative_height */
/* Demangled: relative_height */
extern void* relative_height;

/* Symbol: acc_sth_pre_2 */
/* Demangled: acc_sth_pre_2 */
extern void* acc_sth_pre_2;

/* Symbol: _ZN6PdrIsm8ini_feasEv */
/* Demangled: PdrIsm::ini_feas() */
int _ZN6PdrIsm8ini_feasEv(void);

/* Symbol: _Z16get_user_archivev */
/* Demangled: get_user_archive() */
int _Z16get_user_archivev(void);

/* Symbol: _ZN15MonitorDataRate10set_cfg_drEjii */
/* Demangled: MonitorDataRate::set_cfg_dr(unsigned int, int, int) */
int _ZN15MonitorDataRate10set_cfg_drEjii(void);

/* Symbol: _Z19norm_any_len_vectorPKdi */
/* Demangled: norm_any_len_vector(double const*, int) */
int _Z19norm_any_len_vectorPKdi(void);

/* Symbol: _ZN6PdrSgb8upd_statEv */
/* Demangled: PdrSgb::upd_stat() */
int _ZN6PdrSgb8upd_statEv(void);

/* Symbol: _ZN6PdrLpf26get_lsm6dsm_gyro_para_50hzEv */
/* Demangled: PdrLpf::get_lsm6dsm_gyro_para_50hz() */
int _ZN6PdrLpf26get_lsm6dsm_gyro_para_50hzEv(void);

/* Symbol: _ZN6SfSatt15alloc_meas_paraEv */
/* Demangled: SfSatt::alloc_meas_para() */
int _ZN6SfSatt15alloc_meas_paraEv(void);

/* Symbol: _ZN6SfSatt16meas_para_structC2Ev */
/* Demangled: SfSatt::meas_para_struct::meas_para_struct() */
int _ZN6SfSatt16meas_para_structC2Ev(void);

/* Symbol: _ZN9Barometer11set_ini_heiEv */
/* Demangled: Barometer::set_ini_hei() */
int _ZN9Barometer11set_ini_heiEv(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN3PDRD0Ev */
/* Demangled: PDR::~PDR() */
int _ZN3PDRD0Ev(void);

/* Symbol: _ZTV5PdrGb */
/* Demangled: vtable for PdrGb */
extern void* _ZTV5PdrGb;

/* Symbol: _ZN6PdrLpf22get_akm099xx_para_50hzEv */
/* Demangled: PdrLpf::get_akm099xx_para_50hz() */
int _ZN6PdrLpf22get_akm099xx_para_50hzEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess13guess_the_dirERNS_6VboGrpEPd */
/* Demangled: VehBodOrient::VboLess::guess_the_dir(VehBodOrient::VboGrp&, double*) */
int _ZN12VehBodOrient7VboLess13guess_the_dirERNS_6VboGrpEPd(void);

/* Symbol: dot */
/* Demangled: dot */
int dot(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _ZN5SfSgb16set_sm_results_sEN5SfIsm14results_structE */
/* Demangled: SfSgb::set_sm_results_s(SfIsm::results_struct) */
int _ZN5SfSgb16set_sm_results_sEN5SfIsm14results_structE(void);

/* Symbol: _ZN12VehBodOrient6VboGrpC1Ev */
/* Demangled: VehBodOrient::VboGrp::VboGrp() */
int _ZN12VehBodOrient6VboGrpC1Ev(void);

/* Symbol: _ZN5SfSgbD1Ev */
/* Demangled: SfSgb::~SfSgb() */
int _ZN5SfSgbD1Ev(void);

/* Symbol: _ZN6SfSatt18comp_indirect_innoEv */
/* Demangled: SfSatt::comp_indirect_inno() */
int _ZN6SfSatt18comp_indirect_innoEv(void);

/* Symbol: _ZN6UdrEkf8modify_PEiNS_5PEnum5PTypeE */
/* Demangled: UdrEkf::modify_P(int, UdrEkf::PEnum::PType) */
int _ZN6UdrEkf8modify_PEiNS_5PEnum5PTypeE(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN6PdrIsm11ini_resultsEv */
/* Demangled: PdrIsm::ini_results() */
int _ZN6PdrIsm11ini_resultsEv(void);

/* Symbol: _ZN5SfLpf31check_bmi160_accel_dec_num_axisEi */
/* Demangled: SfLpf::check_bmi160_accel_dec_num_axis(int) */
int _ZN5SfLpf31check_bmi160_accel_dec_num_axisEi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN16UdrUpdTypeSelect25is_valid_above_this_levelEPbjj */
/* Demangled: UdrUpdTypeSelect::is_valid_above_this_level(bool*, unsigned int, unsigned int) */
int _ZN16UdrUpdTypeSelect25is_valid_above_this_levelEPbjj(void);

/* Symbol: _ZN12VehBodOrient7VboLess10retune_weiEv */
/* Demangled: VehBodOrient::VboLess::retune_wei() */
int _ZN12VehBodOrient7VboLess10retune_weiEv(void);

/* Symbol: _ZN5SfIsm14copy_meas_buffEii */
/* Demangled: SfIsm::copy_meas_buff(int, int) */
int _ZN5SfIsm14copy_meas_buffEii(void);

/* Symbol: _ZN5SfWmm27MAGtype_GeoMagneticElementsC1Ev */
/* Demangled: SfWmm::MAGtype_GeoMagneticElements::MAGtype_GeoMagneticElements() */
int _ZN5SfWmm27MAGtype_GeoMagneticElementsC1Ev(void);

/* Symbol: _ZN9CarAccelB17delay_buff_structC1Ev */
/* Demangled: CarAccelB::delay_buff_struct::delay_buff_struct() */
int _ZN9CarAccelB17delay_buff_structC1Ev(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart18gen_fake_stat_quatERNS_16stat_quat_structEPKd */
/* Demangled: VehBodOrient::VboFakeStart::gen_fake_stat_quat(VehBodOrient::stat_quat_struct&, double const*) */
int _ZN12VehBodOrient12VboFakeStart18gen_fake_stat_quatERNS_16stat_quat_structEPKd(void);

/* Symbol: _ZNK6Matrix15check_this_sizeEv */
/* Demangled: Matrix::check_this_size() const */
int _ZNK6Matrix15check_this_sizeEv(void);

/* Symbol: _Z3dotPKdS0_i */
/* Demangled: dot(double const*, double const*, int) */
int _Z3dotPKdS0_i(void);

/* Symbol: _ZN9CarAccelB3RtsD2Ev */
/* Demangled: CarAccelB::Rts::~Rts() */
int _ZN9CarAccelB3RtsD2Ev(void);

/* Symbol: most_stable_ax */
/* Demangled: most_stable_ax */
int most_stable_ax(void);

/* Symbol: _ZN6PdrLpf25get_bmi160_gyro_para_50hzEv */
/* Demangled: PdrLpf::get_bmi160_gyro_para_50hz() */
int _ZN6PdrLpf25get_bmi160_gyro_para_50hzEv(void);

/* Symbol: algo_input_data_generation */
/* Demangled: algo_input_data_generation */
int algo_input_data_generation(void);

/* Symbol: _ZN6SfSatt16ctrl_para_structD2Ev */
/* Demangled: SfSatt::ctrl_para_struct::~ctrl_para_struct() */
int _ZN6SfSatt16ctrl_para_structD2Ev(void);

/* Symbol: _ZN6SfSatt17renormalize_dcm_pER6Matrix */
/* Demangled: SfSatt::renormalize_dcm_p(Matrix&) */
int _ZN6SfSatt17renormalize_dcm_pER6Matrix(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNK9CarAccelB19comp_wbased_wei_varEPKNS_18sub_kf_buff_structEPd */
/* Demangled: CarAccelB::comp_wbased_wei_var(CarAccelB::sub_kf_buff_struct const*, double*) const */
int _ZNK9CarAccelB19comp_wbased_wei_varEPKNS_18sub_kf_buff_structEPd(void);

/* Symbol: _ZN6UdrEkf34check_Corr_to_remove_P_CorrelationER6MatrixPjd */
/* Demangled: UdrEkf::check_Corr_to_remove_P_Correlation(Matrix&, unsigned int*, double) */
int _ZN6UdrEkf34check_Corr_to_remove_P_CorrelationER6MatrixPjd(void);

/* Symbol: _ZN6UdrEkf8get_RposEi */
/* Demangled: UdrEkf::get_Rpos(int) */
int _ZN6UdrEkf8get_RposEi(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_structD1Ev */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::~mag_caused_pos_drift_struct() */
int _ZN6PdrEkf27mag_caused_pos_drift_structD1Ev(void);

/* Symbol: _ZN11PdrMheading11meas_structC2Ev */
/* Demangled: PdrMheading::meas_struct::meas_struct() */
int _ZN11PdrMheading11meas_structC2Ev(void);

/* Symbol: _ZN6SfSatt13ekf_predict_pEv */
/* Demangled: SfSatt::ekf_predict_p() */
int _ZN6SfSatt13ekf_predict_pEv(void);

/* Symbol: array_multiply_double */
/* Demangled: array_multiply_double */
int array_multiply_double(void);

/* Symbol: _ZN11PdrMheading8copy_outEv */
/* Demangled: PdrMheading::copy_out() */
int _ZN11PdrMheading8copy_outEv(void);

/* Symbol: _ZN14SfStaticDetect4_maxEPdi */
/* Demangled: SfStaticDetect::_max(double*, int) */
int _ZN14SfStaticDetect4_maxEPdi(void);

/* Symbol: _ZN5SfLpf17set_smooth_resultERNS_19smoop_result_structEi */
/* Demangled: SfLpf::set_smooth_result(SfLpf::smoop_result_struct&, int) */
int _ZN5SfLpf17set_smooth_resultERNS_19smoop_result_structEi(void);

/* Symbol: _ZN9CarAccelB5SubKF28pred_state_covariance_matrixER6MatrixS2_ */
/* Demangled: CarAccelB::SubKF::pred_state_covariance_matrix(Matrix&, Matrix&) */
int _ZN9CarAccelB5SubKF28pred_state_covariance_matrixER6MatrixS2_(void);

/* Symbol: _ZN11PdrMheading16compare_meas_wmmEv */
/* Demangled: PdrMheading::compare_meas_wmm() */
int _ZN11PdrMheading16compare_meas_wmmEv(void);

/* Symbol: _ZN5SfIsm11feas_structC1Ev */
/* Demangled: SfIsm::feas_struct::feas_struct() */
int _ZN5SfIsm11feas_structC1Ev(void);

/* Symbol: _ZN6SfSattD1Ev */
/* Demangled: SfSatt::~SfSatt() */
int _ZN6SfSattD1Ev(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct12increase_varEiiiiPKd */
/* Demangled: CarAccelB::sf_pattern_struct::increase_var(int, int, int, int, double const*) const */
int _ZNK9CarAccelB17sf_pattern_struct12increase_varEiiiiPKd(void);

/* Symbol: mapRegion */
/* Demangled: mapRegion */
extern void* mapRegion;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9Pedometer7SsModel18total_activate_binEv */
/* Demangled: Pedometer::SsModel::total_activate_bin() */
int _ZN9Pedometer7SsModel18total_activate_binEv(void);

/* Symbol: _ZN9Pedometer7SsModelC2ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd */
/* Demangled: Pedometer::SsModel::SsModel(ConfigParams const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double, double) */
int _ZN9Pedometer7SsModelC2ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd(void);

/* Symbol: _Z7tag_logiPKcS0_S0_iS0_ */
/* Demangled: tag_log(int, char const*, char const*, char const*, int, char const*) */
int _Z7tag_logiPKcS0_S0_iS0_(void);

/* Symbol: _ZN6UdrEkf12R_MATRIX_COVE */
/* Demangled: UdrEkf::R_MATRIX_COV */
extern void* _ZN6UdrEkf12R_MATRIX_COVE;

/* Symbol: _ZN5SfLpf28set_adv_default_imu_lpf_paraEv */
/* Demangled: SfLpf::set_adv_default_imu_lpf_para() */
int _ZN5SfLpf28set_adv_default_imu_lpf_paraEv(void);

/* Symbol: _ZN4SfGb8upd_buffEdPKdd */
/* Demangled: SfGb::upd_buff(double, double const*, double) */
int _ZN4SfGb8upd_buffEdPKdd(void);

/* Symbol: _ZN6UdrEkf8set_sf2vER6Matrix */
/* Demangled: UdrEkf::set_sf2v(Matrix&) */
int _ZN6UdrEkf8set_sf2vER6Matrix(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm314upd_gdcm3_buffERKN9CarAccelB13output_structE */
/* Demangled: VehBodOrient::VboGdcm3::upd_gdcm3_buff(CarAccelB::output_struct const&) */
int _ZN12VehBodOrient8VboGdcm314upd_gdcm3_buffERKN9CarAccelB13output_structE(void);

/* Symbol: _ZN14GnssAccelDecelD2Ev */
/* Demangled: GnssAccelDecel::~GnssAccelDecel() */
int _ZN14GnssAccelDecelD2Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp16get_buff_avg_gadEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_gad() */
int _ZN12VehBodOrient6VboGrp16get_buff_avg_gadEv(void);

/* Symbol: _ZN6PdrSgbD0Ev */
/* Demangled: PdrSgb::~PdrSgb() */
int _ZN6PdrSgbD0Ev(void);

/* Symbol: acc_final_static_pitch */
/* Demangled: acc_final_static_pitch */
extern void* acc_final_static_pitch;

/* Symbol: acc_raw_bias */
/* Demangled: acc_raw_bias */
extern void* acc_raw_bias;

/* Symbol: _ZN6PdrEkf20comp_init_conditionsEd */
/* Demangled: PdrEkf::comp_init_conditions(double) */
int _ZN6PdrEkf20comp_init_conditionsEd(void);

/* Symbol: _ZTV17PositioningMethod */
/* Demangled: vtable for PositioningMethod */
extern void* _ZTV17PositioningMethod;

/* Symbol: _ZN9CarAccelB5SubKFC1Ev */
/* Demangled: CarAccelB::SubKF::SubKF() */
int _ZN9CarAccelB5SubKFC1Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLessC1Ev */
/* Demangled: VehBodOrient::VboLess::VboLess() */
int _ZN12VehBodOrient7VboLessC1Ev(void);

/* Symbol: _ZN11DataProcess27batch_handle_irregular_memsEv */
/* Demangled: DataProcess::batch_handle_irregular_mems() */
int _ZN11DataProcess27batch_handle_irregular_memsEv(void);

/* Symbol: _Z24degree_to_degree_minutesd */
/* Demangled: degree_to_degree_minutes(double) */
int _Z24degree_to_degree_minutesd(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart22is_good_fake_grav_projERKN9CarAccelB13output_structE */
/* Demangled: VehBodOrient::VboFakeStart::is_good_fake_grav_proj(CarAccelB::output_struct const&) */
int _ZN12VehBodOrient12VboFakeStart22is_good_fake_grav_projERKN9CarAccelB13output_structE(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _Z15is_any_not_zeroPKdi */
/* Demangled: is_any_not_zero(double const*, int) */
int _Z15is_any_not_zeroPKdi(void);

/* Symbol: _ZN12VehBodOrient7VboLess12comp_avg_gadEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_gad(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess12comp_avg_gadEPNS_16stat_quat_structEd(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm3D2Ev */
/* Demangled: VehBodOrient::VboGdcm3::~VboGdcm3() */
int _ZN12VehBodOrient8VboGdcm3D2Ev(void);

/* Symbol: _ZN6UdrEkf7set_v2pER6Matrix */
/* Demangled: UdrEkf::set_v2p(Matrix&) */
int _ZN6UdrEkf7set_v2pER6Matrix(void);

/* Symbol: _ZN6UdrEkfC2ERK12ConfigParams */
/* Demangled: UdrEkf::UdrEkf(ConfigParams const&) */
int _ZN6UdrEkfC2ERK12ConfigParams(void);

/* Symbol: _ZN18InertialStaticMove11meas_structC1Ev */
/* Demangled: InertialStaticMove::meas_struct::meas_struct() */
int _ZN18InertialStaticMove11meas_structC1Ev(void);

/* Symbol: _ZNK6Matrix2mTEv */
/* Demangled: Matrix::mT() const */
int _ZNK6Matrix2mTEv(void);

/* Symbol: _ZN6SfSatt9ekf_upd_pEv */
/* Demangled: SfSatt::ekf_upd_p() */
int _ZN6SfSatt9ekf_upd_pEv(void);

/* Symbol: _ZN9Barometer16get_height_stateEv */
/* Demangled: Barometer::get_height_state() */
int _ZN9Barometer16get_height_stateEv(void);

/* Symbol: _ZN12VehBodOrientD1Ev */
/* Demangled: VehBodOrient::~VehBodOrient() */
int _ZN12VehBodOrientD1Ev(void);

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_structC1ERKS_ */
/* Demangled: SystemStateControl::check_cvb_dir_struct::check_cvb_dir_struct(SystemStateControl const&) */
int _ZN18SystemStateControl20check_cvb_dir_structC1ERKS_(void);

/* Symbol: _ZN11PdrMheadingC2Ev */
/* Demangled: PdrMheading::PdrMheading() */
int _ZN11PdrMheadingC2Ev(void);

/* Symbol: _ZN6SfSatt20set_gp_gb_state_paraEv */
/* Demangled: SfSatt::set_gp_gb_state_para() */
int _ZN6SfSatt20set_gp_gb_state_paraEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN9CarAccelB5SubKF7upd_outERNS_13output_structE */
/* Demangled: CarAccelB::SubKF::upd_out(CarAccelB::output_struct&) */
int _ZN9CarAccelB5SubKF7upd_outERNS_13output_structE(void);

/* Symbol: _ZN12VehBodOrient7VboLess15reset_less_buffEv */
/* Demangled: VehBodOrient::VboLess::reset_less_buff() */
int _ZN12VehBodOrient7VboLess15reset_less_buffEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess18comp_avg_q_from_qqEPNS_16stat_quat_structE */
/* Demangled: VehBodOrient::VboLess::comp_avg_q_from_qq(VehBodOrient::stat_quat_struct*) */
int _ZN12VehBodOrient7VboLess18comp_avg_q_from_qqEPNS_16stat_quat_structE(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZN7PdrSatt8copy_outEv */
/* Demangled: PdrSatt::copy_out() */
int _ZN7PdrSatt8copy_outEv(void);

/* Symbol: _ZN6SfSatt12ekf_set_ctrlEv */
/* Demangled: SfSatt::ekf_set_ctrl() */
int _ZN6SfSatt12ekf_set_ctrlEv(void);

/* Symbol: _ZN5SfLpf14set_sensor_decEN6sensor12SensorIDEnum12SensorIDTypeEidiRNS_12smoop_structERb */
/* Demangled: SfLpf::set_sensor_dec(sensor::SensorIDEnum::SensorIDType, int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN5SfLpf14set_sensor_decEN6sensor12SensorIDEnum12SensorIDTypeEidiRNS_12smoop_structERb(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp22get_select_a_from_buffEjj */
/* Demangled: VehBodOrient::VboGrp::get_select_a_from_buff(unsigned int, unsigned int) const */
int _ZNK12VehBodOrient6VboGrp22get_select_a_from_buffEjj(void);

/* Symbol: MINOR */
/* Demangled: MINOR */
int MINOR(void);

/* Symbol: _ZN6PdrEkf16upd_heading_diffEPK18sf_gnss_msg_struct */
/* Demangled: PdrEkf::upd_heading_diff(sf_gnss_msg_struct const*) */
int _ZN6PdrEkf16upd_heading_diffEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN5SfWmm16MAG_GetUserInputEPK18sf_gnss_msg_struct */
/* Demangled: SfWmm::MAG_GetUserInput(sf_gnss_msg_struct const*) */
int _ZN5SfWmm16MAG_GetUserInputEPK18sf_gnss_msg_struct(void);

/* Symbol: pedometer_divide32 */
/* Demangled: pedometer_divide32 */
int pedometer_divide32(void);

/* Symbol: _ZN16PdrUpdTypeSelect6updateEP18sf_gnss_msg_structd */
/* Demangled: PdrUpdTypeSelect::update(sf_gnss_msg_struct*, double) */
int _ZN16PdrUpdTypeSelect6updateEP18sf_gnss_msg_structd(void);

/* Symbol: _Z12almost_equalddd */
/* Demangled: almost_equal(double, double, double) */
int _Z12almost_equalddd(void);

/* Symbol: get_pedometer_step_count */
/* Demangled: get_pedometer_step_count */
int get_pedometer_step_count(void);

/* Symbol: _ZN3UDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct */
/* Demangled: UDR::process(MonitorDataRate&, sf_gnss_msg_struct const*, sf_mems_msg_struct const*) */
int _ZN3UDR7processER15MonitorDataRatePK18sf_gnss_msg_structPK18sf_mems_msg_struct(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart9fake_quatERKN9CarAccelB13output_structEPd */
/* Demangled: VehBodOrient::VboFakeStart::fake_quat(CarAccelB::output_struct const&, double*) */
int _ZN12VehBodOrient12VboFakeStart9fake_quatERKN9CarAccelB13output_structEPd(void);

/* Symbol: _ZN6Matrix4mSubERS_S0_ */
/* Demangled: Matrix::mSub(Matrix&, Matrix&) */
int _ZN6Matrix4mSubERS_S0_(void);

/* Symbol: _ZN6PdrIsm11comp_w_distEv */
/* Demangled: PdrIsm::comp_w_dist() */
int _ZN6PdrIsm11comp_w_distEv(void);

/* Symbol: _ZN15PdrMotionDetectD0Ev */
/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
int _ZN15PdrMotionDetectD0Ev(void);

/* Symbol: _ZNK6UdrEkf18get_init_ekf_readyEv */
/* Demangled: UdrEkf::get_init_ekf_ready() const */
int _ZNK6UdrEkf18get_init_ekf_readyEv(void);

/* Symbol: _ZN15PdrMotionDetect24get_smooth_sensor_motionEv */
/* Demangled: PdrMotionDetect::get_smooth_sensor_motion() */
int _ZN15PdrMotionDetect24get_smooth_sensor_motionEv(void);

/* Symbol: _ZN5PdrGbD0Ev */
/* Demangled: PdrGb::~PdrGb() */
int _ZN5PdrGbD0Ev(void);

/* Symbol: _ZN12ConfigParams15mapping_gyro_idEPc */
/* Demangled: ConfigParams::mapping_gyro_id(char*) */
int _ZN12ConfigParams15mapping_gyro_idEPc(void);

/* Symbol: _ZN6UdrEkf8modify_PEiiNS_5PEnum5PTypeE */
/* Demangled: UdrEkf::modify_P(int, int, UdrEkf::PEnum::PType) */
int _ZN6UdrEkf8modify_PEiiNS_5PEnum5PTypeE(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias24is_available_temperatureEd */
/* Demangled: SimpleGyroBias::AlterGyroBias::is_available_temperature(double) */
int _ZN14SimpleGyroBias13AlterGyroBias24is_available_temperatureEd(void);

/* Symbol: _ZN12VehBodOrient7VboLess11is_straightERKNS_6VboGrpEj */
/* Demangled: VehBodOrient::VboLess::is_straight(VehBodOrient::VboGrp const&, unsigned int) */
int _ZN12VehBodOrient7VboLess11is_straightERKNS_6VboGrpEj(void);

/* Symbol: _Z5crossRK6MatrixS1_ */
/* Demangled: cross(Matrix const&, Matrix const&) */
int _Z5crossRK6MatrixS1_(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct8tune_varEPKNS_18sub_kf_buff_structEPd */
/* Demangled: CarAccelB::sf_pattern_struct::tune_var(CarAccelB::sub_kf_buff_struct const*, double*) const */
int _ZNK9CarAccelB17sf_pattern_struct8tune_varEPKNS_18sub_kf_buff_structEPd(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorAtt5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorAtt::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorAtt5R_COVE;

/* Symbol: _ZN6UdrLpf20set_adv_imu_lpf_paraEv */
/* Demangled: UdrLpf::set_adv_imu_lpf_para() */
int _ZN6UdrLpf20set_adv_imu_lpf_paraEv(void);

/* Symbol: _ZN18SystemStateControl22control_ekf_cvb_updateER6UdrEkf */
/* Demangled: SystemStateControl::control_ekf_cvb_update(UdrEkf&) */
int _ZN18SystemStateControl22control_ekf_cvb_updateER6UdrEkf(void);

/* Symbol: _ZN12VehBodOrient6VboGrp13reverse_labelEv */
/* Demangled: VehBodOrient::VboGrp::reverse_label() */
int _ZN12VehBodOrient6VboGrp13reverse_labelEv(void);

/* Symbol: _ZN5SfLpf13adv_filt_gnssERK15MonitorDataRateR13CloneNearGnssRP18sf_gnss_msg_struct */
/* Demangled: SfLpf::adv_filt_gnss(MonitorDataRate const&, CloneNearGnss&, sf_gnss_msg_struct*&) */
int _ZN5SfLpf13adv_filt_gnssERK15MonitorDataRateR13CloneNearGnssRP18sf_gnss_msg_struct(void);

/* Symbol: _ZN5SfWmm32MAG_PrintUserDataWithUncertaintyERKNS_27MAGtype_GeoMagneticElementsEPNS_21MAGtype_MagneticModelE */
/* Demangled: SfWmm::MAG_PrintUserDataWithUncertainty(SfWmm::MAGtype_GeoMagneticElements const&, SfWmm::MAGtype_MagneticModel*) */
int _ZN5SfWmm32MAG_PrintUserDataWithUncertaintyERKNS_27MAGtype_GeoMagneticElementsEPNS_21MAGtype_MagneticModelE(void);

/* Symbol: _ZN6UdrEkf17gnss_accel_structC2Ev */
/* Demangled: UdrEkf::gnss_accel_struct::gnss_accel_struct() */
int _ZN6UdrEkf17gnss_accel_structC2Ev(void);

/* Symbol: _ZNK6MatrixplERKS_ */
/* Demangled: Matrix::operator+(Matrix const&) const */
int _ZNK6MatrixplERKS_(void);

/* Symbol: _ZN5SfSgb12check_structC1Ev */
/* Demangled: SfSgb::check_struct::check_struct() */
int _ZN5SfSgb12check_structC1Ev(void);

/* Symbol: _ZN6UdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_bmi160_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf26set_bmi160_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN12VehBodOrient6VboGrp26get_buff_avg_centripetal_aEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_centripetal_a() */
int _ZN12VehBodOrient6VboGrp26get_buff_avg_centripetal_aEv(void);

/* Symbol: smd_detected */
/* Demangled: smd_detected */
extern void* smd_detected;

/* Symbol: acc_no_fix_cnt */
/* Demangled: acc_no_fix_cnt */
extern void* acc_no_fix_cnt;

/* Symbol: _ZN16PdrUpdTypeSelectC1Ev */
/* Demangled: PdrUpdTypeSelect::PdrUpdTypeSelect() */
int _ZN16PdrUpdTypeSelectC1Ev(void);

/* Symbol: _ZN5SfIsmC2Ev */
/* Demangled: SfIsm::SfIsm() */
int _ZN5SfIsmC2Ev(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: _ZN6UdrEkf23zupt_measurement_updateEjj */
/* Demangled: UdrEkf::zupt_measurement_update(unsigned int, unsigned int) */
int _ZN6UdrEkf23zupt_measurement_updateEjj(void);

/* Symbol: _ZN18SystemStateControl25coarse_substitute_good_fbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::coarse_substitute_good_fb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl25coarse_substitute_good_fbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN11PdrMheading14comp_calib_magEd */
/* Demangled: PdrMheading::comp_calib_mag(double) */
int _ZN11PdrMheading14comp_calib_magEd(void);

/* Symbol: _ZN6UdrEkf21update_init_cali_flagEPj */
/* Demangled: UdrEkf::update_init_cali_flag(unsigned int*) */
int _ZN6UdrEkf21update_init_cali_flagEPj(void);

/* Symbol: _ZN3UDR17is_service_activeEv */
/* Demangled: UDR::is_service_active() */
int _ZN3UDR17is_service_activeEv(void);

/* Symbol: acc_curr_gps_cnt */
/* Demangled: acc_curr_gps_cnt */
extern void* acc_curr_gps_cnt;

/* Symbol: _ZN6PdrEkf9get_stateEi */
/* Demangled: PdrEkf::get_state(int) */
int _ZN6PdrEkf9get_stateEi(void);

/* Symbol: _ZN11DataProcess19check_data_is_validEv */
/* Demangled: DataProcess::check_data_is_valid() */
int _ZN11DataProcess19check_data_is_validEv(void);

/* Symbol: _Z21upd_raw_while_initialRN5SfLpf12smoop_structEPKd */
/* Demangled: upd_raw_while_initial(SfLpf::smoop_struct&, double const*) */
int _Z21upd_raw_while_initialRN5SfLpf12smoop_structEPKd(void);

/* Symbol: _Z7eul2quaR6MatrixPd */
/* Demangled: eul2qua(Matrix&, double*) */
int _Z7eul2quaR6MatrixPd(void);

/* Symbol: _ZN6SfSatt24comp_indirect_inno_ng_gpEv */
/* Demangled: SfSatt::comp_indirect_inno_ng_gp() */
int _ZN6SfSatt24comp_indirect_inno_ng_gpEv(void);

/* Symbol: _Z10sf_strncpyPcPKcj */
/* Demangled: sf_strncpy(char*, char const*, unsigned int) */
int _Z10sf_strncpyPcPKcj(void);

/* Symbol: _ZN5SfWmm32MAG_CalculateGeoMagneticElementsEPNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::MAG_CalculateGeoMagneticElements(SfWmm::MAGtype_MagneticResults*, SfWmm::MAGtype_GeoMagneticElements*) */
int _ZN5SfWmm32MAG_CalculateGeoMagneticElementsEPNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN6UdrEkf20update_ekf_init_flagEP18sf_gnss_msg_structi */
/* Demangled: UdrEkf::update_ekf_init_flag(sf_gnss_msg_struct*, int) */
int _ZN6UdrEkf20update_ekf_init_flagEP18sf_gnss_msg_structi(void);

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_struct10reset_passEv */
/* Demangled: SystemStateControl::check_cvb_dir_struct::reset_pass() */
int _ZN18SystemStateControl20check_cvb_dir_struct10reset_passEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp27get_buff_avg_adned_head_varEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_adned_head_var() */
int _ZN12VehBodOrient6VboGrp27get_buff_avg_adned_head_varEv(void);

/* Symbol: _ZNK12VehBodOrient8VboGdcm332get_gdcm3_select_ext_g_from_buffEjj */
/* Demangled: VehBodOrient::VboGdcm3::get_gdcm3_select_ext_g_from_buff(unsigned int, unsigned int) const */
int _ZNK12VehBodOrient8VboGdcm332get_gdcm3_select_ext_g_from_buffEjj(void);

/* Symbol: vehicle_gyro */
/* Demangled: vehicle_gyro */
extern void* vehicle_gyro;

/* Symbol: ATT_acc_avg_buf */
/* Demangled: ATT_acc_avg_buf */
extern void* ATT_acc_avg_buf;

/* Symbol: find_road_direction_deviation */
/* Demangled: find_road_direction_deviation */
int find_road_direction_deviation(void);

/* Symbol: _ZN6PdrLpfC2ERK12ConfigParams */
/* Demangled: PdrLpf::PdrLpf(ConfigParams const&) */
int _ZN6PdrLpfC2ERK12ConfigParams(void);

/* Symbol: _ZN15PdrMotionDetect14update_gravityEP18sf_mems_msg_struct */
/* Demangled: PdrMotionDetect::update_gravity(sf_mems_msg_struct*) */
int _ZN15PdrMotionDetect14update_gravityEP18sf_mems_msg_struct(void);

/* Symbol: _ZN9Pedometer16update_step_typeEi */
/* Demangled: Pedometer::update_step_type(int) */
int _ZN9Pedometer16update_step_typeEi(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJdEEEvDpOT_ */
/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double>(double&&) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJdEEEvDpOT_(void);

/* Symbol: get_pedometer_best_run_axis */
/* Demangled: get_pedometer_best_run_axis */
int get_pedometer_best_run_axis(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN6SfSatt25gen_sys_cov_matrix_dcm_gbEv */
/* Demangled: SfSatt::gen_sys_cov_matrix_dcm_gb() */
int _ZN6SfSatt25gen_sys_cov_matrix_dcm_gbEv(void);

/* Symbol: _ZN6UdrEkf7set_p2vER6Matrix */
/* Demangled: UdrEkf::set_p2v(Matrix&) */
int _ZN6UdrEkf7set_p2vER6Matrix(void);

/* Symbol: _ZN6UdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_icm40607_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN18SystemStateControl20upd_rough_cvb_level3ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level3(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl20upd_rough_cvb_level3ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: acc_curr_gps_mean */
/* Demangled: acc_curr_gps_mean */
extern void* acc_curr_gps_mean;

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: _Z13comp_variancePKdi */
/* Demangled: comp_variance(double const*, int) */
int _Z13comp_variancePKdi(void);

/* Symbol: _Z18matrix_to_array3x3RK6MatrixPA3_d */
/* Demangled: matrix_to_array3x3(Matrix const&, double (*) [3]) */
int _Z18matrix_to_array3x3RK6MatrixPA3_d(void);

/* Symbol: _ZN5SfSgb11meas_structC1Ev */
/* Demangled: SfSgb::meas_struct::meas_struct() */
int _ZN5SfSgb11meas_structC1Ev(void);

/* Symbol: _ZN3UDR14get_pvt_resultEv */
/* Demangled: UDR::get_pvt_result() */
int _ZN3UDR14get_pvt_resultEv(void);

/* Symbol: _ZN18SystemStateControl33trigger_preprocessing_to_less_outERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelectNS_13CoarseCvbEnum13CoarseCvbTypeES7_ */
/* Demangled: SystemStateControl::trigger_preprocessing_to_less_out(VehBodOrient::less_output_struct const&, UdrUpdTypeSelect&, SystemStateControl::CoarseCvbEnum::CoarseCvbType, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl33trigger_preprocessing_to_less_outERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelectNS_13CoarseCvbEnum13CoarseCvbTypeES7_(void);

/* Symbol: v3_predict_by_tree */
/* Demangled: v3_predict_by_tree */
int v3_predict_by_tree(void);

/* Symbol: _ZN6PdrLpf20get_mmc5603_para_5hzEv */
/* Demangled: PdrLpf::get_mmc5603_para_5hz() */
int _ZN6PdrLpf20get_mmc5603_para_5hzEv(void);

/* Symbol: _ZN6Matrix5mMultERKS_S1_ */
/* Demangled: Matrix::mMult(Matrix const&, Matrix const&) */
int _ZN6Matrix5mMultERKS_S1_(void);

/* Symbol: _ZN6UdrEkf22imu_sf_as_gamma_structC1Ev */
/* Demangled: UdrEkf::imu_sf_as_gamma_struct::imu_sf_as_gamma_struct() */
int _ZN6UdrEkf22imu_sf_as_gamma_structC1Ev(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm324interp_gdcm3_to_sync_grpERNS_6VboGrpE */
/* Demangled: VehBodOrient::VboGdcm3::interp_gdcm3_to_sync_grp(VehBodOrient::VboGrp&) */
int _ZN12VehBodOrient8VboGdcm324interp_gdcm3_to_sync_grpERNS_6VboGrpE(void);

/* Symbol: sf_read_data */
/* Demangled: sf_read_data */
int sf_read_data(void);

/* Symbol: _Z11mov_wei_avgPdPKddi */
/* Demangled: mov_wei_avg(double*, double const*, double, int) */
int _Z11mov_wei_avgPdPKddi(void);

/* Symbol: _ZN9CarAccelB3Rts18reforward_meas_updEiiR6MatrixS2_ */
/* Demangled: CarAccelB::Rts::reforward_meas_upd(int, int, Matrix&, Matrix&) */
int _ZN9CarAccelB3Rts18reforward_meas_updEiiR6MatrixS2_(void);

/* Symbol: _ZNK9CarAccelB5SubKF16comp_Q_grav_projERK6MatrixS3_S3_RS1_ */
/* Demangled: CarAccelB::SubKF::comp_Q_grav_proj(Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
int _ZNK9CarAccelB5SubKF16comp_Q_grav_projERK6MatrixS3_S3_RS1_(void);

/* Symbol: _ZN14GnssAccelDecel12cnt_ava_dataEPdi */
/* Demangled: GnssAccelDecel::cnt_ava_data(double*, int) */
int _ZN14GnssAccelDecel12cnt_ava_dataEPdi(void);

/* Symbol: min_distance */
/* Demangled: min_distance */
int min_distance(void);

/* Symbol: _ZN5SfLpf11set_mag_decEv */
/* Demangled: SfLpf::set_mag_dec() */
int _ZN5SfLpf11set_mag_decEv(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD1Ev */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::~phone_yaw_moved_caused_pos_drift_struct() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD1Ev(void);

/* Symbol: _ZN6UdrEkf9set_cbv2vER6Matrix */
/* Demangled: UdrEkf::set_cbv2v(Matrix&) */
int _ZN6UdrEkf9set_cbv2vER6Matrix(void);

/* Symbol: _ZN14SimpleGyroBias12gbuff_structD1Ev */
/* Demangled: SimpleGyroBias::gbuff_struct::~gbuff_struct() */
int _ZN14SimpleGyroBias12gbuff_structD1Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect24get_avoiding_gnss_updateEd */
/* Demangled: UdrUpdTypeSelect::get_avoiding_gnss_update(double) */
int _ZN16UdrUpdTypeSelect24get_avoiding_gnss_updateEd(void);

/* Symbol: _ZN5SfLpf16get_default_paraEv */
/* Demangled: SfLpf::get_default_para() */
int _ZN5SfLpf16get_default_paraEv(void);

/* Symbol: _ZN5SfLpf18set_gnss_lpf_parasEPKNS_11para_structES2_ */
/* Demangled: SfLpf::set_gnss_lpf_paras(SfLpf::para_struct const*, SfLpf::para_struct const*) */
int _ZN5SfLpf18set_gnss_lpf_parasEPKNS_11para_structES2_(void);

/* Symbol: _ZN3PDR10algo_resetEv */
/* Demangled: PDR::algo_reset() */
int _ZN3PDR10algo_resetEv(void);

/* Symbol: _ZN11PdrMheading10out_structC2Ev */
/* Demangled: PdrMheading::out_struct::out_struct() */
int _ZN11PdrMheading10out_structC2Ev(void);

/* Symbol: _ZN9Pedometer7SsModel18is_model_availableEd */
/* Demangled: Pedometer::SsModel::is_model_available(double) */
int _ZN9Pedometer7SsModel18is_model_availableEd(void);

/* Symbol: _ZN11DataProcess15mems_preprocessEP18sf_mems_msg_struct */
/* Demangled: DataProcess::mems_preprocess(sf_mems_msg_struct*) */
int _ZN11DataProcess15mems_preprocessEP18sf_mems_msg_struct(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNK5SfLpf21get_adv_gnss_head_auyEPd */
/* Demangled: SfLpf::get_adv_gnss_head_auy(double*) const */
int _ZNK5SfLpf21get_adv_gnss_head_auyEPd(void);

/* Symbol: _ZN6UdrEkf16state_accumulateER6MatrixS1_S1_ */
/* Demangled: UdrEkf::state_accumulate(Matrix&, Matrix&, Matrix&) */
int _ZN6UdrEkf16state_accumulateER6MatrixS1_S1_(void);

/* Symbol: _ZN16UdrUpdTypeSelect6updateEP18sf_gnss_msg_structP6UdrEkfii */
/* Demangled: UdrUpdTypeSelect::update(sf_gnss_msg_struct*, UdrEkf*, int, int) */
int _ZN16UdrUpdTypeSelect6updateEP18sf_gnss_msg_structP6UdrEkfii(void);

/* Symbol: _ZN18SystemStateControl20upd_rough_cvb_level1ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level1(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl20upd_rough_cvb_level1ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: initialize_ped */
/* Demangled: initialize_ped */
int initialize_ped(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: _ZN6PdrIsmC1Ev */
/* Demangled: PdrIsm::PdrIsm() */
int _ZN6PdrIsmC1Ev(void);

/* Symbol: _ZN6PdrIgpC2Ev */
/* Demangled: PdrIgp::PdrIgp() */
int _ZN6PdrIgpC2Ev(void);

/* Symbol: _ZN6PdrIsm11comp_sf_iqrEv */
/* Demangled: PdrIsm::comp_sf_iqr() */
int _ZN6PdrIsm11comp_sf_iqrEv(void);

/* Symbol: _ZN12ConfigParamsC2EP20sf_user_param_struct */
/* Demangled: ConfigParams::ConfigParams(sf_user_param_struct*) */
int _ZN12ConfigParamsC2EP20sf_user_param_struct(void);

/* Symbol: _ZN11DataProcessD2Ev */
/* Demangled: DataProcess::~DataProcess() */
int _ZN11DataProcessD2Ev(void);

/* Symbol: _ZN5SfWmm13MAGtype_GeoidC2EPKf */
/* Demangled: SfWmm::MAGtype_Geoid::MAGtype_Geoid(float const*) */
int _ZN5SfWmm13MAGtype_GeoidC2EPKf(void);

/* Symbol: _ZN18SystemStateControl17assign_coarse_cvbERK6UdrEkf */
/* Demangled: SystemStateControl::assign_coarse_cvb(UdrEkf const&) */
int _ZN18SystemStateControl17assign_coarse_cvbERK6UdrEkf(void);

/* Symbol: _ZN18SystemStateControl32is_ekf_cvb_converged_to_oppo_dirEv */
/* Demangled: SystemStateControl::is_ekf_cvb_converged_to_oppo_dir() */
int _ZN18SystemStateControl32is_ekf_cvb_converged_to_oppo_dirEv(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStartD2Ev */
/* Demangled: VehBodOrient::VboFakeStart::~VboFakeStart() */
int _ZN12VehBodOrient12VboFakeStartD2Ev(void);

/* Symbol: _ZN7PdrSatt13tuning_structC1Ev */
/* Demangled: PdrSatt::tuning_struct::tuning_struct() */
int _ZN7PdrSatt13tuning_structC1Ev(void);

/* Symbol: _ZN5SfSgb14results_structC2Ev */
/* Demangled: SfSgb::results_struct::results_struct() */
int _ZN5SfSgb14results_structC2Ev(void);

/* Symbol: _ZNK6SfSatt19is_test_pred_by_dcmEv */
/* Demangled: SfSatt::is_test_pred_by_dcm() const */
int _ZNK6SfSatt19is_test_pred_by_dcmEv(void);

/* Symbol: _ZN14GnssAccelDecel15gad_buff_structD1Ev */
/* Demangled: GnssAccelDecel::gad_buff_struct::~gad_buff_struct() */
int _ZN14GnssAccelDecel15gad_buff_structD1Ev(void);

/* Symbol: _ZN18SystemStateControl30does_get_fine_cvb_in_ekf_levelEv */
/* Demangled: SystemStateControl::does_get_fine_cvb_in_ekf_level() */
int _ZN18SystemStateControl30does_get_fine_cvb_in_ekf_levelEv(void);

/* Symbol: v3_feature_extraction */
/* Demangled: v3_feature_extraction */
int v3_feature_extraction(void);

/* Symbol: _ZN4SfGbC2Ev */
/* Demangled: SfGb::SfGb() */
int _ZN4SfGbC2Ev(void);

/* Symbol: _ZN5SfLpf11set_imu_decEv */
/* Demangled: SfLpf::set_imu_dec() */
int _ZN5SfLpf11set_imu_decEv(void);

/* Symbol: _ZN5SfLpf28replace_original_sensor_dataEP18sf_mems_msg_struct */
/* Demangled: SfLpf::replace_original_sensor_data(sf_mems_msg_struct*) */
int _ZN5SfLpf28replace_original_sensor_dataEP18sf_mems_msg_struct(void);

/* Symbol: _ZN6UdrEkf15pitch_constrainEd */
/* Demangled: UdrEkf::pitch_constrain(double) */
int _ZN6UdrEkf15pitch_constrainEd(void);

/* Symbol: _ZN12VehBodOrient20get_min_t_to_est_cvbEv */
/* Demangled: VehBodOrient::get_min_t_to_est_cvb() */
int _ZN12VehBodOrient20get_min_t_to_est_cvbEv(void);

/* Symbol: _ZN18SystemStateControl20comp_coarse_cvb_diffERK6MatrixRdRb */
/* Demangled: SystemStateControl::comp_coarse_cvb_diff(Matrix const&, double&, bool&) */
int _ZN18SystemStateControl20comp_coarse_cvb_diffERK6MatrixRdRb(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN6UdrLpf29get_icm40607_accel_para_200hzEv */
/* Demangled: UdrLpf::get_icm40607_accel_para_200hz() */
int _ZN6UdrLpf29get_icm40607_accel_para_200hzEv(void);

/* Symbol: acc_static_roll */
/* Demangled: acc_static_roll */
extern void* acc_static_roll;

/* Symbol: dr_FixConstant */
/* Demangled: dr_FixConstant */
extern void* dr_FixConstant;

/* Symbol: mapWayCompany */
/* Demangled: mapWayCompany */
extern void* mapWayCompany;

/* Symbol: matching_location_degree */
/* Demangled: matching_location_degree */
extern void* matching_location_degree;

/* Symbol: _ZN11DataProcess13get_mems_restEv */
/* Demangled: DataProcess::get_mems_rest() */
int _ZN11DataProcess13get_mems_restEv(void);

/* Symbol: _ZN6UdrEkf29predict_acceleration_estimateEb */
/* Demangled: UdrEkf::predict_acceleration_estimate(bool) */
int _ZN6UdrEkf29predict_acceleration_estimateEb(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6SfSatt16select_ctrl_typeEv */
/* Demangled: SfSatt::select_ctrl_type() */
int _ZN6SfSatt16select_ctrl_typeEv(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN9CarAccelB5SubKF21dump_meas_upd_resultsEv */
/* Demangled: CarAccelB::SubKF::dump_meas_upd_results() */
int _ZN9CarAccelB5SubKF21dump_meas_upd_resultsEv(void);

/* Symbol: _ZN18SystemStateControl16upd_ekf_cvb_infoERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_ekf_cvb_info(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl16upd_ekf_cvb_infoERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN5SfLpf12smoop_structC1Ev */
/* Demangled: SfLpf::smoop_struct::smoop_struct() */
int _ZN5SfLpf12smoop_structC1Ev(void);

/* Symbol: _ZN6SfSatt6set_RkEv */
/* Demangled: SfSatt::set_Rk() */
int _ZN6SfSatt6set_RkEv(void);

/* Symbol: _ZN6UdrLpf25get_bmi160_gyro_para_50hzEv */
/* Demangled: UdrLpf::get_bmi160_gyro_para_50hz() */
int _ZN6UdrLpf25get_bmi160_gyro_para_50hzEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_struct13comp_nw_shapeERKNS_6VboGrpE */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::comp_nw_shape(VehBodOrient::VboGrp const&) */
int _ZN12VehBodOrient7VboLess15nw_shape_struct13comp_nw_shapeERKNS_6VboGrpE(void);

/* Symbol: _ZN18SystemStateControl6updateEP18sf_mems_msg_structR16UdrUpdTypeSelectR11InertialAttRK9CarAccelBRK12VehBodOrientR15UdrStaticDetectR6UdrEkfb */
/* Demangled: SystemStateControl::update(sf_mems_msg_struct*, UdrUpdTypeSelect&, InertialAtt&, CarAccelB const&, VehBodOrient const&, UdrStaticDetect&, UdrEkf&, bool) */
int _ZN18SystemStateControl6updateEP18sf_mems_msg_structR16UdrUpdTypeSelectR11InertialAttRK9CarAccelBRK12VehBodOrientR15UdrStaticDetectR6UdrEkfb(void);

/* Symbol: pedometer_out */
/* Demangled: pedometer_out */
extern void* pedometer_out;

/* Symbol: _ZN3PDR14upd_ism_and_gbERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE */
/* Demangled: PDR::upd_ism_and_gb(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
int _ZN3PDR14upd_ism_and_gbERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE(void);

/* Symbol: _ZN5SfWmm16get_wmm_elementsEPK18sf_gnss_msg_structRNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::get_wmm_elements(sf_gnss_msg_struct const*, SfWmm::MAGtype_GeoMagneticElements&) */
int _ZN5SfWmm16get_wmm_elementsEPK18sf_gnss_msg_structRNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN18SystemStateControl19switch_coarse_levelEdN12VehBodOrient9VboAtEnum6AtTypeE */
/* Demangled: SystemStateControl::switch_coarse_level(double, VehBodOrient::VboAtEnum::AtType) */
int _ZN18SystemStateControl19switch_coarse_levelEdN12VehBodOrient9VboAtEnum6AtTypeE(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN6PdrIsm11comp_sf_rngEv */
/* Demangled: PdrIsm::comp_sf_rng() */
int _ZN6PdrIsm11comp_sf_rngEv(void);

/* Symbol: _ZN6PdrLpf21get_mmc5603_para_50hzEv */
/* Demangled: PdrLpf::get_mmc5603_para_50hz() */
int _ZN6PdrLpf21get_mmc5603_para_50hzEv(void);

/* Symbol: _ZN6SfSatt27gen_state_transition_matrixEv */
/* Demangled: SfSatt::gen_state_transition_matrix() */
int _ZN6SfSatt27gen_state_transition_matrixEv(void);

/* Symbol: _ZN14SimpleGyroBias20reset_gpart_tmp_statEv */
/* Demangled: SimpleGyroBias::reset_gpart_tmp_stat() */
int _ZN14SimpleGyroBias20reset_gpart_tmp_statEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZN6SfSatt16set_ekf_var_predEv */
/* Demangled: SfSatt::set_ekf_var_pred() */
int _ZN6SfSatt16set_ekf_var_predEv(void);

/* Symbol: _ZN5SfWmm33MAG_ConvertGeoidToEllipsoidHeightEPNS_21MAGtype_CoordGeodeticEPNS_13MAGtype_GeoidE */
/* Demangled: SfWmm::MAG_ConvertGeoidToEllipsoidHeight(SfWmm::MAGtype_CoordGeodetic*, SfWmm::MAGtype_Geoid*) */
int _ZN5SfWmm33MAG_ConvertGeoidToEllipsoidHeightEPNS_21MAGtype_CoordGeodeticEPNS_13MAGtype_GeoidE(void);

/* Symbol: _ZN6UdrEkf25init_accumulate_parameterEv */
/* Demangled: UdrEkf::init_accumulate_parameter() */
int _ZN6UdrEkf25init_accumulate_parameterEv(void);

/* Symbol: _ZN3UDR18is_solution_stableEb */
/* Demangled: UDR::is_solution_stable(bool) */
int _ZN3UDR18is_solution_stableEb(void);

/* Symbol: _ZN18SystemStateControl29coarse_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::coarse_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl29coarse_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: state_to_rotationM */
/* Demangled: state_to_rotationM */
int state_to_rotationM(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN5SfWmm22MAGtype_CoordSphericalC1Ev */
/* Demangled: SfWmm::MAGtype_CoordSpherical::MAGtype_CoordSpherical() */
int _ZN5SfWmm22MAGtype_CoordSphericalC1Ev(void);

/* Symbol: _ZN3UDR14get_mnl_resultEv */
/* Demangled: UDR::get_mnl_result() */
int _ZN3UDR14get_mnl_resultEv(void);

/* Symbol: _ZN3UDRC2ERK12ConfigParams */
/* Demangled: UDR::UDR(ConfigParams const&) */
int _ZN3UDRC2ERK12ConfigParams(void);

/* Symbol: _ZN11InertialAtt7est_cvbER6Matrix */
/* Demangled: InertialAtt::est_cvb(Matrix&) */
int _ZN11InertialAtt7est_cvbER6Matrix(void);

/* Symbol: _ZN5SfLpf13dec_filt_gyroEPK18sf_mems_msg_struct */
/* Demangled: SfLpf::dec_filt_gyro(sf_mems_msg_struct const*) */
int _ZN5SfLpf13dec_filt_gyroEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN18SystemStateControl15assign_fine_cvbEdRK6UdrEkf */
/* Demangled: SystemStateControl::assign_fine_cvb(double, UdrEkf const&) */
int _ZN18SystemStateControl15assign_fine_cvbEdRK6UdrEkf(void);

/* Symbol: _ZN15PdrMotionDetect17get_sensor_motionEv */
/* Demangled: PdrMotionDetect::get_sensor_motion() */
int _ZN15PdrMotionDetect17get_sensor_motionEv(void);

/* Symbol: _ZN14SfStaticDetect14get_sensor_varENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_var(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect14get_sensor_varENS_10SensorEnum10SensorTypeE(void);

/* Symbol: _ZN5SfWmm37MAG_CalculateSecularVariationElementsERKNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::MAG_CalculateSecularVariationElements(SfWmm::MAGtype_MagneticResults const&, SfWmm::MAGtype_GeoMagneticElements*) */
int _ZN5SfWmm37MAG_CalculateSecularVariationElementsERKNS_23MAGtype_MagneticResultsEPNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN9CarAccelB5SubKF17upd_var_gyro_biasEPKd */
/* Demangled: CarAccelB::SubKF::upd_var_gyro_bias(double const*) */
int _ZN9CarAccelB5SubKF17upd_var_gyro_biasEPKd(void);

/* Symbol: _ZN12VehBodOrient7VboLess20real_symmetric_for_qEPdS1_ */
/* Demangled: VehBodOrient::VboLess::real_symmetric_for_q(double*, double*) */
int _ZN12VehBodOrient7VboLess20real_symmetric_for_qEPdS1_(void);

/* Symbol: _ZN12VehBodOrient7VboLess9free_lessEv */
/* Demangled: VehBodOrient::VboLess::free_less() */
int _ZN12VehBodOrient7VboLess9free_lessEv(void);

/* Symbol: _Z8comp_maxPKdi */
/* Demangled: comp_max(double const*, int) */
int _Z8comp_maxPKdi(void);

/* Symbol: _ZN9Pedometer7SsModel13cross_productERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_ */
/* Demangled: Pedometer::SsModel::cross_product(std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN9Pedometer7SsModel13cross_productERKNSt3__16vectorIdNS1_9allocatorIdEEEES7_(void);

/* Symbol: _ZN6UdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_bmi160_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN12VehBodOrient6VboGrp13is_first_fullEv */
/* Demangled: VehBodOrient::VboGrp::is_first_full() */
int _ZN12VehBodOrient6VboGrp13is_first_fullEv(void);

/* Symbol: _ZTV15PdrMotionDetect */
/* Demangled: vtable for PdrMotionDetect */
extern void* _ZTV15PdrMotionDetect;

/* Symbol: _ZN6UdrEkf25height_measurement_updateEd */
/* Demangled: UdrEkf::height_measurement_update(double) */
int _ZN6UdrEkf25height_measurement_updateEd(void);

/* Symbol: _ZN14SimpleGyroBiasD1Ev */
/* Demangled: SimpleGyroBias::~SimpleGyroBias() */
int _ZN14SimpleGyroBiasD1Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect12get_mu_levelEPj */
/* Demangled: UdrUpdTypeSelect::get_mu_level(unsigned int*) */
int _ZN16UdrUpdTypeSelect12get_mu_levelEPj(void);

/* Symbol: _ZNK14SimpleGyroBias16is_poly_gb_readyEv */
/* Demangled: SimpleGyroBias::is_poly_gb_ready() const */
int _ZNK14SimpleGyroBias16is_poly_gb_readyEv(void);

/* Symbol: dr_radio_location_update */
/* Demangled: dr_radio_location_update */
int dr_radio_location_update(void);

/* Symbol: mpe_get_gravity */
/* Demangled: mpe_get_gravity */
int mpe_get_gravity(void);

/* Symbol: _ZN6PdrIsm12get_rf_parasEv */
/* Demangled: PdrIsm::get_rf_paras() */
int _ZN6PdrIsm12get_rf_parasEv(void);

/* Symbol: _ZN11PdrMheading11upd_igp_outERKN7PdrSatt10out_structE */
/* Demangled: PdrMheading::upd_igp_out(PdrSatt::out_struct const&) */
int _ZN11PdrMheading11upd_igp_outERKN7PdrSatt10out_structE(void);

/* Symbol: _ZN5SfWmm13MAG_SummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE */
/* Demangled: SfWmm::MAG_Summation(SfWmm::MAGtype_LegendreFunction*, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
int _ZN5SfWmm13MAG_SummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void);

/* Symbol: _ZN9CarAccelB3Rts13backward_filtEv */
/* Demangled: CarAccelB::Rts::backward_filt() */
int _ZN9CarAccelB3Rts13backward_filtEv(void);

/* Symbol: _ZN6UdrEkf21init_covariance_arrayEv */
/* Demangled: UdrEkf::init_covariance_array() */
int _ZN6UdrEkf21init_covariance_arrayEv(void);

/* Symbol: _ZN6UdrEkf23zihr_measurement_updateEjj */
/* Demangled: UdrEkf::zihr_measurement_update(unsigned int, unsigned int) */
int _ZN6UdrEkf23zihr_measurement_updateEjj(void);

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct15is_reliable_dirEv */
/* Demangled: SystemStateControl::coarse_dir_struct::is_reliable_dir() */
int _ZN18SystemStateControl17coarse_dir_struct15is_reliable_dirEv(void);

/* Symbol: _ZN12VehBodOrient16stat_quat_struct12reset_stat_qEv */
/* Demangled: VehBodOrient::stat_quat_struct::reset_stat_q() */
int _ZN12VehBodOrient16stat_quat_struct12reset_stat_qEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess23construct_pseudo_a_nv_vEj */
/* Demangled: VehBodOrient::VboLess::construct_pseudo_a_nv_v(unsigned int) */
int _ZN12VehBodOrient7VboLess23construct_pseudo_a_nv_vEj(void);

/* Symbol: _ZN6Matrix7set_valEid */
/* Demangled: Matrix::set_val(int, double) */
int _ZN6Matrix7set_valEid(void);

/* Symbol: _ZN3UDR18is_state_irregularEP18sf_mems_msg_structN8Watchdog11DynamicEnum11DynamicTypeE */
/* Demangled: UDR::is_state_irregular(sf_mems_msg_struct*, Watchdog::DynamicEnum::DynamicType) */
int _ZN3UDR18is_state_irregularEP18sf_mems_msg_structN8Watchdog11DynamicEnum11DynamicTypeE(void);

/* Symbol: _ZN9Pedometer7SsModel16get_speed_statusEdd */
/* Demangled: Pedometer::SsModel::get_speed_status(double, double) */
int _ZN9Pedometer7SsModel16get_speed_statusEdd(void);

/* Symbol: _ZN6SfSatt10upd_w_corrEv */
/* Demangled: SfSatt::upd_w_corr() */
int _ZN6SfSatt10upd_w_corrEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect19get_min_resi_dop_doEP18sf_gnss_msg_struct */
/* Demangled: UdrUpdTypeSelect::get_min_resi_dop_do(sf_gnss_msg_struct*) */
int _ZN16UdrUpdTypeSelect19get_min_resi_dop_doEP18sf_gnss_msg_struct(void);

/* Symbol: cross */
/* Demangled: cross */
int cross(void);

/* Symbol: _ZN5SfLpf17run_two_stage_lpfERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct */
/* Demangled: SfLpf::run_two_stage_lpf(MonitorDataRate const&, CloneNearGnss&, InterpMems&, sf_mems_msg_struct*, sf_gnss_msg_struct*&) */
int _ZN5SfLpf17run_two_stage_lpfERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct(void);

/* Symbol: _ZN6SfSatt15ext_feas_structC2Ev */
/* Demangled: SfSatt::ext_feas_struct::ext_feas_struct() */
int _ZN6SfSatt15ext_feas_structC2Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp33comp_ref_forward_accel_by_abs_maxEPdi */
/* Demangled: VehBodOrient::VboGrp::comp_ref_forward_accel_by_abs_max(double*, int) */
int _ZN12VehBodOrient6VboGrp33comp_ref_forward_accel_by_abs_maxEPdi(void);

/* Symbol: _ZN10InterpMemsC2Ev */
/* Demangled: InterpMems::InterpMems() */
int _ZN10InterpMemsC2Ev(void);

/* Symbol: _ZN6SfSatt16ctrl_para_structC1Ev */
/* Demangled: SfSatt::ctrl_para_struct::ctrl_para_struct() */
int _ZN6SfSatt16ctrl_para_structC1Ev(void);

/* Symbol: _ZN9CarAccelB5SubKF32comp_meas_inno_covariance_matrixER6Matrix */
/* Demangled: CarAccelB::SubKF::comp_meas_inno_covariance_matrix(Matrix&) */
int _ZN9CarAccelB5SubKF32comp_meas_inno_covariance_matrixER6Matrix(void);

/* Symbol: _ZN6PdrEkfC2ERK12ConfigParams */
/* Demangled: PdrEkf::PdrEkf(ConfigParams const&) */
int _ZN6PdrEkfC2ERK12ConfigParams(void);

/* Symbol: _ZN9Barometer14check_bs_resetEv */
/* Demangled: Barometer::check_bs_reset() */
int _ZN9Barometer14check_bs_resetEv(void);

/* Symbol: _ZNK9CarAccelB5SubKF9get_var_wEv */
/* Demangled: CarAccelB::SubKF::get_var_w() const */
int _ZNK9CarAccelB5SubKF9get_var_wEv(void);

/* Symbol: _ZN6PdrLpfD2Ev */
/* Demangled: PdrLpf::~PdrLpf() */
int _ZN6PdrLpfD2Ev(void);

/* Symbol: _ZN15PdrMotionDetectC2ERK12ConfigParams */
/* Demangled: PdrMotionDetect::PdrMotionDetect(ConfigParams const&) */
int _ZN15PdrMotionDetectC2ERK12ConfigParams(void);

/* Symbol: _Z16is_all_not_zerosPKdi */
/* Demangled: is_all_not_zeros(double const*, int) */
int _Z16is_all_not_zerosPKdi(void);

/* Symbol: _Z15sf_set_log_pathPKc */
/* Demangled: sf_set_log_path(char const*) */
int _Z15sf_set_log_pathPKc(void);

/* Symbol: _ZN6SfSatt22renormalize_dcm_statesER6Matrix */
/* Demangled: SfSatt::renormalize_dcm_states(Matrix&) */
int _ZN6SfSatt22renormalize_dcm_statesER6Matrix(void);

/* Symbol: max */
/* Demangled: max */
int max(void);

/* Symbol: reporting_interval */
/* Demangled: reporting_interval */
extern void* reporting_interval;

/* Symbol: set_pedometer_report_interval */
/* Demangled: set_pedometer_report_interval */
int set_pedometer_report_interval(void);

/* Symbol: _ZN6Matrix8skew_xyzERS_ */
/* Demangled: Matrix::skew_xyz(Matrix&) */
int _ZN6Matrix8skew_xyzERS_(void);

/* Symbol: _ZN14SimpleGyroBias11alloc_gbuffEv */
/* Demangled: SimpleGyroBias::alloc_gbuff() */
int _ZN14SimpleGyroBias11alloc_gbuffEv(void);

/* Symbol: _ZN6PdrEkf11is_mag_workEv */
/* Demangled: PdrEkf::is_mag_work() */
int _ZN6PdrEkf11is_mag_workEv(void);

/* Symbol: _ZN7PdrSattD1Ev */
/* Demangled: PdrSatt::~PdrSatt() */
int _ZN7PdrSattD1Ev(void);

/* Symbol: _ZN5SfLpf14check_lpf_coefERNS_12smoop_structE */
/* Demangled: SfLpf::check_lpf_coef(SfLpf::smoop_struct&) */
int _ZN5SfLpf14check_lpf_coefERNS_12smoop_structE(void);

/* Symbol: _ZN6SfSatt5set_KEv */
/* Demangled: SfSatt::set_K() */
int _ZN6SfSatt5set_KEv(void);

/* Symbol: latest_report_count */
/* Demangled: latest_report_count */
extern void* latest_report_count;

/* Symbol: _ZN16PdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE */
/* Demangled: PdrUpdTypeSelect::get_se(PdrUpdTypeSelect::SeEnum::SeType) */
int _ZN16PdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE(void);

/* Symbol: _ZN6SfSatt18ekf_stop_pred_timeEv */
/* Demangled: SfSatt::ekf_stop_pred_time() */
int _ZN6SfSatt18ekf_stop_pred_timeEv(void);

/* Symbol: _ZN6SfSatt40test_gen_state_transition_matrix_for_dcmEv */
/* Demangled: SfSatt::test_gen_state_transition_matrix_for_dcm() */
int _ZN6SfSatt40test_gen_state_transition_matrix_for_dcmEv(void);

/* Symbol: _ZN6UdrLpf27get_lsm6dsm_gyro_para_200hzEv */
/* Demangled: UdrLpf::get_lsm6dsm_gyro_para_200hz() */
int _ZN6UdrLpf27get_lsm6dsm_gyro_para_200hzEv(void);

/* Symbol: gps_kf_heading */
/* Demangled: gps_kf_heading */
extern void* gps_kf_heading;

/* Symbol: _Z19sf_set_archive_pathPKc */
/* Demangled: sf_set_archive_path(char const*) */
int _Z19sf_set_archive_pathPKc(void);

/* Symbol: _ZN5SfIsm11meas_structD1Ev */
/* Demangled: SfIsm::meas_struct::~meas_struct() */
int _ZN5SfIsm11meas_structD1Ev(void);

/* Symbol: _ZN6SfSatt16alloc_state_paraEv */
/* Demangled: SfSatt::alloc_state_para() */
int _ZN6SfSatt16alloc_state_paraEv(void);

/* Symbol: _ZN6UdrEkf25predict_velocity_estimateEd */
/* Demangled: UdrEkf::predict_velocity_estimate(double) */
int _ZN6UdrEkf25predict_velocity_estimateEd(void);

/* Symbol: _ZN6UdrLpfD1Ev */
/* Demangled: UdrLpf::~UdrLpf() */
int _ZN6UdrLpfD1Ev(void);

/* Symbol: length */
/* Demangled: length */
int length(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRdEEEvDpOT_ */
/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double&>(double&) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void);

/* Symbol: _Z14upd_rot_matrixR6MatrixRKS_ */
/* Demangled: upd_rot_matrix(Matrix&, Matrix const&) */
int _Z14upd_rot_matrixR6MatrixRKS_(void);

/* Symbol: _ZN6UdrEkf17R_INIT_MATRIX_COVE */
/* Demangled: UdrEkf::R_INIT_MATRIX_COV */
extern void* _ZN6UdrEkf17R_INIT_MATRIX_COVE;

/* Symbol: _ZN14GnssAccelDecelC1Ev */
/* Demangled: GnssAccelDecel::GnssAccelDecel() */
int _ZN14GnssAccelDecelC1Ev(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm310free_gdcm3Ev */
/* Demangled: VehBodOrient::VboGdcm3::free_gdcm3() */
int _ZN12VehBodOrient8VboGdcm310free_gdcm3Ev(void);

/* Symbol: matching_location */
/* Demangled: matching_location */
extern void* matching_location;

/* Symbol: _ZN6MatrixC1Ei */
/* Demangled: Matrix::Matrix(int) */
int _ZN6MatrixC1Ei(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN9CarAccelB5SubKF11set_gsd_varEd */
/* Demangled: CarAccelB::SubKF::set_gsd_var(double) */
int _ZN9CarAccelB5SubKF11set_gsd_varEd(void);

/* Symbol: _ZNK9CarAccelB5SubKF13comp_P1_P2_P3ERK6MatrixS3_RS1_S4_S4_ */
/* Demangled: CarAccelB::SubKF::comp_P1_P2_P3(Matrix const&, Matrix const&, Matrix&, Matrix&, Matrix&) const */
int _ZNK9CarAccelB5SubKF13comp_P1_P2_P3ERK6MatrixS3_RS1_S4_S4_(void);

/* Symbol: _ZN5SfSgb20esti_rough_gyro_biasEv */
/* Demangled: SfSgb::esti_rough_gyro_bias() */
int _ZN5SfSgb20esti_rough_gyro_biasEv(void);

/* Symbol: _ZN5SfLpf12adv_filt_magERK15MonitorDataRatePK18sf_mems_msg_struct */
/* Demangled: SfLpf::adv_filt_mag(MonitorDataRate const&, sf_mems_msg_struct const*) */
int _ZN5SfLpf12adv_filt_magERK15MonitorDataRatePK18sf_mems_msg_struct(void);

/* Symbol: _ZN9CarAccelB5SubKF7upd_imuEv */
/* Demangled: CarAccelB::SubKF::upd_imu() */
int _ZN9CarAccelB5SubKF7upd_imuEv(void);

/* Symbol: _ZNK9CarAccelB15comp_static_varEPKdPKN18InertialStaticMove12ManeuverEnum12ManeuverTypeEi */
/* Demangled: CarAccelB::comp_static_var(double const*, InertialStaticMove::ManeuverEnum::ManeuverType const*, int) const */
int _ZNK9CarAccelB15comp_static_varEPKdPKN18InertialStaticMove12ManeuverEnum12ManeuverTypeEi(void);

/* Symbol: _ZN14GnssAccelDecel12round_ava_adEv */
/* Demangled: GnssAccelDecel::round_ava_ad() */
int _ZN14GnssAccelDecel12round_ava_adEv(void);

/* Symbol: dr_utm2lla */
/* Demangled: dr_utm2lla */
int dr_utm2lla(void);

/* Symbol: _ZN9CarAccelB5SubKF7set_gadEd */
/* Demangled: CarAccelB::SubKF::set_gad(double) */
int _ZN9CarAccelB5SubKF7set_gadEd(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm3C1Ev */
/* Demangled: VehBodOrient::VboGdcm3::VboGdcm3() */
int _ZN12VehBodOrient8VboGdcm3C1Ev(void);

/* Symbol: _ZN9CarAccelBC2Ev */
/* Demangled: CarAccelB::CarAccelB() */
int _ZN9CarAccelBC2Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess7set_weiERKNS_6VboGrpEjj */
/* Demangled: VehBodOrient::VboLess::set_wei(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
int _ZN12VehBodOrient7VboLess7set_weiERKNS_6VboGrpEjj(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias22esti_dynamic_gyro_biasEdPKdS2_dd */
/* Demangled: SimpleGyroBias::AlterGyroBias::esti_dynamic_gyro_bias(double, double const*, double const*, double, double) */
int _ZN14SimpleGyroBias13AlterGyroBias22esti_dynamic_gyro_biasEdPKdS2_dd(void);

/* Symbol: _Z24_sf_read_avoid_gnss_listNSt3__16vectorIdNS_9allocatorIdEEEE */
/* Demangled: _sf_read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> >) */
int _Z24_sf_read_avoid_gnss_listNSt3__16vectorIdNS_9allocatorIdEEEE(void);

/* Symbol: _ZNK5SfLpf18get_adv_accel_tempEPd */
/* Demangled: SfLpf::get_adv_accel_temp(double*) const */
int _ZNK5SfLpf18get_adv_accel_tempEPd(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorAtt4NameE */
/* Demangled: UdrEkf::UpdLevEnum::SensorAtt::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorAtt4NameE;

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorPos4NameE */
/* Demangled: UdrEkf::UpdLevEnum::SensorPos::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorPos4NameE;

/* Symbol: _ZN18SystemStateControl11get_controlEv */
/* Demangled: SystemStateControl::get_control() */
int _ZN18SystemStateControl11get_controlEv(void);

/* Symbol: _ZN9CarAccelB18get_cad_delay_infoEPdS0_Pi */
/* Demangled: CarAccelB::get_cad_delay_info(double*, double*, int*) */
int _ZN9CarAccelB18get_cad_delay_infoEPdS0_Pi(void);

/* Symbol: _ZNK14SimpleGyroBias21get_dyn_gyro_bias_varEPd */
/* Demangled: SimpleGyroBias::get_dyn_gyro_bias_var(double*) const */
int _ZNK14SimpleGyroBias21get_dyn_gyro_bias_varEPd(void);

/* Symbol: activity_recognition */
/* Demangled: activity_recognition */
extern void* activity_recognition;

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _ZN4SfGb12gbuff_structD1Ev */
/* Demangled: SfGb::gbuff_struct::~gbuff_struct() */
int _ZN4SfGb12gbuff_structD1Ev(void);

/* Symbol: _Z19cos_similarity_vec3PKdS0_ */
/* Demangled: cos_similarity_vec3(double const*, double const*) */
int _Z19cos_similarity_vec3PKdS0_(void);

/* Symbol: _ZN14SfStaticDetect4_minEPdi */
/* Demangled: SfStaticDetect::_min(double*, int) */
int _ZN14SfStaticDetect4_minEPdi(void);

/* Symbol: _ZN12VehBodOrient6VboGrp21get_buff_avg_head_varEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_head_var() */
int _ZN12VehBodOrient6VboGrp21get_buff_avg_head_varEv(void);

/* Symbol: _ZN6PdrLpf18get_adv_accel_50hzEv */
/* Demangled: PdrLpf::get_adv_accel_50hz() */
int _ZN6PdrLpf18get_adv_accel_50hzEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticAtt4NameE */
/* Demangled: UdrEkf::UpdLevEnum::StaticAtt::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticAtt4NameE;

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_struct17track_ekf_cvb_dirERK9CarAccelB */
/* Demangled: SystemStateControl::check_cvb_dir_struct::track_ekf_cvb_dir(CarAccelB const&) */
int _ZN18SystemStateControl20check_cvb_dir_struct17track_ekf_cvb_dirERK9CarAccelB(void);

/* Symbol: _ZN6MatrixC1Ev */
/* Demangled: Matrix::Matrix() */
int _ZN6MatrixC1Ev(void);

/* Symbol: _ZN6PdrEkf11upd_pos_velEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structE */
/* Demangled: PdrEkf::upd_pos_vel(sf_gnss_msg_struct const*, Pedometer::step_info_struct const&) */
int _ZN6PdrEkf11upd_pos_velEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structE(void);

/* Symbol: _ZN11DataProcess12get_mems_locEi */
/* Demangled: DataProcess::get_mems_loc(int) */
int _ZN11DataProcess12get_mems_locEi(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticPos4NameE */
/* Demangled: UdrEkf::UpdLevEnum::StaticPos::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticPos4NameE;

/* Symbol: _ZN9Pedometer7SsModel12update_modelEd */
/* Demangled: Pedometer::SsModel::update_model(double) */
int _ZN9Pedometer7SsModel12update_modelEd(void);

/* Symbol: _ZN6SfSatt18check_type_settingEv */
/* Demangled: SfSatt::check_type_setting() */
int _ZN6SfSatt18check_type_settingEv(void);

/* Symbol: _ZN5SfWmm23MAG_GeodeticToSphericalERKNS_17MAGtype_EllipsoidERKNS_21MAGtype_CoordGeodeticEPNS_22MAGtype_CoordSphericalE */
/* Demangled: SfWmm::MAG_GeodeticToSpherical(SfWmm::MAGtype_Ellipsoid const&, SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_CoordSpherical*) */
int _ZN5SfWmm23MAG_GeodeticToSphericalERKNS_17MAGtype_EllipsoidERKNS_21MAGtype_CoordGeodeticEPNS_22MAGtype_CoordSphericalE(void);

/* Symbol: _ZN6UdrEkf18stored_bias_structD1Ev */
/* Demangled: UdrEkf::stored_bias_struct::~stored_bias_struct() */
int _ZN6UdrEkf18stored_bias_structD1Ev(void);

/* Symbol: lla_r */
/* Demangled: lla_r */
extern void* lla_r;

/* Symbol: _ZN6SfSatt14upd_ext_feas_aERK6Matrix */
/* Demangled: SfSatt::upd_ext_feas_a(Matrix const&) */
int _ZN6SfSatt14upd_ext_feas_aERK6Matrix(void);

/* Symbol: _ZN6SfSatt17state_para_structD2Ev */
/* Demangled: SfSatt::state_para_struct::~state_para_struct() */
int _ZN6SfSatt17state_para_structD2Ev(void);

/* Symbol: _ZN6UdrEkf12state_assignEP18sf_gnss_msg_structbbbbPj */
/* Demangled: UdrEkf::state_assign(sf_gnss_msg_struct*, bool, bool, bool, bool, unsigned int*) */
int _ZN6UdrEkf12state_assignEP18sf_gnss_msg_structbbbbPj(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm39comp_gcntEiii */
/* Demangled: VehBodOrient::VboGdcm3::comp_gcnt(int, int, int) */
int _ZN12VehBodOrient8VboGdcm39comp_gcntEiii(void);

/* Symbol: _ZN15PdrMotionDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv */
/* Demangled: PdrMotionDetect::update_static_status(sf_mems_msg_struct*, sf_gnss_msg_struct*, Matrix&, void*) */
int _ZN15PdrMotionDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv(void);

/* Symbol: _ZN6SfSatt11ini_ekf_varEv */
/* Demangled: SfSatt::ini_ekf_var() */
int _ZN6SfSatt11ini_ekf_varEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess23comp_avg_adned_head_varEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_adned_head_var(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess23comp_avg_adned_head_varEPNS_16stat_quat_structEd(void);

/* Symbol: set_pedometer_t_s */
/* Demangled: set_pedometer_t_s */
int set_pedometer_t_s(void);

/* Symbol: _ZN14SfStaticDetect13get_is_mag_okEv */
/* Demangled: SfStaticDetect::get_is_mag_ok() */
int _ZN14SfStaticDetect13get_is_mag_okEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticPos10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticPos::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticPos10R_UNIT_COVE;

/* Symbol: _ZN6UdrEkf16restore_velocityEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::restore_velocity(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf16restore_velocityEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN18SystemStateControl17coarse_cvb_struct5resetEv */
/* Demangled: SystemStateControl::coarse_cvb_struct::reset() */
int _ZN18SystemStateControl17coarse_cvb_struct5resetEv(void);

/* Symbol: _ZN18SystemStateControl27set_fine_cvb_from_ekf_levelENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::set_fine_cvb_from_ekf_level(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl27set_fine_cvb_from_ekf_levelENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm311alloc_gdcm3Ev */
/* Demangled: VehBodOrient::VboGdcm3::alloc_gdcm3() */
int _ZN12VehBodOrient8VboGdcm311alloc_gdcm3Ev(void);

/* Symbol: mpe_get_pedometer */
/* Demangled: mpe_get_pedometer */
int mpe_get_pedometer(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _ZN6SfSatt15ekf_set_predictEv */
/* Demangled: SfSatt::ekf_set_predict() */
int _ZN6SfSatt15ekf_set_predictEv(void);

/* Symbol: _ZNK6Matrix11get_col_numEv */
/* Demangled: Matrix::get_col_num() const */
int _ZNK6Matrix11get_col_numEv(void);

/* Symbol: _ZN9Barometer9baro_smooEv */
/* Demangled: Barometer::baro_smoo() */
int _ZN9Barometer9baro_smooEv(void);

/* Symbol: _ZNK9CarAccelB5SubKF6set_RkEdRK6MatrixS3_S3_S3_RS1_ */
/* Demangled: CarAccelB::SubKF::set_Rk(double, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
int _ZNK9CarAccelB5SubKF6set_RkEdRK6MatrixS3_S3_S3_RS1_(void);

/* Symbol: _ZN6UdrEkf26heading_measurement_updateEdPdjj */
/* Demangled: UdrEkf::heading_measurement_update(double, double*, unsigned int, unsigned int) */
int _ZN6UdrEkf26heading_measurement_updateEdPdjj(void);

/* Symbol: _ZN18SystemStateControlC1Ev */
/* Demangled: SystemStateControl::SystemStateControl() */
int _ZN18SystemStateControlC1Ev(void);

/* Symbol: _ZN11Integration12sf_read_dataEP18sf_gnss_msg_structP18sf_mems_msg_structi */
/* Demangled: Integration::sf_read_data(sf_gnss_msg_struct*, sf_mems_msg_struct*, int) */
int _ZN11Integration12sf_read_dataEP18sf_gnss_msg_structP18sf_mems_msg_structi(void);

/* Symbol: _Z14upd_rot_matrixR6MatrixRKS_d */
/* Demangled: upd_rot_matrix(Matrix&, Matrix const&, double) */
int _Z14upd_rot_matrixR6MatrixRKS_d(void);

/* Symbol: _Z15sf_timer_to_strPdPi14sf_time_struct */
/* Demangled: sf_timer_to_str(double*, int*, sf_time_struct) */
int _Z15sf_timer_to_strPdPi14sf_time_struct(void);

/* Symbol: _ZN9CarAccelB5SubKF18is_fail_estimationEv */
/* Demangled: CarAccelB::SubKF::is_fail_estimation() */
int _ZN9CarAccelB5SubKF18is_fail_estimationEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorPos10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorPos::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorPos10R_UNIT_COVE;

/* Symbol: _ZN6SfSatt17reset_p_grav_projEv */
/* Demangled: SfSatt::reset_p_grav_proj() */
int _ZN6SfSatt17reset_p_grav_projEv(void);

/* Symbol: _ZN9Barometer13prev_baro_errEv */
/* Demangled: Barometer::prev_baro_err() */
int _ZN9Barometer13prev_baro_errEv(void);

/* Symbol: _ZN6UdrLpf28get_icm40607_accel_para_50hzEv */
/* Demangled: UdrLpf::get_icm40607_accel_para_50hz() */
int _ZN6UdrLpf28get_icm40607_accel_para_50hzEv(void);

/* Symbol: _ZN14SimpleGyroBias21is_rough_gb_var_readyEv */
/* Demangled: SimpleGyroBias::is_rough_gb_var_ready() */
int _ZN14SimpleGyroBias21is_rough_gb_var_readyEv(void);

/* Symbol: dr_lla2utm_int */
/* Demangled: dr_lla2utm_int */
int dr_lla2utm_int(void);

/* Symbol: _ZN6PdrIgp12run_att_filtEdPKdS1_S1_S1_RKN5SfIsm14results_structERKN5SfSgb14results_structE */
/* Demangled: PdrIgp::run_att_filt(double, double const*, double const*, double const*, double const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
int _ZN6PdrIgp12run_att_filtEdPKdS1_S1_S1_RKN5SfIsm14results_structERKN5SfSgb14results_structE(void);

/* Symbol: _ZN6SfSatt27gen_sys_cov_matrix_gp_gb_abEv */
/* Demangled: SfSatt::gen_sys_cov_matrix_gp_gb_ab() */
int _ZN6SfSatt27gen_sys_cov_matrix_gp_gb_abEv(void);

/* Symbol: _ZN9CarAccelB18sub_kf_buff_structC2Ev */
/* Demangled: CarAccelB::sub_kf_buff_struct::sub_kf_buff_struct() */
int _ZN9CarAccelB18sub_kf_buff_structC2Ev(void);

/* Symbol: _ZN6SfSatt10upd_statesEv */
/* Demangled: SfSatt::upd_states() */
int _ZN6SfSatt10upd_statesEv(void);

/* Symbol: _ZN11Integration15sf_buffer_resetEv */
/* Demangled: Integration::sf_buffer_reset() */
int _ZN11Integration15sf_buffer_resetEv(void);

/* Symbol: get_current_count */
/* Demangled: get_current_count */
int get_current_count(void);

/* Symbol: dr_acc_bias_variance_1 */
/* Demangled: dr_acc_bias_variance_1 */
extern void* dr_acc_bias_variance_1;

/* Symbol: mpe_get_dr_position */
/* Demangled: mpe_get_dr_position */
int mpe_get_dr_position(void);

/* Symbol: _ZN14SfStaticDetect8distanceEPdi */
/* Demangled: SfStaticDetect::distance(double*, int) */
int _ZN14SfStaticDetect8distanceEPdi(void);

/* Symbol: _ZN5SfWmm21MAG_ValidateDMSstringEddd */
/* Demangled: SfWmm::MAG_ValidateDMSstring(double, double, double) */
int _ZN5SfWmm21MAG_ValidateDMSstringEddd(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBiasD2Ev */
/* Demangled: SimpleGyroBias::AlterGyroBias::~AlterGyroBias() */
int _ZN14SimpleGyroBias13AlterGyroBiasD2Ev(void);

/* Symbol: _ZNK9CarAccelB5SubKF6get_sfEv */
/* Demangled: CarAccelB::SubKF::get_sf() const */
int _ZNK9CarAccelB5SubKF6get_sfEv(void);

/* Symbol: _ZN3UDR4algoEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::algo(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR4algoEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _Z5crossPKdS0_Pd */
/* Demangled: cross(double const*, double const*, double*) */
int _Z5crossPKdS0_Pd(void);

/* Symbol: _ZN5SfLpf14set_mag_hub_drEi */
/* Demangled: SfLpf::set_mag_hub_dr(int) */
int _ZN5SfLpf14set_mag_hub_drEi(void);

/* Symbol: best_ax_num */
/* Demangled: best_ax_num */
int best_ax_num(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _ZN13CloneNearGnssD2Ev */
/* Demangled: CloneNearGnss::~CloneNearGnss() */
int _ZN13CloneNearGnssD2Ev(void);

/* Symbol: _ZN6SfSatt17upd_ekf_meas_timeEv */
/* Demangled: SfSatt::upd_ekf_meas_time() */
int _ZN6SfSatt17upd_ekf_meas_timeEv(void);

/* Symbol: _ZN6SfSatt21upd_var_dot_gyro_biasEPKd */
/* Demangled: SfSatt::upd_var_dot_gyro_bias(double const*) */
int _ZN6SfSatt21upd_var_dot_gyro_biasEPKd(void);

/* Symbol: _ZTV6UdrLpf */
/* Demangled: vtable for UdrLpf */
extern void* _ZTV6UdrLpf;

/* Symbol: _ZN11PdrMheading20quality_check_structC2EiddPd */
/* Demangled: PdrMheading::quality_check_struct::quality_check_struct(int, double, double, double*) */
int _ZN11PdrMheading20quality_check_structC2EiddPd(void);

/* Symbol: _ZN9CarAccelB5SubKF14comp_meas_innoEv */
/* Demangled: CarAccelB::SubKF::comp_meas_inno() */
int _ZN9CarAccelB5SubKF14comp_meas_innoEv(void);

/* Symbol: _ZN4TtffC2Ev */
/* Demangled: Ttff::Ttff() */
int _ZN4TtffC2Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_structC2Ev */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::nw_shape_struct() */
int _ZN12VehBodOrient7VboLess15nw_shape_structC2Ev(void);

/* Symbol: _ZN6PdrIgp17delay_buff_structD1Ev */
/* Demangled: PdrIgp::delay_buff_struct::~delay_buff_struct() */
int _ZN6PdrIgp17delay_buff_structD1Ev(void);

/* Symbol: _ZN5SfWmm23MAG_robustReadMagModelsEPA1_PNS_21MAGtype_MagneticModelE */
/* Demangled: SfWmm::MAG_robustReadMagModels(SfWmm::MAGtype_MagneticModel* (*) [1]) */
int _ZN5SfWmm23MAG_robustReadMagModelsEPA1_PNS_21MAGtype_MagneticModelE(void);

/* Symbol: _ZN6UdrEkf10predictionEP18sf_mems_msg_structdb */
/* Demangled: UdrEkf::prediction(sf_mems_msg_struct*, double, bool) */
int _ZN6UdrEkf10predictionEP18sf_mems_msg_structdb(void);

/* Symbol: _ZN5SfLpf10set_imu_idEN6sensor12SensorIDEnum12SensorIDTypeES2_ */
/* Demangled: SfLpf::set_imu_id(sensor::SensorIDEnum::SensorIDType, sensor::SensorIDEnum::SensorIDType) */
int _ZN5SfLpf10set_imu_idEN6sensor12SensorIDEnum12SensorIDTypeES2_(void);

/* Symbol: _ZN5SfLpf19smoop_result_structC2Ev */
/* Demangled: SfLpf::smoop_result_struct::smoop_result_struct() */
int _ZN5SfLpf19smoop_result_structC2Ev(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStartC1Ev */
/* Demangled: VehBodOrient::VboFakeStart::VboFakeStart() */
int _ZN12VehBodOrient12VboFakeStartC1Ev(void);

/* Symbol: interval_buf */
/* Demangled: interval_buf */
extern void* interval_buf;

/* Symbol: _ZN6PdrEkf5get_REv */
/* Demangled: PdrEkf::get_R() */
int _ZN6PdrEkf5get_REv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN6UdrEkf27predict_covariance_estimateEdb */
/* Demangled: UdrEkf::predict_covariance_estimate(double, bool) */
int _ZN6UdrEkf27predict_covariance_estimateEdb(void);

/* Symbol: _ZN12VehBodOrient7upd_outEdRKNS_16stat_quat_structES2_ */
/* Demangled: VehBodOrient::upd_out(double, VehBodOrient::stat_quat_struct const&, VehBodOrient::stat_quat_struct const&) */
int _ZN12VehBodOrient7upd_outEdRKNS_16stat_quat_structES2_(void);

/* Symbol: _Z16wgsxyz2lla_arrayPdS_ */
/* Demangled: wgsxyz2lla_array(double*, double*) */
int _Z16wgsxyz2lla_arrayPdS_(void);

/* Symbol: _ZN6SfSatt16ini_ext_matricesEv */
/* Demangled: SfSatt::ini_ext_matrices() */
int _ZN6SfSatt16ini_ext_matricesEv(void);

/* Symbol: _ZN18SystemStateControl28set_fine_cvb_from_gnss_levelENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::set_fine_cvb_from_gnss_level(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl28set_fine_cvb_from_gnss_levelENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: two_ax_consistency */
/* Demangled: two_ax_consistency */
int two_ax_consistency(void);

/* Symbol: _ZN3PDRC2ERK12ConfigParams */
/* Demangled: PDR::PDR(ConfigParams const&) */
int _ZN3PDRC2ERK12ConfigParams(void);

/* Symbol: _ZN11PdrMheading16mag_model_structC2Ev */
/* Demangled: PdrMheading::mag_model_struct::mag_model_struct() */
int _ZN11PdrMheading16mag_model_structC2Ev(void);

/* Symbol: _ZN6SfSatt6set_BdEv */
/* Demangled: SfSatt::set_Bd() */
int _ZN6SfSatt6set_BdEv(void);

/* Symbol: _Z17heading_constraind */
/* Demangled: heading_constrain(double) */
int _Z17heading_constraind(void);

/* Symbol: _ZN7PdrSatt19est_sensor_attitudeEv */
/* Demangled: PdrSatt::est_sensor_attitude() */
int _ZN7PdrSatt19est_sensor_attitudeEv(void);

/* Symbol: _ZN7PdrSatt26adv_start_ekf_condi_structC2Ev */
/* Demangled: PdrSatt::adv_start_ekf_condi_struct::adv_start_ekf_condi_struct() */
int _ZN7PdrSatt26adv_start_ekf_condi_structC2Ev(void);

/* Symbol: _ZN5SfWmm10MAG_GeomagENS_17MAGtype_EllipsoidENS_22MAGtype_CoordSphericalENS_21MAGtype_CoordGeodeticEPNS_21MAGtype_MagneticModelEPNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::MAG_Geomag(SfWmm::MAGtype_Ellipsoid, SfWmm::MAGtype_CoordSpherical, SfWmm::MAGtype_CoordGeodetic, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_GeoMagneticElements*) */
int _ZN5SfWmm10MAG_GeomagENS_17MAGtype_EllipsoidENS_22MAGtype_CoordSphericalENS_21MAGtype_CoordGeodeticEPNS_21MAGtype_MagneticModelEPNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN15UdrStaticDetect23get_sensor_static_roughEv */
/* Demangled: UdrStaticDetect::get_sensor_static_rough() */
int _ZN15UdrStaticDetect23get_sensor_static_roughEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess8quat2rotEPKdPA3_d */
/* Demangled: VehBodOrient::VboLess::quat2rot(double const*, double (*) [3]) */
int _ZN12VehBodOrient7VboLess8quat2rotEPKdPA3_d(void);

/* Symbol: _ZN5SfWmmD1Ev */
/* Demangled: SfWmm::~SfWmm() */
int _ZN5SfWmmD1Ev(void);

/* Symbol: _ZN11DataProcessC2ERK12ConfigParams */
/* Demangled: DataProcess::DataProcess(ConfigParams const&) */
int _ZN11DataProcessC2ERK12ConfigParams(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSPos10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSPos::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSPos10R_UNIT_COVE;

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_struct17pseudo_reset_buffEv */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::pseudo_reset_buff() */
int _ZN6PdrEkf27mag_caused_pos_drift_struct17pseudo_reset_buffEv(void);

/* Symbol: _ZN5SfLpf14set_decimationEv */
/* Demangled: SfLpf::set_decimation() */
int _ZN5SfLpf14set_decimationEv(void);

/* Symbol: _ZN6SfSatt18set_meas_matrix_ngEv */
/* Demangled: SfSatt::set_meas_matrix_ng() */
int _ZN6SfSatt18set_meas_matrix_ngEv(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN9Barometer16ini_b_temp_limitEv */
/* Demangled: Barometer::ini_b_temp_limit() */
int _ZN9Barometer16ini_b_temp_limitEv(void);

/* Symbol: _ZN3PDRD1Ev */
/* Demangled: PDR::~PDR() */
int _ZN3PDRD1Ev(void);

/* Symbol: _ZN6PdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_lsm6dsm_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN9CarAccelB5SubKF10interp_gadER6Matrix */
/* Demangled: CarAccelB::SubKF::interp_gad(Matrix&) */
int _ZN9CarAccelB5SubKF10interp_gadER6Matrix(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias25construct_rls_meas_matrixEd */
/* Demangled: SimpleGyroBias::AlterGyroBias::construct_rls_meas_matrix(double) */
int _ZN14SimpleGyroBias13AlterGyroBias25construct_rls_meas_matrixEd(void);

/* Symbol: _ZN7PdrSatt16upd_tuning_parasEPKdS1_ */
/* Demangled: PdrSatt::upd_tuning_paras(double const*, double const*) */
int _ZN7PdrSatt16upd_tuning_parasEPKdS1_(void);

/* Symbol: _ZN12VehBodOrient6VboGrpC2Ev */
/* Demangled: VehBodOrient::VboGrp::VboGrp() */
int _ZN12VehBodOrient6VboGrpC2Ev(void);

/* Symbol: _ZN3PDR17is_service_activeEv */
/* Demangled: PDR::is_service_active() */
int _ZN3PDR17is_service_activeEv(void);

/* Symbol: _ZN5SfSgbD2Ev */
/* Demangled: SfSgb::~SfSgb() */
int _ZN5SfSgbD2Ev(void);

/* Symbol: _Z4signd */
/* Demangled: sign(double) */
int _Z4signd(void);

/* Symbol: _ZN3UDR23publish_gnss_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::publish_gnss_pvt_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR23publish_gnss_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN11InertialAtt15update_mean_varEdiPdS0_ */
/* Demangled: InertialAtt::update_mean_var(double, int, double*, double*) */
int _ZN11InertialAtt15update_mean_varEdiPdS0_(void);

/* Symbol: _ZN9Pedometer7SsModel14get_step_speedEd */
/* Demangled: Pedometer::SsModel::get_step_speed(double) */
int _ZN9Pedometer7SsModel14get_step_speedEd(void);

/* Symbol: _ZN5SfIsmD0Ev */
/* Demangled: SfIsm::~SfIsm() */
int _ZN5SfIsmD0Ev(void);

/* Symbol: _ZN5SfWmm27MAGtype_GeoMagneticElementsC2Ev */
/* Demangled: SfWmm::MAGtype_GeoMagneticElements::MAGtype_GeoMagneticElements() */
int _ZN5SfWmm27MAGtype_GeoMagneticElementsC2Ev(void);

/* Symbol: _ZN9CarAccelB17delay_buff_structC2Ev */
/* Demangled: CarAccelB::delay_buff_struct::delay_buff_struct() */
int _ZN9CarAccelB17delay_buff_structC2Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp28dump_sf_pattern_from_historyEPKNS0_11hist_structEPdS4_S4_ */
/* Demangled: VehBodOrient::VboGrp::dump_sf_pattern_from_history(VehBodOrient::VboGrp::hist_struct const*, double*, double*, double*) */
int _ZN12VehBodOrient6VboGrp28dump_sf_pattern_from_historyEPKNS0_11hist_structEPdS4_S4_(void);

/* Symbol: acc_static_pitch */
/* Demangled: acc_static_pitch */
extern void* acc_static_pitch;

/* Symbol: _ZN6PdrLpf27get_lsm6dsm_accel_para_50hzEv */
/* Demangled: PdrLpf::get_lsm6dsm_accel_para_50hz() */
int _ZN6PdrLpf27get_lsm6dsm_accel_para_50hzEv(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRKdEEEvDpOT_ */
/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__emplace_back_slow_path<double const&>(double const&) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE24__emplace_back_slow_pathIJRKdEEEvDpOT_(void);

/* Symbol: init_data_resampling */
/* Demangled: init_data_resampling */
int init_data_resampling(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: get_pedometer_status */
/* Demangled: get_pedometer_status */
int get_pedometer_status(void);

/* Symbol: _ZN5SfLpf12gnss_lla_lpfERNS_19smoop_result_structEPKdRNS_12smoop_structE */
/* Demangled: SfLpf::gnss_lla_lpf(SfLpf::smoop_result_struct&, double const*, SfLpf::smoop_struct&) */
int _ZN5SfLpf12gnss_lla_lpfERNS_19smoop_result_structEPKdRNS_12smoop_structE(void);

/* Symbol: _ZN6UdrEkf21predict_control_inputEP18sf_mems_msg_structb */
/* Demangled: UdrEkf::predict_control_input(sf_mems_msg_struct*, bool) */
int _ZN6UdrEkf21predict_control_inputEP18sf_mems_msg_structb(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart9reset_vboEv */
/* Demangled: VehBodOrient::VboFakeStart::reset_vbo() */
int _ZN12VehBodOrient12VboFakeStart9reset_vboEv(void);

/* Symbol: get_step_count_without_buffer */
/* Demangled: get_step_count_without_buffer */
int get_step_count_without_buffer(void);

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_structD2Ev */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::~mag_caused_pos_drift_struct() */
int _ZN6PdrEkf27mag_caused_pos_drift_structD2Ev(void);

/* Symbol: _ZN9Pedometer22process_velocity_modelEPK18sf_gnss_msg_structR16PdrUpdTypeSelectib */
/* Demangled: Pedometer::process_velocity_model(sf_gnss_msg_struct const*, PdrUpdTypeSelect&, int, bool) */
int _ZN9Pedometer22process_velocity_modelEPK18sf_gnss_msg_structR16PdrUpdTypeSelectib(void);

/* Symbol: _ZN6SfSatt13upd_gyro_biasEPKd */
/* Demangled: SfSatt::upd_gyro_bias(double const*) */
int _ZN6SfSatt13upd_gyro_biasEPKd(void);

/* Symbol: pedometer_forcing_time_out */
/* Demangled: pedometer_forcing_time_out */
int pedometer_forcing_time_out(void);

/* Symbol: accel_avg_buf */
/* Demangled: accel_avg_buf */
extern void* accel_avg_buf;

/* Symbol: dead_reckoning_mode */
/* Demangled: dead_reckoning_mode */
extern void* dead_reckoning_mode;

/* Symbol: _Z9safe_acosd */
/* Demangled: safe_acos(double) */
int _Z9safe_acosd(void);

/* Symbol: _ZN6SfSatt22print_setting_messagesEv */
/* Demangled: SfSatt::print_setting_messages() */
int _ZN6SfSatt22print_setting_messagesEv(void);

/* Symbol: _ZN11PdrMheading8upd_dyawEPKdS1_S1_ */
/* Demangled: PdrMheading::upd_dyaw(double const*, double const*, double const*) */
int _ZN11PdrMheading8upd_dyawEPKdS1_S1_(void);

/* Symbol: _ZN6SfSattD2Ev */
/* Demangled: SfSatt::~SfSatt() */
int _ZN6SfSattD2Ev(void);

/* Symbol: _ZN5SfIsm11feas_structC2Ev */
/* Demangled: SfIsm::feas_struct::feas_struct() */
int _ZN5SfIsm11feas_structC2Ev(void);

/* Symbol: _ZN6UdrEkf5get_KEi */
/* Demangled: UdrEkf::get_K(int) */
int _ZN6UdrEkf5get_KEi(void);

/* Symbol: _ZN15MonitorDataRate7ini_cfgEv */
/* Demangled: MonitorDataRate::ini_cfg() */
int _ZN15MonitorDataRate7ini_cfgEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticAtt::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_UNIT_COVE;

/* Symbol: _ZN14GnssAccelDecel14reset_gad_buffEv */
/* Demangled: GnssAccelDecel::reset_gad_buff() */
int _ZN14GnssAccelDecel14reset_gad_buffEv(void);

/* Symbol: _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectiid */
/* Demangled: PdrEkf::replace_pdr2mnl_msg(sf2mnl_msg_struct*, double, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int, int, double) */
int _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectiid(void);

/* Symbol: _ZN3PDR18is_solution_stableEv */
/* Demangled: PDR::is_solution_stable() */
int _ZN3PDR18is_solution_stableEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorAtt10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorAtt::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorAtt10R_UNIT_COVE;

/* Symbol: _ZN6PdrSgbD1Ev */
/* Demangled: PdrSgb::~PdrSgb() */
int _ZN6PdrSgbD1Ev(void);

/* Symbol: _ZN11PdrMheading19driver_calib_structC1Ev */
/* Demangled: PdrMheading::driver_calib_struct::driver_calib_struct() */
int _ZN11PdrMheading19driver_calib_structC1Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp32count_intersect_direction_numberEPKNS_9VboFbEnum6FbTypeES4_PiS5_ */
/* Demangled: VehBodOrient::VboGrp::count_intersect_direction_number(VehBodOrient::VboFbEnum::FbType const*, VehBodOrient::VboFbEnum::FbType const*, int*, int*) */
int _ZN12VehBodOrient6VboGrp32count_intersect_direction_numberEPKNS_9VboFbEnum6FbTypeES4_PiS5_(void);

/* Symbol: _ZN14SfStaticDetect14get_sensor_avgENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_avg(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect14get_sensor_avgENS_10SensorEnum10SensorTypeE(void);

/* Symbol: get_pedometer_step_detector */
/* Demangled: get_pedometer_step_detector */
int get_pedometer_step_detector(void);

/* Symbol: _ZN9CarAccelB5SubKFC2Ev */
/* Demangled: CarAccelB::SubKF::SubKF() */
int _ZN9CarAccelB5SubKFC2Ev(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSVel5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSVel::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSVel5R_COVE;

/* Symbol: _ZN16UdrUpdTypeSelect12get_mu_levelEP15UdrStaticDetectPj */
/* Demangled: UdrUpdTypeSelect::get_mu_level(UdrStaticDetect*, unsigned int*) */
int _ZN16UdrUpdTypeSelect12get_mu_levelEP15UdrStaticDetectPj(void);

/* Symbol: _ZN12VehBodOrient7VboLessC2Ev */
/* Demangled: VehBodOrient::VboLess::VboLess() */
int _ZN12VehBodOrient7VboLessC2Ev(void);

/* Symbol: _ZTV4SfGb */
/* Demangled: vtable for SfGb */
extern void* _ZTV4SfGb;

/* Symbol: _ZN10InterpMems6interpEddPdd */
/* Demangled: InterpMems::interp(double, double, double*, double) */
int _ZN10InterpMems6interpEddPdd(void);

/* Symbol: _ZNK5SfLpf12get_dec_gyroEPd */
/* Demangled: SfLpf::get_dec_gyro(double*) const */
int _ZNK5SfLpf12get_dec_gyroEPd(void);

/* Symbol: _ZpldRK6Matrix */
/* Demangled: operator+(double, Matrix const&) */
int _ZpldRK6Matrix(void);

/* Symbol: _ZN9Pedometer31update_step_info_from_pedometerEd */
/* Demangled: Pedometer::update_step_info_from_pedometer(double) */
int _ZN9Pedometer31update_step_info_from_pedometerEd(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5SfWmm19MAG_SecVarSummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE */
/* Demangled: SfWmm::MAG_SecVarSummation(SfWmm::MAGtype_LegendreFunction*, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
int _ZN5SfWmm19MAG_SecVarSummationEPNS_24MAGtype_LegendreFunctionEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void);

/* Symbol: _ZN6UdrEkf21gb_measurement_updateERK14SimpleGyroBias */
/* Demangled: UdrEkf::gb_measurement_update(SimpleGyroBias const&) */
int _ZN6UdrEkf21gb_measurement_updateERK14SimpleGyroBias(void);

/* Symbol: get_pedometer_best_walk_axis */
/* Demangled: get_pedometer_best_walk_axis */
int get_pedometer_best_walk_axis(void);

/* Symbol: _ZN9CarAccelB5SubKF9set_gammaEPKd */
/* Demangled: CarAccelB::SubKF::set_gamma(double const*) */
int _ZN9CarAccelB5SubKF9set_gammaEPKd(void);

/* Symbol: _ZN6UdrEkf20remove_P_correlationEPjbd */
/* Demangled: UdrEkf::remove_P_correlation(unsigned int*, bool, double) */
int _ZN6UdrEkf20remove_P_correlationEPjbd(void);

/* Symbol: _ZN18InertialStaticMove11meas_structC2Ev */
/* Demangled: InertialStaticMove::meas_struct::meas_struct() */
int _ZN18InertialStaticMove11meas_structC2Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp10self_groupEv */
/* Demangled: VehBodOrient::VboGrp::self_group() */
int _ZN12VehBodOrient6VboGrp10self_groupEv(void);

/* Symbol: _ZN6PdrEkf33gen_heading_meas_noise_cov_matrixEPK18sf_gnss_msg_structi */
/* Demangled: PdrEkf::gen_heading_meas_noise_cov_matrix(sf_gnss_msg_struct const*, int) */
int _ZN6PdrEkf33gen_heading_meas_noise_cov_matrixEPK18sf_gnss_msg_structi(void);

/* Symbol: _ZN4SfGbD0Ev */
/* Demangled: SfGb::~SfGb() */
int _ZN4SfGbD0Ev(void);

/* Symbol: _ZN6UdrEkf17restore_gyro_biasEPKd */
/* Demangled: UdrEkf::restore_gyro_bias(double const*) */
int _ZN6UdrEkf17restore_gyro_biasEPKd(void);

/* Symbol: _ZN12VehBodOrientD2Ev */
/* Demangled: VehBodOrient::~VehBodOrient() */
int _ZN12VehBodOrientD2Ev(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct19comp_bound_varianceEPKdiiii */
/* Demangled: CarAccelB::sf_pattern_struct::comp_bound_variance(double const*, int, int, int, int) const */
int _ZNK9CarAccelB17sf_pattern_struct19comp_bound_varianceEPKdiiii(void);

/* Symbol: _ZN14SimpleGyroBias21comp_static_gyro_biasERK6UdrLpfP18sf_mems_msg_structN18InertialStaticMove12ManeuverEnum12ManeuverTypeE */
/* Demangled: SimpleGyroBias::comp_static_gyro_bias(UdrLpf const&, sf_mems_msg_struct*, InertialStaticMove::ManeuverEnum::ManeuverType) */
int _ZN14SimpleGyroBias21comp_static_gyro_biasERK6UdrLpfP18sf_mems_msg_structN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void);

/* Symbol: _ZN14SimpleGyroBias17is_rough_gb_readyEv */
/* Demangled: SimpleGyroBias::is_rough_gb_ready() */
int _ZN14SimpleGyroBias17is_rough_gb_readyEv(void);

/* Symbol: _ZN5SfSgb13robust_movavgEv */
/* Demangled: SfSgb::robust_movavg() */
int _ZN5SfSgb13robust_movavgEv(void);

/* Symbol: _ZN14SfStaticDetect17get_sensor_dist_vENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_dist_v(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect17get_sensor_dist_vENS_10SensorEnum10SensorTypeE(void);

/* Symbol: _ZN5SfWmm11MAG_PcupLowEPdS0_di */
/* Demangled: SfWmm::MAG_PcupLow(double*, double*, double, int) */
int _ZN5SfWmm11MAG_PcupLowEPdS0_di(void);

/* Symbol: _ZN9Barometer13quality_checkEP18sf_gnss_msg_struct */
/* Demangled: Barometer::quality_check(sf_gnss_msg_struct*) */
int _ZN9Barometer13quality_checkEP18sf_gnss_msg_struct(void);

/* Symbol: _ZN9CarAccelB5SubKF8set_dgsdEd */
/* Demangled: CarAccelB::SubKF::set_dgsd(double) */
int _ZN9CarAccelB5SubKF8set_dgsdEd(void);

/* Symbol: _ZNK5SfSgb22does_not_have_outliersEv */
/* Demangled: SfSgb::does_not_have_outliers() const */
int _ZNK5SfSgb22does_not_have_outliersEv(void);

/* Symbol: _ZNK6UdrEkf17get_vel_norm_predEv */
/* Demangled: UdrEkf::get_vel_norm_pred() const */
int _ZNK6UdrEkf17get_vel_norm_predEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp19store_sf_fb_patternEdddPKdd */
/* Demangled: VehBodOrient::VboGrp::store_sf_fb_pattern(double, double, double, double const*, double) */
int _ZN12VehBodOrient6VboGrp19store_sf_fb_patternEdddPKdd(void);

/* Symbol: matching_search */
/* Demangled: matching_search */
extern void* matching_search;

/* Symbol: _ZN6Matrix6set_m3EiiRKS_ */
/* Demangled: Matrix::set_m3(int, int, Matrix const&) */
int _ZN6Matrix6set_m3EiiRKS_(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias16build_bias_tableEv */
/* Demangled: SimpleGyroBias::AlterGyroBias::build_bias_table() */
int _ZN14SimpleGyroBias13AlterGyroBias16build_bias_tableEv(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias19get_bias_from_tableEPdd */
/* Demangled: SimpleGyroBias::AlterGyroBias::get_bias_from_table(double*, double) */
int _ZN14SimpleGyroBias13AlterGyroBias19get_bias_from_tableEPdd(void);

/* Symbol: _ZNK6MatrixmlERKS_ */
/* Demangled: Matrix::operator*(Matrix const&) const */
int _ZNK6MatrixmlERKS_(void);

/* Symbol: _ZN15PdrMotionDetectD1Ev */
/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
int _ZN15PdrMotionDetectD1Ev(void);

/* Symbol: _ZTV5SfIsm */
/* Demangled: vtable for SfIsm */
extern void* _ZTV5SfIsm;

/* Symbol: _ZN6SfSatt9set_stateEv */
/* Demangled: SfSatt::set_state() */
int _ZN6SfSatt9set_stateEv(void);

/* Symbol: _ZN3UDR17set_pvt_from_gnssEP18sf_gnss_msg_struct */
/* Demangled: UDR::set_pvt_from_gnss(sf_gnss_msg_struct*) */
int _ZN3UDR17set_pvt_from_gnssEP18sf_gnss_msg_struct(void);

/* Symbol: _ZN5PdrGbD1Ev */
/* Demangled: PdrGb::~PdrGb() */
int _ZN5PdrGbD1Ev(void);

/* Symbol: mpe_get_game_rotation_vector */
/* Demangled: mpe_get_game_rotation_vector */
int mpe_get_game_rotation_vector(void);

/* Symbol: _ZN11DataProcess13rt_preprocessEv */
/* Demangled: DataProcess::rt_preprocess() */
int _ZN11DataProcess13rt_preprocessEv(void);

/* Symbol: _ZN3UDRD0Ev */
/* Demangled: UDR::~UDR() */
int _ZN3UDRD0Ev(void);

/* Symbol: _ZN6UdrLpf17get_adv_gmode_1hzEv */
/* Demangled: UdrLpf::get_adv_gmode_1hz() */
int _ZN6UdrLpf17get_adv_gmode_1hzEv(void);

/* Symbol: _ZN8WatchdogC2ERK12ConfigParams */
/* Demangled: Watchdog::Watchdog(ConfigParams const&) */
int _ZN8WatchdogC2ERK12ConfigParams(void);

/* Symbol: mpe_set_fusion_mode */
/* Demangled: mpe_set_fusion_mode */
int mpe_set_fusion_mode(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _ZN6PdrIsm3cfyEPKd */
/* Demangled: PdrIsm::cfy(double const*) */
int _ZN6PdrIsm3cfyEPKd(void);

/* Symbol: _ZN6PdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_icm40607_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf27set_icm40607_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6MatrixdvEd */
/* Demangled: Matrix::operator/(double) */
int _ZN6MatrixdvEd(void);

/* Symbol: pedometer_update_acc */
/* Demangled: pedometer_update_acc */
int pedometer_update_acc(void);

/* Symbol: _ZNK15MonitorDataRate20check_hub_dr_changesEjRbRiRd */
/* Demangled: MonitorDataRate::check_hub_dr_changes(unsigned int, bool&, int&, double&) const */
int _ZNK15MonitorDataRate20check_hub_dr_changesEjRbRiRd(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias12upd_gb_tableEPKdd */
/* Demangled: SimpleGyroBias::AlterGyroBias::upd_gb_table(double const*, double) */
int _ZN14SimpleGyroBias13AlterGyroBias12upd_gb_tableEPKdd(void);

/* Symbol: _ZNK14SimpleGyroBias13AlterGyroBias18get_poly_gyro_biasEi */
/* Demangled: SimpleGyroBias::AlterGyroBias::get_poly_gyro_bias(int) const */
int _ZNK14SimpleGyroBias13AlterGyroBias18get_poly_gyro_biasEi(void);

/* Symbol: acc_static_gps_bias */
/* Demangled: acc_static_gps_bias */
extern void* acc_static_gps_bias;

/* Symbol: _ZmldRK6Matrix */
/* Demangled: operator*(double, Matrix const&) */
int _ZmldRK6Matrix(void);

/* Symbol: _ZN5SfSgb12check_structC2Ev */
/* Demangled: SfSgb::check_struct::check_struct() */
int _ZN5SfSgb12check_structC2Ev(void);

/* Symbol: _ZN10InterpMems12interp_accelEP18sf_mems_msg_structd */
/* Demangled: InterpMems::interp_accel(sf_mems_msg_struct*, double) */
int _ZN10InterpMems12interp_accelEP18sf_mems_msg_structd(void);

/* Symbol: _ZN12VehBodOrient21get_grp_bit_true_dataEPdi */
/* Demangled: VehBodOrient::get_grp_bit_true_data(double*, int) */
int _ZN12VehBodOrient21get_grp_bit_true_dataEPdi(void);

/* Symbol: dr_lla2utm_init_done */
/* Demangled: dr_lla2utm_init_done */
extern void* dr_lla2utm_init_done;

/* Symbol: _ZN7PdrSatt19gen_meas_cov_matrixEv */
/* Demangled: PdrSatt::gen_meas_cov_matrix() */
int _ZN7PdrSatt19gen_meas_cov_matrixEv(void);

/* Symbol: _ZN16PdrUpdTypeSelectC2Ev */
/* Demangled: PdrUpdTypeSelect::PdrUpdTypeSelect() */
int _ZN16PdrUpdTypeSelectC2Ev(void);

/* Symbol: _ZN11DataProcess10mems_inputEP18sf_mems_msg_structi */
/* Demangled: DataProcess::mems_input(sf_mems_msg_struct*, int) */
int _ZN11DataProcess10mems_inputEP18sf_mems_msg_structi(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN18InertialStaticMoveD1Ev */
/* Demangled: InertialStaticMove::~InertialStaticMove() */
int _ZN18InertialStaticMoveD1Ev(void);

/* Symbol: _ZN14GnssAccelDecel20down_sample_gad_gnssEP18sf_gnss_msg_structRK6UdrLpf */
/* Demangled: GnssAccelDecel::down_sample_gad_gnss(sf_gnss_msg_struct*, UdrLpf const&) */
int _ZN14GnssAccelDecel20down_sample_gad_gnssEP18sf_gnss_msg_structRK6UdrLpf(void);

/* Symbol: _ZN18SystemStateControl37reset_ekf_cvb_after_compare_with_histENS_11FineCvbEnum11FineCvbTypeEd */
/* Demangled: SystemStateControl::reset_ekf_cvb_after_compare_with_hist(SystemStateControl::FineCvbEnum::FineCvbType, double) */
int _ZN18SystemStateControl37reset_ekf_cvb_after_compare_with_histENS_11FineCvbEnum11FineCvbTypeEd(void);

/* Symbol: maplla2utm */
/* Demangled: maplla2utm */
int maplla2utm(void);

/* Symbol: _ZN6PdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_lsm6dsm_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN5SfLpf23replace_dec_sensor_dataERK15MonitorDataRateP18sf_mems_msg_struct */
/* Demangled: SfLpf::replace_dec_sensor_data(MonitorDataRate const&, sf_mems_msg_struct*) */
int _ZN5SfLpf23replace_dec_sensor_dataERK15MonitorDataRateP18sf_mems_msg_struct(void);

/* Symbol: _ZN9CarAccelB5SubKF12merge_statesERK6MatrixS3_ */
/* Demangled: CarAccelB::SubKF::merge_states(Matrix const&, Matrix const&) */
int _ZN9CarAccelB5SubKF12merge_statesERK6MatrixS3_(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorVel4NameE */
/* Demangled: UdrEkf::UpdLevEnum::SensorVel::Name */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorVel4NameE;

/* Symbol: _ZN6UdrEkf16predict_F_matrixEb */
/* Demangled: UdrEkf::predict_F_matrix(bool) */
int _ZN6UdrEkf16predict_F_matrixEb(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSAtt4NameE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSAtt::Name */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt4NameE;

/* Symbol: _ZN6UdrEkf13upd_less_buffEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::upd_less_buff(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf13upd_less_buffEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN18InertialStaticMove15get_sm_window_tEv */
/* Demangled: InertialStaticMove::get_sm_window_t() */
int _ZN18InertialStaticMove15get_sm_window_tEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect19get_min_resi_dop_prEP18sf_gnss_msg_struct */
/* Demangled: UdrUpdTypeSelect::get_min_resi_dop_pr(sf_gnss_msg_struct*) */
int _ZN16UdrUpdTypeSelect19get_min_resi_dop_prEP18sf_gnss_msg_struct(void);

/* Symbol: vehicle_GYR */
/* Demangled: vehicle_GYR */
extern void* vehicle_GYR;

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSPos4NameE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSPos::Name */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSPos4NameE;

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticPos5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticPos::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticPos5R_COVE;

/* Symbol: mpe_get_dr_acc_bias */
/* Demangled: mpe_get_dr_acc_bias */
int mpe_get_dr_acc_bias(void);

/* Symbol: _ZN5SfLpf12adv_filt_imuERK15MonitorDataRatePK18sf_mems_msg_struct */
/* Demangled: SfLpf::adv_filt_imu(MonitorDataRate const&, sf_mems_msg_struct const*) */
int _ZN5SfLpf12adv_filt_imuERK15MonitorDataRatePK18sf_mems_msg_struct(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSPos5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSPos::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSPos5R_COVE;

/* Symbol: _ZN8Watchdog7averageEPd */
/* Demangled: Watchdog::average(double*) */
int _ZN8Watchdog7averageEPd(void);

/* Symbol: interval_buf_copy */
/* Demangled: interval_buf_copy */
extern void* interval_buf_copy;

/* Symbol: _ZN6PdrLpf27get_lsm6dsm_gyro_para_200hzEv */
/* Demangled: PdrLpf::get_lsm6dsm_gyro_para_200hz() */
int _ZN6PdrLpf27get_lsm6dsm_gyro_para_200hzEv(void);

/* Symbol: _ZN14GnssAccelDecel13bound_inc_cntEii */
/* Demangled: GnssAccelDecel::bound_inc_cnt(int, int) */
int _ZN14GnssAccelDecel13bound_inc_cntEii(void);

/* Symbol: sf_set_param */
/* Demangled: sf_set_param */
int sf_set_param(void);

/* Symbol: _ZNK5SfLpf21get_dec_imu_availableEv */
/* Demangled: SfLpf::get_dec_imu_available() const */
int _ZNK5SfLpf21get_dec_imu_availableEv(void);

/* Symbol: _ZN6SfSatt8is_readyEv */
/* Demangled: SfSatt::is_ready() */
int _ZN6SfSatt8is_readyEv(void);

/* Symbol: _ZN5SfSgb11meas_structC2Ev */
/* Demangled: SfSgb::meas_struct::meas_struct() */
int _ZN5SfSgb11meas_structC2Ev(void);

/* Symbol: _ZN6SfSatt17reset_p_gyro_biasEv */
/* Demangled: SfSatt::reset_p_gyro_bias() */
int _ZN6SfSatt17reset_p_gyro_biasEv(void);

/* Symbol: _ZN6SfSatt5set_PEv */
/* Demangled: SfSatt::set_P() */
int _ZN6SfSatt5set_PEv(void);

/* Symbol: _ZNK6SfSatt21is_test_reset_x_of_abEv */
/* Demangled: SfSatt::is_test_reset_x_of_ab() const */
int _ZNK6SfSatt21is_test_reset_x_of_abEv(void);

/* Symbol: _ZN9CarAccelB3RtsC2ERNS_5SubKFE */
/* Demangled: CarAccelB::Rts::Rts(CarAccelB::SubKF&) */
int _ZN9CarAccelB3RtsC2ERNS_5SubKFE(void);

/* Symbol: _ZN11PdrMheading8call_wmmEPK18sf_gnss_msg_struct */
/* Demangled: PdrMheading::call_wmm(sf_gnss_msg_struct const*) */
int _ZN11PdrMheading8call_wmmEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN6UdrEkf22imu_sf_as_gamma_structC2Ev */
/* Demangled: UdrEkf::imu_sf_as_gamma_struct::imu_sf_as_gamma_struct() */
int _ZN6UdrEkf22imu_sf_as_gamma_structC2Ev(void);

/* Symbol: _ZN12VehBodOrient22get_buff_stored_periodEv */
/* Demangled: VehBodOrient::get_buff_stored_period() */
int _ZN12VehBodOrient22get_buff_stored_periodEv(void);

/* Symbol: am_var */
/* Demangled: am_var */
extern void* am_var;

/* Symbol: Array3x3_Invert_double */
/* Demangled: Array3x3_Invert_double */
int Array3x3_Invert_double(void);

/* Symbol: _ZN6SfSatt16start_ekf_structC1Ev */
/* Demangled: SfSatt::start_ekf_struct::start_ekf_struct() */
int _ZN6SfSatt16start_ekf_structC1Ev(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD2Ev */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::~phone_yaw_moved_caused_pos_drift_struct() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structD2Ev(void);

/* Symbol: _ZN14SimpleGyroBias12gbuff_structD2Ev */
/* Demangled: SimpleGyroBias::gbuff_struct::~gbuff_struct() */
int _ZN14SimpleGyroBias12gbuff_structD2Ev(void);

/* Symbol: _ZN15MonitorDataRate8ini_listEv */
/* Demangled: MonitorDataRate::ini_list() */
int _ZN15MonitorDataRate8ini_listEv(void);

/* Symbol: _ZN6SfSatt17state_para_structC1Ev */
/* Demangled: SfSatt::state_para_struct::state_para_struct() */
int _ZN6SfSatt17state_para_structC1Ev(void);

/* Symbol: _ZN5SfWmm21MAGtype_CoordGeodeticC1Ev */
/* Demangled: SfWmm::MAGtype_CoordGeodetic::MAGtype_CoordGeodetic() */
int _ZN5SfWmm21MAGtype_CoordGeodeticC1Ev(void);

/* Symbol: _sf_init_object */
/* Demangled: _sf_init_object */
int _sf_init_object(void);

/* Symbol: gyr_last_static_temp_diff */
/* Demangled: gyr_last_static_temp_diff */
extern void* gyr_last_static_temp_diff;

/* Symbol: _ZN9CarAccelB3Rts17reforward_predictEiiR6MatrixS2_ */
/* Demangled: CarAccelB::Rts::reforward_predict(int, int, Matrix&, Matrix&) */
int _ZN9CarAccelB3Rts17reforward_predictEiiR6MatrixS2_(void);

/* Symbol: _ZNK14SimpleGyroBias17get_dyn_gyro_biasEPd */
/* Demangled: SimpleGyroBias::get_dyn_gyro_bias(double*) const */
int _ZNK14SimpleGyroBias17get_dyn_gyro_biasEPd(void);

/* Symbol: _ZNK5SfLpf17get_dec_gyro_tempEPd */
/* Demangled: SfLpf::get_dec_gyro_temp(double*) const */
int _ZNK5SfLpf17get_dec_gyro_tempEPd(void);

/* Symbol: _ZN6Matrix8swap_rowEii */
/* Demangled: Matrix::swap_row(int, int) */
int _ZN6Matrix8swap_rowEii(void);

/* Symbol: _ZN6UdrEkf7set_v2aER6Matrix */
/* Demangled: UdrEkf::set_v2a(Matrix&) */
int _ZN6UdrEkf7set_v2aER6Matrix(void);

/* Symbol: _ZN6PdrIsmC2Ev */
/* Demangled: PdrIsm::PdrIsm() */
int _ZN6PdrIsmC2Ev(void);

/* Symbol: _ZN6Matrix11mMultSparseERS_S0_ */
/* Demangled: Matrix::mMultSparse(Matrix&, Matrix&) */
int _ZN6Matrix11mMultSparseERS_S0_(void);

/* Symbol: _ZN14GnssAccelDecel14alloc_gad_buffEv */
/* Demangled: GnssAccelDecel::alloc_gad_buff() */
int _ZN14GnssAccelDecel14alloc_gad_buffEv(void);

/* Symbol: _ZN18SystemStateControl20upd_rough_cvb_level4ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level4(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl20upd_rough_cvb_level4ERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN6PdrIsm9comp_feasEv */
/* Demangled: PdrIsm::comp_feas() */
int _ZN6PdrIsm9comp_feasEv(void);

/* Symbol: _ZN7PdrSatt13tuning_structC2Ev */
/* Demangled: PdrSatt::tuning_struct::tuning_struct() */
int _ZN7PdrSatt13tuning_structC2Ev(void);

/* Symbol: _ZN14SfStaticDetectD0Ev */
/* Demangled: SfStaticDetect::~SfStaticDetect() */
int _ZN14SfStaticDetectD0Ev(void);

/* Symbol: _ZN9Barometer18set_cur_sps_rds_tsEv */
/* Demangled: Barometer::set_cur_sps_rds_ts() */
int _ZN9Barometer18set_cur_sps_rds_tsEv(void);

/* Symbol: _ZN6UdrEkf18update_stable_flagEP18sf_gnss_msg_structPjib */
/* Demangled: UdrEkf::update_stable_flag(sf_gnss_msg_struct*, unsigned int*, int, bool) */
int _ZN6UdrEkf18update_stable_flagEP18sf_gnss_msg_structPjib(void);

/* Symbol: _ZN14GnssAccelDecel15gad_buff_structD2Ev */
/* Demangled: GnssAccelDecel::gad_buff_struct::~gad_buff_struct() */
int _ZN14GnssAccelDecel15gad_buff_structD2Ev(void);

/* Symbol: det */
/* Demangled: det */
int det(void);

/* Symbol: _ZN11DataProcess15rt_forward_memsEv */
/* Demangled: DataProcess::rt_forward_mems() */
int _ZN11DataProcess15rt_forward_memsEv(void);

/* Symbol: _ZNK14SimpleGyroBias19get_rough_gyro_biasEPd */
/* Demangled: SimpleGyroBias::get_rough_gyro_bias(double*) const */
int _ZNK14SimpleGyroBias19get_rough_gyro_biasEPd(void);

/* Symbol: latest_report_ts */
/* Demangled: latest_report_ts */
extern void* latest_report_ts;

/* Symbol: _ZN5SfLpf17set_imu_lpf_parasEPKNS_11para_structES2_ */
/* Demangled: SfLpf::set_imu_lpf_paras(SfLpf::para_struct const*, SfLpf::para_struct const*) */
int _ZN5SfLpf17set_imu_lpf_parasEPKNS_11para_structES2_(void);

/* Symbol: _ZN15MonitorDataRate15dr_track_structD1Ev */
/* Demangled: MonitorDataRate::dr_track_struct::~dr_track_struct() */
int _ZN15MonitorDataRate15dr_track_structD1Ev(void);

/* Symbol: _ZN6UdrEkf25ekf_ab_measurement_updateEv */
/* Demangled: UdrEkf::ekf_ab_measurement_update() */
int _ZN6UdrEkf25ekf_ab_measurement_updateEv(void);

/* Symbol: MI_correct */
/* Demangled: MI_correct */
extern void* MI_correct;

/* Symbol: _ZN6Matrix4initEiiPKd */
/* Demangled: Matrix::init(int, int, double const*) */
int _ZN6Matrix4initEiiPKd(void);

/* Symbol: _ZN6SfSatt20test_pred_x_gp_gb_abEv */
/* Demangled: SfSatt::test_pred_x_gp_gb_ab() */
int _ZN6SfSatt20test_pred_x_gp_gb_abEv(void);

/* Symbol: _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEcRNS_6vectorIS5_NS3_IS5_EEEE */
/* Demangled: split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _Z5splitRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEcRNS_6vectorIS5_NS3_IS5_EEEE(void);

/* Symbol: _Z8interp1qddddd */
/* Demangled: interp1q(double, double, double, double, double) */
int _Z8interp1qddddd(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBiasC1Ev */
/* Demangled: SimpleGyroBias::AlterGyroBias::AlterGyroBias() */
int _ZN14SimpleGyroBias13AlterGyroBiasC1Ev(void);

/* Symbol: _ZN18SystemStateControl24trigger_to_get_rough_cvbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::trigger_to_get_rough_cvb(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl24trigger_to_get_rough_cvbERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: acc_curr_pitch */
/* Demangled: acc_curr_pitch */
extern void* acc_curr_pitch;

/* Symbol: mpe_dr_deinitialize */
/* Demangled: mpe_dr_deinitialize */
int mpe_dr_deinitialize(void);

/* Symbol: _ZN14SfStaticDetect14get_is_gyro_okEv */
/* Demangled: SfStaticDetect::get_is_gyro_ok() */
int _ZN14SfStaticDetect14get_is_gyro_okEv(void);

/* Symbol: _ZN9CarAccelB5SubKF17upd_ekf_meas_timeEd */
/* Demangled: CarAccelB::SubKF::upd_ekf_meas_time(double) */
int _ZN9CarAccelB5SubKF17upd_ekf_meas_timeEd(void);

/* Symbol: _ZN6UdrEkf18stored_bias_struct12pseudo_resetEv */
/* Demangled: UdrEkf::stored_bias_struct::pseudo_reset() */
int _ZN6UdrEkf18stored_bias_struct12pseudo_resetEv(void);

/* Symbol: _ZN14GnssAccelDecel7get_avgEPdi */
/* Demangled: GnssAccelDecel::get_avg(double*, int) */
int _ZN14GnssAccelDecel7get_avgEPdi(void);

/* Symbol: _ZN18SystemStateControl24upd_rough_cvb_level_fakeERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_rough_cvb_level_fake(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl24upd_rough_cvb_level_fakeERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN11PdrMheading9reset_updEv */
/* Demangled: PdrMheading::reset_upd() */
int _ZN11PdrMheading9reset_updEv(void);

/* Symbol: _ZN7PdrSatt13avg_gp_structC1Ev */
/* Demangled: PdrSatt::avg_gp_struct::avg_gp_struct() */
int _ZN7PdrSatt13avg_gp_structC1Ev(void);

/* Symbol: _ZN11DataProcess14get_mems_countEv */
/* Demangled: DataProcess::get_mems_count() */
int _ZN11DataProcess14get_mems_countEv(void);

/* Symbol: acc_curr_std_pitch */
/* Demangled: acc_curr_std_pitch */
extern void* acc_curr_std_pitch;

/* Symbol: _Z6movavgPdPKdii */
/* Demangled: movavg(double*, double const*, int, int) */
int _Z6movavgPdPKdii(void);

/* Symbol: _ZN13CloneNearGnssC1Ev */
/* Demangled: CloneNearGnss::CloneNearGnss() */
int _ZN13CloneNearGnssC1Ev(void);

/* Symbol: _ZN6PdrIsm8ini_measEv */
/* Demangled: PdrIsm::ini_meas() */
int _ZN6PdrIsm8ini_measEv(void);

/* Symbol: _ZN5SfLpf12smoop_structC2Ev */
/* Demangled: SfLpf::smoop_struct::smoop_struct() */
int _ZN5SfLpf12smoop_structC2Ev(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorVel10R_UNIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorVel::R_UNIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorVel10R_UNIT_COVE;

/* Symbol: dr_bias_variance_1 */
/* Demangled: dr_bias_variance_1 */
extern void* dr_bias_variance_1;

/* Symbol: _ZN6UdrEkf18stored_bias_struct17check_convergenceERK6Matrixj */
/* Demangled: UdrEkf::stored_bias_struct::check_convergence(Matrix const&, unsigned int) */
int _ZN6UdrEkf18stored_bias_struct17check_convergenceERK6Matrixj(void);

/* Symbol: AT */
/* Demangled: AT */
int AT(void);

/* Symbol: _ZN6PdrEkf12state_updateEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structEP16PdrUpdTypeSelecti */
/* Demangled: PdrEkf::state_update(sf_gnss_msg_struct const*, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int) */
int _ZN6PdrEkf12state_updateEPK18sf_gnss_msg_structRKN9Pedometer16step_info_structEP16PdrUpdTypeSelecti(void);

/* Symbol: _ZN6PdrEkf23predict_upd_ekf_headingEPK18sf_gnss_msg_structiii */
/* Demangled: PdrEkf::predict_upd_ekf_heading(sf_gnss_msg_struct const*, int, int, int) */
int _ZN6PdrEkf23predict_upd_ekf_headingEPK18sf_gnss_msg_structiii(void);

/* Symbol: _ZN5SfLpf28set_adv_default_mag_lpf_paraEv */
/* Demangled: SfLpf::set_adv_default_mag_lpf_para() */
int _ZN5SfLpf28set_adv_default_mag_lpf_paraEv(void);

/* Symbol: _ZN6MatrixC2Eii */
/* Demangled: Matrix::Matrix(int, int) */
int _ZN6MatrixC2Eii(void);

/* Symbol: update_activity_monitor */
/* Demangled: update_activity_monitor */
int update_activity_monitor(void);

/* Symbol: _ZN6MatrixclEi */
/* Demangled: Matrix::operator()(int) */
int _ZN6MatrixclEi(void);

/* Symbol: _Z19monotonic_time_diffxx */
/* Demangled: monotonic_time_diff(long long, long long) */
int _Z19monotonic_time_diffxx(void);

/* Symbol: _ZN5SfLpf16dec_filt_sensorsERK15MonitorDataRateP18sf_mems_msg_struct */
/* Demangled: SfLpf::dec_filt_sensors(MonitorDataRate const&, sf_mems_msg_struct*) */
int _ZN5SfLpf16dec_filt_sensorsERK15MonitorDataRateP18sf_mems_msg_struct(void);

/* Symbol: _ZN18InertialStaticMove11comp_sm_rngEPPdi */
/* Demangled: InertialStaticMove::comp_sm_rng(double**, int) */
int _ZN18InertialStaticMove11comp_sm_rngEPPdi(void);

/* Symbol: _ZN6PdrIgp8copy_outEv */
/* Demangled: PdrIgp::copy_out() */
int _ZN6PdrIgp8copy_outEv(void);

/* Symbol: _ZTV6PdrIsm */
/* Demangled: vtable for PdrIsm */
extern void* _ZTV6PdrIsm;

/* Symbol: _ZN6SfSatt16upd_ext_feas_dcmERK6Matrix */
/* Demangled: SfSatt::upd_ext_feas_dcm(Matrix const&) */
int _ZN6SfSatt16upd_ext_feas_dcmERK6Matrix(void);

/* Symbol: _ZNK9CarAccelB9upd_dbuffERNS_17delay_buff_structEPKdS3_ */
/* Demangled: CarAccelB::upd_dbuff(CarAccelB::delay_buff_struct&, double const*, double const*) const */
int _ZNK9CarAccelB9upd_dbuffERNS_17delay_buff_structEPKdS3_(void);

/* Symbol: _ZN9CarAccelB5SubKF36comp_discrete_meas_covariance_matrixEPKd */
/* Demangled: CarAccelB::SubKF::comp_discrete_meas_covariance_matrix(double const*) */
int _ZN9CarAccelB5SubKF36comp_discrete_meas_covariance_matrixEPKd(void);

/* Symbol: _ZN16UdrUpdTypeSelect23set_use_gnss_after_zuptEv */
/* Demangled: UdrUpdTypeSelect::set_use_gnss_after_zupt() */
int _ZN16UdrUpdTypeSelect23set_use_gnss_after_zuptEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp16close_less_resetEv */
/* Demangled: VehBodOrient::VboGrp::close_less_reset() */
int _ZN12VehBodOrient6VboGrp16close_less_resetEv(void);

/* Symbol: _ZN5SfWmm22MAGtype_CoordSphericalC2Ev */
/* Demangled: SfWmm::MAGtype_CoordSpherical::MAGtype_CoordSpherical() */
int _ZN5SfWmm22MAGtype_CoordSphericalC2Ev(void);

/* Symbol: _ZN5SfWmm26MAG_CalculateGridVariationERKNS_21MAGtype_CoordGeodeticEPNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::MAG_CalculateGridVariation(SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_GeoMagneticElements*) */
int _ZN5SfWmm26MAG_CalculateGridVariationERKNS_21MAGtype_CoordGeodeticEPNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN6UdrEkf18pop_ekf_main_stateEPNS_21ekf_main_state_structE */
/* Demangled: UdrEkf::pop_ekf_main_state(UdrEkf::ekf_main_state_struct*) */
int _ZN6UdrEkf18pop_ekf_main_stateEPNS_21ekf_main_state_structE(void);

/* Symbol: _ZN8Watchdog8varianceEPd */
/* Demangled: Watchdog::variance(double*) */
int _ZN8Watchdog8varianceEPd(void);

/* Symbol: acc_curr_mean_roll */
/* Demangled: acc_curr_mean_roll */
extern void* acc_curr_mean_roll;

/* Symbol: _ZN6PdrIgp11get_win_lenEv */
/* Demangled: PdrIgp::get_win_len() */
int _ZN6PdrIgp11get_win_lenEv(void);

/* Symbol: _Z10floor_mathf */
/* Demangled: floor_math(float) */
int _Z10floor_mathf(void);

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct13dump_hist_cvbER6Matrix */
/* Demangled: SystemStateControl::coarse_dir_struct::dump_hist_cvb(Matrix&) */
int _ZN18SystemStateControl17coarse_dir_struct13dump_hist_cvbER6Matrix(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_struct9fit_3_ptsEjjjPKdPNS0_14VboNwShapeEnum11NwShapeTypeE */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::fit_3_pts(unsigned int, unsigned int, unsigned int, double const*, VehBodOrient::VboLess::VboNwShapeEnum::NwShapeType*) */
int _ZN12VehBodOrient7VboLess15nw_shape_struct9fit_3_ptsEjjjPKdPNS0_14VboNwShapeEnum11NwShapeTypeE(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp22get_select_w_from_buffEjj */
/* Demangled: VehBodOrient::VboGrp::get_select_w_from_buff(unsigned int, unsigned int) const */
int _ZNK12VehBodOrient6VboGrp22get_select_w_from_buffEjj(void);

/* Symbol: _ZN6SfSatt14out_imu_structC1Ev */
/* Demangled: SfSatt::out_imu_struct::out_imu_struct() */
int _ZN6SfSatt14out_imu_structC1Ev(void);

/* Symbol: _ZN5SfSgb10tol_structC1Ev */
/* Demangled: SfSgb::tol_struct::tol_struct() */
int _ZN5SfSgb10tol_structC1Ev(void);

/* Symbol: _ZN15MonitorDataRate28downsampling_sensors_pointerEPK18sf_mems_msg_structPNS_17downsample_structE */
/* Demangled: MonitorDataRate::downsampling_sensors_pointer(sf_mems_msg_struct const*, MonitorDataRate::downsample_struct*) */
int _ZN15MonitorDataRate28downsampling_sensors_pointerEPK18sf_mems_msg_structPNS_17downsample_structE(void);

/* Symbol: _ZN5SfWmm16MAG_WMMErrorCalcEdPNS_27MAGtype_GeoMagneticElementsE */
/* Demangled: SfWmm::MAG_WMMErrorCalc(double, SfWmm::MAGtype_GeoMagneticElements*) */
int _ZN5SfWmm16MAG_WMMErrorCalcEdPNS_27MAGtype_GeoMagneticElementsE(void);

/* Symbol: _ZN6MatrixC2EiiPKd */
/* Demangled: Matrix::Matrix(int, int, double const*) */
int _ZN6MatrixC2EiiPKd(void);

/* Symbol: _ZN6UdrEkf22cbv_measurement_updateERK13sf_ned_struct */
/* Demangled: UdrEkf::cbv_measurement_update(sf_ned_struct const&) */
int _ZN6UdrEkf22cbv_measurement_updateERK13sf_ned_struct(void);

/* Symbol: _ZN6UdrEkf9get_stateEi */
/* Demangled: UdrEkf::get_state(int) */
int _ZN6UdrEkf9get_stateEi(void);

/* Symbol: _ZN9CarAccelB5SubKF17reset_p_grav_projEv */
/* Demangled: CarAccelB::SubKF::reset_p_grav_proj() */
int _ZN9CarAccelB5SubKF17reset_p_grav_projEv(void);

/* Symbol: _ZN11PdrMheading33comp_tilt_compensated_mag_headingERK15MonitorDataRatePK18sf_mems_msg_structPK18sf_gnss_msg_structRKN7PdrSatt10out_structE */
/* Demangled: PdrMheading::comp_tilt_compensated_mag_heading(MonitorDataRate const&, sf_mems_msg_struct const*, sf_gnss_msg_struct const*, PdrSatt::out_struct const&) */
int _ZN11PdrMheading33comp_tilt_compensated_mag_headingERK15MonitorDataRatePK18sf_mems_msg_structPK18sf_gnss_msg_structRKN7PdrSatt10out_structE(void);

/* Symbol: _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelectd */
/* Demangled: UdrEkf::replace_udr2mnl_msg(sf2mnl_msg_struct*, double, int, int*, UdrUpdTypeSelect&, double) */
int _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelectd(void);

/* Symbol: _ZN14SimpleGyroBiasD2Ev */
/* Demangled: SimpleGyroBias::~SimpleGyroBias() */
int _ZN14SimpleGyroBiasD2Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect20update_scenario_typeEP18sf_gnss_msg_structP6UdrEkfdbb */
/* Demangled: UdrUpdTypeSelect::update_scenario_type(sf_gnss_msg_struct*, UdrEkf*, double, bool, bool) */
int _ZN16UdrUpdTypeSelect20update_scenario_typeEP18sf_gnss_msg_structP6UdrEkfdbb(void);

/* Symbol: _ZN12VehBodOrient6VboGrp19get_buff_proba_prevEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_proba_prev() */
int _ZN12VehBodOrient6VboGrp19get_buff_proba_prevEv(void);

/* Symbol: _ZN6PdrEkf8get_maghEv */
/* Demangled: PdrEkf::get_magh() */
int _ZN6PdrEkf8get_maghEv(void);

/* Symbol: _ZN6UdrEkf17update_prev_stateEv */
/* Demangled: UdrEkf::update_prev_state() */
int _ZN6UdrEkf17update_prev_stateEv(void);

/* Symbol: _Z10wgsxyz2enuR6MatrixS0_S0_ */
/* Demangled: wgsxyz2enu(Matrix&, Matrix&, Matrix&) */
int _Z10wgsxyz2enuR6MatrixS0_S0_(void);

/* Symbol: _ZN12VehBodOrient7VboLess11assign_lessERKNS_6VboGrpERKNS_8VboGdcm3E */
/* Demangled: VehBodOrient::VboLess::assign_less(VehBodOrient::VboGrp const&, VehBodOrient::VboGdcm3 const&) */
int _ZN12VehBodOrient7VboLess11assign_lessERKNS_6VboGrpERKNS_8VboGdcm3E(void);

/* Symbol: _ZN5SfLpf32check_lsm6dsm_accel_dec_num_axisEi */
/* Demangled: SfLpf::check_lsm6dsm_accel_dec_num_axis(int) */
int _ZN5SfLpf32check_lsm6dsm_accel_dec_num_axisEi(void);

/* Symbol: _ZN6SfSatt16ekf_set_meas_updEv */
/* Demangled: SfSatt::ekf_set_meas_upd() */
int _ZN6SfSatt16ekf_set_meas_updEv(void);

/* Symbol: _ZN6UdrEkf9set_cbv2aER6Matrix */
/* Demangled: UdrEkf::set_cbv2a(Matrix&) */
int _ZN6UdrEkf9set_cbv2aER6Matrix(void);

/* Symbol: _ZN16UdrUpdTypeSelect26set_good_gnss_flag_for_cvbEP18sf_gnss_msg_structdRK6UdrLpf */
/* Demangled: UdrUpdTypeSelect::set_good_gnss_flag_for_cvb(sf_gnss_msg_struct*, double, UdrLpf const&) */
int _ZN16UdrUpdTypeSelect26set_good_gnss_flag_for_cvbEP18sf_gnss_msg_structdRK6UdrLpf(void);

/* Symbol: clear_all_axes_counts */
/* Demangled: clear_all_axes_counts */
int clear_all_axes_counts(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN15UdrStaticDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv */
/* Demangled: UdrStaticDetect::update_static_status(sf_mems_msg_struct*, sf_gnss_msg_struct*, Matrix&, void*) */
int _ZN15UdrStaticDetect20update_static_statusEP18sf_mems_msg_structP18sf_gnss_msg_structR6MatrixPv(void);

/* Symbol: _ZN6PdrEkf22mg_heading_diff_structD1Ev */
/* Demangled: PdrEkf::mg_heading_diff_struct::~mg_heading_diff_struct() */
int _ZN6PdrEkf22mg_heading_diff_structD1Ev(void);

/* Symbol: _ZTV3PDR */
/* Demangled: vtable for PDR */
extern void* _ZTV3PDR;

/* Symbol: _ZN6SfSatt10ekf_structC1Ev */
/* Demangled: SfSatt::ekf_struct::ekf_struct() */
int _ZN6SfSatt10ekf_structC1Ev(void);

/* Symbol: _ZN6UdrEkf22get_state_init_for_fixEv */
/* Demangled: UdrEkf::get_state_init_for_fix() */
int _ZN6UdrEkf22get_state_init_for_fixEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp17get_buff_aid_typeEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_aid_type() */
int _ZN12VehBodOrient6VboGrp17get_buff_aid_typeEv(void);

/* Symbol: acc_avg_show */
/* Demangled: acc_avg_show */
extern void* acc_avg_show;

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN6SfSatt16ctrl_para_structC2Ev */
/* Demangled: SfSatt::ctrl_para_struct::ctrl_para_struct() */
int _ZN6SfSatt16ctrl_para_structC2Ev(void);

/* Symbol: _ZN15UdrStaticDetectC2ERK12ConfigParams */
/* Demangled: UdrStaticDetect::UdrStaticDetect(ConfigParams const&) */
int _ZN15UdrStaticDetectC2ERK12ConfigParams(void);

/* Symbol: _ZN12VehBodOrient23get_gdcm3_bit_true_dataEPdi */
/* Demangled: VehBodOrient::get_gdcm3_bit_true_data(double*, int) */
int _ZN12VehBodOrient23get_gdcm3_bit_true_dataEPdi(void);

/* Symbol: acc_final_static_bias */
/* Demangled: acc_final_static_bias */
extern void* acc_final_static_bias;

/* Symbol: _ZN9CarAccelB5SubKF9set_dsd2dEd */
/* Demangled: CarAccelB::SubKF::set_dsd2d(double) */
int _ZN9CarAccelB5SubKF9set_dsd2dEd(void);

/* Symbol: _ZN6UdrEkf14cal_chi_squareER6MatrixS1_S1_ */
/* Demangled: UdrEkf::cal_chi_square(Matrix&, Matrix&, Matrix&) */
int _ZN6UdrEkf14cal_chi_squareER6MatrixS1_S1_(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart7free_fsEv */
/* Demangled: VehBodOrient::VboFakeStart::free_fs() */
int _ZN12VehBodOrient12VboFakeStart7free_fsEv(void);

/* Symbol: run_detected */
/* Demangled: run_detected */
extern void* run_detected;

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_structC1Ev */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::mag_caused_pos_drift_struct() */
int _ZN6PdrEkf27mag_caused_pos_drift_structC1Ev(void);

/* Symbol: _ZN5SfLpf10set_mag_idEN6sensor12SensorIDEnum12SensorIDTypeE */
/* Demangled: SfLpf::set_mag_id(sensor::SensorIDEnum::SensorIDType) */
int _ZN5SfLpf10set_mag_idEN6sensor12SensorIDEnum12SensorIDTypeE(void);

/* Symbol: _ZN6Matrix4mEyeEd */
/* Demangled: Matrix::mEye(double) */
int _ZN6Matrix4mEyeEd(void);

/* Symbol: _ZN9CarAccelB5SubKF13upd_gyro_biasEPKd */
/* Demangled: CarAccelB::SubKF::upd_gyro_bias(double const*) */
int _ZN9CarAccelB5SubKF13upd_gyro_biasEPKd(void);

/* Symbol: _ZN9CarAccelB5SubKF23upd_sf_dynamic_var_betaER6Matrix */
/* Demangled: CarAccelB::SubKF::upd_sf_dynamic_var_beta(Matrix&) */
int _ZN9CarAccelB5SubKF23upd_sf_dynamic_var_betaER6Matrix(void);

/* Symbol: _ZN14SimpleGyroBias15is_gb_var_readyEv */
/* Demangled: SimpleGyroBias::is_gb_var_ready() */
int _ZN14SimpleGyroBias15is_gb_var_readyEv(void);

/* Symbol: _ZN5SfLpf17set_dec_lpf_parasEv */
/* Demangled: SfLpf::set_dec_lpf_paras() */
int _ZN5SfLpf17set_dec_lpf_parasEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp22count_direction_numberEPKNS_9VboFbEnum6FbTypeEPiS5_ */
/* Demangled: VehBodOrient::VboGrp::count_direction_number(VehBodOrient::VboFbEnum::FbType const*, int*, int*) */
int _ZN12VehBodOrient6VboGrp22count_direction_numberEPKNS_9VboFbEnum6FbTypeEPiS5_(void);

/* Symbol: _ZN7PdrSattD2Ev */
/* Demangled: PdrSatt::~PdrSatt() */
int _ZN7PdrSattD2Ev(void);

/* Symbol: _ZN9CarAccelB5SubKF29upd_static_var_grav_proj_measEPKdS2_ */
/* Demangled: CarAccelB::SubKF::upd_static_var_grav_proj_meas(double const*, double const*) */
int _ZN9CarAccelB5SubKF29upd_static_var_grav_proj_measEPKdS2_(void);

/* Symbol: _ZN6UdrEkf8get_CorrEi */
/* Demangled: UdrEkf::get_Corr(int) */
int _ZN6UdrEkf8get_CorrEi(void);

/* Symbol: _ZN6UdrEkfC1ERK12ConfigParams */
/* Demangled: UdrEkf::UdrEkf(ConfigParams const&) */
int _ZN6UdrEkfC1ERK12ConfigParams(void);

/* Symbol: _Z15sf_ts_shift_secdi */
/* Demangled: sf_ts_shift_sec(double, int) */
int _Z15sf_ts_shift_secdi(void);

/* Symbol: _ZN9CarAccelB15upd_ini_gp_infoEv */
/* Demangled: CarAccelB::upd_ini_gp_info() */
int _ZN9CarAccelB15upd_ini_gp_infoEv(void);

/* Symbol: _ZN6UdrEkf16correction_checkEP18sf_gnss_msg_structR6Matrix */
/* Demangled: UdrEkf::correction_check(sf_gnss_msg_struct*, Matrix&) */
int _ZN6UdrEkf16correction_checkEP18sf_gnss_msg_structR6Matrix(void);

/* Symbol: _ZN6UdrEkf17adjust_K_and_CorrER6MatrixS1_S1_Pjbd */
/* Demangled: UdrEkf::adjust_K_and_Corr(Matrix&, Matrix&, Matrix&, unsigned int*, bool, double) */
int _ZN6UdrEkf17adjust_K_and_CorrER6MatrixS1_S1_Pjbd(void);

/* Symbol: _ZN18SystemStateControl7get_cvbER6Matrix */
/* Demangled: SystemStateControl::get_cvb(Matrix&) */
int _ZN18SystemStateControl7get_cvbER6Matrix(void);

/* Symbol: _ZN6UdrLpf16get_adv_gnss_1hzEv */
/* Demangled: UdrLpf::get_adv_gnss_1hz() */
int _ZN6UdrLpf16get_adv_gnss_1hzEv(void);

/* Symbol: _ZN5SfIsm11meas_structD2Ev */
/* Demangled: SfIsm::meas_struct::~meas_struct() */
int _ZN5SfIsm11meas_structD2Ev(void);

/* Symbol: _ZN6Matrix12row_sub_cRowEiid */
/* Demangled: Matrix::row_sub_cRow(int, int, double) */
int _ZN6Matrix12row_sub_cRowEiid(void);

/* Symbol: _ZN6MatrixC1EiPKd */
/* Demangled: Matrix::Matrix(int, double const*) */
int _ZN6MatrixC1EiPKd(void);

/* Symbol: _ZN6UdrLpfD2Ev */
/* Demangled: UdrLpf::~UdrLpf() */
int _ZN6UdrLpfD2Ev(void);

/* Symbol: _ZN5SfLpf21get_default_gyro_paraEv */
/* Demangled: SfLpf::get_default_gyro_para() */
int _ZN5SfLpf21get_default_gyro_paraEv(void);

/* Symbol: _ZN11Integration14calculation_tsE */
/* Demangled: Integration::calculation_ts */
extern void* _ZN11Integration14calculation_tsE;

/* Symbol: _ZN9CarAccelB5SubKF16upd_basic_sf_varEv */
/* Demangled: CarAccelB::SubKF::upd_basic_sf_var() */
int _ZN9CarAccelB5SubKF16upd_basic_sf_varEv(void);

/* Symbol: _ZN14GnssAccelDecelC2Ev */
/* Demangled: GnssAccelDecel::GnssAccelDecel() */
int _ZN14GnssAccelDecelC2Ev(void);

/* Symbol: _ZN14SimpleGyroBias23upd_mov_statistics_gyroEPdd */
/* Demangled: SimpleGyroBias::upd_mov_statistics_gyro(double*, double) */
int _ZN14SimpleGyroBias23upd_mov_statistics_gyroEPdd(void);

/* Symbol: _ZN6MatrixC2Ei */
/* Demangled: Matrix::Matrix(int) */
int _ZN6MatrixC2Ei(void);

/* Symbol: _ZN6MatrixclEPKiS1_ */
/* Demangled: Matrix::operator()(int const*, int const*) */
int _ZN6MatrixclEPKiS1_(void);

/* Symbol: _ZN9Barometer15dect_baro_driftEv */
/* Demangled: Barometer::dect_baro_drift() */
int _ZN9Barometer15dect_baro_driftEv(void);

/* Symbol: _ZN6UdrEkf12get_vel_initEv */
/* Demangled: UdrEkf::get_vel_init() */
int _ZN6UdrEkf12get_vel_initEv(void);

/* Symbol: _ZN6PdrLpf26get_bmi160_accel_para_50hzEv */
/* Demangled: PdrLpf::get_bmi160_accel_para_50hz() */
int _ZN6PdrLpf26get_bmi160_accel_para_50hzEv(void);

/* Symbol: _ZN11DataProcess18sensor_range_checkEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: DataProcess::sensor_range_check(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN11DataProcess18sensor_range_checkEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct17pseudo_reset_buffEv */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::pseudo_reset_buff() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_struct17pseudo_reset_buffEv(void);

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_struct5resetEv */
/* Demangled: SystemStateControl::check_cvb_dir_struct::reset() */
int _ZN18SystemStateControl20check_cvb_dir_struct5resetEv(void);

/* Symbol: _Z20almost_greater_equalddd */
/* Demangled: almost_greater_equal(double, double, double) */
int _Z20almost_greater_equalddd(void);

/* Symbol: _ZN6PdrSgb7ini_tolEv */
/* Demangled: PdrSgb::ini_tol() */
int _ZN6PdrSgb7ini_tolEv(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _ZN5PdrGb17copy_sgb_rough_gbEv */
/* Demangled: PdrGb::copy_sgb_rough_gb() */
int _ZN5PdrGb17copy_sgb_rough_gbEv(void);

/* Symbol: _ZN6UdrEkf17update_K_and_CorrER6MatrixS1_S1_S1_S1_ */
/* Demangled: UdrEkf::update_K_and_Corr(Matrix&, Matrix&, Matrix&, Matrix&, Matrix&) */
int _ZN6UdrEkf17update_K_and_CorrER6MatrixS1_S1_S1_S1_(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm3C2Ev */
/* Demangled: VehBodOrient::VboGdcm3::VboGdcm3() */
int _ZN12VehBodOrient8VboGdcm3C2Ev(void);

/* Symbol: _ZN9PedometerC2ERK12ConfigParams */
/* Demangled: Pedometer::Pedometer(ConfigParams const&) */
int _ZN9PedometerC2ERK12ConfigParams(void);

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN12VehBodOrient8VboGdcm315reset_ext_gdcm3Ev */
/* Demangled: VehBodOrient::VboGdcm3::reset_ext_gdcm3() */
int _ZN12VehBodOrient8VboGdcm315reset_ext_gdcm3Ev(void);

/* Symbol: _ZN14SfStaticDetectC2Eii */
/* Demangled: SfStaticDetect::SfStaticDetect(int, int) */
int _ZN14SfStaticDetectC2Eii(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN6UdrEkf13yaw_constrianEPj */
/* Demangled: UdrEkf::yaw_constrian(unsigned int*) */
int _ZN6UdrEkf13yaw_constrianEPj(void);

/* Symbol: _ZN12VehBodOrientC1Ev */
/* Demangled: VehBodOrient::VehBodOrient() */
int _ZN12VehBodOrientC1Ev(void);

/* Symbol: acc_sum_pitch */
/* Demangled: acc_sum_pitch */
extern void* acc_sum_pitch;

/* Symbol: dr_lon_ref */
/* Demangled: dr_lon_ref */
extern void* dr_lon_ref;

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _ZmiRK6Matrixd */
/* Demangled: operator-(Matrix const&, double) */
int _ZmiRK6Matrixd(void);

/* Symbol: _ZN18SystemStateControl14ini_cvb_to_ekfER6UdrEkf */
/* Demangled: SystemStateControl::ini_cvb_to_ekf(UdrEkf&) */
int _ZN18SystemStateControl14ini_cvb_to_ekfER6UdrEkf(void);

/* Symbol: _ZN12VehBodOrient7VboLess9less_quatEPd */
/* Demangled: VehBodOrient::VboLess::less_quat(double*) */
int _ZN12VehBodOrient7VboLess9less_quatEPd(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: acc_smooth_ready */
/* Demangled: acc_smooth_ready */
extern void* acc_smooth_ready;

/* Symbol: pedometer_dsp_sqrt */
/* Demangled: pedometer_dsp_sqrt */
int pedometer_dsp_sqrt(void);

/* Symbol: _ZN6PdrEkf25accumulate_mag_differenceEN7PdrSatt10out_structEN11PdrMheading10out_structE */
/* Demangled: PdrEkf::accumulate_mag_difference(PdrSatt::out_struct, PdrMheading::out_struct) */
int _ZN6PdrEkf25accumulate_mag_differenceEN7PdrSatt10out_structEN11PdrMheading10out_structE(void);

/* Symbol: _ZN5SfLpf17set_mag_lpf_parasEPKNS_11para_structE */
/* Demangled: SfLpf::set_mag_lpf_paras(SfLpf::para_struct const*) */
int _ZN5SfLpf17set_mag_lpf_parasEPKNS_11para_structE(void);

/* Symbol: _ZN6SfSatt21upd_meas_para_tot_lenEv */
/* Demangled: SfSatt::upd_meas_para_tot_len() */
int _ZN6SfSatt21upd_meas_para_tot_lenEv(void);

/* Symbol: _ZNK6UdrEkf7get_CbvEv */
/* Demangled: UdrEkf::get_Cbv() const */
int _ZNK6UdrEkf7get_CbvEv(void);

/* Symbol: _ZN6UdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_mmc5603_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf25set_mmc5603_dec_paras_magEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN11IntegrationD1Ev */
/* Demangled: Integration::~Integration() */
int _ZN11IntegrationD1Ev(void);

/* Symbol: _ZN6SfSatt16meas_para_structD1Ev */
/* Demangled: SfSatt::meas_para_struct::~meas_para_struct() */
int _ZN6SfSatt16meas_para_structD1Ev(void);

/* Symbol: _ZN6SfSatt17select_state_typeEv */
/* Demangled: SfSatt::select_state_type() */
int _ZN6SfSatt17select_state_typeEv(void);

/* Symbol: _ZN5SfWmm37MAG_ComputeSphericalHarmonicVariablesERKNS_17MAGtype_EllipsoidERKNS_22MAGtype_CoordSphericalEiPNS_34MAGtype_SphericalHarmonicVariablesE */
/* Demangled: SfWmm::MAG_ComputeSphericalHarmonicVariables(SfWmm::MAGtype_Ellipsoid const&, SfWmm::MAGtype_CoordSpherical const&, int, SfWmm::MAGtype_SphericalHarmonicVariables*) */
int _ZN5SfWmm37MAG_ComputeSphericalHarmonicVariablesERKNS_17MAGtype_EllipsoidERKNS_22MAGtype_CoordSphericalEiPNS_34MAGtype_SphericalHarmonicVariablesE(void);

/* Symbol: _ZN6UdrEkf21ekf_main_state_structC1Ev */
/* Demangled: UdrEkf::ekf_main_state_struct::ekf_main_state_struct() */
int _ZN6UdrEkf21ekf_main_state_structC1Ev(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: _ZN4SfGb12gbuff_structD2Ev */
/* Demangled: SfGb::gbuff_struct::~gbuff_struct() */
int _ZN4SfGb12gbuff_structD2Ev(void);

/* Symbol: _ZN6Matrix14find_max_inColEi */
/* Demangled: Matrix::find_max_inCol(int) */
int _ZN6Matrix14find_max_inColEi(void);

/* Symbol: _ZN14SfStaticDetect15get_sensor_distENS_10SensorEnum10SensorTypeE */
/* Demangled: SfStaticDetect::get_sensor_dist(SfStaticDetect::SensorEnum::SensorType) */
int _ZN14SfStaticDetect15get_sensor_distENS_10SensorEnum10SensorTypeE(void);

/* Symbol: _ZN6UdrEkf23get_chi_square_velocityEv */
/* Demangled: UdrEkf::get_chi_square_velocity() */
int _ZN6UdrEkf23get_chi_square_velocityEv(void);

/* Symbol: _ZN6UdrEkf25predict_attitude_estimateEd */
/* Demangled: UdrEkf::predict_attitude_estimate(double) */
int _ZN6UdrEkf25predict_attitude_estimateEd(void);

/* Symbol: _ZN18SystemStateControl32get_coarse_ekf_cvb_bit_true_dataEPdi */
/* Demangled: SystemStateControl::get_coarse_ekf_cvb_bit_true_data(double*, int) */
int _ZN18SystemStateControl32get_coarse_ekf_cvb_bit_true_dataEPdi(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp23get_select_ac_from_buffEj */
/* Demangled: VehBodOrient::VboGrp::get_select_ac_from_buff(unsigned int) const */
int _ZNK12VehBodOrient6VboGrp23get_select_ac_from_buffEj(void);

/* Symbol: AT_double */
/* Demangled: AT_double */
int AT_double(void);

/* Symbol: _ZN6PdrLpfC1ERK12ConfigParams */
/* Demangled: PdrLpf::PdrLpf(ConfigParams const&) */
int _ZN6PdrLpfC1ERK12ConfigParams(void);

/* Symbol: _ZN6PdrLpf20set_adv_mag_lpf_paraEv */
/* Demangled: PdrLpf::set_adv_mag_lpf_para() */
int _ZN6PdrLpf20set_adv_mag_lpf_paraEv(void);

/* Symbol: _ZN6SfSatt16comp_direct_innoEv */
/* Demangled: SfSatt::comp_direct_inno() */
int _ZN6SfSatt16comp_direct_innoEv(void);

/* Symbol: _ZN5SfWmm15MAG_SetDefaultsEPNS_17MAGtype_EllipsoidEPNS_13MAGtype_GeoidE */
/* Demangled: SfWmm::MAG_SetDefaults(SfWmm::MAGtype_Ellipsoid*, SfWmm::MAGtype_Geoid*) */
int _ZN5SfWmm15MAG_SetDefaultsEPNS_17MAGtype_EllipsoidEPNS_13MAGtype_GeoidE(void);

/* Symbol: _ZN6UdrEkf5get_PEi */
/* Demangled: UdrEkf::get_P(int) */
int _ZN6UdrEkf5get_PEi(void);

/* Symbol: _ZN14GnssAccelDecel18comp_2d_avg_dspeedEi */
/* Demangled: GnssAccelDecel::comp_2d_avg_dspeed(int) */
int _ZN14GnssAccelDecel18comp_2d_avg_dspeedEi(void);

/* Symbol: _ZN16UdrUpdTypeSelect28update_mu_level_with_dr_modeEP18sf_gnss_msg_struct */
/* Demangled: UdrUpdTypeSelect::update_mu_level_with_dr_mode(sf_gnss_msg_struct*) */
int _ZN16UdrUpdTypeSelect28update_mu_level_with_dr_modeEP18sf_gnss_msg_struct(void);

/* Symbol: smd_reported */
/* Demangled: smd_reported */
extern void* smd_reported;

/* Symbol: RadioSpeedIndex */
/* Demangled: RadioSpeedIndex */
extern void* RadioSpeedIndex;

/* Symbol: _ZN6Matrix4mEyeEv */
/* Demangled: Matrix::mEye() */
int _ZN6Matrix4mEyeEv(void);

/* Symbol: _ZN14SfStaticDetect8varianceEPdi */
/* Demangled: SfStaticDetect::variance(double*, int) */
int _ZN14SfStaticDetect8varianceEPdi(void);

/* Symbol: _ZN5SfWmm15MAG_GetAltitudeEPNS_13MAGtype_GeoidEPNS_21MAGtype_CoordGeodeticEPKdi */
/* Demangled: SfWmm::MAG_GetAltitude(SfWmm::MAGtype_Geoid*, SfWmm::MAGtype_CoordGeodetic*, double const*, int) */
int _ZN5SfWmm15MAG_GetAltitudeEPNS_13MAGtype_GeoidEPNS_21MAGtype_CoordGeodeticEPKdi(void);

/* Symbol: _ZN5SfWmm34MAG_AllocateLegendreFunctionMemoryEi */
/* Demangled: SfWmm::MAG_AllocateLegendreFunctionMemory(int) */
int _ZN5SfWmm34MAG_AllocateLegendreFunctionMemoryEi(void);

/* Symbol: _ZNK14SimpleGyroBias23get_rough_gyro_bias_varEPd */
/* Demangled: SimpleGyroBias::get_rough_gyro_bias_var(double*) const */
int _ZNK14SimpleGyroBias23get_rough_gyro_bias_varEPd(void);

/* Symbol: _ZN15PdrMotionDetect17transition_updateEv */
/* Demangled: PdrMotionDetect::transition_update() */
int _ZN15PdrMotionDetect17transition_updateEv(void);

/* Symbol: _ZN9Pedometer7SsModel25update_default_model_biasEv */
/* Demangled: Pedometer::SsModel::update_default_model_bias() */
int _ZN9Pedometer7SsModel25update_default_model_biasEv(void);

/* Symbol: _ZN12ConfigParamsC1EP20sf_user_param_struct */
/* Demangled: ConfigParams::ConfigParams(sf_user_param_struct*) */
int _ZN12ConfigParamsC1EP20sf_user_param_struct(void);

/* Symbol: _ZN11DataProcess18get_refer_utc_timeEv */
/* Demangled: DataProcess::get_refer_utc_time() */
int _ZN11DataProcess18get_refer_utc_timeEv(void);

/* Symbol: _Z17open_archive_filePKci */
/* Demangled: open_archive_file(char const*, int) */
int _Z17open_archive_filePKci(void);

/* Symbol: _ZN6MatrixC2Ev */
/* Demangled: Matrix::Matrix() */
int _ZN6MatrixC2Ev(void);

/* Symbol: _ZNK9CarAccelB5SubKF15get_q_gyro_biasEv */
/* Demangled: CarAccelB::SubKF::get_q_gyro_bias() const */
int _ZNK9CarAccelB5SubKF15get_q_gyro_biasEv(void);

/* Symbol: _ZN6UdrEkf23constrain_P_lower_limitEPjb */
/* Demangled: UdrEkf::constrain_P_lower_limit(unsigned int*, bool) */
int _ZN6UdrEkf23constrain_P_lower_limitEPjb(void);

/* Symbol: _ZN16UdrUpdTypeSelect15update_mu_levelEP18sf_gnss_msg_structb */
/* Demangled: UdrUpdTypeSelect::update_mu_level(sf_gnss_msg_struct*, bool) */
int _ZN16UdrUpdTypeSelect15update_mu_levelEP18sf_gnss_msg_structb(void);

/* Symbol: gyr_static_flag */
/* Demangled: gyr_static_flag */
extern void* gyr_static_flag;

/* Symbol: _ZN6UdrEkf18stored_bias_structD2Ev */
/* Demangled: UdrEkf::stored_bias_struct::~stored_bias_struct() */
int _ZN6UdrEkf18stored_bias_structD2Ev(void);

/* Symbol: _ZN14SimpleGyroBias23reset_gpart_stable_statEv */
/* Demangled: SimpleGyroBias::reset_gpart_stable_stat() */
int _ZN14SimpleGyroBias23reset_gpart_stable_statEv(void);

/* Symbol: _ZNK5SfLpf16get_adv_gnss_velEPd */
/* Demangled: SfLpf::get_adv_gnss_vel(double*) const */
int _ZNK5SfLpf16get_adv_gnss_velEPd(void);

/* Symbol: _Z22extract_normal_gravityR6MatrixS0_ */
/* Demangled: extract_normal_gravity(Matrix&, Matrix&) */
int _Z22extract_normal_gravityR6MatrixS0_(void);

/* Symbol: _ZN9CarAccelB18upd_gyro_bias_infoERK14SimpleGyroBias */
/* Demangled: CarAccelB::upd_gyro_bias_info(SimpleGyroBias const&) */
int _ZN9CarAccelB18upd_gyro_bias_infoERK14SimpleGyroBias(void);

/* Symbol: mpe_get_linear_acceleration */
/* Demangled: mpe_get_linear_acceleration */
int mpe_get_linear_acceleration(void);

/* Symbol: _ZN6SfSatt17upd_var_gyro_biasEPKd */
/* Demangled: SfSatt::upd_var_gyro_bias(double const*) */
int _ZN6SfSatt17upd_var_gyro_biasEPKd(void);

/* Symbol: _ZN16UdrUpdTypeSelect15update_gnss_fsmEP18sf_gnss_msg_structdb */
/* Demangled: UdrUpdTypeSelect::update_gnss_fsm(sf_gnss_msg_struct*, double, bool) */
int _ZN16UdrUpdTypeSelect15update_gnss_fsmEP18sf_gnss_msg_structdb(void);

/* Symbol: _ZNK6MatrixclEPKii */
/* Demangled: Matrix::operator()(int const*, int) const */
int _ZNK6MatrixclEPKii(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE6assignIPdEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5SfLpf21get_default_gnss_paraEv */
/* Demangled: SfLpf::get_default_gnss_para() */
int _ZN5SfLpf21get_default_gnss_paraEv(void);

/* Symbol: _ZN5SfLpfD0Ev */
/* Demangled: SfLpf::~SfLpf() */
int _ZN5SfLpfD0Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess12comp_avg_dadEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_dad(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess12comp_avg_dadEPNS_16stat_quat_structEd(void);

/* Symbol: _ZN5SfLpf20get_default_mag_paraEv */
/* Demangled: SfLpf::get_default_mag_para() */
int _ZN5SfLpf20get_default_mag_paraEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSVel4NameE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSVel::Name */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSVel4NameE;

/* Symbol: _ZN6UdrEkf21predict_G_Q_GT_matrixEb */
/* Demangled: UdrEkf::predict_G_Q_GT_matrix(bool) */
int _ZN6UdrEkf21predict_G_Q_GT_matrixEb(void);

/* Symbol: _ZN18SystemStateControlC2Ev */
/* Demangled: SystemStateControl::SystemStateControl() */
int _ZN18SystemStateControlC2Ev(void);

/* Symbol: _Z10wgslla2xyzR6MatrixS0_ */
/* Demangled: wgslla2xyz(Matrix&, Matrix&) */
int _Z10wgslla2xyzR6MatrixS0_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN6UdrEkf14get_reset_flagEv */
/* Demangled: UdrEkf::get_reset_flag() */
int _ZN6UdrEkf14get_reset_flagEv(void);

/* Symbol: adjoint */
/* Demangled: adjoint */
int adjoint(void);

/* Symbol: _ZN6MatrixclEPKi */
/* Demangled: Matrix::operator()(int const*) */
int _ZN6MatrixclEPKi(void);

/* Symbol: _ZN6SfSatt16set_ekf_var_measEv */
/* Demangled: SfSatt::set_ekf_var_meas() */
int _ZN6SfSatt16set_ekf_var_measEv(void);

/* Symbol: _ZNK6SfSatt23is_test_meas_upd_by_dcmEv */
/* Demangled: SfSatt::is_test_meas_upd_by_dcm() const */
int _ZNK6SfSatt23is_test_meas_upd_by_dcmEv(void);

/* Symbol: _ZN6UdrEkf7set_w2wER6Matrix */
/* Demangled: UdrEkf::set_w2w(Matrix&) */
int _ZN6UdrEkf7set_w2wER6Matrix(void);

/* Symbol: _ZN12VehBodOrient7VboLess3m2nEPA3_KdPd */
/* Demangled: VehBodOrient::VboLess::m2n(double const (*) [3], double*) */
int _ZN12VehBodOrient7VboLess3m2nEPA3_KdPd(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm319sync_gdcm3_with_grpERKN9CarAccelB13output_structERNS_6VboGrpE */
/* Demangled: VehBodOrient::VboGdcm3::sync_gdcm3_with_grp(CarAccelB::output_struct const&, VehBodOrient::VboGrp&) */
int _ZN12VehBodOrient8VboGdcm319sync_gdcm3_with_grpERKN9CarAccelB13output_structERNS_6VboGrpE(void);

/* Symbol: cmp_func */
/* Demangled: cmp_func */
int cmp_func(void);

/* Symbol: _ZN6PdrLpf28get_lsm6dsm_accel_para_200hzEv */
/* Demangled: PdrLpf::get_lsm6dsm_accel_para_200hz() */
int _ZN6PdrLpf28get_lsm6dsm_accel_para_200hzEv(void);

/* Symbol: _ZN6UdrEkf25set_valid_flag_to_invalidEv */
/* Demangled: UdrEkf::set_valid_flag_to_invalid() */
int _ZN6UdrEkf25set_valid_flag_to_invalidEv(void);

/* Symbol: _Z16set_user_archiveR22sf_user_archive_struct */
/* Demangled: set_user_archive(sf_user_archive_struct&) */
int _Z16set_user_archiveR22sf_user_archive_struct(void);

/* Symbol: _ZN12VehBodOrient7VboLess10alloc_lessEv */
/* Demangled: VehBodOrient::VboLess::alloc_less() */
int _ZN12VehBodOrient7VboLess10alloc_lessEv(void);

/* Symbol: mag_raw_window */
/* Demangled: mag_raw_window */
extern void* mag_raw_window;

/* Symbol: _ZN16UdrUpdTypeSelect12get_mu_levelEj */
/* Demangled: UdrUpdTypeSelect::get_mu_level(unsigned int) */
int _ZN16UdrUpdTypeSelect12get_mu_levelEj(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC1Ev */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::phone_yaw_moved_caused_pos_drift_struct() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC1Ev(void);

/* Symbol: _ZN6UdrEkf8get_ResiEi */
/* Demangled: UdrEkf::get_Resi(int) */
int _ZN6UdrEkf8get_ResiEi(void);

/* Symbol: _ZN3UDR22publish_udr_mnl_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::publish_udr_mnl_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR22publish_udr_mnl_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN14SimpleGyroBias12gbuff_structC1Ev */
/* Demangled: SimpleGyroBias::gbuff_struct::gbuff_struct() */
int _ZN14SimpleGyroBias12gbuff_structC1Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp19get_buff_avg_norm_wEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_norm_w() */
int _ZN12VehBodOrient6VboGrp19get_buff_avg_norm_wEv(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _ZN9CarAccelB13upd_gnss_infoERK14GnssAccelDecelRd */
/* Demangled: CarAccelB::upd_gnss_info(GnssAccelDecel const&, double&) */
int _ZN9CarAccelB13upd_gnss_infoERK14GnssAccelDecelRd(void);

/* Symbol: _ZN6UdrEkf17heading_constrainEd */
/* Demangled: UdrEkf::heading_constrain(double) */
int _ZN6UdrEkf17heading_constrainEd(void);

/* Symbol: _ZN15MonitorDataRate14ini_ds_monitorEv */
/* Demangled: MonitorDataRate::ini_ds_monitor() */
int _ZN15MonitorDataRate14ini_ds_monitorEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect11MuStateEnum4NameE */
/* Demangled: UdrUpdTypeSelect::MuStateEnum::Name */
extern void* _ZN16UdrUpdTypeSelect11MuStateEnum4NameE;

/* Symbol: _ZN12VehBodOrient6VboGrp20get_buff_max_gad_varEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_max_gad_var() */
int _ZN12VehBodOrient6VboGrp20get_buff_max_gad_varEv(void);

/* Symbol: _ZN6PdrIgp17delay_buff_structD2Ev */
/* Demangled: PdrIgp::delay_buff_struct::~delay_buff_struct() */
int _ZN6PdrIgp17delay_buff_structD2Ev(void);

/* Symbol: _ZN6SfSatt17ekf_set_meas_timeEv */
/* Demangled: SfSatt::ekf_set_meas_time() */
int _ZN6SfSatt17ekf_set_meas_timeEv(void);

/* Symbol: _Z20normalize_rot_matrixR6Matrix */
/* Demangled: normalize_rot_matrix(Matrix&) */
int _Z20normalize_rot_matrixR6Matrix(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct10tune_alphaEPKNS_18sub_kf_buff_structEPd */
/* Demangled: CarAccelB::sf_pattern_struct::tune_alpha(CarAccelB::sub_kf_buff_struct const*, double*) const */
int _ZNK9CarAccelB17sf_pattern_struct10tune_alphaEPKNS_18sub_kf_buff_structEPd(void);

/* Symbol: _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectii */
/* Demangled: PdrEkf::replace_pdr2mnl_msg(sf2mnl_msg_struct*, double, Pedometer::step_info_struct const&, PdrUpdTypeSelect*, int, int) */
int _ZN6PdrEkf19replace_pdr2mnl_msgEP17sf2mnl_msg_structdRKN9Pedometer16step_info_structEP16PdrUpdTypeSelectii(void);

/* Symbol: _ZN6SfSatt17comp_gb_intensityEv */
/* Demangled: SfSatt::comp_gb_intensity() */
int _ZN6SfSatt17comp_gb_intensityEv(void);

/* Symbol: _Z15logically_equalddd */
/* Demangled: logically_equal(double, double, double) */
int _Z15logically_equalddd(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStartC2Ev */
/* Demangled: VehBodOrient::VboFakeStart::VboFakeStart() */
int _ZN12VehBodOrient12VboFakeStartC2Ev(void);

/* Symbol: _ZN6PdrEkf17update_prev_stateEv */
/* Demangled: PdrEkf::update_prev_state() */
int _ZN6PdrEkf17update_prev_stateEv(void);

/* Symbol: _ZN6SfSattC2ERKNS_20TURN_ON_STATE_STRUCTERKNS_19TURN_ON_MEAS_STRUCTERKNS_20EKF_TIME_CTRL_STRUCTERKNS_11TEST_STRUCTE */
/* Demangled: SfSatt::SfSatt(SfSatt::TURN_ON_STATE_STRUCT const&, SfSatt::TURN_ON_MEAS_STRUCT const&, SfSatt::EKF_TIME_CTRL_STRUCT const&, SfSatt::TEST_STRUCT const&) */
int _ZN6SfSattC2ERKNS_20TURN_ON_STATE_STRUCTERKNS_19TURN_ON_MEAS_STRUCTERKNS_20EKF_TIME_CTRL_STRUCTERKNS_11TEST_STRUCTE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN15MonitorDataRateD1Ev */
/* Demangled: MonitorDataRate::~MonitorDataRate() */
int _ZN15MonitorDataRateD1Ev(void);

/* Symbol: _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelect */
/* Demangled: UdrEkf::replace_udr2mnl_msg(sf2mnl_msg_struct*, double, int, int*, UdrUpdTypeSelect&) */
int _ZN6UdrEkf19replace_udr2mnl_msgEP17sf2mnl_msg_structdiPiR16UdrUpdTypeSelect(void);

/* Symbol: _ZN14GnssAccelDecel15gad_buff_structC1Ev */
/* Demangled: GnssAccelDecel::gad_buff_struct::gad_buff_struct() */
int _ZN14GnssAccelDecel15gad_buff_structC1Ev(void);

/* Symbol: _ZN11PdrMheadingD1Ev */
/* Demangled: PdrMheading::~PdrMheading() */
int _ZN11PdrMheadingD1Ev(void);

/* Symbol: _Z11omega2ratesR6MatrixS0_ */
/* Demangled: omega2rates(Matrix&, Matrix&) */
int _Z11omega2ratesR6MatrixS0_(void);

/* Symbol: _ZN18SystemStateControl22check_and_upd_fine_cvbER6UdrEkf */
/* Demangled: SystemStateControl::check_and_upd_fine_cvb(UdrEkf&) */
int _ZN18SystemStateControl22check_and_upd_fine_cvbER6UdrEkf(void);

/* Symbol: Array3x3_Invert */
/* Demangled: Array3x3_Invert */
int Array3x3_Invert(void);

/* Symbol: _ZN6PdrSgb13upd_max_min_wEv */
/* Demangled: PdrSgb::upd_max_min_w() */
int _ZN6PdrSgb13upd_max_min_wEv(void);

/* Symbol: _ZN6SfSatt5set_HEv */
/* Demangled: SfSatt::set_H() */
int _ZN6SfSatt5set_HEv(void);

/* Symbol: _ZN6SfSatt8set_ctrlEv */
/* Demangled: SfSatt::set_ctrl() */
int _ZN6SfSatt8set_ctrlEv(void);

/* Symbol: _ZN14SimpleGyroBias15upd_stable_statEv */
/* Demangled: SimpleGyroBias::upd_stable_stat() */
int _ZN14SimpleGyroBias15upd_stable_statEv(void);

/* Symbol: _ZN5SfSgb14copy_stable_gbEv */
/* Demangled: SfSgb::copy_stable_gb() */
int _ZN5SfSgb14copy_stable_gbEv(void);

/* Symbol: _ZN6SfSatt8set_measEv */
/* Demangled: SfSatt::set_meas() */
int _ZN6SfSatt8set_measEv(void);

/* Symbol: _ZN18SystemStateControl27set_fine_cvb_from_sys_levelENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::set_fine_cvb_from_sys_level(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl27set_fine_cvb_from_sys_levelENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: _ZN18SystemStateControl31set_fine_cvb_from_ekf_sys_levelENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::set_fine_cvb_from_ekf_sys_level(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl31set_fine_cvb_from_ekf_sys_levelENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: _ZN5SfSgb20reset_sgb_upd_statusEv */
/* Demangled: SfSgb::reset_sgb_upd_status() */
int _ZN5SfSgb20reset_sgb_upd_statusEv(void);

/* Symbol: _ZN6Matrix4mAddERS_S0_ */
/* Demangled: Matrix::mAdd(Matrix&, Matrix&) */
int _ZN6Matrix4mAddERS_S0_(void);

/* Symbol: _ZN5SfWmmD2Ev */
/* Demangled: SfWmm::~SfWmm() */
int _ZN5SfWmmD2Ev(void);

/* Symbol: _Z19comp_cos_angle_diffRK6MatrixS1_ */
/* Demangled: comp_cos_angle_diff(Matrix const&, Matrix const&) */
int _Z19comp_cos_angle_diffRK6MatrixS1_(void);

/* Symbol: _ZN16UdrUpdTypeSelect17get_highest_levelEPbj */
/* Demangled: UdrUpdTypeSelect::get_highest_level(bool*, unsigned int) */
int _ZN16UdrUpdTypeSelect17get_highest_levelEPbj(void);

/* Symbol: state_gesture_show */
/* Demangled: state_gesture_show */
extern void* state_gesture_show;

/* Symbol: _ZN6PdrSgb21esti_static_gyro_biasEdPKdd */
/* Demangled: PdrSgb::esti_static_gyro_bias(double, double const*, double) */
int _ZN6PdrSgb21esti_static_gyro_biasEdPKdd(void);

/* Symbol: _Z10wgsxyz2nedR6MatrixS0_S0_ */
/* Demangled: wgsxyz2ned(Matrix&, Matrix&, Matrix&) */
int _Z10wgsxyz2nedR6MatrixS0_S0_(void);

/* Symbol: _ZN9Barometer13ini_baro_smooEv */
/* Demangled: Barometer::ini_baro_smoo() */
int _ZN9Barometer13ini_baro_smooEv(void);

/* Symbol: _ZN3UDRC1ERK12ConfigParams */
/* Demangled: UDR::UDR(ConfigParams const&) */
int _ZN3UDRC1ERK12ConfigParams(void);

/* Symbol: _ZN16UdrUpdTypeSelectC2ERK12ConfigParams */
/* Demangled: UdrUpdTypeSelect::UdrUpdTypeSelect(ConfigParams const&) */
int _ZN16UdrUpdTypeSelectC2ERK12ConfigParams(void);

/* Symbol: cut_to_4g */
/* Demangled: cut_to_4g */
int cut_to_4g(void);

/* Symbol: v3_predict_noise */
/* Demangled: v3_predict_noise */
int v3_predict_noise(void);

/* Symbol: log_level */
/* Demangled: log_level */
extern void* log_level;

/* Symbol: _ZN3PDRD2Ev */
/* Demangled: PDR::~PDR() */
int _ZN3PDRD2Ev(void);

/* Symbol: _ZN5SfLpf20safe_set_smooth_packEPKNS_11para_structEiRNS_12smoop_structERb */
/* Demangled: SfLpf::safe_set_smooth_pack(SfLpf::para_struct const*, int, SfLpf::smoop_struct&, bool&) */
int _ZN5SfLpf20safe_set_smooth_packEPKNS_11para_structEiRNS_12smoop_structERb(void);

/* Symbol: _ZN6SfSatt6set_QkEv */
/* Demangled: SfSatt::set_Qk() */
int _ZN6SfSatt6set_QkEv(void);

/* Symbol: _ZN14SimpleGyroBias24ini_for_static_gyro_biasEv */
/* Demangled: SimpleGyroBias::ini_for_static_gyro_bias() */
int _ZN14SimpleGyroBias24ini_for_static_gyro_biasEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess15comp_avg_norm_wEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_norm_w(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess15comp_avg_norm_wEPNS_16stat_quat_structEd(void);

/* Symbol: FIR_LPF */
/* Demangled: FIR_LPF */
int FIR_LPF(void);

/* Symbol: _ZN11DataProcess21sensor_delta_in_rangeEddd */
/* Demangled: DataProcess::sensor_delta_in_range(double, double, double) */
int _ZN11DataProcess21sensor_delta_in_rangeEddd(void);

/* Symbol: _ZNK6MatrixclEii */
/* Demangled: Matrix::operator()(int, int) const */
int _ZNK6MatrixclEii(void);

/* Symbol: _ZN16UdrUpdTypeSelect19set_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE */
/* Demangled: UdrUpdTypeSelect::set_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN16UdrUpdTypeSelect19set_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void);

/* Symbol: _ZN6SfSatt24gen_sys_cov_matrix_gp_gbEv */
/* Demangled: SfSatt::gen_sys_cov_matrix_gp_gb() */
int _ZN6SfSatt24gen_sys_cov_matrix_gp_gbEv(void);

/* Symbol: _Z8skew_xyzRK6Matrix */
/* Demangled: skew_xyz(Matrix const&) */
int _Z8skew_xyzRK6Matrix(void);

/* Symbol: _ZNK6MatrixngEv */
/* Demangled: Matrix::operator-() const */
int _ZNK6MatrixngEv(void);

/* Symbol: _ZN6SfSatt34get_general_dyn_coef_matrix_dcm_gbER6Matrix */
/* Demangled: SfSatt::get_general_dyn_coef_matrix_dcm_gb(Matrix&) */
int _ZN6SfSatt34get_general_dyn_coef_matrix_dcm_gbER6Matrix(void);

/* Symbol: expect_car_accel */
/* Demangled: expect_car_accel */
extern void* expect_car_accel;

/* Symbol: mpe_update_posture */
/* Demangled: mpe_update_posture */
int mpe_update_posture(void);

/* Symbol: _ZN6PdrLpf21get_akm099xx_para_5hzEv */
/* Demangled: PdrLpf::get_akm099xx_para_5hz() */
int _ZN6PdrLpf21get_akm099xx_para_5hzEv(void);

/* Symbol: _ZN11DataProcess16get_last_mems_tsEv */
/* Demangled: DataProcess::get_last_mems_ts() */
int _ZN11DataProcess16get_last_mems_tsEv(void);

/* Symbol: _ZN5SfIsmD1Ev */
/* Demangled: SfIsm::~SfIsm() */
int _ZN5SfIsmD1Ev(void);

/* Symbol: _Z16is_all_not_zerosRK6Matrix */
/* Demangled: is_all_not_zeros(Matrix const&) */
int _Z16is_all_not_zerosRK6Matrix(void);

/* Symbol: _ZN6UdrEkf7set_a2aER6Matrix */
/* Demangled: UdrEkf::set_a2a(Matrix&) */
int _ZN6UdrEkf7set_a2aER6Matrix(void);

/* Symbol: _ZN6UdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_akm099xx_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6UdrLpfC2ERK12ConfigParams */
/* Demangled: UdrLpf::UdrLpf(ConfigParams const&) */
int _ZN6UdrLpfC2ERK12ConfigParams(void);

/* Symbol: _ZN5SfLpf33check_icm40607_accel_dec_num_axisEi */
/* Demangled: SfLpf::check_icm40607_accel_dec_num_axis(int) */
int _ZN5SfLpf33check_icm40607_accel_dec_num_axisEi(void);

/* Symbol: _ZN12VehBodOrient6VboGrp19get_less_reset_flagEv */
/* Demangled: VehBodOrient::VboGrp::get_less_reset_flag() */
int _ZN12VehBodOrient6VboGrp19get_less_reset_flagEv(void);

/* Symbol: _sf_destory_object */
/* Demangled: _sf_destory_object */
int _sf_destory_object(void);

/* Symbol: _Z18correct_rot_matrixR6MatrixRKS_ */
/* Demangled: correct_rot_matrix(Matrix&, Matrix const&) */
int _Z18correct_rot_matrixR6MatrixRKS_(void);

/* Symbol: _ZN9CarAccelB17sf_pattern_structC1Ev */
/* Demangled: CarAccelB::sf_pattern_struct::sf_pattern_struct() */
int _ZN9CarAccelB17sf_pattern_structC1Ev(void);

/* Symbol: _ZN6UdrEkf16restore_all_infoEPK18sf_gnss_msg_structPKdRK6Matrix */
/* Demangled: UdrEkf::restore_all_info(sf_gnss_msg_struct const*, double const*, Matrix const&) */
int _ZN6UdrEkf16restore_all_infoEPK18sf_gnss_msg_structPKdRK6Matrix(void);

/* Symbol: _ZN6Matrix7set_valEPKiS1_RKS_ */
/* Demangled: Matrix::set_val(int const*, int const*, Matrix const&) */
int _ZN6Matrix7set_valEPKiS1_RKS_(void);

/* Symbol: _ZN5SfWmm20MAG_SummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE */
/* Demangled: SfWmm::MAG_SummationSpecial(SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
int _ZN5SfWmm20MAG_SummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void);

/* Symbol: ABAT_double */
/* Demangled: ABAT_double */
int ABAT_double(void);

/* Symbol: _ZN11DataProcess15gnss_preprocessEP18sf_gnss_msg_struct */
/* Demangled: DataProcess::gnss_preprocess(sf_gnss_msg_struct*) */
int _ZN11DataProcess15gnss_preprocessEP18sf_gnss_msg_struct(void);

/* Symbol: _ZNK6Matrix12get_tot_sizeEv */
/* Demangled: Matrix::get_tot_size() const */
int _ZNK6Matrix12get_tot_sizeEv(void);

/* Symbol: _ZNK14SimpleGyroBias13AlterGyroBias17get_dyn_gyro_biasEi */
/* Demangled: SimpleGyroBias::AlterGyroBias::get_dyn_gyro_bias(int) const */
int _ZNK14SimpleGyroBias13AlterGyroBias17get_dyn_gyro_biasEi(void);

/* Symbol: _ZN6PdrEkfC1ERK12ConfigParams */
/* Demangled: PdrEkf::PdrEkf(ConfigParams const&) */
int _ZN6PdrEkfC1ERK12ConfigParams(void);

/* Symbol: _ZN6SfSatt18upd_jacobian_for_pERK6Matrix */
/* Demangled: SfSatt::upd_jacobian_for_p(Matrix const&) */
int _ZN6SfSatt18upd_jacobian_for_pERK6Matrix(void);

/* Symbol: _ZN9BarometerC1ERK12ConfigParams */
/* Demangled: Barometer::Barometer(ConfigParams const&) */
int _ZN9BarometerC1ERK12ConfigParams(void);

/* Symbol: _ZN6UdrEkf25nhc_measurement_update_2dEijj */
/* Demangled: UdrEkf::nhc_measurement_update_2d(int, unsigned int, unsigned int) */
int _ZN6UdrEkf25nhc_measurement_update_2dEijj(void);

/* Symbol: _ZN12VehBodOrient6VboGrp13group_by_histEPd */
/* Demangled: VehBodOrient::VboGrp::group_by_hist(double*) */
int _ZN12VehBodOrient6VboGrp13group_by_histEPd(void);

/* Symbol: clear_one_axis_count */
/* Demangled: clear_one_axis_count */
int clear_one_axis_count(void);

/* Symbol: _ZN15PdrMotionDetectC1ERK12ConfigParams */
/* Demangled: PdrMotionDetect::PdrMotionDetect(ConfigParams const&) */
int _ZN15PdrMotionDetectC1ERK12ConfigParams(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN9CarAccelB5SubKF5set_tEd */
/* Demangled: CarAccelB::SubKF::set_t(double) */
int _ZN9CarAccelB5SubKF5set_tEd(void);

/* Symbol: _ZN14SimpleGyroBiasC1Ev */
/* Demangled: SimpleGyroBias::SimpleGyroBias() */
int _ZN14SimpleGyroBiasC1Ev(void);

/* Symbol: _ZN12VehBodOrient7VboLess16comp_avg_gad_varEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_gad_var(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess16comp_avg_gad_varEPNS_16stat_quat_structEd(void);

/* Symbol: _ZN12VehBodOrient8VboGdcm311reset_gdcm3Ev */
/* Demangled: VehBodOrient::VboGdcm3::reset_gdcm3() */
int _ZN12VehBodOrient8VboGdcm311reset_gdcm3Ev(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: _ZN9Pedometer7SsModel9summationERKNSt3__16vectorINS2_IdNS1_9allocatorIdEEEENS3_IS5_EEEE */
/* Demangled: Pedometer::SsModel::summation(std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&) */
int _ZN9Pedometer7SsModel9summationERKNSt3__16vectorINS2_IdNS1_9allocatorIdEEEENS3_IS5_EEEE(void);

/* Symbol: _ZN6SfSatt18comp_dcm_intensityEv */
/* Demangled: SfSatt::comp_dcm_intensity() */
int _ZN6SfSatt18comp_dcm_intensityEv(void);

/* Symbol: _ZN6UdrEkf25update_vel_with_lever_armE13sf_ned_structR6Matrix */
/* Demangled: UdrEkf::update_vel_with_lever_arm(sf_ned_struct, Matrix&) */
int _ZN6UdrEkf25update_vel_with_lever_armE13sf_ned_structR6Matrix(void);

/* Symbol: dr_variance_1 */
/* Demangled: dr_variance_1 */
extern void* dr_variance_1;

/* Symbol: _ZN15MonitorDataRateC2ERK12ConfigParams */
/* Demangled: MonitorDataRate::MonitorDataRate(ConfigParams const&) */
int _ZN15MonitorDataRateC2ERK12ConfigParams(void);

/* Symbol: _ZN6UdrEkf12get_yaw_initEv */
/* Demangled: UdrEkf::get_yaw_init() */
int _ZN6UdrEkf12get_yaw_initEv(void);

/* Symbol: _ZN8Watchdog19state_dynamic_checkEP6UdrEkfP18sf_mems_msg_structNS_11DynamicEnum11DynamicTypeE */
/* Demangled: Watchdog::state_dynamic_check(UdrEkf*, sf_mems_msg_struct*, Watchdog::DynamicEnum::DynamicType) */
int _ZN8Watchdog19state_dynamic_checkEP6UdrEkfP18sf_mems_msg_structNS_11DynamicEnum11DynamicTypeE(void);

/* Symbol: _ZN5PdrGb9ini_gbuffEv */
/* Demangled: PdrGb::ini_gbuff() */
int _ZN5PdrGb9ini_gbuffEv(void);

/* Symbol: _ZN6PdrSgbD2Ev */
/* Demangled: PdrSgb::~PdrSgb() */
int _ZN6PdrSgbD2Ev(void);

/* Symbol: _ZN11PdrMheading19driver_calib_structC2Ev */
/* Demangled: PdrMheading::driver_calib_struct::driver_calib_struct() */
int _ZN11PdrMheading19driver_calib_structC2Ev(void);

/* Symbol: _ZN6UdrEkf8modify_PENS_5PEnum5PTypeE */
/* Demangled: UdrEkf::modify_P(UdrEkf::PEnum::PType) */
int _ZN6UdrEkf8modify_PENS_5PEnum5PTypeE(void);

/* Symbol: _ZN5SfIsm11comp_sm_iqrEPKPKdi */
/* Demangled: SfIsm::comp_sm_iqr(double const* const*, int) */
int _ZN5SfIsm11comp_sm_iqrEPKPKdi(void);

/* Symbol: _ZN6UdrEkf9set_stateEPKdii */
/* Demangled: UdrEkf::set_state(double const*, int, int) */
int _ZN6UdrEkf9set_stateEPKdii(void);

/* Symbol: _ZN3UDR10set_pvt_tsEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::set_pvt_ts(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR10set_pvt_tsEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN12VehBodOrient16get_ini_less_outEv */
/* Demangled: VehBodOrient::get_ini_less_out() */
int _ZN12VehBodOrient16get_ini_less_outEv(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp20is_pseudo_continuityEv */
/* Demangled: VehBodOrient::VboGrp::is_pseudo_continuity() const */
int _ZNK12VehBodOrient6VboGrp20is_pseudo_continuityEv(void);

/* Symbol: global_count */
/* Demangled: global_count */
extern void* global_count;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN6PdrLpf15get_adv_mag_5hzEv */
/* Demangled: PdrLpf::get_adv_mag_5hz() */
int _ZN6PdrLpf15get_adv_mag_5hzEv(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN6PdrIgpD1Ev */
/* Demangled: PdrIgp::~PdrIgp() */
int _ZN6PdrIgpD1Ev(void);

/* Symbol: _ZN6PdrIsmD0Ev */
/* Demangled: PdrIsm::~PdrIsm() */
int _ZN6PdrIsmD0Ev(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN6SfSatt15imu_meas_structC1Ev */
/* Demangled: SfSatt::imu_meas_struct::imu_meas_struct() */
int _ZN6SfSatt15imu_meas_structC1Ev(void);

/* Symbol: _ZN4SfGbD1Ev */
/* Demangled: SfGb::~SfGb() */
int _ZN4SfGbD1Ev(void);

/* Symbol: _ZNK5SfLpf20get_adv_gnss_vel_auyEPd */
/* Demangled: SfLpf::get_adv_gnss_vel_auy(double*) const */
int _ZNK5SfLpf20get_adv_gnss_vel_auyEPd(void);

/* Symbol: _ZN11IntegrationC2EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE */
/* Demangled: Integration::Integration(sf_user_param_struct*, void (*)(sf_pvt_msg_struct*), void (*)(char*, int)) */
int _ZN11IntegrationC2EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE(void);

/* Symbol: _ZN7PdrSattC1Ev */
/* Demangled: PdrSatt::PdrSatt() */
int _ZN7PdrSattC1Ev(void);

/* Symbol: _ZN5SfLpf32check_icm40607_gyro_dec_num_axisEi */
/* Demangled: SfLpf::check_icm40607_gyro_dec_num_axis(int) */
int _ZN5SfLpf32check_icm40607_gyro_dec_num_axisEi(void);

/* Symbol: _ZN12ConfigParams14mapping_acc_idEPc */
/* Demangled: ConfigParams::mapping_acc_id(char*) */
int _ZN12ConfigParams14mapping_acc_idEPc(void);

/* Symbol: _ZN18SystemStateControl22upd_level_if_high_drpyERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE */
/* Demangled: SystemStateControl::upd_level_if_high_drpy(VehBodOrient::less_output_struct const&, SystemStateControl::CoarseCvbEnum::CoarseCvbType) */
int _ZN18SystemStateControl22upd_level_if_high_drpyERKN12VehBodOrient18less_output_structENS_13CoarseCvbEnum13CoarseCvbTypeE(void);

/* Symbol: _ZN11Integration23sf_read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE */
/* Demangled: Integration::sf_read_avoid_gnss_list(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN11Integration23sf_read_avoid_gnss_listERKNSt3__16vectorIdNS0_9allocatorIdEEEE(void);

/* Symbol: mpe_gyro_filter */
/* Demangled: mpe_gyro_filter */
int mpe_gyro_filter(void);

/* Symbol: _ZN15MonitorDataRate25get_sensor_available_timeEPK18sf_mems_msg_structj */
/* Demangled: MonitorDataRate::get_sensor_available_time(sf_mems_msg_struct const*, unsigned int) */
int _ZN15MonitorDataRate25get_sensor_available_timeEPK18sf_mems_msg_structj(void);

/* Symbol: _ZN11InertialAtt14est_device_fixEP18sf_mems_msg_structbR15UdrStaticDetect */
/* Demangled: InertialAtt::est_device_fix(sf_mems_msg_struct*, bool, UdrStaticDetect&) */
int _ZN11InertialAtt14est_device_fixEP18sf_mems_msg_structbR15UdrStaticDetect(void);

/* Symbol: _ZN6UdrLpf27get_icm40607_gyro_para_50hzEv */
/* Demangled: UdrLpf::get_icm40607_gyro_para_50hz() */
int _ZN6UdrLpf27get_icm40607_gyro_para_50hzEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp9alloc_grpEv */
/* Demangled: VehBodOrient::VboGrp::alloc_grp() */
int _ZN12VehBodOrient6VboGrp9alloc_grpEv(void);

/* Symbol: gyro_out_of_range */
/* Demangled: gyro_out_of_range */
extern void* gyro_out_of_range;

/* Symbol: _ZN11DataProcess27batch_handle_irregular_gnssEv */
/* Demangled: DataProcess::batch_handle_irregular_gnss() */
int _ZN11DataProcess27batch_handle_irregular_gnssEv(void);

/* Symbol: _ZN5SfIsm11meas_structC1Ev */
/* Demangled: SfIsm::meas_struct::meas_struct() */
int _ZN5SfIsm11meas_structC1Ev(void);

/* Symbol: _ZNK6UdrEkf17get_feedback_flagEv */
/* Demangled: UdrEkf::get_feedback_flag() const */
int _ZNK6UdrEkf17get_feedback_flagEv(void);

/* Symbol: _ZN18SystemStateControl25coarse_substitute_ekf_cvbERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelect */
/* Demangled: SystemStateControl::coarse_substitute_ekf_cvb(VehBodOrient::less_output_struct const&, UdrUpdTypeSelect&) */
int _ZN18SystemStateControl25coarse_substitute_ekf_cvbERKN12VehBodOrient18less_output_structER16UdrUpdTypeSelect(void);

/* Symbol: _ZN16UdrUpdTypeSelect15get_good_gnss_tEv */
/* Demangled: UdrUpdTypeSelect::get_good_gnss_t() */
int _ZN16UdrUpdTypeSelect15get_good_gnss_tEv(void);

/* Symbol: _ZN15PdrMotionDetectD2Ev */
/* Demangled: PdrMotionDetect::~PdrMotionDetect() */
int _ZN15PdrMotionDetectD2Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect17get_scenario_typeEv */
/* Demangled: UdrUpdTypeSelect::get_scenario_type() */
int _ZN16UdrUpdTypeSelect17get_scenario_typeEv(void);

/* Symbol: _ZN5PdrGbD2Ev */
/* Demangled: PdrGb::~PdrGb() */
int _ZN5PdrGbD2Ev(void);

/* Symbol: _ZN5SfWmm23MAG_AllocateModelMemoryEi */
/* Demangled: SfWmm::MAG_AllocateModelMemory(int) */
int _ZN5SfWmm23MAG_AllocateModelMemoryEi(void);

/* Symbol: _ZN9CarAccelB5SubKF6set_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE */
/* Demangled: CarAccelB::SubKF::set_sm(InertialStaticMove::ManeuverEnum::ManeuverType) */
int _ZN9CarAccelB5SubKF6set_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void);

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_structC2ERKS_ */
/* Demangled: SystemStateControl::check_cvb_dir_struct::check_cvb_dir_struct(SystemStateControl const&) */
int _ZN18SystemStateControl20check_cvb_dir_structC2ERKS_(void);

/* Symbol: is_pedometer_noise */
/* Demangled: is_pedometer_noise */
int is_pedometer_noise(void);

/* Symbol: _ZN12ConfigParams14mapping_mag_idEPc */
/* Demangled: ConfigParams::mapping_mag_id(char*) */
int _ZN12ConfigParams14mapping_mag_idEPc(void);

/* Symbol: _ZN5SfWmm29MAG_TimelyModifyMagneticModelERKNS_12MAGtype_DateEPNS_21MAGtype_MagneticModelES4_ */
/* Demangled: SfWmm::MAG_TimelyModifyMagneticModel(SfWmm::MAGtype_Date const&, SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_MagneticModel*) */
int _ZN5SfWmm29MAG_TimelyModifyMagneticModelERKNS_12MAGtype_DateEPNS_21MAGtype_MagneticModelES4_(void);

/* Symbol: _ZN3UDRD1Ev */
/* Demangled: UDR::~UDR() */
int _ZN3UDRD1Ev(void);

/* Symbol: _ZN11InertialAtt14est_roll_pitchEPdS0_ */
/* Demangled: InertialAtt::est_roll_pitch(double*, double*) */
int _ZN11InertialAtt14est_roll_pitchEPdS0_(void);

/* Symbol: _ZN6UdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_lsm6dsm_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf26set_lsm6dsm_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6UdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_lsm6dsm_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf27set_lsm6dsm_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6PdrIgp9upd_dbuffEdPKdS1_ */
/* Demangled: PdrIgp::upd_dbuff(double, double const*, double const*) */
int _ZN6PdrIgp9upd_dbuffEdPKdS1_(void);

/* Symbol: _ZN5SfWmm25MAG_GetTransverseMercatorERKNS_21MAGtype_CoordGeodeticEPNS_21MAGtype_UTMParametersE */
/* Demangled: SfWmm::MAG_GetTransverseMercator(SfWmm::MAGtype_CoordGeodetic const&, SfWmm::MAGtype_UTMParameters*) */
int _ZN5SfWmm25MAG_GetTransverseMercatorERKNS_21MAGtype_CoordGeodeticEPNS_21MAGtype_UTMParametersE(void);

/* Symbol: _ZN7PdrSatt16reset_out_statusEv */
/* Demangled: PdrSatt::reset_out_status() */
int _ZN7PdrSatt16reset_out_statusEv(void);

/* Symbol: _ZNK6Matrix13is_col_vectorEv */
/* Demangled: Matrix::is_col_vector() const */
int _ZNK6Matrix13is_col_vectorEv(void);

/* Symbol: _Z21cos_similarity_vec3_pPKdS0_ */
/* Demangled: cos_similarity_vec3_p(double const*, double const*) */
int _Z21cos_similarity_vec3_pPKdS0_(void);

/* Symbol: _ZN9CarAccelB3Rts28rauch_tung_striebel_smootherEdPKd */
/* Demangled: CarAccelB::Rts::rauch_tung_striebel_smoother(double, double const*) */
int _ZN9CarAccelB3Rts28rauch_tung_striebel_smootherEdPKd(void);

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct18comp_best_hist_cvbEv */
/* Demangled: SystemStateControl::coarse_dir_struct::comp_best_hist_cvb() */
int _ZN18SystemStateControl17coarse_dir_struct18comp_best_hist_cvbEv(void);

/* Symbol: _ZN6UdrEkf7set_v2vER6Matrix */
/* Demangled: UdrEkf::set_v2v(Matrix&) */
int _ZN6UdrEkf7set_v2vER6Matrix(void);

/* Symbol: _ZN6UdrEkf9set_sf2sfER6Matrix */
/* Demangled: UdrEkf::set_sf2sf(Matrix&) */
int _ZN6UdrEkf9set_sf2sfER6Matrix(void);

/* Symbol: _ZN14GnssAccelDecel17reset_ava_ad_infoEv */
/* Demangled: GnssAccelDecel::reset_ava_ad_info() */
int _ZN14GnssAccelDecel17reset_ava_ad_infoEv(void);

/* Symbol: _ZN18InertialStaticMoveD2Ev */
/* Demangled: InertialStaticMove::~InertialStaticMove() */
int _ZN18InertialStaticMoveD2Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect15reinit_mu_levelEv */
/* Demangled: UdrUpdTypeSelect::reinit_mu_level() */
int _ZN16UdrUpdTypeSelect15reinit_mu_levelEv(void);

/* Symbol: _ZN9CarAccelB5SubKF12set_head_varEd */
/* Demangled: CarAccelB::SubKF::set_head_var(double) */
int _ZN9CarAccelB5SubKF12set_head_varEd(void);

/* Symbol: _ZN6UdrEkf27replace_partial_udr2mnl_msgEP17sf2mnl_msg_struct */
/* Demangled: UdrEkf::replace_partial_udr2mnl_msg(sf2mnl_msg_struct*) */
int _ZN6UdrEkf27replace_partial_udr2mnl_msgEP17sf2mnl_msg_struct(void);

/* Symbol: _ZTV3UDR */
/* Demangled: vtable for UDR */
extern void* _ZTV3UDR;

/* Symbol: _ZN12VehBodOrient6VboGrp16get_buff_avg_dadEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_dad() */
int _ZN12VehBodOrient6VboGrp16get_buff_avg_dadEv(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _ZN16UdrUpdTypeSelect23reset_delay_buff_to_cvbEv */
/* Demangled: UdrUpdTypeSelect::reset_delay_buff_to_cvb() */
int _ZN16UdrUpdTypeSelect23reset_delay_buff_to_cvbEv(void);

/* Symbol: _ZN6PdrEkf10predictionEd */
/* Demangled: PdrEkf::prediction(double) */
int _ZN6PdrEkf10predictionEd(void);

/* Symbol: _ZN11PdrMheading28build_rotation_matrix_n_to_bEv */
/* Demangled: PdrMheading::build_rotation_matrix_n_to_b() */
int _ZN11PdrMheading28build_rotation_matrix_n_to_bEv(void);

/* Symbol: _ZN6Matrix11mSparseMultERS_S0_ */
/* Demangled: Matrix::mSparseMult(Matrix&, Matrix&) */
int _ZN6Matrix11mSparseMultERS_S0_(void);

/* Symbol: _Z7upd_quaPdR6Matrixd */
/* Demangled: upd_qua(double*, Matrix&, double) */
int _Z7upd_quaPdR6Matrixd(void);

/* Symbol: _ZN5SfWmm12MAGtype_DateC1Ev */
/* Demangled: SfWmm::MAGtype_Date::MAGtype_Date() */
int _ZN5SfWmm12MAGtype_DateC1Ev(void);

/* Symbol: _ZNK14SimpleGyroBias15is_dyn_gb_readyEv */
/* Demangled: SimpleGyroBias::is_dyn_gb_ready() const */
int _ZNK14SimpleGyroBias15is_dyn_gb_readyEv(void);

/* Symbol: _ZN4SfGb12gbuff_structC1Ev */
/* Demangled: SfGb::gbuff_struct::gbuff_struct() */
int _ZN4SfGb12gbuff_structC1Ev(void);

/* Symbol: _ZN11IntegrationC1EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE */
/* Demangled: Integration::Integration(sf_user_param_struct*, void (*)(sf_pvt_msg_struct*), void (*)(char*, int)) */
int _ZN11IntegrationC1EP20sf_user_param_structPFvP17sf_pvt_msg_structEPFvPciE(void);

/* Symbol: reinit_counters */
/* Demangled: reinit_counters */
int reinit_counters(void);

/* Symbol: _ZN6PdrEkf16get_gnss_fb_codeEv */
/* Demangled: PdrEkf::get_gnss_fb_code() */
int _ZN6PdrEkf16get_gnss_fb_codeEv(void);

/* Symbol: _ZN6PdrSgb14ini_sm_resultsEv */
/* Demangled: PdrSgb::ini_sm_results() */
int _ZN6PdrSgb14ini_sm_resultsEv(void);

/* Symbol: absolute_height */
/* Demangled: absolute_height */
extern void* absolute_height;

/* Symbol: mpe_get_dr_entry */
/* Demangled: mpe_get_dr_entry */
int mpe_get_dr_entry(void);

/* Symbol: _ZN6Matrix16set_tot_size_valEPd */
/* Demangled: Matrix::set_tot_size_val(double*) */
int _ZN6Matrix16set_tot_size_valEPd(void);

/* Symbol: _ZN6SfSatt16start_ekf_structC2Ev */
/* Demangled: SfSatt::start_ekf_struct::start_ekf_struct() */
int _ZN6SfSatt16start_ekf_structC2Ev(void);

/* Symbol: _ZN3UDR18set_temp_comp_flagEP18sf_mems_msg_struct */
/* Demangled: UDR::set_temp_comp_flag(sf_mems_msg_struct*) */
int _ZN3UDR18set_temp_comp_flagEP18sf_mems_msg_struct(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart8alloc_fsEv */
/* Demangled: VehBodOrient::VboFakeStart::alloc_fs() */
int _ZN12VehBodOrient12VboFakeStart8alloc_fsEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess17comp_symmetric_qqEPdS1_ */
/* Demangled: VehBodOrient::VboLess::comp_symmetric_qq(double*, double*) */
int _ZN12VehBodOrient7VboLess17comp_symmetric_qqEPdS1_(void);

/* Symbol: _Z16wgsxyz2enu_arrayPKdS0_Pd */
/* Demangled: wgsxyz2enu_array(double const*, double const*, double*) */
int _Z16wgsxyz2enu_arrayPKdS0_Pd(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN9CarAccelB5SubKF28comp_state_transition_matrixER6Matrix */
/* Demangled: CarAccelB::SubKF::comp_state_transition_matrix(Matrix&) */
int _ZN9CarAccelB5SubKF28comp_state_transition_matrixER6Matrix(void);

/* Symbol: _ZN12VehBodOrient12VboFakeStart16need_quick_startEv */
/* Demangled: VehBodOrient::VboFakeStart::need_quick_start() */
int _ZN12VehBodOrient12VboFakeStart16need_quick_startEv(void);

/* Symbol: acc_last_gps_vel */
/* Demangled: acc_last_gps_vel */
extern void* acc_last_gps_vel;

/* Symbol: _ZNK6MatrixclEi */
/* Demangled: Matrix::operator()(int) const */
int _ZNK6MatrixclEi(void);

/* Symbol: _ZN6SfSatt17state_para_structC2Ev */
/* Demangled: SfSatt::state_para_struct::state_para_struct() */
int _ZN6SfSatt17state_para_structC2Ev(void);

/* Symbol: _ZN5SfWmm21MAGtype_CoordGeodeticC2Ev */
/* Demangled: SfWmm::MAGtype_CoordGeodetic::MAGtype_CoordGeodetic() */
int _ZN5SfWmm21MAGtype_CoordGeodeticC2Ev(void);

/* Symbol: _Z17almost_less_equalddd */
/* Demangled: almost_less_equal(double, double, double) */
int _Z17almost_less_equalddd(void);

/* Symbol: _ZN9CarAccelB5SubKF11set_gad_varEd */
/* Demangled: CarAccelB::SubKF::set_gad_var(double) */
int _ZN9CarAccelB5SubKF11set_gad_varEd(void);

/* Symbol: _ZN9Pedometer7SsModel11reset_modelEv */
/* Demangled: Pedometer::SsModel::reset_model() */
int _ZN9Pedometer7SsModel11reset_modelEv(void);

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5SfWmm20MAG_GetUTMParametersEddPiPcPd */
/* Demangled: SfWmm::MAG_GetUTMParameters(double, double, int*, char*, double*) */
int _ZN5SfWmm20MAG_GetUTMParametersEddPiPcPd(void);

/* Symbol: _Z9earthratedR6Matrix */
/* Demangled: earthrate(double, Matrix&) */
int _Z9earthratedR6Matrix(void);

/* Symbol: _ZN12VehBodOrient7VboLess11comp_threshEPKdiRdS3_S3_ */
/* Demangled: VehBodOrient::VboLess::comp_thresh(double const*, int, double&, double&, double&) */
int _ZN12VehBodOrient7VboLess11comp_threshEPKdiRdS3_S3_(void);

/* Symbol: _ZN10InterpMemsD1Ev */
/* Demangled: InterpMems::~InterpMems() */
int _ZN10InterpMemsD1Ev(void);

/* Symbol: _ZN11DataProcess14get_gnss_countEv */
/* Demangled: DataProcess::get_gnss_count() */
int _ZN11DataProcess14get_gnss_countEv(void);

/* Symbol: _ZN9CarAccelB3RtsC1ERNS_5SubKFE */
/* Demangled: CarAccelB::Rts::Rts(CarAccelB::SubKF&) */
int _ZN9CarAccelB3RtsC1ERNS_5SubKFE(void);

/* Symbol: _ZN5SfLpf16adv_filt_sensorsERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct */
/* Demangled: SfLpf::adv_filt_sensors(MonitorDataRate const&, CloneNearGnss&, InterpMems&, sf_mems_msg_struct*, sf_gnss_msg_struct*&) */
int _ZN5SfLpf16adv_filt_sensorsERK15MonitorDataRateR13CloneNearGnssR10InterpMemsP18sf_mems_msg_structRP18sf_gnss_msg_struct(void);

/* Symbol: _ZNK5SfLpf16get_dec_mag_tempEPd */
/* Demangled: SfLpf::get_dec_mag_temp(double*) const */
int _ZNK5SfLpf16get_dec_mag_tempEPd(void);

/* Symbol: _ZN14SfStaticDetectD1Ev */
/* Demangled: SfStaticDetect::~SfStaticDetect() */
int _ZN14SfStaticDetectD1Ev(void);

/* Symbol: _ZN9CarAccelB5SubKF27upd_state_covariance_matrixER6MatrixS2_S2_S2_ */
/* Demangled: CarAccelB::SubKF::upd_state_covariance_matrix(Matrix&, Matrix&, Matrix&, Matrix&) */
int _ZN9CarAccelB5SubKF27upd_state_covariance_matrixER6MatrixS2_S2_S2_(void);

/* Symbol: mpe_dr_re_initialize */
/* Demangled: mpe_dr_re_initialize */
int mpe_dr_re_initialize(void);

/* Symbol: mpe_get_static_bias */
/* Demangled: mpe_get_static_bias */
int mpe_get_static_bias(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN11DataProcess16get_last_gnss_tsEv */
/* Demangled: DataProcess::get_last_gnss_ts() */
int _ZN11DataProcess16get_last_gnss_tsEv(void);

/* Symbol: _ZN18InertialStaticMove20classify_static_moveEv */
/* Demangled: InertialStaticMove::classify_static_move() */
int _ZN18InertialStaticMove20classify_static_moveEv(void);

/* Symbol: _ZN6PdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_bmi160_dec_paras_gyro(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf25set_bmi160_dec_paras_gyroEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN15MonitorDataRate15dr_track_structD2Ev */
/* Demangled: MonitorDataRate::dr_track_struct::~dr_track_struct() */
int _ZN15MonitorDataRate15dr_track_structD2Ev(void);

/* Symbol: _ZN5SfWmm5ATanHEd */
/* Demangled: SfWmm::ATanH(double) */
int _ZN5SfWmm5ATanHEd(void);

/* Symbol: _ZN18InertialStaticMove15get_sm_win_infoEPdS0_Pi */
/* Demangled: InertialStaticMove::get_sm_win_info(double*, double*, int*) */
int _ZN18InertialStaticMove15get_sm_win_infoEPdS0_Pi(void);

/* Symbol: _ZN6UdrEkf37nhc_pos_constraint_measurement_updateEv */
/* Demangled: UdrEkf::nhc_pos_constraint_measurement_update() */
int _ZN6UdrEkf37nhc_pos_constraint_measurement_updateEv(void);

/* Symbol: _ZN11PdrMheading16set_driver_calibEPK18sf_mems_msg_struct */
/* Demangled: PdrMheading::set_driver_calib(sf_mems_msg_struct const*) */
int _ZN11PdrMheading16set_driver_calibEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN5SfWmm18MAG_GetDecimalTimeEdiPKNS_21MAGtype_MagneticModelEPNS_12MAGtype_DateE */
/* Demangled: SfWmm::MAG_GetDecimalTime(double, int, SfWmm::MAGtype_MagneticModel const*, SfWmm::MAGtype_Date*) */
int _ZN5SfWmm18MAG_GetDecimalTimeEdiPKNS_21MAGtype_MagneticModelEPNS_12MAGtype_DateE(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorVel5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorVel::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorVel5R_COVE;

/* Symbol: _ZN6UdrLpf26get_bmi160_gyro_para_200hzEv */
/* Demangled: UdrLpf::get_bmi160_gyro_para_200hz() */
int _ZN6UdrLpf26get_bmi160_gyro_para_200hzEv(void);

/* Symbol: _ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorINS0_IdNS_9allocatorIdEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN11DataProcess12get_gnss_locEi */
/* Demangled: DataProcess::get_gnss_loc(int) */
int _ZN11DataProcess12get_gnss_locEi(void);

/* Symbol: _ZN5SfSgb11stat_structC1Ev */
/* Demangled: SfSgb::stat_struct::stat_struct() */
int _ZN5SfSgb11stat_structC1Ev(void);

/* Symbol: _ZN14GnssAccelDecel9set_parasEv */
/* Demangled: GnssAccelDecel::set_paras() */
int _ZN14GnssAccelDecel9set_parasEv(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBiasC2Ev */
/* Demangled: SimpleGyroBias::AlterGyroBias::AlterGyroBias() */
int _ZN14SimpleGyroBias13AlterGyroBiasC2Ev(void);

/* Symbol: worker */
/* Demangled: worker */
extern void* worker;

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN3PDRC1ERK12ConfigParams */
/* Demangled: PDR::PDR(ConfigParams const&) */
int _ZN3PDRC1ERK12ConfigParams(void);

/* Symbol: ignore_err_msg_flag */
/* Demangled: ignore_err_msg_flag */
extern void* ignore_err_msg_flag;

/* Symbol: _ZN7PdrSatt13avg_gp_structC2Ev */
/* Demangled: PdrSatt::avg_gp_struct::avg_gp_struct() */
int _ZN7PdrSatt13avg_gp_structC2Ev(void);

/* Symbol: _ZN18InertialStaticMove11comp_sm_iqrEPPdi */
/* Demangled: InertialStaticMove::comp_sm_iqr(double**, int) */
int _ZN18InertialStaticMove11comp_sm_iqrEPPdi(void);

/* Symbol: _ZN13CloneNearGnssC2Ev */
/* Demangled: CloneNearGnss::CloneNearGnss() */
int _ZN13CloneNearGnssC2Ev(void);

/* Symbol: _ZN11DataProcessC1ERK12ConfigParams */
/* Demangled: DataProcess::DataProcess(ConfigParams const&) */
int _ZN11DataProcessC1ERK12ConfigParams(void);

/* Symbol: _Z13open_log_filePKc */
/* Demangled: open_log_file(char const*) */
int _Z13open_log_filePKc(void);

/* Symbol: _ZN6UdrEkf25ekf_gb_measurement_updateEv */
/* Demangled: UdrEkf::ekf_gb_measurement_update() */
int _ZN6UdrEkf25ekf_gb_measurement_updateEv(void);

/* Symbol: _ZN18SystemStateControl29ekf_cvb_to_check_sys_fine_cvbEv */
/* Demangled: SystemStateControl::ekf_cvb_to_check_sys_fine_cvb() */
int _ZN18SystemStateControl29ekf_cvb_to_check_sys_fine_cvbEv(void);

/* Symbol: _ZNK15MonitorDataRate29is_mag_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE */
/* Demangled: MonitorDataRate::is_mag_downsampling_to_tar_dr(mpe::ModeEnum::ModeType) const */
int _ZNK15MonitorDataRate29is_mag_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE(void);

/* Symbol: _ZN6UdrEkf25update_pos_with_lever_armE13sf_llh_structR6MatrixS2_ */
/* Demangled: UdrEkf::update_pos_with_lever_arm(sf_llh_struct, Matrix&, Matrix&) */
int _ZN6UdrEkf25update_pos_with_lever_armE13sf_llh_structR6MatrixS2_(void);

/* Symbol: _ZN6PdrIgp17delay_buff_structC1Ev */
/* Demangled: PdrIgp::delay_buff_struct::delay_buff_struct() */
int _ZN6PdrIgp17delay_buff_structC1Ev(void);

/* Symbol: _Z14meter_to_knotsd */
/* Demangled: meter_to_knots(double) */
int _Z14meter_to_knotsd(void);

/* Symbol: gps_ls_heading */
/* Demangled: gps_ls_heading */
extern void* gps_ls_heading;

/* Symbol: _Z7qua2eulPdR6Matrix */
/* Demangled: qua2eul(double*, Matrix&) */
int _Z7qua2eulPdR6Matrix(void);

/* Symbol: _ZN6SfSatt17comp_gp_intensityEv */
/* Demangled: SfSatt::comp_gp_intensity() */
int _ZN6SfSatt17comp_gp_intensityEv(void);

/* Symbol: _ZN9CarAccelBD1Ev */
/* Demangled: CarAccelB::~CarAccelB() */
int _ZN9CarAccelBD1Ev(void);

/* Symbol: _ZN6SfSatt12upd_ext_feasERK6Matrix */
/* Demangled: SfSatt::upd_ext_feas(Matrix const&) */
int _ZN6SfSatt12upd_ext_feasERK6Matrix(void);

/* Symbol: _ZN5SfLpf40make_dec_available_to_false_if_not_modelEN6sensor12SensorIDEnum12SensorIDTypeE */
/* Demangled: SfLpf::make_dec_available_to_false_if_not_model(sensor::SensorIDEnum::SensorIDType) */
int _ZN5SfLpf40make_dec_available_to_false_if_not_modelEN6sensor12SensorIDEnum12SensorIDTypeE(void);

/* Symbol: _ZN7PdrSatt7upd_outEv */
/* Demangled: PdrSatt::upd_out() */
int _ZN7PdrSatt7upd_outEv(void);

/* Symbol: _ZN6Matrix9SubMatrixaSERKS_ */
/* Demangled: Matrix::SubMatrix::operator=(Matrix const&) */
int _ZN6Matrix9SubMatrixaSERKS_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN10InterpMems18reassign_mems_timeEP18sf_mems_msg_structPK18sf_gnss_msg_struct */
/* Demangled: InterpMems::reassign_mems_time(sf_mems_msg_struct*, sf_gnss_msg_struct const*) */
int _ZN10InterpMems18reassign_mems_timeEP18sf_mems_msg_structPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN6SfSatt6set_AdEv */
/* Demangled: SfSatt::set_Ad() */
int _ZN6SfSatt6set_AdEv(void);

/* Symbol: _ZN9Barometer17get_bs_reset_flagEv */
/* Demangled: Barometer::get_bs_reset_flag() */
int _ZN9Barometer17get_bs_reset_flagEv(void);

/* Symbol: _ZN6UdrLpf27get_lsm6dsm_accel_para_50hzEv */
/* Demangled: UdrLpf::get_lsm6dsm_accel_para_50hz() */
int _ZN6UdrLpf27get_lsm6dsm_accel_para_50hzEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp14mark_gad_labelEPiPNS_9VboFbEnum6FbTypeE */
/* Demangled: VehBodOrient::VboGrp::mark_gad_label(int*, VehBodOrient::VboFbEnum::FbType*) */
int _ZN12VehBodOrient6VboGrp14mark_gad_labelEPiPNS_9VboFbEnum6FbTypeE(void);

/* Symbol: _ZN5SfLpf27check_akm099xx_dec_num_axisEi */
/* Demangled: SfLpf::check_akm099xx_dec_num_axis(int) */
int _ZN5SfLpf27check_akm099xx_dec_num_axisEi(void);

/* Symbol: _ZN6SfSatt17test_pred_x_gp_gbEv */
/* Demangled: SfSatt::test_pred_x_gp_gb() */
int _ZN6SfSatt17test_pred_x_gp_gbEv(void);

/* Symbol: _ZN5SfWmmC1Ev */
/* Demangled: SfWmm::SfWmm() */
int _ZN5SfWmmC1Ev(void);

/* Symbol: _ZN5SfSgb10tol_structC2Ev */
/* Demangled: SfSgb::tol_struct::tol_struct() */
int _ZN5SfSgb10tol_structC2Ev(void);

/* Symbol: _ZN6SfSatt14out_imu_structC2Ev */
/* Demangled: SfSatt::out_imu_struct::out_imu_struct() */
int _ZN6SfSatt14out_imu_structC2Ev(void);

/* Symbol: _ZN6UdrEkf16predict_G_matrixEv */
/* Demangled: UdrEkf::predict_G_matrix() */
int _ZN6UdrEkf16predict_G_matrixEv(void);

/* Symbol: _ZN6UdrEkf22pos_measurement_updateERK13sf_llh_structPdjj */
/* Demangled: UdrEkf::pos_measurement_update(sf_llh_struct const&, double*, unsigned int, unsigned int) */
int _ZN6UdrEkf22pos_measurement_updateERK13sf_llh_structPdjj(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_ */
/* Demangled: _ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_ */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE6insertINS_11__wrap_iterIPdEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIdNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKdEES9_S9_(void);

/* Symbol: _ZN18SystemStateControl33rotate_cvb_to_update_sys_fine_cvbEv */
/* Demangled: SystemStateControl::rotate_cvb_to_update_sys_fine_cvb() */
int _ZN18SystemStateControl33rotate_cvb_to_update_sys_fine_cvbEv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: ATT_SMA_acc */
/* Demangled: ATT_SMA_acc */
extern void* ATT_SMA_acc;

/* Symbol: _ZN9Pedometer7SsModel7averageERKNSt3__16vectorIdNS1_9allocatorIdEEEE */
/* Demangled: Pedometer::SsModel::average(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN9Pedometer7SsModel7averageERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void);

/* Symbol: _ZN6SfSatt9set_ekf_zEv */
/* Demangled: SfSatt::set_ekf_z() */
int _ZN6SfSatt9set_ekf_zEv(void);

/* Symbol: _ZN18SystemStateControl20check_cvb_dir_struct18rotate_cvb_yaw_dirERK6Matrix */
/* Demangled: SystemStateControl::check_cvb_dir_struct::rotate_cvb_yaw_dir(Matrix const&) */
int _ZN18SystemStateControl20check_cvb_dir_struct18rotate_cvb_yaw_dirERK6Matrix(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN5SfSgbC2Ev */
/* Demangled: SfSgb::SfSgb() */
int _ZN5SfSgbC2Ev(void);

/* Symbol: _ZN9CarAccelB3Rts18ini_reforward_filtEv */
/* Demangled: CarAccelB::Rts::ini_reforward_filt() */
int _ZN9CarAccelB3Rts18ini_reforward_filtEv(void);

/* Symbol: _ZN9CarAccelB5SubKF20smoo_proj_vec_n_to_vER6MatrixS2_ */
/* Demangled: CarAccelB::SubKF::smoo_proj_vec_n_to_v(Matrix&, Matrix&) */
int _ZN9CarAccelB5SubKF20smoo_proj_vec_n_to_vER6MatrixS2_(void);

/* Symbol: _ZN3UDR16set_pvt_from_ekfEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::set_pvt_from_ekf(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR16set_pvt_from_ekfEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN6UdrLpf27get_bmi160_accel_para_200hzEv */
/* Demangled: UdrLpf::get_bmi160_accel_para_200hz() */
int _ZN6UdrLpf27get_bmi160_accel_para_200hzEv(void);

/* Symbol: acc_curr_mean_pitch */
/* Demangled: acc_curr_mean_pitch */
extern void* acc_curr_mean_pitch;

/* Symbol: mpe_re_initialize */
/* Demangled: mpe_re_initialize */
int mpe_re_initialize(void);

/* Symbol: _ZN4SfGb13preprocessingEPK18sf_mems_msg_struct */
/* Demangled: SfGb::preprocessing(sf_mems_msg_struct const*) */
int _ZN4SfGb13preprocessingEPK18sf_mems_msg_struct(void);

/* Symbol: _Z14close_log_filev */
/* Demangled: close_log_file() */
int _Z14close_log_filev(void);

/* Symbol: _ZNK9CarAccelB5SubKF14get_var_mag_acEv */
/* Demangled: CarAccelB::SubKF::get_var_mag_ac() const */
int _ZNK9CarAccelB5SubKF14get_var_mag_acEv(void);

/* Symbol: _ZN14GnssAccelDecel16get_gad_win_infoEPdS0_Pi */
/* Demangled: GnssAccelDecel::get_gad_win_info(double*, double*, int*) */
int _ZN14GnssAccelDecel16get_gad_win_infoEPdS0_Pi(void);

/* Symbol: _ZN6PdrEkf5get_KEv */
/* Demangled: PdrEkf::get_K() */
int _ZN6PdrEkf5get_KEv(void);

/* Symbol: _ZN11PdrMheading16dyaw_nv_v_structC1Ev */
/* Demangled: PdrMheading::dyaw_nv_v_struct::dyaw_nv_v_struct() */
int _ZN11PdrMheading16dyaw_nv_v_structC1Ev(void);

/* Symbol: _ZN9CarAccelB13upd_kf_buff_tEd */
/* Demangled: CarAccelB::upd_kf_buff_t(double) */
int _ZN9CarAccelB13upd_kf_buff_tEd(void);

/* Symbol: _ZN6UdrEkf11init_matrixEv */
/* Demangled: UdrEkf::init_matrix() */
int _ZN6UdrEkf11init_matrixEv(void);

/* Symbol: _ZN6UdrLpf26get_lsm6dsm_gyro_para_50hzEv */
/* Demangled: UdrLpf::get_lsm6dsm_gyro_para_50hz() */
int _ZN6UdrLpf26get_lsm6dsm_gyro_para_50hzEv(void);

/* Symbol: _ZN11DataProcess14get_mems_r_ptrEi */
/* Demangled: DataProcess::get_mems_r_ptr(int) */
int _ZN11DataProcess14get_mems_r_ptrEi(void);

/* Symbol: _ZN6MatrixC1EiiPKd */
/* Demangled: Matrix::Matrix(int, int, double const*) */
int _ZN6MatrixC1EiiPKd(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9SensorPos5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::SensorPos::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9SensorPos5R_COVE;

/* Symbol: _ZN6PdrEkf22mg_heading_diff_structD2Ev */
/* Demangled: PdrEkf::mg_heading_diff_struct::~mg_heading_diff_struct() */
int _ZN6PdrEkf22mg_heading_diff_structD2Ev(void);

/* Symbol: _ZN5SfLpf29set_adv_default_gnss_lpf_paraEv */
/* Demangled: SfLpf::set_adv_default_gnss_lpf_para() */
int _ZN5SfLpf29set_adv_default_gnss_lpf_paraEv(void);

/* Symbol: _ZN6Matrix7rowMultEid */
/* Demangled: Matrix::rowMult(int, double) */
int _ZN6Matrix7rowMultEid(void);

/* Symbol: _ZN6SfSatt10ekf_structC2Ev */
/* Demangled: SfSatt::ekf_struct::ekf_struct() */
int _ZN6SfSatt10ekf_structC2Ev(void);

/* Symbol: _ZN6SfSatt35protect_sf_as_gp_in_meas_cov_matrixEv */
/* Demangled: SfSatt::protect_sf_as_gp_in_meas_cov_matrix() */
int _ZN6SfSatt35protect_sf_as_gp_in_meas_cov_matrixEv(void);

/* Symbol: _Z17ascend_cmp_structPKvS0_ */
/* Demangled: ascend_cmp_struct(void const*, void const*) */
int _Z17ascend_cmp_structPKvS0_(void);

/* Symbol: _ZNK9CarAccelB5SubKF27get_state_covariance_matrixEv */
/* Demangled: CarAccelB::SubKF::get_state_covariance_matrix() const */
int _ZNK9CarAccelB5SubKF27get_state_covariance_matrixEv(void);

/* Symbol: _ZNK6UdrEkf7get_CvbEv */
/* Demangled: UdrEkf::get_Cvb() const */
int _ZNK6UdrEkf7get_CvbEv(void);

/* Symbol: _ZN14GnssAccelDecel8less_gadEPdS0_S0_S0_ */
/* Demangled: GnssAccelDecel::less_gad(double*, double*, double*, double*) */
int _ZN14GnssAccelDecel8less_gadEPdS0_S0_S0_(void);

/* Symbol: last_step_ts */
/* Demangled: last_step_ts */
extern void* last_step_ts;

/* Symbol: get_map_matching_result */
/* Demangled: get_map_matching_result */
int get_map_matching_result(void);

/* Symbol: _ZN6PdrLpf20set_adv_imu_lpf_paraEv */
/* Demangled: PdrLpf::set_adv_imu_lpf_para() */
int _ZN6PdrLpf20set_adv_imu_lpf_paraEv(void);

/* Symbol: _ZNK14SimpleGyroBias11is_gb_readyEv */
/* Demangled: SimpleGyroBias::is_gb_ready() const */
int _ZNK14SimpleGyroBias11is_gb_readyEv(void);

/* Symbol: _ZN11InertialAttC2ERK12ConfigParams */
/* Demangled: InertialAtt::InertialAtt(ConfigParams const&) */
int _ZN11InertialAttC2ERK12ConfigParams(void);

/* Symbol: _ZN14SimpleGyroBias13AlterGyroBias28comp_polyval_from_bias_tableEPdd */
/* Demangled: SimpleGyroBias::AlterGyroBias::comp_polyval_from_bias_table(double*, double) */
int _ZN14SimpleGyroBias13AlterGyroBias28comp_polyval_from_bias_tableEPdd(void);

/* Symbol: _ZN9Pedometer21update_last_step_infoEv */
/* Demangled: Pedometer::update_last_step_info() */
int _ZN9Pedometer21update_last_step_infoEv(void);

/* Symbol: _ZN15MonitorDataRate21comp_sensor_data_rateEPK18sf_mems_msg_struct */
/* Demangled: MonitorDataRate::comp_sensor_data_rate(sf_mems_msg_struct const*) */
int _ZN15MonitorDataRate21comp_sensor_data_rateEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN6UdrEkf12state_updateEP18sf_gnss_msg_structPjibib */
/* Demangled: UdrEkf::state_update(sf_gnss_msg_struct*, unsigned int*, int, bool, int, bool) */
int _ZN6UdrEkf12state_updateEP18sf_gnss_msg_structPjibib(void);

/* Symbol: _ZN14GnssAccelDecel20est_gnss_accel_decelEP18sf_mems_msg_structP18sf_gnss_msg_structRK6UdrLpf */
/* Demangled: GnssAccelDecel::est_gnss_accel_decel(sf_mems_msg_struct*, sf_gnss_msg_struct*, UdrLpf const&) */
int _ZN14GnssAccelDecel20est_gnss_accel_decelEP18sf_mems_msg_structP18sf_gnss_msg_structRK6UdrLpf(void);

/* Symbol: _ZN6PdrEkf11predict_posEd */
/* Demangled: PdrEkf::predict_pos(double) */
int _ZN6PdrEkf11predict_posEd(void);

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_structC2Ev */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::mag_caused_pos_drift_struct() */
int _ZN6PdrEkf27mag_caused_pos_drift_structC2Ev(void);

/* Symbol: _ZN5SfIsm14results_structC1Ev */
/* Demangled: SfIsm::results_struct::results_struct() */
int _ZN5SfIsm14results_structC1Ev(void);

/* Symbol: _Z14is_all_similarPKdS0_id */
/* Demangled: is_all_similar(double const*, double const*, int, double) */
int _Z14is_all_similarPKdS0_id(void);

/* Symbol: _ZN9Pedometer14get_lpf_resultERN5SfLpf12smoop_structE */
/* Demangled: Pedometer::get_lpf_result(SfLpf::smoop_struct&) */
int _ZN9Pedometer14get_lpf_resultERN5SfLpf12smoop_structE(void);

/* Symbol: _Z13inv_matrix3x3RK6MatrixRS_ */
/* Demangled: inv_matrix3x3(Matrix const&, Matrix&) */
int _Z13inv_matrix3x3RK6MatrixRS_(void);

/* Symbol: _ZN9Barometer4p2dhEdd */
/* Demangled: Barometer::p2dh(double, double) */
int _ZN9Barometer4p2dhEdd(void);

/* Symbol: _ZN9CarAccelB11run_sub_ekfEv */
/* Demangled: CarAccelB::run_sub_ekf() */
int _ZN9CarAccelB11run_sub_ekfEv(void);

/* Symbol: _ZN8WatchdogD1Ev */
/* Demangled: Watchdog::~Watchdog() */
int _ZN8WatchdogD1Ev(void);

/* Symbol: _ZN9CarAccelB18sub_kf_buff_structD1Ev */
/* Demangled: CarAccelB::sub_kf_buff_struct::~sub_kf_buff_struct() */
int _ZN9CarAccelB18sub_kf_buff_structD1Ev(void);

/* Symbol: _ZN6UdrEkf18stored_bias_structC2Eid */
/* Demangled: UdrEkf::stored_bias_struct::stored_bias_struct(int, double) */
int _ZN6UdrEkf18stored_bias_structC2Eid(void);

/* Symbol: _ZN5SfWmm14MAG_DateToYearEPNS_12MAGtype_DateE */
/* Demangled: SfWmm::MAG_DateToYear(SfWmm::MAGtype_Date*) */
int _ZN5SfWmm14MAG_DateToYearEPNS_12MAGtype_DateE(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp12is_full_buffEv */
/* Demangled: VehBodOrient::VboGrp::is_full_buff() const */
int _ZNK12VehBodOrient6VboGrp12is_full_buffEv(void);

/* Symbol: te_divide32 */
/* Demangled: te_divide32 */
int te_divide32(void);

/* Symbol: acc_curr_roll */
/* Demangled: acc_curr_roll */
extern void* acc_curr_roll;

/* Symbol: _ZN9Barometer15ini_tol_auy_heiEv */
/* Demangled: Barometer::ini_tol_auy_hei() */
int _ZN9Barometer15ini_tol_auy_heiEv(void);

/* Symbol: _ZN9CarAccelB5SubKF17dump_pred_resultsEv */
/* Demangled: CarAccelB::SubKF::dump_pred_results() */
int _ZN9CarAccelB5SubKF17dump_pred_resultsEv(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_struct13free_nw_shapeEv */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::free_nw_shape() */
int _ZN12VehBodOrient7VboLess15nw_shape_struct13free_nw_shapeEv(void);

/* Symbol: acc_curr_std_roll */
/* Demangled: acc_curr_std_roll */
extern void* acc_curr_std_roll;

/* Symbol: _ZN9Pedometer7SsModel13get_min_speedEv */
/* Demangled: Pedometer::SsModel::get_min_speed() */
int _ZN9Pedometer7SsModel13get_min_speedEv(void);

/* Symbol: _ZN9CarAccelB19reset_sync_sf_to_smEv */
/* Demangled: CarAccelB::reset_sync_sf_to_sm() */
int _ZN9CarAccelB19reset_sync_sf_to_smEv(void);

/* Symbol: _ZN6UdrEkf17predict_M_N_omegaEv */
/* Demangled: UdrEkf::predict_M_N_omega() */
int _ZN6UdrEkf17predict_M_N_omegaEv(void);

/* Symbol: _ZN6UdrEkf32update_estimate_with_measurementEPjR6Matrix */
/* Demangled: UdrEkf::update_estimate_with_measurement(unsigned int*, Matrix&) */
int _ZN6UdrEkf32update_estimate_with_measurementEPjR6Matrix(void);

/* Symbol: _ZN6PdrSgbC1Ev */
/* Demangled: PdrSgb::PdrSgb() */
int _ZN6PdrSgbC1Ev(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: vehicle_Acc */
/* Demangled: vehicle_Acc */
extern void* vehicle_Acc;

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _ZN5SfLpf17set_adv_lpf_parasEv */
/* Demangled: SfLpf::set_adv_lpf_paras() */
int _ZN5SfLpf17set_adv_lpf_parasEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void);

/* Symbol: _ZN9Pedometer7SsModel10add_sampleEddddd */
/* Demangled: Pedometer::SsModel::add_sample(double, double, double, double, double) */
int _ZN9Pedometer7SsModel10add_sampleEddddd(void);

/* Symbol: _ZN9CarAccelB5SubKF17upd_ekf_pred_timeEd */
/* Demangled: CarAccelB::SubKF::upd_ekf_pred_time(double) */
int _ZN9CarAccelB5SubKF17upd_ekf_pred_timeEd(void);

/* Symbol: _ZN6UdrEkf18predict_PHI_matrixEd */
/* Demangled: UdrEkf::predict_PHI_matrix(double) */
int _ZN6UdrEkf18predict_PHI_matrixEd(void);

/* Symbol: _ZN12VehBodOrient7VboLess15nw_shape_structD1Ev */
/* Demangled: VehBodOrient::VboLess::nw_shape_struct::~nw_shape_struct() */
int _ZN12VehBodOrient7VboLess15nw_shape_structD1Ev(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN5SfLpf19smoop_result_structD1Ev */
/* Demangled: SfLpf::smoop_result_struct::~smoop_result_struct() */
int _ZN5SfLpf19smoop_result_structD1Ev(void);

/* Symbol: _ZNK5SfLpf13get_dec_accelEPd */
/* Demangled: SfLpf::get_dec_accel(double*) const */
int _ZNK5SfLpf13get_dec_accelEPd(void);

/* Symbol: close_location_degree */
/* Demangled: close_location_degree */
extern void* close_location_degree;

/* Symbol: _ZN11DataProcess13rt_align_dataEv */
/* Demangled: DataProcess::rt_align_data() */
int _ZN11DataProcess13rt_align_dataEv(void);

/* Symbol: _Z23logically_greater_equalddd */
/* Demangled: logically_greater_equal(double, double, double) */
int _Z23logically_greater_equalddd(void);

/* Symbol: _ZN6UdrEkf17gnss_accel_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_ */
/* Demangled: UdrEkf::gnss_accel_struct::upd_past(sf_gnss_msg_struct const*, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&) */
int _ZN6UdrEkf17gnss_accel_struct8upd_pastEPK18sf_gnss_msg_structRK6MatrixS6_S6_S6_S6_S6_S6_(void);

/* Symbol: _ZN12VehBodOrient7VboLess21approximate_symmetricEPd */
/* Demangled: VehBodOrient::VboLess::approximate_symmetric(double*) */
int _ZN12VehBodOrient7VboLess21approximate_symmetricEPd(void);

/* Symbol: _ZN5SfIsm12tree_predictERKNS_11tree_structEPKdPd */
/* Demangled: SfIsm::tree_predict(SfIsm::tree_struct const&, double const*, double*) */
int _ZN5SfIsm12tree_predictERKNS_11tree_structEPKdPd(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN8WatchdogC1ERK12ConfigParams */
/* Demangled: Watchdog::Watchdog(ConfigParams const&) */
int _ZN8WatchdogC1ERK12ConfigParams(void);

/* Symbol: _ZN12VehBodOrientC2Ev */
/* Demangled: VehBodOrient::VehBodOrient() */
int _ZN12VehBodOrientC2Ev(void);

/* Symbol: _ZTV7PdrSatt */
/* Demangled: vtable for PdrSatt */
extern void* _ZTV7PdrSatt;

/* Symbol: _Z11comp_medianPdi */
/* Demangled: comp_median(double*, int) */
int _Z11comp_medianPdi(void);

/* Symbol: _ZN9BarometerC2ERK12ConfigParams */
/* Demangled: Barometer::Barometer(ConfigParams const&) */
int _ZN9BarometerC2ERK12ConfigParams(void);

/* Symbol: _ZN9CarAccelB5SubKF16upd_static_var_wEPKdS2_ */
/* Demangled: CarAccelB::SubKF::upd_static_var_w(double const*, double const*) */
int _ZN9CarAccelB5SubKF16upd_static_var_wEPKdS2_(void);

/* Symbol: _ZN5SfSgb16reset_check_statEv */
/* Demangled: SfSgb::reset_check_stat() */
int _ZN5SfSgb16reset_check_statEv(void);

/* Symbol: _Z13inv_matrix2x2RK6MatrixRS_ */
/* Demangled: inv_matrix2x2(Matrix const&, Matrix&) */
int _Z13inv_matrix2x2RK6MatrixRS_(void);

/* Symbol: _ZN18InertialStaticMove19compute_sm_featuresEPdS0_ */
/* Demangled: InertialStaticMove::compute_sm_features(double*, double*) */
int _ZN18InertialStaticMove19compute_sm_featuresEPdS0_(void);

/* Symbol: _ZN11IntegrationD2Ev */
/* Demangled: Integration::~Integration() */
int _ZN11IntegrationD2Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: Pre_Imu_smoo */
/* Demangled: Pre_Imu_smoo */
extern void* Pre_Imu_smoo;

/* Symbol: _ZN5PdrGb18copy_sgb_stable_gbEv */
/* Demangled: PdrGb::copy_sgb_stable_gb() */
int _ZN5PdrGb18copy_sgb_stable_gbEv(void);

/* Symbol: _ZN6SfSatt16meas_para_structD2Ev */
/* Demangled: SfSatt::meas_para_struct::~meas_para_struct() */
int _ZN6SfSatt16meas_para_structD2Ev(void);

/* Symbol: _ZN9Barometer15est_tol_auy_heiEv */
/* Demangled: Barometer::est_tol_auy_hei() */
int _ZN9Barometer15est_tol_auy_heiEv(void);

/* Symbol: _ZNK9CarAccelB5SubKF22set_sys_process_matrixERK6MatrixS3_S3_RS1_ */
/* Demangled: CarAccelB::SubKF::set_sys_process_matrix(Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
int _ZNK9CarAccelB5SubKF22set_sys_process_matrixERK6MatrixS3_S3_RS1_(void);

/* Symbol: _ZN6UdrEkf21ekf_main_state_structC2Ev */
/* Demangled: UdrEkf::ekf_main_state_struct::ekf_main_state_struct() */
int _ZN6UdrEkf21ekf_main_state_structC2Ev(void);

/* Symbol: get_pedometer_smd_event */
/* Demangled: get_pedometer_smd_event */
int get_pedometer_smd_event(void);

/* Symbol: _ZN5SfSgb10upd_stableEv */
/* Demangled: SfSgb::upd_stable() */
int _ZN5SfSgb10upd_stableEv(void);

/* Symbol: _Z7Cxn2eulR6MatrixS0_ */
/* Demangled: Cxn2eul(Matrix&, Matrix&) */
int _Z7Cxn2eulR6MatrixS0_(void);

/* Symbol: _ZNK14GnssAccelDecel12is_gad_readyEv */
/* Demangled: GnssAccelDecel::is_gad_ready() const */
int _ZNK14GnssAccelDecel12is_gad_readyEv(void);

/* Symbol: _ZNK6Matrix13is_row_vectorEv */
/* Demangled: Matrix::is_row_vector() const */
int _ZNK6Matrix13is_row_vectorEv(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct15comp_bound_meanEPKdiiii */
/* Demangled: CarAccelB::sf_pattern_struct::comp_bound_mean(double const*, int, int, int, int) const */
int _ZNK9CarAccelB17sf_pattern_struct15comp_bound_meanEPKdiiii(void);

/* Symbol: _ZN18SystemStateControl26new_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE */
/* Demangled: SystemStateControl::new_cvb_to_update_fine_cvb(SystemStateControl::FineCvbEnum::FineCvbType) */
int _ZN18SystemStateControl26new_cvb_to_update_fine_cvbENS_11FineCvbEnum11FineCvbTypeE(void);

/* Symbol: _ZN12VehBodOrient6VboGrpD1Ev */
/* Demangled: VehBodOrient::VboGrp::~VboGrp() */
int _ZN12VehBodOrient6VboGrpD1Ev(void);

/* Symbol: _ZN6Matrix7set_valEiid */
/* Demangled: Matrix::set_val(int, int, double) */
int _ZN6Matrix7set_valEiid(void);

/* Symbol: _ZN5PdrGbC1Ev */
/* Demangled: PdrGb::PdrGb() */
int _ZN5PdrGbC1Ev(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN9Pedometer7SsModel13find_freq_idxEd */
/* Demangled: Pedometer::SsModel::find_freq_idx(double) */
int _ZN9Pedometer7SsModel13find_freq_idxEd(void);

/* Symbol: _ZN9Pedometer7SsModelC1ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd */
/* Demangled: Pedometer::SsModel::SsModel(ConfigParams const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<double, std::__1::allocator<double> > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > const&, std::__1::vector<double, std::__1::allocator<double> > const&, double, double) */
int _ZN9Pedometer7SsModelC1ERK12ConfigParamsRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS4_6vectorIdNS8_IdEEEESH_SH_SH_RKNSD_ISF_NS8_ISF_EEEESL_SL_SH_dd(void);

/* Symbol: _ZN6UdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb */
/* Demangled: UdrLpf::set_icm40607_dec_paras_accel(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6UdrLpf28set_icm40607_dec_paras_accelEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: best_run_ax */
/* Demangled: best_run_ax */
int best_run_ax(void);

/* Symbol: dr_acc_bias_state */
/* Demangled: dr_acc_bias_state */
extern void* dr_acc_bias_state;

/* Symbol: lpf_parameter */
/* Demangled: lpf_parameter */
extern void* lpf_parameter;

/* Symbol: _ZN18SystemStateControl17coarse_dir_struct13is_coarse_dirEv */
/* Demangled: SystemStateControl::coarse_dir_struct::is_coarse_dir() */
int _ZN18SystemStateControl17coarse_dir_struct13is_coarse_dirEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp18group_inertial_dirERKN9CarAccelB13output_structE */
/* Demangled: VehBodOrient::VboGrp::group_inertial_dir(CarAccelB::output_struct const&) */
int _ZN12VehBodOrient6VboGrp18group_inertial_dirERKN9CarAccelB13output_structE(void);

/* Symbol: next_idx */
/* Demangled: next_idx */
int next_idx(void);

/* Symbol: _ZNK15MonitorDataRate29is_imu_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE */
/* Demangled: MonitorDataRate::is_imu_downsampling_to_tar_dr(mpe::ModeEnum::ModeType) const */
int _ZNK15MonitorDataRate29is_imu_downsampling_to_tar_drEN3mpe8ModeEnum8ModeTypeE(void);

/* Symbol: _ZN6PdrIsm12comp_sf_distEv */
/* Demangled: PdrIsm::comp_sf_dist() */
int _ZN6PdrIsm12comp_sf_distEv(void);

/* Symbol: mpe_get_dr_gyro_bias */
/* Demangled: mpe_get_dr_gyro_bias */
int mpe_get_dr_gyro_bias(void);

/* Symbol: _ZN5SfWmm19calculate_num_termsEi */
/* Demangled: SfWmm::calculate_num_terms(int) */
int _ZN5SfWmm19calculate_num_termsEi(void);

/* Symbol: _ZN9CarAccelB17delay_buff_structD1Ev */
/* Demangled: CarAccelB::delay_buff_struct::~delay_buff_struct() */
int _ZN9CarAccelB17delay_buff_structD1Ev(void);

/* Symbol: _ZN6UdrEkf8update_PER6MatrixS1_ */
/* Demangled: UdrEkf::update_P(Matrix&, Matrix&) */
int _ZN6UdrEkf8update_PER6MatrixS1_(void);

/* Symbol: step_detected_count */
/* Demangled: step_detected_count */
extern void* step_detected_count;

/* Symbol: _ZN6PdrEkf16ekf_fine_headingEPK18sf_gnss_msg_structii */
/* Demangled: PdrEkf::ekf_fine_heading(sf_gnss_msg_struct const*, int, int) */
int _ZN6PdrEkf16ekf_fine_headingEPK18sf_gnss_msg_structii(void);

/* Symbol: _ZN5SfIsm11comp_sm_varEPKPKdi */
/* Demangled: SfIsm::comp_sm_var(double const* const*, int) */
int _ZN5SfIsm11comp_sm_varEPKPKdi(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZNK9CarAccelB17sf_pattern_struct10tune_gammaEPKNS_18sub_kf_buff_structEPd */
/* Demangled: CarAccelB::sf_pattern_struct::tune_gamma(CarAccelB::sub_kf_buff_struct const*, double*) const */
int _ZNK9CarAccelB17sf_pattern_struct10tune_gammaEPKNS_18sub_kf_buff_structEPd(void);

/* Symbol: _ZN18InertialStaticMoveC1Ev */
/* Demangled: InertialStaticMove::InertialStaticMove() */
int _ZN18InertialStaticMoveC1Ev(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _ZN5SfLpfD1Ev */
/* Demangled: SfLpf::~SfLpf() */
int _ZN5SfLpfD1Ev(void);

/* Symbol: _ZN5SfWmm20MAG_FreeSphVarMemoryEPNS_34MAGtype_SphericalHarmonicVariablesE */
/* Demangled: SfWmm::MAG_FreeSphVarMemory(SfWmm::MAGtype_SphericalHarmonicVariables*) */
int _ZN5SfWmm20MAG_FreeSphVarMemoryEPNS_34MAGtype_SphericalHarmonicVariablesE(void);

/* Symbol: _ZN9CarAccelB5SubKF11set_sf_measEPKd */
/* Demangled: CarAccelB::SubKF::set_sf_meas(double const*) */
int _ZN9CarAccelB5SubKF11set_sf_measEPKd(void);

/* Symbol: acc_final_gps_vel */
/* Demangled: acc_final_gps_vel */
extern void* acc_final_gps_vel;

/* Symbol: gesture_ped */
/* Demangled: gesture_ped */
extern void* gesture_ped;

/* Symbol: _ZNK5SfSgb23is_not_pass_first_stageEv */
/* Demangled: SfSgb::is_not_pass_first_stage() const */
int _ZNK5SfSgb23is_not_pass_first_stageEv(void);

/* Symbol: _ZN6SfSatt9comp_innoEv */
/* Demangled: SfSatt::comp_inno() */
int _ZN6SfSatt9comp_innoEv(void);

/* Symbol: _ZN6UdrEkf13rpy_constrainEv */
/* Demangled: UdrEkf::rpy_constrain() */
int _ZN6UdrEkf13rpy_constrainEv(void);

/* Symbol: _Z15get_3d_distance13sf_llh_structS_ */
/* Demangled: get_3d_distance(sf_llh_struct, sf_llh_struct) */
int _Z15get_3d_distance13sf_llh_structS_(void);

/* Symbol: _ZN9CarAccelB5SubKF16comp_kalman_gainER6Matrix */
/* Demangled: CarAccelB::SubKF::comp_kalman_gain(Matrix&) */
int _ZN9CarAccelB5SubKF16comp_kalman_gainER6Matrix(void);

/* Symbol: _ZNK12VehBodOrient12get_cvb_infoEv */
/* Demangled: VehBodOrient::get_cvb_info() const */
int _ZNK12VehBodOrient12get_cvb_infoEv(void);

/* Symbol: _ZN11Integration13sf_algo_resetEv */
/* Demangled: Integration::sf_algo_reset() */
int _ZN11Integration13sf_algo_resetEv(void);

/* Symbol: _ZN5SfLpf31check_lsm6dsm_gyro_dec_num_axisEi */
/* Demangled: SfLpf::check_lsm6dsm_gyro_dec_num_axis(int) */
int _ZN5SfLpf31check_lsm6dsm_gyro_dec_num_axisEi(void);

/* Symbol: _ZN5SfLpf19reset_dec_availableEv */
/* Demangled: SfLpf::reset_dec_available() */
int _ZN5SfLpf19reset_dec_availableEv(void);

/* Symbol: _ZNK6MatrixclEPKiS1_ii */
/* Demangled: Matrix::operator()(int const*, int const*, int, int) const */
int _ZNK6MatrixclEPKiS1_ii(void);

/* Symbol: _ZN9CarAccelB14upd_kf_buff_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE */
/* Demangled: CarAccelB::upd_kf_buff_sm(InertialStaticMove::ManeuverEnum::ManeuverType) */
int _ZN9CarAccelB14upd_kf_buff_smEN18InertialStaticMove12ManeuverEnum12ManeuverTypeE(void);

/* Symbol: _ZN4Ttff19first_fix_mechanismEb */
/* Demangled: Ttff::first_fix_mechanism(bool) */
int _ZN4Ttff19first_fix_mechanismEb(void);

/* Symbol: _ZN5SfIsm11feas_structD1Ev */
/* Demangled: SfIsm::feas_struct::~feas_struct() */
int _ZN5SfIsm11feas_structD1Ev(void);

/* Symbol: _ZN16UdrUpdTypeSelect15get_static_infoEP18sf_gnss_msg_structiiPii */
/* Demangled: UdrUpdTypeSelect::get_static_info(sf_gnss_msg_struct*, int, int, int*, int) */
int _ZN16UdrUpdTypeSelect15get_static_infoEP18sf_gnss_msg_structiiPii(void);

/* Symbol: _Z18array3x3_to_matrixPA3_KdR6Matrix */
/* Demangled: array3x3_to_matrix(double const (*) [3], Matrix&) */
int _Z18array3x3_to_matrixPA3_KdR6Matrix(void);

/* Symbol: _ZNK9CarAccelB5SubKF17get_var_gyro_biasEv */
/* Demangled: CarAccelB::SubKF::get_var_gyro_bias() const */
int _ZNK9CarAccelB5SubKF17get_var_gyro_biasEv(void);

/* Symbol: _ZN11Integration17choose_mnl_resultERK17sf2mnl_msg_structS2_ */
/* Demangled: Integration::choose_mnl_result(sf2mnl_msg_struct const&, sf2mnl_msg_struct const&) */
int _ZN11Integration17choose_mnl_resultERK17sf2mnl_msg_structS2_(void);

/* Symbol: min */
/* Demangled: min */
int min(void);

/* Symbol: write_log_flag */
/* Demangled: write_log_flag */
extern void* write_log_flag;

/* Symbol: _ZN15MonitorDataRate11ini_indicesEv */
/* Demangled: MonitorDataRate::ini_indices() */
int _ZN15MonitorDataRate11ini_indicesEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE */
/* Demangled: UdrUpdTypeSelect::get_se(UdrUpdTypeSelect::SeEnum::SeType) */
int _ZN16UdrUpdTypeSelect6get_seENS_6SeEnum6SeTypeE(void);

/* Symbol: acc_last_gps_conf_vel */
/* Demangled: acc_last_gps_conf_vel */
extern void* acc_last_gps_conf_vel;

/* Symbol: acc_main_heading_axis */
/* Demangled: acc_main_heading_axis */
extern void* acc_main_heading_axis;

/* Symbol: dr_lla2utm */
/* Demangled: dr_lla2utm */
int dr_lla2utm(void);

/* Symbol: _ZN6SfSatt21set_default_ctrl_paraEv */
/* Demangled: SfSatt::set_default_ctrl_para() */
int _ZN6SfSatt21set_default_ctrl_paraEv(void);

/* Symbol: _ZNK9CarAccelB5SubKF6set_QkEdRK6MatrixS3_S3_S3_S3_S3_RS1_ */
/* Demangled: CarAccelB::SubKF::set_Qk(double, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix const&, Matrix&) const */
int _ZNK9CarAccelB5SubKF6set_QkEdRK6MatrixS3_S3_S3_S3_S3_RS1_(void);

/* Symbol: _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC2Ev */
/* Demangled: UdrEkf::phone_yaw_moved_caused_pos_drift_struct::phone_yaw_moved_caused_pos_drift_struct() */
int _ZN6UdrEkf39phone_yaw_moved_caused_pos_drift_structC2Ev(void);

/* Symbol: _ZN14SimpleGyroBias12gbuff_structC2Ev */
/* Demangled: SimpleGyroBias::gbuff_struct::gbuff_struct() */
int _ZN14SimpleGyroBias12gbuff_structC2Ev(void);

/* Symbol: _ZNK5SfLpf13get_adv_accelEPd */
/* Demangled: SfLpf::get_adv_accel(double*) const */
int _ZNK5SfLpf13get_adv_accelEPd(void);

/* Symbol: _ZN12VehBodOrient7VboLessD1Ev */
/* Demangled: VehBodOrient::VboLess::~VboLess() */
int _ZN12VehBodOrient7VboLessD1Ev(void);

/* Symbol: smallest_of_8_axes */
/* Demangled: smallest_of_8_axes */
int smallest_of_8_axes(void);

/* Symbol: mpe_update_dead_reckoning */
/* Demangled: mpe_update_dead_reckoning */
int mpe_update_dead_reckoning(void);

/* Symbol: _ZN6PdrEkf27mag_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct */
/* Demangled: PdrEkf::mag_caused_pos_drift_struct::upd_buff(sf_gnss_msg_struct const*) */
int _ZN6PdrEkf27mag_caused_pos_drift_struct8upd_buffEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN6SfSatt23set_gp_gb_ab_state_paraEv */
/* Demangled: SfSatt::set_gp_gb_ab_state_para() */
int _ZN6SfSatt23set_gp_gb_ab_state_paraEv(void);

/* Symbol: _ZN5SfIsm19reset_all_upd_flagsEv */
/* Demangled: SfIsm::reset_all_upd_flags() */
int _ZN5SfIsm19reset_all_upd_flagsEv(void);

/* Symbol: _Z12is_same_sizeRK6MatrixS1_ */
/* Demangled: is_same_size(Matrix const&, Matrix const&) */
int _Z12is_same_sizeRK6MatrixS1_(void);

/* Symbol: _ZN6SfSatt15upd_ext_feas_gpERK6Matrix */
/* Demangled: SfSatt::upd_ext_feas_gp(Matrix const&) */
int _ZN6SfSatt15upd_ext_feas_gpERK6Matrix(void);

/* Symbol: _ZN16UdrUpdTypeSelect12set_mu_levelEPj */
/* Demangled: UdrUpdTypeSelect::set_mu_level(unsigned int*) */
int _ZN16UdrUpdTypeSelect12set_mu_levelEPj(void);

/* Symbol: _ZN11DataProcess14update_odo_calEd */
/* Demangled: DataProcess::update_odo_cal(double) */
int _ZN11DataProcess14update_odo_calEd(void);

/* Symbol: _ZN6UdrEkf7set_a2vER6Matrix */
/* Demangled: UdrEkf::set_a2v(Matrix&) */
int _ZN6UdrEkf7set_a2vER6Matrix(void);

/* Symbol: _ZN18SystemStateControl9get_stateEv */
/* Demangled: SystemStateControl::get_state() */
int _ZN18SystemStateControl9get_stateEv(void);

/* Symbol: _ZN18InertialStaticMove11meas_structD1Ev */
/* Demangled: InertialStaticMove::meas_struct::~meas_struct() */
int _ZN18InertialStaticMove11meas_structD1Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp21esti_proba_prev_x_gadEd */
/* Demangled: VehBodOrient::VboGrp::esti_proba_prev_x_gad(double) */
int _ZN12VehBodOrient6VboGrp21esti_proba_prev_x_gadEd(void);

/* Symbol: Imu_orig */
/* Demangled: Imu_orig */
extern void* Imu_orig;

/* Symbol: _ZN6PdrLpfD0Ev */
/* Demangled: PdrLpf::~PdrLpf() */
int _ZN6PdrLpfD0Ev(void);

/* Symbol: _ZN15MonitorDataRateD2Ev */
/* Demangled: MonitorDataRate::~MonitorDataRate() */
int _ZN15MonitorDataRateD2Ev(void);

/* Symbol: _ZN6SfSatt11reset_p_dcmEv */
/* Demangled: SfSatt::reset_p_dcm() */
int _ZN6SfSatt11reset_p_dcmEv(void);

/* Symbol: _ZN14GnssAccelDecel15gad_buff_structC2Ev */
/* Demangled: GnssAccelDecel::gad_buff_struct::gad_buff_struct() */
int _ZN14GnssAccelDecel15gad_buff_structC2Ev(void);

/* Symbol: _ZN11PdrMheadingD2Ev */
/* Demangled: PdrMheading::~PdrMheading() */
int _ZN11PdrMheadingD2Ev(void);

/* Symbol: _Z18close_archive_filev */
/* Demangled: close_archive_file() */
int _Z18close_archive_filev(void);

/* Symbol: _ZN15MonitorDataRate15dr_track_structC1Ev */
/* Demangled: MonitorDataRate::dr_track_struct::dr_track_struct() */
int _ZN15MonitorDataRate15dr_track_structC1Ev(void);

/* Symbol: _ZN9CarAccelB5SubKF10upd_var_sfEPKd */
/* Demangled: CarAccelB::SubKF::upd_var_sf(double const*) */
int _ZN9CarAccelB5SubKF10upd_var_sfEPKd(void);

/* Symbol: force_timeout_flag */
/* Demangled: force_timeout_flag */
extern void* force_timeout_flag;

/* Symbol: _ZN15MonitorDataRate7ini_mdrEv */
/* Demangled: MonitorDataRate::ini_mdr() */
int _ZN15MonitorDataRate7ini_mdrEv(void);

/* Symbol: _ZN6UdrEkf17R_UNIT_MATRIX_COVE */
/* Demangled: UdrEkf::R_UNIT_MATRIX_COV */
extern void* _ZN6UdrEkf17R_UNIT_MATRIX_COVE;

/* Symbol: _ZN13CloneNearGnss16use_nearest_gnssERP18sf_gnss_msg_struct */
/* Demangled: CloneNearGnss::use_nearest_gnss(sf_gnss_msg_struct*&) */
int _ZN13CloneNearGnss16use_nearest_gnssERP18sf_gnss_msg_struct(void);

/* Symbol: _ZN6Matrix4initEii */
/* Demangled: Matrix::init(int, int) */
int _ZN6Matrix4initEii(void);

/* Symbol: _Z5norm2Pdi */
/* Demangled: norm2(double*, int) */
int _Z5norm2Pdi(void);

/* Symbol: linear_ACC */
/* Demangled: linear_ACC */
extern void* linear_ACC;

/* Symbol: _ZN15PdrMotionDetect11get_gravityEPd */
/* Demangled: PdrMotionDetect::get_gravity(double*) */
int _ZN15PdrMotionDetect11get_gravityEPd(void);

/* Symbol: _ZN5SfLpf30check_bmi160_gyro_dec_num_axisEi */
/* Demangled: SfLpf::check_bmi160_gyro_dec_num_axis(int) */
int _ZN5SfLpf30check_bmi160_gyro_dec_num_axisEi(void);

/* Symbol: _ZN6PdrEkf18ekf_coarse_headingEiii */
/* Demangled: PdrEkf::ekf_coarse_heading(int, int, int) */
int _ZN6PdrEkf18ekf_coarse_headingEiii(void);

/* Symbol: _ZN16UdrUpdTypeSelect23alloc_delay_buff_to_cvbEv */
/* Demangled: UdrUpdTypeSelect::alloc_delay_buff_to_cvb() */
int _ZN16UdrUpdTypeSelect23alloc_delay_buff_to_cvbEv(void);

/* Symbol: _ZN7PdrSatt10out_structC1Ev */
/* Demangled: PdrSatt::out_struct::out_struct() */
int _ZN7PdrSatt10out_structC1Ev(void);

/* Symbol: _ZNK5SfLpf11get_dec_magEPd */
/* Demangled: SfLpf::get_dec_mag(double*) const */
int _ZNK5SfLpf11get_dec_magEPd(void);

/* Symbol: _ZN6UdrEkf19push_ekf_main_stateEPNS_21ekf_main_state_structE */
/* Demangled: UdrEkf::push_ekf_main_state(UdrEkf::ekf_main_state_struct*) */
int _ZN6UdrEkf19push_ekf_main_stateEPNS_21ekf_main_state_structE(void);

/* Symbol: _ZNK14SimpleGyroBias13get_gyro_biasEPd */
/* Demangled: SimpleGyroBias::get_gyro_bias(double*) const */
int _ZNK14SimpleGyroBias13get_gyro_biasEPd(void);

/* Symbol: _ZN6MatrixC1Eii */
/* Demangled: Matrix::Matrix(int, int) */
int _ZN6MatrixC1Eii(void);

/* Symbol: _ZN6PdrIsm10comp_w_varEv */
/* Demangled: PdrIsm::comp_w_var() */
int _ZN6PdrIsm10comp_w_varEv(void);

/* Symbol: _ZN5SfLpf12dec_filt_magEPK18sf_mems_msg_struct */
/* Demangled: SfLpf::dec_filt_mag(sf_mems_msg_struct const*) */
int _ZN5SfLpf12dec_filt_magEPK18sf_mems_msg_struct(void);

/* Symbol: _ZN9CarAccelB13reset_cab_outEv */
/* Demangled: CarAccelB::reset_cab_out() */
int _ZN9CarAccelB13reset_cab_outEv(void);

/* Symbol: _ZNK18InertialStaticMove12get_sm_labelEv */
/* Demangled: InertialStaticMove::get_sm_label() const */
int _ZNK18InertialStaticMove12get_sm_labelEv(void);

/* Symbol: _ZN6UdrEkf24pitch_measurement_updateEv */
/* Demangled: UdrEkf::pitch_measurement_update() */
int _ZN6UdrEkf24pitch_measurement_updateEv(void);

/* Symbol: _ZN16UdrUpdTypeSelect21set_delay_time_to_cvbEv */
/* Demangled: UdrUpdTypeSelect::set_delay_time_to_cvb() */
int _ZN16UdrUpdTypeSelect21set_delay_time_to_cvbEv(void);

/* Symbol: _ZN16PdrUpdTypeSelectD1Ev */
/* Demangled: PdrUpdTypeSelect::~PdrUpdTypeSelect() */
int _ZN16PdrUpdTypeSelectD1Ev(void);

/* Symbol: _ZN3PDR14get_pvt_resultEv */
/* Demangled: PDR::get_pvt_result() */
int _ZN3PDR14get_pvt_resultEv(void);

/* Symbol: _ZN5SfIsmD2Ev */
/* Demangled: SfIsm::~SfIsm() */
int _ZN5SfIsmD2Ev(void);

/* Symbol: _ZN15PdrMotionDetect20is_gravity_availableEv */
/* Demangled: PdrMotionDetect::is_gravity_available() */
int _ZN15PdrMotionDetect20is_gravity_availableEv(void);

/* Symbol: _ZN5SfSgb21esti_robust_gyro_biasEv */
/* Demangled: SfSgb::esti_robust_gyro_bias() */
int _ZN5SfSgb21esti_robust_gyro_biasEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_INIT_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticAtt::R_INIT_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticAtt10R_INIT_COVE;

/* Symbol: _ZN6UdrEkf25predict_position_estimateEd */
/* Demangled: UdrEkf::predict_position_estimate(double) */
int _ZN6UdrEkf25predict_position_estimateEd(void);

/* Symbol: local_max */
/* Demangled: local_max */
extern void* local_max;

/* Symbol: _Z9comp_meanPKdi */
/* Demangled: comp_mean(double const*, int) */
int _Z9comp_meanPKdi(void);

/* Symbol: _ZN6PdrEkf24upd_mg_heading_diff_buffEdd */
/* Demangled: PdrEkf::upd_mg_heading_diff_buff(double, double) */
int _ZN6PdrEkf24upd_mg_heading_diff_buffEdd(void);

/* Symbol: _ZN15MonitorDataRate24clean_all_cfg_reset_flagEv */
/* Demangled: MonitorDataRate::clean_all_cfg_reset_flag() */
int _ZN15MonitorDataRate24clean_all_cfg_reset_flagEv(void);

/* Symbol: _ZNK6SfSatt25is_test_turn_on_pred_onlyEv */
/* Demangled: SfSatt::is_test_turn_on_pred_only() const */
int _ZNK6SfSatt25is_test_turn_on_pred_onlyEv(void);

/* Symbol: _ZN9CarAccelB3Rts14vec_q_to_mat_qEiiRK6Matrix */
/* Demangled: CarAccelB::Rts::vec_q_to_mat_q(int, int, Matrix const&) */
int _ZN9CarAccelB3Rts14vec_q_to_mat_qEiiRK6Matrix(void);

/* Symbol: _ZN9CarAccelB5SubKF7set_gsdEd */
/* Demangled: CarAccelB::SubKF::set_gsd(double) */
int _ZN9CarAccelB5SubKF7set_gsdEd(void);

/* Symbol: _ZN6UdrEkf22vel_measurement_updateERK13sf_ned_structPdjj */
/* Demangled: UdrEkf::vel_measurement_update(sf_ned_struct const&, double*, unsigned int, unsigned int) */
int _ZN6UdrEkf22vel_measurement_updateERK13sf_ned_structPdjj(void);

/* Symbol: _ZN6UdrLpf28get_lsm6dsm_accel_para_200hzEv */
/* Demangled: UdrLpf::get_lsm6dsm_accel_para_200hz() */
int _ZN6UdrLpf28get_lsm6dsm_accel_para_200hzEv(void);

/* Symbol: v3_noise_majority_vote */
/* Demangled: v3_noise_majority_vote */
int v3_noise_majority_vote(void);

/* Symbol: _ZN9CarAccelB17sf_pattern_structC2Ev */
/* Demangled: CarAccelB::sf_pattern_struct::sf_pattern_struct() */
int _ZN9CarAccelB17sf_pattern_structC2Ev(void);

/* Symbol: set_pedometer_transition */
/* Demangled: set_pedometer_transition */
int set_pedometer_transition(void);

/* Symbol: dr_lat_ref */
/* Demangled: dr_lat_ref */
extern void* dr_lat_ref;

/* Symbol: _ZN6PdrIgp20esti_imu_grav_proj_bERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE */
/* Demangled: PdrIgp::esti_imu_grav_proj_b(MonitorDataRate const&, sf_mems_msg_struct const*, SfIsm::results_struct const&, SfSgb::results_struct const&) */
int _ZN6PdrIgp20esti_imu_grav_proj_bERK15MonitorDataRatePK18sf_mems_msg_structRKN5SfIsm14results_structERKN5SfSgb14results_structE(void);

/* Symbol: _Z10eul2CxyCyxR6MatrixS0_S0_ */
/* Demangled: eul2CxyCyx(Matrix&, Matrix&, Matrix&) */
int _Z10eul2CxyCyxR6MatrixS0_S0_(void);

/* Symbol: _ZN9CarAccelB25construct_rotation_matrixEPdS0_R6MatrixS2_ */
/* Demangled: CarAccelB::construct_rotation_matrix(double*, double*, Matrix&, Matrix&) */
int _ZN9CarAccelB25construct_rotation_matrixEPdS0_R6MatrixS2_(void);

/* Symbol: _Z19get_3d_distance_sep13sf_llh_structS_ */
/* Demangled: get_3d_distance_sep(sf_llh_struct, sf_llh_struct) */
int _Z19get_3d_distance_sep13sf_llh_structS_(void);

/* Symbol: get_pedometer_best_set */
/* Demangled: get_pedometer_best_set */
int get_pedometer_best_set(void);

/* Symbol: _ZN9CarAccelB17sf_pattern_struct9fit_3_ptsEPKNS_18sub_kf_buff_structE */
/* Demangled: CarAccelB::sf_pattern_struct::fit_3_pts(CarAccelB::sub_kf_buff_struct const*) */
int _ZN9CarAccelB17sf_pattern_struct9fit_3_ptsEPKNS_18sub_kf_buff_structE(void);

/* Symbol: _ZN6UdrEkf30sf_as_gamma_measurement_updateEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::sf_as_gamma_measurement_update(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf30sf_as_gamma_measurement_updateEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN15UdrStaticDetectC1ERK12ConfigParams */
/* Demangled: UdrStaticDetect::UdrStaticDetect(ConfigParams const&) */
int _ZN15UdrStaticDetectC1ERK12ConfigParams(void);

/* Symbol: _ZN16UdrUpdTypeSelect13set_first_locEP6UdrEkf */
/* Demangled: UdrUpdTypeSelect::set_first_loc(UdrEkf*) */
int _ZN16UdrUpdTypeSelect13set_first_locEP6UdrEkf(void);

/* Symbol: _ZN12VehBodOrient6VboGrp18get_buff_avg_dsd2dEv */
/* Demangled: VehBodOrient::VboGrp::get_buff_avg_dsd2d() */
int _ZN12VehBodOrient6VboGrp18get_buff_avg_dsd2dEv(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5SfLpf16gnss_heading_lpfERNS_19smoop_result_structEPKdRKNS_12smoop_structE */
/* Demangled: SfLpf::gnss_heading_lpf(SfLpf::smoop_result_struct&, double const*, SfLpf::smoop_struct const&) */
int _ZN5SfLpf16gnss_heading_lpfERNS_19smoop_result_structEPKdRKNS_12smoop_structE(void);

/* Symbol: _Z4mEyeRK6Matrix */
/* Demangled: mEye(Matrix const&) */
int _Z4mEyeRK6Matrix(void);

/* Symbol: _ZN6Matrix5cMultEd */
/* Demangled: Matrix::cMult(double) */
int _ZN6Matrix5cMultEd(void);

/* Symbol: _Z4mEyei */
/* Demangled: mEye(int) */
int _Z4mEyei(void);

/* Symbol: _ZN14SimpleGyroBiasC2Ev */
/* Demangled: SimpleGyroBias::SimpleGyroBias() */
int _ZN14SimpleGyroBiasC2Ev(void);

/* Symbol: pedometer_dsp_norm */
/* Demangled: pedometer_dsp_norm */
int pedometer_dsp_norm(void);

/* Symbol: dr_state */
/* Demangled: dr_state */
extern void* dr_state;

/* Symbol: _ZN9Pedometer7SsModel20update_default_modelEv */
/* Demangled: Pedometer::SsModel::update_default_model() */
int _ZN9Pedometer7SsModel20update_default_modelEv(void);

/* Symbol: _Z18rounding_to_xdigitPdi */
/* Demangled: rounding_to_xdigit(double*, int) */
int _Z18rounding_to_xdigitPdi(void);

/* Symbol: _ZN9CarAccelB5SubKF20upd_static_grav_projEPKd */
/* Demangled: CarAccelB::SubKF::upd_static_grav_proj(double const*) */
int _ZN9CarAccelB5SubKF20upd_static_grav_projEPKd(void);

/* Symbol: acc_final_delta_vel */
/* Demangled: acc_final_delta_vel */
extern void* acc_final_delta_vel;

/* Symbol: mpe_update_altitude */
/* Demangled: mpe_update_altitude */
int mpe_update_altitude(void);

/* Symbol: _ZN6UdrEkf16get_state_changeEi */
/* Demangled: UdrEkf::get_state_change(int) */
int _ZN6UdrEkf16get_state_changeEi(void);

/* Symbol: _ZN6PdrEkf14get_valid_flagEv */
/* Demangled: PdrEkf::get_valid_flag() */
int _ZN6PdrEkf14get_valid_flagEv(void);

/* Symbol: _ZN5SfIsm12comp_sm_distEPKdS1_ */
/* Demangled: SfIsm::comp_sm_dist(double const*, double const*) */
int _ZN5SfIsm12comp_sm_distEPKdS1_(void);

/* Symbol: _ZN18SystemStateControl24check_and_upd_coarse_cvbER6UdrEkf */
/* Demangled: SystemStateControl::check_and_upd_coarse_cvb(UdrEkf&) */
int _ZN18SystemStateControl24check_and_upd_coarse_cvbER6UdrEkf(void);

/* Symbol: _ZN9Pedometer13get_step_infoEv */
/* Demangled: Pedometer::get_step_info() */
int _ZN9Pedometer13get_step_infoEv(void);

/* Symbol: _ZN11DataProcess21sensor_value_in_rangeEdd */
/* Demangled: DataProcess::sensor_value_in_range(double, double) */
int _ZN11DataProcess21sensor_value_in_rangeEdd(void);

/* Symbol: _ZN6SfSatt28upd_skew_mat_of_angular_rateEv */
/* Demangled: SfSatt::upd_skew_mat_of_angular_rate() */
int _ZN6SfSatt28upd_skew_mat_of_angular_rateEv(void);

/* Symbol: _ZN6SfSatt29upd_skew_mat_of_gp_componentsEv */
/* Demangled: SfSatt::upd_skew_mat_of_gp_components() */
int _ZN6SfSatt29upd_skew_mat_of_gp_componentsEv(void);

/* Symbol: _ZN9CarAccelB5SubKF16reset_accel_biasEv */
/* Demangled: CarAccelB::SubKF::reset_accel_bias() */
int _ZN9CarAccelB5SubKF16reset_accel_biasEv(void);

/* Symbol: _ZN6UdrEkf16restore_attitudeEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::restore_attitude(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf16restore_attitudeEPK18sf_gnss_msg_struct(void);

/* Symbol: dr_acc_bias_state_1 */
/* Demangled: dr_acc_bias_state_1 */
extern void* dr_acc_bias_state_1;

/* Symbol: _ZN6PdrEkf22mg_heading_diff_structC1Ev */
/* Demangled: PdrEkf::mg_heading_diff_struct::mg_heading_diff_struct() */
int _ZN6PdrEkf22mg_heading_diff_structC1Ev(void);

/* Symbol: _ZN5SfSgb13stable_structC1Ev */
/* Demangled: SfSgb::stable_struct::stable_struct() */
int _ZN5SfSgb13stable_structC1Ev(void);

/* Symbol: _ZmidRK6Matrix */
/* Demangled: operator-(double, Matrix const&) */
int _ZmidRK6Matrix(void);

/* Symbol: _ZN15MonitorDataRate12ini_ava_listEv */
/* Demangled: MonitorDataRate::ini_ava_list() */
int _ZN15MonitorDataRate12ini_ava_listEv(void);

/* Symbol: _ZNK6SfSatt21is_test_ekf_model_errEv */
/* Demangled: SfSatt::is_test_ekf_model_err() const */
int _ZNK6SfSatt21is_test_ekf_model_errEv(void);

/* Symbol: _ZN9CarAccelB5SubKF18reset_p_accel_biasEv */
/* Demangled: CarAccelB::SubKF::reset_p_accel_bias() */
int _ZN9CarAccelB5SubKF18reset_p_accel_biasEv(void);

/* Symbol: _ZN6UdrEkf16restore_positionEPK18sf_gnss_msg_struct */
/* Demangled: UdrEkf::restore_position(sf_gnss_msg_struct const*) */
int _ZN6UdrEkf16restore_positionEPK18sf_gnss_msg_struct(void);

/* Symbol: _ZN11InertialAtt19update_acc_mean_varE24sf_uncalib_sensor_struct */
/* Demangled: InertialAtt::update_acc_mean_var(sf_uncalib_sensor_struct) */
int _ZN11InertialAtt19update_acc_mean_varE24sf_uncalib_sensor_struct(void);

/* Symbol: _ZN6PdrIsmD1Ev */
/* Demangled: PdrIsm::~PdrIsm() */
int _ZN6PdrIsmD1Ev(void);

/* Symbol: _ZN6PdrIgpD2Ev */
/* Demangled: PdrIgp::~PdrIgp() */
int _ZN6PdrIgpD2Ev(void);

/* Symbol: _ZN5SfLpf22get_default_accel_paraEv */
/* Demangled: SfLpf::get_default_accel_para() */
int _ZN5SfLpf22get_default_accel_paraEv(void);

/* Symbol: _ZN6SfSatt15imu_meas_structC2Ev */
/* Demangled: SfSatt::imu_meas_struct::imu_meas_struct() */
int _ZN6SfSatt15imu_meas_structC2Ev(void);

/* Symbol: _ZN6SfSatt17comp_ab_intensityEv */
/* Demangled: SfSatt::comp_ab_intensity() */
int _ZN6SfSatt17comp_ab_intensityEv(void);

/* Symbol: _ZN6SfSatt21upd_ctrl_para_tot_lenEv */
/* Demangled: SfSatt::upd_ctrl_para_tot_len() */
int _ZN6SfSatt21upd_ctrl_para_tot_lenEv(void);

/* Symbol: _ZN5SfWmm26MAG_SecVarSummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE */
/* Demangled: SfWmm::MAG_SecVarSummationSpecial(SfWmm::MAGtype_MagneticModel*, SfWmm::MAGtype_SphericalHarmonicVariables const&, SfWmm::MAGtype_CoordSpherical const&, SfWmm::MAGtype_MagneticResults*) */
int _ZN5SfWmm26MAG_SecVarSummationSpecialEPNS_21MAGtype_MagneticModelERKNS_34MAGtype_SphericalHarmonicVariablesERKNS_22MAGtype_CoordSphericalEPNS_23MAGtype_MagneticResultsE(void);

/* Symbol: _ZN9CarAccelB5SubKF8set_dgadEd */
/* Demangled: CarAccelB::SubKF::set_dgad(double) */
int _ZN9CarAccelB5SubKF8set_dgadEd(void);

/* Symbol: _ZN16UdrUpdTypeSelectD1Ev */
/* Demangled: UdrUpdTypeSelect::~UdrUpdTypeSelect() */
int _ZN16UdrUpdTypeSelectD1Ev(void);

/* Symbol: _ZN18SystemStateControl17comp_cos_val_rp_yERKN12VehBodOrient18less_output_structEPdS4_ */
/* Demangled: SystemStateControl::comp_cos_val_rp_y(VehBodOrient::less_output_struct const&, double*, double*) */
int _ZN18SystemStateControl17comp_cos_val_rp_yERKN12VehBodOrient18less_output_structEPdS4_(void);

/* Symbol: dynamic_mode_latch */
/* Demangled: dynamic_mode_latch */
extern void* dynamic_mode_latch;

/* Symbol: _ZN6PdrLpf16get_adv_gnss_1hzEv */
/* Demangled: PdrLpf::get_adv_gnss_1hz() */
int _ZN6PdrLpf16get_adv_gnss_1hzEv(void);

/* Symbol: _ZTV15UdrStaticDetect */
/* Demangled: vtable for UdrStaticDetect */
extern void* _ZTV15UdrStaticDetect;

/* Symbol: _ZN4SfGbD2Ev */
/* Demangled: SfGb::~SfGb() */
int _ZN4SfGbD2Ev(void);

/* Symbol: _ZN12VehBodOrient6VboGrp8free_grpEv */
/* Demangled: VehBodOrient::VboGrp::free_grp() */
int _ZN12VehBodOrient6VboGrp8free_grpEv(void);

/* Symbol: Array4x4_Invert */
/* Demangled: Array4x4_Invert */
int Array4x4_Invert(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj(void);

/* Symbol: _ZN9PedometerC1ERK12ConfigParams */
/* Demangled: Pedometer::Pedometer(ConfigParams const&) */
int _ZN9PedometerC1ERK12ConfigParams(void);

/* Symbol: _ZN7PdrSattC2Ev */
/* Demangled: PdrSatt::PdrSatt() */
int _ZN7PdrSattC2Ev(void);

/* Symbol: mpe_get_fusion_mode */
/* Demangled: mpe_get_fusion_mode */
int mpe_get_fusion_mode(void);

/* Symbol: _Z18mov_wei_sample_varPdS_PKdS1_S1_dddi */
/* Demangled: mov_wei_sample_var(double*, double*, double const*, double const*, double const*, double, double, double, int) */
int _Z18mov_wei_sample_varPdS_PKdS1_S1_dddi(void);

/* Symbol: _ZN9Barometer19altitude_correctionEP18sf_gnss_msg_struct */
/* Demangled: Barometer::altitude_correction(sf_gnss_msg_struct*) */
int _ZN9Barometer19altitude_correctionEP18sf_gnss_msg_struct(void);

/* Symbol: _ZN3UDR22publish_udr_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct */
/* Demangled: UDR::publish_udr_pvt_result(sf_gnss_msg_struct*, sf_mems_msg_struct*) */
int _ZN3UDR22publish_udr_pvt_resultEP18sf_gnss_msg_structP18sf_mems_msg_struct(void);

/* Symbol: _ZN12VehBodOrient7VboLess14det_a_nb_b_dirERKNS_6VboGrpEjj */
/* Demangled: VehBodOrient::VboLess::det_a_nb_b_dir(VehBodOrient::VboGrp const&, unsigned int, unsigned int) */
int _ZN12VehBodOrient7VboLess14det_a_nb_b_dirERKNS_6VboGrpEjj(void);

/* Symbol: gyr_last_static_temp */
/* Demangled: gyr_last_static_temp */
extern void* gyr_last_static_temp;

/* Symbol: _ZN6SfSatt13set_gyro_biasEPKdS1_S1_ */
/* Demangled: SfSatt::set_gyro_bias(double const*, double const*, double const*) */
int _ZN6SfSatt13set_gyro_biasEPKdS1_S1_(void);

/* Symbol: _ZN5SfIsm11meas_structC2Ev */
/* Demangled: SfIsm::meas_struct::meas_struct() */
int _ZN5SfIsm11meas_structC2Ev(void);

/* Symbol: _ZN9Barometer18set_pre_sps_rds_tsEv */
/* Demangled: Barometer::set_pre_sps_rds_ts() */
int _ZN9Barometer18set_pre_sps_rds_tsEv(void);

/* Symbol: _ZN6SfSatt12set_imu_measEdPKdS1_ */
/* Demangled: SfSatt::set_imu_meas(double, double const*, double const*) */
int _ZN6SfSatt12set_imu_measEdPKdS1_(void);

/* Symbol: _ZN9Pedometer7SsModel16total_model_sizeEv */
/* Demangled: Pedometer::SsModel::total_model_size() */
int _ZN9Pedometer7SsModel16total_model_sizeEv(void);

/* Symbol: _ZN11DataProcess16batch_preprocessEv */
/* Demangled: DataProcess::batch_preprocess() */
int _ZN11DataProcess16batch_preprocessEv(void);

/* Symbol: _ZN12VehBodOrient6VboGrp29guess_forward_backward_by_gadEPd */
/* Demangled: VehBodOrient::VboGrp::guess_forward_backward_by_gad(double*) */
int _ZN12VehBodOrient6VboGrp29guess_forward_backward_by_gadEPd(void);

/* Symbol: _ZN3PDR14get_mnl_resultEv */
/* Demangled: PDR::get_mnl_result() */
int _ZN3PDR14get_mnl_resultEv(void);

/* Symbol: _ZN5SfLpf12smoop_structD1Ev */
/* Demangled: SfLpf::smoop_struct::~smoop_struct() */
int _ZN5SfLpf12smoop_structD1Ev(void);

/* Symbol: _ZN6SfSatt12upd_P1_P2_P3Ev */
/* Demangled: SfSatt::upd_P1_P2_P3() */
int _ZN6SfSatt12upd_P1_P2_P3Ev(void);

/* Symbol: _Z20logically_less_equalddd */
/* Demangled: logically_less_equal(double, double, double) */
int _Z20logically_less_equalddd(void);

/* Symbol: _ZN9CarAccelB5SubKF10set_w_measEPKd */
/* Demangled: CarAccelB::SubKF::set_w_meas(double const*) */
int _ZN9CarAccelB5SubKF10set_w_measEPKd(void);

/* Symbol: _ZN12VehBodOrient7VboLess15est_q_based_cvbERS_RNS_6VboGrpERNS_8VboGdcm3E */
/* Demangled: VehBodOrient::VboLess::est_q_based_cvb(VehBodOrient&, VehBodOrient::VboGrp&, VehBodOrient::VboGdcm3&) */
int _ZN12VehBodOrient7VboLess15est_q_based_cvbERS_RNS_6VboGrpERNS_8VboGdcm3E(void);

/* Symbol: dr_bias_state_1 */
/* Demangled: dr_bias_state_1 */
extern void* dr_bias_state_1;

/* Symbol: _ZN6SfSatt17set_gp_componentsEPKd */
/* Demangled: SfSatt::set_gp_components(double const*) */
int _ZN6SfSatt17set_gp_componentsEPKd(void);

/* Symbol: _Z22upd_smoo_while_initialRN5SfLpf12smoop_structEPKd */
/* Demangled: upd_smoo_while_initial(SfLpf::smoop_struct&, double const*) */
int _Z22upd_smoo_while_initialRN5SfLpf12smoop_structEPKd(void);

/* Symbol: _ZNK15MonitorDataRate12copy_indicesEv */
/* Demangled: MonitorDataRate::copy_indices() const */
int _ZNK15MonitorDataRate12copy_indicesEv(void);

/* Symbol: _ZN6UdrLpf17get_adv_gyro_50hzEv */
/* Demangled: UdrLpf::get_adv_gyro_50hz() */
int _ZN6UdrLpf17get_adv_gyro_50hzEv(void);

/* Symbol: _ZNK5SfLpf16get_adv_gnss_llaEPd */
/* Demangled: SfLpf::get_adv_gnss_lla(double*) const */
int _ZNK5SfLpf16get_adv_gnss_llaEPd(void);

/* Symbol: _ZN5SfWmm21MAG_readMagneticModelEPNS_21MAGtype_MagneticModelE */
/* Demangled: SfWmm::MAG_readMagneticModel(SfWmm::MAGtype_MagneticModel*) */
int _ZN5SfWmm21MAG_readMagneticModelEPNS_21MAGtype_MagneticModelE(void);

/* Symbol: _ZN3UDRD2Ev */
/* Demangled: UDR::~UDR() */
int _ZN3UDRD2Ev(void);

/* Symbol: _ZNK12VehBodOrient6VboGrp22get_select_t_from_buffEj */
/* Demangled: VehBodOrient::VboGrp::get_select_t_from_buff(unsigned int) const */
int _ZNK12VehBodOrient6VboGrp22get_select_t_from_buffEj(void);

/* Symbol: _Z15sf_str_to_timerdiP14sf_time_struct */
/* Demangled: sf_str_to_timer(double, int, sf_time_struct*) */
int _Z15sf_str_to_timerdiP14sf_time_struct(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: acc_final_static_roll */
/* Demangled: acc_final_static_roll */
extern void* acc_final_static_roll;

/* Symbol: _ZN6PdrEkf5get_PEv */
/* Demangled: PdrEkf::get_P() */
int _ZN6PdrEkf5get_PEv(void);

/* Symbol: _ZN6PdrEkf7set_insEPdii */
/* Demangled: PdrEkf::set_ins(double*, int, int) */
int _ZN6PdrEkf7set_insEPdii(void);

/* Symbol: _ZN5SfSgb19run_three_stage_sgbEdPKdd */
/* Demangled: SfSgb::run_three_stage_sgb(double, double const*, double) */
int _ZN5SfSgb19run_three_stage_sgbEdPKdd(void);

/* Symbol: _ZN6PdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb */
/* Demangled: PdrLpf::set_akm099xx_dec_paras_mag(int, double, int, SfLpf::smoop_struct&, bool&) */
int _ZN6PdrLpf26set_akm099xx_dec_paras_magEidiRN5SfLpf12smoop_structERb(void);

/* Symbol: _ZN6Matrix4zeroEv */
/* Demangled: Matrix::zero() */
int _ZN6Matrix4zeroEv(void);

/* Symbol: _ZN6SfSatt22upd_state_para_tot_lenEv */
/* Demangled: SfSatt::upd_state_para_tot_len() */
int _ZN6SfSatt22upd_state_para_tot_lenEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum9StaticAtt5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::StaticAtt::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum9StaticAtt5R_COVE;

/* Symbol: _ZN18InertialStaticMove15get_sm_tar_feasEPd */
/* Demangled: InertialStaticMove::get_sm_tar_feas(double*) */
int _ZN18InertialStaticMove15get_sm_tar_feasEPd(void);

/* Symbol: _ZN12VehBodOrient7VboLess22comp_avg_centripetal_aEPNS_16stat_quat_structEd */
/* Demangled: VehBodOrient::VboLess::comp_avg_centripetal_a(VehBodOrient::stat_quat_struct*, double) */
int _ZN12VehBodOrient7VboLess22comp_avg_centripetal_aEPNS_16stat_quat_structEd(void);

/* Symbol: _ZN5SfLpf29reset_dec_when_hub_dr_changesERK15MonitorDataRate */
/* Demangled: SfLpf::reset_dec_when_hub_dr_changes(MonitorDataRate const&) */
int _ZN5SfLpf29reset_dec_when_hub_dr_changesERK15MonitorDataRate(void);

/* Symbol: _Z12comp_abs_maxPdi */
/* Demangled: comp_abs_max(double*, int) */
int _Z12comp_abs_maxPdi(void);

/* Symbol: _ZNK9CarAccelB5SubKF16get_q_accel_biasEv */
/* Demangled: CarAccelB::SubKF::get_q_accel_bias() const */
int _ZNK9CarAccelB5SubKF16get_q_accel_biasEv(void);

/* Symbol: _ZN6UdrEkf10UpdLevEnum7GNSSAtt5R_COVE */
/* Demangled: UdrEkf::UpdLevEnum::GNSSAtt::R_COV */
extern void* _ZN6UdrEkf10UpdLevEnum7GNSSAtt5R_COVE;

__END_DECLS

#endif /* BEGONIA_RE_LIBDR_H */
