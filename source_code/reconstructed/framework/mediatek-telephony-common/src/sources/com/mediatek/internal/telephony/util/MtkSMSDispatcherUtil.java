package com.mediatek.internal.telephony.util;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Binder;
import android.os.Build;
import android.telephony.Rlog;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.cdma.SmsMessage;
import com.mediatek.internal.telephony.gsm.MtkSmsMessage;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class MtkSMSDispatcherUtil {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    static final String TAG = "MtkSMSDispatcherUtil";

    private MtkSMSDispatcherUtil() {
    }

    public static GsmAlphabet.TextEncodingDetails calculateLength(boolean z, CharSequence charSequence, boolean z2) {
        return z ? calculateLengthCdma(charSequence, z2) : calculateLengthGsm(charSequence, z2);
    }

    public static GsmAlphabet.TextEncodingDetails calculateLengthCdma(CharSequence charSequence, boolean z) {
        return SmsMessage.calculateLength(charSequence, z, false);
    }

    public static GsmAlphabet.TextEncodingDetails calculateLengthGsm(CharSequence charSequence, boolean z) {
        return MtkSmsMessage.calculateLength(charSequence, z);
    }

    private static boolean checkPhoneNumber(char c) {
        return (c >= '0' && c <= '9') || c == '*' || c == '+' || c == '#' || c == 'N' || c == ' ' || c == '-';
    }

    public static boolean checkPhoneNumber(String str) {
        if (str == null) {
            return true;
        }
        Rlog.d(TAG, "checkPhoneNumber");
        int length = str.length();
        for (int i = 0; i < length; i++) {
            if (!checkPhoneNumber(str.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    public static String getPackageNameViaProcessId(Context context, String[] strArr) {
        String str = null;
        int i = 0;
        if (strArr.length == 1) {
            str = strArr[0];
        } else if (strArr.length > 1) {
            int callingPid = Binder.getCallingPid();
            List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses();
            if (runningAppProcesses != null) {
                for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
                    if (callingPid == runningAppProcessInfo.pid) {
                        String[] strArr2 = runningAppProcessInfo.pkgList;
                        int length = strArr2.length;
                        int i2 = i;
                        while (i2 < length) {
                            String str2 = strArr2[i2];
                            int length2 = strArr.length;
                            for (int i3 = i; i3 < length2; i3++) {
                                String str3 = strArr[i3];
                                if (str3.equals(str2)) {
                                    str = str3;
                                    break;
                                }
                            }
                            if (str != null) {
                                break;
                            }
                            i2++;
                            i = 0;
                        }
                        break;
                    }
                    i = 0;
                }
            }
        }
        String str4 = str != null ? str : null;
        if (ENG) {
            Rlog.d(TAG, "getPackageNameViaProcessId: " + str4);
        }
        return str4;
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, int i, int i2, byte[] bArr, boolean z2) {
        if (z) {
            return null;
        }
        return getSubmitPduGsm(str, str2, i, i2, bArr, z2);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, int i, byte[] bArr, boolean z2) {
        return z ? getSubmitPduCdma(str, str2, i, bArr, z2) : getSubmitPduGsm(str, str2, i, bArr, z2);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, String str3, boolean z2, SmsHeader smsHeader) {
        return z ? getSubmitPduCdma(str, str2, str3, z2, smsHeader) : getSubmitPduGsm(str, str2, str3, z2);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, String str3, boolean z2, SmsHeader smsHeader, int i, int i2) {
        return z ? getSubmitPduCdma(str, str2, str3, z2, smsHeader, i) : getSubmitPduGsm(str, str2, str3, z2, i2);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, String str3, boolean z2, byte[] bArr, int i, int i2, int i3, int i4) {
        if (z) {
            return null;
        }
        return getSubmitPduGsm(str, str2, str3, z2, bArr, i, i2, i3, i4);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, byte[] bArr, byte[] bArr2, boolean z2) {
        if (z) {
            return null;
        }
        return MtkSmsMessage.getSubmitPdu(str, str2, bArr, bArr2, z2);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduCdma(String str, String str2, int i, byte[] bArr, boolean z) {
        return SmsMessage.getSubmitPdu(str, str2, i, bArr, z);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduCdma(String str, String str2, String str3, boolean z, SmsHeader smsHeader) {
        return SmsMessage.getSubmitPdu(str, str2, str3, z, smsHeader);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduCdma(String str, String str2, String str3, boolean z, SmsHeader smsHeader, int i) {
        return SmsMessage.getSubmitPdu(str, str2, str3, z, smsHeader, i);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, int i, int i2, byte[] bArr, boolean z) {
        return MtkSmsMessage.getSubmitPdu(str, str2, i, i2, bArr, z);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, int i, byte[] bArr, boolean z) {
        return MtkSmsMessage.getSubmitPdu(str, str2, i, bArr, z);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, String str3, boolean z) {
        return MtkSmsMessage.getSubmitPdu(str, str2, str3, z);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, String str3, boolean z, int i) {
        return MtkSmsMessage.getSubmitPdu(str, str2, str3, z, i);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, String str3, boolean z, byte[] bArr, int i, int i2, int i3, int i4) {
        return MtkSmsMessage.getSubmitPdu(str, str2, str3, z, bArr, i, i2, i3, i4);
    }

    public static SmsMessageBase.SubmitPduBase getSubmitPduGsm(String str, String str2, byte[] bArr, byte[] bArr2, boolean z) {
        return MtkSmsMessage.getSubmitPdu(str, str2, bArr, bArr2, z);
    }
}
