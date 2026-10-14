package com.mediatek.internal.telephony.gsm;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Message;
import android.os.UserHandle;
import android.telephony.Rlog;
import com.android.internal.telephony.InboundSmsHandler;
import com.android.internal.telephony.InboundSmsTracker;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.ProxyController;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.SmsStorageMonitor;
import com.android.internal.telephony.gsm.GsmInboundSmsHandler;
import com.android.internal.telephony.gsm.SmsMessage;
import com.mediatek.internal.telephony.MtkInboundSmsTracker;
import com.mediatek.internal.telephony.MtkProxyController;
import com.mediatek.internal.telephony.MtkWapPushOverSms;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import mediatek.telephony.MtkSmsMessage;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmInboundSmsHandler extends GsmInboundSmsHandler {
    private static final int EVENT_SMS_EINFO_EXTENSIONS = 8201;
    private static final int RESULT_SMS_ACCEPT_BY_PPL = 1;
    private static final int RESULT_SMS_REJECT_BY_PPL = 0;
    private static final int TN_VALIDATION_FAILED = 2;
    private static final int TN_VALIDATION_NOTHING = 0;
    private static final int TN_VALIDATION_PASSED = 1;
    private int mPAssertedIdentity;
    private String mTag;

    private class MtkDefaultState extends InboundSmsHandler.DefaultState {
        private MtkDefaultState() {
            super(MtkGsmInboundSmsHandler.this);
        }

        public boolean processMessage(Message message) {
            int i = message.what;
            return super.processMessage(message);
        }
    }

    private class MtkDeliveringState extends InboundSmsHandler.DeliveringState {
        private MtkDeliveringState() {
            super(MtkGsmInboundSmsHandler.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != MtkGsmInboundSmsHandler.EVENT_SMS_EINFO_EXTENSIONS) {
                return super.processMessage(message);
            }
            MtkGsmInboundSmsHandler.this.log("MtkDeliveringState.processMessage: EVENT_SMS_EINFO_EXTENSIONS");
            MtkGsmInboundSmsHandler.this.deferMessage(message);
            return true;
        }
    }

    private class MtkIdleState extends InboundSmsHandler.IdleState {
        private MtkIdleState() {
            super(MtkGsmInboundSmsHandler.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != MtkGsmInboundSmsHandler.EVENT_SMS_EINFO_EXTENSIONS) {
                return super.processMessage(message);
            }
            MtkGsmInboundSmsHandler.this.log("MtkIdleState.processMessage: EVENT_SMS_EINFO_EXTENSIONS");
            MtkGsmInboundSmsHandler.this.handleSmsEInfoExtensions((AsyncResult) message.obj);
            return true;
        }
    }

    private class MtkStartupState extends InboundSmsHandler.StartupState {
        private MtkStartupState() {
            super(MtkGsmInboundSmsHandler.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != MtkGsmInboundSmsHandler.EVENT_SMS_EINFO_EXTENSIONS) {
                return super.processMessage(message);
            }
            MtkGsmInboundSmsHandler.this.log("MtkStartupState.processMessage: EVENT_SMS_EINFO_EXTENSIONS");
            MtkGsmInboundSmsHandler.this.deferMessage(message);
            return true;
        }
    }

    private class MtkWaitingState extends InboundSmsHandler.WaitingState {
        private MtkWaitingState() {
            super(MtkGsmInboundSmsHandler.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != MtkGsmInboundSmsHandler.EVENT_SMS_EINFO_EXTENSIONS) {
                return super.processMessage(message);
            }
            MtkGsmInboundSmsHandler.this.log("MtkWaitingState.processMessage: EVENT_SMS_EINFO_EXTENSIONS");
            MtkGsmInboundSmsHandler.this.deferMessage(message);
            return true;
        }
    }

    public MtkGsmInboundSmsHandler(Context context, SmsStorageMonitor smsStorageMonitor, Phone phone) {
        super(context, smsStorageMonitor, phone);
        this.mTag = "MtkGsmInboundSmsHandler";
        this.mPAssertedIdentity = 0;
        this.mDefaultState = new MtkDefaultState();
        this.mStartupState = new MtkStartupState();
        this.mIdleState = new MtkIdleState();
        this.mDeliveringState = new MtkDeliveringState();
        this.mWaitingState = new MtkWaitingState();
        addState(this.mDefaultState);
        addState(this.mStartupState, this.mDefaultState);
        addState(this.mIdleState, this.mDefaultState);
        addState(this.mDeliveringState, this.mDefaultState);
        addState(this.mWaitingState, this.mDeliveringState);
        setInitialState(this.mStartupState);
        this.mTag = "MtkGsmInboundSmsHandler-" + phone.getPhoneId();
        log("created InboundSmsHandler from MtkGsmInboundSmsHandler");
        phone.mCi.registerForSmsInfoExt(getHandler(), EVENT_SMS_EINFO_EXTENSIONS, null);
    }

    private int checkPplPermission(byte[][] bArr, String str) {
        return ((!(is3gpp2() && str.compareTo("3gpp2") == 0) && (is3gpp2() || str.compareTo("3gpp") != 0)) || MtkSmsCommonUtil.phonePrivacyLockCheck(bArr, str, this.mContext, this.mPhone.getSubId()) == 0) ? 1 : 0;
    }

    private void handleAutoRegMessage(byte[] bArr) {
        ((MtkProxyController) ProxyController.getInstance()).getDeviceRegisterController().handleAutoRegMessage(this.mPhone.getSubId(), "3gpp", bArr);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSmsEInfoExtensions(AsyncResult asyncResult) {
        if (asyncResult.exception != null) {
            loge("Exception processing handleSmsEInfoExtensions: " + asyncResult.exception);
            return;
        }
        try {
            String str = (String) asyncResult.result;
            log("handleSmsEInfoExtensions, info = " + str);
            if (str != null && !str.isEmpty()) {
                if (str.contains("verstat=TN-Validation-Passed")) {
                    this.mPAssertedIdentity = 1;
                } else if (str.contains("verstat=TN-Validation-Failed")) {
                    this.mPAssertedIdentity = 2;
                }
            }
        } catch (RuntimeException e) {
            loge("Exception dispatching message", e);
        }
    }

    public static MtkGsmInboundSmsHandler makeInboundSmsHandler(Context context, SmsStorageMonitor smsStorageMonitor, Phone phone) {
        MtkGsmInboundSmsHandler mtkGsmInboundSmsHandler = new MtkGsmInboundSmsHandler(context, smsStorageMonitor, phone);
        mtkGsmInboundSmsHandler.start();
        return mtkGsmInboundSmsHandler;
    }

    protected int addTrackerToRawTableAndSendMessage(InboundSmsTracker inboundSmsTracker, boolean z) {
        ((MtkInboundSmsTracker) inboundSmsTracker).setSubId(this.mPhone.getSubId());
        return super.addTrackerToRawTableAndSendMessage(inboundSmsTracker, z);
    }

    protected void deleteFromRawTable(String str, String[] strArr, int i) {
        if (i == 1) {
            Uri uri = sRawUriPermanentDelete;
        } else {
            Uri uri2 = sRawUri;
        }
        if (str == null && strArr == null) {
            loge("No rows need be deleted from raw table!");
        } else {
            super.deleteFromRawTable(str, strArr, i);
        }
    }

    public void dispatchIntent(Intent intent, String str, String str2, Bundle bundle, BroadcastReceiver broadcastReceiver, UserHandle userHandle, int i) {
        intent.putExtra("rTime", System.currentTimeMillis());
        if ("android.provider.Telephony.SMS_DELIVER".equals(intent.getAction()) && this.mPAssertedIdentity != 0) {
            log("dispatchIntent with caller_verification=" + this.mPAssertedIdentity);
            intent.putExtra("caller_verification", this.mPAssertedIdentity);
            this.mPAssertedIdentity = 0;
        }
        super.dispatchIntent(intent, str, str2, bundle, broadcastReceiver, userHandle, i);
    }

    protected int dispatchMessageRadioSpecific(SmsMessageBase smsMessageBase) {
        SmsMessage smsMessage = (SmsMessage) smsMessageBase;
        if (!smsMessage.getDisplayOriginatingAddress().equals("10659401")) {
            return super.dispatchMessageRadioSpecific(smsMessageBase);
        }
        log("handleAutoRegMessage.");
        handleAutoRegMessage(smsMessage.getPdu());
        return 1;
    }

    protected void log(String str) {
        Rlog.d(this.mTag, str);
    }

    protected void loge(String str) {
        Rlog.e(this.mTag, str);
    }

    protected void loge(String str, Throwable th) {
        Rlog.e(this.mTag, str, th);
    }

    protected boolean onCheckIfOverrideStates() {
        return true;
    }

    protected boolean onCheckIfStopProcessMessagePart(byte[][] bArr, String str, InboundSmsTracker inboundSmsTracker) {
        if (checkPplPermission(bArr, str) == 1) {
            return false;
        }
        log("The message was blocked by Ppl! don't prompt to user");
        deleteFromRawTable(inboundSmsTracker.getDeleteWhere(), inboundSmsTracker.getDeleteWhereArgs(), 2);
        return true;
    }

    protected android.telephony.SmsMessage onCreateSmsMessage(byte[] bArr, String str) {
        return MtkSmsMessage.createFromPdu(bArr, "3gpp");
    }

    protected int onDispatchWapPdu(byte[][] bArr, byte[] bArr2, BroadcastReceiver broadcastReceiver, String str, int i, long j) {
        if (!MtkSmsCommonUtil.isWapPushSupport()) {
            return super.onDispatchWapPdu(bArr, bArr2, broadcastReceiver, str, i, j);
        }
        log("dispatch wap push pdu with addr & sc addr");
        Bundle bundle = new Bundle();
        MtkSmsMessage mtkSmsMessageCreateFromPdu = MtkSmsMessage.createFromPdu(bArr[0], "3gpp");
        if (mtkSmsMessageCreateFromPdu != null) {
            bundle.putString("address", mtkSmsMessageCreateFromPdu.getOriginatingAddress());
            String serviceCenterAddress = mtkSmsMessageCreateFromPdu.getServiceCenterAddress();
            if (serviceCenterAddress == null) {
                serviceCenterAddress = "";
            }
            bundle.putString("service_center", serviceCenterAddress);
        }
        return ((MtkWapPushOverSms) this.mWapPush).dispatchWapPdu(bArr2, broadcastReceiver, this, bundle);
    }

    protected String[] onModifyQueryWhereArgs(String[] strArr) {
        return new String[]{strArr[0], strArr[1], strArr[2], Integer.toString(this.mPhone.getSubId())};
    }

    protected void onQuitting() {
        super.onQuitting();
        this.mPhone.mCi.unregisterForSmsInfoExt(getHandler());
    }
}
