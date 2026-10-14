package com.mediatek.internal.telephony;

import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Build;
import android.telephony.Rlog;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.ImsSmsDispatcher;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.SMSDispatcher;
import com.android.internal.telephony.SmsDispatchersController;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.SmsRawData;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.util.SMSDispatcherUtil;
import com.mediatek.internal.telephony.ppl.PplSmsFilterExtension;
import com.mediatek.internal.telephony.util.MtkSMSDispatcherUtil;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsSmsDispatcher extends ImsSmsDispatcher {
    private static final boolean ENG = "eng".equals(Build.TYPE);
    private static final String TAG = "MtkImsSmsDispacher";
    private ThreadLocal<Integer> mEncodingType;
    private BroadcastReceiver mImsSmsIntentReceiver;
    private PplSmsFilterExtension mPplSmsFilter;

    public MtkImsSmsDispatcher(Phone phone, SmsDispatchersController smsDispatchersController) {
        super(phone, smsDispatchersController);
        this.mPplSmsFilter = null;
        this.mEncodingType = new ThreadLocal<Integer>() { // from class: com.mediatek.internal.telephony.MtkImsSmsDispatcher.1
            /* JADX INFO: Access modifiers changed from: protected */
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public Integer initialValue() {
                return 0;
            }
        };
        this.mImsSmsIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkImsSmsDispatcher.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                Rlog.d(MtkImsSmsDispatcher.TAG, "mImsSmsIntentReceiver: action " + intent.getAction());
                if (intent.getAction().equals("com.android.ims.IMS_SERVICE_DOWN")) {
                    Iterator it = MtkImsSmsDispatcher.this.mTrackers.entrySet().iterator();
                    while (it.hasNext()) {
                        ((SMSDispatcher.SmsTracker) ((Map.Entry) it.next()).getValue()).onFailed(MtkImsSmsDispatcher.this.mContext, 4, -1);
                    }
                    MtkImsSmsDispatcher.this.mTrackers.clear();
                }
            }
        };
        Rlog.d(TAG, "Created!");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.android.ims.IMS_SERVICE_DOWN");
        this.mContext.registerReceiver(this.mImsSmsIntentReceiver, intentFilter);
    }

    private SMSDispatcher.SmsTracker getNewSubmitPduTrackerGsm(String str, String str2, String str3, String str4, SmsHeader smsHeader, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, String str5, int i2, boolean z2, int i3) {
        SmsMessageBase.SubmitPduBase submitPdu = getSubmitPdu(false, str3, str2, str4, pendingIntent2 != null, MtkSmsHeader.toByteArray(smsHeader), i, smsHeader.languageTable, smsHeader.languageShiftTable, i3);
        if (submitPdu != null) {
            return getSmsTracker(str, getSmsTrackerMap(str2, str3, str4, submitPdu), pendingIntent, pendingIntent2, getFormat(), atomicInteger, atomicBoolean, uri, smsHeader, !z || z2, str5, true, true, i2, i3, false, 0L);
        }
        Rlog.e(TAG, "getNewSubmitPduTrackerGsm: getSubmitPdu() returned null");
        return null;
    }

    protected SMSDispatcher.SmsTracker getNewSubmitPduTracker(String str, String str2, String str3, String str4, SmsHeader smsHeader, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, String str5, int i2, boolean z2, int i3, long j) {
        if (ENG) {
            Rlog.d(TAG, "getNewSubmitPduTracker w/ validity");
        }
        return isCdmaMo() ? super.getNewSubmitPduTracker(str, str2, str3, str4, smsHeader, i, pendingIntent, pendingIntent2, z, atomicInteger, atomicBoolean, uri, str5, i2, z2, i3, j) : getNewSubmitPduTrackerGsm(str, str2, str3, str4, smsHeader, i, pendingIntent, pendingIntent2, z, atomicInteger, atomicBoolean, uri, str5, i2, z2, i3);
    }

    protected String getPackageNameViaProcessId(String[] strArr) {
        return MtkSMSDispatcherUtil.getPackageNameViaProcessId(this.mContext, strArr);
    }

    protected SMSDispatcher.SmsTracker getSmsTracker(String str, HashMap<String, Object> map, PendingIntent pendingIntent, PendingIntent pendingIntent2, String str2, Uri uri, boolean z, String str3, boolean z2, boolean z3, boolean z4, long j) {
        return getSmsTracker(str, map, pendingIntent, pendingIntent2, str2, null, null, uri, null, z, str3, z2, z3, -1, -1, z4, j);
    }

    protected SMSDispatcher.SmsTracker getSmsTracker(String str, HashMap<String, Object> map, PendingIntent pendingIntent, PendingIntent pendingIntent2, String str2, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, SmsHeader smsHeader, boolean z, String str3, boolean z2, boolean z3, int i, int i2, boolean z4, long j) {
        SMSDispatcher.SmsTracker smsTracker = super.getSmsTracker(str, map, pendingIntent, pendingIntent2, str2, atomicInteger, atomicBoolean, uri, smsHeader, z, str3, z2, z3, i, i2, z4, j);
        MtkSmsCommonUtil.filterOutByPpl(this.mContext, smsTracker);
        return smsTracker;
    }

    protected SmsMessageBase.SubmitPduBase getSubmitPdu(String str, String str2, int i, int i2, byte[] bArr, boolean z) {
        return MtkSMSDispatcherUtil.getSubmitPdu(isCdmaMo(), str, str2, i, i2, bArr, z);
    }

    protected SmsMessageBase.SubmitPduBase getSubmitPdu(String str, String str2, byte[] bArr, byte[] bArr2, boolean z) {
        return MtkSMSDispatcherUtil.getSubmitPdu(isCdmaMo(), str, str2, bArr, bArr2, z);
    }

    protected SmsMessageBase.SubmitPduBase getSubmitPdu(boolean z, String str, String str2, String str3, boolean z2, byte[] bArr, int i, int i2, int i3, int i4) {
        return MtkSMSDispatcherUtil.getSubmitPdu(isCdmaMo(), str, str2, str3, z2, bArr, i, i2, i3, i4);
    }

    protected int onSendMultipartText(String str, String str2, ArrayList<String> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3, Uri uri, String str3, boolean z, int i, boolean z2, int i2, GsmAlphabet.TextEncodingDetails[] textEncodingDetailsArr) {
        int iIntValue = this.mEncodingType.get().intValue();
        if (iIntValue == 0) {
            int iOnSendMultipartText = super.onSendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i, z2, i2, textEncodingDetailsArr);
            Rlog.d(TAG, "onSendMultipartText encoding = " + iOnSendMultipartText);
            return iOnSendMultipartText;
        }
        int size = arrayList.size();
        for (int i3 = 0; i3 < size; i3++) {
            GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = SMSDispatcherUtil.calculateLength(false, arrayList.get(i3), false);
            if (iIntValue != textEncodingDetailsCalculateLength.codeUnitSize && (iIntValue == 0 || iIntValue == 1)) {
                Rlog.d(TAG, "[enc conflict between details[" + textEncodingDetailsCalculateLength.codeUnitSize + "] and encoding " + iIntValue);
                textEncodingDetailsCalculateLength.codeUnitSize = iIntValue;
            }
            textEncodingDetailsArr[i3] = textEncodingDetailsCalculateLength;
        }
        return iIntValue;
    }

    protected SmsMessageBase.SubmitPduBase onSendText(String str, String str2, String str3, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i, boolean z2, int i2) {
        int iIntValue = this.mEncodingType.get().intValue();
        if (iIntValue == 0) {
            return super.onSendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i, z2, i2);
        }
        GsmAlphabet.TextEncodingDetails textEncodingDetailsCalculateLength = SMSDispatcherUtil.calculateLength(false, str3, false);
        return getSubmitPdu(false, str2, str, str3, pendingIntent2 != null, null, iIntValue, textEncodingDetailsCalculateLength.languageTable, textEncodingDetailsCalculateLength.languageShiftTable, i2);
    }

    protected void sendData(String str, String str2, String str3, int i, int i2, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        if (isCdmaMo()) {
            super.sendData(str, str2, str3, i, bArr, pendingIntent, pendingIntent2, false);
        } else {
            sendDataGsm(str, str2, str3, i, i2, bArr, pendingIntent, pendingIntent2);
        }
    }

    protected void sendDataGsm(String str, String str2, String str3, int i, int i2, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        Rlog.d(TAG, "sendData: enter");
        SmsMessageBase.SubmitPduBase submitPdu = getSubmitPdu(str3, str2, i, i2, bArr, pendingIntent2 != null);
        if (submitPdu == null) {
            Rlog.e(TAG, "sendData(): getSubmitPdu() returned null");
            return;
        }
        SMSDispatcher.SmsTracker smsTracker = getSmsTracker(str, getSmsTrackerMap(str2, str3, i, bArr, submitPdu), pendingIntent, pendingIntent2, getFormat(), null, false, null, false, true, false, 0L);
        if (sendSmsByCarrierApp(true, smsTracker)) {
            return;
        }
        sendSubmitPdu(smsTracker);
    }

    public void sendMultipartData(String str, String str2, String str3, int i, ArrayList<SmsRawData> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3) {
        if (isCdmaMo()) {
            Rlog.d(TAG, "Don't support sendMultipartData for CDMA");
        } else {
            sendMultipartDataGsm(str, str2, str3, i, arrayList, arrayList2, arrayList3);
        }
    }

    public void sendMultipartDataGsm(String str, String str2, String str3, int i, ArrayList<SmsRawData> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3) {
        String str4 = TAG;
        if (arrayList == null) {
            Rlog.e(TAG, "Cannot send multipart data when data is null!");
            return;
        }
        int nextConcatenatedRef = getNextConcatenatedRef() & 255;
        int size = arrayList.size();
        SMSDispatcher.SmsTracker[] smsTrackerArr = new SMSDispatcher.SmsTracker[size];
        int i2 = 0;
        while (true) {
            if (i2 >= size) {
                SMSDispatcher.SmsTracker[] smsTrackerArr2 = smsTrackerArr;
                String str5 = str4;
                if (smsTrackerArr2.length == 0 || smsTrackerArr2[0] == null) {
                    Rlog.e(str5, "Cannot send multipart data. trackers length = " + smsTrackerArr2.length);
                    return;
                }
                for (SMSDispatcher.SmsTracker smsTracker : smsTrackerArr2) {
                    if (smsTracker == null) {
                        Rlog.e(str5, "Null tracker.");
                    } else if (!sendSmsByCarrierApp(true, smsTracker)) {
                        sendSubmitPdu(smsTracker);
                    }
                }
                return;
            }
            byte[] submitPduHeader = MtkSmsHeader.getSubmitPduHeader(i, nextConcatenatedRef, i2 + 1, size);
            PendingIntent pendingIntent = (arrayList2 == 0 || arrayList2.size() <= i2) ? null : arrayList2.get(i2);
            PendingIntent pendingIntent2 = (arrayList3 == 0 || arrayList3.size() <= i2) ? null : arrayList3.get(i2);
            SmsMessageBase.SubmitPduBase submitPdu = getSubmitPdu(str3, str2, arrayList.get(i2).getBytes(), submitPduHeader, pendingIntent2 != null);
            if (submitPdu == null) {
                Rlog.e(str4, "sendMultipartDataGsm(): getSubmitPdu() returned null");
                return;
            }
            int i3 = i2;
            SMSDispatcher.SmsTracker[] smsTrackerArr3 = smsTrackerArr;
            smsTrackerArr3[i3] = getSmsTracker(str, getSmsTrackerMap(str2, str3, i, arrayList.get(i2).getBytes(), submitPdu), pendingIntent, pendingIntent2, getFormat(), null, false, null, false, true, false, 0L);
            i2 = i3 + 1;
            smsTrackerArr = smsTrackerArr3;
            size = size;
            nextConcatenatedRef = nextConcatenatedRef;
            str4 = str4;
        }
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
        if (isCdmaMo()) {
            sendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i2, z2, i3, 0L);
        } else {
            sendMultipartTextWithEncodingTypeGsm(str, str2, arrayList, i, arrayList2, arrayList3, uri, str3, z, i2, z2, i3);
        }
    }

    public void sendMultipartTextWithEncodingTypeGsm(String str, String str2, ArrayList<String> arrayList, int i, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3, Uri uri, String str3, boolean z, int i2, boolean z2, int i3) {
        Rlog.d(TAG, "sendMultipartTextWithEncodingType encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i2, z2, i3, 0L);
        this.mEncodingType.remove();
    }

    public void sendTextWithEncodingType(String str, String str2, String str3, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i2, boolean z2, int i3) {
        if (isCdmaMo()) {
            sendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i2, z2, i3, false, 0L);
        } else {
            sendTextWithEncodingTypeGsm(str, str2, str3, i, pendingIntent, pendingIntent2, uri, str4, z, i2, z2, i3);
        }
    }

    public void sendTextWithEncodingTypeGsm(String str, String str2, String str3, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i2, boolean z2, int i3) {
        Rlog.d(TAG, "sendTextWithEncodingTypeGsm encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i2, z2, i3, false, 0L);
        this.mEncodingType.remove();
    }
}
