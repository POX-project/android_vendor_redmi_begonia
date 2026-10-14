package com.mediatek.internal.telephony;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.LteVopsSupportInfo;
import android.telephony.NetworkRegistrationInfo;
import android.telephony.NetworkService;
import android.telephony.NetworkServiceCallback;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.wfo.IMwiService;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.MwisConstants;
import com.mediatek.wfo.WifiOffloadManager;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class IWlanNetworkService extends NetworkService {
    public static final int MWI_SERVICE_READY = 0;
    private static final String TAG = "IWlanNetworkService";
    private final ConcurrentHashMap<Integer, IWlanNetworkServiceProvider> mIWlanNetSrvProviderMap = new ConcurrentHashMap<>();
    private IWifiOffloadService sWifiOffloadService = null;
    private IWifiOffloadServiceDeathRecipient mDeathRecipient = new IWifiOffloadServiceDeathRecipient();
    private IWifiOffloadListenerProxy mProxy = null;

    private class IWifiOffloadListenerProxy extends WifiOffloadManager.Listener {
        private IWifiOffloadListenerProxy() {
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onWfcStateChanged(int i, int i2) {
            IWlanNetworkService.this.log("onWfcStateChanged simIdx=" + i + ", state=" + i2);
            IWlanNetworkService.this.notifyWfcStateChanged(i, i2);
        }
    }

    private class IWifiOffloadServiceDeathRecipient implements IBinder.DeathRecipient {
        private IWifiOffloadServiceDeathRecipient() {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            IWlanNetworkService.this.sWifiOffloadService = null;
            IWlanNetworkService.this.bindAndRegisterWifiOffloadService();
        }
    }

    private class IWlanNetworkServiceProvider extends NetworkService.NetworkServiceProvider {
        public static final int GET_IWLAN_REGISTRATION_STATE_DONE = 2;
        public static final int IWLAN_REGISTRATION_STATE_CHANGED = 1;
        private final ConcurrentHashMap<Message, NetworkServiceCallback> mCallbackMap;
        private final Handler mHandler;
        private final HandlerThread mHandlerThread;
        private final Object mLock;
        private final Looper mLooper;
        private final Phone mPhone;
        private int mWfcState;

        IWlanNetworkServiceProvider(int i) {
            super(IWlanNetworkService.this, i);
            this.mCallbackMap = new ConcurrentHashMap<>();
            this.mWfcState = 0;
            this.mLock = new Object();
            IWlanNetworkService.this.log("IWlanNetworkServiceProvider construct.");
            this.mPhone = PhoneFactory.getPhone(getSlotIndex());
            HandlerThread handlerThread = new HandlerThread(IWlanNetworkServiceProvider.class.getSimpleName());
            this.mHandlerThread = handlerThread;
            handlerThread.start();
            this.mLooper = this.mHandlerThread.getLooper();
            this.mHandler = new Handler(this.mLooper) { // from class: com.mediatek.internal.telephony.IWlanNetworkService.IWlanNetworkServiceProvider.1
                @Override // android.os.Handler
                public void handleMessage(Message message) {
                    NetworkServiceCallback networkServiceCallback = (NetworkServiceCallback) IWlanNetworkServiceProvider.this.mCallbackMap.remove(message);
                    int i2 = message.what;
                    if (i2 == 1) {
                        int i3 = message.arg1;
                        IWlanNetworkService.this.log("IWLAN_REGISTRATION_STATE_CHANGED, slotid: " + IWlanNetworkServiceProvider.this.getSlotIndex() + ", state: " + i3);
                        IWlanNetworkServiceProvider.this.mWfcState = i3;
                        IWlanNetworkServiceProvider.this.notifyNetworkRegistrationInfoChanged();
                        return;
                    }
                    if (i2 != 2) {
                        return;
                    }
                    IWlanNetworkServiceProvider iWlanNetworkServiceProvider = IWlanNetworkServiceProvider.this;
                    NetworkRegistrationInfo networkRegistrationInfoCreateRegistrationState = iWlanNetworkServiceProvider.createRegistrationState(iWlanNetworkServiceProvider.mWfcState);
                    try {
                        IWlanNetworkService.this.log("Calling callback.onGetNetworkRegistrationStateComplete.resultCode = 0, netState = " + networkRegistrationInfoCreateRegistrationState + ", slotid: " + IWlanNetworkServiceProvider.this.getSlotIndex());
                        networkServiceCallback.onRequestNetworkRegistrationInfoComplete(0, networkRegistrationInfoCreateRegistrationState);
                    } catch (Exception e) {
                        IWlanNetworkService.this.loge("Exception: " + e);
                    }
                }
            };
        }

        /* JADX INFO: Access modifiers changed from: private */
        public NetworkRegistrationInfo createRegistrationState(int i) {
            int i2;
            int i3;
            IWlanNetworkService.this.log("createRegistrationState.");
            if (i == 1) {
                i2 = 1;
                i3 = 18;
            } else if (i == 2) {
                i2 = 2;
                i3 = 18;
            } else {
                i2 = 0;
                i3 = 0;
            }
            return new NetworkRegistrationInfo(2, 2, i2, i3, 0, false, IWlanNetworkService.this.getAvailableServices(i2, 2, false), null, null, 0, false, false, false, new LteVopsSupportInfo(1, 1), false);
        }

        public void close() {
            IWlanNetworkService.this.log("close.");
            this.mCallbackMap.clear();
            this.mHandlerThread.quit();
        }

        public Handler getHandler() {
            return this.mHandler;
        }

        public void requestNetworkRegistrationInfo(int i, NetworkServiceCallback networkServiceCallback) {
            IWlanNetworkService.this.log("getNetworkRegistrationState for domain " + i + ", slotid: " + getSlotIndex());
            if (i == 2) {
                Message messageObtain = Message.obtain(this.mHandler, 2);
                this.mCallbackMap.put(messageObtain, networkServiceCallback);
                messageObtain.sendToTarget();
                return;
            }
            IWlanNetworkService.this.loge("getNetworkRegistrationState invalid domain " + i + ", slotid: " + getSlotIndex());
            networkServiceCallback.onRequestNetworkRegistrationInfoComplete(2, (NetworkRegistrationInfo) null);
        }
    }

    public IWlanNetworkService() {
        bindAndRegisterWifiOffloadService();
        log("IWlanNetworkService init.");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bindAndRegisterWifiOffloadService() {
        new Thread(new Runnable() { // from class: com.mediatek.internal.telephony.IWlanNetworkService.1
            @Override // java.lang.Runnable
            public void run() {
                while (IWlanNetworkService.this.sWifiOffloadService == null) {
                    IWlanNetworkService.this.checkAndBindWifiOffloadService();
                    if (IWlanNetworkService.this.sWifiOffloadService != null) {
                        try {
                            IWlanNetworkService.this.sWifiOffloadService.registerForHandoverEvent(IWlanNetworkService.this.createWifiOffloadListenerProxy());
                        } catch (RemoteException e) {
                            IWlanNetworkService.this.loge("can't register handover event");
                        }
                    } else if (SystemProperties.getInt("persist.vendor.mtk_wfc_support", 0) == 0) {
                        IWlanNetworkService.this.loge("can't get WifiOffloadService");
                        return;
                    }
                    if (IWlanNetworkService.this.sWifiOffloadService != null) {
                        return;
                    }
                    IWlanNetworkService.this.loge("can't get WifiOffloadService, retry after 1s.");
                    try {
                        Thread.sleep(1000L);
                    } catch (InterruptedException e2) {
                    }
                }
            }
        }).start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkAndBindWifiOffloadService() {
        IBinder service = ServiceManager.getService(MwisConstants.MWI_SERVICE);
        try {
            if (service != null) {
                service.linkToDeath(this.mDeathRecipient, 0);
                this.sWifiOffloadService = IMwiService.Stub.asInterface(service).getWfcHandlerInterface();
            } else {
                log("No MwiService exist");
            }
        } catch (RemoteException e) {
            loge("can't get MwiService:" + e);
        }
        log("checkAndBindWifiOffloadService: sWifiOffloadService = " + this.sWifiOffloadService);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public IWifiOffloadListenerProxy createWifiOffloadListenerProxy() {
        if (this.mProxy == null) {
            log("create WifiOffloadListenerProxy");
            this.mProxy = new IWifiOffloadListenerProxy();
        }
        return this.mProxy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public ArrayList<Integer> getAvailableServices(int i, int i2, boolean z) {
        log("getAvailableServices.");
        if (z) {
            return new ArrayList<>(Arrays.asList(5));
        }
        if ((i == 5 || i == 1) && i2 == 2) {
            return new ArrayList<>(Arrays.asList(2));
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Rlog.d(TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e(TAG, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyWfcStateChanged(int i, int i2) {
        if (this.mIWlanNetSrvProviderMap.containsKey(Integer.valueOf(i))) {
            log("notifyWfcStateChanged: " + i2);
            this.mIWlanNetSrvProviderMap.get(Integer.valueOf(i)).getHandler().obtainMessage(1, i2, 0).sendToTarget();
            return;
        }
        log("IWlanNetworkServiceProvider id " + i + " did not exist.");
    }

    public NetworkService.NetworkServiceProvider onCreateNetworkServiceProvider(int i) {
        log("IWlan network service created for slot " + i);
        if (SubscriptionManager.isValidSlotIndex(i)) {
            this.mIWlanNetSrvProviderMap.remove(Integer.valueOf(i));
            this.mIWlanNetSrvProviderMap.put(Integer.valueOf(i), new IWlanNetworkServiceProvider(i));
            return this.mIWlanNetSrvProviderMap.get(Integer.valueOf(i));
        }
        loge("Tried to Iwlan network service with invalid slotId " + i);
        return null;
    }
}
