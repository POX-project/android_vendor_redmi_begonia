package com.mediatek.xcap.header;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public final class HeaderParser {
    private static final String TAG = "XcapHeaderParser";

    private HeaderParser() {
    }

    public static String getQuoteString(String str, String str2, int i) {
        int iSkipUntil = skipUntil(str, i, "\"") + 1;
        int iSkipUntil2 = skipUntil(str, iSkipUntil + 1, "\"");
        Log.i(TAG, iSkipUntil + "/" + iSkipUntil2 + "/" + str.length());
        if (iSkipUntil2 > str.length()) {
            return "";
        }
        String strSubstring = str.substring(iSkipUntil, iSkipUntil2);
        Log.i(TAG, str2 + ":" + strSubstring);
        return strSubstring;
    }

    public static int parseSeconds(String str) {
        try {
            long j = Long.parseLong(str);
            if (j > 2147483647L) {
                return Integer.MAX_VALUE;
            }
            if (j < 0) {
                return 0;
            }
            return (int) j;
        } catch (NumberFormatException e) {
            return -1;
        }
    }

    public static int skipUntil(String str, int i, String str2) {
        while (i < str.length() && str2.indexOf(str.charAt(i)) == -1) {
            i++;
        }
        return i;
    }

    public static int skipWhitespace(String str, int i) {
        char cCharAt;
        while (i < str.length() && ((cCharAt = str.charAt(i)) == ' ' || cCharAt == '\t')) {
            i++;
        }
        return i;
    }
}
