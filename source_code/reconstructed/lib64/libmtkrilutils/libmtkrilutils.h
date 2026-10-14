/*
 * Reverse-Engineered ABI Specification for: libmtkrilutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkrilutils.so
 */

#ifndef BEGONIA_RE_LIBMTKRILUTILS_H
#define BEGONIA_RE_LIBMTKRILUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN19MtkPhoneNumberUtils14compareLooselyENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES6_ */
/* Demangled: MtkPhoneNumberUtils::compareLoosely(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN19MtkPhoneNumberUtils14compareLooselyENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES6_(void);

/* Symbol: _ZN19MtkPhoneNumberUtils4WILDE */
/* Demangled: MtkPhoneNumberUtils::WILD */
extern void* _ZN19MtkPhoneNumberUtils4WILDE;

/* Symbol: isImsSupport */
/* Demangled: isImsSupport */
int isImsSupport(void);

/* Symbol: isSupportCommonSlot */
/* Demangled: isSupportCommonSlot */
int isSupportCommonSlot(void);

/* Symbol: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields */
/* Demangled: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields */
extern void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_RSP_fields;

/* Symbol: _ZN19MtkPhoneNumberUtilsD0Ev */
/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
int _ZN19MtkPhoneNumberUtilsD0Ev(void);

/* Symbol: RIL_get3GSIM */
/* Demangled: RIL_get3GSIM */
int RIL_get3GSIM(void);

/* Symbol: isMalSupported */
/* Demangled: isMalSupported */
int isMalSupported(void);

/* Symbol: isOp07Support */
/* Demangled: isOp07Support */
int isOp07Support(void);

/* Symbol: setMSimPropertyThreadSafe */
/* Demangled: setMSimPropertyThreadSafe */
int setMSimPropertyThreadSafe(void);

/* Symbol: _ZN19MtkPhoneNumberUtils13MIN_MATCH_CTAE */
/* Demangled: MtkPhoneNumberUtils::MIN_MATCH_CTA */
extern void* _ZN19MtkPhoneNumberUtils13MIN_MATCH_CTAE;

/* Symbol: getMSimProperty */
/* Demangled: getMSimProperty */
int getMSimProperty(void);

/* Symbol: getMultiImsSupportValue */
/* Demangled: getMultiImsSupportValue */
int getMultiImsSupportValue(void);

/* Symbol: isOMSupport */
/* Demangled: isOMSupport */
int isOMSupport(void);

/* Symbol: isRedialFeatureEnabled */
/* Demangled: isRedialFeatureEnabled */
int isRedialFeatureEnabled(void);

/* Symbol: record_stream_free */
/* Demangled: record_stream_free */
int record_stream_free(void);

/* Symbol: _ZN19MtkPhoneNumberUtils11minPositiveEii */
/* Demangled: MtkPhoneNumberUtils::minPositive(int, int) */
int _ZN19MtkPhoneNumberUtils11minPositiveEii(void);

/* Symbol: isSvlteLcgSupport */
/* Demangled: isSvlteLcgSupport */
int isSvlteLcgSupport(void);

/* Symbol: isWfcSupport */
/* Demangled: isWfcSupport */
int isWfcSupport(void);

/* Symbol: isOp16Support */
/* Demangled: isOp16Support */
int isOp16Support(void);

/* Symbol: RIL_SIM_SAP_TRANSFER_ATR_RSP_fields */
/* Demangled: RIL_SIM_SAP_TRANSFER_ATR_RSP_fields */
extern void* RIL_SIM_SAP_TRANSFER_ATR_RSP_fields;

/* Symbol: _ZN19MtkPhoneNumberUtilsD1Ev */
/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
int _ZN19MtkPhoneNumberUtilsD1Ev(void);

/* Symbol: _ZTV19MtkPhoneNumberUtils */
/* Demangled: vtable for MtkPhoneNumberUtils */
extern void* _ZTV19MtkPhoneNumberUtils;

/* Symbol: getCdmaModemSlot */
/* Demangled: getCdmaModemSlot */
int getCdmaModemSlot(void);

