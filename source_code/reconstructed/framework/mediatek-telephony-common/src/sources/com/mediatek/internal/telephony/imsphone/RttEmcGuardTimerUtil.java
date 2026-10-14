package com.mediatek.internal.telephony.imsphone;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.SystemClock;
import android.telephony.Rlog;
import com.android.internal.telephony.imsphone.ImsPhoneConnection;

/* JADX INFO: loaded from: classes.dex */
public class RttEmcGuardTimerUtil {
    private static final String INTENT_RTT_EMC_GUARD_TIMER_180 = "com.mediatek.internal.telephony.imsphone.rtt_emc_guard_timer_180";
    private static final String TAG = "RttEmcGuardTimerUtil";
    private AlarmManager mAlarmManager;
    private Context mContext;
    private PendingIntent mRttEmcIntent = null;
    private boolean mDuringRttGuardDuration = false;
    private boolean mIsRttEmcGuardTimerSupported = false;
    private BroadcastReceiver mRttReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.imsphone.RttEmcGuardTimerUtil.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals(RttEmcGuardTimerUtil.INTENT_RTT_EMC_GUARD_TIMER_180)) {
                Rlog.d(RttEmcGuardTimerUtil.TAG, "onReceive : mRttReceiver rtt guard timer 180");
                RttEmcGuardTimerUtil.this.stopRttEmcGuardTimer();
                RttEmcGuardTimerUtil.this.mRttEmcIntent = null;
                RttEmcGuardTimerUtil.this.mDuringRttGuardDuration = false;
            }
        }
    };

    public RttEmcGuardTimerUtil(Context context) {
        this.mContext = context;
    }

    private void registerRttReceiver() {
        Rlog.d(TAG, "registerRttReceiver");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(INTENT_RTT_EMC_GUARD_TIMER_180);
        this.mContext.registerReceiver(this.mRttReceiver, intentFilter);
    }

    private void unregisterRttReceiver() {
        Rlog.d(TAG, "unregisterRttReceiver");
        this.mContext.unregisterReceiver(this.mRttReceiver);
    }

    public void checkIncomingCallInRttEmcGuardTime(ImsPhoneConnection imsPhoneConnection) {
        Rlog.d(TAG, "checkIncomingCallInRttEmcGuardTime: " + imsPhoneConnection);
        if (imsPhoneConnection == null) {
            Rlog.e(TAG, "conn == null, checkIncomingCallInRttEmcGuardTime return");
        } else if (this.mDuringRttGuardDuration) {
            ((MtkImsPhoneConnection) imsPhoneConnection).setIncomingCallDuringRttEmcGuard(true);
        } else {
            ((MtkImsPhoneConnection) imsPhoneConnection).setIncomingCallDuringRttEmcGuard(false);
        }
    }

    public void disposeRttEmcGuardTimer() {
        Rlog.d(TAG, "disposeRttEmcGuardTimer");
        unregisterRttReceiver();
    }

    public void initRttEmcGuardTimer() {
        Rlog.d(TAG, "initRttEmcGuardTimer");
        Context context = this.mContext;
        if (context == null) {
            Rlog.d(TAG, "initRttEmcGuardTimer mContext == null");
        } else {
            this.mAlarmManager = (AlarmManager) context.getSystemService("alarm");
            registerRttReceiver();
        }
    }

    public void setRttEmcGuardTimerSupported(boolean z) {
        this.mIsRttEmcGuardTimerSupported = z;
    }

    public void startRttEmcGuardTimer() {
        if (!this.mIsRttEmcGuardTimerSupported) {
            Rlog.d(TAG, "startRttEmcGuardTimer: Current carrier doesn't support RTT EMC guard timer, just return");
            return;
        }
        if (this.mContext == null) {
            Rlog.e(TAG, "startRttEmcGuardTimer mContext == null");
            return;
        }
        stopRttEmcGuardTimer();
        this.mRttEmcIntent = PendingIntent.getBroadcast(this.mContext, 0, new Intent(INTENT_RTT_EMC_GUARD_TIMER_180), 134217728);
        Rlog.d(TAG, "startRttEmcGuardTimer: delay=180000");
        this.mDuringRttGuardDuration = true;
        this.mAlarmManager.setExact(2, SystemClock.elapsedRealtime() + ((long) 180000), this.mRttEmcIntent);
    }

    public void stopRttEmcGuardTimer() {
        Rlog.d(TAG, "stopRttEmcGuardTimer");
        if (this.mRttEmcIntent != null) {
            Rlog.d(TAG, "stopRttEmcGuardTimer, cancel timer");
            this.mAlarmManager.cancel(this.mRttEmcIntent);
            this.mRttEmcIntent = null;
            this.mDuringRttGuardDuration = false;
        }
    }
}
