package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.Phone;

/* JADX INFO: loaded from: classes.dex */
public class MtkSuppServManager {
    private static final boolean DBG = true;
    public static final String LOG_TAG = "SuppServManager";
    private Context mContext;
    private HandlerThread mHandlerThread;
    private Phone[] mPhones;
    private static MtkSuppServManager instance = null;
    private static MtkSuppServQueueHelper mSuppServQueueHelper = null;
    private static MtkSuppServHelper[] mSuppServHelper = null;
    private static MtkSuppServConf[] mSuppServConf = null;

    private MtkSuppServManager(Context context, Phone[] phoneArr) {
        this.mContext = context;
        this.mPhones = phoneArr;
    }

    public static MtkSuppServManager getInstance() {
        return instance;
    }

    public static MtkSuppServConf getSuppServConf(int i) {
        MtkSuppServConf[] mtkSuppServConfArr = mSuppServConf;
        if (mtkSuppServConfArr != null && mtkSuppServConfArr.length > i && i >= 0) {
            return mtkSuppServConfArr[i];
        }
        Rlog.e(LOG_TAG, "Get MtkSuppServConf instance failed!");
        return null;
    }

    public static MtkSuppServHelper getSuppServHelper(int i) {
        MtkSuppServHelper[] mtkSuppServHelperArr = mSuppServHelper;
        if (mtkSuppServHelperArr != null && mtkSuppServHelperArr.length > i && i >= 0) {
            return mtkSuppServHelperArr[i];
        }
        Rlog.e(LOG_TAG, "Get MtkSuppServHelper instance failed!");
        return null;
    }

    public static MtkSuppServQueueHelper getSuppServQueueHelper() {
        MtkSuppServQueueHelper mtkSuppServQueueHelper = mSuppServQueueHelper;
        if (mtkSuppServQueueHelper != null) {
            return mtkSuppServQueueHelper;
        }
        Rlog.e(LOG_TAG, "Get MtkSuppServQueueHelper instance failed!");
        return null;
    }

    public static MtkSuppServManager makeSuppServManager(Context context, Phone[] phoneArr) {
        if (context == null || phoneArr == null) {
            return null;
        }
        MtkSuppServManager mtkSuppServManager = instance;
        if (mtkSuppServManager == null) {
            Rlog.d(LOG_TAG, "Create MtkSuppServManager singleton instance, phones.length = " + phoneArr.length);
            instance = new MtkSuppServManager(context, phoneArr);
        } else {
            mtkSuppServManager.mContext = context;
            mtkSuppServManager.mPhones = phoneArr;
        }
        return instance;
    }

    private boolean supportMdAutoSetupIms() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    public void dispose() {
        Rlog.d(LOG_TAG, "dispose.");
        this.mHandlerThread.getLooper().quit();
    }

    public void init() {
        Rlog.d(LOG_TAG, "Initialize MtkSuppServManager!");
        HandlerThread handlerThread = new HandlerThread("MtkSuppServManager");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
        Looper looper = this.mHandlerThread.getLooper();
        if (!supportMdAutoSetupIms()) {
            MtkSuppServQueueHelper mtkSuppServQueueHelperMakeSuppServQueueHelper = MtkSuppServQueueHelper.makeSuppServQueueHelper(this.mContext, this.mPhones);
            mSuppServQueueHelper = mtkSuppServQueueHelperMakeSuppServQueueHelper;
            mtkSuppServQueueHelperMakeSuppServQueueHelper.init(looper);
        }
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        mSuppServHelper = new MtkSuppServHelper[phoneCount];
        for (int i = 0; i < phoneCount; i++) {
            mSuppServHelper[i] = new MtkSuppServHelper(this.mContext, this.mPhones[i]);
            mSuppServHelper[i].init(looper);
        }
        mSuppServConf = new MtkSuppServConf[phoneCount];
        for (int i2 = 0; i2 < phoneCount; i2++) {
            mSuppServConf[i2] = new MtkSuppServConf(this.mContext, this.mPhones[i2]);
            mSuppServConf[i2].init(looper);
        }
    }
}
