package com.mediatek.ims.legacy.ss;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsReasonInfo;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.MtkImsCallForwardInfo;
import com.mediatek.ims.SuppSrvConfig;
import com.mediatek.ims.feature.MtkImsUtImplBase;
import com.mediatek.ims.feature.MtkImsUtListener;
import com.mediatek.ims.internal.ImsXuiManager;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import com.mediatek.simservs.xcap.XcapException;
import java.net.UnknownHostException;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsUtStub extends MtkImsUtImplBase {
    private static final boolean DBG = true;
    static final int IMS_UT_EVENT_GET_CF_TIME_SLOT = 1200;
    static final int IMS_UT_EVENT_GET_CF_WITH_CLASS = 1204;
    static final int IMS_UT_EVENT_SETUP_XCAP_USER_AGENT_STRING = 1203;
    static final int IMS_UT_EVENT_SET_CB_WITH_PWD = 1202;
    static final int IMS_UT_EVENT_SET_CF_TIME_SLOT = 1201;
    private static final String TAG = "MtkImsUtService";
    private Context mContext;
    private ResultHandler mHandler;
    private ImsService mImsService;
    private ImsUtStub mImsUtStub;
    private MtkImsUtListener mListener = null;
    private MMTelSSTransport mMMTelSSTSL;
    private int mPhoneId;
    private static HashMap<Integer, MtkImsUtStub> sMtkImsUtStubs = new HashMap<>();
    private static final Object mLock = new Object();

    private class ResultHandler extends Handler {
        public ResultHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Log.d(MtkImsUtStub.TAG, "handleMessage(): event = " + message.what + ", requestId = " + message.arg1 + ", mListener=" + MtkImsUtStub.this.mListener);
            SuppSrvConfig.getInstance(MtkImsUtStub.this.mContext);
            switch (message.what) {
                case MtkImsUtStub.IMS_UT_EVENT_GET_CF_TIME_SLOT /* 1200 */:
                    if (MtkImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception == null) {
                            MtkCallForwardInfo[] mtkCallForwardInfoArr = (MtkCallForwardInfo[]) asyncResult.result;
                            MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr = null;
                            if (mtkCallForwardInfoArr != null) {
                                mtkImsCallForwardInfoArr = new MtkImsCallForwardInfo[mtkCallForwardInfoArr.length];
                                for (int i = 0; i < mtkCallForwardInfoArr.length; i++) {
                                    MtkImsCallForwardInfo mtkImsCallForwardInfo = new MtkImsCallForwardInfo();
                                    mtkImsCallForwardInfo.mCondition = MtkImsUtStub.this.mImsUtStub.getConditionFromCFReason(mtkCallForwardInfoArr[i].reason);
                                    mtkImsCallForwardInfo.mStatus = mtkCallForwardInfoArr[i].status;
                                    mtkImsCallForwardInfo.mServiceClass = mtkCallForwardInfoArr[i].serviceClass;
                                    mtkImsCallForwardInfo.mToA = mtkCallForwardInfoArr[i].toa;
                                    mtkImsCallForwardInfo.mNumber = mtkCallForwardInfoArr[i].number;
                                    mtkImsCallForwardInfo.mTimeSeconds = mtkCallForwardInfoArr[i].timeSeconds;
                                    mtkImsCallForwardInfo.mTimeSlot = mtkCallForwardInfoArr[i].timeSlot;
                                    mtkImsCallForwardInfoArr[i] = mtkImsCallForwardInfo;
                                }
                            }
                            MtkImsUtStub.this.mListener.onUtConfigurationCallForwardInTimeSlotQueried(message.arg1, mtkImsCallForwardInfoArr);
                        } else if (asyncResult.exception instanceof XcapException) {
                            XcapException xcapException = (XcapException) asyncResult.exception;
                            ImsUtStub imsUtStub = MtkImsUtStub.this.mImsUtStub;
                            ImsUtStub unused = MtkImsUtStub.this.mImsUtStub;
                            imsUtStub.notifyUtConfigurationQueryFailed(message, ImsUtStub.xcapExceptionToImsReasonInfo(xcapException, MtkImsUtStub.this.mPhoneId));
                        } else if (asyncResult.exception instanceof UnknownHostException) {
                            Log.d(MtkImsUtStub.TAG, "IMS_UT_EVENT_GET_CF_TIME_SLOT: UnknownHostException.");
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationQueryFailed(message, new ImsReasonInfo(61447, 0));
                        } else {
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationQueryFailed(message, new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case MtkImsUtStub.IMS_UT_EVENT_SET_CF_TIME_SLOT /* 1201 */:
                    if (MtkImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        if (asyncResult2.exception == null) {
                            Log.d(MtkImsUtStub.TAG, "utConfigurationUpdated(): event = " + message.what);
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdated(message);
                        } else if (asyncResult2.exception instanceof XcapException) {
                            XcapException xcapException2 = (XcapException) asyncResult2.exception;
                            ImsUtStub imsUtStub2 = MtkImsUtStub.this.mImsUtStub;
                            ImsUtStub unused2 = MtkImsUtStub.this.mImsUtStub;
                            imsUtStub2.notifyUtConfigurationUpdateFailed(message, ImsUtStub.xcapExceptionToImsReasonInfo(xcapException2, MtkImsUtStub.this.mPhoneId));
                        } else if (asyncResult2.exception instanceof UnknownHostException) {
                            Log.d(MtkImsUtStub.TAG, "UnknownHostException. event = " + message.what);
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdateFailed(message, new ImsReasonInfo(61447, 0));
                        } else {
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdateFailed(message, new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case MtkImsUtStub.IMS_UT_EVENT_SET_CB_WITH_PWD /* 1202 */:
                    if (MtkImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        if (asyncResult3.exception == null) {
                            Log.d(MtkImsUtStub.TAG, "utConfigurationUpdated(): event = " + message.what);
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdated(message);
                        } else if (asyncResult3.exception instanceof XcapException) {
                            XcapException xcapException3 = (XcapException) asyncResult3.exception;
                            ImsUtStub imsUtStub3 = MtkImsUtStub.this.mImsUtStub;
                            ImsUtStub unused3 = MtkImsUtStub.this.mImsUtStub;
                            imsUtStub3.notifyUtConfigurationUpdateFailed(message, ImsUtStub.xcapExceptionToImsReasonInfo(xcapException3, MtkImsUtStub.this.mPhoneId));
                        } else if (asyncResult3.exception instanceof UnknownHostException) {
                            Log.d(MtkImsUtStub.TAG, "UnknownHostException. event = " + message.what);
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdateFailed(message, new ImsReasonInfo(61447, 0));
                        } else {
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationUpdateFailed(message, new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case MtkImsUtStub.IMS_UT_EVENT_SETUP_XCAP_USER_AGENT_STRING /* 1203 */:
                default:
                    Log.d(MtkImsUtStub.TAG, "Unknown Event: " + message.what);
                    break;
                case MtkImsUtStub.IMS_UT_EVENT_GET_CF_WITH_CLASS /* 1204 */:
                    if (MtkImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception == null) {
                            CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult4.result;
                            ImsCallForwardInfo[] imsCallForwardInfoArr = null;
                            if (callForwardInfoArr != null) {
                                imsCallForwardInfoArr = new ImsCallForwardInfo[callForwardInfoArr.length];
                                for (int i2 = 0; i2 < callForwardInfoArr.length; i2++) {
                                    Log.d(MtkImsUtStub.TAG, "IMS_UT_EVENT_GET_CF_WITH_CLASS: cfInfo[" + i2 + "] = " + callForwardInfoArr[i2]);
                                    imsCallForwardInfoArr[i2] = MtkImsUtStub.this.mImsUtStub.getImsCallForwardInfo(callForwardInfoArr[i2]);
                                }
                            }
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationCallForwardQueried(message, imsCallForwardInfoArr);
                        } else if (asyncResult4.exception instanceof XcapException) {
                            XcapException xcapException4 = (XcapException) asyncResult4.exception;
                            ImsUtStub imsUtStub4 = MtkImsUtStub.this.mImsUtStub;
                            ImsUtStub unused4 = MtkImsUtStub.this.mImsUtStub;
                            imsUtStub4.notifyUtConfigurationQueryFailed(message, ImsUtStub.xcapExceptionToImsReasonInfo(xcapException4, MtkImsUtStub.this.mPhoneId));
                        } else if (asyncResult4.exception instanceof UnknownHostException) {
                            Log.d(MtkImsUtStub.TAG, "IMS_UT_EVENT_GET_CF_WITH_CLASS: UnknownHostException.");
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationQueryFailed(message, new ImsReasonInfo(61447, 0));
                        } else {
                            MtkImsUtStub.this.mImsUtStub.notifyUtConfigurationQueryFailed(message, new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
            }
        }
    }

    public MtkImsUtStub(Context context, int i, ImsService imsService) {
        this.mImsUtStub = null;
        this.mImsService = null;
        this.mPhoneId = 0;
        this.mContext = context;
        this.mImsUtStub = ImsUtStub.getInstance(context, i, imsService);
        MMTelSSTransport mMTelSSTransport = MMTelSSTransport.getInstance();
        this.mMMTelSSTSL = mMTelSSTransport;
        mMTelSSTransport.registerUtService(this.mContext);
        HandlerThread handlerThread = new HandlerThread("MtkImsUtStubResult");
        handlerThread.start();
        this.mHandler = new ResultHandler(handlerThread.getLooper());
        this.mImsService = imsService;
        this.mPhoneId = i;
    }

    private String getFacilityFromCBType(int i) {
        switch (i) {
            case 1:
                return "AI";
            case 2:
                return "AO";
            case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                return "OI";
            case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                return "OX";
            case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                return "IR";
            case XcapException.AUTH_CHALLENGE_EXCEPTION /* 6 */:
                return "ACR";
            case XcapException.CREDENTIALS_NOT_AVAILABLE_EXCEPTION /* 7 */:
                return "AB";
            case XcapException.INVALID_CREDENTIALS_EXCEPTION /* 8 */:
                return "AG";
            case XcapException.AUTHENTICATION_EXCEPTION /* 9 */:
                return "AC";
            case XcapException.MALFORMED_COOKIE_EXCEPTION /* 10 */:
                return "BS_MT";
            default:
                return null;
        }
    }

    public static MtkImsUtStub getInstance(int i) {
        synchronized (sMtkImsUtStubs) {
            if (!sMtkImsUtStubs.containsKey(Integer.valueOf(i))) {
                return null;
            }
            return sMtkImsUtStubs.get(Integer.valueOf(i));
        }
    }

    public static MtkImsUtStub getInstance(Context context, int i, ImsService imsService) {
        synchronized (sMtkImsUtStubs) {
            if (sMtkImsUtStubs.containsKey(Integer.valueOf(i))) {
                return sMtkImsUtStubs.get(Integer.valueOf(i));
            }
            sMtkImsUtStubs.put(Integer.valueOf(i), new MtkImsUtStub(context, i, imsService));
            return sMtkImsUtStubs.get(Integer.valueOf(i));
        }
    }

    public String getUtIMPUFromNetwork() {
        Log.d(TAG, "getUtIMPUFromNetwork(): phoneId = " + this.mPhoneId);
        return ImsXuiManager.getInstance().getXui(this.mPhoneId);
    }

    public String getXcapConflictErrorMessage() {
        return "";
    }

    public boolean isSupportCFT() {
        return false;
    }

    public int queryCFForServiceClass(int i, String str, int i2) {
        int andIncreaseRequestId;
        synchronized (mLock) {
            andIncreaseRequestId = ImsUtStub.getAndIncreaseRequestId();
        }
        Log.d(TAG, "queryCFForServiceClass(): requestId = " + andIncreaseRequestId);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryCallForwardStatus(this.mImsUtStub.getCFReasonFromCondition(i), i2, str, this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CF_WITH_CLASS, andIncreaseRequestId, 0, null), this.mPhoneId);
        return andIncreaseRequestId;
    }

    public int queryCallForwardInTimeSlot(int i) {
        int andIncreaseRequestId;
        synchronized (mLock) {
            andIncreaseRequestId = ImsUtStub.getAndIncreaseRequestId();
        }
        Log.d(TAG, "queryCallForwardInTimeSlot(): requestId = " + andIncreaseRequestId);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CF_TIME_SLOT, andIncreaseRequestId, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryCallForwardInTimeSlotStatus(this.mImsUtStub.getCFReasonFromCondition(i), 1, messageObtainMessage, this.mPhoneId);
        return andIncreaseRequestId;
    }

    public void setListener(MtkImsUtListener mtkImsUtListener) {
        this.mListener = mtkImsUtListener;
    }

    public void setupXcapUserAgentString(String str) {
        Log.w(TAG, "Not support this API setupXcapUserAgentString() in current platform");
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0055 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) throws Throwable {
        int andIncreaseRequestId;
        synchronized (mLock) {
            try {
                andIncreaseRequestId = ImsUtStub.getAndIncreaseRequestId();
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        Log.d(TAG, "updateCallBarringForServiceClass(): requestId = " + andIncreaseRequestId);
        boolean z = i2 == 1;
        String facilityFromCBType = getFacilityFromCBType(i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CB_WITH_PWD, andIncreaseRequestId, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setFacilityLock(facilityFromCBType, z, null, i3, messageObtainMessage, this.mPhoneId);
        return andIncreaseRequestId;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x005c */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) throws Throwable {
        int andIncreaseRequestId;
        synchronized (mLock) {
            try {
                andIncreaseRequestId = ImsUtStub.getAndIncreaseRequestId();
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        Log.d(TAG, "updateCallForwardInTimeSlot(): requestId = " + andIncreaseRequestId);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CF_TIME_SLOT, andIncreaseRequestId, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCallForwardInTimeSlot(this.mImsUtStub.getCFActionFromAction(i), this.mImsUtStub.getCFReasonFromCondition(i2), 1, str, i3, jArr, messageObtainMessage, this.mPhoneId);
        return andIncreaseRequestId;
    }
}
