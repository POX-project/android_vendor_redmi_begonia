/*
 * Reverse-Engineered ABI Specification for: librilfusion.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: librilfusion.so
 */

#ifndef BEGONIA_RE_LIBRILFUSION_H
#define BEGONIA_RE_LIBRILFUSION_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5radio15getClirResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getClirResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15getClirResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z19decodeInactiveTimerj */
/* Demangled: decodeInactiveTimer(unsigned int) */
int _Z19decodeInactiveTimerj(void);

/* Symbol: _ZN14MtkRadioExImpl16enableSCGfailureEibiii */
/* Demangled: MtkRadioExImpl::enableSCGfailure(int, bool, int, int, int) */
int _ZN14MtkRadioExImpl16enableSCGfailureEibiii(void);

/* Symbol: _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE */
/* Demangled: RadioImpl::setTTYMode(int, android::hardware::radio::V1_0::TtyMode) */
int _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE(void);

/* Symbol: _Z12dispatchVoidiii */
/* Demangled: dispatchVoid(int, int, int) */
int _Z12dispatchVoidiii(void);

/* Symbol: _ZN9RadioImpl15getCellInfoListEi */
/* Demangled: RadioImpl::getCellInfoList(int) */
int _ZN9RadioImpl15getCellInfoListEi(void);

/* Symbol: _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE */
/* Demangled: RadioImpl::startNetworkScan(int, android::hardware::radio::V1_1::NetworkScanRequest const&) */
int _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE(void);

/* Symbol: __ubsan_handle_nullability_return_minimal */
/* Demangled: __ubsan_handle_nullability_return_minimal */
int __ubsan_handle_nullability_return_minimal(void);

/* Symbol: rilSocketIdToString */
/* Demangled: rilSocketIdToString */
int rilSocketIdToString(void);

/* Symbol: _ZN10mtkRadioEx19cfgB1offsetResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cfgB1offsetResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19cfgB1offsetResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_add_overflow_minimal_abort */
/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
int __ubsan_handle_add_overflow_minimal_abort(void);

/* Symbol: _ZN14MtkRadioExImpl11controlCallEiii */
/* Demangled: MtkRadioExImpl::controlCall(int, int, int) */
int _ZN14MtkRadioExImpl11controlCallEiii(void);

/* Symbol: _ZN14MtkRadioExImpl20dataConnectionDetachEii */
/* Demangled: MtkRadioExImpl::dataConnectionDetach(int, int) */
int _ZN14MtkRadioExImpl20dataConnectionDetachEii(void);

/* Symbol: _ZN14MtkRadioExImpl24setVoiceDomainPreferenceEii */
/* Demangled: MtkRadioExImpl::setVoiceDomainPreference(int, int) */
int _ZN14MtkRadioExImpl24setVoiceDomainPreferenceEii(void);

/* Symbol: _ZN10mtkRadioEx21callInfoIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::callInfoIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21callInfoIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25sendWifiIpAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendWifiIpAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25sendWifiIpAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28enableDsdaIndicationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::enableDsdaIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28enableDsdaIndicationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z13ril_event_delP9ril_event */
/* Demangled: ril_event_del(ril_event*) */
int _Z13ril_event_delP9ril_event(void);

/* Symbol: _Z30convertRilRadioCapabilityToHalPKvmRN7android8hardware5radio4V1_015RadioCapabilityE */
/* Demangled: convertRilRadioCapabilityToHal(void const*, unsigned long, android::hardware::radio::V1_0::RadioCapability&) */
int _Z30convertRilRadioCapabilityToHalPKvmRN7android8hardware5radio4V1_015RadioCapabilityE(void);

/* Symbol: _ZTC7SapImpl0_N7android8hardware5radio4V1_24ISapE */
/* Demangled: construction vtable for android::hardware::radio::V1_2::ISap-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android8hardware5radio4V1_24ISapE;

/* Symbol: __ubsan_handle_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
int __ubsan_handle_out_of_bounds_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx17setEccNumResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setEccNumResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17setEccNumResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15getClipResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getClipResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15getClipResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15selectFemtocellEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: MtkRadioExImpl::selectFemtocell(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl15selectFemtocellEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN5radio27getModemStackStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getModemStackStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27getModemStackStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15sendAtciRequestEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: MtkRadioExImpl::sendAtciRequest(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl15sendAtciRequestEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN10mtkRadioEx13imsRtpInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsRtpInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13imsRtpInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25getSignalStrengthResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getSignalStrengthResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25getSignalStrengthResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z31convertRilCellInfoListToHal_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_58CellInfoEEE */
/* Demangled: convertRilCellInfoListToHal_1_5(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_5::CellInfo>&) */
int _Z31convertRilCellInfoListToHal_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_58CellInfoEEE(void);

/* Symbol: _ZN9RadioImpl23setIndicationFilter_1_5Eii */
/* Demangled: RadioImpl::setIndicationFilter_1_5(int, int) */
int _ZN9RadioImpl23setIndicationFilter_1_5Eii(void);

/* Symbol: _ZN10mtkRadioEx32rttModifyRequestResponseResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::rttModifyRequestResponseResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32rttModifyRequestResponseResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN15RadioConfigImpl21setPreferredDataModemEih */
/* Demangled: RadioConfigImpl::setPreferredDataModem(int, unsigned char) */
int _ZN15RadioConfigImpl21setPreferredDataModemEih(void);

/* Symbol: _ZN10mtkRadioEx22onNattKeepAliveChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onNattKeepAliveChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22onNattKeepAliveChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26setWifiSignalLevelResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWifiSignalLevelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26setWifiSignalLevelResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio16onBarringInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::onBarringInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16onBarringInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE */
/* Demangled: convertRilCdmaSignalInfoRecordToHal(RIL_CDMA_SignalInfoRecord*, android::hardware::radio::V1_0::CdmaSignalInfoRecord&) */
int _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE(void);

/* Symbol: _ZN14MtkRadioExImpl21readPhoneBookEntryExtEiii */
/* Demangled: MtkRadioExImpl::readPhoneBookEntryExt(int, int, int) */
int _ZN14MtkRadioExImpl21readPhoneBookEntryExtEiii(void);

/* Symbol: _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::supplyIccPuk2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN9RadioImpl21reportSmsMemoryStatusEib */
/* Demangled: RadioImpl::reportSmsMemoryStatus(int, bool) */
int _ZN9RadioImpl21reportSmsMemoryStatusEib(void);

/* Symbol: _ZN10mtkRadioEx15volteSettingIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::volteSettingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15volteSettingIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24setWifiIpAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWifiIpAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24setWifiIpAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: failCauseToString */
/* Demangled: failCauseToString */
int failCauseToString(void);

/* Symbol: _ZN14MtkRadioExImpl16sendSarIndicatorEiiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::sendSarIndicator(int, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl16sendSarIndicatorEiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx15setColrResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setColrResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15setColrResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21sendBurstDtmfResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendBurstDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21sendBurstDtmfResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26separateConnectionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::separateConnectionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26separateConnectionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl11setSimPowerEii */
/* Demangled: MtkRadioExImpl::setSimPower(int, int) */
int _ZN14MtkRadioExImpl11setSimPowerEii(void);

/* Symbol: _ZN14MtkRadioExImpl14deleteUPBEntryEiiii */
/* Demangled: MtkRadioExImpl::deleteUPBEntry(int, int, int, int) */
int _ZN14MtkRadioExImpl14deleteUPBEntryEiiii(void);

/* Symbol: _ZN14MtkRadioExImpl22writePhoneBookEntryExtEiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE */
/* Demangled: MtkRadioExImpl::writePhoneBookEntryExt(int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt const&) */
int _ZN14MtkRadioExImpl22writePhoneBookEntryExtEiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE(void);

/* Symbol: _ZN9RadioImpl7getMuteEi */
/* Demangled: RadioImpl::getMute(int) */
int _ZN9RadioImpl7getMuteEi(void);

/* Symbol: _ZN10mtkRadioEx21getDsdaStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getDsdaStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21getDsdaStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio24currentSignalStrengthIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::currentSignalStrengthInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24currentSignalStrengthIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_m */
/* Demangled: RilSapSocket::sOnRequestComplete(void*, RIL_Errno, void*, unsigned long) */
int _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_m(void);

/* Symbol: _Z33convertRilSignalStrengthToHal_1_4PKvmRN7android8hardware5radio4V1_414SignalStrengthE */
/* Demangled: convertRilSignalStrengthToHal_1_4(void const*, unsigned long, android::hardware::radio::V1_4::SignalStrength&) */
int _Z33convertRilSignalStrengthToHal_1_4PKvmRN7android8hardware5radio4V1_414SignalStrengthE(void);

