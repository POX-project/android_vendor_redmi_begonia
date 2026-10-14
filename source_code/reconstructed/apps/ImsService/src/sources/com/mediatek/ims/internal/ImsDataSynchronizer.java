package com.mediatek.ims.internal;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkInfo;
import android.net.NetworkRequest;
import android.os.Binder;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.util.SparseArray;
import com.android.internal.util.State;
import com.android.internal.util.StateMachine;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import java.io.Serializable;

/* JADX INFO: loaded from: classes.dex */
public class ImsDataSynchronizer {
    public static final int ACTION_ACTIVATION = 1;
    public static final int ACTION_DEACTIVATION = 0;
    public static final int EVENT_BEARER_STATE_CHANGED = 8;
    public static final int EVENT_CONNECT = 0;
    public static final int EVENT_CONNECT_DONE = 1;
    public static final int EVENT_DISCONNECT = 2;
    public static final int EVENT_DISCONNECT_DONE = 3;
    public static final int EVENT_IMS_DATA_INFO = 7;
    public static final int EVENT_MD_RESTART = 5;
    public static final int EVENT_SET_BEARER_NOTIFICATION_DONE = 6;
    public static final int EVENT_SUBSCRIPTIONS_CHANGED = 4;
    private String TAG = ImsDataSynchronizer.class.getSimpleName();
    private Context mContext;
    private ImsDataTracker mDataTracker;
    private DataConnection mEmcDataConnection;
    private DataConnection mImsDataConnection;
    private HandlerThread mImsDcHandlerThread;
    private int mPhoneId;
    private int mSubId;

    public class DataConnection extends StateMachine {
        private static final int STATUS_ABORT = 1;
        private static final int STATUS_SUCCESS = 0;
        private String TAG;
        private ActivatingState mActivatingState;
        private ActiveState mActiveState;
        private NetworkAvailableCallback mAvailableListener;
        private int mCapability;
        private DataConnection mConn;
        private ConnectivityManager mConnectivityManager;
        private DefaultState mDefaultState;
        private DisconnectingState mDisconnectingState;
        private SparseArray<ImsBearerRequest> mImsNetworkRequests;
        private InactiveState mInactiveState;
        private NetworkLostCallback mLostListener;
        private String mPdnSatate;

        private class ActivatingState extends State {
            private ActivatingState() {
            }

            public void enter() {
                DataConnection.this.mPdnSatate = "ActivatingState";
                DataConnection.this.logd("enter");
            }

            public void exit() {
                DataConnection.this.logd("exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("msg=" + DataConnection.this.msgToString(message.what));
                int i = message.what;
                if (i == 1) {
                    if (!ImsDataSynchronizer.this.earlyConfirmReqNetworkToMd()) {
                        DataConnection.this.confirmRequestNetworkToMd(0, 0);
                    }
                    DataConnection dataConnection = DataConnection.this;
                    dataConnection.transitionTo(dataConnection.mActiveState);
                    return true;
                }
                if (i == 2) {
                    DataConnection.this.confirmRequestNetworkToMd(0, 1);
                    DataConnection.this.deferMessage(message);
                    DataConnection dataConnection2 = DataConnection.this;
                    dataConnection2.transitionTo(dataConnection2.mInactiveState);
                    return true;
                }
                if (i == 5) {
                    DataConnection.this.mConn.clear();
                    DataConnection.this.releaseNetwork();
                    DataConnection dataConnection3 = DataConnection.this;
                    dataConnection3.transitionTo(dataConnection3.mInactiveState);
                    return true;
                }
                DataConnection.this.loge("not handle the message " + DataConnection.this.msgToString(message.what));
                return false;
            }
        }

        private class ActiveState extends State {
            private ActiveState() {
            }

            public void enter() {
                DataConnection.this.mPdnSatate = "ActiveState";
                DataConnection.this.logd("enter");
            }

