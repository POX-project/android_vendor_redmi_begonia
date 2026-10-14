package com.mediatek.internal.telephony;

import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.text.TextUtils;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public class MtkPhoneNumberUtils {
    private static final String CLIR_OFF = "#31#";
    private static final String CLIR_ON = "*31#";
    public static final int FORMAT_JAPAN = 2;
    public static final int FORMAT_NANP = 1;
    public static final int FORMAT_UNKNOWN = 0;
    static final String LOG_TAG = "MtkPhoneNumberUtils";
    public static final char PAUSE = ',';
    private static final char PLUS_SIGN_CHAR = '+';
    private static final String PLUS_SIGN_STRING = "+";
    private static final String SC_CFB = "67";
    private static final String SC_CFNR = "62";
    private static final String SC_CFNRy = "61";
    private static final String SC_CFU = "21";
    private static final String SC_CF_All = "002";
    private static final String SC_CF_All_Conditional = "004";
    public static final int TOA_International = 145;
    public static final int TOA_Unknown = 129;
    private static final boolean VDBG = false;
    public static final char WAIT = ';';
    public static final char WILD = 'N';
    private static final String[] NANP_COUNTRIES = {"US", "CA", "AS", "AI", "AG", "BS", "BB", "BM", "VG", "KY", "DM", "DO", "GD", "GU", "JM", "PR", "MS", "MP", "KN", "LC", "VC", "TT", "TC", "VI"};
    private static final String[] CF_HEADERS = {"*72", "*720", "*90", "*900", "*92", "*920", "*68", "*680", "*730"};

    public static String calledPartyBCDFragmentToString(byte[] bArr, int i, int i2) {
        return PhoneNumberUtils.calledPartyBCDFragmentToString(bArr, i, i2);
    }

    public static String calledPartyBCDToString(byte[] bArr, int i, int i2) {
        return PhoneNumberUtils.calledPartyBCDToString(bArr, i, i2);
    }

    public static String convertPreDial(String str) {
        return PhoneNumberUtils.convertPreDial(str);
    }

    private static void dlog(String str) {
        Rlog.d(LOG_TAG, str);
    }

    public static String extractCLIRPortion(String str) {
        String strGroup;
        if (str == null) {
            return null;
        }
        Matcher matcher = Pattern.compile("^([*][#]|[*]{1,2}|[#]{1,2})([0-9]{2,3})([*])([+]?[0-9]+)(.*)(#)$").matcher(str);
        if (matcher.matches()) {
            return matcher.group(4);
        }
        if (str.startsWith(CLIR_ON) || str.startsWith(CLIR_OFF)) {
            vlog(str + " Start with *31# or #31#, return " + str.substring(4));
            return str.substring(4);
        }
        if (str.indexOf(PLUS_SIGN_STRING) != -1 && str.indexOf(PLUS_SIGN_STRING) == str.lastIndexOf(PLUS_SIGN_STRING)) {
            Matcher matcher2 = Pattern.compile("(^[#*])(.*)([#*])(.*)(#)$").matcher(str);
            if (!matcher2.matches()) {
                Matcher matcher3 = Pattern.compile("(^[#*])(.*)([#*])(.*)").matcher(str);
                if (matcher3.matches() && (strGroup = matcher3.group(4)) != null && strGroup.length() > 1 && strGroup.charAt(0) == '+') {
                    vlog(str + " matcher pattern2, return " + strGroup);
                    return strGroup;
                }
            } else {
                if ("".equals(matcher2.group(2))) {
                    vlog(str + " matcher pattern1, return empty string.");
                    return "";
                }
                String strGroup2 = matcher2.group(4);
                if (strGroup2 != null && strGroup2.length() > 1 && strGroup2.charAt(0) == '+') {
                    vlog(str + " matcher pattern1, return " + strGroup2);
                    return strGroup2;
                }
            }
        }
        return str;
    }

    public static String extractNetworkPortion(String str) {
        return PhoneNumberUtils.extractNetworkPortion(str);
    }

    public static boolean isCallForwardCode(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        if (!PhoneNumberUtils.isUriNumber(str)) {
            PhoneNumberUtils.extractNetworkPortionAlt(PhoneNumberUtils.stripSeparators(str));
        }
        return isGsmCallForwardCode(str) || isCdmaCallForwardCode(str);
    }

    private static boolean isCdmaCallForwardCode(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        for (String str2 : CF_HEADERS) {
            if (str.indexOf(str2) == 0) {
                log("[isCdmaCallForwardCode] This is cdma call forward code");
                return true;
            }
        }
        return false;
    }

    public static boolean isEmergencyNumber(int i, String str) {
        return PhoneNumberUtils.isEmergencyNumber(i, str);
    }

    public static boolean isEmergencyNumber(String str) {
        return PhoneNumberUtils.isEmergencyNumber(str);
    }

    private static boolean isGsmCallForwardCode(String str) {
        boolean z = false;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Matcher matcher = Pattern.compile("((\\*|#|\\*#|\\*\\*|##)(\\d{2,3})(\\*([^*#]*)(\\*([^*#]*)(\\*([^*#]*)(\\*([^*#]*))?)?)?)?#)(.*)").matcher(str);
        if (!matcher.matches()) {
            return false;
        }
        String strGroup = matcher.group(3);
        if (strGroup != null && strGroup.length() == 0) {
            strGroup = null;
        }
        if (strGroup != null && (strGroup.equals(SC_CFU) || strGroup.equals(SC_CFB) || strGroup.equals(SC_CFNRy) || strGroup.equals(SC_CFNR) || strGroup.equals(SC_CF_All) || strGroup.equals(SC_CF_All_Conditional))) {
            z = true;
        }
        log("[isGsmCallForwardCode] sc = " + strGroup + "isCf = " + z);
        return z;
    }

    public static boolean isNonSeparator(String str) {
        int length = str.length();
        for (int i = 0; i < length; i++) {
            if (!PhoneNumberUtils.isNonSeparator(str.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    private static void log(String str) {
        Rlog.i(LOG_TAG, str);
    }

    public static byte[] numberToCalledPartyBCD(String str) {
        return PhoneNumberUtils.numberToCalledPartyBCD(str);
    }

    public static String prependPlusToNumber(String str) {
        StringBuilder sb;
        String string = str.toString();
        Matcher matcher = Pattern.compile("^([*][#]|[*]{1,2}|[#]{1,2})([0-9]{2,3})([*])([0-9]+)(.*)(#)$").matcher(string);
        if (matcher.matches()) {
            sb = new StringBuilder();
            sb.append(matcher.group(1));
            sb.append(matcher.group(2));
            sb.append(matcher.group(3));
            sb.append(PLUS_SIGN_STRING);
            sb.append(matcher.group(4));
            sb.append(matcher.group(5));
            sb.append(matcher.group(6));
        } else {
            Matcher matcher2 = Pattern.compile("(^[#*])(.*)([#*])(.*)(#)$").matcher(string);
            if (!matcher2.matches()) {
                Matcher matcher3 = Pattern.compile("(^[#*])(.*)([#*])(.*)").matcher(string);
                if (matcher3.matches()) {
                    sb = new StringBuilder();
                    sb.append(matcher3.group(1));
                    sb.append(matcher3.group(2));
                    sb.append(matcher3.group(3));
                    sb.append(PLUS_SIGN_STRING);
                    sb.append(matcher3.group(4));
                } else {
                    sb = new StringBuilder();
                    sb.append(PLUS_SIGN_CHAR);
                    sb.append(string);
                }
            } else if ("".equals(matcher2.group(2))) {
                sb = new StringBuilder();
                sb.append(matcher2.group(1));
                sb.append(matcher2.group(3));
                sb.append(matcher2.group(4));
                sb.append(matcher2.group(5));
                sb.append(PLUS_SIGN_STRING);
            } else {
                sb = new StringBuilder();
                sb.append(matcher2.group(1));
                sb.append(matcher2.group(2));
                sb.append(matcher2.group(3));
                sb.append(PLUS_SIGN_STRING);
                sb.append(matcher2.group(4));
                sb.append(matcher2.group(5));
            }
        }
        return sb.toString();
    }

    public static String stringFromStringAndTOA(String str, int i) {
        return PhoneNumberUtils.stringFromStringAndTOA(str, i);
    }

    public static String stripSeparators(String str) {
        return PhoneNumberUtils.stripSeparators(str);
    }

    private static void vlog(String str) {
    }
}
