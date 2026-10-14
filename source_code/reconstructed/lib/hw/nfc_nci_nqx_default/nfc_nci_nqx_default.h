/*
 * Reverse-Engineered ABI Specification for: nfc_nci.nqx.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: nfc_nci.nqx.default.so
 */

#ifndef BEGONIA_RE_NFC_NCI_NQX_DEFAULT_H
#define BEGONIA_RE_NFC_NCI_NQX_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z20phDal4Nfc_msgreleasei */
/* Demangled: phDal4Nfc_msgrelease(int) */
int _Z20phDal4Nfc_msgreleasei(void);

/* Symbol: _Z31phTmlNfc_i2c_open_and_configureP15phTmlNfc_ConfigPPv */
/* Demangled: phTmlNfc_i2c_open_and_configure(phTmlNfc_Config*, void**) */
int _Z31phTmlNfc_i2c_open_and_configureP15phTmlNfc_ConfigPPv(void);

/* Symbol: _ZN10CNfcConfigD0Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD0Ev(void);

/* Symbol: NXPLOG_ITEM_FWDNLD */
/* Demangled: NXPLOG_ITEM_FWDNLD */
extern void* NXPLOG_ITEM_FWDNLD;

/* Symbol: _Z17phNxpDta_IsEnablev */
/* Demangled: phNxpDta_IsEnable() */
int _Z17phNxpDta_IsEnablev(void);

/* Symbol: _Z27phNxpNciHal_release_controlv */
/* Demangled: phNxpNciHal_release_control() */
int _Z27phNxpNciHal_release_controlv(void);

/* Symbol: isNxpRFConfigModified */
/* Demangled: isNxpRFConfigModified */
int isNxpRFConfigModified(void);

/* Symbol: _Z23phNxpNciHal_AntennaTestv */
/* Demangled: phNxpNciHal_AntennaTest() */
int _Z23phNxpNciHal_AntennaTestv(void);

/* Symbol: NXPLOG_ITEM_TML */
/* Demangled: NXPLOG_ITEM_TML */
extern void* NXPLOG_ITEM_TML;

/* Symbol: icode_send_eof */
/* Demangled: icode_send_eof */
extern void* icode_send_eof;

