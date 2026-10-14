package com.mediatek.ims.internal;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkInfo;
import android.net.NetworkRequest;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.PhoneStateListener;
import android.telephony.PreciseDataConnectionState;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.data.ApnSetting;
import android.util.SparseArray;
import androidx.core.app.NotificationManagerCompat;
import androidx.core.view.InputDeviceCompat;
import com.android.internal.util.State;
import com.android.internal.util.StateMachine;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.ImsEventDispatcher;
import com.mediatek.ims.VaConstants;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import java.util.HashMap;
import vendor.mediatek.hardware.netdagent.V1_0.INetdagent;

/* JADX INFO: loaded from: classes.dex */
public class DataDispatcher implements ImsEventDispatcher.VaEventDispatcher {
    private static final String FAILCAUSE_LOST_CONNECTION = "LOST_CONNECTION";
    private static final String FAILCAUSE_NONE = "";
    private static final String FAILCAUSE_UNKNOWN = "UNKNOWN";
    static final int MAX_NETWORK_ACTIVE_TIMEOUT_MS = 20000;
    static final int MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT = 800004;
    static final int MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED = 800001;
    static final int MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL = 800003;
    static final int MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED = 800002;
    static final int MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT = 800005;
    private static final String TAG = DataDispatcher.class.getSimpleName();
    private Context mContext;
    private DataDispatcherUtil mDataDispatcherUtil;
    private HandlerThread mDcHandlerThread;
    private DataConnection mEmcConnection;
    private Handler mHandler;
    private DataConnection mImsConnection;
    private boolean mIsEnable;
    private int mPhoneId;
    private int mSubId;
    private TelephonyManager mTelephonyManager;
    private ImsDataTracker mTracker;
    private Object mLock = new Object();
    private final int MSG_ID_IMSA_DISABLE_SERVICE = 700001;
    private final int MSG_ID_NOTIFY_SUBCRIPTION_CHANAGED = 600001;
    private HashMap<String, Integer> mFailCauses = new HashMap<String, Integer>() { // from class: com.mediatek.ims.internal.DataDispatcher.1
        private static final long serialVersionUID = 1;

        {
            put(DataDispatcher.FAILCAUSE_NONE, 0);
            put("OPERATOR_BARRED", 8);
            put("NAS_SIGNALLING", 14);
            put("MBMS_CAPABILITIES_INSUFFICIENT", 24);
            put("LLC_SNDCP", 25);
            put("INSUFFICIENT_RESOURCES", 26);
            put("MISSING_UNKNOWN_APN", 27);
            put("UNKNOWN_PDP_ADDRESS_TYPE", 28);
            put("USER_AUTHENTICATION", 29);
            put("ACTIVATION_REJECT_GGSN", 30);
            put("ACTIVATION_REJECT_UNSPECIFIED", 31);
            put("SERVICE_OPTION_NOT_SUPPORTED", 32);
            put("SERVICE_OPTION_NOT_SUBSCRIBED", 33);
            put("SERVICE_OPTION_OUT_OF_ORDER", 34);
            put("NSAPI_IN_USE", 35);
            put("REGULAR_DEACTIVATION", 36);
            put("QOS_NOT_ACCEPTED", 37);
            put("NETWORK_FAILURE", 38);
            put("UMTS_REACTIVATION_REQ", 39);
            put("FEATURE_NOT_SUPP", 40);
            put("TFT_SEMANTIC_ERROR", 41);
            put("TFT_SYTAX_ERROR", 42);
            put("UNKNOWN_PDP_CONTEXT", 43);
            put("FILTER_SEMANTIC_ERROR", 44);
            put("FILTER_SYTAX_ERROR", 45);
            put("PDP_WITHOUT_ACTIVE_TFT", 46);
            put("MULTICAST_GROUP_MEMBERSHIP_TIMEOUT", 47);
            put("BCM_VIOLATION", 48);
            put("LAST_PDN_DISC_NOT_ALLOWED", 49);
            put("ONLY_IPV4_ALLOWED", 50);
            put("ONLY_IPV6_ALLOWED", 51);
            put("ONLY_SINGLE_BEARER_ALLOWED", 52);
            put("ESM_INFO_NOT_RECEIVED", 53);
            put("PDN_CONN_DOES_NOT_EXIST", 54);
            put("MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED", 55);
            put("COLLISION_WITH_NW_INITIATED_REQUEST", 56);
            put("UNSUPPORTED_QCI_VALUE", 59);
            put("BEARER_HANDLING_NOT_SUPPORT", 60);
            put("MAX_ACTIVE_PDP_CONTEXT_REACHED", 65);
            put("UNSUPPORTED_APN_IN_CURRENT_PLMN", 66);
            put("INVALID_TRANSACTION_ID", 81);
            put("MESSAGE_INCORRECT_SEMANTIC", 95);
            put("INVALID_MANDATORY_INFO", 96);
            put("MESSAGE_TYPE_UNSUPPORTED", 97);
            put("MSG_TYPE_NONCOMPATIBLE_STATE", 98);
            put("UNKNOWN_INFO_ELEMENT", 99);
            put("CONDITIONAL_IE_ERROR", 100);
            put("MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE", 101);
            put("PROTOCOL_ERRORS", 111);
            put("APN_TYPE_CONFLICT", 112);
            put("REGISTRATION_FAIL", -1);
            put("GPRS_REGISTRATION_FAIL", -2);
            put("SIGNAL_LOST", -3);
            put("PREF_RADIO_TECH_CHANGED", -4);
            put("RADIO_POWER_OFF", -5);
            put("TETHERED_CALL_ACTIVE", -6);
            put("PDP_FAIL_ROUTER_ADVERTISEMENT", -7);
            put("PDP_FAIL_FALLBACK_RETRY", Integer.valueOf(NotificationManagerCompat.IMPORTANCE_UNSPECIFIED));
            put("INSUFFICIENT_LOCAL_RESOURCES", 1048574);
            put("ERROR_UNSPECIFIED", 65535);
            put(DataDispatcher.FAILCAUSE_UNKNOWN, 65536);
            put("RADIO_NOT_AVAILABLE", 65537);
            put("UNACCEPTABLE_NETWORK_PARAMETER", 65538);
            put("CONNECTION_TO_DATACONNECTIONAC_BROKEN", 65539);
            put(DataDispatcher.FAILCAUSE_LOST_CONNECTION, Integer.valueOf(InputDeviceCompat.SOURCE_TRACKBALL));
            put("RESET_BY_FRAMEWORK", 65541);
            put("PAM_ATT_PDN_ACCESS_REJECT_IMS_PDN_BLOCK_TEMP", 5122);
            put("TCM_ESM_TIMER_TIMEOUT", 86058);
            put("MTK_TCM_ESM_TIMER_TIMEOUT", 3910);
            put("DUE_TO_REACH_RETRY_COUNTER", 3599);
            put("OEM_DCFAILCAUSE_12", 4108);
        }
    };
    private final PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.ims.internal.DataDispatcher.2
        @Override // android.telephony.PhoneStateListener
        public void onPreciseDataConnectionStateChanged(PreciseDataConnectionState preciseDataConnectionState) {
            String apnTypesStringFromBitmask = ApnSetting.getApnTypesStringFromBitmask(preciseDataConnectionState.getDataConnectionApnTypeBitMask());
            int dataConnectionFailCause = preciseDataConnectionState.getDataConnectionFailCause();
            DataDispatcher.this.logd("APN: " + apnTypesStringFromBitmask + " failCause: " + dataConnectionFailCause);
            if (dataConnectionFailCause > 0) {
                byte b = -1;
                int iHashCode = apnTypesStringFromBitmask.hashCode();
                if (iHashCode != 104399) {
                    if (iHashCode == 1629013393 && apnTypesStringFromBitmask.equals("emergency")) {
                        b = 1;
                    }
                } else if (apnTypesStringFromBitmask.equals("ims")) {
                    b = 0;
                }
                if (b == 0) {
                    Handler handler = DataDispatcher.this.mImsConnection.getHandler();
                    handler.sendMessage(handler.obtainMessage(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL, Integer.valueOf(dataConnectionFailCause)));
                    DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                } else {
                    if (b == 1) {
                        Handler handler2 = DataDispatcher.this.mEmcConnection.getHandler();
                        handler2.sendMessage(handler2.obtainMessage(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL, Integer.valueOf(dataConnectionFailCause)));
                        return;
                    }
                    DataDispatcher.this.loge("UnKnown APN: " + apnTypesStringFromBitmask);
                }
            }
        }
    };
    private Thread mHandlerThread = new Thread() { // from class: com.mediatek.ims.internal.DataDispatcher.3
        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Looper.prepare();
            DataDispatcher.this.mHandler = new Handler() { // from class: com.mediatek.ims.internal.DataDispatcher.3.1
                @Override // android.os.Handler
                public synchronized void handleMessage(Message message) {
                    DataDispatcher.this.logd("receives request [" + message.what + "]");
                    if (message.what != DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT) {
                        DataDispatcher.this.logd("receives unhandled message [" + message.what + "]");
                    } else {
                        DataDispatcher.this.mImsConnection.onImsRequestTimeout();
                    }
                }
            };
            Looper.loop();
        }
    };

    public class DataConnection extends StateMachine {
        private String TAG;
        private ActivatingState mActivatingState;
        private ActiveState mActiveState;
        private int mCapabiliy;
        private ConnectivityManager mConnectivityManager;
        private DefaultState mDefaultState;
        private DisconnectingState mDisconnectingState;
        private String mFwInterface;
        private SparseArray<DataDispatcherUtil.ImsBearerRequest> mImsNetworkRequests;
        private InactiveState mInactiveState;
        private String mInterface;
        private long mNetworkHandle;
        private int mNetworkId;
        private NwAvailableCallback mNwAvailableCallback;
        private NwLostCallback mNwLostCallback;

        private class ActivatingState extends State {
            private ActivatingState() {
            }

            public void enter() {
                DataConnection.this.logd("ActivatingState: enter");
            }

            public void exit() {
                DataConnection.this.logd("ActivatingState: exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("ActivatingState msg: " + DataConnection.this.msgToString(message.what));
                switch (message.what) {
                    case 600001:
                        DataConnection.this.releaseNetwork();
                        DataConnection dataConnection = DataConnection.this;
                        dataConnection.rejectNetworkRequest(((Integer) DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_UNKNOWN)).intValue());
                        DataConnection dataConnection2 = DataConnection.this;
                        dataConnection2.transitionTo(dataConnection2.mInactiveState);
                        return true;
                    case 700001:
                        DataConnection.this.releaseNetwork();
                        DataConnection dataConnection3 = DataConnection.this;
                        dataConnection3.transitionTo(dataConnection3.mInactiveState);
                        DataConnection.this.clearNwInfo(true);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED /* 800001 */:
                        DataConnection.this.deferMessage(message);
                        DataConnection dataConnection4 = DataConnection.this;
                        dataConnection4.transitionTo(dataConnection4.mActiveState);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL /* 800003 */:
                        DataConnection.this.releaseNetwork();
                        DataConnection.this.rejectNetworkRequest(((Integer) message.obj).intValue());
                        DataConnection dataConnection5 = DataConnection.this;
                        dataConnection5.transitionTo(dataConnection5.mInactiveState);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT /* 800004 */:
                        DataConnection.this.deferMessage(message);
                        DataConnection dataConnection6 = DataConnection.this;
                        dataConnection6.transitionTo(dataConnection6.mInactiveState);
                        return true;
                    default:
                        DataConnection.this.loge("ActivatingState not handled request: " + DataConnection.this.msgToString(message.what));
                        return false;
                }
            }
        }

        private class ActiveState extends State {
            private ActiveState() {
            }

            public void enter() {
                DataConnection.this.logd("ActiveState: enter");
                DataConnection.this.setFirewallInterfaceChain(true);
                DataConnection dataConnection = DataConnection.this;
                dataConnection.mFwInterface = dataConnection.mInterface;
            }

            public void exit() {
                DataConnection.this.logd("ActiveState: exit");
                DataConnection.this.setFirewallInterfaceChain(false);
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("ActiveState msg: " + DataConnection.this.msgToString(message.what));
                switch (message.what) {
                    case 700001:
                        DataConnection.this.releaseNetwork();
                        DataConnection dataConnection = DataConnection.this;
                        dataConnection.transitionTo(dataConnection.mInactiveState);
                        DataConnection.this.clearNwInfo(true);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED /* 800001 */:
                        DataConnection.this.onRequestNetworkCompleted();
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED /* 800002 */:
                        DataConnection.this.notifyNetworkLosted();
                        DataConnection dataConnection2 = DataConnection.this;
                        dataConnection2.transitionTo(dataConnection2.mInactiveState);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT /* 800004 */:
                        DataConnection.this.deferMessage(message);
                        DataConnection dataConnection3 = DataConnection.this;
                        dataConnection3.transitionTo(dataConnection3.mInactiveState);
                        return true;
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
                        DataConnection.this.deferMessage(message);
                        DataConnection.this.releaseNetwork();
                        DataConnection dataConnection4 = DataConnection.this;
                        dataConnection4.transitionTo(dataConnection4.mDisconnectingState);
                        return true;
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ /* 900011 */:
                        DataConnection.this.releaseNetwork();
                        DataConnection dataConnection5 = DataConnection.this;
                        dataConnection5.transitionTo(dataConnection5.mDisconnectingState);
                        return true;
                    default:
                        DataConnection.this.loge("ActiveState not handled request: " + DataConnection.this.msgToString(message.what));
                        return false;
                }
            }
        }

        private class DefaultState extends State {
            private DefaultState() {
            }

            public void enter() {
                DataConnection.this.logd("DefaultState: enter");
            }

            public void exit() {
                DataConnection.this.logd("DefaultState: exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("DefaultState msg: " + DataConnection.this.msgToString(message.what));
                int i = message.what;
                if (i == 900008) {
                    DataConnection dataConnection = DataConnection.this;
                    dataConnection.rejectNetworkRequest(((Integer) DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_NONE)).intValue());
                } else if (i != 900011) {
                    DataConnection.this.loge("DefaultState not handled request: " + DataConnection.this.msgToString(message.what));
                } else {
                    DataConnection dataConnection2 = DataConnection.this;
                    dataConnection2.rejectNetworkReleased(((Integer) DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_NONE)).intValue());
                }
                return true;
            }
        }

        private class DisconnectingState extends State {
            private DisconnectingState() {
            }

            public void enter() {
                DataConnection.this.logd("DisconnectingState: enter");
            }

            public void exit() {
                DataConnection.this.logd("DisconnectingState: exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("DisconnectingState msg: " + DataConnection.this.msgToString(message.what));
                switch (message.what) {
                    case 600001:
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED /* 800002 */:
                        DataConnection.this.onReleaseNetworkCompleted();
                        DataConnection dataConnection = DataConnection.this;
                        dataConnection.transitionTo(dataConnection.mInactiveState);
                        return true;
                    case 700001:
                        DataConnection dataConnection2 = DataConnection.this;
                        dataConnection2.transitionTo(dataConnection2.mInactiveState);
                        DataConnection.this.clearNwInfo(true);
                        return true;
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
                        DataConnection.this.deferMessage(message);
                        return true;
                    default:
                        DataConnection.this.loge("DisconnectingState not handled request: " + DataConnection.this.msgToString(message.what));
                        return false;
                }
            }
        }

        private class InactiveState extends State {
            private InactiveState() {
            }

            public void enter() {
                DataConnection.this.logd("InactiveState: enter");
            }

            public void exit() {
                DataConnection.this.logd("InactiveState: exit");
            }

            public boolean processMessage(Message message) {
                DataConnection.this.logd("InactiveState msg: " + DataConnection.this.msgToString(message.what));
                switch (message.what) {
                    case 600001:
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
                        if (!DataConnection.this.requestNetwork()) {
                            return true;
                        }
                        DataConnection dataConnection = DataConnection.this;
                        dataConnection.transitionTo(dataConnection.mActivatingState);
                        return true;
                    case 700001:
                        DataConnection.this.clearNwInfo(true);
                        return true;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED /* 800002 */:
                        break;
                    case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT /* 800004 */:
                        DataConnection dataConnection2 = DataConnection.this;
                        dataConnection2.rejectNetworkRequest(((Integer) DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_UNKNOWN)).intValue());
                        DataConnection.this.releaseNetwork();
                        DataConnection.this.onAbortNetworkCompleted();
                        return true;
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ /* 900011 */:
                        DataConnection.this.releaseNetwork();
                        break;
                    default:
                        DataConnection.this.loge("InactiveState not handled request: " + DataConnection.this.msgToString(message.what));
                        return false;
                }
                DataConnection.this.onReleaseNetworkCompleted();
                return true;
            }
        }

        private class NwAvailableCallback extends ConnectivityManager.NetworkCallback {
            private DataConnection mConn;

            public NwAvailableCallback(DataConnection dataConnection) {
                this.mConn = dataConnection;
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onAvailable(Network network) {
                if (network == null) {
                    DataConnection.this.loge("onAvailable: network is null");
                    return;
                }
                DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                LinkProperties linkProperties = DataConnection.this.mConnectivityManager.getLinkProperties(network);
                if (linkProperties == null) {
                    DataConnection.this.loge("LinkProperties is null");
                    return;
                }
                NetworkInfo networkInfo = DataConnection.this.mConnectivityManager.getNetworkInfo(network);
                DataConnection.this.logd("onAvailable: networInfo: " + networkInfo);
                DataConnection.this.mNetworkId = network.netId;
                DataConnection.this.mNetworkHandle = network.getNetworkHandle();
                DataConnection.this.mInterface = linkProperties.getInterfaceName();
                DataConnection dataConnection = this.mConn;
                dataConnection.sendMessage(dataConnection.obtainMessage(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED));
            }
        }

        private class NwLostCallback extends ConnectivityManager.NetworkCallback {
            private DataConnection mConn;

            public NwLostCallback(DataConnection dataConnection) {
                this.mConn = dataConnection;
            }

            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onLost(Network network) {
                DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                NetworkInfo networkInfo = DataConnection.this.mConnectivityManager.getNetworkInfo(network);
                DataConnection.this.logd("onLost: networInfo: " + networkInfo);
                DataConnection dataConnection = this.mConn;
                dataConnection.sendMessage(dataConnection.obtainMessage(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED));
            }
        }

        public DataConnection(String str, Handler handler, int i) {
            super(str, handler);
            this.TAG = "DC-";
            this.mImsNetworkRequests = new SparseArray<>();
            this.mNetworkHandle = 0L;
            this.mInterface = DataDispatcher.FAILCAUSE_NONE;
            this.mFwInterface = DataDispatcher.FAILCAUSE_NONE;
            this.mDefaultState = new DefaultState();
            this.mInactiveState = new InactiveState();
            this.mActivatingState = new ActivatingState();
            this.mActiveState = new ActiveState();
            this.mDisconnectingState = new DisconnectingState();
            this.mCapabiliy = i;
            this.mConnectivityManager = (ConnectivityManager) DataDispatcher.this.mContext.getSystemService("connectivity");
            this.mNwAvailableCallback = new NwAvailableCallback(this);
            this.mNwLostCallback = new NwLostCallback(this);
            addState(this.mDefaultState);
            addState(this.mInactiveState, this.mDefaultState);
            addState(this.mActivatingState, this.mDefaultState);
            addState(this.mActiveState, this.mDefaultState);
            addState(this.mDisconnectingState, this.mDefaultState);
            setInitialState(this.mInactiveState);
            start();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void clearNwInfo(boolean z) {
            logd("clearNwInfo");
            if (z) {
                this.mImsNetworkRequests.clear();
            }
            this.mNetworkId = 0;
            this.mNetworkHandle = 0L;
            this.mInterface = DataDispatcher.FAILCAUSE_NONE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void disable() {
            sendMessage(obtainMessage(700001));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public String msgToString(int i) {
            switch (i) {
                case 700001:
                    return "MSG_ID_IMSA_DISABLE_SERVICE";
                case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED /* 800001 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_COMPLETED";
                case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED /* 800002 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_COMPLETED";
                case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL /* 800003 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL";
                case DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT /* 800004 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT";
                case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ";
                case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ /* 900011 */:
                    return "MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ";
                case VaConstants.MSG_ID_REQUEST_PCSCF_DISCOVERY /* 900403 */:
                    return "MSG_ID_REQUEST_PCSCF_DISCOVERY";
                default:
                    return DataDispatcher.FAILCAUSE_NONE + i;
            }
        }

        private void notifyNetworkHandle() {
            log("notifyNetworkHandle() netHandle: " + this.mNetworkHandle);
            StringBuilder sb = new StringBuilder();
            sb.append(DataDispatcher.this.mPhoneId + ",");
            sb.append(this.mNetworkHandle);
            DataDispatcher dataDispatcher = DataDispatcher.this;
            dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_NETWORK_HANDLE_NOTIFY, sb.toString()));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void notifyNetworkLosted() {
            logd("notifyNetworkLosted");
            try {
                this.mConnectivityManager.unregisterNetworkCallback(this.mNwAvailableCallback);
            } catch (IllegalArgumentException e) {
                loge("cb already has been released!!");
            }
            StringBuilder sb = new StringBuilder();
            sb.append(DataDispatcher.this.mPhoneId + ",");
            sb.append(DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_LOST_CONNECTION) + ",");
            sb.append(this.mInterface + DataDispatcher.FAILCAUSE_NONE);
            DataDispatcher dataDispatcher = DataDispatcher.this;
            dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_IND, sb.toString()));
            clearNwInfo(false);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void onAbortNetworkCompleted() {
            logd("onAbortNetworkCompleted");
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ABORT);
            for (int i = 0; i < this.mImsNetworkRequests.size(); i++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i));
            }
            if (imsBearerRequest != null) {
                StringBuilder sb = new StringBuilder();
                sb.append(imsBearerRequest.getTransId() + ",");
                sb.append(DataDispatcher.this.mPhoneId + ",");
                sb.append(DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_UNKNOWN) + ",");
                sb.append(this.mInterface + DataDispatcher.FAILCAUSE_NONE);
                DataDispatcher dataDispatcher = DataDispatcher.this;
                dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP, sb.toString()));
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequestID());
            }
            clearNwInfo(false);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void onReleaseNetworkCompleted() {
            logd("onReleaseNetworkCompleted");
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ);
            for (int i = 0; i < this.mImsNetworkRequests.size(); i++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i));
            }
            if (imsBearerRequest != null) {
                StringBuilder sb = new StringBuilder();
                sb.append(imsBearerRequest.getTransId() + ",");
                sb.append(DataDispatcher.this.mPhoneId + ",");
                sb.append(DataDispatcher.this.mFailCauses.get(DataDispatcher.FAILCAUSE_UNKNOWN) + ",");
                sb.append(this.mInterface + DataDispatcher.FAILCAUSE_NONE);
                DataDispatcher dataDispatcher = DataDispatcher.this;
                dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP, sb.toString()));
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequestID());
            }
            clearNwInfo(false);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void onRequestNetworkCompleted() {
            logd("onRequestNetworkComplete");
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ);
            for (int i = 0; i < this.mImsNetworkRequests.size(); i++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i));
            }
            if (imsBearerRequest != null) {
                notifyNetworkHandle();
                StringBuilder sb = new StringBuilder();
                sb.append(imsBearerRequest.getTransId() + ",");
                sb.append(DataDispatcher.this.mPhoneId + ",");
                sb.append(this.mNetworkId + ",");
                sb.append(this.mInterface + DataDispatcher.FAILCAUSE_NONE);
                logd("netId:" + this.mNetworkId + " IfaceName:" + this.mInterface);
                DataDispatcher dataDispatcher = DataDispatcher.this;
                dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_ACK_RESP, sb.toString()));
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequestID());
            }
        }

        private void refreshNwLostCallBack(NetworkRequest networkRequest) {
            logd("refreshNwLostCallBack nwRequest: " + networkRequest);
            try {
                this.mConnectivityManager.unregisterNetworkCallback(this.mNwLostCallback);
            } catch (IllegalArgumentException e) {
                loge("cb already has been released!!");
            }
            this.mConnectivityManager.registerNetworkCallback(networkRequest, this.mNwLostCallback);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void rejectNetworkReleased(int i) {
            logd("rejectNetworkReleased cause: " + i);
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ);
            for (int i2 = 0; i2 < this.mImsNetworkRequests.size(); i2++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i2));
            }
            if (imsBearerRequest != null) {
                StringBuilder sb = new StringBuilder();
                sb.append(imsBearerRequest.getTransId() + ",");
                sb.append(DataDispatcher.this.mPhoneId + ",");
                sb.append(i + DataDispatcher.FAILCAUSE_NONE);
                DataDispatcher dataDispatcher = DataDispatcher.this;
                dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_REJ_RESP, sb.toString()));
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequestID());
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void rejectNetworkRequest(int i) {
            logd("rejectNetworkRequest cause: " + i);
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ);
            for (int i2 = 0; i2 < this.mImsNetworkRequests.size(); i2++) {
                logd("found Req: " + this.mImsNetworkRequests.valueAt(i2));
            }
            if (imsBearerRequest != null) {
                DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                StringBuilder sb = new StringBuilder();
                sb.append(imsBearerRequest.getTransId() + ",");
                sb.append(DataDispatcher.this.mPhoneId + ",");
                sb.append(i + DataDispatcher.FAILCAUSE_NONE);
                DataDispatcher dataDispatcher = DataDispatcher.this;
                dataDispatcher.sendVaEvent(dataDispatcher.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_REJ_RESP, sb.toString()));
                clearNwInfo(false);
                this.mImsNetworkRequests.remove(imsBearerRequest.getRequestID());
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void releaseNetwork() {
            logd("releaseNetwork");
            this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ);
            DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
            try {
                this.mConnectivityManager.unregisterNetworkCallback(this.mNwAvailableCallback);
            } catch (IllegalArgumentException e) {
                loge("cb already has been released!!");
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean requestNetwork() {
            logd("requestNetwork");
            if (!SubscriptionManager.isValidSubscriptionId(DataDispatcher.this.mSubId) && this.mCapabiliy != 10) {
                loge("inValid subId: " + DataDispatcher.this.mSubId);
                return false;
            }
            if (this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ) == null) {
                loge("ImsBearerRequest is NULL");
                return false;
            }
            NetworkRequest.Builder builder = new NetworkRequest.Builder();
            builder.addCapability(this.mCapabiliy);
            builder.addTransportType(0);
            builder.setNetworkSpecifier(String.valueOf(DataDispatcher.this.mSubId));
            NetworkRequest networkRequestBuild = builder.build();
            refreshNwLostCallBack(networkRequestBuild);
            if (this.mCapabiliy == 4) {
                DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                DataDispatcher.this.mHandler.sendMessageDelayed(DataDispatcher.this.mHandler.obtainMessage(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT), 20000L);
            }
            logd("start requestNetwork for " + getName());
            this.mConnectivityManager.requestNetwork(networkRequestBuild, this.mNwAvailableCallback);
            return true;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void setFirewallInterfaceChain(final boolean z) {
            logd("setFirewallInterfaceChain:" + z);
            new Thread("setFirewallInterfaceChain") { // from class: com.mediatek.ims.internal.DataDispatcher.DataConnection.1
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    try {
                        INetdagent service = INetdagent.getService();
                        if (service == null) {
                            DataConnection.this.loge("agnet is null");
                            return;
                        }
                        String str = String.format("netdagent firewall set_interface_for_chain_rule %s dozable %s", DataConnection.this.mFwInterface, z ? "allow" : "deny");
                        DataConnection.this.logd("cmd:" + str);
                        service.dispatchNetdagentCmd(str);
                    } catch (Exception e) {
                        DataConnection.this.loge("setFirewallInterfaceChain:" + e);
                    }
                }
            }.start();
        }

        public void logd(String str) {
            Rlog.d(this.TAG + getName(), "[" + DataDispatcher.this.mPhoneId + "] " + str);
        }

        public void loge(String str) {
            Rlog.e(this.TAG + getName(), "[" + DataDispatcher.this.mPhoneId + "] " + str);
        }

        public void logi(String str) {
            Rlog.i(this.TAG + getName(), "[" + DataDispatcher.this.mPhoneId + "] " + str);
        }

        public void onImsRequestTimeout() {
            logd("onImsRequestTimeout");
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ);
            if (imsBearerRequest != null) {
                logd("get request type " + imsBearerRequest.getCapability());
                if (imsBearerRequest.getCapability() == "ims") {
                    Handler handler = DataDispatcher.this.mImsConnection.getHandler();
                    handler.sendMessage(handler.obtainMessage(DataDispatcher.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_FAIL, 65536));
                    DataDispatcher.this.mHandler.removeMessages(DataDispatcher.MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
                }
            }
        }

        public void onSubscriptionsChanged() {
            logd("onSubscriptionsChanged");
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ);
            DataDispatcherUtil.ImsBearerRequest imsBearerRequest2 = this.mImsNetworkRequests.get(VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ);
            if (imsBearerRequest == null && imsBearerRequest2 == null) {
                return;
            }
            sendMessage(obtainMessage(600001));
        }

        public void putRequest(DataDispatcherUtil.ImsBearerRequest imsBearerRequest) {
            if (this.mImsNetworkRequests.get(imsBearerRequest.getRequestID()) == null) {
                this.mImsNetworkRequests.put(imsBearerRequest.getRequestID(), imsBearerRequest);
                return;
            }
            loge("request already exist: " + imsBearerRequest);
        }
    }

    public DataDispatcher(Context context, ImsDataTracker imsDataTracker, int i) {
        logd("constructor");
        this.mContext = context;
        this.mPhoneId = i;
        this.mSubId = SubscriptionManagerHelper.getSubIdUsingPhoneId(i);
        this.mTracker = imsDataTracker;
        this.mHandlerThread.start();
        HandlerThread handlerThread = new HandlerThread("DcHandlerThread");
        this.mDcHandlerThread = handlerThread;
        handlerThread.start();
        this.mImsConnection = new DataConnection("ims", new Handler(this.mDcHandlerThread.getLooper()), 4);
        this.mEmcConnection = new DataConnection("emergency", new Handler(this.mDcHandlerThread.getLooper()), 10);
        this.mDataDispatcherUtil = new DataDispatcherUtil();
    }

    private TelephonyManager getTelephonyManager(Context context, int i) {
        return ((TelephonyManager) context.getSystemService(TelephonyManager.class)).createForSubscriptionId(i);
    }

    private void registerPhoneStateListener(Context context, int i) {
        if (SubscriptionManager.isValidSubscriptionId(i)) {
            this.mTelephonyManager = getTelephonyManager(context, i);
        }
        logd("registerPhoneStateListener ");
        TelephonyManager telephonyManager = this.mTelephonyManager;
        if (telephonyManager != null) {
            telephonyManager.listen(this.mPhoneStateListener, 4096);
        }
    }

    private void unRegisterPhoneStateListener(Context context, int i) {
        logd("unRegisterPhoneStateListener ");
        if (SubscriptionManager.isValidSubscriptionId(i)) {
            this.mTelephonyManager = getTelephonyManager(context, i);
        }
        TelephonyManager telephonyManager = this.mTelephonyManager;
        if (telephonyManager != null) {
            telephonyManager.listen(this.mPhoneStateListener, 0);
        }
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void disableRequest(int i) {
        logi("receive disableRequest");
        synchronized (this.mLock) {
            this.mIsEnable = false;
            this.mHandler.removeMessages(MSG_ON_NOTIFY_ACTIVE_DATA_TIMEOUT);
            unRegisterPhoneStateListener(this.mContext, this.mSubId);
            this.mImsConnection.disable();
            this.mEmcConnection.disable();
        }
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void enableRequest(int i) {
        logi("receive enableRequest");
        synchronized (this.mLock) {
            this.mIsEnable = true;
            registerPhoneStateListener(this.mContext, this.mSubId);
        }
    }

    public void logd(String str) {
        Rlog.d(TAG, "[" + this.mPhoneId + "]" + str);
    }

    public void loge(String str) {
        Rlog.e(TAG, "[" + this.mPhoneId + "]" + str);
    }

    public void logi(String str) {
        Rlog.i(TAG, "[" + this.mPhoneId + "]" + str);
    }

    public void onSubscriptionsChanged() {
        int subIdUsingPhoneId = SubscriptionManagerHelper.getSubIdUsingPhoneId(this.mPhoneId);
        logd("onSubscriptionsChanged: subId: " + this.mSubId + ", newSubId: " + subIdUsingPhoneId);
        int i = this.mSubId;
        if (i == subIdUsingPhoneId) {
            return;
        }
        if (subIdUsingPhoneId < 0) {
            unRegisterPhoneStateListener(this.mContext, i);
        }
        if (subIdUsingPhoneId > 0) {
            registerPhoneStateListener(this.mContext, subIdUsingPhoneId);
        }
        this.mSubId = subIdUsingPhoneId;
        this.mImsConnection.onSubscriptionsChanged();
        this.mEmcConnection.onSubscriptionsChanged();
    }

    public void sendVaEvent(ImsAdapter.VaEvent vaEvent) {
        if (!this.mIsEnable) {
            loge("ims service not be enabled");
            return;
        }
        logi("send event [" + vaEvent.getRequestID() + ", " + vaEvent.getDataLen() + "]");
        this.mTracker.sendVaEvent(vaEvent);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void vaEventCallback(ImsAdapter.VaEvent vaEvent) {
        if (!this.mIsEnable) {
            loge("ims service not be enabled");
            return;
        }
        DataDispatcherUtil.ImsBearerRequest imsBearerRequestDeCodeEvent = this.mDataDispatcherUtil.deCodeEvent(vaEvent);
        logi("got request: " + imsBearerRequestDeCodeEvent);
        if (imsBearerRequestDeCodeEvent.getRequestID() == 900403) {
            StringBuilder sb = new StringBuilder();
            sb.append(imsBearerRequestDeCodeEvent.getTransId() + ",");
            sb.append(this.mPhoneId + ",");
            sb.append(this.mFailCauses.get(FAILCAUSE_UNKNOWN) + FAILCAUSE_NONE);
            sendVaEvent(this.mDataDispatcherUtil.enCodeEvent(VaConstants.MSG_ID_REJECT_PCSCF_DISCOVERY, sb.toString()));
            return;
        }
        String capability = imsBearerRequestDeCodeEvent.getCapability();
        byte b = -1;
        int iHashCode = capability.hashCode();
        if (iHashCode != 104399) {
            if (iHashCode == 1629013393 && capability.equals("emergency")) {
                b = 1;
            }
        } else if (capability.equals("ims")) {
            b = 0;
        }
        if (b == 0) {
            Handler handler = this.mImsConnection.getHandler();
            this.mImsConnection.putRequest(imsBearerRequestDeCodeEvent);
            handler.sendMessage(handler.obtainMessage(imsBearerRequestDeCodeEvent.getRequestID()));
        } else if (b == 1) {
            Handler handler2 = this.mEmcConnection.getHandler();
            this.mEmcConnection.putRequest(imsBearerRequestDeCodeEvent);
            handler2.sendMessage(handler2.obtainMessage(imsBearerRequestDeCodeEvent.getRequestID()));
        } else {
            loge("not support capbility: " + imsBearerRequestDeCodeEvent.getCapability());
        }
    }
}
