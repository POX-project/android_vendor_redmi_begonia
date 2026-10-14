/*
 * Reverse-Engineered Source for: libril.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libril"

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
#include "libril.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: convertRilCdmaSignalInfoRecordToHal(RIL_CDMA_SignalInfoRecord*, android::hardware::radio::V1_0::CdmaSignalInfoRecord&) */
extern "C" __attribute__((visibility("default"))) int _Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE(void) {
    ALOGD("_Z35convertRilCdmaSignalInfoRecordToHalP25RIL_CDMA_SignalInfoRecordRN7android8hardware5radio4V1_020CdmaSignalInfoRecordE() called");
    return 0;
}

/* Demangled: RadioImpl::nvResetConfig(int, android::hardware::radio::V1_0::ResetNvType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE(void) {
    ALOGD("_ZN9RadioImpl13nvResetConfigEiN7android8hardware5radio4V1_011ResetNvTypeE() called");
    return 0;
}

/* Demangled: radio::srvccStateNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19srvccStateNotifyIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19srvccStateNotifyIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setRadioCapabilityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setRadioCapabilityResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26setRadioCapabilityResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setGsmBroadcastActivation(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25setGsmBroadcastActivationEib(void) {
    ALOGD("_ZN9RadioImpl25setGsmBroadcastActivationEib() called");
    return 0;
}

/* Demangled: RadioImpl::hangupForegroundResumeBackground(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32hangupForegroundResumeBackgroundEi(void) {
    ALOGD("_ZN9RadioImpl32hangupForegroundResumeBackgroundEi() called");
    return 0;
}

/* Demangled: radio::getPreferredVoicePrivacyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32getPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Exported Object: android::s_wakelock_count */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16s_wakelock_countE = NULL;

/* Demangled: convertHexStringToBytes(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23convertHexStringToBytesPvj(void) {
    ALOGD("_Z23convertHexStringToBytesPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal() called");
    return 0;
}

/* Demangled: radio::setGsmBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29setGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29setGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getLastCallFailCauseResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getLastCallFailCauseResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28getLastCallFailCauseResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RIL_onRequestComplete */
extern "C" __attribute__((visibility("default"))) int RIL_onRequestComplete(void) {
    ALOGD("RIL_onRequestComplete() called");
    return 0;
}

/* Demangled: radio::dialResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio12dialResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio12dialResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::enterEmergencyCallbackModeInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29enterEmergencyCallbackModeIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29enterEmergencyCallbackModeIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::requestIsimAuthenticationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33requestIsimAuthenticationResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33requestIsimAuthenticationResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::sendTerminalResponseToSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33sendTerminalResponseToSimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33sendTerminalResponseToSimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::handleStkCallSetupRequestFromSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40handleStkCallSetupRequestFromSimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio40handleStkCallSetupRequestFromSimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo_v15>(int, RIL_DataProfileInfo_v15*, RIL_DataProfileInfo_v15**, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z22freeSetDataProfileDataI23RIL_DataProfileInfo_v15EviPT_PS2_iz(void) {
    ALOGD("_Z22freeSetDataProfileDataI23RIL_DataProfileInfo_v15EviPT_PS2_iz() called");
    return 0;
}

/* Demangled: pb_decode_delimited */
extern "C" __attribute__((visibility("default"))) int pb_decode_delimited(void) {
    ALOGD("pb_decode_delimited() called");
    return 0;
}

/* Demangled: requestToString */
extern "C" __attribute__((visibility("default"))) int requestToString(void) {
    ALOGD("requestToString() called");
    return 0;
}

/* Demangled: sendErrorResponse(android::RequestInfo*, RIL_Errno) */
extern "C" __attribute__((visibility("default"))) int _Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno(void) {
    ALOGD("_Z17sendErrorResponsePN7android11RequestInfoE9RIL_Errno() called");
    return 0;
}

/* Demangled: fillCellIdentityFromVoiceRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void) {
    ALOGD("_Z47fillCellIdentityFromVoiceRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeLastIncomingGsmSms(int, bool, android::hardware::radio::V1_0::SmsAcknowledgeFailCause) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE(void) {
    ALOGD("_ZN9RadioImpl29acknowledgeLastIncomingGsmSmsEibN7android8hardware5radio4V1_023SmsAcknowledgeFailCauseE() called");
    return 0;
}

/* Demangled: convertTransferCardReaderStatusResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response(void) {
    ALOGD("_Z49convertTransferCardReaderStatusResponseProtoToHal53_RIL_SIM_SAP_TRANSFER_CARD_READER_STATUS_RSP_Response() called");
    return 0;
}

/* Demangled: pb_decode_svarint */
extern "C" __attribute__((visibility("default"))) int pb_decode_svarint(void) {
    ALOGD("pb_decode_svarint() called");
    return 0;
}

/* Demangled: radio::setMuteResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15setMuteResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15setMuteResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::sendRequestRawResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22sendRequestRawResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22sendRequestRawResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::getSocketById(RIL_SOCKET_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket13getSocketByIdE13RIL_SOCKET_ID(void) {
    ALOGD("_ZN12RilSapSocket13getSocketByIdE13RIL_SOCKET_ID() called");
    return 0;
}

/* Demangled: RadioImpl::sendSMSExpectMore(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl17sendSMSExpectMoreEiRKN7android8hardware5radio4V1_013GsmSmsMessageE() called");
    return 0;
}

/* Demangled: RadioImpl::nvWriteItem(int, android::hardware::radio::V1_0::NvWriteItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE(void) {
    ALOGD("_ZN9RadioImpl11nvWriteItemEiRKN7android8hardware5radio4V1_011NvWriteItemE() called");
    return 0;
}

/* Demangled: RadioImpl::setRadioPower(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13setRadioPowerEib(void) {
    ALOGD("_ZN9RadioImpl13setRadioPowerEib() called");
    return 0;
}

/* Demangled: RadioImpl::setDataAllowed(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setDataAllowedEib(void) {
    ALOGD("_ZN9RadioImpl14setDataAllowedEib() called");
    return 0;
}

/* Demangled: RadioImpl::explicitCallTransfer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20explicitCallTransferEi(void) {
    ALOGD("_ZN9RadioImpl20explicitCallTransferEi() called");
    return 0;
}

/* Demangled: RadioImpl::responseAcknowledgement() */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23responseAcknowledgementEv(void) {
    ALOGD("_ZN9RadioImpl23responseAcknowledgementEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal() called");
    return 0;
}

/* Demangled: dispatchStrings(int, int, int, bool, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchStringsiiibiz(void) {
    ALOGD("_Z15dispatchStringsiiibiz() called");
    return 0;
}

/* Demangled: RadioImpl::writeSmsToSim(int, android::hardware::radio::V1_0::SmsWriteArgs const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE(void) {
    ALOGD("_ZN9RadioImpl13writeSmsToSimEiRKN7android8hardware5radio4V1_012SmsWriteArgsE() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPukForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18supplyIccPukForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: pb_encode_delimited */
extern "C" __attribute__((visibility("default"))) int pb_encode_delimited(void) {
    ALOGD("pb_encode_delimited() called");
    return 0;
}

/* Demangled: RIL_setcallbacks */
extern "C" __attribute__((visibility("default"))) int RIL_setcallbacks(void) {
    ALOGD("RIL_setcallbacks() called");
    return 0;
}

/* Demangled: radio::startNetworkScanResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24startNetworkScanResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24startNetworkScanResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::reportStkServiceIsRunningResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33reportStkServiceIsRunningResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33reportStkServiceIsRunningResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::conferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18conferenceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18conferenceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::stkCallControlAlphaNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28stkCallControlAlphaNotifyIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28stkCallControlAlphaNotifyIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::iccTransmitApduBasicChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35iccTransmitApduBasicChannelResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio35iccTransmitApduBasicChannelResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setClirResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15setClirResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15setClirResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::carrierInfoForImsiEncryption(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28carrierInfoForImsiEncryptionEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28carrierInfoForImsiEncryptionEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: Ril_queue<RilSapSocket::SapSocketRequest>::enqueue(RilSapSocket::SapSocketRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE7enqueueEPS1_(void) {
    ALOGD("_ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE7enqueueEPS1_() called");
    return 0;
}

/* Demangled: RadioImpl::setLocationUpdates(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setLocationUpdatesEib(void) {
    ALOGD("_ZN9RadioImpl18setLocationUpdatesEib() called");
    return 0;
}

/* Demangled: pb_close_string_substream */
extern "C" __attribute__((visibility("default"))) int pb_close_string_substream(void) {
    ALOGD("pb_close_string_substream() called");
    return 0;
}

/* Demangled: ril_event_set(ril_event*, int, bool, void (*)(int, short, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_setP9ril_eventibPFvisPvES1_(void) {
    ALOGD("_Z13ril_event_setP9ril_eventibPFvisPvES1_() called");
    return 0;
}

/* Demangled: radio::sendUssdResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16sendUssdResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio16sendUssdResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::onUssdInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio9onUssdIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio9onUssdIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setPreferredNetworkType(int, android::hardware::radio::V1_0::PreferredNetworkType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE(void) {
    ALOGD("_ZN9RadioImpl23setPreferredNetworkTypeEiN7android8hardware5radio4V1_020PreferredNetworkTypeE() called");
    return 0;
}

/* Demangled: RadioImpl::handleStkCallSetupRequestFromSim(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32handleStkCallSetupRequestFromSimEib(void) {
    ALOGD("_ZN9RadioImpl32handleStkCallSetupRequestFromSimEib() called");
    return 0;
}

/* Demangled: radio::nitzTimeReceivedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19nitzTimeReceivedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19nitzTimeReceivedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::currentSignalStrengthInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24currentSignalStrengthIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24currentSignalStrengthIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::switchWaitingOrHoldingAndActiveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio39switchWaitingOrHoldingAndActiveResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio39switchWaitingOrHoldingAndActiveResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse>::operator=(android::hardware::radio::deprecated::V1_0::IOemHookResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSEPS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSEPS5_() called");
    return 0;
}

/* Demangled: convertRilDataCallToHal(RIL_Data_Call_Response_v11*, android::hardware::radio::V1_0::SetupDataCallResult&) */
extern "C" __attribute__((visibility("default"))) int _Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE(void) {
    ALOGD("_Z23convertRilDataCallToHalP26RIL_Data_Call_Response_v11RN7android8hardware5radio4V1_019SetupDataCallResultE() called");
    return 0;
}

