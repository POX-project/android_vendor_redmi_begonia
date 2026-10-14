package com.mediatek.ims;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Parcelable;
import android.telephony.Rlog;
import android.telephony.ims.ImsExternalCallState;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.Dialog;

/* JADX INFO: loaded from: classes.dex */
public class ImsEventPackageAdapter {
    static final int EVENT_IMS_DIALOG_INDICATION = 1;
    static final int EVENT_LTE_MESSAGE_WAITING = 0;
    private static final String LOG_TAG = "ImsEventPackageAdapter";
    private static final String TAG_DOUBLE_QUOTE = "<ascii_34>";
    private static final String TAG_NEXT_LINE = "<ascii_10>";
    private static final String TAG_RETURN = "<ascii_13>";
    private static final int TYPE_CONFERENCE_EVT_PKG = 1;
    private static final int TYPE_DIALOG_EVT_PKG = 2;
    private static final int TYPE_MWI = 3;
    static Constructor sImsExternalCallStateConstructfunc = null;
    private String mCEPData;
    private Context mContext;
    private String mDEPData;
    private MyHandler mHandler;
    private ImsCommandsInterface mImsRilAdapter;
    private String mMWIData;
    private int mPhoneId;

    private class MyHandler extends Handler {
        public MyHandler(Looper looper) {
            super(looper, null, true);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Rlog.d(ImsEventPackageAdapter.LOG_TAG, "MsgId: " + message.what);
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (asyncResult.exception != null) {
                Rlog.d(ImsEventPackageAdapter.LOG_TAG, "message error");
                return;
            }
            int i = message.what;
            if (i == 0) {
                ImsEventPackageAdapter.this.handleLetMessageWaiting((String[]) asyncResult.result);
                return;
            }
            if (i == 1) {
                ImsEventPackageAdapter.this.handleDialogEventPackage((ArrayList) asyncResult.result);
            }
            Rlog.d(ImsEventPackageAdapter.LOG_TAG, "Unregistered event");
        }
    }

    ImsEventPackageAdapter(Context context, Handler handler, ImsCommandsInterface imsCommandsInterface, int i) {
        Rlog.d(LOG_TAG, "ImsEventPackageAdapter()");
        MyHandler myHandler = new MyHandler(handler.getLooper());
        this.mHandler = myHandler;
        this.mImsRilAdapter = imsCommandsInterface;
        this.mContext = context;
        this.mPhoneId = i;
        imsCommandsInterface.registerForLteMsgWaiting(myHandler, 0, null);
        this.mImsRilAdapter.registerForImsDialog(this.mHandler, 1, null);
        needToReportMoreInfo();
    }

