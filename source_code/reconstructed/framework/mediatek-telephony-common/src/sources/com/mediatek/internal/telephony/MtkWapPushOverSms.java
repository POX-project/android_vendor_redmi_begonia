package com.mediatek.internal.telephony;

import android.R;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.RemoteException;
import android.os.UserHandle;
import android.telephony.Rlog;
import android.telephony.SmsManager;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.BlockChecker;
import com.android.internal.telephony.IWapPushManager;
import com.android.internal.telephony.InboundSmsHandler;
import com.android.internal.telephony.SmsApplication;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.WapPushOverSms;
import com.android.internal.telephony.uicc.IccUtils;
import com.google.android.mms.pdu.GenericPdu;
import com.google.android.mms.pdu.NotificationInd;
import com.google.android.mms.pdu.PduParser;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class MtkWapPushOverSms extends WapPushOverSms {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static final String TAG = "Mtk_WAP_PUSH";
    private Bundle bundle;

    private final class DecodedResult {
        String contentType;
        HashMap<String, String> contentTypeParameters;
        byte[] header;
        HashMap<String, String> headerList;
        byte[] intentData;
        String mimeType;
        GenericPdu parsedPdu;
        int pduType;
        int phoneId;
        int statusCode;
        int subId;
        int transactionId;
        String wapAppId;

        private DecodedResult() {
        }
    }

    public MtkWapPushOverSms(Context context) {
        super(context);
    }

    private DecodedResult decodeWapPdu(byte[] bArr, InboundSmsHandler inboundSmsHandler) {
        byte[] bArr2;
        GenericPdu genericPdu;
        DecodedResult decodedResult = new DecodedResult();
        if (ENG) {
            Rlog.d(TAG, "Rx: " + IccUtils.bytesToHexString(bArr));
        }
        int i = 0 + 1;
        try {
            int i2 = bArr[0] & PplMessageManager.Type.INVALID;
            int i3 = i + 1;
            int i4 = bArr[i] & PplMessageManager.Type.INVALID;
            int phoneId = inboundSmsHandler.getPhone().getPhoneId();
            if (i4 != 6 && i4 != 7) {
                int integer = this.mContext.getResources().getInteger(R.integer.config_maxDesktopWindowingActiveTasks);
                if (integer == -1) {
                    if (ENG) {
                        Rlog.w(TAG, "Received non-PUSH WAP PDU. Type = " + i4);
                    }
                    decodedResult.statusCode = 1;
                    return decodedResult;
                }
                int i5 = integer + 1;
                i2 = bArr[integer] & PplMessageManager.Type.INVALID;
                i3 = i5 + 1;
                i4 = bArr[i5] & PplMessageManager.Type.INVALID;
                if (ENG) {
                    Rlog.d(TAG, "index = " + i3 + " PDU Type = " + i4 + " transactionID = " + i2);
                }
                if (i4 != 6 && i4 != 7) {
                    if (ENG) {
                        Rlog.w(TAG, "Received non-PUSH WAP PDU. Type = " + i4);
                    }
                    decodedResult.statusCode = 1;
                    return decodedResult;
                }
            }
            int i6 = i4;
            int i7 = i2;
            int i8 = i3;
            MtkWspTypeDecoder mtkWspTypeDecoder = (MtkWspTypeDecoder) TelephonyComponentFactory.getInstance().inject(TelephonyComponentFactory.class.getName()).makeWspTypeDecoder(bArr);
            if (!mtkWspTypeDecoder.decodeUintvarInteger(i8)) {
                if (ENG) {
                    Rlog.w(TAG, "Received PDU. Header Length error.");
                }
                decodedResult.statusCode = 2;
                return decodedResult;
            }
            int value32 = (int) mtkWspTypeDecoder.getValue32();
            int decodedDataLength = i8 + mtkWspTypeDecoder.getDecodedDataLength();
            if (!mtkWspTypeDecoder.decodeContentType(decodedDataLength)) {
                if (ENG) {
                    Rlog.w(TAG, "Received PDU. Header Content-Type error.");
                }
                decodedResult.statusCode = 2;
                return decodedResult;
            }
            String valueString = mtkWspTypeDecoder.getValueString();
            long value33 = mtkWspTypeDecoder.getValue32();
            int decodedDataLength2 = decodedDataLength + mtkWspTypeDecoder.getDecodedDataLength();
            byte[] bArr3 = new byte[value32];
            System.arraycopy(bArr, decodedDataLength, bArr3, 0, bArr3.length);
            mtkWspTypeDecoder.decodeHeaders(decodedDataLength2, (value32 - decodedDataLength2) + decodedDataLength);
            if (valueString == null || !valueString.equals("application/vnd.wap.coc")) {
                int i9 = decodedDataLength + value32;
                bArr2 = new byte[bArr.length - i9];
                System.arraycopy(bArr, i9, bArr2, 0, bArr2.length);
            } else {
                bArr2 = bArr;
            }
            int[] subId = SubscriptionManager.getSubId(phoneId);
            int defaultSmsSubscriptionId = (subId == null || subId.length <= 0) ? SmsManager.getDefaultSmsSubscriptionId() : subId[0];
            try {
                genericPdu = new PduParser(bArr2, shouldParseContentDisposition(defaultSmsSubscriptionId)).parse();
            } catch (Exception e) {
                Rlog.e(TAG, "Unable to parse PDU: " + e.toString());
                genericPdu = null;
            }
            if (genericPdu != null && genericPdu.getMessageType() == 130) {
                NotificationInd notificationInd = (NotificationInd) genericPdu;
                if (notificationInd.getFrom() != null && BlockChecker.isBlocked(this.mContext, notificationInd.getFrom().getString())) {
                    decodedResult.statusCode = 1;
                    return decodedResult;
                }
            }
            if (mtkWspTypeDecoder.seekXWapApplicationId(decodedDataLength2, (decodedDataLength2 + value32) - 1)) {
                mtkWspTypeDecoder.decodeXWapApplicationId((int) mtkWspTypeDecoder.getValue32());
                String valueString2 = mtkWspTypeDecoder.getValueString();
                if (valueString2 == null) {
                    valueString2 = Integer.toString((int) mtkWspTypeDecoder.getValue32());
                }
                decodedResult.wapAppId = valueString2;
                String string = valueString == null ? Long.toString(value33) : valueString;
                decodedResult.contentType = string;
                if (ENG) {
                    Rlog.v(TAG, "appid found: " + valueString2 + ":" + string);
                }
            }
            decodedResult.subId = defaultSmsSubscriptionId;
            decodedResult.phoneId = phoneId;
            decodedResult.parsedPdu = genericPdu;
            decodedResult.mimeType = valueString;
            decodedResult.transactionId = i7;
            decodedResult.pduType = i6;
            decodedResult.header = bArr3;
            decodedResult.intentData = bArr2;
            decodedResult.contentTypeParameters = mtkWspTypeDecoder.getContentParameters();
            decodedResult.statusCode = -1;
            decodedResult.headerList = mtkWspTypeDecoder.getHeaders();
        } catch (ArrayIndexOutOfBoundsException e2) {
            Rlog.e(TAG, "ignoring dispatchWapPdu() array index exception: " + e2);
            decodedResult.statusCode = 2;
        }
        return decodedResult;
    }

    /* JADX WARN: Code duplicated, block: B:36:0x00cc A[RETURN] */
    public int dispatchWapPdu(byte[] bArr, BroadcastReceiver broadcastReceiver, InboundSmsHandler inboundSmsHandler) {
        boolean z;
        boolean z2;
        DecodedResult decodedResultDecodeWapPdu = decodeWapPdu(bArr, inboundSmsHandler);
        if (decodedResultDecodeWapPdu.statusCode != -1) {
            return decodedResultDecodeWapPdu.statusCode;
        }
        if (decodedResultDecodeWapPdu.wapAppId != null) {
            try {
                IWapPushManager iWapPushManager = this.mWapPushManager;
                if (iWapPushManager != null) {
                    z = true;
                    if (ENG) {
                        Rlog.w(TAG, "addPowerSaveTempWhitelistAppForMms - start");
                    }
                    if (ENG) {
                        Rlog.d(TAG, "addPowerSaveTempWhitelistAppForMms - end");
                    }
                    Intent intent = new Intent();
                    intent.putExtra("transactionId", decodedResultDecodeWapPdu.transactionId);
                    intent.putExtra("pduType", decodedResultDecodeWapPdu.pduType);
                    intent.putExtra("header", decodedResultDecodeWapPdu.header);
                    intent.putExtra("data", decodedResultDecodeWapPdu.intentData);
                    intent.putExtra("contentTypeParameters", decodedResultDecodeWapPdu.contentTypeParameters);
                    SubscriptionManager.putPhoneIdAndSubIdExtra(intent, decodedResultDecodeWapPdu.phoneId);
                    intent.putExtra("wspHeaders", decodedResultDecodeWapPdu.headerList);
                    if (this.bundle != null) {
                        Rlog.d(TAG, "put addr info into intent 1");
                        intent.putExtra("address", this.bundle.getString("address"));
                        intent.putExtra("service_center", this.bundle.getString("service_center"));
                    }
                    int iProcessMessage = iWapPushManager.processMessage(decodedResultDecodeWapPdu.wapAppId, decodedResultDecodeWapPdu.contentType, intent);
                    if (ENG) {
                        Rlog.v(TAG, "procRet:" + iProcessMessage);
                    }
                    if ((iProcessMessage & 1) > 0 && (32768 & iProcessMessage) == 0) {
                        z2 = false;
                    }
                    if (!z2) {
                        return 1;
                    }
                } else if (ENG) {
                    z = true;
                    Rlog.d(TAG, "wap push manager not found!");
                } else {
                    z = true;
                }
                z2 = z;
                if (!z2) {
                    return 1;
                }
            } catch (RemoteException e) {
                if (ENG) {
                    Rlog.w(TAG, "remote func failed...");
                }
            } catch (IllegalStateException e2) {
                if (ENG) {
                    Rlog.w(TAG, "remote func failed...");
                }
            }
        }
        if (ENG) {
            Rlog.v(TAG, "fall back to existing handler");
        }
        if (decodedResultDecodeWapPdu.mimeType == null) {
            if (!ENG) {
                return 2;
            }
            Rlog.w(TAG, "Header Content-Type error.");
            return 2;
        }
        Intent intent2 = new Intent("android.provider.Telephony.WAP_PUSH_DELIVER");
        intent2.setType(decodedResultDecodeWapPdu.mimeType);
        intent2.putExtra("transactionId", decodedResultDecodeWapPdu.transactionId);
        intent2.putExtra("pduType", decodedResultDecodeWapPdu.pduType);
        intent2.putExtra("header", decodedResultDecodeWapPdu.header);
        intent2.putExtra("data", decodedResultDecodeWapPdu.intentData);
        intent2.putExtra("contentTypeParameters", decodedResultDecodeWapPdu.contentTypeParameters);
        SubscriptionManager.putPhoneIdAndSubIdExtra(intent2, decodedResultDecodeWapPdu.phoneId);
        intent2.putExtra("wspHeaders", decodedResultDecodeWapPdu.headerList);
        if (this.bundle != null) {
            Rlog.d(TAG, "put addr info into intent 2");
            intent2.putExtra("address", this.bundle.getString("address"));
            intent2.putExtra("service_center", this.bundle.getString("service_center"));
        }
        ComponentName defaultMmsApplication = SmsApplication.getDefaultMmsApplication(this.mContext, true);
        if (defaultMmsApplication != null) {
            intent2.setComponent(defaultMmsApplication);
            if (ENG) {
                Rlog.v(TAG, "Delivering MMS to: " + defaultMmsApplication.getPackageName() + " " + defaultMmsApplication.getClassName());
            }
        }
        inboundSmsHandler.dispatchIntent(intent2, getPermissionForType(decodedResultDecodeWapPdu.mimeType), getAppOpsStringPermissionForIntent(decodedResultDecodeWapPdu.mimeType), (Bundle) null, broadcastReceiver, UserHandle.SYSTEM, decodedResultDecodeWapPdu.subId);
        return -1;
    }

    public int dispatchWapPdu(byte[] bArr, BroadcastReceiver broadcastReceiver, InboundSmsHandler inboundSmsHandler, Bundle bundle) {
        if (ENG) {
            Rlog.i(TAG, "dispathchWapPdu!");
        }
        this.bundle = bundle;
        return dispatchWapPdu(bArr, broadcastReceiver, inboundSmsHandler);
    }
}
