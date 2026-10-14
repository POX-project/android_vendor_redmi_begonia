package mediatek.telephony;

import android.R;
import android.content.res.Resources;
import android.telephony.Rlog;
import android.telephony.SmsManager;
import android.telephony.SmsMessage;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.Sms7BitEncodingTranslator;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsMessage extends SmsMessage {
    private static final String LOG_TAG = "MtkSmsMessage";
    public static final int MWI_EMAIL = 2;
    public static final int MWI_FAX = 1;
    public static final int MWI_OTHER = 3;
    public static final int MWI_VIDEO = 7;
    public static final int MWI_VOICEMAIL = 0;
    private String mFormat;

    public MtkSmsMessage() {
        this(getSmsFacility());
        if (isCdmaVoice()) {
            this.mFormat = "3gpp2";
        } else {
            this.mFormat = "3gpp";
        }
    }

    private MtkSmsMessage(SmsMessageBase smsMessageBase) {
        super(smsMessageBase);
    }

    public static int[] calculateLength(CharSequence charSequence, boolean z) {
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = useCdmaFormatForMoSms() ? com.android.internal.telephony.cdma.SmsMessage.calculateLength(charSequence, z, true) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.calculateLength(charSequence, z);
        return new int[]{textEncodingDetailsCalculateLength.msgCount, textEncodingDetailsCalculateLength.codeUnitCount, textEncodingDetailsCalculateLength.codeUnitsRemaining, textEncodingDetailsCalculateLength.codeUnitSize};
    }

    public static int[] calculateLength(CharSequence charSequence, boolean z, int i) {
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = useCdmaFormatForMoSms() ? com.mediatek.internal.telephony.cdma.MtkSmsMessage.calculateLength(charSequence, z, i) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.calculateLength(charSequence, z, i);
        return new int[]{textEncodingDetailsCalculateLength.msgCount, textEncodingDetailsCalculateLength.codeUnitCount, textEncodingDetailsCalculateLength.codeUnitsRemaining, textEncodingDetailsCalculateLength.codeUnitSize};
    }

    public static int[] calculateLength(String str, boolean z) {
        return calculateLength((CharSequence) str, z);
    }

    public static MtkSmsMessage createFromEfRecord(int i, byte[] bArr) {
        com.android.internal.telephony.cdma.SmsMessage smsMessageCreateFromEfRecord = isCdmaVoice() ? com.mediatek.internal.telephony.cdma.MtkSmsMessage.createFromEfRecord(i, bArr) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.createFromEfRecord(i, bArr);
        if (smsMessageCreateFromEfRecord == null) {
            Rlog.e(LOG_TAG, "createFromEfRecord(): wrappedMessage is null");
            return null;
        }
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage(smsMessageCreateFromEfRecord);
        if (isCdmaVoice()) {
            mtkSmsMessage.mFormat = "3gpp2";
        } else {
            mtkSmsMessage.mFormat = "3gpp";
        }
        return mtkSmsMessage;
    }

    public static MtkSmsMessage createFromEfRecord(int i, byte[] bArr, String str) {
        com.android.internal.telephony.cdma.SmsMessage smsMessageCreateFromEfRecord;
        Rlog.d(LOG_TAG, "createFromEfRecord(): format " + str);
        if ("3gpp2".equals(str)) {
            smsMessageCreateFromEfRecord = com.mediatek.internal.telephony.cdma.MtkSmsMessage.createFromEfRecord(i, bArr);
        } else {
            if (!"3gpp".equals(str)) {
                Rlog.e(LOG_TAG, "createFromEfRecord(): unsupported message format " + str);
                return null;
            }
            smsMessageCreateFromEfRecord = com.mediatek.internal.telephony.gsm.MtkSmsMessage.createFromEfRecord(i, bArr);
        }
        if (smsMessageCreateFromEfRecord == null) {
            return null;
        }
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage(smsMessageCreateFromEfRecord);
        mtkSmsMessage.mFormat = str;
        return mtkSmsMessage;
    }

    @Deprecated
    public static MtkSmsMessage createFromPdu(byte[] bArr) {
        int currentPhoneType = TelephonyManager.getDefault().getCurrentPhoneType();
        MtkSmsMessage mtkSmsMessageCreateFromPdu = createFromPdu(bArr, 2 == currentPhoneType ? "3gpp2" : "3gpp");
        if (mtkSmsMessageCreateFromPdu == null || mtkSmsMessageCreateFromPdu.mWrappedSmsMessage == null) {
            return createFromPdu(bArr, 2 == currentPhoneType ? "3gpp" : "3gpp2");
        }
        return mtkSmsMessageCreateFromPdu;
    }

    public static MtkSmsMessage createFromPdu(byte[] bArr, String str) {
        SmsMessageBase smsMessageBaseCreateFromPdu;
        if ("3gpp2".equals(str)) {
            smsMessageBaseCreateFromPdu = com.mediatek.internal.telephony.cdma.MtkSmsMessage.newMtkSmsMessage(com.android.internal.telephony.cdma.SmsMessage.createFromPdu(bArr));
        } else {
            if (!"3gpp".equals(str)) {
                Rlog.e(LOG_TAG, "createFromPdu(): unsupported message format " + str);
                return null;
            }
            smsMessageBaseCreateFromPdu = com.mediatek.internal.telephony.gsm.MtkSmsMessage.createFromPdu(bArr);
        }
        if (smsMessageBaseCreateFromPdu == null) {
            Rlog.e(LOG_TAG, "createFromPdu(): wrappedMessage is null");
            return null;
        }
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage(smsMessageBaseCreateFromPdu);
        mtkSmsMessage.mFormat = str;
        return mtkSmsMessage;
    }

    public static ArrayList<String> fragmentText(String str) {
        int i;
        int iFindNextUnicodePosition;
        int i2;
        boolean zUseCdmaFormatForMoSms = useCdmaFormatForMoSms();
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = zUseCdmaFormatForMoSms ? com.android.internal.telephony.cdma.SmsMessage.calculateLength(str, false, true) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.calculateLength(str, false);
        if (textEncodingDetailsCalculateLength.codeUnitSize == 1) {
            if (textEncodingDetailsCalculateLength.languageTable == 0 || textEncodingDetailsCalculateLength.languageShiftTable == 0) {
                i2 = (textEncodingDetailsCalculateLength.languageTable == 0 && textEncodingDetailsCalculateLength.languageShiftTable == 0) ? 0 : 4;
            } else {
                i2 = 7;
            }
            if (textEncodingDetailsCalculateLength.msgCount > 1) {
                i2 += 6;
            }
            if (i2 != 0) {
                i2++;
            }
            i = 160 - i2;
        } else if (textEncodingDetailsCalculateLength.msgCount > 1) {
            i = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA;
            if (!hasEmsSupport() && textEncodingDetailsCalculateLength.msgCount < 10) {
                i = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA - 2;
            }
        } else {
            i = 140;
        }
        String strTranslate = Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_default) ? Sms7BitEncodingTranslator.translate(str, zUseCdmaFormatForMoSms) : null;
        if (TextUtils.isEmpty(strTranslate)) {
            strTranslate = str;
        }
        int i3 = 0;
        int length = strTranslate.length();
        ArrayList<String> arrayList = new ArrayList<>(textEncodingDetailsCalculateLength.msgCount);
        while (i3 < length) {
            if (textEncodingDetailsCalculateLength.codeUnitSize == 1) {
                iFindNextUnicodePosition = (useCdmaFormatForMoSms() && textEncodingDetailsCalculateLength.msgCount == 1) ? Math.min(i, length - i3) + i3 : GsmAlphabet.findGsmSeptetLimitIndex(strTranslate, i3, i, textEncodingDetailsCalculateLength.languageTable, textEncodingDetailsCalculateLength.languageShiftTable);
            } else {
                iFindNextUnicodePosition = SmsMessageBase.findNextUnicodePosition(i3, i, strTranslate);
            }
            if (iFindNextUnicodePosition <= i3 || iFindNextUnicodePosition > length) {
                Rlog.e(LOG_TAG, "fragmentText failed (" + i3 + " >= " + iFindNextUnicodePosition + " or " + iFindNextUnicodePosition + " >= " + length + ")");
                break;
            }
            arrayList.add(strTranslate.substring(i3, iFindNextUnicodePosition));
            i3 = iFindNextUnicodePosition;
        }
        return arrayList;
    }

    public static ArrayList<String> fragmentText(String str, int i) {
        int i2;
        int iFindNextUnicodePosition;
        int i3;
        boolean zUseCdmaFormatForMoSms = useCdmaFormatForMoSms();
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = zUseCdmaFormatForMoSms ? com.mediatek.internal.telephony.cdma.MtkSmsMessage.calculateLength(str, false, i) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.calculateLength(str, false, i);
        if (textEncodingDetailsCalculateLength.codeUnitSize == 1) {
            if (textEncodingDetailsCalculateLength.languageTable == 0 || textEncodingDetailsCalculateLength.languageShiftTable == 0) {
                i3 = (textEncodingDetailsCalculateLength.languageTable == 0 && textEncodingDetailsCalculateLength.languageShiftTable == 0) ? 0 : 4;
            } else {
                i3 = 7;
            }
            if (textEncodingDetailsCalculateLength.msgCount > 1) {
                i3 += 6;
            }
            if (i3 != 0) {
                i3++;
            }
            i2 = 160 - i3;
        } else if (textEncodingDetailsCalculateLength.msgCount > 1) {
            i2 = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA;
            if (!hasEmsSupport() && textEncodingDetailsCalculateLength.msgCount < 10) {
                i2 = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA - 2;
            }
        } else {
            i2 = 140;
        }
        String strTranslate = Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_default) ? Sms7BitEncodingTranslator.translate(str, zUseCdmaFormatForMoSms) : null;
        if (TextUtils.isEmpty(strTranslate)) {
            strTranslate = str;
        }
        int i4 = 0;
        int length = strTranslate.length();
        ArrayList<String> arrayList = new ArrayList<>(textEncodingDetailsCalculateLength.msgCount);
        while (i4 < length) {
            if (textEncodingDetailsCalculateLength.codeUnitSize == 1) {
                iFindNextUnicodePosition = (useCdmaFormatForMoSms() && textEncodingDetailsCalculateLength.msgCount == 1) ? Math.min(i2, length - i4) + i4 : GsmAlphabet.findGsmSeptetLimitIndex(strTranslate, i4, i2, textEncodingDetailsCalculateLength.languageTable, textEncodingDetailsCalculateLength.languageShiftTable);
            } else {
                iFindNextUnicodePosition = SmsMessageBase.findNextUnicodePosition(i4, i2, strTranslate);
            }
            if (iFindNextUnicodePosition <= i4 || iFindNextUnicodePosition > length) {
                Rlog.e(LOG_TAG, "fragmentText failed (" + i4 + " >= " + iFindNextUnicodePosition + " or " + iFindNextUnicodePosition + " >= " + length + ")");
                break;
            }
            arrayList.add(strTranslate.substring(i4, iFindNextUnicodePosition));
            i4 = iFindNextUnicodePosition;
        }
        return arrayList;
    }

    private static final SmsMessageBase getSmsFacility() {
        return isCdmaVoice() ? new com.mediatek.internal.telephony.cdma.MtkSmsMessage() : new com.mediatek.internal.telephony.gsm.MtkSmsMessage();
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, String str3, boolean z) {
        com.android.internal.telephony.cdma.SmsMessage.SubmitPdu submitPdu = useCdmaFormatForMoSms() ? com.android.internal.telephony.cdma.SmsMessage.getSubmitPdu(str, str2, str3, z, (SmsHeader) null) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.getSubmitPdu(str, str2, str3, z);
        if (submitPdu != null) {
            return new SmsMessage.SubmitPdu(submitPdu);
        }
        return null;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, String str3, boolean z, byte[] bArr) {
        com.android.internal.telephony.cdma.SmsMessage.SubmitPdu submitPdu = useCdmaFormatForMoSms() ? com.android.internal.telephony.cdma.SmsMessage.getSubmitPdu(str, str2, str3, z, SmsHeader.fromByteArray(bArr)) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.getSubmitPdu(str, str2, str3, z, bArr);
        if (submitPdu != null) {
            return new SmsMessage.SubmitPdu(submitPdu);
        }
        return null;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, short s, short s2, byte[] bArr, boolean z) {
        Rlog.d(LOG_TAG, "[xj android.telephony.SmsMessage getSubmitPdu");
        com.android.internal.telephony.cdma.SmsMessage.SubmitPdu submitPdu = useCdmaFormatForMoSms() ? com.mediatek.internal.telephony.cdma.MtkSmsMessage.getSubmitPdu(str, str2, s, bArr, z) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.getSubmitPdu(str, str2, s, s2, bArr, z);
        if (submitPdu != null) {
            return new SmsMessage.SubmitPdu(submitPdu);
        }
        return null;
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, short s, byte[] bArr, boolean z) {
        com.android.internal.telephony.cdma.SmsMessage.SubmitPdu submitPdu = useCdmaFormatForMoSms() ? com.android.internal.telephony.cdma.SmsMessage.getSubmitPdu(str, str2, s, bArr, z) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.getSubmitPdu(str, str2, s, bArr, z);
        if (submitPdu != null) {
            return new SmsMessage.SubmitPdu(submitPdu);
        }
        return null;
    }

    public static int getTPLayerLengthForPDU(String str) {
        return isCdmaVoice() ? com.android.internal.telephony.cdma.SmsMessage.getTPLayerLengthForPDU(str) : com.mediatek.internal.telephony.gsm.MtkSmsMessage.getTPLayerLengthForPDU(str);
    }

    private boolean isCdma() {
        return 2 == TelephonyManager.getDefault().getCurrentPhoneType(this.mSubId);
    }

    public static MtkSmsMessage newFromCDS(byte[] bArr) {
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage(com.mediatek.internal.telephony.gsm.MtkSmsMessage.newFromCDS(bArr));
        mtkSmsMessage.mFormat = "3gpp";
        return mtkSmsMessage;
    }

    public static MtkSmsMessage newFromCMT(String[] strArr) {
        com.mediatek.internal.telephony.gsm.MtkSmsMessage mtkSmsMessageNewFromCMT = com.mediatek.internal.telephony.gsm.MtkSmsMessage.newFromCMT(strArr);
        if (mtkSmsMessageNewFromCMT == null) {
            Rlog.e(LOG_TAG, "newFromCMT(): wrappedMessage is null");
            return null;
        }
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage(mtkSmsMessageNewFromCMT);
        mtkSmsMessage.mFormat = "3gpp";
        return mtkSmsMessage;
    }

    protected static boolean useCdmaFormatForMoSms() {
        return !MtkSmsManager.getDefault().isImsSmsSupported() ? isCdmaVoice() : "3gpp2".equals(MtkSmsManager.getDefault().getImsSmsFormat());
    }

    public ArrayList<String> fragmentTextUsingTed(int i, String str, GsmAlphabet.TextEncodingDetails textEncodingDetails) {
        boolean zEquals;
        int i2;
        int iFindNextUnicodePosition;
        int i3;
        if (SmsManager.getSmsManagerForSubscriptionId(i).isImsSmsSupported()) {
            zEquals = "3gpp2".equals(SmsManager.getSmsManagerForSubscriptionId(i).getImsSmsFormat());
        } else {
            zEquals = TelephonyManager.getDefault().getCurrentPhoneType() == 2;
        }
        if (textEncodingDetails.codeUnitSize == 1) {
            if (textEncodingDetails.languageTable == 0 || textEncodingDetails.languageShiftTable == 0) {
                i3 = (textEncodingDetails.languageTable == 0 && textEncodingDetails.languageShiftTable == 0) ? 0 : 4;
            } else {
                i3 = 7;
            }
            if (textEncodingDetails.msgCount > 1) {
                i3 += 6;
            }
            if (i3 != 0) {
                i3++;
            }
            i2 = 160 - i3;
        } else if (textEncodingDetails.msgCount > 1) {
            i2 = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA;
            if (!hasEmsSupport() && textEncodingDetails.msgCount < 10) {
                i2 = MtkServiceState.RIL_RADIO_TECHNOLOGY_DC_UPA - 2;
            }
        } else {
            i2 = 140;
        }
        String strTranslate = Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_default) ? Sms7BitEncodingTranslator.translate(str, zEquals) : null;
        if (TextUtils.isEmpty(strTranslate)) {
            strTranslate = str;
        }
        int i4 = 0;
        int length = strTranslate.length();
        ArrayList<String> arrayList = new ArrayList<>(textEncodingDetails.msgCount);
        while (i4 < length) {
            if (textEncodingDetails.codeUnitSize == 1) {
                iFindNextUnicodePosition = (zEquals && textEncodingDetails.msgCount == 1) ? Math.min(i2, length - i4) + i4 : GsmAlphabet.findGsmSeptetLimitIndex(strTranslate, i4, i2, textEncodingDetails.languageTable, textEncodingDetails.languageShiftTable);
            } else {
                iFindNextUnicodePosition = SmsMessageBase.findNextUnicodePosition(i4, i2, strTranslate);
            }
            if (iFindNextUnicodePosition <= i4 || iFindNextUnicodePosition > length) {
                Rlog.e(LOG_TAG, "fragmentText failed (" + i4 + " >= " + iFindNextUnicodePosition + " or " + iFindNextUnicodePosition + " >= " + length + ")");
                break;
            }
            arrayList.add(strTranslate.substring(i4, iFindNextUnicodePosition));
            i4 = iFindNextUnicodePosition;
        }
        return arrayList;
    }

    public String getDestinationAddress() {
        return "3gpp2".equals(this.mFormat) ? this.mWrappedSmsMessage.getDestinationAddress() : this.mWrappedSmsMessage.getDestinationAddress();
    }

    public int getEncodingType() {
        if ("3gpp2".equals(this.mFormat)) {
            return 0;
        }
        return this.mWrappedSmsMessage.getEncodingType();
    }

    public byte[] getSmsc() {
        Rlog.d(LOG_TAG, "getSmsc");
        byte[] pdu = getPdu();
        if (isCdma()) {
            Rlog.d(LOG_TAG, "getSmsc with CDMA and return null");
            return null;
        }
        if (pdu == null) {
            Rlog.d(LOG_TAG, "pdu is null");
            return null;
        }
        byte[] bArr = new byte[(pdu[0] & 255) + 1];
        try {
            System.arraycopy(pdu, 0, bArr, 0, bArr.length);
            return bArr;
        } catch (ArrayIndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "Out of boudns");
            return null;
        }
    }

    public byte[] getTpdu() {
        Rlog.d(LOG_TAG, "getTpdu");
        byte[] pdu = getPdu();
        if (isCdma()) {
            Rlog.d(LOG_TAG, "getSmsc with CDMA and return null");
            return pdu;
        }
        if (pdu == null) {
            Rlog.d(LOG_TAG, "pdu is null");
            return null;
        }
        int i = (pdu[0] & 255) + 1;
        byte[] bArr = new byte[pdu.length - i];
        try {
            System.arraycopy(pdu, i, bArr, 0, bArr.length);
            return bArr;
        } catch (ArrayIndexOutOfBoundsException e) {
            Rlog.e(LOG_TAG, "Out of boudns");
            return null;
        }
    }

    public SmsHeader getUserDataHeader() {
        return this.mWrappedSmsMessage.getUserDataHeader();
    }
}
