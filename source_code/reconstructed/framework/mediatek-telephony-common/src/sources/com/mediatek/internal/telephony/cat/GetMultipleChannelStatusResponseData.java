package com.mediatek.internal.telephony.cat;

import com.android.internal.telephony.cat.ComprehensionTlvTag;
import com.android.internal.telephony.cat.ResponseData;
import java.io.ByteArrayOutputStream;
import java.util.ArrayList;

/* JADX INFO: compiled from: BipResponseData.java */
/* JADX INFO: loaded from: classes.dex */
class GetMultipleChannelStatusResponseData extends ResponseData {
    ArrayList mArrList;

    GetMultipleChannelStatusResponseData(ArrayList arrayList) {
        this.mArrList = null;
        this.mArrList = arrayList;
    }

    public void format(ByteArrayOutputStream byteArrayOutputStream) {
        if (byteArrayOutputStream == null) {
            return;
        }
        int iValue = ComprehensionTlvTag.CHANNEL_STATUS.value() | 128;
        MtkCatLog.d("[BIP]", "ChannelStatusResp: size: " + this.mArrList.size());
        if (this.mArrList.size() <= 0) {
            MtkCatLog.d("[BIP]", "ChannelStatusResp: no channel status.");
            byteArrayOutputStream.write(iValue);
            byteArrayOutputStream.write(2);
            byteArrayOutputStream.write(0);
            byteArrayOutputStream.write(0);
            return;
        }
        for (ChannelStatus channelStatus : this.mArrList) {
            byteArrayOutputStream.write(iValue);
            byteArrayOutputStream.write(2);
            byteArrayOutputStream.write((channelStatus.mChannelId & 7) | channelStatus.mChannelStatus);
            byteArrayOutputStream.write(channelStatus.mChannelStatusInfo);
            MtkCatLog.d("[BIP]", "ChannelStatusResp: cid:" + channelStatus.mChannelId + ",status:" + channelStatus.mChannelStatus + ",info:" + channelStatus.mChannelStatusInfo);
        }
    }
}
