package com.mediatek.internal.telephony.cdma;

import android.R;
import android.content.res.Resources;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.text.TextUtils;
import android.util.Log;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.SmsAddress;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.cdma.SmsMessage;
import com.android.internal.telephony.cdma.sms.BearerData;
import com.android.internal.telephony.cdma.sms.CdmaSmsAddress;
import com.android.internal.telephony.cdma.sms.CdmaSmsSubaddress;
import com.android.internal.telephony.cdma.sms.SmsEnvelope;
import com.android.internal.telephony.cdma.sms.UserData;
import com.android.internal.util.BitwiseInputStream;
import com.android.internal.util.HexDump;
import com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils;
import com.mediatek.internal.telephony.cdma.pluscode.PlusCodeProcessor;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsMessage extends SmsMessage {
    private static final String LOGGABLE_TAG = "CDMA:SMS";
    private static final String LOG_TAG = "MtkCdmaSmsMessage";
    private static final int RETURN_ACK = 1;
    private static IPlusCodeUtils sPlusCodeUtils = PlusCodeProcessor.getPlusCodeUtils();

    public static GsmAlphabet.TextEncodingDetails calculateLength(CharSequence charSequence, boolean z, int i) {
        if (Resources.getSystem().getBoolean(R.bool.config_cecQuerySadTruehdEnabled_default)) {
            Rlog.d(LOG_TAG, "here use BearerData.calcTextEncodingDetails, but divide in parent class will use Sms7BitEncodingTranslator.translate(messageBody) returned string instead again in this case, Caution!!");
            Rlog.d(LOG_TAG, "search calculateLengthCDMA for help!", new Throwable());
        }
        return BearerData.calcTextEncodingDetails(charSequence, z, true);
    }

    public static SmsMessage.SubmitPdu createEfPdu(String str, String str2, long j) {
        if (str == null || str2 == null) {
            return null;
        }
        UserData userData = new UserData();
        userData.payloadStr = str2;
        userData.userDataHeader = null;
        if (j > 0) {
            Rlog.d(LOG_TAG, "createEfPdu, input timeStamp = " + j + ", out scTimeMillis = " + j);
        } else {
            Rlog.d(LOG_TAG, "createEfPdu, input timeStamp = " + j + ", dont assign time zone to this invalid value");
        }
        return privateGetPdu(str, false, userData, j, -1, -1);
    }

    public static SmsMessage createFromEfRecord(int i, byte[] bArr) {
        try {
            MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
            ((SmsMessage) mtkSmsMessage).mIndexOnIcc = i;
            if ((bArr[0] & 1) == 0) {
                Rlog.w(LOG_TAG, "SMS parsing failed: Trying to parse a free record");
                return null;
            }
            ((SmsMessage) mtkSmsMessage).mStatusOnIcc = bArr[0] & 7;
            int i2 = bArr[1] & 255;
            byte[] bArr2 = new byte[i2];
            System.arraycopy(bArr, 2, bArr2, 0, i2);
            mtkSmsMessage.parsePduFromEfRecord(bArr2);
            return mtkSmsMessage;
        } catch (RuntimeException e) {
            Rlog.e(LOG_TAG, "SMS PDU parsing failed: ", e);
            return null;
        }
    }

    private static String getMaskString(String str) {
        if (str == null) {
            return "null";
        }
        if (str.length() <= 2) {
            return "xx";
        }
        return str.substring(0, str.length() >> 1) + "xxxxx";
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, UserData userData, boolean z) {
        return privateGetPdu(str, z, userData, 0L, -1, -1);
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, int i, int i2, byte[] bArr, boolean z) {
        SmsHeader.PortAddrs portAddrs = new SmsHeader.PortAddrs();
        portAddrs.destPort = i;
        portAddrs.origPort = i2;
        portAddrs.areEightBits = false;
        SmsHeader smsHeader = new SmsHeader();
        smsHeader.portAddrs = portAddrs;
        UserData userData = new UserData();
        if (i2 == 0) {
            userData.userDataHeader = null;
            Rlog.d(LOG_TAG, "getSubmitPdu(with dest&original port), clear the header.");
        } else {
            userData.userDataHeader = smsHeader;
        }
        userData.msgEncoding = 0;
        userData.msgEncodingSet = true;
        userData.payload = bArr;
        return privateGetSubmitPdu(str2, z, userData);
    }

    public static SmsMessage.SubmitPdu getSubmitPdu(String str, String str2, String str3, boolean z, SmsHeader smsHeader, int i, int i2, int i3, boolean z2) {
        int i4 = i2;
        if (str2 == null || str3 == null) {
            Log.e(LOG_TAG, "getSubmitPdu, null sms text or destination address. do nothing.");
            return null;
        }
        if (str2.isEmpty()) {
            Log.e(LOG_TAG, "getSubmitPdu, destination address is empty. do nothing.");
            return null;
        }
        if (str3.isEmpty()) {
            Log.e(LOG_TAG, "getSubmitPdu, message text is empty. do nothing.");
            return null;
        }
        if (i4 > 244 && i4 <= 255) {
            i4 = 244;
        }
        UserData userData = new UserData();
        userData.payloadStr = str3;
        userData.userDataHeader = smsHeader;
        if (i == 1) {
            userData.msgEncoding = z2 ? 2 : 9;
        } else if (i == 2) {
            userData.msgEncoding = 0;
        } else {
            userData.msgEncoding = 4;
        }
        userData.msgEncodingSet = true;
        return privateGetPdu(str2, z, userData, 0L, i4, i3);
    }

    private static String handlePlusCodeInternal(int i, String str) {
        String strRemoveIddNddAddPlusCodeForSms = sPlusCodeUtils.removeIddNddAddPlusCodeForSms(str);
        if (TextUtils.isEmpty(strRemoveIddNddAddPlusCodeForSms)) {
            return null;
        }
        if (i == 1 && str.charAt(0) != '+') {
            strRemoveIddNddAddPlusCodeForSms = "+" + strRemoveIddNddAddPlusCodeForSms;
        }
        Rlog.d(LOG_TAG, "handlePlusCodeInternal, ton = " + i + " number = " + getMaskString(str) + " the address = " + getMaskString(strRemoveIddNddAddPlusCodeForSms));
        return strRemoveIddNddAddPlusCodeForSms;
    }

    public static MtkSmsMessage newMtkSmsMessage(SmsMessage smsMessage) {
        if (smsMessage == null) {
            return null;
        }
        MtkSmsMessage mtkSmsMessage = new MtkSmsMessage();
        mtkSmsMessage.mScAddress = smsMessage.getServiceCenterAddress();
        mtkSmsMessage.mOriginatingAddress = smsMessage.mOriginatingAddress;
        mtkSmsMessage.mMessageBody = smsMessage.getMessageBody();
        mtkSmsMessage.mPseudoSubject = smsMessage.getPseudoSubject();
        mtkSmsMessage.mEmailFrom = smsMessage.getEmailFrom();
        mtkSmsMessage.mEmailBody = smsMessage.getEmailBody();
        mtkSmsMessage.mIsEmail = smsMessage.isEmail();
        mtkSmsMessage.mScTimeMillis = smsMessage.getTimestampMillis();
        mtkSmsMessage.mPdu = smsMessage.getPdu();
        mtkSmsMessage.mUserData = smsMessage.getUserData();
        mtkSmsMessage.mUserDataHeader = smsMessage.getUserDataHeader();
        mtkSmsMessage.mIsMwi = false;
        mtkSmsMessage.mMwiSense = false;
        mtkSmsMessage.mMwiDontStore = false;
        mtkSmsMessage.mStatusOnIcc = smsMessage.getStatusOnIcc();
        mtkSmsMessage.mIndexOnIcc = smsMessage.getIndexOnIcc();
        mtkSmsMessage.mMessageRef = smsMessage.mMessageRef;
        mtkSmsMessage.status = smsMessage.getStatus() >> 16;
        mtkSmsMessage.mEnvelope = smsMessage.mEnvelope;
        mtkSmsMessage.mBearerData = smsMessage.mBearerData;
        return mtkSmsMessage;
    }

    private static SmsMessage.SubmitPdu privateGetPdu(String str, boolean z, UserData userData, long j, int i, int i2) {
        CdmaSmsAddress cdmaSmsAddress = CdmaSmsAddress.parse(PhoneNumberUtils.cdmaCheckAndProcessPlusCodeForSms(str));
        if (cdmaSmsAddress == null) {
            return null;
        }
        if (cdmaSmsAddress.numberOfDigits > 36) {
            Rlog.d(LOG_TAG, "number of digit exceeds the SMS_ADDRESS_MAX");
            return null;
        }
        BearerData bearerData = new BearerData();
        bearerData.messageType = 2;
        bearerData.messageId = getNextMessageId();
        bearerData.deliveryAckReq = z;
        bearerData.userAckReq = false;
        bearerData.readAckReq = false;
        bearerData.reportReq = false;
        bearerData.userData = userData;
        if (j > 0) {
            bearerData.msgCenterTimeStamp = new BearerData.TimeStamp();
        }
        if (i >= 0) {
            bearerData.validityPeriodRelativeSet = true;
            bearerData.validityPeriodRelative = i;
        } else {
            bearerData.validityPeriodRelativeSet = false;
        }
        if (i2 >= 0) {
            bearerData.priorityIndicatorSet = true;
            bearerData.priority = i2;
        } else {
            bearerData.priorityIndicatorSet = false;
        }
        byte[] bArrEncode = BearerData.encode(bearerData);
        if (Rlog.isLoggable(LOGGABLE_TAG, 2)) {
            Rlog.d(LOG_TAG, "MO (encoded) BearerData = " + bearerData);
            if (bArrEncode != null) {
                Rlog.d(LOG_TAG, "MO raw BearerData = '" + HexDump.toHexString(bArrEncode) + "'");
            }
        }
        if (bArrEncode == null) {
            return null;
        }
        int i3 = bearerData.hasUserDataHeader ? 4101 : 4098;
        SmsEnvelope smsEnvelope = new SmsEnvelope();
        smsEnvelope.messageType = 0;
        smsEnvelope.teleService = i3;
        smsEnvelope.destAddress = cdmaSmsAddress;
        smsEnvelope.bearerReply = 1;
        smsEnvelope.bearerData = bArrEncode;
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(100);
            DataOutputStream dataOutputStream = new DataOutputStream(byteArrayOutputStream);
            dataOutputStream.writeInt(smsEnvelope.teleService);
            dataOutputStream.writeInt(0);
            dataOutputStream.writeInt(0);
            dataOutputStream.write(cdmaSmsAddress.digitMode);
            dataOutputStream.write(cdmaSmsAddress.numberMode);
            dataOutputStream.write(cdmaSmsAddress.ton);
            dataOutputStream.write(cdmaSmsAddress.numberPlan);
            dataOutputStream.write(cdmaSmsAddress.numberOfDigits);
            dataOutputStream.write(cdmaSmsAddress.origBytes, 0, cdmaSmsAddress.origBytes.length);
            dataOutputStream.write(0);
            dataOutputStream.write(0);
            dataOutputStream.write(0);
            dataOutputStream.write(bArrEncode.length);
            dataOutputStream.write(bArrEncode, 0, bArrEncode.length);
            dataOutputStream.close();
            SmsMessage.SubmitPdu submitPdu = new SmsMessage.SubmitPdu();
            submitPdu.encodedMessage = byteArrayOutputStream.toByteArray();
            submitPdu.encodedScAddress = null;
            return submitPdu;
        } catch (IOException e) {
            Rlog.e(LOG_TAG, "creating SubmitPdu failed: " + e);
            return null;
        }
    }

    private static void replaceIddNddWithPluscode(SmsAddress smsAddress) {
        if (smsAddress == null) {
            return;
        }
        String str = new String(smsAddress.origBytes);
        String strHandlePlusCodeInternal = handlePlusCodeInternal(smsAddress.ton, str);
        if (!TextUtils.isEmpty(strHandlePlusCodeInternal) && (!strHandlePlusCodeInternal.equals(str))) {
            smsAddress.origBytes = strHandlePlusCodeInternal.getBytes();
            smsAddress.address = strHandlePlusCodeInternal;
        }
    }

    public String getDestinationAddress() {
        return getOriginatingAddress();
    }

    public String getOriginatingAddress() {
        replaceIddNddWithPluscode(this.mOriginatingAddress);
        return super.getOriginatingAddress();
    }

    public void parsePduFromEfRecord(byte[] bArr) {
        CdmaSmsSubaddress cdmaSmsSubaddress;
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
        DataInputStream dataInputStream = new DataInputStream(byteArrayInputStream);
        SmsEnvelope smsEnvelope = new SmsEnvelope();
        CdmaSmsAddress cdmaSmsAddress = new CdmaSmsAddress();
        CdmaSmsSubaddress cdmaSmsSubaddress2 = new CdmaSmsSubaddress();
        try {
            smsEnvelope.messageType = dataInputStream.readByte();
            while (dataInputStream.available() > 0) {
                byte b = dataInputStream.readByte();
                int unsignedByte = dataInputStream.readUnsignedByte();
                byte[] bArr2 = new byte[unsignedByte];
                switch (b) {
                    case 0:
                        cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        smsEnvelope.teleService = dataInputStream.readUnsignedShort();
                        Rlog.i(LOG_TAG, "teleservice = " + smsEnvelope.teleService);
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 1:
                        cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        smsEnvelope.serviceCategory = dataInputStream.readUnsignedShort();
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 2:
                    case 4:
                        dataInputStream.read(bArr2, 0, unsignedByte);
                        BitwiseInputStream bitwiseInputStream = new BitwiseInputStream(bArr2);
                        cdmaSmsAddress.digitMode = bitwiseInputStream.read(1);
                        cdmaSmsAddress.numberMode = bitwiseInputStream.read(1);
                        int i = 0;
                        if (cdmaSmsAddress.digitMode == 1) {
                            i = bitwiseInputStream.read(3);
                            cdmaSmsAddress.ton = i;
                            if (cdmaSmsAddress.numberMode == 0) {
                                cdmaSmsAddress.numberPlan = bitwiseInputStream.read(4);
                            }
                        }
                        cdmaSmsAddress.numberOfDigits = bitwiseInputStream.read(8);
                        byte[] bArr3 = new byte[cdmaSmsAddress.numberOfDigits];
                        if (cdmaSmsAddress.digitMode == 0) {
                            int i2 = 0;
                            while (true) {
                                cdmaSmsSubaddress = cdmaSmsSubaddress2;
                                try {
                                    if (i2 < cdmaSmsAddress.numberOfDigits) {
                                        bArr3[i2] = convertDtmfToAscii((byte) (bitwiseInputStream.read(4) & 15));
                                        i2++;
                                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                                    }
                                } catch (Exception e) {
                                    e = e;
                                    Rlog.e(LOG_TAG, "parsePduFromEfRecord: conversion from pdu to SmsMessage failed" + e);
                                    this.mEnvelope = smsEnvelope;
                                    this.mPdu = bArr;
                                    parseSms();
                                }
                            }
                        } else {
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                            if (cdmaSmsAddress.digitMode != 1) {
                                Rlog.e(LOG_TAG, "Incorrect Digit mode");
                            } else if (cdmaSmsAddress.numberMode == 0) {
                                int i3 = 0;
                                while (i3 < cdmaSmsAddress.numberOfDigits) {
                                    bArr3[i3] = (byte) (bitwiseInputStream.read(8) & 255);
                                    i3++;
                                    unsignedByte = unsignedByte;
                                }
                            } else if (cdmaSmsAddress.numberMode != 1) {
                                Rlog.e(LOG_TAG, "Addr is of incorrect type");
                            } else if (i == 2) {
                                Rlog.e(LOG_TAG, "TODO: Addr is email id");
                            } else {
                                Rlog.e(LOG_TAG, "TODO: Addr is data network address");
                            }
                        }
                        cdmaSmsAddress.origBytes = bArr3;
                        Rlog.pii(LOG_TAG, "Addr=" + cdmaSmsAddress.toString());
                        smsEnvelope.origAddress = cdmaSmsAddress;
                        this.mOriginatingAddress = cdmaSmsAddress;
                        if (b == 4) {
                            smsEnvelope.destAddress = cdmaSmsAddress;
                            this.mRecipientAddress = cdmaSmsAddress;
                        }
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 3:
                    case 5:
                        dataInputStream.read(bArr2, 0, unsignedByte);
                        BitwiseInputStream bitwiseInputStream2 = new BitwiseInputStream(bArr2);
                        cdmaSmsSubaddress2.type = bitwiseInputStream2.read(3);
                        cdmaSmsSubaddress2.odd = bitwiseInputStream2.readByteArray(1)[0];
                        int i4 = bitwiseInputStream2.read(8);
                        byte[] bArr4 = new byte[i4];
                        int i5 = 0;
                        while (i5 < i4) {
                            bArr4[i5] = convertDtmfToAscii((byte) (bitwiseInputStream2.read(4) & 255));
                            i5++;
                            i4 = i4;
                        }
                        cdmaSmsSubaddress2.origBytes = bArr4;
                        if (b == 3) {
                            smsEnvelope.origSubaddress = cdmaSmsSubaddress2;
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        } else {
                            smsEnvelope.destSubaddress = cdmaSmsSubaddress2;
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        }
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 6:
                        dataInputStream.read(bArr2, 0, unsignedByte);
                        smsEnvelope.bearerReply = new BitwiseInputStream(bArr2).read(6);
                        cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 7:
                        dataInputStream.read(bArr2, 0, unsignedByte);
                        BitwiseInputStream bitwiseInputStream3 = new BitwiseInputStream(bArr2);
                        smsEnvelope.replySeqNo = bitwiseInputStream3.readByteArray(6)[0];
                        smsEnvelope.errorClass = bitwiseInputStream3.readByteArray(2)[0];
                        if (smsEnvelope.errorClass != 0) {
                            smsEnvelope.causeCode = bitwiseInputStream3.readByteArray(8)[0];
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        } else {
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                        }
                        cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        break;
                    case 8:
                        try {
                            dataInputStream.read(bArr2, 0, unsignedByte);
                            smsEnvelope.bearerData = bArr2;
                            cdmaSmsSubaddress = cdmaSmsSubaddress2;
                            cdmaSmsSubaddress2 = cdmaSmsSubaddress;
                        } catch (Exception e2) {
                            e = e2;
                            Rlog.e(LOG_TAG, "parsePduFromEfRecord: conversion from pdu to SmsMessage failed" + e);
                            this.mEnvelope = smsEnvelope;
                            this.mPdu = bArr;
                            parseSms();
                        }
                        break;
                    default:
                        throw new Exception("unsupported parameterId (" + ((int) b) + ")");
                }
            }
            byteArrayInputStream.close();
            dataInputStream.close();
        } catch (Exception e3) {
            e = e3;
        }
        this.mEnvelope = smsEnvelope;
        this.mPdu = bArr;
        parseSms();
    }

    public void parseSms() {
        if (this.mEnvelope.teleService == 262144) {
            this.mBearerData = new BearerData();
            if (this.mEnvelope.bearerData != null) {
                this.mBearerData.numberOfMessages = this.mEnvelope.bearerData[0] & 255;
            }
            Rlog.d(LOG_TAG, "parseSms: get MWI " + Integer.toString(this.mBearerData.numberOfMessages));
            return;
        }
        this.mBearerData = BearerData.decode(this.mEnvelope.bearerData);
        if (Rlog.isLoggable(LOGGABLE_TAG, 2)) {
            Rlog.d(LOG_TAG, "MT raw BearerData = '" + HexDump.toHexString(this.mEnvelope.bearerData) + "'");
            StringBuilder sb = new StringBuilder();
            sb.append("MT (decoded) BearerData = ");
            sb.append(this.mBearerData);
            Rlog.d(LOG_TAG, sb.toString());
        }
        if (this.mBearerData == null) {
            throw new RuntimeException("Unsupported message: BearerData decode failed.");
        }
        this.mMessageRef = this.mBearerData.messageId;
        if (this.mBearerData.userData != null) {
            this.mUserData = this.mBearerData.userData.payload;
            this.mUserDataHeader = this.mBearerData.userData.userDataHeader;
            this.mMessageBody = this.mBearerData.userData.payloadStr;
        }
        if (this.mOriginatingAddress != null) {
            decodeSmsDisplayAddress(this.mOriginatingAddress);
        }
        if (this.mRecipientAddress != null) {
            decodeSmsDisplayAddress(this.mRecipientAddress);
        }
        if (this.mBearerData.msgCenterTimeStamp != null) {
            this.mScTimeMillis = this.mBearerData.msgCenterTimeStamp.toMillis();
        }
        if (this.mBearerData.messageType == 4) {
            if (this.mBearerData.messageStatusSet) {
                this.status = this.mBearerData.errorClass << 8;
                this.status |= this.mBearerData.messageStatus;
            } else {
                StringBuilder sb2 = new StringBuilder();
                sb2.append("DELIVERY_ACK message without msgStatus (");
                sb2.append(this.mUserData == null ? "also missing" : "does have");
                sb2.append(" userData).");
                Rlog.d(LOG_TAG, sb2.toString());
                this.status = 2;
            }
        } else if (this.mBearerData.messageType != 1 && this.mBearerData.messageType != 2) {
            throw new RuntimeException("Unsupported message type: " + this.mBearerData.messageType);
        }
        if (this.mMessageBody != null) {
            parseMessageBody();
        }
    }
}
