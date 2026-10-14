package com.mediatek.internal.telephony;

import android.content.Intent;
import android.hardware.radio.V1_0.SuppSvcNotification;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Parcelable;
import android.os.SystemProperties;
import android.telephony.SignalStrength;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.dataconnection.PcoDataAfterAttached;
import com.mediatek.internal.telephony.dataconnection.PlmnMvnoData;
import com.mediatek.internal.telephony.gsm.MtkSuppCrssNotification;
import com.mediatek.internal.telephony.gsm.MtkSuppServiceNotification;
import com.mediatek.internal.telephony.ims.MtkDedicateDataCallResponse;
import com.mediatek.internal.telephony.worldphone.WorldMode;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimManager;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.CfuStatusNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.CipherNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.CrssNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.DedicateDataCall;
import vendor.mediatek.hardware.mtkradioex.V2_0.EtwsNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.IncomingCallNotification;
import vendor.mediatek.hardware.mtkradioex.V2_0.PcoDataAttachedInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.PlmnMvnoInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.SignalStrengthWithWcdmaEcio;
import vendor.mediatek.hardware.mtkradioex.V2_0.VsimOperationEvent;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioExIndication extends MtkRadioExIndicationBase {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static final String TAG = "MtkRadioInd";
    private MtkRIL mMtkRil;

    MtkRadioExIndication(RIL ril) {
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

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void bipProactiveCommand(int i, String str) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3057);
        }
        if (this.mMtkRil.mBipProCmdRegistrant != null) {
            this.mMtkRil.mBipProCmdRegistrant.notifyRegistrants(new AsyncResult((Object) null, str, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        String[] strArr = new String[arrayList.size() + 1];
        strArr[0] = Integer.toString(i2);
        for (int i3 = 0; i3 < arrayList.size(); i3++) {
            strArr[i3 + 1] = arrayList.get(i3);
        }
        this.mMtkRil.unsljLogRet(3126, null);
        if (this.mMtkRil.mCallAdditionalInfoRegistrants != null) {
            this.mMtkRil.mCallAdditionalInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void cfuStatusNotify(int i, CfuStatusNotification cfuStatusNotification) {
        this.mMtkRil.processIndication(i);
        int[] iArr = {cfuStatusNotification.status, cfuStatusNotification.lineId};
        this.mMtkRil.unsljLogRet(3070, iArr);
        if (iArr[1] == 1) {
            this.mMtkRil.mCfuReturnValue = iArr;
        }
        if (this.mMtkRil.mCallForwardingInfoRegistrants.size() == 0 || iArr[1] != 1) {
            return;
        }
        this.mMtkRil.mCallForwardingInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void cipherIndication(int i, CipherNotification cipherNotification) {
        this.mMtkRil.processIndication(i);
        String[] strArr = {cipherNotification.simCipherStatus, cipherNotification.sessionStatus, cipherNotification.csStatus, cipherNotification.psStatus};
        this.mMtkRil.unsljLogRet(3024, strArr);
        if (this.mMtkRil.mCipherIndicationRegistrants != null) {
            this.mMtkRil.mCipherIndicationRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void confSRVCC(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLog(3072);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.mEconfSrvccRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void crssIndication(int i, CrssNotification crssNotification) {
        this.mMtkRil.processIndication(i);
        MtkSuppCrssNotification mtkSuppCrssNotification = new MtkSuppCrssNotification();
        mtkSuppCrssNotification.code = crssNotification.code;
        mtkSuppCrssNotification.type = crssNotification.type;
        mtkSuppCrssNotification.alphaid = crssNotification.alphaid;
        mtkSuppCrssNotification.number = crssNotification.number;
        mtkSuppCrssNotification.cli_validity = crssNotification.cli_validity;
        this.mMtkRil.unsljLogRet(3025, null);
        if (this.mMtkRil.mCallRelatedSuppSvcRegistrant != null) {
            this.mMtkRil.mCallRelatedSuppSvcRegistrant.notifyRegistrant(new AsyncResult((Object) null, mtkSuppCrssNotification, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void currentSignalStrengthWithWcdmaEcioInd(int i, SignalStrengthWithWcdmaEcio signalStrengthWithWcdmaEcio) {
        this.mMtkRil.processIndication(i);
        SignalStrength signalStrength = new SignalStrength();
        this.mMtkRil.unsljLogRet(3097, signalStrength);
        this.mMtkRil.riljLog("currentSignalStrengthWithWcdmaEcioInd SignalStrength=" + signalStrength);
        if (this.mMtkRil.mSignalStrengthWithWcdmaEcioRegistrants.size() != 0) {
            this.mMtkRil.mSignalStrengthWithWcdmaEcioRegistrants.notifyRegistrants(new AsyncResult((Object) null, signalStrength, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void dataAllowedNotification(int i, int i2) {
        this.mMtkRil.processIndication(i);
        int[] iArr = {i2};
        this.mMtkRil.unsljLogMore(3014, i2 == 1 ? "true" : "false");
        if (this.mMtkRil.mDataAllowedRegistrants != null) {
            this.mMtkRil.mDataAllowedRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void dedicatedBearerActivationInd(int i, DedicateDataCall dedicateDataCall) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLog(3082);
        MtkDedicateDataCallResponse mtkDedicateDataCallResponseConvertDedicatedDataCallResult = this.mMtkRil.convertDedicatedDataCallResult(dedicateDataCall);
        this.mMtkRil.riljLog(mtkDedicateDataCallResponseConvertDedicatedDataCallResult.toString());
        if (this.mMtkRil.mDedicatedBearerActivedRegistrants != null) {
            this.mMtkRil.mDedicatedBearerActivedRegistrants.notifyRegistrants(new AsyncResult((Object) null, mtkDedicateDataCallResponseConvertDedicatedDataCallResult, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void dedicatedBearerDeactivationInd(int i, int i2) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLog(3084);
        this.mMtkRil.riljLog("dedicatedBearerDeactivationInd, cid: " + i2);
        if (this.mMtkRil.mDedicatedBearerDeactivatedRegistrants != null) {
            this.mMtkRil.mDedicatedBearerDeactivatedRegistrants.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void dedicatedBearerModificationInd(int i, DedicateDataCall dedicateDataCall) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLog(3083);
        MtkDedicateDataCallResponse mtkDedicateDataCallResponseConvertDedicatedDataCallResult = this.mMtkRil.convertDedicatedDataCallResult(dedicateDataCall);
        this.mMtkRil.riljLog(mtkDedicateDataCallResponseConvertDedicatedDataCallResult.toString());
        if (this.mMtkRil.mDedicatedBearerModifiedRegistrants != null) {
            this.mMtkRil.mDedicatedBearerModifiedRegistrants.notifyRegistrants(new AsyncResult((Object) null, mtkDedicateDataCallResponseConvertDedicatedDataCallResult, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void dsbpStateChanged(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3114);
        }
        this.mMtkRil.riljLog("dsbpStateChanged state: " + i2);
        if (this.mMtkRil.mDsbpStateRegistrant != null) {
            this.mMtkRil.mDsbpStateRegistrant.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void eMBMSAtInfoIndication(int i, String str) {
        this.mMtkRil.processIndication(i);
        String str2 = new String(str);
        this.mMtkRil.unsljLogRet(3055, str2);
        if (this.mMtkRil.mEmbmsAtInfoNotificationRegistrant.size() <= 0) {
            this.mMtkRil.riljLog("No mEmbmsAtInfoNotificationRegistrant exist");
        } else {
            this.mMtkRil.riljLog("Notify mEmbmsAtInfoNotificationRegistrant");
            this.mMtkRil.mEmbmsAtInfoNotificationRegistrant.notifyRegistrants(new AsyncResult((Object) null, str2, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void eMBMSSessionStatusIndication(int i, int i2) {
        this.mMtkRil.processIndication(i);
        int[] iArr = {i2};
        this.mMtkRil.unsljLogRet(3054, null);
        if (this.mMtkRil.mEmbmsSessionStatusNotificationRegistrant.size() > 0) {
            this.mMtkRil.riljLog("Notify mEmbmsSessionStatusNotificationRegistrant");
            this.mMtkRil.mEmbmsSessionStatusNotificationRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        } else {
            this.mMtkRil.riljLog("No mEmbmsSessionStatusNotificationRegistrant exist");
        }
        Intent intent = new Intent("com.mediatek.intent.action.EMBMS_SESSION_STATUS_CHANGED");
        intent.putExtra("isActived", i2);
        this.mMtkRil.mMtkContext.sendBroadcast(intent);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void eccNumIndication(int i, String str, String str2) {
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void esnMeidChangeInd(int i, String str) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3023);
        }
        if (this.mMtkRil.mCDMACardEsnMeidRegistrant != null) {
            this.mMtkRil.mCDMACardEsnMeidRegistrant.notifyRegistrant(new AsyncResult((Object) null, str, (Throwable) null));
            return;
        }
        if (ENG) {
            this.mMtkRil.riljLog("Cache esnMeidChangeInd");
        }
        this.mMtkRil.mEspOrMeid = str;
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void gmssRatChangedIndication(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3003, iArr);
        int[] iArr2 = iArr;
        if (this.mMtkRil.mGmssRatChangedRegistrant != null) {
            this.mMtkRil.mGmssRatChangedRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr2, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void iccidChanged(int i, String str) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLogRet(3135, SubscriptionInfo.givePrintableIccid(str));
        this.mMtkRil.cacheIccid(str);
        if (this.mMtkRil.mIccidRegistrants.size() != 0) {
            this.mMtkRil.mIccidRegistrants.notifyRegistrants(new AsyncResult((Object) null, str, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) {
        this.mMtkRil.processIndication(i);
        String[] strArr = new String[7];
        strArr[0] = incomingCallNotification.callId;
        strArr[1] = incomingCallNotification.number;
        strArr[2] = incomingCallNotification.type;
        strArr[3] = incomingCallNotification.callMode;
        strArr[4] = incomingCallNotification.seqNo;
        strArr[5] = incomingCallNotification.redirectNumber;
        this.mMtkRil.unsljLogRet(3015, null);
        if (this.mMtkRil.mIncomingCallIndicationRegistrant != null) {
            this.mMtkRil.mIncomingCallIndicationRegistrant.notifyRegistrant(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void mdChangedApnInd(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3021);
        }
        if (this.mMtkRil.mAttachApnChangedRegistrants != null) {
            this.mMtkRil.mAttachApnChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void meSmsStorageFullInd(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3011);
        }
        if (this.mMtkRil.mMeSmsFullRegistrant != null) {
            this.mMtkRil.mMeSmsFullRegistrant.notifyRegistrant();
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void mobileDataUsageInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3133, iArr);
        if (this.mMtkRil.mMobileDataUsageRegistrants != null) {
            this.mMtkRil.mMobileDataUsageRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void networkInfoInd(int i, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLogMore(3030, "networkInfo: " + arrayList);
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        if (this.mMtkRil.mNetworkInfoRegistrant.size() != 0) {
            this.mMtkRil.mNetworkInfoRegistrant.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void networkRejectCauseInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3109, iArr);
        if (this.mMtkRil.mNetworkRejectRegistrants.size() != 0) {
            this.mMtkRil.mNetworkRejectRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void newEtwsInd(int i, EtwsNotification etwsNotification) {
        this.mMtkRil.processIndication(i);
        MtkEtwsNotification mtkEtwsNotification = new MtkEtwsNotification();
        mtkEtwsNotification.messageId = etwsNotification.messageId;
        mtkEtwsNotification.serialNumber = etwsNotification.serialNumber;
        mtkEtwsNotification.warningType = etwsNotification.warningType;
        mtkEtwsNotification.plmnId = etwsNotification.plmnId;
        mtkEtwsNotification.securityInfo = etwsNotification.securityInfo;
        if (ENG) {
            this.mMtkRil.unsljLogRet(3010, mtkEtwsNotification);
        }
        if (this.mMtkRil.mEtwsNotificationRegistrant != null) {
            this.mMtkRil.mEtwsNotificationRegistrant.notifyRegistrant(new AsyncResult((Object) null, mtkEtwsNotification, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void oemHookRaw(int i, ArrayList<Byte> arrayList) {
        this.mMtkRil.processIndication(i);
        byte[] bArrArrayListToPrimitiveArray = RIL.arrayListToPrimitiveArray(arrayList);
        this.mMtkRil.unsljLogvRet(1028, IccUtils.bytesToHexString(bArrArrayListToPrimitiveArray));
        if (this.mMtkRil.mUnsolOemHookRegistrant != null) {
            this.mMtkRil.mUnsolOemHookRegistrant.notifyRegistrant(new AsyncResult((Object) null, bArrArrayListToPrimitiveArray, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onCardDetectedInd(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3125);
        }
        if (this.mMtkRil.mCardDetectedIndRegistrant.size() != 0) {
            this.mMtkRil.mCardDetectedIndRegistrant.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            return;
        }
        if (ENG) {
            this.mMtkRil.riljLog("Cache card detected event");
        }
        this.mMtkRil.mIsCardDetected = true;
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onCellularQualityChangedInd(int i, ArrayList<Integer> arrayList) {
        int i2;
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3132);
        }
        int[] iArr = new int[arrayList.size()];
        for (int i3 = 0; i3 < arrayList.size(); i3++) {
            iArr[i3] = arrayList.get(i3).intValue();
        }
        int i4 = iArr[0];
        if (i4 == 0) {
            i2 = 0;
        } else if (i4 == 1) {
            i2 = 5;
        } else if (i4 == 2) {
            i2 = 2;
        } else if (i4 != 3) {
            i2 = i4 != 4 ? 0 : 7;
        } else {
            i2 = 6;
        }
        this.mMtkRil.riljLog("RIL_UNSOL_IWLAN_CELLULAR_QUALITY_CHANGED_IND type:" + i2 + " , value = " + iArr[1]);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onDsdaChangedInd(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3131);
        }
        this.mMtkRil.riljLog("onDsdaChangedInd: mode=" + i2);
        if (this.mMtkRil.mDsdaStateRegistrant != null) {
            this.mMtkRil.mDsdaStateRegistrant.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onImeiLock(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3007);
        }
        if (this.mMtkRil.mImeiLockRegistrant != null) {
            this.mMtkRil.mImeiLockRegistrant.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onImsiRefreshDone(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3008);
        }
        if (this.mMtkRil.mImsiRefreshDoneRegistrant != null) {
            this.mMtkRil.mImsiRefreshDoneRegistrant.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onMccMncChanged(int i, String str) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLogRet(3096, str);
        if (this.mMtkRil.mMccMncRegistrants.size() != 0) {
            this.mMtkRil.mMccMncRegistrants.notifyRegistrants(new AsyncResult((Object) null, str, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onMdDataRetryCountReset(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3059);
        }
        if (this.mMtkRil.mMdDataRetryCountResetRegistrants != null) {
            this.mMtkRil.mMdDataRetryCountResetRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onNwLimitInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3134, iArr);
        if (this.mMtkRil.mNwLimitRegistrants != null) {
            this.mMtkRil.mNwLimitRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onPlmnDataInd(int i, PlmnMvnoInfo plmnMvnoInfo) {
        this.mMtkRil.processIndication(i);
        PlmnMvnoData plmnMvnoData = new PlmnMvnoData(plmnMvnoInfo.gsmPlmn, plmnMvnoInfo.cdmaPlmn, plmnMvnoInfo.gsmSpn, plmnMvnoInfo.cdmaSpn, plmnMvnoInfo.gsmImsi, plmnMvnoInfo.cdmaImsi, plmnMvnoInfo.gid1, plmnMvnoInfo.pnn, plmnMvnoInfo.impi);
        this.mMtkRil.unsljLogRet(3136, plmnMvnoData);
        this.mMtkRil.notifyPlmnMvnoData(plmnMvnoData);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onPseudoCellInfoInd(int i, ArrayList<Integer> arrayList) {
        Parcelable pseudoCellInfo;
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3017);
        }
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        String str = SystemProperties.get(String.format("persist.vendor.radio.apc.mode%d", this.mMtkRil.mInstanceId), "0");
        int iIndexOf = str.indexOf("=");
        if (iIndexOf != -1) {
            String[] strArrSplit = str.substring(iIndexOf + 1).split(",");
            pseudoCellInfo = new PseudoCellInfo(Integer.parseInt(strArrSplit[0]), Integer.parseInt(strArrSplit[1]) == 1, Integer.parseInt(strArrSplit[2]), iArr);
        } else {
            pseudoCellInfo = new PseudoCellInfo(0, false, 0, iArr);
        }
        if (this.mMtkRil.mPseudoCellInfoRegistrants != null) {
            this.mMtkRil.mPseudoCellInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, pseudoCellInfo, (Throwable) null));
        }
        Intent intent = new Intent("com.mediatek.phone.ACTION_APC_INFO_NOTIFY");
        intent.putExtra("phoneId", this.mMtkRil.mInstanceId);
        intent.putExtra("info", pseudoCellInfo);
        this.mMtkRil.mMtkContext.sendBroadcast(intent);
        this.mMtkRil.riljLog("Broadcast for APC info:cellInfo=" + pseudoCellInfo.toString());
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onRemoveRestrictEutran(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3060);
        }
        if (this.mMtkRil.mRemoveRestrictEutranRegistrants != null) {
            this.mMtkRil.mRemoveRestrictEutranRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onRsuEvent(int i, int i2, String str) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.riljLog("[RSU-SIMLOCK] onRsuEvent eventId: " + i2 + ", eventString: " + str);
        if (ENG) {
            this.mMtkRil.unsljLog(3128);
        }
        int[] iArr = {i2};
        if (this.mMtkRil.mRsuSimlockRegistrants != null) {
            this.mMtkRil.mRsuSimlockRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onRsuSimLockEvent(int i, int i2) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.riljLog("[RSU-SIMLOCK] onRsuSimLockEvent eventId " + i2);
        if (ENG) {
            this.mMtkRil.unsljLog(3128);
        }
        int[] iArr = {i2};
        if (this.mMtkRil.mRsuSimlockRegistrants != null) {
            this.mMtkRil.mRsuSimlockRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onSimHotSwapInd(int i, int i2, String str) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.riljLog("onSimHotSwapInd event: " + i2 + " info: " + str);
        }
        if (i2 == 0) {
            if (this.mMtkRil.mSimPlugIn != null) {
                this.mMtkRil.mSimPlugIn.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
                return;
            }
            return;
        }
        if (i2 == 1) {
            if (this.mMtkRil.mSimPlugOut != null) {
                this.mMtkRil.mSimPlugOut.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
                return;
            }
            return;
        }
        if (i2 == 2) {
            if (this.mMtkRil.mSimRecovery != null) {
                this.mMtkRil.mSimRecovery.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
                return;
            }
            return;
        }
        if (i2 == 3) {
            if (this.mMtkRil.mSimMissing != null) {
                this.mMtkRil.mSimMissing.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            }
        } else if (i2 == 4) {
            if (this.mMtkRil.mSimTrayPlugIn != null) {
                this.mMtkRil.mSimTrayPlugIn.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            }
        } else if (i2 != 6) {
            this.mMtkRil.riljLog("onSimHotSwapInd Invalid event!");
        } else if (this.mMtkRil.mSimCommonSlotNoChanged != null) {
            this.mMtkRil.mSimCommonSlotNoChanged.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onSimPowerChangedInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3124);
        }
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.mSimPowerInfo = iArr;
        if (this.mMtkRil.mSimPowerChanged.size() != 0) {
            this.mMtkRil.mSimPowerChanged.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onStkMenuReset(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3071);
        }
        if (this.mMtkRil.mStkSetupMenuResetRegistrant != null) {
            this.mMtkRil.mStkSetupMenuResetRegistrant.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        if (this.mMtkRil.mTxPowerRegistrant != null) {
            this.mMtkRil.mTxPowerRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onTxPowerStatusIndication(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        if (this.mMtkRil.mTxPowerStatusRegistrant != null) {
            this.mMtkRil.mTxPowerStatusRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase
    public void onVirtualSimOff(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3006);
        }
        if (this.mMtkRil.mVirtualSimOff != null) {
            this.mMtkRil.mVirtualSimOn.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase
    public void onVirtualSimOn(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3005);
        }
        if (this.mMtkRil.mVirtualSimOn != null) {
            this.mMtkRil.mVirtualSimOn.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onVirtualSimStatusChanged(int i, int i2) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3129);
        }
        if (i2 == 0 && this.mMtkRil.mVirtualSimOff != null) {
            this.mMtkRil.mVirtualSimOff.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        } else {
            if (i2 != 1 || this.mMtkRil.mVirtualSimOn == null) {
                return;
            }
            this.mMtkRil.mVirtualSimOn.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void onVsimEventIndication(int i, VsimOperationEvent vsimOperationEvent) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLogRet(3074, "len=" + new Integer(vsimOperationEvent.dataLength));
        int i2 = vsimOperationEvent.dataLength > 0 ? (vsimOperationEvent.dataLength / 2) + 4 : 0;
        ExternalSimManager.VsimEvent vsimEvent = new ExternalSimManager.VsimEvent(vsimOperationEvent.transactionId, vsimOperationEvent.eventId, i2, 1 << this.mMtkRil.mInstanceId.intValue());
        if (i2 > 0) {
            vsimEvent.putInt(vsimOperationEvent.dataLength / 2);
            vsimEvent.putBytes(IccUtils.hexStringToBytes(vsimOperationEvent.data));
        }
        if (ENG) {
            this.mMtkRil.unsljLogRet(3074, vsimEvent.toString());
        }
        if (this.mMtkRil.mVsimIndicationRegistrants != null) {
            this.mMtkRil.mVsimIndicationRegistrants.notifyRegistrants(new AsyncResult((Object) null, vsimEvent, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void pcoDataAfterAttached(int i, PcoDataAttachedInfo pcoDataAttachedInfo) {
        this.mMtkRil.processIndication(i);
        PcoDataAfterAttached pcoDataAfterAttached = new PcoDataAfterAttached(pcoDataAttachedInfo.cid, pcoDataAttachedInfo.apnName, pcoDataAttachedInfo.bearerProto, pcoDataAttachedInfo.pcoId, RIL.arrayListToPrimitiveArray(pcoDataAttachedInfo.contents));
        this.mMtkRil.unsljLogRet(3053, pcoDataAfterAttached);
        this.mMtkRil.mPcoDataAfterAttachedRegistrants.notifyRegistrants(new AsyncResult((Object) null, pcoDataAfterAttached, (Throwable) null));
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void phbReadyNotification(int i, int i2) {
        this.mMtkRil.processIndication(i);
        int[] iArr = {i2};
        this.mMtkRil.unsljLogMore(3028, "phbReadyNotification: " + i2);
        if (this.mMtkRil.mPhbReadyRegistrants != null) {
            this.mMtkRil.mPhbReadyRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void plmnChangedIndication(int i, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        String[] strArr = new String[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            strArr[i2] = arrayList.get(i2);
        }
        this.mMtkRil.unsljLogRet(3000, strArr);
        synchronized (this.mMtkRil.mWPMonitor) {
            if (this.mMtkRil.mPlmnChangeNotificationRegistrant.size() > 0) {
                this.mMtkRil.riljLog("ECOPS,notify mPlmnChangeNotificationRegistrant");
                this.mMtkRil.mPlmnChangeNotificationRegistrant.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
            } else {
                this.mMtkRil.mEcopsReturnValue = strArr;
            }
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void qualifiedNetworkTypesChangedInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3130, iArr);
        if (this.mMtkRil.mQualifiedNetworkTypesRegistrant != null) {
            this.mMtkRil.mQualifiedNetworkTypesRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void registrationSuspendedIndication(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3001, iArr);
        synchronized (this.mMtkRil.mWPMonitor) {
            if (this.mMtkRil.mRegistrationSuspendedRegistrant != null) {
                this.mMtkRil.riljLog("EMSR, notify mRegistrationSuspendedRegistrant");
                this.mMtkRil.mRegistrationSuspendedRegistrant.notifyRegistrant(new AsyncResult((Object) null, iArr, (Throwable) null));
            } else {
                this.mMtkRil.mEmsrReturnValue = iArr;
            }
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void resetAttachApnInd(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3020);
        }
        if (this.mMtkRil.mResetAttachApnRegistrants != null) {
            this.mMtkRil.mResetAttachApnRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseCsNetworkStateChangeInd(int i, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.riljLog("[UNSL]< UNSOL_RESPONSE_CS_NETWORK_STATE_CHANGED");
        if (this.mMtkRil.mCsNetworkStateRegistrants.size() != 0) {
            this.mMtkRil.mCsNetworkStateRegistrants.notifyRegistrants(new AsyncResult((Object) null, arrayList.toArray(new String[arrayList.size()]), (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseFemtocellInfo(int i, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        this.mMtkRil.unsljLogRet(3029, strArr);
        if (this.mMtkRil.mFemtoCellInfoRegistrants.size() != 0) {
            this.mMtkRil.mFemtoCellInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseInvalidSimInd(int i, ArrayList<String> arrayList) {
        this.mMtkRil.processIndication(i);
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        this.mMtkRil.unsljLogRet(3016, strArr);
        if (this.mMtkRil.mInvalidSimInfoRegistrant.size() != 0) {
            this.mMtkRil.mInvalidSimInfoRegistrant.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseLteNetworkInfo(int i, int i2) {
        this.mMtkRil.riljLog("[UNSL]< RIL_UNSOL_LTE_NETWORK_INFO " + i2);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseModulationInfoInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3019, iArr);
        if (this.mMtkRil.mModulationRegistrants.size() != 0) {
            this.mMtkRil.mModulationRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responseNetworkEventInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3018, iArr);
        if (this.mMtkRil.mNetworkEventRegistrants.size() != 0) {
            this.mMtkRil.mNetworkEventRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void responsePsNetworkStateChangeInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.riljLog("[UNSL]< UNSOL_RESPONSE_PS_NETWORK_STATE_CHANGED");
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        if (this.mMtkRil.mPsNetworkStateRegistrants.size() != 0) {
            this.mMtkRil.mPsNetworkStateRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void smlSlotLockInfoChangedInd(int i, ArrayList<Integer> arrayList) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3115);
        }
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.mSmlSlotLockInfo = iArr;
        if (this.mMtkRil.mSmlSlotLockInfoChanged.size() != 0) {
            this.mMtkRil.mSmlSlotLockInfoChanged.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void smsInfoExtInd(int i, String str) {
        this.mMtkRil.processIndication(i);
        this.mMtkRil.unsljLogRet(3137, str);
        if (this.mMtkRil.mSmsInfoExtRegistrants.size() != 0) {
            this.mMtkRil.mSmsInfoExtRegistrants.notifyRegistrants(new AsyncResult((Object) null, str, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void smsReadyInd(int i) {
        this.mMtkRil.processIndication(i);
        if (ENG) {
            this.mMtkRil.unsljLog(3012);
        }
        if (this.mMtkRil.mSmsReadyRegistrants.size() != 0) {
            this.mMtkRil.mSmsReadyRegistrants.notifyRegistrants();
            return;
        }
        if (ENG) {
            this.mMtkRil.riljLog("Cache sms ready event");
        }
        this.mMtkRil.mIsSmsReady = true;
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void suppSvcNotifyEx(int i, SuppSvcNotification suppSvcNotification) {
        this.mMtkRil.processIndication(i);
        MtkSuppServiceNotification mtkSuppServiceNotification = new MtkSuppServiceNotification();
        mtkSuppServiceNotification.notificationType = suppSvcNotification.isMT ? 1 : 0;
        mtkSuppServiceNotification.code = suppSvcNotification.code;
        mtkSuppServiceNotification.index = suppSvcNotification.index;
        mtkSuppServiceNotification.type = suppSvcNotification.type;
        mtkSuppServiceNotification.number = suppSvcNotification.number;
        this.mMtkRil.unsljLogRet(3026, null);
        if (this.mMtkRil.mSsnExRegistrant != null) {
            this.mMtkRil.mSsnExRegistrant.notifyRegistrant(new AsyncResult((Object) null, mtkSuppServiceNotification, (Throwable) null));
        }
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void triggerOtaSP(int i) {
        this.mMtkRil.invokeOemRilRequestStrings(new String[]{"AT+CDV=*22899", "", "DESTRILD:C2K"}, null);
    }

    @Override // com.mediatek.internal.telephony.MtkRadioExIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioExIndication
    public void worldModeChangedIndication(int i, ArrayList<Integer> arrayList) {
        boolean zUpdateSwitchingState;
        this.mMtkRil.processIndication(i);
        int[] iArr = new int[arrayList.size()];
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            iArr[i2] = arrayList.get(i2).intValue();
        }
        this.mMtkRil.unsljLogRet(3022, iArr);
        int i3 = iArr[0];
        if (i3 == 2) {
            zUpdateSwitchingState = WorldMode.resetSwitchingState(i3);
            i3 = 1;
        } else {
            zUpdateSwitchingState = i3 == 0 ? WorldMode.updateSwitchingState(true) : WorldMode.updateSwitchingState(false);
        }
        if (zUpdateSwitchingState) {
            Intent intent = new Intent(WorldMode.ACTION_WORLD_MODE_CHANGED);
            intent.putExtra(WorldMode.EXTRA_WORLD_MODE_CHANGE_STATE, Integer.valueOf(i3));
            this.mMtkRil.mMtkContext.sendBroadcast(intent);
            this.mMtkRil.riljLog("Broadcast for WorldModeChanged: state=" + i3);
        }
    }
}