/* Symbol: hasVsimCard */
/* Demangled: hasVsimCard */
int hasVsimCard(void);

/* Symbol: isDssNoResetSupport */
/* Demangled: isDssNoResetSupport */
int isDssNoResetSupport(void);

/* Symbol: isRcsServiceEnabled */
/* Demangled: isRcsServiceEnabled */
int isRcsServiceEnabled(void);

/* Symbol: _ZN19MtkPhoneNumberUtils15matchIntlPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi */
/* Demangled: MtkPhoneNumberUtils::matchIntlPrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN19MtkPhoneNumberUtils15matchIntlPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void);

/* Symbol: RIL_SIM_SAP_DISCONNECT_IND_fields */
/* Demangled: RIL_SIM_SAP_DISCONNECT_IND_fields */
extern void* RIL_SIM_SAP_DISCONNECT_IND_fields;

/* Symbol: RIL_SIM_SAP_DISCONNECT_RSP_fields */
/* Demangled: RIL_SIM_SAP_DISCONNECT_RSP_fields */
extern void* RIL_SIM_SAP_DISCONNECT_RSP_fields;

/* Symbol: RIL_SIM_SAP_ERROR_RSP_fields */
/* Demangled: RIL_SIM_SAP_ERROR_RSP_fields */
extern void* RIL_SIM_SAP_ERROR_RSP_fields;

/* Symbol: getCdmaSocketSlotId */
/* Demangled: getCdmaSocketSlotId */
int getCdmaSocketSlotId(void);

/* Symbol: _ZN19MtkPhoneNumberUtils24getUsernameFromUriNumberENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: MtkPhoneNumberUtils::getUsernameFromUriNumber(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN19MtkPhoneNumberUtils24getUsernameFromUriNumberENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: isDisableCapabilitySwitch */
/* Demangled: isDisableCapabilitySwitch */
int isDisableCapabilitySwitch(void);

/* Symbol: isInternalLoad */
/* Demangled: isInternalLoad */
int isInternalLoad(void);

/* Symbol: isPersistExternalSimDisabled */
/* Demangled: isPersistExternalSimDisabled */
int isPersistExternalSimDisabled(void);

/* Symbol: mtkRequestToString */
/* Demangled: mtkRequestToString */
int mtkRequestToString(void);

/* Symbol: pii */
/* Demangled: pii */
int pii(void);

/* Symbol: createRawSocket */
/* Demangled: createRawSocket */
int createRawSocket(void);

/* Symbol: RIL_SIM_SAP_APDU_REQ_fields */
/* Demangled: RIL_SIM_SAP_APDU_REQ_fields */
extern void* RIL_SIM_SAP_APDU_REQ_fields;

/* Symbol: _ZN19MtkPhoneNumberUtilsD2Ev */
/* Demangled: MtkPhoneNumberUtils::~MtkPhoneNumberUtils() */
int _ZN19MtkPhoneNumberUtilsD2Ev(void);

/* Symbol: getRcsSrvTag */
/* Demangled: getRcsSrvTag */
int getRcsSrvTag(void);

/* Symbol: getSvlteProjectType */
/* Demangled: getSvlteProjectType */
int getSvlteProjectType(void);

/* Symbol: _ZN19MtkPhoneNumberUtils10isDialableEc */
/* Demangled: MtkPhoneNumberUtils::isDialable(char) */
int _ZN19MtkPhoneNumberUtils10isDialableEc(void);

/* Symbol: isInternationalRoamingEnabled */
/* Demangled: isInternationalRoamingEnabled */
int isInternationalRoamingEnabled(void);

/* Symbol: getSimCount */
/* Demangled: getSimCount */
int getSimCount(void);

/* Symbol: isOp01Volte */
/* Demangled: isOp01Volte */
int isOp01Volte(void);

/* Symbol: getHwAddr */
/* Demangled: getHwAddr */
int getHwAddr(void);

