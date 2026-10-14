/*
 * Reverse-Engineered Source for: libfmjni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfmjni"

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
#include "libfmjni.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_FM "/dev/fm"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_FM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_FM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_FM, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: FMR_Pre_Search(int) */
extern "C" __attribute__((visibility("default"))) int _Z14FMR_Pre_Searchi(void) {
    ALOGD("_Z14FMR_Pre_Searchi() called");
    return 0;
}

/* Demangled: FMR_Restore_Search(int) */
extern "C" __attribute__((visibility("default"))) int _Z18FMR_Restore_Searchi(void) {
    ALOGD("_Z18FMR_Restore_Searchi() called");
    return 0;
}

/* Demangled: readRdsBler(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z11readRdsBlerP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z11readRdsBlerP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: tune(_JNIEnv*, _jobject*, float) */
extern "C" __attribute__((visibility("default"))) int _Z4tuneP7_JNIEnvP8_jobjectf(void) {
    ALOGD("_Z4tuneP7_JNIEnvP8_jobjectf() called");
    return 0;
}

/* Demangled: emcmd(_JNIEnv*, _jobject*, _jshortArray*) */
extern "C" __attribute__((visibility("default"))) int _Z5emcmdP7_JNIEnvP8_jobjectP12_jshortArray(void) {
    ALOGD("_Z5emcmdP7_JNIEnvP8_jobjectP12_jshortArray() called");
    return 0;
}

/* Demangled: COM_get_pty(int, RDSData_Struct*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z11COM_get_ptyiP14RDSData_StructPh(void) {
    ALOGD("_Z11COM_get_ptyiP14RDSData_StructPh() called");
    return 0;
}

/* Demangled: COM_restore_search(int) */
extern "C" __attribute__((visibility("default"))) int _Z18COM_restore_searchi(void) {
    ALOGD("_Z18COM_restore_searchi() called");
    return 0;
}

/* Demangled: FMR_deactive_ta(int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z15FMR_deactive_taiPt(void) {
    ALOGD("_Z15FMR_deactive_taiPt() called");
    return 0;
}

/* Demangled: setRds(_JNIEnv*, _jobject*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z6setRdsP7_JNIEnvP8_jobjecth(void) {
    ALOGD("_Z6setRdsP7_JNIEnvP8_jobjecth() called");
    return 0;
}

/* Demangled: setMute(_JNIEnv*, _jobject*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z7setMuteP7_JNIEnvP8_jobjecth(void) {
    ALOGD("_Z7setMuteP7_JNIEnvP8_jobjecth() called");
    return 0;
}

/* Demangled: getLrText(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z9getLrTextP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z9getLrTextP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_active_af(int, RDSData_Struct*, CUST_cfg_ds*, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z13COM_active_afiP14RDSData_StructP11CUST_cfg_dsttPt(void) {
    ALOGD("_Z13COM_active_afiP14RDSData_StructP11CUST_cfg_dsttPt() called");
    return 0;
}

/* Demangled: FMR_get_rt(int, unsigned char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_get_rtiPPhPi(void) {
    ALOGD("_Z10FMR_get_rtiPPhPi() called");
    return 0;
}

/* Demangled: FMR_scan_Channels(int, unsigned short*, int*, int, unsigned short, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z17FMR_scan_ChannelsiPtPiithh(void) {
    ALOGD("_Z17FMR_scan_ChannelsiPtPiithh() called");
    return 0;
}

/* Demangled: COM_set_search_threshold(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z24COM_set_search_thresholdiii(void) {
    ALOGD("_Z24COM_set_search_thresholdiii() called");
    return 0;
}

/* Demangled: COM_open_dev(char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z12COM_open_devPKcPi(void) {
    ALOGD("_Z12COM_open_devPKcPi() called");
    return 0;
}

/* Demangled: COM_get_hw_info(int, fm_hw_info*) */
extern "C" __attribute__((visibility("default"))) int _Z15COM_get_hw_infoiP10fm_hw_info(void) {
    ALOGD("_Z15COM_get_hw_infoiP10fm_hw_info() called");
    return 0;
}

/* Demangled: FMR_turn_on_off_rds(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19FMR_turn_on_off_rdsii(void) {
    ALOGD("_Z19FMR_turn_on_off_rdsii() called");
    return 0;
}

/* Demangled: powerDown(_JNIEnv*, _jobject*, int) */
extern "C" __attribute__((visibility("default"))) int _Z9powerDownP7_JNIEnvP8_jobjecti(void) {
    ALOGD("_Z9powerDownP7_JNIEnvP8_jobjecti() called");
    return 0;
}

