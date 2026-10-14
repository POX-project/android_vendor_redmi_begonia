package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.android.ims.ImsManager;
import com.android.internal.telephony.IPhoneSubInfo;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ratconfiguration.RatConfiguration;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class RadioCapabilitySwitchUtil {
    public static final String CN_MCC = "460";
    public static final int ENHANCEMENT_T_PLUS_C = 2;
    public static final int ENHANCEMENT_T_PLUS_T = 0;
    public static final int ENHANCEMENT_T_PLUS_W = 1;
    public static final int ENHANCEMENT_W_PLUS_C = 3;
    public static final int ENHANCEMENT_W_PLUS_NA = 5;
    public static final int ENHANCEMENT_W_PLUS_W = 4;
    public static final int ICCID_ERROR = 3;
    public static final String IMSI_NOT_READY = "0";
    public static final int IMSI_NOT_READY_OR_SIM_LOCKED = 2;
    public static final String IMSI_READY = "1";
    private static final String LOG_TAG = "RadioCapabilitySwitchUtil";
    public static final int NOT_SHOW_DIALOG = 1;
    private static final String NO_SIM_VALUE = "N/A";
    public static final int OP01_6M_PRIORITY_OP01_SIM = 1;
    public static final int OP01_6M_PRIORITY_OP01_USIM = 0;
    public static final int OP01_6M_PRIORITY_OTHER = 2;
    private static final String PROPERTY_CAPABILITY_SWITCH = "persist.vendor.radio.simswitch";
    public static final int SHOW_DIALOG = 0;
    public static final int SIM_OP_INFO_OP01 = 2;
    public static final int SIM_OP_INFO_OP02 = 3;
    public static final int SIM_OP_INFO_OP09 = 4;
    public static final int SIM_OP_INFO_OP18 = 4;
    public static final int SIM_OP_INFO_OVERSEA = 1;
    public static final int SIM_OP_INFO_UNKNOWN = 0;
    public static final int SIM_SWITCHING = 4;
    public static final int SIM_SWITCH_MODE_DUAL_TALK = 3;
    public static final int SIM_SWITCH_MODE_DUAL_TALK_SWAP = 4;
    public static final int SIM_SWITCH_MODE_SINGLE_TALK_MDSYS = 1;
    public static final int SIM_SWITCH_MODE_SINGLE_TALK_MDSYS_LITE = 2;
    public static final int SIM_TYPE_OTHER = 2;
    public static final int SIM_TYPE_SIM = 0;
    public static final int SIM_TYPE_USIM = 1;
    public static final int SUBSIDY_LOCK_SUPPORT = 10;
    private static final String[] PLMN_TABLE_OP01 = {"46000", "46002", "46007", "46008", "45412", "45413", "00101", "00211", "00321", "00431", "00541", "00651", "00761", "00871", "00902", "01012", "01122", "01232", "46004", "46602", "50270"};
    private static final String[] PLMN_TABLE_OP02 = {"46001", "46006", "46009", "45407"};
    private static final String[] PLMN_TABLE_OP09 = {"46005", "45502", "46003", "46011"};
    private static final String[] PLMN_TABLE_OP09_3G = {"20404"};
    private static final String[] PLMN_TABLE_OP18 = {"405840", "405854", "405855", "405856", "405857", "405858", "405859", "405860", "405861", "405862", "405863", "405864", "405865", "405866", "405867", "405868", "405869", "405870", "405871", "405872", "405873", "405874"};
    private static final String[] PROPERTY_SIM_IMSI_STATUS = {"vendor.ril.imsi.status.sim1", "vendor.ril.imsi.status.sim2", "vendor.ril.imsi.status.sim3", "vendor.ril.imsi.status.sim4"};
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    private static final String[] PROPERTY_RIL_CT3G = {"vendor.gsm.ril.ct3g", "vendor.gsm.ril.ct3g.2", "vendor.gsm.ril.ct3g.3", "vendor.gsm.ril.ct3g.4"};

    public static void clearAllSimImsiStatus() {
        logd("clearAllSimImsiStatus");
        for (int i = 0; i < PROPERTY_SIM_IMSI_STATUS.length; i++) {
            updateSimImsiStatus(i, "0");
        }
    }

    public static String getHashCode(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update(str.getBytes());
            return new String(messageDigest.digest());
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException("RadioCapabilitySwitchUtil SHA-256 must exist");
        }
    }

    public static int getHigherPrioritySimForOp01(int i, boolean[] zArr, boolean[] zArr2, boolean[] zArr3, boolean[] zArr4) {
        int i2 = -1;
        int length = zArr.length;
        if (zArr[i]) {
            return i;
        }
        for (int i3 = 0; i3 < length; i3++) {
            if (zArr[i3]) {
                i2 = i3;
            }
        }
        if (i2 != -1 || zArr2[i]) {
            return i2;
        }
        for (int i4 = 0; i4 < length; i4++) {
            if (zArr2[i4]) {
                i2 = i4;
            }
        }
        if (i2 != -1 || zArr3[i]) {
            return i2;
        }
        for (int i5 = 0; i5 < length; i5++) {
            if (zArr3[i5]) {
                i2 = i5;
            }
        }
        if (i2 != -1 || zArr4[i]) {
            return i2;
        }
        for (int i6 = 0; i6 < length; i6++) {
            if (zArr4[i6]) {
                i2 = i6;
            }
        }
        return i2;
    }

    public static int getHighestPriorityPhone(int i, int[] iArr) {
        int i2 = 0;
        int length = iArr.length;
        int i3 = 0;
        int i4 = 0;
        for (int i5 = 0; i5 < length; i5++) {
            if (iArr[i5] < iArr[i2]) {
                i2 = i5;
                i3 = 1;
                i4 = 1 << i5;
            } else if (iArr[i5] == iArr[i2]) {
                i3++;
                i4 |= 1 << i5;
            }
        }
        if (i3 == 1) {
            return i2;
        }
        if (i == -1 || ((1 << i) & i4) == 0) {
            return -1;
        }
        return i;
    }

    public static int getMainCapabilityPhoneId() {
        return SystemProperties.getInt("persist.vendor.radio.simswitch", 1) - 1;
    }

    public static int getProtocolStackId(int i) {
        int mainCapabilityPhoneId = getMainCapabilityPhoneId();
        if (i == mainCapabilityPhoneId) {
            return 1;
        }
        if (isDssNoResetSupport()) {
            if (i < mainCapabilityPhoneId) {
                return i + 2;
            }
        } else if (i == 0) {
            return mainCapabilityPhoneId + 1;
        }
        return i + 1;
    }

    private static String getSimImsiStatus(int i) {
        return SystemProperties.get(PROPERTY_SIM_IMSI_STATUS[i], "0");
    }

    public static boolean getSimInfo(int[] iArr, int[] iArr2, int i) {
        String[] strArr = new String[iArr.length];
        String[] strArr2 = new String[iArr.length];
        for (int i2 = 0; i2 < iArr.length; i2++) {
            strArr2[i2] = SystemProperties.get(i2 == 0 ? "vendor.gsm.ril.uicctype" : "vendor.gsm.ril.uicctype." + (i2 + 1), "");
            if (strArr2[i2].equals("SIM")) {
                iArr2[i2] = 0;
            } else if (strArr2[i2].equals("USIM")) {
                iArr2[i2] = 1;
            } else {
                iArr2[i2] = 2;
            }
            try {
                IPhoneSubInfo iPhoneSubInfoAsInterface = IPhoneSubInfo.Stub.asInterface(ServiceManager.getService("iphonesubinfo"));
                if (iPhoneSubInfoAsInterface == null) {
                    logd("subInfo stub is null");
                    return false;
                }
                int[] subId = SubscriptionManager.getSubId(i2);
                if (subId == null) {
                    logd("subIdList is null");
                } else {
                    strArr[i2] = iPhoneSubInfoAsInterface.getSubscriberIdForSubscriber(subId[0], "com.mediatek.internal.telephony", (String) null);
                    if (strArr[i2] == null) {
                        logd("strMnc[" + i2 + "] is null, get mnc by ril.uim.subscriberid");
                        StringBuilder sb = new StringBuilder();
                        sb.append("vendor.ril.uim.subscriberid.");
                        sb.append(i2 + 1);
                        strArr[i2] = SystemProperties.get(sb.toString(), "");
                    }
                    if (strArr[i2].equals("")) {
                        logd("strMnc[" + i2 + "] is null, get mnc by vendor.gsm.ril.uicc.mccmnc");
                        strArr[i2] = SystemProperties.get(i2 == 0 ? "vendor.gsm.ril.uicc.mccmnc" : "vendor.gsm.ril.uicc.mccmnc." + i2, "");
                    }
                }
            } catch (RemoteException e) {
                logd("get subInfo stub fail");
                strArr[i2] = "error";
            }
            if (strArr[i2] == null) {
                logd("strMnc[" + i2 + "] is null");
                strArr[i2] = "";
            }
            if (strArr[i2].length() >= 6) {
                strArr[i2] = strArr[i2].substring(0, 6);
            } else if (strArr[i2].length() >= 5) {
                strArr[i2] = strArr[i2].substring(0, 5);
            }
            logd("SimType[" + i2 + "]= " + strArr2[i2] + "insertedStatus:" + i);
            if (i >= 0 && ((1 << i2) & i) > 0) {
                if (strArr[i2].equals("") || strArr[i2].equals("error")) {
                    logd("SIM is inserted but no imsi");
                    return false;
                }
                if (strArr[i2].equals("sim_lock")) {
                    logd("SIM is lock, wait pin unlock");
                    return false;
                }
                if (strArr[i2].equals("N/A") || strArr[i2].equals("sim_absent")) {
                    logd("strMnc have invalid value, return false");
                    return false;
                }
                if (!strArr[i2].matches("[0-9]+")) {
                    logd("strMnc have non-numeric value, return false");
                    return false;
                }
            }
            for (String str : PLMN_TABLE_OP01) {
                if (strArr[i2].startsWith(str)) {
                    iArr[i2] = 2;
                    break;
                }
            }
            if (iArr[i2] == 0) {
                for (String str2 : PLMN_TABLE_OP02) {
                    if (strArr[i2].startsWith(str2)) {
                        iArr[i2] = 3;
                        break;
                    }
                }
            }
            if (iArr[i2] == 0) {
                for (String str3 : PLMN_TABLE_OP09) {
                    if (strArr[i2].startsWith(str3)) {
                        iArr[i2] = 4;
                        break;
                    }
                }
            }
            if (iArr[i2] == 0) {
                for (String str4 : PLMN_TABLE_OP09_3G) {
                    if (strArr[i2].startsWith(str4) && "1".equals(SystemProperties.get(PROPERTY_RIL_CT3G[i2]))) {
                        iArr[i2] = 4;
                        break;
                    }
                }
            }
            if ((SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "").equals(DataSubConstants.OPERATOR_OP18) || isSubsidyLockForOmSupported()) && iArr[i2] == 0) {
                for (String str5 : PLMN_TABLE_OP18) {
                    if (strArr[i2].startsWith(str5)) {
                        iArr[i2] = 4;
                        break;
                    }
                }
            }
            if (iArr[i2] == 0 && !strArr[i2].equals("") && !strArr[i2].equals("N/A")) {
                iArr[i2] = 1;
            }
            logd("strMnc[" + i2 + "]= " + strArr[i2] + ", simOpInfo[" + i2 + "]=" + iArr[i2]);
        }
        return true;
    }

    public static boolean isAnySimLocked(int i) {
        if (RatConfiguration.isC2kSupported()) {
            logd("isAnySimLocked always returns false in C2K");
            return false;
        }
        String[] strArr = new String[i];
        String[] strArr2 = new String[i];
        for (int i2 = 0; i2 < i; i2++) {
            MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
            if (mtkUiccController != null) {
                strArr2[i2] = mtkUiccController.getIccid(i2);
            }
            if (!strArr2[i2].equals("N/A")) {
                strArr[i2] = TelephonyManager.getTelephonyProperty(i2, "vendor.gsm.sim.operator.numeric", "");
                if (strArr[i2].length() >= 6) {
                    strArr[i2] = strArr[i2].substring(0, 6);
                } else if (strArr[i2].length() >= 5) {
                    strArr[i2] = strArr[i2].substring(0, 5);
                }
                if (!strArr[i2].equals("")) {
                    logd("i = " + i2 + " from gsm.sim.operator.numeric:" + strArr[i2] + " ,iccid = " + strArr2[i2]);
                }
            }
            if (!strArr2[i2].equals("N/A") && (strArr[i2].equals("") || strArr[i2].equals("sim_lock"))) {
                return true;
            }
        }
        return false;
    }

    public static boolean isCapabilitySwitching() {
        try {
            IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
            if (iMtkTelephonyExAsInterface != null) {
                return iMtkTelephonyExAsInterface.isCapabilitySwitching();
            }
            logd("iTelEx is null!");
            return false;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean isCdmaCard(int i, int i2, Context context) {
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            logd("isCdmaCard invalid phoneId:" + i);
            return false;
        }
        String str = SystemProperties.get(PROPERTY_RIL_FULL_UICC_TYPE[i]);
        boolean z = str.indexOf("CSIM") >= 0 || str.indexOf("RUIM") >= 0;
        if (!z && "SIM".equals(str) && "1".equals(SystemProperties.get(PROPERTY_RIL_CT3G[i]))) {
            z = true;
        }
        if (i2 == 4) {
            z = true;
        }
        if (!z || !isVolteEnabled(i, context) || isHVolteEnabled()) {
            return z;
        }
        logd("isCdmaCard, volte is enabled, SRLTE is unused for CT card");
        return false;
    }

    public static boolean isDssNoResetSupport() {
        return SystemProperties.get("vendor.ril.simswitch.no_reset_support").equals("1");
    }

    public static boolean isHVolteEnabled() {
        return SystemProperties.get("persist.vendor.mtk_ct_volte_support").equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN) || SystemProperties.get("persist.vendor.mtk_ct_volte_support").equals("3");
    }

    public static int isNeedShowSimDialog() {
        if (SystemProperties.getBoolean("ro.vendor.mtk_disable_cap_switch", false)) {
            logd("mtk_disable_cap_switch is true");
            return 0;
        }
        logd("isNeedShowSimDialog start");
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        int[] iArr = new int[phoneCount];
        int[] iArr2 = new int[phoneCount];
        String[] strArr = new String[phoneCount];
        int i = 0;
        int i2 = 0;
        int i3 = 0;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        ArrayList arrayList4 = new ArrayList();
        for (int i4 = 0; i4 < phoneCount; i4++) {
            MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
            if (mtkUiccController != null) {
                strArr[i4] = mtkUiccController.getIccid(i4);
            }
            logd("currIccid[" + i4 + "] : " + strArr[i4]);
            if (strArr[i4] == null || "".equals(strArr[i4])) {
                Log.e(LOG_TAG, "iccid not found, wait for next sim state change");
                return 3;
            }
            if (!"N/A".equals(strArr[i4])) {
                if (isSimOn(i4)) {
                    i++;
                    i2 = (1 << i4) | i2;
                } else {
                    logd("isNeedShowSimDialog, slot" + i4 + " is power off.");
                }
            }
        }
        if (i < 2) {
            logd("isNeedShowSimDialog: insert sim count < 2, do not show dialog");
            return 1;
        }
        if (isCapabilitySwitching()) {
            logd("SIM switch executing");
            return 4;
        }
        if (!getSimInfo(iArr, iArr2, i2)) {
            Log.e(LOG_TAG, "isNeedShowSimDialog: Can't get SIM information");
            return 2;
        }
        for (int i5 = 0; i5 < phoneCount; i5++) {
            if (1 == iArr2[i5]) {
                arrayList.add(Integer.valueOf(i5));
            } else if (iArr2[i5] == 0) {
                arrayList2.add(Integer.valueOf(i5));
            }
            if (3 == iArr[i5]) {
                arrayList3.add(Integer.valueOf(i5));
            } else {
                arrayList4.add(Integer.valueOf(i5));
            }
        }
        logd("usimIndexList size = " + arrayList.size());
        logd("op02IndexList size = " + arrayList3.size());
        if (arrayList.size() >= 2) {
            for (int i6 = 0; i6 < arrayList.size(); i6++) {
                if (arrayList3.contains(arrayList.get(i6))) {
                    i3++;
                }
            }
            if (i3 == 1) {
                logd("isNeedShowSimDialog: One OP02Usim inserted, not show dialog");
                return 1;
            }
        } else {
            if (arrayList.size() == 1) {
                logd("isNeedShowSimDialog: One Usim inserted, not show dialog");
                return 1;
            }
            for (int i7 = 0; i7 < arrayList2.size(); i7++) {
                if (arrayList3.contains(arrayList2.get(i7))) {
                    i3++;
                }
            }
            if (i3 == 1) {
                logd("isNeedShowSimDialog: One non-OP02 Usim inserted, not show dialog");
                return 1;
            }
        }
        logd("isNeedShowSimDialog: Show dialog");
        return 0;
    }

    public static boolean isPS2SupportLTE() {
        return SystemProperties.get("persist.vendor.radio.mtk_ps2_rat").indexOf(76) != -1;
    }

    public static boolean isRadioOffBySimManagement(int i) {
        int subIdUsingPhoneId = MtkSubscriptionManager.getSubIdUsingPhoneId(i);
        try {
            IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
            if (iMtkTelephonyExAsInterface != null) {
                return iMtkTelephonyExAsInterface.isRadioOffBySimManagement(subIdUsingPhoneId);
            }
            logd("iTelEx is null!");
            return false;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean isSimOn(int i) {
        return (MtkTelephonyManagerEx.getDefault().isSimOnOffEnabled() && MtkTelephonyManagerEx.getDefault().getSimOnOffState(i) == 10) ? false : true;
    }

    /* JADX WARN: Type inference failed for: r7v15 */
    /* JADX WARN: Type inference failed for: r7v16, types: [boolean] */
    /* JADX WARN: Type inference failed for: r7v18 */
    /* JADX WARN: Type inference failed for: r7v43 */
    public static boolean isSkipCapabilitySwitch(int i, int i2, Context context) {
        ?? r7;
        int[] iArr = new int[i2];
        int[] iArr2 = new int[i2];
        int i3 = 0;
        int i4 = 0;
        int i5 = 0;
        String[] strArr = new String[i2];
        if (!isPS2SupportLTE()) {
            return false;
        }
        if (i2 > 2) {
            return i < 2 && getMainCapabilityPhoneId() < 2 && !RatConfiguration.isC2kSupported() && !RatConfiguration.isTdscdmaSupported();
        }
        int i6 = 0;
        while (i6 < i2) {
            MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
            if (mtkUiccController != null) {
                strArr[i6] = mtkUiccController.getIccid(i6);
            }
            if (strArr[i6] != null) {
                int i7 = i5;
                if (!"".equals(strArr[i6])) {
                    if (!"N/A".equals(strArr[i6])) {
                        if (!isSimOn(i6) || isRadioOffBySimManagement(i6)) {
                            logd("isSkipCapabilitySwitch, slot" + i6 + " is power off.");
                        } else {
                            i4++;
                            i3 |= 1 << i6;
                        }
                    }
                    i6++;
                    i5 = i7;
                }
            }
            logd("iccid is not ready, do capability switch");
            return false;
        }
        int i8 = i5;
        if (i4 == 0) {
            logd("no sim card, skip capability switch");
            return true;
        }
        if (!getSimInfo(iArr, iArr2, i3)) {
            logd("cannot get sim operator info, do capability switch");
            return false;
        }
        int i9 = -1;
        boolean z = false;
        int i10 = 0;
        int i11 = 0;
        int i12 = i8;
        for (int i13 = 0; i13 < i2; i13++) {
            if (((1 << i13) & i3) > 0) {
                if (2 == iArr[i13]) {
                    i12++;
                } else if (isCdmaCard(i13, iArr[i13], context)) {
                    i10++;
                    i9 = i13;
                } else if (iArr[i13] != 0) {
                    i11++;
                }
                if (iArr[i13] == 4) {
                    z = true;
                }
            }
        }
        logd("isSkipCapabilitySwitch : Inserted SIM count: " + i4 + ", insertedStatus: " + i3 + ", tSimCount: " + i12 + ", wSimCount: " + i11 + ", cSimCount: " + i10);
        if (isSupportSimSwitchEnhancement(0) && i4 == 2 && i12 == 2) {
            return true;
        }
        if (isSupportSimSwitchEnhancement(1) && i4 == 2 && i12 == 1 && i11 == 1 && isTPlusWSupport() && iArr[i] != 2 && !z) {
            return true;
        }
        if (isSupportSimSwitchEnhancement(2) && i4 == 2 && i12 == 1 && i10 == 1 && !isCdmaCard(i, iArr[i], context)) {
            return true;
        }
        if (isSupportSimSwitchEnhancement(3) && i4 == 2 && i11 == 1 && i10 == 1 && !isCdmaCard(i, iArr[i], context)) {
            return true;
        }
        if (isSupportSimSwitchEnhancement(4) && i4 == 2 && i11 == 2) {
            return true;
        }
        if (isSupportSimSwitchEnhancement(5)) {
            r7 = 1;
            r7 = 1;
            if (i4 == 1 && i11 == 1) {
                return true;
            }
        } else {
            r7 = 1;
        }
        if (4 == iArr[0] && 4 == iArr[r7] && i10 == r7 && i11 == r7 && i9 != i) {
            return r7;
        }
        return false;
    }

    public static boolean isSubsidyLockFeatureOn() {
        return 10 == MtkTelephonyManagerEx.getDefault().getSimLockPolicy();
    }

    public static boolean isSubsidyLockForOmSupported() {
        return isSubsidyLockFeatureOn() && (SystemProperties.get("persist.vendor.subsidylock", "0").equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN) ^ true);
    }

    public static boolean isSupportSimSwitchEnhancement(int i) {
        if (i == 0 || i == 1) {
            return true;
        }
        if (i == 2 || i == 3) {
            return false;
        }
        return i == 4 || i == 5;
    }

    public static boolean isTPlusWSupport() {
        return SystemProperties.get("vendor.ril.simswitch.tpluswsupport").equals("1");
    }

    public static boolean isVolteEnabled(int i, Context context) {
        ImsManager imsManager = ImsManager.getInstance(context, i);
        boolean z = imsManager.isVolteEnabledByPlatform() && imsManager.isEnhanced4gLteModeSettingEnabledByUser();
        if (z) {
            int[] subId = SubscriptionManager.getSubId(i);
            if (subId != null) {
                int i2 = Settings.Global.getInt(context.getContentResolver(), "preferred_network_mode" + subId[0], MtkRILConstants.PREFERRED_NETWORK_MODE);
                int rafFromNetworkType = MtkRadioAccessFamily.getRafFromNetworkType(i2);
                if ((rafFromNetworkType & 266240) == 0) {
                    z = false;
                }
                logd("isVolteEnabled, imsUseEnabled = " + z + ", nwMode = " + i2 + ", rafFromNwMode = " + rafFromNetworkType + ", rafLteGroup = 266240");
            } else {
                logd("isVolteEnabled, subId[] is null");
            }
        }
        logd("isVolteEnabled = " + z);
        return z;
    }

    private static void logd(String str) {
        Rlog.d(LOG_TAG, "[RadioCapSwitchUtil] " + str);
    }

    public static void updateSimImsiStatus(int i, String str) {
        logd("updateSimImsiStatus slot = " + i + ", value = " + str);
        SystemProperties.set(PROPERTY_SIM_IMSI_STATUS[i], str);
    }
}
