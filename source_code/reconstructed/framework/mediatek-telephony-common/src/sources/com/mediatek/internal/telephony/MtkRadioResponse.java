package com.mediatek.internal.telephony;

import android.hardware.radio.V1_0.OperatorInfo;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.RadioResponse;
import com.android.internal.telephony.ServiceStateTracker;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioResponse extends RadioResponse {
    private static final String TAG = "MtkRadioResp";
    private MtkRIL mMtkRil;

    public MtkRadioResponse(RIL ril) {
        super(ril);
        this.mMtkRil = (MtkRIL) ril;
    }

    private int getSubId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            return -1;
        }
        return subId[0];
    }

    public void conferenceResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.riljLog("clear mIsSendChldRequest");
        synchronized (this.mMtkRil.mDtmfReqQueue) {
            this.mMtkRil.mDtmfReqQueue.resetSendChldRequest();
        }
        super.conferenceResponse(radioResponseInfo);
    }

    public void explicitCallTransferResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.riljLog("clear mIsSendChldRequest");
        synchronized (this.mMtkRil.mDtmfReqQueue) {
            this.mMtkRil.mDtmfReqQueue.resetSendChldRequest();
        }
        super.explicitCallTransferResponse(radioResponseInfo);
    }

    public void getAvailableNetworksResponse(RadioResponseInfo radioResponseInfo, ArrayList<OperatorInfo> arrayList) {
        int lac = -1;
        Phone phone = PhoneFactory.getPhone(this.mMtkRil.mInstanceId.intValue());
        if (phone != null) {
            ServiceStateTracker serviceStateTracker = phone.getServiceStateTracker();
            ServiceState serviceState = serviceStateTracker.mSS;
            lac = ((MtkServiceStateTracker) serviceStateTracker).getLac();
        }
        for (int i = 0; i < arrayList.size(); i++) {
            String str = arrayList.get(i).operatorNumeric;
            OperatorInfo operatorInfo = arrayList.get(i);
            MtkRIL mtkRIL = this.mMtkRil;
            operatorInfo.alphaLong = mtkRIL.lookupOperatorNameForPlmnList(getSubId(mtkRIL.mInstanceId.intValue()), str, true, lac);
            OperatorInfo operatorInfo2 = arrayList.get(i);
            MtkRIL mtkRIL2 = this.mMtkRil;
            operatorInfo2.alphaShort = mtkRIL2.lookupOperatorNameForPlmnList(getSubId(mtkRIL2.mInstanceId.intValue()), str, false, lac);
        }
        super.getAvailableNetworksResponse(radioResponseInfo, arrayList);
    }

    public void getPreferredNetworkTypeBitmapResponse(RadioResponseInfo radioResponseInfo, int i) {
        super.getPreferredNetworkTypeResponse(radioResponseInfo, MtkRadioAccessFamily.getNetworkTypeFromRaf(RIL.convertToNetworkTypeBitMask(i)));
    }

    public void separateConnectionResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.riljLog("clear mIsSendChldRequest");
        synchronized (this.mMtkRil.mDtmfReqQueue) {
            this.mMtkRil.mDtmfReqQueue.resetSendChldRequest();
        }
        super.separateConnectionResponse(radioResponseInfo);
    }

    public void startDtmfResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.handleDtmfQueueNext(radioResponseInfo.serial);
        super.startDtmfResponse(radioResponseInfo);
    }

    public void stopDtmfResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.handleDtmfQueueNext(radioResponseInfo.serial);
        super.stopDtmfResponse(radioResponseInfo);
    }

    public void switchWaitingOrHoldingAndActiveResponse(RadioResponseInfo radioResponseInfo) {
        this.mMtkRil.riljLog("clear mIsSendChldRequest");
        synchronized (this.mMtkRil.mDtmfReqQueue) {
            this.mMtkRil.mDtmfReqQueue.resetSendChldRequest();
        }
        super.switchWaitingOrHoldingAndActiveResponse(radioResponseInfo);
    }
}
