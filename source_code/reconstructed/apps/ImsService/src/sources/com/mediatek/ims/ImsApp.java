package com.mediatek.ims;

import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Process;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.mediatek.ims.config.internal.ImsConfigUtils;
import com.mediatek.ims.internal.ImsVTProviderUtil;

/* JADX INFO: loaded from: classes.dex */
public class ImsApp extends Application {
    private static final String IMS_SERVICE = "ims";
    private static final String TAG = "ImsApp";
    private ImsService mImsService = null;
    private int mNumOfPhones = 0;
    private BroadcastReceiver mMultiSimConfigChangedReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsApp.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int intExtra = intent.getIntExtra("android.telephony.extra.ACTIVE_SIM_SUPPORTED_COUNT", 0);
            Rlog.i(ImsApp.TAG, "ACTION_MULTI_SIM_CONFIG_CHANGED, mNumOfPhones: " + ImsApp.this.mNumOfPhones + ", numOfActiveModems: " + intExtra);
            if (intExtra == 0 || ImsApp.this.mNumOfPhones == intExtra) {
                return;
            }
            if (ImsApp.this.mImsService != null) {
                ImsApp.this.mImsService.clearImsRilRequest();
            }
            Process.killProcess(Process.myPid());
        }
    };

    @Override // android.app.Application
    public void onCreate() {
        if (SystemProperties.get(ImsConfigUtils.PROPERTY_IMS_SUPPORT).equals("0")) {
            Rlog.w(TAG, "IMS not support, do not init ImsService");
            return;
        }
        if (UserHandle.myUserId() == 0) {
            Rlog.i(TAG, "ImsApp onCreate begin");
            this.mImsService = ImsService.getInstance(this);
            ImsVTProviderUtil.getInstance().setContextAndInitRefVTP(this);
            ServiceManager.addService("mtkIms", new MtkImsService(this, this.mImsService).asBinder(), true);
            Rlog.i(TAG, "ImsApp onCreate end");
            this.mNumOfPhones = TelephonyManager.getDefault().getPhoneCount();
            getApplicationContext().sendBroadcast(new Intent("com.mediatek.ims.MTK_IMS_SERVICE_UP"));
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.telephony.action.MULTI_SIM_CONFIG_CHANGED");
            registerReceiver(this.mMultiSimConfigChangedReceiver, intentFilter);
        }
    }
}