/* Demangled: getHardwareVersion(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z18getHardwareVersionP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z18getHardwareVersionP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: getchipid(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z9getchipidP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z9getchipidP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Exported Object: pfmr_data */
extern "C" __attribute__((visibility("default"))) void* pfmr_data = NULL;

/* Demangled: seek(_JNIEnv*, _jobject*, float, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z4seekP7_JNIEnvP8_jobjectfh(void) {
    ALOGD("_Z4seekP7_JNIEnvP8_jobjectfh() called");
    return 0;
}

/* Demangled: getAFList(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z9getAFListP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z9getAFListP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_is_dese_chan(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16COM_is_dese_chanii(void) {
    ALOGD("_Z16COM_is_dese_chanii() called");
    return 0;
}

/* Demangled: COM_full_cqi_logger(int, fm_full_cqi_log_t*) */
extern "C" __attribute__((visibility("default"))) int _Z19COM_full_cqi_loggeriP17fm_full_cqi_log_t(void) {
    ALOGD("_Z19COM_full_cqi_loggeriP17fm_full_cqi_log_t() called");
    return 0;
}

/* Demangled: FMR_pwr_up(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_pwr_upii(void) {
    ALOGD("_Z10FMR_pwr_upii() called");
    return 0;
}

/* Demangled: CUST_update_cfg(CUST_cfg_ds*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15CUST_update_cfgP11CUST_cfg_dsi(void) {
    ALOGD("_Z15CUST_update_cfgP11CUST_cfg_dsi() called");
    return 0;
}

/* Demangled: deactiveTA(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z10deactiveTAP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z10deactiveTAP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: emsetth(_JNIEnv*, _jobject*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z7emsetthP7_JNIEnvP8_jobjectii(void) {
    ALOGD("_Z7emsetthP7_JNIEnvP8_jobjectii() called");
    return 0;
}

/* Demangled: openDev(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z7openDevP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z7openDevP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_get_badratio(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16COM_get_badratioiPi(void) {
    ALOGD("_Z16COM_get_badratioiPi() called");
    return 0;
}

/* Demangled: FMR_get_rssi(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z12FMR_get_rssiiPi(void) {
    ALOGD("_Z12FMR_get_rssiiPi() called");
    return 0;
}

/* Demangled: getECC(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z6getECCP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z6getECCP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: closeDev(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8closeDevP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8closeDevP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_get_ps(int, RDSData_Struct*, unsigned char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z10COM_get_psiP14RDSData_StructPPhPi(void) {
    ALOGD("_Z10COM_get_psiP14RDSData_StructPPhPi() called");
    return 0;
}

/* Demangled: COM_get_rssi(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z12COM_get_rssiiPi(void) {
    ALOGD("_Z12COM_get_rssiiPi() called");
    return 0;
}

/* Demangled: COM_desense_check(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17COM_desense_checkiii(void) {
    ALOGD("_Z17COM_desense_checkiii() called");
    return 0;
}

/* Demangled: FMR_get_pi(int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_get_piiPt(void) {
    ALOGD("_Z10FMR_get_piiPt() called");
    return 0;
}

/* Demangled: FMR_active_af(int, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z13FMR_active_afitPt(void) {
    ALOGD("_Z13FMR_active_afitPt() called");
    return 0;
}

/* Demangled: COM_deactive_ta(int, RDSData_Struct*, int, unsigned short, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z15COM_deactive_taiP14RDSData_StructitPtS1_(void) {
    ALOGD("_Z15COM_deactive_taiP14RDSData_StructitPtS1_() called");
    return 0;
}

/* Demangled: COM_get_seek_space() */
extern "C" __attribute__((visibility("default"))) int _Z18COM_get_seek_spacev(void) {
    ALOGD("_Z18COM_get_seek_spacev() called");
    return 0;
}

/* Demangled: COM_set_stereomono(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18COM_set_stereomonoii(void) {
    ALOGD("_Z18COM_set_stereomonoii() called");
    return 0;
}

/* Demangled: FMR_active_ta(int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z13FMR_active_taiPt(void) {
    ALOGD("_Z13FMR_active_taiPt() called");
    return 0;
}

/* Demangled: FMR_seterr(int) */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_seterri(void) {
    ALOGD("_Z10FMR_seterri() called");
    return 0;
}

