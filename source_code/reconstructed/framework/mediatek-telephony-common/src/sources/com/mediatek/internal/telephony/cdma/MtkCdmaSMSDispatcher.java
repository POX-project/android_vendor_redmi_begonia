package com.mediatek.internal.telephony.cdma;

import android.app.PendingIntent;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Message;
import android.telephony.Rlog;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.IccCard;
import com.android.internal.telephony.IccCardConstants;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SMSDispatcher;
import com.android.internal.telephony.SmsDispatchersController;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.SmsResponse;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.cdma.CdmaSMSDispatcher;
import com.android.internal.telephony.cdma.SmsMessage;
import com.mediatek.internal.telephony.util.MtkSMSDispatcherUtil;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class MtkCdmaSMSDispatcher extends CdmaSMSDispatcher {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static final int EVENT_COPY_TEXT_MESSAGE_DONE = 106;
    private static final int RESULT_ERROR_RUIM_PLUG_OUT = 107;
    private static final int RESULT_ERROR_SUCCESS = 0;
    private static final String TAG = "MtkCdmaSMSDispatcher";
    private static final boolean VDBG = false;
    private static final int WAKE_LOCK_TIMEOUT = 500;
    private boolean mCopied;
    private ThreadLocal<Integer> mEncodingType;
    protected Object mLock;
    private ThreadLocal<Integer> mOriginalPort;
    protected boolean mSuccess;

    public MtkCdmaSMSDispatcher(Phone phone, SmsDispatchersController smsDispatchersController) {
        super(phone, smsDispatchersController);
        this.mLock = new Object();
        this.mCopied = false;
        this.mSuccess = true;
        this.mOriginalPort = new ThreadLocal<Integer>() { // from class: com.mediatek.internal.telephony.cdma.MtkCdmaSMSDispatcher.1
            /* JADX INFO: Access modifiers changed from: protected */
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public Integer initialValue() {
                return -1;
            }
        };
        this.mEncodingType = new ThreadLocal<Integer>() { // from class: com.mediatek.internal.telephony.cdma.MtkCdmaSMSDispatcher.2
            /* JADX INFO: Access modifiers changed from: protected */
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public Integer initialValue() {
                return 0;
            }
        };
        Rlog.d(TAG, "MtkCdmaSMSDispatcher created");
    }

    private boolean isSimAbsent() {
        IccCard iccCard = PhoneFactory.getPhone(this.mPhone.getPhoneId()).getIccCard();
        IccCardConstants.State state = iccCard == null ? IccCardConstants.State.UNKNOWN : iccCard.getState();
        boolean z = state == IccCardConstants.State.ABSENT || state == IccCardConstants.State.NOT_READY;
        Rlog.d(TAG, "isSimAbsent state = " + state + " ret=" + z);
        return z;
    }

    public int copyTextMessageToIccCard(String str, String str2, List<String> list, int i, long j) {
        boolean z;
        SmsMessage.SubmitPdu submitPduCreateEfPdu;
        this.mSuccess = true;
        int size = list.size();
        Rlog.d(TAG, "copyTextMessageToIccCard status = " + i + ", msgCount = " + size);
        if (size < 1) {
            return 1;
        }
        if (i == 1 || i == 3) {
            Rlog.d(TAG, "copyTextMessageToIccCard to encode deliver pdu");
            z = true;
        } else {
            if (i != 5 && i != 7) {
                Rlog.d(TAG, "copyTextMessageToIccCard invalid status, default is deliver pdu");
                return 1;
            }
            Rlog.d(TAG, "copyTextMessageToIccCard to encode submit pdu");
            z = false;
        }
        if (!z && !MtkSMSDispatcherUtil.checkPhoneNumber(str2)) {
            Rlog.d(TAG, "copyTextMessageToIccCard invalid dest address");
            return 8;
        }
        for (int i2 = 0; i2 < size; i2++) {
            if (!this.mSuccess || (submitPduCreateEfPdu = MtkSmsMessage.createEfPdu(str2, list.get(i2), j)) == null) {
                return 1;
            }
            this.mCi.writeSmsToRuim(i, submitPduCreateEfPdu.encodedMessage, obtainMessage(EVENT_COPY_TEXT_MESSAGE_DONE));
            synchronized (this.mLock) {
                this.mCopied = false;
                while (!this.mCopied) {
                    try {
                        this.mLock.wait();
                    } catch (InterruptedException e) {
                        return 1;
                    }
                }
            }
        }
        return 1 ^ (this.mSuccess ? 1 : 0);
    }

    protected String getPackageNameViaProcessId(String[] strArr) {
        return MtkSMSDispatcherUtil.getPackageNameViaProcessId(this.mContext, strArr);
    }

    protected SMSDispatcher.SmsTracker getSmsTracker(String str, HashMap<String, Object> map, PendingIntent pendingIntent, PendingIntent pendingIntent2, String str2, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, SmsHeader smsHeader, boolean z, String str3, boolean z2, boolean z3, int i, int i2, boolean z4, long j) {
        SMSDispatcher.SmsTracker smsTracker = super.getSmsTracker(str, map, pendingIntent, pendingIntent2, str2, atomicInteger, atomicBoolean, uri, smsHeader, z, str3, z2, z3, i, i2, z4, j);
        MtkSmsCommonUtil.filterOutByPpl(this.mContext, smsTracker);
        return smsTracker;
    }

    public void handleMessage(Message message) {
        if (message.what != EVENT_COPY_TEXT_MESSAGE_DONE) {
            super.handleMessage(message);
            return;
        }
        AsyncResult asyncResult = (AsyncResult) message.obj;
        synchronized (this.mLock) {
            this.mSuccess = asyncResult.exception == null;
            this.mCopied = true;
            this.mLock.notifyAll();
        }
    }

    protected void handleSendComplete(AsyncResult asyncResult) {
        SMSDispatcher.SmsTracker smsTracker = (SMSDispatcher.SmsTracker) asyncResult.userObj;
        if (asyncResult.exception != null && asyncResult.result != null) {
            int i = ((SmsResponse) asyncResult.result).mErrorCode;
            if (i == RESULT_ERROR_RUIM_PLUG_OUT) {
                Rlog.d(TAG, "RUIM card is plug out");
                smsTracker.onFailed(this.mContext, 1, i);
                return;
            }
            int state = this.mPhone.getServiceState().getState();
            if (!isIms() && state != 0 && isSimAbsent()) {
                smsTracker.onFailed(this.mContext, 1, i);
                return;
            }
        }
        super.handleSendComplete(asyncResult);
    }

    protected SmsMessageBase.SubmitPduBase onSendData(String str, String str2, int i, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        if (this.mOriginalPort.get().intValue() == -1) {
            return super.onSendData(str, str2, i, bArr, pendingIntent, pendingIntent2);
        }
        return MtkSmsMessage.getSubmitPdu(str2, str, i, this.mOriginalPort.get().intValue(), bArr, pendingIntent2 != null);
    }

    protected int onSendMultipartText(String str, String str2, ArrayList<String> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3, Uri uri, String str3, boolean z, int i, boolean z2, int i2, GsmAlphabet.TextEncodingDetails[] textEncodingDetailsArr) {
        int iIntValue = this.mEncodingType.get().intValue();
        if (iIntValue != 1 && iIntValue != 2 && iIntValue != 3) {
            return super.onSendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i, z2, i2, textEncodingDetailsArr);
        }
        int size = arrayList.size();
        for (int i3 = 0; i3 < size; i3++) {
            GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = MtkSmsMessage.calculateLength(arrayList.get(i3), false, iIntValue);
            textEncodingDetailsCalculateLength.codeUnitSize = iIntValue;
            textEncodingDetailsArr[i3] = textEncodingDetailsCalculateLength;
        }
        return iIntValue;
    }

    protected SmsMessageBase.SubmitPduBase onSendText(String str, String str2, String str3, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i, boolean z2, int i2) {
        int iIntValue = this.mEncodingType.get().intValue();
        if (iIntValue == 1 || iIntValue == 2 || iIntValue == 3) {
            return MtkSmsMessage.getSubmitPdu(str2, str, str3, pendingIntent2 != null, (SmsHeader) null, iIntValue, i2, i, true);
        }
        return super.onSendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i, z2, i2);
    }

    public void sendData(String str, String str2, String str3, int i, int i2, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        this.mOriginalPort.set(Integer.valueOf(i2));
        sendData(str, str2, str3, i, bArr, pendingIntent, pendingIntent2, false);
        this.mOriginalPort.remove();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v4 */
    /* JADX WARN: Type inference failed for: r8v5, types: [int] */
    /* JADX WARN: Type inference failed for: r8v9 */
    public void sendMultipartText(String str, String str2, ArrayList<String> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3, Uri uri, String str3, boolean z, int i, boolean z2, int i2, long j) {
        ArrayList<PendingIntent> arrayList4 = arrayList2;
        String multipartMessageText = getMultipartMessageText(arrayList);
        int nextConcatenatedRef = getNextConcatenatedRef() & 255;
        int size = arrayList.size();
        if (size < 1) {
            triggerSentIntentForFailure(arrayList4);
            return;
        }
        GsmAlphabet.TextEncodingDetails[] textEncodingDetailsArr = new GsmAlphabet.TextEncodingDetails[size];
        int i3 = size;
        int i4 = nextConcatenatedRef;
        int iOnSendMultipartText = onSendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i, z2, i2, textEncodingDetailsArr);
        SMSDispatcher.SmsTracker[] smsTrackerArr = new SMSDispatcher.SmsTracker[i3];
        AtomicInteger atomicInteger = new AtomicInteger(i3);
        boolean z3 = false;
        AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        int i5 = 0;
        while (i5 < i3) {
            SmsHeader.ConcatRef concatRef = new SmsHeader.ConcatRef();
            concatRef.refNumber = i4;
            concatRef.seqNumber = i5 + 1;
            concatRef.msgCount = i3;
            concatRef.isEightBits = true;
            SmsHeader smsHeaderMakeSmsHeader = TelephonyComponentFactory.getInstance().inject(TelephonyComponentFactory.class.getName()).makeSmsHeader();
            smsHeaderMakeSmsHeader.concatRef = concatRef;
            if (iOnSendMultipartText == 1) {
                smsHeaderMakeSmsHeader.languageTable = textEncodingDetailsArr[i5].languageTable;
                smsHeaderMakeSmsHeader.languageShiftTable = textEncodingDetailsArr[i5].languageShiftTable;
            }
            int i6 = i4;
            int i7 = i5;
            boolean z4 = z3;
            SMSDispatcher.SmsTracker[] smsTrackerArr2 = smsTrackerArr;
            int i8 = iOnSendMultipartText;
            int i9 = i3;
            smsTrackerArr2[i7] = getNewSubmitPduTracker(str3, str, str2, arrayList.get(i5), smsHeaderMakeSmsHeader, iOnSendMultipartText, (arrayList4 == null || arrayList2.size() <= i5) ? null : arrayList4.get(i5), (arrayList3 == null || arrayList3.size() <= i5) ? null : arrayList3.get(i5), i5 == i3 + (-1) ? true : z3, atomicInteger, atomicBoolean, uri, multipartMessageText, i, z2, i2, j);
            if (smsTrackerArr2[i7] == null) {
                triggerSentIntentForFailure(arrayList2);
                return;
            }
            i5 = i7 + 1;
            smsTrackerArr = smsTrackerArr2;
            arrayList4 = arrayList2;
            i4 = i6;
            z3 = z4;
            iOnSendMultipartText = i8;
            i3 = i9;
        }
        boolean z5 = z3;
        SMSDispatcher.SmsTracker[] smsTrackerArr3 = smsTrackerArr;
        String carrierAppPackageName = getCarrierAppPackageName();
        if (carrierAppPackageName != null) {
            Rlog.d(TAG, "Found carrier package.");
            SMSDispatcher.MultipartSmsSender multipartSmsSender = new SMSDispatcher.MultipartSmsSender(this, arrayList, smsTrackerArr3);
            multipartSmsSender.sendSmsByCarrierApp(carrierAppPackageName, new SMSDispatcher.MultipartSmsSenderCallback(this, multipartSmsSender));
        } else {
            Rlog.v(TAG, "No carrier package.");
            int length = smsTrackerArr3.length;
            for (?? r8 = z5; r8 < length; r8++) {
                sendSubmitPdu(smsTrackerArr3[r8]);
            }
        }
    }

    public void sendMultipartTextWithEncodingType(String str, String str2, ArrayList<String> arrayList, int i, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3, Uri uri, String str3, boolean z, int i2, boolean z2, int i3) {
        Rlog.d(TAG, "sendMultipartTextWithEncodingType encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i2, z2, i3, 0L);
        this.mEncodingType.remove();
    }

    public void sendSms(SMSDispatcher.SmsTracker smsTracker) {
        int state = this.mPhone.getServiceState().getState();
        if (isIms() || state == 0) {
            super.sendSms(smsTracker);
            return;
        }
        if (isSimAbsent()) {
            smsTracker.onFailed(this.mContext, 1, 0);
        } else {
            smsTracker.onFailed(this.mContext, getNotInServiceError(state), 0);
        }
        this.mSmsQueue.enableSynced(false);
    }

    public void sendTextWithEncodingType(String str, String str2, String str3, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i2, boolean z2, int i3) {
        Rlog.d(TAG, "sendTextWithEncodingType encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i2, z2, i3, false, 0L);
        this.mEncodingType.remove();
    }
}
