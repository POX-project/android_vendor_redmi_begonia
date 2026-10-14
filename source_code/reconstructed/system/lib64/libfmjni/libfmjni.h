/*
 * Reverse-Engineered ABI Specification for: libfmjni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfmjni.so
 */

#ifndef BEGONIA_RE_LIBFMJNI_H
#define BEGONIA_RE_LIBFMJNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z14FMR_Pre_Searchi */
/* Demangled: FMR_Pre_Search(int) */
int _Z14FMR_Pre_Searchi(void);

/* Symbol: _Z18FMR_Restore_Searchi */
/* Demangled: FMR_Restore_Search(int) */
int _Z18FMR_Restore_Searchi(void);

/* Symbol: _Z11readRdsBlerP7_JNIEnvP8_jobject */
/* Demangled: readRdsBler(_JNIEnv*, _jobject*) */
int _Z11readRdsBlerP7_JNIEnvP8_jobject(void);

/* Symbol: _Z4tuneP7_JNIEnvP8_jobjectf */
/* Demangled: tune(_JNIEnv*, _jobject*, float) */
int _Z4tuneP7_JNIEnvP8_jobjectf(void);

/* Symbol: _Z5emcmdP7_JNIEnvP8_jobjectP12_jshortArray */
/* Demangled: emcmd(_JNIEnv*, _jobject*, _jshortArray*) */
int _Z5emcmdP7_JNIEnvP8_jobjectP12_jshortArray(void);

/* Symbol: _Z11COM_get_ptyiP14RDSData_StructPh */
/* Demangled: COM_get_pty(int, RDSData_Struct*, unsigned char*) */
int _Z11COM_get_ptyiP14RDSData_StructPh(void);

/* Symbol: _Z18COM_restore_searchi */
/* Demangled: COM_restore_search(int) */
int _Z18COM_restore_searchi(void);

/* Symbol: _Z15FMR_deactive_taiPt */
/* Demangled: FMR_deactive_ta(int, unsigned short*) */
int _Z15FMR_deactive_taiPt(void);

/* Symbol: _Z6setRdsP7_JNIEnvP8_jobjecth */
/* Demangled: setRds(_JNIEnv*, _jobject*, unsigned char) */
int _Z6setRdsP7_JNIEnvP8_jobjecth(void);

/* Symbol: _Z7setMuteP7_JNIEnvP8_jobjecth */
/* Demangled: setMute(_JNIEnv*, _jobject*, unsigned char) */
int _Z7setMuteP7_JNIEnvP8_jobjecth(void);

/* Symbol: _Z9getLrTextP7_JNIEnvP8_jobject */
/* Demangled: getLrText(_JNIEnv*, _jobject*) */
int _Z9getLrTextP7_JNIEnvP8_jobject(void);

/* Symbol: _Z13COM_active_afiP14RDSData_StructP11CUST_cfg_dsttPt */
/* Demangled: COM_active_af(int, RDSData_Struct*, CUST_cfg_ds*, unsigned short, unsigned short, unsigned short*) */
int _Z13COM_active_afiP14RDSData_StructP11CUST_cfg_dsttPt(void);

/* Symbol: _Z10FMR_get_rtiPPhPi */
/* Demangled: FMR_get_rt(int, unsigned char**, int*) */
int _Z10FMR_get_rtiPPhPi(void);

/* Symbol: _Z17FMR_scan_ChannelsiPtPiithh */
/* Demangled: FMR_scan_Channels(int, unsigned short*, int*, int, unsigned short, unsigned char, unsigned char) */
int _Z17FMR_scan_ChannelsiPtPiithh(void);

/* Symbol: _Z24COM_set_search_thresholdiii */
/* Demangled: COM_set_search_threshold(int, int, int) */
int _Z24COM_set_search_thresholdiii(void);

/* Symbol: _Z12COM_open_devPKcPi */
/* Demangled: COM_open_dev(char const*, int*) */
int _Z12COM_open_devPKcPi(void);