/* Symbol: RIL_SIM_SAP_CONNECT_REQ_fields */
/* Demangled: RIL_SIM_SAP_CONNECT_REQ_fields */
extern void* RIL_SIM_SAP_CONNECT_REQ_fields;

/* Symbol: isVilteSupport */
/* Demangled: isVilteSupport */
int isVilteSupport(void);

/* Symbol: sendRs */
/* Demangled: sendRs */
int sendRs(void);

/* Symbol: RIL_SIM_SAP_POWER_REQ_fields */
/* Demangled: RIL_SIM_SAP_POWER_REQ_fields */
extern void* RIL_SIM_SAP_POWER_REQ_fields;

/* Symbol: isRcsUaProxySupport */
/* Demangled: isRcsUaProxySupport */
int isRcsUaProxySupport(void);

/* Symbol: RIL_SIM_SAP_APDU_RSP_fields */
/* Demangled: RIL_SIM_SAP_APDU_RSP_fields */
extern void* RIL_SIM_SAP_APDU_RSP_fields;

/* Symbol: isExternalSimOnlySlot */
/* Demangled: isExternalSimOnlySlot */
int isExternalSimOnlySlot(void);

/* Symbol: isMdFallbackSupport */
/* Demangled: isMdFallbackSupport */
int isMdFallbackSupport(void);

/* Symbol: isSrlteSupport */
/* Demangled: isSrlteSupport */
int isSrlteSupport(void);

/* Symbol: setExternalSimProperty */
/* Demangled: setExternalSimProperty */
int setExternalSimProperty(void);

/* Symbol: setRildInterfaceCtrlSupport */
/* Demangled: setRildInterfaceCtrlSupport */
int setRildInterfaceCtrlSupport(void);

/* Symbol: isDualCTCard */
/* Demangled: isDualCTCard */
int isDualCTCard(void);

/* Symbol: isImsAndVolteSupport */
/* Demangled: isImsAndVolteSupport */
int isImsAndVolteSupport(void);

/* Symbol: RIL_SIM_SAP_CONNECT_RSP_fields */
/* Demangled: RIL_SIM_SAP_CONNECT_RSP_fields */
extern void* RIL_SIM_SAP_CONNECT_RSP_fields;

/* Symbol: isUserLoad */
/* Demangled: isUserLoad */
int isUserLoad(void);

/* Symbol: assebleRaMessage */
/* Demangled: assebleRaMessage */
int assebleRaMessage(void);

/* Symbol: _ZN19MtkPhoneNumberUtils4WAITE */
/* Demangled: MtkPhoneNumberUtils::WAIT */
extern void* _ZN19MtkPhoneNumberUtils4WAITE;

/* Symbol: hasCdmaCard */
/* Demangled: hasCdmaCard */
int hasCdmaCard(void);

/* Symbol: isEngLoad */
/* Demangled: isEngLoad */
int isEngLoad(void);

/* Symbol: isOp129MccMnc */
/* Demangled: isOp129MccMnc */
int isOp129MccMnc(void);

/* Symbol: strStartsWith */
/* Demangled: strStartsWith */
int strStartsWith(void);

/* Symbol: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields */
/* Demangled: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields */
extern void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_REQ_fields;

/* Symbol: isFemtocellSupport */
/* Demangled: isFemtocellSupport */
int isFemtocellSupport(void);

/* Symbol: isSvlteCdmaOnlySetFromEngMode */
/* Demangled: isSvlteCdmaOnlySetFromEngMode */
int isSvlteCdmaOnlySetFromEngMode(void);

/* Symbol: _ZN19MtkPhoneNumberUtils14isNonSeparatorEc */
/* Demangled: MtkPhoneNumberUtils::isNonSeparator(char) */
int _ZN19MtkPhoneNumberUtils14isNonSeparatorEc(void);

/* Symbol: isDualTalkMode */
/* Demangled: isDualTalkMode */
int isDualTalkMode(void);

/* Symbol: MsgHeader_fields */
/* Demangled: MsgHeader_fields */
extern void* MsgHeader_fields;