/* Demangled: FMR_is_rdsrx_support(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20FMR_is_rdsrx_supportiPi(void) {
    ALOGD("_Z20FMR_is_rdsrx_supportiPi() called");
    return 0;
}

/* Demangled: FMR_seek(int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z8FMR_seekiiiPi(void) {
    ALOGD("_Z8FMR_seekiiiPi() called");
    return 0;
}

/* Demangled: readCapArray(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z12readCapArrayP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z12readCapArrayP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_get_caparray(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16COM_get_caparrayiPi(void) {
    ALOGD("_Z16COM_get_caparrayiPi() called");
    return 0;
}

/* Demangled: FMR_get_ecc(int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z11FMR_get_ecciPh(void) {
    ALOGD("_Z11FMR_get_ecciPh() called");
    return 0;
}

/* Demangled: FMR_read_rds_data(int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z17FMR_read_rds_dataiPt(void) {
    ALOGD("_Z17FMR_read_rds_dataiPt() called");
    return 0;
}

/* Demangled: isFMPoweredUp(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z13isFMPoweredUpP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z13isFMPoweredUpP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_get_ecc(int, RDSData_Struct*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z11COM_get_ecciP14RDSData_StructPh(void) {
    ALOGD("_Z11COM_get_ecciP14RDSData_StructPh() called");
    return 0;
}

/* Demangled: FMR_get_ps(int, unsigned char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_get_psiPPhPi(void) {
    ALOGD("_Z10FMR_get_psiPPhPi() called");
    return 0;
}

/* Demangled: FMR_get_pty(int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z11FMR_get_ptyiPh(void) {
    ALOGD("_Z11FMR_get_ptyiPh() called");
    return 0;
}

/* Demangled: FMR_get_cfgs(int) */
extern "C" __attribute__((visibility("default"))) int _Z12FMR_get_cfgsi(void) {
    ALOGD("_Z12FMR_get_cfgsi() called");
    return 0;
}

/* Demangled: FMR_chk_cfg_data(int) */
extern "C" __attribute__((visibility("default"))) int _Z16FMR_chk_cfg_datai(void) {
    ALOGD("_Z16FMR_chk_cfg_datai() called");
    return 0;
}

/* Demangled: FMR_get_caparray(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16FMR_get_caparrayiPi(void) {
    ALOGD("_Z16FMR_get_caparrayiPi() called");
    return 0;
}

/* Demangled: FMR_DensenseDetect(int, unsigned short, int) */
extern "C" __attribute__((visibility("default"))) int _Z18FMR_DensenseDetectiti(void) {
    ALOGD("_Z18FMR_DensenseDetectiti() called");
    return 0;
}

/* Demangled: FMR_NoiseFloorDetect(fm_bool*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20FMR_NoiseFloorDetectP7fm_booliPi(void) {
    ALOGD("_Z20FMR_NoiseFloorDetectP7fm_booliPi() called");
    return 0;
}

/* Demangled: COM_get_stereomono(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18COM_get_stereomonoiPi(void) {
    ALOGD("_Z18COM_get_stereomonoiPi() called");
    return 0;
}

/* Demangled: FMR_seek_Channel(int, int, int, int, int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16FMR_seek_ChanneliiiiiiiPiS_(void) {
    ALOGD("_Z16FMR_seek_ChanneliiiiiiiPiS_() called");
    return 0;
}

/* Demangled: getPs(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z5getPsP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z5getPsP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_tune(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z8COM_tuneiii(void) {
    ALOGD("_Z8COM_tuneiii() called");
    return 0;
}

/* Demangled: switchAntenna(_JNIEnv*, _jobject*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13switchAntennaP7_JNIEnvP8_jobjecti(void) {
    ALOGD("_Z13switchAntennaP7_JNIEnvP8_jobjecti() called");
    return 0;
}

/* Demangled: FMR_SevereDensense(unsigned short, int) */
extern "C" __attribute__((visibility("default"))) int _Z18FMR_SevereDensenseti(void) {
    ALOGD("_Z18FMR_SevereDensenseti() called");
    return 0;
}

/* Demangled: FMR_tune(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z8FMR_tuneii(void) {
    ALOGD("_Z8FMR_tuneii() called");
    return 0;
}

/* Demangled: stereoMono(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z10stereoMonoP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z10stereoMonoP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: activeTA(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8activeTAP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8activeTAP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_pre_search(int) */
extern "C" __attribute__((visibility("default"))) int _Z14COM_pre_searchi(void) {
    ALOGD("_Z14COM_pre_searchi() called");
    return 0;
}

