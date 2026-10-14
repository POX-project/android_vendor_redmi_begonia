/*
 * Reverse-Engineered ABI Specification for: libwifitest.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libwifitest.so
 */

#ifndef BEGONIA_RE_LIBWIFITEST_H
#define BEGONIA_RE_LIBWIFITEST_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: WIFI_TEST_HQA_DBDCStopRX */
/* Demangled: WIFI_TEST_HQA_DBDCStopRX */
int WIFI_TEST_HQA_DBDCStopRX(void);

/* Symbol: WIFI_TEST_CloseDUT */
/* Demangled: WIFI_TEST_CloseDUT */
int WIFI_TEST_CloseDUT(void);

/* Symbol: WIFI_TEST_HQA_SetBandMode */
/* Demangled: WIFI_TEST_HQA_SetBandMode */
int WIFI_TEST_HQA_SetBandMode(void);

/* Symbol: WIFI_TEST_HQA_SetTxPowerExt */
/* Demangled: WIFI_TEST_HQA_SetTxPowerExt */
int WIFI_TEST_HQA_SetTxPowerExt(void);

/* Symbol: WIFI_TEST_HQA_SetRxPath */
/* Demangled: WIFI_TEST_HQA_SetRxPath */
int WIFI_TEST_HQA_SetRxPath(void);

/* Symbol: WIFI_TEST_RxStart */
/* Demangled: WIFI_TEST_RxStart */
int WIFI_TEST_RxStart(void);

/* Symbol: WIFI_TEST_RxStop */
/* Demangled: WIFI_TEST_RxStop */
int WIFI_TEST_RxStop(void);

/* Symbol: WIFI_TEST_TxDataRate11ac */
/* Demangled: WIFI_TEST_TxDataRate11ac */
int WIFI_TEST_TxDataRate11ac(void);

/* Symbol: WIFI_TEST_TxPayloadLength */
/* Demangled: WIFI_TEST_TxPayloadLength */
int WIFI_TEST_TxPayloadLength(void);

/* Symbol: WIFI_TEST_HQA_DBDCSetTXContent */
/* Demangled: WIFI_TEST_HQA_DBDCSetTXContent */
int WIFI_TEST_HQA_DBDCSetTXContent(void);

/* Symbol: WIFI_TEST_HQA_GetTxInfo */
/* Demangled: WIFI_TEST_HQA_GetTxInfo */
int WIFI_TEST_HQA_GetTxInfo(void);

/* Symbol: WIFI_TEST_HQA_GetWlanCfgEm */
/* Demangled: WIFI_TEST_HQA_GetWlanCfgEm */
int WIFI_TEST_HQA_GetWlanCfgEm(void);

/* Symbol: WIFI_TEST_HQA_SetRUSettings */
/* Demangled: WIFI_TEST_HQA_SetRUSettings */
int WIFI_TEST_HQA_SetRUSettings(void);

/* Symbol: WIFI_TEST_HQA_SetRate */
/* Demangled: WIFI_TEST_HQA_SetRate */
int WIFI_TEST_HQA_SetRate(void);

/* Symbol: WIFI_TEST_HQA_SetWlanCfgEm */
/* Demangled: WIFI_TEST_HQA_SetWlanCfgEm */
int WIFI_TEST_HQA_SetWlanCfgEm(void);

/* Symbol: WIFI_TEST_IsRunning */
/* Demangled: WIFI_TEST_IsRunning */
int WIFI_TEST_IsRunning(void);

/* Symbol: WIFI_TEST_SetBandwidthV2 */
/* Demangled: WIFI_TEST_SetBandwidthV2 */
int WIFI_TEST_SetBandwidthV2(void);

/* Symbol: WIFI_TEST_SetMode */
/* Demangled: WIFI_TEST_SetMode */
int WIFI_TEST_SetMode(void);

/* Symbol: WIFI_TEST_CW_MODE */
/* Demangled: WIFI_TEST_CW_MODE */
int WIFI_TEST_CW_MODE(void);

/* Symbol: WIFI_TEST_SetPriChannelSetting */
/* Demangled: WIFI_TEST_SetPriChannelSetting */
int WIFI_TEST_SetPriChannelSetting(void);

/* Symbol: WIFI_TEST_TxStart */
/* Demangled: WIFI_TEST_TxStart */
int WIFI_TEST_TxStart(void);

/* Symbol: WIFI_TEST_CW_MODE_START */
/* Demangled: WIFI_TEST_CW_MODE_START */
int WIFI_TEST_CW_MODE_START(void);

/* Symbol: WIFI_TEST_DPD_MODE */
/* Demangled: WIFI_TEST_DPD_MODE */
int WIFI_TEST_DPD_MODE(void);

/* Symbol: WIFI_TEST_HQA_DBDCStopTX */
/* Demangled: WIFI_TEST_HQA_DBDCStopTX */
int WIFI_TEST_HQA_DBDCStopTX(void);

/* Symbol: WIFI_TEST_TxTraining */
/* Demangled: WIFI_TEST_TxTraining */
int WIFI_TEST_TxTraining(void);