/* Symbol: _ZN19MtkPhoneNumberUtils20matchIntlPrefixAndCCENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi */
/* Demangled: MtkPhoneNumberUtils::matchIntlPrefixAndCC(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN19MtkPhoneNumberUtils20matchIntlPrefixAndCCENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void);

/* Symbol: _ZN19MtkPhoneNumberUtils5PAUSEE */
/* Demangled: MtkPhoneNumberUtils::PAUSE */
extern void* _ZN19MtkPhoneNumberUtils5PAUSEE;

/* Symbol: RIL_SIM_SAP_POWER_RSP_fields */
/* Demangled: RIL_SIM_SAP_POWER_RSP_fields */
extern void* RIL_SIM_SAP_POWER_RSP_fields;

/* Symbol: RIL_SIM_SAP_RESET_SIM_REQ_fields */
/* Demangled: RIL_SIM_SAP_RESET_SIM_REQ_fields */
extern void* RIL_SIM_SAP_RESET_SIM_REQ_fields;

/* Symbol: getHidenLogPreFix */
/* Demangled: getHidenLogPreFix */
int getHidenLogPreFix(void);

/* Symbol: isCCCIPowerOffModem */
/* Demangled: isCCCIPowerOffModem */
int isCCCIPowerOffModem(void);

/* Symbol: isEmulatorRunning */
/* Demangled: isEmulatorRunning */
int isEmulatorRunning(void);

/* Symbol: isEnableModulationReport */
/* Demangled: isEnableModulationReport */
int isEnableModulationReport(void);

/* Symbol: isLogReductionCmd */
/* Demangled: isLogReductionCmd */
int isLogReductionCmd(void);

/* Symbol: isMultiPsAttachSupport */
/* Demangled: isMultiPsAttachSupport */
int isMultiPsAttachSupport(void);

/* Symbol: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields */
/* Demangled: RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields */
extern void* RIL_SIM_SAP_SET_TRANSFER_PROTOCOL_REQ_fields;

/* Symbol: RIL_SIM_SAP_STATUS_IND_fields */
/* Demangled: RIL_SIM_SAP_STATUS_IND_fields */
extern void* RIL_SIM_SAP_STATUS_IND_fields;

/* Symbol: _ZN19MtkPhoneNumberUtils9MIN_MATCHE */
/* Demangled: MtkPhoneNumberUtils::MIN_MATCH */
extern void* _ZN19MtkPhoneNumberUtils9MIN_MATCHE;

/* Symbol: isFallbackNotSupportByOp */
/* Demangled: isFallbackNotSupportByOp */
int isFallbackNotSupportByOp(void);

/* Symbol: isExternalSimSupport */
/* Demangled: isExternalSimSupport */
int isExternalSimSupport(void);

/* Symbol: isLteSupport */
/* Demangled: isLteSupport */
int isLteSupport(void);

/* Symbol: isOp12Support */
/* Demangled: isOp12Support */
int isOp12Support(void);

/* Symbol: isSvlteSupport */
/* Demangled: isSvlteSupport */
int isSvlteSupport(void);

/* Symbol: triggerIpv6Rs */
/* Demangled: triggerIpv6Rs */
int triggerIpv6Rs(void);

/* Symbol: ril_nano_time */
/* Demangled: ril_nano_time */
int ril_nano_time(void);

/* Symbol: getActiveSvlteModeSlotId */
/* Demangled: getActiveSvlteModeSlotId */
int getActiveSvlteModeSlotId(void);

/* Symbol: isMultipleImsSupport */
/* Demangled: isMultipleImsSupport */
int isMultipleImsSupport(void);

/* Symbol: _ZN19MtkPhoneNumberUtils24isSpecialEmergencyNumberEiPKc */
/* Demangled: MtkPhoneNumberUtils::isSpecialEmergencyNumber(int, char const*) */
int _ZN19MtkPhoneNumberUtils24isSpecialEmergencyNumberEiPKc(void);

/* Symbol: getClassType */
/* Demangled: getClassType */
int getClassType(void);

