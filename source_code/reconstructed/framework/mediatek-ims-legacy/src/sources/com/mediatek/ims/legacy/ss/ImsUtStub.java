package com.mediatek.ims.legacy.ss;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsSsInfo;
import android.telephony.ims.ImsUtListener;
import android.telephony.ims.stub.ImsUtImplBase;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.PhoneConstants;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.OperatorUtils;
import com.mediatek.ims.SuppSrvConfig;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.simservs.xcap.XcapException;
import java.net.UnknownHostException;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsUtStub extends ImsUtImplBase {
    private static final String ACTION_SUBSCRIPTION_PHONE_STATE_CHANGED = "android.intent.action.SUBSCRIPTION_PHONE_STATE";
    private static final boolean DBG = true;
    private static final int DEFAULT_INVALID_PHONE_ID = -1;
    static final int HTTP_ERROR_CODE_400 = 400;
    static final int HTTP_ERROR_CODE_403 = 403;
    static final int HTTP_ERROR_CODE_404 = 404;
    static final int HTTP_ERROR_CODE_409 = 409;
    private static final int IMS_DEREG_CAUSE_BY_SS_CONFIG = 2;
    private static final String IMS_DEREG_DISABLE_PROP = "persist.vendor.radio.ss.imsdereg_off";
    private static final String IMS_DEREG_OFF = "0";
    private static final String IMS_DEREG_ON = "1";
    private static final String IMS_DEREG_PROP = "vendor.gsm.radio.ss.imsdereg";
    static final int IMS_UT_EVENT_GET_CB = 1000;
    static final int IMS_UT_EVENT_GET_CF = 1001;
    static final int IMS_UT_EVENT_GET_CLIP = 1004;
    static final int IMS_UT_EVENT_GET_CLIR = 1003;
    static final int IMS_UT_EVENT_GET_COLP = 1006;
    static final int IMS_UT_EVENT_GET_COLR = 1005;
    static final int IMS_UT_EVENT_GET_CW = 1002;
    static final int IMS_UT_EVENT_IMS_DEREG = 1014;
    static final int IMS_UT_EVENT_SET_CB = 1007;
    static final int IMS_UT_EVENT_SET_CF = 1008;
    static final int IMS_UT_EVENT_SET_CLIP = 1011;
    static final int IMS_UT_EVENT_SET_CLIR = 1010;
    static final int IMS_UT_EVENT_SET_COLP = 1013;
    static final int IMS_UT_EVENT_SET_COLR = 1012;
    static final int IMS_UT_EVENT_SET_CW = 1009;
    private static final String TAG = "ImsUtService";
    private Context mContext;
    private ResultHandler mHandler;
    private ImsService mImsService;
    private MMTelSSTransport mMMTelSSTSL;
    private int mPhoneId;
    private static HashMap<Integer, ImsUtStub> sImsUtStubs = new HashMap<>();
    private static final Object mLock = new Object();
    private static int sRequestId = 0;
    private ImsUtListener mListener = null;
    private boolean mIsInVoLteCall = false;
    private boolean mIsNeedImsDereg = false;
    private final BroadcastReceiver mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.legacy.ss.ImsUtStub.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Log.d(ImsUtStub.TAG, "Intent action:" + intent.getAction());
            if (intent.getAction().equals(ImsUtStub.ACTION_SUBSCRIPTION_PHONE_STATE_CHANGED)) {
                ImsUtStub.this.onReceivePhoneStateChange(intent.getIntExtra("slot", ImsUtStub.DEFAULT_INVALID_PHONE_ID), intent.getIntExtra("phoneType", 0), Enum.valueOf(PhoneConstants.State.class, intent.getStringExtra("state")));
            }
        }
    };

    private class ResultHandler extends Handler {
        public ResultHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            Log.d(ImsUtStub.TAG, "handleMessage(): event = " + message.what + ", requestId = " + message.arg1 + ", mListener=" + ImsUtStub.this.mListener);
            SuppSrvConfig suppSrvConfig = SuppSrvConfig.getInstance(ImsUtStub.this.mContext);
            String str2 = "Skip IMS dereg.";
            switch (message.what) {
                case ImsUtStub.IMS_UT_EVENT_GET_CB /* 1000 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception == null) {
                            int[] iArr = (int[]) asyncResult.result;
                            ImsSsInfo[] imsSsInfoArr = {new ImsSsInfo()};
                            imsSsInfoArr[0].mStatus = iArr[0];
                            Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CB: status = " + iArr[0]);
                            ImsUtStub.this.mListener.onUtConfigurationCallBarringQueried(message.arg1, imsSsInfoArr);
                            return;
                        }
                        if (asyncResult.exception instanceof UnknownHostException) {
                            Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CB: UnknownHostException.");
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(61447, 0));
                            return;
                        } else if (asyncResult.exception instanceof XcapException) {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult.exception, ImsUtStub.this.mPhoneId));
                            return;
                        } else {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(804, 0));
                            return;
                        }
                    }
                    return;
                case ImsUtStub.IMS_UT_EVENT_GET_CF /* 1001 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        if (asyncResult2.exception != null) {
                            if (asyncResult2.exception instanceof XcapException) {
                                ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult2.exception, ImsUtStub.this.mPhoneId));
                                return;
                            } else if (!(asyncResult2.exception instanceof UnknownHostException)) {
                                ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(804, 0));
                                return;
                            } else {
                                Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CF: UnknownHostException.");
                                ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(61447, 0));
                                return;
                            }
                        }
                        CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult2.result;
                        ImsCallForwardInfo[] imsCallForwardInfoArr = null;
                        if (callForwardInfoArr != null) {
                            imsCallForwardInfoArr = new ImsCallForwardInfo[callForwardInfoArr.length];
                            int i = 0;
                            while (i < callForwardInfoArr.length) {
                                String str3 = str2;
                                imsCallForwardInfoArr[i] = ImsUtStub.this.getImsCallForwardInfo(callForwardInfoArr[i]);
                                StringBuilder sb = new StringBuilder();
                                sb.append("IMS_UT_EVENT_SET_CF: cfInfo[");
                                sb.append(i);
                                sb.append("] = , Condition: ");
                                sb.append(imsCallForwardInfoArr[i].getCondition());
                                sb.append(", Status: ");
                                sb.append(imsCallForwardInfoArr[i].getStatus() == 0 ? "disabled" : "enabled");
                                sb.append(", ToA: ");
                                sb.append(imsCallForwardInfoArr[i].getToA());
                                sb.append(", Service Class: ");
                                sb.append(imsCallForwardInfoArr[i].getServiceClass());
                                sb.append(", Number=");
                                sb.append(MtkSuppServHelper.encryptString(imsCallForwardInfoArr[i].getNumber()));
                                sb.append(", Time (seconds): ");
                                sb.append(imsCallForwardInfoArr[i].getTimeSeconds());
                                Log.d(ImsUtStub.TAG, sb.toString());
                                i++;
                                str2 = str3;
                            }
                            str = str2;
                        } else {
                            str = "Skip IMS dereg.";
                        }
                        if (suppSrvConfig.isNeedIMSDereg()) {
                            boolean zEquals = ImsUtStub.IMS_DEREG_ON.equals(SystemProperties.get(ImsUtStub.IMS_DEREG_PROP, ImsUtStub.IMS_DEREG_OFF));
                            SystemProperties.set(ImsUtStub.IMS_DEREG_PROP, ImsUtStub.IMS_DEREG_OFF);
                            boolean zEquals2 = ImsUtStub.IMS_DEREG_ON.equals(SystemProperties.get(ImsUtStub.IMS_DEREG_DISABLE_PROP, "-1"));
                            if (!zEquals || zEquals2) {
                                Log.d(ImsUtStub.TAG, str);
                            } else if (ImsUtStub.this.mIsInVoLteCall) {
                                Log.d(ImsUtStub.TAG, "During call and later do IMS dereg");
                                ImsUtStub.this.mIsNeedImsDereg = true;
                            } else {
                                Log.d(ImsUtStub.TAG, "IMS dereg.");
                                ImsUtStub.this.mImsService.deregisterImsWithCause(ImsUtStub.this.mPhoneId, 2);
                            }
                        }
                        ImsUtStub.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, imsCallForwardInfoArr);
                        return;
                    }
                    return;
                case ImsUtStub.IMS_UT_EVENT_GET_CW /* 1002 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        if (asyncResult3.exception == null) {
                            int[] iArr2 = (int[]) asyncResult3.result;
                            ImsSsInfo[] imsSsInfoArr2 = {new ImsSsInfo()};
                            imsSsInfoArr2[0].mStatus = iArr2[0];
                            Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CW: status = " + iArr2[0]);
                            ImsUtStub.this.mListener.onUtConfigurationCallWaitingQueried(message.arg1, imsSsInfoArr2);
                        } else if (asyncResult3.exception instanceof UnknownHostException) {
                            Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CW: UnknownHostException.");
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(61447, 0));
                        } else if (asyncResult3.exception instanceof XcapException) {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult3.exception, ImsUtStub.this.mPhoneId));
                        } else {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(804, 0));
                        }
                        return;
                    }
                    return;
                case ImsUtStub.IMS_UT_EVENT_GET_CLIR /* 1003 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception == null) {
                            int[] iArr3 = (int[]) asyncResult4.result;
                            if (iArr3 == null || iArr3.length != 2) {
                                Log.e(ImsUtStub.TAG, "UT GET CLIR: Something funny going on");
                            } else {
                                Log.d(ImsUtStub.TAG, "UT GET CLIR result = " + iArr3);
                                ImsUtStub.this.mListener.onLineIdentificationSupplementaryServiceResponse(message.arg1, new ImsSsInfo.Builder(ImsUtStub.DEFAULT_INVALID_PHONE_ID).setClirOutgoingState(iArr3[0]).setClirInterrogationStatus(iArr3[1]).build());
                            }
                        } else if (asyncResult4.exception instanceof UnknownHostException) {
                            Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_GET_CLIR: UnknownHostException.");
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(61447, 0));
                        } else if (asyncResult4.exception instanceof XcapException) {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult4.exception, ImsUtStub.this.mPhoneId));
                        } else {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(804, 0));
                        }
                        return;
                    }
                    return;
                case ImsUtStub.IMS_UT_EVENT_GET_CLIP /* 1004 */:
                case ImsUtStub.IMS_UT_EVENT_GET_COLR /* 1005 */:
                case ImsUtStub.IMS_UT_EVENT_GET_COLP /* 1006 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult5 = (AsyncResult) message.obj;
                        if (asyncResult5.exception == null) {
                            int[] iArr4 = (int[]) asyncResult5.result;
                            if (iArr4 != null) {
                                Log.d(ImsUtStub.TAG, "UT GET CLIP/COLR/COLP result = " + iArr4);
                                ImsUtStub.this.mListener.onLineIdentificationSupplementaryServiceResponse(message.arg1, new ImsSsInfo.Builder(iArr4[0]).build());
                            } else {
                                Log.e(ImsUtStub.TAG, "UT GET CLIP/COLR/COLP: Something funny going on");
                            }
                        } else if (asyncResult5.exception instanceof XcapException) {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult5.exception, ImsUtStub.this.mPhoneId));
                        } else if (asyncResult5.exception instanceof UnknownHostException) {
                            Log.d(ImsUtStub.TAG, "UnknownHostException. event = " + message.what);
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(61447, 0));
                        } else {
                            ImsUtStub.this.mListener.onUtConfigurationQueryFailed(message.arg1, new ImsReasonInfo(804, 0));
                        }
                        return;
                    }
                    return;
                case ImsUtStub.IMS_UT_EVENT_SET_CB /* 1007 */:
                case ImsUtStub.IMS_UT_EVENT_SET_CF /* 1008 */:
                    if (ImsUtStub.this.mListener != null) {
                        AsyncResult asyncResult6 = (AsyncResult) message.obj;
                        if (asyncResult6.exception != null || asyncResult6.result == null) {
                            if (asyncResult6.exception == null && suppSrvConfig.isNeedIMSDereg()) {
                                boolean zEquals3 = ImsUtStub.IMS_DEREG_ON.equals(SystemProperties.get(ImsUtStub.IMS_DEREG_PROP, ImsUtStub.IMS_DEREG_OFF));
                                SystemProperties.set(ImsUtStub.IMS_DEREG_PROP, ImsUtStub.IMS_DEREG_OFF);
                                boolean zEquals4 = ImsUtStub.IMS_DEREG_ON.equals(SystemProperties.get(ImsUtStub.IMS_DEREG_DISABLE_PROP, "-1"));
                                if (!zEquals3 || zEquals4) {
                                    Log.d(ImsUtStub.TAG, "Skip IMS dereg.");
                                } else if (ImsUtStub.this.mIsInVoLteCall) {
                                    Log.d(ImsUtStub.TAG, "During call and later do IMS dereg");
                                    ImsUtStub.this.mIsNeedImsDereg = true;
                                } else {
                                    Log.d(ImsUtStub.TAG, "IMS dereg.");
                                    ImsUtStub.this.mImsService.deregisterImsWithCause(ImsUtStub.this.mPhoneId, 2);
                                }
                            }
                        } else if (asyncResult6.result instanceof CallForwardInfo[]) {
                            CallForwardInfo[] callForwardInfoArr2 = (CallForwardInfo[]) asyncResult6.result;
                            ImsCallForwardInfo[] imsCallForwardInfoArr2 = null;
                            if (callForwardInfoArr2 != null && callForwardInfoArr2.length != 0) {
                                imsCallForwardInfoArr2 = new ImsCallForwardInfo[callForwardInfoArr2.length];
                                for (int i2 = 0; i2 < callForwardInfoArr2.length; i2++) {
                                    Log.d(ImsUtStub.TAG, "IMS_UT_EVENT_SET_CF: cfInfo[" + i2 + "] = " + callForwardInfoArr2[i2]);
                                    imsCallForwardInfoArr2[i2] = ImsUtStub.this.getImsCallForwardInfo(callForwardInfoArr2[i2]);
                                }
                            }
                            ImsUtStub.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, imsCallForwardInfoArr2);
                            return;
                        }
                    }
                    break;
                case ImsUtStub.IMS_UT_EVENT_SET_CW /* 1009 */:
                case ImsUtStub.IMS_UT_EVENT_SET_CLIR /* 1010 */:
                case ImsUtStub.IMS_UT_EVENT_SET_CLIP /* 1011 */:
                case ImsUtStub.IMS_UT_EVENT_SET_COLR /* 1012 */:
                case ImsUtStub.IMS_UT_EVENT_SET_COLP /* 1013 */:
                    break;
                case ImsUtStub.IMS_UT_EVENT_IMS_DEREG /* 1014 */:
                    ImsUtStub.this.mImsService.deregisterImsWithCause(ImsUtStub.this.mPhoneId, 2);
                    return;
                default:
                    Log.d(ImsUtStub.TAG, "Unknown Event: " + message.what);
                    return;
            }
            if (ImsUtStub.this.mListener != null) {
                AsyncResult asyncResult7 = (AsyncResult) message.obj;
                if (asyncResult7.exception == null) {
                    Log.d(ImsUtStub.TAG, "utConfigurationUpdated(): event = " + message.what);
                    ImsUtStub.this.mListener.onUtConfigurationUpdated(message.arg1);
                } else if (asyncResult7.exception instanceof XcapException) {
                    ImsUtStub.this.mListener.onUtConfigurationUpdateFailed(message.arg1, ImsUtStub.xcapExceptionToImsReasonInfo((XcapException) asyncResult7.exception, ImsUtStub.this.mPhoneId));
                } else if (asyncResult7.exception instanceof UnknownHostException) {
                    Log.d(ImsUtStub.TAG, "UnknownHostException. event = " + message.what);
                    ImsUtStub.this.mListener.onUtConfigurationUpdateFailed(message.arg1, new ImsReasonInfo(61447, 0));
                } else {
                    ImsUtStub.this.mListener.onUtConfigurationUpdateFailed(message.arg1, new ImsReasonInfo(804, 0));
                }
            }
        }
    }

    private ImsUtStub(Context context, int i, ImsService imsService) {
        this.mImsService = null;
        this.mPhoneId = 0;
        this.mContext = context;
        MMTelSSTransport mMTelSSTransport = MMTelSSTransport.getInstance();
        this.mMMTelSSTSL = mMTelSSTransport;
        mMTelSSTransport.registerUtService(this.mContext);
        HandlerThread handlerThread = new HandlerThread("ImsUtStubResult");
        handlerThread.start();
        this.mHandler = new ResultHandler(handlerThread.getLooper());
        this.mContext.registerReceiver(this.mIntentReceiver, new IntentFilter(ACTION_SUBSCRIPTION_PHONE_STATE_CHANGED));
        this.mImsService = imsService;
        this.mPhoneId = i;
    }

    public static int getAndIncreaseRequestId() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        return i;
    }

    public static ImsUtStub getInstance(Context context, int i, ImsService imsService) {
        synchronized (sImsUtStubs) {
            if (sImsUtStubs.containsKey(Integer.valueOf(i))) {
                return sImsUtStubs.get(Integer.valueOf(i));
            }
            sImsUtStubs.put(Integer.valueOf(i), new ImsUtStub(context, i, imsService));
            return sImsUtStubs.get(Integer.valueOf(i));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onReceivePhoneStateChange(int i, int i2, PhoneConstants.State state) {
        Log.d(TAG, "onReceivePhoneStateChange phoneId:" + i + " phoneType: " + i2 + " phoneState: " + state + " mIsInVoLteCall: " + this.mIsInVoLteCall);
        if (i != this.mPhoneId) {
            return;
        }
        if (!this.mIsInVoLteCall) {
            if (state == PhoneConstants.State.IDLE || i2 != 5) {
                return;
            }
            this.mIsInVoLteCall = true;
            return;
        }
        if (state == PhoneConstants.State.IDLE) {
            this.mIsInVoLteCall = false;
            if (this.mIsNeedImsDereg) {
                ResultHandler resultHandler = this.mHandler;
                resultHandler.sendMessage(resultHandler.obtainMessage(IMS_UT_EVENT_IMS_DEREG, null));
                this.mIsNeedImsDereg = false;
            }
        }
    }

    static ImsReasonInfo xcapExceptionToImsReasonInfo(XcapException xcapException, int i) {
        if (xcapException != null) {
            Log.d(TAG, "xcapExceptionToImsReasonInfo(): XcapException: code = " + xcapException.getExceptionCodeCode() + ", http error = " + xcapException.getHttpErrorCode() + ", isConnectionError = " + xcapException.isConnectionError() + ", phoneId = " + i);
        }
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP02, i) && xcapException.getHttpErrorCode() == HTTP_ERROR_CODE_400) {
            Log.d(TAG, "xcapExceptionToImsReasonInfo - translate 400 error cause to 403");
            return new ImsReasonInfo(61446, 0);
        }
        if (xcapException != null && xcapException.getHttpErrorCode() == HTTP_ERROR_CODE_403) {
            return new ImsReasonInfo(61446, 0);
        }
        if (xcapException == null || xcapException.getHttpErrorCode() != HTTP_ERROR_CODE_404) {
            return (xcapException == null || xcapException.getHttpErrorCode() != HTTP_ERROR_CODE_409) ? new ImsReasonInfo(804, 0) : new ImsReasonInfo(61449, 0);
        }
        return new ImsReasonInfo(61448, 0);
    }

    public void close() {
        this.mContext.unregisterReceiver(this.mIntentReceiver);
    }

    protected int getCFActionFromAction(int i) {
        if (i == 1) {
            return 1;
        }
        if (i != 3) {
            return i != 4 ? 0 : 4;
        }
        return 3;
    }

    protected int getCFReasonFromCondition(int i) {
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

    protected int getConditionFromCFReason(int i) {
        switch (i) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return 2;
            case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                return 3;
            case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                return 4;
            case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                return 5;
            case XcapException.AUTH_CHALLENGE_EXCEPTION /* 6 */:
                return 6;
            default:
                return DEFAULT_INVALID_PHONE_ID;
        }
    }

    protected String getFacilityFromCBType(int i) {
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

    protected ImsCallForwardInfo getImsCallForwardInfo(CallForwardInfo callForwardInfo) {
        ImsCallForwardInfo imsCallForwardInfo = new ImsCallForwardInfo();
        imsCallForwardInfo.mCondition = getConditionFromCFReason(callForwardInfo.reason);
        imsCallForwardInfo.mStatus = callForwardInfo.status;
        imsCallForwardInfo.mServiceClass = callForwardInfo.serviceClass;
        imsCallForwardInfo.mToA = callForwardInfo.toa;
        imsCallForwardInfo.mNumber = callForwardInfo.number;
        imsCallForwardInfo.mTimeSeconds = callForwardInfo.timeSeconds;
        return imsCallForwardInfo;
    }

    public void notifyUtConfigurationCallForwardQueried(Message message, ImsCallForwardInfo[] imsCallForwardInfoArr) {
        this.mListener.onUtConfigurationCallForwardQueried(message.arg1, imsCallForwardInfoArr);
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
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CLIP, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryCLIP(messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int queryCLIR() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCLIR(): requestId = " + i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CLIR, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.getCLIR(messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int queryCOLP() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCOLP(): requestId = " + i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_COLP, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.getCOLP(messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int queryCOLR() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCOLR(): requestId = " + i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_COLR, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.getCOLR(messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int queryCallBarring(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallBarring(): requestId = " + i2);
        String facilityFromCBType = getFacilityFromCBType(i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CB, i2, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryFacilityLock(facilityFromCBType, null, MMTelSSUtils.getServiceClass() != DEFAULT_INVALID_PHONE_ID ? MMTelSSUtils.getServiceClass() : 1, messageObtainMessage, this.mPhoneId);
        MMTelSSUtils.resetServcieClass();
        return i2;
    }

    public int queryCallBarringForServiceClass(int i, int i2) {
        int i3;
        synchronized (mLock) {
            i3 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallBarringForServiceClass(): requestId = " + i3);
        String facilityFromCBType = getFacilityFromCBType(i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CB, i3, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryFacilityLock(facilityFromCBType, null, i2, messageObtainMessage, this.mPhoneId);
        return i3;
    }

    public int queryCallForward(int i, String str) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallForward(): requestId = " + i2);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CF, i2, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryCallForwardStatus(getCFReasonFromCondition(i), MMTelSSUtils.getServiceClass() != DEFAULT_INVALID_PHONE_ID ? MMTelSSUtils.getServiceClass() : 0, str, messageObtainMessage, this.mPhoneId);
        MMTelSSUtils.resetServcieClass();
        return i2;
    }

    public int queryCallWaiting() {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "queryCallWaiting(): requestId = " + i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CW, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.queryCallWaiting(1, messageObtainMessage, this.mPhoneId);
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
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CLIP, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCLIP(z ? 1 : 0, messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int updateCLIR(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCLIR(): requestId = " + i2);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CLIR, i2, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCLIR(i, messageObtainMessage, this.mPhoneId);
        return i2;
    }

    public int updateCOLP(boolean z) {
        int i;
        synchronized (mLock) {
            i = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCOLP(): requestId = " + i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_COLP, i, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCOLP(z ? 1 : 0, messageObtainMessage, this.mPhoneId);
        return i;
    }

    public int updateCOLR(int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCOLR(): requestId = " + i2);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_COLR, i2, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCOLR(i, messageObtainMessage, this.mPhoneId);
        return i2;
    }

    public int updateCallBarring(int i, int i2, String[] strArr) {
        int i3;
        synchronized (mLock) {
            i3 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallBarring(): requestId = " + i3);
        boolean z = i2 == 1;
        String facilityFromCBType = getFacilityFromCBType(i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CB, i3, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setFacilityLock(facilityFromCBType, z, null, MMTelSSUtils.getServiceClass() != DEFAULT_INVALID_PHONE_ID ? MMTelSSUtils.getServiceClass() : 1, messageObtainMessage, this.mPhoneId);
        MMTelSSUtils.resetServcieClass();
        return i3;
    }

    public int updateCallBarringForServiceClass(int i, int i2, String[] strArr, int i3) {
        int i4;
        synchronized (mLock) {
            i4 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallBarringForServiceClass(): requestId = " + i4);
        boolean z = i2 == 1;
        String facilityFromCBType = getFacilityFromCBType(i);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CB, i4, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setFacilityLock(facilityFromCBType, z, null, i3, messageObtainMessage, this.mPhoneId);
        return i4;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0056 */
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
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CF, i5, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCallForward(getCFActionFromAction(i), getCFReasonFromCondition(i2), i3, str, i4, messageObtainMessage, this.mPhoneId);
        return i5;
    }

    public int updateCallWaiting(boolean z, int i) {
        int i2;
        synchronized (mLock) {
            i2 = sRequestId;
            sRequestId++;
        }
        Log.d(TAG, "updateCallWaiting(): requestId = " + i2);
        Message messageObtainMessage = this.mHandler.obtainMessage(IMS_UT_EVENT_SET_CW, i2, 0, null);
        SuppSrvConfig.getInstance(this.mContext).update(this.mPhoneId);
        this.mMMTelSSTSL.setCallWaiting(z, i, messageObtainMessage, this.mPhoneId);
        return i2;
    }
}
