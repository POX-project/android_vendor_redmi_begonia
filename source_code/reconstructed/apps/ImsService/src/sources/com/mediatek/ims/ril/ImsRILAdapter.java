package com.mediatek.ims.ril;

import android.content.Context;
import android.hardware.radio.V1_0.CallForwardInfo;
import android.hardware.radio.V1_0.CdmaSmsAck;
import android.hardware.radio.V1_0.CdmaSmsMessage;
import android.hardware.radio.V1_0.CdmaSmsSubaddress;
import android.hardware.radio.V1_0.Dial;
import android.hardware.radio.V1_0.GsmSmsMessage;
import android.hardware.radio.V1_0.IRadio;
import android.hardware.radio.V1_0.ImsSmsMessage;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.hardware.radio.V1_0.UusInfo;
import android.net.ConnectivityManager;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Message;
import android.os.PowerManager;
import android.os.RemoteException;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.os.WorkSource;
import android.telephony.ModemActivityInfo;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.TelephonyHistogram;
import android.telephony.ims.ImsCallProfile;
import android.util.SparseArray;
import com.android.internal.telephony.ClientWakelockTracker;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.UUSInfo;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.ims.ImsCallInfo;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsServiceCallTracker;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.TimeZone;
import java.util.Vector;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicLong;
import vendor.mediatek.hardware.mtkradioex.V2_0.CallForwardInfoEx;
import vendor.mediatek.hardware.mtkradioex.V2_0.ConferenceDial;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx;

/* JADX INFO: loaded from: classes.dex */
public final class ImsRILAdapter extends ImsBaseCommands implements ImsCommandsInterface {
    private static final int DEFAULT_ACK_WAKE_LOCK_TIMEOUT_MS = 200;
    private static final int DEFAULT_WAKE_LOCK_TIMEOUT_MS = 60000;
    static final int EVENT_ACK_WAKE_LOCK_TIMEOUT = 4;
    static final int EVENT_BLOCKING_RESPONSE_TIMEOUT = 5;
    static final int EVENT_MTK_RADIO_PROXY_DEAD = 7;
    static final int EVENT_RADIO_PROXY_DEAD = 6;
    static final int EVENT_SEND = 1;
    static final int EVENT_TRIGGER_TO_FIRE_PENDING_URC = 8;
    static final int EVENT_WAKE_LOCK_TIMEOUT = 2;
    public static final int FOR_ACK_WAKELOCK = 1;
    public static final int FOR_WAKELOCK = 0;
    static final boolean IMSRIL_LOGD = true;
    static final boolean IMSRIL_LOGV = false;
    static final String IMSRIL_LOG_TAG = "IMS_RILA";
    static final boolean IMS_RILA_LOGD = true;
    public static final int INVALID_WAKELOCK = -1;
    static final int IRADIO_GET_SERVICE_DELAY_MILLIS = 1000;
    static final String PROPERTY_WAKE_LOCK_TIMEOUT = "ro.ril.wake_lock_timeout";
    static final String RILJ_ACK_WAKELOCK_NAME = "IMSRIL_ACK_WL";
    static final int RIL_HISTOGRAM_BUCKET_COUNT = 5;
    final PowerManager.WakeLock mAckWakeLock;
    final int mAckWakeLockTimeout;
    volatile int mAckWlSequenceNum;
    private WorkSource mActiveWakelockWorkSource;
    private final ClientWakelockTracker mClientWakelockTracker;
    Context mContext;
    private DtmfQueueHandler mDtmfReqQueue;
    ImsRadioIndication mImsRadioIndication;
    ImsRadioResponse mImsRadioResponse;
    boolean mIsMobileNetworkSupported;
    Object[] mLastNITZTimeInfo;
    volatile IMtkRadioEx mMtkRadioProxy;
    final AtomicLong mMtkRadioProxyCookie;
    final MtkRadioProxyDeathRecipient mMtkRadioProxyDeathRecipient;
    private OpImsCommandsInterface mOpCI;
    final Integer mPhoneId;
    private WorkSource mRILDefaultWorkSource;
    RadioIndicationImpl mRadioIndication;
    volatile IRadio mRadioProxy;
    final AtomicLong mRadioProxyCookie;
    final RadioProxyDeathRecipient mRadioProxyDeathRecipient;
    RadioResponseImpl mRadioResponse;
    SparseArray<RILRequest> mRequestList;
    final RilHandler mRilHandler;
    AtomicBoolean mTestingEmergencyCall;
    final PowerManager.WakeLock mWakeLock;
    int mWakeLockCount;
    final int mWakeLockTimeout;
    volatile int mWlSequenceNum;
    static SparseArray<TelephonyHistogram> mRilTimeHistograms = new SparseArray<>();
    static final String[] MTK_IMS_HIDL_SERVICE_NAME = {"imsSlot1", "imsSlot2", "imsSlot3", "imsSlot4"};
    static final String[] IMS_HIDL_SERVICE_NAME = {"imsAospSlot1", "imsAospSlot2", "imsAospSlot3", "imsAospSlot4"};

    class DtmfQueueHandler {
        private boolean mDtmfStatus;
        public final int MAXIMUM_DTMF_REQUEST = 32;
        private final boolean DTMF_STATUS_START = true;
        private final boolean DTMF_STATUS_STOP = ImsRILAdapter.IMSRIL_LOGV;
        private Vector<DtmfQueueRR> mDtmfQueue = new Vector<>(32);
        private DtmfQueueRR mPendingCHLDRequest = null;
        private boolean mIsSendChldRequest = ImsRILAdapter.IMSRIL_LOGV;

        public class DtmfQueueRR {
            public Object[] params;
            public RILRequest rr;

            public DtmfQueueRR(RILRequest rILRequest, Object[] objArr) {
                this.rr = rILRequest;
                this.params = objArr;
            }
        }

        public DtmfQueueHandler() {
            this.mDtmfStatus = ImsRILAdapter.IMSRIL_LOGV;
            this.mDtmfStatus = ImsRILAdapter.IMSRIL_LOGV;
        }

        public void add(DtmfQueueRR dtmfQueueRR) {
            this.mDtmfQueue.addElement(dtmfQueueRR);
        }

        public DtmfQueueRR buildDtmfQueueRR(RILRequest rILRequest, Object[] objArr) {
            if (rILRequest == null) {
                return null;
            }
            ImsRILAdapter.this.riljLog("DtmfQueueHandler.buildDtmfQueueRR build ([" + rILRequest.mSerial + "] reqId=" + rILRequest.mRequest + ")");
            return new DtmfQueueRR(rILRequest, objArr);
        }

        public DtmfQueueRR get() {
            return this.mDtmfQueue.get(0);
        }

        public DtmfQueueRR getPendingRequest() {
            return this.mPendingCHLDRequest;
        }

        public boolean hasSendChldRequest() {
            ImsRILAdapter.this.riljLog("mIsSendChldRequest = " + this.mIsSendChldRequest);
            return this.mIsSendChldRequest;
        }

        public boolean isStart() {
            if (this.mDtmfStatus) {
                return true;
            }
            return ImsRILAdapter.IMSRIL_LOGV;
        }

        public void remove(int i) {
            this.mDtmfQueue.removeElementAt(i);
        }

        public void remove(DtmfQueueRR dtmfQueueRR) {
            this.mDtmfQueue.remove(dtmfQueueRR);
        }

        public void resetSendChldRequest() {
            this.mIsSendChldRequest = ImsRILAdapter.IMSRIL_LOGV;
        }

        public void setPendingRequest(DtmfQueueRR dtmfQueueRR) {
            this.mPendingCHLDRequest = dtmfQueueRR;
        }

        public void setSendChldRequest() {
            this.mIsSendChldRequest = true;
        }

        public int size() {
            return this.mDtmfQueue.size();
        }

        public void start() {
            this.mDtmfStatus = true;
        }

        public void stop() {
            this.mDtmfStatus = ImsRILAdapter.IMSRIL_LOGV;
        }
    }

