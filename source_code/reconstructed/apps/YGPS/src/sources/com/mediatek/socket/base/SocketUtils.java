package com.mediatek.socket.base;

import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes.dex */
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

        public byte[] getBuff() {
            return this.mBuff;
        }

        public int getOffset() {
            return this.mOffset;
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

        public void putInt(int i) {
            putShort((short) (i & 65535));
            putShort((short) ((i >> 16) & 65535));
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

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("BaseBuffer ");
            sb.append("offset=[" + this.mOffset + "] ");
            sb.append("maxSize=[" + this.mBuff.length + "] ");
            return sb.toString();
        }
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
            String[] strArr = (String[]) obj;
            int length2 = strArr.length;
            int length3 = strArr.length;
            while (length < length3) {
                String str = strArr[length];
                if (str.length() > i2) {
                    throw new RuntimeException("your string.length=" + str.length() + " is more than maxSize2=" + i2);
                }
                length++;
            }
            length = length2;
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