/* Symbol: _Z15COM_get_hw_infoiP10fm_hw_info */
/* Demangled: COM_get_hw_info(int, fm_hw_info*) */
int _Z15COM_get_hw_infoiP10fm_hw_info(void);

/* Symbol: _Z19FMR_turn_on_off_rdsii */
/* Demangled: FMR_turn_on_off_rds(int, int) */
int _Z19FMR_turn_on_off_rdsii(void);

/* Symbol: _Z9powerDownP7_JNIEnvP8_jobjecti */
/* Demangled: powerDown(_JNIEnv*, _jobject*, int) */
int _Z9powerDownP7_JNIEnvP8_jobjecti(void);

/* Symbol: _Z18getHardwareVersionP7_JNIEnvP8_jobject */
/* Demangled: getHardwareVersion(_JNIEnv*, _jobject*) */
int _Z18getHardwareVersionP7_JNIEnvP8_jobject(void);

/* Symbol: _Z9getchipidP7_JNIEnvP8_jobject */
/* Demangled: getchipid(_JNIEnv*, _jobject*) */
int _Z9getchipidP7_JNIEnvP8_jobject(void);

/* Symbol: pfmr_data */
/* Demangled: pfmr_data */
extern void* pfmr_data;

/* Symbol: _Z4seekP7_JNIEnvP8_jobjectfh */
/* Demangled: seek(_JNIEnv*, _jobject*, float, unsigned char) */
int _Z4seekP7_JNIEnvP8_jobjectfh(void);

/* Symbol: _Z9getAFListP7_JNIEnvP8_jobject */
/* Demangled: getAFList(_JNIEnv*, _jobject*) */
int _Z9getAFListP7_JNIEnvP8_jobject(void);

/* Symbol: _Z16COM_is_dese_chanii */
/* Demangled: COM_is_dese_chan(int, int) */
int _Z16COM_is_dese_chanii(void);

/* Symbol: _Z19COM_full_cqi_loggeriP17fm_full_cqi_log_t */
/* Demangled: COM_full_cqi_logger(int, fm_full_cqi_log_t*) */
int _Z19COM_full_cqi_loggeriP17fm_full_cqi_log_t(void);

/* Symbol: _Z10FMR_pwr_upii */
/* Demangled: FMR_pwr_up(int, int) */
int _Z10FMR_pwr_upii(void);

/* Symbol: _Z15CUST_update_cfgP11CUST_cfg_dsi */
/* Demangled: CUST_update_cfg(CUST_cfg_ds*, int) */
int _Z15CUST_update_cfgP11CUST_cfg_dsi(void);

/* Symbol: _Z10deactiveTAP7_JNIEnvP8_jobject */
/* Demangled: deactiveTA(_JNIEnv*, _jobject*) */
int _Z10deactiveTAP7_JNIEnvP8_jobject(void);

/* Symbol: _Z7emsetthP7_JNIEnvP8_jobjectii */
/* Demangled: emsetth(_JNIEnv*, _jobject*, int, int) */
int _Z7emsetthP7_JNIEnvP8_jobjectii(void);

/* Symbol: _Z7openDevP7_JNIEnvP8_jobject */
/* Demangled: openDev(_JNIEnv*, _jobject*) */
int _Z7openDevP7_JNIEnvP8_jobject(void);

/* Symbol: _Z16COM_get_badratioiPi */
/* Demangled: COM_get_badratio(int, int*) */
int _Z16COM_get_badratioiPi(void);

/* Symbol: _Z12FMR_get_rssiiPi */
/* Demangled: FMR_get_rssi(int, int*) */
int _Z12FMR_get_rssiiPi(void);

/* Symbol: _Z6getECCP7_JNIEnvP8_jobject */
/* Demangled: getECC(_JNIEnv*, _jobject*) */
int _Z6getECCP7_JNIEnvP8_jobject(void);

/* Symbol: _Z8closeDevP7_JNIEnvP8_jobject */
/* Demangled: closeDev(_JNIEnv*, _jobject*) */
int _Z8closeDevP7_JNIEnvP8_jobject(void);

