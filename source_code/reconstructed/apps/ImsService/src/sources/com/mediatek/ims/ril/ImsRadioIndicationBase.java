package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.SuppSvcNotification;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.Dialog;
import vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication;
import vendor.mediatek.hardware.mtkradioex.V2_0.ImsConfParticipant;
import vendor.mediatek.hardware.mtkradioex.V2_0.ImsRegStatusInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.IncomingCallNotification;

/* JADX INFO: loaded from: classes.dex */
public class ImsRadioIndicationBase extends IImsRadioIndication.Stub {
    public void audioIndication(int i, int i2, int i3) {
        riljLoge("No implementation in audioIndication");
    }

    public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) {
        riljLoge("No implementation in callAdditionalInfoInd");
    }

    public void callInfoIndication(int i, ArrayList<String> arrayList) {
        riljLoge("No implementation in callInfoIndication");
    }

    public void callRatIndication(int i, int i2, int i3) {
        riljLoge("No implementation in callRatIndication");
    }

    public void callmodChangeIndicator(int i, String str, String str2, String str3, String str4, String str5) {
        riljLoge("No implementation in callmodChangeIndicator");
    }

    public void cdmaNewSmsEx(int i, CdmaSmsMessage cdmaSmsMessage) {
        riljLoge("No implementation in cdmaNewSmsEx");
    }

    public void econfResultIndication(int i, String str, String str2, String str3, String str4, String str5, String str6) {
        riljLoge("No implementation in econfResultIndication");
    }

    public void ectIndication(int i, int i2, int i3, int i4) {
        riljLoge("No implementation in ectIndication");
    }

    public void getProvisionDone(int i, String str, String str2) {
        riljLoge("No implementation in getProvisionDone");
    }

    public void imsBearerInit(int i) {
        riljLoge("No implementation in imsBearerInit");
    }

    public void imsBearerStateNotify(int i, int i2, int i3, String str) {
        riljLoge("No implementation in imsBearerStateNotify");
    }

    public void imsCfgConfigChanged(int i, int i2, String str, String str2) {
        riljLoge("No implementation in imsCfgConfigChanged");
    }

    public void imsCfgConfigLoaded(int i) {
        riljLoge("No implementation in imsCfgConfigLoaded");
    }

    public void imsCfgDynamicImsSwitchComplete(int i) {
        riljLoge("No implementation in imsCfgDynamicImsSwitchComplete");
    }

    public void imsCfgFeatureChanged(int i, int i2, int i3, int i4) {
        riljLoge("No implementation in imsCfgFeatureChanged");
    }

    public void imsConferenceInfoIndication(int i, ArrayList<ImsConfParticipant> arrayList) {
        riljLoge("No implementation in imsConferenceInfoIndication");
    }

    public void imsDataInfoNotify(int i, String str, String str2, String str3) {
        riljLoge("No implementation in imsDataInfoNotify");
    }

    public void imsDeregDone(int i) {
        riljLoge("No implementation in imsDeregDone");
    }

    public void imsDialogIndication(int i, ArrayList<Dialog> arrayList) {
        riljLoge("No implementation in imsDialogIndication");
    }

    public void imsDisableDone(int i) {
        riljLoge("No implementation in imsDisableDone");
    }

    public void imsDisableStart(int i) {
        riljLoge("No implementation in imsDisableStart");
    }

    public void imsEnableDone(int i) {
        riljLoge("No implementation in imsEnableDone");
    }

    public void imsEnableStart(int i) {
        riljLoge("No implementation in imsEnableStart");
    }

    public void imsEventPackageIndication(int i, String str, String str2, String str3, String str4, String str5) {
        riljLoge("No implementation in imsEventPackageIndication");
    }

    public void imsRadioInfoChange(int i, String str, String str2) {
        riljLoge("No implementation in imsRadioInfoChange");
    }

    public void imsRedialEmergencyIndication(int i, String str) {
        riljLoge("No implementation in imsRedialEmergencyIndication");
    }

    public void imsRegInfoInd(int i, ArrayList<Integer> arrayList) {
        riljLoge("No implementation in imsRegInfoInd");
    }

    public void imsRegStatusReport(int i, ImsRegStatusInfo imsRegStatusInfo) {
        riljLoge("No implementation in imsRegStatusReport");
    }

    public void imsRegistrationInfo(int i, int i2, int i3) {
        riljLoge("No implementation in imsRegistrationInfo");
    }

    public void imsRtpInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        riljLoge("No implementation in imsRtpInfoReport");
    }

    public void imsSupportEcc(int i, int i2) {
        riljLoge("No implementation in isSupportLteEcc");
    }

    public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) {
        riljLoge("No implementation in incomingCallIndication");
    }

    public void lteMessageWaitingIndication(int i, String str, String str2, String str3, String str4, String str5) {
        riljLoge("No implementation in lteMessageWaitingIndication");
    }

    public void multiImsCount(int i, int i2) {
        riljLoge("No implementation in multiImsCount");
    }

    public void newSmsEx(int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in newSmsEx");
    }

    public void newSmsStatusReportEx(int i, ArrayList<Byte> arrayList) {
        riljLoge("No implementation in newSmsStatusReportEx");
    }

    public void noEmergencyCallbackMode(int i) {
        riljLoge("No implementation in noEmergencyCallbackMode");
    }

    public void onSsacStatus(int i, ArrayList<Integer> arrayList) {
        riljLoge("No implementation in onSsacStatus");
    }

    public void onUssi(int i, int i2, String str) {
        riljLoge("No implementation in onUssi");
    }

    public void onVolteSubscription(int i, int i2) {
        riljLoge("No implementation in onVolteSubscription");
    }

    public void onXui(int i, String str, String str2, String str3) {
        riljLoge("No implementation in onXui");
    }

    protected void riljLoge(String str) {
    }

    public void rttCapabilityIndication(int i, int i2, int i3, int i4, int i5, int i6) {
        riljLoge("No implementation in rttCapabilityIndication");
    }

    public void rttModifyRequestReceive(int i, int i2, int i3) {
        riljLoge("No implementation in rttModifyRequestReceive");
    }

    public void rttModifyResponse(int i, int i2, int i3) {
        riljLoge("No implementation in rttModifyResponse");
    }

    public void rttTextReceive(int i, int i2, int i3, String str) {
        riljLoge("No implementation in rttTextReceive");
    }

    public void sendVopsIndication(int i, int i2) {
        riljLoge("No implementation in sendVopsIndication");
    }

    public void sipCallProgressIndicator(int i, String str, String str2, String str3, String str4, String str5, String str6) {
        riljLoge("No implementation in sipCallProgressIndicator");
    }

    public void sipHeaderReport(int i, ArrayList<String> arrayList) {
        riljLoge("No implementation in sipHeaderReport");
    }

    public void sipRegInfoInd(int i, int i2, int i3, ArrayList<String> arrayList) {
        riljLoge("No implementation in sipRegInfoInd");
    }

    public void speechCodecInfoIndication(int i, int i2) {
        riljLoge("No implementation in speechCodecInfoIndication");
    }

    public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) {
        riljLoge("No implementation in suppSvcNotify");
    }

    public void videoCapabilityIndicator(int i, String str, String str2, String str3) {
        riljLoge("No implementation in videoCapabilityIndicator");
    }

    public void volteSetting(int i, boolean z) {
        riljLoge("No implementation in volteSetting");
    }
}