    private String concatData(boolean z, String str, String str2) {
        return z ? str2 : str.concat(str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleDialogEventPackage(ArrayList<Dialog> arrayList) {
        ImsExternalCallState imsExternalCallState;
        Rlog.d(LOG_TAG, "handleDialogEventPackage()");
        ArrayList<? extends Parcelable> arrayList2 = new ArrayList<>();
        if (sImsExternalCallStateConstructfunc == null) {
            for (Dialog dialog : arrayList) {
                arrayList2.add(new ImsExternalCallState(dialog.dialogId, Uri.parse(dialog.remoteAddress), Uri.parse(dialog.address), dialog.isPullable, dialog.callState, dialog.callType, dialog.isCallHeld));
                Rlog.d(LOG_TAG, "handleDialogEventPackage exCallState:" + dialog.dialogId + ImsServiceCallTracker.sensitiveEncode(dialog.remoteAddress) + ImsServiceCallTracker.sensitiveEncode(dialog.address) + dialog.isPullable + dialog.callState + dialog.callType + dialog.isCallHeld);
            }
        } else {
            for (Dialog dialog2 : arrayList) {
                Uri uri = Uri.parse(dialog2.address);
                Uri uri2 = Uri.parse(dialog2.remoteAddress);
                try {
                    imsExternalCallState = (ImsExternalCallState) sImsExternalCallStateConstructfunc.newInstance(Integer.valueOf(dialog2.dialogId), uri2, uri, Boolean.valueOf(dialog2.isPullable), Integer.valueOf(dialog2.callState), Integer.valueOf(dialog2.callType), Boolean.valueOf(dialog2.isCallHeld), Boolean.valueOf(dialog2.isMt));
                } catch (Exception e) {
                    Rlog.d(LOG_TAG, "Use AOSP default ImsExternalCallState.");
                    imsExternalCallState = new ImsExternalCallState(dialog2.dialogId, uri2, uri, dialog2.isPullable, dialog2.callState, dialog2.callType, dialog2.isCallHeld);
                }
                arrayList2.add(imsExternalCallState);
                Rlog.d(LOG_TAG, "handleDialogEventPackage exCallState:" + dialog2.dialogId + ImsServiceCallTracker.sensitiveEncode(dialog2.remoteAddress) + ImsServiceCallTracker.sensitiveEncode(dialog2.address) + dialog2.isPullable + dialog2.callState + dialog2.callType + dialog2.isCallHeld + dialog2.isMt);
            }
        }
        Intent intent = new Intent(ImsConstants.ACTION_IMS_DIALOG_EVENT_PACKAGE);
        intent.putParcelableArrayListExtra(ImsConstants.EXTRA_DEP_CONTENT, arrayList2);
        LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleLetMessageWaiting(String[] strArr) {
        Rlog.d(LOG_TAG, "handleLetMessageWaiting()");
        int[] iArr = new int[4];
        for (int i = 0; i < 4; i++) {
            try {
                iArr[i] = Integer.parseInt(strArr[i]);
            } catch (NumberFormatException e) {
                Rlog.d(LOG_TAG, "handleLetMessageWaiting failed: invalid params");
                return;
            }
        }
        int i2 = iArr[0];
        int i3 = iArr[2];
        int i4 = iArr[3];
        String str = strArr[4];
        if (strArr.length >= 6) {
            if (this.mPhoneId != Integer.parseInt(strArr[5])) {
                Rlog.d(LOG_TAG, "handleLetMessageWaiting ignore, not the correct phone id");
                return;
            }
        }
        String strConcatData = concatData(i3 == 1, this.mMWIData, str);
        this.mMWIData = strConcatData;
        if (i3 != i4 || this.mContext == null) {
            return;
        }
        this.mMWIData = recoverDataFromAsciiTag(strConcatData);
        Intent intent = new Intent(ImsConstants.ACTION_LTE_MESSAGE_WAITING_INDICATION);
        intent.putExtra(ImsConstants.EXTRA_LTE_MWI_BODY, this.mMWIData);
        intent.putExtra(ImsConstants.EXTRA_PHONE_ID, this.mPhoneId);
        intent.addFlags(16777216);
        this.mContext.sendBroadcast(intent, "com.mediatek.permission.READ_LTE_MESSAGE_WAITING_INDICATION");
    }

    private void needToReportMoreInfo() {
        if (sImsExternalCallStateConstructfunc == null) {
            try {
                Rlog.d(LOG_TAG, "constructor function = " + ImsExternalCallState.class.getDeclaredConstructor(Integer.TYPE, Uri.class, Uri.class, Boolean.class, Integer.TYPE, Integer.TYPE, Boolean.class, Boolean.class));
            } catch (Exception e) {
                Rlog.d(LOG_TAG, "Use AOSP default ImsExternalCallState.");
            }
        }
    }

    private String recoverDataFromAsciiTag(String str) {
        return str.replaceAll(TAG_RETURN, "\r").replaceAll(TAG_DOUBLE_QUOTE, "\"").replaceAll(TAG_NEXT_LINE, "\n");
    }

    public void close() {
        this.mImsRilAdapter.unregisterForLteMsgWaiting(this.mHandler);
        this.mImsRilAdapter.unregisterForImsDialog(this.mHandler);
    }
}
