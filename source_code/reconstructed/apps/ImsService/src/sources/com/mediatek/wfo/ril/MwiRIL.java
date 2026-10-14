package com.mediatek.wfo.ril;

import android.content.Context;
import android.hardware.radio.V1_0.RadioResponseInfo;
import android.net.ConnectivityManager;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Looper;
import android.os.Message;
import android.os.PowerManager;
import android.os.RemoteException;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.os.WorkSource;
import android.telephony.Rlog;
import android.telephony.TelephonyHistogram;
import android.util.SparseArray;
import com.android.internal.telephony.ClientWakelockTracker;
import com.android.internal.telephony.CommandException;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicLong;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx;

/* JADX INFO: loaded from: classes.dex */
public final class MwiRIL extends MwiBaseCommands implements MwiCommandsInterface {
    private static final int DEFAULT_ACK_WAKE_LOCK_TIMEOUT_MS = 200;
    private static final int DEFAULT_WAKE_LOCK_TIMEOUT_MS = 60000;
    static final int EVENT_ACK_WAKE_LOCK_TIMEOUT = 4;
    static final int EVENT_BLOCKING_RESPONSE_TIMEOUT = 5;
    static final int EVENT_RADIO_PROXY_DEAD = 6;
    static final int EVENT_SEND = 1;
    static final int EVENT_WAKE_LOCK_TIMEOUT = 2;
    public static final int FOR_ACK_WAKELOCK = 1;
    public static final int FOR_WAKELOCK = 0;
    public static final int INVALID_WAKELOCK = -1;
    static final int IRADIO_GET_SERVICE_DELAY_MILLIS = 4000;
    static final boolean MWIRIL_LOGD = true;
    static final boolean MWIRIL_LOGV = false;
    static final String MWIRIL_LOG_TAG = "MwiRIL";
    static final boolean MWI_RILA_LOGD = true;
    static final String PROPERTY_WAKE_LOCK_TIMEOUT = "ro.ril.wake_lock_timeout";
    static final String RILJ_ACK_WAKELOCK_NAME = "MWIRIL_ACK_WL";
    static final int RIL_HISTOGRAM_BUCKET_COUNT = 5;
    final PowerManager.WakeLock mAckWakeLock;
    final int mAckWakeLockTimeout;
    volatile int mAckWlSequenceNum;
    private WorkSource mActiveWakelockWorkSource;
    private final ClientWakelockTracker mClientWakelockTracker;
    Context mContext;
    boolean mIsMobileNetworkSupported;
    Object[] mLastNITZTimeInfo;
    final Integer mPhoneId;
    private WorkSource mRILDefaultWorkSource;
    MwiRadioIndication mRadioIndication;
    volatile IMtkRadioEx mRadioProxy;
    final AtomicLong mRadioProxyCookie;
    final RadioProxyDeathRecipient mRadioProxyDeathRecipient;
    MwiRadioResponse mRadioResponse;
    SparseArray<RILRequest> mRequestList;
    final RilHandler mRilHandler;
    AtomicBoolean mTestingEmergencyCall;
    final PowerManager.WakeLock mWakeLock;
    int mWakeLockCount;
    final int mWakeLockTimeout;
    volatile int mWlSequenceNum;
    static SparseArray<TelephonyHistogram> mRilTimeHistograms = new SparseArray<>();
    static final String[] IMS_HIDL_SERVICE_NAME = {"imsSlot1", "imsSlot2", "imsSlot3", "imsSlot4"};

