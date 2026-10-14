package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.SendSmsResult;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse;

/* JADX INFO: loaded from: classes.dex */
public class ImsRadioResponseBase extends IImsRadioResponse.Stub {
    public void acknowledgeLastIncomingCdmaSmsExResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acknowledgeLastIncomingCdmaSmsExResponse");
    }

    public void acknowledgeLastIncomingGsmSmsExResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in acknowledgeLastIncomingGsmSmsExResponse");
    }

    public void cancelUssiResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in cancelUssiResponse");
    }

    public void conferenceDialResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in conferenceDialResponse");
    }

    public void controlCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in controlCallResponse");
    }

    public void controlImsConferenceCallMemberResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in controlImsConferenceCallMemberResponse");
    }

    public void dialWithSipUriResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in dialWithSipUriResponse");
    }

    public void eccRedialApproveResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in eccRedialApproveResponse");
    }

    public void forceReleaseCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in forceReleaseCallResponse");
    }

    public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        riljLoge("No implementation in getColpResponse");
    }

    public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getColrResponse");
    }

    public void getImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getImsCfgFeatureValueResponse");
    }

    public void getImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in getImsCfgProvisionValueResponse");
    }

    public void getImsCfgResourceCapValueResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getImsCfgResourceCapValueResponse");
    }

    public void getProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in getProvisionValueResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in getImsVoiceDomainPreferenceResponse");
    }

    public void getXcapStatusResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in getXcapStatusResponse");
    }

    public void hangupAllResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in hangupAllResponse");
    }

    public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in hangupWithReasonResponse");
    }

    public void imsBearerStateConfirmResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in imsBearerStateConfirm");
    }

    public void imsDeregNotificationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in deregisterImsResponse");
    }

    public void imsEctCommandResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in imsEctCommandResponse");
    }

    public void pullCallResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in pullCallResponse");
    }

    public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
        riljLoge("No implementation in queryCallForwardInTimeSlotStatusResponse");
    }

    public void querySsacStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        riljLoge("No implementation in querySsacStatusResponse");
    }

    public void queryVopsStatusResponse(RadioResponseInfo radioResponseInfo, int i) {
        riljLoge("No implementation in queryVopsStatusResponse");
    }

    public void resetSuppServResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in resetSuppServResponse");
    }

    protected void riljLoge(String str) {
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void rttModifyRequestResponseResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in rttModifyRequestResponseResponse");
    }

    public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        riljLoge("No implementation in runGbaAuthenticationResponse");
    }

    public void sendImsSmsExResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        riljLoge("No implementation in sendImsSmsExResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void sendRttModifyRequestResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendRttModifyRequestResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void sendRttTextResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendRttTextResponse");
    }

    public void sendUssiResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in sendUssiResponse");
    }

    public void setCallAdditionalInfoResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCallAdditionalInfoResponse");
    }

    public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCallForwardInTimeSlotResponse");
    }

    public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setCallIndicationResponse");
    }

    public void setClipResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setClipResponse");
    }

    public void setColpResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setColpResponse");
    }

    public void setColrResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setColrResponse");
    }

    public void setImsBearerNotificationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsBearerNotificationResponse");
    }

    public void setImsCallModeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsCallModeResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsCallStatusResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsCallStatusResponse");
    }

    public void setImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsCfgFeatureValueResponse");
    }

    public void setImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsCfgProvisionValueResponse");
    }

    public void setImsEnableResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsEnableResponse");
    }

    public void setImsRegistrationReportResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsRegistrationReportResponse");
    }

    public void setImsRtpReportResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsRtpReportResponse");
    }

    public void setImsVideoEnableResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsVideoEnableResponse");
    }

    public void setImscfgResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImscfgResponse");
    }

    public void setModemImsCfgResponse(RadioResponseInfo radioResponseInfo, String str) {
        riljLoge("No implementation in setModemImsCfgResponse");
    }

    public void setProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setProvisionValueResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setRttModeResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setRttModeResponse");
    }

    public void setSipHeaderReportResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSipHeaderReportResponse");
    }

    public void setSipHeaderResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setSipHeaderResponse");
    }

    public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) {
    }

    public void setVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setImsVoiceDomainPreferenceResponse");
    }

    public void setWfcProfileResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setWfcProfileResponse");
    }

    public void setupXcapUserAgentStringResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in setupXcapUserAgentStringResponse");
    }

    public void toggleRttAudioIndicationResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in toggleRttAudioIndicationResponse");
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void updateImsRegistrationStatusResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in updateImsRegistrationStatusResponse");
    }

    public void videoCallAcceptResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in videoCallAcceptResponse");
    }

    public void vtDialResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in vtDialResponse");
    }

    public void vtDialWithSipUriResponse(RadioResponseInfo radioResponseInfo) {
        riljLoge("No implementation in vtDialWithSipUriResponse");
    }
}
