package com.mediatek.ims;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.Parcelable;
import android.os.SystemProperties;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsSsInfo;
import android.telephony.ims.ImsUtListener;
import android.telephony.ims.stub.ImsUtImplBase;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsSSExtPlugin;
import com.mediatek.ims.plugin.ImsSSOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import java.io.UnsupportedEncodingException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Base64;
import java.util.HashMap;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes.dex */
public class ImsUtImpl extends ImsUtImplBase {
    private static final boolean DBG = true;
    private static final int DEFAULT_INVALID_PHONE_ID = -1;
    static final int IMS_UT_EVENT_GET_CB = 1000;
    static final int IMS_UT_EVENT_GET_CF = 1001;
    static final int IMS_UT_EVENT_GET_CF_TIME_SLOT = 1200;
    static final int IMS_UT_EVENT_GET_CLIP = 1004;
    static final int IMS_UT_EVENT_GET_CLIR = 1003;
    static final int IMS_UT_EVENT_GET_COLP = 1006;
    static final int IMS_UT_EVENT_GET_COLR = 1005;
    static final int IMS_UT_EVENT_GET_CW = 1002;
    static final int IMS_UT_EVENT_SET_CB = 1007;
    static final int IMS_UT_EVENT_SET_CF = 1008;
    static final int IMS_UT_EVENT_SET_CF_TIME_SLOT = 1201;
    static final int IMS_UT_EVENT_SET_CLIP = 1011;
    static final int IMS_UT_EVENT_SET_CLIR = 1010;
    static final int IMS_UT_EVENT_SET_COLP = 1013;
    static final int IMS_UT_EVENT_SET_COLR = 1012;
    static final int IMS_UT_EVENT_SET_CW = 1009;
    private static final boolean SDBG;
    private static final String SS_SERVICE_CLASS_PROP = "vendor.gsm.radio.ss.sc";
    private static final String TAG = "ImsUtImpl";
    static final int TIME_VALUE_HOUR_MAX = 23;
    static final int TIME_VALUE_MIN = 0;
    static final int TIME_VALUE_MINUTE_MAX = 59;
    private static final Object mLock;
    private static HashMap<Integer, ImsUtImpl> sImsUtImpls;
    private static int sRequestId;
    private Context mContext;
    private ImsSSExtPlugin mExtPluginBase;
    private ResultHandler mHandler;
    private ImsCommandsInterface mImsRILAdapter;
    private ImsService mImsService;
    private ImsUtListener mListener = null;
    private ImsSSOemPlugin mOemPluginBase;
    private int mPhoneId;

