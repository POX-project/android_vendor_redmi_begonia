package com.mediatek.ims.legacy.ss;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkRequest;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import android.telephony.PhoneStateListener;
import android.telephony.PreciseDataConnectionState;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.mediatek.ims.SuppSrvConfig;

/* JADX INFO: loaded from: classes.dex */
public class XcapMobileDataNetworkManager {
    private static final String LOG_TAG = "XcapMobileDataNetworkManager";
    private static final int MSG_RELEASE_NETWORK = 0;
    public static final int TYPE_XCAP = 2048;
    private Context mContext;
    private Handler mHandlerReleaseNW;
    private HandlerThread mHandlerThread;
    private PhoneStateListener mPhoneStateListener;
    private TelephonyManager mTelephonyManager;
    private static int mKeepAliveTimer = 0;
    private static int mRequestTimer = 0;
    private static int mDataCoolDownTimer = 0;
    private long mPreviousReleaseTime = -1;
    private int mDataUsedPhoneId = -1;
    private int mXcapDataConnectionState = -1;
    private boolean isNotifyByDataDisconnected = false;
    private ConnectivityManager.NetworkCallback mNetworkCallback = null;
    private Network mNetwork = null;
    private int mXcapMobileDataNetworkRequestCount = 0;
    private ConnectivityManager mConnectivityManager = null;