/* Symbol: fgDebugMode */
/* Demangled: fgDebugMode */
extern void* fgDebugMode;

/* Symbol: WIFI_TEST_FRGood */
/* Demangled: WIFI_TEST_FRGood */
int WIFI_TEST_FRGood(void);

/* Symbol: WIFI_TEST_HQA_DBDCContinuousTX */
/* Demangled: WIFI_TEST_HQA_DBDCContinuousTX */
int WIFI_TEST_HQA_DBDCContinuousTX(void);

/* Symbol: WIFI_TEST_IsUp */
/* Demangled: WIFI_TEST_IsUp */
int WIFI_TEST_IsUp(void);

/* Symbol: WIFI_TEST_RSSI */
/* Demangled: WIFI_TEST_RSSI */
int WIFI_TEST_RSSI(void);

/* Symbol: WIFI_TEST_SetTXPower */
/* Demangled: WIFI_TEST_SetTXPower */
int WIFI_TEST_SetTXPower(void);

/* Symbol: WIFI_TEST_SetTxBandwidth */
/* Demangled: WIFI_TEST_SetTxBandwidth */
int WIFI_TEST_SetTxBandwidth(void);

/* Symbol: WIFI_TEST_deinit */
/* Demangled: WIFI_TEST_deinit */
int WIFI_TEST_deinit(void);

/* Symbol: wifi_set_power */
/* Demangled: wifi_set_power */
int wifi_set_power(void);

/* Symbol: WIFI_TEST_EFUSE_Write */
/* Demangled: WIFI_TEST_EFUSE_Write */
int WIFI_TEST_EFUSE_Write(void);

/* Symbol: WIFI_TEST_FRError */
/* Demangled: WIFI_TEST_FRError */
int WIFI_TEST_FRError(void);

/* Symbol: WIFI_TEST_HQA_GetTxPower */
/* Demangled: WIFI_TEST_HQA_GetTxPower */
int WIFI_TEST_HQA_GetTxPower(void);

/* Symbol: WIFI_TEST_HQA_SetTxPath */
/* Demangled: WIFI_TEST_HQA_SetTxPath */
int WIFI_TEST_HQA_SetTxPath(void);

/* Symbol: WIFI_TEST_SetRX */
/* Demangled: WIFI_TEST_SetRX */
int WIFI_TEST_SetRX(void);

/* Symbol: WIFI_TEST_SetRxDefaultAnt */
/* Demangled: WIFI_TEST_SetRxDefaultAnt */
int WIFI_TEST_SetRxDefaultAnt(void);

/* Symbol: WIFI_TEST_TxBurstFrames */
/* Demangled: WIFI_TEST_TxBurstFrames */
int WIFI_TEST_TxBurstFrames(void);

/* Symbol: WIFI_TEST_TxDataRate11n */
/* Demangled: WIFI_TEST_TxDataRate11n */
int WIFI_TEST_TxDataRate11n(void);

/* Symbol: WIFI_TEST_TxDestAddress */
/* Demangled: WIFI_TEST_TxDestAddress */
int WIFI_TEST_TxDestAddress(void);

/* Symbol: WIFI_TEST_TxStop */
/* Demangled: WIFI_TEST_TxStop */
int WIFI_TEST_TxStop(void);

/* Symbol: WIFI_TEST_EFUSE_Read */
/* Demangled: WIFI_TEST_EFUSE_Read */
int WIFI_TEST_EFUSE_Read(void);

/* Symbol: WIFI_TEST_GetResult */
/* Demangled: WIFI_TEST_GetResult */
int WIFI_TEST_GetResult(void);

/* Symbol: WIFI_TEST_RSSI_05_DBM */
/* Demangled: WIFI_TEST_RSSI_05_DBM */
int WIFI_TEST_RSSI_05_DBM(void);

/* Symbol: WIFI_IF_NAME */
/* Demangled: WIFI_IF_NAME */
extern void* WIFI_IF_NAME;

/* Symbol: WIFI_TEST_SetRate */
/* Demangled: WIFI_TEST_SetRate */
int WIFI_TEST_SetRate(void);

/* Symbol: WIFI_TEST_get */
/* Demangled: WIFI_TEST_get */
int WIFI_TEST_get(void);

/* Symbol: WIFI_TEST_init */
/* Demangled: WIFI_TEST_init */
int WIFI_TEST_init(void);

/* Symbol: WIFI_TEST_FrequencyAccuracy */
/* Demangled: WIFI_TEST_FrequencyAccuracy */
int WIFI_TEST_FrequencyAccuracy(void);

/* Symbol: WIFI_TEST_TxCount */
/* Demangled: WIFI_TEST_TxCount */
int WIFI_TEST_TxCount(void);

/* Symbol: WIFI_TEST_TxDataRate */
/* Demangled: WIFI_TEST_TxDataRate */
int WIFI_TEST_TxDataRate(void);

/* Symbol: WIFI_TEST_TxGoodCount */
/* Demangled: WIFI_TEST_TxGoodCount */
int WIFI_TEST_TxGoodCount(void);

/* Symbol: WIFI_TEST_GetSupportedMode */
/* Demangled: WIFI_TEST_GetSupportedMode */
int WIFI_TEST_GetSupportedMode(void);