            public void exit() {
                DataConnection.this.logd("exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("msg=" + DataConnection.this.msgToString(message.what));
                int i = message.what;
                if (i == 2) {
                    DataConnection.this.releaseNetwork();
                    DataConnection dataConnection = DataConnection.this;
                    dataConnection.transitionTo(dataConnection.mDisconnectingState);
                    return true;
                }
                if (i == 3) {
                    DataConnection dataConnection2 = DataConnection.this;
                    dataConnection2.transitionTo(dataConnection2.mInactiveState);
                    return true;
                }
                if (i == 5) {
                    DataConnection.this.mConn.clear();
                    DataConnection.this.releaseNetwork();
                    DataConnection dataConnection3 = DataConnection.this;
                    dataConnection3.transitionTo(dataConnection3.mInactiveState);
                    return true;
                }
                DataConnection.this.loge("not handle the message " + DataConnection.this.msgToString(message.what));
                return false;
            }
        }

        private class DefaultState extends State {
            private DefaultState() {
            }

            public void enter() {
                DataConnection.this.mPdnSatate = "DefaultState";
                DataConnection.this.logd("enter");
            }

            public void exit() {
                DataConnection.this.logd("exit");
            }

            public boolean processMessage(Message message) {
                int i = message.what;
                return true;
            }
        }

        private class DisconnectingState extends State {
            private DisconnectingState() {
            }

            public void enter() {
                DataConnection.this.mPdnSatate = "DisconnectingState";
                DataConnection.this.logd("enter");
            }

            public void exit() {
                DataConnection.this.logd("exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("msg=" + DataConnection.this.msgToString(message.what));
                int i = message.what;
                if (i == 3) {
                    DataConnection.this.confirmReleaseNetworkToMd(2);
                    DataConnection dataConnection = DataConnection.this;
                    dataConnection.transitionTo(dataConnection.mInactiveState);
                    return true;
                }
                if (i == 5) {
                    DataConnection.this.mConn.clear();
                    DataConnection dataConnection2 = DataConnection.this;
                    dataConnection2.transitionTo(dataConnection2.mInactiveState);
                    return true;
                }
                DataConnection.this.loge("not handle the message " + DataConnection.this.msgToString(message.what));
                return false;
            }
        }

        private class InactiveState extends State {
            private InactiveState() {
            }

            public void enter() {
                DataConnection.this.mPdnSatate = "InactiveState";
                DataConnection.this.refreshNetworkLostListener();
                DataConnection.this.logd(" enter");
            }

            public void exit() {
                DataConnection.this.logd("exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("msg=" + DataConnection.this.msgToString(message.what));
                int i = message.what;
                if (i != 0) {
                    if (i == 1) {
                        DataConnection dataConnection = DataConnection.this;
                        dataConnection.transitionTo(dataConnection.mActiveState);
                        return true;
                    }
                    if (i == 2) {
                        if (DataConnection.this.mImsNetworkRequests.get(0) != null) {
                            DataConnection.this.logd("handle pdn abort requested");
                            DataConnection.this.confirmRequestNetworkToMd(0, 1);
                        }
                        DataConnection.this.releaseNetwork();
                        DataConnection.this.confirmReleaseNetworkToMd(2);
                        return true;
                    }
                    if (i != 4) {
                        if (i == 5) {
                            DataConnection.this.mConn.clear();
                            DataConnection.this.releaseNetwork();
                            return true;
                        }
                        DataConnection.this.loge("not handle the messag " + DataConnection.this.msgToString(message.what));
                        return false;
                    }
                }
                if (DataConnection.this.requestNetwork()) {
                    if (ImsDataSynchronizer.this.earlyConfirmReqNetworkToMd()) {
                        DataConnection.this.confirmRequestNetworkToMd(0, 0);
                    }
                    DataConnection dataConnection2 = DataConnection.this;
                    dataConnection2.transitionTo(dataConnection2.mActivatingState);
                }
                return true;
            }
        }

        private class NetworkAvailableCallback extends ConnectivityManager.NetworkCallback {
            private boolean mNetworkCallbackRegistered = false;

