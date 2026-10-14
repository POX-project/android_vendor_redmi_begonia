package com.mediatek.internal.telephony;

import android.content.ContentResolver;
import android.content.Context;
import android.content.Intent;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;

/* JADX INFO: loaded from: classes.dex */
public class MtkLteDataOnlyController {
    private static final String ACTION_CHECK_PERMISSISON_SERVICE = "com.mediatek.intent.action.LTE_DATA_ONLY_MANAGER";
    public static final int CDMA3G_SIM = 3;
    public static final int CDMA4G_SIM = 4;
    public static final int CDMA_SIM = 5;
    private static final String CHECK_PERMISSION_SERVICE_PACKAGE = "com.android.phone";
    private static final String CSIM = "CSIM";
    public static final int ERROR_SIM = -1;
    public static final int GSM_SIM = 2;
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    private static final String RUIM = "RUIM";
    private static final String SIM = "SIM";
    public static final int SVLTE_RAT_MODE_3G = 1;
    public static final int SVLTE_RAT_MODE_4G = 0;
    public static final int SVLTE_RAT_MODE_4G_DATA_ONLY = 2;
    private static final String TAG = "MtkLteDataOnlyController";
    private static final String USIM = "USIM";
    private Context mContext;

    public MtkLteDataOnlyController(Context context) {
        this.mContext = context;
    }

    private static int getCdmaSlot() {
        for (int i = 0; i < TelephonyManager.getDefault().getPhoneCount(); i++) {
            if (TelephonyManager.getDefault().getCurrentPhoneTypeForSlot(i) == 2) {
                return i;
            }
        }
        return -1;
    }

    public static String getFullIccCardTypeExt() {
        int cdmaSlot = getCdmaSlot();
        if (cdmaSlot < 0 || cdmaSlot >= PROPERTY_RIL_FULL_UICC_TYPE.length) {
            cdmaSlot = 0;
        }
        String str = SystemProperties.get(PROPERTY_RIL_FULL_UICC_TYPE[cdmaSlot]);
        Rlog.d(TAG, "getFullIccCardTypeExt slotId = " + cdmaSlot + ",cardType = " + str);
        return str;
    }

    public static int getSimType() {
        String fullIccCardTypeExt = getFullIccCardTypeExt();
        if (fullIccCardTypeExt == null) {
            return -1;
        }
        if (!fullIccCardTypeExt.contains(CSIM) && !fullIccCardTypeExt.contains(RUIM)) {
            return (fullIccCardTypeExt.contains(SIM) || fullIccCardTypeExt.contains(USIM)) ? 2 : -1;
        }
        if (fullIccCardTypeExt.contains(CSIM) || fullIccCardTypeExt.contains(USIM)) {
            return 4;
        }
        return fullIccCardTypeExt.contains(SIM) ? 3 : 5;
    }

    private boolean is4GDataOnly() {
        int[] subId;
        if (this.mContext == null || (subId = SubscriptionManager.getSubId(SystemProperties.getInt("persist.vendor.radio.cdma_slot", -1) - 1)) == null) {
            return false;
        }
        ContentResolver contentResolver = this.mContext.getContentResolver();
        StringBuilder sb = new StringBuilder();
        sb.append("preferred_network_mode");
        sb.append(subId[0]);
        return Settings.Global.getInt(contentResolver, sb.toString(), MtkRILConstants.PREFERRED_NETWORK_MODE) == 102;
    }

    public static boolean isCdma3GCardType() {
        return getSimType() == 3;
    }

    public static boolean isCdmaCardType() {
        return getSimType() == 4 || getSimType() == 3 || getSimType() == 5;
    }

    public static boolean isCdmaLteCardType() {
        return getSimType() == 4;
    }

    private boolean isSupportTddDataOnlyCheck() {
        boolean zIsCdmaLteCardType = isCdmaLteCardType();
        boolean zEquals = SystemProperties.get("ro.vendor.mtk_c2k_lte_mode").equals("1");
        boolean zEquals2 = "1".equals(SystemProperties.get("ro.vendor.mtk_tdd_data_only_support"));
        boolean z = false;
        if (zIsCdmaLteCardType && zEquals && zEquals2) {
            z = true;
        }
        Rlog.d(TAG, "isCdma4gCard : " + zIsCdmaLteCardType + ", isCdmaLteDcSupport : " + zEquals + ", isSupport4gDataOnly : " + zEquals2 + ", isSupportTddDataOnlyCheck return " + z);
        return z;
    }

    private void startService() {
        int[] subId = SubscriptionManager.getSubId(getCdmaSlot());
        Intent intent = new Intent(ACTION_CHECK_PERMISSISON_SERVICE);
        intent.setPackage(CHECK_PERMISSION_SERVICE_PACKAGE);
        if (subId != null) {
            intent.putExtra("subscription", subId[0]);
        }
        Context context = this.mContext;
        if (context != null) {
            context.startService(intent);
        }
    }

    public boolean checkPermission() {
        if (!isSupportTddDataOnlyCheck() || !is4GDataOnly()) {
            return true;
        }
        startService();
        return false;
    }

    public boolean checkPermission(int i) {
        int slotIndex = SubscriptionManager.getSlotIndex(i);
        int i2 = SystemProperties.getInt("persist.vendor.radio.cdma_slot", -1) - 1;
        Rlog.d(TAG, "checkPermission subId=" + i + ", slotId=" + slotIndex + " cdmaSlotId=" + i2);
        if (i2 == slotIndex) {
            return checkPermission();
        }
        return true;
    }
}
