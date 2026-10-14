package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.CallForwardInfo;
import android.hardware.radio.V1_0.LastCallFailCauseInfo;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.LastCallFailCause;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class RadioResponseImpl extends RadioResponseBase {
    private int mPhoneId;
    private ImsRILAdapter mRil;

    RadioResponseImpl(ImsRILAdapter imsRILAdapter, int i) {
        this.mRil = imsRILAdapter;
        this.mPhoneId = i;
        imsRILAdapter.riljLogv("ImsRadioResponse, phone = " + this.mPhoneId);
    }

    private void responseCallForwardInfo(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfo> arrayList) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, false);
        if (rILRequestProcessResponse != null) {
            com.android.internal.telephony.CallForwardInfo[] callForwardInfoArr = new com.android.internal.telephony.CallForwardInfo[arrayList.size()];
            for (int i = 0; i < arrayList.size(); i++) {
                callForwardInfoArr[i] = new com.android.internal.telephony.CallForwardInfo();
                callForwardInfoArr[i].status = arrayList.get(i).status;
                callForwardInfoArr[i].reason = arrayList.get(i).reason;
                callForwardInfoArr[i].serviceClass = arrayList.get(i).serviceClass;
                callForwardInfoArr[i].toa = arrayList.get(i).toa;
                callForwardInfoArr[i].number = arrayList.get(i).number;
                callForwardInfoArr[i].timeSeconds = arrayList.get(i).timeSeconds;
            }
            if (radioResponseInfo.error == 0) {
                sendMessageResponse(rILRequestProcessResponse.mResult, callForwardInfoArr);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, callForwardInfoArr);
        }
    }

    private void responseFailCause(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, false);
        if (rILRequestProcessResponse != null) {
            LastCallFailCause lastCallFailCause = null;
            if (radioResponseInfo.error == 0) {
                lastCallFailCause = new LastCallFailCause();
                lastCallFailCause.causeCode = lastCallFailCauseInfo.causeCode;
                lastCallFailCause.vendorCause = lastCallFailCauseInfo.vendorCause;
                sendMessageResponse(rILRequestProcessResponse.mResult, lastCallFailCause);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, lastCallFailCause);
        }
    }

    static void responseStringArrayList(ImsRILAdapter imsRILAdapter, RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        RILRequest rILRequestProcessResponse = imsRILAdapter.processResponse(radioResponseInfo, false);
        if (rILRequestProcessResponse != null) {
            String[] strArr = null;
            if (radioResponseInfo.error == 0) {
                strArr = new String[arrayList.size()];
                for (int i = 0; i < arrayList.size(); i++) {
                    strArr[i] = arrayList.get(i);
                }
                sendMessageResponse(rILRequestProcessResponse.mResult, strArr);
            }
            imsRILAdapter.processResponseDone(rILRequestProcessResponse, radioResponseInfo, strArr);
        }
    }

    private void responseVoid(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, false);
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

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void acceptCallResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void conferenceResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void dialResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_4.IRadioResponse
    public void emergencyDialResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void exitEmergencyCallbackModeResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void explicitCallTransferResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getCallForwardStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfo> arrayList) {
        responseCallForwardInfo(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getCallWaitingResponse(RadioResponseInfo radioResponseInfo, boolean z, int i) {
        responseInts(radioResponseInfo, z ? 1 : 0, i);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getClipResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getClirResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        responseInts(radioResponseInfo, i, i2);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void getLastCallFailCauseResponse(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) {
        responseFailCause(radioResponseInfo, lastCallFailCauseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void hangupConnectionResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    public void responseIntArrayList(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, false);
        if (rILRequestProcessResponse != null) {
            int[] iArr = new int[arrayList.size()];
            for (int i = 0; i < arrayList.size(); i++) {
                iArr[i] = arrayList.get(i).intValue();
            }
            if (radioResponseInfo.error == 0) {
                sendMessageResponse(rILRequestProcessResponse.mResult, iArr);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, iArr);
        }
    }

    public void responseInts(RadioResponseInfo radioResponseInfo, int... iArr) {
        ArrayList<Integer> arrayList = new ArrayList<>();
        for (int i : iArr) {
            arrayList.add(Integer.valueOf(i));
        }
        responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase
    protected void riljLoge(String str) {
        this.mRil.riljLoge(str);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void sendDtmfResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void setCallForwardResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void setCallWaitingResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void setClirResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void setFacilityLockForAppResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void setMuteResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void startDtmfResponse(RadioResponseInfo radioResponseInfo) {
        this.mRil.handleDtmfQueueNext(radioResponseInfo.serial);
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void stopDtmfResponse(RadioResponseInfo radioResponseInfo) {
        this.mRil.handleDtmfQueueNext(radioResponseInfo.serial);
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.RadioResponseBase, android.hardware.radio.V1_0.IRadioResponse
    public void switchWaitingOrHoldingAndActiveResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }
}
