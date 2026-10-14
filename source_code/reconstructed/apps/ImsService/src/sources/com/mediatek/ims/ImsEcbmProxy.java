package com.mediatek.ims;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ims.stub.ImsEcbmImplBase;
import com.android.ims.ImsManager;
import com.mediatek.ims.config.internal.ImsConfigUtils;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsEcbmProxy extends ImsEcbmImplBase {
    protected static final int EVENT_ON_ENTER_ECBM = 1;
    protected static final int EVENT_ON_EXIT_ECBM = 2;
    protected static final int EVENT_ON_NO_ECBM = 3;
    private static final String LOG_TAG = "ImsEcbmProxy";
    private static final boolean MTK_VZW_SUPPORT = "OP12".equals(SystemProperties.get("persist.vendor.operator.optr", "OM"));
    private Context mContext;
    private boolean mHandleExitEcbmInd;
    private final Handler mHandler = new Handler(Looper.getMainLooper()) { // from class: com.mediatek.ims.ImsEcbmProxy.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                ImsEcbmProxy.this.enteredEcbm();
                return;
            }
            if (i != 2) {
                if (i != 3) {
                    return;
                }
                ImsEcbmProxy.this.tryTurnOffVolteAfterE911();
            } else if (ImsEcbmProxy.this.mHandleExitEcbmInd) {
                ImsEcbmProxy.this.mHandleExitEcbmInd = false;
                ImsEcbmProxy.this.exitedEcbm();
                ImsEcbmProxy.this.tryTurnOffVolteAfterE911();
            }
        }
    };
    private ImsCommandsInterface mImsRILAdapter;
    private ImsServiceCallTracker mImsServiceCT;
    private int mPhoneId;

    ImsEcbmProxy(Context context, ImsCommandsInterface imsCommandsInterface, int i) {
        logWithPhoneId("new EcbmProxy");
        this.mContext = context;
        this.mImsRILAdapter = imsCommandsInterface;
        this.mPhoneId = i;
        this.mImsServiceCT = ImsServiceCallTracker.getInstance(i);
        ImsCommandsInterface imsCommandsInterface2 = this.mImsRILAdapter;
        if (imsCommandsInterface2 == null) {
            return;
        }
        imsCommandsInterface2.registerForOnEnterECBM(this.mHandler, 1, null);
        this.mImsRILAdapter.registerForOnExitECBM(this.mHandler, 2, null);
        this.mImsRILAdapter.registerForOnNoECBM(this.mHandler, 3, null);
    }

    private void logWithPhoneId(String str) {
        Rlog.d(LOG_TAG, "[PhoneId = " + this.mPhoneId + "] " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void tryTurnOffVolteAfterE911() {
        ImsManager imsManager = ImsManager.getInstance(this.mContext, this.mPhoneId);
        boolean zIsVolteEnabledByPlatform = imsManager.isVolteEnabledByPlatform();
        boolean zIsEnhanced4gLteModeSettingEnabledByUser = imsManager.isEnhanced4gLteModeSettingEnabledByUser();
        if (this.mImsServiceCT.getEnableVolteForImsEcc()) {
            if (zIsVolteEnabledByPlatform && zIsEnhanced4gLteModeSettingEnabledByUser) {
                return;
            }
            ImsConfigUtils.triggerSendCfgForVolte(this.mContext, this.mImsRILAdapter, this.mPhoneId, 0);
            this.mImsServiceCT.setEnableVolteForImsEcc(false);
        }
    }

    public void exitEmergencyCallbackMode() {
        if (this.mImsRILAdapter == null) {
            logWithPhoneId("request exit ECBM failed");
            return;
        }
        logWithPhoneId("request exit ECBM");
        this.mHandleExitEcbmInd = true;
        this.mImsRILAdapter.requestExitEmergencyCallbackMode(null);
    }
}
