package com.mediatek.ygps;

import android.os.SystemProperties;
import android.util.Log;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class GpsMnlSetting {
    private static final String HIDDEN_PROP_VALUE;
    private static ArrayList<String> sKeyList;
    private static boolean sLogHidden;

    static {
        String str = SystemProperties.get("ro.vendor.mtk_log_hide_gps");
        HIDDEN_PROP_VALUE = str;
        sLogHidden = "1".equals(str) || "2".equals(HIDDEN_PROP_VALUE);
    }

    static String getChipVersion(String str) {
        String str2 = SystemProperties.get("vendor.gps.gps.version");
        return (str2 == null || str2.isEmpty()) ? str : str2;
    }

    static String getClockProp(String str) {
        String str2 = SystemProperties.get("vendor.gps.clock.type");
        return (str2 == null || str2.isEmpty()) ? str : str2;
    }

    static String getMnlProp(String str, String str2) {
        String str3 = SystemProperties.get("persist.vendor.radio.mnl.prop");
        if (sKeyList == null) {
            initList();
        }
        int iIndexOf = sKeyList.indexOf(str);
        Log.i("YGPS/MnlSetting", "getMnlProp: " + str3);
        if (str3 != null && !str3.isEmpty() && -1 != iIndexOf && iIndexOf < str3.length()) {
            str2 = String.valueOf(str3.charAt(iIndexOf));
        }
        Log.i("YGPS/MnlSetting", "getMnlProp result: " + str2);
        return str2;
    }

    private static void initList() {
        ArrayList<String> arrayList = new ArrayList<>();
        sKeyList = arrayList;
        arrayList.add("debug.dbg2socket");
        sKeyList.add("debug.nmea2socket");
        sKeyList.add("debug.dbg2file");
        sKeyList.add("debug.debug_nmea");
        sKeyList.add("BEE_enabled");
        sKeyList.add("test.mode");
        sKeyList.add("gpslog_enabled");
        sKeyList.add("gps.epo");
    }

    static boolean isLogHidden() {
        Log.i("YGPS/MnlSetting", "sLogHidden: " + sLogHidden);
        return sLogHidden;
    }

    static void setMnlProp(MnldConn mnldConn, String str, String str2) {
        Log.i("YGPS/MnlSetting", "setMnlProp: " + str + " " + str2);
        String str3 = SystemProperties.get("persist.vendor.radio.mnl.prop");
        if (sKeyList == null) {
            initList();
        }
        int iIndexOf = sKeyList.indexOf(str);
        if (iIndexOf != -1) {
            if (str3 == null || str3.isEmpty()) {
                str3 = "00000001";
            }
            if (str3.length() > iIndexOf) {
                char[] charArray = str3.toCharArray();
                charArray[iIndexOf] = str2.charAt(0);
                String strValueOf = String.valueOf(charArray);
                mnldConn.setMnldProp(strValueOf);
                Log.i("YGPS/MnlSetting", "setMnlProp newProp: " + strValueOf);
            }
        }
    }
}
