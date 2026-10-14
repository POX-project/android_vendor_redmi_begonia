package com.mediatek.internal.telephony;

import android.telephony.Rlog;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.uicc.IccUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkIccUtils extends IccUtils {
    static final String MTK_LOG_TAG = "MtkIccUtils";

    public static String parseLanguageIndicator(byte[] bArr, int i, int i2) {
        if (bArr == null) {
            return null;
        }
        if (bArr.length >= i + i2) {
            return GsmAlphabet.gsm8BitUnpackedToString(bArr, i, i2);
        }
        Rlog.e(MTK_LOG_TAG, "length is invalid");
        return null;
    }

    public static String parsePlmnToString(byte[] bArr, int i, int i2) {
        StringBuilder sb = new StringBuilder(i2 * 2);
        int i3 = bArr[i] & 15;
        if (i3 <= 9) {
            sb.append((char) (i3 + 48));
            int i4 = (bArr[i] >> 4) & 15;
            if (i4 <= 9) {
                sb.append((char) (i4 + 48));
                int i5 = bArr[i + 1] & 15;
                if (i5 <= 9) {
                    sb.append((char) (i5 + 48));
                    int i6 = bArr[i + 2] & 15;
                    if (i6 <= 9) {
                        sb.append((char) (i6 + 48));
                        int i7 = (bArr[i + 2] >> 4) & 15;
                        if (i7 <= 9) {
                            sb.append((char) (i7 + 48));
                            int i8 = (bArr[i + 1] >> 4) & 15;
                            if (i8 <= 9) {
                                sb.append((char) (i8 + 48));
                            }
                        }
                    }
                }
            }
        }
        return sb.toString();
    }

    public static String parsePlmnToStringForEfOpl(byte[] bArr, int i, int i2) {
        StringBuilder sb = new StringBuilder(i2 * 2);
        int i3 = bArr[i] & 15;
        if (i3 < 0 || i3 > 9) {
            if (i3 == 13) {
                sb.append('d');
            }
            return sb.toString();
        }
        sb.append((char) (i3 + 48));
        int i4 = (bArr[i] >> 4) & 15;
        if (i4 < 0 || i4 > 9) {
            if (i4 == 13) {
                sb.append('d');
            }
            return sb.toString();
        }
        sb.append((char) (i4 + 48));
        int i5 = bArr[i + 1] & 15;
        if (i5 < 0 || i5 > 9) {
            if (i5 == 13) {
                sb.append('d');
            }
            return sb.toString();
        }
        sb.append((char) (i5 + 48));
        int i6 = bArr[i + 2] & 15;
        if (i6 < 0 || i6 > 9) {
            if (i6 == 13) {
                sb.append('d');
            }
            return sb.toString();
        }
        sb.append((char) (i6 + 48));
        int i7 = (bArr[i + 2] >> 4) & 15;
        if (i7 < 0 || i7 > 9) {
            if (i7 == 13) {
                sb.append('d');
            }
            return sb.toString();
        }
        sb.append((char) (i7 + 48));
        int i8 = (bArr[i + 1] >> 4) & 15;
        if (i8 >= 0 && i8 <= 9) {
            sb.append((char) (i8 + 48));
        } else if (i8 == 13) {
            sb.append('d');
        }
        return sb.toString();
    }
}
