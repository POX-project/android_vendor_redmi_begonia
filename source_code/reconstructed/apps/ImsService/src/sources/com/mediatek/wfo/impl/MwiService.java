package com.mediatek.wfo.impl;

import android.content.Context;
import android.os.HandlerThread;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.mediatek.wfo.IMwiService;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.ril.MwiRIL;

/* JADX INFO: loaded from: classes.dex */
public class MwiService extends IMwiService.Stub {
    static final String MWIS_LOG_TAG = "MWIS";
    private static final boolean VDBG = true;
    private static MwiService mInstance = null;
    private static WifiPdnHandler mWifiPdnHandler;
    private Context mContext;
    HandlerThread mHandlerThread = new HandlerThread("MwiServiceHandlerThread");
    private MwiRIL[] mMwiRil;
    private int mSimCount;
    private WfcHandler mWfcHandler;
    private WfcLocationHandler mWfcLocationHandler;

    public MwiService(Context context) {
        logd("Construct MwiService");
        this.mContext = context;
        TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
        if (telephonyManager != null) {
            this.mSimCount = telephonyManager.getSimCount();
        } else {
            logd("telephonyManager = null");
        }
        logd("mSimCount: " + this.mSimCount);
        this.mHandlerThread.start();
        this.mMwiRil = new MwiRIL[this.mSimCount];
        for (int i = 0; i < this.mSimCount; i++) {
            this.mMwiRil[i] = new MwiRIL(context, i, this.mHandlerThread.getLooper());
        }
        WifiPdnHandler wifiPdnHandler = new WifiPdnHandler(this.mContext, this.mSimCount, this.mHandlerThread.getLooper(), this.mMwiRil);
        mWifiPdnHandler = wifiPdnHandler;
        this.mWfcHandler = WfcHandler.getInstance(this.mContext, wifiPdnHandler, this.mSimCount, this.mHandlerThread.getLooper(), this.mMwiRil);
        this.mWfcLocationHandler = new WfcLocationHandler(this.mContext, this.mWfcHandler, mWifiPdnHandler, this.mSimCount, this.mHandlerThread.getLooper(), this.mMwiRil);
    }

    public static MwiService getInstance() {
        return mInstance;
    }

    public static MwiService getInstance(Context context) {
        if (mInstance == null) {
            mInstance = new MwiService(context);
        }
        return mInstance;
    }

    private boolean is93RilMode() {
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            return VDBG;
        }
        return false;
    }

    private static void logd(String str) {
        Rlog.d(MWIS_LOG_TAG, "[MwiService] " + str);
    }

    public void dispose() {
        logd("dispose()");
        this.mHandlerThread.quit();
        this.mHandlerThread.interrupt();
    }

    public MwiRIL getMwiRIL(int i) {
        if (i < this.mSimCount) {
            return this.mMwiRil[i];
        }
        Rlog.e(MWIS_LOG_TAG, "Out of the bounds, slotId is: " + i);
        return null;
    }

    @Override // com.mediatek.wfo.IMwiService
    public IWifiOffloadService getWfcHandlerInterface() {
        logd("getWfcHandlerInterface");
        return this.mWfcHandler.getWfoInterface();
    }
}