/* Symbol: _ZN14MtkRadioExImpl14setModemImsCfgEiRKN7android8hardware11hidl_stringES4_i */
/* Demangled: MtkRadioExImpl::setModemImsCfg(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl14setModemImsCfgEiRKN7android8hardware11hidl_stringES4_i(void);

/* Symbol: _ZN14MtkRadioExImpl8sendUssiEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::sendUssi(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl8sendUssiEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl23getPreferredNetworkTypeEi */
/* Demangled: RadioImpl::getPreferredNetworkType(int) */
int _ZN9RadioImpl23getPreferredNetworkTypeEi(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal_abort */
/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
int __ubsan_handle_pointer_overflow_minimal_abort(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal */
/* Demangled: __ubsan_handle_sub_overflow_minimal */
int __ubsan_handle_sub_overflow_minimal(void);

/* Symbol: _ZN5radio25cancelPendingUssdResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::cancelPendingUssdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25cancelPendingUssdResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE */
/* Demangled: SapImpl::setCallback(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
int _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal_abort */
/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
int __ubsan_handle_invalid_builtin_minimal_abort(void);

/* Symbol: _ZN5radio25cdmaOtaProvisionStatusIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaOtaProvisionStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25cdmaOtaProvisionStatusIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: s_vendorFunctions */
/* Demangled: s_vendorFunctions */
extern void* s_vendorFunctions;

/* Symbol: _ZN5radio30sendEnvelopeWithStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendEnvelopeWithStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio30sendEnvelopeWithStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl17setWifiPingResultEiiii */
/* Demangled: MtkRadioExImpl::setWifiPingResult(int, int, int, int) */
int _ZN14MtkRadioExImpl17setWifiPingResultEiiii(void);

/* Symbol: _ZN9RadioImpl25exitEmergencyCallbackModeEi */
/* Demangled: RadioImpl::exitEmergencyCallbackMode(int) */
int _ZN9RadioImpl25exitEmergencyCallbackModeEi(void);

/* Symbol: _ZN10mtkRadioEx20imsDataInfoNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDataInfoNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20imsDataInfoNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25smlSlotLockInfoChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::smlSlotLockInfoChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25smlSlotLockInfoChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android19onCommandDisconnectEjj */
/* Demangled: android::onCommandDisconnect(unsigned int, unsigned int) */
int _ZN7android19onCommandDisconnectEjj(void);

/* Symbol: _ZN14MtkRadioExImpl14smartRatSwitchEiii */
/* Demangled: MtkRadioExImpl::smartRatSwitch(int, int, int) */
int _ZN14MtkRadioExImpl14smartRatSwitchEiii(void);

/* Symbol: _ZN9RadioImpl10getTTYModeEi */
/* Demangled: RadioImpl::getTTYMode(int) */
int _ZN9RadioImpl10getTTYModeEi(void);

/* Symbol: pb_encode_fixed32 */
/* Demangled: pb_encode_fixed32 */
int pb_encode_fixed32(void);

/* Symbol: _ZN10mtkRadioEx18onMccMncChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onMccMncChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18onMccMncChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl10setEccModeEiRKN7android8hardware11hidl_stringEiii */
/* Demangled: MtkRadioExImpl::setEccMode(int, android::hardware::hidl_string const&, int, int, int) */
int _ZN14MtkRadioExImpl10setEccModeEiRKN7android8hardware11hidl_stringEiii(void);

/* Symbol: _ZN14MtkRadioExImpl16setRoamingEnableEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: MtkRadioExImpl::setRoamingEnable(int, android::hardware::hidl_vec<int> const&) */
int _ZN14MtkRadioExImpl16setRoamingEnableEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN10mtkRadioEx15setColpResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setColpResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15setColpResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22onRemoveRestrictEutranEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onRemoveRestrictEutran(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22onRemoveRestrictEutranEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28dataConnectionAttachResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dataConnectionAttachResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28dataConnectionAttachResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15rilConnectedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::rilConnectedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15rilConnectedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl20enableDsdaIndicationEib */
/* Demangled: MtkRadioExImpl::enableDsdaIndication(int, bool) */
int _ZN14MtkRadioExImpl20enableDsdaIndicationEib(void);

/* Symbol: _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::setBarringPassword(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE */
/* Demangled: RadioImpl::setCarrierInfoForImsiEncryption(int, android::hardware::radio::V1_1::ImsiEncryptionInfo const&) */
int _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE(void);

/* Symbol: s_radioConfigFunctions */
/* Demangled: s_radioConfigFunctions */
extern void* s_radioConfigFunctions;

/* Symbol: _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm */
/* Demangled: responseLceStatusInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
int _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void);

/* Symbol: radioConfigService */
/* Demangled: radioConfigService */
extern void* radioConfigService;

/* Symbol: _ZN10mtkRadioEx16onDsdaChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onDsdaChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16onDsdaChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z41convertCallsSpeechCodecToHidlAudioQualityi */
/* Demangled: convertCallsSpeechCodecToHidlAudioQuality(int) */
int _Z41convertCallsSpeechCodecToHidlAudioQualityi(void);

/* Symbol: _ZN10mtkRadioEx11smsReadyIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::smsReadyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx11smsReadyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21getXcapStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getXcapStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21getXcapStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30setPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setPhoneBookMemStorageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30setPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23onRegistrationFailedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::onRegistrationFailedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23onRegistrationFailedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl19queryPhbStorageInfoEii */
/* Demangled: MtkRadioExImpl::queryPhbStorageInfo(int, int) */
int _ZN14MtkRadioExImpl19queryPhbStorageInfoEii(void);

/* Symbol: _ZN14MtkRadioExImpl25getImsCfgResourceCapValueEii */
/* Demangled: MtkRadioExImpl::getImsCfgResourceCapValue(int, int) */
int _ZN14MtkRadioExImpl25getImsCfgResourceCapValueEii(void);

/* Symbol: _ZN10mtkRadioEx12onWifiPdnOOSEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiPdnOOS(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12onWifiPdnOOSEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z29convertCharPtrToVecHidlStringPKc */
/* Demangled: convertCharPtrToVecHidlString(char const*) */
int _Z29convertCharPtrToVecHidlStringPKc(void);

/* Symbol: radioService */
/* Demangled: radioService */
extern void* radioService;

/* Symbol: resetWakelock */
/* Demangled: resetWakelock */
int resetWakelock(void);

/* Symbol: _ZN14MtkRadioExImpl15querySsacStatusEi */
/* Demangled: MtkRadioExImpl::querySsacStatus(int) */
int _ZN14MtkRadioExImpl15querySsacStatusEi(void);

/* Symbol: _ZN14MtkRadioExImpl16setTxPowerStatusEii */
/* Demangled: MtkRadioExImpl::setTxPowerStatus(int, int) */
int _ZN14MtkRadioExImpl16setTxPowerStatusEii(void);

/* Symbol: _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::supplyIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN10mtkRadioEx39getDeactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getDeactivateNrScgCommunicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx39getDeactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22setCallForwardResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCallForwardResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22setCallForwardResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm */
/* Demangled: responseInt(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
int _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio12isTidInRLockEjl */
/* Demangled: radio::isTidInRLock(unsigned int, long) */
int _ZN5radio12isTidInRLockEjl(void);

/* Symbol: _ZN10mtkRadioEx13onWfcPdnErrorEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWfcPdnError(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13onWfcPdnErrorEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx35setIgnoreSameNumberIntervalResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setIgnoreSameNumberIntervalResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx35setIgnoreSameNumberIntervalResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl14getSmscAddressEi */
/* Demangled: RadioImpl::getSmscAddress(int) */
int _ZN9RadioImpl14getSmscAddressEi(void);

/* Symbol: _ZN5radio18rejectCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::rejectCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18rejectCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26setLocationUpdatesResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setLocationUpdatesResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26setLocationUpdatesResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: MtkRadioExImpl::sendRequestRaw(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN14MtkRadioExImpl26responseAcknowledgementMtkEv */
/* Demangled: MtkRadioExImpl::responseAcknowledgementMtk() */
int _ZN14MtkRadioExImpl26responseAcknowledgementMtkEv(void);

/* Symbol: _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_ */
/* Demangled: RadioImpl::setFacilityLockForApp(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_(void);

/* Symbol: _ZN10mtkRadioEx17smartRatSwitchIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::smartRatSwitchInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17smartRatSwitchIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18acknowledgeRequestEji */
/* Demangled: radio::acknowledgeRequest(unsigned int, int) */
int _ZN5radio18acknowledgeRequestEji(void);

/* Symbol: _ZN14MtkRadioExImpl20sendVsimNotificationEijjj */
/* Demangled: MtkRadioExImpl::sendVsimNotification(int, unsigned int, unsigned int, unsigned int) */
int _ZN14MtkRadioExImpl20sendVsimNotificationEijjj(void);

/* Symbol: _ZN14MtkRadioExImpl34setResponseFunctionsSmartRatSwitchERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_028ISmartRatSwitchRadioResponseEEERKNS1_INS6_30ISmartRatSwitchRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsSmartRatSwitch(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISmartRatSwitchRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISmartRatSwitchRadioIndication> const&) */
int _ZN14MtkRadioExImpl34setResponseFunctionsSmartRatSwitchERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_028ISmartRatSwitchRadioResponseEEERKNS1_INS6_30ISmartRatSwitchRadioIndicationEEE(void);

/* Symbol: _ZN14MtkRadioExImpl13resetSuppServEi */
/* Demangled: MtkRadioExImpl::resetSuppServ(int) */
int _ZN14MtkRadioExImpl13resetSuppServEi(void);

/* Symbol: _ZN14MtkRadioExImpl18setSipHeaderReportEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::setSipHeaderReport(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl18setSipHeaderReportEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: __ubsan_handle_alignment_assumption_minimal_abort */
/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
int __ubsan_handle_alignment_assumption_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx22bipProactiveCommandIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::bipProactiveCommandInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22bipProactiveCommandIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22dialWithSipUriResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dialWithSipUriResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22dialWithSipUriResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio29currentPhysicalChannelConfigsEjii9RIL_ErrnoPKvm */
/* Demangled: radio::currentPhysicalChannelConfigs(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29currentPhysicalChannelConfigsEjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal_abort */
/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
int __ubsan_handle_sub_overflow_minimal_abort(void);

/* Symbol: _ZN14MtkRadioExImpl17setCallIndicationEiiiii */
/* Demangled: MtkRadioExImpl::setCallIndication(int, int, int, int, int) */
int _ZN14MtkRadioExImpl17setCallIndicationEiiiii(void);

/* Symbol: _ZN14MtkRadioExImpl19setSmartSceneSwitchEiiii */
/* Demangled: MtkRadioExImpl::setSmartSceneSwitch(int, int, int, int) */
int _ZN14MtkRadioExImpl19setSmartSceneSwitchEiiii(void);

/* Symbol: RIL_onUnsolicitedResponse */
/* Demangled: RIL_onUnsolicitedResponse */
int RIL_onUnsolicitedResponse(void);

/* Symbol: _Z20memsetAndFreeStringsiz */
/* Demangled: memsetAndFreeStrings(int, ...) */
int _Z20memsetAndFreeStringsiz(void);

/* Symbol: _Z23convertHexStringToBytesPKvm */
/* Demangled: convertHexStringToBytes(void const*, unsigned long) */
int _Z23convertHexStringToBytesPKvm(void);

/* Symbol: _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE */
/* Demangled: RadioImpl::nvResetConfig(int, android::hardware::radio::V1_0::ResetNvType) */
int _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE(void);

/* Symbol: _ZN9RadioImpl14setCallWaitingEibi */
/* Demangled: RadioImpl::setCallWaiting(int, bool, int) */
int _ZN9RadioImpl14setCallWaitingEibi(void);

/* Symbol: _ZN9RadioImpl26setSystemSelectionChannelsEibRKN7android8hardware8hidl_vecINS1_5radio4V1_120RadioAccessSpecifierEEE */
/* Demangled: RadioImpl::setSystemSelectionChannels(int, bool, android::hardware::hidl_vec<android::hardware::radio::V1_1::RadioAccessSpecifier> const&) */
int _ZN9RadioImpl26setSystemSelectionChannelsEibRKN7android8hardware8hidl_vecINS1_5radio4V1_120RadioAccessSpecifierEEE(void);

/* Symbol: _ZN10mtkRadioEx21setWfcProfileResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWfcProfileResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21setWfcProfileResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22startKeepaliveResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::startKeepaliveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22startKeepaliveResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl23supplyDepersonalizationEiRKN7android8hardware11hidl_stringEi */
/* Demangled: MtkRadioExImpl::supplyDepersonalization(int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl23supplyDepersonalizationEiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN9RadioImpl19getModemStackStatusEi */
/* Demangled: RadioImpl::getModemStackStatus(int) */
int _ZN9RadioImpl19getModemStackStatusEi(void);

/* Symbol: _ZN5radio21newSmsStatusReportIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::newSmsStatusReportInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21newSmsStatusReportIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl21imsBearerStateConfirmEiiii */
/* Demangled: MtkRadioExImpl::imsBearerStateConfirm(int, int, int, int) */
int _ZN14MtkRadioExImpl21imsBearerStateConfirmEiiii(void);

/* Symbol: _ZN14MtkRadioExImpl27enableCAPlusBandWidthFilterEib */
/* Demangled: MtkRadioExImpl::enableCAPlusBandWidthFilter(int, bool) */
int _ZN14MtkRadioExImpl27enableCAPlusBandWidthFilterEib(void);

/* Symbol: _ZN9RadioImpl18getNeighboringCidsEi */
/* Demangled: RadioImpl::getNeighboringCids(int) */
int _ZN9RadioImpl18getNeighboringCidsEi(void);

/* Symbol: _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: RadioImpl::iccTransmitApduBasicChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
int _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _Z26convertRilLceDataInfoToHalPKvmRN7android8hardware5radio4V1_011LceDataInfoE */
/* Demangled: convertRilLceDataInfoToHal(void const*, unsigned long, android::hardware::radio::V1_0::LceDataInfo&) */
int _Z26convertRilLceDataInfoToHalPKvmRN7android8hardware5radio4V1_011LceDataInfoE(void);

/* Symbol: _ZN15RadioConfigImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio6config4V1_020IRadioConfigResponseEEERKNS1_INS5_22IRadioConfigIndicationEEE */
/* Demangled: RadioConfigImpl::setResponseFunctions(android::sp<android::hardware::radio::config::V1_0::IRadioConfigResponse> const&, android::sp<android::hardware::radio::config::V1_0::IRadioConfigIndication> const&) */
int _ZN15RadioConfigImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio6config4V1_020IRadioConfigResponseEEERKNS1_INS5_22IRadioConfigIndicationEEE(void);

/* Symbol: _ZN10RilOpProxy13initOpLibraryEv */
/* Demangled: RilOpProxy::initOpLibrary() */
int _ZN10RilOpProxy13initOpLibraryEv(void);

/* Symbol: _ZN10mtkRadioEx27resetAllConnectionsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::resetAllConnectionsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27resetAllConnectionsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19simStatusChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::simStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19simStatusChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio20radioStateChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::radioStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio20radioStateChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26worldModeChangedIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::worldModeChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26worldModeChangedIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio29enterEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::enterEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29enterEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16getFemtocellListEi */
/* Demangled: MtkRadioExImpl::getFemtocellList(int) */
int _ZN14MtkRadioExImpl16getFemtocellListEi(void);

/* Symbol: _ZN5radio40handleStkCallSetupRequestFromSimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::handleStkCallSetupRequestFromSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio40handleStkCallSetupRequestFromSimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22sendRequestRawResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendRequestRawResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22sendRequestRawResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl7setEtwsEii */
/* Demangled: MtkRadioExImpl::setEtws(int, int) */
int _ZN14MtkRadioExImpl7setEtwsEii(void);

/* Symbol: pb_decode_fixed64 */
/* Demangled: pb_decode_fixed64 */
int pb_decode_fixed64(void);

/* Symbol: _ZN10mtkRadioEx12eiregDataIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::eiregDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12eiregDataIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18cdmaCallWaitingIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaCallWaitingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18cdmaCallWaitingIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio42setSignalStrengthReportingCriteriaResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setSignalStrengthReportingCriteriaResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio42setSignalStrengthReportingCriteriaResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::requestIsimAuthentication(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx24setTxPowerStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setTxPowerStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24setTxPowerStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setProvisionValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setProvisionValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26supplyIccPukForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplyIccPukForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26supplyIccPukForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx16getIccidResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getIccidResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16getIccidResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx32getPlmnNameFromSE13TableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getPlmnNameFromSE13TableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32getPlmnNameFromSE13TableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android15releaseWakeLockEv */
/* Demangled: android::releaseWakeLock() */
int _ZN7android15releaseWakeLockEv(void);

/* Symbol: _ZN14MtkRadioExImpl16abortCertificateEii */
/* Demangled: MtkRadioExImpl::abortCertificate(int, int) */
int _ZN14MtkRadioExImpl16abortCertificateEii(void);

/* Symbol: _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::requestIccSimAuthentication(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response */
/* Demangled: convertResetSimResponseProtoToHal(_RIL_SIM_SAP_RESET_SIM_RSP_Response) */
int _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response(void);

/* Symbol: _ZN5radio16sendUssdResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendUssdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16sendUssdResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio29getAvailableBandModesResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getAvailableBandModesResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29getAvailableBandModesResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl9getEccNumEi */
/* Demangled: MtkRadioExImpl::getEccNum(int) */
int _ZN14MtkRadioExImpl9getEccNumEi(void);

/* Symbol: _ZN5radio17stkEventNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::stkEventNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio17stkEventNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl11enableModemEib */
/* Demangled: RadioImpl::enableModem(int, bool) */
int _ZN9RadioImpl11enableModemEib(void);

/* Symbol: _Z22freeSetDataProfileDataI22RIL_MtkDataProfileInfoEviPT_PS2_iz */
/* Demangled: void freeSetDataProfileData<RIL_MtkDataProfileInfo>(int, RIL_MtkDataProfileInfo*, RIL_MtkDataProfileInfo**, int, ...) */
int _Z22freeSetDataProfileDataI22RIL_MtkDataProfileInfoEviPT_PS2_iz(void);

/* Symbol: _ZN9RadioImpl14setDataAllowedEib */
/* Demangled: RadioImpl::setDataAllowed(int, bool) */
int _ZN9RadioImpl14setDataAllowedEib(void);

/* Symbol: _ZN9RadioImpl23setInitialAttachApn_1_5EiRKN7android8hardware5radio4V1_515DataProfileInfoE */
/* Demangled: RadioImpl::setInitialAttachApn_1_5(int, android::hardware::radio::V1_5::DataProfileInfo const&) */
int _ZN9RadioImpl23setInitialAttachApn_1_5EiRKN7android8hardware5radio4V1_515DataProfileInfoE(void);

/* Symbol: _ZN10mtkRadioEx13oemHookRawIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::oemHookRawInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13oemHookRawIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: ril_service_name_base */
/* Demangled: ril_service_name_base */
extern void* ril_service_name_base;

/* Symbol: _ZN14MtkRadioExImpl16queryNetworkLockEii */
/* Demangled: MtkRadioExImpl::queryNetworkLock(int, int) */
int _ZN14MtkRadioExImpl16queryNetworkLockEii(void);

/* Symbol: _ZN14MtkRadioExImpl25getGsmBroadcastActivationEi */
/* Demangled: MtkRadioExImpl::getGsmBroadcastActivation(int) */
int _ZN14MtkRadioExImpl25getGsmBroadcastActivationEi(void);

/* Symbol: _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::acknowledgeIncomingGsmSmsWithPduResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio40setLinkCapacityReportingCriteriaResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setLinkCapacityReportingCriteriaResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio40setLinkCapacityReportingCriteriaResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z28fillCellIdentityResponse_1_5RN7android8hardware5radio4V1_512CellIdentityERK20RIL_CellIdentity_v16 */
/* Demangled: fillCellIdentityResponse_1_5(android::hardware::radio::V1_5::CellIdentity&, RIL_CellIdentity_v16 const&) */
int _Z28fillCellIdentityResponse_1_5RN7android8hardware5radio4V1_512CellIdentityERK20RIL_CellIdentity_v16(void);

/* Symbol: _ZN14MtkRadioExImpl12setSearchRatEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: MtkRadioExImpl::setSearchRat(int, android::hardware::hidl_vec<int> const&) */
int _ZN14MtkRadioExImpl12setSearchRatEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN9RadioImpl14getBarringInfoEi */
/* Demangled: RadioImpl::getBarringInfo(int) */
int _ZN9RadioImpl14getBarringInfoEi(void);

/* Symbol: _ZN10mtkRadioEx30dedicatedBearerDeactivationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dedicatedBearerDeactivationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30dedicatedBearerDeactivationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl11setGwsdModeEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::setGwsdMode(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl11setGwsdModeEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZN9RadioImpl25getCdmaSubscriptionSourceEi */
/* Demangled: RadioImpl::getCdmaSubscriptionSource(int) */
int _ZN9RadioImpl25getCdmaSubscriptionSourceEi(void);

/* Symbol: _ZN9RadioImpl7setMuteEib */
/* Demangled: RadioImpl::setMute(int, bool) */
int _ZN9RadioImpl7setMuteEib(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_26IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_2::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_26IRadioE;

/* Symbol: _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz */
/* Demangled: SapImpl::sendFailedResponse(_MsgId, int, int, ...) */
int _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz(void);

/* Symbol: _ZN10mtkRadioEx22deleteUPBEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::deleteUPBEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22deleteUPBEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24imsEmergencyDialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsEmergencyDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24imsEmergencyDialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl20startNetworkScan_1_4EiRKN7android8hardware5radio4V1_218NetworkScanRequestE */
/* Demangled: RadioImpl::startNetworkScan_1_4(int, android::hardware::radio::V1_2::NetworkScanRequest const&) */
int _ZN9RadioImpl20startNetworkScan_1_4EiRKN7android8hardware5radio4V1_218NetworkScanRequestE(void);

/* Symbol: _ZN10mtkRadioEx23getSmsMemStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSmsMemStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23getSmsMemStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z12hexCharToInth */
/* Demangled: hexCharToInt(unsigned char) */
int _Z12hexCharToInth(void);

/* Symbol: _Z16dispatchGrpEntryiiiiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: dispatchGrpEntry(int, int, int, int, android::hardware::hidl_vec<int> const&) */
int _Z16dispatchGrpEntryiiiiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: RadioImpl::getCallForwardStatus(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN10mtkRadioEx21imsRadioInfoChangeIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsRadioInfoChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21imsRadioInfoChangeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl24rttModifyRequestResponseEiii */
/* Demangled: MtkRadioExImpl::rttModifyRequestResponse(int, int, int) */
int _ZN14MtkRadioExImpl24rttModifyRequestResponseEiii(void);

/* Symbol: _Z31convertRilCellInfoListToHal_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_48CellInfoEEE */
/* Demangled: convertRilCellInfoListToHal_1_4(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::CellInfo>&) */
int _Z31convertRilCellInfoListToHal_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_48CellInfoEEE(void);

/* Symbol: _ZN9RadioImpl16getIccCardStatusEi */
/* Demangled: RadioImpl::getIccCardStatus(int) */
int _ZN9RadioImpl16getIccCardStatusEi(void);

/* Symbol: _ZN14MtkRadioExImpl16getPOLCapabilityEi */
/* Demangled: MtkRadioExImpl::getPOLCapability(int) */
int _ZN14MtkRadioExImpl16getPOLCapabilityEi(void);

/* Symbol: _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi */
/* Demangled: RadioImpl::iccOpenLogicalChannel(int, android::hardware::hidl_string const&, int) */
int _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN9RadioImpl21sendCdmaSmsExpectMoreEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE */
/* Demangled: RadioImpl::sendCdmaSmsExpectMore(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
int _ZN9RadioImpl21sendCdmaSmsExpectMoreEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void);

/* Symbol: _ZN10mtkRadioEx30registerCellQltyReportResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::registerCellQltyReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30registerCellQltyReportResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio28radioCapabilityIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::radioCapabilityIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28radioCapabilityIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsMtkERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_019IMtkRadioExResponseEEERKNS1_INS6_21IMtkRadioExIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsMtk(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioExResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioExIndication> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsMtkERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_019IMtkRadioExResponseEEERKNS1_INS6_21IMtkRadioExIndicationEEE(void);

/* Symbol: pb_encode_tag */
/* Demangled: pb_encode_tag */
int pb_encode_tag(void);

/* Symbol: _ZN10mtkRadioEx24vsimNotificationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::vsimNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24vsimNotificationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl20setKeepAliveByIpDataEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setKeepAliveByIpData(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl20setKeepAliveByIpDataEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTT9RadioImpl */
/* Demangled: VTT for RadioImpl */
extern void* _ZTT9RadioImpl;

/* Symbol: _ZN10mtkRadioEx14mdChangeApnIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::mdChangeApnInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx14mdChangeApnIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx15imsDialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15imsDialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx7atciIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::atciInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx7atciIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE */
/* Demangled: constructCdmaSms(RIL_CDMA_SMS_Message&, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
int _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void);

/* Symbol: pb_decode_svarint */
/* Demangled: pb_decode_svarint */
int pb_decode_svarint(void);

/* Symbol: _Z14ril_event_initv */
/* Demangled: ril_event_init() */
int _Z14ril_event_initv(void);

/* Symbol: _ZN10mtkRadioEx20readPhbEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readPhbEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20readPhbEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22writeSmsToRuimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::writeSmsToRuimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22writeSmsToRuimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio35requestIccSimAuthenticationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::requestIccSimAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio35requestIccSimAuthenticationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15getRxTestResultEii */
/* Demangled: MtkRadioExImpl::getRxTestResult(int, int) */
int _ZN14MtkRadioExImpl15getRxTestResultEii(void);

/* Symbol: _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE */
/* Demangled: RadioImpl::writeSmsToSim(int, android::hardware::radio::V1_0::SmsWriteArgs const&) */
int _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE(void);

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno */
/* Demangled: sendErrorResponse(android::RequestInfo*, RIL_Errno) */
int _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno(void);

/* Symbol: _ZN10mtkRadioEx18suppSvcNotifyExIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::suppSvcNotifyExInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18suppSvcNotifyExIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio31getNetworkSelectionModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getNetworkSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio31getNetworkSelectionModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl36getCurrentUiccCardProvisioningStatusEi */
/* Demangled: MtkRadioExImpl::getCurrentUiccCardProvisioningStatus(int) */
int _ZN14MtkRadioExImpl36getCurrentUiccCardProvisioningStatusEi(void);

/* Symbol: _ZN10mtkRadioEx22emergencyBearerInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::emergencyBearerInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22emergencyBearerInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23phbReadyNotificationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::phbReadyNotificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23phbReadyNotificationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25imsNetworkStateChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::imsNetworkStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25imsNetworkStateChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: toClientSlot */
/* Demangled: toClientSlot */
int toClientSlot(void);

/* Symbol: _ZN14MtkRadioExImpl21notifyImsServiceReadyEv */
/* Demangled: MtkRadioExImpl::notifyImsServiceReady() */
int _ZN14MtkRadioExImpl21notifyImsServiceReadyEv(void);

/* Symbol: pb_decode_delimited_noinit */
/* Demangled: pb_decode_delimited_noinit */
int pb_decode_delimited_noinit(void);

/* Symbol: pb_encode_tag_for_field */
/* Demangled: pb_encode_tag_for_field */
int pb_encode_tag_for_field(void);

/* Symbol: _ZN10mtkRadioEx18setTxPowerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setTxPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18setTxPowerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx32toggleRttAudioIndicationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::toggleRttAudioIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32toggleRttAudioIndicationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl13setWfcProfileEii */
/* Demangled: MtkRadioExImpl::setWfcProfile(int, int) */
int _ZN14MtkRadioExImpl13setWfcProfileEii(void);

/* Symbol: _ZN14MtkRadioExImpl17setWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_iS4_ */
/* Demangled: MtkRadioExImpl::setWifiAssociated(int, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl17setWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_iS4_(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: __ubsan_handle_nonnull_return_minimal */
/* Demangled: __ubsan_handle_nonnull_return_minimal */
int __ubsan_handle_nonnull_return_minimal(void);

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
int __ubsan_handle_vla_bound_not_positive_minimal(void);

/* Symbol: _ZN10mtkRadioEx28syncDataSettingsToMdResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::syncDataSettingsToMdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28syncDataSettingsToMdResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19srvccStateNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::srvccStateNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19srvccStateNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z26dispatchVsimOperationEventiiijjiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: dispatchVsimOperationEvent(int, int, int, unsigned int, unsigned int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _Z26dispatchVsimOperationEventiiijjiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN10mtkRadioEx40queryCallForwardInTimeSlotStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryCallForwardInTimeSlotStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx40queryCallForwardInTimeSlotStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_nonnull_return_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
int __ubsan_handle_nonnull_return_minimal_abort(void);

/* Symbol: _ZN14MtkRadioExImpl16forceReleaseCallEii */
/* Demangled: MtkRadioExImpl::forceReleaseCall(int, int) */
int _ZN14MtkRadioExImpl16forceReleaseCallEii(void);

/* Symbol: _ZN14MtkRadioExImpl27getAvailableNetworksWithActEi */
/* Demangled: MtkRadioExImpl::getAvailableNetworksWithAct(int) */
int _ZN14MtkRadioExImpl27getAvailableNetworksWithActEi(void);

/* Symbol: _ZN14MtkRadioExImpl31setResponseFunctionsSubsidyLockERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020ISubsidyLockResponseEEERKNS1_INS6_22ISubsidyLockIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsSubsidyLock(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISubsidyLockResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISubsidyLockIndication> const&) */
int _ZN14MtkRadioExImpl31setResponseFunctionsSubsidyLockERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020ISubsidyLockResponseEEERKNS1_INS6_22ISubsidyLockIndicationEEE(void);

/* Symbol: _ZN10mtkRadioEx19setPOLEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setPOLEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19setPOLEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio16suppSvcNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::suppSvcNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16suppSvcNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z18removeTidFromRLockjl */
/* Demangled: removeTidFromRLock(unsigned int, long) */
int _Z18removeTidFromRLockjl(void);

/* Symbol: _Z33convertRilHardwareConfigListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_014HardwareConfigEEE */
/* Demangled: convertRilHardwareConfigListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::HardwareConfig>&) */
int _Z33convertRilHardwareConfigListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_014HardwareConfigEEE(void);

/* Symbol: _ZN14MtkRadioExImpl23setSearchStoredFreqInfoEiiiiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: MtkRadioExImpl::setSearchStoredFreqInfo(int, int, int, int, android::hardware::hidl_vec<int> const&) */
int _ZN14MtkRadioExImpl23setSearchStoredFreqInfoEiiiiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN5radio19getOperatorResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getOperatorResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19getOperatorResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android18RIL_getServiceNameEv */
/* Demangled: android::RIL_getServiceName() */
int _ZN7android18RIL_getServiceNameEv(void);

/* Symbol: _ZN14MtkRadioExImpl11sendRttTextEiiiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::sendRttText(int, int, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl11sendRttTextEiiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN5radio23sendDeviceStateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendDeviceStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23sendDeviceStateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z26convertCharPtrToHidlStringPKc */
/* Demangled: convertCharPtrToHidlString(char const*) */
int _Z26convertCharPtrToHidlStringPKc(void);

/* Symbol: _ZN14MtkRadioExImpl20setLteReleaseVersionEii */
/* Demangled: MtkRadioExImpl::setLteReleaseVersion(int, int) */
int _ZN14MtkRadioExImpl20setLteReleaseVersionEii(void);

/* Symbol: _ZN14MtkRadioExImpl9setImscfgEibbbbbb */
/* Demangled: MtkRadioExImpl::setImscfg(int, bool, bool, bool, bool, bool, bool) */
int _ZN14MtkRadioExImpl9setImscfgEibbbbbb(void);

/* Symbol: _ZN10mtkRadioEx17setImscfgResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImscfgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17setImscfgResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio35setSuppServiceNotificationsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setSuppServiceNotificationsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio35setSuppServiceNotificationsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal_abort */
/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
int __ubsan_handle_implicit_conversion_minimal_abort(void);

/* Symbol: _Z27convertRilDataCallListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEE */
/* Demangled: convertRilDataCallListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&) */
int _Z27convertRilDataCallListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEE(void);

/* Symbol: _ZN14MtkRadioExImpl15eccPreferredRatEii */
/* Demangled: MtkRadioExImpl::eccPreferredRat(int, int) */
int _ZN14MtkRadioExImpl15eccPreferredRatEii(void);

/* Symbol: _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE */
/* Demangled: RadioImpl::acknowledgeLastIncomingGsmSms(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
int _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void);

/* Symbol: pb_write */
/* Demangled: pb_write */
int pb_write(void);

/* Symbol: _ZN10mtkRadioEx24routeAuthMessageResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::routeAuthMessageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24routeAuthMessageResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19setNitzTimeReceivedEjl */
/* Demangled: radio::setNitzTimeReceived(unsigned int, long) */
int _ZN5radio19setNitzTimeReceivedEjl(void);

/* Symbol: _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: dispatchIccApdu(int, int, int, android::hardware::radio::V1_0::SimApdu const&) */
int _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _ZN14MtkRadioExImpl15queryVopsStatusEi */
/* Demangled: MtkRadioExImpl::queryVopsStatus(int) */
int _ZN14MtkRadioExImpl15queryVopsStatusEi(void);

/* Symbol: _ZN14MtkRadioExImpl23cancelAvailableNetworksEi */
/* Demangled: MtkRadioExImpl::cancelAvailableNetworks(int) */
int _ZN14MtkRadioExImpl23cancelAvailableNetworksEi(void);

/* Symbol: _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE */
/* Demangled: RadioImpl::nvReadItem(int, android::hardware::radio::V1_0::NvItem) */
int _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE(void);

/* Symbol: _ZN9RadioImpl15getCurrentCallsEi */
/* Demangled: RadioImpl::getCurrentCalls(int) */
int _ZN9RadioImpl15getCurrentCallsEi(void);

/* Symbol: _ZN14MtkRadioExImpl8pullCallEiRKN7android8hardware11hidl_stringEb */
/* Demangled: MtkRadioExImpl::pullCall(int, android::hardware::hidl_string const&, bool) */
int _ZN14MtkRadioExImpl8pullCallEiRKN7android8hardware11hidl_stringEb(void);

/* Symbol: _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE */
/* Demangled: RadioImpl::sendCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
int _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void);

/* Symbol: _ZTV15RadioConfigImpl */
/* Demangled: vtable for RadioConfigImpl */
extern void* _ZTV15RadioConfigImpl;

/* Symbol: pb_decode_delimited */
/* Demangled: pb_decode_delimited */
int pb_decode_delimited(void);

/* Symbol: _ZN10mtkRadioEx22readUPBGasListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBGasListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22readUPBGasListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx39getCurrentUiccCardProvisioningStatusRspEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getCurrentUiccCardProvisioningStatusRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx39getCurrentUiccCardProvisioningStatusRspEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26getAllowedCarriersResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getAllowedCarriersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26getAllowedCarriersResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23getRxTestResultResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getRxTestResultResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23getRxTestResultResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl26doGeneralSimAuthenticationEiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE */
/* Demangled: MtkRadioExImpl::doGeneralSimAuthentication(int, vendor::mediatek::hardware::mtkradioex::V2_0::SimAuthStructure const&) */
int _ZN14MtkRadioExImpl26doGeneralSimAuthenticationEiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE(void);

/* Symbol: _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::changeIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE */
/* Demangled: SapImpl::checkReturnStatus(android::hardware::Return<void>&) */
int _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void);

/* Symbol: _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh */
/* Demangled: SapImpl::addPayloadAndDispatchRequest(_MsgHeader*, unsigned short, unsigned char*) */
int _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh(void);

/* Symbol: _ZN10mtkRadioEx15setEtwsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setEtwsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15setEtwsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx18sipHeaderReportIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sipHeaderReportInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18sipHeaderReportIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z15dispatchStringsiiibiz */
/* Demangled: dispatchStrings(int, int, int, bool, int, ...) */
int _Z15dispatchStringsiiibiz(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsRsuERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRsuRadioResponseEEERKNS1_INS6_19IRsuRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsRsu(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRsuRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRsuRadioIndication> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsRsuERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRsuRadioResponseEEERKNS1_INS6_19IRsuRadioIndicationEEE(void);

/* Symbol: _ZN10mtkRadioEx24forceReleaseCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::forceReleaseCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24forceReleaseCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setPhonebookReadyResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setPhonebookReadyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setPhonebookReadyResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio12dialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::dialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio12dialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio30setCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCdmaBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio30setCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl12setSipHeaderEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::setSipHeader(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl12setSipHeaderEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZN14MtkRadioExImpl17setImsVideoEnableEib */
/* Demangled: MtkRadioExImpl::setImsVideoEnable(int, bool) */
int _ZN14MtkRadioExImpl17setImsVideoEnableEib(void);

/* Symbol: _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::acknowledgeIncomingGsmSmsWithPdu(int, bool, android::hardware::hidl_string const&) */
int _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket */
/* Demangled: sap::processUnsolResponse(_MsgHeader*, RilSapSocket*) */
int _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket(void);

/* Symbol: _ZN14MtkRadioExImpl16setWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_ */
/* Demangled: MtkRadioExImpl::setWifiIpAddress(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl16setWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_(void);

/* Symbol: _ZN14MtkRadioExImpl17sendVsimOperationEijjiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: MtkRadioExImpl::sendVsimOperation(int, unsigned int, unsigned int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl17sendVsimOperationEijjiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN9RadioImpl6hangupEii */
/* Demangled: RadioImpl::hangup(int, int) */
int _ZN9RadioImpl6hangupEii(void);

/* Symbol: _ZN5radio24startNetworkScanResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::startNetworkScanResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24startNetworkScanResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21deactivateUiccCardRspEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::deactivateUiccCardRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21deactivateUiccCardRspEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setCallSubAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setCallSubAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setCallSubAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl20startNetworkScan_1_5EiRKN7android8hardware5radio4V1_518NetworkScanRequestE */
/* Demangled: RadioImpl::startNetworkScan_1_5(int, android::hardware::radio::V1_5::NetworkScanRequest const&) */
int _ZN9RadioImpl20startNetworkScan_1_5EiRKN7android8hardware5radio4V1_518NetworkScanRequestE(void);

/* Symbol: _ZN7android2spI15RadioConfigImplED2Ev */
/* Demangled: android::sp<RadioConfigImpl>::~sp() */
int _ZN7android2spI15RadioConfigImplED2Ev(void);

/* Symbol: _ZN10mtkRadioEx24sendSarIndicatorResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendSarIndicatorResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24sendSarIndicatorResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16setVendorSettingEiiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setVendorSetting(int, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl16setVendorSettingEiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN14MtkRadioExImpl33queryFemtoCellSystemSelectionModeEi */
/* Demangled: MtkRadioExImpl::queryFemtoCellSystemSelectionMode(int) */
int _ZN14MtkRadioExImpl33queryFemtoCellSystemSelectionModeEi(void);

/* Symbol: _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii */
/* Demangled: RadioImpl::sendBurstDtmf(int, android::hardware::hidl_string const&, int, int) */
int _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii(void);

/* Symbol: _ZN10mtkRadioEx19onVolteSubscriptionEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onVolteSubscription(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19onVolteSubscriptionEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx20editUPBEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::editUPBEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20editUPBEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z14getAdjustedRafi */
/* Demangled: getAdjustedRaf(int) */
int _Z14getAdjustedRafi(void);

/* Symbol: _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::supplyIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal */
/* Demangled: __ubsan_handle_implicit_conversion_minimal */
int __ubsan_handle_implicit_conversion_minimal(void);

/* Symbol: _ZN10mtkRadioEx23imsBearerStateNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsBearerStateNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23imsBearerStateNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvmRNS2_15RadioCapabilityE */
/* Demangled: responseRadioCapability(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long, android::hardware::radio::V1_0::RadioCapability&) */
int _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvmRNS2_15RadioCapabilityE(void);

/* Symbol: _ZN9RadioImpl24setPreferredVoicePrivacyEib */
/* Demangled: RadioImpl::setPreferredVoicePrivacy(int, bool) */
int _ZN9RadioImpl24setPreferredVoicePrivacyEib(void);

/* Symbol: _ZN10mtkRadioEx19sendRttTextResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendRttTextResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19sendRttTextResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28runGbaAuthenticationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::runGbaAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28runGbaAuthenticationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket */
/* Demangled: sap::processResponse(_MsgHeader*, RilSapSocket*) */
int _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket(void);

/* Symbol: _ZN14MtkRadioExImpl11cfgA2offsetEiii */
/* Demangled: MtkRadioExImpl::cfgA2offset(int, int, int) */
int _ZN14MtkRadioExImpl11cfgA2offsetEiii(void);

/* Symbol: _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE */
/* Demangled: RadioImpl::setUiccSubscription(int, android::hardware::radio::V1_0::SelectUiccSub const&) */
int _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE(void);

/* Symbol: _ZN9RadioImpl29getVoiceRegistrationState_1_5Ei */
/* Demangled: RadioImpl::getVoiceRegistrationState_1_5(int) */
int _ZN9RadioImpl29getVoiceRegistrationState_1_5Ei(void);

/* Symbol: _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: RadioImpl::iccTransmitApduLogicalChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
int _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_36IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_3::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_36IRadioE;

/* Symbol: _ZTV14MtkRadioExImpl */
/* Demangled: vtable for MtkRadioExImpl */
extern void* _ZTV14MtkRadioExImpl;

/* Symbol: _Z10getSapImplP12RilSapSocket */
/* Demangled: getSapImpl(RilSapSocket*) */
int _Z10getSapImplP12RilSapSocket(void);

/* Symbol: _ZTV7SapImpl */
/* Demangled: vtable for SapImpl */
extern void* _ZTV7SapImpl;

/* Symbol: _ZN10mtkRadioEx19meSmsStorageFullIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::meSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19meSmsStorageFullIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22sendRsuRequestResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendRsuRequestResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22sendRsuRequestResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27setInitialAttachApnResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setInitialAttachApnResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27setInitialAttachApnResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio32getDataRegistrationStateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getDataRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32getDataRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl19getCDMASubscriptionEi */
/* Demangled: RadioImpl::getCDMASubscription(int) */
int _ZN9RadioImpl19getCDMASubscriptionEi(void);

/* Symbol: pb_field_iter_next */
/* Demangled: pb_field_iter_next */
int pb_field_iter_next(void);

/* Symbol: _ZN5radio26setRadioCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setRadioCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26setRadioCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: radioStateToString */
/* Demangled: radioStateToString */
int radioStateToString(void);

/* Symbol: _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: dispatchStrings(int, int, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _Z25convertRilDataCallToHalExP30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultEj */
/* Demangled: convertRilDataCallToHalEx(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&, unsigned int) */
int _Z25convertRilDataCallToHalExP30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultEj(void);

/* Symbol: _ZN14MtkRadioExImpl14conferenceDialEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014ConferenceDialE */
/* Demangled: MtkRadioExImpl::conferenceDial(int, vendor::mediatek::hardware::mtkradioex::V2_0::ConferenceDial const&) */
int _ZN14MtkRadioExImpl14conferenceDialEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014ConferenceDialE(void);

/* Symbol: _ZN15RadioConfigImpl15setModemsConfigEiRKN7android8hardware5radio6config4V1_112ModemsConfigE */
/* Demangled: RadioConfigImpl::setModemsConfig(int, android::hardware::radio::config::V1_1::ModemsConfig const&) */
int _ZN15RadioConfigImpl15setModemsConfigEiRKN7android8hardware5radio6config4V1_112ModemsConfigE(void);

/* Symbol: _ZN5radio28getAvailableNetworksResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getAvailableNetworksResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28getAvailableNetworksResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl20dataConnectionAttachEii */
/* Demangled: MtkRadioExImpl::dataConnectionAttach(int, int) */
int _ZN14MtkRadioExImpl20dataConnectionAttachEii(void);

/* Symbol: _ZN9RadioImpl14deleteSmsOnSimEii */
/* Demangled: RadioImpl::deleteSmsOnSim(int, int) */
int _ZN9RadioImpl14deleteSmsOnSimEii(void);

/* Symbol: _ZN10mtkRadioEx28getGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getGsmBroadcastLangsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28getGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE */
/* Demangled: RadioImpl::setSimCardPower_1_1(int, android::hardware::radio::V1_1::CardPowerState) */
int _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE(void);

/* Symbol: _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE */
/* Demangled: RadioImpl::setCdmaSubscriptionSource(int, android::hardware::radio::V1_0::CdmaSubscriptionSource) */
int _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE(void);

/* Symbol: _ZN10mtkRadioEx26sendEmbmsAtCommandResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendEmbmsAtCommandResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26sendEmbmsAtCommandResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31registrationSuspendedIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::registrationSuspendedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31registrationSuspendedIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19pullLceDataResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::pullLceDataResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19pullLceDataResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx10onImeiLockEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onImeiLock(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx10onImeiLockEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25onTxPowerStatusIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onTxPowerStatusIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25onTxPowerStatusIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28setGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setGsmBroadcastLangsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28setGsmBroadcastLangsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx38controlImsConferenceCallMemberResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::controlImsConferenceCallMemberResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx38controlImsConferenceCallMemberResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm */
/* Demangled: responseIccIo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
int _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl27setResponseFunctionsForAtciERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_013IAtciResponseEEERKNS1_INS6_15IAtciIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsForAtci(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAtciResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAtciIndication> const&) */
int _ZN14MtkRadioExImpl27setResponseFunctionsForAtciERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_013IAtciResponseEEERKNS1_INS6_15IAtciIndicationEEE(void);

/* Symbol: _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE */
/* Demangled: RadioImpl::startKeepalive(int, android::hardware::radio::V1_1::KeepaliveRequest const&) */
int _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE(void);

/* Symbol: _ZN10mtkRadioEx11onSimPlugInEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimPlugIn(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx11onSimPlugInEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio14newSmsOnSimIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::newSmsOnSimInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio14newSmsOnSimIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z29convertRilSignalStrengthToHalPKvmRN7android8hardware5radio4V1_014SignalStrengthE */
/* Demangled: convertRilSignalStrengthToHal(void const*, unsigned long, android::hardware::radio::V1_0::SignalStrength&) */
int _Z29convertRilSignalStrengthToHalPKvmRN7android8hardware5radio4V1_014SignalStrengthE(void);

/* Symbol: _ZN9RadioImpl18getAllowedCarriersEi */
/* Demangled: RadioImpl::getAllowedCarriers(int) */
int _ZN9RadioImpl18getAllowedCarriersEi(void);

/* Symbol: _ZN9RadioImpl32hangupForegroundResumeBackgroundEi */
/* Demangled: RadioImpl::hangupForegroundResumeBackground(int) */
int _ZN9RadioImpl32hangupForegroundResumeBackgroundEi(void);

/* Symbol: _ZN10mtkRadioEx17rttTextReceiveIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::rttTextReceiveInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17rttTextReceiveIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26sendWifiAssociatedResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendWifiAssociatedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26sendWifiAssociatedResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN3sap15registerServiceEPK18RIL_RadioFunctions */
/* Demangled: sap::registerService(RIL_RadioFunctions const*) */
int _ZN3sap15registerServiceEPK18RIL_RadioFunctions(void);

/* Symbol: _ZN14MtkRadioExImpl19setSuppServPropertyEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: MtkRadioExImpl::setSuppServProperty(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl19setSuppServPropertyEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN9RadioImpl26areUiccApplicationsEnabledEi */
/* Demangled: RadioImpl::areUiccApplicationsEnabled(int) */
int _ZN9RadioImpl26areUiccApplicationsEnabledEi(void);

/* Symbol: _ZN5radio35iccTransmitApduBasicChannelResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::iccTransmitApduBasicChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio35iccTransmitApduBasicChannelResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android16s_wakelock_countE */
/* Demangled: android::s_wakelock_count */
extern void* _ZN7android16s_wakelock_countE;

/* Symbol: _ZN14MtkRadioExImpl21setImsCfgFeatureValueEiiiii */
/* Demangled: MtkRadioExImpl::setImsCfgFeatureValue(int, int, int, int, int) */
int _ZN14MtkRadioExImpl21setImsCfgFeatureValueEiiiii(void);

/* Symbol: _ZN9RadioImpl14getCallWaitingEii */
/* Demangled: RadioImpl::getCallWaiting(int, int) */
int _ZN9RadioImpl14getCallWaitingEii(void);

/* Symbol: _ZN5radio29sendCdmaSmsExpectMoreResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendCdmaSmsExpectMoreResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29sendCdmaSmsExpectMoreResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE */
/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*) */
int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE(void);

/* Symbol: pb_decode_nullterminated */
/* Demangled: pb_decode_nullterminated */
int pb_decode_nullterminated(void);

/* Symbol: _ZN10mtkRadioEx17onWifiPingRequestEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiPingRequest(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onWifiPingRequestEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21responseInvalidSimIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseInvalidSimInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21responseInvalidSimIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig25getSimSlotsStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::getSimSlotsStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig25getSimSlotsStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22deleteSmsOnSimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::deleteSmsOnSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22deleteSmsOnSimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25getDeviceIdentityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getDeviceIdentityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25getDeviceIdentityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27sendCDMAFeatureCodeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendCDMAFeatureCodeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27sendCDMAFeatureCodeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27setIndicationFilterResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setIndicationFilterResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27setIndicationFilterResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z31convertResponseStringEntryToIntPPcii */
/* Demangled: convertResponseStringEntryToInt(char**, int, int) */
int _Z31convertResponseStringEntryToIntPPcii(void);

/* Symbol: _ZN9RadioImpl23getVoiceRadioTechnologyEi */
/* Demangled: RadioImpl::getVoiceRadioTechnology(int) */
int _ZN9RadioImpl23getVoiceRadioTechnologyEi(void);

/* Symbol: _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE */
/* Demangled: RadioImpl::dial(int, android::hardware::radio::V1_0::Dial const&) */
int _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE(void);

/* Symbol: _ZN10mtkRadioEx32setImsRegistrationReportResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsRegistrationReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setImsRegistrationReportResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio39setCarrierInfoForImsiEncryptionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCarrierInfoForImsiEncryptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio39setCarrierInfoForImsiEncryptionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25onVirtualSimStatusChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onVirtualSimStatusChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25onVirtualSimStatusChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::sendRequestStrings(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZN10mtkRadioEx12onNwLimitIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onNwLimitInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12onNwLimitIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio34setSystemSelectionChannelsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setSystemSelectionChannelsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio34setSystemSelectionChannelsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z34convertRilEmergencyNumberListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_415EmergencyNumberEEE */
/* Demangled: convertRilEmergencyNumberListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::EmergencyNumber>&) */
int _Z34convertRilEmergencyNumberListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_415EmergencyNumberEEE(void);

/* Symbol: _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb */
/* Demangled: RadioImpl::setupDataCall(int, android::hardware::radio::V1_0::RadioTechnology, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool) */
int _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb(void);

/* Symbol: _ZN10mtkRadioEx20setWfcConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWfcConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20setWfcConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl10setApcModeEiiii */
/* Demangled: MtkRadioExImpl::setApcMode(int, int, int, int) */
int _ZN14MtkRadioExImpl10setApcModeEiiii(void);

/* Symbol: _ZN14MtkRadioExImpl15modifyModemTypeEiii */
/* Demangled: MtkRadioExImpl::modifyModemType(int, int, int) */
int _ZN14MtkRadioExImpl15modifyModemTypeEiii(void);

/* Symbol: _ZN14MtkRadioExImpl21setCallAdditionalInfoEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::setCallAdditionalInfo(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl21setCallAdditionalInfoEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::setNetworkSelectionModeManual(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZN10mtkRadioEx10onWifiLockEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiLock(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx10onWifiLockEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24routeCertificateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::routeCertificateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24routeCertificateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio24voiceRadioTechChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::voiceRadioTechChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24voiceRadioTechChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocketC1EPKcjPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::RilSapSocket(char const*, unsigned int, RIL_RadioFunctions const*) */
int _ZN12RilSapSocketC1EPKcjPK18RIL_RadioFunctions(void);

/* Symbol: _ZN14MtkRadioExImpl12setImsEnableEib */
/* Demangled: MtkRadioExImpl::setImsEnable(int, bool) */
int _ZN14MtkRadioExImpl12setImsEnableEib(void);

/* Symbol: _ZN10mtkRadioEx20sendImsSmsExResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendImsSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20sendImsSmsExResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31setImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsCfgProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31setImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21getRadioServiceRwlockEi */
/* Demangled: radio::getRadioServiceRwlock(int) */
int _ZN5radio21getRadioServiceRwlockEi(void);

/* Symbol: _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvmj */
/* Demangled: RilSapSocket::sOnUnsolicitedResponse(int, void const*, unsigned long, unsigned int) */
int _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvmj(void);

/* Symbol: _ZN10mtkRadioEx20setImsEnableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20setImsEnableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl23getImsRegistrationStateEi */
/* Demangled: RadioImpl::getImsRegistrationState(int) */
int _ZN9RadioImpl23getImsRegistrationStateEi(void);

/* Symbol: _ZN10mtkRadioEx27setSuppServPropertyResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSuppServPropertyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27setSuppServPropertyResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl13setMaxUlSpeedEii */
/* Demangled: MtkRadioExImpl::setMaxUlSpeed(int, int) */
int _ZN14MtkRadioExImpl13setMaxUlSpeedEii(void);

/* Symbol: _ZN14MtkRadioExImpl22getSmsRuimMemoryStatusEi */
/* Demangled: MtkRadioExImpl::getSmsRuimMemoryStatus(int) */
int _ZN14MtkRadioExImpl22getSmsRuimMemoryStatusEi(void);

/* Symbol: _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE */
/* Demangled: RadioImpl::setResponseFunctions(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&, android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
int _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE(void);

/* Symbol: pb_ostream_from_buffer */
/* Demangled: pb_ostream_from_buffer */
int pb_ostream_from_buffer(void);

/* Symbol: _Z32convertConfigCharPtrToHidlStringPKc */
/* Demangled: convertConfigCharPtrToHidlString(char const*) */
int _Z32convertConfigCharPtrToHidlStringPKc(void);

/* Symbol: pb_get_encoded_size */
/* Demangled: pb_get_encoded_size */
int pb_get_encoded_size(void);

/* Symbol: _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno */
/* Demangled: populateResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
int _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void);

/* Symbol: _ZN14MtkRadioExImpl20getLteReleaseVersionEi */
/* Demangled: MtkRadioExImpl::getLteReleaseVersion(int) */
int _ZN14MtkRadioExImpl20getLteReleaseVersionEi(void);

/* Symbol: _ZN10mtkRadioEx18sendVopsIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendVopsIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18sendVopsIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22smartRatSwitchResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::smartRatSwitchResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22smartRatSwitchResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setWifiAssociatedResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWifiAssociatedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setWifiAssociatedResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26deactivateDataCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::deactivateDataCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26deactivateDataCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl20setVoicePreferStatusEii */
/* Demangled: MtkRadioExImpl::setVoicePreferStatus(int, int) */
int _ZN14MtkRadioExImpl20setVoicePreferStatusEii(void);

/* Symbol: _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __ubsan_handle_nullability_arg_minimal_abort */
/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
int __ubsan_handle_nullability_arg_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx25getCurrentPOLListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getCurrentPOLListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25getCurrentPOLListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket21onUnsolicitedResponseEiPvm */
/* Demangled: RilSapSocket::onUnsolicitedResponse(int, void*, unsigned long) */
int _ZN12RilSapSocket21onUnsolicitedResponseEiPvm(void);

/* Symbol: _Z35convertRilPhbEntryExtStrucutreToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtEEE */
/* Demangled: convertRilPhbEntryExtStrucutreToHal(void const*, unsigned long, android::hardware::hidl_vec<vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt>&) */
int _Z35convertRilPhbEntryExtStrucutreToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtEEE(void);

/* Symbol: _ZN14MtkRadioExImpl21setResumeRegistrationEii */
/* Demangled: MtkRadioExImpl::setResumeRegistration(int, int) */
int _ZN14MtkRadioExImpl21setResumeRegistrationEii(void);

/* Symbol: _ZN14MtkRadioExImpl22setResponseFunctionsSEERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016ISERadioResponseEEERKNS1_INS6_18ISERadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsSE(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISERadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ISERadioIndication> const&) */
int _ZN14MtkRadioExImpl22setResponseFunctionsSEERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016ISERadioResponseEEERKNS1_INS6_18ISERadioIndicationEEE(void);

/* Symbol: _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE */
/* Demangled: RadioImpl::setCdmaRoamingPreference(int, android::hardware::radio::V1_0::CdmaRoamingType) */
int _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE(void);

/* Symbol: rilc_thread_pool */
/* Demangled: rilc_thread_pool */
int rilc_thread_pool(void);

/* Symbol: _ZN10mtkRadioEx29onImsConferenceInfoIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onImsConferenceInfoIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29onImsConferenceInfoIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29onLteMessageWaitingIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onLteMessageWaitingIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29onLteMessageWaitingIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio16sendDtmfResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16sendDtmfResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio34setCdmaBroadcastActivationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCdmaBroadcastActivationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio34setCdmaBroadcastActivationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl9hangupAllEi */
/* Demangled: MtkRadioExImpl::hangupAll(int) */
int _ZN14MtkRadioExImpl9hangupAllEi(void);

/* Symbol: _ZN10mtkRadioEx14setTrmResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setTrmResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx14setTrmResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23queryVopsStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryVopsStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23queryVopsStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl18setDataProfile_1_5EiRKN7android8hardware8hidl_vecINS1_5radio4V1_515DataProfileInfoEEE */
/* Demangled: RadioImpl::setDataProfile_1_5(int, android::hardware::hidl_vec<android::hardware::radio::V1_5::DataProfileInfo> const&) */
int _ZN9RadioImpl18setDataProfile_1_5EiRKN7android8hardware8hidl_vecINS1_5radio4V1_515DataProfileInfoEEE(void);

/* Symbol: _ZN9RadioImpl24getDataRegistrationStateEi */
/* Demangled: RadioImpl::getDataRegistrationState(int) */
int _ZN9RadioImpl24getDataRegistrationStateEi(void);

/* Symbol: _ZN9RadioImpl8stopDtmfEi */
/* Demangled: RadioImpl::stopDtmf(int) */
int _ZN9RadioImpl8stopDtmfEi(void);

/* Symbol: _ZN10mtkRadioEx10onRsuEventEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onRsuEvent(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx10onRsuEventEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28setKeepAliveByIpDataResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setKeepAliveByIpDataResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28setKeepAliveByIpDataResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27setCellInfoListRateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCellInfoListRateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27setCellInfoListRateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16eccRedialApproveEiii */
/* Demangled: MtkRadioExImpl::eccRedialApprove(int, int, int) */
int _ZN14MtkRadioExImpl16eccRedialApproveEiii(void);

/* Symbol: _ZN14MtkRadioExImpl16getSmsParametersEi */
/* Demangled: MtkRadioExImpl::getSmsParameters(int) */
int _ZN14MtkRadioExImpl16getSmsParametersEi(void);

/* Symbol: _ZN9RadioImpl23responseAcknowledgementEv */
/* Demangled: RadioImpl::responseAcknowledgement() */
int _ZN9RadioImpl23responseAcknowledgementEv(void);

/* Symbol: _ZN10mtkRadioEx22imsCfgConfigChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsCfgConfigChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22imsCfgConfigChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE */
/* Demangled: radio::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
int _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void);

/* Symbol: _ZN5radio28exitEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::exitEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28exitEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl15requestShutdownEi */
/* Demangled: RadioImpl::requestShutdown(int) */
int _ZN9RadioImpl15requestShutdownEi(void);

/* Symbol: _ZTT15RadioConfigImpl */
/* Demangled: VTT for RadioConfigImpl */
extern void* _ZTT15RadioConfigImpl;

/* Symbol: pb_decode_tag */
/* Demangled: pb_decode_tag */
int pb_decode_tag(void);

/* Symbol: _ZN10mtkRadioEx15onSimTrayPlugInEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimTrayPlugIn(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15onSimTrayPlugInEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx9onUssiIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onUssiInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx9onUssiIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27changeIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::changeIccPin2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27changeIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::acknowledgeLastIncomingGsmSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z12dispatchIntsiiiiz */
/* Demangled: dispatchInts(int, int, int, int, ...) */
int _Z12dispatchIntsiiiiz(void);

/* Symbol: _ZN10mtkRadioEx23videoCallAcceptResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::videoCallAcceptResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23videoCallAcceptResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx27videoCapabilityIndicatorIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::videoCapabilityIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27videoCapabilityIndicatorIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22readUPBAasListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBAasListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22readUPBAasListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29setImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsCfgFeatureValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29setImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE */
/* Demangled: RadioImpl::sendImsSms(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
int _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void);

/* Symbol: mCounterRadioConfig */
/* Demangled: mCounterRadioConfig */
extern void* mCounterRadioConfig;

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
int __ubsan_handle_shift_out_of_bounds_minimal_abort(void);

/* Symbol: RIL_setcallbacks */
/* Demangled: RIL_setcallbacks */
int RIL_setcallbacks(void);

/* Symbol: _ZN10mtkRadioEx27queryPhbStorageInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryPhbStorageInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27queryPhbStorageInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21callAdditionalInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::callAdditionalInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21callAdditionalInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21setModemPowerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setModemPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21setModemPowerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25readUPBEmailEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBEmailEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25readUPBEmailEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig23setModemsConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::setModemsConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig23setModemsConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25cdmaRuimSmsStorageFullIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaRuimSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25cdmaRuimSmsStorageFullIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio40setNetworkSelectionModeAutomaticResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setNetworkSelectionModeAutomaticResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio40setNetworkSelectionModeAutomaticResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: RIL_onRequestComplete */
/* Demangled: RIL_onRequestComplete */
int RIL_onRequestComplete(void);

/* Symbol: _ZN10mtkRadioEx12confSRVCCIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::confSRVCCInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12confSRVCCIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23readUPBAnrEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBAnrEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23readUPBAnrEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33uiccApplicationsEnablementChangedEjii9RIL_ErrnoPKvm */
/* Demangled: radio::uiccApplicationsEnablementChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33uiccApplicationsEnablementChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl27setIgnoreSameNumberIntervalEii */
/* Demangled: MtkRadioExImpl::setIgnoreSameNumberInterval(int, int) */
int _ZN14MtkRadioExImpl27setIgnoreSameNumberIntervalEii(void);

/* Symbol: _ZN9RadioImpl10acceptCallEi */
/* Demangled: RadioImpl::acceptCall(int) */
int _ZN9RadioImpl10acceptCallEi(void);

/* Symbol: _Z13ril_event_setP9ril_eventibPFvisPvES1_ */
/* Demangled: ril_event_set(ril_event*, int, bool, void (*)(int, short, void*), void*) */
int _Z13ril_event_setP9ril_eventibPFvisPvES1_(void);

/* Symbol: _ZN10RilOpProxy16getOpCommandInfoEi */
/* Demangled: RilOpProxy::getOpCommandInfo(int) */
int _ZN10RilOpProxy16getOpCommandInfoEi(void);

/* Symbol: _ZN10mtkRadioEx13onPdnHandoverEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onPdnHandover(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13onPdnHandoverEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx14networkInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::networkInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx14networkInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22dataCallListChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::dataCallListChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22dataCallListChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: pb_encode_fixed64 */
/* Demangled: pb_encode_fixed64 */
int pb_encode_fixed64(void);

/* Symbol: _ZN12RilSapSocket9printListEv */
/* Demangled: RilSapSocket::printList() */
int _ZN12RilSapSocket9printListEv(void);

/* Symbol: _ZN9RadioImpl15deleteSmsOnRuimEii */
/* Demangled: RadioImpl::deleteSmsOnRuim(int, int) */
int _ZN9RadioImpl15deleteSmsOnRuimEii(void);

/* Symbol: _ZN9RadioImpl18setDataProfile_1_4EiRKN7android8hardware8hidl_vecINS1_5radio4V1_415DataProfileInfoEEE */
/* Demangled: RadioImpl::setDataProfile_1_4(int, android::hardware::hidl_vec<android::hardware::radio::V1_4::DataProfileInfo> const&) */
int _ZN9RadioImpl18setDataProfile_1_4EiRKN7android8hardware8hidl_vecINS1_5radio4V1_415DataProfileInfoEEE(void);

/* Symbol: _ZN10mtkRadioEx32getVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getVoiceDomainPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32getVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig26getPhoneCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::getPhoneCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig26getPhoneCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl27setRemoveRestrictEutranModeEii */
/* Demangled: MtkRadioExImpl::setRemoveRestrictEutranMode(int, int) */
int _ZN14MtkRadioExImpl27setRemoveRestrictEutranModeEii(void);

/* Symbol: _ZN10RilOpProxy17registerOpServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE */
/* Demangled: RilOpProxy::registerOpService(RIL_RadioFunctions*, android::CommandInfo*) */
int _ZN10RilOpProxy17registerOpServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void);

/* Symbol: _ZN10mtkRadioEx25incomingCallIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::incomingCallIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25incomingCallIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_alignment_assumption_minimal */
/* Demangled: __ubsan_handle_alignment_assumption_minimal */
int __ubsan_handle_alignment_assumption_minimal(void);

/* Symbol: ril_service_name */
/* Demangled: ril_service_name */
extern void* ril_service_name;

/* Symbol: _ZN14MtkRadioExImpl20runGbaAuthenticationEiRKN7android8hardware11hidl_stringES4_bi */
/* Demangled: MtkRadioExImpl::runGbaAuthentication(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, bool, int) */
int _ZN14MtkRadioExImpl20runGbaAuthenticationEiRKN7android8hardware11hidl_stringES4_bi(void);

/* Symbol: _ZN9RadioImpl13setRadioPowerEib */
/* Demangled: RadioImpl::setRadioPower(int, bool) */
int _ZN9RadioImpl13setRadioPowerEib(void);

/* Symbol: mtkRadioExService */
/* Demangled: mtkRadioExService */
extern void* mtkRadioExService;

/* Symbol: _ZN5radio29getGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getGsmBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29getGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z27appendRequestIntoPendingIndjiiPKvi */
/* Demangled: appendRequestIntoPendingInd(unsigned int, int, int, void const*, int) */
int _Z27appendRequestIntoPendingIndjiiPKvi(void);

/* Symbol: _ZN14MtkRadioExImpl17setProvisionValueEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: MtkRadioExImpl::setProvisionValue(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl17setProvisionValueEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN15RadioConfigImpl15getModemsConfigEi */
/* Demangled: RadioConfigImpl::getModemsConfig(int) */
int _ZN15RadioConfigImpl15getModemsConfigEi(void);

/* Symbol: _ZN14MtkRadioExImpl12editUPBEntryEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: MtkRadioExImpl::editUPBEntry(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN14MtkRadioExImpl12editUPBEntryEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZN14MtkRadioExImpl26setResponseFunctionsAssistERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020IAssistRadioResponseEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsAssist(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IAssistRadioResponse> const&) */
int _ZN14MtkRadioExImpl26setResponseFunctionsAssistERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_020IAssistRadioResponseEEE(void);

/* Symbol: _ZN10mtkRadioEx14embmsAtInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::embmsAtInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx14embmsAtInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22imsRegistrationInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsRegistrationInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22imsRegistrationInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23newSmsStatusReportIndExEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::newSmsStatusReportIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23newSmsStatusReportIndExEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl12sendImsSmsExEiRKN7android8hardware5radio4V1_013ImsSmsMessageE */
/* Demangled: MtkRadioExImpl::sendImsSmsEx(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
int _ZN14MtkRadioExImpl12sendImsSmsExEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void);

/* Symbol: _ZN9RadioImpl25setGsmBroadcastActivationEib */
/* Demangled: RadioImpl::setGsmBroadcastActivation(int, bool) */
int _ZN9RadioImpl25setGsmBroadcastActivationEib(void);

/* Symbol: _ZN5radio29getFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getFacilityLockForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29getFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl15stopNetworkScanEi */
/* Demangled: RadioImpl::stopNetworkScan(int) */
int _ZN9RadioImpl15stopNetworkScanEi(void);

/* Symbol: _ZN9RadioImpl34setSignalStrengthReportingCriteriaEiiiRKN7android8hardware8hidl_vecIiEENS1_5radio4V1_213AccessNetworkE */
/* Demangled: RadioImpl::setSignalStrengthReportingCriteria(int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_2::AccessNetwork) */
int _ZN9RadioImpl34setSignalStrengthReportingCriteriaEiiiRKN7android8hardware8hidl_vecIiEENS1_5radio4V1_213AccessNetworkE(void);

/* Symbol: _ZN10mtkRadioEx24setRoamingEnableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setRoamingEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24setRoamingEnableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx33setKeepAliveByPDCPCtrlPDUResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setKeepAliveByPDCPCtrlPDUResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx33setKeepAliveByPDCPCtrlPDUResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::supplyIccPukForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN5radio28getModemActivityInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getModemActivityInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28getModemActivityInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z18makeCdmaSmsMessageRN7android8hardware5radio4V1_014CdmaSmsMessageEPKvm */
/* Demangled: makeCdmaSmsMessage(android::hardware::radio::V1_0::CdmaSmsMessage&, void const*, unsigned long) */
int _Z18makeCdmaSmsMessageRN7android8hardware5radio4V1_014CdmaSmsMessageEPKvm(void);

/* Symbol: _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc */
/* Demangled: fillCellIdentityFromVoiceRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
int _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void);

/* Symbol: _ZN14MtkRadioExImpl16routeCertificateEiiRKN7android8hardware8hidl_vecIhEES5_ */
/* Demangled: MtkRadioExImpl::routeCertificate(int, int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl16routeCertificateEiiRKN7android8hardware8hidl_vecIhEES5_(void);

/* Symbol: _ZN14MtkRadioExImpl36setNetworkSelectionModeManualWithActEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: MtkRadioExImpl::setNetworkSelectionModeManualWithAct(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl36setNetworkSelectionModeManualWithActEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN11radioConfig15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE */
/* Demangled: radioConfig::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
int _ZN11radioConfig15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsImsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IImsRadioResponseEEERKNS1_INS6_19IImsRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsIms(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IImsRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IImsRadioIndication> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsImsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IImsRadioResponseEEERKNS1_INS6_19IImsRadioIndicationEEE(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZN7SapImpl13disconnectReqEi */
/* Demangled: SapImpl::disconnectReq(int) */
int _ZN7SapImpl13disconnectReqEi(void);

/* Symbol: _ZN7SapImpl15createMsgHeaderE6_MsgIdi */
/* Demangled: SapImpl::createMsgHeader(_MsgId, int) */
int _ZN7SapImpl15createMsgHeaderE6_MsgIdi(void);

/* Symbol: _ZN10mtkRadioEx15iccidChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::iccidChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15iccidChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx18mobileDataUsageIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::mobileDataUsageInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18mobileDataUsageIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24enableCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::enableCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24enableCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30getPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getPhoneBookMemStorageResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30getPhoneBookMemStorageResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21emergencyDialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::emergencyDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21emergencyDialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio29setGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setGsmBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29setGsmBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl20getSuggestedPlmnListEiiii */
/* Demangled: MtkRadioExImpl::getSuggestedPlmnList(int, int, int, int) */
int _ZN14MtkRadioExImpl20getSuggestedPlmnListEiiii(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal_abort */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
int __ubsan_handle_float_cast_overflow_minimal_abort(void);

/* Symbol: _ZN14MtkRadioExImpl18abortFemtocellListEi */
/* Demangled: MtkRadioExImpl::abortFemtocellList(int) */
int _ZN14MtkRadioExImpl18abortFemtocellListEi(void);

/* Symbol: _ZN14MtkRadioExImpl8getIccidEi */
/* Demangled: MtkRadioExImpl::getIccid(int) */
int _ZN14MtkRadioExImpl8getIccidEi(void);

/* Symbol: _ZN9RadioImpl29setPreferredNetworkTypeBitmapEii */
/* Demangled: RadioImpl::setPreferredNetworkTypeBitmap(int, int) */
int _ZN9RadioImpl29setPreferredNetworkTypeBitmapEii(void);

/* Symbol: __ubsan_handle_builtin_unreachable_minimal */
/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
int __ubsan_handle_builtin_unreachable_minimal(void);

/* Symbol: _ZN10mtkRadioEx21resetSuppServResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::resetSuppServResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21resetSuppServResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio34areUiccApplicationsEnabledResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::areUiccApplicationsEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio34areUiccApplicationsEnabledResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl10rejectCallEi */
/* Demangled: RadioImpl::rejectCall(int) */
int _ZN9RadioImpl10rejectCallEi(void);

/* Symbol: _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE */
/* Demangled: RadioImpl::sendSms(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
int _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void);

/* Symbol: pb_make_string_substream */
/* Demangled: pb_make_string_substream */
int pb_make_string_substream(void);

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal_abort */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
int __ubsan_handle_vla_bound_not_positive_minimal_abort(void);

/* Symbol: RIL_onRequestAck */
/* Demangled: RIL_onRequestAck */
int RIL_onRequestAck(void);

/* Symbol: _ZN5radio23requestShutdownResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::requestShutdownResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23requestShutdownResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25restrictedStateChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::restrictedStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25restrictedStateChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl14readUPBGasListEiii */
/* Demangled: MtkRadioExImpl::readUPBGasList(int, int, int) */
int _ZN14MtkRadioExImpl14readUPBGasListEiii(void);

/* Symbol: _ZN14MtkRadioExImpl7setClipEii */
/* Demangled: MtkRadioExImpl::setClip(int, int) */
int _ZN14MtkRadioExImpl7setClipEii(void);

/* Symbol: _ZN9RadioImpl36setLinkCapacityReportingCriteria_1_5EiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_513AccessNetworkE */
/* Demangled: RadioImpl::setLinkCapacityReportingCriteria_1_5(int, int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_5::AccessNetwork) */
int _ZN9RadioImpl36setLinkCapacityReportingCriteria_1_5EiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_513AccessNetworkE(void);

/* Symbol: _ZN7android14triggerWarningEPc */
/* Demangled: android::triggerWarning(char*) */
int _ZN7android14triggerWarningEPc(void);

/* Symbol: _ZN14MtkRadioExImpl15setRxTestConfigEii */
/* Demangled: MtkRadioExImpl::setRxTestConfig(int, int) */
int _ZN14MtkRadioExImpl15setRxTestConfigEii(void);

/* Symbol: _ZN14MtkRadioExImpl15videoCallAcceptEiii */
/* Demangled: MtkRadioExImpl::videoCallAccept(int, int, int) */
int _ZN14MtkRadioExImpl15videoCallAcceptEiii(void);

/* Symbol: _ZN14MtkRadioExImpl17enableCapabailityEiRKN7android8hardware11hidl_stringEii */
/* Demangled: MtkRadioExImpl::enableCapabaility(int, android::hardware::hidl_string const&, int, int) */
int _ZN14MtkRadioExImpl17enableCapabailityEiRKN7android8hardware11hidl_stringEii(void);

/* Symbol: _ZN14MtkRadioExImpl21getImsCfgFeatureValueEiii */
/* Demangled: MtkRadioExImpl::getImsCfgFeatureValue(int, int, int) */
int _ZN14MtkRadioExImpl21getImsCfgFeatureValueEiii(void);

/* Symbol: _ZN14MtkRadioExImpl24getVoiceDomainPreferenceEi */
/* Demangled: MtkRadioExImpl::getVoiceDomainPreference(int) */
int _ZN14MtkRadioExImpl24getVoiceDomainPreferenceEi(void);

/* Symbol: _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_112IRadioConfigE */
/* Demangled: construction vtable for android::hardware::radio::config::V1_1::IRadioConfig-in-RadioConfigImpl */
extern void* _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_112IRadioConfigE;

/* Symbol: _ZN10mtkRadioEx18cancelUssiResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cancelUssiResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18cancelUssiResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28sendRttModifyRequestResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendRttModifyRequestResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28sendRttModifyRequestResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22networkStateChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::networkStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22networkStateChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z29convertRilDataCallListToHalExPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEEj */
/* Demangled: convertRilDataCallListToHalEx(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&, unsigned int) */
int _Z29convertRilDataCallListToHalExPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_019SetupDataCallResultEEEj(void);

/* Symbol: pb_encode_svarint */
/* Demangled: pb_encode_svarint */
int pb_encode_svarint(void);

/* Symbol: _Z13ril_timer_addP9ril_eventP7timeval */
/* Demangled: ril_timer_add(ril_event*, timeval*) */
int _Z13ril_timer_addP9ril_eventP7timeval(void);

/* Symbol: _ZN5radio10lceDataIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::lceDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio10lceDataIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio37setNetworkSelectionModeManualResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setNetworkSelectionModeManualResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio37setNetworkSelectionModeManualResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z12stringToLongPciPi */
/* Demangled: stringToLong(char*, int, int*) */
int _Z12stringToLongPciPi(void);

/* Symbol: _ZN10mtkRadioEx17callRatIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::callRatIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17callRatIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_0::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE;

/* Symbol: _ZN15RadioConfigImpl18setSimSlotsMappingEiRKN7android8hardware8hidl_vecIjEE */
/* Demangled: RadioConfigImpl::setSimSlotsMapping(int, android::hardware::hidl_vec<unsigned int> const&) */
int _ZN15RadioConfigImpl18setSimSlotsMappingEiRKN7android8hardware8hidl_vecIjEE(void);

/* Symbol: _ZN10mtkRadioEx16imsBearerInitIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsBearerInitInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16imsBearerInitIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22setImsCallModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsCallModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22setImsCallModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio38supplyNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplyNetworkDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio38supplyNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15setImsRtpReportEiiii */
/* Demangled: MtkRadioExImpl::setImsRtpReport(int, int, int, int) */
int _ZN14MtkRadioExImpl15setImsRtpReportEiiii(void);

/* Symbol: _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE */
/* Demangled: RadioImpl::checkReturnStatus(android::hardware::Return<void>&) */
int _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void);

/* Symbol: _ZN10mtkRadioEx25setImsVideoEnableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsVideoEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setImsVideoEnableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16writeUPBGrpEntryEiiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: MtkRadioExImpl::writeUPBGrpEntry(int, int, android::hardware::hidl_vec<int> const&) */
int _ZN14MtkRadioExImpl16writeUPBGrpEntryEiiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN14MtkRadioExImpl22setServiceStateToModemEiiiiiii */
/* Demangled: MtkRadioExImpl::setServiceStateToModem(int, int, int, int, int, int, int) */
int _ZN14MtkRadioExImpl22setServiceStateToModemEiiiiiii(void);

/* Symbol: _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE */
/* Demangled: RadioImpl::setCdmaBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CdmaBroadcastSmsConfigInfo> const&) */
int _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE(void);

/* Symbol: _ZN10mtkRadioEx22setModemImsCfgResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setModemImsCfgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22setModemImsCfgResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl33setNetworkSelectionModeManual_1_5EiRKN7android8hardware11hidl_stringENS1_5radio4V1_519RadioAccessNetworksE */
/* Demangled: RadioImpl::setNetworkSelectionModeManual_1_5(int, android::hardware::hidl_string const&, android::hardware::radio::V1_5::RadioAccessNetworks) */
int _ZN9RadioImpl33setNetworkSelectionModeManual_1_5EiRKN7android8hardware11hidl_stringENS1_5radio4V1_519RadioAccessNetworksE(void);

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZN10mtkRadioEx13onSimRecoveryEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimRecovery(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13onSimRecoveryEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl21resetMdDataRetryCountEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::resetMdDataRetryCount(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl21resetMdDataRetryCountEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl15setSimCardPowerEib */
/* Demangled: RadioImpl::setSimCardPower(int, bool) */
int _ZN9RadioImpl15setSimCardPowerEib(void);

/* Symbol: _ZN10mtkRadioEx13onWifiRoveoutEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiRoveout(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13onWifiRoveoutEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setWifiPingResultResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWifiPingResultResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setWifiPingResultResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26queryUPBCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryUPBCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26queryUPBCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: dispatchCallForwardStatus(int, int, int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN14MtkRadioExImpl17getSmartRatSwitchEii */
/* Demangled: MtkRadioExImpl::getSmartRatSwitch(int, int) */
int _ZN14MtkRadioExImpl17getSmartRatSwitchEii(void);

/* Symbol: _ZN14MtkRadioExImpl17getCallSubAddressEi */
/* Demangled: MtkRadioExImpl::getCallSubAddress(int) */
int _ZN14MtkRadioExImpl17getCallSubAddressEi(void);

/* Symbol: _ZTC14MtkRadioExImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-MtkRadioExImpl */
extern void* _ZTC14MtkRadioExImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN10mtkRadioEx24getSmsParametersResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSmsParametersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24getSmsParametersResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22setDataAllowedResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setDataAllowedResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22setDataAllowedResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15readUPBAnrEntryEiii */
/* Demangled: MtkRadioExImpl::readUPBAnrEntry(int, int, int) */
int _ZN14MtkRadioExImpl15readUPBAnrEntryEiii(void);

/* Symbol: _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendEnvelopeWithStatus(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTC14MtkRadioExImpl0_N6vendor8mediatek8hardware10mtkradioex4V2_011IMtkRadioExE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkradioex::V2_0::IMtkRadioEx-in-MtkRadioExImpl */
extern void* _ZTC14MtkRadioExImpl0_N6vendor8mediatek8hardware10mtkradioex4V2_011IMtkRadioExE;

/* Symbol: _ZN10mtkRadioEx17imsVtDialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsVtDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17imsVtDialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx17onImsiRefreshDoneEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onImsiRefreshDone(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onImsiRefreshDoneEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21getIMSIForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getIMSIForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21getIMSIForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl21setEmergencyAddressIdEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setEmergencyAddressId(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl21setEmergencyAddressIdEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN14MtkRadioExImpl30controlImsConferenceCallMemberEiiiRKN7android8hardware11hidl_stringEi */
/* Demangled: MtkRadioExImpl::controlImsConferenceCallMember(int, int, int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl30controlImsConferenceCallMemberEiiiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN5radio19resendIncallMuteIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::resendIncallMuteInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19resendIncallMuteIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z33convertRilSignalStrengthToHal_1_2PKvmRN7android8hardware5radio4V1_214SignalStrengthE */
/* Demangled: convertRilSignalStrengthToHal_1_2(void const*, unsigned long, android::hardware::radio::V1_2::SignalStrength&) */
int _Z33convertRilSignalStrengthToHal_1_2PKvmRN7android8hardware5radio4V1_214SignalStrengthE(void);

/* Symbol: _ZN14MtkRadioExImpl24setImsBearerNotificationEii */
/* Demangled: MtkRadioExImpl::setImsBearerNotification(int, int) */
int _ZN14MtkRadioExImpl24setImsBearerNotificationEii(void);

/* Symbol: _ZN9RadioImpl20getLastCallFailCauseEi */
/* Demangled: RadioImpl::getLastCallFailCause(int) */
int _ZN9RadioImpl20getLastCallFailCauseEi(void);

/* Symbol: pb_skip_field */
/* Demangled: pb_skip_field */
int pb_skip_field(void);

/* Symbol: __ubsan_handle_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_out_of_bounds_minimal */
int __ubsan_handle_out_of_bounds_minimal(void);

/* Symbol: _ZN10mtkRadioEx17onRsuSimLockEventEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onRsuSimLockEvent(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onRsuSimLockEventEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28imsDeregNotificationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDeregNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28imsDeregNotificationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25getHardwareConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getHardwareConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25getHardwareConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio25sendSMSExpectMoreResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendSMSExpectMoreResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio25sendSMSExpectMoreResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio28explicitCallTransferResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::explicitCallTransferResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28explicitCallTransferResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE */
/* Demangled: RadioImpl::acknowledgeLastIncomingCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
int _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void);

/* Symbol: _Z16sapDecodeMessage6_MsgId8_MsgTypePhm */
/* Demangled: sapDecodeMessage(_MsgId, _MsgType, unsigned char*, unsigned long) */
int _Z16sapDecodeMessage6_MsgId8_MsgTypePhm(void);

/* Symbol: __ubsan_handle_divrem_overflow_minimal_abort */
/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
int __ubsan_handle_divrem_overflow_minimal_abort(void);

/* Symbol: _ZN5radio29iccOpenLogicalChannelResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::iccOpenLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29iccOpenLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21networkRejectCauseIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::networkRejectCauseInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21networkRejectCauseIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25getProvisionValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25getProvisionValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29readPhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readPhoneBookEntryExtResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29readPhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19setBandModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setBandModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19setBandModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZTV9RadioImpl */
/* Demangled: vtable for RadioImpl */
extern void* _ZTV9RadioImpl;

/* Symbol: _ZTC15RadioConfigImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-RadioConfigImpl */
extern void* _ZTC15RadioConfigImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __ubsan_handle_missing_return_minimal */
/* Demangled: __ubsan_handle_missing_return_minimal */
int __ubsan_handle_missing_return_minimal(void);

/* Symbol: _ZN10mtkRadioEx16pullCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::pullCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16pullCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24econfResultIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::econfResultIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24econfResultIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18sendImsSmsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendImsSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18sendImsSmsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal_abort */
/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
int __ubsan_handle_load_invalid_value_minimal_abort(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal */
/* Demangled: __ubsan_handle_nonnull_arg_minimal */
int __ubsan_handle_nonnull_arg_minimal(void);

/* Symbol: _ZTV12RilSapSocket */
/* Demangled: vtable for RilSapSocket */
extern void* _ZTV12RilSapSocket;

/* Symbol: _ZN14MtkRadioExImpl14readUPBAasListEiii */
/* Demangled: MtkRadioExImpl::readUPBAasList(int, int, int) */
int _ZN14MtkRadioExImpl14readUPBAasListEiii(void);

/* Symbol: _ZN14MtkRadioExImpl20checkReturnStatusMtkERN7android8hardware6ReturnIvEEj */
/* Demangled: MtkRadioExImpl::checkReturnStatusMtk(android::hardware::Return<void>&, unsigned int) */
int _ZN14MtkRadioExImpl20checkReturnStatusMtkERN7android8hardware6ReturnIvEEj(void);

/* Symbol: _ZN9RadioImpl27setSuppServiceNotificationsEib */
/* Demangled: RadioImpl::setSuppServiceNotifications(int, bool) */
int _ZN9RadioImpl27setSuppServiceNotificationsEib(void);

/* Symbol: _ZN9RadioImpl7getClipEi */
/* Demangled: RadioImpl::getClip(int) */
int _ZN9RadioImpl7getClipEi(void);

/* Symbol: _ZN5radio33getVoiceRegistrationStateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getVoiceRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33getVoiceRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16 */
/* Demangled: fillCellIdentityResponse(android::hardware::radio::V1_0::CellIdentity&, RIL_CellIdentity_v16&) */
int _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16(void);

/* Symbol: _ZN14MtkRadioExImpl13getXcapStatusEi */
/* Demangled: MtkRadioExImpl::getXcapStatus(int) */
int _ZN14MtkRadioExImpl13getXcapStatusEi(void);

/* Symbol: _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE */
/* Demangled: RadioImpl::setPreferredNetworkType(int, android::hardware::radio::V1_0::PreferredNetworkType) */
int _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE(void);

/* Symbol: _ZN10mtkRadioEx17onLocationRequestEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onLocationRequest(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onLocationRequestEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23eccPreferredRatResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::eccPreferredRatResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23eccPreferredRatResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24abortCertificateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::abortCertificateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24abortCertificateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24getRoamingEnableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getRoamingEnableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24getRoamingEnableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25getSmartRatSwitchResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSmartRatSwitchResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25getSmartRatSwitchResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio16stkSessionEndIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::stkSessionEndInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16stkSessionEndIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: requestToString */
/* Demangled: requestToString */
int requestToString(void);

/* Symbol: _ZN14MtkRadioExImpl20imsDeregNotificationEii */
/* Demangled: MtkRadioExImpl::imsDeregNotification(int, int) */
int _ZN14MtkRadioExImpl20imsDeregNotificationEii(void);

/* Symbol: _Z13ril_event_addP9ril_event */
/* Demangled: ril_event_add(ril_event*) */
int _Z13ril_event_addP9ril_event(void);

/* Symbol: _ZN14MtkRadioExImpl25getPhoneBookStringsLengthEi */
/* Demangled: MtkRadioExImpl::getPhoneBookStringsLength(int) */
int _ZN14MtkRadioExImpl25getPhoneBookStringsLengthEi(void);

/* Symbol: RIL_startEventLoop */
/* Demangled: RIL_startEventLoop */
int RIL_startEventLoop(void);

/* Symbol: _ZN10mtkRadioEx29setResumeRegistrationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setResumeRegistrationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29setResumeRegistrationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z17dispatchVsimEventiiijjj */
/* Demangled: dispatchVsimEvent(int, int, int, unsigned int, unsigned int, unsigned int) */
int _Z17dispatchVsimEventiiijjj(void);

/* Symbol: _ZN14MtkRadioExImpl18setWifiSignalLevelEiii */
/* Demangled: MtkRadioExImpl::setWifiSignalLevel(int, int, int) */
int _ZN14MtkRadioExImpl18setWifiSignalLevelEiii(void);

/* Symbol: _ZN14MtkRadioExImpl20getGsmBroadcastLangsEi */
/* Demangled: MtkRadioExImpl::getGsmBroadcastLangs(int) */
int _ZN14MtkRadioExImpl20getGsmBroadcastLangsEi(void);

/* Symbol: __ubsan_handle_cfi_check_fail_minimal_abort */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
int __ubsan_handle_cfi_check_fail_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx24enableSCGfailureResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::enableSCGfailureResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24enableSCGfailureResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: toRealSlot */
/* Demangled: toRealSlot */
int toRealSlot(void);

/* Symbol: _ZN9RadioImpl19setCellInfoListRateEii */
/* Demangled: RadioImpl::setCellInfoListRate(int, int) */
int _ZN9RadioImpl19setCellInfoListRateEii(void);

/* Symbol: _ZN5radio11callRingIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::callRingInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio11callRingIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl14setNetworkLockEiiiRKN7android8hardware11hidl_stringES4_S4_S4_ */
/* Demangled: MtkRadioExImpl::setNetworkLock(int, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl14setNetworkLockEiiiRKN7android8hardware11hidl_stringES4_S4_S4_(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal */
/* Demangled: __ubsan_handle_invalid_builtin_minimal */
int __ubsan_handle_invalid_builtin_minimal(void);

/* Symbol: _ZN10mtkRadioEx16eccNumIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::eccNumIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16eccNumIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx17onCardDetectedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onCardDetectedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onCardDetectedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21stopKeepaliveResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::stopKeepaliveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21stopKeepaliveResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26setAllowedCarriersResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setAllowedCarriersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26setAllowedCarriersResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl13writePhbEntryEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE */
/* Demangled: MtkRadioExImpl::writePhbEntry(int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure const&) */
int _ZN14MtkRadioExImpl13writePhbEntryEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE(void);

/* Symbol: _ZN14MtkRadioExImpl15sendWifiEnabledEiRKN7android8hardware11hidl_stringEi */
/* Demangled: MtkRadioExImpl::sendWifiEnabled(int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl15sendWifiEnabledEiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN10mtkRadioEx32setCallForwardInTimeSlotResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setCallForwardInTimeSlotResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setCallForwardInTimeSlotResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio16stopDtmfResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::stopDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio16stopDtmfResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23getCurrentCallsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCurrentCallsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23getCurrentCallsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio31getVoiceRadioTechnologyResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getVoiceRadioTechnologyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio31getVoiceRadioTechnologyResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl11setPOLEntryEiiRKN7android8hardware11hidl_stringEi */
/* Demangled: MtkRadioExImpl::setPOLEntry(int, int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl11setPOLEntryEiiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN14MtkRadioExImpl31setFemtoCellSystemSelectionModeEii */
/* Demangled: MtkRadioExImpl::setFemtoCellSystemSelectionMode(int, int) */
int _ZN14MtkRadioExImpl31setFemtoCellSystemSelectionModeEii(void);

/* Symbol: _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response */
/* Demangled: convertPowerResponseProtoToHal(_RIL_SIM_SAP_POWER_RSP_Response) */
int _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response(void);

/* Symbol: pb_encode_varint */
/* Demangled: pb_encode_varint */
int pb_encode_varint(void);

/* Symbol: _ZN5radio33exitEmergencyCallbackModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::exitEmergencyCallbackModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33exitEmergencyCallbackModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android16addRequestToListEiii */
/* Demangled: android::addRequestToList(int, int, int) */
int _ZN7android16addRequestToListEiii(void);

/* Symbol: _ZN14MtkRadioExImpl23setImsCfgProvisionValueEiiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setImsCfgProvisionValue(int, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl23setImsCfgProvisionValueEiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl23setInitialAttachApn_1_4EiRKN7android8hardware5radio4V1_415DataProfileInfoE */
/* Demangled: RadioImpl::setInitialAttachApn_1_4(int, android::hardware::radio::V1_4::DataProfileInfo const&) */
int _ZN9RadioImpl23setInitialAttachApn_1_4EiRKN7android8hardware5radio4V1_415DataProfileInfoE(void);

/* Symbol: _ZTT14MtkRadioExImpl */
/* Demangled: VTT for MtkRadioExImpl */
extern void* _ZTT14MtkRadioExImpl;

/* Symbol: _ZN5radio32getCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCdmaRoamingPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32getCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendUssd(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx13crssNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::crssNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13crssNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx27sipCallProgressIndicatorIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sipCallProgressIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27sipCallProgressIndicatorIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx35setRemoveRestrictEutranModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setRemoveRestrictEutranModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx35setRemoveRestrictEutranModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23getDataCallListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getDataCallListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23getDataCallListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx17getEccNumResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getEccNumResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17getEccNumResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23setSimCardPowerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setSimCardPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23setSimCardPowerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23unlockRadioServiceWlockEP16pthread_rwlock_ti */
/* Demangled: radio::unlockRadioServiceWlock(pthread_rwlock_t*, int) */
int _ZN5radio23unlockRadioServiceWlockEP16pthread_rwlock_ti(void);

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZN5radio22nvWriteCdmaPrlResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::nvWriteCdmaPrlResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22nvWriteCdmaPrlResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23unlockRadioServiceRlockEP16pthread_rwlock_ti */
/* Demangled: radio::unlockRadioServiceRlock(pthread_rwlock_t*, int) */
int _ZN5radio23unlockRadioServiceRlockEP16pthread_rwlock_ti(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal_abort */
/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
int __ubsan_handle_mul_overflow_minimal_abort(void);

/* Symbol: _Z27convertRilCellInfoListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_08CellInfoEEE */
/* Demangled: convertRilCellInfoListToHal(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_0::CellInfo>&) */
int _Z27convertRilCellInfoListToHalPKvmRN7android8hardware8hidl_vecINS2_5radio4V1_08CellInfoEEE(void);

/* Symbol: __ubsan_handle_nullability_arg_minimal */
/* Demangled: __ubsan_handle_nullability_arg_minimal */
int __ubsan_handle_nullability_arg_minimal(void);

/* Symbol: _ZN10mtkRadioEx19onTxPowerIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onTxPowerIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19onTxPowerIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23imsCfgFeatureChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsCfgFeatureChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23imsCfgFeatureChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27getCDMASubscriptionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCDMASubscriptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27getCDMASubscriptionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl14setWifiEnabledEiRKN7android8hardware11hidl_stringEii */
/* Demangled: MtkRadioExImpl::setWifiEnabled(int, android::hardware::hidl_string const&, int, int) */
int _ZN14MtkRadioExImpl14setWifiEnabledEiRKN7android8hardware11hidl_stringEii(void);

/* Symbol: _ZN9RadioImpl18separateConnectionEii */
/* Demangled: RadioImpl::separateConnection(int, int) */
int _ZN9RadioImpl18separateConnectionEii(void);

/* Symbol: _ZN10mtkRadioEx28imsEventPackageIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsEventPackageIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28imsEventPackageIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig23simSlotStatusChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::simSlotStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig23simSlotStatusChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl18deactivateDataCallEiib */
/* Demangled: RadioImpl::deactivateDataCall(int, int, bool) */
int _ZN9RadioImpl18deactivateDataCallEiib(void);

/* Symbol: _ZN10mtkRadioEx30triggerModeSwitchByEccResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::triggerModeSwitchByEccResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30triggerModeSwitchByEccResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31setSearchStoredFreqInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSearchStoredFreqInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31setSearchStoredFreqInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15setMuteResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setMuteResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15setMuteResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27setUiccSubscriptionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setUiccSubscriptionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27setUiccSubscriptionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z20dispatchSmsParametrsiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE */
/* Demangled: dispatchSmsParametrs(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::SmsParams const&) */
int _Z20dispatchSmsParametrsiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE(void);

/* Symbol: _ZN14MtkRadioExImpl29setBarringPasswordCheckedByNWEiRKN7android8hardware11hidl_stringES4_S4_S4_ */
/* Demangled: MtkRadioExImpl::setBarringPasswordCheckedByNW(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl29setBarringPasswordCheckedByNWEiRKN7android8hardware11hidl_stringES4_S4_S4_(void);

/* Symbol: _ZN9RadioImpl15getDataCallListEi */
/* Demangled: RadioImpl::getDataCallList(int) */
int _ZN9RadioImpl15getDataCallListEi(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal_abort */
/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
int __ubsan_handle_negate_overflow_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx21imsEctCommandResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsEctCommandResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21imsEctCommandResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl13setModemPowerEib */
/* Demangled: MtkRadioExImpl::setModemPower(int, bool) */
int _ZN14MtkRadioExImpl13setModemPowerEib(void);

/* Symbol: _ZN10mtkRadioEx28setVoicePreferStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setVoicePreferStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28setVoicePreferStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18keepaliveStatusIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::keepaliveStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18keepaliveStatusIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl24getPreferredVoicePrivacyEi */
/* Demangled: RadioImpl::getPreferredVoicePrivacy(int) */
int _ZN9RadioImpl24getPreferredVoicePrivacyEi(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_1::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE;

/* Symbol: _ZTT7SapImpl */
/* Demangled: VTT for SapImpl */
extern void* _ZTT7SapImpl;

/* Symbol: _ZN10mtkRadioEx18setApcModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setApcModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18setApcModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx19restartRILDResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::restartRILDResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19restartRILDResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocketC2EPKcjPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::RilSapSocket(char const*, unsigned int, RIL_RadioFunctions const*) */
int _ZN12RilSapSocketC2EPKcjPK18RIL_RadioFunctions(void);

/* Symbol: _ZN9RadioImpl29getPreferredNetworkTypeBitmapEi */
/* Demangled: RadioImpl::getPreferredNetworkTypeBitmap(int) */
int _ZN9RadioImpl29getPreferredNetworkTypeBitmapEi(void);

/* Symbol: _ZN10mtkRadioEx39setFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setFemtoCellSystemSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx39setFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader */
/* Demangled: RilSapSocket::dispatchRequest(_MsgHeader*) */
int _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader(void);

/* Symbol: _Z28fillCellIdentityResponse_1_2RN7android8hardware5radio4V1_212CellIdentityERK20RIL_CellIdentity_v16 */
/* Demangled: fillCellIdentityResponse_1_2(android::hardware::radio::V1_2::CellIdentity&, RIL_CellIdentity_v16 const&) */
int _Z28fillCellIdentityResponse_1_2RN7android8hardware5radio4V1_212CellIdentityERK20RIL_CellIdentity_v16(void);

/* Symbol: _ZN14MtkRadioExImpl20syncDataSettingsToMdEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: MtkRadioExImpl::syncDataSettingsToMd(int, android::hardware::hidl_vec<int> const&) */
int _ZN14MtkRadioExImpl20syncDataSettingsToMdEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN14MtkRadioExImpl22setPhoneBookMemStorageEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: MtkRadioExImpl::setPhoneBookMemStorage(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl22setPhoneBookMemStorageEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN14MtkRadioExImpl24setBgsrchDeltaSleepTimerEii */
/* Demangled: MtkRadioExImpl::setBgsrchDeltaSleepTimer(int, int) */
int _ZN14MtkRadioExImpl24setBgsrchDeltaSleepTimerEii(void);

/* Symbol: _ZN9RadioImpl18getRadioCapabilityEi */
/* Demangled: RadioImpl::getRadioCapability(int) */
int _ZN9RadioImpl18getRadioCapabilityEi(void);

/* Symbol: _ZN10mtkRadioEx20onWfcPdnStateChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWfcPdnStateChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20onWfcPdnStateChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16setSmsParametersEiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE */
/* Demangled: MtkRadioExImpl::setSmsParameters(int, vendor::mediatek::hardware::mtkradioex::V2_0::SmsParams const&) */
int _ZN14MtkRadioExImpl16setSmsParametersEiRKN6vendor8mediatek8hardware10mtkradioex4V2_09SmsParamsE(void);

/* Symbol: _ZN10mtkRadioEx16sendCnapResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendCnapResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16sendCnapResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx19cfgA2offsetResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cfgA2offsetResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19cfgA2offsetResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z14dispatchStringiiiPKc */
/* Demangled: dispatchString(int, int, int, char const*) */
int _Z14dispatchStringiiiPKc(void);

/* Symbol: _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_ */
/* Demangled: RadioImpl::getFacilityLockForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal */
/* Demangled: __ubsan_handle_negate_overflow_minimal */
int __ubsan_handle_negate_overflow_minimal(void);

/* Symbol: _ZN10mtkRadioEx51handleStkCallSetupRequestFromSimWithResCodeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::handleStkCallSetupRequestFromSimWithResCodeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx51handleStkCallSetupRequestFromSimWithResCodeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16routeAuthMessageEiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: MtkRadioExImpl::routeAuthMessage(int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl16routeAuthMessageEiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN9RadioImpl22getAllowedCarriers_1_4Ei */
/* Demangled: RadioImpl::getAllowedCarriers_1_4(int) */
int _ZN9RadioImpl22getAllowedCarriers_1_4Ei(void);

/* Symbol: _ZN10mtkRadioEx39acknowledgeLastIncomingGsmSmsExResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::acknowledgeLastIncomingGsmSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx39acknowledgeLastIncomingGsmSmsExResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl6getATREi */
/* Demangled: MtkRadioExImpl::getATR(int) */
int _ZN14MtkRadioExImpl6getATREi(void);

/* Symbol: _ZN5radio23getCellInfoListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCellInfoListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23getCellInfoListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl24setCallForwardInTimeSlotEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE */
/* Demangled: MtkRadioExImpl::setCallForwardInTimeSlot(int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
int _ZN14MtkRadioExImpl24setCallForwardInTimeSlotEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void);

/* Symbol: _ZN9RadioImpl17getDeviceIdentityEi */
/* Demangled: RadioImpl::getDeviceIdentity(int) */
int _ZN9RadioImpl17getDeviceIdentityEi(void);

/* Symbol: _ZN9RadioImpl17setupDataCall_1_5EiN7android8hardware5radio4V1_513AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS3_11LinkAddressEEERKNSA_INS1_11hidl_stringEEE */
/* Demangled: RadioImpl::setupDataCall_1_5(int, android::hardware::radio::V1_5::AccessNetwork, android::hardware::radio::V1_5::DataProfileInfo const&, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::radio::V1_5::LinkAddress> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN9RadioImpl17setupDataCall_1_5EiN7android8hardware5radio4V1_513AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS3_11LinkAddressEEERKNSA_INS1_11hidl_stringEEE(void);

/* Symbol: _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb */
/* Demangled: RadioImpl::setInitialAttachApn(int, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool) */
int _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb(void);

/* Symbol: _ZN5radio33getCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCdmaSubscriptionSourceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33getCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z29convertRilDataCallToHalEx_1_4P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_419SetupDataCallResultEj */
/* Demangled: convertRilDataCallToHalEx_1_4(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_4::SetupDataCallResult&, unsigned int) */
int _Z29convertRilDataCallToHalEx_1_4P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_419SetupDataCallResultEj(void);

/* Symbol: _ZN9RadioImpl15startLceServiceEiib */
/* Demangled: RadioImpl::startLceService(int, int, bool) */
int _ZN9RadioImpl15startLceServiceEiib(void);

/* Symbol: _ZN10mtkRadioEx18onDsbpStateChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onDsbpStateChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18onDsbpStateChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx20rttModifyResponseIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::rttModifyResponseInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20rttModifyResponseIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23selectFemtocellResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::selectFemtocellResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23selectFemtocellResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio30getCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCdmaBroadcastConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio30getCdmaBroadcastConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z17dispatchSearchRatiiiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: dispatchSearchRat(int, int, int, android::hardware::hidl_vec<int> const&) */
int _Z17dispatchSearchRatiiiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN14MtkRadioExImpl14setImsCallModeEii */
/* Demangled: MtkRadioExImpl::setImsCallMode(int, int) */
int _ZN14MtkRadioExImpl14setImsCallModeEii(void);

/* Symbol: _ZN9RadioImpl7getClirEi */
/* Demangled: RadioImpl::getClir(int) */
int _ZN9RadioImpl7getClirEi(void);

/* Symbol: _ZN10mtkRadioEx31responseCsNetworkStateChangeIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseCsNetworkStateChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31responseCsNetworkStateChangeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio14cdmaInfoRecIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaInfoRecInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio14cdmaInfoRecIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl12setWfcConfigEiiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: MtkRadioExImpl::setWfcConfig(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl12setWfcConfigEiiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN5radio24hardwareConfigChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::hardwareConfigChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24hardwareConfigChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: RadioImpl::setCallForward(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN9RadioImpl21getGsmBroadcastConfigEi */
/* Demangled: RadioImpl::getGsmBroadcastConfig(int) */
int _ZN9RadioImpl21getGsmBroadcastConfigEi(void);

/* Symbol: _ZN10mtkRadioEx18getApcInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getApcInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18getApcInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26dataAllowedNotificationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dataAllowedNotificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26dataAllowedNotificationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26setSipHeaderReportResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSipHeaderReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26setSipHeaderReportResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx33getImsCfgResourceCapValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getImsCfgResourceCapValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx33getImsCfgResourceCapValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx36deactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::deactivateNrScgCommunicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx36deactivateNrScgCommunicationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl10setRttModeEii */
/* Demangled: MtkRadioExImpl::setRttMode(int, int) */
int _ZN14MtkRadioExImpl10setRttModeEii(void);

/* Symbol: _ZN10mtkRadioEx18setRttModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setRttModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18setRttModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23setLocationInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setLocationInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23setLocationInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio20simSmsStorageFullIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::simSmsStorageFullInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio20simSmsStorageFullIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10RilOpProxy12getOpHandlerEv */
/* Demangled: RilOpProxy::getOpHandler() */
int _ZN10RilOpProxy12getOpHandlerEv(void);

/* Symbol: _ZN10RilOpProxy12sDlOpHandlerE */
/* Demangled: RilOpProxy::sDlOpHandler */
extern void* _ZN10RilOpProxy12sDlOpHandlerE;

/* Symbol: _ZN10mtkRadioEx23readUPBSneEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBSneEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23readUPBSneEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx32setVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setVoiceDomainPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setVoiceDomainPreferenceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18conferenceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::conferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18conferenceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23indicateRingbackToneIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::indicateRingbackToneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23indicateRingbackToneIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio29reportSmsMemoryStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::reportSmsMemoryStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29reportSmsMemoryStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl24setImsRegistrationReportEi */
/* Demangled: MtkRadioExImpl::setImsRegistrationReport(int) */
int _ZN14MtkRadioExImpl24setImsRegistrationReportEi(void);

/* Symbol: _ZN9RadioImpl32setLinkCapacityReportingCriteriaEiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_213AccessNetworkE */
/* Demangled: RadioImpl::setLinkCapacityReportingCriteria(int, int, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&, android::hardware::radio::V1_2::AccessNetwork) */
int _ZN9RadioImpl32setLinkCapacityReportingCriteriaEiiiiRKN7android8hardware8hidl_vecIiEES5_NS1_5radio4V1_213AccessNetworkE(void);

/* Symbol: pb_close_string_substream */
/* Demangled: pb_close_string_substream */
int pb_close_string_substream(void);

/* Symbol: _ZN10mtkRadioEx25getCallSubAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getCallSubAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25getCallSubAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z31convertIntToRadioIndicationTypei */
/* Demangled: convertIntToRadioIndicationType(int) */
int _Z31convertIntToRadioIndicationTypei(void);

/* Symbol: _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::startDtmf(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx29imsBearerStateConfirmResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsBearerStateConfirmResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29imsBearerStateConfirmResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio13modemResetIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::modemResetInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio13modemResetIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30writePhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::writePhoneBookEntryExtResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30writePhoneBookEntryExtResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33hangupWaitingOrBackgroundResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::hangupWaitingOrBackgroundResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33hangupWaitingOrBackgroundResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket15addSocketToListEPKcjPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::addSocketToList(char const*, unsigned int, RIL_RadioFunctions const*) */
int _ZN12RilSapSocket15addSocketToListEPKcjPK18RIL_RadioFunctions(void);

/* Symbol: _ZN14MtkRadioExImpl15getSmsMemStatusEi */
/* Demangled: MtkRadioExImpl::getSmsMemStatus(int) */
int _ZN14MtkRadioExImpl15getSmsMemStatusEi(void);

/* Symbol: _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response */
/* Demangled: convertTransferCardReaderStatusResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response) */
int _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response(void);

/* Symbol: _ZN10mtkRadioEx19setSimPowerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSimPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19setSimPowerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18acceptCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::acceptCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18acceptCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl17queryUPBAvailableEiii */
/* Demangled: MtkRadioExImpl::queryUPBAvailable(int, int, int) */
int _ZN14MtkRadioExImpl17queryUPBAvailableEiii(void);

/* Symbol: _ZN7SapImpl14transferAtrReqEi */
/* Demangled: SapImpl::transferAtrReq(int) */
int _ZN7SapImpl14transferAtrReqEi(void);

/* Symbol: _ZN10mtkRadioEx17setFdModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setFdModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17setFdModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16vtDialWithSipUriEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::vtDialWithSipUri(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl16vtDialWithSipUriEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN14MtkRadioExImpl18sendEmbmsAtCommandEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::sendEmbmsAtCommand(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl18sendEmbmsAtCommandEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl14stopLceServiceEi */
/* Demangled: RadioImpl::stopLceService(int) */
int _ZN9RadioImpl14stopLceServiceEi(void);

/* Symbol: _ZN10mtkRadioEx23modifyModemTypeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::modifyModemTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23modifyModemTypeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl22triggerModeSwitchByEccEii */
/* Demangled: MtkRadioExImpl::triggerModeSwitchByEcc(int, int) */
int _ZN14MtkRadioExImpl22triggerModeSwitchByEccEii(void);

/* Symbol: _ZN10mtkRadioEx16imsSupportEccIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsSupportEccInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16imsSupportEccIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx16sendAtciResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendAtciResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16sendAtciResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26setBarringPasswordResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setBarringPasswordResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26setBarringPasswordResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz */
/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo>(int, RIL_DataProfileInfo*, RIL_DataProfileInfo**, int, ...) */
int _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz(void);

/* Symbol: _ZN10mtkRadioEx18networkBandInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::networkBandInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18networkBandInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl6setTrmEii */
/* Demangled: MtkRadioExImpl::setTrm(int, int) */
int _ZN14MtkRadioExImpl6setTrmEii(void);

/* Symbol: _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::supplyNetworkDepersonalization(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN5radio17cdmaPrlChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaPrlChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio17cdmaPrlChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z20checkReturnStatusMtkjRN7android8hardware6ReturnIvEEbj */
/* Demangled: checkReturnStatusMtk(unsigned int, android::hardware::Return<void>&, bool, unsigned int) */
int _Z20checkReturnStatusMtkjRN7android8hardware6ReturnIvEEbj(void);

/* Symbol: _ZN10mtkRadioEx17imsDisableDoneIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDisableDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17imsDisableDoneIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio28subscriptionStatusChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::subscriptionStatusChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28subscriptionStatusChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio39switchWaitingOrHoldingAndActiveResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::switchWaitingOrHoldingAndActiveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio39switchWaitingOrHoldingAndActiveResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl20getAvailableNetworksEi */
/* Demangled: RadioImpl::getAvailableNetworks(int) */
int _ZN9RadioImpl20getAvailableNetworksEi(void);

/* Symbol: _ZN9RadioImpl21getAvailableBandModesEi */
/* Demangled: RadioImpl::getAvailableBandModes(int) */
int _ZN9RadioImpl21getAvailableBandModesEi(void);

/* Symbol: _ZN9RadioImpl22iccCloseLogicalChannelEii */
/* Demangled: RadioImpl::iccCloseLogicalChannel(int, int) */
int _ZN9RadioImpl22iccCloseLogicalChannelEii(void);

/* Symbol: pb_decode */
/* Demangled: pb_decode */
int pb_decode(void);

/* Symbol: _ZN10mtkRadioEx24getFemtocellListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getFemtocellListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24getFemtocellListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28getGsmBroadcastActivationRspEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getGsmBroadcastActivationRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28getGsmBroadcastActivationRspEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio13cdmaNewSmsIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaNewSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio13cdmaNewSmsIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18newBroadcastSmsIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::newBroadcastSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18newBroadcastSmsIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl19resetAllConnectionsEi */
/* Demangled: MtkRadioExImpl::resetAllConnections(int) */
int _ZN14MtkRadioExImpl19resetAllConnectionsEi(void);

/* Symbol: _ZN14MtkRadioExImpl20sendRttModifyRequestEiii */
/* Demangled: MtkRadioExImpl::sendRttModifyRequest(int, int, int) */
int _ZN14MtkRadioExImpl20sendRttModifyRequestEiii(void);

/* Symbol: _ZN14MtkRadioExImpl7getColpEi */
/* Demangled: MtkRadioExImpl::getColp(int) */
int _ZN14MtkRadioExImpl7getColpEi(void);

/* Symbol: _ZN9RadioImpl17getSignalStrengthEi */
/* Demangled: RadioImpl::getSignalStrength(int) */
int _ZN9RadioImpl17getSignalStrengthEi(void);

/* Symbol: _ZN7SapImpl10connectReqEii */
/* Demangled: SapImpl::connectReq(int, int) */
int _ZN7SapImpl10connectReqEii(void);

/* Symbol: _ZN5radio24getIccCardStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getIccCardStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24getIccCardStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z30getCellInfoTypeRadioTechnologyPc */
/* Demangled: getCellInfoTypeRadioTechnology(char*) */
int _Z30getCellInfoTypeRadioTechnologyPc(void);

/* Symbol: _ZN14MtkRadioExImpl17getCurrentPOLListEi */
/* Demangled: MtkRadioExImpl::getCurrentPOLList(int) */
int _ZN14MtkRadioExImpl17getCurrentPOLListEi(void);

/* Symbol: _ZN14MtkRadioExImpl17sendWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_ */
/* Demangled: MtkRadioExImpl::sendWifiIpAddress(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl17sendWifiIpAddressEiRKN7android8hardware11hidl_stringES4_S4_iiS4_S4_iS4_(void);

/* Symbol: _ZN9RadioImpl20explicitCallTransferEi */
/* Demangled: RadioImpl::explicitCallTransfer(int) */
int _ZN9RadioImpl20explicitCallTransferEi(void);

/* Symbol: _ZN10mtkRadioEx37currentSignalStrengthWithWcdmaEcioIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::currentSignalStrengthWithWcdmaEcioInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx37currentSignalStrengthWithWcdmaEcioIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl21getSignalStrength_1_4Ei */
/* Demangled: RadioImpl::getSignalStrength_1_4(int) */
int _ZN9RadioImpl21getSignalStrength_1_4Ei(void);

/* Symbol: _ZN10mtkRadioEx24writeUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::writeUPBGrpEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24writeUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18setTTYModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setTTYModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18setTTYModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl43handleStkCallSetupRequestFromSimWithResCodeEii */
/* Demangled: MtkRadioExImpl::handleStkCallSetupRequestFromSimWithResCode(int, int) */
int _ZN14MtkRadioExImpl43handleStkCallSetupRequestFromSimWithResCodeEii(void);

/* Symbol: _ZN14MtkRadioExImpl9setFdModeEiiii */
/* Demangled: MtkRadioExImpl::setFdMode(int, int, int, int) */
int _ZN14MtkRadioExImpl9setFdModeEiiii(void);

/* Symbol: _ZN9RadioImpl20startNetworkScan_1_2EiRKN7android8hardware5radio4V1_218NetworkScanRequestE */
/* Demangled: RadioImpl::startNetworkScan_1_2(int, android::hardware::radio::V1_2::NetworkScanRequest const&) */
int _ZN9RadioImpl20startNetworkScan_1_2EiRKN7android8hardware5radio4V1_218NetworkScanRequestE(void);

/* Symbol: _ZN14MtkRadioExImpl25setKeepAliveByPDCPCtrlPDUEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setKeepAliveByPDCPCtrlPDU(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl25setKeepAliveByPDCPCtrlPDUEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl17cancelPendingUssdEi */
/* Demangled: RadioImpl::cancelPendingUssd(int) */
int _ZN9RadioImpl17cancelPendingUssdEi(void);

/* Symbol: _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib */
/* Demangled: RadioImpl::handleStkCallSetupRequestFromSim(int, bool) */
int _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib(void);

/* Symbol: _ZN10mtkRadioEx26rttModifyRequestReceiveIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::rttModifyRequestReceiveInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26rttModifyRequestReceiveIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket13getSocketByIdEj */
/* Demangled: RilSapSocket::getSocketById(unsigned int) */
int _ZN12RilSapSocket13getSocketByIdEj(void);

/* Symbol: _ZN14MtkRadioExImpl21notifyEPDGScreenStateEii */
/* Demangled: MtkRadioExImpl::notifyEPDGScreenState(int, int) */
int _ZN14MtkRadioExImpl21notifyEPDGScreenStateEii(void);

/* Symbol: _ZN10mtkRadioEx18audioIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::audioIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18audioIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29setEmergencyAddressIdResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setEmergencyAddressIdResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29setEmergencyAddressIdResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15sendSmsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15sendSmsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl8sendCnapEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::sendCnap(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl8sendCnapEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx22imsDialogIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDialogIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22imsDialogIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28dedicatedBearerActivationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dedicatedBearerActivationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28dedicatedBearerActivationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE */
/* Demangled: SapImpl::apduReq(int, android::hardware::radio::V1_0::SapApduType, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE(void);

/* Symbol: _ZN10mtkRadioEx16multiImsCountIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::multiImsCountInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16multiImsCountIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig29setPreferredDataModemResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::setPreferredDataModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig29setPreferredDataModemResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: pb_encode_submessage */
/* Demangled: pb_encode_submessage */
int pb_encode_submessage(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
int __ubsan_handle_float_cast_overflow_minimal(void);

/* Symbol: _ZN9RadioImpl26setCdmaBroadcastActivationEib */
/* Demangled: RadioImpl::setCdmaBroadcastActivation(int, bool) */
int _ZN9RadioImpl26setCdmaBroadcastActivationEib(void);

/* Symbol: _ZN10mtkRadioEx19controlCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::controlCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19controlCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx33getPhoneBookStringsLengthResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getPhoneBookStringsLengthResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx33getPhoneBookStringsLengthResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21nvResetConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::nvResetConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21nvResetConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb */
/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*, bool) */
int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb(void);

/* Symbol: _ZN14MtkRadioExImpl31getDeactivateNrScgCommunicationEi */
/* Demangled: MtkRadioExImpl::getDeactivateNrScgCommunication(int) */
int _ZN14MtkRadioExImpl31getDeactivateNrScgCommunicationEi(void);

/* Symbol: _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi */
/* Demangled: RadioImpl::switchWaitingOrHoldingAndActive(int) */
int _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi(void);

/* Symbol: _ZN10mtkRadioEx16esnMeidChangeIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::esnMeidChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16esnMeidChangeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23startLceServiceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::startLceServiceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23startLceServiceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl22deactivateDataCall_1_2EiiN7android8hardware5radio4V1_217DataRequestReasonE */
/* Demangled: RadioImpl::deactivateDataCall_1_2(int, int, android::hardware::radio::V1_2::DataRequestReason) */
int _ZN9RadioImpl22deactivateDataCall_1_2EiiN7android8hardware5radio4V1_217DataRequestReasonE(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
int __ubsan_handle_type_mismatch_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx32setBgsrchDeltaSleepTimerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setBgsrchDeltaSleepTimerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setBgsrchDeltaSleepTimerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio31setPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setPreferredNetworkTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio31setPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl9setEccNumEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: MtkRadioExImpl::setEccNum(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl9setEccNumEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN10mtkRadioEx23readUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::readUPBGrpEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23readUPBGrpEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23setImsRtpReportResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsRtpReportResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23setImsRtpReportResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_function_type_mismatch_minimal */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
int __ubsan_handle_function_type_mismatch_minimal(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal */
/* Demangled: __ubsan_handle_type_mismatch_minimal */
int __ubsan_handle_type_mismatch_minimal(void);

/* Symbol: _ZN10mtkRadioEx33imsCfgDynamicImsSwitchCompleteIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsCfgDynamicImsSwitchCompleteInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx33imsCfgDynamicImsSwitchCompleteIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio32setPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setPreferredVoicePrivacyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32setPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: pb_encode_string */
/* Demangled: pb_encode_string */
int pb_encode_string(void);

/* Symbol: _ZN10mtkRadioEx26rttCapabilityIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::rttCapabilityIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26rttCapabilityIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx40acknowledgeLastIncomingCdmaSmsExResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::acknowledgeLastIncomingCdmaSmsExResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx40acknowledgeLastIncomingCdmaSmsExResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15setClirResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setClirResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15setClirResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19enableModemResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::enableModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19enableModemResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22getCallWaitingResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCallWaitingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22getCallWaitingResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio32cdmaSubscriptionSourceChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cdmaSubscriptionSourceChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32cdmaSubscriptionSourceChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30setServiceStateToModemResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setServiceStateToModemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30setServiceStateToModemResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl25reportStkServiceIsRunningEi */
/* Demangled: RadioImpl::reportStkServiceIsRunning(int) */
int _ZN9RadioImpl25reportStkServiceIsRunningEi(void);

/* Symbol: _ZN10mtkRadioEx17resetAttachApnIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::resetAttachApnInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17resetAttachApnIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22getSmscAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getSmscAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22getSmscAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33sendTerminalResponseToSimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendTerminalResponseToSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33sendTerminalResponseToSimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10RilOpProxy22getOpUnsolResponseInfoEi */
/* Demangled: RilOpProxy::getOpUnsolResponseInfo(int) */
int _ZN10RilOpProxy22getOpUnsolResponseInfoEi(void);

/* Symbol: _Z35dispatchCallForwardInTimeSlotStatusiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE */
/* Demangled: dispatchCallForwardInTimeSlotStatus(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
int _Z35dispatchCallForwardInTimeSlotStatusiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void);

/* Symbol: _ZN9RadioImpl13stopKeepaliveEii */
/* Demangled: RadioImpl::stopKeepalive(int, int) */
int _ZN9RadioImpl13stopKeepaliveEii(void);

/* Symbol: mCounterRadio */
/* Demangled: mCounterRadio */
extern void* mCounterRadio;

/* Symbol: _ZN10mtkRadioEx24queryNetworkLockResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryNetworkLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24queryNetworkLockResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio17startDtmfResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::startDtmfResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio17startDtmfResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: pb_field_iter_begin */
/* Demangled: pb_field_iter_begin */
int pb_field_iter_begin(void);

/* Symbol: pb_encode_nullterminated */
/* Demangled: pb_encode_nullterminated */
int pb_encode_nullterminated(void);

/* Symbol: _ZN10mtkRadioEx22setWifiEnabledResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setWifiEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22setWifiEnabledResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: callStateToString */
/* Demangled: callStateToString */
int callStateToString(void);

/* Symbol: _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendDtmf(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: pb_read */
/* Demangled: pb_read */
int pb_read(void);

/* Symbol: _ZN10mtkRadioEx17onStkMenuResetIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onStkMenuResetInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onStkMenuResetIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25callmodChangeIndicatorIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::callmodChangeIndicatorInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25callmodChangeIndicatorIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15stkCallSetupIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::stkCallSetupInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15stkCallSetupIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType */
/* Demangled: isServiceTypeCfQuery(RIL_SsServiceType, RIL_SsRequestType) */
int _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType(void);

/* Symbol: _ZN9RadioImpl22setAllowedCarriers_1_4EiRKN7android8hardware5radio4V1_431CarrierRestrictionsWithPriorityENS3_21SimLockMultiSimPolicyE */
/* Demangled: RadioImpl::setAllowedCarriers_1_4(int, android::hardware::radio::V1_4::CarrierRestrictionsWithPriority const&, android::hardware::radio::V1_4::SimLockMultiSimPolicy) */
int _ZN9RadioImpl22setAllowedCarriers_1_4EiRKN7android8hardware5radio4V1_431CarrierRestrictionsWithPriorityENS3_21SimLockMultiSimPolicyE(void);

/* Symbol: _ZN10mtkRadioEx23onMdDataRetryCountResetEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onMdDataRetryCountReset(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23onMdDataRetryCountResetEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio31getPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getPreferredNetworkTypeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio31getPreferredNetworkTypeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_cfi_check_fail_minimal */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
int __ubsan_handle_cfi_check_fail_minimal(void);

/* Symbol: _ZN5radio34supplySimDepersonalizationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplySimDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio34supplySimDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl17setupDataCall_1_2EiN7android8hardware5radio4V1_213AccessNetworkERKNS2_4V1_015DataProfileInfoEbbbNS3_17DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_ */
/* Demangled: RadioImpl::setupDataCall_1_2(int, android::hardware::radio::V1_2::AccessNetwork, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN9RadioImpl17setupDataCall_1_2EiN7android8hardware5radio4V1_213AccessNetworkERKNS2_4V1_015DataProfileInfoEbbbNS3_17DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_(void);

/* Symbol: _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::changeIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN9RadioImpl18setLocationUpdatesEib */
/* Demangled: RadioImpl::setLocationUpdates(int, bool) */
int _ZN9RadioImpl18setLocationUpdatesEib(void);

/* Symbol: _ZN10mtkRadioEx44supplyDeviceNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::supplyDeviceNetworkDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx44supplyDeviceNetworkDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z26convertOperatorStatusToIntPKc */
/* Demangled: convertOperatorStatusToInt(char const*) */
int _Z26convertOperatorStatusToIntPKc(void);

/* Symbol: _ZN9RadioImpl19setIndicationFilterEii */
/* Demangled: RadioImpl::setIndicationFilter(int, int) */
int _ZN9RadioImpl19setIndicationFilterEii(void);

/* Symbol: _ZN10mtkRadioEx17hangupAllResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::hangupAllResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17hangupAllResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx19activateUiccCardRspEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::activateUiccCardRsp(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19activateUiccCardRspEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx44setNetworkSelectionModeManualWithActResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setNetworkSelectionModeManualWithActResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx44setNetworkSelectionModeManualWithActResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio18nvReadItemResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::nvReadItemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18nvReadItemResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm */
/* Demangled: makeSendSmsResult(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
int _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28getLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getLteReleaseVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28getLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33requestIsimAuthenticationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::requestIsimAuthenticationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33requestIsimAuthenticationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: getClientBySlot */
/* Demangled: getClientBySlot */
int getClientBySlot(void);

/* Symbol: _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE */
/* Demangled: dispatchImsCdmaSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
int _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void);

/* Symbol: _ZN14MtkRadioExImpl7getColrEi */
/* Demangled: MtkRadioExImpl::getColr(int) */
int _ZN14MtkRadioExImpl7getColrEi(void);

/* Symbol: _ZN9RadioImpl22enableUiccApplicationsEib */
/* Demangled: RadioImpl::enableUiccApplications(int, bool) */
int _ZN9RadioImpl22enableUiccApplicationsEib(void);

/* Symbol: _ZN5radio28stkCallControlAlphaNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::stkCallControlAlphaNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28stkCallControlAlphaNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl9disableNREib */
/* Demangled: MtkRadioExImpl::disableNR(int, bool) */
int _ZN14MtkRadioExImpl9disableNREib(void);

/* Symbol: _ZN10mtkRadioEx28getSuggestedPlmnListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSuggestedPlmnListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28getSuggestedPlmnListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx28setLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setLteReleaseVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28setLteReleaseVersionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_function_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
int __ubsan_handle_function_type_mismatch_minimal_abort(void);

/* Symbol: _ZN5radio32setCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCdmaRoamingPreferenceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32setCdmaRoamingPreferenceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z30convertRilKeepaliveStatusToHalP19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE */
/* Demangled: convertRilKeepaliveStatusToHal(RIL_KeepaliveStatus*, android::hardware::radio::V1_1::KeepaliveStatus&) */
int _Z30convertRilKeepaliveStatusToHalP19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE(void);

/* Symbol: _ZN14MtkRadioExImpl13getDsdaStatusEi */
/* Demangled: MtkRadioExImpl::getDsdaStatus(int) */
int _ZN14MtkRadioExImpl13getDsdaStatusEi(void);

/* Symbol: _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE */
/* Demangled: RadioImpl::iccIOForApp(int, android::hardware::radio::V1_0::IccIo const&) */
int _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE(void);

/* Symbol: _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE */
/* Demangled: RadioImpl::setAllowedCarriers(int, bool, android::hardware::radio::V1_0::CarrierRestrictions const&) */
int _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE(void);

/* Symbol: _ZN15RadioConfigImpl18getPhoneCapabilityEi */
/* Demangled: RadioConfigImpl::getPhoneCapability(int) */
int _ZN15RadioConfigImpl18getPhoneCapabilityEi(void);

/* Symbol: _ZN10mtkRadioEx13smsInfoExtIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::smsInfoExtInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13smsInfoExtIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29notifyEPDGScreenStateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::notifyEPDGScreenStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29notifyEPDGScreenStateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22emergencyNumberListIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::emergencyNumberListInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22emergencyNumberListIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl11removeCbMsgEiii */
/* Demangled: MtkRadioExImpl::removeCbMsg(int, int, int) */
int _ZN14MtkRadioExImpl11removeCbMsgEiii(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsMwiERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IMwiRadioResponseEEERKNS1_INS6_19IMwiRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsMwi(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMwiRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IMwiRadioIndication> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsMwiERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IMwiRadioResponseEEERKNS1_INS6_19IMwiRadioIndicationEEE(void);

/* Symbol: _ZN10mtkRadioEx13sipRegInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sipRegInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13sipRegInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket9uimRilEnvE */
/* Demangled: RilSapSocket::uimRilEnv */
extern void* _ZN12RilSapSocket9uimRilEnvE;

/* Symbol: _ZN5radio19callStateChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::callStateChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19callStateChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsRcsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRcsRadioResponseEEERKNS1_INS6_19IRcsRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsRcs(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRcsRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IRcsRadioIndication> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsRcsERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017IRcsRadioResponseEEERKNS1_INS6_19IRcsRadioIndicationEEE(void);

/* Symbol: _ZN7SapImpl27transferCardReaderStatusReqEi */
/* Demangled: SapImpl::transferCardReaderStatusReq(int) */
int _ZN7SapImpl27transferCardReaderStatusReqEi(void);

/* Symbol: pb_istream_from_buffer */
/* Demangled: pb_istream_from_buffer */
int pb_istream_from_buffer(void);

/* Symbol: _ZN10mtkRadioEx31supplyDepersonalizationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::supplyDepersonalizationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31supplyDepersonalizationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z21getRafFromNetworkTypei */
/* Demangled: getRafFromNetworkType(int) */
int _Z21getRafFromNetworkTypei(void);

/* Symbol: _ZN9RadioImpl11getOperatorEi */
/* Demangled: RadioImpl::getOperator(int) */
int _ZN9RadioImpl11getOperatorEi(void);

/* Symbol: _ZN10mtkRadioEx15imsDeregDoneIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDeregDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15imsDeregDoneIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio37iccTransmitApduLogicalChannelResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::iccTransmitApduLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio37iccTransmitApduLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx18setEccModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setEccModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18setEccModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z32convertRilPhbEntryStructureToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureEEE */
/* Demangled: convertRilPhbEntryStructureToHal(void const*, unsigned long, android::hardware::hidl_vec<vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure>&) */
int _Z32convertRilPhbEntryStructureToHalPKvmRN7android8hardware8hidl_vecIN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureEEE(void);

/* Symbol: _ZN10mtkRadioEx25responseModulationInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseModulationInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25responseModulationInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl32queryCallForwardInTimeSlotStatusEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE */
/* Demangled: MtkRadioExImpl::queryCallForwardInTimeSlotStatus(int, vendor::mediatek::hardware::mtkradioex::V2_0::CallForwardInfoEx const&) */
int _ZN14MtkRadioExImpl32queryCallForwardInTimeSlotStatusEiRKN6vendor8mediatek8hardware10mtkradioex4V2_017CallForwardInfoExE(void);

/* Symbol: _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::getImsiForApp(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl17getHardwareConfigEi */
/* Demangled: RadioImpl::getHardwareConfig(int) */
int _ZN9RadioImpl17getHardwareConfigEi(void);

/* Symbol: _ZN10mtkRadioEx23imsRegistrationStateIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsRegistrationStateInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23imsRegistrationStateIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio20sendEnvelopeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendEnvelopeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio20sendEnvelopeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio40hangupForegroundResumeBackgroundResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::hangupForegroundResumeBackgroundResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio40hangupForegroundResumeBackgroundResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23deleteSmsOnRuimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::deleteSmsOnRuimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23deleteSmsOnRuimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE */
/* Demangled: RadioImpl::setBandMode(int, android::hardware::radio::V1_0::RadioBandMode) */
int _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE(void);

/* Symbol: _ZN10mtkRadioEx20setSipHeaderResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSipHeaderResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20setSipHeaderResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi */
/* Demangled: RadioImpl::setNetworkSelectionModeAutomatic(int) */
int _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi(void);

/* Symbol: _ZN10mtkRadioEx15cdmaNewSmsIndExEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cdmaNewSmsIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15cdmaNewSmsIndExEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx20setSearchRatResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSearchRatResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20setSearchRatResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl17setPhonebookReadyEii */
/* Demangled: MtkRadioExImpl::setPhonebookReady(int, int) */
int _ZN14MtkRadioExImpl17setPhonebookReadyEii(void);

/* Symbol: _ZN5radio26getNeighboringCidsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getNeighboringCidsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26getNeighboringCidsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33reportStkServiceIsRunningResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::reportStkServiceIsRunningResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33reportStkServiceIsRunningResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21lockRadioServiceWlockEP16pthread_rwlock_ti */
/* Demangled: radio::lockRadioServiceWlock(pthread_rwlock_t*, int) */
int _ZN5radio21lockRadioServiceWlockEP16pthread_rwlock_ti(void);

/* Symbol: _Z22dispatchSimGeneralAuthiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE */
/* Demangled: dispatchSimGeneralAuth(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::SimAuthStructure const&) */
int _Z22dispatchSimGeneralAuthiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_016SimAuthStructureE(void);

/* Symbol: _Z29convertRilDataCallToHalEx_1_5P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_519SetupDataCallResultEj */
/* Demangled: convertRilDataCallToHalEx_1_5(MTK_RIL_Data_Call_Response_v11*, android::hardware::radio::V1_5::SetupDataCallResult&, unsigned int) */
int _Z29convertRilDataCallToHalEx_1_5P30MTK_RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_519SetupDataCallResultEj(void);

/* Symbol: _ZN14MtkRadioExImpl11cfgB1offsetEiii */
/* Demangled: MtkRadioExImpl::cfgB1offset(int, int, int) */
int _ZN14MtkRadioExImpl11cfgB1offsetEiii(void);

/* Symbol: _ZN9RadioImpl18getBasebandVersionEi */
/* Demangled: RadioImpl::getBasebandVersion(int) */
int _ZN9RadioImpl18getBasebandVersionEi(void);

/* Symbol: _ZN10mtkRadioEx20onSimPowerChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimPowerChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx20onSimPowerChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21lockRadioServiceRlockEP16pthread_rwlock_ti */
/* Demangled: radio::lockRadioServiceRlock(pthread_rwlock_t*, int) */
int _ZN5radio21lockRadioServiceRlockEP16pthread_rwlock_ti(void);

/* Symbol: _ZN5radio21setRadioPowerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setRadioPowerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21setRadioPowerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26sendRequestStringsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendRequestStringsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26sendRequestStringsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27currentLinkCapacityEstimateEjii9RIL_ErrnoPKvm */
/* Demangled: radio::currentLinkCapacityEstimate(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27currentLinkCapacityEstimateEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl23getImsCfgProvisionValueEii */
/* Demangled: MtkRadioExImpl::getImsCfgProvisionValue(int, int) */
int _ZN14MtkRadioExImpl23getImsCfgProvisionValueEii(void);

/* Symbol: _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendEnvelope(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _Z26populateConfigResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno */
/* Demangled: populateConfigResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
int _Z26populateConfigResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void);

/* Symbol: _ZN10mtkRadioEx19getProvisionDoneIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getProvisionDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19getProvisionDoneIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24hangupWithReasonResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::hangupWithReasonResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24hangupWithReasonResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setCallValidTimerResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setCallValidTimerResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setCallValidTimerResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android19onNewCommandConnectEjj */
/* Demangled: android::onNewCommandConnect(unsigned int, unsigned int) */
int _ZN7android19onNewCommandConnectEjj(void);

/* Symbol: _ZN14MtkRadioExImpl7setColpEii */
/* Demangled: MtkRadioExImpl::setColp(int, int) */
int _ZN14MtkRadioExImpl7setColpEii(void);

/* Symbol: _ZN10mtkRadioEx19setGwsdModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setGwsdModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19setGwsdModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio20networkScanResultIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::networkScanResultInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio20networkScanResultIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio23stopNetworkScanResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::stopNetworkScanResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio23stopNetworkScanResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response */
/* Demangled: convertTransferAtrResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response) */
int _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response(void);

/* Symbol: _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE */
/* Demangled: SapImpl::setTransferProtocolReq(int, android::hardware::radio::V1_0::SapTransferProtocol) */
int _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE(void);

/* Symbol: pb_decode_fixed32 */
/* Demangled: pb_decode_fixed32 */
int pb_decode_fixed32(void);

/* Symbol: _ZN10mtkRadioEx24gmssRatChangedIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::gmssRatChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24gmssRatChangedIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx35enableCAPlusBandWidthFilterResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::enableCAPlusBandWidthFilterResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx35enableCAPlusBandWidthFilterResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx8onXuiIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onXuiInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx8onXuiIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33setCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCdmaSubscriptionSourceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33setCdmaSubscriptionSourceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response */
/* Demangled: convertApduResponseProtoToHal(_RIL_SIM_SAP_APDU_RSP_Response) */
int _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response(void);

/* Symbol: _ZN10mtkRadioEx21plmnChangedIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::plmnChangedIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21plmnChangedIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23responseNetworkEventIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseNetworkEventInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23responseNetworkEventIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z17checkReturnStatusjRN7android8hardware6ReturnIvEEb */
/* Demangled: checkReturnStatus(unsigned int, android::hardware::Return<void>&, bool) */
int _Z17checkReturnStatusjRN7android8hardware6ReturnIvEEb(void);

/* Symbol: _ZN14MtkRadioExImpl6vtDialEiRKN7android8hardware5radio4V1_04DialE */
/* Demangled: MtkRadioExImpl::vtDial(int, android::hardware::radio::V1_0::Dial const&) */
int _ZN14MtkRadioExImpl6vtDialEiRKN7android8hardware5radio4V1_04DialE(void);

/* Symbol: _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType */
/* Demangled: processResponse(_MsgHeader*, RilSapSocket*, _MsgType) */
int _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType(void);

/* Symbol: _ZN10mtkRadioEx16sendUssiResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendUssiResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16sendUssiResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx17imsEnableStartIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsEnableStartInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17imsEnableStartIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25setCallIndicationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setCallIndicationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25setCallIndicationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl10setTxPowerEii */
/* Demangled: MtkRadioExImpl::setTxPower(int, int) */
int _ZN14MtkRadioExImpl10setTxPowerEii(void);

/* Symbol: _ZN10mtkRadioEx15getColrResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getColrResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15getColrResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl22setNattKeepAliveStatusEiRKN7android8hardware11hidl_stringEbS4_iS4_i */
/* Demangled: MtkRadioExImpl::setNattKeepAliveStatus(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl22setNattKeepAliveStatusEiRKN7android8hardware11hidl_stringEbS4_iS4_i(void);

/* Symbol: _ZN10mtkRadioEx10newEtwsIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::newEtwsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx10newEtwsIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25redialEmergencyIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::redialEmergencyIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25redialEmergencyIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31responsePsNetworkStateChangeIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responsePsNetworkStateChangeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31responsePsNetworkStateChangeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21writeSmsToSimResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::writeSmsToSimResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21writeSmsToSimResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::acknowledgeLastIncomingCdmaSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE */
/* Demangled: RadioImpl::setRadioCapability(int, android::hardware::radio::V1_0::RadioCapability const&) */
int _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE(void);

/* Symbol: _ZN15RadioConfigImpl17getSimSlotsStatusEi */
/* Demangled: RadioConfigImpl::getSimSlotsStatus(int) */
int _ZN15RadioConfigImpl17getSimSlotsStatusEi(void);

/* Symbol: _ZN7android11s_callbacksE */
/* Demangled: android::s_callbacks */
extern void* _ZN7android11s_callbacksE;

/* Symbol: _ZN14MtkRadioExImpl32acknowledgeLastIncomingCdmaSmsExEiRKN7android8hardware5radio4V1_010CdmaSmsAckE */
/* Demangled: MtkRadioExImpl::acknowledgeLastIncomingCdmaSmsEx(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
int _ZN14MtkRadioExImpl32acknowledgeLastIncomingCdmaSmsExEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void);

/* Symbol: _ZN9RadioImpl28getDataRegistrationState_1_5Ei */
/* Demangled: RadioImpl::getDataRegistrationState_1_5(int) */
int _ZN9RadioImpl28getDataRegistrationState_1_5Ei(void);

/* Symbol: _ZN9RadioImpl38setSignalStrengthReportingCriteria_1_5EiRKN7android8hardware5radio4V1_519SignalThresholdInfoENS3_13AccessNetworkE */
/* Demangled: RadioImpl::setSignalStrengthReportingCriteria_1_5(int, android::hardware::radio::V1_5::SignalThresholdInfo const&, android::hardware::radio::V1_5::AccessNetwork) */
int _ZN9RadioImpl38setSignalStrengthReportingCriteria_1_5EiRKN7android8hardware5radio4V1_519SignalThresholdInfoENS3_13AccessNetworkE(void);

/* Symbol: nitzTimeReceived */
/* Demangled: nitzTimeReceived */
extern void* nitzTimeReceived;

/* Symbol: _Z37convertConfigIntToRadioIndicationTypei */
/* Demangled: convertConfigIntToRadioIndicationType(int) */
int _Z37convertConfigIntToRadioIndicationTypei(void);

/* Symbol: _ZN5radio35onSupplementaryServiceIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::onSupplementaryServiceIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio35onSupplementaryServiceIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl14sendRsuRequestEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014RsuRequestInfoE */
/* Demangled: MtkRadioExImpl::sendRsuRequest(int, vendor::mediatek::hardware::mtkradioex::V2_0::RsuRequestInfo const&) */
int _ZN14MtkRadioExImpl14sendRsuRequestEiRKN6vendor8mediatek8hardware10mtkradioex4V2_014RsuRequestInfoE(void);

/* Symbol: _ZN5radio19iccIOForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::iccIOForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19iccIOForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19nvWriteItemResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::nvWriteItemResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19nvWriteItemResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm */
/* Demangled: responseIntOrEmpty(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void const*, unsigned long) */
int _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPKvm(void);

/* Symbol: _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc */
/* Demangled: fillCellIdentityFromDataRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
int _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void);

/* Symbol: _ZN14MtkRadioExImpl17setCallValidTimerEii */
/* Demangled: MtkRadioExImpl::setCallValidTimer(int, int) */
int _ZN14MtkRadioExImpl17setCallValidTimerEii(void);

/* Symbol: _ZN10mtkRadioEx26abortFemtocellListResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::abortFemtocellListResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26abortFemtocellListResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25radioStateChangedToImsIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::radioStateChangedToImsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25radioStateChangedToImsIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22responseLteNetworkInfoEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseLteNetworkInfo(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22responseLteNetworkInfoEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30dedicatedBearerModificationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dedicatedBearerModificationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30dedicatedBearerModificationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio30enableUiccApplicationsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::enableUiccApplicationsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio30enableUiccApplicationsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl18queryUPBCapabilityEi */
/* Demangled: MtkRadioExImpl::queryUPBCapability(int) */
int _ZN14MtkRadioExImpl18queryUPBCapabilityEi(void);

/* Symbol: _ZN10mtkRadioEx14getATRResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getATRResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx14getATRResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx15getColpResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getColpResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15getColpResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22setNetworkLockResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setNetworkLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22setNetworkLockResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29getImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getImsCfgFeatureValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29getImsCfgFeatureValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio15getMuteResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getMuteResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15getMuteResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z14dispatchFdModeiiiiii */
/* Demangled: dispatchFdMode(int, int, int, int, int, int) */
int _Z14dispatchFdModeiiiiii(void);

/* Symbol: _ZN14MtkRadioExImpl24setupXcapUserAgentStringEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setupXcapUserAgentString(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl24setupXcapUserAgentStringEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl23getNetworkSelectionModeEi */
/* Demangled: RadioImpl::getNetworkSelectionMode(int) */
int _ZN9RadioImpl23getNetworkSelectionModeEi(void);

/* Symbol: _Z17checkReturnStatusiRN7android8hardware6ReturnIvEE */
/* Demangled: checkReturnStatus(int, android::hardware::Return<void>&) */
int _Z17checkReturnStatusiRN7android8hardware6ReturnIvEE(void);

/* Symbol: _ZN10mtkRadioEx19removeCbMsgResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::removeCbMsgResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19removeCbMsgResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23sendWifiEnabledResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendWifiEnabledResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23sendWifiEnabledResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio33setGsmBroadcastActivationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setGsmBroadcastActivationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio33setGsmBroadcastActivationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_m */
/* Demangled: RilSapSocket::onRequestComplete(void*, RIL_Errno, void*, unsigned long) */
int _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_m(void);

/* Symbol: _ZN9RadioImpl13emergencyDialEiRKN7android8hardware5radio4V1_04DialEiRKNS1_8hidl_vecINS1_11hidl_stringEEENS2_4V1_420EmergencyCallRoutingEbb */
/* Demangled: RadioImpl::emergencyDial(int, android::hardware::radio::V1_0::Dial const&, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::radio::V1_4::EmergencyCallRouting, bool, bool) */
int _ZN9RadioImpl13emergencyDialEiRKN7android8hardware5radio4V1_04DialEiRKNS1_8hidl_vecINS1_11hidl_stringEEENS2_4V1_420EmergencyCallRoutingEbb(void);

/* Symbol: _ZN9RadioImpl25hangupWaitingOrBackgroundEi */
/* Demangled: RadioImpl::hangupWaitingOrBackground(int) */
int _ZN9RadioImpl25hangupWaitingOrBackgroundEi(void);

/* Symbol: pb_encode_delimited */
/* Demangled: pb_encode_delimited */
int pb_encode_delimited(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal */
/* Demangled: __ubsan_handle_load_invalid_value_minimal */
int __ubsan_handle_load_invalid_value_minimal(void);

/* Symbol: _ZN14MtkRadioExImpl30getSignalStrengthWithWcdmaEcioEi */
/* Demangled: MtkRadioExImpl::getSignalStrengthWithWcdmaEcio(int) */
int _ZN14MtkRadioExImpl30getSignalStrengthWithWcdmaEcioEi(void);

/* Symbol: _ZN9RadioImpl23setIndicationFilter_1_2Eii */
/* Demangled: RadioImpl::setIndicationFilter_1_2(int, int) */
int _ZN9RadioImpl23setIndicationFilter_1_2Eii(void);

/* Symbol: _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7SapImpl11resetSimReqEi */
/* Demangled: SapImpl::resetSimReq(int) */
int _ZN7SapImpl11resetSimReqEi(void);

/* Symbol: _ZN10mtkRadioEx12onSsacStatusEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSsacStatus(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12onSsacStatusEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl18sendWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_i */
/* Demangled: MtkRadioExImpl::sendWifiAssociated(int, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl18sendWifiAssociatedEiRKN7android8hardware11hidl_stringEiS4_S4_i(void);

/* Symbol: _ZN5radio15cellInfoListIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::cellInfoListInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio15cellInfoListIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: dispatchRaw(int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN7SapImpl8powerReqEib */
/* Demangled: SapImpl::powerReq(int, bool) */
int _ZN7SapImpl8powerReqEib(void);

/* Symbol: pb_decode_noinit */
/* Demangled: pb_decode_noinit */
int pb_decode_noinit(void);

/* Symbol: pb_release */
/* Demangled: pb_release */
int pb_release(void);

/* Symbol: RIL_register */
/* Demangled: RIL_register */
int RIL_register(void);

/* Symbol: _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb */
/* Demangled: RadioImpl::sendDeviceState(int, android::hardware::radio::V1_0::DeviceStateType, bool) */
int _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb(void);

/* Symbol: _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendCDMAFeatureCode(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx21embmsSessionStatusIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::embmsSessionStatusInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21embmsSessionStatusIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx35getAvailableNetworksWithActResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getAvailableNetworksWithActResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx35getAvailableNetworksWithActResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23setRxTestConfigResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setRxTestConfigResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23setRxTestConfigResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15readUPBGrpEntryEii */
/* Demangled: MtkRadioExImpl::readUPBGrpEntry(int, int) */
int _ZN14MtkRadioExImpl15readUPBGrpEntryEii(void);

/* Symbol: _ZN9RadioImpl11pullLceDataEi */
/* Demangled: RadioImpl::pullLceData(int) */
int _ZN9RadioImpl11pullLceDataEi(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_46IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_4::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_46IRadioE;

/* Symbol: pb_field_iter_find */
/* Demangled: pb_field_iter_find */
int pb_field_iter_find(void);

/* Symbol: _ZN10mtkRadioEx18imsDisableStartIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsDisableStartInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18imsDisableStartIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31qualifiedNetworkTypesChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::qualifiedNetworkTypesChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31qualifiedNetworkTypesChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22stopLceServiceResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::stopLceServiceResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22stopLceServiceResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z23isMtkFwkAddonNotExistedj */
/* Demangled: isMtkFwkAddonNotExisted(unsigned int) */
int _Z23isMtkFwkAddonNotExistedj(void);

/* Symbol: _ZN14MtkRadioExImpl16getRoamingEnableEii */
/* Demangled: MtkRadioExImpl::getRoamingEnable(int, int) */
int _ZN14MtkRadioExImpl16getRoamingEnableEii(void);

/* Symbol: _ZN9RadioImpl30setSystemSelectionChannels_1_5EibRKN7android8hardware8hidl_vecINS1_5radio4V1_520RadioAccessSpecifierEEE */
/* Demangled: RadioImpl::setSystemSelectionChannels_1_5(int, bool, android::hardware::hidl_vec<android::hardware::radio::V1_5::RadioAccessSpecifier> const&) */
int _ZN9RadioImpl30setSystemSelectionChannels_1_5EibRKN7android8hardware8hidl_vecINS1_5radio4V1_520RadioAccessSpecifierEEE(void);

/* Symbol: _ZN10mtkRadioEx16imsEnableDoneIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsEnableDoneInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16imsEnableDoneIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx26noEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::noEmergencyCallbackModeInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx26noEmergencyCallbackModeIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx29resetMdDataRetryCountResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::resetMdDataRetryCountResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29resetMdDataRetryCountResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl10getApcInfoEi */
/* Demangled: MtkRadioExImpl::getApcInfo(int) */
int _ZN14MtkRadioExImpl10getApcInfoEi(void);

/* Symbol: _ZN10mtkRadioEx23pcoDataAfterAttachedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::pcoDataAfterAttachedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23pcoDataAfterAttachedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx31getImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getImsCfgProvisionValueResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31getImsCfgProvisionValueResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio10pcoDataIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::pcoDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio10pcoDataIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio9onUssdIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::onUssdInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio9onUssdIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30getSmsRuimMemoryStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSmsRuimMemoryStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30getSmsRuimMemoryStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio31getImsRegistrationStateResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getImsRegistrationStateResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio31getImsRegistrationStateResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z19dispatchPhbEntryExtiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE */
/* Demangled: dispatchPhbEntryExt(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryExt const&) */
int _Z19dispatchPhbEntryExtiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_011PhbEntryExtE(void);

/* Symbol: sapService */
/* Demangled: sapService */
extern void* sapService;

/* Symbol: _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_012IRadioConfigE */
/* Demangled: construction vtable for android::hardware::radio::config::V1_0::IRadioConfig-in-RadioConfigImpl */
extern void* _ZTC15RadioConfigImpl0_N7android8hardware5radio6config4V1_012IRadioConfigE;

/* Symbol: _ZN5radio22stkProactiveCommandIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::stkProactiveCommandInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22stkProactiveCommandIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE */
/* Demangled: RadioImpl::writeSmsToRuim(int, android::hardware::radio::V1_0::CdmaSmsWriteArgs const&) */
int _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE(void);

/* Symbol: _ZN10mtkRadioEx21vsimOperationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::vsimOperationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21vsimOperationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z13addTidToRLockjl */
/* Demangled: addTidToRLock(unsigned int, long) */
int _Z13addTidToRLockjl(void);

/* Symbol: _ZN14MtkRadioExImpl15setLocationInfoEiRKN7android8hardware11hidl_stringES4_S4_S4_S4_S4_S4_S4_S4_S4_S4_ */
/* Demangled: MtkRadioExImpl::setLocationInfo(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl15setLocationInfoEiRKN7android8hardware11hidl_stringES4_S4_S4_S4_S4_S4_S4_S4_S4_S4_(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal */
/* Demangled: __ubsan_handle_mul_overflow_minimal */
int __ubsan_handle_mul_overflow_minimal(void);

/* Symbol: _ZN10mtkRadioEx15triggerOtaSPIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::triggerOtaSPInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15triggerOtaSPIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx27onCellularQualityChangedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onCellularQualityChangedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx27onCellularQualityChangedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio28getCallForwardStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getCallForwardStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28getCallForwardStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16activateUiccCardEi */
/* Demangled: MtkRadioExImpl::activateUiccCard(int) */
int _ZN14MtkRadioExImpl16activateUiccCardEi(void);

/* Symbol: _ZN14MtkRadioExImpl17readUPBEmailEntryEiii */
/* Demangled: MtkRadioExImpl::readUPBEmailEntry(int, int, int) */
int _ZN14MtkRadioExImpl17readUPBEmailEntryEiii(void);

/* Symbol: _ZN14MtkRadioExImpl22getPhoneBookMemStorageEi */
/* Demangled: MtkRadioExImpl::getPhoneBookMemStorage(int) */
int _ZN14MtkRadioExImpl22getPhoneBookMemStorageEi(void);

/* Symbol: _ZN10mtkRadioEx18speechCodecInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::speechCodecInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18speechCodecInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24eccRedialApproveResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::eccRedialApproveResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24eccRedialApproveResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl17setCallSubAddressEib */
/* Demangled: MtkRadioExImpl::setCallSubAddress(int, bool) */
int _ZN14MtkRadioExImpl17setCallSubAddressEib(void);

/* Symbol: _ZN14MtkRadioExImpl36supplyDeviceNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::supplyDeviceNetworkDepersonalization(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl36supplyDeviceNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: mCounterMtkRadioEx */
/* Demangled: mCounterMtkRadioEx */
extern void* mCounterMtkRadioEx;

/* Symbol: _ZN10mtkRadioEx21onVsimEventIndicationEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onVsimEventIndication(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21onVsimEventIndicationEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z21getNetworkTypeFromRafi */
/* Demangled: getNetworkTypeFromRaf(int) */
int _Z21getNetworkTypeFromRafi(void);

/* Symbol: _ZN14MtkRadioExImpl11restartRILDEi */
/* Demangled: MtkRadioExImpl::restartRILD(int) */
int _ZN14MtkRadioExImpl11restartRILDEi(void);

/* Symbol: _ZN14MtkRadioExImpl20setGsmBroadcastLangsEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::setGsmBroadcastLangs(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl20setGsmBroadcastLangsEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN14MtkRadioExImpl28deactivateNrScgCommunicationEibb */
/* Demangled: MtkRadioExImpl::deactivateNrScgCommunication(int, bool, bool) */
int _ZN14MtkRadioExImpl28deactivateNrScgCommunicationEibb(void);

/* Symbol: _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE */
/* Demangled: construction vtable for android::hardware::radio::V1_0::ISap-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE;

/* Symbol: _Z18dispatchConfigVoidiii */
/* Demangled: dispatchConfigVoid(int, int, int) */
int _Z18dispatchConfigVoidiii(void);

/* Symbol: _ZN10mtkRadioEx21responseFemtocellInfoEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::responseFemtocellInfo(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21responseFemtocellInfoEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio21setupDataCallResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setupDataCallResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio21setupDataCallResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl10conferenceEi */
/* Demangled: RadioImpl::conference(int) */
int _ZN9RadioImpl10conferenceEi(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN10mtkRadioEx24setSmsParametersResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setSmsParametersResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24setSmsParametersResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE */
/* Demangled: convertRilDataCallToHal(RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&) */
int _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE(void);

/* Symbol: _Z30convertCharPtrToVecLinkAddressPKc */
/* Demangled: convertCharPtrToVecLinkAddress(char const*) */
int _Z30convertCharPtrToVecLinkAddressPKc(void);

/* Symbol: pb_decode_varint */
/* Demangled: pb_decode_varint */
int pb_decode_varint(void);

/* Symbol: __ubsan_handle_divrem_overflow_minimal */
/* Demangled: __ubsan_handle_divrem_overflow_minimal */
int __ubsan_handle_divrem_overflow_minimal(void);

/* Symbol: _Z14ril_event_loopv */
/* Demangled: ril_event_loop() */
int _Z14ril_event_loopv(void);

/* Symbol: _ZN14MtkRadioExImpl10cancelUssiEi */
/* Demangled: MtkRadioExImpl::cancelUssi(int) */
int _ZN14MtkRadioExImpl10cancelUssiEi(void);

/* Symbol: _ZN14MtkRadioExImpl12readPhbEntryEiiii */
/* Demangled: MtkRadioExImpl::readPhbEntry(int, int, int, int) */
int _ZN14MtkRadioExImpl12readPhbEntryEiiii(void);

/* Symbol: _ZN14MtkRadioExImpl14dialWithSipUriEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::dialWithSipUri(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl14dialWithSipUriEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendTerminalResponseToSim(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN5radio26changeIccPinForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::changeIccPinForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26changeIccPinForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl17getProvisionValueEiRKN7android8hardware11hidl_stringE */
/* Demangled: MtkRadioExImpl::getProvisionValue(int, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl17getProvisionValueEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: pb_encode */
/* Demangled: pb_encode */
int pb_encode(void);

/* Symbol: __ubsan_handle_nullability_return_minimal_abort */
/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
int __ubsan_handle_nullability_return_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx15setClipResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setClipResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx15setClipResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio9newSmsIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::newSmsInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio9newSmsIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z16dispatchPhbEntryiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE */
/* Demangled: dispatchPhbEntry(int, int, int, vendor::mediatek::hardware::mtkradioex::V2_0::PhbEntryStructure const&) */
int _Z16dispatchPhbEntryiiiRKN6vendor8mediatek8hardware10mtkradioex4V2_017PhbEntryStructureE(void);

/* Symbol: _ZN14MtkRadioExImpl7setColrEii */
/* Demangled: MtkRadioExImpl::setColr(int, int) */
int _ZN14MtkRadioExImpl7setColrEii(void);

/* Symbol: _ZN9RadioImpl7setClirEii */
/* Demangled: RadioImpl::setClir(int, int) */
int _ZN9RadioImpl7setClirEii(void);

/* Symbol: _ZN10mtkRadioEx38getSignalStrengthWithWcdmaEcioResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getSignalStrengthWithWcdmaEcioResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx38getSignalStrengthWithWcdmaEcioResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z33convertRilDataCallListToHalEx_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_519SetupDataCallResultEEEj */
/* Demangled: convertRilDataCallListToHalEx_1_5(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_5::SetupDataCallResult>&, unsigned int) */
int _Z33convertRilDataCallListToHalEx_1_5PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_519SetupDataCallResultEEEj(void);

/* Symbol: _ZN14MtkRadioExImpl24toggleRttAudioIndicationEiii */
/* Demangled: MtkRadioExImpl::toggleRttAudioIndication(int, int, int) */
int _ZN14MtkRadioExImpl24toggleRttAudioIndicationEiii(void);

/* Symbol: _ZN9RadioImpl17setRadioPower_1_5Eibbb */
/* Demangled: RadioImpl::setRadioPower_1_5(int, bool, bool, bool) */
int _ZN9RadioImpl17setRadioPower_1_5Eibbb(void);

/* Symbol: _ZN9RadioImpl26supplySimDepersonalizationEiN7android8hardware5radio4V1_513PersoSubstateERKNS1_11hidl_stringE */
/* Demangled: RadioImpl::supplySimDepersonalization(int, android::hardware::radio::V1_5::PersoSubstate, android::hardware::hidl_string const&) */
int _ZN9RadioImpl26supplySimDepersonalizationEiN7android8hardware5radio4V1_513PersoSubstateERKNS1_11hidl_stringE(void);

/* Symbol: _ZN10mtkRadioEx28dataConnectionDetachResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::dataConnectionDetachResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx28dataConnectionDetachResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx30setNattKeepAliveStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setNattKeepAliveStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx30setNattKeepAliveStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::initSapSocket(char const*, RIL_RadioFunctions const*) */
int _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions(void);

/* Symbol: _ZN5radio13simRefreshIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::simRefreshInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio13simRefreshIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24setVendorSettingResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setVendorSettingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24setVendorSettingResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl22registerCellQltyReportEiRKN7android8hardware11hidl_stringES4_S4_S4_ */
/* Demangled: MtkRadioExImpl::registerCellQltyReport(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN14MtkRadioExImpl22registerCellQltyReportEiRKN7android8hardware11hidl_stringES4_S4_S4_(void);

/* Symbol: _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE */
/* Demangled: RadioImpl::setGsmBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::GsmBroadcastSmsConfigInfo> const&) */
int _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE(void);

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
int __ubsan_handle_shift_out_of_bounds_minimal(void);

/* Symbol: _ZN10mtkRadioEx19cipherIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cipherIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19cipherIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19nitzTimeReceivedIndEjii9RIL_ErrnoPKvm */
/* Demangled: radio::nitzTimeReceivedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19nitzTimeReceivedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z18clientTypeToStringj */
/* Demangled: clientTypeToString(unsigned int) */
int _Z18clientTypeToStringj(void);

/* Symbol: _ZN10mtkRadioEx31cancelAvailableNetworksResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cancelAvailableNetworksResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx31cancelAvailableNetworksResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal */
/* Demangled: __ubsan_handle_pointer_overflow_minimal */
int __ubsan_handle_pointer_overflow_minimal(void);

/* Symbol: _ZN10mtkRadioEx41queryFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryFemtoCellSystemSelectionModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx41queryFemtoCellSystemSelectionModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio28getLastCallFailCauseResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getLastCallFailCauseResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio28getLastCallFailCauseResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl23setResponseFunctionsCapERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017ICapRadioResponseEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsCap(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::ICapRadioResponse> const&) */
int _ZN14MtkRadioExImpl23setResponseFunctionsCapERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_017ICapRadioResponseEEE(void);

/* Symbol: _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: RadioImpl::nvWriteCdmaPrl(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN15RadioConfigImpl17checkReturnStatusERN7android8hardware6ReturnIvEE */
/* Demangled: RadioConfigImpl::checkReturnStatus(android::hardware::Return<void>&) */
int _ZN15RadioConfigImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void);

/* Symbol: pb_decode_varint32 */
/* Demangled: pb_decode_varint32 */
int pb_decode_varint32(void);

/* Symbol: _ZN10mtkRadioEx19onPseudoCellInfoIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onPseudoCellInfoInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19onPseudoCellInfoIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx33onWifiMonitoringThreshouldChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiMonitoringThreshouldChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx33onWifiMonitoringThreshouldChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio19sendCdmaSmsResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::sendCdmaSmsResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio19sendCdmaSmsResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl16hangupWithReasonEiii */
/* Demangled: MtkRadioExImpl::hangupWithReason(int, int, int) */
int _ZN14MtkRadioExImpl16hangupWithReasonEiii(void);

/* Symbol: _ZN10mtkRadioEx12onSimPlugOutEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimPlugOut(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12onSimPlugOutEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl22setResponseFunctionsEmERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016IEmRadioResponseEEERKNS1_INS6_18IEmRadioIndicationEEE */
/* Demangled: MtkRadioExImpl::setResponseFunctionsEm(android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IEmRadioResponse> const&, android::sp<vendor::mediatek::hardware::mtkradioex::V2_0::IEmRadioIndication> const&) */
int _ZN14MtkRadioExImpl22setResponseFunctionsEmERKN7android2spIN6vendor8mediatek8hardware10mtkradioex4V2_016IEmRadioResponseEEERKNS1_INS6_18IEmRadioIndicationEEE(void);

/* Symbol: _ZN5radio18getTTYModeResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getTTYModeResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio18getTTYModeResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22setDataProfileResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setDataProfileResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22setDataProfileResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26getBasebandVersionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getBasebandVersionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26getBasebandVersionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE */
/* Demangled: dispatchImsGsmSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
int _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void);

/* Symbol: _Z33convertRilDataCallListToHalEx_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_419SetupDataCallResultEEEj */
/* Demangled: convertRilDataCallListToHalEx_1_4(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_4::SetupDataCallResult>&, unsigned int) */
int _Z33convertRilDataCallListToHalEx_1_4PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_419SetupDataCallResultEEEj(void);

/* Symbol: _ZN10mtkRadioEx13onPlmnDataIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onPlmnDataInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx13onPlmnDataIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx16ectIndicationIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::ectIndicationInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx16ectIndicationIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx21writePhbEntryResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::writePhbEntryResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21writePhbEntryResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx22conferenceDialResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::conferenceDialResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx22conferenceDialResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24vtDialWithSipUriResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::vtDialWithSipUriResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24vtDialWithSipUriResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22setCallWaitingResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setCallWaitingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22setCallWaitingResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _Z28dispatchSearchStoredFreqInfoiiiiiiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: dispatchSearchStoredFreqInfo(int, int, int, int, int, int, android::hardware::hidl_vec<int> const&) */
int _Z28dispatchSearchStoredFreqInfoiiiiiiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN14MtkRadioExImpl13imsEctCommandEiRKN7android8hardware11hidl_stringEi */
/* Demangled: MtkRadioExImpl::imsEctCommand(int, android::hardware::hidl_string const&, int) */
int _ZN14MtkRadioExImpl13imsEctCommandEiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN9RadioImpl20getModemActivityInfoEi */
/* Demangled: RadioImpl::getModemActivityInfo(int) */
int _ZN9RadioImpl20getModemActivityInfoEi(void);

/* Symbol: RIL_register_socket */
/* Demangled: RIL_register_socket */
int RIL_register_socket(void);

/* Symbol: _ZN10mtkRadioEx11newSmsIndExEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::newSmsIndEx(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx11newSmsIndExEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx18cfuStatusNotifyIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cfuStatusNotifyInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx18cfuStatusNotifyIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx32setupXcapUserAgentStringResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setupXcapUserAgentStringResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setupXcapUserAgentStringResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio30iccCloseLogicalChannelResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::iccCloseLogicalChannelResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio30iccCloseLogicalChannelResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx25queryUPBAvailableResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::queryUPBAvailableResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx25queryUPBAvailableResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22setSmscAddressResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setSmscAddressResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22setSmscAddressResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE */
/* Demangled: RadioImpl::nvWriteItem(int, android::hardware::radio::V1_0::NvWriteItem const&) */
int _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE(void);

/* Symbol: _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE */
/* Demangled: construction vtable for android::hardware::radio::V1_1::ISap-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE;

/* Symbol: _ZN5radio29setFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::setFacilityLockForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio29setFacilityLockForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN12RilSapSocket12SocketExistsEPKc */
/* Demangled: RilSapSocket::SocketExists(char const*) */
int _ZN12RilSapSocket12SocketExistsEPKc(void);

/* Symbol: _ZN10mtkRadioEx12onSimMissingEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimMissing(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx12onSimMissingEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl15readUPBSneEntryEiii */
/* Demangled: MtkRadioExImpl::readUPBSneEntry(int, int, int) */
int _ZN14MtkRadioExImpl15readUPBSneEntryEiii(void);

/* Symbol: _ZN10mtkRadioEx17onWifiPdnActivateEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onWifiPdnActivate(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17onWifiPdnActivateEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl22sendSubsidyLockRequestEiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: MtkRadioExImpl::sendSubsidyLockRequest(int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN14MtkRadioExImpl22sendSubsidyLockRequestEiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN14MtkRadioExImpl24getPlmnNameFromSE13TableEiii */
/* Demangled: MtkRadioExImpl::getPlmnNameFromSE13Table(int, int, int) */
int _ZN14MtkRadioExImpl24getPlmnNameFromSE13TableEiii(void);

/* Symbol: _ZN9RadioImpl22getCdmaBroadcastConfigEi */
/* Demangled: RadioImpl::getCdmaBroadcastConfig(int) */
int _ZN9RadioImpl22getCdmaBroadcastConfigEi(void);

/* Symbol: _ZN10mtkRadioEx17disableNRResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::disableNRResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx17disableNRResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio24hangupConnectionResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::hangupConnectionResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio24hangupConnectionResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN14MtkRadioExImpl31acknowledgeLastIncomingGsmSmsExEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE */
/* Demangled: MtkRadioExImpl::acknowledgeLastIncomingGsmSmsEx(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
int _ZN14MtkRadioExImpl31acknowledgeLastIncomingGsmSmsExEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void);

/* Symbol: _ZN10mtkRadioEx23sendSubsidyLockResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::sendSubsidyLockResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23sendSubsidyLockResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24getPOLCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::getPOLCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24getPOLCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx24onSimCommonSlotNoChangedEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::onSimCommonSlotNoChanged(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx24onSimCommonSlotNoChangedEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb */
/* Demangled: RadioImpl::setDataProfile(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::DataProfileInfo> const&, bool) */
int _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb(void);

/* Symbol: _ZN9RadioImpl25getVoiceRegistrationStateEi */
/* Demangled: RadioImpl::getVoiceRegistrationState(int) */
int _ZN9RadioImpl25getVoiceRegistrationStateEi(void);

/* Symbol: _ZN5radio32getPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getPreferredVoicePrivacyResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio32getPreferredVoicePrivacyResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN10mtkRadioEx23querySsacStatusResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::querySsacStatusResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx23querySsacStatusResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26supplyIccPinForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplyIccPinForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26supplyIccPinForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27supplyIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplyIccPin2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27supplyIccPin2ForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl24getCdmaRoamingPreferenceEi */
/* Demangled: RadioImpl::getCdmaRoamingPreference(int) */
int _ZN9RadioImpl24getCdmaRoamingPreferenceEi(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
int __ubsan_handle_nonnull_arg_minimal_abort(void);

/* Symbol: _ZN10mtkRadioEx19cdmaCallAcceptedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::cdmaCallAcceptedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx19cdmaCallAcceptedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio22getBarringInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getBarringInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio22getBarringInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE */
/* Demangled: RadioImpl::sendSMSExpectMore(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
int _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_56IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_5::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_56IRadioE;

/* Symbol: RIL_requestTimedCallback */
/* Demangled: RIL_requestTimedCallback */
int RIL_requestTimedCallback(void);

/* Symbol: _ZN10mtkRadioEx29setCallAdditionalInfoResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setCallAdditionalInfoResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx29setCallAdditionalInfoResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN11radioConfig26setSimSlotsMappingResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radioConfig::setSimSlotsMappingResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN11radioConfig26setSimSlotsMappingResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio27supplyIccPuk2ForAppResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::supplyIccPuk2ForAppResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio27supplyIccPuk2ForAppResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN7android31checkAndDequeueRequestInfoIfAckEPNS_11RequestInfoEb */
/* Demangled: android::checkAndDequeueRequestInfoIfAck(android::RequestInfo*, bool) */
int _ZN7android31checkAndDequeueRequestInfoIfAckEPNS_11RequestInfoEb(void);

/* Symbol: _Z31convertRilCellInfoListToHal_1_2PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_28CellInfoEEE */
/* Demangled: convertRilCellInfoListToHal_1_2(void const*, unsigned long, android::hardware::hidl_vec<android::hardware::radio::V1_2::CellInfo>&) */
int _Z31convertRilCellInfoListToHal_1_2PKvmRN7android8hardware8hidl_vecINS2_5radio4V1_28CellInfoEEE(void);

/* Symbol: _ZN14MtkRadioExImpl18deactivateUiccCardEi */
/* Demangled: MtkRadioExImpl::deactivateUiccCard(int) */
int _ZN14MtkRadioExImpl18deactivateUiccCardEi(void);

/* Symbol: _ZN10mtkRadioEx32setImsBearerNotificationResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::setImsBearerNotificationResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx32setImsBearerNotificationResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN5radio26getRadioCapabilityResponseEjjii9RIL_ErrnoPKvm */
/* Demangled: radio::getRadioCapabilityResponse(unsigned int, unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN5radio26getRadioCapabilityResponseEjjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::setSmscAddress(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: __ubsan_handle_add_overflow_minimal */
/* Demangled: __ubsan_handle_add_overflow_minimal */
int __ubsan_handle_add_overflow_minimal(void);

/* Symbol: _ZN10mtkRadioEx21imsCfgConfigLoadedIndEjii9RIL_ErrnoPKvm */
/* Demangled: mtkRadioEx::imsCfgConfigLoadedInd(unsigned int, int, int, RIL_Errno, void const*, unsigned long) */
int _ZN10mtkRadioEx21imsCfgConfigLoadedIndEjii9RIL_ErrnoPKvm(void);

/* Symbol: _ZN9RadioImpl17setupDataCall_1_4EiN7android8hardware5radio4V1_413AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_ */
/* Demangled: RadioImpl::setupDataCall_1_4(int, android::hardware::radio::V1_4::AccessNetwork, android::hardware::radio::V1_4::DataProfileInfo const&, bool, android::hardware::radio::V1_2::DataRequestReason, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN9RadioImpl17setupDataCall_1_4EiN7android8hardware5radio4V1_413AccessNetworkERKNS3_15DataProfileInfoEbNS2_4V1_217DataRequestReasonERKNS1_8hidl_vecINS1_11hidl_stringEEESE_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBRILFUSION_H */
