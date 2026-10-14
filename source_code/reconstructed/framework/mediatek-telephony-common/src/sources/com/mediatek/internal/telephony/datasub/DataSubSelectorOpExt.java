package com.mediatek.internal.telephony.datasub;

import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.SubscriptionController;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DataSubSelectorOpExt implements IDataSubSelectorOPExt {
    private static final int DSS_RET_CANNOT_GET_SIM_INFO = -2;
    private static final int DSS_RET_INVALID_PHONE_INDEX = -1;
    private static final int DSS_RET_SIM_NOT_ALL_LOADED = -3;
    private static boolean DBG = true;
    private static String LOG_TAG = "DSSExt";
    private static Context mContext = null;
    private static DataSubSelector mDataSubSelector = null;
    private static ISimSwitchForDSSExt mSimSwitchForDSS = null;
    private static CapabilitySwitch mCapabilitySwitch = null;

    public DataSubSelectorOpExt(Context context) {
        mContext = context;
    }

    private int getHighCapabilityPhoneIdBySimType() {
        int i;
        int i2;
        int i3 = -1;
        int phoneNum = mDataSubSelector.getPhoneNum();
        int[] iArr = new int[phoneNum];
        int[] iArr2 = new int[phoneNum];
        int simSlotIndex = 0;
        int i4 = 0;
        int i5 = 0;
        int i6 = 0;
        int i7 = -1;
        if (RadioCapabilitySwitchUtil.isPS2SupportLTE()) {
            int i8 = 2;
            if (phoneNum == 2) {
                List availableSubscriptionInfoList = ((SubscriptionManager) mContext.getSystemService("telephony_subscription_service")).getAvailableSubscriptionInfoList();
                int size = (availableSubscriptionInfoList == null || availableSubscriptionInfoList.isEmpty()) ? 0 : availableSubscriptionInfoList.size();
                if (DataSubSelectorUtil.isAnySimNotReady(mContext, size)) {
                    log("error: sim not ready, wait for next sub ready");
                    return -3;
                }
                if (size > 0) {
                    Iterator it = availableSubscriptionInfoList.iterator();
                    while (it.hasNext()) {
                        simSlotIndex |= 1 << ((SubscriptionInfo) it.next()).getSimSlotIndex();
                    }
                }
                if (size == 0) {
                    log("no sim card, don't switch");
                    return -1;
                }
                if (!RadioCapabilitySwitchUtil.getSimInfo(iArr, iArr2, simSlotIndex)) {
                    log("cannot get sim operator info, don't switch");
                    return -2;
                }
                int i9 = 0;
                while (i9 < phoneNum) {
                    if (i8 == iArr[i9]) {
                        i4++;
                    } else if (RadioCapabilitySwitchUtil.isCdmaCard(i9, iArr[i9], mContext)) {
                        i6++;
                        iArr[i9] = 4;
                        i7 = i9;
                    } else if (iArr[i9] != 0) {
                        i5++;
                        if (iArr[i9] != 4) {
                            iArr[i9] = 3;
                        }
                    }
                    i9++;
                    i8 = 2;
                }
                log("getHighCapabilityPhoneIdBySimType : Inserted SIM count: " + size + ", insertedStatus: " + simSlotIndex + ", tSimCount: " + i4 + ", wSimCount: " + i5 + ", cSimCount: " + i6 + Arrays.toString(iArr));
                if (RadioCapabilitySwitchUtil.isSupportSimSwitchEnhancement(1) && RadioCapabilitySwitchUtil.isTPlusWSupport()) {
                    if (iArr[0] == 2) {
                        i2 = 3;
                        if (iArr[1] == 3) {
                            i3 = 0;
                        }
                    } else {
                        i2 = 3;
                    }
                    if (iArr[0] == i2 && iArr[1] == 2) {
                        i3 = 1;
                    }
                }
                if (RadioCapabilitySwitchUtil.isSupportSimSwitchEnhancement(2)) {
                    if (iArr[0] == 2 && RadioCapabilitySwitchUtil.isCdmaCard(1, iArr[1], mContext)) {
                        i3 = 1;
                    } else if (RadioCapabilitySwitchUtil.isCdmaCard(0, iArr[0], mContext) && iArr[1] == 2) {
                        i3 = 0;
                    }
                }
                if (RadioCapabilitySwitchUtil.isSupportSimSwitchEnhancement(3)) {
                    if (RadioCapabilitySwitchUtil.isCdmaCard(0, iArr[0], mContext)) {
                        i = 3;
                        if (iArr[1] == 3) {
                            i3 = 0;
                        }
                    } else {
                        i = 3;
                    }
                    if (iArr[0] == i && RadioCapabilitySwitchUtil.isCdmaCard(1, iArr[1], mContext)) {
                        i3 = 1;
                    }
                }
                if (iArr[0] == 4 && iArr[1] == 4 && i5 == 1 && i6 == 1 && i7 != -1) {
                    i3 = i7;
                }
            }
        }
        log("getHighCapabilityPhoneIdBySimType : " + i3);
        return i3;
    }

    private void handleNeedWaitImsi(Intent intent) {
        if (CapabilitySwitch.isNeedWaitImsi()) {
            CapabilitySwitch.setNeedWaitImsi(Boolean.toString(false));
            subSelector(intent);
        }
        if (CapabilitySwitch.isNeedWaitImsiRoaming()) {
            CapabilitySwitch.setNeedWaitImsiRoaming(Boolean.toString(false));
        }
    }

    private void handleNeedWaitUnlock(Intent intent) {
        if (CapabilitySwitch.isNeedWaitUnlock()) {
            CapabilitySwitch.setNeedWaitUnlock("false");
            subSelector(intent);
        }
        if (CapabilitySwitch.isNeedWaitUnlockRoaming()) {
            CapabilitySwitch.setNeedWaitUnlockRoaming("false");
        }
    }

    private boolean hasConnectivity() {
        NetworkInfo activeNetworkInfo = ((ConnectivityManager) mContext.getSystemService("connectivity")).getActiveNetworkInfo();
        log("DataSubselector, networkinfo: " + activeNetworkInfo);
        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
            return false;
        }
        NetworkInfo.DetailedState detailedState = activeNetworkInfo.getDetailedState();
        log("DataSubselector, DetailedState : " + detailedState);
        return detailedState == NetworkInfo.DetailedState.CONNECTED;
    }

    private void log(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str);
        }
    }

    private void loge(String str) {
        if (DBG) {
            Rlog.e(LOG_TAG, str);
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleAirPlaneModeOff(Intent intent) {
        subSelector(intent);
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleBootCompleteAction() {
        log("handleBootCompleteAction");
        int simState = TelephonyManager.from(mContext).getSimState(0);
        int simState2 = TelephonyManager.from(mContext).getSimState(1);
        log("subsidylock: simState1 :" + simState + ", simState2 : " + simState2);
        if (simState == 1 && simState2 == 1) {
            log("subsidylock: both SIM ABSENT, Set capability and data to phoneId 0");
            mCapabilitySwitch.setCapability(0);
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleConnectivityAction() {
        log("handleConnectivityAction");
        if (hasConnectivity()) {
            log("SET CONNECTIVITY_STATUS TO 1");
            SystemProperties.set("persist.vendor.subsidylock.connectivity_status", String.valueOf(1));
        } else {
            log("SET CONNECTIVITY_STATUS TO 0");
            SystemProperties.set("persist.vendor.subsidylock.connectivity_status", String.valueOf(0));
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleDefaultDataChanged(Intent intent) {
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handlePlmnChanged(Intent intent) {
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleSimStateChanged(Intent intent) {
        int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
        log("subsidylock: handleSimStateChanged: " + intExtra);
        if (intExtra != 10) {
            if (intExtra == 6) {
                mCapabilitySwitch.handleSimImsiStatus(intent);
            }
        } else {
            log("handleSimStateChanged: INTENT_VALUE_ICC_IMSI");
            mCapabilitySwitch.handleSimImsiStatus(intent);
            handleNeedWaitImsi(intent);
            handleNeedWaitUnlock(intent);
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void handleSubinfoRecordUpdated(Intent intent) {
        log("handleSubinfoRecordUpdated: detectedType = " + intent.getIntExtra("simDetectStatus", 4));
        subSelector(intent);
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void init(DataSubSelector dataSubSelector, ISimSwitchForDSSExt iSimSwitchForDSSExt) {
        mDataSubSelector = dataSubSelector;
        mCapabilitySwitch = CapabilitySwitch.getInstance(mContext, dataSubSelector);
        mSimSwitchForDSS = iSimSwitchForDSSExt;
    }

    @Override // com.mediatek.internal.telephony.datasub.IDataSubSelectorOPExt
    public void subSelector(Intent intent) {
        int highCapabilityPhoneIdBySimType = getHighCapabilityPhoneIdBySimType();
        if (highCapabilityPhoneIdBySimType == -3) {
            return;
        }
        if (highCapabilityPhoneIdBySimType == -2) {
            CapabilitySwitch.setNeedWaitImsi(Boolean.toString(true));
        } else if (highCapabilityPhoneIdBySimType == -1) {
            highCapabilityPhoneIdBySimType = SubscriptionManager.getPhoneId(SubscriptionController.getInstance().getDefaultDataSubId());
        }
        if (!mCapabilitySwitch.isSimUnLocked()) {
            log("DataSubSelector for OM: do not switch because of sim locking");
            CapabilitySwitch.setNeedWaitUnlock("true");
            CapabilitySwitch.setSimStatus(intent);
            return;
        }
        log("DataSubSelector for OM: no pin lock");
        CapabilitySwitch.setNeedWaitUnlock("false");
        log("Default data phoneid = " + highCapabilityPhoneIdBySimType);
        if (highCapabilityPhoneIdBySimType >= 0 && highCapabilityPhoneIdBySimType < mDataSubSelector.getPhoneNum()) {
            mCapabilitySwitch.setCapabilityIfNeeded(highCapabilityPhoneIdBySimType);
        }
        CapabilitySwitch.resetSimStatus();
    }
}
