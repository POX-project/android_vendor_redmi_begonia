/*
 * Reverse-Engineered Source for: libmtkrilutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkrilutils"

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
#include "libmtkrilutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkPhoneNumberUtils::compareLoosely(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils14compareLooselyENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES6_(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils14compareLooselyENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES6_() called");
    return 0;
}

/* Exported Object: MtkPhoneNumberUtils::WILD */
extern "C" __attribute__((visibility("default"))) void* _ZN19MtkPhoneNumberUtils4WILDE = NULL;

/* Demangled: isImsSupport */
extern "C" __attribute__((visibility("default"))) int isImsSupport(void) {
    ALOGD("isImsSupport() called");
    return 0;
}

/* Demangled: isSupportCommonSlot */
extern "C" __attribute__((visibility("default"))) int isSupportCommonSlot(void) {
    ALOGD("isSupportCommonSlot() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtilsD0Ev(void) {
    ALOGD("_ZN19MtkPhoneNumberUtilsD0Ev() called");
    return 0;
}

/* Demangled: RIL_get3GSIM */
extern "C" __attribute__((visibility("default"))) int RIL_get3GSIM(void) {
    ALOGD("RIL_get3GSIM() called");
    return 0;
}

/* Demangled: isMalSupported */
extern "C" __attribute__((visibility("default"))) int isMalSupported(void) {
    ALOGD("isMalSupported() called");
    return 0;
}

/* Demangled: isOp07Support */
extern "C" __attribute__((visibility("default"))) int isOp07Support(void) {
    ALOGD("isOp07Support() called");
    return 0;
}

/* Demangled: setMSimPropertyThreadSafe */
extern "C" __attribute__((visibility("default"))) int setMSimPropertyThreadSafe(void) {
    ALOGD("setMSimPropertyThreadSafe() called");
    return 0;
}

/* Exported Object: MtkPhoneNumberUtils::MIN_MATCH_CTA */
extern "C" __attribute__((visibility("default"))) void* _ZN19MtkPhoneNumberUtils13MIN_MATCH_CTAE = NULL;

/* Demangled: getMSimProperty */
extern "C" __attribute__((visibility("default"))) int getMSimProperty(void) {
    ALOGD("getMSimProperty() called");
    return 0;
}

/* Demangled: getMultiImsSupportValue */
extern "C" __attribute__((visibility("default"))) int getMultiImsSupportValue(void) {
    ALOGD("getMultiImsSupportValue() called");
    return 0;
}

/* Demangled: isOMSupport */
extern "C" __attribute__((visibility("default"))) int isOMSupport(void) {
    ALOGD("isOMSupport() called");
    return 0;
}

/* Demangled: isRedialFeatureEnabled */
extern "C" __attribute__((visibility("default"))) int isRedialFeatureEnabled(void) {
    ALOGD("isRedialFeatureEnabled() called");
    return 0;
}

/* Demangled: record_stream_free */
extern "C" __attribute__((visibility("default"))) int record_stream_free(void) {
    ALOGD("record_stream_free() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::minPositive(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils11minPositiveEii(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils11minPositiveEii() called");
    return 0;
}

/* Demangled: isSvlteLcgSupport */
extern "C" __attribute__((visibility("default"))) int isSvlteLcgSupport(void) {
    ALOGD("isSvlteLcgSupport() called");
    return 0;
}

/* Demangled: isWfcSupport */
extern "C" __attribute__((visibility("default"))) int isWfcSupport(void) {
    ALOGD("isWfcSupport() called");
    return 0;
}

/* Demangled: isOp16Support */
extern "C" __attribute__((visibility("default"))) int isOp16Support(void) {
    ALOGD("isOp16Support() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_TRANSFER_ATR_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_ATR_RSP_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtilsD1Ev(void) {
    ALOGD("_ZN19MtkPhoneNumberUtilsD1Ev() called");
    return 0;
}

/* Exported Object: vtable for MtkPhoneNumberUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTV19MtkPhoneNumberUtils = NULL;

/* Demangled: getCdmaModemSlot */
extern "C" __attribute__((visibility("default"))) int getCdmaModemSlot(void) {
    ALOGD("getCdmaModemSlot() called");
    return 0;
}

/* Demangled: hasVsimCard */
extern "C" __attribute__((visibility("default"))) int hasVsimCard(void) {
    ALOGD("hasVsimCard() called");
    return 0;
}

/* Demangled: isDssNoResetSupport */
extern "C" __attribute__((visibility("default"))) int isDssNoResetSupport(void) {
    ALOGD("isDssNoResetSupport() called");
    return 0;
}

/* Demangled: isRcsServiceEnabled */
extern "C" __attribute__((visibility("default"))) int isRcsServiceEnabled(void) {
    ALOGD("isRcsServiceEnabled() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::matchIntlPrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils15matchIntlPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils15matchIntlPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_DISCONNECT_IND_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_IND_fields = NULL;

/* Exported Object: RIL_SIM_SAP_DISCONNECT_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_ERROR_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_ERROR_RSP_fields = NULL;

/* Demangled: getCdmaSocketSlotId */
extern "C" __attribute__((visibility("default"))) int getCdmaSocketSlotId(void) {
    ALOGD("getCdmaSocketSlotId() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::getUsernameFromUriNumber(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils24getUsernameFromUriNumberENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils24getUsernameFromUriNumberENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: isDisableCapabilitySwitch */
extern "C" __attribute__((visibility("default"))) int isDisableCapabilitySwitch(void) {
    ALOGD("isDisableCapabilitySwitch() called");
    return 0;
}

/* Demangled: isInternalLoad */
extern "C" __attribute__((visibility("default"))) int isInternalLoad(void) {
    ALOGD("isInternalLoad() called");
    return 0;
}

/* Demangled: isPersistExternalSimDisabled */
extern "C" __attribute__((visibility("default"))) int isPersistExternalSimDisabled(void) {
    ALOGD("isPersistExternalSimDisabled() called");
    return 0;
}

/* Demangled: mtkRequestToString */
extern "C" __attribute__((visibility("default"))) int mtkRequestToString(void) {
    ALOGD("mtkRequestToString() called");
    return 0;
}

/* Demangled: pii */
extern "C" __attribute__((visibility("default"))) int pii(void) {
    ALOGD("pii() called");
    return 0;
}

/* Demangled: createRawSocket */
extern "C" __attribute__((visibility("default"))) int createRawSocket(void) {
    ALOGD("createRawSocket() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_APDU_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_APDU_REQ_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtilsD2Ev(void) {
    ALOGD("_ZN19MtkPhoneNumberUtilsD2Ev() called");
    return 0;
}

/* Demangled: getRcsSrvTag */
extern "C" __attribute__((visibility("default"))) int getRcsSrvTag(void) {
    ALOGD("getRcsSrvTag() called");
    return 0;
}

/* Demangled: getSvlteProjectType */
extern "C" __attribute__((visibility("default"))) int getSvlteProjectType(void) {
    ALOGD("getSvlteProjectType() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::isDialable(char) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils10isDialableEc(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils10isDialableEc() called");
    return 0;
}

/* Demangled: isInternationalRoamingEnabled */
extern "C" __attribute__((visibility("default"))) int isInternationalRoamingEnabled(void) {
    ALOGD("isInternationalRoamingEnabled() called");
    return 0;
}

/* Demangled: getSimCount */
extern "C" __attribute__((visibility("default"))) int getSimCount(void) {
    ALOGD("getSimCount() called");
    return 0;
}

/* Demangled: isOp01Volte */
extern "C" __attribute__((visibility("default"))) int isOp01Volte(void) {
    ALOGD("isOp01Volte() called");
    return 0;
}

/* Demangled: getHwAddr */
extern "C" __attribute__((visibility("default"))) int getHwAddr(void) {
    ALOGD("getHwAddr() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_CONNECT_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_CONNECT_REQ_fields = NULL;

/* Demangled: isVilteSupport */
extern "C" __attribute__((visibility("default"))) int isVilteSupport(void) {
    ALOGD("isVilteSupport() called");
    return 0;
}

/* Demangled: sendRs */
extern "C" __attribute__((visibility("default"))) int sendRs(void) {
    ALOGD("sendRs() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_POWER_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_POWER_REQ_fields = NULL;

/* Demangled: isRcsUaProxySupport */
extern "C" __attribute__((visibility("default"))) int isRcsUaProxySupport(void) {
    ALOGD("isRcsUaProxySupport() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_APDU_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_APDU_RSP_fields = NULL;

/* Demangled: isExternalSimOnlySlot */
extern "C" __attribute__((visibility("default"))) int isExternalSimOnlySlot(void) {
    ALOGD("isExternalSimOnlySlot() called");
    return 0;
}

/* Demangled: isMdFallbackSupport */
extern "C" __attribute__((visibility("default"))) int isMdFallbackSupport(void) {
    ALOGD("isMdFallbackSupport() called");
    return 0;
}

/* Demangled: isSrlteSupport */
extern "C" __attribute__((visibility("default"))) int isSrlteSupport(void) {
    ALOGD("isSrlteSupport() called");
    return 0;
}

/* Demangled: setExternalSimProperty */
extern "C" __attribute__((visibility("default"))) int setExternalSimProperty(void) {
    ALOGD("setExternalSimProperty() called");
    return 0;
}

/* Demangled: setRildInterfaceCtrlSupport */
extern "C" __attribute__((visibility("default"))) int setRildInterfaceCtrlSupport(void) {
    ALOGD("setRildInterfaceCtrlSupport() called");
    return 0;
}

/* Demangled: isDualCTCard */
extern "C" __attribute__((visibility("default"))) int isDualCTCard(void) {
    ALOGD("isDualCTCard() called");
    return 0;
}

/* Demangled: isImsAndVolteSupport */
extern "C" __attribute__((visibility("default"))) int isImsAndVolteSupport(void) {
    ALOGD("isImsAndVolteSupport() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_CONNECT_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_CONNECT_RSP_fields = NULL;

/* Demangled: isUserLoad */
extern "C" __attribute__((visibility("default"))) int isUserLoad(void) {
    ALOGD("isUserLoad() called");
    return 0;
}

/* Demangled: assebleRaMessage */
extern "C" __attribute__((visibility("default"))) int assebleRaMessage(void) {
    ALOGD("assebleRaMessage() called");
    return 0;
}

/* Exported Object: MtkPhoneNumberUtils::WAIT */
extern "C" __attribute__((visibility("default"))) void* _ZN19MtkPhoneNumberUtils4WAITE = NULL;

/* Demangled: hasCdmaCard */
extern "C" __attribute__((visibility("default"))) int hasCdmaCard(void) {
    ALOGD("hasCdmaCard() called");
    return 0;
}

/* Demangled: isEngLoad */
extern "C" __attribute__((visibility("default"))) int isEngLoad(void) {
    ALOGD("isEngLoad() called");
    return 0;
}

/* Demangled: isOp129MccMnc */
extern "C" __attribute__((visibility("default"))) int isOp129MccMnc(void) {
    ALOGD("isOp129MccMnc() called");
    return 0;
}

/* Demangled: strStartsWith */
extern "C" __attribute__((visibility("default"))) int strStartsWith(void) {
    ALOGD("strStartsWith() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields = NULL;

/* Demangled: isFemtocellSupport */
extern "C" __attribute__((visibility("default"))) int isFemtocellSupport(void) {
    ALOGD("isFemtocellSupport() called");
    return 0;
}

/* Demangled: isSvlteCdmaOnlySetFromEngMode */
extern "C" __attribute__((visibility("default"))) int isSvlteCdmaOnlySetFromEngMode(void) {
    ALOGD("isSvlteCdmaOnlySetFromEngMode() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::isNonSeparator(char) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils14isNonSeparatorEc(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils14isNonSeparatorEc() called");
    return 0;
}

/* Demangled: isDualTalkMode */
extern "C" __attribute__((visibility("default"))) int isDualTalkMode(void) {
    ALOGD("isDualTalkMode() called");
    return 0;
}

/* Exported Object: MsgHeader_fields */
extern "C" __attribute__((visibility("default"))) void* MsgHeader_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::matchIntlPrefixAndCC(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils20matchIntlPrefixAndCCENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils20matchIntlPrefixAndCCENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi() called");
    return 0;
}

/* Exported Object: MtkPhoneNumberUtils::PAUSE */
extern "C" __attribute__((visibility("default"))) void* _ZN19MtkPhoneNumberUtils5PAUSEE = NULL;

/* Exported Object: RIL_SIM_SAP_POWER_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_POWER_RSP_fields = NULL;

/* Exported Object: RIL_SIM_SAP_RESET_SIM_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_RESET_SIM_REQ_fields = NULL;

/* Demangled: getHidenLogPreFix */
extern "C" __attribute__((visibility("default"))) int getHidenLogPreFix(void) {
    ALOGD("getHidenLogPreFix() called");
    return 0;
}

/* Demangled: isCCCIPowerOffModem */
extern "C" __attribute__((visibility("default"))) int isCCCIPowerOffModem(void) {
    ALOGD("isCCCIPowerOffModem() called");
    return 0;
}

/* Demangled: isEmulatorRunning */
extern "C" __attribute__((visibility("default"))) int isEmulatorRunning(void) {
    ALOGD("isEmulatorRunning() called");
    return 0;
}

/* Demangled: isEnableModulationReport */
extern "C" __attribute__((visibility("default"))) int isEnableModulationReport(void) {
    ALOGD("isEnableModulationReport() called");
    return 0;
}

/* Demangled: isLogReductionCmd */
extern "C" __attribute__((visibility("default"))) int isLogReductionCmd(void) {
    ALOGD("isLogReductionCmd() called");
    return 0;
}

/* Demangled: isMultiPsAttachSupport */
extern "C" __attribute__((visibility("default"))) int isMultiPsAttachSupport(void) {
    ALOGD("isMultiPsAttachSupport() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields = NULL;

/* Exported Object: RIL_SIM_SAP_STATUS_IND_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_STATUS_IND_fields = NULL;

/* Exported Object: MtkPhoneNumberUtils::MIN_MATCH */
extern "C" __attribute__((visibility("default"))) void* _ZN19MtkPhoneNumberUtils9MIN_MATCHE = NULL;

/* Demangled: isFallbackNotSupportByOp */
extern "C" __attribute__((visibility("default"))) int isFallbackNotSupportByOp(void) {
    ALOGD("isFallbackNotSupportByOp() called");
    return 0;
}

/* Demangled: isExternalSimSupport */
extern "C" __attribute__((visibility("default"))) int isExternalSimSupport(void) {
    ALOGD("isExternalSimSupport() called");
    return 0;
}

/* Demangled: isLteSupport */
extern "C" __attribute__((visibility("default"))) int isLteSupport(void) {
    ALOGD("isLteSupport() called");
    return 0;
}

/* Demangled: isOp12Support */
extern "C" __attribute__((visibility("default"))) int isOp12Support(void) {
    ALOGD("isOp12Support() called");
    return 0;
}

/* Demangled: isSvlteSupport */
extern "C" __attribute__((visibility("default"))) int isSvlteSupport(void) {
    ALOGD("isSvlteSupport() called");
    return 0;
}

/* Demangled: triggerIpv6Rs */
extern "C" __attribute__((visibility("default"))) int triggerIpv6Rs(void) {
    ALOGD("triggerIpv6Rs() called");
    return 0;
}

/* Demangled: ril_nano_time */
extern "C" __attribute__((visibility("default"))) int ril_nano_time(void) {
    ALOGD("ril_nano_time() called");
    return 0;
}

/* Demangled: getActiveSvlteModeSlotId */
extern "C" __attribute__((visibility("default"))) int getActiveSvlteModeSlotId(void) {
    ALOGD("getActiveSvlteModeSlotId() called");
    return 0;
}

/* Demangled: isMultipleImsSupport */
extern "C" __attribute__((visibility("default"))) int isMultipleImsSupport(void) {
    ALOGD("isMultipleImsSupport() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::isSpecialEmergencyNumber(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils24isSpecialEmergencyNumberEiPKc(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils24isSpecialEmergencyNumberEiPKc() called");
    return 0;
}

/* Demangled: getClassType */
extern "C" __attribute__((visibility("default"))) int getClassType(void) {
    ALOGD("getClassType() called");
    return 0;
}

/* Demangled: givePrintableIccid */
extern "C" __attribute__((visibility("default"))) int givePrintableIccid(void) {
    ALOGD("givePrintableIccid() called");
    return 0;
}

/* Demangled: isEpdgSupport */
extern "C" __attribute__((visibility("default"))) int isEpdgSupport(void) {
    ALOGD("isEpdgSupport() called");
    return 0;
}

/* Demangled: isOp12MccMnc */
extern "C" __attribute__((visibility("default"))) int isOp12MccMnc(void) {
    ALOGD("isOp12MccMnc() called");
    return 0;
}

/* Demangled: setupRaSocket */
extern "C" __attribute__((visibility("default"))) int setupRaSocket(void) {
    ALOGD("setupRaSocket() called");
    return 0;
}

/* Demangled: record_stream_new */
extern "C" __attribute__((visibility("default"))) int record_stream_new(void) {
    ALOGD("record_stream_new() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_TRANSFER_ATR_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_ATR_REQ_fields = NULL;

/* Demangled: getMdMaxSimCount */
extern "C" __attribute__((visibility("default"))) int getMdMaxSimCount(void) {
    ALOGD("getMdMaxSimCount() called");
    return 0;
}

/* Demangled: getRildInterfaceCtrlSupport */
extern "C" __attribute__((visibility("default"))) int getRildInterfaceCtrlSupport(void) {
    ALOGD("getRildInterfaceCtrlSupport() called");
    return 0;
}

/* Demangled: isDisable2G */
extern "C" __attribute__((visibility("default"))) int isDisable2G(void) {
    ALOGD("isDisable2G() called");
    return 0;
}

/* Demangled: isOp01Support */
extern "C" __attribute__((visibility("default"))) int isOp01Support(void) {
    ALOGD("isOp01Support() called");
    return 0;
}

/* Demangled: isOp08Support */
extern "C" __attribute__((visibility("default"))) int isOp08Support(void) {
    ALOGD("isOp08Support() called");
    return 0;
}

/* Demangled: isSupportC2kSim */
extern "C" __attribute__((visibility("default"))) int isSupportC2kSim(void) {
    ALOGD("isSupportC2kSim() called");
    return 0;
}

/* Demangled: readMccMnc */
extern "C" __attribute__((visibility("default"))) int readMccMnc(void) {
    ALOGD("readMccMnc() called");
    return 0;
}

/* Demangled: record_stream_get_next */
extern "C" __attribute__((visibility("default"))) int record_stream_get_next(void) {
    ALOGD("record_stream_get_next() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::isISODigit(char) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils10isISODigitEc(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils10isISODigitEc() called");
    return 0;
}

/* Demangled: MtkPhoneNumberUtils::indexOfLastNetworkChar(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils22indexOfLastNetworkCharENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils22indexOfLastNetworkCharENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: isApFallbackSupport */
extern "C" __attribute__((visibility("default"))) int isApFallbackSupport(void) {
    ALOGD("isApFallbackSupport() called");
    return 0;
}

/* Demangled: isCdmaLteDcSupport */
extern "C" __attribute__((visibility("default"))) int isCdmaLteDcSupport(void) {
    ALOGD("isCdmaLteDcSupport() called");
    return 0;
}

/* Demangled: isOp17MccMnc */
extern "C" __attribute__((visibility("default"))) int isOp17MccMnc(void) {
    ALOGD("isOp17MccMnc() called");
    return 0;
}

/* Demangled: maskString */
extern "C" __attribute__((visibility("default"))) int maskString(void) {
    ALOGD("maskString() called");
    return 0;
}

/* Demangled: needToHidenLog */
extern "C" __attribute__((visibility("default"))) int needToHidenLog(void) {
    ALOGD("needToHidenLog() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_DISCONNECT_REQ_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_DISCONNECT_REQ_fields = NULL;

/* Demangled: MtkPhoneNumberUtils::matchTrunkPrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MtkPhoneNumberUtils16matchTrunkPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void) {
    ALOGD("_ZN19MtkPhoneNumberUtils16matchTrunkPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: setMSimProperty */
extern "C" __attribute__((visibility("default"))) int setMSimProperty(void) {
    ALOGD("setMSimProperty() called");
    return 0;
}

/* Demangled: getGeminiMode */
extern "C" __attribute__((visibility("default"))) int getGeminiMode(void) {
    ALOGD("getGeminiMode() called");
    return 0;
}

/* Exported Object: RIL_SIM_SAP_RESET_SIM_RSP_fields */
extern "C" __attribute__((visibility("default"))) void* RIL_SIM_SAP_RESET_SIM_RSP_fields = NULL;
