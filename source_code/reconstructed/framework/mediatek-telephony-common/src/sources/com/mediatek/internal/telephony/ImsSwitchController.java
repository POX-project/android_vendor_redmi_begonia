package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.Handler;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.android.ims.ImsManager;
import com.android.internal.telephony.CommandsInterface;
import com.mediatek.ims.internal.IMtkImsService;
import com.mediatek.ims.internal.MtkImsManager;

/* JADX INFO: loaded from: classes.dex */
public class ImsSwitchController extends Handler {
    private static final int BIND_IMS_SERVICE_DELAY_IN_MILLIS = 2000;
    static final String LOG_TAG = "ImsSwitchController";
    private static IMtkImsService mMtkImsService = null;
    private CommandsInterface[] mCi;
    private Context mContext;
    private int mPhoneCount;
    private RadioPowerInterface mRadioPowerIf;
    private ImsServiceDeathRecipient mDeathRecipient = new ImsServiceDeathRecipient();
    private Runnable mBindImsServiceRunnable = new Runnable() { // from class: com.mediatek.internal.telephony.ImsSwitchController.1
        @Override // java.lang.Runnable
        public void run() {
            Rlog.w(ImsSwitchController.LOG_TAG, "try to bind ImsService again");
            if (!ImsSwitchController.this.checkAndBindImsService(0)) {
                ImsSwitchController.this.postDelayed(this, 2000L);
                return;
            }
            ImsSwitchController.log("manually updateImsServiceConfig");
            if (!MtkImsManager.isSupportMims()) {
                ImsManager.updateImsServiceConfig(ImsSwitchController.this.mContext, RadioCapabilitySwitchUtil.getMainCapabilityPhoneId(), true);
            } else {
                for (int i = 0; i < TelephonyManager.getDefault().getPhoneCount(); i++) {
                    ImsManager.updateImsServiceConfig(ImsSwitchController.this.mContext, i, true);
                }
            }
        }
    };

    private class ImsServiceDeathRecipient implements IBinder.DeathRecipient {
        private ImsServiceDeathRecipient() {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            Rlog.w(ImsSwitchController.LOG_TAG, "ImsService died detected");
            IMtkImsService unused = ImsSwitchController.mMtkImsService = null;
            ImsSwitchController imsSwitchController = ImsSwitchController.this;
            imsSwitchController.postDelayed(imsSwitchController.mBindImsServiceRunnable, 2000L);
        }
    }

    class RadioPowerInterface implements IRadioPower {
        RadioPowerInterface() {
        }

        @Override // com.mediatek.internal.telephony.IRadioPower
        public void notifyRadioPowerChange(boolean z, int i) {
            ImsSwitchController.log("notifyRadioPowerChange, power:" + z + " phoneId:" + i);
            if (!MtkImsManager.isSupportMims() && RadioCapabilitySwitchUtil.getMainCapabilityPhoneId() != i) {
                ImsSwitchController.log("radio power change ignore due to phone id isn't LTE phone");
                return;
            }
            if (SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1")) {
                ImsSwitchController.log("[" + i + "] Modem auto registration so that we don't triggerImsService updateRadioState");
                return;
            }
            if (ImsSwitchController.mMtkImsService == null) {
                ImsSwitchController.this.checkAndBindImsService(i);
            }
            if (ImsSwitchController.mMtkImsService != null) {
                try {
                    ImsSwitchController.mMtkImsService.updateRadioState(z ? 1 : 0, i);
                } catch (RemoteException e) {
                    Rlog.e(ImsSwitchController.LOG_TAG, "RemoteException can't notify power state change");
                }
            } else {
                Rlog.w(ImsSwitchController.LOG_TAG, "notifyRadioPowerChange: ImsService not ready !!!");
            }
            ImsSwitchController.log("radio power change processed");
        }
    }

    ImsSwitchController(Context context, int i, CommandsInterface[] commandsInterfaceArr) {
        log("Initialize ImsSwitchController");
        this.mContext = context;
        this.mCi = commandsInterfaceArr;
        this.mPhoneCount = i;
        if (!SystemProperties.get("persist.vendor.ims_support").equals("1") || SystemProperties.get("ro.vendor.mtk_tc1_feature").equals("1")) {
            return;
        }
        RadioPowerInterface radioPowerInterface = new RadioPowerInterface();
        this.mRadioPowerIf = radioPowerInterface;
        RadioManager.registerForRadioPowerChange(LOG_TAG, radioPowerInterface);
        if (mMtkImsService == null) {
            checkAndBindImsService(0);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkAndBindImsService(int i) {
        IBinder service = ServiceManager.getService("mtkIms");
        if (service == null) {
            return false;
        }
        try {
            service.linkToDeath(this.mDeathRecipient, 0);
            mMtkImsService = IMtkImsService.Stub.asInterface(service);
            log("checkAndBindImsService: mMtkImsService = " + mMtkImsService);
            return true;
        } catch (RemoteException e) {
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void log(String str) {
        Rlog.d(LOG_TAG, str);
    }
}
