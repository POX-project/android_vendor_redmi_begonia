/*
 * Reverse-Engineered Source for: se_extn_client.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "se_extn_client"

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
#include "se_extn_client.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: CNfcConfig::moveToList() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10moveToListEv(void) {
    ALOGD("_ZN10CNfcConfig10moveToListEv() called");
    return 0;
}

/* Demangled: CNfcConfig::GetInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig11GetInstanceEv(void) {
    ALOGD("_ZN10CNfcConfig11GetInstanceEv() called");
    return 0;
}

/* Demangled: CNfcConfig::moveFromList() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig12moveFromListEv(void) {
    ALOGD("_ZN10CNfcConfig12moveFromListEv() called");
    return 0;
}

/* Demangled: geteUICCTerminalId(char*) */
extern "C" __attribute__((visibility("default"))) int _Z18geteUICCTerminalIdPc(void) {
    ALOGD("_Z18geteUICCTerminalIdPc() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_NCIHAL */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIHAL = NULL;

/* Demangled: CNfcConfig::isAllowed(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig9isAllowedEPKc(void) {
    ALOGD("_ZN10CNfcConfig9isAllowedEPKc() called");
    return 0;
}

/* Demangled: geteSETerminalId(char*) */
extern "C" __attribute__((visibility("default"))) int _Z16geteSETerminalIdPc(void) {
    ALOGD("_Z16geteSETerminalIdPc() called");
    return 0;
}

/* Demangled: updateNxpConfigTimestamp */
extern "C" __attribute__((visibility("default"))) int updateNxpConfigTimestamp(void) {
    ALOGD("updateNxpConfigTimestamp() called");
    return 0;
}

/* Exported Object: seExtn */
extern "C" __attribute__((visibility("default"))) void* seExtn = NULL;

/* Demangled: CNfcConfig::getValue(char const*, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcRt(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcRt() called");
    return 0;
}

/* Demangled: void std::__1::vector<CNfcParam const*, std::__1::allocator<CNfcParam const*> >::__push_back_slow_path<CNfcParam const* const&>(CNfcParam const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPK9CNfcParamNS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_FWDNLD */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_FWDNLD = NULL;

/* Demangled: GetNxpStrValue */
extern "C" __attribute__((visibility("default"))) int GetNxpStrValue(void) {
    ALOGD("GetNxpStrValue() called");
    return 0;
}

/* Demangled: sparse_crc32(unsigned int, void const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12sparse_crc32jPKvi(void) {
    ALOGD("_Z12sparse_crc32jPKvi() called");
    return 0;
}

/* Demangled: resetNxpConfig */
extern "C" __attribute__((visibility("default"))) int resetNxpConfig(void) {
    ALOGD("resetNxpConfig() called");
    return 0;
}

/* Demangled: CNfcConfig::find(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig4findEPKc(void) {
    ALOGD("_ZNK10CNfcConfig4findEPKc() called");
    return 0;
}

/* Exported Object: vtable for CNfcConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CNfcConfig = NULL;

/* Exported Object: gLog_level */
extern "C" __attribute__((visibility("default"))) void* gLog_level = NULL;

/* Demangled: getLsUpdateRequired() */
extern "C" __attribute__((visibility("default"))) int _Z19getLsUpdateRequiredv(void) {
    ALOGD("_Z19getLsUpdateRequiredv() called");
    return 0;
}

/* Demangled: setJcopUpdateRequired(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z21setJcopUpdateRequiredh(void) {
    ALOGD("_Z21setJcopUpdateRequiredh() called");
    return 0;
}

/* Demangled: CNfcConfig::isModified() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10isModifiedEv(void) {
    ALOGD("_ZN10CNfcConfig10isModifiedEv() called");
    return 0;
}

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD0Ev(void) {
    ALOGD("_ZN9CNfcParamD0Ev() called");
    return 0;
}

/* Demangled: isNxpConfigModified */
extern "C" __attribute__((visibility("default"))) int isNxpConfigModified(void) {
    ALOGD("isNxpConfigModified() called");
    return 0;
}

/* Demangled: getNfcSeTerminalId(char*) */
extern "C" __attribute__((visibility("default"))) int _Z18getNfcSeTerminalIdPc(void) {
    ALOGD("_Z18getNfcSeTerminalIdPc() called");
    return 0;
}

/* Demangled: setLsUpdateRequired(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z19setLsUpdateRequiredh(void) {
    ALOGD("_Z19setLsUpdateRequiredh() called");
    return 0;
}

/* Demangled: checkeSEClientRequired(ESE_CLIENT_INTF) */
extern "C" __attribute__((visibility("default"))) int _Z22checkeSEClientRequired15ESE_CLIENT_INTF(void) {
    ALOGD("_Z22checkeSEClientRequired15ESE_CLIENT_INTF() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_NCIR */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIR = NULL;

/* Demangled: CNfcConfig::readConfig(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig10readConfigEPKcb(void) {
    ALOGD("_ZN10CNfcConfig10readConfigEPKcb() called");
    return 0;
}

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD1Ev(void) {
    ALOGD("_ZN9CNfcParamD1Ev() called");
    return 0;
}

/* Demangled: CNfcConfig::readNxpTransitConfig(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig20readNxpTransitConfigEPKc(void) {
    ALOGD("_ZNK10CNfcConfig20readNxpTransitConfigEPKc() called");
    return 0;
}

/* Demangled: GetNxpByteArrayValue */
extern "C" __attribute__((visibility("default"))) int GetNxpByteArrayValue(void) {
    ALOGD("GetNxpByteArrayValue() called");
    return 0;
}

/* Demangled: CNfcConfig::checkTimestamp(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig14checkTimestampEPKcS1_(void) {
    ALOGD("_ZN10CNfcConfig14checkTimestampEPKcS1_() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1Ev(void) {
    ALOGD("_ZN9CNfcParamC1Ev() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN9CNfcParamC2EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: CNfcParam::~CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamD2Ev(void) {
    ALOGD("_ZN9CNfcParamD2Ev() called");
    return 0;
}

/* Demangled: CNfcConfig::getValue(char const*, char*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcPcj(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcPcj() called");
    return 0;
}

/* Demangled: CNfcConfig::getValue(char const*, char*, long, long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcPclPl(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcPclPl() called");
    return 0;
}

/* Demangled: CNfcConfig::updateTimestamp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig15updateTimestampEv(void) {
    ALOGD("_ZN10CNfcConfig15updateTimestampEv() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2Ev(void) {
    ALOGD("_ZN9CNfcParamC2Ev() called");
    return 0;
}

/* Demangled: getJcopUpdateIntf() */
extern "C" __attribute__((visibility("default"))) int _Z17getJcopUpdateIntfv(void) {
    ALOGD("_Z17getJcopUpdateIntfv() called");
    return 0;
}

/* Demangled: findConfigFilePathFromTransportConfigPaths(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_(void) {
    ALOGD("_Z42findConfigFilePathFromTransportConfigPathsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERS5_() called");
    return 0;
}

/* Demangled: CNfcConfig::clean() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig5cleanEv(void) {
    ALOGD("_ZN10CNfcConfig5cleanEv() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC2EPKcm(void) {
    ALOGD("_ZN9CNfcParamC2EPKcm() called");
    return 0;
}

/* Demangled: getJcopUpdateRequired() */
extern "C" __attribute__((visibility("default"))) int _Z21getJcopUpdateRequiredv(void) {
    ALOGD("_Z21getJcopUpdateRequiredv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1EPKcm(void) {
    ALOGD("_ZN9CNfcParamC1EPKcm() called");
    return 0;
}

/* Exported Object: transport_config_paths */
extern "C" __attribute__((visibility("default"))) void* transport_config_paths = NULL;

/* Exported Object: Ch */
extern "C" __attribute__((visibility("default"))) void* Ch = NULL;

/* Exported Object: NXPLOG_ITEM_NCIX */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_NCIX = NULL;

/* Demangled: phNxpLog_InitializeLogLevel() */
extern "C" __attribute__((visibility("default"))) int _Z27phNxpLog_InitializeLogLevelv(void) {
    ALOGD("_Z27phNxpLog_InitializeLogLevelv() called");
    return 0;
}

/* Exported Object: NXPLOG_ITEM_EXTNS */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_EXTNS = NULL;

/* Demangled: CNfcConfig::add(CNfcParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig3addEPK9CNfcParam(void) {
    ALOGD("_ZN10CNfcConfig3addEPK9CNfcParam() called");
    return 0;
}

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD0Ev(void) {
    ALOGD("_ZN10CNfcConfigD0Ev() called");
    return 0;
}

/* Demangled: CNfcConfig::getValue(char const*, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig8getValueEPKcRm(void) {
    ALOGD("_ZNK10CNfcConfig8getValueEPKcRm() called");
    return 0;
}

/* Demangled: GetNxpNumValue */
extern "C" __attribute__((visibility("default"))) int GetNxpNumValue(void) {
    ALOGD("GetNxpNumValue() called");
    return 0;
}

/* Demangled: readOptionalConfig(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z18readOptionalConfigPKc(void) {
    ALOGD("_Z18readOptionalConfigPKc() called");
    return 0;
}

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD1Ev(void) {
    ALOGD("_ZN10CNfcConfigD1Ev() called");
    return 0;
}

/* Exported Object: nfc_debug_enabled */
extern "C" __attribute__((visibility("default"))) void* nfc_debug_enabled = NULL;

/* Exported Object: NXPLOG_ITEM_TML */
extern "C" __attribute__((visibility("default"))) void* NXPLOG_ITEM_TML = NULL;

/* Demangled: CNfcConfig::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig4dumpEv(void) {
    ALOGD("_ZN10CNfcConfig4dumpEv() called");
    return 0;
}

/* Demangled: CNfcConfig::CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigC1Ev(void) {
    ALOGD("_ZN10CNfcConfigC1Ev() called");
    return 0;
}

/* Demangled: CNfcConfig::~CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigD2Ev(void) {
    ALOGD("_ZN10CNfcConfigD2Ev() called");
    return 0;
}

/* Demangled: CNfcParam::CNfcParam(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN9CNfcParamC1EPKcRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: CNfcConfig::readNxpRFConfig(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10CNfcConfig15readNxpRFConfigEPKc(void) {
    ALOGD("_ZNK10CNfcConfig15readNxpRFConfigEPKc() called");
    return 0;
}

/* Exported Object: vtable for CNfcParam */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CNfcParam = NULL;

/* Demangled: getLsUpdateIntf() */
extern "C" __attribute__((visibility("default"))) int _Z15getLsUpdateIntfv(void) {
    ALOGD("_Z15getLsUpdateIntfv() called");
    return 0;
}

/* Demangled: CNfcConfig::resetModified() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfig13resetModifiedEv(void) {
    ALOGD("_ZN10CNfcConfig13resetModifiedEv() called");
    return 0;
}

/* Demangled: CNfcConfig::CNfcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10CNfcConfigC2Ev(void) {
    ALOGD("_ZN10CNfcConfigC2Ev() called");
    return 0;
}

/* Demangled: isNxpRFConfigModified */
extern "C" __attribute__((visibility("default"))) int isNxpRFConfigModified(void) {
    ALOGD("isNxpRFConfigModified() called");
    return 0;
}
