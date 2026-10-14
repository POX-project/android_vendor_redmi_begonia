package com.mediatek.engineermode.dm;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.SystemProperties;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;

/* JADX INFO: loaded from: classes2.dex */
public class DmSettingController {
    private static final String DM_SETTGIN_PREF_LOG_ENABLED = "dm_setting_log_enabled";
    private static final String DM_SETTGIN_PREF_LOG_PKM_ENABLED = "dm_setting_log_pkm_enabled";
    private static final String DM_SETTING_PREF_NAME = "dm_setting";
    private static final String[] PROPERTY_M_LOG_TAG_DMC = {"persist.log.tag.DMC-Core", "persist.log.tag.DMC-TranslatorLoader", "persist.log.tag.DMC-TranslatorUtils", "persist.log.tag.DMC-ReqQManager", "persist.log.tag.DMC-DmcService", "persist.log.tag.DMC-ApmService", "persist.log.tag.DMC-SessionManager", "persist.log.tag.DMC-EventsSubscriber", "persist.log.tag.LCM-Subscriber", "persist.log.tag.APM-Subscriber", "persist.log.tag.MDM-Subscriber", "persist.log.tag.APM-SessionJ", "persist.log.tag.APM-SessionN", "persist.log.tag.APM-ServiceJ", "persist.log.tag.APM-KpiMonitor"};
    private static final String[] PROPERTY_M_LOG_TAG_MAPI = {"persist.log.tag.MAPI-TranslatorManager", "persist.log.tag.MAPI-MdiRedirectorCtrl", "persist.log.tag.MAPI-MdiRedirector", "persist.log.tag.MAPI-NetworkSocketConnection", "persist.log.tag.MAPI-SocketConnection", "persist.log.tag.MAPI-SocketListener", "persist.log.tag.MAPI-CommandProcessor"};
    private static final String[] PROPERTY_M_LOG_TAG_MDMI = {"persist.log.tag.MDMI-TranslatorManager", "persist.log.tag.MDMI-MdmiRedirectorCtrl", "persist.log.tag.MDMI-MdmiRedirector", "persist.log.tag.MDMI-Permission", "persist.log.tag.MDMI-CoreSession", "persist.log.tag.MDMI-NetworkSocketConnection", "persist.log.tag.MDMI-SocketConnection", "persist.log.tag.MDMI-SocketListener", "persist.log.tag.MDMI-CommandProcessor", "persist.log.tag.MDMI-Provider"};
    private static final String[] PROPERTY_M_LOG_TAG_PKM = {"persist.log.tag.PKM-MDM", "persist.log.tag.PKM-Lib", "persist.log.tag.PKM-Monitor", "persist.log.tag.PKM-SA", "persist.log.tag.PKM-Service"};
    private static final String PROP_DMC_APM_ACTIVE = "vendor.dmc.apm.active";
    private static final String PROP_DMC_FO_SYSTEM = "ro.vendor.system.mtk_dmc_support";
    private static final String PROP_DMC_FO_VENDOR = "ro.vendor.mtk_dmc_support";
    private static final String PROP_LOG_MUCH = "persist.vendor.logmuch";
    private static final String PROP_MAPI_FO_SYSTEM = "ro.vendor.system.mtk_mapi_support";
    private static final String PROP_MAPI_FO_VENDOR = "ro.vendor.mtk_mapi_support";
    private static final String PROP_MDMI_FO_SYSTEM = "ro.vendor.system.mtk_mdmi_support";
    private static final String PROP_MDMI_FO_VENDOR = "ro.vendor.mtk_mdmi_support";
    static final String TAG = "DmSettingController";
    private static final int TIMEOUT_PERIOD = 5000;
    private static final String VALUE_DISABLE = "0";
    private static final String VALUE_ENABLE = "1";
    private static final String VALUE_FALSE = "false";
    private static final String VALUE_TRUE = "true";
    private static final int WAIT_TIME = 300;
    private Context mContext;

    private DmSettingController() {
    }

    public DmSettingController(Context context) {
        this.mContext = context;
        if (isDmLogEnabled()) {
            enableDmLog(true);
        } else {
            enableDmLog(false);
        }
        if (isPkmLogEnabled()) {
            enablePkmLog(true);
        } else {
            enablePkmLog(false);
        }
    }

    public static boolean isDmcApmActivated() {
        return "1".equals(SystemProperties.get(PROP_DMC_APM_ACTIVE));
    }

    public static boolean isDmcSystemEnabled() {
        return "1".equals(SystemProperties.get(PROP_DMC_FO_SYSTEM));
    }

    public static boolean isDmcVendorEnabled() {
        return "1".equals(SystemProperties.get(PROP_DMC_FO_VENDOR));
    }

    public static boolean isMapiSystemEnabled() {
        return "1".equals(SystemProperties.get(PROP_MAPI_FO_SYSTEM));
    }

