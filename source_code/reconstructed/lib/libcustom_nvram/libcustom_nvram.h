/*
 * Reverse-Engineered ABI Specification for: libcustom_nvram.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcustom_nvram.so
 */

#ifndef BEGONIA_RE_LIBCUSTOM_NVRAM_H
#define BEGONIA_RE_LIBCUSTOM_NVRAM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: WIFI_ConvertFunc */
/* Demangled: WIFI_ConvertFunc */
int WIFI_ConvertFunc(void);

/* Symbol: g_Backup_File_Count */
/* Demangled: g_Backup_File_Count */
extern void* g_Backup_File_Count;

/* Symbol: g_new_nvram_lid_count */
/* Demangled: g_new_nvram_lid_count */
extern void* g_new_nvram_lid_count;

/* Symbol: iFileBTAddrLID */
/* Demangled: iFileBTAddrLID */
extern void* iFileBTAddrLID;

/* Symbol: stSIMConfigDefault */
/* Demangled: stSIMConfigDefault */
extern void* stSIMConfigDefault;

/* Symbol: stWifiCfgDefault */
/* Demangled: stWifiCfgDefault */
extern void* stWifiCfgDefault;

/* Symbol: audio_effect_custom_default */
/* Demangled: audio_effect_custom_default */
extern void* audio_effect_custom_default;

/* Symbol: iNvRamFileMaxLID */
/* Demangled: iNvRamFileMaxLID */
extern void* iNvRamFileMaxLID;

/* Symbol: stADCDefualt */
/* Demangled: stADCDefualt */
extern void* stADCDefualt;

/* Symbol: nvram_check_exist_block_offset */
/* Demangled: nvram_check_exist_block_offset */
extern void* nvram_check_exist_block_offset;

/* Symbol: nvram_evdo_support */
/* Demangled: nvram_evdo_support */
int nvram_evdo_support(void);

/* Symbol: nvram_md5_support */
/* Demangled: nvram_md5_support */
int nvram_md5_support(void);

/* Symbol: iFilePRODUCT_INFOLID */
/* Demangled: iFilePRODUCT_INFOLID */
extern void* iFilePRODUCT_INFOLID;

/* Symbol: speech_lpbk_param_custom_default */
/* Demangled: speech_lpbk_param_custom_default */
extern void* speech_lpbk_param_custom_default;

/* Symbol: stUARTConfigDefault */
/* Demangled: stUARTConfigDefault */
extern void* stUARTConfigDefault;

/* Symbol: aRecordCallerList */
/* Demangled: aRecordCallerList */
extern void* aRecordCallerList;

/* Symbol: speech_ANC_custom_default */
/* Demangled: speech_ANC_custom_default */
extern void* speech_ANC_custom_default;

/* Symbol: Hd_Recrod_Par_default */
/* Demangled: Hd_Recrod_Par_default */
extern void* Hd_Recrod_Par_default;

/* Symbol: audio_hcf_custom_default */
/* Demangled: audio_hcf_custom_default */
extern void* audio_hcf_custom_default;

/* Symbol: g_RecordCaller_Count */
/* Demangled: g_RecordCaller_Count */
extern void* g_RecordCaller_Count;

/* Symbol: iFileAuxADCLID */
/* Demangled: iFileAuxADCLID */
extern void* iFileAuxADCLID;

/* Symbol: stEXTMDTypeDefault */
/* Demangled: stEXTMDTypeDefault */
extern void* stEXTMDTypeDefault;

/* Symbol: SBP_ConvertFunc */
/* Demangled: SBP_ConvertFunc */
int SBP_ConvertFunc(void);

/* Symbol: callback_for_nvram_daemon */
/* Demangled: callback_for_nvram_daemon */
extern void* callback_for_nvram_daemon;

/* Symbol: iFileWIFILID */
/* Demangled: iFileWIFILID */
extern void* iFileWIFILID;

/* Symbol: nvram_bt_default_value */
/* Demangled: nvram_bt_default_value */
int nvram_bt_default_value(void);

/* Symbol: nvram_emmc_support */
/* Demangled: nvram_emmc_support */
int nvram_emmc_support(void);

/* Symbol: stSDIOConfigDefault */
/* Demangled: stSDIOConfigDefault */
extern void* stSDIOConfigDefault;

