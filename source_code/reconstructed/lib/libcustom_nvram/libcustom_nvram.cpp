/*
 * Reverse-Engineered Source for: libcustom_nvram.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcustom_nvram"

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
#include "libcustom_nvram.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_PRO_INFO "/dev/pro_info"
#define DEV_DEV_STPFGD "/dev/stpfgd"
#define DEV_DEV_STPGPS "/dev/stpgps"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_PRO_INFO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_PRO_INFO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_PRO_INFO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STPFGD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STPFGD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STPFGD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STPGPS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STPGPS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STPGPS, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: WIFI_ConvertFunc */
extern "C" __attribute__((visibility("default"))) int WIFI_ConvertFunc(void) {
    ALOGD("WIFI_ConvertFunc() called");
    return 0;
}

/* Exported Object: g_Backup_File_Count */
extern "C" __attribute__((visibility("default"))) void* g_Backup_File_Count = NULL;

/* Exported Object: g_new_nvram_lid_count */
extern "C" __attribute__((visibility("default"))) void* g_new_nvram_lid_count = NULL;

/* Exported Object: iFileBTAddrLID */
extern "C" __attribute__((visibility("default"))) void* iFileBTAddrLID = NULL;

/* Exported Object: stSIMConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stSIMConfigDefault = NULL;

/* Exported Object: stWifiCfgDefault */
extern "C" __attribute__((visibility("default"))) void* stWifiCfgDefault = NULL;

/* Exported Object: audio_effect_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_effect_custom_default = NULL;

/* Exported Object: iNvRamFileMaxLID */
extern "C" __attribute__((visibility("default"))) void* iNvRamFileMaxLID = NULL;

/* Exported Object: stADCDefualt */
extern "C" __attribute__((visibility("default"))) void* stADCDefualt = NULL;

/* Exported Object: nvram_check_exist_block_offset */
extern "C" __attribute__((visibility("default"))) void* nvram_check_exist_block_offset = NULL;

/* Demangled: nvram_evdo_support */
extern "C" __attribute__((visibility("default"))) int nvram_evdo_support(void) {
    ALOGD("nvram_evdo_support() called");
    return 0;
}

/* Demangled: nvram_md5_support */
extern "C" __attribute__((visibility("default"))) int nvram_md5_support(void) {
    ALOGD("nvram_md5_support() called");
    return 0;
}

/* Exported Object: iFilePRODUCT_INFOLID */
extern "C" __attribute__((visibility("default"))) void* iFilePRODUCT_INFOLID = NULL;

/* Exported Object: speech_lpbk_param_custom_default */
extern "C" __attribute__((visibility("default"))) void* speech_lpbk_param_custom_default = NULL;

/* Exported Object: stUARTConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stUARTConfigDefault = NULL;

/* Exported Object: aRecordCallerList */
extern "C" __attribute__((visibility("default"))) void* aRecordCallerList = NULL;

/* Exported Object: speech_ANC_custom_default */
extern "C" __attribute__((visibility("default"))) void* speech_ANC_custom_default = NULL;

/* Exported Object: Hd_Recrod_Par_default */
extern "C" __attribute__((visibility("default"))) void* Hd_Recrod_Par_default = NULL;

/* Exported Object: audio_hcf_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_hcf_custom_default = NULL;

/* Exported Object: g_RecordCaller_Count */
extern "C" __attribute__((visibility("default"))) void* g_RecordCaller_Count = NULL;

/* Exported Object: iFileAuxADCLID */
extern "C" __attribute__((visibility("default"))) void* iFileAuxADCLID = NULL;

/* Exported Object: stEXTMDTypeDefault */
extern "C" __attribute__((visibility("default"))) void* stEXTMDTypeDefault = NULL;

/* Demangled: SBP_ConvertFunc */
extern "C" __attribute__((visibility("default"))) int SBP_ConvertFunc(void) {
    ALOGD("SBP_ConvertFunc() called");
    return 0;
}

/* Exported Object: callback_for_nvram_daemon */
extern "C" __attribute__((visibility("default"))) void* callback_for_nvram_daemon = NULL;

/* Exported Object: iFileWIFILID */
extern "C" __attribute__((visibility("default"))) void* iFileWIFILID = NULL;

/* Demangled: nvram_bt_default_value */
extern "C" __attribute__((visibility("default"))) int nvram_bt_default_value(void) {
    ALOGD("nvram_bt_default_value() called");
    return 0;
}