    public static boolean isMapiVendorEnabled() {
        return "1".equals(SystemProperties.get(PROP_MAPI_FO_VENDOR));
    }

    public static boolean isMdmiSystemEnabled() {
        return "1".equals(SystemProperties.get(PROP_MDMI_FO_SYSTEM));
    }

    public static boolean isMdmiVendorEnabled() {
        return "1".equals(SystemProperties.get(PROP_MDMI_FO_VENDOR));
    }

    private void updateDebugLog(boolean z) {
        int i = 0;
        if (z) {
            for (String str : PROPERTY_M_LOG_TAG_DMC) {
                SystemProperties.set(str, "D");
            }
            for (String str2 : PROPERTY_M_LOG_TAG_MDMI) {
                SystemProperties.set(str2, "D");
            }
            String[] strArr = PROPERTY_M_LOG_TAG_MAPI;
            int length = strArr.length;
            while (i < length) {
                SystemProperties.set(strArr[i], "D");
                i++;
            }
            return;
        }
        for (String str3 : PROPERTY_M_LOG_TAG_DMC) {
            SystemProperties.set(str3, "I");
        }
        for (String str4 : PROPERTY_M_LOG_TAG_MDMI) {
            SystemProperties.set(str4, "I");
        }
        String[] strArr2 = PROPERTY_M_LOG_TAG_MAPI;
        int length2 = strArr2.length;
        while (i < length2) {
            SystemProperties.set(strArr2[i], "I");
            i++;
        }
    }

    boolean activeApm(boolean z) {
        Elog.i(TAG, "activeApm(" + z + ")");
        String str = z ? "1" : "0";
        boolean z2 = false;
        try {
            EmUtils.getEmHidlService().setEmConfigure(PROP_DMC_APM_ACTIVE, str);
            int i = 0;
            while (i < TIMEOUT_PERIOD) {
                try {
                    Thread.sleep(300L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                i += 300;
                if (str.equals(SystemProperties.get(PROP_DMC_APM_ACTIVE))) {
                    Elog.i(TAG, "set success:" + SystemProperties.get(PROP_DMC_APM_ACTIVE));
                    z2 = true;
                    break;
                }
            }
            if (z2) {
                return true;
            }
            Elog.i(TAG, "set vendor.dmc.apm.active to " + str + " failed!");
            return false;
        } catch (Exception e2) {
            e2.printStackTrace();
            Elog.i(TAG, "set vendor.dmc.apm.active to " + str + " failed!");
            return false;
        }
    }

    boolean enableDmLog(boolean z) {
        Elog.i(TAG, "enableDmLog(" + z + ")");
        String str = z ? VALUE_FALSE : VALUE_TRUE;
        boolean z2 = false;
        SystemProperties.set(PROP_LOG_MUCH, str);
        int i = 0;
        while (i < TIMEOUT_PERIOD) {
            try {
                Thread.sleep(300L);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i += 300;
            if (str.equals(SystemProperties.get(PROP_LOG_MUCH))) {
                Elog.i(TAG, "set success:" + SystemProperties.get(PROP_LOG_MUCH));
                z2 = true;
                break;
            }
        }
        if (z2) {
            updateDebugLog(z);
            SharedPreferences.Editor editorEdit = this.mContext.getSharedPreferences(DM_SETTING_PREF_NAME, 0).edit();
            editorEdit.putBoolean(DM_SETTGIN_PREF_LOG_ENABLED, z);
            editorEdit.commit();
            return true;
        }
        Elog.i(TAG, "set persist.vendor.logmuch to " + str + " failed!");
        return false;
    }

    boolean enablePkmLog(boolean z) {
        Elog.i(TAG, "enablePkmLog(" + z + ")");
        if (z) {
            for (String str : PROPERTY_M_LOG_TAG_PKM) {
                SystemProperties.set(str, "D");
            }
        } else {
            for (String str2 : PROPERTY_M_LOG_TAG_PKM) {
                SystemProperties.set(str2, "I");
            }
        }
        SharedPreferences.Editor editorEdit = this.mContext.getSharedPreferences(DM_SETTING_PREF_NAME, 0).edit();
        editorEdit.putBoolean(DM_SETTGIN_PREF_LOG_PKM_ENABLED, z);
        editorEdit.commit();
        return true;
    }

    boolean isDmLogEnabled() {
        return this.mContext.getSharedPreferences(DM_SETTING_PREF_NAME, 0).getBoolean(DM_SETTGIN_PREF_LOG_ENABLED, false);
    }

    boolean isPkmLogEnabled() {
        return this.mContext.getSharedPreferences(DM_SETTING_PREF_NAME, 0).getBoolean(DM_SETTGIN_PREF_LOG_PKM_ENABLED, false);
    }
}