/* Symbol: _ZN10capabilityC2Ev */
/* Demangled: capability::capability() */
int _ZN10capabilityC2Ev(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcRm */
/* Demangled: CNfcConfig::getValue(char const*, unsigned long&) const */
int _ZNK10CNfcConfig8getValueEPKcRm(void);

/* Symbol: _Z13phTmlNfc_ReadPhtPFvPvP21phTmlNfc_TransactInfoES0_ */
/* Demangled: phTmlNfc_Read(unsigned char*, unsigned short, void (*)(void*, phTmlNfc_TransactInfo*), void*) */
int _Z13phTmlNfc_ReadPhtPFvPvP21phTmlNfc_TransactInfoES0_(void);

/* Symbol: _Z18phTmlNfc_ReadAbortv */
/* Demangled: phTmlNfc_ReadAbort() */
int _Z18phTmlNfc_ReadAbortv(void);

/* Symbol: phOsalNfc_Timer_Stop */
/* Demangled: phOsalNfc_Timer_Stop */
int phOsalNfc_Timer_Stop(void);

/* Symbol: _Z19phTmlNfc_WriteAbortv */
/* Demangled: phTmlNfc_WriteAbort() */
int _Z19phTmlNfc_WriteAbortv(void);

/* Symbol: NXPLOG_ITEM_NCIX */
/* Demangled: NXPLOG_ITEM_NCIX */
extern void* NXPLOG_ITEM_NCIX;

/* Symbol: phNxpNciHal_AntennaSelfTest */
/* Demangled: phNxpNciHal_AntennaSelfTest */
int phNxpNciHal_AntennaSelfTest(void);

/* Symbol: _Z30phNxpNciHal_check_clock_configv */
/* Demangled: phNxpNciHal_check_clock_config() */
int _Z30phNxpNciHal_check_clock_configv(void);

/* Symbol: _ZN10capability11getInstanceEv */
/* Demangled: capability::getInstance() */
int _ZN10capability11getInstanceEv(void);

/* Symbol: _Z26phNxpNciHal_NfcDep_cmd_extPhPt */
/* Demangled: phNxpNciHal_NfcDep_cmd_ext(unsigned char*, unsigned short*) */
int _Z26phNxpNciHal_NfcDep_cmd_extPhPt(void);

/* Symbol: _ZN10CNfcConfig10file_existEPKc */
/* Demangled: CNfcConfig::file_exist(char const*) */
int _ZN10CNfcConfig10file_existEPKc(void);

/* Symbol: _ZN10CNfcConfig10readConfigEPKcb */
/* Demangled: CNfcConfig::readConfig(char const*, bool) */
int _ZN10CNfcConfig10readConfigEPKcb(void);

/* Symbol: phOsalNfc_Timer_Create */
/* Demangled: phOsalNfc_Timer_Create */
int phOsalNfc_Timer_Create(void);

/* Symbol: _Z27phNxpNciHal_request_controlv */
/* Demangled: phNxpNciHal_request_control() */
int _Z27phNxpNciHal_request_controlv(void);

/* Symbol: _Z16phDal4Nfc_msgctliiPv */
/* Demangled: phDal4Nfc_msgctl(int, int, void*) */
int _Z16phDal4Nfc_msgctliiPv(void);

/* Symbol: _Z14phTmlNfc_IoCtl22phTmlNfc_ControlCode_t */
/* Demangled: phTmlNfc_IoCtl(phTmlNfc_ControlCode_t) */
int _Z14phTmlNfc_IoCtl22phTmlNfc_ControlCode_t(void);

/* Symbol: phNxpNciHal_TestMode_close */
/* Demangled: phNxpNciHal_TestMode_close */
int phNxpNciHal_TestMode_close(void);

/* Symbol: _ZN9CNfcParamD0Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD0Ev(void);

/* Symbol: _Z21phDnldNfc_InitImgInfov */
/* Demangled: phDnldNfc_InitImgInfo() */
int _Z21phDnldNfc_InitImgInfov(void);

/* Symbol: _Z21phTmlNfc_DeferredCalljP16phLibNfc_Message */
/* Demangled: phTmlNfc_DeferredCall(unsigned int, phLibNfc_Message*) */
int _Z21phTmlNfc_DeferredCalljP16phLibNfc_Message(void);

/* Symbol: _Z37phNxpNciHal_check_ncicmd_write_windowtPh */
/* Demangled: phNxpNciHal_check_ncicmd_write_window(unsigned short, unsigned char*) */
int _Z37phNxpNciHal_check_ncicmd_write_windowtPh(void);

/* Symbol: _ZN9CNfcParamC1EPKcm */
/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
int _ZN9CNfcParamC1EPKcm(void);

/* Symbol: _ZNK10CNfcConfig4findEPKc */
/* Demangled: CNfcConfig::find(char const*) const */
int _ZNK10CNfcConfig4findEPKc(void);

/* Symbol: _Z16phNxpNciHal_openPFvhhEPFvtPhE */
/* Demangled: phNxpNciHal_open(void (*)(unsigned char, unsigned char), void (*)(unsigned short, unsigned char*)) */
int _Z16phNxpNciHal_openPFvhhEPFvtPhE(void);

/* Symbol: EnableP2P_PrioLogic */
/* Demangled: EnableP2P_PrioLogic */
extern void* EnableP2P_PrioLogic;

/* Symbol: _ZN10CNfcConfig9isAllowedEPKc */
/* Demangled: CNfcConfig::isAllowed(char const*) */
int _ZN10CNfcConfig9isAllowedEPKc(void);

/* Symbol: _ZN10CNfcConfigD1Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD1Ev(void);

/* Symbol: _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZTV10CNfcConfig */
/* Demangled: vtable for CNfcConfig */
extern void* _ZTV10CNfcConfig;

/* Symbol: _Z10read_retryv */
/* Demangled: read_retry() */
int _Z10read_retryv(void);

/* Symbol: _Z30phNxpNciHal_lastResetNtfReasonv */
/* Demangled: phNxpNciHal_lastResetNtfReason() */
int _Z30phNxpNciHal_lastResetNtfReasonv(void);

/* Symbol: force_fw_download_req */
/* Demangled: force_fw_download_req */
extern void* force_fw_download_req;

/* Symbol: _ZNK10CNfcConfig8getValueEPKcRt */
/* Demangled: CNfcConfig::getValue(char const*, unsigned short&) const */
int _ZNK10CNfcConfig8getValueEPKcRt(void);

/* Symbol: _Z29phNxpNciHal_configFeatureListPht */
/* Demangled: phNxpNciHal_configFeatureList(unsigned char*, unsigned short) */
int _Z29phNxpNciHal_configFeatureListPht(void);

/* Symbol: _Z18phTmlNfc_i2c_closePv */
/* Demangled: phTmlNfc_i2c_close(void*) */
int _Z18phTmlNfc_i2c_closePv(void);

/* Symbol: _Z19phNxpNciHal_MinOpenv */
/* Demangled: phNxpNciHal_MinOpen() */
int _Z19phNxpNciHal_MinOpenv(void);

/* Symbol: _Z35phNxpNciHal_deinitializeRegRfFwDnldv */
/* Demangled: phNxpNciHal_deinitializeRegRfFwDnld() */
int _Z35phNxpNciHal_deinitializeRegRfFwDnldv(void);

/* Symbol: updateNxpConfigTimestamp */
/* Demangled: updateNxpConfigTimestamp */
int updateNxpConfigTimestamp(void);

/* Symbol: _Z23phNxpNciHal_performTestP13nci_test_data */
/* Demangled: phNxpNciHal_performTest(nci_test_data*) */
int _Z23phNxpNciHal_performTestP13nci_test_data(void);

/* Symbol: _Z18phTmlNfc_i2c_resetPvl */
/* Demangled: phTmlNfc_i2c_reset(void*, long) */
int _Z18phTmlNfc_i2c_resetPvl(void);

/* Symbol: _ZN10CNfcConfigC1Ev */
/* Demangled: CNfcConfig::CNfcConfig() */
int _ZN10CNfcConfigC1Ev(void);

/* Symbol: wMwVer */
/* Demangled: wMwVer */
extern void* wMwVer;

/* Symbol: _Z33phNxpNciHal_initializeRegRfFwDnldv */
/* Demangled: phNxpNciHal_initializeRegRfFwDnld() */
int _Z33phNxpNciHal_initializeRegRfFwDnldv(void);

/* Symbol: _ZN10CNfcConfig3addEPK9CNfcParam */
/* Demangled: CNfcConfig::add(CNfcParam const*) */
int _ZN10CNfcConfig3addEPK9CNfcParam(void);

/* Symbol: nxpncihal_ctrl */
/* Demangled: nxpncihal_ctrl */
extern void* nxpncihal_ctrl;

/* Symbol: _Z34phTmlNfc_get_fragmentation_enabledv */
/* Demangled: phTmlNfc_get_fragmentation_enabled() */
int _Z34phTmlNfc_get_fragmentation_enabledv(void);

/* Symbol: _Z30phNxpNciHal_releaseall_cb_datav */
/* Demangled: phNxpNciHal_releaseall_cb_data() */
int _Z30phNxpNciHal_releaseall_cb_datav(void);

/* Symbol: _Z23phNxpNciHal_getChipTypev */
/* Demangled: phNxpNciHal_getChipType() */
int _Z23phNxpNciHal_getChipTypev(void);

/* Symbol: _Z25phTmlNfc_ConfigNciPktReTx24phTmlNfc_ConfigRetrans_th */
/* Demangled: phTmlNfc_ConfigNciPktReTx(phTmlNfc_ConfigRetrans_t, unsigned char) */
int _Z25phTmlNfc_ConfigNciPktReTx24phTmlNfc_ConfigRetrans_th(void);

/* Symbol: _ZN10CNfcConfig10moveToListEv */
/* Demangled: CNfcConfig::moveToList() */
int _ZN10CNfcConfig10moveToListEv(void);

/* Symbol: _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<CNfcParam const*, std::__1::allocator<CNfcParam const*> >::__push_back_slow_path<CNfcParam const* const&>(CNfcParam const* const&) */
int _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _Z24phDnldNfc_LoadRecoveryFWPKcPPhPj */
/* Demangled: phDnldNfc_LoadRecoveryFW(char const*, unsigned char**, unsigned int*) */
int _Z24phDnldNfc_LoadRecoveryFWPKcPPhPj(void);

/* Symbol: _Z29phNxpNciHal_getFWDownloadFlagPh */
/* Demangled: phNxpNciHal_getFWDownloadFlag(unsigned char*) */
int _Z29phNxpNciHal_getFWDownloadFlagPh(void);

/* Symbol: _Z30phNxpNciHal_configDiscShutdownv */
/* Demangled: phNxpNciHal_configDiscShutdown() */
int _Z30phNxpNciHal_configDiscShutdownv(void);

/* Symbol: wFwUpdateReq */
/* Demangled: wFwUpdateReq */
extern void* wFwUpdateReq;

/* Symbol: _ZN9CNfcParamD1Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD1Ev(void);

/* Symbol: _Z36phNxpNciHal_notify_i2c_fragmentationv */
/* Demangled: phNxpNciHal_notify_i2c_fragmentation() */
int _Z36phNxpNciHal_notify_i2c_fragmentationv(void);

/* Symbol: _ZN10capability8chipTypeE */
/* Demangled: capability::chipType */
extern void* _ZN10capability8chipTypeE;

/* Symbol: _ZN10CNfcConfigD2Ev */
/* Demangled: CNfcConfig::~CNfcConfig() */
int _ZN10CNfcConfigD2Ev(void);

/* Symbol: _Z25phDnldNfc_GetSessionStateP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_GetSessionState(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z25phDnldNfc_GetSessionStateP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z22check_config_parameterv */
/* Demangled: check_config_parameter() */
int _Z22check_config_parameterv(void);

/* Symbol: _Z24phNxpNciHal_pre_discoverv */
/* Demangled: phNxpNciHal_pre_discover() */
int _Z24phNxpNciHal_pre_discoverv(void);

/* Symbol: phAntenna_resp */
/* Demangled: phAntenna_resp */
extern void* phAntenna_resp;

/* Symbol: phNxpNciHal_TestMode_open */
/* Demangled: phNxpNciHal_TestMode_open */
int phNxpNciHal_TestMode_open(void);

/* Symbol: _Z12sparse_crc32jPKvi */
/* Demangled: sparse_crc32(unsigned int, void const*, int) */
int _Z12sparse_crc32jPKvi(void);

/* Symbol: _ZN10CNfcConfig10isModifiedE14tNXP_CONF_FILE */
/* Demangled: CNfcConfig::isModified(tNXP_CONF_FILE) */
int _ZN10CNfcConfig10isModifiedE14tNXP_CONF_FILE(void);

/* Symbol: _ZN9CNfcParamC1Ev */
/* Demangled: CNfcParam::CNfcParam() */
int _ZN9CNfcParamC1Ev(void);

/* Symbol: _Z20phDnldNfc_CmdHandlerPv15phDnldNfc_Event */
/* Demangled: phDnldNfc_CmdHandler(void*, phDnldNfc_Event) */
int _Z20phDnldNfc_CmdHandlerPv15phDnldNfc_Event(void);

/* Symbol: _Z24phNxpNciHal_getNxpConfigP24nfc_nci_IoctlInOutData_t */
/* Demangled: phNxpNciHal_getNxpConfig(nfc_nci_IoctlInOutData_t*) */
int _Z24phNxpNciHal_getNxpConfigP24nfc_nci_IoctlInOutData_t(void);

/* Symbol: _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _Z17phDnldNfc_ReadLogP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_ReadLog(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z17phDnldNfc_ReadLogP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z21phDnldNfc_LoadRecInfov */
/* Demangled: phDnldNfc_LoadRecInfo() */
int _Z21phDnldNfc_LoadRecInfov(void);

/* Symbol: gLog_level */
/* Demangled: gLog_level */
extern void* gLog_level;

/* Symbol: phOsalNfc_Timer_Delete */
/* Demangled: phOsalNfc_Timer_Delete */
int phOsalNfc_Timer_Delete(void);

/* Symbol: NXPLOG_ITEM_NCIHAL */
/* Demangled: NXPLOG_ITEM_NCIHAL */
extern void* NXPLOG_ITEM_NCIHAL;

/* Symbol: _Z24phNxpNciHal_init_monitorv */
/* Demangled: phNxpNciHal_init_monitor() */
int _Z24phNxpNciHal_init_monitorv(void);

/* Symbol: phNxpNciRfSet */
/* Demangled: phNxpNciRfSet */
extern void* phNxpNciRfSet;

/* Symbol: _Z24phNxpNciHal_print_packetPKcPKht */
/* Demangled: phNxpNciHal_print_packet(char const*, unsigned char const*, unsigned short) */
int _Z24phNxpNciHal_print_packetPKcPKht(void);

/* Symbol: phNxpNciHal_RfFieldTest */
/* Demangled: phNxpNciHal_RfFieldTest */
int phNxpNciHal_RfFieldTest(void);

/* Symbol: _ZN10CNfcConfigC2Ev */
/* Demangled: CNfcConfig::CNfcConfig() */
int _ZN10CNfcConfigC2Ev(void);

/* Symbol: _Z15phDnldNfc_ResetPFvPvtS_ES_ */
/* Demangled: phDnldNfc_Reset(void (*)(void*, unsigned short, void*), void*) */
int _Z15phDnldNfc_ResetPFvPvtS_ES_(void);

/* Symbol: _Z24phDnldNfc_CheckIntegrityhP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_CheckIntegrity(unsigned char, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z24phDnldNfc_CheckIntegrityhP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z20phNxpNciHal_ext_initv */
/* Demangled: phNxpNciHal_ext_init() */
int _Z20phNxpNciHal_ext_initv(void);

/* Symbol: _Z31phNxpNciHal_setNxpTransitConfigPc */
/* Demangled: phNxpNciHal_setNxpTransitConfig(char*) */
int _Z31phNxpNciHal_setNxpTransitConfigPc(void);

/* Symbol: _Z19phNxpEnable_DtaModet */
/* Demangled: phNxpEnable_DtaMode(unsigned short) */
int _Z19phNxpEnable_DtaModet(void);

/* Symbol: _Z39phNxpNciHal_determineConfiguredClockSrcv */
/* Demangled: phNxpNciHal_determineConfiguredClockSrc() */
int _Z39phNxpNciHal_determineConfiguredClockSrcv(void);

/* Symbol: nxp_rf_config_path */
/* Demangled: nxp_rf_config_path */
extern void* nxp_rf_config_path;

/* Symbol: _Z21phNxpNciHal_write_extPtPhS_S0_ */
/* Demangled: phNxpNciHal_write_ext(unsigned short*, unsigned char*, unsigned short*, unsigned char*) */
int _Z21phNxpNciHal_write_extPtPhS_S0_(void);

/* Symbol: _Z32phNxpNciHal_nfcc_core_reset_initv */
/* Demangled: phNxpNciHal_nfcc_core_reset_init() */
int _Z32phNxpNciHal_nfcc_core_reset_initv(void);

/* Symbol: fpRegRfFwDndl */
/* Demangled: fpRegRfFwDndl */
extern void* fpRegRfFwDndl;

/* Symbol: _Z20listGetAndRemoveNextP8listHeadPPv */
/* Demangled: listGetAndRemoveNext(listHead*, void**) */
int _Z20listGetAndRemoveNextP8listHeadPPv(void);

/* Symbol: _Z22phNxpNciHal_initParserv */
/* Demangled: phNxpNciHal_initParser() */
int _Z22phNxpNciHal_initParserv(void);

/* Symbol: _Z23phNxpNciHal_power_cyclev */
/* Demangled: phNxpNciHal_power_cycle() */
int _Z23phNxpNciHal_power_cyclev(void);

/* Symbol: _Z27phNxpNciHal_getVendorConfigRN7android8hardware3nfc4V1_19NfcConfigE */
/* Demangled: phNxpNciHal_getVendorConfig(android::hardware::nfc::V1_1::NfcConfig&) */
int _Z27phNxpNciHal_getVendorConfigRN7android8hardware3nfc4V1_19NfcConfigE(void);

/* Symbol: nfcioctldata */
/* Demangled: nfcioctldata */
extern void* nfcioctldata;

/* Symbol: _ZN10capability8instanceE */
/* Demangled: capability::instance */
extern void* _ZN10capability8instanceE;

/* Symbol: _ZN9CNfcParamD2Ev */
/* Demangled: CNfcParam::~CNfcParam() */
int _ZN9CNfcParamD2Ev(void);

/* Symbol: fragmentation_enabled */
/* Demangled: fragmentation_enabled */
extern void* fragmentation_enabled;

/* Symbol: _Z17phNxpNciHal_closeb */
/* Demangled: phNxpNciHal_close(bool) */
int _Z17phNxpNciHal_closeb(void);

/* Symbol: _Z25phNxpNciHal_send_get_cfgsv */
/* Demangled: phNxpNciHal_send_get_cfgs() */
int _Z25phNxpNciHal_send_get_cfgsv(void);

/* Symbol: gtxldo_status */
/* Demangled: gtxldo_status */
extern void* gtxldo_status;

/* Symbol: _ZN10CNfcConfig12moveFromListEv */
/* Demangled: CNfcConfig::moveFromList() */
int _ZN10CNfcConfig12moveFromListEv(void);

/* Symbol: transport_config_paths */
/* Demangled: transport_config_paths */
extern void* transport_config_paths;

/* Symbol: _Z7listAddP8listHeadPv */
/* Demangled: listAdd(listHead*, void*) */
int _Z7listAddP8listHeadPv(void);

/* Symbol: _Z14request_EEPROMP20phNxpNci_EEPROM_info */
/* Demangled: request_EEPROM(phNxpNci_EEPROM_info*) */
int _Z14request_EEPROMP20phNxpNci_EEPROM_info(void);

/* Symbol: rf_block_name */
/* Demangled: rf_block_name */
extern void* rf_block_name;

/* Symbol: _Z27phNxpNciHal_cleanup_monitorv */
/* Demangled: phNxpNciHal_cleanup_monitor() */
int _Z27phNxpNciHal_cleanup_monitorv(void);

/* Symbol: _Z34phTmlNfc_set_fragmentation_enabled27phTmlNfc_i2cfragmentation_t */
/* Demangled: phTmlNfc_set_fragmentation_enabled(phTmlNfc_i2cfragmentation_t) */
int _Z34phTmlNfc_set_fragmentation_enabled27phTmlNfc_i2cfragmentation_t(void);

/* Symbol: _ZN9CNfcParamC2Ev */
/* Demangled: CNfcParam::CNfcParam() */
int _ZN9CNfcParamC2Ev(void);

/* Symbol: _Z28phNxpNciHal_send_ese_hal_cmdtPh */
/* Demangled: phNxpNciHal_send_ese_hal_cmd(unsigned short, unsigned char*) */
int _Z28phNxpNciHal_send_ese_hal_cmdtPh(void);

/* Symbol: mGetCfg_info */
/* Demangled: mGetCfg_info */
extern void* mGetCfg_info;

/* Symbol: _ZNK10CNfcConfig15readNxpRFConfigEPKc */
/* Demangled: CNfcConfig::readNxpRFConfig(char const*) const */
int _ZNK10CNfcConfig15readNxpRFConfigEPKc(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcPcj */
/* Demangled: CNfcConfig::getValue(char const*, char*, unsigned int) const */
int _ZNK10CNfcConfig8getValueEPKcPcj(void);

/* Symbol: nfcFL */
/* Demangled: nfcFL */
extern void* nfcFL;

/* Symbol: _Z19phDnldNfc_CalcCrc16Pht */
/* Demangled: phDnldNfc_CalcCrc16(unsigned char*, unsigned short) */
int _Z19phDnldNfc_CalcCrc16Pht(void);

/* Symbol: _Z28phNxpNciHal_do_factory_resetv */
/* Demangled: phNxpNciHal_do_factory_reset() */
int _Z28phNxpNciHal_do_factory_resetv(void);

/* Symbol: _Z38phNxpNciHal_determineClockDelayRequesth */
/* Demangled: phNxpNciHal_determineClockDelayRequest(unsigned char) */
int _Z38phNxpNciHal_determineClockDelayRequesth(void);

/* Symbol: GetNxpByteArrayValue */
/* Demangled: GetNxpByteArrayValue */
int GetNxpByteArrayValue(void);

/* Symbol: wFwVerRsp */
/* Demangled: wFwVerRsp */
extern void* wFwVerRsp;

/* Symbol: _ZN10CNfcConfig19getconfiguration_idEPc */
/* Demangled: CNfcConfig::getconfiguration_id(char*) */
int _ZN10CNfcConfig19getconfiguration_idEPc(void);

/* Symbol: gRecFWDwnld */
/* Demangled: gRecFWDwnld */
extern void* gRecFWDwnld;

/* Symbol: _Z23phNxpNciHal_get_monitorv */
/* Demangled: phNxpNciHal_get_monitor() */
int _Z23phNxpNciHal_get_monitorv(void);

/* Symbol: _Z24phNxpNciHal_deinitParserv */
/* Demangled: phNxpNciHal_deinitParser() */
int _Z24phNxpNciHal_deinitParserv(void);

/* Symbol: config_data */
/* Demangled: config_data */
extern void* config_data;

/* Symbol: notifyFwrequest */
/* Demangled: notifyFwrequest */
extern void* notifyFwrequest;

/* Symbol: NXPLOG_ITEM_EXTNS */
/* Demangled: NXPLOG_ITEM_EXTNS */
extern void* NXPLOG_ITEM_EXTNS;

/* Symbol: _Z25phTmlNfc_Shutdown_CleanUpv */
/* Demangled: phTmlNfc_Shutdown_CleanUp() */
int _Z25phTmlNfc_Shutdown_CleanUpv(void);

/* Symbol: discover_type */
/* Demangled: discover_type */
extern void* discover_type;

/* Symbol: _Z18phTmlNfc_i2c_writePvPhi */
/* Demangled: phTmlNfc_i2c_write(void*, unsigned char*, int) */
int _Z18phTmlNfc_i2c_writePvPhi(void);

/* Symbol: _Z10listRemoveP8listHeadPv */
/* Demangled: listRemove(listHead*, void*) */
int _Z10listRemoveP8listHeadPv(void);

/* Symbol: _Z16phDnldNfc_RawReqP14phDnldNfc_BuffS0_PFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_RawReq(phDnldNfc_Buff*, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z16phDnldNfc_RawReqP14phDnldNfc_BuffS0_PFvPvtS1_ES1_(void);

/* Symbol: phNxpNciMwEepromArea */
/* Demangled: phNxpNciMwEepromArea */
extern void* phNxpNciMwEepromArea;

/* Symbol: timeoutTimerId */
/* Demangled: timeoutTimerId */
extern void* timeoutTimerId;

/* Symbol: phOsalNfc_CheckTimerPresence */
/* Demangled: phOsalNfc_CheckTimerPresence */
int phOsalNfc_CheckTimerPresence(void);

/* Symbol: _Z8listDumpP8listHead */
/* Demangled: listDump(listHead*) */
int _Z8listDumpP8listHead(void);

/* Symbol: _Z17phTmlNfc_Shutdownv */
/* Demangled: phTmlNfc_Shutdown() */
int _Z17phTmlNfc_Shutdownv(void);

/* Symbol: _ZN10capability15processChipTypeEPht */
/* Demangled: capability::processChipType(unsigned char*, unsigned short) */
int _ZN10capability15processChipTypeEPht(void);

/* Symbol: _Z15phDnldNfc_WritehP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_Write(unsigned char, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z15phDnldNfc_WritehP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z19phDnldNfc_LoadBinFWPPhPj */
/* Demangled: phDnldNfc_LoadBinFW(unsigned char**, unsigned int*) */
int _Z19phDnldNfc_LoadBinFWPPhPj(void);

/* Symbol: nfc_debug_enabled */
/* Demangled: nfc_debug_enabled */
extern void* nfc_debug_enabled;

/* Symbol: phOsalNfc_Timer_Start */
/* Demangled: phOsalNfc_Timer_Start */
int phOsalNfc_Timer_Start(void);

/* Symbol: _Z27phNxpLog_InitializeLogLevelv */
/* Demangled: phNxpLog_InitializeLogLevel() */
int _Z27phNxpLog_InitializeLogLevelv(void);

/* Symbol: _Z36phNxpNciHal_china_tianjin_rf_settingv */
/* Demangled: phNxpNciHal_china_tianjin_rf_setting() */
int _Z36phNxpNciHal_china_tianjin_rf_settingv(void);

/* Symbol: _Z37phNxpNciHal_enableDefaultUICC2SWPlineh */
/* Demangled: phNxpNciHal_enableDefaultUICC2SWPline(unsigned char) */
int _Z37phNxpNciHal_enableDefaultUICC2SWPlineh(void);

/* Symbol: fpVerInfoStoreInEeprom */
/* Demangled: fpVerInfoStoreInEeprom */
extern void* fpVerInfoStoreInEeprom;

/* Symbol: updateNxpRfConfigTimestamp */
/* Demangled: updateNxpRfConfigTimestamp */
int updateNxpRfConfigTimestamp(void);

/* Symbol: _Z13phDnldNfc_LogP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_Log(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z13phDnldNfc_LogP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z26phDnldNfc_ReSetHwDevHandlev */
/* Demangled: phDnldNfc_ReSetHwDevHandle() */
int _Z26phDnldNfc_ReSetHwDevHandlev(void);

/* Symbol: _Z17phTmlNfc_i2c_readPvPhi */
/* Demangled: phTmlNfc_i2c_read(void*, unsigned char*, int) */
int _Z17phTmlNfc_i2c_readPvPhi(void);

/* Symbol: _Z18readOptionalConfigPKc */
/* Demangled: readOptionalConfig(char const*) */
int _Z18readOptionalConfigPKc(void);

/* Symbol: _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_ */
/* Demangled: findConfigFilePathFromTransportConfigPaths(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_(void);

/* Symbol: gagc_value_status */
/* Demangled: gagc_value_status */
extern void* gagc_value_status;

/* Symbol: phNxpNciHal_PrbsTestStop */
/* Demangled: phNxpNciHal_PrbsTestStop */
int phNxpNciHal_PrbsTestStop(void);

/* Symbol: _ZN10CNfcConfig4dumpEv */
/* Demangled: CNfcConfig::dump() */
int _ZN10CNfcConfig4dumpEv(void);

/* Symbol: RfFwRegionDnld_handle */
/* Demangled: RfFwRegionDnld_handle */
extern void* RfFwRegionDnld_handle;

/* Symbol: _Z14phTmlNfc_WritePhtPFvPvP21phTmlNfc_TransactInfoES0_ */
/* Demangled: phTmlNfc_Write(unsigned char*, unsigned short, void (*)(void*, phTmlNfc_TransactInfo*), void*) */
int _Z14phTmlNfc_WritePhtPFvPvP21phTmlNfc_TransactInfoES0_(void);

/* Symbol: _ZTV9CNfcParam */
/* Demangled: vtable for CNfcParam */
extern void* _ZTV9CNfcParam;

/* Symbol: _Z8listInitP8listHead */
/* Demangled: listInit(listHead*) */
int _Z8listInitP8listHead(void);

/* Symbol: _Z20phDnldNfc_LoadPKInfov */
/* Demangled: phDnldNfc_LoadPKInfo() */
int _Z20phDnldNfc_LoadPKInfov(void);

/* Symbol: gParserCreated */
/* Demangled: gParserCreated */
extern void* gParserCreated;

/* Symbol: _ZN9CNfcParamC2EPKcm */
/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
int _ZN9CNfcParamC2EPKcm(void);

/* Symbol: icode_detected */
/* Demangled: icode_detected */
extern void* icode_detected;

/* Symbol: _Z17phNxpNciHal_ioctllPv */
/* Demangled: phNxpNciHal_ioctl(long, void*) */
int _Z17phNxpNciHal_ioctllPv(void);

/* Symbol: fw_dwnld_flag */
/* Demangled: fw_dwnld_flag */
extern void* fw_dwnld_flag;

/* Symbol: setNxpFwConfigPath */
/* Demangled: setNxpFwConfigPath */
int setNxpFwConfigPath(void);

/* Symbol: wRfUpdateReq */
/* Demangled: wRfUpdateReq */
extern void* wRfUpdateReq;

/* Symbol: _Z15phDnldNfc_ForceP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_Force(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z15phDnldNfc_ForceP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z18phPalEse_spi_ioctl22phPalEse_ControlCode_tPvl */
/* Demangled: phPalEse_spi_ioctl(phPalEse_ControlCode_t, void*, long) */
int _Z18phPalEse_spi_ioctl22phPalEse_ControlCode_tPvl(void);

/* Symbol: _Z26phNxpNciHal_write_unlockedtPKh */
/* Demangled: phNxpNciHal_write_unlocked(unsigned short, unsigned char const*) */
int _Z26phNxpNciHal_write_unlockedtPKh(void);

/* Symbol: _Z35phNxpNciHal_CheckFwRegFlashRequiredPhS_h */
/* Demangled: phNxpNciHal_CheckFwRegFlashRequired(unsigned char*, unsigned char*, unsigned char) */
int _Z35phNxpNciHal_CheckFwRegFlashRequiredPhS_h(void);

/* Symbol: _Z31phNxpNciHal_select_RF_Discoveryjj */
/* Demangled: phNxpNciHal_select_RF_Discovery(unsigned int, unsigned int) */
int _Z31phNxpNciHal_select_RF_Discoveryjj(void);

/* Symbol: gDrvCfg */
/* Demangled: gDrvCfg */
extern void* gDrvCfg;

/* Symbol: _Z16phDal4Nfc_msggetii */
/* Demangled: phDal4Nfc_msgget(int, int) */
int _Z16phDal4Nfc_msggetii(void);

/* Symbol: phNxpNciClock */
/* Demangled: phNxpNciClock */
extern void* phNxpNciClock;

/* Symbol: _Z10tmp_threadPv */
/* Demangled: tmp_thread(void*) */
int _Z10tmp_threadPv(void);

/* Symbol: _Z22phNxpNciHal_getPrbsCmd19phNxpNfc_PrbsType_t21phNxpNfc_PrbsHwType_thhPhh */
/* Demangled: phNxpNciHal_getPrbsCmd(phNxpNfc_PrbsType_t, phNxpNfc_PrbsHwType_t, unsigned char, unsigned char, unsigned char*, unsigned char) */
int _Z22phNxpNciHal_getPrbsCmd19phNxpNfc_PrbsType_t21phNxpNfc_PrbsHwType_thhPhh(void);

/* Symbol: _Z26phDnldNfc_CloseFwLibHandlev */
/* Demangled: phDnldNfc_CloseFwLibHandle() */
int _Z26phDnldNfc_CloseFwLibHandlev(void);

/* Symbol: wFwVer */
/* Demangled: wFwVer */
extern void* wFwVer;

/* Symbol: _Z29phNxpNciHal_PropEsePowerCyclev */
/* Demangled: phNxpNciHal_PropEsePowerCycle() */
int _Z29phNxpNciHal_PropEsePowerCyclev(void);

/* Symbol: phOsalNfc_Timer_Cleanup */
/* Demangled: phOsalNfc_Timer_Cleanup */
int phOsalNfc_Timer_Cleanup(void);

/* Symbol: _Z30phNxpNciHal_emergency_recoveryh */
/* Demangled: phNxpNciHal_emergency_recovery(unsigned char) */
int _Z30phNxpNciHal_emergency_recoveryh(void);

/* Symbol: gagc_differential_status */
/* Demangled: gagc_differential_status */
extern void* gagc_differential_status;

/* Symbol: _Z27phNxpNciHal_fw_download_seqhh */
/* Demangled: phNxpNciHal_fw_download_seq(unsigned char, unsigned char) */
int _Z27phNxpNciHal_fw_download_seqhh(void);

/* Symbol: Fw_Lib_Path */
/* Demangled: Fw_Lib_Path */
extern void* Fw_Lib_Path;

/* Symbol: _Z13phTmlNfc_InitP15phTmlNfc_Config */
/* Demangled: phTmlNfc_Init(phTmlNfc_Config*) */
int _Z13phTmlNfc_InitP15phTmlNfc_Config(void);

/* Symbol: _Z19phNxpNHal_DtaUpdatePtPhS_S0_ */
/* Demangled: phNxpNHal_DtaUpdate(unsigned short*, unsigned char*, unsigned short*, unsigned char*) */
int _Z19phNxpNHal_DtaUpdatePtPhS_S0_(void);

/* Symbol: _Z16phDal4Nfc_msgrcviP16phLibNfc_Messageli */
/* Demangled: phDal4Nfc_msgrcv(int, phLibNfc_Message*, long, int) */
int _Z16phDal4Nfc_msgrcviP16phLibNfc_Messageli(void);

/* Symbol: _Z24phNxpNciHal_send_ext_cmdtPh */
/* Demangled: phNxpNciHal_send_ext_cmd(unsigned short, unsigned char*) */
int _Z24phNxpNciHal_send_ext_cmdtPh(void);

/* Symbol: _Z41phNxpNciHal_ext_send_sram_config_to_flashv */
/* Demangled: phNxpNciHal_ext_send_sram_config_to_flash() */
int _Z41phNxpNciHal_ext_send_sram_config_to_flashv(void);

/* Symbol: _ZN10CNfcConfig13resetModifiedE14tNXP_CONF_FILE */
/* Demangled: CNfcConfig::resetModified(tNXP_CONF_FILE) */
int _ZN10CNfcConfig13resetModifiedE14tNXP_CONF_FILE(void);

/* Symbol: _Z16phTmlNfc_CleanUpv */
/* Demangled: phTmlNfc_CleanUp() */
int _Z16phTmlNfc_CleanUpv(void);

/* Symbol: _Z23phNxpNciHal_parsePacketPht */
/* Demangled: phNxpNciHal_parsePacket(unsigned char*, unsigned short) */
int _Z23phNxpNciHal_parsePacketPht(void);

/* Symbol: setNxpRfConfigPath */
/* Demangled: setNxpRfConfigPath */
int setNxpRfConfigPath(void);

/* Symbol: phNxpNciHal_PrbsTestStart */
/* Demangled: phNxpNciHal_PrbsTestStart */
int phNxpNciHal_PrbsTestStart(void);

/* Symbol: _ZNK10CNfcConfig20readNxpTransitConfigEPKc */
/* Demangled: CNfcConfig::readNxpTransitConfig(char const*) const */
int _ZNK10CNfcConfig20readNxpTransitConfigEPKc(void);

/* Symbol: _Z18phNxpDta_T1TEnablev */
/* Demangled: phNxpDta_T1TEnable() */
int _Z18phNxpDta_T1TEnablev(void);

/* Symbol: txrxSemaphore */
/* Demangled: txrxSemaphore */
extern void* txrxSemaphore;

/* Symbol: _ZN10CNfcConfig11GetInstanceEv */
/* Demangled: CNfcConfig::GetInstance() */
int _ZN10CNfcConfig11GetInstanceEv(void);

/* Symbol: _Z17phNxpNciHal_writetPKh */
/* Demangled: phNxpNciHal_write(unsigned short, unsigned char const*) */
int _Z17phNxpNciHal_writetPKh(void);

/* Symbol: gpphTmlNfc_Context */
/* Demangled: gpphTmlNfc_Context */
extern void* gpphTmlNfc_Context;

/* Symbol: p_nfc_stack_cback_backup */
/* Demangled: p_nfc_stack_cback_backup */
extern void* p_nfc_stack_cback_backup;

/* Symbol: resetNxpConfig */
/* Demangled: resetNxpConfig */
int resetNxpConfig(void);

/* Symbol: rom_version */
/* Demangled: rom_version */
extern void* rom_version;

/* Symbol: gagc_nfcld_status */
/* Demangled: gagc_nfcld_status */
extern void* gagc_nfcld_status;

/* Symbol: _Z15getDownloadFlagv */
/* Demangled: getDownloadFlag() */
int _Z15getDownloadFlagv(void);

/* Symbol: _Z11listDestroyP8listHead */
/* Demangled: listDestroy(listHead*) */
int _Z11listDestroyP8listHead(void);

/* Symbol: _Z18phDnldNfc_UnloadFWv */
/* Demangled: phDnldNfc_UnloadFW() */
int _Z18phDnldNfc_UnloadFWv(void);

/* Symbol: fw_maj_ver */
/* Demangled: fw_maj_ver */
extern void* fw_maj_ver;

/* Symbol: _Z20phNxpDisable_DtaModev */
/* Demangled: phNxpDisable_DtaMode() */
int _Z20phNxpDisable_DtaModev(void);

/* Symbol: _Z16phDnldNfc_LoadFWPKcPPhPj */
/* Demangled: phDnldNfc_LoadFW(char const*, unsigned char**, unsigned int*) */
int _Z16phDnldNfc_LoadFWPKcPPhPj(void);

/* Symbol: _Z24phNxpNciHal_init_cb_dataP15phNxpNciHal_SemPv */
/* Demangled: phNxpNciHal_init_cb_data(phNxpNciHal_Sem*, void*) */
int _Z24phNxpNciHal_init_cb_dataP15phNxpNciHal_SemPv(void);

/* Symbol: _Z27phNxpNciHal_control_grantedv */
/* Demangled: phNxpNciHal_control_granted() */
int _Z27phNxpNciHal_control_grantedv(void);

/* Symbol: _Z27phNxpNciHal_process_ext_rspPhPt */
/* Demangled: phNxpNciHal_process_ext_rsp(unsigned char*, unsigned short*) */
int _Z27phNxpNciHal_process_ext_rspPhPt(void);

/* Symbol: _ZN10capabilityC1Ev */
/* Demangled: capability::capability() */
int _ZN10capabilityC1Ev(void);

/* Symbol: _Z20phDnldNfc_GetVersionP14phDnldNfc_BuffPFvPvtS1_ES1_ */
/* Demangled: phDnldNfc_GetVersion(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
int _Z20phDnldNfc_GetVersionP14phDnldNfc_BuffPFvPvtS1_ES1_(void);

/* Symbol: _Z27phNxpNciHal_cleanup_cb_dataP15phNxpNciHal_Sem */
/* Demangled: phNxpNciHal_cleanup_cb_data(phNxpNciHal_Sem*) */
int _Z27phNxpNciHal_cleanup_cb_dataP15phNxpNciHal_Sem(void);

/* Symbol: _Z16phDal4Nfc_msgsndiP16phLibNfc_Messagei */
/* Demangled: phDal4Nfc_msgsnd(int, phLibNfc_Message*, int) */
int _Z16phDal4Nfc_msgsndiP16phLibNfc_Messagei(void);

/* Symbol: _ZNK10CNfcConfig8getValueEPKcPclPl */
/* Demangled: CNfcConfig::getValue(char const*, char*, long, long*) const */
int _ZNK10CNfcConfig8getValueEPKcPclPl(void);

/* Symbol: GetNxpNumValue */
/* Demangled: GetNxpNumValue */
int GetNxpNumValue(void);

/* Symbol: _Z24phDnldNfc_SetHwDevHandlev */
/* Demangled: phDnldNfc_SetHwDevHandle() */
int _Z24phDnldNfc_SetHwDevHandlev(void);

/* Symbol: nxpprofile_ctrl */
/* Demangled: nxpprofile_ctrl */
extern void* nxpprofile_ctrl;

/* Symbol: phNxpNciHal_DownloadPinTest */
/* Demangled: phNxpNciHal_DownloadPinTest */
int phNxpNciHal_DownloadPinTest(void);

/* Symbol: phUtilNfc_CheckForAvailableTimer */
/* Demangled: phUtilNfc_CheckForAvailableTimer */
int phUtilNfc_CheckForAvailableTimer(void);

/* Symbol: _ZN10CNfcConfig5cleanEv */
/* Demangled: CNfcConfig::clean() */
int _ZN10CNfcConfig5cleanEv(void);

/* Symbol: GetNxpStrValue */
/* Demangled: GetNxpStrValue */
int GetNxpStrValue(void);

/* Symbol: cleanup_timer */
/* Demangled: cleanup_timer */
extern void* cleanup_timer;

/* Symbol: _Z28phNxpNciHal_core_initializedPh */
/* Demangled: phNxpNciHal_core_initialized(unsigned char*) */
int _Z28phNxpNciHal_core_initializedPh(void);

/* Symbol: isNxpConfigModified */
/* Demangled: isNxpConfigModified */
int isNxpConfigModified(void);

/* Symbol: NXPLOG_ITEM_NCIR */
/* Demangled: NXPLOG_ITEM_NCIR */
extern void* NXPLOG_ITEM_NCIR;

/* Symbol: phNxpNciHal_SwpTest */
/* Demangled: phNxpNciHal_SwpTest */
int phNxpNciHal_SwpTest(void);

__END_DECLS

#endif /* BEGONIA_RE_NFC_NCI_NQX_DEFAULT_H */