/* Demangled: nvram_emmc_support */
extern "C" __attribute__((visibility("default"))) int nvram_emmc_support(void) {
    ALOGD("nvram_emmc_support() called");
    return 0;
}

/* Exported Object: stSDIOConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stSDIOConfigDefault = NULL;

/* Exported Object: Hd_Recrod_Scene_Table_default */
extern "C" __attribute__((visibility("default"))) void* Hd_Recrod_Scene_Table_default = NULL;

/* Exported Object: iCustomBeginLID */
extern "C" __attribute__((visibility("default"))) void* iCustomBeginLID = NULL;

/* Exported Object: iFileOMADMUSBLID */
extern "C" __attribute__((visibility("default"))) void* iFileOMADMUSBLID = NULL;

/* Demangled: nvram_new_partition_support */
extern "C" __attribute__((visibility("default"))) int nvram_new_partition_support(void) {
    ALOGD("nvram_new_partition_support() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: audio_param_med_default */
extern "C" __attribute__((visibility("default"))) void* audio_param_med_default = NULL;

/* Exported Object: g_Check_File_Count */
extern "C" __attribute__((visibility("default"))) void* g_Check_File_Count = NULL;

/* Exported Object: g_akCFG_File_Custom */
extern "C" __attribute__((visibility("default"))) void* g_akCFG_File_Custom = NULL;

/* Exported Object: g_new_nvram_lid */
extern "C" __attribute__((visibility("default"))) void* g_new_nvram_lid = NULL;

/* Exported Object: nvram_misc_log_feature */
extern "C" __attribute__((visibility("default"))) void* nvram_misc_log_feature = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: audio_func_swtich_param_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_func_swtich_param_custom_default = NULL;

/* Exported Object: dual_mic_custom_default */
extern "C" __attribute__((visibility("default"))) void* dual_mic_custom_default = NULL;

/* Exported Object: iFileCustomWIFILID */
extern "C" __attribute__((visibility("default"))) void* iFileCustomWIFILID = NULL;

/* Exported Object: stGPSConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stGPSConfigDefault = NULL;

/* Exported Object: Audio_VOIP_Par_default */
extern "C" __attribute__((visibility("default"))) void* Audio_VOIP_Par_default = NULL;

/* Exported Object: audio_ver1_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_ver1_custom_default = NULL;

/* Exported Object: nvram_new_partition_name */
extern "C" __attribute__((visibility("default"))) void* nvram_new_partition_name = NULL;

/* Exported Object: stPRODUCT_INFOConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stPRODUCT_INFOConfigDefault = NULL;

/* Exported Object: stWifiCustomDefault */
extern "C" __attribute__((visibility("default"))) void* stWifiCustomDefault = NULL;

/* Exported Object: wb_speech_custom_default */
extern "C" __attribute__((visibility("default"))) void* wb_speech_custom_default = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: aBackupToBinRegion */
extern "C" __attribute__((visibility("default"))) void* aBackupToBinRegion = NULL;

/* Exported Object: stMDTypeDefault */
extern "C" __attribute__((visibility("default"))) void* stMDTypeDefault = NULL;

/* Exported Object: aCheckExistList */
extern "C" __attribute__((visibility("default"))) void* aCheckExistList = NULL;

/* Exported Object: audio_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_custom_default = NULL;

/* Exported Object: bt_gain_control_default */
extern "C" __attribute__((visibility("default"))) void* bt_gain_control_default = NULL;

/* Exported Object: g_akCFG_File_Protect */
extern "C" __attribute__((visibility("default"))) void* g_akCFG_File_Protect = NULL;

/* Exported Object: speech_hac_param_custom_default */
extern "C" __attribute__((visibility("default"))) void* speech_hac_param_custom_default = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: g_i4CFG_File_Count */
extern "C" __attribute__((visibility("default"))) void* g_i4CFG_File_Count = NULL;

/* Exported Object: g_i4CFG_File_Protect_Count */
extern "C" __attribute__((visibility("default"))) void* g_i4CFG_File_Protect_Count = NULL;

/* Demangled: nvram_ecci_c2k_support */
extern "C" __attribute__((visibility("default"))) int nvram_ecci_c2k_support(void) {
    ALOGD("nvram_ecci_c2k_support() called");
    return 0;
}

/* Exported Object: speech_magi_conference_custom_default */
extern "C" __attribute__((visibility("default"))) void* speech_magi_conference_custom_default = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: AUDENH_Control_Option_Par_default */
extern "C" __attribute__((visibility("default"))) void* AUDENH_Control_Option_Par_default = NULL;

/* Exported Object: aPerformance */
extern "C" __attribute__((visibility("default"))) void* aPerformance = NULL;

/* Exported Object: iFileVerInfoLID */
extern "C" __attribute__((visibility("default"))) void* iFileVerInfoLID = NULL;

/* Exported Object: g_i4CFG_File_Custom_Count */
extern "C" __attribute__((visibility("default"))) void* g_i4CFG_File_Custom_Count = NULL;

/* Exported Object: smartpa_calib_ConfigDefault */
extern "C" __attribute__((visibility("default"))) void* smartpa_calib_ConfigDefault = NULL;

/* Exported Object: stOMADMUSBDefualt */
extern "C" __attribute__((visibility("default"))) void* stOMADMUSBDefualt = NULL;

/* Exported Object: audio_hfp_param_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_hfp_param_custom_default = NULL;

/* Demangled: nvram_ufs_support */
extern "C" __attribute__((visibility("default"))) int nvram_ufs_support(void) {
    ALOGD("nvram_ufs_support() called");
    return 0;
}

/* Demangled: wait_connsys_ready */
extern "C" __attribute__((visibility("default"))) int wait_connsys_ready(void) {
    ALOGD("wait_connsys_ready() called");
    return 0;
}

/* Exported Object: Audio_Buffer_DC_Calibration_Par_default */
extern "C" __attribute__((visibility("default"))) void* Audio_Buffer_DC_Calibration_Par_default = NULL;

/* Exported Object: audio_ringtonedrc_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_ringtonedrc_custom_default = NULL;

/* Exported Object: audio_vibspk_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_vibspk_custom_default = NULL;

/* Demangled: nvram_multi_storage_support */
extern "C" __attribute__((visibility("default"))) int nvram_multi_storage_support(void) {
    ALOGD("nvram_multi_storage_support() called");
    return 0;
}

/* Exported Object: speech_custom_default */
extern "C" __attribute__((visibility("default"))) void* speech_custom_default = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: audio_volume_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_volume_custom_default = NULL;

/* Exported Object: g_Performance_File_Count */
extern "C" __attribute__((visibility("default"))) void* g_Performance_File_Count = NULL;

/* Exported Object: stFGConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stFGConfigDefault = NULL;

/* Exported Object: nvram_check_exist_feature */
extern "C" __attribute__((visibility("default"))) void* nvram_check_exist_feature = NULL;

/* Exported Object: nvram_misc_log_block_offset */
extern "C" __attribute__((visibility("default"))) void* nvram_misc_log_block_offset = NULL;

/* Exported Object: speaker_monitor_par_default */
extern "C" __attribute__((visibility("default"))) void* speaker_monitor_par_default = NULL;

/* Exported Object: stMDSBPConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stMDSBPConfigDefault = NULL;

/* Exported Object: Voice_Recognize_Par_default */
extern "C" __attribute__((visibility("default"))) void* Voice_Recognize_Par_default = NULL;

/* Exported Object: audio_musicdrc_custom_default */
extern "C" __attribute__((visibility("default"))) void* audio_musicdrc_custom_default = NULL;

/* Exported Object: g_akCFG_File */
extern "C" __attribute__((visibility("default"))) void* g_akCFG_File = NULL;

/* Demangled: nvram_md1_support */
extern "C" __attribute__((visibility("default"))) int nvram_md1_support(void) {
    ALOGD("nvram_md1_support() called");
    return 0;
}

/* Exported Object: stBWCSConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stBWCSConfigDefault = NULL;

/* Demangled: BT_ConvertFunc */
extern "C" __attribute__((visibility("default"))) int BT_ConvertFunc(void) {
    ALOGD("BT_ConvertFunc() called");
    return 0;
}

/* Exported Object: Gain_control_table_default */
extern "C" __attribute__((visibility("default"))) void* Gain_control_table_default = NULL;

/* Exported Object: aNvRamConvertFuncTable */
extern "C" __attribute__((visibility("default"))) void* aNvRamConvertFuncTable = NULL;

/* Exported Object: nvram_read_back_feature */
extern "C" __attribute__((visibility("default"))) void* nvram_read_back_feature = NULL;
