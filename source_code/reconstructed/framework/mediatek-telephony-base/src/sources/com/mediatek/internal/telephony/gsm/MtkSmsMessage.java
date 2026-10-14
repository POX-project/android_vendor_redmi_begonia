package com.mediatek.internal.telephony.gsm;

import android.R;
import android.content.res.Resources;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.text.TextUtils;
import android.text.format.Time;
import com.android.internal.telephony.EncodeException;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.Sms7BitEncodingTranslator;
import com.android.internal.telephony.SmsConstants;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.gsm.SmsMessage;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.MtkPhoneNumberUtils;
import com.mediatek.internal.telephony.MtkSmsHeader;
import java.io.ByteArrayOutputStream;
import java.io.UnsupportedEncodingException;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsMessage extends SmsMessage {
    public static final int ENCODING_7BIT_LOCKING = 12;
    public static final int ENCODING_7BIT_LOCKING_SINGLE = 13;
    public static final int ENCODING_7BIT_SINGLE = 11;
    private static final boolean ENG = "eng".equals(Build.TYPE);
    static final String LOG_TAG = "MtkSmsMessage";
    public static final int MASK_MESSAGE_TYPE_INDICATOR = 3;
    public static final int MASK_USER_DATA_HEADER_INDICATOR = 64;
    public static final int MASK_VALIDITY_PERIOD_FORMAT = 24;
    public static final int MASK_VALIDITY_PERIOD_FORMAT_ABSOLUTE = 24;
    public static final int MASK_VALIDITY_PERIOD_FORMAT_ENHANCED = 8;
    public static final int MASK_VALIDITY_PERIOD_FORMAT_NONE = 0;
    public static final int MASK_VALIDITY_PERIOD_FORMAT_RELATIVE = 16;
    protected int absoluteValidityPeriod;
    protected String mDestinationAddress;
    protected int relativeValidityPeriod;
    private int mEncodingType = 0;
    protected int mwiType = -1;
    protected int mwiCount = 0;

    public static class DeliverPdu {
        public byte[] encodedMessage;
        public byte[] encodedScAddress;

        public String toString() {
            return "DeliverPdu: encodedScAddress = " + Arrays.toString(this.encodedScAddress) + ", encodedMessage = " + Arrays.toString(this.encodedMessage);
        }
    }

    public static GsmAlphabet.TextEncodingDetails calculateLength(CharSequence charSequence, boolean z, int i) {
        CharSequence charSequenceTranslate = Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_default) ? Sms7BitEncodingTranslator.translate(charSequence, false) : null;
        if (TextUtils.isEmpty(charSequenceTranslate)) {
            charSequenceTranslate = charSequence;
        }
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCountGsmSeptets = GsmAlphabet.countGsmSeptets(charSequenceTranslate, z);
        if (i == 3) {
            Rlog.d(LOG_TAG, "input mode is unicode");
            textEncodingDetailsCountGsmSeptets = null;
        }
        if (textEncodingDetailsCountGsmSeptets != null) {
            return textEncodingDetailsCountGsmSeptets;
        }
        Rlog.d(LOG_TAG, "7-bit encoding fail");
        return SmsMessageBase.calcUnicodeEncodingDetails(charSequenceTranslate);
    }

    public static int computeRemainUserDataLength(boolean z, int[] iArr) {
        int i = 0;
        for (int i2 : iArr) {
            if (i2 == 0) {
                i += 5;
            } else if (i2 == 36) {
                i += 3;
            } else if (i2 == 37) {
                i += 3;
            }
        }
        if (i != 0) {
            i++;
        }
        int i3 = 140 - i;
        return z ? (i3 * 8) / 7 : i3;
    }

    public static MtkSmsMessage createFromEfRecord(int i, byte[] bArr) {
        try {
            MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
            mtkSmsMessage.mIndexOnIcc = i;
            if ((bArr[0] & 1) == 0) {
                Rlog.w(LOG_TAG, "SMS parsing failed: Trying to parse a free record");
                return null;
            }
            mtkSmsMessage.mStatusOnIcc = bArr[0] & 7;
            int length = bArr.length - 1;
            byte[] bArr2 = new byte[length];
            System.arraycopy(bArr, 1, bArr2, 0, length);
            mtkSmsMessage.parsePdu(bArr2);
            return mtkSmsMessage;
        } catch (RuntimeException e) {
            Rlog.e(LOG_TAG, "SMS PDU parsing failed: ", e);
            return null;
        }
    }

    public static MtkSmsMessage createFromPdu(byte[] bArr) {
        try {
            MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
            mtkSmsMessage.parsePdu(bArr);
            return mtkSmsMessage;
        } catch (OutOfMemoryError e) {
            Rlog.e(LOG_TAG, "SMS PDU parsing failed with out of memory: ", e);
            return null;
        } catch (RuntimeException e2) {
            Rlog.e(LOG_TAG, "SMS PDU parsing failed: ", e2);
            return null;
        }
    }

    private static boolean encodeStringWithSpecialLang(CharSequence charSequence, int i, GsmAlphabet.TextEncodingDetails textEncodingDetails) {
        int iCountGsmSeptetsUsingTables = GsmAlphabet.countGsmSeptetsUsingTables(charSequence, true, 0, 0);
        if (iCountGsmSeptetsUsingTables != -1) {
            textEncodingDetails.codeUnitCount = iCountGsmSeptetsUsingTables;
            if (iCountGsmSeptetsUsingTables > 160) {
                textEncodingDetails.msgCount = (iCountGsmSeptetsUsingTables / 153) + 1;
                textEncodingDetails.codeUnitsRemaining = 153 - (iCountGsmSeptetsUsingTables % 153);
            } else {
                textEncodingDetails.msgCount = 1;
                textEncodingDetails.codeUnitsRemaining = 160 - iCountGsmSeptetsUsingTables;
            }
            textEncodingDetails.codeUnitSize = 1;
            textEncodingDetails.shiftLangId = -1;
            Rlog.d(LOG_TAG, "Try Default: " + i + " " + textEncodingDetails);
            return true;
        }
        int iCountGsmSeptetsUsingTables2 = GsmAlphabet.countGsmSeptetsUsingTables(charSequence, true, 0, i);
        if (iCountGsmSeptetsUsingTables2 != -1) {
            int[] iArr = {37, 65535};
            int iComputeRemainUserDataLength = computeRemainUserDataLength(true, iArr);
            textEncodingDetails.codeUnitCount = iCountGsmSeptetsUsingTables2;
            if (iCountGsmSeptetsUsingTables2 > iComputeRemainUserDataLength) {
                iArr[1] = 0;
                int iComputeRemainUserDataLength2 = computeRemainUserDataLength(true, iArr);
                textEncodingDetails.msgCount = (iCountGsmSeptetsUsingTables2 / iComputeRemainUserDataLength2) + 1;
                textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength2 - (iCountGsmSeptetsUsingTables2 % iComputeRemainUserDataLength2);
            } else {
                textEncodingDetails.msgCount = 1;
                textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength - iCountGsmSeptetsUsingTables2;
            }
            textEncodingDetails.codeUnitSize = 1;
            textEncodingDetails.useLockingShift = true;
            textEncodingDetails.shiftLangId = i;
            Rlog.d(LOG_TAG, "Try Locking Shift: " + i + " " + textEncodingDetails);
            return true;
        }
        int iCountGsmSeptetsUsingTables3 = GsmAlphabet.countGsmSeptetsUsingTables(charSequence, true, i, 0);
        if (iCountGsmSeptetsUsingTables3 != -1) {
            int[] iArr2 = {36, 65535};
            int iComputeRemainUserDataLength3 = computeRemainUserDataLength(true, iArr2);
            textEncodingDetails.codeUnitCount = iCountGsmSeptetsUsingTables3;
            if (iCountGsmSeptetsUsingTables3 > iComputeRemainUserDataLength3) {
                iArr2[1] = 0;
                int iComputeRemainUserDataLength4 = computeRemainUserDataLength(true, iArr2);
                textEncodingDetails.msgCount = (iCountGsmSeptetsUsingTables3 / iComputeRemainUserDataLength4) + 1;
                textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength4 - (iCountGsmSeptetsUsingTables3 % iComputeRemainUserDataLength4);
            } else {
                textEncodingDetails.msgCount = 1;
                textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength3 - iCountGsmSeptetsUsingTables3;
            }
            textEncodingDetails.codeUnitSize = 1;
            textEncodingDetails.useSingleShift = true;
            textEncodingDetails.shiftLangId = i;
            Rlog.d(LOG_TAG, "Try Single Shift: " + i + " " + textEncodingDetails);
            return true;
        }
        int iCountGsmSeptetsUsingTables4 = GsmAlphabet.countGsmSeptetsUsingTables(charSequence, true, i, i);
        if (iCountGsmSeptetsUsingTables4 == -1) {
            Rlog.d(LOG_TAG, "Use UCS2" + i + " " + textEncodingDetails);
            return false;
        }
        int[] iArr3 = {37, 36, 65535};
        int iComputeRemainUserDataLength5 = computeRemainUserDataLength(true, iArr3);
        textEncodingDetails.codeUnitCount = iCountGsmSeptetsUsingTables4;
        if (iCountGsmSeptetsUsingTables4 > iComputeRemainUserDataLength5) {
            iArr3[2] = 0;
            int iComputeRemainUserDataLength6 = computeRemainUserDataLength(true, iArr3);
            textEncodingDetails.msgCount = (iCountGsmSeptetsUsingTables4 / iComputeRemainUserDataLength6) + 1;
            textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength6 - (iCountGsmSeptetsUsingTables4 % iComputeRemainUserDataLength6);
        } else {
            textEncodingDetails.msgCount = 1;
            textEncodingDetails.codeUnitsRemaining = iComputeRemainUserDataLength5 - iCountGsmSeptetsUsingTables4;
        }
        textEncodingDetails.codeUnitSize = 1;
        textEncodingDetails.useLockingShift = true;
        textEncodingDetails.useSingleShift = true;
        textEncodingDetails.shiftLangId = i;
        Rlog.d(LOG_TAG, "Try Locking & Single Shift: " + i + " " + textEncodingDetails);
        return true;
    }

    private static int getCurrentSysLanguage() {
        String str = SystemProperties.get("persist.sys.language", (String) null);
        if (str == null) {
            str = SystemProperties.get("ro.product.locale.language", (String) null);
        }
        return str.equals("tr") ? -1 : -1;
    }

    private static ByteArrayOutputStream getDeliverPduHead(String str, String str2, byte b, DeliverPdu deliverPdu) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(180);
        if (str == null) {
            deliverPdu.encodedScAddress = null;
        } else {
            deliverPdu.encodedScAddress = PhoneNumberUtils.networkPortionToCalledPartyBCDWithLength(str);
        }
        byteArrayOutputStream.write(b);
        byte[] bArrNetworkPortionToCalledPartyBCD = PhoneNumberUtils.networkPortionToCalledPartyBCD(str2);
        if (bArrNetworkPortionToCalledPartyBCD != null) {
            byteArrayOutputStream.write(((bArrNetworkPortionToCalledPartyBCD.length - 1) * 2) - ((bArrNetworkPortionToCalledPartyBCD[bArrNetworkPortionToCalledPartyBCD.length - 1] & 240) != 240 ? 0 : 1));
            byteArrayOutputStream.write(bArrNetworkPortionToCalledPartyBCD, 0, bArrNetworkPortionToCalledPartyBCD.length);
        } else {
            try {
                bArrNetworkPortionToCalledPartyBCD = GsmAlphabet.stringToGsm7BitPacked(str2);
            } catch (EncodeException e) {
                Rlog.d(LOG_TAG, "ex:" + e);
            }
            if (bArrNetworkPortionToCalledPartyBCD != null) {
                byteArrayOutputStream.write((bArrNetworkPortionToCalledPartyBCD.length - 1) * 2);
                Rlog.d(LOG_TAG, "oaBytes length = " + bArrNetworkPortionToCalledPartyBCD.length);
                byteArrayOutputStream.write(208);
                byteArrayOutputStream.write(bArrNetworkPortionToCalledPartyBCD, 1, bArrNetworkPortionToCalledPartyBCD.length - 1);
            } else {
                Rlog.d(LOG_TAG, "write a empty address for deliver pdu");
                byteArrayOutputStream.write(0);
                byteArrayOutputStream.write(MtkPhoneNumberUtils.TOA_International);
            }
        }
        byteArrayOutputStream.write(0);
        return byteArrayOutputStream;
    }

    public static DeliverPdu getDeliverPduWithLang(String str, String str2, String str3, byte[] bArr, long j, int i, int i2) {
        byte[] bArrEncodeUCS2;
        Rlog.d(LOG_TAG, "SmsMessage: get deliver pdu");
        if (str3 != null && str2 != null) {
            DeliverPdu deliverPdu = new DeliverPdu();
            StringBuilder sb = new StringBuilder();
            sb.append("SmsMessage: UDHI = ");
            sb.append(bArr != null);
            Rlog.d(LOG_TAG, sb.toString());
            ByteArrayOutputStream deliverPduHead = getDeliverPduHead(str, str2, (byte) ((bArr != null ? 64 : 0) | 0), deliverPdu);
            int i3 = i == 0 ? 1 : i;
            try {
                Rlog.d(LOG_TAG, "Get SubmitPdu with Lang " + i3 + " " + i2);
                if (i3 == 1) {
                    bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, 0);
                } else if (i2 <= 0 || i3 == 3) {
                    try {
                        bArrEncodeUCS2 = encodeUCS2(str3, bArr);
                    } catch (UnsupportedEncodingException e) {
                        Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e);
                        return null;
                    } catch (EncodeException e2) {
                        Rlog.e(LOG_TAG, "Implausible EncodeException ", e2);
                        return null;
                    }
                } else {
                    if (i3 == 12) {
                        bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, i2);
                    } else if (i3 == 11) {
                        bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, i2, 0);
                    } else {
                        bArrEncodeUCS2 = i3 == 13 ? GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, i2, i2) : GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, 0);
                    }
                    i3 = 1;
                }
            } catch (EncodeException e3) {
                try {
                    bArrEncodeUCS2 = encodeUCS2(str3, bArr);
                    i3 = 3;
                } catch (UnsupportedEncodingException e4) {
                    Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e4);
                    return null;
                } catch (EncodeException e5) {
                    Rlog.e(LOG_TAG, "Implausible EncodeException ", e5);
                    return null;
                }
            }
            if ((bArrEncodeUCS2[0] & 255) > 160) {
                Rlog.d(LOG_TAG, "SmsMessage: message is too long");
                return null;
            }
            if (i3 == 1) {
                deliverPduHead.write(0);
            } else {
                deliverPduHead.write(8);
            }
            byte[] sCTimestamp = parseSCTimestamp(j);
            if (sCTimestamp != null) {
                deliverPduHead.write(sCTimestamp, 0, sCTimestamp.length);
            } else {
                for (int i4 = 0; i4 < 7; i4++) {
                    deliverPduHead.write(0);
                }
            }
            deliverPduHead.write(bArrEncodeUCS2, 0, bArrEncodeUCS2.length);
            deliverPdu.encodedMessage = deliverPduHead.toByteArray();
            return deliverPdu;
        }
        return null;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, int i, int i2, byte[] bArr, boolean z) {
        byte[] submitPduHeader = MtkSmsHeader.getSubmitPduHeader(i, i2);
        Rlog.d(LOG_TAG, "MtkSmsMessage: get submit pdu originalPort = " + i2);
        if (submitPduHeader != null || i2 == 0) {
            return i2 == 0 ? getSubmitPdu(str, str2, bArr, z) : getSubmitPdu(str, str2, bArr, submitPduHeader, z);
        }
        return null;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, String str3, int i, boolean z) {
        int i2;
        int currentSysLanguage = getCurrentSysLanguage();
        int i3 = -1;
        int i4 = -1;
        GsmAlphabet.TextEncodingDetails textEncodingDetails = new GsmAlphabet.TextEncodingDetails();
        if (!encodeStringWithSpecialLang(str3, currentSysLanguage, textEncodingDetails)) {
            i2 = 3;
        } else if (textEncodingDetails.useLockingShift && textEncodingDetails.useSingleShift) {
            i2 = 13;
            i4 = currentSysLanguage;
            i3 = currentSysLanguage;
        } else if (textEncodingDetails.useLockingShift) {
            i2 = 12;
            i4 = currentSysLanguage;
        } else if (textEncodingDetails.useSingleShift) {
            i2 = 11;
            i3 = currentSysLanguage;
        } else {
            i2 = 1;
            currentSysLanguage = -1;
        }
        return getSubmitPduWithLang(str, str2, str3, z, MtkSmsHeader.getSubmitPduHeaderWithLang(i, i3, i4), i2, currentSysLanguage, -1);
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, String str3, boolean z, byte[] bArr, int i, int i2, int i3, int i4) {
        byte[] byteArray;
        int i5;
        int i6;
        int i7;
        byte[] bArrEncodeUCS2;
        if (str3 == null || str2 == null) {
            return null;
        }
        if (i == 0) {
            GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = calculateLength(str3, false);
            i5 = textEncodingDetailsCalculateLength.codeUnitSize;
            i6 = textEncodingDetailsCalculateLength.languageTable;
            i7 = textEncodingDetailsCalculateLength.languageShiftTable;
            if (i5 != 1 || (i6 == 0 && i7 == 0)) {
                byteArray = bArr;
            } else if (bArr != null) {
                SmsHeader smsHeaderFromByteArray = SmsHeader.fromByteArray(bArr);
                if (smsHeaderFromByteArray.languageTable == i6 && smsHeaderFromByteArray.languageShiftTable == i7) {
                    byteArray = bArr;
                } else {
                    Rlog.w(LOG_TAG, "Updating language table in SMS header: " + smsHeaderFromByteArray.languageTable + " -> " + i6 + ", " + smsHeaderFromByteArray.languageShiftTable + " -> " + i7);
                    smsHeaderFromByteArray.languageTable = i6;
                    smsHeaderFromByteArray.languageShiftTable = i7;
                    byteArray = SmsHeader.toByteArray(smsHeaderFromByteArray);
                }
            } else {
                MtkSmsHeader mtkSmsHeader = (MtkSmsHeader) makeSmsHeader();
                mtkSmsHeader.languageTable = i6;
                mtkSmsHeader.languageShiftTable = i7;
                byteArray = SmsHeader.toByteArray(mtkSmsHeader);
            }
        } else {
            byteArray = bArr;
            i5 = i;
            i6 = i2;
            i7 = i3;
        }
        SmsMessage.SubmitPdu submitPdu = new SmsMessage.SubmitPdu();
        int relativeValidityPeriod = getRelativeValidityPeriod(i4);
        int i8 = relativeValidityPeriod >= 0 ? 2 : 0;
        ByteArrayOutputStream submitPduHead = getSubmitPduHead(str, str2, (byte) ((i8 << 3) | 1 | (byteArray != null ? 64 : 0)), z, submitPdu);
        if (submitPduHead == null) {
            return null;
        }
        try {
            if (i5 == 1) {
                bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, byteArray, i6, i7);
            } else {
                try {
                    bArrEncodeUCS2 = encodeUCS2(str3, byteArray);
                } catch (EncodeException e) {
                    Rlog.e(LOG_TAG, "Implausible EncodeException ", e);
                    return null;
                } catch (UnsupportedEncodingException e2) {
                    Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e2);
                    return null;
                }
            }
        } catch (EncodeException e3) {
            try {
                bArrEncodeUCS2 = encodeUCS2(str3, byteArray);
                i5 = 3;
            } catch (EncodeException e4) {
                Rlog.e(LOG_TAG, "Implausible EncodeException ", e4);
                return null;
            } catch (UnsupportedEncodingException e5) {
                Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e5);
                return null;
            }
        }
        if (i5 == 1) {
            if ((bArrEncodeUCS2[0] & 255) > 160) {
                Rlog.e(LOG_TAG, "Message too long (" + (bArrEncodeUCS2[0] & 255) + " septets)");
                return null;
            }
            submitPduHead.write(0);
        } else {
            if ((bArrEncodeUCS2[0] & 255) > 140) {
                Rlog.e(LOG_TAG, "Message too long (" + (bArrEncodeUCS2[0] & 255) + " bytes)");
                return null;
            }
            submitPduHead.write(8);
        }
        if (i4 >= 0 && i4 <= 255) {
            Rlog.d(LOG_TAG, "write validity period into pdu: " + i4);
            submitPduHead.write(i4);
        }
        if (i8 == 2) {
            submitPduHead.write(relativeValidityPeriod);
        }
        submitPduHead.write(bArrEncodeUCS2, 0, bArrEncodeUCS2.length);
        submitPdu.encodedMessage = submitPduHead.toByteArray();
        return submitPdu;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, byte[] bArr, boolean z) {
        Rlog.d(LOG_TAG, "get SubmitPdu for auto regist data.length = " + bArr.length + " bytes");
        if (bArr.length + 1 > 140) {
            Rlog.e(LOG_TAG, "data length is too long,SMS data.length = " + bArr.length + " bytes");
            return null;
        }
        SmsMessage.SubmitPdu submitPdu = new SmsMessage.SubmitPdu();
        ByteArrayOutputStream submitPduHead = getSubmitPduHead(str, str2, (byte) 1, z, submitPdu);
        if (submitPduHead == null) {
            return null;
        }
        submitPduHead.write(4);
        submitPduHead.write(bArr.length);
        submitPduHead.write(bArr, 0, bArr.length);
        submitPdu.encodedMessage = submitPduHead.toByteArray();
        return submitPdu;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, byte[] bArr, byte[] bArr2, boolean z) {
        if (bArr.length + bArr2.length + 1 > 140) {
            StringBuilder sb = new StringBuilder();
            sb.append("SMS data message may only contain ");
            sb.append((140 - bArr2.length) - 1);
            sb.append(" bytes");
            Rlog.e(LOG_TAG, sb.toString());
            return null;
        }
        SmsMessage.SubmitPdu submitPdu = new SmsMessage.SubmitPdu();
        ByteArrayOutputStream submitPduHead = getSubmitPduHead(str, str2, (byte) 65, z, submitPdu);
        if (submitPduHead == null) {
            return null;
        }
        submitPduHead.write(4);
        submitPduHead.write(bArr.length + bArr2.length + 1);
        submitPduHead.write(bArr2.length);
        submitPduHead.write(bArr2, 0, bArr2.length);
        submitPduHead.write(bArr, 0, bArr.length);
        submitPdu.encodedMessage = submitPduHead.toByteArray();
        return submitPdu;
    }

    public static SmsMessage.SubmitPdu getSubmitPduWithLang(String str, String str2, String str3, boolean z, byte[] bArr, int i, int i2, int i3) {
        byte[] bArrEncodeUCS2;
        Rlog.d(LOG_TAG, "SmsMessage: get submit pdu with Lang");
        if (str3 != null && str2 != null) {
            SmsMessage.SubmitPdu submitPdu = new SmsMessage.SubmitPdu();
            int relativeValidityPeriod = getRelativeValidityPeriod(i3);
            int i4 = relativeValidityPeriod >= 0 ? 2 : 0;
            ByteArrayOutputStream submitPduHead = getSubmitPduHead(str, str2, (byte) ((i4 << 3) | 1 | (bArr != null ? 64 : 0)), z, submitPdu);
            if (submitPduHead == null) {
                return null;
            }
            int i5 = i == 0 ? 1 : i;
            try {
                Rlog.d(LOG_TAG, "Get SubmitPdu with Lang " + i5 + " " + i2);
                if (i5 == 1) {
                    bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, 0);
                } else if (i2 <= 0 || i5 == 3) {
                    try {
                        bArrEncodeUCS2 = encodeUCS2(str3, bArr);
                    } catch (EncodeException e) {
                        Rlog.e(LOG_TAG, "Implausible EncodeException ", e);
                        return null;
                    } catch (UnsupportedEncodingException e2) {
                        Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e2);
                        return null;
                    }
                } else {
                    if (i5 == 12) {
                        bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, i2);
                    } else if (i5 == 11) {
                        bArrEncodeUCS2 = GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, i2, 0);
                    } else {
                        bArrEncodeUCS2 = i5 == 13 ? GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, i2, i2) : GsmAlphabet.stringToGsm7BitPackedWithHeader(str3, bArr, 0, 0);
                    }
                    i5 = 1;
                }
            } catch (EncodeException e3) {
                try {
                    bArrEncodeUCS2 = encodeUCS2(str3, bArr);
                    i5 = 3;
                } catch (UnsupportedEncodingException e4) {
                    Rlog.e(LOG_TAG, "Implausible UnsupportedEncodingException ", e4);
                    return null;
                } catch (EncodeException e5) {
                    Rlog.e(LOG_TAG, "Implausible EncodeException ", e5);
                    return null;
                }
            }
            if (i5 == 1) {
                if ((bArrEncodeUCS2[0] & 255) > 160) {
                    return null;
                }
                submitPduHead.write(0);
            } else {
                if ((bArrEncodeUCS2[0] & 255) > 140) {
                    return null;
                }
                submitPduHead.write(8);
            }
            if (i4 == 2) {
                submitPduHead.write(relativeValidityPeriod);
            }
            submitPduHead.write(bArrEncodeUCS2, 0, bArrEncodeUCS2.length);
            submitPdu.encodedMessage = submitPduHead.toByteArray();
            return submitPdu;
        }
        return null;
    }

    private static byte intToGsmBCDByte(int i) {
        if (i < 0) {
            Rlog.d(LOG_TAG, "[time invalid value: " + i);
            return (byte) 0;
        }
        int i2 = i % 100;
        Rlog.d(LOG_TAG, "[time value: " + i2);
        byte b = (byte) (((i2 / 10) & 15) | (((i2 % 10) << 4) & 240));
        Rlog.d(LOG_TAG, "[time bcd value: " + ((int) b));
        return b;
    }

    public static MtkSmsMessage newFromCDS(byte[] bArr) {
        try {
            MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
            mtkSmsMessage.parsePdu(bArr);
            return mtkSmsMessage;
        } catch (RuntimeException e) {
            Rlog.e(LOG_TAG, "CDS SMS PDU parsing failed: ", e);
            return null;
        }
    }

    public static MtkSmsMessage newFromCMT(String[] strArr) {
        try {
            MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
            mtkSmsMessage.parsePdu(IccUtils.hexStringToBytes(strArr[1]));
            return mtkSmsMessage;
        } catch (RuntimeException e) {
            Rlog.e(LOG_TAG, "SMS PDU parsing failed: ", e);
            return null;
        }
    }

    private static byte[] parseSCTimestamp(long j) {
        Time time = new Time("UTC");
        time.set(j);
        return new byte[]{intToGsmBCDByte(time.year), intToGsmBCDByte(time.month + 1), intToGsmBCDByte(time.monthDay), intToGsmBCDByte(time.hour), intToGsmBCDByte(time.minute), intToGsmBCDByte(time.second), intToGsmBCDByte(0)};
    }

    public String getDestinationAddress() {
        String str = this.mDestinationAddress;
        if (str == null) {
            return null;
        }
        return str;
    }

    public int getEncodingType() {
        return this.mEncodingType;
    }

    protected void parseSmsStatusReport(SmsMessage.PduParser pduParser, int i) {
        super.parseSmsStatusReport(pduParser, i);
        this.mMessageBody = "";
    }

    protected void parseSmsSubmit(SmsMessage.PduParser pduParser, int i) {
        super.parseSmsSubmit(pduParser, i);
        if (this.mRecipientAddress != null) {
            this.mDestinationAddress = this.mRecipientAddress.getAddressString();
        }
    }

    /* JADX WARN: Code duplicated, block: B:25:0x0068  */
    /* JADX WARN: Code duplicated, block: B:98:0x01ed  */
    /* JADX WARN: Instruction removed from duplicated block: B:25:0x0068, please report this as an issue */
    protected void parseUserData(SmsMessage.PduParser pduParser, boolean z) {
        int i;
        boolean z2 = false;
        int i2 = 0;
        int i3 = 240;
        if ((this.mDataCodingScheme & 128) == 0) {
            boolean z3 = (this.mDataCodingScheme & 32) != 0;
            z2 = (this.mDataCodingScheme & 16) != 0;
            if (z3) {
                Rlog.w(LOG_TAG, "4 - Unsupported SMS data coding scheme (compression) " + (this.mDataCodingScheme & 255));
            } else {
                int i4 = (this.mDataCodingScheme >> 2) & 3;
                if (i4 == 0) {
                    i2 = 1;
                } else if (i4 != 1) {
                    if (i4 == 2) {
                        i2 = 3;
                    } else if (i4 == 3) {
                        Rlog.w(LOG_TAG, "1 - Unsupported SMS data coding scheme " + (this.mDataCodingScheme & 255));
                        i2 = 2;
                    }
                } else if (Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_allowed)) {
                    i2 = 2;
                } else {
                    Rlog.w(LOG_TAG, "1 - Unsupported SMS data coding scheme " + (this.mDataCodingScheme & 255));
                    i2 = 2;
                }
            }
        } else if ((this.mDataCodingScheme & 240) == 240) {
            z2 = true;
            i2 = (this.mDataCodingScheme & 4) == 0 ? 1 : 2;
        } else if ((this.mDataCodingScheme & 240) == 192 || (this.mDataCodingScheme & 240) == 208 || (this.mDataCodingScheme & 240) == 224) {
            i2 = (this.mDataCodingScheme & 240) == 224 ? 3 : 1;
            boolean z4 = (this.mDataCodingScheme & 8) == 8;
            if ((this.mDataCodingScheme & 3) == 0) {
                this.mIsMwi = true;
                this.mMwiSense = z4;
                this.mMwiDontStore = (this.mDataCodingScheme & 240) == 192;
                if (z4) {
                    this.mVoiceMailCount = -1;
                } else {
                    this.mVoiceMailCount = 0;
                }
                Rlog.w(LOG_TAG, "MWI in DCS for Vmail. DCS = " + (this.mDataCodingScheme & 255) + " Dont store = " + this.mMwiDontStore + " vmail count = " + this.mVoiceMailCount);
            } else {
                this.mIsMwi = false;
                Rlog.w(LOG_TAG, "MWI in DCS for fax/email/other: " + (this.mDataCodingScheme & 255));
            }
        } else if ((this.mDataCodingScheme & 192) != 128) {
            Rlog.w(LOG_TAG, "3 - Unsupported SMS data coding scheme " + (this.mDataCodingScheme & 255));
        } else if (this.mDataCodingScheme == 132) {
            i2 = 4;
        } else {
            Rlog.w(LOG_TAG, "5 - Unsupported SMS data coding scheme " + (this.mDataCodingScheme & 255));
        }
        int iConstructUserData = pduParser.constructUserData(z, i2 == 1);
        this.mUserData = pduParser.getUserData();
        this.mUserDataHeader = pduParser.getUserDataHeader();
        this.mEncodingType = i2;
        if (!z || this.mUserDataHeader.specialSmsMsgList.size() == 0) {
            i = 0;
        } else {
            for (SmsHeader.SpecialSmsMsg specialSmsMsg : this.mUserDataHeader.specialSmsMsgList) {
                int i5 = specialSmsMsg.msgIndType & 255;
                if (i5 == 0 || i5 == 128) {
                    this.mIsMwi = true;
                    if (i5 == 128) {
                        this.mMwiDontStore = false;
                    } else if (!this.mMwiDontStore) {
                        if ((this.mDataCodingScheme & i3) != 208 && (this.mDataCodingScheme & i3) != 224) {
                            this.mMwiDontStore = true;
                        } else if ((this.mDataCodingScheme & 3) != 0) {
                            this.mMwiDontStore = true;
                        }
                    }
                    this.mVoiceMailCount = specialSmsMsg.msgCount & 255;
                    if (this.mVoiceMailCount > 0) {
                        this.mMwiSense = true;
                    } else {
                        this.mMwiSense = false;
                    }
                    Rlog.w(LOG_TAG, "MWI in TP-UDH for Vmail. Msg Ind = " + i5 + " Dont store = " + this.mMwiDontStore + " Vmail count = " + this.mVoiceMailCount);
                } else {
                    Rlog.w(LOG_TAG, "TP_UDH fax/email/extended msg/multisubscriber profile. Msg Ind = " + i5);
                }
                i3 = 240;
            }
            i = 0;
        }
        if (i2 == 0) {
            this.mMessageBody = null;
        } else if (i2 == 1) {
            int i6 = z ? this.mUserDataHeader.languageTable : i;
            if (z) {
                i = this.mUserDataHeader.languageShiftTable;
            }
            this.mMessageBody = pduParser.getUserDataGSM7Bit(iConstructUserData, i6, i);
        } else if (i2 != 2) {
            if (i2 == 3) {
                this.mMessageBody = pduParser.getUserDataUCS2(iConstructUserData);
            } else if (i2 == 4) {
                this.mMessageBody = pduParser.getUserDataKSC5601(iConstructUserData);
            }
        } else if (Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_allowed)) {
            this.mMessageBody = pduParser.getUserDataGSM8bit(iConstructUserData);
        } else {
            this.mMessageBody = null;
        }
        if (this.mMessageBody != null) {
            parseMessageBody();
        }
        if (!z2) {
            this.messageClass = SmsConstants.MessageClass.UNKNOWN;
            return;
        }
        int i7 = this.mDataCodingScheme & 3;
        if (i7 == 0) {
            this.messageClass = SmsConstants.MessageClass.CLASS_0;
            return;
        }
        if (i7 == 1) {
            this.messageClass = SmsConstants.MessageClass.CLASS_1;
        } else if (i7 == 2) {
            this.messageClass = SmsConstants.MessageClass.CLASS_2;
        } else {
            if (i7 != 3) {
                return;
            }
            this.messageClass = SmsConstants.MessageClass.CLASS_3;
        }
    }
}
