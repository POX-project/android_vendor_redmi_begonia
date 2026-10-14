package com.mediatek.internal.telephony.phb;

import android.os.Parcel;
import android.os.Parcelable;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.uicc.AdnRecord;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.MtkPhoneNumberUtils;
import com.mediatek.internal.telephony.cat.BipUtils;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.io.UnsupportedEncodingException;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public class MtkAdnRecord extends AdnRecord {
    public static final Parcelable.Creator<MtkAdnRecord> CREATOR = new Parcelable.Creator<MtkAdnRecord>() { // from class: com.mediatek.internal.telephony.phb.MtkAdnRecord.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkAdnRecord createFromParcel(Parcel parcel) {
            int i = parcel.readInt();
            int i2 = parcel.readInt();
            String string = parcel.readString();
            String string2 = parcel.readString();
            String[] stringArray = parcel.readStringArray();
            String string3 = parcel.readString();
            String string4 = parcel.readString();
            String string5 = parcel.readString();
            String string6 = parcel.readString();
            int i3 = parcel.readInt();
            String string7 = parcel.readString();
            MtkAdnRecord mtkAdnRecord = new MtkAdnRecord(i, i2, string, string2, string3, string4, string5, stringArray, string6);
            mtkAdnRecord.setAasIndex(i3);
            mtkAdnRecord.setSne(string7);
            return mtkAdnRecord;
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkAdnRecord[] newArray(int i) {
            return new MtkAdnRecord[i];
        }
    };
    static final String LOG_TAG = "MtkAdnRecord";
    private static final String SIM_NUM_PATTERN = "[+]?[[0-9][*#pw,;]]+[[0-9][*#pw,;]]*";
    int mAas;
    String mAdditionalNumber;
    String mAdditionalNumber2;
    String mAdditionalNumber3;
    String mGrpIds;
    int mResult;
    String mSne;

    public MtkAdnRecord(int i, int i2, String str, String str2) {
        super(i, i2, str, str2, (String[]) null);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
        this.mAdditionalNumber = "";
        this.mAdditionalNumber2 = "";
        this.mAdditionalNumber3 = "";
        this.mGrpIds = null;
    }

    public MtkAdnRecord(int i, int i2, String str, String str2, String str3) {
        super(i, i2, str, str2, (String[]) null);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
        this.mAdditionalNumber = str3;
        this.mAdditionalNumber2 = "";
        this.mAdditionalNumber3 = "";
        this.mGrpIds = null;
    }

    public MtkAdnRecord(int i, int i2, String str, String str2, String str3, String str4, String str5, String[] strArr, String str6) {
        super(i, i2, str, str2, strArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
        this.mAdditionalNumber = str3;
        this.mAdditionalNumber2 = str4;
        this.mAdditionalNumber3 = str5;
        this.mGrpIds = str6;
    }

    public MtkAdnRecord(int i, int i2, String str, String str2, String str3, String[] strArr, String str4) {
        super(i, i2, str, str2, strArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
        this.mAdditionalNumber = str3;
        this.mAdditionalNumber2 = "";
        this.mAdditionalNumber3 = "";
        this.mGrpIds = str4;
    }

    public MtkAdnRecord(int i, int i2, String str, String str2, String[] strArr) {
        super(i, i2, str, str2, strArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
        this.mAdditionalNumber = "";
        this.mAdditionalNumber2 = "";
        this.mAdditionalNumber3 = "";
        this.mGrpIds = null;
    }

    public MtkAdnRecord(int i, int i2, byte[] bArr) {
        super(i, i2, bArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
    }

    public MtkAdnRecord(String str, String str2) {
        super(str, str2);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
    }

    public MtkAdnRecord(String str, String str2, String str3) {
        this(0, 0, str, str2, str3);
    }

    public MtkAdnRecord(String str, String str2, String[] strArr) {
        super(str, str2, strArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
    }

    public MtkAdnRecord(byte[] bArr) {
        super(bArr);
        this.mAdditionalNumber = null;
        this.mAdditionalNumber2 = null;
        this.mAdditionalNumber3 = null;
        this.mAas = 0;
        this.mSne = null;
        this.mResult = 1;
    }

    private String getMaskString(String str) {
        if (str == null) {
            return "null";
        }
        if (str.length() <= 2) {
            return "xx";
        }
        return str.substring(0, str.length() >> 1) + "xxxxx";
    }

    private boolean isContainChineseChar(String str) {
        int length = str.length();
        for (int i = 0; i < length; i++) {
            if (Pattern.matches("[一-龥]", str.substring(i, i + 1))) {
                return true;
            }
        }
        return false;
    }

    private boolean isPhoneNumberInvaild(String str) {
        return (TextUtils.isEmpty(str) || Pattern.matches(SIM_NUM_PATTERN, MtkPhoneNumberUtils.extractCLIRPortion(MtkPhoneNumberUtils.stripSeparators(str)))) ? false : true;
    }

    private void parseRecord(byte[] bArr) {
        try {
            this.mAlphaTag = IccUtils.adnStringFieldToString(bArr, 0, bArr.length - 14);
            int length = bArr.length - 14;
            int i = bArr[length] & PplMessageManager.Type.INVALID;
            if (i > 11) {
                this.mNumber = "";
                return;
            }
            this.mNumber = MtkPhoneNumberUtils.calledPartyBCDToString(bArr, length + 1, i);
            this.mExtRecord = bArr[bArr.length - 1] & PplMessageManager.Type.INVALID;
            this.mEmails = null;
            this.mAdditionalNumber = "";
            this.mAdditionalNumber2 = "";
            this.mAdditionalNumber3 = "";
            this.mGrpIds = null;
        } catch (RuntimeException e) {
            Rlog.w(LOG_TAG, "Error parsing AdnRecordEx", e);
            this.mNumber = "";
            this.mAlphaTag = "";
            this.mEmails = null;
            this.mAdditionalNumber = "";
            this.mAdditionalNumber2 = "";
            this.mAdditionalNumber3 = "";
            this.mGrpIds = null;
        }
    }

    public void appendExtRecord(byte[] bArr) {
        try {
            if (bArr.length == 13 && (bArr[0] & 3) == 2 && (bArr[1] & PplMessageManager.Type.INVALID) <= 10) {
                this.mNumber += MtkPhoneNumberUtils.calledPartyBCDFragmentToString(bArr, 2, bArr[1] & PplMessageManager.Type.INVALID);
            }
        } catch (RuntimeException e) {
            Rlog.w(LOG_TAG, "Error parsing AdnRecordEx ext record", e);
        }
    }

    public byte[] buildAdnString(int i) {
        Rlog.i(LOG_TAG, "in BuildAdnString");
        int i2 = i - 14;
        int length = 0;
        byte[] bArr = new byte[i];
        for (int i3 = 0; i3 < i; i3++) {
            bArr[i3] = -1;
        }
        if (isPhoneNumberInvaild(this.mNumber)) {
            Rlog.w(LOG_TAG, "[buildAdnString] invaild number");
            this.mResult = -15;
            return null;
        }
        if (TextUtils.isEmpty(this.mNumber)) {
            Rlog.w(LOG_TAG, "[buildAdnString] Empty dialing number");
            this.mResult = 1;
        } else {
            if (this.mNumber.length() > 20) {
                this.mResult = -1;
                Rlog.w(LOG_TAG, "[buildAdnString] Max length of dialing number is 20");
                return null;
            }
            if (this.mAlphaTag != null && this.mAlphaTag.length() > i2) {
                this.mResult = -2;
                Rlog.w(LOG_TAG, "[buildAdnString] Max length of tag is " + i2);
                return null;
            }
            this.mResult = 1;
            try {
                byte[] bArrNumberToCalledPartyBCD = MtkPhoneNumberUtils.numberToCalledPartyBCD(this.mNumber);
                if (bArrNumberToCalledPartyBCD == null) {
                    return null;
                }
                System.arraycopy(bArrNumberToCalledPartyBCD, 0, bArr, i2 + 1, bArrNumberToCalledPartyBCD.length);
                bArr[i2 + 0] = (byte) bArrNumberToCalledPartyBCD.length;
                bArr[i2 + 12] = -1;
                bArr[i2 + 13] = -1;
            } catch (RuntimeException e) {
                throw new RuntimeException("invalid number for BCD ", new CommandException(CommandException.Error.OEM_ERROR_12));
            }
        }
        if (!TextUtils.isEmpty(this.mAlphaTag)) {
            if (isContainChineseChar(this.mAlphaTag)) {
                Rlog.i(LOG_TAG, "[buildAdnString] getBytes,alphaTag:" + this.mAlphaTag);
                try {
                    Rlog.i(LOG_TAG, "call getBytes");
                    byte[] bytes = this.mAlphaTag.getBytes("utf-16be");
                    Rlog.i(LOG_TAG, "byteTag," + IccUtils.bytesToHexString(bytes));
                    System.arraycopy(new byte[]{BipUtils.TCP_STATUS_ESTABLISHED}, 0, bArr, 0, 1);
                    if (bytes.length > bArr.length - 1) {
                        this.mResult = -2;
                        Rlog.w(LOG_TAG, "[buildAdnString] after getBytes byteTag.length:" + bytes.length + " adnString.length:" + bArr.length);
                        return null;
                    }
                    System.arraycopy(bytes, 0, bArr, 1, bytes.length);
                    length = bytes.length + 1;
                    Rlog.i(LOG_TAG, "arrarString" + IccUtils.bytesToHexString(bArr));
                } catch (UnsupportedEncodingException e2) {
                    Rlog.w(LOG_TAG, "[buildAdnString] getBytes exception");
                    return null;
                }
            } else {
                Rlog.i(LOG_TAG, "[buildAdnString] stringToGsm8BitPacked");
                byte[] bArrStringToGsm8BitPacked = GsmAlphabet.stringToGsm8BitPacked(this.mAlphaTag);
                length = bArrStringToGsm8BitPacked.length;
                if (length > bArr.length) {
                    this.mResult = -2;
                    Rlog.w(LOG_TAG, "[buildAdnString] after stringToGsm8BitPacked byteTag.length:" + bArrStringToGsm8BitPacked.length + " adnString.length:" + bArr.length);
                    return null;
                }
                System.arraycopy(bArrStringToGsm8BitPacked, 0, bArr, 0, bArrStringToGsm8BitPacked.length);
            }
        }
        if (this.mAlphaTag == null || length <= i2) {
            return bArr;
        }
        this.mResult = -2;
        Rlog.w(LOG_TAG, "[buildAdnString] Max length of tag is " + i2 + ",alphaIdLength:" + length);
        return null;
    }

    public int getAasIndex() {
        return this.mAas;
    }

    public String getAdditionalNumber() {
        return this.mAdditionalNumber;
    }

    public String getAdditionalNumber(int i) {
        if (i == 0) {
            return this.mAdditionalNumber;
        }
        if (i == 1) {
            return this.mAdditionalNumber2;
        }
        if (i == 2) {
            return this.mAdditionalNumber3;
        }
        Rlog.e(LOG_TAG, "getAdditionalNumber Error:" + i);
        return null;
    }

    public int getErrorNumber() {
        return this.mResult;
    }

    public String getGrpIds() {
        return this.mGrpIds;
    }

    public String getSne() {
        return this.mSne;
    }

    public boolean isEmpty() {
        return TextUtils.isEmpty(this.mAlphaTag) && TextUtils.isEmpty(this.mNumber) && TextUtils.isEmpty(this.mAdditionalNumber) && this.mEmails == null;
    }

    public boolean isEqual(MtkAdnRecord mtkAdnRecord) {
        return stringCompareNullEqualsEmpty(this.mAlphaTag, mtkAdnRecord.mAlphaTag) && stringCompareNullEqualsEmpty(this.mNumber, mtkAdnRecord.mNumber);
    }

    public void setAasIndex(int i) {
        this.mAas = i;
    }

    public void setAnr(String str) {
        this.mAdditionalNumber = str;
    }

    public void setAnr(String str, int i) {
        if (i == 0) {
            this.mAdditionalNumber = str;
            return;
        }
        if (i == 1) {
            this.mAdditionalNumber2 = str;
            return;
        }
        if (i == 2) {
            this.mAdditionalNumber3 = str;
            return;
        }
        Rlog.e(LOG_TAG, "setAnr Error:" + i);
    }

    public void setGrpIds(String str) {
        this.mGrpIds = str;
    }

    public void setRecordIndex(int i) {
        this.mRecordNumber = i;
    }

    public void setSne(String str) {
        this.mSne = str;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("ADN Record:");
        sb.append(this.mRecordNumber);
        sb.append(",alphaTag:");
        sb.append(getMaskString(this.mAlphaTag));
        sb.append(",number:");
        sb.append(getMaskString(this.mNumber));
        sb.append(",aas:");
        sb.append(this.mAas);
        sb.append(",emails:");
        sb.append(this.mEmails == null ? "null" : getMaskString(this.mEmails[0]));
        sb.append(",grpIds:");
        sb.append(this.mGrpIds);
        sb.append(",sne:");
        sb.append(this.mSne);
        return sb.toString();
    }

    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeString(this.mAdditionalNumber);
        parcel.writeString(this.mAdditionalNumber2);
        parcel.writeString(this.mAdditionalNumber3);
        parcel.writeString(this.mGrpIds);
        parcel.writeInt(this.mAas);
        parcel.writeString(this.mSne);
    }
}
