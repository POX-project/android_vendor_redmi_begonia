package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.UserHandle;
import android.os.UserManager;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import com.android.internal.content.PackageMonitor;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.SmsApplication;
import com.android.internal.telephony.SmsStorageMonitor;
import com.mediatek.internal.telephony.datasub.DataSubConstants;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsStorageMonitor extends SmsStorageMonitor {
    private static final int EVENT_ME_FULL = 100;
    private static final String TAG = "MtkSmsStorageMonitor";
    private ContentObserver mContentObserver;
    private final BroadcastReceiver mMtkResultReceiver;
    private final PackageMonitor mPackageMonitor;
    private boolean mPendingIccFullNotify;

    /* JADX WARN: Multi-variable type inference failed */
    public MtkSmsStorageMonitor(Phone phone) {
        super(phone);
        this.mPendingIccFullNotify = false;
        this.mPackageMonitor = new PackageMonitor() { // from class: com.mediatek.internal.telephony.MtkSmsStorageMonitor.1
            public void onPackageModified(String str) {
                if (MtkSmsStorageMonitor.this.mPendingIccFullNotify) {
                    MtkSmsStorageMonitor.this.handleIccFull();
                }
            }
        };
        this.mMtkResultReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkSmsStorageMonitor.3
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                if (intent.getAction().equals("android.intent.action.BOOT_COMPLETED") && MtkSmsStorageMonitor.this.mPendingIccFullNotify) {
                    MtkSmsStorageMonitor.this.handleIccFull();
                }
            }
        };
        if (this.mCi != null && (this.mCi instanceof MtkRIL)) {
            this.mCi.setOnMeSmsFull(this, 100, null);
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.BOOT_COMPLETED");
        this.mContext.registerReceiver(this.mMtkResultReceiver, intentFilter);
        Uri uriFor = Settings.Secure.getUriFor("sms_default_application");
        this.mContentObserver = new ContentObserver(new Handler(Looper.getMainLooper())) { // from class: com.mediatek.internal.telephony.MtkSmsStorageMonitor.2
            @Override // android.database.ContentObserver
            public void onChange(boolean z, Uri uri, int i) {
                if (MtkSmsStorageMonitor.this.mPendingIccFullNotify) {
                    MtkSmsStorageMonitor.this.handleIccFull();
                }
            }
        };
        this.mContext.getContentResolver().registerContentObserver(uriFor, false, this.mContentObserver, -1);
        this.mPackageMonitor.register(this.mContext, this.mContext.getMainLooper(), UserHandle.ALL, false);
    }

    private void handleMeFull() {
        Intent intent = new Intent("android.provider.Telephony.SMS_REJECTED");
        intent.putExtra("result", 3);
        SubscriptionManager.putPhoneIdAndSubIdExtra(intent, this.mPhone.getPhoneId());
        this.mWakeLock.acquire(5000L);
        this.mContext.sendBroadcast(intent, "android.permission.RECEIVE_SMS");
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        Rlog.d(TAG, "disposed...");
        if (this.mCi != null && (this.mCi instanceof MtkRIL)) {
            this.mCi.unSetOnMeSmsFull(this);
        }
        this.mContext.unregisterReceiver(this.mMtkResultReceiver);
        this.mContext.getContentResolver().unregisterContentObserver(this.mContentObserver);
        this.mPackageMonitor.unregister();
        super.dispose();
    }

    public void handleIccFull() {
        if (SmsApplication.getDefaultSimFullApplication(this.mContext, false) == null) {
            this.mPendingIccFullNotify = true;
            Rlog.d(TAG, "ComponentName is NULL");
        } else if (!((UserManager) this.mContext.getSystemService(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)).isUserUnlocked()) {
            this.mPendingIccFullNotify = true;
            Rlog.d(TAG, "too early, wait for boot complete to send broadcast");
        } else {
            this.mPendingIccFullNotify = false;
            Rlog.d(TAG, "handleIccFull");
            super.handleIccFull();
        }
    }

    public void handleMessage(Message message) {
        int i = message.what;
        if (i != 3) {
            if (i != 100) {
                super.handleMessage(message);
                return;
            } else {
                handleMeFull();
                return;
            }
        }
        Rlog.v(TAG, "Sending pending memory status report : mStorageAvailable = " + this.mStorageAvailable);
        this.mCi.reportSmsMemoryStatus(this.mStorageAvailable, obtainMessage(2));
    }
}
