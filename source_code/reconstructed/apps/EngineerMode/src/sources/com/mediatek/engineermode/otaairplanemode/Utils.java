package com.mediatek.engineermode.otaairplanemode;

/* JADX INFO: loaded from: classes3.dex */
public class Utils {
    private static final String TAG = "MDMLUtils";

    public static boolean getBoolFromByte(byte[] bArr) {
        return getIntFromByte(bArr, 0, bArr.length) == 1;
    }

    public static long getIntFromByte(byte[] bArr) {
        if (bArr == null || bArr.length <= 0) {
            return 0L;
        }
        return getIntFromByte(bArr, 0, bArr.length);
    }

    public static long getIntFromByte(byte[] bArr, int i, int i2) {
        long j = 0;
        if (i + i2 > bArr.length) {
            return -1L;
        }
        for (int i3 = i2 - 1; i3 >= 0; i3--) {
            j += (long) (bArr[i + i3] & 255);
            if (i3 != 0) {
                j <<= 8;
            }
        }
        return j;
    }

    public static long getIntFromByte(byte[] bArr, boolean z) {
        if (bArr == null || bArr.length <= 0) {
            return 0L;
        }
        return getNegLongFromByte(bArr, 0, bArr.length);
    }

    public static long getNegLongFromByte(byte[] bArr, int i, int i2) {
        long j = 0;
        long j2 = 0;
        if (i + i2 > bArr.length) {
            return -1L;
        }
        long j3 = (bArr[(i + i2) + (-1)] & 128) != 0 ? -1L : 1L;
        for (int i3 = i2 - 1; i3 >= 0; i3--) {
            j += (long) (bArr[i + i3] & 255);
            if (i3 != 0) {
                j <<= 8;
            }
        }
        if (j3 != 1) {
            for (int i4 = 8 - i2; i4 >= 0; i4--) {
                j2 += 255;
                if (i4 != 0) {
                    j2 <<= 8;
                }
            }
            for (int i5 = i2 - 1; i5 >= 0; i5--) {
                j2 <<= 8;
            }
        }
        return j | j2;
    }
}
