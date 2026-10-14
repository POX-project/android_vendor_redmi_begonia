package com.mediatek.engineermode.aospradio;

import android.hardware.radio.V1_0.ActivityStatsInfo;
import android.hardware.radio.V1_0.Call;
import android.hardware.radio.V1_0.CallForwardInfo;
import android.hardware.radio.V1_0.CardStatus;
import android.hardware.radio.V1_0.CarrierRestrictions;
import android.hardware.radio.V1_0.CdmaBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.CellInfo;
import android.hardware.radio.V1_0.DataRegStateResult;
import android.hardware.radio.V1_0.GsmBroadcastSmsConfigInfo;
import android.hardware.radio.V1_0.HardwareConfig;
import android.hardware.radio.V1_0.IccIoResult;
import android.hardware.radio.V1_0.LastCallFailCauseInfo;
import android.hardware.radio.V1_0.LceDataInfo;
import android.hardware.radio.V1_0.LceStatusInfo;
import android.hardware.radio.V1_0.NeighboringCell;
import android.hardware.radio.V1_0.OperatorInfo;
import android.hardware.radio.V1_0.RadioCapability;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.SendSmsResult;
import android.hardware.radio.V1_0.SetupDataCallResult;
import android.hardware.radio.V1_0.SignalStrength;
import android.hardware.radio.V1_0.VoiceRegStateResult;
import android.hardware.radio.V1_1.KeepaliveStatus;
import android.hardware.radio.V1_3.IRadioResponse;
import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.RIL;
import com.mediatek.engineermode.Elog;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class RadioResponse extends IRadioResponse.Stub {
    private static final String TAG = "RadioResponse";
    private boolean isEnabledLast = true;

    public RadioResponse(RIL ril) {
    }

    private void sendMessageResponse(Message message, Object obj) {
        if (message != null) {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
        }
    }

    private void sendMessageResponseError(Message message, int i, Object obj) {
        CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(i);
        if (message != null) {
            AsyncResult.forMessage(message, obj, commandExceptionFromRilErrno);
            message.sendToTarget();
        }
    }

    public void acceptCallResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in acceptCallResponse");
    }

    public void acknowledgeIncomingGsmSmsWithPduResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in acknowledgeIncomingGsmSmsWithPduResponse");
    }

    public void acknowledgeLastIncomingCdmaSmsResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in acknowledgeLastIncomingCdmaSmsResponse");
    }

    public void acknowledgeLastIncomingGsmSmsResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in acknowledgeLastIncomingGsmSmsResponse");
    }

    public void acknowledgeRequest(int i) {
        Elog.d(TAG, "No implementation in acknowledgeRequest");
    }

    public void cancelPendingUssdResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in cancelPendingUssdResponse");
    }

    public void changeIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in changeIccPin2ForAppResponse");
    }

    public void changeIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in changeIccPinForAppResponse");
    }

    public void conferenceResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in conferenceResponse");
    }

    public void deactivateDataCallResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in deactivateDataCallResponse");
    }

    public void deleteSmsOnRuimResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in deleteSmsOnRuimResponse");
    }

    public void deleteSmsOnSimResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in deleteSmsOnSimResponse");
    }

    public void dialResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in dialResponse");
    }

    public void enableModemResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "enableModemResponse ");
        Message message = EmRadioHidlAosp.mRequestList.get(radioResponseInfo.serial);
        if (message != null) {
            EmRadioHidlAosp.mRequestList.remove(radioResponseInfo.serial);
        }
        if (radioResponseInfo.error == 0) {
            sendMessageResponse(message, null);
        } else {
            sendMessageResponseError(message, radioResponseInfo.error, null);
        }
    }

    public void exitEmergencyCallbackModeResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in exitEmergencyCallbackModeResponse");
    }

    public void explicitCallTransferResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in explicitCallTransferResponse");
    }

    public void getAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, boolean z, CarrierRestrictions carrierRestrictions) {
        Elog.d(TAG, "No implementation in getAllowedCarriersResponse");
    }

    public void getAvailableBandModesResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        Elog.d(TAG, "No implementation in getAvailableBandModesResponse");
    }

    public void getAvailableNetworksResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfo> arrayList) {
        Elog.d(TAG, "No implementation in getAvailableNetworksResponse");
    }

    public void getBasebandVersionResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in getBasebandVersionResponse");
    }

    public void getCDMASubscriptionResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4, String str5) {
        Elog.d(TAG, "No implementation in getCDMASubscriptionResponse");
    }

    public void getCallForwardStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfo> arrayList) {
        Elog.d(TAG, "No implementation in getCallForwardStatusResponse");
    }

    public void getCallWaitingResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) {
        Elog.d(TAG, "No implementation in getCallWaitingResponse");
    }

    public void getCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<CdmaBroadcastSmsConfigInfo> arrayList) {
        Elog.d(TAG, "No implementation in getCdmaBroadcastConfigResponse");
    }

    public void getCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getCdmaRoamingPreferenceResponse");
    }

    public void getCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getCdmaSubscriptionSourceResponse");
    }

    public void getCellInfoListResponse(RadioResponseInfo radioResponseInfo, ArrayList<CellInfo> arrayList) {
        Elog.d(TAG, "No implementation in getCellInfoListResponse");
    }

    public void getCellInfoListResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.CellInfo> arrayList) {
        Elog.d(TAG, "No implementation in getCellInfoListResponse_1_2");
    }

    public void getClipResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getClipResponse");
    }

    public void getClirResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        Elog.d(TAG, "No implementation in getClirResponse");
    }

    public void getCurrentCallsResponse(RadioResponseInfo radioResponseInfo, ArrayList<Call> arrayList) {
        Elog.d(TAG, "No implementation in getCurrentCallsResponse");
    }

    public void getCurrentCallsResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.Call> arrayList) {
        Elog.d(TAG, "No implementation in getCurrentCallsResponse_1_2");
    }

    public void getDataCallListResponse(RadioResponseInfo radioResponseInfo, ArrayList<SetupDataCallResult> arrayList) {
        Elog.d(TAG, "No implementation in getDataCallListResponse");
    }

    public void getDataRegistrationStateResponse(RadioResponseInfo radioResponseInfo, DataRegStateResult dataRegStateResult) {
        Elog.d(TAG, "No implementation in getDataRegistrationStateResponse");
    }

    public void getDataRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.DataRegStateResult dataRegStateResult) {
        Elog.d(TAG, "No implementation in getDataRegistrationStateResponse_1_2");
    }

    public void getDeviceIdentityResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4) {
        Elog.d(TAG, "No implementation in getDeviceIdentityResponse");
    }

    public void getFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getFacilityLockForAppResponse");
    }

    public void getGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<GsmBroadcastSmsConfigInfo> arrayList) {
        Elog.d(TAG, "No implementation in getGsmBroadcastConfigResponse");
    }

    public void getHardwareConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<HardwareConfig> arrayList) {
        Elog.d(TAG, "No implementation in getHardwareConfigResponse");
    }

    public void getIMSIForAppResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in getIMSIForAppResponse");
    }

    public void getIccCardStatusResponse(RadioResponseInfo radioResponseInfo, CardStatus cardStatus) {
        Elog.d(TAG, "No implementation in getIccCardStatusResponse");
    }

    public void getIccCardStatusResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.CardStatus cardStatus) {
        Elog.d(TAG, "No implementation in getIccCardStatusResponse_1_2");
    }

    public void getImsRegistrationStateResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) {
        Elog.d(TAG, "No implementation in getImsRegistrationStateResponse");
    }

    public void getLastCallFailCauseResponse(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) {
        Elog.d(TAG, "No implementation in getLastCallFailCauseResponse");
    }

    public void getModemActivityInfoResponse(RadioResponseInfo radioResponseInfo, ActivityStatsInfo activityStatsInfo) {
        Elog.d(TAG, "No implementation in getModemActivityInfoResponse");
    }

    public void getModemStackStatusResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        Elog.d(TAG, "getModemStatusResponse isEnabled = " + z + ", Last: " + this.isEnabledLast);
        Message messageObtainMessage = EmRadioHidlAosp.mHandler.obtainMessage(EmRadioHidlAosp.mWhat);
        if (!z) {
            this.isEnabledLast = false;
            return;
        }
        if (z && !this.isEnabledLast && radioResponseInfo.error == 0) {
            sendMessageResponse(messageObtainMessage, Boolean.valueOf(z));
            this.isEnabledLast = z;
        } else if (radioResponseInfo.error != 0) {
            sendMessageResponseError(messageObtainMessage, radioResponseInfo.error, Boolean.valueOf(z));
        }
    }

    public void getMuteResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        Elog.d(TAG, "No implementation in getMuteResponse");
    }

    public void getNeighboringCidsResponse(RadioResponseInfo radioResponseInfo, ArrayList<NeighboringCell> arrayList) {
        Elog.d(TAG, "No implementation in getNeighboringCidsResponse");
    }

    public void getNetworkSelectionModeResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        Elog.d(TAG, "No implementation in getNetworkSelectionModeResponse");
    }

    public void getOperatorResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3) {
        Elog.d(TAG, "No implementation in getOperatorResponse");
    }

    public void getPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getPreferredNetworkTypeResponse");
    }

    public void getPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        Elog.d(TAG, "No implementation in getPreferredVoicePrivacyResponse");
    }

    public void getRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) {
        Elog.d(TAG, "No implementation in getRadioCapabilityResponse");
    }

    public void getSignalStrengthResponse(RadioResponseInfo radioResponseInfo, SignalStrength signalStrength) {
        Elog.d(TAG, "No implementation in getSignalStrengthResponse");
    }

    public void getSignalStrengthResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.SignalStrength signalStrength) {
        Elog.d(TAG, "No implementation in getSignalStrengthResponse_1_2");
    }

    public void getSmscAddressResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in getSmscAddressResponse");
    }

    public void getTTYModeResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getTTYModeResponse");
    }

    public void getVoiceRadioTechnologyResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in getVoiceRadioTechnologyResponse");
    }

    public void getVoiceRegistrationStateResponse(RadioResponseInfo radioResponseInfo, VoiceRegStateResult voiceRegStateResult) {
        Elog.d(TAG, "No implementation in getVoiceRegistrationStateResponse");
    }

    public void getVoiceRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.VoiceRegStateResult voiceRegStateResult) {
        Elog.d(TAG, "No implementation in getVoiceRegistrationStateResponse_1_2");
    }

    public void handleStkCallSetupRequestFromSimResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in handleStkCallSetupRequestFromSimResponse");
    }

    public void hangupConnectionResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in hangupConnectionResponse");
    }

    public void hangupForegroundResumeBackgroundResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in hangupForegroundResumeBackgroundResponse");
    }

    public void hangupWaitingOrBackgroundResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in hangupWaitingOrBackgroundResponse");
    }

    public void iccCloseLogicalChannelResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in iccCloseLogicalChannelResponse");
    }

    public void iccIOForAppResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        Elog.d(TAG, "No implementation in iccIOForAppResponse");
    }

    public void iccOpenLogicalChannelResponse(RadioResponseInfo radioResponseInfo, int i, ArrayList<Byte> arrayList) {
        Elog.d(TAG, "No implementation in iccOpenLogicalChannelResponse");
    }

    public void iccTransmitApduBasicChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        Elog.d(TAG, "No implementation in iccTransmitApduBasicChannelResponse");
    }

    public void iccTransmitApduLogicalChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        Elog.d(TAG, "No implementation in iccTransmitApduLogicalChannelResponse");
    }

    public void nvReadItemResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in nvReadItemResponse");
    }

    public void nvResetConfigResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in nvResetConfigResponse");
    }

    public void nvWriteCdmaPrlResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in nvWriteCdmaPrlResponse");
    }

    public void nvWriteItemResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in nvWriteItemResponse");
    }

    public void pullLceDataResponse(RadioResponseInfo radioResponseInfo, LceDataInfo lceDataInfo) {
        Elog.d(TAG, "No implementation in pullLceDataResponse");
    }

    public void rejectCallResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in rejectCallResponse");
    }

    public void reportSmsMemoryStatusResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in reportSmsMemoryStatusResponse");
    }

    public void reportStkServiceIsRunningResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in reportStkServiceIsRunningResponse");
    }

    public void requestIccSimAuthenticationResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        Elog.d(TAG, "No implementation in requestIccSimAuthenticationResponse");
    }

    public void requestIsimAuthenticationResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in requestIsimAuthenticationResponse");
    }

    public void requestShutdownResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in requestShutdownResponse");
    }

    public void resetModemStatus() {
        this.isEnabledLast = false;
    }

    public void sendBurstDtmfResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendBurstDtmfResponse");
    }

    public void sendCDMAFeatureCodeResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendCDMAFeatureCodeResponse");
    }

    public void sendCdmaSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        Elog.d(TAG, "No implementation in sendCdmaSmsResponse");
    }

    public void sendDeviceStateResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendDeviceStateResponse");
    }

    public void sendDtmfResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendDtmfResponse");
    }

    public void sendEnvelopeResponse(RadioResponseInfo radioResponseInfo, String str) {
        Elog.d(TAG, "No implementation in sendEnvelopeResponse");
    }

    public void sendEnvelopeWithStatusResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        Elog.d(TAG, "No implementation in sendEnvelopeWithStatusResponse");
    }

    public void sendImsSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        Elog.d(TAG, "No implementation in sendImsSmsResponse");
    }

    public void sendSMSExpectMoreResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        Elog.d(TAG, "No implementation in sendSMSExpectMoreResponse");
    }

    public void sendSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        Elog.d(TAG, "No implementation in sendSmsResponse");
    }

    public void sendTerminalResponseToSimResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendTerminalResponseToSimResponse");
    }

    public void sendUssdResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in sendUssdResponse");
    }

    public void separateConnectionResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in separateConnectionResponse");
    }

    public void setAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in setAllowedCarriersResponse");
    }

    public void setBandModeResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setBandModeResponse");
    }

    public void setBarringPasswordResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setBarringPasswordResponse");
    }

    public void setCallForwardResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCallForwardResponse");
    }

    public void setCallWaitingResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCallWaitingResponse");
    }

    public void setCarrierInfoForImsiEncryptionResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCarrierInfoForImsiEncryptionResponse");
    }

    public void setCdmaBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCdmaBroadcastActivationResponse");
    }

    public void setCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCdmaBroadcastConfigResponse");
    }

    public void setCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCdmaRoamingPreferenceResponse");
    }

    public void setCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCdmaSubscriptionSourceResponse");
    }

    public void setCellInfoListRateResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setCellInfoListRateResponse");
    }

    public void setClirResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setClirResponse");
    }

    public void setDataAllowedResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setDataAllowedResponse");
    }

    public void setDataProfileResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setDataProfileResponse");
    }

    public void setFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in setFacilityLockForAppResponse");
    }

    public void setGsmBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setGsmBroadcastActivationResponse");
    }

    public void setGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setGsmBroadcastConfigResponse");
    }

    public void setIndicationFilterResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setIndicationFilterResponse");
    }

    public void setInitialAttachApnResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setInitialAttachApnResponse");
    }

    public void setLinkCapacityReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setLinkCapacityReportingCriteriaResponse");
    }

    public void setLocationUpdatesResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setLocationUpdatesResponse");
    }

    public void setMuteResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setMuteResponse");
    }

    public void setNetworkSelectionModeAutomaticResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setNetworkSelectionModeAutomaticResponse");
    }

    public void setNetworkSelectionModeManualResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setNetworkSelectionModeManualResponse");
    }

    public void setPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setPreferredNetworkTypeResponse");
    }

    public void setPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setPreferredVoicePrivacyResponse");
    }

    public void setRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) {
        Elog.d(TAG, "No implementation in setRadioCapabilityResponse");
    }

    public void setRadioPowerResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setRadioPowerResponse");
    }

    public void setSignalStrengthReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSignalStrengthReportingCriteriaResponse");
    }

    public void setSimCardPowerResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSimCardPowerResponse");
    }

    public void setSimCardPowerResponse_1_1(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSimCardPowerResponse_1_1");
    }

    public void setSmscAddressResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSmscAddressResponse");
    }

    public void setSuppServiceNotificationsResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSuppServiceNotificationsResponse");
    }

    public void setSystemSelectionChannelsResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setSystemSelectionChannelsResponse");
    }

    public void setTTYModeResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setTTYModeResponse");
    }

    public void setUiccSubscriptionResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in setUiccSubscriptionResponse");
    }

    public void setupDataCallResponse(RadioResponseInfo radioResponseInfo, SetupDataCallResult setupDataCallResult) {
        Elog.d(TAG, "No implementation in setupDataCallResponse");
    }

    public void startDtmfResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in startDtmfResponse");
    }

    public void startKeepaliveResponse(RadioResponseInfo radioResponseInfo, KeepaliveStatus keepaliveStatus) {
        Elog.d(TAG, "No implementation in startKeepaliveResponse");
    }

    public void startLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) {
        Elog.d(TAG, "No implementation in startLceServiceResponse");
    }

    public void startNetworkScanResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in startNetworkScanResponse");
    }

    public void stopDtmfResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in stopDtmfResponse");
    }

    public void stopKeepaliveResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in stopKeepaliveResponse");
    }

    public void stopLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) {
        Elog.d(TAG, "No implementation in stopLceServiceResponse");
    }

    public void stopNetworkScanResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in stopNetworkScanResponse");
    }

    public void supplyIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in supplyIccPin2ForAppResponse");
    }

    public void supplyIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in supplyIccPinForAppResponse");
    }

    public void supplyIccPuk2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in supplyIccPuk2ForAppResponse");
    }

    public void supplyIccPukForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in supplyIccPukForAppResponse");
    }

    public void supplyNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in supplyNetworkDepersonalizationResponse");
    }

    public void switchWaitingOrHoldingAndActiveResponse(RadioResponseInfo radioResponseInfo) {
        Elog.d(TAG, "No implementation in switchWaitingOrHoldingAndActiveResponse");
    }

    public void writeSmsToRuimResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in writeSmsToRuimResponse");
    }

    public void writeSmsToSimResponse(RadioResponseInfo radioResponseInfo, int i) {
        Elog.d(TAG, "No implementation in writeSmsToSimResponse");
    }
}
