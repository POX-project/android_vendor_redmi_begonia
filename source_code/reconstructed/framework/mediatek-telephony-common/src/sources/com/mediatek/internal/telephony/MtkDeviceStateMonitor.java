package com.mediatek.internal.telephony;

import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.DeviceStateMonitor;
import com.android.internal.telephony.Phone;

/* JADX INFO: loaded from: classes.dex */
public class MtkDeviceStateMonitor extends DeviceStateMonitor {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkDeviceStateMonitor";
    private static final boolean MTK_FD_SUPPORT;
    private static final String PROPERTY_FD_ON_CHARGE = "persist.vendor.fd.on.charge";
    private static final String PROPERTY_FD_SCREEN_OFF_ONLY = "persist.vendor.fd.screen.off.only";
    private static final String PROPERTY_RIL_FD_MODE = "vendor.ril.fd.mode";

    static {
        MTK_FD_SUPPORT = Integer.parseInt(SystemProperties.get("ro.vendor.mtk_fd_support", "0")) == 1;
    }

    public MtkDeviceStateMonitor(Phone phone) {
        super(phone);
        logd("Initialize MtkDeviceStateMonitor");
        this.mIsLowDataExpected = isLowDataExpected();
    }

    private boolean isFdAllowed() {
        return MTK_FD_SUPPORT && Integer.parseInt(SystemProperties.get(PROPERTY_RIL_FD_MODE, "0")) == 1;
    }

    private static boolean isFdEnabledOnlyWhenScreenOff() {
        return SystemProperties.getInt(PROPERTY_FD_SCREEN_OFF_ONLY, 0) == 1;
    }

    private static boolean isFdEnabledWhenCharging() {
        return SystemProperties.getInt(PROPERTY_FD_ON_CHARGE, 0) == 1;
    }

    private void logd(String str) {
        Rlog.d(LOG_TAG, "[phoneId" + this.mPhone.getPhoneId() + "]" + str);
    }

    protected boolean isLowDataExpected() {
        if (!isFdAllowed()) {
            return false;
        }
        logd("isLowDataExpected mIsScreenOn = " + this.mIsScreenOn + " mIsCharging = " + this.mIsCharging + " mIsTetheringOn = " + this.mIsTetheringOn);
        if (isFdEnabledOnlyWhenScreenOff() && this.mIsScreenOn) {
            return false;
        }
        return (!this.mIsCharging || isFdEnabledWhenCharging()) && !this.mIsTetheringOn;
    }
}
