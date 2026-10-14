package com.mediatek.mdml;

import java.util.Arrays;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
public class Msg {
    BaseMsg baseMsg;
    byte[] buf = null;
    GlobalID globalID;
    OffsetAndSize peerBufSizeOffsetAndSize;
    OffsetAndSize simIdxOffsetAndSize;
    SimInfo simInfo;
    int startPos;
    InfoType type;

    private int getOtaMsgExtHdrLen(int i, byte[] bArr) {
        if (this.type != InfoType.OTA_INFO || bArr == null) {
            return -1;
        }
        OffsetAndSize offsetAndSize = new OffsetAndSize();
        offsetAndSize.offset = 0;
        offsetAndSize.size = i;
        return Util.getIntValue(bArr, 0, offsetAndSize);
    }

    private int getSimIdx(Integer num) {
        SimInfo simInfo = this.simInfo;
        if (simInfo == null) {
            return -1;
        }
        Integer simIdx = simInfo.getSimIdx(num);
        if (simIdx == null) {
            return 1;
        }
        return simIdx.intValue();
    }

    public String[] getFieldList() {
        BaseMsg baseMsg = this.baseMsg;
        if (baseMsg == null || baseMsg.fieldMap == null) {
            return null;
        }
        Set<String> setKeySet = this.baseMsg.fieldMap.keySet();
        if (setKeySet.size() == 0) {
            return null;
        }
        String[] strArr = (String[]) setKeySet.toArray(new String[setKeySet.size()]);
        Arrays.sort(strArr);
        return strArr;
    }

    public byte[] getFieldValue(String str) {
        BaseMsg baseMsg;
        OffsetAndSize offsetAndSize;
        if (this.buf == null || (baseMsg = this.baseMsg) == null || baseMsg.fieldMap == null || (offsetAndSize = this.baseMsg.fieldMap.get(str)) == null) {
            return null;
        }
        return Util.getValue(this.buf, this.startPos, offsetAndSize);
    }

    public final String getMsgName() {
        BaseMsg baseMsg = this.baseMsg;
        if (baseMsg == null) {
            return null;
        }
        return baseMsg.msgName;
    }

    public int getOtaMsgAirMsgRawDataBufLength(byte[] bArr) {
        int otaMsgExtHdrLen;
        if (this.type != InfoType.OTA_INFO || bArr == null || (otaMsgExtHdrLen = getOtaMsgExtHdrLen(2, bArr)) <= 0) {
            return -1;
        }
        OffsetAndSize offsetAndSize = new OffsetAndSize();
        offsetAndSize.offset = otaMsgExtHdrLen + 2;
        offsetAndSize.size = 2;
        return Util.getIntValue(bArr, 0, offsetAndSize);
    }

    public int getOtaMsgAirMsgRawDataBufOffset(byte[] bArr) {
        int otaMsgExtHdrLen;
        if (this.type != InfoType.OTA_INFO || bArr == null || (otaMsgExtHdrLen = getOtaMsgExtHdrLen(2, bArr)) <= 0) {
            return -1;
        }
        return otaMsgExtHdrLen + 2 + 2;
    }

    public byte[] getOtaMsgFieldValue() {
        return getFieldValue("OTA_MSG_OFFSET");
    }

    public String getOtaMsgGlobalID(byte[] bArr) {
        int otaMsgExtHdrLen;
        if (this.type != InfoType.OTA_INFO || this.globalID == null || bArr == null || (otaMsgExtHdrLen = getOtaMsgExtHdrLen(2, bArr)) <= 0) {
            return null;
        }
        OffsetAndSize offsetAndSize = new OffsetAndSize();
        offsetAndSize.offset = 2;
        offsetAndSize.size = otaMsgExtHdrLen;
        int intValue = Util.getIntValue(bArr, 0, offsetAndSize);
        if (intValue == -1) {
            return null;
        }
        return this.globalID.getName(Integer.valueOf(intValue));
    }

    public int getPeerBufferLength() {
        OffsetAndSize offsetAndSize;
        if (this.buf == null || (offsetAndSize = this.peerBufSizeOffsetAndSize) == null || offsetAndSize.size <= 0) {
            return -1;
        }
        int intValue = Util.getIntValue(this.buf, this.startPos, this.peerBufSizeOffsetAndSize);
        return (intValue <= 0 || !this.baseMsg.hasPeerBufferHeader) ? intValue : intValue - this.baseMsg.peerBufferHeaderSize;
    }

    public byte[] getPeerBufferValue() {
        return getFieldValue("PEER_OFFSET");
    }

    public int getSimIdx() {
        OffsetAndSize offsetAndSize;
        if (this.buf == null || (offsetAndSize = this.simIdxOffsetAndSize) == null || offsetAndSize.size <= 0) {
            return -1;
        }
        return getSimIdx(Integer.valueOf(Util.getIntValue(this.buf, this.startPos, this.simIdxOffsetAndSize)));
    }
}
