package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.LastCallFailCauseInfo;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.SendSmsResult;
import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.LastCallFailCause;
import com.mediatek.ims.MtkSmsResponse;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.TimeZone;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;

/* JADX INFO: loaded from: classes.dex */
public class ImsRadioResponse extends ImsRadioResponseBase {
    private int mPhoneId;
    private ImsRILAdapter mRil;

    ImsRadioResponse(ImsRILAdapter imsRILAdapter, int i) {
        this.mRil = imsRILAdapter;
        this.mPhoneId = i;
        imsRILAdapter.riljLogv("ImsRadioResponse, phone = " + this.mPhoneId);
    }

    private void responseCallForwardInfoEx(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
        if (rILRequestProcessResponse != null) {
            MtkCallForwardInfo[] mtkCallForwardInfoArr = new MtkCallForwardInfo[arrayList.size()];
            for (int i = 0; i < arrayList.size(); i++) {
                long[] jArr = new long[2];
                mtkCallForwardInfoArr[i] = new MtkCallForwardInfo();
                mtkCallForwardInfoArr[i].status = arrayList.get(i).status;
                mtkCallForwardInfoArr[i].reason = arrayList.get(i).reason;
                mtkCallForwardInfoArr[i].serviceClass = arrayList.get(i).serviceClass;
                mtkCallForwardInfoArr[i].toa = arrayList.get(i).toa;
                mtkCallForwardInfoArr[i].number = arrayList.get(i).number;
                mtkCallForwardInfoArr[i].timeSeconds = arrayList.get(i).timeSeconds;
                String[] strArr = {arrayList.get(i).timeSlotBegin, arrayList.get(i).timeSlotEnd};
                if (strArr[0] == null || strArr[1] == null) {
                    mtkCallForwardInfoArr[i].timeSlot = null;
                } else {
                    for (int i2 = 0; i2 < 2; i2++) {
                        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                        try {
                            jArr[i2] = simpleDateFormat.parse(strArr[i2]).getTime();
                        } catch (ParseException e) {
                            riljLoge("responseCallForwardInfoEx() ParseException occured");
                            jArr = null;
                        }
                    }
                    mtkCallForwardInfoArr[i].timeSlot = jArr;
                }
            }
            if (radioResponseInfo.error == 0) {
                sendMessageResponse(rILRequestProcessResponse.mResult, mtkCallForwardInfoArr);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkCallForwardInfoArr);
        }
    }

    private void responseFailCause(RadioResponseInfo radioResponseInfo, LastCallFailCauseInfo lastCallFailCauseInfo) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
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

    private void responseString(RadioResponseInfo radioResponseInfo, String str) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
        if (rILRequestProcessResponse != null) {
            String str2 = null;
            if (radioResponseInfo.error == 0) {
                str2 = str;
                sendMessageResponse(rILRequestProcessResponse.mResult, str2);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, str2);
        }
    }

    static void responseStringArrayList(ImsRILAdapter imsRILAdapter, RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        RILRequest rILRequestProcessResponse = imsRILAdapter.processResponse(radioResponseInfo, true);
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
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
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

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void acknowledgeLastIncomingCdmaSmsExResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void acknowledgeLastIncomingGsmSmsExResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void cancelUssiResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void conferenceDialResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void controlCallResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void controlImsConferenceCallMemberResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void dialWithSipUriResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void eccRedialApproveResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void forceReleaseCallResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getColpResponse(RadioResponseInfo radioResponseInfo, int i, int i2) {
        responseInts(radioResponseInfo, i, i2);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getColrResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo, String str) {
        responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getImsCfgResourceCapValueResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void getXcapStatusResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void hangupAllResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void hangupWithReasonResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void imsBearerStateConfirmResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void imsDeregNotificationResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void imsEctCommandResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void pullCallResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void queryCallForwardInTimeSlotStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<CallForwardInfoEx> arrayList) {
        responseCallForwardInfoEx(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void querySsacStatusResponse(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        responseIntArrayList(radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void queryVopsStatusResponse(RadioResponseInfo radioResponseInfo, int i) {
        responseInts(radioResponseInfo, i);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void resetSuppServResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    public void responseIntArrayList(RadioResponseInfo radioResponseInfo, ArrayList<Integer> arrayList) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
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

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase
    protected void riljLoge(String str) {
        this.mRil.riljLoge(str);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void runGbaAuthenticationResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        responseStringArrayList(this.mRil, radioResponseInfo, arrayList);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void sendImsSmsExResponse(RadioResponseInfo radioResponseInfo, SendSmsResult sendSmsResult) {
        RILRequest rILRequestProcessResponse = this.mRil.processResponse(radioResponseInfo, true);
        if (rILRequestProcessResponse != null) {
            MtkSmsResponse mtkSmsResponse = new MtkSmsResponse(sendSmsResult.messageRef, sendSmsResult.ackPDU, sendSmsResult.errorCode);
            if (radioResponseInfo.error == 0) {
                sendMessageResponse(rILRequestProcessResponse.mResult, mtkSmsResponse);
            }
            this.mRil.processResponseDone(rILRequestProcessResponse, radioResponseInfo, mtkSmsResponse);
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void sendUssiResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setCallAdditionalInfoResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setCallForwardInTimeSlotResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setCallIndicationResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setClipResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setColpResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setColrResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsBearerNotificationResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsCallModeResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsCfgFeatureValueResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsCfgProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsEnableResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsRegistrationReportResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsRtpReportResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImsVideoEnableResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setImscfgResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setModemImsCfgResponse(RadioResponseInfo radioResponseInfo, String str) {
        responseString(radioResponseInfo, str);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setProvisionValueResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setSipHeaderReportResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setSipHeaderResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setVendorSettingResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setVoiceDomainPreferenceResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setWfcProfileResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void setupXcapUserAgentStringResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void toggleRttAudioIndicationResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void videoCallAcceptResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void vtDialResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }

    @Override // com.mediatek.ims.ril.ImsRadioResponseBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioResponse
    public void vtDialWithSipUriResponse(RadioResponseInfo radioResponseInfo) {
        responseVoid(radioResponseInfo);
    }
}
