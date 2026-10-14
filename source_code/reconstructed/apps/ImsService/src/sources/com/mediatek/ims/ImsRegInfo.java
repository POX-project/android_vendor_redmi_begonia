package com.mediatek.ims;

/* JADX INFO: loaded from: classes.dex */
public class ImsRegInfo {
    public int mAccountId;
    public int mErrorCode;
    public String mErrorMsg;
    public int mExpireTime;
    public int mReportType;
    public String mUri;

    public ImsRegInfo(int i, int i2, int i3, int i4, String str, String str2) {
        this.mReportType = i;
        this.mAccountId = i2;
        this.mExpireTime = i3;
        this.mErrorCode = i4;
        this.mUri = str;
        this.mErrorMsg = str2;
    }

    public String toString() {
        return "ImsRegInfo :: {" + this.mReportType + ", " + this.mAccountId + ", " + this.mExpireTime + ", " + this.mErrorCode + "," + this.mErrorMsg + "}";
    }
}
