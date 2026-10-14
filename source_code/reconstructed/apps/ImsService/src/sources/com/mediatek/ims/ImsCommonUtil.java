package com.mediatek.ims;

import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.mediatek.ims.config.internal.ImsConfigUtils;

/* JADX INFO: loaded from: classes.dex */
public class ImsCommonUtil {
    public static final boolean ENGLOAD = "eng".equals(Build.TYPE);
    private static final String LOG_TAG = "ImsCommonUtil";

    public static String bytesToHex(byte[] bArr) {
        char[] charArray = "0123456789abcdef".toCharArray();
        char[] cArr = new char[bArr.length * 2];
        for (int i = 0; i < bArr.length; i++) {
            int i2 = bArr[i] & 255;
            cArr[i * 2] = charArray[i2 >>> 4];
            cArr[(i * 2) + 1] = charArray[i2 & 15];
        }
        return new String(cArr);
    }

    public static int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            i = -1;
        }
        if (ENGLOAD) {
            Rlog.d(LOG_TAG, "getMainCapabilityPhoneId = " + i);
        }
        return i;
    }

    public static int getMainPhoneIdForSingleIms() {
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        Rlog.d(LOG_TAG, "[getMainPhoneIdForSingleIms] : " + i);
        return i;
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

    public static byte[] hexToBytes(String str) {
        if (str == null) {
            return null;
        }
        int length = str.length();
        Rlog.d(LOG_TAG, "hexToBytes: inputLen = " + length);
        byte[] bArr = new byte[length / 2];
        int[] iArr = new int[2];
        for (int i = 0; i < length / 2; i++) {
            iArr[0] = str.charAt(i * 2);
            iArr[1] = str.charAt((i * 2) + 1);
            for (int i2 = 0; i2 < 2; i2++) {
                if (iArr[i2] >= 65 && iArr[i2] <= 70) {
                    iArr[i2] = (iArr[i2] - 65) + 10;
                } else if (iArr[i2] >= 97 && iArr[i2] <= 102) {
                    iArr[i2] = (iArr[i2] - 97) + 10;
                } else {
                    if (iArr[i2] < 48 || iArr[i2] > 57) {
                        return null;
                    }
                    iArr[i2] = iArr[i2] - 48;
                }
            }
            bArr[i] = (byte) (iArr[0] << 4);
            bArr[i] = (byte) (bArr[i] | iArr[1]);
        }
        return bArr;
    }

    public static boolean isDssNoResetSupport() {
        if (SystemProperties.get("vendor.ril.simswitch.no_reset_support").equals("1")) {
            if (!ENGLOAD) {
                return true;
            }
            Rlog.d(LOG_TAG, "return true for isDssNoResetSupport");
            return true;
        }
        if (!ENGLOAD) {
            return false;
        }
        Rlog.d(LOG_TAG, "return false for isDssNoResetSupport");
        return false;
    }

    public static boolean isPhoneIdSupportIms(int i) {
        int i2 = SystemProperties.getInt(ImsConfigUtils.PROPERTY_IMS_SUPPORT, 0);
        int i3 = SystemProperties.getInt("persist.vendor.mims_support", 1);
        if (i2 == 0 || !SubscriptionManager.isValidPhoneId(i)) {
            Rlog.d(LOG_TAG, "isPhoneIdSupportIms(), not support IMS, phoneId:" + i);
            return false;
        }
        if (i3 == 1) {
            return getMainCapabilityPhoneId() == i;
        }
        int protocolStackId = getProtocolStackId(i);
        if (protocolStackId <= i3) {
            return true;
        }
        Rlog.d(LOG_TAG, "isPhoneIdSupportIms(), mimsCount:" + i3 + ", phoneId:" + i + ", protocalStackId:" + protocolStackId + ", MainCapabilityPhoneId:" + getMainCapabilityPhoneId());
        return false;
    }

    public static boolean supportMdAutoSetupIms() {
        return SystemProperties.get(ImsConstants.SYS_PROP_MD_AUTO_SETUP_IMS).equals("1");
    }

    public static boolean supportMims() {
        return SystemProperties.getInt("persist.vendor.mims_support", 1) > 1;
    }
}
