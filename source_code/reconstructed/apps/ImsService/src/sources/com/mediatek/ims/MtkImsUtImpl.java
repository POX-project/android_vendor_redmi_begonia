package com.mediatek.ims;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.telephony.ims.ImsReasonInfo;
import android.util.Log;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.feature.MtkImsUtImplBase;
import com.mediatek.ims.feature.MtkImsUtListener;
import com.mediatek.ims.internal.ImsXuiManager;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsSSExtPlugin;
import com.mediatek.ims.plugin.ImsSSOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsUtImpl extends MtkImsUtImplBase {
    private static final boolean DBG = true;
    static final int IMS_UT_EVENT_GET_CF_TIME_SLOT = 1200;
    static final int IMS_UT_EVENT_GET_CF_WITH_CLASS = 1204;
    static final int IMS_UT_EVENT_SETUP_XCAP_USER_AGENT_STRING = 1203;
    static final int IMS_UT_EVENT_SET_CB_WITH_PWD = 1202;
    static final int IMS_UT_EVENT_SET_CF_TIME_SLOT = 1201;
    private static final String TAG = "MtkImsUtImpl";
    private Context mContext;
    private ImsSSExtPlugin mExtPluginBase;
    private ResultHandler mHandler;
    private ImsCommandsInterface mImsRILAdapter;
    private ImsService mImsService;
    private ImsUtImpl mImsUtImpl;
    private MtkImsUtListener mListener = null;
    private ImsSSOemPlugin mOemPluginBase;
    private int mPhoneId;
    private static HashMap<Integer, MtkImsUtImpl> sMtkImsUtImpls = new HashMap<>();
    private static final Object mLock = new Object();

    private class ResultHandler extends Handler {
        public ResultHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Log.d(MtkImsUtImpl.TAG, "handleMessage(): event = " + message.what + ", requestId = " + message.arg1 + ", mListener=" + MtkImsUtImpl.this.mListener);
            SuppSrvConfig.getInstance(MtkImsUtImpl.this.mContext);
            switch (message.what) {
                case MtkImsUtImpl.IMS_UT_EVENT_GET_CF_TIME_SLOT /* 1200 */:
                    if (MtkImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception == null) {
                            MtkCallForwardInfo[] mtkCallForwardInfoArr = (MtkCallForwardInfo[]) asyncResult.result;
                            MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr = null;
                            if (mtkCallForwardInfoArr != null) {
                                mtkImsCallForwardInfoArr = new MtkImsCallForwardInfo[mtkCallForwardInfoArr.length];
                                for (int i = 0; i < mtkCallForwardInfoArr.length; i++) {
                                    MtkImsCallForwardInfo mtkImsCallForwardInfo = new MtkImsCallForwardInfo();
                                    ImsUtImpl unused = MtkImsUtImpl.this.mImsUtImpl;
                                    mtkImsCallForwardInfo.mCondition = ImsUtImpl.getConditionFromCFReason(mtkCallForwardInfoArr[i].reason);
                                    mtkImsCallForwardInfo.mStatus = mtkCallForwardInfoArr[i].status;
                                    mtkImsCallForwardInfo.mServiceClass = mtkCallForwardInfoArr[i].serviceClass;
                                    mtkImsCallForwardInfo.mToA = mtkCallForwardInfoArr[i].toa;
                                    mtkImsCallForwardInfo.mNumber = mtkCallForwardInfoArr[i].number;
                                    mtkImsCallForwardInfo.mTimeSeconds = mtkCallForwardInfoArr[i].timeSeconds;
                                    mtkImsCallForwardInfo.mTimeSlot = mtkCallForwardInfoArr[i].timeSlot;
                                    mtkImsCallForwardInfoArr[i] = mtkImsCallForwardInfo;
                                }
                            }
                            MtkImsUtImpl.this.mListener.onUtConfigurationCallForwardInTimeSlotQueried(message.arg1, mtkImsCallForwardInfoArr);
                        } else {
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationQueryFailed(message, asyncResult.exception instanceof CommandException ? MtkImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult.exception, MtkImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case 1201:
                    if (MtkImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult2 = (AsyncResult) message.obj;
                        if (asyncResult2.exception == null) {
                            Log.d(MtkImsUtImpl.TAG, "utConfigurationUpdated(): event = " + message.what);
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationUpdated(message);
                        } else {
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationUpdateFailed(message, asyncResult2.exception instanceof CommandException ? MtkImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult2.exception, MtkImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case 1202:
                    if (MtkImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        if (asyncResult3.exception == null) {
                            Log.d(MtkImsUtImpl.TAG, "utConfigurationUpdated(): event = " + message.what);
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationUpdated(message);
                        } else {
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationUpdateFailed(message, asyncResult3.exception instanceof CommandException ? MtkImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult3.exception, MtkImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                case 1203:
                    if (MtkImsUtImpl.this.mListener != null) {
                        if (((AsyncResult) message.obj).exception == null) {
                            Log.d(MtkImsUtImpl.TAG, "Execute setupXcapUserAgentString succeed!event = " + message.what);
                        } else {
                            Log.e(MtkImsUtImpl.TAG, "Execute setupXcapUserAgentString failed!event = " + message.what);
                        }
                    }
                    break;
                case MtkImsUtImpl.IMS_UT_EVENT_GET_CF_WITH_CLASS /* 1204 */:
                    if (MtkImsUtImpl.this.mListener != null) {
                        AsyncResult asyncResult4 = (AsyncResult) message.obj;
                        if (asyncResult4.exception == null) {
                            MtkImsUtImpl.this.mListener.onUtConfigurationCallForwardQueried(message.arg1, MtkImsUtImpl.this.mExtPluginBase.getImsCallForwardInfo((CallForwardInfo[]) asyncResult4.result));
                        } else {
                            MtkImsUtImpl.this.mImsUtImpl.notifyUtConfigurationQueryFailed(message, asyncResult4.exception instanceof CommandException ? MtkImsUtImpl.this.mOemPluginBase.commandExceptionToReason((CommandException) asyncResult4.exception, MtkImsUtImpl.this.mPhoneId) : new ImsReasonInfo(804, 0));
                        }
                    }
                    break;
                default:
                    Log.d(MtkImsUtImpl.TAG, "Unknown Event: " + message.what);
                    break;
            }
        }
    }

    private MtkImsUtImpl(Context context, int i, ImsService imsService) {
        this.mImsUtImpl = null;
        this.mImsService = null;
        this.mPhoneId = 0;
        this.mContext = context;
        this.mImsUtImpl = ImsUtImpl.getInstance(context, i, imsService);
        HandlerThread handlerThread = new HandlerThread("MtkImsUtImplResult");
        handlerThread.start();
        this.mHandler = new ResultHandler(handlerThread.getLooper());
        this.mImsService = imsService;
        this.mImsRILAdapter = imsService.getImsRILAdapter(i);
        this.mPhoneId = i;
        this.mOemPluginBase = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsSSOemPlugin(this.mContext);
        this.mExtPluginBase = ExtensionFactory.makeExtensionPluginFactory(this.mContext).makeImsSSExtPlugin(this.mContext);
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

    public static MtkImsUtImpl getInstance(int i) {
        synchronized (sMtkImsUtImpls) {
            if (!sMtkImsUtImpls.containsKey(Integer.valueOf(i))) {
                return null;
            }
            return sMtkImsUtImpls.get(Integer.valueOf(i));
        }
    }

    public static MtkImsUtImpl getInstance(Context context, int i, ImsService imsService) {
        synchronized (sMtkImsUtImpls) {
            if (sMtkImsUtImpls.containsKey(Integer.valueOf(i))) {
                return sMtkImsUtImpls.get(Integer.valueOf(i));
            }
            sMtkImsUtImpls.put(Integer.valueOf(i), new MtkImsUtImpl(context, i, imsService));
            return sMtkImsUtImpls.get(Integer.valueOf(i));
        }
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public void explicitCallTransfer(Message message, Messenger messenger) {
        this.mImsService.explicitCallTransfer(this.mPhoneId, message, messenger);
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public String getUtIMPUFromNetwork() {
        Log.d(TAG, "getUtIMPUFromNetwork(): phoneId = " + this.mPhoneId);
        return ImsXuiManager.getInstance().getXui(this.mPhoneId);
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public String getXcapConflictErrorMessage() {
        return this.mOemPluginBase.getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_25, this.mPhoneId);
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public boolean isSupportCFT() {
        return this.mImsService.isSupportCFT(this.mPhoneId);
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public int queryCFForServiceClass(int i, String str, int i2) {
        int andIncreaseRequestId;
        synchronized (mLock) {
            andIncreaseRequestId = ImsUtImpl.getAndIncreaseRequestId();
        }
        Log.d(TAG, "queryCFForServiceClass(): requestId = " + andIncreaseRequestId);
        this.mImsRILAdapter.queryCallForwardStatus(this.mImsUtImpl.getCFReasonFromCondition(i), i2, str, this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CF_WITH_CLASS, andIncreaseRequestId, 0, null));
        return andIncreaseRequestId;
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public int queryCallForwardInTimeSlot(int i) {
        int andIncreaseRequestId;
        synchronized (mLock) {
            andIncreaseRequestId = ImsUtImpl.getAndIncreaseRequestId();
        }
        Log.d(TAG, "queryCallForwardInTimeSlot(): requestId = " + andIncreaseRequestId);
        this.mImsRILAdapter.queryCallForwardInTimeSlotStatus(this.mImsUtImpl.getCFReasonFromCondition(i), 1, this.mHandler.obtainMessage(IMS_UT_EVENT_GET_CF_TIME_SLOT, andIncreaseRequestId, 0, null));
        return andIncreaseRequestId;
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public void setListener(MtkImsUtListener mtkImsUtListener) {
        this.mListener = mtkImsUtListener;
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public void setupXcapUserAgentString(String str) {
        if (str == null) {
            Log.e(TAG, "setupXcapUserAgentString(): userAgent is null");
            return;
        }
        Log.d(TAG, "setupXcapUserAgentString(): userAgent = " + str);
        this.mImsRILAdapter.setupXcapUserAgentString(str, this.mHandler.obtainMessage(1203));
    }

    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) {
        int andIncreaseRequestId;
        synchronized (mLock) {
            andIncreaseRequestId = ImsUtImpl.getAndIncreaseRequestId();
        }
        Log.d(TAG, "updateCallBarringForServiceClass(): requestId = " + andIncreaseRequestId);
        this.mImsRILAdapter.setFacilityLock(getFacilityFromCBType(i), i2 == 1, str, i3, this.mHandler.obtainMessage(1202, andIncreaseRequestId, 0, null));
        return andIncreaseRequestId;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x004c */
    @Override // com.mediatek.ims.feature.MtkImsUtImplBase
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) throws Throwable {
        int andIncreaseRequestId;
        synchronized (mLock) {
            try {
                andIncreaseRequestId = ImsUtImpl.getAndIncreaseRequestId();
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        Log.d(TAG, "updateCallForwardInTimeSlot(): requestId = " + andIncreaseRequestId);
        this.mImsRILAdapter.setCallForwardInTimeSlot(this.mImsUtImpl.getCFActionFromAction(i), this.mImsUtImpl.getCFReasonFromCondition(i2), 1, str, i3, jArr, this.mHandler.obtainMessage(1201, andIncreaseRequestId, 0, null));
        return andIncreaseRequestId;
    }
}
