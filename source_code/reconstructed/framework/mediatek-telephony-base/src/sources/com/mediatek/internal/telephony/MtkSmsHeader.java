package com.mediatek.internal.telephony;

import com.android.internal.telephony.SmsHeader;
import java.io.ByteArrayInputStream;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsHeader extends SmsHeader {
    public static final int CONCATENATED_8_BIT_REFERENCE_LENGTH = 5;
    public static final int NATIONAL_LANGUAGE_LOCKING_SHIFT_LENGTH = 3;
    public static final int NATIONAL_LANGUAGE_SINGLE_SHIFT_LENGTH = 3;
    private static final String TAG = "SmsHeader";
    public NationalLanguageShift nationalLang;

    public static class NationalLanguageShift {
        public int singleShiftId = 0;
        public int lockingShiftId = 0;
    }

    public static SmsHeader fromByteArray(byte[] bArr) {
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
        MtkSmsHeader mtkSmsHeader = new MtkSmsHeader();
        while (byteArrayInputStream.available() > 0) {
            int i = byteArrayInputStream.read();
            int i2 = byteArrayInputStream.read();
            if (i == 0) {
                SmsHeader.ConcatRef concatRef = new SmsHeader.ConcatRef();
                concatRef.refNumber = byteArrayInputStream.read();
                concatRef.msgCount = byteArrayInputStream.read();
                concatRef.seqNumber = byteArrayInputStream.read();
                concatRef.isEightBits = true;
                if (concatRef.msgCount != 0 && concatRef.seqNumber != 0 && concatRef.seqNumber <= concatRef.msgCount) {
                    mtkSmsHeader.concatRef = concatRef;
                }
            } else if (i == 1) {
                SmsHeader.SpecialSmsMsg specialSmsMsg = new SmsHeader.SpecialSmsMsg();
                specialSmsMsg.msgIndType = byteArrayInputStream.read();
                specialSmsMsg.msgCount = byteArrayInputStream.read();
                mtkSmsHeader.specialSmsMsgList.add(specialSmsMsg);
            } else if (i == 4) {
                SmsHeader.PortAddrs portAddrs = new SmsHeader.PortAddrs();
                portAddrs.destPort = byteArrayInputStream.read();
                portAddrs.origPort = byteArrayInputStream.read();
                portAddrs.areEightBits = true;
                mtkSmsHeader.portAddrs = portAddrs;
            } else if (i == 5) {
                SmsHeader.PortAddrs portAddrs2 = new SmsHeader.PortAddrs();
                portAddrs2.destPort = (byteArrayInputStream.read() << 8) | byteArrayInputStream.read();
                portAddrs2.origPort = (byteArrayInputStream.read() << 8) | byteArrayInputStream.read();
                portAddrs2.areEightBits = false;
                mtkSmsHeader.portAddrs = portAddrs2;
            } else if (i == 8) {
                SmsHeader.ConcatRef concatRef2 = new SmsHeader.ConcatRef();
                concatRef2.refNumber = (byteArrayInputStream.read() << 8) | byteArrayInputStream.read();
                concatRef2.msgCount = byteArrayInputStream.read();
                concatRef2.seqNumber = byteArrayInputStream.read();
                concatRef2.isEightBits = false;
                if (concatRef2.msgCount != 0 && concatRef2.seqNumber != 0 && concatRef2.seqNumber <= concatRef2.msgCount) {
                    mtkSmsHeader.concatRef = concatRef2;
                }
            } else if (i == 36) {
                mtkSmsHeader.languageShiftTable = byteArrayInputStream.read();
            } else if (i != 37) {
                SmsHeader.MiscElt miscElt = new SmsHeader.MiscElt();
                miscElt.id = i;
                miscElt.data = new byte[i2];
                byteArrayInputStream.read(miscElt.data, 0, i2);
                mtkSmsHeader.miscEltList.add(miscElt);
            } else {
                mtkSmsHeader.languageTable = byteArrayInputStream.read();
            }
        }
        return mtkSmsHeader;
    }

    public static byte[] getSubmitPduHeader(int i) {
        return getSubmitPduHeader(i, 0, 0, 0);
    }

    public static byte[] getSubmitPduHeader(int i, int i2) {
        return getSubmitPduHeader(i, i2, 0, 0, 0);
    }

    public static byte[] getSubmitPduHeader(int i, int i2, int i3) {
        return getSubmitPduHeader(-1, i, i2, i3);
    }

    public static byte[] getSubmitPduHeader(int i, int i2, int i3, int i4) {
        return getSubmitPduHeaderWithLang(i, i2, i3, i4, -1, -1);
    }

    public static byte[] getSubmitPduHeader(int i, int i2, int i3, int i4, int i5) {
        return getSubmitPduHeaderWithLang(i, i2, i3, i4, i5, -1, -1);
    }

    public static byte[] getSubmitPduHeaderWithLang(int i, int i2, int i3) {
        return getSubmitPduHeaderWithLang(i, 0, 0, 0, i2, i3);
    }

    public static byte[] getSubmitPduHeaderWithLang(int i, int i2, int i3, int i4, int i5) {
        return getSubmitPduHeaderWithLang(-1, i, i2, i3, i4, i5);
    }

    public static byte[] getSubmitPduHeaderWithLang(int i, int i2, int i3, int i4, int i5, int i6) {
        MtkSmsHeader mtkSmsHeader = new MtkSmsHeader();
        if (i >= 0) {
            SmsHeader.PortAddrs portAddrs = new SmsHeader.PortAddrs();
            portAddrs.destPort = i;
            portAddrs.origPort = 0;
            portAddrs.areEightBits = false;
            mtkSmsHeader.portAddrs = portAddrs;
        }
        if (i4 > 0) {
            SmsHeader.ConcatRef concatRef = new SmsHeader.ConcatRef();
            concatRef.refNumber = i2;
            concatRef.seqNumber = i3;
            concatRef.msgCount = i4;
            concatRef.isEightBits = true;
            mtkSmsHeader.concatRef = concatRef;
        }
        if (i5 > 0 || i6 > 0) {
            NationalLanguageShift nationalLanguageShift = new NationalLanguageShift();
            mtkSmsHeader.nationalLang = nationalLanguageShift;
            nationalLanguageShift.singleShiftId = i5;
            mtkSmsHeader.nationalLang.lockingShiftId = i6;
        }
        return SmsHeader.toByteArray(mtkSmsHeader);
    }

    public static byte[] getSubmitPduHeaderWithLang(int i, int i2, int i3, int i4, int i5, int i6, int i7) {
        MtkSmsHeader mtkSmsHeader = new MtkSmsHeader();
        if (i >= 0) {
            SmsHeader.PortAddrs portAddrs = new SmsHeader.PortAddrs();
            portAddrs.destPort = i;
            portAddrs.origPort = i2;
            portAddrs.areEightBits = false;
            mtkSmsHeader.portAddrs = portAddrs;
        }
        if (i5 > 0) {
            SmsHeader.ConcatRef concatRef = new SmsHeader.ConcatRef();
            concatRef.refNumber = i3;
            concatRef.seqNumber = i4;
            concatRef.msgCount = i5;
            concatRef.isEightBits = true;
            mtkSmsHeader.concatRef = concatRef;
        }
        if (i6 > 0 || i7 > 0) {
            NationalLanguageShift nationalLanguageShift = new NationalLanguageShift();
            mtkSmsHeader.nationalLang = nationalLanguageShift;
            nationalLanguageShift.singleShiftId = i6;
            mtkSmsHeader.nationalLang.lockingShiftId = i7;
        }
        return SmsHeader.toByteArray(mtkSmsHeader);
    }

    public static byte[] toByteArray(SmsHeader smsHeader) {
        if (smsHeader instanceof MtkSmsHeader) {
            MtkSmsHeader mtkSmsHeader = (MtkSmsHeader) smsHeader;
            if (mtkSmsHeader.portAddrs == null && mtkSmsHeader.concatRef == null && mtkSmsHeader.specialSmsMsgList.isEmpty() && mtkSmsHeader.nationalLang == null && mtkSmsHeader.miscEltList.isEmpty() && mtkSmsHeader.languageShiftTable == 0 && mtkSmsHeader.languageTable == 0) {
                return null;
            }
        }
        return SmsHeader.toByteArray(smsHeader);
    }
}
