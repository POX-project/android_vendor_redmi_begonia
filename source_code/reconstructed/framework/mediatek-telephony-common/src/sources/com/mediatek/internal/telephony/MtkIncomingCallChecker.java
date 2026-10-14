package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.PersistableBundle;
import android.telecom.CallerInfo;
import android.telecom.CallerInfoAsyncQuery;
import android.telephony.CarrierConfigManager;
import com.android.internal.telephony.BlockChecker;
import com.android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public class MtkIncomingCallChecker {
    private static final String PROP_LOG_TAG = "MTCallChecker";
    private static final int TOKEN_MT_CHECKER = 256;
    AsyncBlockCheckTask blockChecker = null;
    OnCheckCompleteListener mCallback = null;
    String mName;
    Object obj;

    class AsyncBlockCheckTask extends AsyncTask<String, Void, Boolean> {
        private Context mContext;

        public AsyncBlockCheckTask(Context context) {
            this.mContext = context;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(String... strArr) {
            Bundle bundle = new Bundle();
            String str = strArr.length > 0 ? strArr[0] : "";
            if (strArr.length > 1) {
                bundle.putInt("extra_call_presentation", Integer.valueOf(strArr[1]).intValue());
            }
            if (strArr.length > 2) {
                bundle.putBoolean("extra_contact_exist", Boolean.valueOf(strArr[2]).booleanValue());
            }
            return Boolean.valueOf(BlockChecker.isBlocked(this.mContext, str, bundle));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            MtkIncomingCallChecker.this.onBlockCheckComplete(Boolean.valueOf(bool.booleanValue()));
        }
    }

    public interface OnCheckCompleteListener {
        void onCheckComplete(boolean z, Object obj);
    }

    public MtkIncomingCallChecker(String str, Object obj) {
        this.obj = null;
        this.mName = str;
        this.obj = obj;
    }

    static boolean isMtkEnhancedCallBlockingEnabled(Context context, int i) {
        if (context == null) {
            proprietaryLog("isMtkEnhancedCallBlockingEnabled fail, return false (context null)");
            return false;
        }
        PersistableBundle configForSubId = ((CarrierConfigManager) context.getSystemService("carrier_config")).getConfigForSubId(i);
        if (configForSubId == null) {
            configForSubId = CarrierConfigManager.getDefaultConfig();
        }
        return configForSubId.getBoolean("mtk_support_enhanced_call_blocking_bool");
    }

    static void proprietaryLog(String str) {
        Rlog.d(PROP_LOG_TAG, str);
    }

    static void proprietaryLogE(String str) {
        Rlog.e(PROP_LOG_TAG, str);
    }

    static void proprietaryLogI(String str) {
        Rlog.i(PROP_LOG_TAG, str);
    }

    void onBlockCheckComplete(Boolean bool) {
        proprietaryLog("query result, isBlocked=" + bool);
        OnCheckCompleteListener onCheckCompleteListener = this.mCallback;
        if (onCheckCompleteListener != null) {
            onCheckCompleteListener.onCheckComplete(bool.booleanValue(), this.obj);
        }
    }

    public boolean startIncomingCallNumberCheck(Context context, int i, final String str, OnCheckCompleteListener onCheckCompleteListener) {
        if (context == null) {
            proprietaryLogE("cannot do checkIncomingCallNumber (context=null, subId=" + i + ", number=" + str + "), call will enter");
            return false;
        }
        if (onCheckCompleteListener == null) {
            proprietaryLogE("checkIncomingCallNumber callback null, call will enter");
            return false;
        }
        if (str == null || str.isEmpty()) {
            proprietaryLog("checkIncomingCallNumber skipped (number=" + str + ")");
            return false;
        }
        this.mCallback = onCheckCompleteListener;
        if (this.blockChecker != null) {
            proprietaryLog("block checker not null (" + this.blockChecker.toString() + "). will create a new one.");
        }
        this.blockChecker = new AsyncBlockCheckTask(context);
        if (!isMtkEnhancedCallBlockingEnabled(context, i)) {
            return false;
        }
        CallerInfoAsyncQuery.startQuery(256, context, str, new CallerInfoAsyncQuery.OnQueryCompleteListener() { // from class: com.mediatek.internal.telephony.MtkIncomingCallChecker.1
            public void onQueryComplete(int i2, Object obj, CallerInfo callerInfo) {
                MtkIncomingCallChecker.this.blockChecker.execute(str, String.valueOf(1), String.valueOf(callerInfo == null ? false : callerInfo.contactExists));
            }
        }, "ContactQuery", i);
        return true;
    }
}
