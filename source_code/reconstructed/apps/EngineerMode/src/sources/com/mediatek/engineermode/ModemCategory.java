package com.mediatek.engineermode;

import android.content.Context;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.ITelephony;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;

/* JADX INFO: loaded from: classes2.dex */
public class ModemCategory {
    public static final String FK_CDMA_SLOT = "persist.vendor.radio.cdma_slot";
    public static final String FK_NR_SLOT = "persist.vendor.radio.nrslot";
    public static final String FK_SIM_SWITCH = "persist.vendor.radio.simswitch";
    public static final int MODEM_FDD = 1;
    public static final int MODEM_NO3G = 3;
    public static final int MODEM_TD = 2;
    private static final String[] ModemType = {"none", "FDD", "TDD", "No3G"};
    private static final String[] PROPERTY_RIL_CT3G = {"vendor.gsm.ril.ct3g", "vendor.gsm.ril.ct3g.2", "vendor.gsm.ril.ct3g.3", "vendor.gsm.ril.ct3g.4"};
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    private static final String TAG = "ModemCategory";

    public static boolean CheckViceSimCdmaCapability(int i) {
        int cdmaPhoneId = getCdmaPhoneId();
        Elog.d(TAG, "sCdmaSlotId = " + cdmaPhoneId);
        return i == cdmaPhoneId;
    }

    public static boolean CheckViceSimNRCapability(int i) {
        String str = SystemProperties.get(FK_NR_SLOT, "0");
        if (!RatConfiguration.isNrSupported()) {
            Elog.d(TAG, "project not support NR");
            return false;
        }
        Elog.d(TAG, "sNRSlotId = " + str);
        int i2 = Integer.parseInt(str) - 1;
        if (i2 == -1) {
            Elog.d(TAG, "both sim support NR");
            return true;
        }
        Elog.d(TAG, "sim " + i2 + " support NR");
        return i == i2;
    }

    public static boolean CheckViceSimWCapability(int i) {
        TelephonyManager telephonyManager = TelephonyManager.getDefault();
        ITelephony iTelephonyAsInterface = ITelephony.Stub.asInterface(ServiceManager.getService("phone"));
        if (iTelephonyAsInterface == null || telephonyManager == null || telephonyManager.getSimCount() <= 1) {
            return false;
        }
        try {
            if ((iTelephonyAsInterface.getRadioAccessFamily(i, "engineermode") & 4) > 0) {
                Elog.d(TAG, "SIM has W capability ");
                return true;
            }
        } catch (RemoteException e) {
            Elog.e(TAG, e.getMessage());
        }
        Elog.d(TAG, "SIM has no W capability ");
        return false;
    }

    public static boolean checkViceSimCapability(int i, int i2) {
        TelephonyManager telephonyManager = TelephonyManager.getDefault();
        ITelephony iTelephonyAsInterface = ITelephony.Stub.asInterface(ServiceManager.getService("phone"));
        if (iTelephonyAsInterface == null || telephonyManager == null || telephonyManager.getSimCount() <= 1) {
            return false;
        }
        try {
            if ((iTelephonyAsInterface.getRadioAccessFamily(i, "engineermode") & i2) > 0) {
                Elog.d(TAG, "SIM has checked capability ");
                return true;
            }
        } catch (RemoteException e) {
            Elog.e(TAG, e.getMessage());
        }
        Elog.v(TAG, "SIM has no checked capability ");
        return false;
    }

    public static int getCapabilitySim() {
        int i;
        String str = SystemProperties.get(FK_SIM_SWITCH, "1");
        if ("1".equals(str)) {
            i = 0;
        } else if ("2".equals(str)) {
            i = 1;
        } else {
            if (!"3".equals(str)) {
                Elog.w(TAG, "read phone id error");
                return -1;
            }
            i = 2;
        }
        Elog.v(TAG, "main card phoneid = " + i);
        return i;
    }

    public static String[] getCdmaCmdArr(String[] strArr) {
        return !FeatureSupport.is93Modem() ? strArr : new String[]{strArr[0], strArr[1]};
    }