/* Demangled: COM_is_rdsrx_support(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20COM_is_rdsrx_supportiPi(void) {
    ALOGD("_Z20COM_is_rdsrx_supportiPi() called");
    return 0;
}

/* Demangled: FMR_stop_scan(int) */
extern "C" __attribute__((visibility("default"))) int _Z13FMR_stop_scani(void) {
    ALOGD("_Z13FMR_stop_scani() called");
    return 0;
}

/* Demangled: COM_get_rt(int, RDSData_Struct*, unsigned char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z10COM_get_rtiP14RDSData_StructPPhPi(void) {
    ALOGD("_Z10COM_get_rtiP14RDSData_StructPPhPi() called");
    return 0;
}

/* Demangled: COM_set_mute(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12COM_set_muteii(void) {
    ALOGD("_Z12COM_set_muteii() called");
    return 0;
}

/* Demangled: COM_read_rds_data(int, RDSData_Struct*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z17COM_read_rds_dataiP14RDSData_StructPt(void) {
    ALOGD("_Z17COM_read_rds_dataiP14RDSData_StructPt() called");
    return 0;
}

/* Demangled: activeAf(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8activeAfP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8activeAfP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: readRssi(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8readRssiP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8readRssiP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_pwr_down(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12COM_pwr_downii(void) {
    ALOGD("_Z12COM_pwr_downii() called");
    return 0;
}

/* Demangled: COM_get_cqi(int, int, char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11COM_get_cqiiiPci(void) {
    ALOGD("_Z11COM_get_cqiiiPci() called");
    return 0;
}

/* Demangled: CUST_get_cfg(CUST_cfg_ds*) */
extern "C" __attribute__((visibility("default"))) int _Z12CUST_get_cfgP11CUST_cfg_ds(void) {
    ALOGD("_Z12CUST_get_cfgP11CUST_cfg_ds() called");
    return 0;
}

/* Demangled: FMR_open_dev(int) */
extern "C" __attribute__((visibility("default"))) int _Z12FMR_open_devi(void) {
    ALOGD("_Z12FMR_open_devi() called");
    return 0;
}

/* Demangled: FM_interface_init(fm_cbk_tbl*) */
extern "C" __attribute__((visibility("default"))) int _Z17FM_interface_initP10fm_cbk_tbl(void) {
    ALOGD("_Z17FM_interface_initP10fm_cbk_tbl() called");
    return 0;
}

/* Demangled: FMR_set_stereomono(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18FMR_set_stereomonoii(void) {
    ALOGD("_Z18FMR_set_stereomonoii() called");
    return 0;
}

/* Demangled: COM_is_fm_pwrup(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15COM_is_fm_pwrupiPi(void) {
    ALOGD("_Z15COM_is_fm_pwrupiPi() called");
    return 0;
}

/* Demangled: FMR_EMSetTH(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11FMR_EMSetTHiii(void) {
    ALOGD("_Z11FMR_EMSetTHiii() called");
    return 0;
}

/* Demangled: FMR_set_mute(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12FMR_set_muteii(void) {
    ALOGD("_Z12FMR_set_muteii() called");
    return 0;
}

/* Demangled: FMR_init() */
extern "C" __attribute__((visibility("default"))) int _Z8FMR_initv(void) {
    ALOGD("_Z8FMR_initv() called");
    return 0;
}

/* Demangled: JNI_OnLoad */
extern "C" __attribute__((visibility("default"))) int JNI_OnLoad(void) {
    ALOGD("JNI_OnLoad() called");
    return 0;
}

/* Demangled: getPTY(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z6getPTYP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z6getPTYP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: FMR_pwr_down(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12FMR_pwr_downii(void) {
    ALOGD("_Z12FMR_pwr_downii() called");
    return 0;
}

/* Exported Object: fmr_data */
extern "C" __attribute__((visibility("default"))) void* fmr_data = NULL;

/* Demangled: powerUp(_JNIEnv*, _jobject*, float) */
extern "C" __attribute__((visibility("default"))) int _Z7powerUpP7_JNIEnvP8_jobjectf(void) {
    ALOGD("_Z7powerUpP7_JNIEnvP8_jobjectf() called");
    return 0;
}

/* Demangled: autoScan(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8autoScanP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8autoScanP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_pwr_up(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z10COM_pwr_upiii(void) {
    ALOGD("_Z10COM_pwr_upiii() called");
    return 0;
}

/* Demangled: COM_turn_on_off_rds(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19COM_turn_on_off_rdsii(void) {
    ALOGD("_Z19COM_turn_on_off_rdsii() called");
    return 0;
}

/* Demangled: FMR_strerr() */
extern "C" __attribute__((visibility("default"))) int _Z10FMR_strerrv(void) {
    ALOGD("_Z10FMR_strerrv() called");
    return 0;
}