    final class RadioProxyDeathRecipient implements IHwBinder.DeathRecipient {
        RadioProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            MwiRIL.this.riljLog("serviceDied");
            MwiRIL.this.mRilHandler.sendMessageDelayed(MwiRIL.this.mRilHandler.obtainMessage(6, Long.valueOf(j)), 4000L);
        }
    }

    class RilHandler extends Handler {
        public RilHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 2) {
                synchronized (MwiRIL.this.mRequestList) {
                    if (message.arg1 == MwiRIL.this.mWlSequenceNum && MwiRIL.this.clearWakeLock(0)) {
                        int size = MwiRIL.this.mRequestList.size();
                        Rlog.d(MwiRIL.MWIRIL_LOG_TAG, "WAKE_LOCK_TIMEOUT  mRequestList=" + size);
                        for (int i2 = 0; i2 < size; i2++) {
                            RILRequest rILRequestValueAt = MwiRIL.this.mRequestList.valueAt(i2);
                            Rlog.d(MwiRIL.MWIRIL_LOG_TAG, i2 + ": [" + rILRequestValueAt.mSerial + "] " + MwiRIL.requestToString(rILRequestValueAt.mRequest));
                        }
                    }
                }
                return;
            }
            if (i == 4) {
                if (message.arg1 == MwiRIL.this.mAckWlSequenceNum) {
                    MwiRIL.this.clearWakeLock(1);
                    return;
                }
                return;
            }
            if (i == 5) {
                RILRequest rILRequestFindAndRemoveRequestFromList = MwiRIL.this.findAndRemoveRequestFromList(message.arg1);
                if (rILRequestFindAndRemoveRequestFromList == null) {
                    return;
                }
                if (rILRequestFindAndRemoveRequestFromList.mResult != null) {
                    AsyncResult.forMessage(rILRequestFindAndRemoveRequestFromList.mResult, MwiRIL.getResponseForTimedOutRILRequest(rILRequestFindAndRemoveRequestFromList), (Throwable) null);
                    rILRequestFindAndRemoveRequestFromList.mResult.sendToTarget();
                }
                MwiRIL.this.decrementWakeLock(rILRequestFindAndRemoveRequestFromList);
                rILRequestFindAndRemoveRequestFromList.release();
                return;
            }
            if (i != 6) {
                return;
            }
            MwiRIL.this.riljLog("handleMessage: EVENT_RADIO_PROXY_DEAD cookie = " + message.obj + " mRadioProxyCookie = " + MwiRIL.this.mRadioProxyCookie.get());
            if (((Long) message.obj).longValue() == MwiRIL.this.mRadioProxyCookie.get()) {
                MwiRIL.this.resetProxyAndRequestList();
                MwiRIL.this.getRadioProxy(null);
            }
        }
    }

    public enum WfcConfigType {
        WFC_SETTING_WIFI_UEMAC,
        WFC_SETTING_LOCATION_SETTING
    }

    public MwiRIL(Context context, int i, Looper looper) {
        super(context, i);
        this.mClientWakelockTracker = new ClientWakelockTracker();
        boolean z = MWIRIL_LOGV;
        this.mWlSequenceNum = 0;
        this.mAckWlSequenceNum = 0;
        this.mRequestList = new SparseArray<>();
        this.mTestingEmergencyCall = new AtomicBoolean(MWIRIL_LOGV);
        this.mRadioProxy = null;
        this.mRadioProxyCookie = new AtomicLong(0L);
        this.mContext = context;
        this.mPhoneId = Integer.valueOf(i);
        this.mIsMobileNetworkSupported = ((ConnectivityManager) context.getSystemService("connectivity")).isNetworkSupported(0);
        this.mRadioResponse = new MwiRadioResponse(this, i);
        this.mRadioIndication = new MwiRadioIndication(this, i);
        this.mRilHandler = new RilHandler(looper);
        this.mRadioProxyDeathRecipient = new RadioProxyDeathRecipient();
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        PowerManager.WakeLock wakeLockNewWakeLock = powerManager.newWakeLock(1, MWIRIL_LOG_TAG);
        this.mWakeLock = wakeLockNewWakeLock;
        wakeLockNewWakeLock.setReferenceCounted(MWIRIL_LOGV);
        PowerManager.WakeLock wakeLockNewWakeLock2 = powerManager.newWakeLock(1, RILJ_ACK_WAKELOCK_NAME);
        this.mAckWakeLock = wakeLockNewWakeLock2;
        wakeLockNewWakeLock2.setReferenceCounted(MWIRIL_LOGV);
        this.mWakeLockTimeout = SystemProperties.getInt(PROPERTY_WAKE_LOCK_TIMEOUT, DEFAULT_WAKE_LOCK_TIMEOUT_MS);
        this.mAckWakeLockTimeout = SystemProperties.getInt(PROPERTY_WAKE_LOCK_TIMEOUT, 200);
        this.mWakeLockCount = 0;
        this.mRILDefaultWorkSource = new WorkSource(context.getApplicationInfo().uid, context.getPackageName());
        IMtkRadioEx radioProxy = getRadioProxy(null);
        StringBuilder sb = new StringBuilder();
        sb.append("MwiRIL: proxy = ");
        sb.append(radioProxy == null ? true : z);
        riljLog(sb.toString());
    }

    private void acquireWakeLock(RILRequest rILRequest, int i) {
        synchronized (rILRequest) {
            if (rILRequest.mWakeLockType != -1) {
                Rlog.d(MWIRIL_LOG_TAG, "Failed to aquire wakelock for " + rILRequest.serialString());
                return;
            }
            if (i != 0) {
                if (i != 1) {
                    Rlog.w(MWIRIL_LOG_TAG, "Acquiring Invalid Wakelock type " + i);
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

    private void clearRequestList(int i, boolean z) {
        synchronized (this.mRequestList) {
            int size = this.mRequestList.size();
            if (z) {
                Rlog.d(MWIRIL_LOG_TAG, "clearRequestList  mWakeLockCount=" + this.mWakeLockCount + " mRequestList=" + size);
            }
            for (int i2 = 0; i2 < size; i2++) {
                RILRequest rILRequestValueAt = this.mRequestList.valueAt(i2);
                if (z) {
                    Rlog.d(MWIRIL_LOG_TAG, i2 + ": [" + rILRequestValueAt.mSerial + "] " + requestToString(rILRequestValueAt.mRequest));
                }
                rILRequestValueAt.onError(i, null);
                decrementWakeLock(rILRequestValueAt);
                rILRequestValueAt.release();
            }
            this.mRequestList.clear();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean clearWakeLock(int i) {
        if (i != 0) {
            synchronized (this.mAckWakeLock) {
                if (!this.mAckWakeLock.isHeld()) {
                    return MWIRIL_LOGV;
                }
                this.mAckWakeLock.release();
                return true;
            }
        }
        synchronized (this.mWakeLock) {
            if (this.mWakeLockCount == 0 && !this.mWakeLock.isHeld()) {
                return MWIRIL_LOGV;
            }
            Rlog.d(MWIRIL_LOG_TAG, "NOTE: mWakeLockCount is " + this.mWakeLockCount + "at time of clearing");
            this.mWakeLockCount = 0;
            this.mWakeLock.release();
            this.mClientWakelockTracker.stopTrackingAll();
            this.mActiveWakelockWorkSource = null;
            return true;
        }
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
                    Rlog.w(MWIRIL_LOG_TAG, "Decrementing Invalid Wakelock type " + rILRequest.mWakeLockType);
                }
            }
            rILRequest.mWakeLockType = -1;
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
    public IMtkRadioEx getRadioProxy(Message message) {
        if (!this.mIsMobileNetworkSupported) {
            return null;
        }
        if (this.mRadioProxy != null) {
            return this.mRadioProxy;
        }
        try {
            this.mRadioProxy = IMtkRadioEx.getService(IMS_HIDL_SERVICE_NAME[this.mPhoneId == null ? 0 : this.mPhoneId.intValue()]);
            riljLoge("mRadioProxy getService() done");
            if (this.mRadioProxy != null) {
                riljLoge("mRadioProxy getService() done 2");
                this.mRadioProxy.linkToDeath(this.mRadioProxyDeathRecipient, this.mRadioProxyCookie.incrementAndGet());
                riljLoge("mRadioProxy linkToDeath() done");
                this.mRadioProxy.setResponseFunctionsMwi(this.mRadioResponse, this.mRadioIndication);
                riljLoge("mRadioProxy setResponseFunctionsMwi() done");
            } else {
                riljLoge("getRadioProxy: mRadioProxy == null");
            }
        } catch (RemoteException | RuntimeException e) {
            this.mRadioProxy = null;
            riljLoge("RadioProxy getService/setResponseFunctions: " + e);
        }
        if (this.mRadioProxy == null) {
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, CommandException.fromRilErrno(1));
                message.sendToTarget();
            }
            RilHandler rilHandler = this.mRilHandler;
            rilHandler.sendMessageDelayed(rilHandler.obtainMessage(6, Long.valueOf(this.mRadioProxyCookie.incrementAndGet())), 4000L);
        }
        return this.mRadioProxy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static Object getResponseForTimedOutRILRequest(RILRequest rILRequest) {
        return rILRequest == null ? null : null;
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

    private void handleRadioProxyExceptionForRR(RILRequest rILRequest, String str, Exception exc) {
        riljLoge(str + ": " + exc);
        resetProxyAndRequestList();
        RilHandler rilHandler = this.mRilHandler;
        rilHandler.sendMessageDelayed(rilHandler.obtainMessage(6, Long.valueOf(this.mRadioProxyCookie.incrementAndGet())), 4000L);
    }

    private RILRequest obtainRequest(int i, Message message, WorkSource workSource) {
        RILRequest rILRequestObtain = RILRequest.obtain(i, message, workSource);
        addRequest(rILRequestObtain);
        return rILRequestObtain;
    }

    static String requestToString(int i) {
        if (i == 2131) {
            return "MwiRILConstants.RIL_REQUEST_SET_NATT_KEEPALIVE_STATUS";
        }
        if (i == 2132) {
            return "MwiRILConstants.RIL_REQUEST_SET_WIFI_PING_RESULT";
        }
        if (i == 2179) {
            return "MwiRILConstants.RIL_REQUEST_NOTIFY_EPDG_SCREEN_STATE";
        }
        if (i == 2187) {
            return "MwiRILConstants.RIL_REQUEST_SET_WFC_CONFIG";
        }
        switch (i) {
            case 2116:
                return "MwiRILConstants.RIL_REQUEST_SET_WIFI_ENABLED";
            case 2117:
                return "MwiRILConstants.RIL_REQUEST_SET_WIFI_ASSOCIATED";
            case 2118:
                return "MwiRILConstants.RIL_REQUEST_SET_WIFI_SIGNAL_LEVEL";
            case 2119:
                return "MwiRILConstants.RIL_REQUEST_SET_WIFI_IP_ADDRESS";
            case 2120:
                return "MwiRILConstants.RIL_REQUEST_SET_GEO_LOCATION";
            case 2121:
                return "MwiRILConstants.RIL_REQUEST_SET_EMERGENCY_ADDRESS_ID";
            default:
                return "<unknown request>";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetProxyAndRequestList() {
        this.mRadioProxy = null;
        this.mRadioProxyCookie.incrementAndGet();
        RILRequest.resetSerial();
        clearRequestList(1, MWIRIL_LOGV);
    }

    static String responseToString(int i) {
        if (i == 3127) {
            return "MwiRILConstants.RIL_UNSOL_WIFI_LOCK";
        }
        switch (i) {
            case MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_ROVEOUT /* 3075 */:
                return "MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_ROVEOUT";
            case MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_HANDOVER /* 3076 */:
                return "MwiRILConstants.RIL_UNSOL_MOBILE_WIFI_HANDOVER";
            case MwiRILConstants.RIL_UNSOL_ACTIVE_WIFI_PDN_COUNT /* 3077 */:
                return "MwiRILConstants.RIL_UNSOL_ACTIVE_WIFI_PDN_COUNT";
            case MwiRILConstants.RIL_UNSOL_WIFI_RSSI_MONITORING_CONFIG /* 3078 */:
                return "MwiRILConstants.RIL_UNSOL_WIFI_RSSI_MONITORING_CONFIG";
            case MwiRILConstants.RIL_UNSOL_WIFI_PDN_ERROR /* 3079 */:
                return "MwiRILConstants.RIL_UNSOL_WIFI_PDN_ERROR";
            case MwiRILConstants.RIL_UNSOL_REQUEST_GEO_LOCATION /* 3080 */:
                return "MwiRILConstants.RIL_UNSOL_REQUEST_GEO_LOCATION";
            case MwiRILConstants.RIL_UNSOL_WFC_PDN_STATE /* 3081 */:
                return "MwiRILConstants.RIL_UNSOL_WFC_PDN_STATE";
            default:
                switch (i) {
                    case MwiRILConstants.RIL_UNSOL_NATT_KEEP_ALIVE_CHANGED /* 3086 */:
                        return "MwiRILConstants.RIL_UNSOL_NATT_KEEP_ALIVE_CHANGED";
                    case MwiRILConstants.RIL_UNSOL_WIFI_PING_REQUEST /* 3087 */:
                        return "MwiRILConstants.RIL_UNSOL_WIFI_PING_REQUEST";
                    case MwiRILConstants.RIL_UNSOL_WIFI_PDN_OOS /* 3088 */:
                        return "MwiRILConstants.RIL_UNSOL_WIFI_PDN_OOS";
                    default:
                        return "<unknown response>";
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
        IMtkRadioEx radioProxy = getRadioProxy(null);
        if (radioProxy != null) {
            try {
                radioProxy.responseAcknowledgementMtk();
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtain, "sendAck", e);
                riljLoge("sendAck: " + e);
            }
        } else {
            Rlog.e(MWIRIL_LOG_TAG, "Error trying to send ack, radioProxy = null");
        }
        rILRequestObtain.release();
    }

    protected String convertNullToEmptyString(String str) {
        return str != null ? str : "";
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void notifyEPDGScreenState(int i, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2179, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest));
            try {
                radioProxy.notifyEPDGScreenState(rILRequestObtainRequest.mSerial, i);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "notifyEPDGScreenState", e);
            }
        }
    }

    void processIndication(int i) {
        if (i == 1) {
            sendAck();
            riljLog("Unsol response received; Sending ack to ril.cpp");
        }
    }

    void processRequestAck(int i) {
        RILRequest rILRequest;
        synchronized (this.mRequestList) {
            rILRequest = this.mRequestList.get(i);
        }
        if (rILRequest == null) {
            Rlog.w(MWIRIL_LOG_TAG, "processRequestAck: Unexpected solicited ack response! serial: " + i);
            return;
        }
        decrementWakeLock(rILRequest);
        riljLog(rILRequest.serialString() + " Ack < " + requestToString(rILRequest.mRequest));
    }

    RILRequest processResponse(RadioResponseInfo radioResponseInfo) {
        RILRequest rILRequest;
        int i = radioResponseInfo.serial;
        int i2 = radioResponseInfo.error;
        int i3 = radioResponseInfo.type;
        if (i3 == 1) {
            synchronized (this.mRequestList) {
                rILRequest = this.mRequestList.get(i);
            }
            if (rILRequest == null) {
                Rlog.w(MWIRIL_LOG_TAG, "Unexpected solicited ack response! sn: " + i);
            } else {
                decrementWakeLock(rILRequest);
                riljLog(rILRequest.serialString() + " Ack < " + requestToString(rILRequest.mRequest));
            }
            return rILRequest;
        }
        RILRequest rILRequestFindAndRemoveRequestFromList = findAndRemoveRequestFromList(i);
        if (rILRequestFindAndRemoveRequestFromList == null) {
            Rlog.e(MWIRIL_LOG_TAG, "processResponse: Unexpected response! serial: " + i + " error: " + i2);
            return null;
        }
        addToRilHistogram(rILRequestFindAndRemoveRequestFromList);
        if (i3 == 2) {
            sendAck();
            riljLog("Response received for " + rILRequestFindAndRemoveRequestFromList.serialString() + " " + requestToString(rILRequestFindAndRemoveRequestFromList.mRequest) + " Sending ack to ril.cpp");
        }
        int i4 = rILRequestFindAndRemoveRequestFromList.mRequest;
        return rILRequestFindAndRemoveRequestFromList;
    }

    void processResponseDone(RILRequest rILRequest, RadioResponseInfo radioResponseInfo, Object obj) {
        if (radioResponseInfo.error == 0) {
            riljLog(rILRequest.serialString() + "< " + requestToString(rILRequest.mRequest) + " " + retToString(rILRequest.mRequest, obj));
        } else {
            riljLog(rILRequest.serialString() + "< " + requestToString(rILRequest.mRequest) + " error " + radioResponseInfo.error);
            rILRequest.onError(radioResponseInfo.error, obj);
        }
        if (rILRequest != null) {
            if (radioResponseInfo.type == 0) {
                decrementWakeLock(rILRequest);
            }
            rILRequest.release();
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
        Rlog.d(MWIRIL_LOG_TAG, sb.toString());
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
        Rlog.e(MWIRIL_LOG_TAG, sb.toString());
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
        Rlog.e(MWIRIL_LOG_TAG, sb.toString(), exc);
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
        Rlog.v(MWIRIL_LOG_TAG, sb.toString());
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setEmergencyAddressId(String str, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2121, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " aid:" + str);
            try {
                radioProxy.setEmergencyAddressId(rILRequestObtainRequest.mSerial, str);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setEmergencyAddressId", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setLocationInfo(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy == null) {
            return;
        }
        RILRequest rILRequestObtainRequest = obtainRequest(2120, message, this.mRILDefaultWorkSource);
        riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " accountId:" + str + " broadcastFlag:" + str2 + " accuracy:" + str5 + " method:" + str6);
        try {
            try {
                radioProxy.setLocationInfo(rILRequestObtainRequest.mSerial, convertNullToEmptyString(str), convertNullToEmptyString(str2), convertNullToEmptyString(str3), convertNullToEmptyString(str4), convertNullToEmptyString(str5), convertNullToEmptyString(str6), convertNullToEmptyString(str7), convertNullToEmptyString(str8), convertNullToEmptyString(str9), convertNullToEmptyString(str10), convertNullToEmptyString(str11));
            } catch (RemoteException | RuntimeException e) {
                e = e;
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setLocationInfo", e);
            }
        } catch (RemoteException | RuntimeException e2) {
            e = e2;
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setNattKeepAliveStatus(String str, boolean z, String str2, int i, String str3, int i2, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2131, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " enable:" + z);
            try {
                radioProxy.setNattKeepAliveStatus(rILRequestObtainRequest.mSerial, str, z, str2, i, str3, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setNattKeepAliveStatus", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWfcConfig(int i, String str, String str2, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2187, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " setting:" + i + " ifName:" + str + " value:" + str2);
            try {
                radioProxy.setWfcConfig(rILRequestObtainRequest.mSerial, i, str, str2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWfcConfig", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWfcConfig_WifiUeMac(String str, String str2, Message message) {
        setWfcConfig(WfcConfigType.WFC_SETTING_WIFI_UEMAC.ordinal(), str, str2, message);
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWifiAssociated(String str, boolean z, String str2, String str3, int i, String str4, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2117, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " associated:" + z + ", mtu: " + i);
            try {
                radioProxy.setWifiAssociated(rILRequestObtainRequest.mSerial, str, z ? 1 : 0, str2, str3, i, str4);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWifiAssociatedWithMtu", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWifiEnabled(String str, int i, int i2, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2116, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " isWifiEnabled:" + i + " isFlightModeOn:" + i2);
            try {
                radioProxy.setWifiEnabled(rILRequestObtainRequest.mSerial, str, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWifiEnabled", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWifiIpAddress(String str, String str2, String str3, int i, int i2, String str4, String str5, int i3, String str6, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2119, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " ifName:" + str + " ipv4PrefixLen: " + i + " ipv6PrefixLen: " + i2 + " ipv4Gateway: " + str4 + " ipv6Gateway: " + str5 + " dnsCount: " + i3 + " dnsAddresses: " + str6);
            try {
                radioProxy.setWifiIpAddress(rILRequestObtainRequest.mSerial, str, str2, str3, i, i2, str4, str5, i3, str6);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWifiIpAddressWithDns", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWifiPingResult(int i, int i2, int i3, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2132, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " rat = " + i + " latency = " + i2 + " pktloss = " + i3);
            try {
                radioProxy.setWifiPingResult(rILRequestObtainRequest.mSerial, i, i2, i3);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWifiPingResult", e);
            }
        }
    }

    @Override // com.mediatek.wfo.ril.MwiCommandsInterface
    public void setWifiSignalLevel(int i, int i2, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(message);
        if (radioProxy != null) {
            RILRequest rILRequestObtainRequest = obtainRequest(2118, message, this.mRILDefaultWorkSource);
            riljLog(rILRequestObtainRequest.serialString() + "> " + requestToString(rILRequestObtainRequest.mRequest) + " rssi: " + i + " snr:" + i2);
            try {
                radioProxy.setWifiSignalLevel(rILRequestObtainRequest.mSerial, i, i2);
            } catch (RemoteException | RuntimeException e) {
                handleRadioProxyExceptionForRR(rILRequestObtainRequest, "setWifiSignalLevel", e);
            }
        }
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
}
