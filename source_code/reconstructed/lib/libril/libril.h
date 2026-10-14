/*
 * Reverse-Engineered ABI Specification for: libril.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libril.so
 */

#ifndef BEGONIA_RE_LIBRIL_H
#define BEGONIA_RE_LIBRIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE */
/* Demangled: convertRilCdmaSignalInfoRecordToHal(RIL_CDMA_SignalInfoRecord*, android::hardware::radio::V1_0::CdmaSignalInfoRecord&) */
int _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE(void);

/* Symbol: _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE */
/* Demangled: RadioImpl::nvResetConfig(int, android::hardware::radio::V1_0::ResetNvType) */
int _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE(void);

/* Symbol: _ZN5radio19srvccStateNotifyIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::srvccStateNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19srvccStateNotifyIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26setRadioCapabilityResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setRadioCapabilityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26setRadioCapabilityResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl25setGsmBroadcastActivationEib */
/* Demangled: RadioImpl::setGsmBroadcastActivation(int, bool) */
int _ZN9RadioImpl25setGsmBroadcastActivationEib(void);

/* Symbol: _ZN9RadioImpl32hangupForegroundResumeBackgroundEi */
/* Demangled: RadioImpl::hangupForegroundResumeBackground(int) */
int _ZN9RadioImpl32hangupForegroundResumeBackgroundEi(void);

/* Symbol: _ZN5radio32getPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getPreferredVoicePrivacyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32getPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android16s_wakelock_countE */
/* Demangled: android::s_wakelock_count */
extern void* _ZN7android16s_wakelock_countE;