            public NetworkAvailableCallback() {
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onAvailable(Network network) {
                NetworkInfo networkInfo = DataConnection.this.mConnectivityManager.getNetworkInfo(network);
                DataConnection.this.logd("onAvailable: networInfo: " + networkInfo + " mNetworkCallbackRegistered " + this.mNetworkCallbackRegistered);
                if (this.mNetworkCallbackRegistered) {
                    DataConnection.this.mConn.sendMessage(DataConnection.this.mConn.obtainMessage(1));
                }
            }

            public void setNetworkCallbackRegistered(boolean z) {
                DataConnection.this.logd("setNetworkCallbackRegistered regState= " + z);
                this.mNetworkCallbackRegistered = z;
            }
        }

        private class NetworkLostCallback extends ConnectivityManager.NetworkCallback {
            public NetworkLostCallback() {
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onLost(Network network) {
                NetworkInfo networkInfo = DataConnection.this.mConnectivityManager.getNetworkInfo(network);
                DataConnection.this.logd("onLost: networInfo: " + networkInfo);
                DataConnection.this.mConn.sendMessage(DataConnection.this.mConn.obtainMessage(3));
            }
        }

        public DataConnection(String str, Handler handler, int i) {
            super(str, handler);
            this.TAG = "DC-";
            this.mImsNetworkRequests = new SparseArray<>();
            this.mConn = this;
            this.mPdnSatate = "DefaultState";
            this.mDefaultState = new DefaultState();
            this.mInactiveState = new InactiveState();
            this.mActivatingState = new ActivatingState();
            this.mActiveState = new ActiveState();
            this.mDisconnectingState = new DisconnectingState();
            this.mCapability = i;
            this.mConnectivityManager = (ConnectivityManager) ImsDataSynchronizer.this.mContext.getSystemService("connectivity");
            this.mAvailableListener = new NetworkAvailableCallback();
            this.mLostListener = new NetworkLostCallback();
            addState(this.mDefaultState);
            addState(this.mInactiveState, this.mDefaultState);
            addState(this.mActivatingState, this.mDefaultState);
            addState(this.mActiveState, this.mDefaultState);
            addState(this.mDisconnectingState, this.mDefaultState);
            setInitialState(this.mInactiveState);
            start();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void confirmReleaseNetworkToMd(int i) {
            logd("confirmReleaseNetworkToMd");
            ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(i);
            for (int i2 = 0; i2 < this.mImsNetworkRequests.size(); i2++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i2));
            }
            if (imsBearerRequest != null) {
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequest());
                ImsDataSynchronizer.this.mDataTracker.responseBearerConfirm(imsBearerRequest.getRequest(), imsBearerRequest.getAid(), imsBearerRequest.getAction(), 0, ImsDataSynchronizer.this.mPhoneId);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void confirmRequestNetworkToMd(int i, int i2) {
            logd("confirmRequestNetworkToMd");
            ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(i);
            for (int i3 = 0; i3 < this.mImsNetworkRequests.size(); i3++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i3));
            }
            if (imsBearerRequest != null) {
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequest());
                ImsDataSynchronizer.this.mDataTracker.responseBearerConfirm(imsBearerRequest.getRequest(), imsBearerRequest.getAid(), imsBearerRequest.getAction(), i2, ImsDataSynchronizer.this.mPhoneId);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public String msgToString(int i) {
            if (i == 0) {
                return "EVENT_CONNECT";
            }
            if (i == 1) {
                return "EVENT_CONNECT_DONE";
            }
            if (i == 2) {
                return "EVENT_DISCONNECT";
            }
            if (i == 3) {
                return "EVENT_DISCONNECT_DONE";
            }
            if (i != 4) {
                return i != 5 ? "<unknown request>" : "EVENT_MD_RESTART";
            }
            return "EVENT_SUBSCRIPTIONS_CHANGED";
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void refreshNetworkLostListener() {
            logd("refreshNetworkLostListener");
            if (this.mPdnSatate.equals("ActivatingState") || this.mPdnSatate.equals("ActiveState") || this.mPdnSatate.equals("DisconnectingState")) {
                loge("inValid state: " + this.mPdnSatate);
                return;
            }
            try {
                this.mConnectivityManager.unregisterNetworkCallback(this.mLostListener);
            } catch (IllegalArgumentException e) {
                loge("cb already has been released!!");
            }
            long jClearCallingIdentity = Binder.clearCallingIdentity();
            logd("refreshNetworkLostListener, uid = " + Binder.getCallingUid() + ", package name: " + ImsDataSynchronizer.this.mContext.getOpPackageName());
            NetworkRequest.Builder builder = new NetworkRequest.Builder();
            builder.addCapability(this.mCapability);
            builder.addTransportType(0);
            builder.setNetworkSpecifier(String.valueOf(ImsDataSynchronizer.this.mSubId));
            this.mConnectivityManager.registerNetworkCallback(builder.build(), this.mLostListener);
            Binder.restoreCallingIdentity(jClearCallingIdentity);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void releaseNetwork() {
            logd("releaseNetwork");
            try {
                this.mConnectivityManager.unregisterNetworkCallback(this.mAvailableListener);
                this.mAvailableListener.setNetworkCallbackRegistered(false);
            } catch (IllegalArgumentException e) {
                loge("cb already has been released!!");
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean requestNetwork() {
            logd("requestNetwork");
            if (ImsDataSynchronizer.this.mSubId < 0 && this.mCapability != 10) {
                loge("inValid subId: " + ImsDataSynchronizer.this.mSubId);
                return false;
            }
            if (this.mImsNetworkRequests.get(0) == null) {
                loge("ImsBearerRequest is NULL");
                return false;
            }
            NetworkRequest.Builder builder = new NetworkRequest.Builder();
            builder.addCapability(this.mCapability);
            builder.addTransportType(0);
            builder.setNetworkSpecifier(String.valueOf(ImsDataSynchronizer.this.mSubId));
            NetworkRequest networkRequestBuild = builder.build();
            logd("start requestNetwork for " + getName());
            this.mAvailableListener.setNetworkCallbackRegistered(true);
            this.mConnectivityManager.requestNetwork(networkRequestBuild, this.mAvailableListener);
            return true;
        }

        public void clear() {
            logd("clear");
            this.mImsNetworkRequests.clear();
        }

        public void logd(String str) {
            Rlog.d(this.TAG + getName() + "[" + ImsDataSynchronizer.this.mPhoneId + "]", this.mPdnSatate + ": " + str);
        }

        public void loge(String str) {
            Rlog.e(this.TAG + getName() + "[" + ImsDataSynchronizer.this.mPhoneId + "]", this.mPdnSatate + ": " + str);
        }

        public void logi(String str) {
            Rlog.i(this.TAG + getName() + "[" + ImsDataSynchronizer.this.mPhoneId + "]", this.mPdnSatate + ": " + str);
        }

        public void onSubscriptionsChanged() {
            logd("onSubscriptionsChanged");
            refreshNetworkLostListener();
            if (this.mImsNetworkRequests.get(0) != null) {
                sendMessage(obtainMessage(4));
            }
        }

        public void putRequest(ImsBearerRequest imsBearerRequest) {
            if (this.mImsNetworkRequests.get(imsBearerRequest.getRequest()) == null) {
                this.mImsNetworkRequests.put(imsBearerRequest.getRequest(), imsBearerRequest);
                return;
            }
            loge("request already exist: " + imsBearerRequest);
        }
    }

    public static class ImsBearerRequest implements Serializable {
        private static final long serialVersionUID = -5053412967314724078L;
        private int mAction;
        private int mAid;
        private String mCapability;
        private int mPhoneId;
        private int mRequest;

        public ImsBearerRequest(int i, int i2, int i3, int i4, String str) {
            this.mAid = i;
            this.mAction = i2;
            this.mPhoneId = i3;
            this.mRequest = i4;
            this.mCapability = str;
        }

        public int getAction() {
            return this.mAction;
        }

        public int getAid() {
            return this.mAid;
        }

        public String getCapability() {
            return this.mCapability;
        }

        public int getPhoneId() {
            return this.mPhoneId;
        }

        public int getRequest() {
            return this.mRequest;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("aid: " + this.mAid);
            sb.append(" action: " + this.mAction);
            sb.append(" phoneId: " + this.mPhoneId);
            int i = this.mRequest;
            if (i == 0) {
                sb.append(" Request: EVENT_CONNECT");
            } else if (i == 2) {
                sb.append(" Request: EVENT_DISCONNECT");
            }
            sb.append(" Capability: " + this.mCapability + " }");
            return sb.toString();
        }
    }

    public ImsDataSynchronizer(Context context, ImsDataTracker imsDataTracker, int i) {
        this.mContext = context;
        this.mDataTracker = imsDataTracker;
        this.mPhoneId = i;
        this.mSubId = SubscriptionManagerHelper.getSubIdUsingPhoneId(i);
        HandlerThread handlerThread = new HandlerThread("ImsDcHandlerThread");
        this.mImsDcHandlerThread = handlerThread;
        handlerThread.start();
        this.mImsDataConnection = new DataConnection("ims", new Handler(this.mImsDcHandlerThread.getLooper()), 4);
        this.mEmcDataConnection = new DataConnection("emergency", new Handler(this.mImsDcHandlerThread.getLooper()), 10);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean earlyConfirmReqNetworkToMd() {
        return !"OP07".equals(SystemProperties.get("persist.vendor.operator.optr", ""));
    }

    public void logd(String str) {
        Rlog.d(this.TAG, str);
    }

    public void loge(String str) {
        Rlog.e(this.TAG, str);
    }

    public void logi(String str) {
        Rlog.i(this.TAG, str);
    }

    public void notifyClearCodesEvent(int i, int i2) {
        logd("notifyClearCodesEvent,cause= " + i + " capability= " + i2);
    }

    /* JADX WARN: Code duplicated, block: B:13:0x003c  */
    public void notifyMdRequest(ImsBearerRequest imsBearerRequest) {
        byte b;
        logd("got request: " + imsBearerRequest);
        String capability = imsBearerRequest.getCapability();
        int iHashCode = capability.hashCode();
        if (iHashCode != 104399) {
            if (iHashCode == 1629013393 && capability.equals("emergency")) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (capability.equals("ims")) {
            b = 0;
        } else {
            b = -1;
        }
        if (b == 0) {
            Handler handler = this.mImsDataConnection.getHandler();
            this.mImsDataConnection.putRequest(imsBearerRequest);
            handler.sendMessage(handler.obtainMessage(imsBearerRequest.getRequest()));
        } else if (b == 1) {
            Handler handler2 = this.mEmcDataConnection.getHandler();
            this.mEmcDataConnection.putRequest(imsBearerRequest);
            handler2.sendMessage(handler2.obtainMessage(imsBearerRequest.getRequest()));
        } else {
            loge("not support capability: " + imsBearerRequest.getCapability());
        }
    }

    public void notifyMdRestart() {
        logd("notifyMdRestart");
        Handler handler = this.mImsDataConnection.getHandler();
        handler.sendMessage(handler.obtainMessage(5));
        Handler handler2 = this.mEmcDataConnection.getHandler();
        handler2.sendMessage(handler2.obtainMessage(5));
    }

    public void onSubscriptionsChanged() {
        int subIdUsingPhoneId = SubscriptionManagerHelper.getSubIdUsingPhoneId(this.mPhoneId);
        if (this.mSubId == subIdUsingPhoneId) {
            return;
        }
        logd("onSubscriptionsChanged: subId: " + this.mSubId + ", newSubId: " + subIdUsingPhoneId);
        this.mSubId = subIdUsingPhoneId;
        this.mImsDataConnection.onSubscriptionsChanged();
        this.mEmcDataConnection.onSubscriptionsChanged();
    }
}