/* Symbol: WIFI_TEST_HQA_DBDCStartRXExt */
/* Demangled: WIFI_TEST_HQA_DBDCStartRXExt */
int WIFI_TEST_HQA_DBDCStartRXExt(void);

/* Symbol: WIFI_TEST_OpenDUT */
/* Demangled: WIFI_TEST_OpenDUT */
int WIFI_TEST_OpenDUT(void);

/* Symbol: WIFI_TEST_SetJMode */
/* Demangled: WIFI_TEST_SetJMode */
int WIFI_TEST_SetJMode(void);

/* Symbol: WIFI_TEST_TxGain */
/* Demangled: WIFI_TEST_TxGain */
int WIFI_TEST_TxGain(void);

/* Symbol: WIFI_TEST_GI */
/* Demangled: WIFI_TEST_GI */
int WIFI_TEST_GI(void);

/* Symbol: WIFI_TEST_HQA_DBDCTXTone */
/* Demangled: WIFI_TEST_HQA_DBDCTXTone */
int WIFI_TEST_HQA_DBDCTXTone(void);

/* Symbol: WIFI_TEST_SetTX */
/* Demangled: WIFI_TEST_SetTX */
int WIFI_TEST_SetTX(void);

/* Symbol: WIFI_TEST_Channel */
/* Demangled: WIFI_TEST_Channel */
int WIFI_TEST_Channel(void);

/* Symbol: WIFI_TEST_SetBandwidth */
/* Demangled: WIFI_TEST_SetBandwidth */
int WIFI_TEST_SetBandwidth(void);

/* Symbol: WIFI_TEST_ClearResult */
/* Demangled: WIFI_TEST_ClearResult */
int WIFI_TEST_ClearResult(void);

/* Symbol: WIFI_TEST_FrequencyAccuracy_Stop */
/* Demangled: WIFI_TEST_FrequencyAccuracy_Stop */
int WIFI_TEST_FrequencyAccuracy_Stop(void);

/* Symbol: WIFI_TEST_SetFrequency */
/* Demangled: WIFI_TEST_SetFrequency */
int WIFI_TEST_SetFrequency(void);

/* Symbol: WIFI_TEST_HQA_DBDCSetChannel */
/* Demangled: WIFI_TEST_HQA_DBDCSetChannel */
int WIFI_TEST_HQA_DBDCSetChannel(void);

/* Symbol: WIFI_TEST_TEMP_COMPEN_MODE */
/* Demangled: WIFI_TEST_TEMP_COMPEN_MODE */
int WIFI_TEST_TEMP_COMPEN_MODE(void);

/* Symbol: WIFI_TEST_HQA_DBDCStartTX */
/* Demangled: WIFI_TEST_HQA_DBDCStartTX */
int WIFI_TEST_HQA_DBDCStartTX(void);

/* Symbol: WIFI_TEST_HQA_GetRXStatisticsAllExt */
/* Demangled: WIFI_TEST_HQA_GetRXStatisticsAllExt */
int WIFI_TEST_HQA_GetRXStatisticsAllExt(void);

/* Symbol: WIFI_TEST_MCR_Write */
/* Demangled: WIFI_TEST_MCR_Write */
int WIFI_TEST_MCR_Write(void);

/* Symbol: WIFI_TEST_SetPreamble */
/* Demangled: WIFI_TEST_SetPreamble */
int WIFI_TEST_SetPreamble(void);

/* Symbol: WIFI_TEST_TX_POWER_MODE */
/* Demangled: WIFI_TEST_TX_POWER_MODE */
int WIFI_TEST_TX_POWER_MODE(void);

/* Symbol: WIFI_TEST_set */
/* Demangled: WIFI_TEST_set */
int WIFI_TEST_set(void);

/* Symbol: WIFI_TEST_HQA_GetAFactor */
/* Demangled: WIFI_TEST_HQA_GetAFactor */
int WIFI_TEST_HQA_GetAFactor(void);

/* Symbol: WIFI_TEST_HQA_SetNss */
/* Demangled: WIFI_TEST_HQA_SetNss */
int WIFI_TEST_HQA_SetNss(void);

/* Symbol: WIFI_TEST_HQA_SetPreamble */
/* Demangled: WIFI_TEST_HQA_SetPreamble */
int WIFI_TEST_HQA_SetPreamble(void);

/* Symbol: WIFI_TEST_MCR_Read */
/* Demangled: WIFI_TEST_MCR_Read */
int WIFI_TEST_MCR_Read(void);

/* Symbol: WIFI_TEST_PrimaryChannel */
/* Demangled: WIFI_TEST_PrimaryChannel */
int WIFI_TEST_PrimaryChannel(void);

/* Symbol: WIFI_TEST_SetTxCodingMode */
/* Demangled: WIFI_TEST_SetTxCodingMode */
int WIFI_TEST_SetTxCodingMode(void);

/* Symbol: WIFI_TEST_TxBurstInterval */
/* Demangled: WIFI_TEST_TxBurstInterval */
int WIFI_TEST_TxBurstInterval(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWIFITEST_H */
