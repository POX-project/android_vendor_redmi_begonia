package com.mediatek.lbs.em2.utils;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class DataCoder2 {

    public static class DataCoderBuffer {
        public byte[] mBuff;
        public int mOffset = 0;

        public DataCoderBuffer(int i) {
            this.mBuff = new byte[i];
        }

        public void clear() {
            this.mOffset = 0;
        }

        public void flush() {
            this.mOffset = 0;
        }

        public void readFully(byte[] bArr, int i, int i2) {
            for (int i3 = 0; i3 < i2; i3++) {
                byte[] bArr2 = this.mBuff;
                int i4 = this.mOffset;
                bArr[i3] = bArr2[i4];
                this.mOffset = i4 + 1;
            }
        }

        public void write(byte[] bArr) {
            for (byte b : bArr) {
                byte[] bArr2 = this.mBuff;
                int i = this.mOffset;
                bArr2[i] = b;
                this.mOffset = i + 1;
            }
        }
    }

    public static byte[] getBinary(DataCoderBuffer dataCoderBuffer) throws IOException {
        int i = getInt(dataCoderBuffer);
        byte[] bArr = new byte[i];
        dataCoderBuffer.readFully(bArr, 0, i);
        return bArr;
    }

    public static boolean getBoolean(DataCoderBuffer dataCoderBuffer) throws IOException {
        return getByte(dataCoderBuffer) != 0;
    }

    public static byte getByte(DataCoderBuffer dataCoderBuffer) throws IOException {
        byte[] bArr = dataCoderBuffer.mBuff;
        int i = dataCoderBuffer.mOffset;
        byte b = bArr[i];
        dataCoderBuffer.mOffset = i + 1;
        return b;
    }

    public static double getDouble(DataCoderBuffer dataCoderBuffer) throws IOException {
        return Double.longBitsToDouble(getLong(dataCoderBuffer));
    }

    public static float getFloat(DataCoderBuffer dataCoderBuffer) throws IOException {
        return Float.intBitsToFloat(getInt(dataCoderBuffer));
    }

    public static int getInt(DataCoderBuffer dataCoderBuffer) throws IOException {
        return (getShort(dataCoderBuffer) << 16) | (getShort(dataCoderBuffer) & 65535) | 0;
    }

    public static long getLong(DataCoderBuffer dataCoderBuffer) throws IOException {
        return (((long) getInt(dataCoderBuffer)) & 4294967295L) | 0 | (((long) getInt(dataCoderBuffer)) << 32);
    }

    public static short getShort(DataCoderBuffer dataCoderBuffer) throws IOException {
        return (short) ((getByte(dataCoderBuffer) << 8) | ((short) ((getByte(dataCoderBuffer) & 255) | 0)));
    }

    public static String getString(DataCoderBuffer dataCoderBuffer) throws IOException {
        if (getByte(dataCoderBuffer) == 0) {
            return null;
        }
        int i = getInt(dataCoderBuffer);
        byte[] bArr = new byte[i];
        dataCoderBuffer.readFully(bArr, 0, i);
        return new String(bArr).trim();
    }

    public static void putBinary(DataCoderBuffer dataCoderBuffer, byte[] bArr) throws IOException {
        putInt(dataCoderBuffer, bArr.length);
        dataCoderBuffer.write(bArr);
    }

    public static void putBoolean(DataCoderBuffer dataCoderBuffer, boolean z) throws IOException {
        putByte(dataCoderBuffer, !z ? (byte) 0 : (byte) 1);
    }

    public static void putByte(DataCoderBuffer dataCoderBuffer, byte b) throws IOException {
        byte[] bArr = dataCoderBuffer.mBuff;
        int i = dataCoderBuffer.mOffset;
        bArr[i] = b;
        dataCoderBuffer.mOffset = i + 1;
    }

    public static void putDouble(DataCoderBuffer dataCoderBuffer, double d) throws IOException {
        putLong(dataCoderBuffer, Double.doubleToLongBits(d));
    }

    public static void putFloat(DataCoderBuffer dataCoderBuffer, float f) throws IOException {
        putInt(dataCoderBuffer, Float.floatToIntBits(f));
    }

    public static void putInt(DataCoderBuffer dataCoderBuffer, int i) throws IOException {
        putShort(dataCoderBuffer, (short) (i & 65535));
        putShort(dataCoderBuffer, (short) ((i >> 16) & 65535));
    }

    public static void putLong(DataCoderBuffer dataCoderBuffer, long j) throws IOException {
        putInt(dataCoderBuffer, (int) (j & (-1)));
        putInt(dataCoderBuffer, (int) ((j >> 32) & (-1)));
    }

    public static void putShort(DataCoderBuffer dataCoderBuffer, short s) throws IOException {
        putByte(dataCoderBuffer, (byte) (s & 255));
        putByte(dataCoderBuffer, (byte) ((s >> 8) & 255));
    }

    public static void putString(DataCoderBuffer dataCoderBuffer, String str) throws IOException {
        if (str == null) {
            putByte(dataCoderBuffer, (byte) 0);
            return;
        }
        putByte(dataCoderBuffer, (byte) 1);
        byte[] bytes = str.getBytes();
        putInt(dataCoderBuffer, bytes.length + 1);
        dataCoderBuffer.write(bytes);
        putByte(dataCoderBuffer, (byte) 0);
    }
}