    private class ResultHandler extends Handler {
        public ResultHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Log.d(ImsUtImpl.TAG, "handleMessage(): event = " + message.what + ", requestId = " + message.arg1 + ", mListener=" + ImsUtImpl.this.mListener);
            int i = message.what;
            if (i == ImsUtImpl.IMS_UT_EVENT_GET_CF_TIME_SLOT) {
                if (ImsUtImpl.this.mListener != null) {
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (asyncResult.exception != null) {
                        ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        return;
                    }
                    MtkCallForwardInfo[] mtkCallForwardInfoArr = (MtkCallForwardInfo[]) asyncResult.result;
                    ImsCallForwardInfo[] imsCallForwardInfoArr = null;
                    if (mtkCallForwardInfoArr != null) {
                        imsCallForwardInfoArr = new ImsCallForwardInfo[mtkCallForwardInfoArr.length];
                        for (int i2 = 0; i2 < mtkCallForwardInfoArr.length; i2++) {
                            ImsCallForwardInfo imsCallForwardInfo = new ImsCallForwardInfo();
                            imsCallForwardInfo.mCondition = ImsUtImpl.getConditionFromCFReason(mtkCallForwardInfoArr[i2].reason);
                            imsCallForwardInfo.mStatus = mtkCallForwardInfoArr[i2].status;
                            imsCallForwardInfo.mServiceClass = mtkCallForwardInfoArr[i2].serviceClass;
                            imsCallForwardInfo.mToA = mtkCallForwardInfoArr[i2].toa;
                            imsCallForwardInfo.mNumber = mtkCallForwardInfoArr[i2].number;
                            imsCallForwardInfo.mTimeSeconds = mtkCallForwardInfoArr[i2].timeSeconds;
                            imsCallForwardInfoArr[i2] = imsCallForwardInfo;
                        }
                    }
                    ImsUtImpl.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, imsCallForwardInfoArr);
                    return;
                }
                return;
            }
            if (i == 1201) {
                if (ImsUtImpl.this.mListener != null) {
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    if (asyncResult2.exception != null) {
                        ImsUtImpl.this.notifyUtConfigurationUpdateFailed(message, asyncResult2.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult2.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        return;
                    }
                    Log.d(ImsUtImpl.TAG, "utConfigurationUpdated(): event = " + message.what);
                    ImsUtImpl.this.notifyUtConfigurationUpdated(message);
                    return;
                }
                return;
            }
            switch (i) {
                case 1000:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        if (asyncResult3.exception != null) {
                            ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult3.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult3.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                            return;
                        }
                        int[] iArr = (int[]) asyncResult3.result;
                        ImsSsInfo[] imsSsInfoArr = {new ImsSsInfo()};
                        imsSsInfoArr[0].mStatus = iArr[0];
                        Log.d(ImsUtImpl.TAG, "IMS_UT_EVENT_GET_CB: status = " + iArr[0]);
                        ImsUtImpl.this.mListener.onUtConfigurationCallBarringQueried(message.arg1, imsSsInfoArr);
                        return;
                    }
                    return;
                case 1001:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception == null) {
                            ImsUtImpl.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, ImsUtImpl.this.mExtPluginBase.getImsCallForwardInfo((CallForwardInfo[]) asyncResult4.result));
                            return;
                        } else {
                            ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult4.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult4.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                            return;
                        }
                    }
                    return;
                case 1002:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                        if (asyncResult5.exception != null) {
                            ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult5.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult5.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                            return;
                        }
                        int[] iArr2 = (int[]) asyncResult5.result;
                        ImsSsInfo[] imsSsInfoArr2 = {new ImsSsInfo()};
                        imsSsInfoArr2[0].mStatus = iArr2[0];
                        Log.d(ImsUtImpl.TAG, "IMS_UT_EVENT_GET_CW: status = " + iArr2[0]);
                        ImsUtImpl.this.mListener.onUtConfigurationCallWaitingQueried(message.arg1, imsSsInfoArr2);
                        return;
                    }
                    return;
                case 1003:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult6 = (AsyncResult) message.obj;
                        if (asyncResult6.exception != null) {
                            ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult6.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult6.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                            return;
                        }
                        int[] iArr3 = (int[]) asyncResult6.result;
                        if (iArr3 == null || iArr3.length != 2) {
                            Log.e(ImsUtImpl.TAG, "IMS_UT_EVENT_GET_CLIR: Something funny going on");
                            return;
                        }
                        Log.d(ImsUtImpl.TAG, "UT GET CLIR result = " + iArr3);
                        ImsUtImpl.this.mListener.onLineIdentificationSupplementaryServiceResponse(message.arg1, new ImsSsInfo.Builder(-1).setClirOutgoingState(iArr3[0]).setClirInterrogationStatus(iArr3[1]).build());
                        return;
                    }
                    return;
                case 1004:
                case 1005:
                case 1006:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult7 = (AsyncResult) message.obj;
                        if (asyncResult7.exception != null) {
                            ImsUtImpl.this.mListener.onUtConfigurationQueryFailed(message.arg1, asyncResult7.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult7.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                            return;
                        }
                        int[] iArr4 = (int[]) asyncResult7.result;
                        Parcelable imsSsInfo = new ImsSsInfo();
                        ((ImsSsInfo) imsSsInfo).mStatus = iArr4[0];
                        Bundle bundle = new Bundle();
                        bundle.putParcelable("imsSsInfo", imsSsInfo);
                        ImsUtImpl.this.mListener.onUtConfigurationQueried(message.arg1, bundle);
                        return;
                    }
                    return;
                case 1007:
                case 1008:
                    if (ImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult8 = (AsyncResult) message.obj;
                        if (asyncResult8.exception == null && asyncResult8.result != null && (asyncResult8.result instanceof CallForwardInfo[])) {
                            CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult8.result;
                            ImsCallForwardInfo[] imsCallForwardInfoArr2 = null;
                            if (callForwardInfoArr != null && callForwardInfoArr.length != 0) {
                                imsCallForwardInfoArr2 = new ImsCallForwardInfo[callForwardInfoArr.length];
                                for (int i3 = 0; i3 < callForwardInfoArr.length; i3++) {
                                    imsCallForwardInfoArr2[i3] = ImsUtImpl.this.getImsCallForwardInfo(callForwardInfoArr[i3]);
                                    StringBuilder sb = new StringBuilder();
                                    sb.append("IMS_UT_EVENT_SET_CF: cfInfo[");
                                    sb.append(i3);
                                    sb.append("] = , Condition: ");
                                    sb.append(imsCallForwardInfoArr2[i3].getCondition());
                                    sb.append(", Status: ");
                                    sb.append(imsCallForwardInfoArr2[i3].getStatus() == 0 ? "disabled" : "enabled");
                                    sb.append(", ToA: ");
                                    sb.append(imsCallForwardInfoArr2[i3].getToA());
                                    sb.append(", Service Class: ");
                                    sb.append(imsCallForwardInfoArr2[i3].getServiceClass());
                                    sb.append(", Number=");
                                    sb.append(ImsUtImpl.encryptString(imsCallForwardInfoArr2[i3].getNumber()));
                                    sb.append(", Time (seconds): ");
                                    sb.append(imsCallForwardInfoArr2[i3].getTimeSeconds());
                                    Log.d(ImsUtImpl.TAG, sb.toString());
                                }
                            }
                            ImsUtImpl.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, imsCallForwardInfoArr2);
                            return;
                        }
                    }
                    break;
                case 1009:
                case 1010:
                case 1011:
                case 1012:
                case 1013:
                    break;
                default:
                    Log.d(ImsUtImpl.TAG, "Unknown Event: " + message.what);
                    return;
            }
            if (ImsUtImpl.this.mListener != null) {
                AsyncResult asyncResult9 = (AsyncResult) message.obj;
                if (asyncResult9.exception != null) {
                    ImsUtImpl.this.mListener.onUtConfigurationUpdateFailed(message.arg1, asyncResult9.exception instanceof CommandException ? ImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult9.exception, ImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                    return;
                }
                Log.d(ImsUtImpl.TAG, "utConfigurationUpdated(): event = " + message.what);
                ImsUtImpl.this.mListener.onUtConfigurationUpdated(message.arg1);
            }
        }
    }

    static {
        SDBG = SystemProperties.get("ro.build.type").equals("user") ? false : DBG;
        sImsUtImpls = new HashMap<>();
        mLock = new Object();
        sRequestId = 0;
    }

    private ImsUtImpl(Context context, int i, ImsService imsService) {
        this.mImsService = null;
        this.mPhoneId = 0;
        this.mContext = context;
        HandlerThread handlerThread = new HandlerThread("ImsUtImplResult");
        handlerThread.start();
        this.mHandler = new ResultHandler(handlerThread.getLooper());
        this.mImsService = imsService;
        this.mImsRILAdapter = imsService.getImsRILAdapter(i);
        this.mPhoneId = i;
        this.mOemPluginBase = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsSSOemPlugin(this.mContext);
        this.mExtPluginBase = ExtensionFactory.makeExtensionPluginFactory(this.mContext).makeImsSSExtPlugin(this.mContext);
    }

    private long[] convertToTimeSlotArray(String str) {
        long[] jArr = null;
        if (str != null) {
            String[] strArrSplit = str.split(",", 2);
            if (strArrSplit.length == 2) {
                jArr = new long[2];
                for (int i = 0; i < 2; i++) {
                    SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                    simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                    try {
                        jArr[i] = simpleDateFormat.parse(strArrSplit[i]).getTime();
                    } catch (ParseException e) {
                        Log.e(TAG, "convertToTimeSlotArray() ParseException occured");
                        return null;
                    }
                }
            }
        }
        return jArr;
    }

    public static String encryptString(String str) throws UnsupportedEncodingException {
        byte[] bytes;
        Base64.Encoder encoder = Base64.getEncoder();
        try {
            bytes = str.getBytes("UTF-8");
        } catch (Exception e) {
            Log.e(TAG, "encryptString() exception occured");
            bytes = null;
        }
        return bytes == null ? "" : encoder.encodeToString(bytes);
    }

    public static int getAndIncreaseRequestId() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        return i;
    }

    public static int getConditionFromCFReason(int i) {
        switch (i) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 5;
            case 6:
                return 6;
            default:
                return -1;
        }
    }

    private String getFacilityFromCBType(int i) {
        switch (i) {
            case 1:
                return "AI";
            case 2:
                return "AO";
            case 3:
                return "OI";
            case 4:
                return "OX";
            case 5:
                return "IR";
            case 6:
                return "ACR";
            case 7:
                return "AB";
            case 8:
                return "AG";
            case 9:
                return "AC";
            case 10:
                return "BS_MT";
            default:
                return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public ImsCallForwardInfo getImsCallForwardInfo(CallForwardInfo callForwardInfo) {
        ImsCallForwardInfo imsCallForwardInfo = new ImsCallForwardInfo();
        imsCallForwardInfo.mCondition = getConditionFromCFReason(callForwardInfo.reason);
        imsCallForwardInfo.mStatus = callForwardInfo.status;
        imsCallForwardInfo.mServiceClass = callForwardInfo.serviceClass;
        imsCallForwardInfo.mToA = callForwardInfo.toa;
        imsCallForwardInfo.mNumber = callForwardInfo.number;
        imsCallForwardInfo.mTimeSeconds = callForwardInfo.timeSeconds;
        return imsCallForwardInfo;
    }

    public static ImsUtImpl getInstance(Context context, int i, ImsService imsService) {
        synchronized (sImsUtImpls) {
            if (sImsUtImpls.containsKey(Integer.valueOf(i))) {
                return sImsUtImpls.get(Integer.valueOf(i));
            }
            sImsUtImpls.put(Integer.valueOf(i), new ImsUtImpl(context, i, imsService));
            return sImsUtImpls.get(Integer.valueOf(i));
        }
    }

    private static int getServiceClass() {
        return Integer.parseInt(SystemProperties.get(SS_SERVICE_CLASS_PROP, "-1"));
    }

    private static void resetServcieClass() {
        SystemProperties.set(SS_SERVICE_CLASS_PROP, "-1");
    }

    public int getCFActionFromAction(int i) {
        if (i == 1) {
            return 1;
        }
        if (i != 3) {
            return i != 4 ? 0 : 4;
        }
        return 3;
    }

    public int getCFReasonFromCondition(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i == 2) {
            return 2;
        }
        if (i == 4) {
            return 4;
        }
        if (i != 5) {
            return i != 6 ? 3 : 6;
        }
        return 5;
    }

    public void notifyUtConfigurationQueried(Message message, Bundle bundle) {
        this.mListener.onUtConfigurationQueried(message.arg1, bundle);
    }

    public void notifyUtConfigurationQueryFailed(Message message, ImsReasonInfo imsReasonInfo) {
        this.mListener.onUtConfigurationQueryFailed(message.arg1, imsReasonInfo);
    }

    public void notifyUtConfigurationUpdateFailed(Message message, ImsReasonInfo imsReasonInfo) {
        this.mListener.onUtConfigurationUpdateFailed(message.arg1, imsReasonInfo);
    }

    public void notifyUtConfigurationUpdated(Message message) {
        this.mListener.onUtConfigurationUpdated(message.arg1);
    }

    public int queryCLIP() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCLIP(): requestId = " + i);
        this.mImsRILAdapter.queryCLIP(this.mHandler.obtainMessage(1004, i, 0, null));
        return i;
    }

    public int queryCLIR() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCLIR(): requestId = " + i);
        this.mImsRILAdapter.getCLIR(this.mHandler.obtainMessage(1003, i, 0, null));
        return i;
    }

    public int queryCOLP() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCOLP(): requestId = " + i);
        this.mImsRILAdapter.getCOLP(this.mHandler.obtainMessage(1006, i, 0, null));
        return i;
    }

    public int queryCOLR() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCOLR(): requestId = " + i);
        this.mImsRILAdapter.getCOLR(this.mHandler.obtainMessage(1005, i, 0, null));
        return i;
    }

    public int queryCallBarring(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallBarring(): requestId = " + i2);
        this.mImsRILAdapter.queryFacilityLock(getFacilityFromCBType(i), null, getServiceClass() != -1 ? getServiceClass() : 0, this.mHandler.obtainMessage(1000, i2, 0, null));
        resetServcieClass();
        return i2;
    }

    public int queryCallBarringForServiceClass(int i, int i2) {
        int i3;
        synchronized (mLock) {
            i3 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallBarringForServiceClass(): requestId = " + i3);
        this.mImsRILAdapter.queryFacilityLock(getFacilityFromCBType(i), null, i2, this.mHandler.obtainMessage(1000, i3, 0, null));
        resetServcieClass();
        return i3;
    }

    public int queryCallForward(int i, String str) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallForward(): requestId = " + i2);
        this.mImsRILAdapter.queryCallForwardStatus(getCFReasonFromCondition(i), getServiceClass() != -1 ? getServiceClass() : 0, str, this.mHandler.obtainMessage(1001, i2, 0, null));
        resetServcieClass();
        return i2;
    }

    public int queryCallWaiting() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallWaiting(): requestId = " + i);
        this.mImsRILAdapter.queryCallWaiting(1, this.mHandler.obtainMessage(1002, i, 0, null));
        return i;
    }

    public void setListener(ImsUtListener imsUtListener) {
        this.mListener = imsUtListener;
    }

    public int transact(Bundle bundle) {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        return i;
    }

    public int updateCLIP(boolean z) {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCLIP(): requestId = " + i);
        this.mImsRILAdapter.setCLIP(z ? 1 : 0, this.mHandler.obtainMessage(1011, i, 0, null));
        return i;
    }

    public int updateCLIR(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCLIR(): requestId = " + i2);
        this.mImsRILAdapter.setCLIR(i, this.mHandler.obtainMessage(1010, i2, 0, null));
        return i2;
    }

    public int updateCOLP(boolean z) {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCOLP(): requestId = " + i);
        this.mImsRILAdapter.setCOLP(z ? 1 : 0, this.mHandler.obtainMessage(1013, i, 0, null));
        return i;
    }

    public int updateCOLR(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCOLR(): requestId = " + i2);
        this.mImsRILAdapter.setCOLR(i, this.mHandler.obtainMessage(1012, i2, 0, null));
        return i2;
    }

    public int updateCallBarring(int i, int i2, String[] strArr) {
        int i3;
        synchronized (mLock) {
            i3 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallBarring(): requestId = " + i3);
        this.mImsRILAdapter.setFacilityLock(getFacilityFromCBType(i), i2 == 1, "", getServiceClass() != -1 ? getServiceClass() : 0, this.mHandler.obtainMessage(1007, i3, 0, null));
        resetServcieClass();
        return i3;
    }

    public int updateCallBarringForServiceClass(int i, int i2, String[] strArr, int i3) {
        int i4;
        synchronized (mLock) {
            i4 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallBarringForServiceClass(): requestId = " + i4);
        this.mImsRILAdapter.setFacilityLock(getFacilityFromCBType(i), i2 == 1, "", i3, this.mHandler.obtainMessage(1007, i4, 0, null));
        return i4;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0047 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int updateCallForward(int i, int i2, String str, int i3, int i4) throws Throwable {
        int i5;
        synchronized (mLock) {
            try {
                i5 = sRequestId;
                sRequestId++;
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        Log.d(TAG, "updateCallForward(): requestId = " + i5);
        this.mImsRILAdapter.setCallForward(getCFActionFromAction(i), getCFReasonFromCondition(i2), i3, str, i4, this.mHandler.obtainMessage(1008, i5, 0, null));
        return i5;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x00b6 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int updateCallForwardUncondTimer(int i, int i2, int i3, int i4, int i5, int i6, String str) throws Throwable {
        int i7;
        if (i == 0 && i2 == 0 && i3 == 0 && i4 == 0) {
            Log.i(TAG, "updateCallForwardUncondTimer(): Time is all zero! use updateCallForward");
            return updateCallForward(i5, i6, str, 1, 0);
        }
        synchronized (mLock) {
            try {
                i7 = sRequestId;
                sRequestId++;
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        Log.d(TAG, "updateCallForwardUncondTimer(): requestId = " + i7);
        if (i < 0 || i > 23 || i2 < 0 || i2 > 59 || i3 < 0 || i3 > 23 || i4 < 0 || i4 > 59) {
            Log.e(TAG, "updateCallForwardUncondTimer(): Time is wrong! ");
        }
        this.mImsRILAdapter.setCallForwardInTimeSlot(getCFActionFromAction(i5), getCFReasonFromCondition(i6), 1, str, 0, convertToTimeSlotArray(String.format("%02d:%02d,%02d:%02d", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4))), this.mHandler.obtainMessage(1201, i7, 0, null));
        return i7;
    }

    public int updateCallWaiting(boolean z, int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallWaiting(): requestId = " + i2);
        this.mImsRILAdapter.setCallWaiting(z, i, this.mHandler.obtainMessage(1009, i2, 0, null));
        return i2;
    }
}
