package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.IBinder;
import android.os.ServiceManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.data.ApnSetting;
import android.text.TextUtils;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.RetryManager;
import com.android.internal.telephony.TelephonyDevController;
import com.mediatek.ims.internal.IMtkImsService;
import com.mediatek.internal.telephony.dataconnection.DcFailCauseManager;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.function.Predicate;

/* JADX INFO: loaded from: classes.dex */
public final class MtkRetryManager extends RetryManager {
    public static final String LOG_TAG = "MtkRetryManager";
    private static IMtkImsService mMtkImsService = null;
    private boolean mBcastRegistered;
    private BroadcastReceiver mBroadcastReceiver;
    private Context mContext;
    private DcFailCauseManager mDcFcMgr;
    private int mPhoneNum;
    private TelephonyDevController mTelDevController;

    static {
        MAX_SAME_APN_RETRY = 100;
    }

    public MtkRetryManager(Phone phone, String str) {
        super(phone, str);
        this.mTelDevController = TelephonyDevController.getInstance();
        this.mBcastRegistered = false;
        this.mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkRetryManager.1
            private final AtomicInteger mPreviousSubId = new AtomicInteger(-1);

            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                MtkRetryManager.this.log("mBroadcastReceiver: action " + intent.getAction() + ", mSameApnRetryCount:" + MtkRetryManager.this.mSameApnRetryCount + ", mModemSuggestedDelay:" + MtkRetryManager.this.mModemSuggestedDelay + ", mCurrentApnIndex:" + MtkRetryManager.this.mCurrentApnIndex);
                if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED")) {
                    int intExtra = intent.getIntExtra("subscription", -1);
                    if (SubscriptionManager.isValidSubscriptionId(intExtra) && intExtra == MtkRetryManager.this.mPhone.getSubId() && this.mPreviousSubId.getAndSet(intExtra) != intExtra) {
                        int i = MtkRetryManager.this.mSameApnRetryCount;
                        long j = MtkRetryManager.this.mModemSuggestedDelay;
                        int i2 = MtkRetryManager.this.mCurrentApnIndex;
                        MtkRetryManager.this.configureRetryOnly();
                        MtkRetryManager.this.mSameApnRetryCount = i;
                        MtkRetryManager.this.mModemSuggestedDelay = j;
                        MtkRetryManager.this.mCurrentApnIndex = i2;
                    }
                }
            }
        };
        this.mPhoneNum = TelephonyManager.getDefault().getPhoneCount();
        this.mDcFcMgr = DcFailCauseManager.getInstance(this.mPhone);
        this.mContext = this.mPhone.getContext();
        if ((TextUtils.equals("ims", this.mApnType) || TextUtils.equals("default", this.mApnType)) && !this.mBcastRegistered) {
            this.mContext.registerReceiver(this.mBroadcastReceiver, new IntentFilter("android.telephony.action.CARRIER_CONFIG_CHANGED"));
            this.mBcastRegistered = true;
        }
        if (mMtkImsService == null) {
            checkAndBindImsService();
        }
    }

    private void checkAndBindImsService() {
        IBinder service = ServiceManager.getService("mtkIms");
        if (service == null) {
            return;
        }
        IMtkImsService iMtkImsServiceAsInterface = IMtkImsService.Stub.asInterface(service);
        mMtkImsService = iMtkImsServiceAsInterface;
        if (iMtkImsServiceAsInterface == null) {
            return;
        }
        log("checkAndBindImsService: mMtkImsService = " + mMtkImsService);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void configureRetryOnly() {
        Rlog.d(LOG_TAG, "configureRetryOnly");
        super.configureRetry();
    }

    protected void configureRetry() {
        super.configureRetry();
        if (this.mWaitingApns == null || this.mWaitingApns.size() == 0) {
            log("configureRetry: mWaitingApns is null or empty");
        } else {
            int i = this.mCurrentApnIndex;
            if (i < 0 || i >= this.mWaitingApns.size()) {
                i = 0;
            }
            log("configureRetry: mCurrentApnIndex: " + this.mCurrentApnIndex + ", reset MD data count for apn: " + ((ApnSetting) this.mWaitingApns.get(i)).getApnName());
            this.mPhone.mCi.resetMdDataRetryCount(((ApnSetting) this.mWaitingApns.get(i)).getApnName(), null);
        }
        TelephonyDevController telephonyDevController = this.mTelDevController;
        if (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasMdAutoSetupImsCapability()) {
            return;
        }
        if (TextUtils.equals("ims", this.mApnType) || TextUtils.equals("emergency", this.mApnType)) {
            Rlog.d(LOG_TAG, "configureRetry: IMS/EIMS, no retry by mobile.");
            configure("max_retries=0, -1, -1, -1");
        }
    }

    protected void finalize() {
        log("RetryManager finalized");
        this.mContext.unregisterReceiver(this.mBroadcastReceiver);
    }

    public long getDelayForNextApn(boolean z) {
        long retryTimer;
        DcFailCauseManager dcFailCauseManager;
        if (this.mWaitingApns == null || this.mWaitingApns.size() == 0) {
            log("Waiting APN list is null or empty.");
            return -1L;
        }
        if (this.mModemSuggestedDelay == -1) {
            log("Modem suggested not retrying.");
            return -1L;
        }
        if (TextUtils.equals("ims", this.mApnType) || TextUtils.equals("emergency", this.mApnType)) {
            log("For ims or emergency request, not trigger retry on AP side");
            return -1L;
        }
        if (this.mModemSuggestedDelay != -2 && this.mSameApnRetryCount < MAX_SAME_APN_RETRY) {
            if (this.mModemSuggestedDelay == DcFailCauseManager.retryConfigForCC33.retryTime.getValue() && (dcFailCauseManager = this.mDcFcMgr) != null && dcFailCauseManager.isNetworkOperatorForCC33() && this.mSameApnRetryCount >= DcFailCauseManager.retryConfigForCC33.maxRetryCount.getValue()) {
                return -1L;
            }
            log("Modem suggested retry in " + this.mModemSuggestedDelay + " ms.");
            return this.mModemSuggestedDelay;
        }
        int i = this.mCurrentApnIndex;
        do {
            i++;
            if (i >= this.mWaitingApns.size()) {
                i = 0;
            }
            if (!((ApnSetting) this.mWaitingApns.get(i)).getPermanentFailed()) {
                if (i > this.mCurrentApnIndex) {
                    retryTimer = this.mInterApnDelay;
                } else {
                    if (!this.mRetryForever && this.mRetryCount + 1 > this.mMaxRetryCount) {
                        log("Reached maximum retry count " + this.mMaxRetryCount + ".");
                        return -1L;
                    }
                    retryTimer = getRetryTimer();
                    this.mRetryCount++;
                }
                return (!z || retryTimer <= this.mFailFastInterApnDelay) ? retryTimer : this.mFailFastInterApnDelay;
            }
        } while (!this.mWaitingApns.stream().allMatch(new Predicate() { // from class: com.mediatek.internal.telephony.-$$Lambda$FdP674o0GBWp6I9SSfgtwHsEflk
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                return ((ApnSetting) obj).getPermanentFailed();
            }
        }));
        log("All APNs have permanently failed.");
        return -1L;
    }
}
