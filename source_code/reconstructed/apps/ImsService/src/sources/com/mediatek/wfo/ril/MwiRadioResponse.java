package com.mediatek.wfo.ril;

import android.hardware.radio.V1_0.RadioResponseInfo;
import android.os.AsyncResult;
import android.os.Message;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse;

/* JADX INFO: loaded from: classes.dex */
public class MwiRadioResponse extends IMwiRadioResponse.Stub {
    private int mPhoneId;
    private MwiRIL mRil;

    MwiRadioResponse(MwiRIL mwiRIL, int i) {
        this.mRil = mwiRIL;
        this.mPhoneId = i;
        mwiRIL.riljLogv("MwiRadioResponse, phone = " + this.mPhoneId);
    }

    private void responseString(RadioResponseInfo radioResponseInfo, String str) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            String str2 = null;
            if (radioResponseInfo.error == 0) {
                str2 = str;
                sendMessageResponse(rILRequestProcessResponse.mResult, str2);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, str2);
        }
    }

    private void responseVoid(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo);
        if (rILRequestProcessResponse != null) {
            if (radioResponseInfo.error == 0) {
                sendMessageResponse(rILRequestProcessResponse.mResult, null);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, null);
        }
    }

    static void sendMessageResponse(Message message, Object obj) {
        if (message != null) {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
        }
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void notifyEPDGScreenStateResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setEmergencyAddressIdResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setLocationInfoResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setNattKeepAliveStatusResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWfcConfigResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWifiAssociatedResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWifiEnabledResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWifiIpAddressResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWifiPingResultResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // vendor.mediatek.hardware.mtkradioex.V2_0.IMwiRadioResponse
    public void setWifiSignalLevelResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }
}
