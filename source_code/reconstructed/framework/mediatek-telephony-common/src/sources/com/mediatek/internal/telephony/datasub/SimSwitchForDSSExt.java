package com.mediatek.internal.telephony.datasub;

import android.content.Context;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class SimSwitchForDSSExt implements ISimSwitchForDSSExt {
    private static final String LOG_TAG = "SimSwitchDSSExt";
    public static final boolean USER_BUILD = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    public static boolean DBG = true;
    private static DataSubSelector mDataSubSelector = null;
    private static CapabilitySwitch mCapabilitySwitch = null;
    protected static Context mContext = null;

    public SimSwitchForDSSExt(Context context) {
        mContext = context;
    }

    private boolean checkOp18SubsidyCapSwitch() {
        int[] iArr = new int[mDataSubSelector.getPhoneNum()];
        int[] iArr2 = new int[mDataSubSelector.getPhoneNum()];
        int i = -1;
        int i2 = 0;
        int i3 = 0;
        boolean[] zArr = new boolean[mDataSubSelector.getPhoneNum()];
        int defaultDataSubId = SubscriptionController.getInstance().getDefaultDataSubId();
        String[] strArr = new String[mDataSubSelector.getPhoneNum()];
        log("checkOp18CapSwitch start");
        int phoneId = defaultDataSubId != -1 ? SubscriptionManager.getPhoneId(defaultDataSubId) : -1;
        for (int i4 = 0; i4 < mDataSubSelector.getPhoneNum(); i4++) {
            MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
            if (mtkUiccController != null) {
                strArr[i4] = mtkUiccController.getIccid(i4);
            }
            if (strArr[i4] == null || "".equals(strArr[i4])) {
                log("error: iccid not found, wait for next sub ready");
                return false;
            }
            if (!DataSubConstants.NO_SIM_VALUE.equals(strArr[i4])) {
                if (RadioCapabilitySwitchUtil.isSimOn(i4)) {
                    i2++;
                    i3 |= 1 << i4;
                } else {
                    log("checkOp18SubsidyCapSwitch, slot" + i4 + " is power off.");
                }
            }
        }
        log("checkOp18SubsidyCapSwitch : Inserted SIM count: " + i2 + ", insertedStatus: " + i3);
        if (!RadioCapabilitySwitchUtil.getSimInfo(iArr, iArr2, i3)) {
            if (!RadioCapabilitySwitchUtil.isSubsidyLockForOmSupported() || !mCapabilitySwitch.isCanSwitch()) {
                return false;
            }
            int majorSim = getMajorSim();
            log("SIM is in locked state, protocolSim: " + majorSim);
            if (majorSim < 0 || majorSim > 1) {
                return false;
            }
            int i5 = 1 - majorSim;
            Context context = mContext;
            if (context == null) {
                log("mContext is null");
                return false;
            }
            int simState = TelephonyManager.from(context).getSimState(majorSim);
            int simState2 = TelephonyManager.from(mContext).getSimState(i5);
            log("sim1_state: " + simState + ", sim2_state = " + simState2);
            if (simState != 4 && simState2 != 4) {
                return false;
            }
            log("Both SIMs are in locked state, newProtocolSim: " + i5);
            mCapabilitySwitch.setCapability(i5);
            mDataSubSelector.setDefaultData(i5);
            mDataSubSelector.setDataEnabled(i5, true);
            return true;
        }
        if (!mCapabilitySwitch.isSimUnLocked()) {
            log("checkOp18SubsidyCapSwitch : set need wait unlock");
            CapabilitySwitch.setNeedWaitUnlock("true");
        }
        int mainCapabilityPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
        log("op18: capabilitySimId:" + mainCapabilityPhoneId);
        for (int i6 = 0; i6 < mDataSubSelector.getPhoneNum(); i6++) {
            if (iArr[i6] == 4) {
                zArr[i6] = true;
            }
        }
        log("op18Usim: " + Arrays.toString(zArr));
        for (int i7 = 0; i7 < mDataSubSelector.getPhoneNum(); i7++) {
            if (phoneId == i7) {
                if (zArr[i7]) {
                    i = i7;
                } else {
                    for (int i8 = 0; i8 < mDataSubSelector.getPhoneNum(); i8++) {
                        if (zArr[i8]) {
                            i = i8;
                        }
                    }
                }
                log("op18: i = " + i7 + "targetSim : " + i);
                if (zArr[i7]) {
                    log("op18-C1: cur is old op18 USIM, no change");
                    if (mainCapabilityPhoneId != i7) {
                        log("op18-C1a: old op18 SIM change slot, change!");
                        mCapabilitySwitch.setCapability(i7);
                    }
                    mDataSubSelector.setDefaultData(i7);
                    mDataSubSelector.setDataEnabled(i7, true);
                    return true;
                }
                if (i == -1) {
                    mDataSubSelector.setDefaultData(mainCapabilityPhoneId);
                    mDataSubSelector.setDataEnabled(mainCapabilityPhoneId, true);
                    log("op18-C6: no higher priority SIM, no cahnge");
                    return true;
                }
                log("op18-C2: cur is not op18 SIM but find op18 SIM, change!");
                mCapabilitySwitch.setCapability(i);
                mDataSubSelector.setDefaultData(i);
                mDataSubSelector.setDataEnabled(i, true);
                return true;
            }
        }
        if (zArr[mainCapabilityPhoneId]) {
            i = mainCapabilityPhoneId;
        } else {
            for (int i9 = 0; i9 < mDataSubSelector.getPhoneNum(); i9++) {
                if (zArr[i9]) {
                    i = i9;
                }
            }
        }
        log("op18: target SIM :" + i);
        if (zArr[mainCapabilityPhoneId]) {
            log("op18-C7: cur is new op18 USIM, no change");
            mDataSubSelector.setDefaultData(mainCapabilityPhoneId);
            mDataSubSelector.setDataEnabled(mainCapabilityPhoneId, true);
            return true;
        }
        if (i == -1) {
            mDataSubSelector.setDefaultData(mainCapabilityPhoneId);
            mDataSubSelector.setDataEnabled(mainCapabilityPhoneId, true);
            log("op18-C12: no higher priority SIM, no cahnge");
            return true;
        }
        log("op18-C8: find op18 USIM, change!");
        mCapabilitySwitch.setCapability(i);
        mDataSubSelector.setDefaultData(i);
        mDataSubSelector.setDataEnabled(i, true);
        return true;
    }

    private int getMajorSim() {
        String str = SystemProperties.get("persist.vendor.radio.simswitch", "");
        if (str == null || str.equals("")) {
            log("[getMajorSim]: fail to get major SIM");
            return -1;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("[getMajorSim]: ");
        sb.append(Integer.parseInt(str) - 1);
        log(sb.toString());
        return Integer.parseInt(str) - 1;
    }

    private static void log(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str);
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.ISimSwitchForDSSExt
    public boolean checkCapSwitch(int i) {
        if (RadioCapabilitySwitchUtil.isSubsidyLockForOmSupported()) {
            return checkOp18SubsidyCapSwitch();
        }
        return false;
    }

    @Override // com.mediatek.internal.telephony.datasub.ISimSwitchForDSSExt
    public void init(DataSubSelector dataSubSelector) {
        mDataSubSelector = dataSubSelector;
        mCapabilitySwitch = CapabilitySwitch.getInstance(mContext, dataSubSelector);
    }

    @Override // com.mediatek.internal.telephony.datasub.ISimSwitchForDSSExt
    public int isNeedSimSwitch() {
        return 2;
    }
}
