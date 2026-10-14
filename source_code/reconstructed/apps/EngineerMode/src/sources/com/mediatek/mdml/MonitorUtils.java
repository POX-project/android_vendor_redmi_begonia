package com.mediatek.mdml;

/* JADX INFO: loaded from: classes3.dex */
class MonitorUtils {
    MonitorUtils() {
    }

    public static int ByteArrayToInt(byte[] bArr, int i, int i2) {
        int i3 = 0;
        if (bArr == null || bArr.length <= i) {
            return 0;
        }
        if (4 <= bArr.length - i && i2 >= 4) {
            i3 = (0 | (bArr[i + 3] & 255)) << 8;
        }
        if (3 <= bArr.length - i && i2 >= 3) {
            i3 = (i3 | (bArr[i + 2] & 255)) << 8;
        }
        if (2 <= bArr.length - i && i2 >= 2) {
            i3 = (i3 | (bArr[i + 1] & 255)) << 8;
        }
        return (1 > bArr.length - i || i2 < 1) ? i3 : i3 | (bArr[i] & 255);
    }

    public static long ByteArrayToLong(byte[] bArr, int i, int i2) {
        long j = 0;
        if (bArr == null || bArr.length <= i) {
            return 0L;
        }
        if (4 <= bArr.length - i && i2 >= 4) {
            j = (0 | ((long) (bArr[i + 3] & 255))) << 8;
        }
        if (3 <= bArr.length - i && i2 >= 3) {
            j = (j | ((long) (bArr[i + 2] & 255))) << 8;
        }
        if (2 <= bArr.length - i && i2 >= 2) {
            j = (j | ((long) (bArr[i + 1] & 255))) << 8;
        }
        return (1 > bArr.length - i || i2 < 1) ? j : j | ((long) (bArr[i] & 255));
    }

    public static byte[] IntToByteArray(int i) {
        return new byte[]{(byte) (i & 255), (byte) ((i >> 8) & 255), (byte) ((i >> 16) & 255), (byte) ((i >> 24) & 255)};
    }

    public static boolean SetIntToByteArray(byte[] bArr, int i, int i2, int i3) {
        if (bArr == null || i3 < 1) {
            return false;
        }
        for (int i4 = 0; i4 < i3; i4++) {
            bArr[i + i4] = (byte) (i2 & 255);
            i2 >>= 8;
        }
        return true;
    }
}