/* Symbol: givePrintableIccid */
/* Demangled: givePrintableIccid */
int givePrintableIccid(void);

/* Symbol: isEpdgSupport */
/* Demangled: isEpdgSupport */
int isEpdgSupport(void);

/* Symbol: isOp12MccMnc */
/* Demangled: isOp12MccMnc */
int isOp12MccMnc(void);

/* Symbol: setupRaSocket */
/* Demangled: setupRaSocket */
int setupRaSocket(void);

/* Symbol: record_stream_new */
/* Demangled: record_stream_new */
int record_stream_new(void);

/* Symbol: RIL_SIM_SAP_TRANSFER_ATR_REQ_fields */
/* Demangled: RIL_SIM_SAP_TRANSFER_ATR_REQ_fields */
extern void* RIL_SIM_SAP_TRANSFER_ATR_REQ_fields;

/* Symbol: getMdMaxSimCount */
/* Demangled: getMdMaxSimCount */
int getMdMaxSimCount(void);

/* Symbol: getRildInterfaceCtrlSupport */
/* Demangled: getRildInterfaceCtrlSupport */
int getRildInterfaceCtrlSupport(void);

/* Symbol: isDisable2G */
/* Demangled: isDisable2G */
int isDisable2G(void);

/* Symbol: isOp01Support */
/* Demangled: isOp01Support */
int isOp01Support(void);

/* Symbol: isOp08Support */
/* Demangled: isOp08Support */
int isOp08Support(void);

/* Symbol: isSupportC2kSim */
/* Demangled: isSupportC2kSim */
int isSupportC2kSim(void);

/* Symbol: readMccMnc */
/* Demangled: readMccMnc */
int readMccMnc(void);

/* Symbol: record_stream_get_next */
/* Demangled: record_stream_get_next */
int record_stream_get_next(void);

/* Symbol: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields */
/* Demangled: RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields */
extern void* RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_fields;

/* Symbol: _ZN19MtkPhoneNumberUtils10isISODigitEc */
/* Demangled: MtkPhoneNumberUtils::isISODigit(char) */
int _ZN19MtkPhoneNumberUtils10isISODigitEc(void);

/* Symbol: _ZN19MtkPhoneNumberUtils22indexOfLastNetworkCharENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: MtkPhoneNumberUtils::indexOfLastNetworkChar(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN19MtkPhoneNumberUtils22indexOfLastNetworkCharENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: isApFallbackSupport */
/* Demangled: isApFallbackSupport */
int isApFallbackSupport(void);

/* Symbol: isCdmaLteDcSupport */
/* Demangled: isCdmaLteDcSupport */
int isCdmaLteDcSupport(void);

/* Symbol: isOp17MccMnc */
/* Demangled: isOp17MccMnc */
int isOp17MccMnc(void);

/* Symbol: maskString */
/* Demangled: maskString */
int maskString(void);

/* Symbol: needToHidenLog */
/* Demangled: needToHidenLog */
int needToHidenLog(void);

/* Symbol: RIL_SIM_SAP_DISCONNECT_REQ_fields */
/* Demangled: RIL_SIM_SAP_DISCONNECT_REQ_fields */
extern void* RIL_SIM_SAP_DISCONNECT_REQ_fields;

/* Symbol: _ZN19MtkPhoneNumberUtils16matchTrunkPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi */
/* Demangled: MtkPhoneNumberUtils::matchTrunkPrefix(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN19MtkPhoneNumberUtils16matchTrunkPrefixENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void);

/* Symbol: setMSimProperty */
/* Demangled: setMSimProperty */
int setMSimProperty(void);

/* Symbol: getGeminiMode */
/* Demangled: getGeminiMode */
int getGeminiMode(void);

/* Symbol: RIL_SIM_SAP_RESET_SIM_RSP_fields */
/* Demangled: RIL_SIM_SAP_RESET_SIM_RSP_fields */
extern void* RIL_SIM_SAP_RESET_SIM_RSP_fields;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKRILUTILS_H */
