package com.mediatek.ims.ril;

import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.SuppSvcNotification;
import android.os.AsyncResult;
import android.telephony.Rlog;
import android.telephony.SmsMessage;
import com.android.internal.telephony.RILUtils;
import com.android.internal.telephony.cdma.SmsMessageConverter;
import com.android.internal.telephony.gsm.SuppServiceNotification;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsRegInfo;
import com.mediatek.ims.ImsServiceCallTracker;
import java.util.ArrayList;
import java.util.Iterator;
import vendor.mediatek.hardware.mtkradioex.V2_0.Dialog;
import vendor.mediatek.hardware.mtkradioex.V2_0.ImsConfParticipant;
import vendor.mediatek.hardware.mtkradioex.V2_0.ImsRegStatusInfo;
import vendor.mediatek.hardware.mtkradioex.V2_0.IncomingCallNotification;

/* JADX INFO: loaded from: classes.dex */
public class ImsRadioIndication extends ImsRadioIndicationBase {
    private static final int INVALID_CALL_MODE = 255;
    private int mPhoneId;
    private ImsRILAdapter mRil;

    ImsRadioIndication(ImsRILAdapter imsRILAdapter, int i) {
        this.mRil = imsRILAdapter;
        this.mPhoneId = i;
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void audioIndication(int i, int i2, int i3) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_AUDIO_INDICATION, iArr);
        if (this.mRil.mRttAudioIndicatorRegistrants != null) {
            this.mRil.mRttAudioIndicatorRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void callAdditionalInfoInd(int i, int i2, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        String[] strArr = new String[arrayList.size() + 1];
        strArr[0] = Integer.toString(i2);
        for (int i3 = 0; i3 < arrayList.size(); i3++) {
            strArr[i3 + 1] = arrayList.get(i3);
        }
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_CALL_ADDITIONAL_INFO, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mCallAdditionalInfoRegistrants != null) {
            this.mRil.mCallAdditionalInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void callInfoIndication(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        if (arrayList == null || arrayList.size() == 0) {
            return;
        }
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_CALL_INFO_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mCallInfoRegistrants != null) {
            this.mRil.mCallInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void callRatIndication(int i, int i2, int i3) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_CALL_RAT_INDICATION, iArr);
        if (this.mRil.mCallRatIndicationRegistrants != null) {
            this.mRil.mCallRatIndicationRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void callmodChangeIndicator(int i, String str, String str2, String str3, String str4, String str5) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_CALLMOD_CHANGE_INDICATOR, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mCallModeChangeIndicatorRegistrants != null) {
            this.mRil.mCallModeChangeIndicatorRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void cdmaNewSmsEx(int i, CdmaSmsMessage cdmaSmsMessage) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(ImsRILConstants.RIL_UNSOL_RESPONSE_CDMA_NEW_SMS_EX);
        SmsMessage smsMessageNewSmsMessageFromCdmaSmsMessage = SmsMessageConverter.newSmsMessageFromCdmaSmsMessage(cdmaSmsMessage);
        if (this.mRil.mCdmaSmsRegistrant != null) {
            this.mRil.mCdmaSmsRegistrant.notifyRegistrant(new AsyncResult((Object) null, smsMessageNewSmsMessageFromCdmaSmsMessage, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void econfResultIndication(int i, String str, String str2, String str3, String str4, String str5, String str6) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5, str6};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_ECONF_RESULT_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mEconfResultRegistrants != null) {
            this.mRil.riljLog("ECONF result = " + strArr[3]);
            this.mRil.mEconfResultRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void ectIndication(int i, int i2, int i3, int i4) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3, i4};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_ECT_INDICATION, iArr);
        if (this.mRil.mEctResultRegistrants != null) {
            this.mRil.mEctResultRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void getProvisionDone(int i, String str, String str2) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_GET_PROVISION_DONE, strArr);
        if (this.mRil.mImsGetProvisionDoneRegistrants != null) {
            this.mRil.mImsGetProvisionDoneRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsBearerInit(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_BEARER_INIT, iArr);
        if (this.mRil.mBearerInitRegistrants != null) {
            this.mRil.mBearerInitRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsBearerStateNotify(int i, int i2, int i3, String str) {
        this.mRil.processIndication(i);
        String[] strArr = {String.valueOf(this.mPhoneId), String.valueOf(i2), String.valueOf(i3), str};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_BEARER_STATE_NOTIFY, strArr);
        if (this.mRil.mBearerStateRegistrants != null) {
            this.mRil.mBearerStateRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsCfgConfigChanged(int i, int i2, String str, String str2) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(this.mPhoneId), str, str2};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_CONFIG_CONFIG_CHANGED, strArr);
        if (this.mRil.mImsCfgConfigChangedRegistrants != null) {
            this.mRil.mImsCfgConfigChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsCfgConfigLoaded(int i) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(this.mPhoneId)};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_CONFIG_CONFIG_LOADED, strArr);
        if (this.mRil.mImsCfgConfigLoadedRegistrants != null) {
            this.mRil.mImsCfgConfigLoadedRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsCfgDynamicImsSwitchComplete(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_CONFIG_DYNAMIC_IMS_SWITCH_COMPLETE, iArr);
        if (this.mRil.mImsCfgDynamicImsSwitchCompleteRegistrants != null) {
            this.mRil.mImsCfgDynamicImsSwitchCompleteRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsCfgFeatureChanged(int i, int i2, int i3, int i4) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId, i3, i4};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_CONFIG_FEATURE_CHANGED, iArr);
        if (this.mRil.mImsCfgFeatureChangedRegistrants != null) {
            this.mRil.mImsCfgFeatureChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsConferenceInfoIndication(int i, ArrayList<ImsConfParticipant> arrayList) {
        this.mRil.processIndication(i);
        ArrayList arrayList2 = new ArrayList();
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            ImsCallSessionProxy.User user = new ImsCallSessionProxy.User();
            user.mUserAddr = arrayList.get(i2).user_addr;
            user.mEndPoint = arrayList.get(i2).end_point;
            user.mEntity = arrayList.get(i2).entity;
            user.mDisplayText = arrayList.get(i2).display_text;
            user.mStatus = arrayList.get(i2).status;
            arrayList2.add(user);
        }
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_CONFERENCE_INFO_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + arrayList2));
        if (this.mRil.mImsConfInfoRegistrants != null) {
            this.mRil.mImsConfInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, arrayList2, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsDataInfoNotify(int i, String str, String str2, String str3) {
        this.mRil.processIndication(i);
        String[] strArr = {String.valueOf(this.mPhoneId), str, str2, str3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_DATA_INFO_NOTIFY, strArr);
        if (this.mRil.mImsDataInfoNotifyRegistrants != null) {
            this.mRil.mImsDataInfoNotifyRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsDeregDone(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_DEREG_DONE, iArr);
        if (this.mRil.mImsDeregistrationDoneRegistrants != null) {
            this.mRil.mImsDeregistrationDoneRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsDialogIndication(int i, ArrayList<Dialog> arrayList) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(ImsRILConstants.RIL_UNSOL_IMS_DIALOG_INDICATION);
        for (Dialog dialog : arrayList) {
            this.mRil.riljLog("RIL_UNSOL_IMS_DIALOG_INDICATION dialogId = " + dialog.dialogId + ", address:" + ImsServiceCallTracker.sensitiveEncode(dialog.address));
        }
        if (this.mRil.mImsDialogRegistrant != null) {
            this.mRil.mImsDialogRegistrant.notifyRegistrants(new AsyncResult((Object) null, arrayList, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsDisableDone(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_DISABLE_DONE, iArr);
        if (this.mRil.mImsDisableDoneRegistrants != null) {
            this.mRil.mImsDisableDoneRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsDisableStart(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_DISABLE_START, iArr);
        if (this.mRil.mImsDisableStartRegistrants != null) {
            this.mRil.mImsDisableStartRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsEnableDone(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_ENABLE_DONE, iArr);
        if (this.mRil.mImsEnableDoneRegistrants != null) {
            this.mRil.mImsEnableDoneRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsEnableStart(int i) {
        this.mRil.processIndication(i);
        int[] iArr = {this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_ENABLE_START, iArr);
        if (this.mRil.mImsEnableStartRegistrants != null) {
            this.mRil.mImsEnableStartRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsEventPackageIndication(int i, String str, String str2, String str3, String str4, String str5) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5, Integer.toString(this.mPhoneId)};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_EVENT_PACKAGE_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mImsEvtPkgRegistrants != null) {
            this.mRil.mImsEvtPkgRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRadioInfoChange(int i, String str, String str2) {
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRedialEmergencyIndication(int i, String str) {
        this.mRil.processIndication(i);
        String[] strArr = {str, Integer.toString(this.mPhoneId)};
        this.mRil.riljLog(" ImsRILConstants.RIL_UNSOL_REDIAL_EMERGENCY_INDICATION, " + str + " phoneId = " + this.mPhoneId);
        if (this.mRil.mImsRedialEccIndRegistrants != null) {
            this.mRil.mImsRedialEccIndRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRegInfoInd(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        StringBuilder sb = new StringBuilder();
        sb.append("imsRegInfoInd: ");
        Iterator<Integer> it = arrayList.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
            sb.append(", ");
        }
        sb.deleteCharAt(sb.length() - 1);
        this.mRil.riljLog(sb.toString());
        if (this.mRil.mEiregIndRegistrants != null) {
            this.mRil.mEiregIndRegistrants.notifyRegistrants(new AsyncResult((Object) null, arrayList, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRegStatusReport(int i, ImsRegStatusInfo imsRegStatusInfo) {
        this.mRil.processIndication(i);
        ImsRegInfo imsRegInfo = new ImsRegInfo(imsRegStatusInfo.report_type, imsRegStatusInfo.account_id, imsRegStatusInfo.expire_time, imsRegStatusInfo.error_code, imsRegStatusInfo.uri, imsRegStatusInfo.error_msg);
        this.mRil.riljLogv(imsRegInfo.toString());
        if (this.mRil.mImsRegStatusIndRistrants != null) {
            this.mRil.mImsRegStatusIndRistrants.notifyRegistrants(new AsyncResult((Object) null, imsRegInfo, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRegistrationInfo(int i, int i2, int i3) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3, this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_REGISTRATION_INFO, iArr);
        if (this.mRil.mImsRegistrationInfoRegistrants != null) {
            this.mRil.mImsRegistrationInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsRtpInfo(int i, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5, str6, str7};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_RTP_INFO, strArr);
        if (this.mRil.mRTPInfoRegistrants != null) {
            this.mRil.mRTPInfoRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void imsSupportEcc(int i, int i2) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, this.mPhoneId};
        this.mRil.riljLog(" ImsRILConstants.RIL_UNSOL_IMS_ECC_SUPPORT, " + i2 + " phoneId = " + this.mPhoneId);
        if (this.mRil.mImsEccSupportRegistrants != null) {
            this.mRil.mImsEccSupportRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void incomingCallIndication(int i, IncomingCallNotification incomingCallNotification) {
        this.mRil.processIndication(i);
        String[] strArr = {incomingCallNotification.callId, incomingCallNotification.number, incomingCallNotification.type, incomingCallNotification.callMode, incomingCallNotification.seqNo, incomingCallNotification.redirectNumber, incomingCallNotification.toNumber};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_INCOMING_CALL_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mIncomingCallIndicationRegistrants != null) {
            this.mRil.mIncomingCallIndicationRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void lteMessageWaitingIndication(int i, String str, String str2, String str3, String str4, String str5) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5, Integer.toString(this.mPhoneId)};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_LTE_MESSAGE_WAITING_INDICATION, ImsServiceCallTracker.sensitiveEncode("" + strArr));
        if (this.mRil.mLteMsgWaitingRegistrants != null) {
            this.mRil.mLteMsgWaitingRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void multiImsCount(int i, int i2) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_IMS_MULTIIMS_COUNT, iArr);
        if (this.mRil.mMultiImsCountRegistrants != null) {
            this.mRil.mMultiImsCountRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void newSmsEx(int i, ArrayList<Byte> arrayList) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(this.mPhoneId)};
        byte[] bArrArrayListToPrimitiveArray = RILUtils.arrayListToPrimitiveArray(arrayList);
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RESPONSE_NEW_SMS_EX, strArr);
        if (this.mRil.mNewSmsRegistrant != null) {
            this.mRil.mNewSmsRegistrant.notifyRegistrant(new AsyncResult((Object) null, bArrArrayListToPrimitiveArray, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void newSmsStatusReportEx(int i, ArrayList<Byte> arrayList) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(this.mPhoneId)};
        byte[] bArrArrayListToPrimitiveArray = RILUtils.arrayListToPrimitiveArray(arrayList);
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT_EX, strArr);
        if (this.mRil.mSmsStatusRegistrant != null) {
            this.mRil.mSmsStatusRegistrant.notifyRegistrant(new AsyncResult((Object) null, bArrArrayListToPrimitiveArray, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void noEmergencyCallbackMode(int i) {
        this.mRil.processIndication(i);
        this.mRil.unsljLog(ImsRILConstants.RIL_UNSOL_NO_EMERGENCY_CALLBACK_MODE);
        if (this.mRil.mNoECBMRegistrants != null) {
            this.mRil.mNoECBMRegistrants.notifyRegistrants();
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void onSsacStatus(int i, ArrayList<Integer> arrayList) {
        this.mRil.processIndication(i);
        StringBuilder sb = new StringBuilder();
        sb.append("onSsacStatus: ");
        Iterator<Integer> it = arrayList.iterator();
        while (it.hasNext()) {
            sb.append(it.next());
            sb.append(", ");
        }
        sb.deleteCharAt(sb.length() - 1);
        this.mRil.riljLog(sb.toString());
        if (this.mRil.mSsacIndRegistrants != null) {
            this.mRil.mSsacIndRegistrants.notifyRegistrants(new AsyncResult((Object) null, arrayList, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void onUssi(int i, int i2, String str) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(i2), str, Integer.toString(this.mPhoneId)};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_ON_USSI, strArr);
        if (this.mRil.mUSSIRegistrants != null) {
            this.mRil.mUSSIRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void onVolteSubscription(int i, int i2) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_ON_VOLTE_SUBSCRIPTION, iArr);
        if (this.mRil.mVolteSubscriptionRegistrants != null) {
            this.mRil.mVolteSubscriptionRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void onXui(int i, String str, String str2, String str3) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, Integer.toString(this.mPhoneId)};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_ON_XUI, Rlog.pii("IMS_RILA", strArr));
        if (this.mRil.mXuiRegistrants != null) {
            this.mRil.mXuiRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase
    protected void riljLoge(String str) {
        this.mRil.riljLoge(str);
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void rttCapabilityIndication(int i, int i2, int i3, int i4, int i5, int i6) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3, i4, i5, i6};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RTT_CAPABILITY_INDICATION, iArr);
        if (this.mRil.mRttCapabilityIndicatorRegistrants != null) {
            this.mRil.mRttCapabilityIndicatorRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void rttModifyRequestReceive(int i, int i2, int i3) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RTT_MODIFY_REQUEST_RECEIVE, iArr);
        if (this.mRil.mRttModifyRequestReceiveRegistrants != null) {
            this.mRil.mRttModifyRequestReceiveRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void rttModifyResponse(int i, int i2, int i3) {
        this.mRil.processIndication(i);
        int[] iArr = {i2, i3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RTT_MODIFY_RESPONSE, iArr);
        if (this.mRil.mRttModifyResponseRegistrants != null) {
            this.mRil.mRttModifyResponseRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void rttTextReceive(int i, int i2, int i3, String str) {
        this.mRil.processIndication(i);
        String[] strArr = {Integer.toString(i2), Integer.toString(i3), str};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_RTT_TEXT_RECEIVE, strArr);
        if (this.mRil.mRttTextReceiveRegistrants != null) {
            this.mRil.mRttTextReceiveRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void sendVopsIndication(int i, int i2) {
        int[] iArr = {i2};
        this.mRil.riljLog("ImsRILConstants.RIL_UNSOL_VOPS_INDICATION, " + i2 + " phoneId = " + this.mPhoneId);
        if (this.mRil.mVopsStatusIndRegistrants != null) {
            this.mRil.mVopsStatusIndRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void sipCallProgressIndicator(int i, String str, String str2, String str3, String str4, String str5, String str6) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3, str4, str5, str6};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_SIP_CALL_PROGRESS_INDICATOR, strArr);
        if (this.mRil.mCallProgressIndicatorRegistrants != null) {
            this.mRil.mCallProgressIndicatorRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void sipHeaderReport(int i, ArrayList<String> arrayList) {
        this.mRil.processIndication(i);
        if (arrayList == null || arrayList.size() == 0) {
            return;
        }
        String[] strArr = (String[]) arrayList.toArray(new String[arrayList.size()]);
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_SIP_HEADER, strArr);
        if (this.mRil.mImsSipHeaderRegistrants != null) {
            this.mRil.mImsSipHeaderRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void sipRegInfoInd(int i, int i2, int i3, ArrayList<String> arrayList) {
        StringBuilder sb = new StringBuilder();
        sb.append("sipRegInfoInd: ");
        sb.append(i2);
        sb.append(",");
        sb.append(i3);
        for (String str : arrayList) {
            sb.append(",");
            sb.append(str);
        }
        this.mRil.riljLog(sb.toString());
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void speechCodecInfoIndication(int i, int i2) {
        this.mRil.processIndication(i);
        int[] iArr = {i2};
        this.mRil.riljLog(" ImsRILConstants.RIL_UNSOL_SPEECH_CODEC_INFO, " + i2 + " phoneId = " + this.mPhoneId);
        if (this.mRil.mSpeechCodecInfoRegistrant != null) {
            this.mRil.mSpeechCodecInfoRegistrant.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void suppSvcNotify(int i, SuppSvcNotification suppSvcNotification) {
        this.mRil.processIndication(i);
        SuppServiceNotification suppServiceNotification = new SuppServiceNotification();
        suppServiceNotification.notificationType = suppSvcNotification.isMT ? 1 : 0;
        suppServiceNotification.code = suppSvcNotification.code;
        suppServiceNotification.index = suppSvcNotification.index;
        suppServiceNotification.type = suppSvcNotification.type;
        suppServiceNotification.number = suppSvcNotification.number;
        this.mRil.unsljLogRet(1011, suppSvcNotification);
        if (this.mRil.mSuppServiceNotificationRegistrants != null) {
            this.mRil.mSuppServiceNotificationRegistrants.notifyRegistrants(new AsyncResult((Object) null, suppServiceNotification, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void videoCapabilityIndicator(int i, String str, String str2, String str3) {
        this.mRil.processIndication(i);
        String[] strArr = {str, str2, str3};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_VIDEO_CAPABILITY_INDICATOR, strArr);
        if (this.mRil.mVideoCapabilityIndicatorRegistrants != null) {
            this.mRil.mVideoCapabilityIndicatorRegistrants.notifyRegistrants(new AsyncResult((Object) null, strArr, (Throwable) null));
        }
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // com.mediatek.ims.ril.ImsRadioIndicationBase, vendor.mediatek.hardware.mtkradioex.V2_0.IImsRadioIndication
    public void volteSetting(int i, boolean z) {
        this.mRil.processIndication(i);
        int[] iArr = {z ? 1 : 0, this.mPhoneId};
        this.mRil.unsljLogRet(ImsRILConstants.RIL_UNSOL_VOLTE_SETTING, iArr);
        this.mRil.mVolteSettingValue = iArr;
        if (this.mRil.mVolteSettingRegistrants != null) {
            this.mRil.mVolteSettingRegistrants.notifyRegistrants(new AsyncResult((Object) null, iArr, (Throwable) null));
        }
    }
}