    class NetworkHandler extends Handler {
        public NetworkHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            Rlog.d(XcapMobileDataNetworkManager.LOG_TAG, "Ready to release network: " + XcapMobileDataNetworkManager.this.mNetwork);
            synchronized (XcapMobileDataNetworkManager.this) {
                XcapMobileDataNetworkManager.this.releaseRequest();
            }
        }
    }

    public XcapMobileDataNetworkManager(Context context, Looper looper) {
        this.mHandlerReleaseNW = null;
        this.mContext = context;
        this.mHandlerReleaseNW = new NetworkHandler(looper);
        this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        HandlerThread handlerThread = new HandlerThread("PhoneStateListenerNotify");
        this.mHandlerThread = handlerThread;
        handlerThread.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String dataStateToString(int i) {
        if (i == -1) {
            return "DATA_UNKNOWN";
        }
        if (i == 0) {
            return "DATA_DISCONNECTED";
        }
        if (i == 1) {
            return "DATA_CONNECTING";
        }
        if (i != 2) {
            return i != 3 ? "Error" : "DATA_SUSPENDED";
        }
        return "DATA_CONNECTED";
    }

    private ConnectivityManager getConnectivityManager() {
        if (this.mConnectivityManager == null) {
            this.mConnectivityManager = (ConnectivityManager) this.mContext.getSystemService("connectivity");
        }
        return this.mConnectivityManager;
    }

    private int getSubIdUsingPhoneId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId.length != 0) {
            return subId[0];
        }
        return -1;
    }

    private void newRequest(int i) {
        ConnectivityManager connectivityManager = getConnectivityManager();
        int subIdUsingPhoneId = getSubIdUsingPhoneId(i);
        this.mNetworkCallback = new ConnectivityManager.NetworkCallback() { // from class: com.mediatek.ims.legacy.ss.XcapMobileDataNetworkManager.1
            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onAvailable(Network network) {
                super.onAvailable(network);
                Rlog.d(XcapMobileDataNetworkManager.LOG_TAG, "NetworkCallbackListener.onAvailable: network=" + network);
                XcapMobileDataNetworkManager.this.stopListenXcapDataConnectionState();
                synchronized (XcapMobileDataNetworkManager.this) {
                    XcapMobileDataNetworkManager.this.mNetwork = network;
                    XcapMobileDataNetworkManager.this.notifyAll();
                }
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onLost(Network network) {
                super.onLost(network);
                Rlog.d(XcapMobileDataNetworkManager.LOG_TAG, "NetworkCallbackListener.onLost: network=" + network);
                XcapMobileDataNetworkManager.this.stopListenXcapDataConnectionState();
                synchronized (XcapMobileDataNetworkManager.this) {
                    XcapMobileDataNetworkManager.this.releaseRequest();
                    XcapMobileDataNetworkManager.this.notifyAll();
                }
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onUnavailable() {
                super.onUnavailable();
                Rlog.d(XcapMobileDataNetworkManager.LOG_TAG, "NetworkCallbackListener.onUnavailable");
                XcapMobileDataNetworkManager.this.stopListenXcapDataConnectionState();
                synchronized (XcapMobileDataNetworkManager.this) {
                    XcapMobileDataNetworkManager.this.releaseRequest();
                    XcapMobileDataNetworkManager.this.notifyAll();
                }
            }
        };
        Rlog.d(LOG_TAG, "newRequest, subId=" + subIdUsingPhoneId);
        NetworkRequest.Builder networkSpecifier = new NetworkRequest.Builder().addTransportType(0).setNetworkSpecifier(Integer.toString(subIdUsingPhoneId));
        if (SuppSrvConfig.getInstance(this.mContext).isUseInternetTypeApn()) {
            networkSpecifier.addCapability(12);
            networkSpecifier.addCapability(13);
        } else {
            networkSpecifier.addCapability(9);
        }
        startListenXcapDataConnectionState(i);
        connectivityManager.requestNetwork(networkSpecifier.build(), this.mNetworkCallback, mRequestTimer);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void releaseRequest() {
        Rlog.d(LOG_TAG, "releaseRequest: mNetwork=" + this.mNetwork + ", mNetworkCallback=" + this.mNetworkCallback);
        ConnectivityManager connectivityManager = getConnectivityManager();
        ConnectivityManager.NetworkCallback networkCallback = this.mNetworkCallback;
        if (networkCallback != null) {
            connectivityManager.unregisterNetworkCallback(networkCallback);
        }
        if (this.mNetwork != null) {
            this.mPreviousReleaseTime = SystemClock.elapsedRealtime();
            Rlog.d(LOG_TAG, "Release time: " + this.mPreviousReleaseTime);
        }
        if (connectivityManager != null) {
            Rlog.d(LOG_TAG, "UnBind process network");
            connectivityManager.bindProcessToNetwork(null);
        }
        this.mNetworkCallback = null;
        this.mNetwork = null;
        this.mXcapMobileDataNetworkRequestCount = 0;
        this.mDataUsedPhoneId = -1;
    }

    public static void setDataCoolDownTimer(int i) {
        Rlog.d(LOG_TAG, "setDataCoolDownTimer: " + i);
        mDataCoolDownTimer = i;
    }

    public static void setKeepAliveTimer(int i) {
        Rlog.d(LOG_TAG, "setKeepAliveTimer: " + i);
        mKeepAliveTimer = i;
    }

    public static void setRequestDataTimer(int i) {
        Rlog.d(LOG_TAG, "setRequestDataTimer: " + i);
        mRequestTimer = i;
    }

    private void startListenXcapDataConnectionState(int i) {
        Rlog.d(LOG_TAG, "startListenXcapDataConnectionState: subid=" + getSubIdUsingPhoneId(i));
        PhoneStateListener phoneStateListener = new PhoneStateListener(this.mHandlerThread.getLooper()) { // from class: com.mediatek.ims.legacy.ss.XcapMobileDataNetworkManager.2
            @Override // android.telephony.PhoneStateListener
            public void onPreciseDataConnectionStateChanged(PreciseDataConnectionState preciseDataConnectionState) {
                int dataConnectionState = preciseDataConnectionState.getDataConnectionState();
                int dataConnectionApnTypeBitMask = preciseDataConnectionState.getDataConnectionApnTypeBitMask();
                StringBuilder sb = new StringBuilder();
                sb.append("onPreciseDataConnectionStateChanged: apnType=");
                sb.append(dataConnectionApnTypeBitMask);
                sb.append(", newState=");
                sb.append(XcapMobileDataNetworkManager.this.dataStateToString(dataConnectionState));
                sb.append(", currentXcapState=");
                XcapMobileDataNetworkManager xcapMobileDataNetworkManager = XcapMobileDataNetworkManager.this;
                sb.append(xcapMobileDataNetworkManager.dataStateToString(xcapMobileDataNetworkManager.mXcapDataConnectionState));
                Rlog.d(XcapMobileDataNetworkManager.LOG_TAG, sb.toString());
                if (dataConnectionApnTypeBitMask != 2048) {
                    return;
                }
                if (XcapMobileDataNetworkManager.this.mXcapDataConnectionState != 1 || XcapMobileDataNetworkManager.this.mXcapDataConnectionState == dataConnectionState || dataConnectionState != 0) {
                    if (dataConnectionState != -1) {
                        XcapMobileDataNetworkManager.this.mXcapDataConnectionState = dataConnectionState;
                    }
                } else {
                    XcapMobileDataNetworkManager.this.isNotifyByDataDisconnected = true;
                    XcapMobileDataNetworkManager.this.stopListenXcapDataConnectionState();
                    synchronized (XcapMobileDataNetworkManager.this) {
                        XcapMobileDataNetworkManager.this.notifyAll();
                    }
                }
            }
        };
        this.mPhoneStateListener = phoneStateListener;
        TelephonyManager telephonyManager = this.mTelephonyManager;
        if (telephonyManager != null) {
            telephonyManager.listen(phoneStateListener, 4096);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopListenXcapDataConnectionState() {
        PhoneStateListener phoneStateListener;
        Rlog.d(LOG_TAG, "stopListenXcapDataConnectionState: listener=" + this.mPhoneStateListener);
        TelephonyManager telephonyManager = this.mTelephonyManager;
        if (telephonyManager != null && (phoneStateListener = this.mPhoneStateListener) != null) {
            telephonyManager.listen(phoneStateListener, 0);
        }
        this.mPhoneStateListener = null;
        this.mXcapDataConnectionState = -1;
    }

    public Network acquireNetwork(int i) {
        Rlog.d(LOG_TAG, "acquireNetwork: phoneId = " + i);
        SuppSrvConfig suppSrvConfig = SuppSrvConfig.getInstance(this.mContext);
        if (!suppSrvConfig.isUseXCAPTypeApn() && !suppSrvConfig.isUseInternetTypeApn()) {
            Rlog.d(LOG_TAG, "not use any APN. No need to acquireNetwork");
            return null;
        }
        synchronized (this) {
            Rlog.d(LOG_TAG, "acquireNetwork start");
            this.mXcapMobileDataNetworkRequestCount++;
            this.mHandlerReleaseNW.removeMessages(0);
            if (this.mNetwork != null) {
                if (this.mDataUsedPhoneId == i) {
                    Rlog.d(LOG_TAG, "already available: mNetwork=" + this.mNetwork);
                    return this.mNetwork;
                }
                releaseRequest();
                this.mXcapMobileDataNetworkRequestCount++;
            }
            Rlog.d(LOG_TAG, "start new network request");
            this.mDataUsedPhoneId = i;
            long jElapsedRealtime = SystemClock.elapsedRealtime() - this.mPreviousReleaseTime;
            long j = jElapsedRealtime > ((long) mDataCoolDownTimer) ? 0L : ((long) mDataCoolDownTimer) - jElapsedRealtime;
            Rlog.d(LOG_TAG, "waitCoolDown=" + j + ", coolDownDuration=" + jElapsedRealtime + ", mDataCoolDownTimer=" + mDataCoolDownTimer);
            try {
                Thread.sleep(j);
            } catch (InterruptedException e) {
                Rlog.d(LOG_TAG, "wait cool down interrupted");
            }
            newRequest(i);
            Rlog.d(LOG_TAG, "wait request result ... mRequestTimer=" + mRequestTimer);
            try {
                wait(mRequestTimer);
            } catch (InterruptedException e2) {
                Rlog.d(LOG_TAG, "wait request interrupted");
            }
            Rlog.d(LOG_TAG, "continue ...");
            if (this.mNetwork != null) {
                Rlog.d(LOG_TAG, "acquireNetwork success: mNetwork=" + this.mNetwork);
                return this.mNetwork;
            }
            if (this.isNotifyByDataDisconnected) {
                Rlog.d(LOG_TAG, "create xcap data connection failed");
                this.isNotifyByDataDisconnected = false;
            } else {
                Rlog.d(LOG_TAG, "timed out");
            }
            stopListenXcapDataConnectionState();
            releaseRequest();
            return null;
        }
    }

    public void releaseNetwork() {
        synchronized (this) {
            if (this.mXcapMobileDataNetworkRequestCount > 0) {
                this.mXcapMobileDataNetworkRequestCount--;
                Rlog.d(LOG_TAG, "releaseNetwork count=" + this.mXcapMobileDataNetworkRequestCount);
                if (this.mXcapMobileDataNetworkRequestCount < 1) {
                    if (this.mNetwork == null) {
                        Rlog.d(LOG_TAG, "No dedicate network here, release directly.");
                        releaseRequest();
                    } else {
                        Rlog.d(LOG_TAG, "Delay release network.");
                        this.mHandlerReleaseNW.sendMessageDelayed(this.mHandlerReleaseNW.obtainMessage(0), mKeepAliveTimer);
                    }
                }
            }
        }
    }
}
