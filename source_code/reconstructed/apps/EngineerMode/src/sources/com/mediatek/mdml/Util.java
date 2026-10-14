package com.mediatek.mdml;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX INFO: loaded from: classes3.dex */
class Util {
    Util() {
    }

    static int getIntValue(byte[] bArr, int i, OffsetAndSize offsetAndSize) {
        byte[] value = getValue(bArr, i, offsetAndSize);
        if (value == null) {
            return -1;
        }
        int length = value.length;
        if (length == 1) {
            return value[0];
        }
        if (length == 2) {
            return ByteBuffer.wrap(value).order(ByteOrder.LITTLE_ENDIAN).getShort();
        }
        if (length == 3) {
            return value[0] + (value[1] << 8) + (value[2] << 16);
        }
        if (length != 4) {
            return -1;
        }
        return ByteBuffer.wrap(value).order(ByteOrder.LITTLE_ENDIAN).getInt();
    }

    static byte[] getValue(byte[] bArr, int i, OffsetAndSize offsetAndSize) {
        int length;
        if (bArr == null || (length = offsetAndSize.size) == 0) {
            return null;
        }
        if (length == -1) {
            length = (bArr.length - i) - offsetAndSize.offset;
        }
        if (length <= 0 || bArr.length - i < offsetAndSize.offset + length) {
            return null;
        }
        byte[] bArr2 = new byte[length];
        System.arraycopy(bArr, offsetAndSize.offset + i, bArr2, 0, length);
        return bArr2;
    }
}
