package com.mediatek.internal.telephony.cat;

import com.android.internal.telephony.cat.ComprehensionTlvTag;
import com.android.internal.telephony.cat.ResponseData;
import java.io.ByteArrayOutputStream;

/* JADX INFO: compiled from: BipResponseData.java */
/* JADX INFO: loaded from: classes.dex */
class ReceiveDataResponseData extends ResponseData {
    byte[] mData;
    int mRemainingCount;

    ReceiveDataResponseData(byte[] bArr, int i) {
        this.mData = null;
        this.mRemainingCount = 0;
        this.mData = bArr;
        this.mRemainingCount = i;
    }

    public void format(ByteArrayOutputStream byteArrayOutputStream) {
        if (byteArrayOutputStream == null) {
            return;
        }
        byteArrayOutputStream.write(ComprehensionTlvTag.CHANNEL_DATA.value() | 128);
        byte[] bArr = this.mData;
        if (bArr != null) {
            if (bArr.length >= 128) {
                byteArrayOutputStream.write(129);
            }
            byteArrayOutputStream.write(this.mData.length);
            byte[] bArr2 = this.mData;
            byteArrayOutputStream.write(bArr2, 0, bArr2.length);
        } else {
            byteArrayOutputStream.write(0);
        }
        byteArrayOutputStream.write(ComprehensionTlvTag.CHANNEL_DATA_LENGTH.value() | 128);
        byteArrayOutputStream.write(1);
        MtkCatLog.d("[BIP]", "ReceiveDataResponseData: length: " + this.mRemainingCount);
        int i = this.mRemainingCount;
        if (i >= 255) {
            byteArrayOutputStream.write(255);
        } else {
            byteArrayOutputStream.write(i);
        }
    }
}