    final class MtkRadioProxyDeathRecipient implements IHwBinder.DeathRecipient {
        MtkRadioProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            ImsRILAdapter.this.riljLog("MtkRadioProxyDeathRecipient, serviceDied");
            ImsRILAdapter.this.mRilHandler.sendMessage(ImsRILAdapter.this.mRilHandler.obtainMessage(7, Long.valueOf(j)));
        }
    }

    final class RadioProxyDeathRecipient implements IHwBinder.DeathRecipient {
        RadioProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            ImsRILAdapter.this.riljLog("serviceDied");
            ImsRILAdapter.this.mRilHandler.sendMessage(ImsRILAdapter.this.mRilHandler.obtainMessage(6, Long.valueOf(j)));
        }
    }

    class RilHandler extends Handler {
        RilHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 2:
                    synchronized (ImsRILAdapter.this.mRequestList) {
                        if (message.arg1 == ImsRILAdapter.this.mWlSequenceNum && ImsRILAdapter.this.clearWakeLock(0)) {
                            int size = ImsRILAdapter.this.mRequestList.size();
                            Rlog.d(ImsRILAdapter.IMSRIL_LOG_TAG, "WAKE_LOCK_TIMEOUT  mRequestList=" + size);
                            for (int i = 0; i < size; i++) {
                                RILRequest rILRequestValueAt = ImsRILAdapter.this.mRequestList.valueAt(i);
                                Rlog.d(ImsRILAdapter.IMSRIL_LOG_TAG, i + ": [" + rILRequestValueAt.mSerial + "] " + ImsRILAdapter.requestToString(rILRequestValueAt.mRequest));
                            }
                        }
                        break;
                    }
                    return;
                case 3:
                default:
                    return;
                case 4:
                    if (message.arg1 == ImsRILAdapter.this.mAckWlSequenceNum) {
                        ImsRILAdapter.this.clearWakeLock(1);
                        return;
                    }
                    return;
                case 5:
                    RILRequest rILRequestFindAndRemoveRequestFromList = ImsRILAdapter.this.findAndRemoveRequestFromList(message.arg1);
                    if (rILRequestFindAndRemoveRequestFromList == null) {
                        return;
                    }
                    if (rILRequestFindAndRemoveRequestFromList.mResult != null) {
                        AsyncResult.forMessage(rILRequestFindAndRemoveRequestFromList.mResult, ImsRILAdapter.getResponseForTimedOutRILRequest(rILRequestFindAndRemoveRequestFromList), (Throwable) null);
                        rILRequestFindAndRemoveRequestFromList.mResult.sendToTarget();
                    }
                    ImsRILAdapter.this.decrementWakeLock(rILRequestFindAndRemoveRequestFromList);
                    rILRequestFindAndRemoveRequestFromList.release();
                    return;
                case 6:
                    ImsRILAdapter.this.riljLog("handleMessage: EVENT_RADIO_PROXY_DEAD cookie = " + message.obj + " mRadioProxyCookie = " + ImsRILAdapter.this.mRadioProxyCookie.get());
                    if (((Long) message.obj).longValue() == ImsRILAdapter.this.mRadioProxyCookie.get()) {
                        ImsRILAdapter.this.resetProxyAndRequestList();
                        ImsRILAdapter.this.getRadioProxy(null);
                        return;
                    }
                    return;
                case 7:
                    ImsRILAdapter.this.riljLog("handleMessage: EVENT_MTK_RADIO_PROXY_DEAD cookie = " + message.obj + " mMtkRadioProxyCookie = " + ImsRILAdapter.this.mMtkRadioProxyCookie.get());
                    if (((Long) message.obj).longValue() == ImsRILAdapter.this.mMtkRadioProxyCookie.get()) {
                        ImsRILAdapter.this.resetMtkProxyAndRequestList();
                        if (ImsRILAdapter.this.getMtkRadioProxy(null) != null) {
                            ImsRILAdapter.this.notifyImsServiceReady();
                            return;
                        } else {
                            ImsRILAdapter.this.mRilHandler.sendMessage(ImsRILAdapter.this.mRilHandler.obtainMessage(8));
                            return;
                        }
                    }
                    return;
                case 8:
                    if (ImsRILAdapter.this.getMtkRadioProxy(null) == null) {
                        ImsRILAdapter.this.mRilHandler.removeMessages(8);
                        ImsRILAdapter.this.mRilHandler.sendMessageDelayed(ImsRILAdapter.this.mRilHandler.obtainMessage(8), 1000L);
                        return;
                    }
                    ImsRILAdapter.this.riljLog("Trigger to fire pending URC " + ImsRILAdapter.this.mPhoneId);
                    ImsRILAdapter.this.notifyImsServiceReady();
                    return;
            }
        }
    }

    public ImsRILAdapter(Context context, int i) {
        super(context, i);
        this.mClientWakelockTracker = new ClientWakelockTracker();
        boolean z = IMSRIL_LOGV;
        this.mWlSequenceNum = 0;
        this.mAckWlSequenceNum = 0;
        this.mRequestList = new SparseArray<>();
        this.mTestingEmergencyCall = new AtomicBoolean(IMSRIL_LOGV);
        this.mDtmfReqQueue = new DtmfQueueHandler();
        this.mRadioProxy = null;
        this.mMtkRadioProxy = null;
        this.mRadioProxyCookie = new AtomicLong(0L);
        this.mMtkRadioProxyCookie = new AtomicLong(0L);
        riljLogi("Ims-RIL: init phone = " + i);
        this.mContext = context;
        this.mPhoneId = Integer.valueOf(i);
        this.mIsMobileNetworkSupported = ((ConnectivityManager) context.getSystemService("connectivity")).isNetworkSupported(0);
        this.mRadioResponse = new RadioResponseImpl(this, i);
        this.mRadioIndication = new RadioIndicationImpl(this, i);
        this.mImsRadioResponse = new ImsRadioResponse(this, i);
        this.mImsRadioIndication = new ImsRadioIndication(this, i);
        this.mRilHandler = new RilHandler();
        this.mRadioProxyDeathRecipient = new RadioProxyDeathRecipient();
        this.mMtkRadioProxyDeathRecipient = new MtkRadioProxyDeathRecipient();
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        PowerManager.WakeLock wakeLockNewWakeLock = powerManager.newWakeLock(1, IMSRIL_LOG_TAG);
        this.mWakeLock = wakeLockNewWakeLock;
        wakeLockNewWakeLock.setReferenceCounted(IMSRIL_LOGV);
        PowerManager.WakeLock wakeLockNewWakeLock2 = powerManager.newWakeLock(1, RILJ_ACK_WAKELOCK_NAME);
        this.mAckWakeLock = wakeLockNewWakeLock2;
        wakeLockNewWakeLock2.setReferenceCounted(IMSRIL_LOGV);
        this.mWakeLockTimeout = SystemProperties.getInt(PROPERTY_WAKE_LOCK_TIMEOUT, DEFAULT_WAKE_LOCK_TIMEOUT_MS);
        this.mAckWakeLockTimeout = SystemProperties.getInt(PROPERTY_WAKE_LOCK_TIMEOUT, 200);
        this.mWakeLockCount = 0;
        this.mRILDefaultWorkSource = new WorkSource(context.getApplicationInfo().uid, context.getPackageName());
        IRadio radioProxy = getRadioProxy(null);
        StringBuilder sb = new StringBuilder();
        sb.append("Ims-RIL: proxy = ");
        sb.append(radioProxy == null);
        riljLogi(sb.toString());
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(null);
        StringBuilder sb2 = new StringBuilder();
        sb2.append("Mtk-Ims-RIL: proxy = ");
        sb2.append(mtkRadioProxy == null ? true : z);
        riljLog(sb2.toString());
        this.mOpCI = OpImsRILUtil.makeCommandInterface(context, i);
    }

    private void acquireWakeLock(RILRequest rILRequest, int i) {
        synchronized (rILRequest) {
            if (rILRequest.mWakeLockType != -1) {
                Rlog.d(IMSRIL_LOG_TAG, "Failed to aquire wakelock for " + rILRequest.serialString());
                return;
            }
            if (i != 0) {
                if (i != 1) {
                    Rlog.w(IMSRIL_LOG_TAG, "Acquiring Invalid Wakelock type " + i);
                    return;
                }
                synchronized (this.mAckWakeLock) {
                    this.mAckWakeLock.acquire();
                    this.mAckWlSequenceNum++;
                    Message messageObtainMessage = this.mRilHandler.obtainMessage(4);
                    messageObtainMessage.arg1 = this.mAckWlSequenceNum;
                    this.mRilHandler.sendMessageDelayed(messageObtainMessage, this.mAckWakeLockTimeout);
                }
                rILRequest.mWakeLockType = i;
            }
            synchronized (this.mWakeLock) {
                this.mWakeLock.acquire();
                this.mWakeLockCount++;
                this.mWlSequenceNum++;
                if (!this.mClientWakelockTracker.isClientActive(getWorkSourceClientId(rILRequest.mWorkSource))) {
                    if (this.mActiveWakelockWorkSource != null) {
                        this.mActiveWakelockWorkSource.add(rILRequest.mWorkSource);
                    } else {
                        this.mActiveWakelockWorkSource = rILRequest.mWorkSource;
                    }
                    this.mWakeLock.setWorkSource(this.mActiveWakelockWorkSource);
                }
                this.mClientWakelockTracker.startTracking(rILRequest.mClientId, rILRequest.mRequest, rILRequest.mSerial, this.mWakeLockCount);
                Message messageObtainMessage2 = this.mRilHandler.obtainMessage(2);
                messageObtainMessage2.arg1 = this.mWlSequenceNum;
                this.mRilHandler.sendMessageDelayed(messageObtainMessage2, this.mWakeLockTimeout);
            }
            rILRequest.mWakeLockType = i;
        }
    }

    private void addRequest(RILRequest rILRequest) {
        acquireWakeLock(rILRequest, 0);
        synchronized (this.mRequestList) {
            rILRequest.mStartTimeMs = SystemClock.elapsedRealtime();
            this.mRequestList.append(rILRequest.mSerial, rILRequest);
        }
    }

    private void addToRilHistogram(RILRequest rILRequest) {
        int iElapsedRealtime = (int) (SystemClock.elapsedRealtime() - rILRequest.mStartTimeMs);
        synchronized (mRilTimeHistograms) {
            TelephonyHistogram telephonyHistogram = mRilTimeHistograms.get(rILRequest.mRequest);
            if (telephonyHistogram == null) {
                telephonyHistogram = new TelephonyHistogram(1, rILRequest.mRequest, 5);
                mRilTimeHistograms.put(rILRequest.mRequest, telephonyHistogram);
            }
            telephonyHistogram.addTimeTaken(iElapsedRealtime);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean clearWakeLock(int i) {
        if (i != 0) {
            synchronized (this.mAckWakeLock) {
                if (!this.mAckWakeLock.isHeld()) {
                    return IMSRIL_LOGV;
                }
                this.mAckWakeLock.release();
                return true;
            }
        }
        synchronized (this.mWakeLock) {
            if (this.mWakeLockCount == 0 && !this.mWakeLock.isHeld()) {
                return IMSRIL_LOGV;
            }
            Rlog.d(IMSRIL_LOG_TAG, "NOTE: mWakeLockCount is " + this.mWakeLockCount + "at time of clearing");
            this.mWakeLockCount = 0;
            this.mWakeLock.release();
            this.mClientWakelockTracker.stopTrackingAll();
            this.mActiveWakelockWorkSource = null;
            return true;
        }
    }

    private GsmSmsMessage constructGsmSendSmsRilRequest(String str, String str2) {
        GsmSmsMessage gsmSmsMessage = new GsmSmsMessage();
        gsmSmsMessage.smscPdu = str == null ? "" : str;
        gsmSmsMessage.pdu = str2 != null ? str2 : "";
        return gsmSmsMessage;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void decrementWakeLock(RILRequest rILRequest) {
        synchronized (rILRequest) {
            int i = rILRequest.mWakeLockType;
            if (i != -1) {
                if (i == 0) {
                    synchronized (this.mWakeLock) {
                        this.mClientWakelockTracker.stopTracking(rILRequest.mClientId, rILRequest.mRequest, rILRequest.mSerial, this.mWakeLockCount > 1 ? this.mWakeLockCount - 1 : 0);
                        if (!this.mClientWakelockTracker.isClientActive(getWorkSourceClientId(rILRequest.mWorkSource)) && this.mActiveWakelockWorkSource != null) {
                            this.mActiveWakelockWorkSource.remove(rILRequest.mWorkSource);
                            if (this.mActiveWakelockWorkSource.size() == 0) {
                                this.mActiveWakelockWorkSource = null;
                            }
                            this.mWakeLock.setWorkSource(this.mActiveWakelockWorkSource);
                        }
                        if (this.mWakeLockCount > 1) {
                            this.mWakeLockCount--;
                        } else {
                            this.mWakeLockCount = 0;
                            this.mWakeLock.release();
                        }
                    }
                } else if (i != 1) {
                    Rlog.w(IMSRIL_LOG_TAG, "Decrementing Invalid Wakelock type " + rILRequest.mWakeLockType);
                }
            }
            rILRequest.mWakeLockType = -1;
        }
    }

    private void emergencyDial(String str, ImsCallProfile imsCallProfile, int i, UUSInfo uUSInfo, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        android.hardware.radio.V1_4.IRadio iRadio = (android.hardware.radio.V1_4.IRadio) radioProxy;
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2087, message, this.mRILDefaultWorkSource);
            Dial dial = new Dial();
            dial.address = convertNullToEmptyString(str);
            dial.clir = i;
            if (uUSInfo != null) {
                UusInfo uusInfo = new UusInfo();
                uusInfo.uusType = uUSInfo.getType();
                uusInfo.uusDcs = uUSInfo.getDcs();
                uusInfo.uusData = new String(uUSInfo.getUserData());
                dial.uusInfo.add(uusInfo);
            }
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                iRadio.emergencyDial(rILRequestObtainRequest.mSerial, dial, imsCallProfile.getEmergencyServiceCategories(), (ArrayList) imsCallProfile.getEmergencyUrns(), imsCallProfile.getEmergencyCallRouting(), IMSRIL_LOGV, IMSRIL_LOGV);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "emergencyDial", e);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public RILRequest findAndRemoveRequestFromList(int i) {
        RILRequest rILRequest;
        synchronized (this.mRequestList) {
            rILRequest = this.mRequestList.get(i);
            if (rILRequest != null) {
                this.mRequestList.remove(i);
            }
        }
        return rILRequest;
    }

    private WorkSource getDeafultWorkSourceIfInvalid(WorkSource workSource) {
        return workSource == null ? this.mRILDefaultWorkSource : workSource;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public IMtkRadioEx getMtkRadioProxy(Message message) {
        if (!this.mIsMobileNetworkSupported) {
            handleProxyNotExist(message);
            return null;
        }
        if (this.mMtkRadioProxy != null) {
            return this.mMtkRadioProxy;
        }
        if (this.mRilHandler.hasMessages(8) || this.mRilHandler.hasMessages(7)) {
            riljLogi("getMtkRadioProxy service died, we try again later");
            handleProxyNotExist(message);
            return null;
        }
        try {
            this.mMtkRadioProxy = IMtkRadioEx.getService(MTK_IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
            if (this.mMtkRadioProxy != null) {
                this.mMtkRadioProxy.linkToDeath(this.mMtkRadioProxyDeathRecipient, this.mMtkRadioProxyCookie.incrementAndGet());
                this.mMtkRadioProxy.setResponseFunctionsIms(this.mImsRadioResponse, this.mImsRadioIndication);
            } else {
                riljLoge("getMtkRadioProxy: mMtkRadioProxy == null");
            }
        } catch (RemoteException | RuntimeException e) {
            this.mRadioProxy = null;
            riljLoge("getMtkRadioProxy getService/setResponseFunctions: " + e);
        }
        if (this.mMtkRadioProxy == null && message != null) {
            AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
            message.sendToTarget();
        }
        return this.mMtkRadioProxy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public IRadio getRadioProxy(Message message) {
        if (!this.mIsMobileNetworkSupported) {
            handleProxyNotExist(message);
            return null;
        }
        if (this.mRadioProxy != null) {
            return this.mRadioProxy;
        }
        if (this.mRilHandler.hasMessages(6)) {
            riljLogi("getRadioProxy service died, we try again later");
            handleProxyNotExist(message);
            return null;
        }
        try {
            try {
                this.mRadioProxy = android.hardware.radio.V1_5.IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
            } catch (NoSuchElementException e) {
            }
            if (this.mRadioProxy == null) {
                try {
                    this.mRadioProxy = android.hardware.radio.V1_4.IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
                } catch (NoSuchElementException e2) {
                }
            }
            if (this.mRadioProxy == null) {
                try {
                    this.mRadioProxy = android.hardware.radio.V1_3.IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
                } catch (NoSuchElementException e3) {
                }
            }
            if (this.mRadioProxy == null) {
                try {
                    this.mRadioProxy = android.hardware.radio.V1_2.IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
                } catch (NoSuchElementException e4) {
                }
            }
            if (this.mRadioProxy == null) {
                try {
                    this.mRadioProxy = android.hardware.radio.V1_1.IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
                } catch (NoSuchElementException e5) {
                }
            }
            if (this.mRadioProxy == null) {
                try {
                    this.mRadioProxy = IRadio.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()], IMSRIL_LOGV);
                } catch (NoSuchElementException e6) {
                }
            }
            riljLogi("getRadioProxy: " + this.mRadioProxy);
            if (this.mRadioProxy != null) {
                this.mRadioProxy.linkToDeath(this.mRadioProxyDeathRecipient, this.mRadioProxyCookie.incrementAndGet());
                this.mRadioProxy.setResponseFunctions(this.mRadioResponse, this.mRadioIndication);
                riljLogi("setResponseFunctionsIms");
                if (this.mDtmfReqQueue != null) {
                    synchronized (this.mDtmfReqQueue) {
                        riljLog("queue size  " + this.mDtmfReqQueue.size());
                        for (int size = this.mDtmfReqQueue.size() - 1; size >= 0; size--) {
                            this.mDtmfReqQueue.remove(size);
                        }
                        riljLog("queue size  after " + this.mDtmfReqQueue.size());
                        if (this.mDtmfReqQueue.getPendingRequest() != null) {
                            riljLog("reset pending switch request");
                            RILRequest rILRequest = this.mDtmfReqQueue.getPendingRequest().rr;
                            if (rILRequest.mResult != null) {
                                AsyncResult.forMessage(rILRequest.mResult, (Object) null, (Throwable) null);
                                rILRequest.mResult.sendToTarget();
                            }
                            this.mDtmfReqQueue.resetSendChldRequest();
                            this.mDtmfReqQueue.setPendingRequest(null);
                        }
                    }
                }
            } else {
                riljLoge("getRadioProxy: mRadioProxy == null");
            }
        } catch (RemoteException | RuntimeException e7) {
            this.mRadioProxy = null;
            riljLoge("RadioProxy getService/setResponseFunctions: " + e7);
        }
        if (this.mRadioProxy == null) {
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
                message.sendToTarget();
            }
            this.mRilHandler.removeMessages(6);
            RilHandler rilHandler = this.mRilHandler;
            rilHandler.sendMessageDelayed(rilHandler.obtainMessage(6, Long.valueOf(this.mRadioProxyCookie.get())), 1000L);
        }
        return this.mRadioProxy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static Object getResponseForTimedOutRILRequest(RILRequest rILRequest) {
        if (rILRequest != null && rILRequest.mRequest == 135) {
            return new ModemActivityInfo(0L, 0, 0, new int[5], 0);
        }
        return null;
    }

    public static List<TelephonyHistogram> getTelephonyRILTimingHistograms() {
        ArrayList arrayList;
        synchronized (mRilTimeHistograms) {
            arrayList = new ArrayList(mRilTimeHistograms.size());
            for (int i = 0; i < mRilTimeHistograms.size(); i++) {
                arrayList.add(new TelephonyHistogram(mRilTimeHistograms.valueAt(i)));
            }
        }
        return arrayList;
    }

    private String getWorkSourceClientId(WorkSource workSource) {
        if (workSource == null) {
            return null;
        }
        return String.valueOf(workSource.get(0)) + ":" + workSource.getName(0);
    }

    private void handleChldRelatedRequest(RILRequest rILRequest, Object[] objArr) {
        synchronized (this.mDtmfReqQueue) {
            int size = this.mDtmfReqQueue.size();
            if (size > 0) {
                if (this.mDtmfReqQueue.get().rr.mRequest == 49) {
                    riljLog("DTMF queue isn't 0, first request is START, send stop dtmf and pending switch");
                    int i = size > 1 ? 2 : 1;
                    riljLog("queue size  " + this.mDtmfReqQueue.size());
                    for (int i2 = size + (-1); i2 >= i; i2--) {
                        this.mDtmfReqQueue.remove(i2);
                    }
                    riljLog("queue size  after " + this.mDtmfReqQueue.size());
                    if (this.mDtmfReqQueue.size() == 1) {
                        riljLog("add dummy stop dtmf request");
                        RILRequest rILRequestObtainRequest = obtainRequest(50, null, this.mRILDefaultWorkSource);
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, new Object[]{Integer.valueOf(rILRequestObtainRequest.mSerial)});
                        this.mDtmfReqQueue.stop();
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                    }
                } else {
                    riljLog("DTMF queue isn't 0, first request is STOP, penging switch");
                    for (int i3 = size - 1; i3 >= 1; i3--) {
                        this.mDtmfReqQueue.remove(i3);
                    }
                }
                if (this.mDtmfReqQueue.getPendingRequest() != null) {
                    RILRequest rILRequest2 = this.mDtmfReqQueue.getPendingRequest().rr;
                    if (rILRequest2.mResult != null) {
                        AsyncResult.forMessage(rILRequest2.mResult, (Object) null, (Throwable) null);
                        rILRequest2.mResult.sendToTarget();
                    }
                }
                this.mDtmfReqQueue.setPendingRequest(this.mDtmfReqQueue.buildDtmfQueueRR(rILRequest, objArr));
            } else {
                riljLog("DTMF queue is 0, send switch Immediately");
                this.mDtmfReqQueue.setSendChldRequest();
                sendDtmfQueueRR(this.mDtmfReqQueue.buildDtmfQueueRR(rILRequest, objArr));
            }
        }
    }

    private void handleMtkRadioProxyExceptionForRR(RILRequest rILRequest, String str, Exception exc) {
        riljLoge(str + ": " + exc);
        resetMtkProxyAndRequestList();
    }

    private void handleProxyNotExist(Message message) {
        if (message != null) {
            AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
            message.sendToTarget();
        }
    }

    private void handleRadioProxyExceptionForRR(RILRequest rILRequest, String str, Exception exc) {
        riljLoge(str + ": " + exc);
        resetProxyAndRequestList();
    }

    private void internalAddConferenceMember(int i, String str, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2090, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " confCallId = " + i + " address = " + ImsServiceCallTracker.sensitiveEncode(str) + " callIdToAdd =" + i2);
            try {
                mtkRadioProxy.controlImsConferenceCallMember(rILRequestObtainRequest.mSerial, 1, i, str, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "addImsConferenceCallMember", e);
            }
        }
    }

    private void internalImsEct(String str, int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2083, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.imsEctCommand(rILRequestObtainRequest.mSerial, str, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "imsEctCommand", e);
            }
        }
    }

    private void internalRemoveConferenceMember(int i, String str, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2091, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " confCallId = " + i + " address = " + ImsServiceCallTracker.sensitiveEncode(str) + " callIdToRemove =" + i2);
            try {
                mtkRadioProxy.controlImsConferenceCallMember(rILRequestObtainRequest.mSerial, 0, i, str, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "removeImsConferenceCallMember", e);
            }
        }
    }

    private RILRequest obtainRequest(int i, Message message, WorkSource workSource) {
        RILRequest rILRequestObtain = RILRequest.obtain(i, message, workSource);
        addRequest(rILRequestObtain);
        return rILRequestObtain;
    }

    static String requestToString(int i) {
        if (i == 15) {
            return "SWITCH_WAITING_OR_HOLDING_AND_ACTIVE";
        }
        if (i == 16) {
            return "CONFERENCE";
        }
        if (i == 49) {
            return "DTMF_START";
        }
        if (i == 50) {
            return "DTMF_STOP";
        }
        switch (i) {
            case 10:
                return "DIAL";
            case 12:
                return "HANGUP";
            case 18:
                return "LAST_CALL_FAIL_CAUSE";
            case 24:
                return "DTMF";
            case 40:
                return "ANSWER";
            case 53:
                return "SET_MUTE";
            case 55:
                return "QUERY_CLIP";
            case 72:
                return "EXPLICIT_CALL_TRANSFER";
            case 99:
                return "EXIT_EMERGENCY_CALLBACK_MODE";
            case 129:
                return "SHUTDOWN";
            case ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_HOLD /* 135 */:
                return "GET_ACTIVITY_INFO";
            case 2016:
                return "RIL_REQUEST_SET_CALL_INDICATION";
            case 2019:
                return "HANGUP_ALL";
            case 2030:
                return "SET_ECC_LIST";
            case 2087:
                return "IMS_EMERGENCY_DIAL";
            case 2088:
                return "ImsRILConstants.RIL_REQUEST_SET_IMS_RTP_REPORT";
            case 2089:
                return "RIL_REQUEST_CONFERENCE_DIAL";
            case 2090:
                return "RIL_REQUEST_ADD_IMS_CONFERENCE_CALL_MEMBER";
            case 2091:
                return "RIL_REQUEST_REMOVE_IMS_CONFERENCE_CALL_MEMBER";
            case 2092:
                return "VT_DIAL_WITH_SIP_URI";
            case 2093:
                return "SEND_USSI";
            case 2094:
                return "CANCEL_USSI";
            case 2095:
                return "SET_WFC_PROFILE";
            case 2096:
                return "PULL_CALL";
            case 2097:
                return "SET_IMS_REGISTRATION_REPORT";
            case 2098:
                return "IMS_DIAL";
            case 2099:
                return "IMS_VT_DIAL";
            case 2133:
                return "RIL_REQUEST_IMS_SEND_SMS_EX";
            case 2135:
                return "RIL_REQUEST_SET_IMS_BEARER_NOTIFICATION";
            case 2136:
                return "IMS_CONFIG_SET_FEATURE";
            case 2137:
                return "IMS_CONFIG_GET_FEATURE";
            case 2138:
                return "IMS_CONFIG_SET_PROVISION";
            case 2139:
                return "IMS_CONFIG_GET_PROVISION";
            case 2141:
                return "IMS_CONFIG_GET_RESOURCE_CAP";
            case 2163:
                return "RIL_REQUEST_GET_XCAP_STATUS";
            case 2164:
                return "RIL_REQUEST_RESET_SUPP_SERV";
            case 2166:
                return "RIL_REQUEST_SET_RCS_UA_ENABLE";
            case 2167:
                return "SETUP_XCAP_USER_AGENT_STRING";
            case 2170:
                return "RIL_REQUEST_SMS_ACKNOWLEDGE_EX";
            case 2172:
                return "CDMA_SMS_ACKNOWLEDGE_EX";
            case 2174:
                return "RIL_REQUEST_SET_RTT_MODE";
            case 2175:
                return "RIL_REQUEST_SEND_RTT_MODIFY_REQUEST";
            case 2176:
                return "RIL_REQUEST_SEND_RTT_TEXT";
            case 2177:
                return "RIL_REQUEST_RTT_MODIFY_REQUST_RESPONSE";
            case 2178:
                return "RIL_REQUEST_QUERY_VOPS_STATUS";
            case 2179:
                return "HANGUP_WITH_REASON";
            case 2180:
                return "RIL_REQUEST_SET_SIP_HEADER";
            case 2181:
                return "RIL_REQUEST_SIP_HEADER_REPORT";
            case 2182:
                return "RIL_REQUEST_SET_IMS_CALL_MODE";
            case 2183:
                return "RIL_REQUEST_QUERY_SSAC_STATUS";
            case 2184:
                return "RIL_REQUEST_TOGGLE_RTT_AUDIO_INDICATION";
            case 2185:
                return "ECC_REDIAL_APPROVE";
            case 2186:
                return "RIL_REQUEST_SET_CALL_ADDITIONAL_INFO";
            default:
                switch (i) {
                    case 31:
                        return "GET_CLIR";
                    case 32:
                        return "SET_CLIR";
                    case 33:
                        return "QUERY_CALL_FORWARD_STATUS";
                    case 34:
                        return "SET_CALL_FORWARD";
                    case 35:
                        return "QUERY_CALL_WAITING";
                    case 36:
                        return "SET_CALL_WAITING";
                    default:
                        switch (i) {
                            case 42:
                                return "QUERY_FACILITY_LOCK";
                            case 43:
                                return "SET_FACILITY_LOCK";
                            case 44:
                                return "CHANGE_BARRING_PASSWORD";
                            default:
                                switch (i) {
                                    case 2069:
                                        return "SET_IMS_ENABLE";
                                    case 2070:
                                        return "SET_VOLTE_ENABLE";
                                    case 2071:
                                        return "SET_WFC_ENABLE";
                                    case 2072:
                                        return "SET_VILTE_ENABLE";
                                    case 2073:
                                        return "SET_VIWIFI_ENABLE";
                                    default:
                                        switch (i) {
                                            case 2075:
                                                return "SET_IMS_VIDEO_ENABLE";
                                            case 2076:
                                                return "VIDEO_CALL_ACCEPT";
                                            case 2077:
                                                return "SET_IMSCFG";
                                            case 2078:
                                                return "GET_PROVISION_VALUE";
                                            case 2079:
                                                return "SET_PROVISION_VALUE";
                                            case 2080:
                                                return "IMS_BEARER_STATE_CONFIRM";
                                            default:
                                                switch (i) {
                                                    case 2082:
                                                        return "IMS_DEREG_NOTIFICATION";
                                                    case 2083:
                                                        return "IMS_ECT";
                                                    case 2084:
                                                        return "HOLD_CALL";
                                                    case 2085:
                                                        return "RESUME_CALL";
                                                    default:
                                                        switch (i) {
                                                            case 2103:
                                                                return "SET_CLIP";
                                                            case 2104:
                                                                return "GET_COLP";
                                                            case 2105:
                                                                return "GET_COLR";
                                                            default:
                                                                switch (i) {
                                                                    case 2122:
                                                                        return "RIL_REQUEST_SET_VOICE_DOMAIN_PREFERENCE";
                                                                    case 2123:
                                                                        return "SET_COLP";
                                                                    case 2124:
                                                                        return "SET_COLR";
                                                                    case 2125:
                                                                        return "QUERY_CALL_FORWARD_IN_TIME_SLOT";
                                                                    case 2126:
                                                                        return "SET_CALL_FORWARD_IN_TIME_SLOT";
                                                                    case 2127:
                                                                        return "RIL_REQUEST_RUN_GBA";
                                                                    case 2128:
                                                                        return "ImsRILConstants.RIL_REQUEST_SET_MD_IMSCFG";
                                                                    default:
                                                                        return "<unknown request>: " + String.valueOf(i);
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetMtkProxyAndRequestList() {
        this.mMtkRadioProxy = null;
        this.mMtkRadioProxyCookie.incrementAndGet();
        setRadioState(2);
        RILRequest.resetSerial();
        clearRequestList(1, IMSRIL_LOGV);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetProxyAndRequestList() {
        riljLogi("resetProxyAndRequestList");
        this.mRadioProxy = null;
        this.mRadioProxyCookie.incrementAndGet();
        setRadioState(2);
        RILRequest.resetSerial();
        clearRequestList(1, IMSRIL_LOGV);
    }

    static String responseToString(int i) {
        if (i == 1000) {
            return "RADIO_STATE_CHANGED";
        }
        if (i == 1011) {
            return "RIL_UNSOL_SUPP_SVC_NOTIFICATION";
        }
        if (i == 3015) {
            return "INCOMING_CALL_INDICATION";
        }
        if (i == 3024) {
            return "CIPHER_INDICATION";
        }
        if (i == 3027) {
            return "SPEECH_CODEC_INFO";
        }
        if (i == 3049) {
            return "IMS_BEARER_STATE_NOTIFY";
        }
        if (i == 3085) {
            return "IMS_MULTIIMS_COUNT";
        }
        if (i == 3126) {
            return "RIL_UNSOL_CALL_ADDITIONAL_INFO";
        }
        if (i == 3129) {
            return "RIL_UNSOL_IMS_DIALOG_INDICATION";
        }
        if (i == 3051) {
            return "RIL_UNSOL_IMS_BEARER_INIT";
        }
        if (i == 3052) {
            return "IMS_DEREG_DONE";
        }
        switch (i) {
            case ImsRILConstants.RIL_UNSOL_CALL_INFO_INDICATION /* 3031 */:
                return "CALL_INFO_INDICATION";
            case ImsRILConstants.RIL_UNSOL_ECONF_RESULT_INDICATION /* 3032 */:
                return "ECONF_RESULT_INDICATION";
            case ImsRILConstants.RIL_UNSOL_SIP_CALL_PROGRESS_INDICATOR /* 3033 */:
                return "SIP_CALL_PROGRESS_INDICATOR";
            case ImsRILConstants.RIL_UNSOL_CALLMOD_CHANGE_INDICATOR /* 3034 */:
                return "CALLMOD_CHANGE_INDICATOR";
            case ImsRILConstants.RIL_UNSOL_VIDEO_CAPABILITY_INDICATOR /* 3035 */:
                return "VIDEO_CAPABILITY_INDICATOR";
            case ImsRILConstants.RIL_UNSOL_ON_USSI /* 3036 */:
                return "ON_USSI";
            case ImsRILConstants.RIL_UNSOL_GET_PROVISION_DONE /* 3037 */:
                return "GET_PROVISION_DONE";
            case ImsRILConstants.RIL_UNSOL_IMS_RTP_INFO /* 3038 */:
                return "UNSOL_IMS_RTP_INFO";
            case ImsRILConstants.RIL_UNSOL_ON_XUI /* 3039 */:
                return "ON_XUI";
            case ImsRILConstants.RIL_UNSOL_IMS_EVENT_PACKAGE_INDICATION /* 3040 */:
                return "IMS_EVENT_PACKAGE_INDICATION";
            case ImsRILConstants.RIL_UNSOL_IMS_REGISTRATION_INFO /* 3041 */:
                return "IMS_REGISTRATION_INFO";
            case ImsRILConstants.RIL_UNSOL_IMS_ENABLE_DONE /* 3042 */:
                return "IMS_ENABLE_DONE";
            case ImsRILConstants.RIL_UNSOL_IMS_DISABLE_DONE /* 3043 */:
                return "IMS_DISABLE_DONE";
            case ImsRILConstants.RIL_UNSOL_IMS_ENABLE_START /* 3044 */:
                return "IMS_ENABLE_START";
            case ImsRILConstants.RIL_UNSOL_IMS_DISABLE_START /* 3045 */:
                return "IMS_DISABLE_START";
            case ImsRILConstants.RIL_UNSOL_ECT_INDICATION /* 3046 */:
                return "ECT_INDICATION";
            case ImsRILConstants.RIL_UNSOL_VOLTE_SETTING /* 3047 */:
                return "VOLTE_SETTING";
            default:
                switch (i) {
                    case ImsRILConstants.RIL_UNSOL_IMS_CONFERENCE_INFO_INDICATION /* 3089 */:
                        return "RIL_UNSOL_IMS_CONFERENCE_INFO_INDICATION";
                    case ImsRILConstants.RIL_UNSOL_LTE_MESSAGE_WAITING_INDICATION /* 3090 */:
                        return "RIL_UNSOL_LTE_MESSAGE_WAITING_INDICATION";
                    case ImsRILConstants.RIL_UNSOL_IMS_CONFIG_DYNAMIC_IMS_SWITCH_COMPLETE /* 3091 */:
                        return "DYNAMIC_IMS_SWITCH_COMPLETE";
                    case ImsRILConstants.RIL_UNSOL_IMS_CONFIG_FEATURE_CHANGED /* 3092 */:
                        return "IMS_FEATURE_CHANGED";
                    case ImsRILConstants.RIL_UNSOL_IMS_CONFIG_CONFIG_CHANGED /* 3093 */:
                        return "IMS_CONFIG_CHANGED";
                    case ImsRILConstants.RIL_UNSOL_IMS_CONFIG_CONFIG_LOADED /* 3094 */:
                        return "IMS_CONFIG_LOADED";
                    default:
                        switch (i) {
                            case ImsRILConstants.RIL_UNSOL_ON_VOLTE_SUBSCRIPTION /* 3110 */:
                                return "ImsRILConstants.RIL_UNSOL_ON_VOLTE_SUBSCRIPTION";
                            case ImsRILConstants.RIL_UNSOL_IMS_DATA_INFO_NOTIFY /* 3111 */:
                                return "RIL_UNSOL_IMS_DATA_INFO_NOTIFY";
                            case ImsRILConstants.RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT_EX /* 3112 */:
                                return "RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT_EX";
                            case ImsRILConstants.RIL_UNSOL_RESPONSE_NEW_SMS_EX /* 3113 */:
                                return "RIL_UNSOL_RESPONSE_NEW_SMS_EX";
                            default:
                                switch (i) {
                                    case ImsRILConstants.RIL_UNSOL_RESPONSE_CDMA_NEW_SMS_EX /* 3116 */:
                                        return "UNSOL_CDMA_NEW_SMS_EX";
                                    case ImsRILConstants.RIL_UNSOL_NO_EMERGENCY_CALLBACK_MODE /* 3117 */:
                                        return "RIL_UNSOL_NO_EMERGENCY_CALLBACK_MODE";
                                    case ImsRILConstants.RIL_UNSOL_RTT_MODIFY_RESPONSE /* 3118 */:
                                        return "RIL_UNSOL_RTT_MODIFY_RESPONSE";
                                    case ImsRILConstants.RIL_UNSOL_RTT_TEXT_RECEIVE /* 3119 */:
                                        return "RIL_UNSOL_RTT_TEXT_RECEIVE";
                                    case ImsRILConstants.RIL_UNSOL_RTT_CAPABILITY_INDICATION /* 3120 */:
                                        return "RIL_UNSOL_RTT_CAPABILITY_INDICATION";
                                    case ImsRILConstants.RIL_UNSOL_RTT_MODIFY_REQUEST_RECEIVE /* 3121 */:
                                        return "RIL_UNSOL_RTT_MODIFY_REQUEST_RECEIVE";
                                    case ImsRILConstants.RIL_UNSOL_AUDIO_INDICATION /* 3122 */:
                                        return "RIL_UNSOL_AUDIO_INDICATION";
                                    case ImsRILConstants.RIL_UNSOL_VOPS_INDICATION /* 3123 */:
                                        return "RIL_UNSOL_VOPS_INDICATION";
                                    case ImsRILConstants.RIL_UNSOL_SIP_HEADER /* 3124 */:
                                        return "RIL_UNSOL_SIP_HEADER";
                                    default:
                                        return "<unknown response>" + String.valueOf(i);
                                }
                        }
                }
        }
    }

    static String retToString(int i, Object obj) {
        if (obj == null) {
            return "";
        }
        if (obj instanceof int[]) {
            int[] iArr = (int[]) obj;
            int length = iArr.length;
            StringBuilder sb = new StringBuilder("{");
            if (length > 0) {
                sb.append(iArr[0]);
                for (int i2 = 0 + 1; i2 < length; i2++) {
                    sb.append(", ");
                    sb.append(iArr[i2]);
                }
            }
            sb.append("}");
            return sb.toString();
        }
        if (!(obj instanceof String[])) {
            return obj.toString();
        }
        String[] strArr = (String[]) obj;
        int length2 = strArr.length;
        StringBuilder sb2 = new StringBuilder("{");
        if (length2 > 0) {
            sb2.append(strArr[0]);
            for (int i3 = 0 + 1; i3 < length2; i3++) {
                sb2.append(", ");
                sb2.append(strArr[i3]);
            }
        }
        sb2.append("}");
        return sb2.toString();
    }

    private void sendAck() {
        RILRequest rILRequestObtain = RILRequest.obtain(800, null, this.mRILDefaultWorkSource);
        acquireWakeLock(rILRequestObtain, 1);
        IRadio radioProxy = getRadioProxy(null);
        if (radioProxy != null) {
            try {
                radioProxy.responseAcknowledgement();
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtain, "sendAck", e);
                riljLoge("sendAck: " + e);
            }
        } else {
            Rlog.e(IMSRIL_LOG_TAG, "Error trying to send ack, radioProxy = null");
        }
        rILRequestObtain.release();
    }

    private void sendDtmfQueueRR(DtmfQueueHandler.DtmfQueueRR dtmfQueueRR) {
        RILRequest rILRequest = dtmfQueueRR.rr;
        IRadio radioProxy = getRadioProxy(rILRequest.mResult);
        if (radioProxy == null) {
            riljLoge("get RadioProxy null. ([" + rILRequest.serialString() + "] request: " + requestToString(rILRequest.mRequest) + ")");
            return;
        }
        riljLog(rILRequest.serialString() + "> " + requestToString(rILRequest.mRequest) + " (by DtmfQueueRR)");
        try {
            int i = rILRequest.mRequest;
            if (i == 15) {
                radioProxy.switchWaitingOrHoldingAndActive(rILRequest.mSerial);
            } else if (i == 16) {
                radioProxy.conference(rILRequest.mSerial);
            } else if (i == 49) {
                Object[] objArr = dtmfQueueRR.params;
                if (objArr.length != 1) {
                    riljLoge("request " + requestToString(rILRequest.mRequest) + " params error. (" + objArr.toString() + ")");
                } else {
                    char cCharValue = ((Character) objArr[0]).charValue();
                    radioProxy.startDtmf(rILRequest.mSerial, cCharValue + "");
                }
            } else if (i == 50) {
                radioProxy.stopDtmf(rILRequest.mSerial);
            } else if (i == 52) {
                Object[] objArr2 = dtmfQueueRR.params;
                if (objArr2.length != 1) {
                    riljLoge("request " + requestToString(rILRequest.mRequest) + " params error. (" + Arrays.toString(objArr2) + ")");
                } else {
                    radioProxy.separateConnection(rILRequest.mSerial, ((Integer) objArr2[0]).intValue());
                }
            } else if (i != 72) {
                riljLoge("get RadioProxy null. ([" + rILRequest.serialString() + "] request: " + requestToString(rILRequest.mRequest) + ")");
            } else {
                radioProxy.explicitCallTransfer(rILRequest.mSerial);
            }
        } catch (RemoteException | RuntimeException e) {
            handleRadioProxyExceptionForRR(rILRequest, "DtmfQueueRR(" + requestToString(rILRequest.mRequest) + ")", e);
        }
    }

    private void sendMtkAck() {
        RILRequest rILRequestObtain = RILRequest.obtain(800, null, this.mRILDefaultWorkSource);
        acquireWakeLock(rILRequestObtain, 1);
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(null);
        if (mtkRadioProxy != null) {
            try {
                mtkRadioProxy.responseAcknowledgementMtk();
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtain, "sendMtkAck", e);
                riljLoge("sendMtkAck: " + e);
            }
        } else {
            Rlog.e(IMSRIL_LOG_TAG, "Error trying to send MTK ack, RadioProxy = null");
        }
        rILRequestObtain.release();
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void accept() {
        accept(null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void accept(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(40, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.acceptCall(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "acceptCall", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void acceptVideoCall(int i, int i2) {
        acceptVideoCall(i, i2, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void acceptVideoCall(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2076, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " videoMode = " + i + " callId = " + i2);
            try {
                mtkRadioProxy.videoCallAccept(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "acceptCall", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void acknowledgeLastIncomingCdmaSmsEx(boolean z, int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2172, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " success = " + z + " cause = " + i);
            CdmaSmsAck cdmaSmsAck = new CdmaSmsAck();
            cdmaSmsAck.errorClass = !z ? 1 : 0;
            cdmaSmsAck.smsCauseCode = i;
            try {
                mtkRadioProxy.acknowledgeLastIncomingCdmaSmsEx(rILRequestObtainRequest.mSerial, cdmaSmsAck);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "acknowledgeLastIncomingCdmaSms", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void acknowledgeLastIncomingGsmSms(boolean z, int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2170, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " success = " + z + " cause = " + i);
            try {
                mtkRadioProxy.acknowledgeLastIncomingGsmSmsEx(rILRequestObtainRequest.mSerial, z, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "acknowledgeLastIncomingGsmSms", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void approveEccRedial(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2185, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " approve = " + i + " callId = " + i2);
            try {
                mtkRadioProxy.eccRedialApprove(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "approveEccRedial", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void cancelPendingUssi(Message message) {
        if (SystemProperties.get("persist.vendor.ims.ussi.ap").equals("1")) {
            riljLog("Wrap cancelPendingUssi");
            message.sendToTarget();
            return;
        }
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2094, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.cancelUssi(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "cancelUssi", e);
            }
        }
    }

    public void clearRequestList(int i, boolean z) {
        synchronized (this.mRequestList) {
            int size = this.mRequestList.size();
            if (z) {
                Rlog.d(IMSRIL_LOG_TAG, "clearRequestList  mWakeLockCount=" + this.mWakeLockCount + " mRequestList=" + size);
            }
            for (int i2 = 0; i2 < size; i2++) {
                RILRequest rILRequestValueAt = this.mRequestList.valueAt(i2);
                if (z) {
                    Rlog.d(IMSRIL_LOG_TAG, i2 + ": [" + rILRequestValueAt.mSerial + "] " + requestToString(rILRequestValueAt.mRequest));
                }
                rILRequestValueAt.onError(i, null);
                decrementWakeLock(rILRequestValueAt);
                rILRequestValueAt.release();
            }
            this.mRequestList.clear();
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void conference(Message message) {
        if (getRadioProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(16, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void conferenceDial(String[] strArr, int i, boolean z, Message message) {
        if (strArr == null) {
            riljLoge("Participants MUST NOT be null in conferenceDial");
            return;
        }
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2089, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " clirMode = " + i + " isVideoCall = " + z);
            ConferenceDial conferenceDial = new ConferenceDial();
            conferenceDial.clir = i;
            conferenceDial.isVideoCall = z;
            for (String str : strArr) {
                conferenceDial.dialNumbers.add(str);
                riljLog("conferenceDial: dialNumber " + ImsServiceCallTracker.sensitiveEncode(str));
            }
            try {
                mtkRadioProxy.conferenceDial(rILRequestObtainRequest.mSerial, conferenceDial);
            } catch (RemoteException | RuntimeException e) {
                Rlog.w(IMSRIL_LOG_TAG, "conferenceDial failed");
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "conferenceDial", e);
            }
        }
    }

    protected void constructCdmaSendSmsRilRequest(CdmaSmsMessage cdmaSmsMessage, byte[] bArr) {
        DataInputStream dataInputStream = new DataInputStream(new ByteArrayInputStream(bArr));
        try {
            cdmaSmsMessage.teleserviceId = dataInputStream.readInt();
            byte b = (byte) dataInputStream.readInt();
            boolean z = IMSRIL_LOGV;
            cdmaSmsMessage.isServicePresent = b == 1;
            cdmaSmsMessage.serviceCategory = dataInputStream.readInt();
            cdmaSmsMessage.address.digitMode = dataInputStream.read();
            cdmaSmsMessage.address.numberMode = dataInputStream.read();
            cdmaSmsMessage.address.numberType = dataInputStream.read();
            cdmaSmsMessage.address.numberPlan = dataInputStream.read();
            byte b2 = (byte) dataInputStream.read();
            for (int i = 0; i < b2; i++) {
                cdmaSmsMessage.address.digits.add(Byte.valueOf(dataInputStream.readByte()));
            }
            cdmaSmsMessage.subAddress.subaddressType = dataInputStream.read();
            CdmaSmsSubaddress cdmaSmsSubaddress = cdmaSmsMessage.subAddress;
            if (((byte) dataInputStream.read()) == 1) {
                z = true;
            }
            cdmaSmsSubaddress.odd = z;
            byte b3 = (byte) dataInputStream.read();
            for (int i2 = 0; i2 < b3; i2++) {
                cdmaSmsMessage.subAddress.digits.add(Byte.valueOf(dataInputStream.readByte()));
            }
            int i3 = dataInputStream.read();
            for (int i4 = 0; i4 < i3; i4++) {
                cdmaSmsMessage.bearerData.add(Byte.valueOf(dataInputStream.readByte()));
            }
        } catch (IOException e) {
            riljLog("sendSmsCdma: conversion from input stream to object failed: " + e);
        }
    }

    protected String convertNullToEmptyString(String str) {
        return str != null ? str : "";
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void deregisterIms(Message message) {
        deregisterImsWithCause(1, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void deregisterImsWithCause(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2082, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.imsDeregNotification(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "imsDeregNotification", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void dial(String str, int i, Message message) {
        dial(str, i, null, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void dial(String str, int i, UUSInfo uUSInfo, Message message) {
        if (PhoneNumberUtils.isUriNumber(str)) {
            IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
            if (mtkRadioProxy != null) {
                RILRequest rILRequestObtainRequest = obtainRequest(2086, message, this.mRILDefaultWorkSource);
                riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                try {
                    mtkRadioProxy.dialWithSipUri(rILRequestObtainRequest.mSerial, str);
                    return;
                } catch (RemoteException | RuntimeException e) {
                    handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "dialWithSipUri", e);
                    return;
                }
            }
            return;
        }
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest2 = obtainRequest(2098, message, this.mRILDefaultWorkSource);
            Dial dial = new Dial();
            dial.address = convertNullToEmptyString(str);
            dial.clir = i;
            if (uUSInfo != null) {
                UusInfo uusInfo = new UusInfo();
                uusInfo.uusType = uUSInfo.getType();
                uusInfo.uusDcs = uUSInfo.getDcs();
                uusInfo.uusData = new String(uUSInfo.getUserData());
                dial.uusInfo.add(uusInfo);
            }
            riljLog(rILRequestObtainRequest2.serialString() + "> " + requestToString(rILRequestObtainRequest2.mRequest));
            try {
                radioProxy.dial(rILRequestObtainRequest2.mSerial, dial);
            } catch (RemoteException | RuntimeException e2) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest2, "dial", e2);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void explicitCallTransfer(Message message) {
        if (getRadioProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(72, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void forceHangup(int i) {
        forceHangup(i, (Message) null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void forceHangup(int i, int i2) {
        riljLog("forceHangup with reason: " + i2);
        forceHangup(i, (Message) null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void forceHangup(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2034, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i);
            try {
                mtkRadioProxy.forceReleaseCall(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "forceHangup", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getCLIR(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(31, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.getClir(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "getCLIR", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getCOLP(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2104, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.getColp(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCOLP", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getCOLR(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2105, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.getColr(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getCOLR", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getImsCfgFeatureValue(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2137, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.getImsCfgFeatureValue(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getImsCfgFeatureValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getImsCfgProvisionValue(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2139, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.getImsCfgProvisionValue(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getImsCfgProvisionValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getImsCfgResourceCapValue(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2141, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.getImsCfgResourceCapValue(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getImsCfgResourceCapValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void getLastCallFailCause(int i, Message message) {
        getLastCallFailCause(message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getLastCallFailCause(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(18, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.getLastCallFailCause(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "getLastCallFailCause", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public OpImsCommandsInterface getOpCommandsInterface() {
        return this.mOpCI;
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void getProvisionValue(int i, String str, Message message) {
        getProvisionValue(str, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getProvisionValue(String str, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2078, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " provisionStr = " + str);
            try {
                mtkRadioProxy.getProvisionValue(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getProvisionValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void getXcapStatus(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2163, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.getXcapStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getXcapStatus", e);
            }
        }
    }

    void handleDtmfQueueNext(int i) {
        riljLog("handleDtmfQueueNext (serial = " + i);
        synchronized (this.mDtmfReqQueue) {
            DtmfQueueHandler.DtmfQueueRR dtmfQueueRR = null;
            for (int i2 = 0; i2 < this.mDtmfReqQueue.mDtmfQueue.size(); i2++) {
                DtmfQueueHandler.DtmfQueueRR dtmfQueueRR2 = (DtmfQueueHandler.DtmfQueueRR) this.mDtmfReqQueue.mDtmfQueue.get(i2);
                if (dtmfQueueRR2 != null && dtmfQueueRR2.rr.mSerial == i) {
                    dtmfQueueRR = dtmfQueueRR2;
                    break;
                }
            }
            if (dtmfQueueRR == null) {
                riljLoge("cannot find serial " + i + " from mDtmfQueue. (size = " + this.mDtmfReqQueue.size() + ")");
            } else {
                this.mDtmfReqQueue.remove(dtmfQueueRR);
                riljLog("remove first item in dtmf queue done. (size = " + this.mDtmfReqQueue.size() + ")");
            }
            if (this.mDtmfReqQueue.size() > 0) {
                DtmfQueueHandler.DtmfQueueRR dtmfQueueRR3 = this.mDtmfReqQueue.get();
                RILRequest rILRequest = dtmfQueueRR3.rr;
                riljLog(rILRequest.serialString() + "> " + requestToString(rILRequest.mRequest));
                sendDtmfQueueRR(dtmfQueueRR3);
            } else if (this.mDtmfReqQueue.getPendingRequest() != null) {
                riljLog("send pending switch request");
                sendDtmfQueueRR(this.mDtmfReqQueue.getPendingRequest());
                this.mDtmfReqQueue.setSendChldRequest();
                this.mDtmfReqQueue.setPendingRequest(null);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void hangup(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2179, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i + "reason=" + i2);
            try {
                mtkRadioProxy.hangupWithReason(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "hangupWithReason", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void hangup(int i, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(12, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i);
            try {
                radioProxy.hangup(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "hangup", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void hangupAllCall(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2019, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.hangupAll(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "hangupAll", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void hold(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2084, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + "callId = " + i);
            try {
                mtkRadioProxy.controlCall(rILRequestObtainRequest.mSerial, 0, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "holdCall", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void inviteParticipants(int i, String str, Message message) {
        internalAddConferenceMember(i, str, ImsServiceCallTracker.getInstance(this.mPhoneId.intValue()).getParticipantCallId(str), message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void inviteParticipantsByCallId(int i, ImsCallInfo imsCallInfo, Message message) {
        if (imsCallInfo == null) {
            Rlog.d(IMSRIL_LOG_TAG, "Invite participants failed, call info is null");
            return;
        }
        String str = imsCallInfo.mCallId;
        try {
            internalAddConferenceMember(i, imsCallInfo.mCallNum, Integer.parseInt(str), message);
        } catch (NumberFormatException e) {
            Rlog.d(IMSRIL_LOG_TAG, "Invite participants failed: id is not integer: " + str);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void merge(Message message) {
        conference(message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void notifyImsServiceReady() {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(null);
        if (mtkRadioProxy != null) {
            try {
                mtkRadioProxy.notifyImsServiceReady();
            } catch (RemoteException | RuntimeException e) {
                riljLoge("notifyImsServiceReady error: " + e);
            }
        }
    }

    void processIndication(int i) {
        if (i == 1) {
            sendAck();
        }
    }

    void processMtkIndication(int i) {
        if (i == 1) {
            sendMtkAck();
        }
    }

    void processRequestAck(int i) {
        RILRequest rILRequest;
        synchronized (this.mRequestList) {
            rILRequest = this.mRequestList.get(i);
        }
        if (rILRequest == null) {
            Rlog.w(IMSRIL_LOG_TAG, "processRequestAck: Unexpected solicited ack response! serial: " + i);
            return;
        }
        decrementWakeLock(rILRequest);
        riljLog(rILRequest.serialString() + " Ack < " + requestToString(rILRequest.mRequest));
    }

    RILRequest processResponse(RadioResponseInfo radioResponseInfo, boolean z) {
        RILRequest rILRequest;
        int i = radioResponseInfo.serial;
        int i2 = radioResponseInfo.error;
        int i3 = radioResponseInfo.type;
        if (i3 == 1) {
            synchronized (this.mRequestList) {
                rILRequest = this.mRequestList.get(i);
            }
            if (rILRequest == null) {
                Rlog.w(IMSRIL_LOG_TAG, "Unexpected solicited ack response! sn: " + i);
            } else {
                decrementWakeLock(rILRequest);
                riljLog(rILRequest.serialString() + " Ack < " + requestToString(rILRequest.mRequest));
            }
            return rILRequest;
        }
        RILRequest rILRequestFindAndRemoveRequestFromList = findAndRemoveRequestFromList(i);
        if (rILRequestFindAndRemoveRequestFromList == null) {
            Rlog.e(IMSRIL_LOG_TAG, "processResponse: Unexpected response! serial: " + i + " error: " + i2);
            return null;
        }
        addToRilHistogram(rILRequestFindAndRemoveRequestFromList);
        if (i3 == 2) {
            if (z) {
                sendMtkAck();
            } else {
                sendAck();
            }
            riljLog("Response received for " + rILRequestFindAndRemoveRequestFromList.serialString() + " " + requestToString(rILRequestFindAndRemoveRequestFromList.mRequest) + " Sending ack to ril.cpp");
        }
        if (rILRequestFindAndRemoveRequestFromList.mRequest == 129) {
            setRadioState(2);
        }
        return rILRequestFindAndRemoveRequestFromList;
    }

    void processResponseDone(RILRequest rILRequest, RadioResponseInfo radioResponseInfo, Object obj) {
        if (radioResponseInfo.error != 0) {
            riljLog(rILRequest.serialString() + "< " + requestToString(rILRequest.mRequest) + " error " + radioResponseInfo.error);
            rILRequest.onError(radioResponseInfo.error, obj);
        } else if (rILRequest.mRequest != 2136 && rILRequest.mRequest != 2137 && rILRequest.mRequest != 2138 && rILRequest.mRequest != 2139 && rILRequest.mRequest != 2141) {
            riljLog(rILRequest.serialString() + "< " + requestToString(rILRequest.mRequest) + " " + retToString(rILRequest.mRequest, obj));
        }
        if (rILRequest.mRequest == 15 || rILRequest.mRequest == 16 || rILRequest.mRequest == 52 || rILRequest.mRequest == 72) {
            riljLog("clear mIsSendChldRequest");
            this.mDtmfReqQueue.resetSendChldRequest();
        }
        if (rILRequest != null) {
            if (radioResponseInfo.type == 0) {
                decrementWakeLock(rILRequest);
            }
            rILRequest.release();
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void pullCall(String str, boolean z, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2096, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " target = " + z + " isVideoCall = " + z);
            try {
                mtkRadioProxy.pullCall(rILRequestObtainRequest.mSerial, str, z);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "pullCall", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryCLIP(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(55, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.getClip(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "queryCLIP", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryCallForwardInTimeSlotStatus(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2125, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " cfreason = " + i + " serviceClass = " + i2);
            CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
            callForwardInfoEx.reason = i;
            callForwardInfoEx.serviceClass = i2;
            callForwardInfoEx.toa = PhoneNumberUtils.toaFromString("");
            callForwardInfoEx.number = convertNullToEmptyString("");
            callForwardInfoEx.timeSeconds = 0;
            callForwardInfoEx.timeSlotBegin = convertNullToEmptyString("");
            callForwardInfoEx.timeSlotEnd = convertNullToEmptyString("");
            try {
                mtkRadioProxy.queryCallForwardInTimeSlotStatus(rILRequestObtainRequest.mSerial, callForwardInfoEx);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "queryCallForwardInTimeSlotStatus", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryCallForwardStatus(int i, int i2, String str, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(33, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " cfreason = " + i + " serviceClass = " + i2);
            CallForwardInfo callForwardInfo = new CallForwardInfo();
            callForwardInfo.reason = i;
            callForwardInfo.serviceClass = i2;
            callForwardInfo.toa = PhoneNumberUtils.toaFromString(str);
            callForwardInfo.number = convertNullToEmptyString(str);
            callForwardInfo.timeSeconds = 0;
            try {
                radioProxy.getCallForwardStatus(rILRequestObtainRequest.mSerial, callForwardInfo);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "queryCallForwardStatus", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryCallWaiting(int i, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(35, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " serviceClass = " + i);
            try {
                radioProxy.getCallWaiting(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "queryCallWaiting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryFacilityLock(String str, String str2, int i, Message message) {
        queryFacilityLockForApp(str, str2, i, "A0000000871002", message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryFacilityLockForApp(String str, String str2, int i, String str3, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(42, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " facility = " + str + " serviceClass = " + i + " appId = " + str3);
            try {
                radioProxy.getFacilityLockForApp(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), convertNullToEmptyString(str2), i, convertNullToEmptyString(str3));
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "getFacilityLockForApp", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void querySsacStatus(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2183, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.querySsacStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "queryVopsStatus", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void queryVopsStatus(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2178, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.queryVopsStatus(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "queryVopsStatus", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void reject(int i) {
        hangup(i, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void reject(int i, int i2) {
        riljLog(" reject with reason: " + i2);
        hangup(i, i2, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void removeParticipants(int i, String str, Message message) {
        internalRemoveConferenceMember(i, str, ImsServiceCallTracker.getInstance(this.mPhoneId.intValue()).getParticipantCallId(str), message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void requestExitEmergencyCallbackMode(Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(99, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.exitEmergencyCallbackMode(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "exitEmergencyCallbackMode", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void resetSuppServ(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2164, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.resetSuppServ(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "getXcapStatus", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void responseBearerStateConfirm(int i, int i2, int i3, int i4) {
        responseBearerStateConfirm(i2, i3, i4, (Message) null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void responseBearerStateConfirm(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2080, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " aid = " + i + " action =" + i2 + " status =" + i3);
            try {
                mtkRadioProxy.imsBearerStateConfirm(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "imsBearerStateConfirm", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void resume(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2085, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + "callId = " + i);
            try {
                mtkRadioProxy.controlCall(rILRequestObtainRequest.mSerial, 1, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "resumeCall", e);
            }
        }
    }

    void riljLog(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.d(IMSRIL_LOG_TAG, sb.toString());
    }

    void riljLoge(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.e(IMSRIL_LOG_TAG, sb.toString());
    }

    void riljLoge(String str, Exception exc) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.e(IMSRIL_LOG_TAG, sb.toString(), exc);
    }

    void riljLogi(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.i(IMSRIL_LOG_TAG, sb.toString());
    }

    void riljLogv(String str) {
        String str2;
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        if (this.mPhoneId != null) {
            str2 = " [SUB" + this.mPhoneId + "]";
        } else {
            str2 = "";
        }
        sb.append(str2);
        Rlog.v(IMSRIL_LOG_TAG, sb.toString());
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void runGbaAuthentication(String str, String str2, boolean z, int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2127, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " nafFqdn = " + str + " nafSecureProtocolId = " + str2 + " forceRun = " + z + " netId = " + i);
            try {
                mtkRadioProxy.runGbaAuthentication(rILRequestObtainRequest.mSerial, str, str2, z, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "runGbaAuthentication", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendDtmf(char c, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(24, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.sendDtmf(rILRequestObtainRequest.mSerial, c + "");
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendDtmf", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendRttModifyRequest(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2175, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i + " newMode = " + i2);
            try {
                mtkRadioProxy.sendRttModifyRequest(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendRttModifyRequest", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendRttText(int i, String str, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2176, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i + " text = " + str + " length = " + i2);
            try {
                mtkRadioProxy.sendRttText(rILRequestObtainRequest.mSerial, i, i2, str);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "sendRttText", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendSms(int i, int i2, String str, String str2, boolean z, byte[] bArr, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2133, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            ImsSmsMessage imsSmsMessage = new ImsSmsMessage();
            imsSmsMessage.retry = z;
            imsSmsMessage.messageRef = i2;
            if ("3gpp".equals(str)) {
                imsSmsMessage.tech = 1;
                imsSmsMessage.gsmMessage.add(constructGsmSendSmsRilRequest(str2, IccUtils.bytesToHexString(bArr)));
            } else {
                if (!"3gpp2".equals(str)) {
                    riljLog(rILRequestObtainRequest.serialString() + "> SMS format Error");
                    return;
                }
                imsSmsMessage.tech = 2;
                CdmaSmsMessage cdmaSmsMessage = new CdmaSmsMessage();
                constructCdmaSendSmsRilRequest(cdmaSmsMessage, bArr);
                imsSmsMessage.cdmaMessage.add(cdmaSmsMessage);
            }
            try {
                mtkRadioProxy.sendImsSmsEx(rILRequestObtainRequest.mSerial, imsSmsMessage);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendImsGsmSms", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendUSSI(String str, Message message) {
        if (SystemProperties.get("persist.vendor.ims.ussi.ap").equals("1")) {
            riljLog("Wrap sendUSSI, ussiString = " + str);
            message.sendToTarget();
            return;
        }
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2093, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " ussiString = " + str);
            try {
                mtkRadioProxy.sendUssi(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendUssi", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void sendWfcProfileInfo(int i, int i2, Message message) {
        sendWfcProfileInfo(i, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void sendWfcProfileInfo(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2095, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " wfcPreference = " + i);
            try {
                mtkRadioProxy.setWfcProfile(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setWfcProfile", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCLIP(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2103, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " clipEnable = " + i);
            try {
                mtkRadioProxy.setClip(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCLIP", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCLIR(int i, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(32, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " clirMode = " + i);
            try {
                radioProxy.setClir(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setCLIR", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCOLP(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2123, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " colpEnable = " + i);
            try {
                mtkRadioProxy.setColp(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCOLP", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCOLR(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2124, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " colrEnable = " + i);
            try {
                mtkRadioProxy.setColr(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCOLR", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCallAdditionalInfo(ArrayList<String> arrayList, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2186, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.setCallAdditionalInfo(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallAdditionalInfo", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCallForward(int i, int i2, int i3, String str, int i4, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(34, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " action = " + i + " cfReason = " + i2 + " serviceClass = " + i3 + " timeSeconds = " + i4);
            CallForwardInfo callForwardInfo = new CallForwardInfo();
            callForwardInfo.status = i;
            callForwardInfo.reason = i2;
            callForwardInfo.serviceClass = i3;
            callForwardInfo.toa = PhoneNumberUtils.toaFromString(str);
            callForwardInfo.number = convertNullToEmptyString(str);
            callForwardInfo.timeSeconds = i4;
            try {
                radioProxy.setCallForward(rILRequestObtainRequest.mSerial, callForwardInfo);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallForward", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCallForwardInTimeSlot(int i, int i2, int i3, String str, int i4, long[] jArr, Message message) {
        String str2 = "";
        String str3 = "";
        if (jArr != null && jArr.length == 2) {
            for (int i5 = 0; i5 < jArr.length; i5++) {
                Date date = new Date(jArr[i5]);
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                if (i5 == 0) {
                    str2 = simpleDateFormat.format(date);
                } else {
                    str3 = simpleDateFormat.format(date);
                }
            }
        }
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2126, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " action = " + i + " cfReason = " + i2 + " serviceClass = " + i3 + " timeSeconds = " + i4 + "timeSlot = [" + str2 + ":" + str3 + "]");
            CallForwardInfoEx callForwardInfoEx = new CallForwardInfoEx();
            callForwardInfoEx.status = i;
            callForwardInfoEx.reason = i2;
            callForwardInfoEx.serviceClass = i3;
            callForwardInfoEx.toa = PhoneNumberUtils.toaFromString(str);
            callForwardInfoEx.number = convertNullToEmptyString(str);
            callForwardInfoEx.timeSeconds = i4;
            callForwardInfoEx.timeSlotBegin = convertNullToEmptyString(str2);
            callForwardInfoEx.timeSlotEnd = convertNullToEmptyString(str3);
            try {
                mtkRadioProxy.setCallForwardInTimeSlot(rILRequestObtainRequest.mSerial, callForwardInfoEx);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallForwardInTimeSlot", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void setCallIndication(int i, int i2, int i3, int i4) {
        setCallIndication(i, i2, i3, i4, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCallIndication(int i, int i2, int i3, int i4, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2016, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " mode = " + i + " callId = " + i2 + " seqNum = " + i3 + " cause = " + i4);
            try {
                mtkRadioProxy.setCallIndication(rILRequestObtainRequest.mSerial, i, i2, i3, i4);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallIndication", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setCallWaiting(boolean z, int i, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(36, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " enable = " + z + " serviceClass = " + i);
            try {
                radioProxy.setCallWaiting(rILRequestObtainRequest.mSerial, z, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setCallWaiting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setFacilityLock(String str, boolean z, String str2, int i, Message message) {
        setFacilityLockForApp(str, z, str2, i, "A0000000871002", message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setFacilityLockForApp(String str, boolean z, String str2, int i, String str3, Message message) {
        IRadio radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(43, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " facility = " + str + " lockstate = " + z + " serviceClass = " + i + " appId = " + str3);
            try {
                radioProxy.setFacilityLockForApp(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), z, convertNullToEmptyString(str2), i, convertNullToEmptyString(str3));
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setFacilityLockForApp", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void setImsBearerNotification(int i, int i2) {
        setImsBearerNotification(i2, (Message) null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsBearerNotification(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2135, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " enable = " + i);
            try {
                mtkRadioProxy.setImsBearerNotification(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsBearerNotification", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsCallMode(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2182, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " mode = " + i);
            try {
                mtkRadioProxy.setImsCallMode(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsCallMode", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void setImsCfg(int[] iArr, int i, Message message) {
        setImsCfg(iArr, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsCfg(int[] iArr, Message message) {
        boolean z = iArr[0] == 1;
        boolean z2 = iArr[1] == 1;
        boolean z3 = iArr[2] == 1;
        boolean z4 = iArr[3] == 1;
        boolean z5 = iArr[4] == 1;
        boolean z6 = iArr[5] == 1;
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2077, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " volteEnable = " + iArr[0] + " vilteEnable = " + iArr[1] + " vowifiEnable = " + iArr[2] + " viwifiEnable = " + iArr[3] + " smsEnable = " + iArr[4] + " eimsEnable = " + iArr[5]);
            try {
                mtkRadioProxy.setImscfg(rILRequestObtainRequest.mSerial, z, z2, z3, z4, z5, z6);
                if (ImsCommonUtil.supportMdAutoSetupIms()) {
                    findAndRemoveRequestFromList(rILRequestObtainRequest.mSerial);
                    riljLog(rILRequestObtainRequest.serialString() + "<  " + requestToString(rILRequestObtainRequest.mRequest) + " sent and removed");
                }
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsCfg", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsCfgFeatureValue(int i, int i2, int i3, int i4, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2136, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.setImsCfgFeatureValue(rILRequestObtainRequest.mSerial, i, i2, i3, i4);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsCfgFeatureValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsCfgProvisionValue(int i, String str, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2138, message, this.mRILDefaultWorkSource);
            try {
                mtkRadioProxy.setImsCfgProvisionValue(rILRequestObtainRequest.mSerial, i, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsCfgProvisionValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void setImsRegistrationReport(int i, Message message) {
        setImsRegistrationReport(message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsRegistrationReport(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(null);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2097, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                mtkRadioProxy.setImsRegistrationReport(rILRequestObtainRequest.mSerial);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsRegistrationReport", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setImsRtpInfo(int i, int i2, int i3, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2088, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " PDN id = " + i + " network Id = " + i2 + " Timer = " + i3);
            try {
                mtkRadioProxy.setImsRtpReport(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsRtpReport", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setModemImsCfg(String str, String str2, int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2128, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " keys = " + str + " values = " + str2 + " type = " + i);
            try {
                mtkRadioProxy.setModemImsCfg(rILRequestObtainRequest.mSerial, str, str2, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "sendModemImsCfg", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setMute(boolean z, Message message) {
        IRadio radioProxy = getRadioProxy(null);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(53, null, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " mute = " + z);
            try {
                radioProxy.setMute(rILRequestObtainRequest.mSerial, z);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setMute", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void setProvisionValue(int i, String str, String str2, Message message) {
        setProvisionValue(str, str2, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setProvisionValue(String str, String str2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2079, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " provisionStr = " + str + " provisionValue" + str2);
            try {
                mtkRadioProxy.setProvisionValue(rILRequestObtainRequest.mSerial, str, str2);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setProvisionValue", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setRttMode(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2174, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " mode = " + i);
            try {
                mtkRadioProxy.setRttMode(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setRttMode", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setRttModifyRequestResponse(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2177, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i + " result = " + i2);
            try {
                mtkRadioProxy.rttModifyRequestResponse(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "rttModifyRequestResponse", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setSipHeader(int i, int i2, int i3, String str, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2180, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            ArrayList<String> arrayList = new ArrayList<>();
            arrayList.add(Integer.toString(i));
            arrayList.add(Integer.toString(i2));
            arrayList.add(Integer.toString(i3));
            arrayList.add(str);
            try {
                mtkRadioProxy.setSipHeader(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setSipHeader", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setSipHeaderReport(String str, String str2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2181, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + str + " headerType = " + str2);
            ArrayList<String> arrayList = new ArrayList<>();
            arrayList.add(str);
            arrayList.add(str2);
            try {
                mtkRadioProxy.setSipHeaderReport(rILRequestObtainRequest.mSerial, arrayList);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setSipHeaderReport", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setVoiceDomainPreference(int i, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2122, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " vdp = " + i);
            try {
                mtkRadioProxy.setVoiceDomainPreference(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVoiceDomainPreference", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setupXcapUserAgentString(String str, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2167, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " userAgent = " + str);
            try {
                mtkRadioProxy.setupXcapUserAgentString(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setupXcapUserAgentString", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void start(String str, ImsCallProfile imsCallProfile, int i, boolean z, boolean z2, Message message) {
        if (z2) {
            vtDial(str, i, null, message);
        } else if (z) {
            emergencyDial(str, imsCallProfile, i, null, message);
        } else {
            dial(str, i, message);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void startConference(String[] strArr, int i, boolean z, int i2, Message message) {
        startConference(strArr, i, z, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void startConference(String[] strArr, int i, boolean z, Message message) {
        conferenceDial(strArr, i, z, message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void startDtmf(char c, Message message) {
        synchronized (this.mDtmfReqQueue) {
            if (!this.mDtmfReqQueue.hasSendChldRequest()) {
                int size = this.mDtmfReqQueue.size();
                Objects.requireNonNull(this.mDtmfReqQueue);
                if (size < 32) {
                    if (this.mDtmfReqQueue.isStart()) {
                        riljLog("DTMF status conflict, want to start DTMF when status is " + this.mDtmfReqQueue.isStart());
                    } else if (getRadioProxy(message) != null) {
                        RILRequest rILRequestObtainRequest = obtainRequest(49, message, this.mRILDefaultWorkSource);
                        this.mDtmfReqQueue.start();
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, new Object[]{Character.valueOf(c)});
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                        if (this.mDtmfReqQueue.size() == 1) {
                            riljLog("send start dtmf");
                            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                            sendDtmfQueueRR(dtmfQueueRRBuildDtmfQueueRR);
                        }
                    }
                }
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void stopDtmf(Message message) {
        synchronized (this.mDtmfReqQueue) {
            if (!this.mDtmfReqQueue.hasSendChldRequest()) {
                int size = this.mDtmfReqQueue.size();
                Objects.requireNonNull(this.mDtmfReqQueue);
                if (size < 32) {
                    if (!this.mDtmfReqQueue.isStart()) {
                        riljLog("DTMF status conflict, want to start DTMF when status is " + this.mDtmfReqQueue.isStart());
                    } else if (getRadioProxy(message) != null) {
                        RILRequest rILRequestObtainRequest = obtainRequest(50, message, this.mRILDefaultWorkSource);
                        this.mDtmfReqQueue.stop();
                        DtmfQueueHandler.DtmfQueueRR dtmfQueueRRBuildDtmfQueueRR = this.mDtmfReqQueue.buildDtmfQueueRR(rILRequestObtainRequest, null);
                        this.mDtmfReqQueue.add(dtmfQueueRRBuildDtmfQueueRR);
                        if (this.mDtmfReqQueue.size() == 1) {
                            riljLog("send stop dtmf");
                            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                            sendDtmfQueueRR(dtmfQueueRRBuildDtmfQueueRR);
                        }
                    }
                }
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void swap(Message message) {
        if (getRadioProxy(message) != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(15, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            handleChldRelatedRequest(rILRequestObtainRequest, null);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void terminate(int i) {
        hangup(i, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void terminate(int i, int i2) {
        riljLog("terminate with reason: " + i2);
        hangup(i, i2, null);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void toggleRttAudioIndication(int i, int i2, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2184, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " callId = " + i + " enable = " + i2);
            try {
                mtkRadioProxy.toggleRttAudioIndication(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "toggleRttAudioIndication", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void turnOffIms(int i, Message message) {
        turnOffIms(message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffIms(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2069, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setImsEnable(rILRequestObtainRequest.mSerial, IMSRIL_LOGV);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsEnable", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffImsVideo(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2075, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setImsVideoEnable(rILRequestObtainRequest.mSerial, IMSRIL_LOGV);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsVideoEnable", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffRcsUa(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2166, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 14, Integer.toString(0));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffVilte(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2072, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 12, Integer.toString(0));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffViwifi(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2073, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 13, Integer.toString(0));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffVolte(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2070, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 11, Integer.toString(0));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOffWfc(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2071, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = OFF");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 16, Integer.toString(0));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    @Deprecated
    public void turnOnIms(int i, Message message) {
        turnOnIms(message);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnIms(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2069, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setImsEnable(rILRequestObtainRequest.mSerial, true);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsEnable", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnImsVideo(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2075, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setImsVideoEnable(rILRequestObtainRequest.mSerial, true);
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setImsVideoEnable", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnRcsUa(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2166, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 14, Integer.toString(1));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnVilte(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2072, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 12, Integer.toString(1));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnViwifi(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2073, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 13, Integer.toString(1));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnVolte(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2070, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 11, Integer.toString(1));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void turnOnWfc(Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2071, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + ">  " + requestToString(rILRequestObtainRequest.mRequest) + " switch = ON");
            try {
                mtkRadioProxy.setVendorSetting(rILRequestObtainRequest.mSerial, 16, Integer.toString(1));
            } catch (RemoteException | RuntimeException e) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "setVendorSetting", e);
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unattendedCallTransfer(String str, int i, Message message) {
        internalImsEct(str, i, message);
    }

    void unsljLog(int i) {
        riljLog("[UNSL]< " + responseToString(i));
    }

    void unsljLogMore(int i, String str) {
        riljLog("[UNSL]< " + responseToString(i) + " " + str);
    }

    void unsljLogRet(int i, Object obj) {
        riljLog("[UNSL]< " + responseToString(i) + " " + retToString(i, obj));
    }

    void unsljLogvRet(int i, Object obj) {
        riljLogv("[UNSL]< " + responseToString(i) + " " + retToString(i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void vtDial(String str, int i, UUSInfo uUSInfo, Message message) {
        IMtkRadioEx mtkRadioProxy = getMtkRadioProxy(message);
        if (mtkRadioProxy != null) {
            if (PhoneNumberUtils.isUriNumber(str)) {
                RILRequest rILRequestObtainRequest = obtainRequest(2092, message, this.mRILDefaultWorkSource);
                riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
                try {
                    mtkRadioProxy.vtDialWithSipUri(rILRequestObtainRequest.mSerial, str);
                    return;
                } catch (RemoteException | RuntimeException e) {
                    handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest, "vtDialWithSipUri", e);
                    return;
                }
            }
            RILRequest rILRequestObtainRequest2 = obtainRequest(2099, message, this.mRILDefaultWorkSource);
            Dial dial = new Dial();
            dial.address = convertNullToEmptyString(str);
            dial.clir = i;
            if (uUSInfo != null) {
                UusInfo uusInfo = new UusInfo();
                uusInfo.uusType = uUSInfo.getType();
                uusInfo.uusDcs = uUSInfo.getDcs();
                uusInfo.uusData = new String(uUSInfo.getUserData());
                dial.uusInfo.add(uusInfo);
            }
            riljLog(rILRequestObtainRequest2.serialString() + "> " + requestToString(rILRequestObtainRequest2.mRequest));
            try {
                mtkRadioProxy.vtDial(rILRequestObtainRequest2.mSerial, dial);
            } catch (RemoteException | RuntimeException e2) {
                handleMtkRadioProxyExceptionForRR(rILRequestObtainRequest2, "vtDial", e2);
            }
        }
    }
}
