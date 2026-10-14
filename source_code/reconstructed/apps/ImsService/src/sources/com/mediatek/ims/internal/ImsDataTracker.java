package com.mediatek.ims.internal;

import android.content.Context;
import android.net.NetworkInfo;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.ImsEventDispatcher;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class ImsDataTracker implements ImsEventDispatcher.VaEventDispatcher {
    private String TAG;
    private Context mContext;
    private DataDispatcher[] mDispatchers;
    private ImsCommandsInterface[] mImsRILAdapters;
    private int mIsBearerNotify;
    private MdCapability mMdCapability;
    private int[] mModemEmergencyPdnState;
    private int[] mModemImsPdnState;
    private final SubscriptionManager.OnSubscriptionsChangedListener mOnSubscriptionsChangedListener;
    private final Object mPdnStateLock;
    private int mPhoneNum;
    private ImsAdapter.VaSocketIO mSocket;
    private ImsDataSynchronizer[] mSynchronizers;
    private Handler mdHander;

    /* JADX INFO: renamed from: com.mediatek.ims.internal.ImsDataTracker$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$ims$internal$ImsDataTracker$MdCapability;

        static {
            int[] iArr = new int[MdCapability.values().length];
            $SwitchMap$com$mediatek$ims$internal$ImsDataTracker$MdCapability = iArr;
            try {
                iArr[MdCapability.LEGACY.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$ims$internal$ImsDataTracker$MdCapability[MdCapability.AUTOSETUPIMS.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    public enum MdCapability {
        LEGACY,
        AUTOSETUPIMS
    }

    public ImsDataTracker(Context context, ImsAdapter.VaSocketIO vaSocketIO) {
        this.TAG = ImsDataTracker.class.getSimpleName();
        this.mImsRILAdapters = null;
        this.mPdnStateLock = new Object();
        this.mIsBearerNotify = 1;
        this.mdHander = new Handler() { // from class: com.mediatek.ims.internal.ImsDataTracker.1
            @Override // android.os.Handler
            public synchronized void handleMessage(Message message) {
                int i = message.what;
                if (i == 5) {
                    ImsDataTracker.this.onMdRestart((AsyncResult) message.obj);
                } else if (i == 7) {
                    ImsDataTracker.this.onImsDataInfo((AsyncResult) message.obj);
                } else if (i != 8) {
                    ImsDataTracker.this.loge("not handle the message: " + message.what);
                } else {
                    ImsDataTracker.this.onImsBearerChanged((AsyncResult) message.obj);
                }
            }
        };
        this.mOnSubscriptionsChangedListener = new SubscriptionManager.OnSubscriptionsChangedListener() { // from class: com.mediatek.ims.internal.ImsDataTracker.2
            @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
            public void onSubscriptionsChanged() {
                ImsDataTracker.this.logd("onSubscriptionsChanged");
                int i = AnonymousClass3.$SwitchMap$com$mediatek$ims$internal$ImsDataTracker$MdCapability[ImsDataTracker.this.mMdCapability.ordinal()];
                if (i == 1) {
                    for (int i2 = 0; i2 < ImsDataTracker.this.mPhoneNum; i2++) {
                        ImsDataTracker.this.mDispatchers[i2].onSubscriptionsChanged();
                    }
                    return;
                }
                if (i != 2) {
                    return;
                }
                for (int i3 = 0; i3 < ImsDataTracker.this.mPhoneNum; i3++) {
                    ImsDataTracker.this.mSynchronizers[i3].onSubscriptionsChanged();
                }
            }
        };
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        this.mPhoneNum = phoneCount;
        this.mDispatchers = new DataDispatcher[phoneCount];
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mDispatchers[i] = new DataDispatcher(context, this, i);
        }
        this.mSocket = vaSocketIO;
        this.mMdCapability = MdCapability.LEGACY;
        SubscriptionManager.from(context).addOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
    }

    public ImsDataTracker(Context context, ImsCommandsInterface[] imsCommandsInterfaceArr) {
        this.TAG = ImsDataTracker.class.getSimpleName();
        this.mImsRILAdapters = null;
        this.mPdnStateLock = new Object();
        this.mIsBearerNotify = 1;
        this.mdHander = new Handler() { // from class: com.mediatek.ims.internal.ImsDataTracker.1
            @Override // android.os.Handler
            public synchronized void handleMessage(Message message) {
                int i = message.what;
                if (i == 5) {
                    ImsDataTracker.this.onMdRestart((AsyncResult) message.obj);
                } else if (i == 7) {
                    ImsDataTracker.this.onImsDataInfo((AsyncResult) message.obj);
                } else if (i != 8) {
                    ImsDataTracker.this.loge("not handle the message: " + message.what);
                } else {
                    ImsDataTracker.this.onImsBearerChanged((AsyncResult) message.obj);
                }
            }
        };
        this.mOnSubscriptionsChangedListener = new SubscriptionManager.OnSubscriptionsChangedListener() { // from class: com.mediatek.ims.internal.ImsDataTracker.2
            @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
            public void onSubscriptionsChanged() {
                ImsDataTracker.this.logd("onSubscriptionsChanged");
                int i = AnonymousClass3.$SwitchMap$com$mediatek$ims$internal$ImsDataTracker$MdCapability[ImsDataTracker.this.mMdCapability.ordinal()];
                if (i == 1) {
                    for (int i2 = 0; i2 < ImsDataTracker.this.mPhoneNum; i2++) {
                        ImsDataTracker.this.mDispatchers[i2].onSubscriptionsChanged();
                    }
                    return;
                }
                if (i != 2) {
                    return;
                }
                for (int i3 = 0; i3 < ImsDataTracker.this.mPhoneNum; i3++) {
                    ImsDataTracker.this.mSynchronizers[i3].onSubscriptionsChanged();
                }
            }
        };
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        this.mPhoneNum = phoneCount;
        this.mSynchronizers = new ImsDataSynchronizer[phoneCount];
        this.mModemImsPdnState = new int[phoneCount];
        this.mModemEmergencyPdnState = new int[phoneCount];
        this.mContext = context;
        this.mImsRILAdapters = imsCommandsInterfaceArr;
        getImsPdnNotifyRule();
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mSynchronizers[i] = new ImsDataSynchronizer(context, this, i);
            this.mImsRILAdapters[i].registerForBearerState(this.mdHander, 8, null);
            this.mImsRILAdapters[i].registerForBearerInit(this.mdHander, 5, null);
            this.mImsRILAdapters[i].registerForImsDataInfoNotify(this.mdHander, 7, null);
            this.mModemImsPdnState[i] = NetworkInfo.State.UNKNOWN.ordinal();
            this.mModemEmergencyPdnState[i] = NetworkInfo.State.UNKNOWN.ordinal();
            setImsBearerNotification(i, this.mIsBearerNotify);
        }
        this.mMdCapability = MdCapability.AUTOSETUPIMS;
        SubscriptionManager.from(this.mContext).addOnSubscriptionsChangedListener(this.mOnSubscriptionsChangedListener);
    }

    private void clearModemPdnState() {
        synchronized (this.mPdnStateLock) {
            for (int i = 0; i < this.mPhoneNum; i++) {
                this.mModemImsPdnState[i] = NetworkInfo.State.UNKNOWN.ordinal();
                this.mModemEmergencyPdnState[i] = NetworkInfo.State.UNKNOWN.ordinal();
            }
        }
    }

    private void getImsPdnNotifyRule() {
        this.mIsBearerNotify = SystemProperties.getInt("persist.vendor.radio.ims.pdn.notify", 1);
        logd("mIsBearerNotify rule set to " + this.mIsBearerNotify);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logd(String str) {
        Rlog.d(this.TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e(this.TAG, str);
    }

    private void logi(String str) {
        Rlog.i(this.TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onImsBearerChanged(AsyncResult asyncResult) {
        int i;
        logd("onImsBearerChanged");
        String[] strArr = (String[]) asyncResult.result;
        if (strArr == null) {
            loge("parameter is NULL");
            return;
        }
        if (strArr.length != 4) {
            loge("parameter format error: " + Arrays.toString(strArr));
            return;
        }
        logd(Arrays.toString(strArr));
        int i2 = Integer.parseInt(strArr[0]);
        int i3 = Integer.parseInt(strArr[1]);
        int i4 = Integer.parseInt(strArr[2]);
        String str = strArr[3];
        if (i4 == 1) {
            i = 0;
        } else if (i4 == 0) {
            i = 2;
        } else {
            loge("unknown action: " + i4);
            i = -1;
        }
        if (i >= 0) {
            updateModemPdnState(i2, str, i);
            int i5 = this.mIsBearerNotify;
            if (i5 == 1 || i5 == 3) {
                this.mSynchronizers[i2].notifyMdRequest(new ImsDataSynchronizer.ImsBearerRequest(i3, i4, i2, i, str));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onImsDataInfo(AsyncResult asyncResult) {
        String[] strArr = (String[]) asyncResult.result;
        if (strArr == null) {
            loge("parameter is NULL");
            return;
        }
        if (strArr.length != 4) {
            loge("parameter format error: " + Arrays.toString(strArr));
            return;
        }
        logd("onImsDataInfo: " + Arrays.toString(strArr));
        int i = Integer.parseInt(strArr[0]);
        String str = strArr[1];
        String str2 = strArr[2];
        int i2 = str.equals("emergency") ? 10 : 4;
        if ("ClearCodes".equals(str2)) {
            this.mSynchronizers[i].notifyClearCodesEvent(Integer.parseInt(strArr[3]), i2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onMdRestart(AsyncResult asyncResult) {
        logd("onMdRestart");
        int i = ((int[]) asyncResult.result)[0];
        logd("onMdRestart, reset phone = " + i + " connection state");
        this.mSynchronizers[i].notifyMdRestart();
        clearModemPdnState();
        setImsBearerNotification(i, this.mIsBearerNotify);
    }

    private void setImsBearerNotification(int i, int i2) {
        logd("setImsBearerNotification enable: " + i2);
        this.mImsRILAdapters[i].setImsBearerNotification(i2, (Message) null);
    }

    private void updateModemPdnState(int i, String str, int i2) {
        if (i2 == 0) {
            if (str.equals("ims")) {
                this.mModemImsPdnState[i] = NetworkInfo.State.CONNECTED.ordinal();
                return;
            }
            if (str.equals("emergency")) {
                this.mModemEmergencyPdnState[i] = NetworkInfo.State.CONNECTED.ordinal();
                return;
            }
            loge("Not handle the capability: " + str);
            return;
        }
        if (i2 != 2) {
            loge("Not handle the event: " + i2);
            return;
        }
        if (str.equals("ims")) {
            this.mModemImsPdnState[i] = NetworkInfo.State.DISCONNECTED.ordinal();
            return;
        }
        if (str.equals("emergency")) {
            this.mModemEmergencyPdnState[i] = NetworkInfo.State.DISCONNECTED.ordinal();
            return;
        }
        loge("Not handle the capability: " + str);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void disableRequest(int i) {
        logd("receive disableRequest on phone: " + i);
        this.mDispatchers[i].disableRequest(i);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void enableRequest(int i) {
        logd("receive enableRequest on phone: " + i);
        this.mDispatchers[i].enableRequest(i);
    }

    public int[] getImsNetworkState(int i) {
        int[] iArr;
        int[] iArr2;
        logd("capability/mPhoneNum/imsPdnState/emergencyPdnState are : " + i + "/" + this.mPhoneNum + "/" + Arrays.toString(this.mModemImsPdnState) + Arrays.toString(this.mModemEmergencyPdnState));
        if (i == 4) {
            synchronized (this.mPdnStateLock) {
                iArr2 = this.mModemImsPdnState;
            }
            return iArr2;
        }
        if (i == 10) {
            synchronized (this.mPdnStateLock) {
                iArr = this.mModemEmergencyPdnState;
            }
            return iArr;
        }
        int[] iArr3 = new int[this.mPhoneNum];
        Arrays.fill(iArr3, NetworkInfo.State.UNKNOWN.ordinal());
        loge("getImsNetworkState failed becase of invalid capability : " + i);
        return iArr3;
    }

    public void responseBearerConfirm(int i, int i2, int i3, int i4, int i5) {
        logd("send to MD, aid:" + i2 + ", action:" + i3 + ", status:" + i4 + ", phoneId:" + i5);
        if (i == 0) {
            this.mImsRILAdapters[i5].responseBearerStateConfirm(i2, i3, i4, (Message) null);
        } else {
            if (i != 2) {
                return;
            }
            this.mImsRILAdapters[i5].responseBearerStateConfirm(i2, i3, i4, (Message) null);
        }
    }

    public void sendVaEvent(ImsAdapter.VaEvent vaEvent) {
        this.mSocket.writeEvent(vaEvent);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void vaEventCallback(ImsAdapter.VaEvent vaEvent) {
        logd("send event" + vaEvent.getRequestID() + " to phone " + vaEvent.getPhoneId());
        this.mDispatchers[vaEvent.getPhoneId()].vaEventCallback(vaEvent);
    }
}