/* Symbol: _Z10COM_get_psiP14RDSData_StructPPhPi */
/* Demangled: COM_get_ps(int, RDSData_Struct*, unsigned char**, int*) */
int _Z10COM_get_psiP14RDSData_StructPPhPi(void);

/* Symbol: _Z12COM_get_rssiiPi */
/* Demangled: COM_get_rssi(int, int*) */
int _Z12COM_get_rssiiPi(void);

/* Symbol: _Z17COM_desense_checkiii */
/* Demangled: COM_desense_check(int, int, int) */
int _Z17COM_desense_checkiii(void);

/* Symbol: _Z10FMR_get_piiPt */
/* Demangled: FMR_get_pi(int, unsigned short*) */
int _Z10FMR_get_piiPt(void);

/* Symbol: _Z13FMR_active_afitPt */
/* Demangled: FMR_active_af(int, unsigned short, unsigned short*) */
int _Z13FMR_active_afitPt(void);

/* Symbol: _Z15COM_deactive_taiP14RDSData_StructitPtS1_ */
/* Demangled: COM_deactive_ta(int, RDSData_Struct*, int, unsigned short, unsigned short*, unsigned short*) */
int _Z15COM_deactive_taiP14RDSData_StructitPtS1_(void);

/* Symbol: _Z18COM_get_seek_spacev */
/* Demangled: COM_get_seek_space() */
int _Z18COM_get_seek_spacev(void);

/* Symbol: _Z18COM_set_stereomonoii */
/* Demangled: COM_set_stereomono(int, int) */
int _Z18COM_set_stereomonoii(void);

/* Symbol: _Z13FMR_active_taiPt */
/* Demangled: FMR_active_ta(int, unsigned short*) */
int _Z13FMR_active_taiPt(void);

/* Symbol: _Z10FMR_seterri */
/* Demangled: FMR_seterr(int) */
int _Z10FMR_seterri(void);

/* Symbol: _Z20FMR_is_rdsrx_supportiPi */
/* Demangled: FMR_is_rdsrx_support(int, int*) */
int _Z20FMR_is_rdsrx_supportiPi(void);

/* Symbol: _Z8FMR_seekiiiPi */
/* Demangled: FMR_seek(int, int, int, int*) */
int _Z8FMR_seekiiiPi(void);

/* Symbol: _Z12readCapArrayP7_JNIEnvP8_jobject */
/* Demangled: readCapArray(_JNIEnv*, _jobject*) */
int _Z12readCapArrayP7_JNIEnvP8_jobject(void);

/* Symbol: _Z16COM_get_caparrayiPi */
/* Demangled: COM_get_caparray(int, int*) */
int _Z16COM_get_caparrayiPi(void);

/* Symbol: _Z11FMR_get_ecciPh */
/* Demangled: FMR_get_ecc(int, unsigned char*) */
int _Z11FMR_get_ecciPh(void);

/* Symbol: _Z17FMR_read_rds_dataiPt */
/* Demangled: FMR_read_rds_data(int, unsigned short*) */
int _Z17FMR_read_rds_dataiPt(void);

/* Symbol: _Z13isFMPoweredUpP7_JNIEnvP8_jobject */
/* Demangled: isFMPoweredUp(_JNIEnv*, _jobject*) */
int _Z13isFMPoweredUpP7_JNIEnvP8_jobject(void);

/* Symbol: _Z11COM_get_ecciP14RDSData_StructPh */
/* Demangled: COM_get_ecc(int, RDSData_Struct*, unsigned char*) */
int _Z11COM_get_ecciP14RDSData_StructPh(void);

/* Symbol: _Z10FMR_get_psiPPhPi */
/* Demangled: FMR_get_ps(int, unsigned char**, int*) */
int _Z10FMR_get_psiPPhPi(void);

/* Symbol: _Z11FMR_get_ptyiPh */
/* Demangled: FMR_get_pty(int, unsigned char*) */
int _Z11FMR_get_ptyiPh(void);

/* Symbol: _Z12FMR_get_cfgsi */
/* Demangled: FMR_get_cfgs(int) */
int _Z12FMR_get_cfgsi(void);

