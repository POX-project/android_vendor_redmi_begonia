package com.mediatek.internal.telephony.gsm;

import android.app.PendingIntent;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Message;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import com.android.internal.telephony.GsmAlphabet;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.SMSDispatcher;
import com.android.internal.telephony.SmsDispatchersController;
import com.android.internal.telephony.SmsHeader;
import com.android.internal.telephony.SmsMessageBase;
import com.android.internal.telephony.SmsRawData;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.gsm.GsmInboundSmsHandler;
import com.android.internal.telephony.gsm.GsmSMSDispatcher;
import com.android.internal.telephony.gsm.SmsBroadcastConfigInfo;
import com.android.internal.telephony.gsm.SmsMessage;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.util.SMSDispatcherUtil;
import com.mediatek.internal.telephony.MtkSmsDispatchersController;
import com.mediatek.internal.telephony.MtkSmsHeader;
import com.mediatek.internal.telephony.util.MtkSMSDispatcherUtil;
import com.mediatek.internal.telephony.util.MtkSmsCommonUtil;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmSMSDispatcher extends GsmSMSDispatcher {
    protected static final int EVENT_ADD_DELIVER_PENDING_LIST = 107;
    protected static final int EVENT_COPY_TEXT_MESSAGE_DONE = 106;
    private static final String TAG = "MtkGsmSMSDispatcher";
    private ThreadLocal<Integer> mEncodingType;
    protected Object mLock;
    private boolean mStorageAvailable;
    private boolean mSuccess;
    protected int messageCountNeedCopy;
    private static final boolean ENG = "eng".equals(Build.TYPE);
    protected static String PDU_SIZE = "pdu_size";
    protected static String MSG_REF_NUM = "msg_ref_num";

    /* JADX WARN: Multi-variable type inference failed */
    public MtkGsmSMSDispatcher(Phone phone, SmsDispatchersController smsDispatchersController, GsmInboundSmsHandler gsmInboundSmsHandler) {
        super(phone, smsDispatchersController, gsmInboundSmsHandler);
        this.mStorageAvailable = true;
        this.mSuccess = true;
        this.messageCountNeedCopy = 0;
        this.mLock = new Object();
        this.mEncodingType = new ThreadLocal<Integer>() { // from class: com.mediatek.internal.telephony.gsm.MtkGsmSMSDispatcher.1
            /* JADX INFO: Access modifiers changed from: protected */
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public Integer initialValue() {
                return 0;
            }
        };
        this.mUiccController.unregisterForIccChanged(this);
        this.mUiccController.registerForIccChanged(this, 15, new Integer(this.mPhone.getPhoneId()));
        Rlog.d(TAG, "MtkGsmSMSDispatcher created");
    }

    private Integer getUiccControllerPhoneId(Message message) {
        Integer num = new Integer(-1);
        AsyncResult asyncResult = (AsyncResult) message.obj;
        return (asyncResult == null || !(asyncResult.result instanceof Integer)) ? num : (Integer) asyncResult.result;
    }

    private boolean isValidSmsAddress(String str) {
        String strExtractNetworkPortion = PhoneNumberUtils.extractNetworkPortion(str);
        return strExtractNetworkPortion == null || strExtractNetworkPortion.length() == str.length();
    }

    public void addToGsmDeliverPendingList(SMSDispatcher.SmsTracker smsTracker) {
        if (smsTracker.mDeliveryIntent != null) {
            Rlog.d(TAG, "addToGsmDeliverPendingList sendMessage");
            sendMessage(obtainMessage(EVENT_ADD_DELIVER_PENDING_LIST, smsTracker));
        }
    }

    /* JADX WARN: Code duplicated, block: B:58:0x012a  */
    public int copyTextMessageToIccCard(String str, String str2, List<String> list, int i, long j) {
        String str3;
        boolean z;
        int i2;
        int i3;
        int i4;
        byte[] submitPduHeaderWithLang;
        GsmAlphabet.TextEncodingDetails[] textEncodingDetailsArr;
        int i5;
        int i6;
        int i7;
        Rlog.d(TAG, "GsmSMSDispatcher: copy text message to icc card");
        if (MtkSMSDispatcherUtil.checkPhoneNumber(str)) {
            str3 = str;
        } else {
            Rlog.d(TAG, "[copyText invalid sc address");
            str3 = null;
        }
        int i8 = 1;
        this.mSuccess = true;
        int size = list.size();
        Rlog.d(TAG, "[copyText storage available");
        if (i == 1 || i == 3) {
            Rlog.d(TAG, "[copyText to encode deliver pdu");
            z = true;
        } else {
            if (i != 5 && i != 7) {
                Rlog.d(TAG, "[copyText invalid status, default is deliver pdu");
                return 1;
            }
            Rlog.d(TAG, "[copyText to encode submit pdu");
            z = false;
        }
        if (!z && !MtkSMSDispatcherUtil.checkPhoneNumber(str2)) {
            Rlog.d(TAG, "[copyText invalid dest address");
            return 8;
        }
        Rlog.d(TAG, "[copyText msgCount " + size);
        if (size > 1) {
            Rlog.d(TAG, "[copyText multi-part message");
        } else {
            if (size != 1) {
                Rlog.d(TAG, "[copyText invalid message count");
                return 1;
            }
            Rlog.d(TAG, "[copyText single-part message");
        }
        int nextConcatenatedRef = getNextConcatenatedRef() & 255;
        GsmAlphabet.TextEncodingDetails[] textEncodingDetailsArr2 = new GsmAlphabet.TextEncodingDetails[size];
        int i9 = 0;
        for (int i10 = 0; i10 < size; i10++) {
            textEncodingDetailsArr2[i10] = MtkSmsMessage.calculateLength(list.get(i10), false);
            if (i9 != textEncodingDetailsArr2[i10].codeUnitSize && (i9 == 0 || i9 == 1)) {
                i9 = textEncodingDetailsArr2[i10].codeUnitSize;
            }
        }
        int i11 = 0;
        while (i11 < size) {
            if (!this.mSuccess) {
                Rlog.d(TAG, "[copyText Exception happened when copy message");
                return i8;
            }
            int i12 = textEncodingDetailsArr2[i11].shiftLangId;
            int i13 = i9;
            if (i9 == i8) {
                Rlog.d(TAG, "Detail: " + i11 + " ted" + textEncodingDetailsArr2[i11]);
                if (textEncodingDetailsArr2[i11].useLockingShift && textEncodingDetailsArr2[i11].useSingleShift) {
                    i2 = i12;
                    i3 = i12;
                    i4 = 13;
                } else if (textEncodingDetailsArr2[i11].useLockingShift) {
                    i2 = -1;
                    i3 = i12;
                    i4 = 12;
                } else if (textEncodingDetailsArr2[i11].useSingleShift) {
                    i2 = i12;
                    i3 = -1;
                    i4 = 11;
                } else {
                    i2 = -1;
                    i3 = -1;
                    i4 = i13;
                }
            } else {
                i2 = -1;
                i3 = -1;
                i4 = i13;
            }
            if (size > 1) {
                Rlog.d(TAG, "[copyText get pdu header for multi-part message");
                submitPduHeaderWithLang = MtkSmsHeader.getSubmitPduHeaderWithLang(-1, nextConcatenatedRef, i11 + 1, size, i2, i3);
            } else {
                submitPduHeaderWithLang = null;
            }
            if (z) {
                i6 = i7;
                textEncodingDetailsArr = textEncodingDetailsArr2;
                i5 = nextConcatenatedRef;
                MtkSmsMessage.DeliverPdu deliverPduWithLang = MtkSmsMessage.getDeliverPduWithLang(str3, str2, list.get(i7), submitPduHeaderWithLang, j, i9, i12);
                if (deliverPduWithLang != null) {
                    i7 = i11;
                    Rlog.d(TAG, "[copyText write deliver pdu into SIM");
                    this.mCi.writeSmsToSim(i, IccUtils.bytesToHexString(deliverPduWithLang.encodedScAddress), IccUtils.bytesToHexString(deliverPduWithLang.encodedMessage), obtainMessage(EVENT_COPY_TEXT_MESSAGE_DONE));
                    synchronized (this.mLock) {
                        try {
                            try {
                                Rlog.d(TAG, "[copyText wait until the message be wrote in SIM");
                                this.mLock.wait();
                            } catch (InterruptedException e) {
                                Rlog.d(TAG, "Fail to copy text message into SIM");
                                return 1;
                            }
                        } catch (Throwable th) {
                            throw th;
                        }
                    }
                } else {
                    i7 = i11;
                    continue;
                }
            } else {
                textEncodingDetailsArr = textEncodingDetailsArr2;
                i5 = nextConcatenatedRef;
                i6 = i11;
                SmsMessage.SubmitPdu submitPduWithLang = MtkSmsMessage.getSubmitPduWithLang(str3, str2, list.get(i6), false, submitPduHeaderWithLang, i4, i12, -1);
                if (submitPduWithLang != null) {
                    Rlog.d(TAG, "[copyText write submit pdu into SIM");
                    this.mCi.writeSmsToSim(i, IccUtils.bytesToHexString(submitPduWithLang.encodedScAddress), IccUtils.bytesToHexString(submitPduWithLang.encodedMessage), obtainMessage(EVENT_COPY_TEXT_MESSAGE_DONE));
                    synchronized (this.mLock) {
                        try {
                            try {
                                Rlog.d(TAG, "[copyText wait until the message be wrote in SIM");
                                this.mLock.wait();
                            } catch (InterruptedException e2) {
                                Rlog.d(TAG, "fail to copy text message into SIM");
                                return 1;
                            }
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                } else {
                    continue;
                }
            }
            Rlog.d(TAG, "[copyText thread is waked up");
            i11 = i6 + 1;
            i9 = i9;
            textEncodingDetailsArr2 = textEncodingDetailsArr;
            nextConcatenatedRef = i5;
            i8 = 1;
        }
        if (this.mSuccess) {
            Rlog.d(TAG, "[copyText all messages have been copied into SIM");
            return 0;
        }
        Rlog.d(TAG, "[copyText copy failed");
        return 1;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void dispose() {
        super.dispose();
        this.mCi.unSetOnSmsStatus(this);
        this.mUiccController.unregisterForIccChanged(this);
    }

    public String getFormat() {
        return "3gpp";
    }

    protected SMSDispatcher.SmsTracker getNewSubmitPduTracker(String str, String str2, String str3, String str4, SmsHeader smsHeader, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, String str5, int i2, boolean z2, int i3, long j) {
        if (ENG) {
            Rlog.d(TAG, "getNewSubmitPduTracker w/ validity");
        }
        SmsMessage.SubmitPdu submitPdu = MtkSmsMessage.getSubmitPdu(str3, str2, str4, pendingIntent2 != null, MtkSmsHeader.toByteArray(smsHeader), i, smsHeader.languageTable, smsHeader.languageShiftTable, i3);
        if (submitPdu != null) {
            return getSmsTracker(str, getSmsTrackerMap(str2, str3, str4, submitPdu), pendingIntent, pendingIntent2, getFormat(), atomicInteger, atomicBoolean, uri, smsHeader, !z || z2, str5, true, true, i2, i3, false, j);
        }
        Rlog.e(TAG, "GsmSMSDispatcher.getNewSubmitPduTracker(): getSubmitPdu() returned null");
        return null;
    }

    protected String getPackageNameViaProcessId(String[] strArr) {
        return MtkSMSDispatcherUtil.getPackageNameViaProcessId(this.mContext, strArr);
    }

    protected SMSDispatcher.SmsTracker getSmsTracker(String str, HashMap<String, Object> map, PendingIntent pendingIntent, PendingIntent pendingIntent2, String str2, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, SmsHeader smsHeader, boolean z, String str3, boolean z2, boolean z3, int i, int i2, boolean z4, long j) {
        SMSDispatcher.SmsTracker smsTracker = super.getSmsTracker(str, map, pendingIntent, pendingIntent2, str2, atomicInteger, atomicBoolean, uri, smsHeader, z, str3, z2, z3, i, i2, z4, j);
        MtkSmsCommonUtil.filterOutByPpl(this.mContext, smsTracker);
        return smsTracker;
    }

    protected SMSDispatcher.SmsTracker getSmsTracker(String str, HashMap<String, Object> map, PendingIntent pendingIntent, PendingIntent pendingIntent2, String str2, AtomicInteger atomicInteger, AtomicBoolean atomicBoolean, Uri uri, SmsHeader smsHeader, boolean z, String str3, boolean z2, boolean z3, boolean z4, long j) {
        SMSDispatcher.SmsTracker smsTracker = super.getSmsTracker(str, map, pendingIntent, pendingIntent2, str2, atomicInteger, atomicBoolean, uri, smsHeader, z, str3, z2, z3, -1, -1, z4, j);
        MtkSmsCommonUtil.filterOutByPpl(this.mContext, smsTracker);
        return smsTracker;
    }

    public void handleIccFull() {
        this.mGsmInboundSmsHandler.mStorageMonitor.handleIccFull();
    }

    public void handleMessage(Message message) {
        int i = message.what;
        if (i == 15) {
            Integer uiccControllerPhoneId = getUiccControllerPhoneId(message);
            if (uiccControllerPhoneId.intValue() != this.mPhone.getPhoneId()) {
                Rlog.d(TAG, "Wrong phone id event coming, PhoneId: " + uiccControllerPhoneId);
                return;
            }
            Rlog.d(TAG, "EVENT_ICC_CHANGED, PhoneId: " + uiccControllerPhoneId + " match exactly.");
            onUpdateIccAvailability();
            return;
        }
        if (i != EVENT_COPY_TEXT_MESSAGE_DONE) {
            if (i != EVENT_ADD_DELIVER_PENDING_LIST) {
                super.handleMessage(message);
                return;
            }
            SMSDispatcher.SmsTracker smsTracker = (SMSDispatcher.SmsTracker) message.obj;
            Rlog.d(TAG, "EVENT_ADD_DELIVER_PENDING_LIST mMessageRef=" + smsTracker.mMessageRef);
            this.deliveryPendingList.add(smsTracker);
            return;
        }
        AsyncResult asyncResult = (AsyncResult) message.obj;
        synchronized (this.mLock) {
            boolean z = asyncResult.exception == null;
            this.mSuccess = z;
            if (z) {
                Rlog.d(TAG, "[copyText success to copy one");
                this.messageCountNeedCopy--;
            } else {
                Rlog.d(TAG, "[copyText fail to copy one");
                this.messageCountNeedCopy = 0;
            }
            this.mLock.notifyAll();
        }
    }

    public void handleQueryCbActivation(AsyncResult asyncResult) {
        Boolean bool = null;
        if (asyncResult.exception == null) {
            ArrayList arrayList = (ArrayList) asyncResult.result;
            if (arrayList.size() == 0) {
                bool = new Boolean(false);
            } else {
                SmsBroadcastConfigInfo smsBroadcastConfigInfo = (SmsBroadcastConfigInfo) arrayList.get(0);
                Rlog.d(TAG, "cbConfig: " + smsBroadcastConfigInfo.toString());
                bool = (smsBroadcastConfigInfo.getFromCodeScheme() == -1 && smsBroadcastConfigInfo.getToCodeScheme() == -1 && smsBroadcastConfigInfo.getFromServiceId() == -1 && smsBroadcastConfigInfo.getToServiceId() == -1 && !smsBroadcastConfigInfo.isSelected()) ? new Boolean(false) : new Boolean(true);
            }
        }
        Rlog.d(TAG, "queryCbActivation: " + bool);
        AsyncResult.forMessage((Message) asyncResult.userObj, bool, asyncResult.exception);
        ((Message) asyncResult.userObj).sendToTarget();
    }

    public boolean isSmsReady() {
        return ((MtkSmsDispatchersController) this.mSmsDispatchersController).isSmsReady();
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
        return SmsMessage.getSubmitPdu(str2, str, str3, pendingIntent2 != null, (byte[]) null, iIntValue, textEncodingDetailsCalculateLength.languageTable, textEncodingDetailsCalculateLength.languageShiftTable, i2);
    }

    public void sendData(String str, String str2, String str3, int i, int i2, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        Rlog.d(TAG, "MtkGsmSmsDispatcher.sendData: enter");
        SmsMessage.SubmitPdu submitPdu = MtkSmsMessage.getSubmitPdu(str3, str2, i, i2, bArr, pendingIntent2 != null);
        if (submitPdu == null) {
            Rlog.e(TAG, "GsmSMSDispatcher.sendData(): getSubmitPdu() returned null");
            return;
        }
        SMSDispatcher.SmsTracker smsTracker = getSmsTracker(str, getSmsTrackerMap(str2, str3, i, bArr, submitPdu), pendingIntent, pendingIntent2, getFormat(), null, false, null, false, true, false, 0L);
        if (sendSmsByCarrierApp(true, smsTracker)) {
            return;
        }
        sendSubmitPdu(smsTracker);
    }

    public void sendMultipartData(String str, String str2, String str3, int i, ArrayList<SmsRawData> arrayList, ArrayList<PendingIntent> arrayList2, ArrayList<PendingIntent> arrayList3) {
        int i2;
        String str4;
        String str5 = TAG;
        if (arrayList == null) {
            Rlog.e(TAG, "Cannot send multipart data when data is null!");
            return;
        }
        int nextConcatenatedRef = getNextConcatenatedRef() & 255;
        int size = arrayList.size();
        SMSDispatcher.SmsTracker[] smsTrackerArr = new SMSDispatcher.SmsTracker[size];
        int i3 = 0;
        while (true) {
            i2 = 0;
            boolean z = false;
            if (i3 >= size) {
                break;
            }
            byte[] submitPduHeader = MtkSmsHeader.getSubmitPduHeader(i, nextConcatenatedRef, i3 + 1, size);
            PendingIntent pendingIntent = (arrayList2 == 0 || arrayList2.size() <= i3) ? null : arrayList2.get(i3);
            PendingIntent pendingIntent2 = (arrayList3 == 0 || arrayList3.size() <= i3) ? null : arrayList3.get(i3);
            byte[] bytes = arrayList.get(i3).getBytes();
            if (pendingIntent2 != null) {
                z = true;
            }
            int i4 = i3;
            SMSDispatcher.SmsTracker[] smsTrackerArr2 = smsTrackerArr;
            smsTrackerArr2[i4] = getSmsTracker(str, getSmsTrackerMap(str2, str3, i, arrayList.get(i3).getBytes(), MtkSmsMessage.getSubmitPdu(str3, str2, bytes, submitPduHeader, z)), pendingIntent, pendingIntent2, getFormat(), null, false, null, false, true, false, 0L);
            i3 = i4 + 1;
            smsTrackerArr = smsTrackerArr2;
            size = size;
            nextConcatenatedRef = nextConcatenatedRef;
            str5 = str5;
        }
        SMSDispatcher.SmsTracker[] smsTrackerArr3 = smsTrackerArr;
        String str6 = str5;
        if (smsTrackerArr3.length == 0 || smsTrackerArr3[0] == null) {
            Rlog.e(str6, "Cannot send multipart data. trackers length = " + smsTrackerArr3.length);
            return;
        }
        int length = smsTrackerArr3.length;
        while (i2 < length) {
            SMSDispatcher.SmsTracker smsTracker = smsTrackerArr3[i2];
            if (smsTracker == null) {
                str4 = str6;
                Rlog.e(str4, "Null tracker.");
            } else if (sendSmsByCarrierApp(true, smsTracker)) {
                str4 = str6;
            } else {
                sendSubmitPdu(smsTracker);
                str4 = str6;
            }
            i2++;
            str6 = str4;
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
        Rlog.d(TAG, "sendMultipartTextWithEncodingType encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendMultipartText(str, str2, arrayList, arrayList2, arrayList3, uri, str3, z, i2, z2, i3, 0L);
        this.mEncodingType.remove();
    }

    public void sendTextWithEncodingType(String str, String str2, String str3, int i, PendingIntent pendingIntent, PendingIntent pendingIntent2, Uri uri, String str4, boolean z, int i2, boolean z2, int i3) {
        Rlog.d(TAG, "sendTextWithEncodingType encoding = " + i);
        this.mEncodingType.set(Integer.valueOf(i));
        sendText(str, str2, str3, pendingIntent, pendingIntent2, uri, str4, z, i2, z2, i3, false, 0L);
        this.mEncodingType.remove();
    }

    public void setSmsMemoryStatus(boolean z) {
        if (z != this.mStorageAvailable) {
            this.mStorageAvailable = z;
            this.mCi.reportSmsMemoryStatus(z, (Message) null);
        }
    }
}