/* Demangled: android::sp<OemHookImpl>::operator=(OemHookImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI11OemHookImplEaSEPS1_(void) {
    ALOGD("_ZN7android2spI11OemHookImplEaSEPS1_() called");
    return 0;
}

/* Demangled: RadioImpl::sendDeviceState(int, android::hardware::radio::V1_0::DeviceStateType, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb(void) {
    ALOGD("_ZN9RadioImpl15sendDeviceStateEiN7android8hardware5radio4V1_015DeviceStateTypeEb() called");
    return 0;
}

/* Exported Object: nitzTimeReceived */
extern "C" __attribute__((visibility("default"))) void* nitzTimeReceived = NULL;

/* Demangled: rilc_thread_pool */
extern "C" __attribute__((visibility("default"))) int rilc_thread_pool(void) {
    ALOGD("rilc_thread_pool() called");
    return 0;
}

/* Demangled: SapImpl::powerReq(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl8powerReqEib(void) {
    ALOGD("_ZN7SapImpl8powerReqEib() called");
    return 0;
}

/* Demangled: radio::acknowledgeRequest(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18acknowledgeRequestEii(void) {
    ALOGD("_ZN5radio18acknowledgeRequestEii() called");
    return 0;
}

/* Demangled: radio::setAllowedCarriersResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setAllowedCarriersResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26setAllowedCarriersResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::iccTransmitApduLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37iccTransmitApduLogicalChannelResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio37iccTransmitApduLogicalChannelResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: radio::callRingInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio11callRingIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio11callRingIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::cdmaCallWaitingInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18cdmaCallWaitingIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18cdmaCallWaitingIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setCellInfoListRate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setCellInfoListRateEii(void) {
    ALOGD("_ZN9RadioImpl19setCellInfoListRateEii() called");
    return 0;
}

/* Demangled: RadioImpl::getPreferredNetworkType(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getPreferredNetworkTypeEi(void) {
    ALOGD("_ZN9RadioImpl23getPreferredNetworkTypeEi() called");
    return 0;
}

/* Demangled: RadioImpl::supplyNetworkDepersonalization(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl30supplyNetworkDepersonalizationEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: pb_field_iter_next */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_next(void) {
    ALOGD("pb_field_iter_next() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: radio::suppSvcNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16suppSvcNotifyIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio16suppSvcNotifyIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setCallForwardResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setCallForwardResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22setCallForwardResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setCarrierInfoForImsiEncryption(int, android::hardware::radio::V1_1::ImsiEncryptionInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE(void) {
    ALOGD("_ZN9RadioImpl31setCarrierInfoForImsiEncryptionEiRKN7android8hardware5radio4V1_118ImsiEncryptionInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::getAllowedCarriers(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getAllowedCarriersEi(void) {
    ALOGD("_ZN9RadioImpl18getAllowedCarriersEi() called");
    return 0;
}

/* Demangled: RIL_requestTimedCallback */
extern "C" __attribute__((visibility("default"))) int RIL_requestTimedCallback(void) {
    ALOGD("RIL_requestTimedCallback() called");
    return 0;
}

/* Demangled: radio::stkProactiveCommandInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22stkProactiveCommandIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22stkProactiveCommandIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getVoiceRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33getVoiceRegistrationStateResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33getVoiceRegistrationStateResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::sendBurstDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21sendBurstDtmfResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21sendBurstDtmfResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: failCauseToString */
extern "C" __attribute__((visibility("default"))) int failCauseToString(void) {
    ALOGD("failCauseToString() called");
    return 0;
}

/* Demangled: RadioImpl::sendBurstDtmf(int, android::hardware::hidl_string const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii(void) {
    ALOGD("_ZN9RadioImpl13sendBurstDtmfEiRKN7android8hardware11hidl_stringEii() called");
    return 0;
}

/* Demangled: RadioImpl::getPreferredVoicePrivacy(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getPreferredVoicePrivacyEi(void) {
    ALOGD("_ZN9RadioImpl24getPreferredVoicePrivacyEi() called");
    return 0;
}

/* Demangled: RadioImpl::switchWaitingOrHoldingAndActive(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi(void) {
    ALOGD("_ZN9RadioImpl31switchWaitingOrHoldingAndActiveEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal_abort() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: memsetAndFreeStrings(int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z20memsetAndFreeStringsiz(void) {
    ALOGD("_Z20memsetAndFreeStringsiz() called");
    return 0;
}

/* Demangled: RadioImpl::requestIccSimAuthentication(int, int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl27requestIccSimAuthenticationEiiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: radio::setCallWaitingResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setCallWaitingResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22setCallWaitingResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getVoiceRadioTechnologyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getVoiceRadioTechnologyResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio31getVoiceRadioTechnologyResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: sap::processResponse(_MsgHeader*, RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket(void) {
    ALOGD("_ZN3sap15processResponseEP10_MsgHeaderP12RilSapSocket() called");
    return 0;
}

/* Demangled: callStateToString */
extern "C" __attribute__((visibility("default"))) int callStateToString(void) {
    ALOGD("callStateToString() called");
    return 0;
}

/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb(void) {
    ALOGD("_Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoEb() called");
    return 0;
}

/* Demangled: RadioImpl::requestShutdown(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15requestShutdownEi(void) {
    ALOGD("_ZN9RadioImpl15requestShutdownEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal() called");
    return 0;
}

/* Demangled: RadioImpl::setRadioCapability(int, android::hardware::radio::V1_0::RadioCapability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE(void) {
    ALOGD("_ZN9RadioImpl18setRadioCapabilityEiRKN7android8hardware5radio4V1_015RadioCapabilityE() called");
    return 0;
}

/* Demangled: android::sp<SapImpl>::operator=(SapImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI7SapImplEaSEPS1_(void) {
    ALOGD("_ZN7android2spI7SapImplEaSEPS1_() called");
    return 0;
}

/* Demangled: pb_decode_fixed32 */
extern "C" __attribute__((visibility("default"))) int pb_decode_fixed32(void) {
    ALOGD("pb_decode_fixed32() called");
    return 0;
}

/* Demangled: android::RIL_getServiceName() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18RIL_getServiceNameEv(void) {
    ALOGD("_ZN7android18RIL_getServiceNameEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: RadioImpl::getCellInfoList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getCellInfoListEi(void) {
    ALOGD("_ZN9RadioImpl15getCellInfoListEi() called");
    return 0;
}

/* Demangled: RadioImpl::setGsmBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::GsmBroadcastSmsConfigInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE(void) {
    ALOGD("_ZN9RadioImpl21setGsmBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_025GsmBroadcastSmsConfigInfoEEE() called");
    return 0;
}

/* Demangled: getSapImpl(RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _Z10getSapImplP12RilSapSocket(void) {
    ALOGD("_Z10getSapImplP12RilSapSocket() called");
    return 0;
}

/* Demangled: pb_decode_varint32 */
extern "C" __attribute__((visibility("default"))) int pb_decode_varint32(void) {
    ALOGD("pb_decode_varint32() called");
    return 0;
}

/* Demangled: fillCellIdentityResponse(android::hardware::radio::V1_0::CellIdentity&, RIL_CellIdentity_v16&) */
extern "C" __attribute__((visibility("default"))) int _Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16(void) {
    ALOGD("_Z24fillCellIdentityResponseRN7android8hardware5radio4V1_012CellIdentityER20RIL_CellIdentity_v16() called");
    return 0;
}

/* Demangled: RadioImpl::setDataProfile(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::DataProfileInfo> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb(void) {
    ALOGD("_ZN9RadioImpl14setDataProfileEiRKN7android8hardware8hidl_vecINS1_5radio4V1_015DataProfileInfoEEEb() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal_abort(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal_abort() called");
    return 0;
}

/* Demangled: radio::acknowledgeLastIncomingCdmaSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio38acknowledgeLastIncomingCdmaSmsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioResponse>::operator=(android::sp<android::hardware::radio::V1_1::IRadioResponse>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEOS5_() called");
    return 0;
}

/* Demangled: RadioImpl::setInitialAttachApn(int, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb(void) {
    ALOGD("_ZN9RadioImpl19setInitialAttachApnEiRKN7android8hardware5radio4V1_015DataProfileInfoEbb() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: pb_field_iter_begin */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_begin(void) {
    ALOGD("pb_field_iter_begin() called");
    return 0;
}

/* Demangled: sap::registerService(RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap15registerServiceEPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN3sap15registerServiceEPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: convertRilRadioCapabilityToHal(void*, unsigned int, android::hardware::radio::V1_0::RadioCapability&) */
extern "C" __attribute__((visibility("default"))) int _Z30convertRilRadioCapabilityToHalPvjRN7android8hardware5radio4V1_015RadioCapabilityE(void) {
    ALOGD("_Z30convertRilRadioCapabilityToHalPvjRN7android8hardware5radio4V1_015RadioCapabilityE() called");
    return 0;
}

/* Demangled: getCellInfoTypeRadioTechnology(char*) */
extern "C" __attribute__((visibility("default"))) int _Z30getCellInfoTypeRadioTechnologyPc(void) {
    ALOGD("_Z30getCellInfoTypeRadioTechnologyPc() called");
    return 0;
}

/* Demangled: convertPowerResponseProtoToHal(_RIL_SIM_SAP_POWER_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response(void) {
    ALOGD("_Z30convertPowerResponseProtoToHal31_RIL_SIM_SAP_POWER_RSP_Response() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal() called");
    return 0;
}

/* Demangled: dispatchRaw(int, int, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_Z11dispatchRawiiiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: RadioImpl::getAvailableBandModes(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getAvailableBandModesEi(void) {
    ALOGD("_ZN9RadioImpl21getAvailableBandModesEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: OemHookImpl::setResponseFunctions(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse> const&, android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OemHookImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio10deprecated4V1_016IOemHookResponseEEERKNS1_INS5_18IOemHookIndicationEEE(void) {
    ALOGD("_ZN11OemHookImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio10deprecated4V1_016IOemHookResponseEEERKNS1_INS5_18IOemHookIndicationEEE() called");
    return 0;
}

/* Demangled: pb_decode_delimited_noinit */
extern "C" __attribute__((visibility("default"))) int pb_decode_delimited_noinit(void) {
    ALOGD("pb_decode_delimited_noinit() called");
    return 0;
}

/* Demangled: pb_encode_tag_for_field */
extern "C" __attribute__((visibility("default"))) int pb_encode_tag_for_field(void) {
    ALOGD("pb_encode_tag_for_field() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal() called");
    return 0;
}

/* Demangled: radio::networkStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22networkStateChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22networkStateChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::deleteSmsOnRuimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23deleteSmsOnRuimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23deleteSmsOnRuimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::startNetworkScan(int, android::hardware::radio::V1_1::NetworkScanRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE(void) {
    ALOGD("_ZN9RadioImpl16startNetworkScanEiRKN7android8hardware5radio4V1_118NetworkScanRequestE() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaSubscriptionSource(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25getCdmaSubscriptionSourceEi(void) {
    ALOGD("_ZN9RadioImpl25getCdmaSubscriptionSourceEi() called");
    return 0;
}

/* Demangled: radio::nvReadItemResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18nvReadItemResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18nvReadItemResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setGsmBroadcastActivationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33setGsmBroadcastActivationResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33setGsmBroadcastActivationResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::separateConnection(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18separateConnectionEii(void) {
    ALOGD("_ZN9RadioImpl18separateConnectionEii() called");
    return 0;
}

/* Demangled: radio::stkSessionEndInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16stkSessionEndIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio16stkSessionEndIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::deleteSmsOnSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22deleteSmsOnSimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22deleteSmsOnSimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::supplyIccPukForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26supplyIccPukForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26supplyIccPukForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getImsRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getImsRegistrationStateResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio31getImsRegistrationStateResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Exported Object: android::s_callbacks */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11s_callbacksE = NULL;

/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication>::operator=(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSERKS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSERKS6_() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaBroadcastActivation(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl26setCdmaBroadcastActivationEib(void) {
    ALOGD("_ZN9RadioImpl26setCdmaBroadcastActivationEib() called");
    return 0;
}

/* Demangled: RadioImpl::stopDtmf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8stopDtmfEi(void) {
    ALOGD("_ZN9RadioImpl8stopDtmfEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal() called");
    return 0;
}

/* Demangled: radio::getCallWaitingResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22getCallWaitingResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22getCallWaitingResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getGsmBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29getGsmBroadcastConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::changeIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl19changeIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: SapImpl::createMsgHeader(_MsgId, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl15createMsgHeaderE6_MsgIdi(void) {
    ALOGD("_ZN7SapImpl15createMsgHeaderE6_MsgIdi() called");
    return 0;
}

/* Demangled: pb_decode_noinit */
extern "C" __attribute__((visibility("default"))) int pb_decode_noinit(void) {
    ALOGD("pb_decode_noinit() called");
    return 0;
}

/* Demangled: RadioImpl::iccIOForApp(int, android::hardware::radio::V1_0::IccIo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE(void) {
    ALOGD("_ZN9RadioImpl11iccIOForAppEiRKN7android8hardware5radio4V1_05IccIoE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_0::ISap-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android8hardware5radio4V1_04ISapE = NULL;

/* Demangled: radio::requestShutdownResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23requestShutdownResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23requestShutdownResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioResponse>::operator=(android::hardware::radio::V1_0::IRadioResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSEPS4_() called");
    return 0;
}

/* Demangled: RadioImpl::hangup(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl6hangupEii(void) {
    ALOGD("_ZN9RadioImpl6hangupEii() called");
    return 0;
}

/* Demangled: radio::networkScanResultInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20networkScanResultIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio20networkScanResultIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getDataCallListResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getDataCallListResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23getDataCallListResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal_abort(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal_abort() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioIndication>::operator=(android::sp<android::hardware::radio::V1_1::IRadioIndication>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEOS5_() called");
    return 0;
}

/* Demangled: RadioImpl::getDataCallList(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getDataCallListEi(void) {
    ALOGD("_ZN9RadioImpl15getDataCallListEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl11sendCdmaSmsEiRKN7android8hardware5radio4V1_014CdmaSmsMessageE() called");
    return 0;
}

/* Demangled: RadioImpl::setSimCardPower(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15setSimCardPowerEib(void) {
    ALOGD("_ZN9RadioImpl15setSimCardPowerEib() called");
    return 0;
}

/* Exported Object: RilSapSocket::uimRilEnv */
extern "C" __attribute__((visibility("default"))) void* _ZN12RilSapSocket9uimRilEnvE = NULL;

/* Demangled: radio::setDataProfileResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setDataProfileResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22setDataProfileResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::sendRequestStringsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26sendRequestStringsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26sendRequestStringsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::dispatchRequest(_MsgHeader*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket15dispatchRequestEP10_MsgHeader(void) {
    ALOGD("_ZN12RilSapSocket15dispatchRequestEP10_MsgHeader() called");
    return 0;
}

/* Exported Object: vtable for SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV7SapImpl = NULL;

/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal_abort(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal_abort() called");
    return 0;
}

/* Demangled: radio::cdmaPrlChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17cdmaPrlChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio17cdmaPrlChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::nvWriteItemResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19nvWriteItemResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19nvWriteItemResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::writeSmsToSimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21writeSmsToSimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21writeSmsToSimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setInitialAttachApnResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setInitialAttachApnResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27setInitialAttachApnResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: checkReturnStatus(int, android::hardware::Return<void>&, bool) */
extern "C" __attribute__((visibility("default"))) int _Z17checkReturnStatusiRN7android8hardware6ReturnIvEEb(void) {
    ALOGD("_Z17checkReturnStatusiRN7android8hardware6ReturnIvEEb() called");
    return 0;
}

/* Demangled: RadioImpl::setResponseFunctions(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&, android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE(void) {
    ALOGD("_ZN9RadioImpl20setResponseFunctionsERKN7android2spINS0_8hardware5radio4V1_014IRadioResponseEEERKNS1_INS4_16IRadioIndicationEEE() called");
    return 0;
}

/* Exported Object: VTT for SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT7SapImpl = NULL;

/* Demangled: radio::hardwareConfigChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24hardwareConfigChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24hardwareConfigChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getBasebandVersionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getBasebandVersionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26getBasebandVersionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getCallForwardStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getCallForwardStatusResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28getCallForwardStatusResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getCurrentCalls(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15getCurrentCallsEi(void) {
    ALOGD("_ZN9RadioImpl15getCurrentCallsEi() called");
    return 0;
}

/* Demangled: radio::setCellInfoListRateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setCellInfoListRateResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27setCellInfoListRateResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getCdmaRoamingPreferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32getCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertIntToRadioIndicationType(int) */
extern "C" __attribute__((visibility("default"))) int _Z31convertIntToRadioIndicationTypei(void) {
    ALOGD("_Z31convertIntToRadioIndicationTypei() called");
    return 0;
}

/* Demangled: RadioImpl::setAllowedCarriers(int, bool, android::hardware::radio::V1_0::CarrierRestrictions const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE(void) {
    ALOGD("_ZN9RadioImpl18setAllowedCarriersEibRKN7android8hardware5radio4V1_019CarrierRestrictionsE() called");
    return 0;
}

/* Demangled: SapImpl::sendFailedResponse(_MsgId, int, int, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl18sendFailedResponseE6_MsgIdiiz(void) {
    ALOGD("_ZN7SapImpl18sendFailedResponseE6_MsgIdiiz() called");
    return 0;
}

/* Demangled: radio::newSmsOnSimInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio14newSmsOnSimIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio14newSmsOnSimIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::stkEventNotifyInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17stkEventNotifyIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio17stkEventNotifyIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setPreferredVoicePrivacy(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24setPreferredVoicePrivacyEib(void) {
    ALOGD("_ZN9RadioImpl24setPreferredVoicePrivacyEib() called");
    return 0;
}

/* Demangled: radio::sendDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16sendDtmfResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio16sendDtmfResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::dataCallListChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22dataCallListChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22dataCallListChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::exitEmergencyCallbackModeInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28exitEmergencyCallbackModeIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28exitEmergencyCallbackModeIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::iccOpenLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29iccOpenLogicalChannelResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29iccOpenLogicalChannelResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setCarrierInfoForImsiEncryptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio39setCarrierInfoForImsiEncryptionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio39setCarrierInfoForImsiEncryptionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Exported Object: vtable for RilSapSocket */
extern "C" __attribute__((visibility("default"))) void* _ZTV12RilSapSocket = NULL;

/* Demangled: RadioImpl::stopNetworkScan(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15stopNetworkScanEi(void) {
    ALOGD("_ZN9RadioImpl15stopNetworkScanEi() called");
    return 0;
}

/* Demangled: RadioImpl::getImsRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getImsRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl23getImsRegistrationStateEi() called");
    return 0;
}

/* Demangled: RilSapSocket::addSocketToList(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket15addSocketToListEPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocket15addSocketToListEPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: RadioImpl::conference(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10conferenceEi(void) {
    ALOGD("_ZN9RadioImpl10conferenceEi() called");
    return 0;
}

/* Demangled: radio::startKeepaliveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22startKeepaliveResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22startKeepaliveResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getGsmBroadcastConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getGsmBroadcastConfigEi(void) {
    ALOGD("_ZN9RadioImpl21getGsmBroadcastConfigEi() called");
    return 0;
}

/* Demangled: RadioImpl::getClir(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getClirEi(void) {
    ALOGD("_ZN9RadioImpl7getClirEi() called");
    return 0;
}

/* Demangled: radio::iccIOForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19iccIOForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19iccIOForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::onSupplementaryServiceIndicationInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35onSupplementaryServiceIndicationIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio35onSupplementaryServiceIndicationIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchVoid(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12dispatchVoidiii(void) {
    ALOGD("_Z12dispatchVoidiii() called");
    return 0;
}

/* Demangled: RadioImpl::getCallWaiting(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14getCallWaitingEii(void) {
    ALOGD("_ZN9RadioImpl14getCallWaitingEii() called");
    return 0;
}

/* Demangled: RadioImpl::getSignalStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getSignalStrengthEi(void) {
    ALOGD("_ZN9RadioImpl17getSignalStrengthEi() called");
    return 0;
}

/* Demangled: RadioImpl::setClir(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7setClirEii(void) {
    ALOGD("_ZN9RadioImpl7setClirEii() called");
    return 0;
}

/* Demangled: SapImpl::resetSimReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl11resetSimReqEi(void) {
    ALOGD("_ZN7SapImpl11resetSimReqEi() called");
    return 0;
}

/* Demangled: RIL_onUnsolicitedResponse */
extern "C" __attribute__((visibility("default"))) int RIL_onUnsolicitedResponse(void) {
    ALOGD("RIL_onUnsolicitedResponse() called");
    return 0;
}

/* Demangled: radio::stopDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio16stopDtmfResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio16stopDtmfResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RIL_register */
extern "C" __attribute__((visibility("default"))) int RIL_register(void) {
    ALOGD("RIL_register() called");
    return 0;
}

/* Demangled: radio::getOperatorResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19getOperatorResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19getOperatorResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::hangupConnectionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24hangupConnectionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24hangupConnectionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::acknowledgeLastIncomingGsmSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37acknowledgeLastIncomingGsmSmsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio37acknowledgeLastIncomingGsmSmsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getCDMASubscription(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19getCDMASubscriptionEi(void) {
    ALOGD("_ZN9RadioImpl19getCDMASubscriptionEi() called");
    return 0;
}

/* Demangled: pb_encode_tag */
extern "C" __attribute__((visibility("default"))) int pb_encode_tag(void) {
    ALOGD("pb_encode_tag() called");
    return 0;
}

/* Demangled: radio::sendEnvelopeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20sendEnvelopeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio20sendEnvelopeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl18supplyIccPinForAppEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_0::ISapCallback>::operator=(android::hardware::radio::V1_0::ISapCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSEPS4_() called");
    return 0;
}

/* Demangled: radio::separateConnectionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26separateConnectionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26separateConnectionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchImsGsmSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void) {
    ALOGD("_Z17dispatchImsGsmSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::rejectCall(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10rejectCallEi(void) {
    ALOGD("_ZN9RadioImpl10rejectCallEi() called");
    return 0;
}

/* Demangled: processResponse(_MsgHeader*, RilSapSocket*, _MsgType) */
extern "C" __attribute__((visibility("default"))) int _Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType(void) {
    ALOGD("_Z15processResponseP10_MsgHeaderP12RilSapSocket8_MsgType() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal_abort(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal_abort() called");
    return 0;
}

/* Demangled: radio::setTTYModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18setTTYModeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18setTTYModeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setCdmaBroadcastActivationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio34setCdmaBroadcastActivationResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio34setCdmaBroadcastActivationResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: copyHidlStringToRil(char**, android::hardware::hidl_string const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE(void) {
    ALOGD("_Z19copyHidlStringToRilPPcRKN7android8hardware11hidl_stringEPNS1_11RequestInfoE() called");
    return 0;
}

/* Demangled: convertRilLceDataInfoToHal(void*, unsigned int, android::hardware::radio::V1_0::LceDataInfo&) */
extern "C" __attribute__((visibility("default"))) int _Z26convertRilLceDataInfoToHalPvjRN7android8hardware5radio4V1_011LceDataInfoE(void) {
    ALOGD("_Z26convertRilLceDataInfoToHalPvjRN7android8hardware5radio4V1_011LceDataInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::setupDataCall(int, android::hardware::radio::V1_0::RadioTechnology, android::hardware::radio::V1_0::DataProfileInfo const&, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb(void) {
    ALOGD("_ZN9RadioImpl13setupDataCallEiN7android8hardware5radio4V1_015RadioTechnologyERKNS3_15DataProfileInfoEbbb() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeIncomingGsmSmsWithPdu(int, bool, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl32acknowledgeIncomingGsmSmsWithPduEibRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: pb_decode_nullterminated */
extern "C" __attribute__((visibility("default"))) int pb_decode_nullterminated(void) {
    ALOGD("pb_decode_nullterminated() called");
    return 0;
}

/* Demangled: radio::lceDataInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio10lceDataIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio10lceDataIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::stopKeepaliveResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21stopKeepaliveResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21stopKeepaliveResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::pullLceData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11pullLceDataEi(void) {
    ALOGD("_ZN9RadioImpl11pullLceDataEi() called");
    return 0;
}

/* Demangled: radio::setDataAllowedResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setDataAllowedResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22setDataAllowedResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertResponseHexStringEntryToInt(char**, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z34convertResponseHexStringEntryToIntPPcii(void) {
    ALOGD("_Z34convertResponseHexStringEntryToIntPPcii() called");
    return 0;
}

/* Demangled: android::sp<RadioImpl>::operator=(RadioImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI9RadioImplEaSEPS1_(void) {
    ALOGD("_ZN7android2spI9RadioImplEaSEPS1_() called");
    return 0;
}

/* Demangled: RadioImpl::sendEnvelope(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl12sendEnvelopeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::requestIsimAuthentication(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl25requestIsimAuthenticationEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::iccTransmitApduLogicalChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_ZN9RadioImpl29iccTransmitApduLogicalChannelEiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Demangled: RadioImpl::getMute(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getMuteEi(void) {
    ALOGD("_ZN9RadioImpl7getMuteEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __ubsan_handle_add_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal() called");
    return 0;
}

/* Demangled: RIL_startEventLoop */
extern "C" __attribute__((visibility("default"))) int RIL_startEventLoop(void) {
    ALOGD("RIL_startEventLoop() called");
    return 0;
}

/* Demangled: RadioImpl::startLceService(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15startLceServiceEiib(void) {
    ALOGD("_ZN9RadioImpl15startLceServiceEiib() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal() called");
    return 0;
}

/* Demangled: radio::setLocationUpdatesResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setLocationUpdatesResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26setLocationUpdatesResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::reportSmsMemoryStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29reportSmsMemoryStatusResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29reportSmsMemoryStatusResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::SocketExists(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket12SocketExistsEPKc(void) {
    ALOGD("_ZN12RilSapSocket12SocketExistsEPKc() called");
    return 0;
}

/* Demangled: dispatchInts(int, int, int, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z12dispatchIntsiiiiz(void) {
    ALOGD("_Z12dispatchIntsiiiiz() called");
    return 0;
}

/* Demangled: RadioImpl::writeSmsToRuim(int, android::hardware::radio::V1_0::CdmaSmsWriteArgs const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE(void) {
    ALOGD("_ZN9RadioImpl14writeSmsToRuimEiRKN7android8hardware5radio4V1_016CdmaSmsWriteArgsE() called");
    return 0;
}

/* Demangled: radio::sendSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15sendSmsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15sendSmsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setUiccSubscriptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setUiccSubscriptionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27setUiccSubscriptionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setNetworkSelectionModeAutomatic(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl32setNetworkSelectionModeAutomaticEi(void) {
    ALOGD("_ZN9RadioImpl32setNetworkSelectionModeAutomaticEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: convertRilCellInfoListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CellInfo>&) */
extern "C" __attribute__((visibility("default"))) int _Z27convertRilCellInfoListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_08CellInfoEEE(void) {
    ALOGD("_Z27convertRilCellInfoListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_08CellInfoEEE() called");
    return 0;
}

/* Demangled: RadioImpl::getOperator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11getOperatorEi(void) {
    ALOGD("_ZN9RadioImpl11getOperatorEi() called");
    return 0;
}

/* Demangled: SapImpl::setTransferProtocolReq(int, android::hardware::radio::V1_0::SapTransferProtocol) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE(void) {
    ALOGD("_ZN7SapImpl22setTransferProtocolReqEiN7android8hardware5radio4V1_019SapTransferProtocolE() called");
    return 0;
}

/* Demangled: SapImpl::addPayloadAndDispatchRequest(_MsgHeader*, unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh(void) {
    ALOGD("_ZN7SapImpl28addPayloadAndDispatchRequestEP10_MsgHeadertPh() called");
    return 0;
}

/* Demangled: __ubsan_handle_missing_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_missing_return_minimal(void) {
    ALOGD("__ubsan_handle_missing_return_minimal() called");
    return 0;
}

/* Demangled: convertRilDataCallListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::SetupDataCallResult>&) */
extern "C" __attribute__((visibility("default"))) int _Z27convertRilDataCallListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_019SetupDataCallResultEEE(void) {
    ALOGD("_Z27convertRilDataCallListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_019SetupDataCallResultEEE() called");
    return 0;
}

/* Demangled: RadioImpl::changeIccPinForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18changeIccPinForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: sapDecodeMessage(_MsgId, _MsgType, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16sapDecodeMessage6_MsgId8_MsgTypePhj(void) {
    ALOGD("_Z16sapDecodeMessage6_MsgId8_MsgTypePhj() called");
    return 0;
}

/* Demangled: SapImpl::transferCardReaderStatusReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl27transferCardReaderStatusReqEi(void) {
    ALOGD("_ZN7SapImpl27transferCardReaderStatusReqEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: RilSapSocket::onRequestComplete(void*, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_j(void) {
    ALOGD("_ZN12RilSapSocket17onRequestCompleteEPv9RIL_ErrnoS0_j() called");
    return 0;
}

/* Demangled: responseLceStatusInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void) {
    ALOGD("_Z21responseLceStatusInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::sendImsSms(int, android::hardware::radio::V1_0::ImsSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl10sendImsSmsEiRKN7android8hardware5radio4V1_013ImsSmsMessageE() called");
    return 0;
}

/* Demangled: RadioImpl::getModemActivityInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getModemActivityInfoEi(void) {
    ALOGD("_ZN9RadioImpl20getModemActivityInfoEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: SapImpl::apduReq(int, android::hardware::radio::V1_0::SapApduType, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE(void) {
    ALOGD("_ZN7SapImpl7apduReqEiN7android8hardware5radio4V1_011SapApduTypeERKNS1_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: pb_decode_varint */
extern "C" __attribute__((visibility("default"))) int pb_decode_varint(void) {
    ALOGD("pb_decode_varint() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal_abort() called");
    return 0;
}

/* Demangled: radio::cellInfoListInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15cellInfoListIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15cellInfoListIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::callStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19callStateChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19callStateChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::radioStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20radioStateChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio20radioStateChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getCdmaSubscriptionSourceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33getCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33getCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::RilSapSocket(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocketC2EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocketC2EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: void freeSetDataProfileData<RIL_DataProfileInfo>(int, RIL_DataProfileInfo*, RIL_DataProfileInfo**, int, ...) */
extern "C" __attribute__((visibility("default"))) int _Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz(void) {
    ALOGD("_Z22freeSetDataProfileDataI19RIL_DataProfileInfoEviPT_PS2_iz() called");
    return 0;
}

/* Demangled: RadioImpl::getHardwareConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getHardwareConfigEi(void) {
    ALOGD("_ZN9RadioImpl17getHardwareConfigEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendCDMAFeatureCode(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl19sendCDMAFeatureCodeEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_builtin_unreachable_minimal(void) {
    ALOGD("__ubsan_handle_builtin_unreachable_minimal() called");
    return 0;
}

/* Demangled: convertTransferAtrResponseProtoToHal(_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response(void) {
    ALOGD("_Z36convertTransferAtrResponseProtoToHal38_RIL_SIM_SAP_TRANSFER_ATR_RSP_Response() called");
    return 0;
}

/* Demangled: RilSapSocket::initSapSocket(char const*, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocket13initSapSocketEPKcPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: RadioImpl::getNeighboringCids(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getNeighboringCidsEi(void) {
    ALOGD("_ZN9RadioImpl18getNeighboringCidsEi() called");
    return 0;
}

/* Demangled: pb_get_encoded_size */
extern "C" __attribute__((visibility("default"))) int pb_get_encoded_size(void) {
    ALOGD("pb_get_encoded_size() called");
    return 0;
}

/* Demangled: RadioImpl::getCallForwardStatus(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_ZN9RadioImpl20getCallForwardStatusEiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: radio::sendSMSExpectMoreResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25sendSMSExpectMoreResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25sendSMSExpectMoreResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setFacilityLockForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29setFacilityLockForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29setFacilityLockForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getNetworkSelectionMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getNetworkSelectionModeEi(void) {
    ALOGD("_ZN9RadioImpl23getNetworkSelectionModeEi() called");
    return 0;
}

/* Demangled: RadioImpl::nvReadItem(int, android::hardware::radio::V1_0::NvItem) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE(void) {
    ALOGD("_ZN9RadioImpl10nvReadItemEiN7android8hardware5radio4V1_06NvItemE() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: pb_encode_fixed64 */
extern "C" __attribute__((visibility("default"))) int pb_encode_fixed64(void) {
    ALOGD("pb_encode_fixed64() called");
    return 0;
}

/* Demangled: radio::sendImsSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18sendImsSmsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18sendImsSmsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getModemActivityInfoResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getModemActivityInfoResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28getModemActivityInfoResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radioStateToString */
extern "C" __attribute__((visibility("default"))) int radioStateToString(void) {
    ALOGD("radioStateToString() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal() called");
    return 0;
}

/* Demangled: radio::getDeviceIdentityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getDeviceIdentityResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25getDeviceIdentityResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getSmscAddress(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14getSmscAddressEi(void) {
    ALOGD("_ZN9RadioImpl14getSmscAddressEi() called");
    return 0;
}

/* Demangled: RadioImpl::setMute(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7setMuteEib(void) {
    ALOGD("_ZN9RadioImpl7setMuteEib() called");
    return 0;
}

/* Demangled: radio::simRefreshInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13simRefreshIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio13simRefreshIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getPreferredNetworkTypeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio31getPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookIndication>::operator=(android::hardware::radio::deprecated::V1_0::IOemHookIndication*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSEPS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio10deprecated4V1_018IOemHookIndicationEEaSEPS5_() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal() called");
    return 0;
}

/* Demangled: radio::getCDMASubscriptionResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27getCDMASubscriptionResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27getCDMASubscriptionResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::requestIccSimAuthenticationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35requestIccSimAuthenticationResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio35requestIccSimAuthenticationResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setNetworkSelectionModeAutomaticResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40setNetworkSelectionModeAutomaticResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio40setNetworkSelectionModeAutomaticResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Exported Object: ril_service_name */
extern "C" __attribute__((visibility("default"))) void* ril_service_name = NULL;

/* Demangled: responseRadioCapability(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int, android::hardware::radio::V1_0::RadioCapability&) */
extern "C" __attribute__((visibility("default"))) int _Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvjRNS2_15RadioCapabilityE(void) {
    ALOGD("_Z23responseRadioCapabilityRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvjRNS2_15RadioCapabilityE() called");
    return 0;
}

/* Demangled: RadioImpl::setCallWaiting(int, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setCallWaitingEibi(void) {
    ALOGD("_ZN9RadioImpl14setCallWaitingEibi() called");
    return 0;
}

/* Demangled: RadioImpl::dial(int, android::hardware::radio::V1_0::Dial const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE(void) {
    ALOGD("_ZN9RadioImpl4dialEiRKN7android8hardware5radio4V1_04DialE() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal_abort(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal_abort() called");
    return 0;
}

/* Demangled: radio::cdmaNewSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13cdmaNewSmsIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio13cdmaNewSmsIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getAvailableNetworks(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getAvailableNetworksEi(void) {
    ALOGD("_ZN9RadioImpl20getAvailableNetworksEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_0::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_06IRadioE = NULL;

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal() called");
    return 0;
}

/* Demangled: radio::setCdmaBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30setCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio30setCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_0::ISapCallback>::operator=(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_012ISapCallbackEEaSERKS5_() called");
    return 0;
}

/* Exported Object: sapService */
extern "C" __attribute__((visibility("default"))) void* sapService = NULL;

/* Demangled: radio::hangupWaitingOrBackgroundResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33hangupWaitingOrBackgroundResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33hangupWaitingOrBackgroundResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setBandMode(int, android::hardware::radio::V1_0::RadioBandMode) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE(void) {
    ALOGD("_ZN9RadioImpl11setBandModeEiN7android8hardware5radio4V1_013RadioBandModeE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_1::IRadio-in-RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC9RadioImpl0_N7android8hardware5radio4V1_16IRadioE = NULL;

/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioIndication>::operator=(android::sp<android::hardware::radio::V1_0::IRadioIndication> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSERKS5_() called");
    return 0;
}

/* Demangled: RadioImpl::setSmscAddress(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl14setSmscAddressEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::setIndicationFilter(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setIndicationFilterEii(void) {
    ALOGD("_ZN9RadioImpl19setIndicationFilterEii() called");
    return 0;
}

/* Demangled: RadioImpl::getVoiceRadioTechnology(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl23getVoiceRadioTechnologyEi(void) {
    ALOGD("_ZN9RadioImpl23getVoiceRadioTechnologyEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::V1_1::ISap-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android8hardware5radio4V1_14ISapE = NULL;

/* Demangled: radio::newBroadcastSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18newBroadcastSmsIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18newBroadcastSmsIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::iccTransmitApduBasicChannel(int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_ZN9RadioImpl27iccTransmitApduBasicChannelEiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Demangled: RadioImpl::sendDtmf(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl8sendDtmfEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: pb_make_string_substream */
extern "C" __attribute__((visibility("default"))) int pb_make_string_substream(void) {
    ALOGD("pb_make_string_substream() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal_abort(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal_abort() called");
    return 0;
}

/* Demangled: radio::stkCallSetupInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15stkCallSetupIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15stkCallSetupIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getRadioCapabilityResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getRadioCapabilityResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26getRadioCapabilityResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::supplyIccPin2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27supplyIccPin2ForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27supplyIccPin2ForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setPreferredVoicePrivacyResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32setPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32setPreferredVoicePrivacyResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::nvWriteCdmaPrl(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN9RadioImpl14nvWriteCdmaPrlEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: SapImpl::connectReq(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl10connectReqEii(void) {
    ALOGD("_ZN7SapImpl10connectReqEii() called");
    return 0;
}

/* Demangled: pb_field_iter_find */
extern "C" __attribute__((visibility("default"))) int pb_field_iter_find(void) {
    ALOGD("pb_field_iter_find() called");
    return 0;
}

/* Demangled: radio::nvResetConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21nvResetConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21nvResetConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getSignalStrengthResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getSignalStrengthResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25getSignalStrengthResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::sOnUnsolicitedResponse(int, void const*, unsigned int, RIL_SOCKET_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvj13RIL_SOCKET_ID(void) {
    ALOGD("_ZN12RilSapSocket22sOnUnsolicitedResponseEiPKvj13RIL_SOCKET_ID() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioResponse>::operator=(android::sp<android::hardware::radio::V1_0::IRadioResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_014IRadioResponseEEaSERKS5_() called");
    return 0;
}

/* Demangled: RadioImpl::getDataRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getDataRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl24getDataRegistrationStateEi() called");
    return 0;
}

/* Demangled: radio::getIMSIForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21getIMSIForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21getIMSIForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::acknowledgeIncomingGsmSmsWithPduResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio40acknowledgeIncomingGsmSmsWithPduResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::acknowledgeLastIncomingCdmaSms(int, android::hardware::radio::V1_0::CdmaSmsAck const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE(void) {
    ALOGD("_ZN9RadioImpl30acknowledgeLastIncomingCdmaSmsEiRKN7android8hardware5radio4V1_010CdmaSmsAckE() called");
    return 0;
}

/* Demangled: pb_decode_tag */
extern "C" __attribute__((visibility("default"))) int pb_decode_tag(void) {
    ALOGD("pb_decode_tag() called");
    return 0;
}

/* Demangled: ril_timer_add(ril_event*, timeval*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_timer_addP9ril_eventP7timeval(void) {
    ALOGD("_Z13ril_timer_addP9ril_eventP7timeval() called");
    return 0;
}

/* Demangled: radio::getCellInfoListResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getCellInfoListResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23getCellInfoListResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::subscriptionStatusChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28subscriptionStatusChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28subscriptionStatusChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::exitEmergencyCallbackModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33exitEmergencyCallbackModeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33exitEmergencyCallbackModeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setCdmaSubscriptionSourceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio33setCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio33setCdmaSubscriptionSourceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: ril_event_loop() */
extern "C" __attribute__((visibility("default"))) int _Z14ril_event_loopv(void) {
    ALOGD("_Z14ril_event_loopv() called");
    return 0;
}

/* Demangled: radio::explicitCallTransferResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28explicitCallTransferResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28explicitCallTransferResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::releaseWakeLock() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15releaseWakeLockEv(void) {
    ALOGD("_ZN7android15releaseWakeLockEv() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaBroadcastConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22getCdmaBroadcastConfigEi(void) {
    ALOGD("_ZN9RadioImpl22getCdmaBroadcastConfigEi() called");
    return 0;
}

/* Demangled: radio::simStatusChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19simStatusChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19simStatusChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::radioCapabilityIndicationInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28radioCapabilityIndicationIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28radioCapabilityIndicationIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::cdmaSubscriptionSourceChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32cdmaSubscriptionSourceChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32cdmaSubscriptionSourceChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchIccApdu(int, int, int, android::hardware::radio::V1_0::SimApdu const&) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE(void) {
    ALOGD("_Z15dispatchIccApduiiiRKN7android8hardware5radio4V1_07SimApduE() called");
    return 0;
}

/* Demangled: RadioImpl::setUiccSubscription(int, android::hardware::radio::V1_0::SelectUiccSub const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE(void) {
    ALOGD("_ZN9RadioImpl19setUiccSubscriptionEiRKN7android8hardware5radio4V1_013SelectUiccSubE() called");
    return 0;
}

/* Demangled: RadioImpl::sendTerminalResponseToSim(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl25sendTerminalResponseToSimEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: radio::getHardwareConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25getHardwareConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25getHardwareConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setIndicationFilterResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27setIndicationFilterResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27setIndicationFilterResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getCdmaBroadcastConfigResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30getCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio30getCdmaBroadcastConfigResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: RadioImpl::deleteSmsOnRuim(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl15deleteSmsOnRuimEii(void) {
    ALOGD("_ZN9RadioImpl15deleteSmsOnRuimEii() called");
    return 0;
}

/* Demangled: radio::rejectCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18rejectCallResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18rejectCallResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::onNewCommandConnect(RIL_SOCKET_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19onNewCommandConnectE13RIL_SOCKET_ID(void) {
    ALOGD("_ZN7android19onNewCommandConnectE13RIL_SOCKET_ID() called");
    return 0;
}

/* Demangled: RadioImpl::getFacilityLockForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_(void) {
    ALOGD("_ZN9RadioImpl21getFacilityLockForAppEiRKN7android8hardware11hidl_stringES4_iS4_() called");
    return 0;
}

/* Demangled: radio::keepaliveStatusInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18keepaliveStatusIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18keepaliveStatusIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::printList() */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket9printListEv(void) {
    ALOGD("_ZN12RilSapSocket9printListEv() called");
    return 0;
}

/* Demangled: dispatchImsCdmaSms(android::hardware::radio::V1_0::ImsSmsMessage const&, android::RequestInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE(void) {
    ALOGD("_Z18dispatchImsCdmaSmsRKN7android8hardware5radio4V1_013ImsSmsMessageEPNS_11RequestInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::deleteSmsOnSim(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14deleteSmsOnSimEii(void) {
    ALOGD("_ZN9RadioImpl14deleteSmsOnSimEii() called");
    return 0;
}

/* Demangled: radio::startDtmfResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio17startDtmfResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio17startDtmfResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::startKeepalive(int, android::hardware::radio::V1_1::KeepaliveRequest const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE(void) {
    ALOGD("_ZN9RadioImpl14startKeepaliveEiRKN7android8hardware5radio4V1_116KeepaliveRequestE() called");
    return 0;
}

/* Demangled: RadioImpl::getBasebandVersion(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getBasebandVersionEi(void) {
    ALOGD("_ZN9RadioImpl18getBasebandVersionEi() called");
    return 0;
}

/* Demangled: RIL_register_socket */
extern "C" __attribute__((visibility("default"))) int RIL_register_socket(void) {
    ALOGD("RIL_register_socket() called");
    return 0;
}

/* Demangled: radio::getAvailableNetworksResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio28getAvailableNetworksResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio28getAvailableNetworksResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: pb_encode_svarint */
extern "C" __attribute__((visibility("default"))) int pb_encode_svarint(void) {
    ALOGD("pb_encode_svarint() called");
    return 0;
}

/* Demangled: radio::modemResetInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13modemResetIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio13modemResetIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getRadioCapability(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18getRadioCapabilityEi(void) {
    ALOGD("_ZN9RadioImpl18getRadioCapabilityEi() called");
    return 0;
}

/* Demangled: radio::cdmaInfoRecInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio14cdmaInfoRecIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio14cdmaInfoRecIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::supplyIccPuk2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27supplyIccPuk2ForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27supplyIccPuk2ForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: hexCharToInt(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z12hexCharToInth(void) {
    ALOGD("_Z12hexCharToInth() called");
    return 0;
}

/* Demangled: RadioImpl::sendEnvelopeWithStatus(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl22sendEnvelopeWithStatusEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vtable for RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV9RadioImpl = NULL;

/* Demangled: radio::getNeighboringCidsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getNeighboringCidsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26getNeighboringCidsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getAllowedCarriersResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26getAllowedCarriersResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26getAllowedCarriersResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setSuppServiceNotificationsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio35setSuppServiceNotificationsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio35setSuppServiceNotificationsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::writeSmsToRuimResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22writeSmsToRuimResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22writeSmsToRuimResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getNetworkSelectionModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31getNetworkSelectionModeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio31getNetworkSelectionModeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: sap::processUnsolResponse(_MsgHeader*, RilSapSocket*) */
extern "C" __attribute__((visibility("default"))) int _ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket(void) {
    ALOGD("_ZN3sap20processUnsolResponseEP10_MsgHeaderP12RilSapSocket() called");
    return 0;
}

/* Demangled: RadioImpl::setSimCardPower_1_1(int, android::hardware::radio::V1_1::CardPowerState) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE(void) {
    ALOGD("_ZN9RadioImpl19setSimCardPower_1_1EiN7android8hardware5radio4V1_114CardPowerStateE() called");
    return 0;
}

/* Demangled: radio::sendCdmaSmsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19sendCdmaSmsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19sendCdmaSmsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::imsNetworkStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25imsNetworkStateChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25imsNetworkStateChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::supplyNetworkDepersonalizationResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio38supplyNetworkDepersonalizationResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio38supplyNetworkDepersonalizationResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::onUnsolicitedResponse(int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket21onUnsolicitedResponseEiPvj(void) {
    ALOGD("_ZN12RilSapSocket21onUnsolicitedResponseEiPvj() called");
    return 0;
}

/* Demangled: makeSendSmsResult(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void) {
    ALOGD("_Z17makeSendSmsResultRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertCharPtrToHidlString(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26convertCharPtrToHidlStringPKc(void) {
    ALOGD("_Z26convertCharPtrToHidlStringPKc() called");
    return 0;
}

/* Demangled: pb_read */
extern "C" __attribute__((visibility("default"))) int pb_read(void) {
    ALOGD("pb_read() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal() called");
    return 0;
}

/* Demangled: radio::changeIccPin2ForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27changeIccPin2ForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27changeIccPin2ForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setNetworkSelectionModeManualResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio37setNetworkSelectionModeManualResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio37setNetworkSelectionModeManualResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::hangupWaitingOrBackground(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25hangupWaitingOrBackgroundEi(void) {
    ALOGD("_ZN9RadioImpl25hangupWaitingOrBackgroundEi() called");
    return 0;
}

/* Demangled: SapImpl::checkReturnStatus(android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void) {
    ALOGD("_ZN7SapImpl17checkReturnStatusERN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: RIL_onRequestAck */
extern "C" __attribute__((visibility("default"))) int RIL_onRequestAck(void) {
    ALOGD("RIL_onRequestAck() called");
    return 0;
}

/* Demangled: radio::sendCDMAFeatureCodeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio27sendCDMAFeatureCodeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio27sendCDMAFeatureCodeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RilSapSocket::sOnRequestComplete(void*, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_j(void) {
    ALOGD("_ZN12RilSapSocket18sOnRequestCompleteEPv9RIL_ErrnoS0_j() called");
    return 0;
}

/* Demangled: OemHookImpl::sendRequestStrings(int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OemHookImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE(void) {
    ALOGD("_ZN11OemHookImpl18sendRequestStringsEiRKN7android8hardware8hidl_vecINS1_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for OemHookImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV11OemHookImpl = NULL;

/* Exported Object: mCounterRadio */
extern "C" __attribute__((visibility("default"))) void* mCounterRadio = NULL;

/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal() called");
    return 0;
}

/* Demangled: radio::cancelPendingUssdResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cancelPendingUssdResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25cancelPendingUssdResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getFacilityLockForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getFacilityLockForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29getFacilityLockForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setPreferredNetworkTypeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio31setPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio31setPreferredNetworkTypeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertRilKeepaliveStatusToHal(RIL_KeepaliveStatus const*, android::hardware::radio::V1_1::KeepaliveStatus&) */
extern "C" __attribute__((visibility("default"))) int _Z30convertRilKeepaliveStatusToHalPK19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE(void) {
    ALOGD("_Z30convertRilKeepaliveStatusToHalPK19RIL_KeepaliveStatusRN7android8hardware5radio4V1_115KeepaliveStatusE() called");
    return 0;
}

/* Demangled: convertApduResponseProtoToHal(_RIL_SIM_SAP_APDU_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response(void) {
    ALOGD("_Z29convertApduResponseProtoToHal30_RIL_SIM_SAP_APDU_RSP_Response() called");
    return 0;
}

/* Demangled: radio::indicateRingbackToneInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23indicateRingbackToneIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23indicateRingbackToneIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getIccCardStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24getIccCardStatusResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24getIccCardStatusResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::sendEnvelopeWithStatusResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30sendEnvelopeWithStatusResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio30sendEnvelopeWithStatusResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::restrictedStateChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25restrictedStateChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25restrictedStateChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::supplyIccPinForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26supplyIccPinForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26supplyIccPinForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: pb_skip_field */
extern "C" __attribute__((visibility("default"))) int pb_skip_field(void) {
    ALOGD("pb_skip_field() called");
    return 0;
}

/* Demangled: radio::pullLceDataResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19pullLceDataResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19pullLceDataResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: responseInt(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void) {
    ALOGD("_Z11responseIntRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getTTYMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10getTTYModeEi(void) {
    ALOGD("_ZN9RadioImpl10getTTYModeEi() called");
    return 0;
}

/* Demangled: RadioImpl::cancelPendingUssd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17cancelPendingUssdEi(void) {
    ALOGD("_ZN9RadioImpl17cancelPendingUssdEi() called");
    return 0;
}

/* Demangled: RadioImpl::sendSms(int, android::hardware::radio::V1_0::GsmSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE(void) {
    ALOGD("_ZN9RadioImpl7sendSmsEiRKN7android8hardware5radio4V1_013GsmSmsMessageE() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: ril_event_add(ril_event*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_addP9ril_event(void) {
    ALOGD("_Z13ril_event_addP9ril_event() called");
    return 0;
}

/* Demangled: radio::getClipResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getClipResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15getClipResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: constructCdmaSms(RIL_CDMA_SMS_Message&, android::hardware::radio::V1_0::CdmaSmsMessage const&) */
extern "C" __attribute__((visibility("default"))) int _Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE(void) {
    ALOGD("_Z16constructCdmaSmsR20RIL_CDMA_SMS_MessageRKN7android8hardware5radio4V1_014CdmaSmsMessageE() called");
    return 0;
}

/* Demangled: RadioImpl::setNetworkSelectionModeManual(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl29setNetworkSelectionModeManualEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: RadioImpl::stopKeepalive(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13stopKeepaliveEii(void) {
    ALOGD("_ZN9RadioImpl13stopKeepaliveEii() called");
    return 0;
}

/* Demangled: RadioImpl::getDeviceIdentity(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17getDeviceIdentityEi(void) {
    ALOGD("_ZN9RadioImpl17getDeviceIdentityEi() called");
    return 0;
}

/* Demangled: RadioImpl::getCdmaRoamingPreference(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24getCdmaRoamingPreferenceEi(void) {
    ALOGD("_ZN9RadioImpl24getCdmaRoamingPreferenceEi() called");
    return 0;
}

/* Demangled: RadioImpl::exitEmergencyCallbackMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25exitEmergencyCallbackModeEi(void) {
    ALOGD("_ZN9RadioImpl25exitEmergencyCallbackModeEi() called");
    return 0;
}

/* Exported Object: VTT for OemHookImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT11OemHookImpl = NULL;

/* Demangled: radio::pcoDataInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio10pcoDataIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio10pcoDataIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::acceptCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18acceptCallResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18acceptCallResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchCallForwardStatus(int, int, int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_Z25dispatchCallForwardStatusiiiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::setBarringPassword(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl18setBarringPasswordEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::sendUssd(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl8sendUssdEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: convertResetSimResponseProtoToHal(_RIL_SIM_SAP_RESET_SIM_RSP_Response) */
extern "C" __attribute__((visibility("default"))) int _Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response(void) {
    ALOGD("_Z33convertResetSimResponseProtoToHal35_RIL_SIM_SAP_RESET_SIM_RSP_Response() called");
    return 0;
}

/* Demangled: pb_encode_fixed32 */
extern "C" __attribute__((visibility("default"))) int pb_encode_fixed32(void) {
    ALOGD("pb_encode_fixed32() called");
    return 0;
}

/* Demangled: radio::sendDeviceStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23sendDeviceStateResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23sendDeviceStateResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: pb_decode */
extern "C" __attribute__((visibility("default"))) int pb_decode(void) {
    ALOGD("pb_decode() called");
    return 0;
}

/* Demangled: radio::rilConnectedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15rilConnectedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15rilConnectedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertOperatorStatusToInt(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26convertOperatorStatusToIntPKc(void) {
    ALOGD("_Z26convertOperatorStatusToIntPKc() called");
    return 0;
}

/* Demangled: pb_encode_string */
extern "C" __attribute__((visibility("default"))) int pb_encode_string(void) {
    ALOGD("pb_encode_string() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal() called");
    return 0;
}

/* Demangled: radio::oemHookRawInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio13oemHookRawIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio13oemHookRawIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: Ril_queue<RilSapSocket::SapSocketRequest>::checkAndDequeue(_MsgId, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE15checkAndDequeueE6_MsgIdi(void) {
    ALOGD("_ZN9Ril_queueIN12RilSapSocket16SapSocketRequestEE15checkAndDequeueE6_MsgIdi() called");
    return 0;
}

/* Demangled: convertRilSignalStrengthToHal(void*, unsigned int, android::hardware::radio::V1_0::SignalStrength&) */
extern "C" __attribute__((visibility("default"))) int _Z29convertRilSignalStrengthToHalPvjRN7android8hardware5radio4V1_014SignalStrengthE(void) {
    ALOGD("_Z29convertRilSignalStrengthToHalPvjRN7android8hardware5radio4V1_014SignalStrengthE() called");
    return 0;
}

/* Demangled: RadioImpl::setCallForward(int, android::hardware::radio::V1_0::CallForwardInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE(void) {
    ALOGD("_ZN9RadioImpl14setCallForwardEiRKN7android8hardware5radio4V1_015CallForwardInfoE() called");
    return 0;
}

/* Demangled: RadioImpl::deactivateDataCall(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl18deactivateDataCallEiib(void) {
    ALOGD("_ZN9RadioImpl18deactivateDataCallEiib() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: radio::resendIncallMuteInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19resendIncallMuteIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19resendIncallMuteIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::nvWriteCdmaPrlResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22nvWriteCdmaPrlResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22nvWriteCdmaPrlResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::setSimCardPowerResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23setSimCardPowerResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23setSimCardPowerResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::cdmaRuimSmsStorageFullInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cdmaRuimSmsStorageFullIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25cdmaRuimSmsStorageFullIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::reportStkServiceIsRunning(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25reportStkServiceIsRunningEi(void) {
    ALOGD("_ZN9RadioImpl25reportStkServiceIsRunningEi() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaSubscriptionSource(int, android::hardware::radio::V1_0::CdmaSubscriptionSource) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE(void) {
    ALOGD("_ZN9RadioImpl25setCdmaSubscriptionSourceEiN7android8hardware5radio4V1_022CdmaSubscriptionSourceE() called");
    return 0;
}

/* Demangled: SapImpl::transferAtrReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl14transferAtrReqEi(void) {
    ALOGD("_ZN7SapImpl14transferAtrReqEi() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: radio::stopNetworkScanResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23stopNetworkScanResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23stopNetworkScanResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::hangupForegroundResumeBackgroundResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio40hangupForegroundResumeBackgroundResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio40hangupForegroundResumeBackgroundResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchStrings(int, int, int, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_Z15dispatchStringsiiiRKN7android8hardware8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioResponse>::operator=(android::hardware::radio::V1_1::IRadioResponse*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_114IRadioResponseEEaSEPS4_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::radio::deprecated::V1_0::IOemHook-in-OemHookImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC11OemHookImpl0_N7android8hardware5radio10deprecated4V1_08IOemHookE = NULL;

/* Demangled: radio::setSmscAddressResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22setSmscAddressResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22setSmscAddressResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: pb_encode_nullterminated */
extern "C" __attribute__((visibility("default"))) int pb_encode_nullterminated(void) {
    ALOGD("pb_encode_nullterminated() called");
    return 0;
}

/* Demangled: ril_event_del(ril_event*) */
extern "C" __attribute__((visibility("default"))) int _Z13ril_event_delP9ril_event(void) {
    ALOGD("_Z13ril_event_delP9ril_event() called");
    return 0;
}

/* Demangled: radio::setupDataCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21setupDataCallResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21setupDataCallResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: responseIntOrEmpty(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void) {
    ALOGD("_Z18responseIntOrEmptyRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setTTYMode(int, android::hardware::radio::V1_0::TtyMode) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE(void) {
    ALOGD("_ZN9RadioImpl10setTTYModeEiN7android8hardware5radio4V1_07TtyModeE() called");
    return 0;
}

/* Demangled: pb_encode */
extern "C" __attribute__((visibility("default"))) int pb_encode(void) {
    ALOGD("pb_encode() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal() called");
    return 0;
}

/* Exported Object: ril_service_name_base */
extern "C" __attribute__((visibility("default"))) void* ril_service_name_base = NULL;

/* Demangled: RilSapSocket::RilSapSocket(char const*, RIL_SOCKET_ID, RIL_RadioFunctions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RilSapSocketC1EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions(void) {
    ALOGD("_ZN12RilSapSocketC1EPKc13RIL_SOCKET_IDPK18RIL_RadioFunctions() called");
    return 0;
}

/* Demangled: pb_write */
extern "C" __attribute__((visibility("default"))) int pb_write(void) {
    ALOGD("pb_write() called");
    return 0;
}

/* Demangled: radio::getMuteResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getMuteResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15getMuteResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::newSmsStatusReportInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21newSmsStatusReportIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21newSmsStatusReportIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::startLceServiceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23startLceServiceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23startLceServiceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::getVoiceRegistrationState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl25getVoiceRegistrationStateEi(void) {
    ALOGD("_ZN9RadioImpl25getVoiceRegistrationStateEi() called");
    return 0;
}

/* Exported Object: VTT for RadioImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT9RadioImpl = NULL;

/* Demangled: pb_encode_varint */
extern "C" __attribute__((visibility("default"))) int pb_encode_varint(void) {
    ALOGD("pb_encode_varint() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal() called");
    return 0;
}

/* Demangled: RadioImpl::stopLceService(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl14stopLceServiceEi(void) {
    ALOGD("_ZN9RadioImpl14stopLceServiceEi() called");
    return 0;
}

/* Demangled: radio::setNitzTimeReceived(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19setNitzTimeReceivedEil(void) {
    ALOGD("_ZN5radio19setNitzTimeReceivedEil() called");
    return 0;
}

/* Demangled: radio::setCdmaRoamingPreferenceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32setCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32setCdmaRoamingPreferenceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::startDtmf(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl9startDtmfEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal_abort() called");
    return 0;
}

/* Exported Object: mCounterOemHook */
extern "C" __attribute__((visibility("default"))) void* mCounterOemHook = NULL;

/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: radio::setRadioPowerResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21setRadioPowerResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio21setRadioPowerResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::voiceRadioTechChangedInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio24voiceRadioTechChangedIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio24voiceRadioTechChangedIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: populateResponseInfo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno) */
extern "C" __attribute__((visibility("default"))) int _Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno(void) {
    ALOGD("_Z20populateResponseInfoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_Errno() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPuk2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_(void) {
    ALOGD("_ZN9RadioImpl19supplyIccPuk2ForAppEiRKN7android8hardware11hidl_stringES4_S4_() called");
    return 0;
}

/* Demangled: RadioImpl::iccOpenLogicalChannel(int, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi(void) {
    ALOGD("_ZN9RadioImpl21iccOpenLogicalChannelEiRKN7android8hardware11hidl_stringEi() called");
    return 0;
}

/* Demangled: RadioImpl::reportSmsMemoryStatus(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21reportSmsMemoryStatusEib(void) {
    ALOGD("_ZN9RadioImpl21reportSmsMemoryStatusEib() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaBroadcastConfig(int, android::hardware::hidl_vec<android::hardware::radio::V1_0::CdmaBroadcastSmsConfigInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE(void) {
    ALOGD("_ZN9RadioImpl22setCdmaBroadcastConfigEiRKN7android8hardware8hidl_vecINS1_5radio4V1_026CdmaBroadcastSmsConfigInfoEEE() called");
    return 0;
}

/* Demangled: pb_decode_fixed64 */
extern "C" __attribute__((visibility("default"))) int pb_decode_fixed64(void) {
    ALOGD("pb_decode_fixed64() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: radio::cdmaOtaProvisionStatusInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio25cdmaOtaProvisionStatusIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio25cdmaOtaProvisionStatusIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::acceptCall(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl10acceptCallEi(void) {
    ALOGD("_ZN9RadioImpl10acceptCallEi() called");
    return 0;
}

/* Demangled: RadioImpl::getClip(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl7getClipEi(void) {
    ALOGD("_ZN9RadioImpl7getClipEi() called");
    return 0;
}

/* Demangled: pb_encode_submessage */
extern "C" __attribute__((visibility("default"))) int pb_encode_submessage(void) {
    ALOGD("pb_encode_submessage() called");
    return 0;
}

/* Demangled: radio::getClirResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15getClirResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio15getClirResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::registerService(RIL_RadioFunctions*, android::CommandInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE(void) {
    ALOGD("_ZN5radio15registerServiceEP18RIL_RadioFunctionsPN7android11CommandInfoE() called");
    return 0;
}

/* Demangled: radio::iccCloseLogicalChannelResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio30iccCloseLogicalChannelResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio30iccCloseLogicalChannelResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: responseIccIo(android::hardware::radio::V1_0::RadioResponseInfo&, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj(void) {
    ALOGD("_Z13responseIccIoRN7android8hardware5radio4V1_017RadioResponseInfoEii9RIL_ErrnoPvj() called");
    return 0;
}

/* Exported Object: oemHookService */
extern "C" __attribute__((visibility("default"))) void* oemHookService = NULL;

/* Demangled: radio::stopLceServiceResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22stopLceServiceResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22stopLceServiceResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_1::IRadioIndication>::operator=(android::hardware::radio::V1_1::IRadioIndication*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_116IRadioIndicationEEaSEPS4_() called");
    return 0;
}

/* Demangled: RadioImpl::getIccCardStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl16getIccCardStatusEi(void) {
    ALOGD("_ZN9RadioImpl16getIccCardStatusEi() called");
    return 0;
}

/* Exported Object: s_vendorFunctions */
extern "C" __attribute__((visibility("default"))) void* s_vendorFunctions = NULL;

/* Demangled: radio::setBarringPasswordResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26setBarringPasswordResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26setBarringPasswordResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::iccCloseLogicalChannel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl22iccCloseLogicalChannelEii(void) {
    ALOGD("_ZN9RadioImpl22iccCloseLogicalChannelEii() called");
    return 0;
}

/* Demangled: radio::getSmscAddressResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio22getSmscAddressResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio22getSmscAddressResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: dispatchString(int, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14dispatchStringiiiPKc(void) {
    ALOGD("_Z14dispatchStringiiiPKc() called");
    return 0;
}

/* Demangled: OemHookImpl::sendRequestRaw(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OemHookImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN11OemHookImpl14sendRequestRawEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-SapImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC7SapImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: pb_release */
extern "C" __attribute__((visibility("default"))) int pb_release(void) {
    ALOGD("pb_release() called");
    return 0;
}

/* Demangled: radio::simSmsStorageFullInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio20simSmsStorageFullIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio20simSmsStorageFullIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::deactivateDataCallResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26deactivateDataCallResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26deactivateDataCallResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: convertRilHardwareConfigListToHal(void*, unsigned int, android::hardware::hidl_vec<android::hardware::radio::V1_0::HardwareConfig>&) */
extern "C" __attribute__((visibility("default"))) int _Z33convertRilHardwareConfigListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_014HardwareConfigEEE(void) {
    ALOGD("_Z33convertRilHardwareConfigListToHalPvjRN7android8hardware8hidl_vecINS1_5radio4V1_014HardwareConfigEEE() called");
    return 0;
}

/* Demangled: RadioImpl::setCdmaRoamingPreference(int, android::hardware::radio::V1_0::CdmaRoamingType) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE(void) {
    ALOGD("_ZN9RadioImpl24setCdmaRoamingPreferenceEiN7android8hardware5radio4V1_015CdmaRoamingTypeE() called");
    return 0;
}

/* Exported Object: radioService */
extern "C" __attribute__((visibility("default"))) void* radioService = NULL;

/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal_abort() called");
    return 0;
}

/* Demangled: radio::setBandModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio19setBandModeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio19setBandModeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse>::operator=(android::sp<android::hardware::radio::deprecated::V1_0::IOemHookResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSERKS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio10deprecated4V1_016IOemHookResponseEEaSERKS6_() called");
    return 0;
}

/* Demangled: RadioImpl::getLastCallFailCause(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl20getLastCallFailCauseEi(void) {
    ALOGD("_ZN9RadioImpl20getLastCallFailCauseEi() called");
    return 0;
}

/* Demangled: pb_istream_from_buffer */
extern "C" __attribute__((visibility("default"))) int pb_istream_from_buffer(void) {
    ALOGD("pb_istream_from_buffer() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::radio::V1_0::IRadioIndication>::operator=(android::hardware::radio::V1_0::IRadioIndication*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_8hardware5radio4V1_016IRadioIndicationEEaSEPS4_() called");
    return 0;
}

/* Demangled: RadioImpl::getImsiForApp(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN9RadioImpl13getImsiForAppEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: radio::getRadioServiceRwlock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio21getRadioServiceRwlockEi(void) {
    ALOGD("_ZN5radio21getRadioServiceRwlockEi() called");
    return 0;
}

/* Demangled: isServiceTypeCfQuery(RIL_SsServiceType, RIL_SsRequestType) */
extern "C" __attribute__((visibility("default"))) int _Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType(void) {
    ALOGD("_Z20isServiceTypeCfQuery17RIL_SsServiceType17RIL_SsRequestType() called");
    return 0;
}

/* Demangled: RadioImpl::supplyIccPin2ForApp(int, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_(void) {
    ALOGD("_ZN9RadioImpl19supplyIccPin2ForAppEiRKN7android8hardware11hidl_stringES4_() called");
    return 0;
}

/* Demangled: pb_ostream_from_buffer */
extern "C" __attribute__((visibility("default"))) int pb_ostream_from_buffer(void) {
    ALOGD("pb_ostream_from_buffer() called");
    return 0;
}

/* Demangled: radio::getCurrentCallsResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio23getCurrentCallsResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio23getCurrentCallsResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::getDataRegistrationStateResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio32getDataRegistrationStateResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio32getDataRegistrationStateResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: radio::newSmsInd(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio9newSmsIndEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio9newSmsIndEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: fillCellIdentityFromDataRegStateResponseString(android::hardware::radio::V1_0::CellIdentity&, int, char**) */
extern "C" __attribute__((visibility("default"))) int _Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc(void) {
    ALOGD("_Z46fillCellIdentityFromDataRegStateResponseStringRN7android8hardware5radio4V1_012CellIdentityEiPPc() called");
    return 0;
}

/* Demangled: SapImpl::disconnectReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl13disconnectReqEi(void) {
    ALOGD("_ZN7SapImpl13disconnectReqEi() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: ril_event_init() */
extern "C" __attribute__((visibility("default"))) int _Z14ril_event_initv(void) {
    ALOGD("_Z14ril_event_initv() called");
    return 0;
}

/* Demangled: radio::getTTYModeResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio18getTTYModeResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio18getTTYModeResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: android::addRequestToList(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16addRequestToListEiii(void) {
    ALOGD("_ZN7android16addRequestToListEiii() called");
    return 0;
}

/* Demangled: RadioImpl::checkReturnStatus(android::hardware::Return<void>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE(void) {
    ALOGD("_ZN9RadioImpl17checkReturnStatusERN7android8hardware6ReturnIvEE() called");
    return 0;
}

/* Demangled: SapImpl::setCallback(android::sp<android::hardware::radio::V1_0::ISapCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE(void) {
    ALOGD("_ZN7SapImpl11setCallbackERKN7android2spINS0_8hardware5radio4V1_012ISapCallbackEEE() called");
    return 0;
}

/* Demangled: radio::getAvailableBandModesResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio29getAvailableBandModesResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio29getAvailableBandModesResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: RadioImpl::setFacilityLockForApp(int, android::hardware::hidl_string const&, bool, android::hardware::hidl_string const&, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_(void) {
    ALOGD("_ZN9RadioImpl21setFacilityLockForAppEiRKN7android8hardware11hidl_stringEbS4_iS4_() called");
    return 0;
}

/* Demangled: radio::changeIccPinForAppResponse(int, int, int, RIL_Errno, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5radio26changeIccPinForAppResponseEiii9RIL_ErrnoPvj(void) {
    ALOGD("_ZN5radio26changeIccPinForAppResponseEiii9RIL_ErrnoPvj() called");
    return 0;
}

/* Demangled: rilSocketIdToString */
extern "C" __attribute__((visibility("default"))) int rilSocketIdToString(void) {
    ALOGD("rilSocketIdToString() called");
    return 0;
}

/* Demangled: convertResponseStringEntryToInt(char**, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z31convertResponseStringEntryToIntPPcii(void) {
    ALOGD("_Z31convertResponseStringEntryToIntPPcii() called");
    return 0;
}

/* Demangled: RadioImpl::setSuppServiceNotifications(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9RadioImpl27setSuppServiceNotificationsEib(void) {
    ALOGD("_ZN9RadioImpl27setSuppServiceNotificationsEib() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-OemHookImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC11OemHookImpl0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal_abort() called");
    return 0;
}
