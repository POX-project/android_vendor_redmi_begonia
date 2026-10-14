package com.mediatek.ims.ril;

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
import android.hardware.radio.V1_4.CarrierRestrictionsWithPriority;
import android.hardware.radio.V1_4.IRadioResponse;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class RadioResponseBase extends IRadioResponse.Stub {
    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void acceptCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acceptCallResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void acknowledgeIncomingGsmSmsWithPduResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acknowledgeIncomingGsmSmsWithPduResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void acknowledgeLastIncomingCdmaSmsResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acknowledgeLastIncomingCdmaSmsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void acknowledgeLastIncomingGsmSmsResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acknowledgeLastIncomingGsmSmsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void acknowledgeRequest(int i) {
        riljLoge("No implementation in acknowledgeRequest");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void cancelPendingUssdResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in cancelPendingUssdResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void changeIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in changeIccPin2ForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void changeIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in changeIccPinForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void conferenceResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in conferenceResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void deactivateDataCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in deactivateDataCallResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void deleteSmsOnRuimResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in deleteSmsOnRuimResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void deleteSmsOnSimResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in deleteSmsOnSimResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void dialResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in dialResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void emergencyDialResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in emergencyDialResponse");
    }

    @Override // android.hardware.radio.V1_3.IRadioResponse
    public void enableModemResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in enableModemResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void exitEmergencyCallbackModeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in exitEmergencyCallbackModeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void explicitCallTransferResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in explicitCallTransferResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, boolean z, CarrierRestrictions carrierRestrictions) {
        riljLoge("No implementation in getAllowedCarriersResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getAllowedCarriersResponse_1_4(RadioResponseInfo radioResponseInfo, CarrierRestrictionsWithPriority carrierRestrictionsWithPriority, int i) {
        riljLoge("No implementation in getAllowedCarriersResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getAvailableBandModesResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        riljLoge("No implementation in getAvailableBandModesResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getAvailableNetworksResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfo> arrayList) {
        riljLoge("No implementation in getAvailableNetworksResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getBasebandVersionResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in getBasebandVersionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCDMASubscriptionResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4, String str5) {
        riljLoge("No implementation in getCDMASubscriptionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCallForwardStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfo> arrayList) {
        riljLoge("No implementation in getCallForwardStatusResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCallWaitingResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) {
        riljLoge("No implementation in getCallWaitingResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<CdmaBroadcastSmsConfigInfo> arrayList) {
        riljLoge("No implementation in getCdmaBroadcastConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getCdmaRoamingPreferenceResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getCdmaSubscriptionSourceResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCellInfoListResponse(RadioResponseInfo radioResponseInfo, ArrayList<CellInfo> arrayList) {
        riljLoge("No implementation in getCellInfoListResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getCellInfoListResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.CellInfo> arrayList) {
        riljLoge("No implementation in getCellInfoListResponse_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getCellInfoListResponse_1_4(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_4.CellInfo> arrayList) {
        riljLoge("No implementation in getCellInfoListResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getClipResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getClipResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getClirResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        riljLoge("No implementation in getClirResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getCurrentCallsResponse(RadioResponseInfo radioResponseInfo, ArrayList<Call> arrayList) {
        riljLoge("No implementation in getCurrentCallsResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getCurrentCallsResponse_1_2(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_2.Call> arrayList) {
        riljLoge("No implementation in getCurrentCallsResponse_1_2");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getDataCallListResponse(RadioResponseInfo radioResponseInfo, ArrayList<SetupDataCallResult> arrayList) {
        riljLoge("No implementation in getDataCallListResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getDataCallListResponse_1_4(RadioResponseInfo radioResponseInfo, ArrayList<android.hardware.radio.V1_4.SetupDataCallResult> arrayList) {
        riljLoge("No implementation in getDataCallListResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getDataRegistrationStateResponse(RadioResponseInfo radioResponseInfo, DataRegStateResult dataRegStateResult) {
        riljLoge("No implementation in getDataRegistrationStateResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getDataRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.DataRegStateResult dataRegStateResult) {
        riljLoge("No implementation in getDataRegistrationStateResponse_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getDataRegistrationStateResponse_1_4(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_4.DataRegStateResult dataRegStateResult) {
        riljLoge("No implementation in getDataRegistrationStateResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getDeviceIdentityResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3, String str4) {
        riljLoge("No implementation in getDeviceIdentityResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getFacilityLockForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<GsmBroadcastSmsConfigInfo> arrayList) {
        riljLoge("No implementation in getGsmBroadcastConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getHardwareConfigResponse(RadioResponseInfo radioResponseInfo, ArrayList<HardwareConfig> arrayList) {
        riljLoge("No implementation in getHardwareConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getIMSIForAppResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in getIMSIForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getIccCardStatusResponse(RadioResponseInfo radioResponseInfo, CardStatus cardStatus) {
        riljLoge("No implementation in getIccCardStatusResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getIccCardStatusResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.CardStatus cardStatus) {
        riljLoge("No implementation in getIccCardStatusResponse_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getIccCardStatusResponse_1_4(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_4.CardStatus cardStatus) {
        riljLoge("No implementation in getIccCardStatusResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getImsRegistrationStateResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) {
        riljLoge("No implementation in getImsRegistrationStateResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getLastCallFailCauseResponse(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) {
        riljLoge("No implementation in getLastCallFailCauseResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getModemActivityInfoResponse(RadioResponseInfo radioResponseInfo, ActivityStatsInfo activityStatsInfo) {
        riljLoge("No implementation in getModemActivityInfoResponse");
    }

    @Override // android.hardware.radio.V1_3.IRadioResponse
    public void getModemStackStatusResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        riljLoge("No implementation in getModemStackStatusResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getMuteResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        riljLoge("No implementation in getMuteResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getNeighboringCidsResponse(RadioResponseInfo radioResponseInfo, ArrayList<NeighboringCell> arrayList) {
        riljLoge("No implementation in getNeighboringCidsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getNetworkSelectionModeResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        riljLoge("No implementation in getNetworkSelectionModeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getOperatorResponse(RadioResponseInfo radioResponseInfo, String str, String str2, String str3) {
        riljLoge("No implementation in getOperatorResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getPreferredNetworkTypeBitmapResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getPreferredNetworkTypeBitmapResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getPreferredNetworkTypeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        riljLoge("No implementation in getPreferredVoicePrivacyResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) {
        riljLoge("No implementation in getRadioCapabilityResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getSignalStrengthResponse(RadioResponseInfo radioResponseInfo, SignalStrength signalStrength) {
        riljLoge("No implementation in getSignalStrengthResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getSignalStrengthResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.SignalStrength signalStrength) {
        riljLoge("No implementation in getSignalStrengthResponse_1_2");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void getSignalStrengthResponse_1_4(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_4.SignalStrength signalStrength) {
        riljLoge("No implementation in getSignalStrengthResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getSmscAddressResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in getSmscAddressResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getTTYModeResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getTTYModeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getVoiceRadioTechnologyResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getVoiceRadioTechnologyResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void getVoiceRegistrationStateResponse(RadioResponseInfo radioResponseInfo, VoiceRegStateResult voiceRegStateResult) {
        riljLoge("No implementation in getVoiceRegistrationStateResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void getVoiceRegistrationStateResponse_1_2(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_2.VoiceRegStateResult voiceRegStateResult) {
        riljLoge("No implementation in getVoiceRegistrationStateResponse_1_2");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void handleStkCallSetupRequestFromSimResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in handleStkCallSetupRequestFromSimResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void hangupConnectionResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in hangupConnectionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void hangupForegroundResumeBackgroundResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in hangupForegroundResumeBackgroundResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void hangupWaitingOrBackgroundResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in hangupWaitingOrBackgroundResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void iccCloseLogicalChannelResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in iccCloseLogicalChannelResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void iccIOForAppResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        riljLoge("No implementation in iccIOForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void iccOpenLogicalChannelResponse(RadioResponseInfo radioResponseInfo, int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in iccOpenLogicalChannelResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void iccTransmitApduBasicChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        riljLoge("No implementation in iccTransmitApduBasicChannelResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void iccTransmitApduLogicalChannelResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        riljLoge("No implementation in iccTransmitApduLogicalChannelResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void nvReadItemResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in nvReadItemResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void nvResetConfigResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in nvResetConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void nvWriteCdmaPrlResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in nvWriteCdmaPrlResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void nvWriteItemResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in nvWriteItemResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void pullLceDataResponse(RadioResponseInfo radioResponseInfo, LceDataInfo lceDataInfo) {
        riljLoge("No implementation in pullLceDataResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void rejectCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in rejectCallResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void reportSmsMemoryStatusResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in reportSmsMemoryStatusResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void reportStkServiceIsRunningResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in reportStkServiceIsRunningResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void requestIccSimAuthenticationResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        riljLoge("No implementation in requestIccSimAuthenticationResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void requestIsimAuthenticationResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in requestIsimAuthenticationResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void requestShutdownResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in requestShutdownResponse");
    }

    protected void riljLoge(String str) {
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendBurstDtmfResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendBurstDtmfResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendCDMAFeatureCodeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendCDMAFeatureCodeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendCdmaSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        riljLoge("No implementation in sendCdmaSmsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendDeviceStateResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendDeviceStateResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendDtmfResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendDtmfResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendEnvelopeResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in sendEnvelopeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendEnvelopeWithStatusResponse(RadioResponseInfo radioResponseInfo, IccIoResult iccIoResult) {
        riljLoge("No implementation in sendEnvelopeWithStatusResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendImsSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        riljLoge("No implementation in sendImsSmsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendSMSExpectMoreResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        riljLoge("No implementation in sendSMSExpectMoreResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendSmsResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        riljLoge("No implementation in sendSmsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendTerminalResponseToSimResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendTerminalResponseToSimResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void sendUssdResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendUssdResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void separateConnectionResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in separateConnectionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setAllowedCarriersResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in setAllowedCarriersResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void setAllowedCarriersResponse_1_4(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setAllowedCarriersResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setBandModeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setBandModeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setBarringPasswordResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setBarringPasswordResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCallForwardResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCallForwardResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCallWaitingResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCallWaitingResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void setCarrierInfoForImsiEncryptionResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCarrierInfoForImsiEncryptionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCdmaBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCdmaBroadcastActivationResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCdmaBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCdmaBroadcastConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCdmaRoamingPreferenceResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCdmaRoamingPreferenceResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCdmaSubscriptionSourceResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCdmaSubscriptionSourceResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setCellInfoListRateResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCellInfoListRateResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setClirResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setClirResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setDataAllowedResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setDataAllowedResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setDataProfileResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setDataProfileResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in setFacilityLockForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setGsmBroadcastActivationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setGsmBroadcastActivationResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setGsmBroadcastConfigResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setGsmBroadcastConfigResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setIndicationFilterResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setIndicationFilterResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setInitialAttachApnResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setInitialAttachApnResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void setLinkCapacityReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setLinkCapacityReportingCriteriaResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setLocationUpdatesResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setLocationUpdatesResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setMuteResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setMuteResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setNetworkSelectionModeAutomaticResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setNetworkSelectionModeAutomaticResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setNetworkSelectionModeManualResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setNetworkSelectionModeManualResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void setPreferredNetworkTypeBitmapResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setPreferredNetworkTypeBitmapResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setPreferredNetworkTypeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setPreferredNetworkTypeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setPreferredVoicePrivacyResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setPreferredVoicePrivacyResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setRadioCapabilityResponse(RadioResponseInfo radioResponseInfo, RadioCapability radioCapability) {
        riljLoge("No implementation in setRadioCapabilityResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setRadioPowerResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setRadioPowerResponse");
    }

    @Override // android.hardware.radio.V1_2.IRadioResponse
    public void setSignalStrengthReportingCriteriaResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSignalStrengthReportingCriteriaResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setSimCardPowerResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSimCardPowerResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void setSimCardPowerResponse_1_1(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSimCardPowerResponse_1_1");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setSmscAddressResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSmscAddressResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setSuppServiceNotificationsResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSuppServiceNotificationsResponse");
    }

    @Override // android.hardware.radio.V1_3.IRadioResponse
    public void setSystemSelectionChannelsResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSystemSelectionChannelsResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setTTYModeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setTTYModeResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setUiccSubscriptionResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setUiccSubscriptionResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void setupDataCallResponse(RadioResponseInfo radioResponseInfo, SetupDataCallResult setupDataCallResult) {
        riljLoge("No implementation in setupDataCallResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void setupDataCallResponse_1_4(RadioResponseInfo radioResponseInfo, android.hardware.radio.V1_4.SetupDataCallResult setupDataCallResult) {
        riljLoge("No implementation in setupDataCallResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void startDtmfResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in startDtmfResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void startKeepaliveResponse(RadioResponseInfo radioResponseInfo, KeepaliveStatus keepaliveStatus) {
        riljLoge("No implementation in startKeepaliveResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void startLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) {
        riljLoge("No implementation in startLceServiceResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void startNetworkScanResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in startNetworkScanResponse");
    }

    @Override // android.hardware.radio.V1_4.IRadioResponse
    public void startNetworkScanResponse_1_4(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in startNetworkScanResponse_1_4");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void stopDtmfResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in stopDtmfResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void stopKeepaliveResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in stopKeepaliveResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void stopLceServiceResponse(RadioResponseInfo radioResponseInfo, LceStatusInfo lceStatusInfo) {
        riljLoge("No implementation in stopLceServiceResponse");
    }

    @Override // android.hardware.radio.V1_1.IRadioResponse
    public void stopNetworkScanResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in stopNetworkScanResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void supplyIccPin2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in supplyIccPin2ForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void supplyIccPinForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in supplyIccPinForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void supplyIccPuk2ForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in supplyIccPuk2ForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void supplyIccPukForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in supplyIccPukForAppResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void supplyNetworkDepersonalizationResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in supplyNetworkDepersonalizationResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void switchWaitingOrHoldingAndActiveResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in switchWaitingOrHoldingAndActiveResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void writeSmsToRuimResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in writeSmsToRuimResponse");
    }

    @Override // android.hardware.radio.V1_0.IRadioResponse
    public void writeSmsToSimResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in writeSmsToSimResponse");
    }
}
