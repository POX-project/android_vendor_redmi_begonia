package com.mediatek.internal.telephony.cdma;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.UserHandle;
import android.telephony.Rlog;
import com.android.internal.telephony.InboundSmsTracker;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.ProxyController;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.SmsStorageMonitor;
import com.android.internal.telephony.cdma.CdmaInboundSmsHandler;
import com.android.internal.telephony.cdma.CdmaSMSDispatcher;
import com.android.internal.telephony.cdma.SmsMessage;
import com.mediatek.internal.telephony.MtkInboundSmsTracker;
import com.mediatek.internal.telephony.MtkProxyController;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;

/* JADX INFO: loaded from: classes.dex */
public class MtkCdmaInboundSmsHandler extends CdmaInboundSmsHandler {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static final int RESULT_SMS_ACCEPT_BY_PPL = 1;
    private static final int RESULT_SMS_REJECT_BY_PPL = 0;
    private static final int TELESERVICE_REG_SMS_CT = 65005;
    private static final boolean VDBG = false;
    private static final int WAKE_LOCK_TIMEOUT = 500;
    private String mTag;

    public MtkCdmaInboundSmsHandler(Context context, SmsStorageMonitor smsStorageMonitor, Phone phone, CdmaSMSDispatcher cdmaSMSDispatcher) {
        super(context, smsStorageMonitor, phone, cdmaSMSDispatcher);
        this.mTag = "MtkCdmaInboundSmsHandler";
        this.mTag = "MtkCdmaInboundSmsHandler-" + phone.getPhoneId();
    }

    private int checkPplPermission(byte[][] bArr, String str) {
        return ((!(is3gpp2() && str.compareTo("3gpp2") == 0) && (is3gpp2() || str.compareTo("3gpp") != 0)) || MtkSmsCommonUtil.phonePrivacyLockCheck(bArr, str, this.mContext, this.mPhone.getSubId()) == 0) ? 1 : 0;
    }

    private void handleAutoRegMessage(byte[] bArr) {
        ((MtkProxyController) ProxyController.getInstance()).getDeviceRegisterController().handleAutoRegMessage(bArr);
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
        super.dispatchIntent(intent, str, str2, bundle, broadcastReceiver, userHandle, i);
    }

    protected int dispatchMessageRadioSpecific(SmsMessageBase smsMessageBase) {
        MtkSmsMessage mtkSmsMessageNewMtkSmsMessage = MtkSmsMessage.newMtkSmsMessage((SmsMessage) smsMessageBase);
        int iDispatchMessageRadioSpecific = super.dispatchMessageRadioSpecific(mtkSmsMessageNewMtkSmsMessage);
        if (iDispatchMessageRadioSpecific != 4 || mtkSmsMessageNewMtkSmsMessage.getTeleService() != TELESERVICE_REG_SMS_CT || mtkSmsMessageNewMtkSmsMessage.getPdu() == null) {
            return iDispatchMessageRadioSpecific;
        }
        handleAutoRegMessage(mtkSmsMessageNewMtkSmsMessage.getPdu());
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

    protected boolean onCheckIfStopProcessMessagePart(byte[][] bArr, String str, InboundSmsTracker inboundSmsTracker) {
        if (checkPplPermission(bArr, str) == 1) {
            return false;
        }
        log("The message was blocked by Ppl! don't prompt to user");
        deleteFromRawTable(inboundSmsTracker.getDeleteWhere(), inboundSmsTracker.getDeleteWhereArgs(), 2);
        return true;
    }

    protected String[] onModifyQueryWhereArgs(String[] strArr) {
        return new String[]{strArr[0], strArr[1], strArr[2], Integer.toString(this.mPhone.getSubId())};
    }
}