/* Demangled: FMR_ana_switch(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14FMR_ana_switchii(void) {
    ALOGD("_Z14FMR_ana_switchii() called");
    return 0;
}

/* Demangled: FMR_is_fm_pwrup(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15FMR_is_fm_pwrupiPi(void) {
    ALOGD("_Z15FMR_is_fm_pwrupiPi() called");
    return 0;
}

/* Demangled: readRds(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z7readRdsP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z7readRdsP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_close_dev(int) */
extern "C" __attribute__((visibility("default"))) int _Z13COM_close_devi(void) {
    ALOGD("_Z13COM_close_devi() called");
    return 0;
}

/* Demangled: COM_ana_switch(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14COM_ana_switchii(void) {
    ALOGD("_Z14COM_ana_switchii() called");
    return 0;
}

/* Demangled: FMR_get_stereomono(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18FMR_get_stereomonoiPi(void) {
    ALOGD("_Z18FMR_get_stereomonoiPi() called");
    return 0;
}

/* Demangled: getPI(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z5getPIP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z5getPIP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_get_pi(int, RDSData_Struct*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z10COM_get_piiP14RDSData_StructPt(void) {
    ALOGD("_Z10COM_get_piiP14RDSData_StructPt() called");
    return 0;
}

/* Demangled: COM_get_chip_id(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15COM_get_chip_idiPi(void) {
    ALOGD("_Z15COM_get_chip_idiPi() called");
    return 0;
}

/* Demangled: FMR_get_badratio(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16FMR_get_badratioiPi(void) {
    ALOGD("_Z16FMR_get_badratioiPi() called");
    return 0;
}

/* Demangled: isRdsSupport(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z12isRdsSupportP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z12isRdsSupportP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: FMR_get_hw_info(int, int**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15FMR_get_hw_infoiPPiS_(void) {
    ALOGD("_Z15FMR_get_hw_infoiPPiS_() called");
    return 0;
}

/* Demangled: FMR_scan(int, unsigned short*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z8FMR_scaniPtPi(void) {
    ALOGD("_Z8FMR_scaniPtPi() called");
    return 0;
}

/* Demangled: stopScan(_JNIEnv*, _jobject*) */
extern "C" __attribute__((visibility("default"))) int _Z8stopScanP7_JNIEnvP8_jobject(void) {
    ALOGD("_Z8stopScanP7_JNIEnvP8_jobject() called");
    return 0;
}

/* Demangled: COM_change_string(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17COM_change_stringPhi(void) {
    ALOGD("_Z17COM_change_stringPhi() called");
    return 0;
}

/* Demangled: COM_seek(int, int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z8COM_seekiPiiii(void) {
    ALOGD("_Z8COM_seekiPiiii() called");
    return 0;
}

/* Demangled: FMR_close_dev(int) */
extern "C" __attribute__((visibility("default"))) int _Z13FMR_close_devi(void) {
    ALOGD("_Z13FMR_close_devi() called");
    return 0;
}

/* Demangled: FMR_get_chip_id(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15FMR_get_chip_idiPi(void) {
    ALOGD("_Z15FMR_get_chip_idiPi() called");
    return 0;
}

/* Demangled: FMR_EM_CQI_logger(int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z17FMR_EM_CQI_loggerit(void) {
    ALOGD("_Z17FMR_EM_CQI_loggerit() called");
    return 0;
}

/* Demangled: setStereoMono(_JNIEnv*, _jobject*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z13setStereoMonoP7_JNIEnvP8_jobjecth(void) {
    ALOGD("_Z13setStereoMonoP7_JNIEnvP8_jobjecth() called");
    return 0;
}

/* Demangled: COM_active_ta(int, RDSData_Struct*, int, unsigned short, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z13COM_active_taiP14RDSData_StructitPtS1_(void) {
    ALOGD("_Z13COM_active_taiP14RDSData_StructitPtS1_() called");
    return 0;
}

/* Demangled: COM_Soft_Mute_Tune(int, fm_softmute_tune_t*) */
extern "C" __attribute__((visibility("default"))) int _Z18COM_Soft_Mute_TuneiP18fm_softmute_tune_t(void) {
    ALOGD("_Z18COM_Soft_Mute_TuneiP18fm_softmute_tune_t() called");
    return 0;
}
