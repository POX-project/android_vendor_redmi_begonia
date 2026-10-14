package com.mediatek.internal.telephony.cat;

import com.android.internal.telephony.cat.ComprehensionTlvTag;
import com.android.internal.telephony.cat.ResponseData;
import java.io.ByteArrayOutputStream;

/* JADX INFO: compiled from: BipResponseData.java */
/* JADX INFO: loaded from: classes.dex */
class SendDataResponseData extends ResponseData {
    int mTxBufferSize;

    SendDataResponseData(int i) {
        this.mTxBufferSize = 0;
        this.mTxBufferSize = i;
    }

    public void format(ByteArrayOutputStream byteArrayOutputStream) {
        if (byteArrayOutputStream == null) {
            return;
        }
        byteArrayOutputStream.write(ComprehensionTlvTag.CHANNEL_DATA_LENGTH.value() | 128);
        byteArrayOutputStream.write(1);
        int i = this.mTxBufferSize;
        if (i >= 255) {
            byteArrayOutputStream.write(255);
        } else {
            byteArrayOutputStream.write(i);
        }
    }
}