/* Symbol: _Z16FMR_chk_cfg_datai */
/* Demangled: FMR_chk_cfg_data(int) */
int _Z16FMR_chk_cfg_datai(void);

/* Symbol: _Z16FMR_get_caparrayiPi */
/* Demangled: FMR_get_caparray(int, int*) */
int _Z16FMR_get_caparrayiPi(void);

/* Symbol: _Z18FMR_DensenseDetectiti */
/* Demangled: FMR_DensenseDetect(int, unsigned short, int) */
int _Z18FMR_DensenseDetectiti(void);

/* Symbol: _Z20FMR_NoiseFloorDetectP7fm_booliPi */
/* Demangled: FMR_NoiseFloorDetect(fm_bool*, int, int*) */
int _Z20FMR_NoiseFloorDetectP7fm_booliPi(void);

/* Symbol: _Z18COM_get_stereomonoiPi */
/* Demangled: COM_get_stereomono(int, int*) */
int _Z18COM_get_stereomonoiPi(void);

/* Symbol: _Z16FMR_seek_ChanneliiiiiiiPiS_ */
/* Demangled: FMR_seek_Channel(int, int, int, int, int, int, int, int*, int*) */
int _Z16FMR_seek_ChanneliiiiiiiPiS_(void);

/* Symbol: _Z5getPsP7_JNIEnvP8_jobject */
/* Demangled: getPs(_JNIEnv*, _jobject*) */
int _Z5getPsP7_JNIEnvP8_jobject(void);

/* Symbol: _Z8COM_tuneiii */
/* Demangled: COM_tune(int, int, int) */
int _Z8COM_tuneiii(void);

/* Symbol: _Z13switchAntennaP7_JNIEnvP8_jobjecti */
/* Demangled: switchAntenna(_JNIEnv*, _jobject*, int) */
int _Z13switchAntennaP7_JNIEnvP8_jobjecti(void);

/* Symbol: _Z18FMR_SevereDensenseti */
/* Demangled: FMR_SevereDensense(unsigned short, int) */
int _Z18FMR_SevereDensenseti(void);

/* Symbol: _Z8FMR_tuneii */
/* Demangled: FMR_tune(int, int) */
int _Z8FMR_tuneii(void);

/* Symbol: _Z10stereoMonoP7_JNIEnvP8_jobject */
/* Demangled: stereoMono(_JNIEnv*, _jobject*) */
int _Z10stereoMonoP7_JNIEnvP8_jobject(void);

/* Symbol: _Z8activeTAP7_JNIEnvP8_jobject */
/* Demangled: activeTA(_JNIEnv*, _jobject*) */
int _Z8activeTAP7_JNIEnvP8_jobject(void);

/* Symbol: _Z14COM_pre_searchi */
/* Demangled: COM_pre_search(int) */
int _Z14COM_pre_searchi(void);

/* Symbol: _Z20COM_is_rdsrx_supportiPi */
/* Demangled: COM_is_rdsrx_support(int, int*) */
int _Z20COM_is_rdsrx_supportiPi(void);

/* Symbol: _Z13FMR_stop_scani */
/* Demangled: FMR_stop_scan(int) */
int _Z13FMR_stop_scani(void);

/* Symbol: _Z10COM_get_rtiP14RDSData_StructPPhPi */
/* Demangled: COM_get_rt(int, RDSData_Struct*, unsigned char**, int*) */
int _Z10COM_get_rtiP14RDSData_StructPPhPi(void);

/* Symbol: _Z12COM_set_muteii */
/* Demangled: COM_set_mute(int, int) */
int _Z12COM_set_muteii(void);

/* Symbol: _Z17COM_read_rds_dataiP14RDSData_StructPt */
/* Demangled: COM_read_rds_data(int, RDSData_Struct*, unsigned short*) */
int _Z17COM_read_rds_dataiP14RDSData_StructPt(void);

