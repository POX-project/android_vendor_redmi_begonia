package com.mediatek.engineermode.mcfconfig;

import android.widget.TextView;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes.dex */
public final class FileUtils {
    private static final int DECIMAL_NUMBER = 100;
    private static final double ROUNDING_OFF = 0.005d;
    public static final String SEPARATOR = "/";
    private static final String TAG = "McfConfig/FileUtils";
    public static final String UNIT_B = "B";
    public static final String UNIT_GB = "GB";
    private static final int UNIT_INTERVAL = 1024;
    public static final String UNIT_KB = "KB";
    public static final String UNIT_MB = "MB";
    public static final String UNIT_TB = "TB";

    public static void fadeOutLongString(TextView textView) {
        if (textView == null) {
            Elog.w(TAG, "#adjustWithLongString(),the view is to be set is null");
            return;
        }
        if (!(textView instanceof TextView)) {
            Elog.w(TAG, "#adjustWithLongString(),the view instance is not right,execute failed!");
            return;
        }
        textView.setHorizontalFadingEdgeEnabled(true);
        textView.setSingleLine(true);
        textView.setGravity(3);
        textView.setGravity(16);
    }

    public static String getFileExtension(String str) {
        int iLastIndexOf;
        if (str != null && (iLastIndexOf = str.lastIndexOf(46)) >= 0) {
            return str.substring(iLastIndexOf + 1).toLowerCase();
        }
        return null;
    }

    public static String getFileName(String str) {
        int iLastIndexOf = str.lastIndexOf(SEPARATOR);
        return iLastIndexOf >= 0 ? str.substring(iLastIndexOf + 1) : str;
    }

    public static String getFilePath(String str) {
        int iLastIndexOf = str.lastIndexOf(SEPARATOR);
        return iLastIndexOf >= 0 ? str.substring(0, iLastIndexOf) : "";
    }

    public static boolean isFileExist(String str, String str2) {
        return str.indexOf(str2) >= 0;
    }

    public static String sizeToString(long j) {
        if (j < 0) {
            Elog.d(TAG, "sizeToString(),size = " + j);
            return "0 " + UNIT_B;
        }
        if (j < 100) {
            Elog.d(TAG, "sizeToString(),size = " + j);
            return Long.toString(j) + " " + UNIT_B;
        }
        String str = UNIT_KB;
        double d = j / 1024.0d;
        if (d > 1024.0d) {
            d /= 1024.0d;
            str = UNIT_MB;
        }
        if (d > 1024.0d) {
            d /= 1024.0d;
            str = UNIT_GB;
        }
        if (d > 1024.0d) {
            d /= 1024.0d;
            str = UNIT_TB;
        }
        double d2 = ((long) ((ROUNDING_OFF + d) * 100.0d)) / 100.0d;
        Elog.d(TAG, "sizeToString(): " + d2 + str);
        if (d2 == 0.0d) {
            return "0 " + str;
        }
        return Double.toString(d2) + " " + str;
    }
}
