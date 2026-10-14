package com.mediatek.socket.base;

import android.support.v4.internal.view.SupportMenu;
import com.mediatek.engineermode.bandselect.BandModeContent;
import java.io.UnsupportedEncodingException;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public class SocketUtils {

    public static class BaseBuffer {
        private byte[] mBuff;
        private int mOffset = 0;

        public BaseBuffer(int i) {
            this.mBuff = new byte[i];
        }

        private void assertNotNull(Object obj) {
            if (obj == null) {
                throw new RuntimeException("assertNotNull() failed");
            }
        }

        public void clear() {
            this.mOffset = 0;
            Arrays.fill(this.mBuff, (byte) 0);
        }

        public boolean[] getArrayBool() {
            int i = getInt();
            boolean[] zArr = new boolean[i];
            for (int i2 = 0; i2 < i; i2++) {
                zArr[i2] = getBool();
            }
            return zArr;
        }

        public byte[] getArrayByte() {
            int i = getInt();
            byte[] bArr = new byte[i];
            System.arraycopy(this.mBuff, this.mOffset, bArr, 0, i);
            this.mOffset += i;
            return bArr;
        }

        public Codable[] getArrayCodable(Codable codable) {
            int i = getInt();
            Codable[] codableArr = new Codable[i];
            for (int i2 = 0; i2 < i; i2++) {
                codableArr[i2] = getCodable(codable);
            }
            return codableArr;
        }

        public double[] getArrayDouble() {
            int i = getInt();
            double[] dArr = new double[i];
            for (int i2 = 0; i2 < i; i2++) {
                dArr[i2] = getDouble();
            }
            return dArr;
        }

        public float[] getArrayFloat() {
            int i = getInt();
            float[] fArr = new float[i];
            for (int i2 = 0; i2 < i; i2++) {
                fArr[i2] = getFloat();
            }
            return fArr;
        }

        public int[] getArrayInt() {
            int i = getInt();
            int[] iArr = new int[i];
            for (int i2 = 0; i2 < i; i2++) {
                iArr[i2] = getInt();
            }
            return iArr;
        }

        public long[] getArrayLong() {
            int i = getInt();
            long[] jArr = new long[i];
            for (int i2 = 0; i2 < i; i2++) {
                jArr[i2] = getLong();
            }
            return jArr;
        }

        public short[] getArrayShort() {
            int i = getInt();
            short[] sArr = new short[i];
            for (int i2 = 0; i2 < i; i2++) {
                sArr[i2] = getShort();
            }
            return sArr;
        }

        public String[] getArrayString() {
            int i = getInt();
            String[] strArr = new String[i];
            for (int i2 = 0; i2 < i; i2++) {
                strArr[i2] = getString();
            }
            return strArr;
        }

        public boolean getBool() {
            return getByte() != 0;
        }

        public byte[] getBuff() {
            return this.mBuff;
        }

        public byte getByte() {
            byte[] bArr = this.mBuff;
            int i = this.mOffset;
            byte b = bArr[i];
            this.mOffset = i + 1;
            return b;
        }

        public Codable getCodable(Codable codable) {
            return codable.decode(this);
        }

        public double getDouble() {
            return Double.longBitsToDouble(getLong());
        }

        public float getFloat() {
            return Float.intBitsToFloat(getInt());
        }

        public int getInt() {
            return 0 | (getShort() & 65535) | (getShort() << 16);
        }

        public long getLong() {
            return 0 | (((long) getInt()) & BandModeContent.LTE_MAX_VALUE) | (((long) getInt()) << 32);
        }

        public int getOffset() {
            return this.mOffset;
        }

        public short getShort() {
            return (short) ((getByte() << 8) | ((short) ((getByte() & 255) | 0)));
        }

        public String getString() {
            int i = getInt();
            byte[] bArr = new byte[i];
            System.arraycopy(this.mBuff, this.mOffset, bArr, 0, i);
            this.mOffset += i;
            try {
                return new String(bArr, "utf8").trim();
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
                return null;
            }
        }

        public void putArrayBool(boolean[] zArr) {
            assertNotNull(zArr);
            putInt(zArr.length);
            for (boolean z : zArr) {
                putBool(z);
            }
        }

        public void putArrayByte(byte[] bArr) {
            assertNotNull(bArr);
            putInt(bArr.length);
            System.arraycopy(bArr, 0, this.mBuff, this.mOffset, bArr.length);
            this.mOffset += bArr.length;
        }

        public void putArrayCodable(Codable[] codableArr) {
            assertNotNull(codableArr);
            putInt(codableArr.length);
            for (Codable codable : codableArr) {
                putCodable(codable);
            }
        }

        public void putArrayDouble(double[] dArr) {
            assertNotNull(dArr);
            putInt(dArr.length);
            for (double d : dArr) {
                putDouble(d);
            }
        }

        public void putArrayFloat(float[] fArr) {
            assertNotNull(fArr);
            putInt(fArr.length);
            for (float f : fArr) {
                putFloat(f);
            }
        }

        public void putArrayInt(int[] iArr) {
            assertNotNull(iArr);
            putInt(iArr.length);
            for (int i : iArr) {
                putInt(i);
            }
        }

        public void putArrayLong(long[] jArr) {
            assertNotNull(jArr);
            putInt(jArr.length);
            for (long j : jArr) {
                putLong(j);
            }
        }

        public void putArrayShort(short[] sArr) {
            assertNotNull(sArr);
            putInt(sArr.length);
            for (short s : sArr) {
                putShort(s);
            }
        }

        public void putArrayString(String[] strArr) {
            assertNotNull(strArr);
            putInt(strArr.length);
            for (String str : strArr) {
                putString(str);
            }
        }

        public void putBool(boolean z) {
            putByte(z ? (byte) 1 : (byte) 0);
        }

        public void putByte(byte b) {
            byte[] bArr = this.mBuff;
            int i = this.mOffset;
            bArr[i] = b;
            this.mOffset = i + 1;
        }

        public void putCodable(Codable codable) {
            assertNotNull(codable);
            codable.encode(this);
        }

        public void putDouble(double d) {
            putLong(Double.doubleToLongBits(d));
        }

        public void putFloat(float f) {
            putInt(Float.floatToIntBits(f));
        }

        public void putInt(int i) {
            putShort((short) (i & SupportMenu.USER_MASK));
            putShort((short) (65535 & (i >> 16)));
        }

        public void putLong(long j) {
            putInt((int) (j & (-1)));
            putInt((int) ((-1) & (j >> 32)));
        }

        public void putShort(short s) {
            putByte((byte) (s & 255));
            putByte((byte) ((s >> 8) & 255));
        }

        public void putString(String str) {
            assertNotNull(str);
            try {
                byte[] bytes = str.getBytes("utf8");
                putInt(bytes.length);
                System.arraycopy(bytes, 0, this.mBuff, this.mOffset, bytes.length);
                this.mOffset += bytes.length;
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }

        public void setOffset(int i) {
            this.mOffset = i;
        }

        public int size() {
            return this.mBuff.length;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("BaseBuffer ");
            sb.append("offset=[" + this.mOffset + "] ");
            sb.append("maxSize=[" + this.mBuff.length + "] ");
            return sb.toString();
        }
    }

    public interface Codable {
        Codable decode(BaseBuffer baseBuffer);

        void encode(BaseBuffer baseBuffer);

        Codable[] getArray(Codable[] codableArr);
    }

    public interface ProtocolHandler {
        boolean decode(UdpServerInterface udpServerInterface);

        int getProtocolType();
    }

    public interface UdpServerInterface {
        BaseBuffer getBuff();

        boolean read();

        boolean setSoTimeout(int i);
    }

    public static void assertEqual(Object obj, Object obj2) {
        if (obj instanceof boolean[]) {
            boolean[] zArr = (boolean[]) obj;
            boolean[] zArr2 = (boolean[]) obj2;
            if (Arrays.equals(zArr, zArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(zArr) + "] is not equal to t2=[" + Arrays.toString(zArr2) + "]");
        }
        if (obj instanceof byte[]) {
            byte[] bArr = (byte[]) obj;
            byte[] bArr2 = (byte[]) obj2;
            if (Arrays.equals(bArr, bArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(bArr) + "] is not equal to t2=[" + Arrays.toString(bArr2) + "]");
        }
        if (obj instanceof short[]) {
            short[] sArr = (short[]) obj;
            short[] sArr2 = (short[]) obj2;
            if (Arrays.equals(sArr, sArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(sArr) + "] is not equal to t2=[" + Arrays.toString(sArr2) + "]");
        }
        if (obj instanceof int[]) {
            int[] iArr = (int[]) obj;
            int[] iArr2 = (int[]) obj2;
            if (Arrays.equals(iArr, iArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(iArr) + "] is not equal to t2=[" + Arrays.toString(iArr2) + "]");
        }
        if (obj instanceof long[]) {
            long[] jArr = (long[]) obj;
            long[] jArr2 = (long[]) obj2;
            if (Arrays.equals(jArr, jArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(jArr) + "] is not equal to t2=[" + Arrays.toString(jArr2) + "]");
        }
        if (obj instanceof float[]) {
            float[] fArr = (float[]) obj;
            float[] fArr2 = (float[]) obj2;
            if (Arrays.equals(fArr, fArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(fArr) + "] is not equal to t2=[" + Arrays.toString(fArr2) + "]");
        }
        if (obj instanceof double[]) {
            double[] dArr = (double[]) obj;
            double[] dArr2 = (double[]) obj2;
            if (Arrays.equals(dArr, dArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(dArr) + "] is not equal to t2=[" + Arrays.toString(dArr2) + "]");
        }
        if (obj instanceof String[]) {
            String[] strArr = (String[]) obj;
            String[] strArr2 = (String[]) obj2;
            if (Arrays.equals(strArr, strArr2)) {
                return;
            }
            throw new RuntimeException("t1=[" + Arrays.toString(strArr) + "] is not equal to t2=[" + Arrays.toString(strArr2) + "]");
        }
        if (!(obj instanceof Object[])) {
            if (obj.equals(obj2)) {
                return;
            }
            throw new RuntimeException("o1=[" + obj + "] is not equal to o2=[" + obj2 + "]");
        }
        Object[] objArr = (Object[]) obj;
        Object[] objArr2 = (Object[]) obj2;
        if (Arrays.equals(objArr, objArr2)) {
            return;
        }
        throw new RuntimeException("t1=[" + Arrays.toString(objArr) + "] is not equal to t2=[" + Arrays.toString(objArr2) + "]");
    }

    public static void assertSize(Object obj, int i, int i2) {
        int length = 0;
        if (obj instanceof boolean[]) {
            length = ((boolean[]) obj).length;
        } else if (obj instanceof byte[]) {
            length = ((byte[]) obj).length;
        } else if (obj instanceof short[]) {
            length = ((short[]) obj).length;
        } else if (obj instanceof int[]) {
            length = ((int[]) obj).length;
        } else if (obj instanceof long[]) {
            length = ((long[]) obj).length;
        } else if (obj instanceof float[]) {
            length = ((float[]) obj).length;
        } else if (obj instanceof double[]) {
            length = ((double[]) obj).length;
        } else if (obj instanceof String[]) {
            length = ((String[]) obj).length;
            for (String str : (String[]) obj) {
                if (str.length() > i2) {
                    throw new RuntimeException("your string.length=" + str.length() + " is more than maxSize2=" + i2);
                }
            }
        } else if (obj instanceof Object[]) {
            length = ((Object[]) obj).length;
        } else if (obj instanceof String) {
            length = ((String) obj).length();
        }
        if (length <= i) {
            return;
        }
        throw new RuntimeException("your size=" + length + " is more than maxSize=" + i);
    }
}
