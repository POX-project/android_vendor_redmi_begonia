package com.mediatek.ims.config.internal;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.telephony.CarrierConfigManager;
import android.text.TextUtils;
import android.util.Log;
import com.android.ims.ImsManager;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsConstants;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigUtils {
    private static final String ACTION_WIFI_ONLY_MODE_CHANGED = "android.intent.action.ACTION_WIFI_ONLY_MODE";
    private static final boolean DEBUG;
    private static final String EXTRA_WIFI_ONLY_MODE_CHANGED = "state";
    public static final String PROPERTY_IMS_SUPPORT = "persist.vendor.ims_support";
    public static final String PROPERTY_IMS_VIDEO_ENALBE = "persist.vendor.mtk.ims.video.enable";
    public static final String PROPERTY_VILTE_ENALBE = "persist.vendor.mtk.vilte.enable";
    public static final String PROPERTY_VIWIFI_ENALBE = "persist.vendor.mtk.viwifi.enable";
    public static final String PROPERTY_VOLTE_ENALBE = "persist.vendor.mtk.volte.enable";
    public static final String PROPERTY_WFC_ENALBE = "persist.vendor.mtk.wfc.enable";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigUtils";
    private static final boolean TELDBG;

    public static class MdConfigType {
        public static final int TYPE_IMSCFG = 0;
        public static final int TYPE_IMSIWLANCFG = 2;
        public static final int TYPE_IMSWOCFG = 1;
        public static final int TYPE_UNKNOWN = -1;
    }

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public static String arrayToString(Object[] objArr) {
        int length = objArr.length - 1;
        if (objArr == null || length == -1) {
            return "null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append('\"');
        int i = 0;
        while (true) {
            sb.append(String.valueOf(objArr[i]));
            if (i == length) {
                sb.append('\"');
                return sb.toString();
            }
            sb.append("\",\"");
            i++;
        }
    }

    private static boolean checkIsPhoneIdValid(int i) {
        if (ImsCommonUtil.supportMims()) {
            if (i <= 3 && i >= 0) {
                return true;
            }
            if (DEBUG) {
                Log.d(TAG, "Multi IMS support but phone id invalid, phoneId:" + i);
            }
            return false;
        }
        if (i <= 3 && i >= 0) {
            return true;
        }
        if (DEBUG) {
            Log.d(TAG, "Mutli IMS not support and phone id invalid, phoneId:" + i);
        }
        return false;
    }

    public static boolean getBooleanCarrierConfig(Context context, String str, int i) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) context.getSystemService("carrier_config");
        int subIdUsingPhoneId = SubscriptionManagerHelper.getSubIdUsingPhoneId(i);
        if (TELDBG) {
            Log.d(TAG, "getBooleanCarrierConfig: phoneId=" + i + " subId=" + subIdUsingPhoneId);
        }
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(subIdUsingPhoneId) : null;
        return configForSubId != null ? configForSubId.getBoolean(str) : CarrierConfigManager.getDefaultConfig().getBoolean(str);
    }

    public static int getFeaturePropValue(String str, int i) {
        int i2;
        int i3 = SystemProperties.getInt(str, 0);
        if (!checkIsPhoneIdValid(i)) {
            if (DEBUG) {
                Log.d(TAG, "Multi IMS getFeaturePropValue():" + str + ", phoneId invalid return default value");
            }
            return 0;
        }
        if (ImsCommonUtil.supportMims()) {
            i2 = ((1 << i) & i3) > 0 ? 1 : 0;
        } else {
            i2 = (i3 & 1) > 0 ? 1 : 0;
        }
        if (DEBUG) {
            Log.d(TAG, "Multi IMS getFeaturePropValue() featureValue:" + i3 + ", propName:" + str + ", propResult:" + i2);
        }
        return i2;
    }

    public static int getIntCarrierConfig(Context context, String str, int i) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) context.getSystemService("carrier_config");
        int subIdUsingPhoneId = SubscriptionManagerHelper.getSubIdUsingPhoneId(i);
        if (DEBUG) {
            Log.d(TAG, "getIntCarrierConfig: phoneId=" + i + " subId=" + subIdUsingPhoneId);
        }
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(subIdUsingPhoneId) : null;
        return configForSubId != null ? configForSubId.getInt(str) : CarrierConfigManager.getDefaultConfig().getInt(str);
    }

    public static int getWfcMode(Context context, int i) {
        return ImsCommonUtil.supportMims() ? ImsManager.getInstance(context, i).getWfcMode() : ImsManager.getWfcMode(context);
    }

    public static boolean isWfcEnabledByUser(Context context, int i) {
        return ImsCommonUtil.supportMims() ? ImsManager.getInstance(context, i).isWfcEnabledByUser() : ImsManager.isWfcEnabledByUser(context);
    }

    public static void sendWifiOnlyModeIntent(Context context, int i, boolean z) {
        if (ImsCommonUtil.supportMims() || ImsCommonUtil.getMainCapabilityPhoneId() == i) {
            Intent intent = new Intent(ACTION_WIFI_ONLY_MODE_CHANGED);
            intent.setPackage(ImsConstants.PACKAGE_NAME_PHONE);
            intent.putExtra(EXTRA_WIFI_ONLY_MODE_CHANGED, z);
            if (ImsCommonUtil.supportMims()) {
                intent.putExtra("phone", i);
            }
            if (TELDBG) {
                Log.d(TAG, "sendWifiOnlyModeIntent() intent, mode:" + z + ", phoneId:" + i);
            }
            context.sendBroadcast(intent);
        }
    }

    private static int setBitForPhone(int i, int i2, int i3) {
        return i2 == 1 ? (1 << i3) | i : (~(1 << i3)) & i;
    }

    public static void setFeaturePropValue(String str, String str2, int i) {
        int i2 = SystemProperties.getInt(str, 0);
        if (!checkIsPhoneIdValid(i)) {
            if (DEBUG) {
                Log.d(TAG, "Multi IMS setFeaturePropValue():" + str + ", phoneId invalid don't set and return");
                return;
            }
            return;
        }
        int i3 = Integer.parseInt(str2);
        int bitForPhone = ImsCommonUtil.supportMims() ? setBitForPhone(i2, i3, i) : setBitForPhone(i2, i3, 0);
        SystemProperties.set(str, Integer.toString(bitForPhone));
        if (DEBUG) {
            Log.d(TAG, "Multi IMS setFeaturePropValue() featureValue:" + i2 + ", propName:" + str + ", sumFeatureValue:" + bitForPhone + ", enabledValue:" + i3);
        }
    }

    public static void triggerSendCfg(Context context, ImsCommandsInterface imsCommandsInterface, int i) {
        int[] iArr = new int[6];
        int i2 = getBooleanCarrierConfig(context, "carrier_allow_turnoff_ims_bool", i) ? 1 : 0;
        iArr[0] = getFeaturePropValue(PROPERTY_VOLTE_ENALBE, i);
        iArr[1] = getFeaturePropValue(PROPERTY_VILTE_ENALBE, i);
        iArr[2] = getFeaturePropValue(PROPERTY_WFC_ENALBE, i);
        iArr[3] = getFeaturePropValue(PROPERTY_VIWIFI_ENALBE, i);
        iArr[4] = SystemProperties.getInt(PROPERTY_IMS_SUPPORT, 0);
        iArr[5] = iArr[0] | iArr[1] | iArr[2] | iArr[3] | iArr[4] | (i2 ^ 1);
        Log.i(TAG, "After 93, send EIMS feature value volte:" + iArr[0] + ", vilte:" + iArr[1] + ", vowifi:" + iArr[2] + ", viwifi:" + iArr[3] + ", sms:" + iArr[4] + ", isAllowTurnOff:" + i2 + ", eims:" + iArr[5] + ", phoneId:" + i);
        imsCommandsInterface.setImsCfg(iArr, i, null);
    }

    public static void triggerSendCfgForVolte(Context context, ImsCommandsInterface imsCommandsInterface, int i, int i2) {
        int[] iArr = new int[6];
        int i3 = getBooleanCarrierConfig(context, "carrier_allow_turnoff_ims_bool", i) ? 1 : 0;
        iArr[0] = i2;
        iArr[1] = getFeaturePropValue(PROPERTY_VILTE_ENALBE, i);
        iArr[2] = getFeaturePropValue(PROPERTY_WFC_ENALBE, i);
        iArr[3] = getFeaturePropValue(PROPERTY_VIWIFI_ENALBE, i);
        iArr[4] = SystemProperties.getInt(PROPERTY_IMS_SUPPORT, 0);
        iArr[5] = iArr[0] | iArr[1] | iArr[2] | iArr[3] | iArr[4] | (i3 ^ 1);
        Log.i(TAG, "After 93, send EIMS feature value volte:" + iArr[0] + ", vilte:" + iArr[1] + ", vowifi:" + iArr[2] + ", viwifi:" + iArr[3] + ", sms:" + iArr[4] + ", isAllowTurnOff:" + i3 + ", eims:" + iArr[5] + ", phoneId:" + i);
        imsCommandsInterface.setImsCfg(iArr, i, null);
    }
}