/* Symbol: _Z23convertHexStringToBytesPvj */
/* Demangled: convertHexStringToBytes(void*, unsigned int) */
int _Z23convertHexStringToBytesPvj(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal */
/* Demangled: __ubsan_handle_sub_overflow_minimal */
int __ubsan_handle_sub_overflow_minimal(void);

/* Symbol: _ZN5radio29setGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setGsmBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29setGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28getLastCallFailCauseResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getLastCallFailCauseResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28getLastCallFailCauseResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: RIL_onRequestComplete */
/* Demangled: RIL_onRequestComplete */
int RIL_onRequestComplete(void);

/* Symbol: _ZN5radio12dialResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::dialResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio12dialResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29enterEmergencyCallbackModeIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::enterEmergencyCallbackModeInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29enterEmergencyCallbackModeIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33requestIsimAuthenticationResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::requestIsimAuthenticationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33requestIsimAuthenticationResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33sendTerminalResponseToSimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendTerminalResponseToSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33sendTerminalResponseToSimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio40handleStkCallSetupRequestFromSimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::handleStkCallSetupRequestFromSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio40handleStkCallSetupRequestFromSimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z22freeSetDataProfileDataI23RIL_DataProfileInfo_v15EviPT_PS2_iz */
/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo_v15>(int, RIL_DataProfileInfo_v15*, RIL_DataProfileInfo_v15**, int, ...) */
int _Z22freeSetDataProfileDataI23RIL_DataProfileInfo_v15EviPT_PS2_iz(void);

/* Symbol: pb_decode_delimited */
/* Demangled: pb_decode_delimited */
int pb_decode_delimited(void);

/* Symbol: requestToString */
/* Demangled: requestToString */
int requestToString(void);

/* Symbol: _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno */
/* Demangled: sendErrorResponse(android::RequestInfo*, RIL_Errno) */
int _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno(void);

/* Symbol: _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc */
/* Demangled: fillCellIdentityFromVoiceRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
int _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void);

/* Symbol: _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE */
/* Demangled: RadioImpl::acknowledgeLastIncomingGsmSms(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
int _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void);

/* Symbol: _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response */
/* Demangled: convertTransferCardReaderStatusResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response) */
int _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response(void);

/* Symbol: pb_decode_svarint */
/* Demangled: pb_decode_svarint */
int pb_decode_svarint(void);

/* Symbol: _ZN5radio15setMuteResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setMuteResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15setMuteResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22sendRequestRawResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendRequestRawResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22sendRequestRawResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket13getSocketByIdE13RIL_SOCKET_ID */
/* Demangled: RilSapSocket::getSocketById(RIL_SOCKET_ID) */
int _ZN12RilSapSocket13getSocketByIdE13RIL_SOCKET_ID(void);

/* Symbol: _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE */
/* Demangled: RadioImpl::sendSMSExpectMore(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
int _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void);

/* Symbol: _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE */
/* Demangled: RadioImpl::nvWriteItem(int, android::hardware::radio::V1_0::NvWriteItem const&) */
int _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE(void);

/* Symbol: _ZN9RadioImpl13setRadioPowerEib */
/* Demangled: RadioImpl::setRadioPower(int, bool) */
int _ZN9RadioImpl13setRadioPowerEib(void);

/* Symbol: _ZN9RadioImpl14setDataAllowedEib */
/* Demangled: RadioImpl::setDataAllowed(int, bool) */
int _ZN9RadioImpl14setDataAllowedEib(void);

/* Symbol: _ZN9RadioImpl20explicitCallTransferEi */
/* Demangled: RadioImpl::explicitCallTransfer(int) */
int _ZN9RadioImpl20explicitCallTransferEi(void);

/* Symbol: _ZN9RadioImpl23responseAcknowledgementEv */
/* Demangled: RadioImpl::responseAcknowledgement() */
int _ZN9RadioImpl23responseAcknowledgementEv(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal */
/* Demangled: __ubsan_handle_negate_overflow_minimal */
int __ubsan_handle_negate_overflow_minimal(void);

/* Symbol: _Z15dispatchStringsiiibiz */
/* Demangled: dispatchStrings(int, int, int, bool, int, ...) */
int _Z15dispatchStringsiiibiz(void);

/* Symbol: _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE */
/* Demangled: RadioImpl::writeSmsToSim(int, android::hardware::radio::V1_0::SmsWriteArgs const&) */
int _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE(void);

/* Symbol: _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::supplyIccPukForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: pb_encode_delimited */
/* Demangled: pb_encode_delimited */
int pb_encode_delimited(void);

/* Symbol: RIL_setcallbacks */
/* Demangled: RIL_setcallbacks */
int RIL_setcallbacks(void);

/* Symbol: _ZN5radio24startNetworkScanResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::startNetworkScanResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24startNetworkScanResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33reportStkServiceIsRunningResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::reportStkServiceIsRunningResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33reportStkServiceIsRunningResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio18conferenceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::conferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18conferenceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28stkCallControlAlphaNotifyIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::stkCallControlAlphaNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28stkCallControlAlphaNotifyIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio35iccTransmitApduBasicChannelResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::iccTransmitApduBasicChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio35iccTransmitApduBasicChannelResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio15setClirResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setClirResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15setClirResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28carrierInfoForImsiEncryptionEiii9RIL_ErrnoPvj */
/* Demangled: radio::carrierInfoForImsiEncryption(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28carrierInfoForImsiEncryptionEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE7enqueueEPS1_ */
/* Demangled: Ril_queue<RilSapSocket::SapSocketRequest>::enqueue(RilSapSocket::SapSocketRequest*) */
int _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE7enqueueEPS1_(void);

/* Symbol: _ZN9RadioImpl18setLocationUpdatesEib */
/* Demangled: RadioImpl::setLocationUpdates(int, bool) */
int _ZN9RadioImpl18setLocationUpdatesEib(void);

/* Symbol: pb_close_string_substream */
/* Demangled: pb_close_string_substream */
int pb_close_string_substream(void);

/* Symbol: _Z13ril_event_setP9ril_eventibPFvisPvES1_ */
/* Demangled: ril_event_set(ril_event*, int, bool, void (*)(int, short, void*), void*) */
int _Z13ril_event_setP9ril_eventibPFvisPvES1_(void);

/* Symbol: _ZN5radio16sendUssdResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendUssdResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio16sendUssdResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio9onUssdIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::onUssdInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio9onUssdIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE */
/* Demangled: RadioImpl::setPreferredNetworkType(int, android::hardware::radio::V1_0::PreferredNetworkType) */
int _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE(void);

/* Symbol: _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib */
/* Demangled: RadioImpl::handleStkCallSetupRequestFromSim(int, bool) */
int _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib(void);

/* Symbol: _ZN5radio19nitzTimeReceivedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::nitzTimeReceivedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19nitzTimeReceivedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio24currentSignalStrengthIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::currentSignalStrengthInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24currentSignalStrengthIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio39switchWaitingOrHoldingAndActiveResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::switchWaitingOrHoldingAndActiveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio39switchWaitingOrHoldingAndActiveResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSEPS5_ */
/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse>::operator=(android::hardware::radio::deprecated::V1_0::IOemHookResponse*) */
int _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSEPS5_(void);

/* Symbol: _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE */
/* Demangled: convertRilDataCallToHal(RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&) */
int _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE(void);

/* Symbol: _ZN7android2spI11OemHookImplEaSEPS1_ */
/* Demangled: android::sp<OemHookImpl>::operator=(OemHookImpl*) */
int _ZN7android2spI11OemHookImplEaSEPS1_(void);

/* Symbol: _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb */
/* Demangled: RadioImpl::sendDeviceState(int, android::hardware::radio::V1_0::DeviceStateType, bool) */
int _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb(void);

/* Symbol: nitzTimeReceived */
/* Demangled: nitzTimeReceived */
extern void* nitzTimeReceived;

/* Symbol: rilc_thread_pool */
/* Demangled: rilc_thread_pool */
int rilc_thread_pool(void);

/* Symbol: _ZN7SapImpl8powerReqEib */
/* Demangled: SapImpl::powerReq(int, bool) */
int _ZN7SapImpl8powerReqEib(void);

/* Symbol: _ZN5radio18acknowledgeRequestEii */
/* Demangled: radio::acknowledgeRequest(int, int) */
int _ZN5radio18acknowledgeRequestEii(void);

/* Symbol: _ZN5radio26setAllowedCarriersResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setAllowedCarriersResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26setAllowedCarriersResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio37iccTransmitApduLogicalChannelResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::iccTransmitApduLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio37iccTransmitApduLogicalChannelResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: __ubsan_handle_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
int __ubsan_handle_out_of_bounds_minimal_abort(void);

/* Symbol: _ZN5radio11callRingIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::callRingInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio11callRingIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio18cdmaCallWaitingIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaCallWaitingInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18cdmaCallWaitingIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl19setCellInfoListRateEii */
/* Demangled: RadioImpl::setCellInfoListRate(int, int) */
int _ZN9RadioImpl19setCellInfoListRateEii(void);

/* Symbol: _ZN9RadioImpl23getPreferredNetworkTypeEi */
/* Demangled: RadioImpl::getPreferredNetworkType(int) */
int _ZN9RadioImpl23getPreferredNetworkTypeEi(void);

/* Symbol: _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::supplyNetworkDepersonalization(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: pb_field_iter_next */
/* Demangled: pb_field_iter_next */
int pb_field_iter_next(void);

/* Symbol: __ubsan_handle_function_type_mismatch_minimal */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
int __ubsan_handle_function_type_mismatch_minimal(void);

/* Symbol: _ZN5radio16suppSvcNotifyIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::suppSvcNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio16suppSvcNotifyIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22setCallForwardResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCallForwardResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22setCallForwardResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE */
/* Demangled: RadioImpl::setCarrierInfoForImsiEncryption(int, android::hardware::radio::V1_1::ImsiEncryptionInfo const&) */
int _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE(void);

/* Symbol: _ZN9RadioImpl18getAllowedCarriersEi */
/* Demangled: RadioImpl::getAllowedCarriers(int) */
int _ZN9RadioImpl18getAllowedCarriersEi(void);

/* Symbol: RIL_requestTimedCallback */
/* Demangled: RIL_requestTimedCallback */
int RIL_requestTimedCallback(void);

/* Symbol: _ZN5radio22stkProactiveCommandIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::stkProactiveCommandInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22stkProactiveCommandIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33getVoiceRegistrationStateResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getVoiceRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33getVoiceRegistrationStateResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio21sendBurstDtmfResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendBurstDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21sendBurstDtmfResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: failCauseToString */
/* Demangled: failCauseToString */
int failCauseToString(void);

/* Symbol: _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii */
/* Demangled: RadioImpl::sendBurstDtmf(int, android::hardware::hidl_string const&, int, int) */
int _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii(void);

/* Symbol: _ZN9RadioImpl24getPreferredVoicePrivacyEi */
/* Demangled: RadioImpl::getPreferredVoicePrivacy(int) */
int _ZN9RadioImpl24getPreferredVoicePrivacyEi(void);

/* Symbol: _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi */
/* Demangled: RadioImpl::switchWaitingOrHoldingAndActive(int) */
int _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi(void);

/* Symbol: __ubsan_handle_nullability_arg_minimal_abort */
/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
int __ubsan_handle_nullability_arg_minimal_abort(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z20memsetAndFreeStringsiz */
/* Demangled: memsetAndFreeStrings(int, ...) */
int _Z20memsetAndFreeStringsiz(void);

/* Symbol: _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::requestIccSimAuthentication(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN5radio22setCallWaitingResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCallWaitingResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22setCallWaitingResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio31getVoiceRadioTechnologyResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getVoiceRadioTechnologyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio31getVoiceRadioTechnologyResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket */
/* Demangled: sap::processResponse(_MsgHeader*, RilSapSocket*) */
int _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket(void);

/* Symbol: callStateToString */
/* Demangled: callStateToString */
int callStateToString(void);

/* Symbol: _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb */
/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*, bool) */
int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb(void);

/* Symbol: _ZN9RadioImpl15requestShutdownEi */
/* Demangled: RadioImpl::requestShutdown(int) */
int _ZN9RadioImpl15requestShutdownEi(void);

/* Symbol: __ubsan_handle_nonnull_return_minimal */
/* Demangled: __ubsan_handle_nonnull_return_minimal */
int __ubsan_handle_nonnull_return_minimal(void);

/* Symbol: _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE */
/* Demangled: RadioImpl::setRadioCapability(int, android::hardware::radio::V1_0::RadioCapability const&) */
int _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE(void);

/* Symbol: _ZN7android2spI7SapImplEaSEPS1_ */
/* Demangled: android::sp<SapImpl>::operator=(SapImpl*) */
int _ZN7android2spI7SapImplEaSEPS1_(void);

/* Symbol: pb_decode_fixed32 */
/* Demangled: pb_decode_fixed32 */
int pb_decode_fixed32(void);

/* Symbol: _ZN7android18RIL_getServiceNameEv */
/* Demangled: android::RIL_getServiceName() */
int _ZN7android18RIL_getServiceNameEv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN9RadioImpl15getCellInfoListEi */
/* Demangled: RadioImpl::getCellInfoList(int) */
int _ZN9RadioImpl15getCellInfoListEi(void);

/* Symbol: _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE */
/* Demangled: RadioImpl::setGsmBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::GsmBroadcastSmsConfigInfo> const&) */
int _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE(void);

/* Symbol: _Z10getSapImplP12RilSapSocket */
/* Demangled: getSapImpl(RilSapSocket*) */
int _Z10getSapImplP12RilSapSocket(void);

/* Symbol: pb_decode_varint32 */
/* Demangled: pb_decode_varint32 */
int pb_decode_varint32(void);

/* Symbol: _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16 */
/* Demangled: fillCellIdentityResponse(android::hardware::radio::V1_0::CellIdentity&, RIL_CellIdentity_v16&) */
int _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16(void);

/* Symbol: _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb */
/* Demangled: RadioImpl::setDataProfile(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::DataProfileInfo> const&, bool) */
int _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb(void);

/* Symbol: __ubsan_handle_divrem_overflow_minimal_abort */
/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
int __ubsan_handle_divrem_overflow_minimal_abort(void);

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal_abort */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
int __ubsan_handle_vla_bound_not_positive_minimal_abort(void);

/* Symbol: _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::acknowledgeLastIncomingCdmaSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEOS5_ */
/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioResponse>::operator=(android::sp<android::hardware::radio::V1_1::IRadioResponse>&&) */
int _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEOS5_(void);

/* Symbol: _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb */
/* Demangled: RadioImpl::setInitialAttachApn(int, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool) */
int _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: pb_field_iter_begin */
/* Demangled: pb_field_iter_begin */
int pb_field_iter_begin(void);

/* Symbol: _ZN3sap15registerServiceEPK18RIL_RadioFunctions */
/* Demangled: sap::registerService(RIL_RadioFunctions const*) */
int _ZN3sap15registerServiceEPK18RIL_RadioFunctions(void);

/* Symbol: _Z30convertRilRadioCapabilityToHalPvjRN7android8hardware5radio4V1_015RadioCapabilityE */
/* Demangled: convertRilRadioCapabilityToHal(void*, unsigned int, android::hardware::radio::V1_0::RadioCapability&) */
int _Z30convertRilRadioCapabilityToHalPvjRN7android8hardware5radio4V1_015RadioCapabilityE(void);

/* Symbol: _Z30getCellInfoTypeRadioTechnologyPc */
/* Demangled: getCellInfoTypeRadioTechnology(char*) */
int _Z30getCellInfoTypeRadioTechnologyPc(void);

/* Symbol: _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response */
/* Demangled: convertPowerResponseProtoToHal(_RIL_SIM_SAP_POWER_RSP_Response) */
int _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal */
/* Demangled: __ubsan_handle_mul_overflow_minimal */
int __ubsan_handle_mul_overflow_minimal(void);

/* Symbol: _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: dispatchRaw(int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN9RadioImpl21getAvailableBandModesEi */
/* Demangled: RadioImpl::getAvailableBandModes(int) */
int _ZN9RadioImpl21getAvailableBandModesEi(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal */
/* Demangled: __ubsan_handle_type_mismatch_minimal */
int __ubsan_handle_type_mismatch_minimal(void);

/* Symbol: _ZN11OemHookImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio10deprecated4V1_016IOemHookResponseEEERKNS1_INS5_18IOemHookIndicationEEE */
/* Demangled: OemHookImpl::setResponseFunctions(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse> const&, android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication> const&) */
int _ZN11OemHookImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio10deprecated4V1_016IOemHookResponseEEERKNS1_INS5_18IOemHookIndicationEEE(void);

/* Symbol: pb_decode_delimited_noinit */
/* Demangled: pb_decode_delimited_noinit */
int pb_decode_delimited_noinit(void);

/* Symbol: pb_encode_tag_for_field */
/* Demangled: pb_encode_tag_for_field */
int pb_encode_tag_for_field(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal */
/* Demangled: __ubsan_handle_load_invalid_value_minimal */
int __ubsan_handle_load_invalid_value_minimal(void);

/* Symbol: _ZN5radio22networkStateChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::networkStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22networkStateChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio23deleteSmsOnRuimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::deleteSmsOnRuimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23deleteSmsOnRuimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE */
/* Demangled: RadioImpl::startNetworkScan(int, android::hardware::radio::V1_1::NetworkScanRequest const&) */
int _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE(void);

/* Symbol: _ZN9RadioImpl25getCdmaSubscriptionSourceEi */
/* Demangled: RadioImpl::getCdmaSubscriptionSource(int) */
int _ZN9RadioImpl25getCdmaSubscriptionSourceEi(void);

/* Symbol: _ZN5radio18nvReadItemResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::nvReadItemResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18nvReadItemResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33setGsmBroadcastActivationResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setGsmBroadcastActivationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33setGsmBroadcastActivationResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl18separateConnectionEii */
/* Demangled: RadioImpl::separateConnection(int, int) */
int _ZN9RadioImpl18separateConnectionEii(void);

/* Symbol: _ZN5radio16stkSessionEndIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::stkSessionEndInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio16stkSessionEndIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22deleteSmsOnSimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::deleteSmsOnSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22deleteSmsOnSimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26supplyIccPukForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::supplyIccPukForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26supplyIccPukForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio31getImsRegistrationStateResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getImsRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio31getImsRegistrationStateResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android11s_callbacksE */
/* Demangled: android::s_callbacks */
extern void* _ZN7android11s_callbacksE;

/* Symbol: _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSERKS6_ */
/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication>::operator=(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication> const&) */
int _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSERKS6_(void);

/* Symbol: _ZN9RadioImpl26setCdmaBroadcastActivationEib */
/* Demangled: RadioImpl::setCdmaBroadcastActivation(int, bool) */
int _ZN9RadioImpl26setCdmaBroadcastActivationEib(void);

/* Symbol: _ZN9RadioImpl8stopDtmfEi */
/* Demangled: RadioImpl::stopDtmf(int) */
int _ZN9RadioImpl8stopDtmfEi(void);

/* Symbol: __ubsan_handle_divrem_overflow_minimal */
/* Demangled: __ubsan_handle_divrem_overflow_minimal */
int __ubsan_handle_divrem_overflow_minimal(void);

/* Symbol: _ZN5radio22getCallWaitingResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCallWaitingResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22getCallWaitingResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29getGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getGsmBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29getGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::changeIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN7SapImpl15createMsgHeaderE6_MsgIdi */
/* Demangled: SapImpl::createMsgHeader(_MsgId, int) */
int _ZN7SapImpl15createMsgHeaderE6_MsgIdi(void);

/* Symbol: pb_decode_noinit */
/* Demangled: pb_decode_noinit */
int pb_decode_noinit(void);

/* Symbol: _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE */
/* Demangled: RadioImpl::iccIOForApp(int, android::hardware::radio::V1_0::IccIo const&) */
int _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE(void);

/* Symbol: _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE */
/* Demangled: construction vtable for android::hardware::radio::V1_0::ISap-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE;

/* Symbol: _ZN5radio23requestShutdownResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::requestShutdownResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23requestShutdownResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSEPS4_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioResponse>::operator=(android::hardware::radio::V1_0::IRadioResponse*) */
int _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSEPS4_(void);

/* Symbol: _ZN9RadioImpl6hangupEii */
/* Demangled: RadioImpl::hangup(int, int) */
int _ZN9RadioImpl6hangupEii(void);

/* Symbol: _ZN5radio20networkScanResultIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::networkScanResultInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio20networkScanResultIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio23getDataCallListResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getDataCallListResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23getDataCallListResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal_abort */
/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
int __ubsan_handle_implicit_conversion_minimal_abort(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEOS5_ */
/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioIndication>::operator=(android::sp<android::hardware::radio::V1_1::IRadioIndication>&&) */
int _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEOS5_(void);

/* Symbol: _ZN9RadioImpl15getDataCallListEi */
/* Demangled: RadioImpl::getDataCallList(int) */
int _ZN9RadioImpl15getDataCallListEi(void);

/* Symbol: _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE */
/* Demangled: RadioImpl::sendCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
int _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void);

/* Symbol: _ZN9RadioImpl15setSimCardPowerEib */
/* Demangled: RadioImpl::setSimCardPower(int, bool) */
int _ZN9RadioImpl15setSimCardPowerEib(void);

/* Symbol: _ZN12RilSapSocket9uimRilEnvE */
/* Demangled: RilSapSocket::uimRilEnv */
extern void* _ZN12RilSapSocket9uimRilEnvE;

/* Symbol: _ZN5radio22setDataProfileResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setDataProfileResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22setDataProfileResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26sendRequestStringsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendRequestStringsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26sendRequestStringsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader */
/* Demangled: RilSapSocket::dispatchRequest(_MsgHeader*) */
int _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader(void);

/* Symbol: _ZTV7SapImpl */
/* Demangled: vtable for SapImpl */
extern void* _ZTV7SapImpl;

/* Symbol: __ubsan_handle_alignment_assumption_minimal_abort */
/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
int __ubsan_handle_alignment_assumption_minimal_abort(void);

/* Symbol: _ZN5radio17cdmaPrlChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaPrlChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio17cdmaPrlChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio19nvWriteItemResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::nvWriteItemResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19nvWriteItemResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio21writeSmsToSimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::writeSmsToSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21writeSmsToSimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio27setInitialAttachApnResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setInitialAttachApnResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27setInitialAttachApnResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z17checkReturnStatusiRN7android8hardware6ReturnIvEEb */
/* Demangled: checkReturnStatus(int, android::hardware::Return<void>&, bool) */
int _Z17checkReturnStatusiRN7android8hardware6ReturnIvEEb(void);

/* Symbol: _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE */
/* Demangled: RadioImpl::setResponseFunctions(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&, android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
int _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE(void);

/* Symbol: _ZTT7SapImpl */
/* Demangled: VTT for SapImpl */
extern void* _ZTT7SapImpl;

/* Symbol: _ZN5radio24hardwareConfigChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::hardwareConfigChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24hardwareConfigChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26getBasebandVersionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getBasebandVersionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26getBasebandVersionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28getCallForwardStatusResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCallForwardStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28getCallForwardStatusResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl15getCurrentCallsEi */
/* Demangled: RadioImpl::getCurrentCalls(int) */
int _ZN9RadioImpl15getCurrentCallsEi(void);

/* Symbol: _ZN5radio27setCellInfoListRateResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCellInfoListRateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27setCellInfoListRateResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio32getCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCdmaRoamingPreferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32getCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z31convertIntToRadioIndicationTypei */
/* Demangled: convertIntToRadioIndicationType(int) */
int _Z31convertIntToRadioIndicationTypei(void);

/* Symbol: _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE */
/* Demangled: RadioImpl::setAllowedCarriers(int, bool, android::hardware::radio::V1_0::CarrierRestrictions const&) */
int _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE(void);

/* Symbol: _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz */
/* Demangled: SapImpl::sendFailedResponse(_MsgId, int, int, ...) */
int _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz(void);

/* Symbol: _ZN5radio14newSmsOnSimIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::newSmsOnSimInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio14newSmsOnSimIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio17stkEventNotifyIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::stkEventNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio17stkEventNotifyIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl24setPreferredVoicePrivacyEib */
/* Demangled: RadioImpl::setPreferredVoicePrivacy(int, bool) */
int _ZN9RadioImpl24setPreferredVoicePrivacyEib(void);

/* Symbol: _ZN5radio16sendDtmfResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio16sendDtmfResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22dataCallListChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::dataCallListChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22dataCallListChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28exitEmergencyCallbackModeIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::exitEmergencyCallbackModeInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28exitEmergencyCallbackModeIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29iccOpenLogicalChannelResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::iccOpenLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29iccOpenLogicalChannelResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio39setCarrierInfoForImsiEncryptionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCarrierInfoForImsiEncryptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio39setCarrierInfoForImsiEncryptionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZTV12RilSapSocket */
/* Demangled: vtable for RilSapSocket */
extern void* _ZTV12RilSapSocket;

/* Symbol: _ZN9RadioImpl15stopNetworkScanEi */
/* Demangled: RadioImpl::stopNetworkScan(int) */
int _ZN9RadioImpl15stopNetworkScanEi(void);

/* Symbol: _ZN9RadioImpl23getImsRegistrationStateEi */
/* Demangled: RadioImpl::getImsRegistrationState(int) */
int _ZN9RadioImpl23getImsRegistrationStateEi(void);

/* Symbol: _ZN12RilSapSocket15addSocketToListEPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::addSocketToList(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
int _ZN12RilSapSocket15addSocketToListEPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void);

/* Symbol: _ZN9RadioImpl10conferenceEi */
/* Demangled: RadioImpl::conference(int) */
int _ZN9RadioImpl10conferenceEi(void);

/* Symbol: _ZN5radio22startKeepaliveResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::startKeepaliveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22startKeepaliveResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl21getGsmBroadcastConfigEi */
/* Demangled: RadioImpl::getGsmBroadcastConfig(int) */
int _ZN9RadioImpl21getGsmBroadcastConfigEi(void);

/* Symbol: _ZN9RadioImpl7getClirEi */
/* Demangled: RadioImpl::getClir(int) */
int _ZN9RadioImpl7getClirEi(void);

/* Symbol: _ZN5radio19iccIOForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::iccIOForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19iccIOForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio35onSupplementaryServiceIndicationIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::onSupplementaryServiceIndicationInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio35onSupplementaryServiceIndicationIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z12dispatchVoidiii */
/* Demangled: dispatchVoid(int, int, int) */
int _Z12dispatchVoidiii(void);

/* Symbol: _ZN9RadioImpl14getCallWaitingEii */
/* Demangled: RadioImpl::getCallWaiting(int, int) */
int _ZN9RadioImpl14getCallWaitingEii(void);

/* Symbol: _ZN9RadioImpl17getSignalStrengthEi */
/* Demangled: RadioImpl::getSignalStrength(int) */
int _ZN9RadioImpl17getSignalStrengthEi(void);

/* Symbol: _ZN9RadioImpl7setClirEii */
/* Demangled: RadioImpl::setClir(int, int) */
int _ZN9RadioImpl7setClirEii(void);

/* Symbol: _ZN7SapImpl11resetSimReqEi */
/* Demangled: SapImpl::resetSimReq(int) */
int _ZN7SapImpl11resetSimReqEi(void);

/* Symbol: RIL_onUnsolicitedResponse */
/* Demangled: RIL_onUnsolicitedResponse */
int RIL_onUnsolicitedResponse(void);

/* Symbol: _ZN5radio16stopDtmfResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::stopDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio16stopDtmfResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: RIL_register */
/* Demangled: RIL_register */
int RIL_register(void);

/* Symbol: _ZN5radio19getOperatorResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getOperatorResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19getOperatorResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio24hangupConnectionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::hangupConnectionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24hangupConnectionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::acknowledgeLastIncomingGsmSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl19getCDMASubscriptionEi */
/* Demangled: RadioImpl::getCDMASubscription(int) */
int _ZN9RadioImpl19getCDMASubscriptionEi(void);

/* Symbol: pb_encode_tag */
/* Demangled: pb_encode_tag */
int pb_encode_tag(void);

/* Symbol: _ZN5radio20sendEnvelopeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendEnvelopeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio20sendEnvelopeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::supplyIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSEPS4_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::ISapCallback>::operator=(android::hardware::radio::V1_0::ISapCallback*) */
int _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSEPS4_(void);

/* Symbol: _ZN5radio26separateConnectionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::separateConnectionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26separateConnectionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE */
/* Demangled: dispatchImsGsmSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
int _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void);

/* Symbol: _ZN9RadioImpl10rejectCallEi */
/* Demangled: RadioImpl::rejectCall(int) */
int _ZN9RadioImpl10rejectCallEi(void);

/* Symbol: _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType */
/* Demangled: processResponse(_MsgHeader*, RilSapSocket*, _MsgType) */
int _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal_abort */
/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
int __ubsan_handle_load_invalid_value_minimal_abort(void);

/* Symbol: _ZN5radio18setTTYModeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setTTYModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18setTTYModeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio34setCdmaBroadcastActivationResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCdmaBroadcastActivationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio34setCdmaBroadcastActivationResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE */
/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*) */
int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE(void);

/* Symbol: _Z26convertRilLceDataInfoToHalPvjRN7android8hardware5radio4V1_011LceDataInfoE */
/* Demangled: convertRilLceDataInfoToHal(void*, unsigned int, android::hardware::radio::V1_0::LceDataInfo&) */
int _Z26convertRilLceDataInfoToHalPvjRN7android8hardware5radio4V1_011LceDataInfoE(void);

/* Symbol: _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb */
/* Demangled: RadioImpl::setupDataCall(int, android::hardware::radio::V1_0::RadioTechnology, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool) */
int _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb(void);

/* Symbol: _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::acknowledgeIncomingGsmSmsWithPdu(int, bool, android::hardware::hidl_string const&) */
int _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE(void);

/* Symbol: pb_decode_nullterminated */
/* Demangled: pb_decode_nullterminated */
int pb_decode_nullterminated(void);

/* Symbol: _ZN5radio10lceDataIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::lceDataInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio10lceDataIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio21stopKeepaliveResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::stopKeepaliveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21stopKeepaliveResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl11pullLceDataEi */
/* Demangled: RadioImpl::pullLceData(int) */
int _ZN9RadioImpl11pullLceDataEi(void);

/* Symbol: _ZN5radio22setDataAllowedResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setDataAllowedResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22setDataAllowedResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z34convertResponseHexStringEntryToIntPPcii */
/* Demangled: convertResponseHexStringEntryToInt(char**, int, int) */
int _Z34convertResponseHexStringEntryToIntPPcii(void);

/* Symbol: _ZN7android2spI9RadioImplEaSEPS1_ */
/* Demangled: android::sp<RadioImpl>::operator=(RadioImpl*) */
int _ZN7android2spI9RadioImplEaSEPS1_(void);

/* Symbol: _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendEnvelope(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::requestIsimAuthentication(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: RadioImpl::iccTransmitApduLogicalChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
int _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _ZN9RadioImpl7getMuteEi */
/* Demangled: RadioImpl::getMute(int) */
int _ZN9RadioImpl7getMuteEi(void);

/* Symbol: _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __ubsan_handle_add_overflow_minimal */
/* Demangled: __ubsan_handle_add_overflow_minimal */
int __ubsan_handle_add_overflow_minimal(void);

/* Symbol: RIL_startEventLoop */
/* Demangled: RIL_startEventLoop */
int RIL_startEventLoop(void);

/* Symbol: _ZN9RadioImpl15startLceServiceEiib */
/* Demangled: RadioImpl::startLceService(int, int, bool) */
int _ZN9RadioImpl15startLceServiceEiib(void);

/* Symbol: __ubsan_handle_nullability_return_minimal */
/* Demangled: __ubsan_handle_nullability_return_minimal */
int __ubsan_handle_nullability_return_minimal(void);

/* Symbol: _ZN5radio26setLocationUpdatesResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setLocationUpdatesResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26setLocationUpdatesResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29reportSmsMemoryStatusResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::reportSmsMemoryStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29reportSmsMemoryStatusResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket12SocketExistsEPKc */
/* Demangled: RilSapSocket::SocketExists(char const*) */
int _ZN12RilSapSocket12SocketExistsEPKc(void);

/* Symbol: _Z12dispatchIntsiiiiz */
/* Demangled: dispatchInts(int, int, int, int, ...) */
int _Z12dispatchIntsiiiiz(void);

/* Symbol: _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE */
/* Demangled: RadioImpl::writeSmsToRuim(int, android::hardware::radio::V1_0::CdmaSmsWriteArgs const&) */
int _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE(void);

/* Symbol: _ZN5radio15sendSmsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15sendSmsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio27setUiccSubscriptionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setUiccSubscriptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27setUiccSubscriptionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi */
/* Demangled: RadioImpl::setNetworkSelectionModeAutomatic(int) */
int _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z27convertRilCellInfoListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_08CellInfoEEE */
/* Demangled: convertRilCellInfoListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CellInfo>&) */
int _Z27convertRilCellInfoListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_08CellInfoEEE(void);

/* Symbol: _ZN9RadioImpl11getOperatorEi */
/* Demangled: RadioImpl::getOperator(int) */
int _ZN9RadioImpl11getOperatorEi(void);

/* Symbol: _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE */
/* Demangled: SapImpl::setTransferProtocolReq(int, android::hardware::radio::V1_0::SapTransferProtocol) */
int _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE(void);

/* Symbol: _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh */
/* Demangled: SapImpl::addPayloadAndDispatchRequest(_MsgHeader*, unsigned short, unsigned char*) */
int _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh(void);

/* Symbol: __ubsan_handle_missing_return_minimal */
/* Demangled: __ubsan_handle_missing_return_minimal */
int __ubsan_handle_missing_return_minimal(void);

/* Symbol: _Z27convertRilDataCallListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_019SetupDataCallResultEEE */
/* Demangled: convertRilDataCallListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&) */
int _Z27convertRilDataCallListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_019SetupDataCallResultEEE(void);

/* Symbol: _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::changeIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _Z16sapDecodeMessage6_MsgId8_MsgTypePhj */
/* Demangled: sapDecodeMessage(_MsgId, _MsgType, unsigned char*, unsigned int) */
int _Z16sapDecodeMessage6_MsgId8_MsgTypePhj(void);

/* Symbol: _ZN7SapImpl27transferCardReaderStatusReqEi */
/* Demangled: SapImpl::transferCardReaderStatusReq(int) */
int _ZN7SapImpl27transferCardReaderStatusReqEi(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal_abort */
/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
int __ubsan_handle_pointer_overflow_minimal_abort(void);

/* Symbol: _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_j */
/* Demangled: RilSapSocket::onRequestComplete(void*, RIL_Errno, void*, unsigned int) */
int _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_j(void);

/* Symbol: _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj */
/* Demangled: responseLceStatusInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
int _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE */
/* Demangled: RadioImpl::sendImsSms(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
int _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void);

/* Symbol: _ZN9RadioImpl20getModemActivityInfoEi */
/* Demangled: RadioImpl::getModemActivityInfo(int) */
int _ZN9RadioImpl20getModemActivityInfoEi(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE */
/* Demangled: SapImpl::apduReq(int, android::hardware::radio::V1_0::SapApduType, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE(void);

/* Symbol: pb_decode_varint */
/* Demangled: pb_decode_varint */
int pb_decode_varint(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
int __ubsan_handle_nonnull_arg_minimal_abort(void);

/* Symbol: _ZN5radio15cellInfoListIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cellInfoListInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15cellInfoListIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio19callStateChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::callStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19callStateChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio20radioStateChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::radioStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio20radioStateChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33getCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCdmaSubscriptionSourceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33getCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocketC2EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::RilSapSocket(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
int _ZN12RilSapSocketC2EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void);

/* Symbol: _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz */
/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo>(int, RIL_DataProfileInfo*, RIL_DataProfileInfo**, int, ...) */
int _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz(void);

/* Symbol: _ZN9RadioImpl17getHardwareConfigEi */
/* Demangled: RadioImpl::getHardwareConfig(int) */
int _ZN9RadioImpl17getHardwareConfigEi(void);

/* Symbol: _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendCDMAFeatureCode(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: __ubsan_handle_builtin_unreachable_minimal */
/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
int __ubsan_handle_builtin_unreachable_minimal(void);

/* Symbol: _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response */
/* Demangled: convertTransferAtrResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response) */
int _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response(void);

/* Symbol: _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::initSapSocket(char const*, RIL_RadioFunctions const*) */
int _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions(void);

/* Symbol: _ZN9RadioImpl18getNeighboringCidsEi */
/* Demangled: RadioImpl::getNeighboringCids(int) */
int _ZN9RadioImpl18getNeighboringCidsEi(void);

/* Symbol: pb_get_encoded_size */
/* Demangled: pb_get_encoded_size */
int pb_get_encoded_size(void);

/* Symbol: _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: RadioImpl::getCallForwardStatus(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN5radio25sendSMSExpectMoreResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendSMSExpectMoreResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25sendSMSExpectMoreResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29setFacilityLockForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setFacilityLockForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29setFacilityLockForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl23getNetworkSelectionModeEi */
/* Demangled: RadioImpl::getNetworkSelectionMode(int) */
int _ZN9RadioImpl23getNetworkSelectionModeEi(void);

/* Symbol: _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE */
/* Demangled: RadioImpl::nvReadItem(int, android::hardware::radio::V1_0::NvItem) */
int _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal_abort */
/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
int __ubsan_handle_mul_overflow_minimal_abort(void);

/* Symbol: pb_encode_fixed64 */
/* Demangled: pb_encode_fixed64 */
int pb_encode_fixed64(void);

/* Symbol: _ZN5radio18sendImsSmsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendImsSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18sendImsSmsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28getModemActivityInfoResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getModemActivityInfoResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28getModemActivityInfoResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: radioStateToString */
/* Demangled: radioStateToString */
int radioStateToString(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal */
/* Demangled: __ubsan_handle_implicit_conversion_minimal */
int __ubsan_handle_implicit_conversion_minimal(void);

/* Symbol: _ZN5radio25getDeviceIdentityResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getDeviceIdentityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25getDeviceIdentityResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl14getSmscAddressEi */
/* Demangled: RadioImpl::getSmscAddress(int) */
int _ZN9RadioImpl14getSmscAddressEi(void);

/* Symbol: _ZN9RadioImpl7setMuteEib */
/* Demangled: RadioImpl::setMute(int, bool) */
int _ZN9RadioImpl7setMuteEib(void);

/* Symbol: _ZN5radio13simRefreshIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::simRefreshInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio13simRefreshIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio31getPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getPreferredNetworkTypeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio31getPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSEPS5_ */
/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication>::operator=(android::hardware::radio::deprecated::V1_0::IOemHookIndication*) */
int _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSEPS5_(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal */
/* Demangled: __ubsan_handle_invalid_builtin_minimal */
int __ubsan_handle_invalid_builtin_minimal(void);

/* Symbol: _ZN5radio27getCDMASubscriptionResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCDMASubscriptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27getCDMASubscriptionResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio35requestIccSimAuthenticationResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::requestIccSimAuthenticationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio35requestIccSimAuthenticationResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio40setNetworkSelectionModeAutomaticResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setNetworkSelectionModeAutomaticResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio40setNetworkSelectionModeAutomaticResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: ril_service_name */
/* Demangled: ril_service_name */
extern void* ril_service_name;

/* Symbol: _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvjRNS2_15RadioCapabilityE */
/* Demangled: responseRadioCapability(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int, android::hardware::radio::V1_0::RadioCapability&) */
int _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvjRNS2_15RadioCapabilityE(void);

/* Symbol: _ZN9RadioImpl14setCallWaitingEibi */
/* Demangled: RadioImpl::setCallWaiting(int, bool, int) */
int _ZN9RadioImpl14setCallWaitingEibi(void);

/* Symbol: _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE */
/* Demangled: RadioImpl::dial(int, android::hardware::radio::V1_0::Dial const&) */
int _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE(void);

/* Symbol: __ubsan_handle_cfi_check_fail_minimal_abort */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
int __ubsan_handle_cfi_check_fail_minimal_abort(void);

/* Symbol: _ZN5radio13cdmaNewSmsIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaNewSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio13cdmaNewSmsIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl20getAvailableNetworksEi */
/* Demangled: RadioImpl::getAvailableNetworks(int) */
int _ZN9RadioImpl20getAvailableNetworksEi(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_0::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE;

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
int __ubsan_handle_vla_bound_not_positive_minimal(void);

/* Symbol: _ZN5radio30setCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCdmaBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio30setCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSERKS5_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::ISapCallback>::operator=(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
int _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSERKS5_(void);

/* Symbol: sapService */
/* Demangled: sapService */
extern void* sapService;

/* Symbol: _ZN5radio33hangupWaitingOrBackgroundResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::hangupWaitingOrBackgroundResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33hangupWaitingOrBackgroundResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE */
/* Demangled: RadioImpl::setBandMode(int, android::hardware::radio::V1_0::RadioBandMode) */
int _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE(void);

/* Symbol: _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE */
/* Demangled: construction vtable for android::hardware::radio::V1_1::IRadio-in-RadioImpl */
extern void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE;

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSERKS5_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioIndication>::operator=(android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
int _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSERKS5_(void);

/* Symbol: _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::setSmscAddress(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl19setIndicationFilterEii */
/* Demangled: RadioImpl::setIndicationFilter(int, int) */
int _ZN9RadioImpl19setIndicationFilterEii(void);

/* Symbol: _ZN9RadioImpl23getVoiceRadioTechnologyEi */
/* Demangled: RadioImpl::getVoiceRadioTechnology(int) */
int _ZN9RadioImpl23getVoiceRadioTechnologyEi(void);

/* Symbol: _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE */
/* Demangled: construction vtable for android::hardware::radio::V1_1::ISap-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE;

/* Symbol: _ZN5radio18newBroadcastSmsIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::newBroadcastSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18newBroadcastSmsIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: RadioImpl::iccTransmitApduBasicChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
int _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendDtmf(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: pb_make_string_substream */
/* Demangled: pb_make_string_substream */
int pb_make_string_substream(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal_abort */
/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
int __ubsan_handle_invalid_builtin_minimal_abort(void);

/* Symbol: _ZN5radio15stkCallSetupIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::stkCallSetupInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15stkCallSetupIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26getRadioCapabilityResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getRadioCapabilityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26getRadioCapabilityResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio27supplyIccPin2ForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::supplyIccPin2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27supplyIccPin2ForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio32setPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setPreferredVoicePrivacyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32setPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: RadioImpl::nvWriteCdmaPrl(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN7SapImpl10connectReqEii */
/* Demangled: SapImpl::connectReq(int, int) */
int _ZN7SapImpl10connectReqEii(void);

/* Symbol: pb_field_iter_find */
/* Demangled: pb_field_iter_find */
int pb_field_iter_find(void);

/* Symbol: _ZN5radio21nvResetConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::nvResetConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21nvResetConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio25getSignalStrengthResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getSignalStrengthResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25getSignalStrengthResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvj13RIL_SOCKET_ID */
/* Demangled: RilSapSocket::sOnUnsolicitedResponse(int, void const*, unsigned int, RIL_SOCKET_ID) */
int _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvj13RIL_SOCKET_ID(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSERKS5_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioResponse>::operator=(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&) */
int _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSERKS5_(void);

/* Symbol: _ZN9RadioImpl24getDataRegistrationStateEi */
/* Demangled: RadioImpl::getDataRegistrationState(int) */
int _ZN9RadioImpl24getDataRegistrationStateEi(void);

/* Symbol: _ZN5radio21getIMSIForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getIMSIForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21getIMSIForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::acknowledgeIncomingGsmSmsWithPduResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE */
/* Demangled: RadioImpl::acknowledgeLastIncomingCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
int _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void);

/* Symbol: pb_decode_tag */
/* Demangled: pb_decode_tag */
int pb_decode_tag(void);

/* Symbol: _Z13ril_timer_addP9ril_eventP7timeval */
/* Demangled: ril_timer_add(ril_event*, timeval*) */
int _Z13ril_timer_addP9ril_eventP7timeval(void);

/* Symbol: _ZN5radio23getCellInfoListResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCellInfoListResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23getCellInfoListResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28subscriptionStatusChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::subscriptionStatusChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28subscriptionStatusChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33exitEmergencyCallbackModeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::exitEmergencyCallbackModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33exitEmergencyCallbackModeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio33setCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCdmaSubscriptionSourceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio33setCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z14ril_event_loopv */
/* Demangled: ril_event_loop() */
int _Z14ril_event_loopv(void);

/* Symbol: _ZN5radio28explicitCallTransferResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::explicitCallTransferResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28explicitCallTransferResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android15releaseWakeLockEv */
/* Demangled: android::releaseWakeLock() */
int _ZN7android15releaseWakeLockEv(void);

/* Symbol: _ZN9RadioImpl22getCdmaBroadcastConfigEi */
/* Demangled: RadioImpl::getCdmaBroadcastConfig(int) */
int _ZN9RadioImpl22getCdmaBroadcastConfigEi(void);

/* Symbol: _ZN5radio19simStatusChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::simStatusChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19simStatusChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio28radioCapabilityIndicationIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::radioCapabilityIndicationInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28radioCapabilityIndicationIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio32cdmaSubscriptionSourceChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaSubscriptionSourceChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32cdmaSubscriptionSourceChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE */
/* Demangled: dispatchIccApdu(int, int, int, android::hardware::radio::V1_0::SimApdu const&) */
int _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE(void);

/* Symbol: _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE */
/* Demangled: RadioImpl::setUiccSubscription(int, android::hardware::radio::V1_0::SelectUiccSub const&) */
int _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE(void);

/* Symbol: _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendTerminalResponseToSim(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN5radio25getHardwareConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getHardwareConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25getHardwareConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio27setIndicationFilterResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setIndicationFilterResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27setIndicationFilterResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio30getCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCdmaBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio30getCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal_abort */
/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
int __ubsan_handle_sub_overflow_minimal_abort(void);

/* Symbol: _ZN9RadioImpl15deleteSmsOnRuimEii */
/* Demangled: RadioImpl::deleteSmsOnRuim(int, int) */
int _ZN9RadioImpl15deleteSmsOnRuimEii(void);

/* Symbol: _ZN5radio18rejectCallResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::rejectCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18rejectCallResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android19onNewCommandConnectE13RIL_SOCKET_ID */
/* Demangled: android::onNewCommandConnect(RIL_SOCKET_ID) */
int _ZN7android19onNewCommandConnectE13RIL_SOCKET_ID(void);

/* Symbol: _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_ */
/* Demangled: RadioImpl::getFacilityLockForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_(void);

/* Symbol: _ZN5radio18keepaliveStatusIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::keepaliveStatusInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18keepaliveStatusIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket9printListEv */
/* Demangled: RilSapSocket::printList() */
int _ZN12RilSapSocket9printListEv(void);

/* Symbol: _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE */
/* Demangled: dispatchImsCdmaSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
int _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void);

/* Symbol: _ZN9RadioImpl14deleteSmsOnSimEii */
/* Demangled: RadioImpl::deleteSmsOnSim(int, int) */
int _ZN9RadioImpl14deleteSmsOnSimEii(void);

/* Symbol: _ZN5radio17startDtmfResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::startDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio17startDtmfResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE */
/* Demangled: RadioImpl::startKeepalive(int, android::hardware::radio::V1_1::KeepaliveRequest const&) */
int _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE(void);

/* Symbol: _ZN9RadioImpl18getBasebandVersionEi */
/* Demangled: RadioImpl::getBasebandVersion(int) */
int _ZN9RadioImpl18getBasebandVersionEi(void);

/* Symbol: RIL_register_socket */
/* Demangled: RIL_register_socket */
int RIL_register_socket(void);

/* Symbol: _ZN5radio28getAvailableNetworksResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getAvailableNetworksResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio28getAvailableNetworksResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: pb_encode_svarint */
/* Demangled: pb_encode_svarint */
int pb_encode_svarint(void);

/* Symbol: _ZN5radio13modemResetIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::modemResetInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio13modemResetIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl18getRadioCapabilityEi */
/* Demangled: RadioImpl::getRadioCapability(int) */
int _ZN9RadioImpl18getRadioCapabilityEi(void);

/* Symbol: _ZN5radio14cdmaInfoRecIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaInfoRecInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio14cdmaInfoRecIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio27supplyIccPuk2ForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::supplyIccPuk2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27supplyIccPuk2ForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z12hexCharToInth */
/* Demangled: hexCharToInt(unsigned char) */
int _Z12hexCharToInth(void);

/* Symbol: _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendEnvelopeWithStatus(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTV9RadioImpl */
/* Demangled: vtable for RadioImpl */
extern void* _ZTV9RadioImpl;

/* Symbol: _ZN5radio26getNeighboringCidsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getNeighboringCidsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26getNeighboringCidsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26getAllowedCarriersResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getAllowedCarriersResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26getAllowedCarriersResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio35setSuppServiceNotificationsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setSuppServiceNotificationsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio35setSuppServiceNotificationsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22writeSmsToRuimResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::writeSmsToRuimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22writeSmsToRuimResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio31getNetworkSelectionModeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getNetworkSelectionModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio31getNetworkSelectionModeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
int __ubsan_handle_shift_out_of_bounds_minimal(void);

/* Symbol: _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket */
/* Demangled: sap::processUnsolResponse(_MsgHeader*, RilSapSocket*) */
int _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket(void);

/* Symbol: _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE */
/* Demangled: RadioImpl::setSimCardPower_1_1(int, android::hardware::radio::V1_1::CardPowerState) */
int _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE(void);

/* Symbol: _ZN5radio19sendCdmaSmsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendCdmaSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19sendCdmaSmsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio25imsNetworkStateChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::imsNetworkStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25imsNetworkStateChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio38supplyNetworkDepersonalizationResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::supplyNetworkDepersonalizationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio38supplyNetworkDepersonalizationResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket21onUnsolicitedResponseEiPvj */
/* Demangled: RilSapSocket::onUnsolicitedResponse(int, void*, unsigned int) */
int _ZN12RilSapSocket21onUnsolicitedResponseEiPvj(void);

/* Symbol: _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj */
/* Demangled: makeSendSmsResult(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
int _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void);

/* Symbol: _Z26convertCharPtrToHidlStringPKc */
/* Demangled: convertCharPtrToHidlString(char const*) */
int _Z26convertCharPtrToHidlStringPKc(void);

/* Symbol: pb_read */
/* Demangled: pb_read */
int pb_read(void);

/* Symbol: __ubsan_handle_nullability_arg_minimal */
/* Demangled: __ubsan_handle_nullability_arg_minimal */
int __ubsan_handle_nullability_arg_minimal(void);

/* Symbol: _ZN5radio27changeIccPin2ForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::changeIccPin2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27changeIccPin2ForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio37setNetworkSelectionModeManualResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setNetworkSelectionModeManualResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio37setNetworkSelectionModeManualResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl25hangupWaitingOrBackgroundEi */
/* Demangled: RadioImpl::hangupWaitingOrBackground(int) */
int _ZN9RadioImpl25hangupWaitingOrBackgroundEi(void);

/* Symbol: _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE */
/* Demangled: SapImpl::checkReturnStatus(android::hardware::Return<void>&) */
int _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void);

/* Symbol: RIL_onRequestAck */
/* Demangled: RIL_onRequestAck */
int RIL_onRequestAck(void);

/* Symbol: _ZN5radio27sendCDMAFeatureCodeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendCDMAFeatureCodeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio27sendCDMAFeatureCodeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_j */
/* Demangled: RilSapSocket::sOnRequestComplete(void*, RIL_Errno, void*, unsigned int) */
int _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_j(void);

/* Symbol: _ZN11OemHookImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE */
/* Demangled: OemHookImpl::sendRequestStrings(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN11OemHookImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void);

/* Symbol: _ZTV11OemHookImpl */
/* Demangled: vtable for OemHookImpl */
extern void* _ZTV11OemHookImpl;

/* Symbol: mCounterRadio */
/* Demangled: mCounterRadio */
extern void* mCounterRadio;

/* Symbol: __ubsan_handle_cfi_check_fail_minimal */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
int __ubsan_handle_cfi_check_fail_minimal(void);

/* Symbol: _ZN5radio25cancelPendingUssdResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::cancelPendingUssdResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25cancelPendingUssdResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio29getFacilityLockForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getFacilityLockForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29getFacilityLockForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio31setPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setPreferredNetworkTypeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio31setPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z30convertRilKeepaliveStatusToHalPK19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE */
/* Demangled: convertRilKeepaliveStatusToHal(RIL_KeepaliveStatus const*, android::hardware::radio::V1_1::KeepaliveStatus&) */
int _Z30convertRilKeepaliveStatusToHalPK19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE(void);

/* Symbol: _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response */
/* Demangled: convertApduResponseProtoToHal(_RIL_SIM_SAP_APDU_RSP_Response) */
int _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response(void);

/* Symbol: _ZN5radio23indicateRingbackToneIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::indicateRingbackToneInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23indicateRingbackToneIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio24getIccCardStatusResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getIccCardStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24getIccCardStatusResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio30sendEnvelopeWithStatusResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendEnvelopeWithStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio30sendEnvelopeWithStatusResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio25restrictedStateChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::restrictedStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25restrictedStateChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26supplyIccPinForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::supplyIccPinForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26supplyIccPinForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: pb_skip_field */
/* Demangled: pb_skip_field */
int pb_skip_field(void);

/* Symbol: _ZN5radio19pullLceDataResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::pullLceDataResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19pullLceDataResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj */
/* Demangled: responseInt(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
int _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl10getTTYModeEi */
/* Demangled: RadioImpl::getTTYMode(int) */
int _ZN9RadioImpl10getTTYModeEi(void);

/* Symbol: _ZN9RadioImpl17cancelPendingUssdEi */
/* Demangled: RadioImpl::cancelPendingUssd(int) */
int _ZN9RadioImpl17cancelPendingUssdEi(void);

/* Symbol: _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE */
/* Demangled: RadioImpl::sendSms(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
int _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
int __ubsan_handle_type_mismatch_minimal_abort(void);

/* Symbol: _Z13ril_event_addP9ril_event */
/* Demangled: ril_event_add(ril_event*) */
int _Z13ril_event_addP9ril_event(void);

/* Symbol: _ZN5radio15getClipResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getClipResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15getClipResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE */
/* Demangled: constructCdmaSms(RIL_CDMA_SMS_Message&, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
int _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void);

/* Symbol: _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::setNetworkSelectionModeManual(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN9RadioImpl13stopKeepaliveEii */
/* Demangled: RadioImpl::stopKeepalive(int, int) */
int _ZN9RadioImpl13stopKeepaliveEii(void);

/* Symbol: _ZN9RadioImpl17getDeviceIdentityEi */
/* Demangled: RadioImpl::getDeviceIdentity(int) */
int _ZN9RadioImpl17getDeviceIdentityEi(void);

/* Symbol: _ZN9RadioImpl24getCdmaRoamingPreferenceEi */
/* Demangled: RadioImpl::getCdmaRoamingPreference(int) */
int _ZN9RadioImpl24getCdmaRoamingPreferenceEi(void);

/* Symbol: _ZN9RadioImpl25exitEmergencyCallbackModeEi */
/* Demangled: RadioImpl::exitEmergencyCallbackMode(int) */
int _ZN9RadioImpl25exitEmergencyCallbackModeEi(void);

/* Symbol: _ZTT11OemHookImpl */
/* Demangled: VTT for OemHookImpl */
extern void* _ZTT11OemHookImpl;

/* Symbol: _ZN5radio10pcoDataIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::pcoDataInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio10pcoDataIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio18acceptCallResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::acceptCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18acceptCallResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: dispatchCallForwardStatus(int, int, int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::setBarringPassword(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::sendUssd(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response */
/* Demangled: convertResetSimResponseProtoToHal(_RIL_SIM_SAP_RESET_SIM_RSP_Response) */
int _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response(void);

/* Symbol: pb_encode_fixed32 */
/* Demangled: pb_encode_fixed32 */
int pb_encode_fixed32(void);

/* Symbol: _ZN5radio23sendDeviceStateResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::sendDeviceStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23sendDeviceStateResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: __ubsan_handle_add_overflow_minimal_abort */
/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
int __ubsan_handle_add_overflow_minimal_abort(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: pb_decode */
/* Demangled: pb_decode */
int pb_decode(void);

/* Symbol: _ZN5radio15rilConnectedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::rilConnectedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15rilConnectedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z26convertOperatorStatusToIntPKc */
/* Demangled: convertOperatorStatusToInt(char const*) */
int _Z26convertOperatorStatusToIntPKc(void);

/* Symbol: pb_encode_string */
/* Demangled: pb_encode_string */
int pb_encode_string(void);

/* Symbol: __ubsan_handle_alignment_assumption_minimal */
/* Demangled: __ubsan_handle_alignment_assumption_minimal */
int __ubsan_handle_alignment_assumption_minimal(void);

/* Symbol: _ZN5radio13oemHookRawIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::oemHookRawInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio13oemHookRawIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE15checkAndDequeueE6_MsgIdi */
/* Demangled: Ril_queue<RilSapSocket::SapSocketRequest>::checkAndDequeue(_MsgId, int) */
int _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE15checkAndDequeueE6_MsgIdi(void);

/* Symbol: _Z29convertRilSignalStrengthToHalPvjRN7android8hardware5radio4V1_014SignalStrengthE */
/* Demangled: convertRilSignalStrengthToHal(void*, unsigned int, android::hardware::radio::V1_0::SignalStrength&) */
int _Z29convertRilSignalStrengthToHalPvjRN7android8hardware5radio4V1_014SignalStrengthE(void);

/* Symbol: _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE */
/* Demangled: RadioImpl::setCallForward(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
int _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void);

/* Symbol: _ZN9RadioImpl18deactivateDataCallEiib */
/* Demangled: RadioImpl::deactivateDataCall(int, int, bool) */
int _ZN9RadioImpl18deactivateDataCallEiib(void);

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
int __ubsan_handle_shift_out_of_bounds_minimal_abort(void);

/* Symbol: _ZN5radio19resendIncallMuteIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::resendIncallMuteInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19resendIncallMuteIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio22nvWriteCdmaPrlResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::nvWriteCdmaPrlResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22nvWriteCdmaPrlResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio23setSimCardPowerResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setSimCardPowerResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23setSimCardPowerResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio25cdmaRuimSmsStorageFullIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaRuimSmsStorageFullInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25cdmaRuimSmsStorageFullIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl25reportStkServiceIsRunningEi */
/* Demangled: RadioImpl::reportStkServiceIsRunning(int) */
int _ZN9RadioImpl25reportStkServiceIsRunningEi(void);

/* Symbol: _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE */
/* Demangled: RadioImpl::setCdmaSubscriptionSource(int, android::hardware::radio::V1_0::CdmaSubscriptionSource) */
int _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE(void);

/* Symbol: _ZN7SapImpl14transferAtrReqEi */
/* Demangled: SapImpl::transferAtrReq(int) */
int _ZN7SapImpl14transferAtrReqEi(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN5radio23stopNetworkScanResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::stopNetworkScanResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23stopNetworkScanResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio40hangupForegroundResumeBackgroundResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::hangupForegroundResumeBackgroundResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio40hangupForegroundResumeBackgroundResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: dispatchStrings(int, int, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEPS4_ */
/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioResponse>::operator=(android::hardware::radio::V1_1::IRadioResponse*) */
int _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEPS4_(void);

/* Symbol: _ZTC11OemHookImpl0_N7android8hardware5radio10deprecated4V1_08IOemHookE */
/* Demangled: construction vtable for android::hardware::radio::deprecated::V1_0::IOemHook-in-OemHookImpl */
extern void* _ZTC11OemHookImpl0_N7android8hardware5radio10deprecated4V1_08IOemHookE;

/* Symbol: _ZN5radio22setSmscAddressResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setSmscAddressResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22setSmscAddressResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: pb_encode_nullterminated */
/* Demangled: pb_encode_nullterminated */
int pb_encode_nullterminated(void);

/* Symbol: _Z13ril_event_delP9ril_event */
/* Demangled: ril_event_del(ril_event*) */
int _Z13ril_event_delP9ril_event(void);

/* Symbol: _ZN5radio21setupDataCallResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setupDataCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21setupDataCallResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj */
/* Demangled: responseIntOrEmpty(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
int _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE */
/* Demangled: RadioImpl::setTTYMode(int, android::hardware::radio::V1_0::TtyMode) */
int _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE(void);

/* Symbol: pb_encode */
/* Demangled: pb_encode */
int pb_encode(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal */
/* Demangled: __ubsan_handle_pointer_overflow_minimal */
int __ubsan_handle_pointer_overflow_minimal(void);

/* Symbol: ril_service_name_base */
/* Demangled: ril_service_name_base */
extern void* ril_service_name_base;

/* Symbol: _ZN12RilSapSocketC1EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions */
/* Demangled: RilSapSocket::RilSapSocket(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
int _ZN12RilSapSocketC1EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void);

/* Symbol: pb_write */
/* Demangled: pb_write */
int pb_write(void);

/* Symbol: _ZN5radio15getMuteResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getMuteResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15getMuteResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio21newSmsStatusReportIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::newSmsStatusReportInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21newSmsStatusReportIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio23startLceServiceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::startLceServiceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23startLceServiceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl25getVoiceRegistrationStateEi */
/* Demangled: RadioImpl::getVoiceRegistrationState(int) */
int _ZN9RadioImpl25getVoiceRegistrationStateEi(void);

/* Symbol: _ZTT9RadioImpl */
/* Demangled: VTT for RadioImpl */
extern void* _ZTT9RadioImpl;

/* Symbol: pb_encode_varint */
/* Demangled: pb_encode_varint */
int pb_encode_varint(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal */
/* Demangled: __ubsan_handle_nonnull_arg_minimal */
int __ubsan_handle_nonnull_arg_minimal(void);

/* Symbol: _ZN9RadioImpl14stopLceServiceEi */
/* Demangled: RadioImpl::stopLceService(int) */
int _ZN9RadioImpl14stopLceServiceEi(void);

/* Symbol: _ZN5radio19setNitzTimeReceivedEil */
/* Demangled: radio::setNitzTimeReceived(int, long) */
int _ZN5radio19setNitzTimeReceivedEil(void);

/* Symbol: _ZN5radio32setCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setCdmaRoamingPreferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32setCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::startDtmf(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal_abort */
/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
int __ubsan_handle_negate_overflow_minimal_abort(void);

/* Symbol: mCounterOemHook */
/* Demangled: mCounterOemHook */
extern void* mCounterOemHook;

/* Symbol: __ubsan_handle_function_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
int __ubsan_handle_function_type_mismatch_minimal_abort(void);

/* Symbol: _ZN5radio21setRadioPowerResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setRadioPowerResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio21setRadioPowerResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio24voiceRadioTechChangedIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::voiceRadioTechChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio24voiceRadioTechChangedIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno */
/* Demangled: populateResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
int _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void);

/* Symbol: _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_ */
/* Demangled: RadioImpl::supplyIccPuk2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void);

/* Symbol: _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi */
/* Demangled: RadioImpl::iccOpenLogicalChannel(int, android::hardware::hidl_string const&, int) */
int _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi(void);

/* Symbol: _ZN9RadioImpl21reportSmsMemoryStatusEib */
/* Demangled: RadioImpl::reportSmsMemoryStatus(int, bool) */
int _ZN9RadioImpl21reportSmsMemoryStatusEib(void);

/* Symbol: _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE */
/* Demangled: RadioImpl::setCdmaBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CdmaBroadcastSmsConfigInfo> const&) */
int _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE(void);

/* Symbol: pb_decode_fixed64 */
/* Demangled: pb_decode_fixed64 */
int pb_decode_fixed64(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
int __ubsan_handle_float_cast_overflow_minimal(void);

/* Symbol: __ubsan_handle_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_out_of_bounds_minimal */
int __ubsan_handle_out_of_bounds_minimal(void);

/* Symbol: _ZN5radio25cdmaOtaProvisionStatusIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::cdmaOtaProvisionStatusInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio25cdmaOtaProvisionStatusIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl10acceptCallEi */
/* Demangled: RadioImpl::acceptCall(int) */
int _ZN9RadioImpl10acceptCallEi(void);

/* Symbol: _ZN9RadioImpl7getClipEi */
/* Demangled: RadioImpl::getClip(int) */
int _ZN9RadioImpl7getClipEi(void);

/* Symbol: pb_encode_submessage */
/* Demangled: pb_encode_submessage */
int pb_encode_submessage(void);

/* Symbol: _ZN5radio15getClirResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getClirResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio15getClirResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE */
/* Demangled: radio::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
int _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void);

/* Symbol: _ZN5radio30iccCloseLogicalChannelResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::iccCloseLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio30iccCloseLogicalChannelResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj */
/* Demangled: responseIccIo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
int _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void);

/* Symbol: oemHookService */
/* Demangled: oemHookService */
extern void* oemHookService;

/* Symbol: _ZN5radio22stopLceServiceResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::stopLceServiceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22stopLceServiceResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEPS4_ */
/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioIndication>::operator=(android::hardware::radio::V1_1::IRadioIndication*) */
int _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEPS4_(void);

/* Symbol: _ZN9RadioImpl16getIccCardStatusEi */
/* Demangled: RadioImpl::getIccCardStatus(int) */
int _ZN9RadioImpl16getIccCardStatusEi(void);

/* Symbol: s_vendorFunctions */
/* Demangled: s_vendorFunctions */
extern void* s_vendorFunctions;

/* Symbol: _ZN5radio26setBarringPasswordResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setBarringPasswordResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26setBarringPasswordResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl22iccCloseLogicalChannelEii */
/* Demangled: RadioImpl::iccCloseLogicalChannel(int, int) */
int _ZN9RadioImpl22iccCloseLogicalChannelEii(void);

/* Symbol: _ZN5radio22getSmscAddressResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getSmscAddressResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio22getSmscAddressResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z14dispatchStringiiiPKc */
/* Demangled: dispatchString(int, int, int, char const*) */
int _Z14dispatchStringiiiPKc(void);

/* Symbol: _ZN11OemHookImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: OemHookImpl::sendRequestRaw(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN11OemHookImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-SapImpl */
extern void* _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: pb_release */
/* Demangled: pb_release */
int pb_release(void);

/* Symbol: _ZN5radio20simSmsStorageFullIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::simSmsStorageFullInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio20simSmsStorageFullIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio26deactivateDataCallResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::deactivateDataCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26deactivateDataCallResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z33convertRilHardwareConfigListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_014HardwareConfigEEE */
/* Demangled: convertRilHardwareConfigListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::HardwareConfig>&) */
int _Z33convertRilHardwareConfigListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_014HardwareConfigEEE(void);

/* Symbol: _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE */
/* Demangled: RadioImpl::setCdmaRoamingPreference(int, android::hardware::radio::V1_0::CdmaRoamingType) */
int _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE(void);

/* Symbol: radioService */
/* Demangled: radioService */
extern void* radioService;

/* Symbol: __ubsan_handle_nonnull_return_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
int __ubsan_handle_nonnull_return_minimal_abort(void);

/* Symbol: _ZN5radio19setBandModeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::setBandModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio19setBandModeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSERKS6_ */
/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse>::operator=(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse> const&) */
int _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSERKS6_(void);

/* Symbol: _ZN9RadioImpl20getLastCallFailCauseEi */
/* Demangled: RadioImpl::getLastCallFailCause(int) */
int _ZN9RadioImpl20getLastCallFailCauseEi(void);

/* Symbol: pb_istream_from_buffer */
/* Demangled: pb_istream_from_buffer */
int pb_istream_from_buffer(void);

/* Symbol: _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSEPS4_ */
/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioIndication>::operator=(android::hardware::radio::V1_0::IRadioIndication*) */
int _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSEPS4_(void);

/* Symbol: _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE */
/* Demangled: RadioImpl::getImsiForApp(int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal_abort */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
int __ubsan_handle_float_cast_overflow_minimal_abort(void);

/* Symbol: _ZN5radio21getRadioServiceRwlockEi */
/* Demangled: radio::getRadioServiceRwlock(int) */
int _ZN5radio21getRadioServiceRwlockEi(void);

/* Symbol: _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType */
/* Demangled: isServiceTypeCfQuery(RIL_SsServiceType, RIL_SsRequestType) */
int _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType(void);

/* Symbol: _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_ */
/* Demangled: RadioImpl::supplyIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_(void);

/* Symbol: pb_ostream_from_buffer */
/* Demangled: pb_ostream_from_buffer */
int pb_ostream_from_buffer(void);

/* Symbol: _ZN5radio23getCurrentCallsResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getCurrentCallsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio23getCurrentCallsResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio32getDataRegistrationStateResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getDataRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio32getDataRegistrationStateResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN5radio9newSmsIndEiii9RIL_ErrnoPvj */
/* Demangled: radio::newSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio9newSmsIndEiii9RIL_ErrnoPvj(void);

/* Symbol: _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc */
/* Demangled: fillCellIdentityFromDataRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
int _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void);

/* Symbol: _ZN7SapImpl13disconnectReqEi */
/* Demangled: SapImpl::disconnectReq(int) */
int _ZN7SapImpl13disconnectReqEi(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _Z14ril_event_initv */
/* Demangled: ril_event_init() */
int _Z14ril_event_initv(void);

/* Symbol: _ZN5radio18getTTYModeResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getTTYModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio18getTTYModeResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN7android16addRequestToListEiii */
/* Demangled: android::addRequestToList(int, int, int) */
int _ZN7android16addRequestToListEiii(void);

/* Symbol: _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE */
/* Demangled: RadioImpl::checkReturnStatus(android::hardware::Return<void>&) */
int _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void);

/* Symbol: _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE */
/* Demangled: SapImpl::setCallback(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
int _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE(void);

/* Symbol: _ZN5radio29getAvailableBandModesResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::getAvailableBandModesResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio29getAvailableBandModesResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_ */
/* Demangled: RadioImpl::setFacilityLockForApp(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
int _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_(void);

/* Symbol: _ZN5radio26changeIccPinForAppResponseEiii9RIL_ErrnoPvj */
/* Demangled: radio::changeIccPinForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
int _ZN5radio26changeIccPinForAppResponseEiii9RIL_ErrnoPvj(void);

/* Symbol: rilSocketIdToString */
/* Demangled: rilSocketIdToString */
int rilSocketIdToString(void);

/* Symbol: _Z31convertResponseStringEntryToIntPPcii */
/* Demangled: convertResponseStringEntryToInt(char**, int, int) */
int _Z31convertResponseStringEntryToIntPPcii(void);

/* Symbol: _ZN9RadioImpl27setSuppServiceNotificationsEib */
/* Demangled: RadioImpl::setSuppServiceNotifications(int, bool) */
int _ZN9RadioImpl27setSuppServiceNotificationsEib(void);

/* Symbol: _ZTC11OemHookImpl0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-OemHookImpl */
extern void* _ZTC11OemHookImpl0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: __ubsan_handle_nullability_return_minimal_abort */
/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
int __ubsan_handle_nullability_return_minimal_abort(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBRIL_H */
