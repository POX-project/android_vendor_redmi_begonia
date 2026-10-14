package com.mediatek.internal.telephony;

import android.text.TextUtils;
import com.android.internal.telephony.uicc.IccUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkEtwsNotification {
    public int messageId;
    public String plmnId;
    public String securityInfo;
    public int serialNumber;
    public int warningType;

    public byte[] getEtwsPdu() {
        byte[] bArr = new byte[56];
        System.arraycopy(MtkEtwsUtils.intToBytes(this.serialNumber), 2, bArr, 0, 2);
        System.arraycopy(MtkEtwsUtils.intToBytes(this.messageId), 2, bArr, 2, 2);
        System.arraycopy(MtkEtwsUtils.intToBytes(this.warningType), 2, bArr, 4, 2);
        if (!TextUtils.isEmpty(this.securityInfo)) {
            System.arraycopy(IccUtils.hexStringToBytes(this.securityInfo), 0, bArr, 6, 50);
        }
        return bArr;
    }

    public boolean isDuplicatedEtws(MtkEtwsNotification mtkEtwsNotification) {
        return this.warningType == mtkEtwsNotification.warningType && this.messageId == mtkEtwsNotification.messageId && this.serialNumber == mtkEtwsNotification.serialNumber && this.plmnId.equals(mtkEtwsNotification.plmnId);
    }

    public String toString() {
        return "MtkEtwsNotification: " + this.warningType + ", " + this.messageId + ", " + this.serialNumber + ", " + this.plmnId + ", " + this.securityInfo;
    }
}
