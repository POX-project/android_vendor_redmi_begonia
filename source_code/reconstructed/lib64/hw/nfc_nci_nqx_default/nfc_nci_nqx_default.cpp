/*
 * Reverse-Engineered Source for: nfc_nci.nqx.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "nfc_nci_nqx_default"

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
#include "nfc_nci_nqx_default.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_NQ_NCI "/dev/nq-nci"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_NQ_NCI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_NQ_NCI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_NQ_NCI, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: phTmlNfc_i2c_open_and_configure(phTmlNfc_Config*, void**) */
extern "C" __attribute__((visibility("default"))) int _Z31phTmlNfc_i2c_open_and_configureP15phTmlNfc_ConfigPPv(void) {
    ALOGD("_Z31phTmlNfc_i2c_open_and_configureP15phTmlNfc_ConfigPPv() called");
    return 0;
}

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD0Ev(void) {
    ALOGD("_ZN10CNfcConfigD0Ev() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_FWDNLD */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_FWDNLD = NULL;

/* Demangled: phNxpDta_IsEnable() */
extern "C" __attribute__((visibility("default"))) int _Z17phNxpDta_IsEnablev(void) {
    ALOGD("_Z17phNxpDta_IsEnablev() called");
    return 0;
}

/* Demangled: phNxpNciHal_release_control() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_release_controlv(void) {
    ALOGD("_Z27phNxpNciHal_release_controlv() called");
    return 0;
}

/* Demangled: isNxpRFConfigModified */
extern "C" __attribute__((visibility("default"))) int isNxpRFConfigModified(void) {
    ALOGD("isNxpRFConfigModified() called");
    return 0;
}

/* Demangled: phNxpNciHal_AntennaTest() */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_AntennaTestv(void) {
    ALOGD("_Z23phNxpNciHal_AntennaTestv() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_TML */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_TML = NULL;

/* Demangled: phDal4Nfc_msgrelease(long) */
extern "C" __attribute__((visibility("default"))) int _Z20phDal4Nfc_msgreleasel(void) {
    ALOGD("_Z20phDal4Nfc_msgreleasel() called");
    return 0;
}

/* Exported Object: icode_send_eof */
extern "C" __attribute__((visibility("default"))) void* icode_send_eof = NULL;

/* Demangled: capability::capability() */
extern "C" __attribute__((visibility("default"))) int _ZN10capabilityC2Ev(void) {
    ALOGD("_ZN10capabilityC2Ev() called");
    return 0;
}

/* Demangled: CNfcConfig::getValue(char const*, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcRm(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcRm() called");
    return 0;
}

/* Demangled: phTmlNfc_Read(unsigned char*, unsigned short, void (*)(void*, phTmlNfc_TransactInfo*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z13phTmlNfc_ReadPhtPFvPvP21phTmlNfc_TransactInfoES0_(void) {
    ALOGD("_Z13phTmlNfc_ReadPhtPFvPvP21phTmlNfc_TransactInfoES0_() called");
    return 0;
}

/* Demangled: phTmlNfc_ReadAbort() */
extern "C" __attribute__((visibility("default"))) int _Z18phTmlNfc_ReadAbortv(void) {
    ALOGD("_Z18phTmlNfc_ReadAbortv() called");
    return 0;
}

/* Demangled: phOsalNfc_Timer_Stop */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_Timer_Stop(void) {
    ALOGD("phOsalNfc_Timer_Stop() called");
    return 0;
}

/* Demangled: phTmlNfc_WriteAbort() */
extern "C" __attribute__((visibility("default"))) int _Z19phTmlNfc_WriteAbortv(void) {
    ALOGD("_Z19phTmlNfc_WriteAbortv() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_NCIX */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIX = NULL;

/* Demangled: phNxpNciHal_AntennaSelfTest */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_AntennaSelfTest(void) {
    ALOGD("phNxpNciHal_AntennaSelfTest() called");
    return 0;
}

/* Demangled: phNxpNciHal_check_clock_config() */
extern "C" __attribute__((visibility("default"))) int _Z30phNxpNciHal_check_clock_configv(void) {
    ALOGD("_Z30phNxpNciHal_check_clock_configv() called");
    return 0;
}

/* Demangled: capability::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10capability11getInstanceEv(void) {
    ALOGD("_ZN10capability11getInstanceEv() called");
    return 0;
}

/* Demangled: phNxpNciHal_NfcDep_cmd_ext(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z26phNxpNciHal_NfcDep_cmd_extPhPt(void) {
    ALOGD("_Z26phNxpNciHal_NfcDep_cmd_extPhPt() called");
    return 0;
}

/* Demangled: CNfcConfig::file_exist(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10file_existEPKc(void) {
    ALOGD("_ZN10CNfcConfig10file_existEPKc() called");
    return 0;
}

/* Demangled: CNfcConfig::readConfig(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10readConfigEPKcb(void) {
    ALOGD("_ZN10CNfcConfig10readConfigEPKcb() called");
    return 0;
}

/* Demangled: phOsalNfc_Timer_Create */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_Timer_Create(void) {
    ALOGD("phOsalNfc_Timer_Create() called");
    return 0;
}

/* Demangled: phNxpNciHal_request_control() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_request_controlv(void) {
    ALOGD("_Z27phNxpNciHal_request_controlv() called");
    return 0;
}

/* Demangled: phTmlNfc_IoCtl(phTmlNfc_ControlCode_t) */
extern "C" __attribute__((visibility("default"))) int _Z14phTmlNfc_IoCtl22phTmlNfc_ControlCode_t(void) {
    ALOGD("_Z14phTmlNfc_IoCtl22phTmlNfc_ControlCode_t() called");
    return 0;
}

/* Demangled: phNxpNciHal_TestMode_close */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_TestMode_close(void) {
    ALOGD("phNxpNciHal_TestMode_close() called");
    return 0;
}

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD0Ev(void) {
    ALOGD("_ZN9CNfcParamD0Ev() called");
    return 0;
}

/* Demangled: phDnldNfc_InitImgInfo() */
extern "C" __attribute__((visibility("default"))) int _Z21phDnldNfc_InitImgInfov(void) {
    ALOGD("_Z21phDnldNfc_InitImgInfov() called");
    return 0;
}

/* Demangled: phNxpNciHal_check_ncicmd_write_window(unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z37phNxpNciHal_check_ncicmd_write_windowtPh(void) {
    ALOGD("_Z37phNxpNciHal_check_ncicmd_write_windowtPh() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1EPKcm(void) {
    ALOGD("_ZN9CNfcParamC1EPKcm() called");
    return 0;
}

/* Demangled: CNfcConfig::find(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig4findEPKc(void) {
    ALOGD("_ZNK10CNfcConfig4findEPKc() called");
    return 0;
}

/* Demangled: phNxpNciHal_open(void (*)(unsigned char, unsigned char), void (*)(unsigned short, unsigned char*)) */
extern "C" __attribute__((visibility("default"))) int _Z16phNxpNciHal_openPFvhhEPFvtPhE(void) {
    ALOGD("_Z16phNxpNciHal_openPFvhhEPFvtPhE() called");
    return 0;
}

/* Exported Object: EnableP2P_PrioLogic */
extern "C" __attribute__((visibility("default"))) void* EnableP2P_PrioLogic = NULL;

/* Demangled: CNfcConfig::isAllowed(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig9isAllowedEPKc(void) {
    ALOGD("_ZN10CNfcConfig9isAllowedEPKc() called");
    return 0;
}

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD1Ev(void) {
    ALOGD("_ZN10CNfcConfigD1Ev() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for CNfcConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CNfcConfig = NULL;

/* Demangled: read_retry() */
extern "C" __attribute__((visibility("default"))) int _Z10read_retryv(void) {
    ALOGD("_Z10read_retryv() called");
    return 0;
}

/* Demangled: phNxpNciHal_lastResetNtfReason() */
extern "C" __attribute__((visibility("default"))) int _Z30phNxpNciHal_lastResetNtfReasonv(void) {
    ALOGD("_Z30phNxpNciHal_lastResetNtfReasonv() called");
    return 0;
}

/* Exported Object: force_fw_download_req */
extern "C" __attribute__((visibility("default"))) void* force_fw_download_req = NULL;

/* Demangled: CNfcConfig::getValue(char const*, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcRt(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcRt() called");
    return 0;
}

/* Demangled: phNxpNciHal_configFeatureList(unsigned char*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z29phNxpNciHal_configFeatureListPht(void) {
    ALOGD("_Z29phNxpNciHal_configFeatureListPht() called");
    return 0;
}

/* Demangled: phTmlNfc_i2c_close(void*) */
extern "C" __attribute__((visibility("default"))) int _Z18phTmlNfc_i2c_closePv(void) {
    ALOGD("_Z18phTmlNfc_i2c_closePv() called");
    return 0;
}

/* Demangled: phNxpNciHal_MinOpen() */
extern "C" __attribute__((visibility("default"))) int _Z19phNxpNciHal_MinOpenv(void) {
    ALOGD("_Z19phNxpNciHal_MinOpenv() called");
    return 0;
}

/* Demangled: phNxpNciHal_deinitializeRegRfFwDnld() */
extern "C" __attribute__((visibility("default"))) int _Z35phNxpNciHal_deinitializeRegRfFwDnldv(void) {
    ALOGD("_Z35phNxpNciHal_deinitializeRegRfFwDnldv() called");
    return 0;
}

/* Demangled: updateNxpConfigTimestamp */
extern "C" __attribute__((visibility("default"))) int updateNxpConfigTimestamp(void) {
    ALOGD("updateNxpConfigTimestamp() called");
    return 0;
}

/* Demangled: phNxpNciHal_performTest(nci_test_data*) */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_performTestP13nci_test_data(void) {
    ALOGD("_Z23phNxpNciHal_performTestP13nci_test_data() called");
    return 0;
}

/* Demangled: phTmlNfc_i2c_reset(void*, long) */
extern "C" __attribute__((visibility("default"))) int _Z18phTmlNfc_i2c_resetPvl(void) {
    ALOGD("_Z18phTmlNfc_i2c_resetPvl() called");
    return 0;
}

/* Demangled: CNfcConfig::CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigC1Ev(void) {
    ALOGD("_ZN10CNfcConfigC1Ev() called");
    return 0;
}

/* Exported Object: wMwVer */
extern "C" __attribute__((visibility("default"))) void* wMwVer = NULL;

/* Demangled: phNxpNciHal_initializeRegRfFwDnld() */
extern "C" __attribute__((visibility("default"))) int _Z33phNxpNciHal_initializeRegRfFwDnldv(void) {
    ALOGD("_Z33phNxpNciHal_initializeRegRfFwDnldv() called");
    return 0;
}

/* Demangled: CNfcConfig::add(CNfcParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig3addEPK9CNfcParam(void) {
    ALOGD("_ZN10CNfcConfig3addEPK9CNfcParam() called");
    return 0;
}

/* Exported Object: nxpncihal_ctrl */
extern "C" __attribute__((visibility("default"))) void* nxpncihal_ctrl = NULL;

/* Demangled: phTmlNfc_get_fragmentation_enabled() */
extern "C" __attribute__((visibility("default"))) int _Z34phTmlNfc_get_fragmentation_enabledv(void) {
    ALOGD("_Z34phTmlNfc_get_fragmentation_enabledv() called");
    return 0;
}

/* Demangled: phNxpNciHal_releaseall_cb_data() */
extern "C" __attribute__((visibility("default"))) int _Z30phNxpNciHal_releaseall_cb_datav(void) {
    ALOGD("_Z30phNxpNciHal_releaseall_cb_datav() called");
    return 0;
}

/* Demangled: phNxpNciHal_getChipType() */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_getChipTypev(void) {
    ALOGD("_Z23phNxpNciHal_getChipTypev() called");
    return 0;
}

/* Demangled: phTmlNfc_ConfigNciPktReTx(phTmlNfc_ConfigRetrans_t, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z25phTmlNfc_ConfigNciPktReTx24phTmlNfc_ConfigRetrans_th(void) {
    ALOGD("_Z25phTmlNfc_ConfigNciPktReTx24phTmlNfc_ConfigRetrans_th() called");
    return 0;
}

/* Demangled: CNfcConfig::moveToList() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10moveToListEv(void) {
    ALOGD("_ZN10CNfcConfig10moveToListEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<CNfcParam const*, std::__1::allocator<CNfcParam const*> >::__push_back_slow_path<CNfcParam const* const&>(CNfcParam const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: phDnldNfc_LoadRecoveryFW(char const*, unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z24phDnldNfc_LoadRecoveryFWPKcPPhPj(void) {
    ALOGD("_Z24phDnldNfc_LoadRecoveryFWPKcPPhPj() called");
    return 0;
}

/* Demangled: phNxpNciHal_getFWDownloadFlag(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z29phNxpNciHal_getFWDownloadFlagPh(void) {
    ALOGD("_Z29phNxpNciHal_getFWDownloadFlagPh() called");
    return 0;
}

/* Demangled: phNxpNciHal_configDiscShutdown() */
extern "C" __attribute__((visibility("default"))) int _Z30phNxpNciHal_configDiscShutdownv(void) {
    ALOGD("_Z30phNxpNciHal_configDiscShutdownv() called");
    return 0;
}

/* Exported Object: wFwUpdateReq */
extern "C" __attribute__((visibility("default"))) void* wFwUpdateReq = NULL;

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD1Ev(void) {
    ALOGD("_ZN9CNfcParamD1Ev() called");
    return 0;
}

/* Demangled: phNxpNciHal_notify_i2c_fragmentation() */
extern "C" __attribute__((visibility("default"))) int _Z36phNxpNciHal_notify_i2c_fragmentationv(void) {
    ALOGD("_Z36phNxpNciHal_notify_i2c_fragmentationv() called");
    return 0;
}

/* Exported Object: capability::chipType */
extern "C" __attribute__((visibility("default"))) void* _ZN10capability8chipTypeE = NULL;

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD2Ev(void) {
    ALOGD("_ZN10CNfcConfigD2Ev() called");
    return 0;
}

/* Demangled: phDnldNfc_GetSessionState(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z25phDnldNfc_GetSessionStateP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z25phDnldNfc_GetSessionStateP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: check_config_parameter() */
extern "C" __attribute__((visibility("default"))) int _Z22check_config_parameterv(void) {
    ALOGD("_Z22check_config_parameterv() called");
    return 0;
}

/* Demangled: phNxpNciHal_pre_discover() */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_pre_discoverv(void) {
    ALOGD("_Z24phNxpNciHal_pre_discoverv() called");
    return 0;
}

/* Exported Object: phAntenna_resp */
extern "C" __attribute__((visibility("default"))) void* phAntenna_resp = NULL;

/* Demangled: phNxpNciHal_TestMode_open */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_TestMode_open(void) {
    ALOGD("phNxpNciHal_TestMode_open() called");
    return 0;
}

/* Demangled: sparse_crc32(unsigned int, void const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12sparse_crc32jPKvi(void) {
    ALOGD("_Z12sparse_crc32jPKvi() called");
    return 0;
}

/* Demangled: CNfcConfig::isModified(tNXP_CONF_FILE) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10isModifiedE14tNXP_CONF_FILE(void) {
    ALOGD("_ZN10CNfcConfig10isModifiedE14tNXP_CONF_FILE() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1Ev(void) {
    ALOGD("_ZN9CNfcParamC1Ev() called");
    return 0;
}

/* Demangled: phDnldNfc_CmdHandler(void*, phDnldNfc_Event) */
extern "C" __attribute__((visibility("default"))) int _Z20phDnldNfc_CmdHandlerPv15phDnldNfc_Event(void) {
    ALOGD("_Z20phDnldNfc_CmdHandlerPv15phDnldNfc_Event() called");
    return 0;
}

/* Demangled: phNxpNciHal_getNxpConfig(nfc_nci_IoctlInOutData_t*) */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_getNxpConfigP24nfc_nci_IoctlInOutData_t(void) {
    ALOGD("_Z24phNxpNciHal_getNxpConfigP24nfc_nci_IoctlInOutData_t() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: phDnldNfc_ReadLog(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z17phDnldNfc_ReadLogP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z17phDnldNfc_ReadLogP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phDnldNfc_LoadRecInfo() */
extern "C" __attribute__((visibility("default"))) int _Z21phDnldNfc_LoadRecInfov(void) {
    ALOGD("_Z21phDnldNfc_LoadRecInfov() called");
    return 0;
}

/* Exported Object: gLog_level */
extern "C" __attribute__((visibility("default"))) void* gLog_level = NULL;

/* Demangled: phOsalNfc_Timer_Delete */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_Timer_Delete(void) {
    ALOGD("phOsalNfc_Timer_Delete() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_NCIHAL */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIHAL = NULL;

/* Demangled: phNxpNciHal_init_monitor() */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_init_monitorv(void) {
    ALOGD("_Z24phNxpNciHal_init_monitorv() called");
    return 0;
}

/* Exported Object: phNxpNciRfSet */
extern "C" __attribute__((visibility("default"))) void* phNxpNciRfSet = NULL;

/* Demangled: phNxpNciHal_print_packet(char const*, unsigned char const*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_print_packetPKcPKht(void) {
    ALOGD("_Z24phNxpNciHal_print_packetPKcPKht() called");
    return 0;
}

/* Demangled: phNxpNciHal_RfFieldTest */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_RfFieldTest(void) {
    ALOGD("phNxpNciHal_RfFieldTest() called");
    return 0;
}

/* Demangled: CNfcConfig::CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigC2Ev(void) {
    ALOGD("_ZN10CNfcConfigC2Ev() called");
    return 0;
}

/* Demangled: phDnldNfc_Reset(void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z15phDnldNfc_ResetPFvPvtS_ES_(void) {
    ALOGD("_Z15phDnldNfc_ResetPFvPvtS_ES_() called");
    return 0;
}

/* Demangled: phDnldNfc_CheckIntegrity(unsigned char, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z24phDnldNfc_CheckIntegrityhP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z24phDnldNfc_CheckIntegrityhP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phNxpNciHal_ext_init() */
extern "C" __attribute__((visibility("default"))) int _Z20phNxpNciHal_ext_initv(void) {
    ALOGD("_Z20phNxpNciHal_ext_initv() called");
    return 0;
}

/* Demangled: phNxpNciHal_setNxpTransitConfig(char*) */
extern "C" __attribute__((visibility("default"))) int _Z31phNxpNciHal_setNxpTransitConfigPc(void) {
    ALOGD("_Z31phNxpNciHal_setNxpTransitConfigPc() called");
    return 0;
}

/* Demangled: phNxpEnable_DtaMode(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z19phNxpEnable_DtaModet(void) {
    ALOGD("_Z19phNxpEnable_DtaModet() called");
    return 0;
}

/* Demangled: phNxpNciHal_determineConfiguredClockSrc() */
extern "C" __attribute__((visibility("default"))) int _Z39phNxpNciHal_determineConfiguredClockSrcv(void) {
    ALOGD("_Z39phNxpNciHal_determineConfiguredClockSrcv() called");
    return 0;
}

/* Exported Object: nxp_rf_config_path */
extern "C" __attribute__((visibility("default"))) void* nxp_rf_config_path = NULL;

/* Demangled: phNxpNciHal_write_ext(unsigned short*, unsigned char*, unsigned short*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z21phNxpNciHal_write_extPtPhS_S0_(void) {
    ALOGD("_Z21phNxpNciHal_write_extPtPhS_S0_() called");
    return 0;
}

/* Demangled: phNxpNciHal_nfcc_core_reset_init() */
extern "C" __attribute__((visibility("default"))) int _Z32phNxpNciHal_nfcc_core_reset_initv(void) {
    ALOGD("_Z32phNxpNciHal_nfcc_core_reset_initv() called");
    return 0;
}

/* Exported Object: fpRegRfFwDndl */
extern "C" __attribute__((visibility("default"))) void* fpRegRfFwDndl = NULL;

/* Demangled: listGetAndRemoveNext(listHead*, void**) */
extern "C" __attribute__((visibility("default"))) int _Z20listGetAndRemoveNextP8listHeadPPv(void) {
    ALOGD("_Z20listGetAndRemoveNextP8listHeadPPv() called");
    return 0;
}

/* Demangled: phNxpNciHal_initParser() */
extern "C" __attribute__((visibility("default"))) int _Z22phNxpNciHal_initParserv(void) {
    ALOGD("_Z22phNxpNciHal_initParserv() called");
    return 0;
}

/* Demangled: phNxpNciHal_power_cycle() */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_power_cyclev(void) {
    ALOGD("_Z23phNxpNciHal_power_cyclev() called");
    return 0;
}

/* Demangled: phNxpNciHal_getVendorConfig(android::hardware::nfc::V1_1::NfcConfig&) */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_getVendorConfigRN7android8hardware3nfc4V1_19NfcConfigE(void) {
    ALOGD("_Z27phNxpNciHal_getVendorConfigRN7android8hardware3nfc4V1_19NfcConfigE() called");
    return 0;
}

/* Exported Object: nfcioctldata */
extern "C" __attribute__((visibility("default"))) void* nfcioctldata = NULL;

/* Exported Object: capability::instance */
extern "C" __attribute__((visibility("default"))) void* _ZN10capability8instanceE = NULL;

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD2Ev(void) {
    ALOGD("_ZN9CNfcParamD2Ev() called");
    return 0;
}

/* Exported Object: fragmentation_enabled */
extern "C" __attribute__((visibility("default"))) void* fragmentation_enabled = NULL;

/* Demangled: phNxpNciHal_close(bool) */
extern "C" __attribute__((visibility("default"))) int _Z17phNxpNciHal_closeb(void) {
    ALOGD("_Z17phNxpNciHal_closeb() called");
    return 0;
}

/* Demangled: phNxpNciHal_send_get_cfgs() */
extern "C" __attribute__((visibility("default"))) int _Z25phNxpNciHal_send_get_cfgsv(void) {
    ALOGD("_Z25phNxpNciHal_send_get_cfgsv() called");
    return 0;
}

/* Exported Object: gtxldo_status */
extern "C" __attribute__((visibility("default"))) void* gtxldo_status = NULL;

/* Demangled: CNfcConfig::moveFromList() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig12moveFromListEv(void) {
    ALOGD("_ZN10CNfcConfig12moveFromListEv() called");
    return 0;
}

/* Exported Object: transport_config_paths */
extern "C" __attribute__((visibility("default"))) void* transport_config_paths = NULL;

/* Demangled: listAdd(listHead*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z7listAddP8listHeadPv(void) {
    ALOGD("_Z7listAddP8listHeadPv() called");
    return 0;
}

/* Demangled: request_EEPROM(phNxpNci_EEPROM_info*) */
extern "C" __attribute__((visibility("default"))) int _Z14request_EEPROMP20phNxpNci_EEPROM_info(void) {
    ALOGD("_Z14request_EEPROMP20phNxpNci_EEPROM_info() called");
    return 0;
}

/* Exported Object: rf_block_name */
extern "C" __attribute__((visibility("default"))) void* rf_block_name = NULL;

/* Demangled: phNxpNciHal_cleanup_monitor() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_cleanup_monitorv(void) {
    ALOGD("_Z27phNxpNciHal_cleanup_monitorv() called");
    return 0;
}

/* Demangled: phTmlNfc_set_fragmentation_enabled(phTmlNfc_i2cfragmentation_t) */
extern "C" __attribute__((visibility("default"))) int _Z34phTmlNfc_set_fragmentation_enabled27phTmlNfc_i2cfragmentation_t(void) {
    ALOGD("_Z34phTmlNfc_set_fragmentation_enabled27phTmlNfc_i2cfragmentation_t() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2Ev(void) {
    ALOGD("_ZN9CNfcParamC2Ev() called");
    return 0;
}

/* Demangled: phNxpNciHal_send_ese_hal_cmd(unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z28phNxpNciHal_send_ese_hal_cmdtPh(void) {
    ALOGD("_Z28phNxpNciHal_send_ese_hal_cmdtPh() called");
    return 0;
}

/* Exported Object: mGetCfg_info */
extern "C" __attribute__((visibility("default"))) void* mGetCfg_info = NULL;

/* Demangled: CNfcConfig::readNxpRFConfig(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig15readNxpRFConfigEPKc(void) {
    ALOGD("_ZNK10CNfcConfig15readNxpRFConfigEPKc() called");
    return 0;
}

/* Exported Object: nfcFL */
extern "C" __attribute__((visibility("default"))) void* nfcFL = NULL;

/* Demangled: phDnldNfc_CalcCrc16(unsigned char*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z19phDnldNfc_CalcCrc16Pht(void) {
    ALOGD("_Z19phDnldNfc_CalcCrc16Pht() called");
    return 0;
}

/* Demangled: phNxpNciHal_do_factory_reset() */
extern "C" __attribute__((visibility("default"))) int _Z28phNxpNciHal_do_factory_resetv(void) {
    ALOGD("_Z28phNxpNciHal_do_factory_resetv() called");
    return 0;
}

/* Demangled: phNxpNciHal_determineClockDelayRequest(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z38phNxpNciHal_determineClockDelayRequesth(void) {
    ALOGD("_Z38phNxpNciHal_determineClockDelayRequesth() called");
    return 0;
}

/* Demangled: phDal4Nfc_msgsnd(long, phLibNfc_Message*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16phDal4Nfc_msgsndlP16phLibNfc_Messagei(void) {
    ALOGD("_Z16phDal4Nfc_msgsndlP16phLibNfc_Messagei() called");
    return 0;
}

/* Demangled: GetNxpByteArrayValue */
extern "C" __attribute__((visibility("default"))) int GetNxpByteArrayValue(void) {
    ALOGD("GetNxpByteArrayValue() called");
    return 0;
}

/* Exported Object: wFwVerRsp */
extern "C" __attribute__((visibility("default"))) void* wFwVerRsp = NULL;

/* Demangled: CNfcConfig::getconfiguration_id(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig19getconfiguration_idEPc(void) {
    ALOGD("_ZN10CNfcConfig19getconfiguration_idEPc() called");
    return 0;
}

/* Exported Object: gRecFWDwnld */
extern "C" __attribute__((visibility("default"))) void* gRecFWDwnld = NULL;

/* Demangled: phNxpNciHal_get_monitor() */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_get_monitorv(void) {
    ALOGD("_Z23phNxpNciHal_get_monitorv() called");
    return 0;
}

/* Demangled: phNxpNciHal_deinitParser() */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_deinitParserv(void) {
    ALOGD("_Z24phNxpNciHal_deinitParserv() called");
    return 0;
}

/* Exported Object: config_data */
extern "C" __attribute__((visibility("default"))) void* config_data = NULL;

/* Exported Object: notifyFwrequest */
extern "C" __attribute__((visibility("default"))) void* notifyFwrequest = NULL;

/* Exported Object: NXPLOG_ITEM_EXTNS */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_EXTNS = NULL;

/* Demangled: CNfcConfig::getValue(char const*, char*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcPcm(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcPcm() called");
    return 0;
}

/* Demangled: phTmlNfc_Shutdown_CleanUp() */
extern "C" __attribute__((visibility("default"))) int _Z25phTmlNfc_Shutdown_CleanUpv(void) {
    ALOGD("_Z25phTmlNfc_Shutdown_CleanUpv() called");
    return 0;
}

/* Exported Object: discover_type */
extern "C" __attribute__((visibility("default"))) void* discover_type = NULL;

/* Demangled: phTmlNfc_i2c_write(void*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18phTmlNfc_i2c_writePvPhi(void) {
    ALOGD("_Z18phTmlNfc_i2c_writePvPhi() called");
    return 0;
}

/* Demangled: listRemove(listHead*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z10listRemoveP8listHeadPv(void) {
    ALOGD("_Z10listRemoveP8listHeadPv() called");
    return 0;
}

/* Demangled: phDnldNfc_RawReq(phDnldNfc_Buff*, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z16phDnldNfc_RawReqP14phDnldNfc_BuffS0_PFvPvtS1_ES1_(void) {
    ALOGD("_Z16phDnldNfc_RawReqP14phDnldNfc_BuffS0_PFvPvtS1_ES1_() called");
    return 0;
}

/* Exported Object: phNxpNciMwEepromArea */
extern "C" __attribute__((visibility("default"))) void* phNxpNciMwEepromArea = NULL;

/* Exported Object: timeoutTimerId */
extern "C" __attribute__((visibility("default"))) void* timeoutTimerId = NULL;

/* Demangled: phOsalNfc_CheckTimerPresence */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_CheckTimerPresence(void) {
    ALOGD("phOsalNfc_CheckTimerPresence() called");
    return 0;
}

/* Demangled: listDump(listHead*) */
extern "C" __attribute__((visibility("default"))) int _Z8listDumpP8listHead(void) {
    ALOGD("_Z8listDumpP8listHead() called");
    return 0;
}

/* Demangled: phTmlNfc_Shutdown() */
extern "C" __attribute__((visibility("default"))) int _Z17phTmlNfc_Shutdownv(void) {
    ALOGD("_Z17phTmlNfc_Shutdownv() called");
    return 0;
}

/* Demangled: capability::processChipType(unsigned char*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN10capability15processChipTypeEPht(void) {
    ALOGD("_ZN10capability15processChipTypeEPht() called");
    return 0;
}

/* Demangled: phDnldNfc_Write(unsigned char, phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z15phDnldNfc_WritehP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z15phDnldNfc_WritehP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phDnldNfc_LoadBinFW(unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19phDnldNfc_LoadBinFWPPhPj(void) {
    ALOGD("_Z19phDnldNfc_LoadBinFWPPhPj() called");
    return 0;
}

/* Exported Object: nfc_debug_enabled */
extern "C" __attribute__((visibility("default"))) void* nfc_debug_enabled = NULL;

/* Demangled: phOsalNfc_Timer_Start */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_Timer_Start(void) {
    ALOGD("phOsalNfc_Timer_Start() called");
    return 0;
}

/* Demangled: phDal4Nfc_msgrcv(long, phLibNfc_Message*, long, int) */
extern "C" __attribute__((visibility("default"))) int _Z16phDal4Nfc_msgrcvlP16phLibNfc_Messageli(void) {
    ALOGD("_Z16phDal4Nfc_msgrcvlP16phLibNfc_Messageli() called");
    return 0;
}

/* Demangled: phNxpLog_InitializeLogLevel() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpLog_InitializeLogLevelv(void) {
    ALOGD("_Z27phNxpLog_InitializeLogLevelv() called");
    return 0;
}

/* Demangled: phNxpNciHal_china_tianjin_rf_setting() */
extern "C" __attribute__((visibility("default"))) int _Z36phNxpNciHal_china_tianjin_rf_settingv(void) {
    ALOGD("_Z36phNxpNciHal_china_tianjin_rf_settingv() called");
    return 0;
}

/* Demangled: phNxpNciHal_enableDefaultUICC2SWPline(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z37phNxpNciHal_enableDefaultUICC2SWPlineh(void) {
    ALOGD("_Z37phNxpNciHal_enableDefaultUICC2SWPlineh() called");
    return 0;
}

/* Exported Object: fpVerInfoStoreInEeprom */
extern "C" __attribute__((visibility("default"))) void* fpVerInfoStoreInEeprom = NULL;

/* Demangled: updateNxpRfConfigTimestamp */
extern "C" __attribute__((visibility("default"))) int updateNxpRfConfigTimestamp(void) {
    ALOGD("updateNxpRfConfigTimestamp() called");
    return 0;
}

/* Demangled: phDnldNfc_Log(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z13phDnldNfc_LogP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z13phDnldNfc_LogP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phDnldNfc_ReSetHwDevHandle() */
extern "C" __attribute__((visibility("default"))) int _Z26phDnldNfc_ReSetHwDevHandlev(void) {
    ALOGD("_Z26phDnldNfc_ReSetHwDevHandlev() called");
    return 0;
}

/* Demangled: phTmlNfc_i2c_read(void*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17phTmlNfc_i2c_readPvPhi(void) {
    ALOGD("_Z17phTmlNfc_i2c_readPvPhi() called");
    return 0;
}

/* Demangled: readOptionalConfig(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z18readOptionalConfigPKc(void) {
    ALOGD("_Z18readOptionalConfigPKc() called");
    return 0;
}

/* Demangled: findConfigFilePathFromTransportConfigPaths(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_(void) {
    ALOGD("_Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_() called");
    return 0;
}

/* Exported Object: gagc_value_status */
extern "C" __attribute__((visibility("default"))) void* gagc_value_status = NULL;

/* Demangled: phNxpNciHal_PrbsTestStop */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_PrbsTestStop(void) {
    ALOGD("phNxpNciHal_PrbsTestStop() called");
    return 0;
}

/* Demangled: CNfcConfig::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig4dumpEv(void) {
    ALOGD("_ZN10CNfcConfig4dumpEv() called");
    return 0;
}

/* Exported Object: RfFwRegionDnld_handle */
extern "C" __attribute__((visibility("default"))) void* RfFwRegionDnld_handle = NULL;

/* Demangled: phTmlNfc_DeferredCall(unsigned long, phLibNfc_Message*) */
extern "C" __attribute__((visibility("default"))) int _Z21phTmlNfc_DeferredCallmP16phLibNfc_Message(void) {
    ALOGD("_Z21phTmlNfc_DeferredCallmP16phLibNfc_Message() called");
    return 0;
}

/* Demangled: phTmlNfc_Write(unsigned char*, unsigned short, void (*)(void*, phTmlNfc_TransactInfo*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z14phTmlNfc_WritePhtPFvPvP21phTmlNfc_TransactInfoES0_(void) {
    ALOGD("_Z14phTmlNfc_WritePhtPFvPvP21phTmlNfc_TransactInfoES0_() called");
    return 0;
}

/* Exported Object: vtable for CNfcParam */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CNfcParam = NULL;

/* Demangled: listInit(listHead*) */
extern "C" __attribute__((visibility("default"))) int _Z8listInitP8listHead(void) {
    ALOGD("_Z8listInitP8listHead() called");
    return 0;
}

/* Demangled: phDnldNfc_LoadPKInfo() */
extern "C" __attribute__((visibility("default"))) int _Z20phDnldNfc_LoadPKInfov(void) {
    ALOGD("_Z20phDnldNfc_LoadPKInfov() called");
    return 0;
}

/* Exported Object: gParserCreated */
extern "C" __attribute__((visibility("default"))) void* gParserCreated = NULL;

/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2EPKcm(void) {
    ALOGD("_ZN9CNfcParamC2EPKcm() called");
    return 0;
}

/* Exported Object: icode_detected */
extern "C" __attribute__((visibility("default"))) void* icode_detected = NULL;

/* Demangled: phNxpNciHal_ioctl(long, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17phNxpNciHal_ioctllPv(void) {
    ALOGD("_Z17phNxpNciHal_ioctllPv() called");
    return 0;
}

/* Exported Object: fw_dwnld_flag */
extern "C" __attribute__((visibility("default"))) void* fw_dwnld_flag = NULL;

/* Demangled: setNxpFwConfigPath */
extern "C" __attribute__((visibility("default"))) int setNxpFwConfigPath(void) {
    ALOGD("setNxpFwConfigPath() called");
    return 0;
}

/* Exported Object: wRfUpdateReq */
extern "C" __attribute__((visibility("default"))) void* wRfUpdateReq = NULL;

/* Demangled: phDnldNfc_Force(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z15phDnldNfc_ForceP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z15phDnldNfc_ForceP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phPalEse_spi_ioctl(phPalEse_ControlCode_t, void*, long) */
extern "C" __attribute__((visibility("default"))) int _Z18phPalEse_spi_ioctl22phPalEse_ControlCode_tPvl(void) {
    ALOGD("_Z18phPalEse_spi_ioctl22phPalEse_ControlCode_tPvl() called");
    return 0;
}

/* Demangled: phNxpNciHal_write_unlocked(unsigned short, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26phNxpNciHal_write_unlockedtPKh(void) {
    ALOGD("_Z26phNxpNciHal_write_unlockedtPKh() called");
    return 0;
}

/* Demangled: phNxpNciHal_CheckFwRegFlashRequired(unsigned char*, unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z35phNxpNciHal_CheckFwRegFlashRequiredPhS_h(void) {
    ALOGD("_Z35phNxpNciHal_CheckFwRegFlashRequiredPhS_h() called");
    return 0;
}

/* Demangled: phNxpNciHal_select_RF_Discovery(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z31phNxpNciHal_select_RF_Discoveryjj(void) {
    ALOGD("_Z31phNxpNciHal_select_RF_Discoveryjj() called");
    return 0;
}

/* Exported Object: gDrvCfg */
extern "C" __attribute__((visibility("default"))) void* gDrvCfg = NULL;

/* Demangled: phDal4Nfc_msgget(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16phDal4Nfc_msggetii(void) {
    ALOGD("_Z16phDal4Nfc_msggetii() called");
    return 0;
}

/* Exported Object: phNxpNciClock */
extern "C" __attribute__((visibility("default"))) void* phNxpNciClock = NULL;

/* Demangled: tmp_thread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z10tmp_threadPv(void) {
    ALOGD("_Z10tmp_threadPv() called");
    return 0;
}

/* Demangled: phNxpNciHal_getPrbsCmd(phNxpNfc_PrbsType_t, phNxpNfc_PrbsHwType_t, unsigned char, unsigned char, unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z22phNxpNciHal_getPrbsCmd19phNxpNfc_PrbsType_t21phNxpNfc_PrbsHwType_thhPhh(void) {
    ALOGD("_Z22phNxpNciHal_getPrbsCmd19phNxpNfc_PrbsType_t21phNxpNfc_PrbsHwType_thhPhh() called");
    return 0;
}

/* Demangled: phDnldNfc_CloseFwLibHandle() */
extern "C" __attribute__((visibility("default"))) int _Z26phDnldNfc_CloseFwLibHandlev(void) {
    ALOGD("_Z26phDnldNfc_CloseFwLibHandlev() called");
    return 0;
}

/* Exported Object: wFwVer */
extern "C" __attribute__((visibility("default"))) void* wFwVer = NULL;

/* Demangled: phNxpNciHal_PropEsePowerCycle() */
extern "C" __attribute__((visibility("default"))) int _Z29phNxpNciHal_PropEsePowerCyclev(void) {
    ALOGD("_Z29phNxpNciHal_PropEsePowerCyclev() called");
    return 0;
}

/* Demangled: phOsalNfc_Timer_Cleanup */
extern "C" __attribute__((visibility("default"))) int phOsalNfc_Timer_Cleanup(void) {
    ALOGD("phOsalNfc_Timer_Cleanup() called");
    return 0;
}

/* Demangled: phNxpNciHal_emergency_recovery(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z30phNxpNciHal_emergency_recoveryh(void) {
    ALOGD("_Z30phNxpNciHal_emergency_recoveryh() called");
    return 0;
}

/* Exported Object: gagc_differential_status */
extern "C" __attribute__((visibility("default"))) void* gagc_differential_status = NULL;

/* Demangled: phNxpNciHal_fw_download_seq(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_fw_download_seqhh(void) {
    ALOGD("_Z27phNxpNciHal_fw_download_seqhh() called");
    return 0;
}

/* Exported Object: Fw_Lib_Path */
extern "C" __attribute__((visibility("default"))) void* Fw_Lib_Path = NULL;

/* Demangled: phTmlNfc_Init(phTmlNfc_Config*) */
extern "C" __attribute__((visibility("default"))) int _Z13phTmlNfc_InitP15phTmlNfc_Config(void) {
    ALOGD("_Z13phTmlNfc_InitP15phTmlNfc_Config() called");
    return 0;
}

/* Demangled: phNxpNHal_DtaUpdate(unsigned short*, unsigned char*, unsigned short*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z19phNxpNHal_DtaUpdatePtPhS_S0_(void) {
    ALOGD("_Z19phNxpNHal_DtaUpdatePtPhS_S0_() called");
    return 0;
}

/* Demangled: phNxpNciHal_send_ext_cmd(unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_send_ext_cmdtPh(void) {
    ALOGD("_Z24phNxpNciHal_send_ext_cmdtPh() called");
    return 0;
}

/* Demangled: phNxpNciHal_ext_send_sram_config_to_flash() */
extern "C" __attribute__((visibility("default"))) int _Z41phNxpNciHal_ext_send_sram_config_to_flashv(void) {
    ALOGD("_Z41phNxpNciHal_ext_send_sram_config_to_flashv() called");
    return 0;
}

/* Demangled: CNfcConfig::resetModified(tNXP_CONF_FILE) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig13resetModifiedE14tNXP_CONF_FILE(void) {
    ALOGD("_ZN10CNfcConfig13resetModifiedE14tNXP_CONF_FILE() called");
    return 0;
}

/* Demangled: phTmlNfc_CleanUp() */
extern "C" __attribute__((visibility("default"))) int _Z16phTmlNfc_CleanUpv(void) {
    ALOGD("_Z16phTmlNfc_CleanUpv() called");
    return 0;
}

/* Demangled: phNxpNciHal_parsePacket(unsigned char*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z23phNxpNciHal_parsePacketPht(void) {
    ALOGD("_Z23phNxpNciHal_parsePacketPht() called");
    return 0;
}

/* Demangled: setNxpRfConfigPath */
extern "C" __attribute__((visibility("default"))) int setNxpRfConfigPath(void) {
    ALOGD("setNxpRfConfigPath() called");
    return 0;
}

/* Demangled: phNxpNciHal_PrbsTestStart */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_PrbsTestStart(void) {
    ALOGD("phNxpNciHal_PrbsTestStart() called");
    return 0;
}

/* Demangled: CNfcConfig::readNxpTransitConfig(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig20readNxpTransitConfigEPKc(void) {
    ALOGD("_ZNK10CNfcConfig20readNxpTransitConfigEPKc() called");
    return 0;
}

/* Demangled: phNxpDta_T1TEnable() */
extern "C" __attribute__((visibility("default"))) int _Z18phNxpDta_T1TEnablev(void) {
    ALOGD("_Z18phNxpDta_T1TEnablev() called");
    return 0;
}

/* Exported Object: txrxSemaphore */
extern "C" __attribute__((visibility("default"))) void* txrxSemaphore = NULL;

/* Demangled: CNfcConfig::GetInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig11GetInstanceEv(void) {
    ALOGD("_ZN10CNfcConfig11GetInstanceEv() called");
    return 0;
}

/* Demangled: phNxpNciHal_write(unsigned short, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _Z17phNxpNciHal_writetPKh(void) {
    ALOGD("_Z17phNxpNciHal_writetPKh() called");
    return 0;
}

/* Exported Object: gpphTmlNfc_Context */
extern "C" __attribute__((visibility("default"))) void* gpphTmlNfc_Context = NULL;

/* Exported Object: p_nfc_stack_cback_backup */
extern "C" __attribute__((visibility("default"))) void* p_nfc_stack_cback_backup = NULL;

/* Demangled: resetNxpConfig */
extern "C" __attribute__((visibility("default"))) int resetNxpConfig(void) {
    ALOGD("resetNxpConfig() called");
    return 0;
}

/* Exported Object: rom_version */
extern "C" __attribute__((visibility("default"))) void* rom_version = NULL;

/* Exported Object: gagc_nfcld_status */
extern "C" __attribute__((visibility("default"))) void* gagc_nfcld_status = NULL;

/* Demangled: getDownloadFlag() */
extern "C" __attribute__((visibility("default"))) int _Z15getDownloadFlagv(void) {
    ALOGD("_Z15getDownloadFlagv() called");
    return 0;
}

/* Demangled: listDestroy(listHead*) */
extern "C" __attribute__((visibility("default"))) int _Z11listDestroyP8listHead(void) {
    ALOGD("_Z11listDestroyP8listHead() called");
    return 0;
}

/* Demangled: phDnldNfc_UnloadFW() */
extern "C" __attribute__((visibility("default"))) int _Z18phDnldNfc_UnloadFWv(void) {
    ALOGD("_Z18phDnldNfc_UnloadFWv() called");
    return 0;
}

/* Exported Object: fw_maj_ver */
extern "C" __attribute__((visibility("default"))) void* fw_maj_ver = NULL;

/* Demangled: phNxpDisable_DtaMode() */
extern "C" __attribute__((visibility("default"))) int _Z20phNxpDisable_DtaModev(void) {
    ALOGD("_Z20phNxpDisable_DtaModev() called");
    return 0;
}

/* Demangled: phDnldNfc_LoadFW(char const*, unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16phDnldNfc_LoadFWPKcPPhPj(void) {
    ALOGD("_Z16phDnldNfc_LoadFWPKcPPhPj() called");
    return 0;
}

/* Demangled: phNxpNciHal_init_cb_data(phNxpNciHal_Sem*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z24phNxpNciHal_init_cb_dataP15phNxpNciHal_SemPv(void) {
    ALOGD("_Z24phNxpNciHal_init_cb_dataP15phNxpNciHal_SemPv() called");
    return 0;
}

/* Demangled: phNxpNciHal_control_granted() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_control_grantedv(void) {
    ALOGD("_Z27phNxpNciHal_control_grantedv() called");
    return 0;
}

/* Demangled: phNxpNciHal_process_ext_rsp(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_process_ext_rspPhPt(void) {
    ALOGD("_Z27phNxpNciHal_process_ext_rspPhPt() called");
    return 0;
}

/* Demangled: capability::capability() */
extern "C" __attribute__((visibility("default"))) int _ZN10capabilityC1Ev(void) {
    ALOGD("_ZN10capabilityC1Ev() called");
    return 0;
}

/* Demangled: phDnldNfc_GetVersion(phDnldNfc_Buff*, void (*)(void*, unsigned short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z20phDnldNfc_GetVersionP14phDnldNfc_BuffPFvPvtS1_ES1_(void) {
    ALOGD("_Z20phDnldNfc_GetVersionP14phDnldNfc_BuffPFvPvtS1_ES1_() called");
    return 0;
}

/* Demangled: phNxpNciHal_cleanup_cb_data(phNxpNciHal_Sem*) */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpNciHal_cleanup_cb_dataP15phNxpNciHal_Sem(void) {
    ALOGD("_Z27phNxpNciHal_cleanup_cb_dataP15phNxpNciHal_Sem() called");
    return 0;
}

/* Demangled: CNfcConfig::getValue(char const*, char*, long, long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcPclPl(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcPclPl() called");
    return 0;
}

/* Demangled: GetNxpNumValue */
extern "C" __attribute__((visibility("default"))) int GetNxpNumValue(void) {
    ALOGD("GetNxpNumValue() called");
    return 0;
}

/* Demangled: phDnldNfc_SetHwDevHandle() */
extern "C" __attribute__((visibility("default"))) int _Z24phDnldNfc_SetHwDevHandlev(void) {
    ALOGD("_Z24phDnldNfc_SetHwDevHandlev() called");
    return 0;
}

/* Exported Object: nxpprofile_ctrl */
extern "C" __attribute__((visibility("default"))) void* nxpprofile_ctrl = NULL;

/* Demangled: phNxpNciHal_DownloadPinTest */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_DownloadPinTest(void) {
    ALOGD("phNxpNciHal_DownloadPinTest() called");
    return 0;
}

/* Demangled: phUtilNfc_CheckForAvailableTimer */
extern "C" __attribute__((visibility("default"))) int phUtilNfc_CheckForAvailableTimer(void) {
    ALOGD("phUtilNfc_CheckForAvailableTimer() called");
    return 0;
}

/* Demangled: CNfcConfig::clean() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig5cleanEv(void) {
    ALOGD("_ZN10CNfcConfig5cleanEv() called");
    return 0;
}

/* Demangled: GetNxpStrValue */
extern "C" __attribute__((visibility("default"))) int GetNxpStrValue(void) {
    ALOGD("GetNxpStrValue() called");
    return 0;
}

/* Exported Object: cleanup_timer */
extern "C" __attribute__((visibility("default"))) void* cleanup_timer = NULL;

/* Demangled: phDal4Nfc_msgctl(long, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16phDal4Nfc_msgctlliPv(void) {
    ALOGD("_Z16phDal4Nfc_msgctlliPv() called");
    return 0;
}

/* Demangled: phNxpNciHal_core_initialized(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z28phNxpNciHal_core_initializedPh(void) {
    ALOGD("_Z28phNxpNciHal_core_initializedPh() called");
    return 0;
}

/* Demangled: isNxpConfigModified */
extern "C" __attribute__((visibility("default"))) int isNxpConfigModified(void) {
    ALOGD("isNxpConfigModified() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_NCIR */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIR = NULL;

/* Demangled: phNxpNciHal_SwpTest */
extern "C" __attribute__((visibility("default"))) int phNxpNciHal_SwpTest(void) {
    ALOGD("phNxpNciHal_SwpTest() called");
    return 0;
}