/* Symbol: _Z8activeAfP7_JNIEnvP8_jobject */
/* Demangled: activeAf(_JNIEnv*, _jobject*) */
int _Z8activeAfP7_JNIEnvP8_jobject(void);

/* Symbol: _Z8readRssiP7_JNIEnvP8_jobject */
/* Demangled: readRssi(_JNIEnv*, _jobject*) */
int _Z8readRssiP7_JNIEnvP8_jobject(void);

/* Symbol: _Z12COM_pwr_downii */
/* Demangled: COM_pwr_down(int, int) */
int _Z12COM_pwr_downii(void);

/* Symbol: _Z11COM_get_cqiiiPci */
/* Demangled: COM_get_cqi(int, int, char*, int) */
int _Z11COM_get_cqiiiPci(void);

/* Symbol: _Z12CUST_get_cfgP11CUST_cfg_ds */
/* Demangled: CUST_get_cfg(CUST_cfg_ds*) */
int _Z12CUST_get_cfgP11CUST_cfg_ds(void);

/* Symbol: _Z12FMR_open_devi */
/* Demangled: FMR_open_dev(int) */
int _Z12FMR_open_devi(void);

/* Symbol: _Z17FM_interface_initP10fm_cbk_tbl */
/* Demangled: FM_interface_init(fm_cbk_tbl*) */
int _Z17FM_interface_initP10fm_cbk_tbl(void);

/* Symbol: _Z18FMR_set_stereomonoii */
/* Demangled: FMR_set_stereomono(int, int) */
int _Z18FMR_set_stereomonoii(void);

/* Symbol: _Z15COM_is_fm_pwrupiPi */
/* Demangled: COM_is_fm_pwrup(int, int*) */
int _Z15COM_is_fm_pwrupiPi(void);

/* Symbol: _Z11FMR_EMSetTHiii */
/* Demangled: FMR_EMSetTH(int, int, int) */
int _Z11FMR_EMSetTHiii(void);

/* Symbol: _Z12FMR_set_muteii */
/* Demangled: FMR_set_mute(int, int) */
int _Z12FMR_set_muteii(void);

/* Symbol: _Z8FMR_initv */
/* Demangled: FMR_init() */
int _Z8FMR_initv(void);

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: _Z6getPTYP7_JNIEnvP8_jobject */
/* Demangled: getPTY(_JNIEnv*, _jobject*) */
int _Z6getPTYP7_JNIEnvP8_jobject(void);

/* Symbol: _Z12FMR_pwr_downii */
/* Demangled: FMR_pwr_down(int, int) */
int _Z12FMR_pwr_downii(void);

/* Symbol: fmr_data */
/* Demangled: fmr_data */
extern void* fmr_data;

/* Symbol: _Z7powerUpP7_JNIEnvP8_jobjectf */
/* Demangled: powerUp(_JNIEnv*, _jobject*, float) */
int _Z7powerUpP7_JNIEnvP8_jobjectf(void);

/* Symbol: _Z8autoScanP7_JNIEnvP8_jobject */
/* Demangled: autoScan(_JNIEnv*, _jobject*) */
int _Z8autoScanP7_JNIEnvP8_jobject(void);

/* Symbol: _Z10COM_pwr_upiii */
/* Demangled: COM_pwr_up(int, int, int) */
int _Z10COM_pwr_upiii(void);

/* Symbol: _Z19COM_turn_on_off_rdsii */
/* Demangled: COM_turn_on_off_rds(int, int) */
int _Z19COM_turn_on_off_rdsii(void);

/* Symbol: _Z10FMR_strerrv */
/* Demangled: FMR_strerr() */
int _Z10FMR_strerrv(void);

/* Symbol: _Z14FMR_ana_switchii */
/* Demangled: FMR_ana_switch(int, int) */
int _Z14FMR_ana_switchii(void);

/* Symbol: _Z15FMR_is_fm_pwrupiPi */
/* Demangled: FMR_is_fm_pwrup(int, int*) */
int _Z15FMR_is_fm_pwrupiPi(void);

