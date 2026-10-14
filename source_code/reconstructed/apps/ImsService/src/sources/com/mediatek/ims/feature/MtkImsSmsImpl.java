package com.mediatek.ims.feature;

import android.annotation.SystemApi;
import android.content.Context;
import android.hardware.radio.V1_0.SmsAcknowledgeFailCause;
import android.os.Build;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ims.stub.ImsSmsImplBase;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.gsm.SmsMessage;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.OperatorUtils;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class MtkImsSmsImpl extends ImsSmsImplBase {
    private static final String LOG_TAG = "MtkImsSmsImpl";
    private Context mContext;
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static HashMap<Integer, MtkImsSmsImpl> sMtkImsSmsImpltances = new HashMap<>();
    private ImsService mImsServiceImpl = null;
    private int mPhoneId = -1;
    private boolean mIsReady = false;
    private ConcurrentHashMap<Integer, Integer> mToken = new ConcurrentHashMap<>();
    private AtomicInteger mNextToken = new AtomicInteger();
    private ConcurrentHashMap<Integer, String> mInboundSmsFormat = new ConcurrentHashMap<>();

    public MtkImsSmsImpl(int i) {
        configure(null, i, null);
    }

    public MtkImsSmsImpl(Context context, int i, ImsService imsService) {
        configure(context, i, imsService);
    }

    public static MtkImsSmsImpl getInstance(Context context, int i, ImsService imsService) {
        if (sMtkImsSmsImpltances.containsKey(Integer.valueOf(i))) {
            return sMtkImsSmsImpltances.get(Integer.valueOf(i));
        }
        sMtkImsSmsImpltances.put(Integer.valueOf(i), new MtkImsSmsImpl(context, i, imsService));
        return sMtkImsSmsImpltances.get(Integer.valueOf(i));
    }

    private void log(String str) {
        Rlog.d(LOG_TAG, "[" + this.mPhoneId + "] " + str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, "[" + this.mPhoneId + "] " + str);
    }

    private static int resultToCauseForCdma(int i) {
        if (i == 1) {
            return 0;
        }
        if (i != 3) {
            return i != 4 ? 39 : 4;
        }
        return 35;
    }

    private static int resultToCauseForGsm(int i) {
        if (i == 1) {
            return 0;
        }
        if (i != 3) {
            return 255;
        }
        return SmsAcknowledgeFailCause.MEMORY_CAPACITY_EXCEEDED;
    }

    public void acknowledgeSms(int i, int i2, int i3) {
        if (!this.mIsReady) {
            throw new RuntimeException("onReady is not called yet");
        }
        String strRemove = this.mInboundSmsFormat.remove(Integer.valueOf(i));
        boolean z = i3 == 1;
        if ("3gpp".equals(strRemove)) {
            this.mImsServiceImpl.acknowledgeLastIncomingGsmSms(this.mPhoneId, z, resultToCauseForGsm(i3));
        } else if ("3gpp2".equals(strRemove)) {
            this.mImsServiceImpl.acknowledgeLastIncomingCdmaSms(this.mPhoneId, z, resultToCauseForCdma(i3));
        } else {
            loge("SMS format error.");
        }
    }

    public void acknowledgeSmsReport(int i, int i2, int i3) {
        if (!this.mIsReady) {
            throw new RuntimeException("onReady is not called yet");
        }
        log("acknowledgeSmsReport toke=" + i + ",messageRef=" + i2 + ",result=" + i3);
        this.mToken.remove(Integer.valueOf(i), Integer.valueOf(i2));
        acknowledgeSms(i, i2, i3);
    }

    public void configure(Context context, int i, ImsService imsService) {
        this.mImsServiceImpl = imsService;
        this.mPhoneId = i;
        this.mContext = context;
        log("configure phone " + this.mPhoneId);
    }

    public String getSmsFormat() {
        if (!this.mIsReady) {
            throw new RuntimeException("onReady is not called yet");
        }
        boolean zIsMatched = OperatorUtils.isMatched(OperatorUtils.OPID.OP236, this.mPhoneId);
        String str = SystemProperties.get("persist.vendor.radio.smsformat", "");
        log("mPhoneId:" + this.mPhoneId + ",is3GPP2Format:" + zIsMatched + ",format:" + str);
        if (str.equals("3gpp2")) {
            return "3gpp2";
        }
        return (!str.equals("3gpp") && true == zIsMatched) ? "3gpp2" : "3gpp";
    }

    public void newImsSmsInd(byte[] bArr, String str) {
        int iIncrementAndGet = this.mNextToken.incrementAndGet();
        this.mInboundSmsFormat.put(Integer.valueOf(iIncrementAndGet), str);
        onSmsReceived(iIncrementAndGet, str, bArr);
    }

    public void newStatusReportInd(byte[] bArr, String str) {
        SmsMessage smsMessageCreateFromPdu = null;
        if ("3gpp".equals(str)) {
            smsMessageCreateFromPdu = SmsMessage.createFromPdu(bArr);
        } else if ("3gpp2".equals(str)) {
            smsMessageCreateFromPdu = com.android.internal.telephony.cdma.SmsMessage.createFromPdu(bArr);
        }
        boolean z = true;
        if (smsMessageCreateFromPdu != null) {
            int i = ((SmsMessageBase) smsMessageCreateFromPdu).mMessageRef;
            int iIntValue = this.mToken.getOrDefault(Integer.valueOf(i), -1).intValue();
            log("newStatusReportInd token=" + iIntValue + ", messageRef=" + i + ", pdu: " + IccUtils.bytesToHexString(bArr));
            if (iIntValue >= 0) {
                z = false;
                this.mInboundSmsFormat.put(Integer.valueOf(iIntValue), str);
                onSmsStatusReportReceived(iIntValue, i, str, bArr);
            } else {
                loge("newStatusReportInd, token < 0, shouldn't be here");
            }
        } else {
            loge("newStatusReportInd, sms is null, shouldn't be here");
        }
        if (z) {
            if ("3gpp".equals(str)) {
                this.mImsServiceImpl.acknowledgeLastIncomingGsmSms(this.mPhoneId, false, 1);
            } else if ("3gpp2".equals(str)) {
                this.mImsServiceImpl.acknowledgeLastIncomingCdmaSms(this.mPhoneId, false, 2);
            } else {
                loge("SMS format error.");
            }
        }
    }

    public void onReady() {
        this.mIsReady = true;
        log("onReady");
    }

    public void sendSms(int i, int i2, String str, String str2, boolean z, byte[] bArr) {
        if (!this.mIsReady) {
            throw new RuntimeException("onReady is not called yet");
        }
        this.mImsServiceImpl.sendSms(this.mPhoneId, i, i2, str, str2, z, bArr);
    }

    public void sendSmsRsp(int i, int i2, int i3, int i4) throws RuntimeException {
        log("sendSmsRsp toke=" + i + ",messageRef=" + i2 + ",status=" + i3 + ",reason=" + i4);
        if (i3 == 1) {
            this.mToken.put(Integer.valueOf(i2), Integer.valueOf(i));
        }
        onSendSmsResult(i, i2, i3, i4);
    }
}