/* Symbol: Hd_Recrod_Scene_Table_default */
/* Demangled: Hd_Recrod_Scene_Table_default */
extern void* Hd_Recrod_Scene_Table_default;

/* Symbol: iCustomBeginLID */
/* Demangled: iCustomBeginLID */
extern void* iCustomBeginLID;

/* Symbol: iFileOMADMUSBLID */
/* Demangled: iFileOMADMUSBLID */
extern void* iFileOMADMUSBLID;

/* Symbol: nvram_new_partition_support */
/* Demangled: nvram_new_partition_support */
int nvram_new_partition_support(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: audio_param_med_default */
/* Demangled: audio_param_med_default */
extern void* audio_param_med_default;

/* Symbol: g_Check_File_Count */
/* Demangled: g_Check_File_Count */
extern void* g_Check_File_Count;

/* Symbol: g_akCFG_File_Custom */
/* Demangled: g_akCFG_File_Custom */
extern void* g_akCFG_File_Custom;

/* Symbol: g_new_nvram_lid */
/* Demangled: g_new_nvram_lid */
extern void* g_new_nvram_lid;

/* Symbol: nvram_misc_log_feature */
/* Demangled: nvram_misc_log_feature */
extern void* nvram_misc_log_feature;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: audio_func_swtich_param_custom_default */
/* Demangled: audio_func_swtich_param_custom_default */
extern void* audio_func_swtich_param_custom_default;

/* Symbol: dual_mic_custom_default */
/* Demangled: dual_mic_custom_default */
extern void* dual_mic_custom_default;

/* Symbol: iFileCustomWIFILID */
/* Demangled: iFileCustomWIFILID */
extern void* iFileCustomWIFILID;

/* Symbol: stGPSConfigDefault */
/* Demangled: stGPSConfigDefault */
extern void* stGPSConfigDefault;

/* Symbol: Audio_VOIP_Par_default */
/* Demangled: Audio_VOIP_Par_default */
extern void* Audio_VOIP_Par_default;

/* Symbol: audio_ver1_custom_default */
/* Demangled: audio_ver1_custom_default */
extern void* audio_ver1_custom_default;

/* Symbol: nvram_new_partition_name */
/* Demangled: nvram_new_partition_name */
extern void* nvram_new_partition_name;

/* Symbol: stPRODUCT_INFOConfigDefault */
/* Demangled: stPRODUCT_INFOConfigDefault */
extern void* stPRODUCT_INFOConfigDefault;

/* Symbol: stWifiCustomDefault */
/* Demangled: stWifiCustomDefault */
extern void* stWifiCustomDefault;

/* Symbol: wb_speech_custom_default */
/* Demangled: wb_speech_custom_default */
extern void* wb_speech_custom_default;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: aBackupToBinRegion */
/* Demangled: aBackupToBinRegion */
extern void* aBackupToBinRegion;

/* Symbol: stMDTypeDefault */
/* Demangled: stMDTypeDefault */
extern void* stMDTypeDefault;

/* Symbol: aCheckExistList */
/* Demangled: aCheckExistList */
extern void* aCheckExistList;

/* Symbol: audio_custom_default */
/* Demangled: audio_custom_default */
extern void* audio_custom_default;

/* Symbol: bt_gain_control_default */
/* Demangled: bt_gain_control_default */
extern void* bt_gain_control_default;

/* Symbol: g_akCFG_File_Protect */
/* Demangled: g_akCFG_File_Protect */
extern void* g_akCFG_File_Protect;

/* Symbol: speech_hac_param_custom_default */
/* Demangled: speech_hac_param_custom_default */
extern void* speech_hac_param_custom_default;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: g_i4CFG_File_Count */
/* Demangled: g_i4CFG_File_Count */
extern void* g_i4CFG_File_Count;

/* Symbol: g_i4CFG_File_Protect_Count */
/* Demangled: g_i4CFG_File_Protect_Count */
extern void* g_i4CFG_File_Protect_Count;

/* Symbol: nvram_ecci_c2k_support */
/* Demangled: nvram_ecci_c2k_support */
int nvram_ecci_c2k_support(void);

/* Symbol: speech_magi_conference_custom_default */
/* Demangled: speech_magi_conference_custom_default */
extern void* speech_magi_conference_custom_default;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: AUDENH_Control_Option_Par_default */
/* Demangled: AUDENH_Control_Option_Par_default */
extern void* AUDENH_Control_Option_Par_default;

/* Symbol: aPerformance */
/* Demangled: aPerformance */
extern void* aPerformance;

/* Symbol: iFileVerInfoLID */
/* Demangled: iFileVerInfoLID */
extern void* iFileVerInfoLID;

/* Symbol: g_i4CFG_File_Custom_Count */
/* Demangled: g_i4CFG_File_Custom_Count */
extern void* g_i4CFG_File_Custom_Count;

/* Symbol: smartpa_calib_ConfigDefault */
/* Demangled: smartpa_calib_ConfigDefault */
extern void* smartpa_calib_ConfigDefault;

/* Symbol: stOMADMUSBDefualt */
/* Demangled: stOMADMUSBDefualt */
extern void* stOMADMUSBDefualt;

/* Symbol: audio_hfp_param_custom_default */
/* Demangled: audio_hfp_param_custom_default */
extern void* audio_hfp_param_custom_default;

/* Symbol: nvram_ufs_support */
/* Demangled: nvram_ufs_support */
int nvram_ufs_support(void);

/* Symbol: wait_connsys_ready */
/* Demangled: wait_connsys_ready */
int wait_connsys_ready(void);

/* Symbol: Audio_Buffer_DC_Calibration_Par_default */
/* Demangled: Audio_Buffer_DC_Calibration_Par_default */
extern void* Audio_Buffer_DC_Calibration_Par_default;

/* Symbol: audio_ringtonedrc_custom_default */
/* Demangled: audio_ringtonedrc_custom_default */
extern void* audio_ringtonedrc_custom_default;

/* Symbol: audio_vibspk_custom_default */
/* Demangled: audio_vibspk_custom_default */
extern void* audio_vibspk_custom_default;

/* Symbol: nvram_multi_storage_support */
/* Demangled: nvram_multi_storage_support */
int nvram_multi_storage_support(void);

/* Symbol: speech_custom_default */
/* Demangled: speech_custom_default */
extern void* speech_custom_default;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: audio_volume_custom_default */
/* Demangled: audio_volume_custom_default */
extern void* audio_volume_custom_default;

/* Symbol: g_Performance_File_Count */
/* Demangled: g_Performance_File_Count */
extern void* g_Performance_File_Count;

/* Symbol: stFGConfigDefault */
/* Demangled: stFGConfigDefault */
extern void* stFGConfigDefault;

/* Symbol: nvram_check_exist_feature */
/* Demangled: nvram_check_exist_feature */
extern void* nvram_check_exist_feature;

/* Symbol: nvram_misc_log_block_offset */
/* Demangled: nvram_misc_log_block_offset */
extern void* nvram_misc_log_block_offset;

/* Symbol: speaker_monitor_par_default */
/* Demangled: speaker_monitor_par_default */
extern void* speaker_monitor_par_default;

/* Symbol: stMDSBPConfigDefault */
/* Demangled: stMDSBPConfigDefault */
extern void* stMDSBPConfigDefault;

/* Symbol: Voice_Recognize_Par_default */
/* Demangled: Voice_Recognize_Par_default */
extern void* Voice_Recognize_Par_default;

/* Symbol: audio_musicdrc_custom_default */
/* Demangled: audio_musicdrc_custom_default */
extern void* audio_musicdrc_custom_default;

/* Symbol: g_akCFG_File */
/* Demangled: g_akCFG_File */
extern void* g_akCFG_File;

/* Symbol: nvram_md1_support */
/* Demangled: nvram_md1_support */
int nvram_md1_support(void);

/* Symbol: stBWCSConfigDefault */
/* Demangled: stBWCSConfigDefault */
extern void* stBWCSConfigDefault;

/* Symbol: BT_ConvertFunc */
/* Demangled: BT_ConvertFunc */
int BT_ConvertFunc(void);

/* Symbol: Gain_control_table_default */
/* Demangled: Gain_control_table_default */
extern void* Gain_control_table_default;

/* Symbol: aNvRamConvertFuncTable */
/* Demangled: aNvRamConvertFuncTable */
extern void* aNvRamConvertFuncTable;

/* Symbol: nvram_read_back_feature */
/* Demangled: nvram_read_back_feature */
extern void* nvram_read_back_feature;

__END_DECLS

#endif /* BEGONIA_RE_LIBCUSTOM_NVRAM_H */