/* Symbol: _Z7readRdsP7_JNIEnvP8_jobject */
/* Demangled: readRds(_JNIEnv*, _jobject*) */
int _Z7readRdsP7_JNIEnvP8_jobject(void);

/* Symbol: _Z13COM_close_devi */
/* Demangled: COM_close_dev(int) */
int _Z13COM_close_devi(void);

/* Symbol: _Z14COM_ana_switchii */
/* Demangled: COM_ana_switch(int, int) */
int _Z14COM_ana_switchii(void);

/* Symbol: _Z18FMR_get_stereomonoiPi */
/* Demangled: FMR_get_stereomono(int, int*) */
int _Z18FMR_get_stereomonoiPi(void);

/* Symbol: _Z5getPIP7_JNIEnvP8_jobject */
/* Demangled: getPI(_JNIEnv*, _jobject*) */
int _Z5getPIP7_JNIEnvP8_jobject(void);

/* Symbol: _Z10COM_get_piiP14RDSData_StructPt */
/* Demangled: COM_get_pi(int, RDSData_Struct*, unsigned short*) */
int _Z10COM_get_piiP14RDSData_StructPt(void);

/* Symbol: _Z15COM_get_chip_idiPi */
/* Demangled: COM_get_chip_id(int, int*) */
int _Z15COM_get_chip_idiPi(void);

/* Symbol: _Z16FMR_get_badratioiPi */
/* Demangled: FMR_get_badratio(int, int*) */
int _Z16FMR_get_badratioiPi(void);

/* Symbol: _Z12isRdsSupportP7_JNIEnvP8_jobject */
/* Demangled: isRdsSupport(_JNIEnv*, _jobject*) */
int _Z12isRdsSupportP7_JNIEnvP8_jobject(void);

/* Symbol: _Z15FMR_get_hw_infoiPPiS_ */
/* Demangled: FMR_get_hw_info(int, int**, int*) */
int _Z15FMR_get_hw_infoiPPiS_(void);

/* Symbol: _Z8FMR_scaniPtPi */
/* Demangled: FMR_scan(int, unsigned short*, int*) */
int _Z8FMR_scaniPtPi(void);

/* Symbol: _Z8stopScanP7_JNIEnvP8_jobject */
/* Demangled: stopScan(_JNIEnv*, _jobject*) */
int _Z8stopScanP7_JNIEnvP8_jobject(void);

/* Symbol: _Z17COM_change_stringPhi */
/* Demangled: COM_change_string(unsigned char*, int) */
int _Z17COM_change_stringPhi(void);

/* Symbol: _Z8COM_seekiPiiii */
/* Demangled: COM_seek(int, int*, int, int, int) */
int _Z8COM_seekiPiiii(void);

/* Symbol: _Z13FMR_close_devi */
/* Demangled: FMR_close_dev(int) */
int _Z13FMR_close_devi(void);

/* Symbol: _Z15FMR_get_chip_idiPi */
/* Demangled: FMR_get_chip_id(int, int*) */
int _Z15FMR_get_chip_idiPi(void);

/* Symbol: _Z17FMR_EM_CQI_loggerit */
/* Demangled: FMR_EM_CQI_logger(int, unsigned short) */
int _Z17FMR_EM_CQI_loggerit(void);

/* Symbol: _Z13setStereoMonoP7_JNIEnvP8_jobjecth */
/* Demangled: setStereoMono(_JNIEnv*, _jobject*, unsigned char) */
int _Z13setStereoMonoP7_JNIEnvP8_jobjecth(void);

/* Symbol: _Z13COM_active_taiP14RDSData_StructitPtS1_ */
/* Demangled: COM_active_ta(int, RDSData_Struct*, int, unsigned short, unsigned short*, unsigned short*) */
int _Z13COM_active_taiP14RDSData_StructitPtS1_(void);

/* Symbol: _Z18COM_Soft_Mute_TuneiP18fm_softmute_tune_t */
/* Demangled: COM_Soft_Mute_Tune(int, fm_softmute_tune_t*) */
int _Z18COM_Soft_Mute_TuneiP18fm_softmute_tune_t(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFMJNI_H */
