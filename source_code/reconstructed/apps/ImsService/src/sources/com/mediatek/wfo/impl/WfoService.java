package com.mediatek.wfo.impl;

import android.content.Context;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.MwisConstants;
import com.mediatek.wfo.WifiOffloadManager;
import com.mediatek.wfo.plugin.ExtensionFactory;

/* JADX INFO: loaded from: classes.dex */
public class WfoService {
    static final String TAG = "WfoService";
    public static WfoService mInstance = null;
    private Context mContext;
    private MwiService mMwiService;
    private IWifiOffloadService.Stub mService;

    private WfoService(Context context) {
        this.mContext = context;
    }

    public static WfoService getInstance(Context context) {
        if (mInstance == null) {
            mInstance = new WfoService(context);
        }
        return mInstance;
    }

    public void makeWfoService() {
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            Rlog.d(TAG, "WfoService new MWIService");
            MwiService mwiService = MwiService.getInstance(this.mContext);
            this.mMwiService = mwiService;
            ServiceManager.addService(MwisConstants.MWI_SERVICE, mwiService.asBinder(), true);
            return;
        }
        Rlog.d(TAG, "WfoService new WifiOffloadService");
        IWifiOffloadService.Stub stubMakeWifiOffloadService = ExtensionFactory.makeLegacyComponentFactory(this.mContext).makeWifiOffloadService(this.mContext);
        this.mService = stubMakeWifiOffloadService;
        if (stubMakeWifiOffloadService == null) {
            Rlog.e(TAG, "WfoService cannot be found");
        } else {
            ServiceManager.addService(WifiOffloadManager.WFO_SERVICE, stubMakeWifiOffloadService.asBinder(), true);
        }
    }
}