    public static Phone getCdmaPhone() {
        Phone phone = TAG;
        Phone phone2 = null;
        try {
            if (FeatureSupport.is93Modem()) {
                phone = PhoneFactory.getPhone(getCapabilitySim());
                phone2 = phone;
            } else {
                String str = SystemProperties.get(FK_CDMA_SLOT, "1");
                Elog.d(TAG, "sCdmaSlotId = " + str);
                phone = PhoneFactory.getPhone(Integer.parseInt(str) + (-1));
                phone2 = phone;
            }
        } catch (Exception e) {
            Elog.e(phone, e.getMessage());
        }
        return phone2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getCdmaPhoneId() {
        String str = TAG;
        int i = 0;
        try {
            if (FeatureSupport.is93Modem()) {
                int capabilitySim = getCapabilitySim();
                i = capabilitySim;
                str = capabilitySim;
            } else {
                String str2 = SystemProperties.get(FK_CDMA_SLOT, "1");
                Elog.d(TAG, "sCdmaSlotId = " + str2);
                int i2 = Integer.parseInt(str2) + (-1);
                i = i2;
                str = i2;
            }
        } catch (Exception e) {
            Elog.e(str, e.getMessage());
        }
        return i;
    }

    public static int getModemType() {
        int i = WorldModeUtil.get3GDivisionDuplexMode();
        int i2 = (1 == i || 2 == i) ? i : 3;
        Elog.v(TAG, "mode = " + i2 + "(" + ModemType[i2] + ")");
        return i2;
    }

    public static int getSubIdBySlot(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId != null) {
            for (int i2 = 0; i2 < subId.length; i2++) {
                Elog.v(TAG, "subId[" + i2 + "]: " + subId[i2]);
            }
        }
        if (subId == null || subId.length == 0) {
            Elog.w(TAG, "the subid is empty");
            return -1;
        }
        Elog.v(TAG, "subId = " + subId[0]);
        return subId[0];
    }

    public static String[] getSupportCardType(int i) {
        String[] strArrSplit = null;
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i], "");
                if (!str.equals("") && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                StringBuilder sb = new StringBuilder();
                sb.append("getSupportCardType slotId ");
                sb.append(i);
                sb.append(", prop value= ");
                sb.append(str);
                sb.append(", size= ");
                sb.append(strArrSplit != null ? strArrSplit.length : 0);
                Elog.v(TAG, sb.toString());
                return strArrSplit;
            }
        }
        Elog.e(TAG, "getSupportCardType: invalid slotId " + i);
        return null;
    }

    public static boolean isCapabilitySim(int i) {
        boolean z = i == getCapabilitySim();
        Elog.v(TAG, "The card: " + i + " is main card = " + z);
        return z;
    }

    public static boolean isCdma() {
        return RatConfiguration.isC2kSupported();
    }

    public static boolean isCt3gDualMode(int i) {
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_CT3G;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i], "");
                Elog.v(TAG, "isCt3gDualMode:  " + str);
                return "1".equals(str);
            }
        }
        Elog.e(TAG, "isCt3gDualMode: invalid slotId " + i);
        return false;
    }

    public static boolean isGsmSupport() {
        return RatConfiguration.isGsmSupported();
    }

    public static boolean isLteSupport() {
        return RatConfiguration.isLteFddSupported() || RatConfiguration.isLteTddSupported();
    }

    public static boolean isNrSupport() {
        return RatConfiguration.isNrSupported();
    }

    public static boolean isSimReady(int i) {
        Context context = EmApplication.getContext();
        EmApplication.getContext();
        TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
        int simState = i < 0 ? telephonyManager.getSimState() : telephonyManager.getSimState(i);
        Elog.v(TAG, "slotId = " + i + ",simStatus = " + simState);
        return (simState == 1 || simState == 0) ? false : true;
    }

    public static boolean isTdscdmaSupport() {
        return RatConfiguration.isTdscdmaSupported();
    }

    public static boolean isWcdmaSupport() {
        return RatConfiguration.isWcdmaSupported();
    }
}
