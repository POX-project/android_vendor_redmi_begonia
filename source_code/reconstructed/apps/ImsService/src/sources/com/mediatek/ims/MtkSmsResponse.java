package com.mediatek.ims;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsResponse {
    String mAckPdu;
    public int mErrorCode;
    public int mMessageRef;

    public MtkSmsResponse(int i, String str, int i2) {
        this.mMessageRef = i;
        this.mAckPdu = str;
        this.mErrorCode = i2;
    }

    public String toString() {
        return "{ mMessageRef = " + this.mMessageRef + ", mErrorCode = " + this.mErrorCode + ", mAckPdu = " + this.mAckPdu + "}";
    }
}
