package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.TrafficStats;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.provider.Settings;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.android.internal.telephony.CommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class FiveGDataOptimize {
    private static final int CALL_STATE_IDLE = 0;
    private static final int CALL_STATE_OFFHOOK = 2;
    private static final int CALL_STATE_RINGING = 1;
    private static final int EVENT_DATA_STALL_CHECK_POSSIBLE_POLICY = 50;
    private static final int EVENT_DATA_STALL_FIVEG_POLICY_EXPIRE = 51;
    private static final int EVENT_DATA_STALL_LTE_POLICY_EXPIRE = 52;
    private static final int EVENT_DETACH_RESPONSE = 53;
    private static final String SMS_RECEIVED_ACTION = "android.provider.Telephony.SMS_RECEIVED";
    private static final String TAG = "FiveGDataOptimize";
    private static Context mContext;
    private ConnectivityManager mConnectivityManager;
    private DataStallPolicyTracker mDataStallPolicy;
    private DdsSubServiceState mDdsServiceState;
    private int mFivegUserEnable;
    private String mPackageName;
    private TelephonyManager mTelephonyManager;
    private Handler mWorkerThreadHandler;
    private static FiveGDataOptimize sInstance = null;
    private static CommandsInterface[] sCi = null;
    private HandlerThread mWorkerThread = new HandlerThread("FiveGDataOptimizeBgThread");
    private int mNonDdsSubCallState = 0;
    private int mDdsSubCallState = 0;
    private boolean mIsScreenOff = false;
    private boolean mIsWifiConnected = false;
    private boolean mIsMobileConnected = true;
    private MobileDataPoller mMobileDataPoller = new MobileDataPoller();
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.FiveGDataOptimize.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            ServiceState serviceStateNewFromBundle;
            String action = intent.getAction();
            if ("android.intent.action.SCREEN_ON".equals(action)) {
                FiveGDataOptimize.this.mIsScreenOff = false;
                FiveGDataOptimize.this.mMobileDataPoller.startPollMobileData();
                return;
            }
            if ("android.intent.action.SCREEN_OFF".equals(action)) {
                FiveGDataOptimize.this.mIsScreenOff = true;
                FiveGDataOptimize.this.mMobileDataPoller.stopPollMobileData();
                return;
            }
            if ("android.intent.action.PHONE_STATE".equals(action)) {
                Log.d(FiveGDataOptimize.TAG, "TelephonyManager.ACTION_PHONE_STATE_CHANGED");
                return;
            }
            if ("android.intent.action.NEW_OUTGOING_CALL".equals(action)) {
                Log.d(FiveGDataOptimize.TAG, "Intent.ACTION_NEW_OUTGOING_CALL");
                return;
            }
            if ("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED".equals(action)) {
                Log.d(FiveGDataOptimize.TAG, "TelephonyIntents.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED");
                FiveGDataOptimize.this.currentDdsSub();
                FiveGDataOptimize.this.mDataStallPolicy.deactiveAllPolicy();
                return;
            }
            if (action.equals("android.net.conn.CONNECTIVITY_CHANGE")) {
                NetworkInfo networkInfo = (NetworkInfo) intent.getParcelableExtra("networkInfo");
                if (networkInfo != null) {
                    if (networkInfo.getType() == 0) {
                        if (networkInfo.getState() == NetworkInfo.State.DISCONNECTED) {
                            FiveGDataOptimize.this.mIsMobileConnected = false;
                            FiveGDataOptimize.this.mMobileDataPoller.stopPollMobileData();
                        } else {
                            FiveGDataOptimize.this.mIsMobileConnected = true;
                            FiveGDataOptimize.this.mMobileDataPoller.startPollMobileData();
                        }
                    } else if (networkInfo.getType() == 1) {
                        if (networkInfo.getState() == NetworkInfo.State.CONNECTED) {
                            FiveGDataOptimize.this.mIsWifiConnected = true;
                        } else {
                            FiveGDataOptimize.this.mIsWifiConnected = false;
                        }
                    }
                }
                Log.d(FiveGDataOptimize.TAG, "CONNECTIVITY_ACTION, mobileConnected = " + FiveGDataOptimize.this.mIsMobileConnected);
                return;
            }
            if ("android.intent.action.SERVICE_STATE".equals(intent.getAction())) {
                SubscriptionManager.getDefaultDataSubscriptionId();
                if (FiveGDataOptimize.this.currentDdsSub() != intent.getIntExtra("subscription", -1) || (serviceStateNewFromBundle = ServiceState.newFromBundle(intent.getExtras())) == null) {
                    return;
                }
                FiveGDataOptimize.this.updateDdsServiceState(serviceStateNewFromBundle);
                return;
            }
            if ("android.intent.action.AIRPLANE_MODE".equals(intent.getAction())) {
                if (Settings.Global.getInt(FiveGDataOptimize.mContext.getContentResolver(), "airplane_mode_on", 0) == 1) {
                    FiveGDataOptimize.this.mDataStallPolicy.deactiveAllPolicy();
                }
            } else if (!"android.intent.action.SIM_STATE_CHANGED".equals(intent.getAction())) {
                Log.d(FiveGDataOptimize.TAG, "UNKNOWN action");
            } else if (intent.getStringExtra("ss").equals("READY")) {
                FiveGDataOptimize.this.mDataStallPolicy.deactiveAllPolicy();
            }
        }
    };
    PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.internal.telephony.FiveGDataOptimize.2
        @Override // android.telephony.PhoneStateListener
        public void onCallStateChanged(int i, String str) {
            super.onCallStateChanged(i, str);
            if (i == 0) {
                Log.d(FiveGDataOptimize.TAG, "TelephonyManager.CALL_STATE_IDLE");
            } else if (i == 1) {
                Log.d(FiveGDataOptimize.TAG, "TelephonyManager.CALL_STATE_RINGING");
            } else if (i != 2) {
                Log.d(FiveGDataOptimize.TAG, "Unknown TelephonyManager STATE");
            } else {
                Log.d(FiveGDataOptimize.TAG, "TelephonyManager.CALL_STATE_OFFHOOK");
            }
            Log.d(FiveGDataOptimize.TAG, "Slot0 call state: " + FiveGDataOptimize.this.mTelephonyManager.getCallStateForSlot(0));
            Log.d(FiveGDataOptimize.TAG, "Slot1 call state: " + FiveGDataOptimize.this.mTelephonyManager.getCallStateForSlot(1));
            FiveGDataOptimize.this.checkNonDDSCallState(i);
            FiveGDataOptimize.this.checkDDSCallState(i);
        }

        @Override // android.telephony.PhoneStateListener
        public void onDataActivity(int i) {
        }
    };

    private class DataStallPolicyTracker {
        private static final int FIVEG_POLICY_BLOCK_ALL_T1 = 60000;
        private static final int FIVEG_POLICY_BLOCK_EXPIRE_T2 = 900000;
        private static final int LTE_POLICY_BLOCK_ALL_T1 = 60000;
        private static final int LTE_POLICY_BLOCK_EXPIRE_T2 = 900000;
        private boolean fiveGPolicyActive;
        private long fiveGPolicyBlockAllTime;
        private int fiveGPolicyChannelNumber;
        private long fiveGPolicyExpireTime;
        private long fiveGPolicyStartTime;
        private boolean ltePolicyActive;
        private long ltePolicyBlockAllTime;
        private long ltePolicyBlockExpireTime;
        private int ltePolicyChannelNumber;
        private long ltePolicyStartTime;

        private DataStallPolicyTracker() {
        }

        private void sendBroadcastToUI(String str) {
            Intent intent = new Intent("miui.intent.action.ACTIVE_RE_REGISTRATION_NETWORK");
            intent.putExtra("TECHNOLOGY", str);
            FiveGDataOptimize.mContext.sendBroadcast(intent);
        }

        public void activiateFiveGPolicy(int i) {
            this.fiveGPolicyActive = true;
            this.fiveGPolicyChannelNumber = i;
            long jCurrentTimeMillis = System.currentTimeMillis();
            this.fiveGPolicyStartTime = jCurrentTimeMillis;
            this.fiveGPolicyBlockAllTime = 60000 + jCurrentTimeMillis;
            this.fiveGPolicyExpireTime = jCurrentTimeMillis + 900000;
            FiveGDataOptimize.this.mWorkerThreadHandler.sendMessageDelayed(FiveGDataOptimize.this.mWorkerThreadHandler.obtainMessage(FiveGDataOptimize.EVENT_DATA_STALL_FIVEG_POLICY_EXPIRE, 0, 0, 0), 900000L);
            sendBroadcastToUI("FiveG");
        }

        public void activiateLtePolicy(int i) {
            this.ltePolicyActive = true;
            this.ltePolicyChannelNumber = i;
            this.ltePolicyStartTime = System.currentTimeMillis();
            this.ltePolicyBlockAllTime = System.currentTimeMillis() + 60000;
            this.ltePolicyBlockExpireTime = System.currentTimeMillis() + 900000;
            FiveGDataOptimize.this.mWorkerThreadHandler.sendMessageDelayed(FiveGDataOptimize.this.mWorkerThreadHandler.obtainMessage(FiveGDataOptimize.EVENT_DATA_STALL_LTE_POLICY_EXPIRE, 0, 0, 0), 900000L);
            FiveGDataOptimize.this.sendLteReAttachCmd(SubscriptionManager.from(FiveGDataOptimize.mContext).getDefaultDataPhoneId());
            sendBroadcastToUI("Lte");
        }

        public void deactiveAllPolicy() {
            if (this.fiveGPolicyActive) {
                deactiveFiveGPolicy();
            }
            if (this.ltePolicyActive) {
                deactiveLtePolicy();
            }
        }

        public void deactiveFiveGPolicy() {
            this.fiveGPolicyActive = false;
            this.fiveGPolicyChannelNumber = 0;
            this.fiveGPolicyStartTime = 0L;
            this.fiveGPolicyBlockAllTime = 0L;
            this.fiveGPolicyExpireTime = 0L;
            FiveGDataOptimize.this.mWorkerThreadHandler.removeMessages(FiveGDataOptimize.EVENT_DATA_STALL_FIVEG_POLICY_EXPIRE);
        }

        public void deactiveLtePolicy() {
            this.ltePolicyActive = false;
            this.ltePolicyChannelNumber = 0;
            this.ltePolicyStartTime = 0L;
            this.ltePolicyBlockAllTime = 0L;
            this.fiveGPolicyExpireTime = 0L;
            FiveGDataOptimize.this.mWorkerThreadHandler.removeMessages(FiveGDataOptimize.EVENT_DATA_STALL_LTE_POLICY_EXPIRE);
        }

        public int fiveGPolicyChannelNum() {
            return this.fiveGPolicyChannelNumber;
        }

        public boolean isFiveGPolicyActive() {
            return this.fiveGPolicyActive;
        }

        public boolean isFiveGPolicyBlocking() {
            return this.fiveGPolicyActive && System.currentTimeMillis() < this.fiveGPolicyBlockAllTime;
        }

        public boolean isLtePolicyActive() {
            return this.ltePolicyActive;
        }

        public boolean isLtePolicyBlocking() {
            return this.ltePolicyActive && System.currentTimeMillis() < this.ltePolicyBlockAllTime;
        }

        public int ltePolicyChannelNum() {
            return this.ltePolicyChannelNumber;
        }
    }

    private class DdsSubServiceState {
        private int mChannelNumber;
        private int mDataRadioTechnology;
        private int mDataRegState;
        private int mNrFrequencyRange;
        private int mNrState;
        private int mVoiceRegState;

        private DdsSubServiceState() {
        }

        public String toString() {
            String string;
            synchronized (FiveGDataOptimize.this.mDdsServiceState) {
                StringBuilder sb = new StringBuilder();
                sb.append("{mVoiceRegState=");
                sb.append(this.mVoiceRegState);
                sb.append("(" + ServiceState.rilServiceStateToString(this.mVoiceRegState) + ")");
                sb.append(", mDataRegState=");
                sb.append(this.mDataRegState);
                sb.append("(" + ServiceState.rilServiceStateToString(this.mDataRegState) + ")");
                sb.append(", mDataRadioTechnology=");
                sb.append(this.mDataRegState);
                sb.append("(" + ServiceState.rilRadioTechnologyToString(this.mDataRadioTechnology) + ")");
                sb.append(", mChannelNumber=");
                sb.append(this.mChannelNumber);
                sb.append(", mNrState=");
                sb.append(this.mNrState);
                sb.append(", mNrFrequencyRange=");
                sb.append(this.mNrFrequencyRange);
                sb.append("}");
                string = sb.toString();
            }
            return string;
        }
    }

    private class MobileDataPoller {
        private static final int EVENT_POLL_MOBILE_DATA = 1;
        private static final int MOBILE_DATA_POLL_INTERVAL_INTENSIVE = 1000;
        private static final int MOBILE_DATA_POLL_INTERVAL_NORMAL = 5000;
        private PollHandler mPollHandler;
        private HandlerThread mPollThread;
        private int mPollingInterval;
        private boolean mPollingStatus;
        private int mDataStallCount = 0;
        private long mLastTime = 0;
        private long mTotalTxBytes = 0;
        private long mTotalRxBytes = 0;
        private long mTotalTxRxBytes = 0;
        private Runnable mPollTask = new Runnable() { // from class: com.mediatek.internal.telephony.FiveGDataOptimize.MobileDataPoller.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    MobileDataPoller.this.pollMobileDataTxRxSpeed();
                } catch (Exception e) {
                    Log.d(FiveGDataOptimize.TAG, "Got exception", e);
                }
            }
        };

        private class PollHandler extends Handler {
            public PollHandler(Looper looper) {
                super(looper);
            }

            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (message.what != 1) {
                    return;
                }
                if (MobileDataPoller.this.mPollingStatus) {
                    MobileDataPoller.this.pollMobileDataTxRxSpeed();
                    MobileDataPoller.this.mPollHandler.sendMessageDelayed(MobileDataPoller.this.mPollHandler.obtainMessage(1), MobileDataPoller.this.mPollingInterval);
                } else {
                    Log.d(FiveGDataOptimize.TAG, "EVENT_POLL_MOBILE_DATA canceled, pollingStatus = " + MobileDataPoller.this.mPollingStatus);
                }
            }
        }

        protected MobileDataPoller() {
            Log.d(FiveGDataOptimize.TAG, "MobileDataPoller");
            HandlerThread handlerThread = new HandlerThread("FiveGDataOptimizePollThread");
            this.mPollThread = handlerThread;
            handlerThread.start();
            this.mPollHandler = new PollHandler(this.mPollThread.getLooper());
        }

        private long getMobileRxBytes() {
            return TrafficStats.getMobileRxBytes();
        }

        private long getMobileTxBytes() {
            return TrafficStats.getMobileTxBytes();
        }

        private long getMobileTxRxBytes() {
            return TrafficStats.getMobileRxBytes() + TrafficStats.getMobileTxBytes();
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX WARN: Code duplicated, block: B:25:0x0060  */
        /* JADX WARN: Code duplicated, block: B:44:0x00b3  */
        /* JADX WARN: Code duplicated, block: B:47:0x00f2  */
        /* JADX WARN: Code duplicated, block: B:48:0x011a  */
        public void pollMobileDataTxRxSpeed() {
            long j;
            long j2;
            long j3;
            long j4;
            long j5;
            long j6;
            long j7 = 0;
            if (this.mPollingStatus) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                long mobileTxRxBytes = getMobileTxRxBytes();
                long mobileTxBytes = getMobileTxBytes();
                long mobileRxBytes = getMobileRxBytes();
                if (mobileTxRxBytes != 0) {
                    j = 0;
                    long j8 = this.mLastTime;
                    if (j8 != 0) {
                        long j9 = jCurrentTimeMillis - j8;
                        if (mobileTxRxBytes == 0 || j9 <= 0) {
                            j4 = 0;
                        } else {
                            j4 = 0;
                            long j10 = this.mTotalTxRxBytes;
                            if (mobileTxRxBytes > j10) {
                                j = ((mobileTxRxBytes - j10) * 1000) / j9;
                            }
                        }
                        if (mobileTxBytes == 0 || j9 <= 0) {
                            j5 = j4;
                        } else {
                            long j11 = this.mTotalTxBytes;
                            if (mobileTxBytes > j11) {
                                j5 = ((mobileTxBytes - j11) * 1000) / j9;
                            } else {
                                j5 = j4;
                            }
                        }
                        if (mobileRxBytes == 0 || j9 <= 0) {
                            j6 = j5;
                        } else {
                            j6 = j5;
                            long j12 = this.mTotalRxBytes;
                            if (mobileRxBytes > j12) {
                                j7 = ((mobileRxBytes - j12) * 1000) / j9;
                                j3 = j;
                                j2 = j6;
                            }
                        }
                        j3 = j;
                        j2 = j6;
                    }
                    this.mLastTime = jCurrentTimeMillis;
                    this.mTotalTxBytes = mobileTxBytes;
                    this.mTotalRxBytes = mobileRxBytes;
                    this.mTotalTxRxBytes = mobileTxRxBytes;
                    if (j2 > 0 || j7 != 0 || FiveGDataOptimize.this.isAnyCallOngoing()) {
                        this.mDataStallCount = 0;
                        this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_NORMAL;
                    } else {
                        this.mDataStallCount++;
                        this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_INTENSIVE;
                    }
                    Log.d(FiveGDataOptimize.TAG, "TxRx: " + j3 + ", Tx: " + j2 + ", Rx: " + j7 + ", Hit: " + this.mDataStallCount);
                    if (this.mDataStallCount == 15) {
                        stopPollMobileData();
                        FiveGDataOptimize.this.mWorkerThreadHandler.sendMessage(FiveGDataOptimize.this.mWorkerThreadHandler.obtainMessage(50, 0, 0, 0));
                        Log.d(FiveGDataOptimize.TAG, "send: EVENT_DATA_STALL_CHECK_POSSIBLE_POLICY");
                    }
                }
                j = 0;
                this.mLastTime = jCurrentTimeMillis;
                j3 = j;
                j2 = 0;
                this.mLastTime = jCurrentTimeMillis;
                this.mTotalTxBytes = mobileTxBytes;
                this.mTotalRxBytes = mobileRxBytes;
                this.mTotalTxRxBytes = mobileTxRxBytes;
                if (j2 > 0) {
                    this.mDataStallCount = 0;
                    this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_NORMAL;
                } else {
                    this.mDataStallCount = 0;
                    this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_NORMAL;
                }
                Log.d(FiveGDataOptimize.TAG, "TxRx: " + j3 + ", Tx: " + j2 + ", Rx: " + j7 + ", Hit: " + this.mDataStallCount);
                if (this.mDataStallCount == 15) {
                    stopPollMobileData();
                    FiveGDataOptimize.this.mWorkerThreadHandler.sendMessage(FiveGDataOptimize.this.mWorkerThreadHandler.obtainMessage(50, 0, 0, 0));
                    Log.d(FiveGDataOptimize.TAG, "send: EVENT_DATA_STALL_CHECK_POSSIBLE_POLICY");
                }
            }
        }

        public void startPollMobileData() {
            Log.d(FiveGDataOptimize.TAG, "startPollMobileData");
            if (this.mPollingStatus) {
                Log.d(FiveGDataOptimize.TAG, "startPollMobileData, already polling, ingore new request");
                return;
            }
            boolean mobileDataEnabled = FiveGDataOptimize.this.mConnectivityManager.getMobileDataEnabled();
            if (FiveGDataOptimize.this.mIsMobileConnected && !FiveGDataOptimize.this.mIsScreenOff && mobileDataEnabled) {
                this.mPollingStatus = true;
                this.mDataStallCount = 0;
                this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_NORMAL;
                PollHandler pollHandler = this.mPollHandler;
                pollHandler.sendMessageDelayed(pollHandler.obtainMessage(1), this.mPollingInterval);
                return;
            }
            Log.d(FiveGDataOptimize.TAG, "startPollMobileData, screenOff: " + FiveGDataOptimize.this.mIsScreenOff + ", enabled: " + mobileDataEnabled + ", connected: " + FiveGDataOptimize.this.mIsMobileConnected);
        }

        public void stopPollMobileData() {
            Log.d(FiveGDataOptimize.TAG, "stopPollMobileData");
            this.mPollingStatus = false;
            this.mDataStallCount = 0;
            this.mPollingInterval = MOBILE_DATA_POLL_INTERVAL_NORMAL;
            this.mPollHandler.removeMessages(1);
        }
    }

    private class WorkerHandler extends Handler {
        private static final String TAG = "FiveGDataOptimizeHandler: ";

        public WorkerHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 50:
                    Log.d(TAG, "Event received EVENT_DATA_STALL_CHECK_POSSIBLE_POLICY");
                    FiveGDataOptimize.this.evaluatePossiblePolicy();
                    break;
                case FiveGDataOptimize.EVENT_DATA_STALL_FIVEG_POLICY_EXPIRE /* 51 */:
                    Log.d(TAG, "Event received EVENT_DATA_STALL_FIVEG_POLICY_EXPIRE");
                    FiveGDataOptimize.this.mDataStallPolicy.deactiveFiveGPolicy();
                    break;
                case FiveGDataOptimize.EVENT_DATA_STALL_LTE_POLICY_EXPIRE /* 52 */:
                    Log.d(TAG, "Event received EVENT_DATA_STALL_LTE_POLICY_EXPIRE");
                    FiveGDataOptimize.this.mDataStallPolicy.deactiveLtePolicy();
                    break;
                case 53:
                    Log.d(TAG, "Event received EVENT_DETACH_RESPONSE");
                    FiveGDataOptimize.sCi[SubscriptionManager.from(FiveGDataOptimize.mContext).getDefaultDataPhoneId()].dataConnectionAttach(0, null);
                    break;
            }
        }
    }

    private FiveGDataOptimize(Context context) {
        this.mTelephonyManager = null;
        this.mConnectivityManager = null;
        this.mDataStallPolicy = new DataStallPolicyTracker();
        this.mDdsServiceState = new DdsSubServiceState();
        Log.d(TAG, TAG);
        mContext = context;
        this.mWorkerThread.start();
        setLooper(this.mWorkerThread.getLooper());
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.SCREEN_ON");
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        intentFilter.addAction("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED");
        intentFilter.addAction(SMS_RECEIVED_ACTION);
        intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
        intentFilter.addAction("android.intent.action.SERVICE_STATE");
        intentFilter.addAction("android.intent.action.AIRPLANE_MODE");
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        this.mTelephonyManager = (TelephonyManager) mContext.getSystemService("phone");
        this.mConnectivityManager = (ConnectivityManager) mContext.getSystemService("connectivity");
        mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
        this.mTelephonyManager.listen(this.mPhoneStateListener, 160);
        this.mPackageName = mContext.getPackageName();
        this.mMobileDataPoller.startPollMobileData();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkDDSCallState(int i) {
        this.mDdsSubCallState = this.mTelephonyManager.getCallStateForSlot(SubscriptionManager.getSlotIndex(currentDdsSub()) == 0 ? 0 : 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkNonDDSCallState(int i) {
        int callStateForSlot = this.mTelephonyManager.getCallStateForSlot(SubscriptionManager.getSlotIndex(currentDdsSub()) == 0 ? 1 : 0);
        Log.d(TAG, "mNonDdsSubCallState = " + this.mNonDdsSubCallState + ", newNonDdsSubCallState = " + callStateForSlot);
        int i2 = this.mNonDdsSubCallState;
        if (i2 != 0) {
            if (i2 != 1) {
                if (i2 == 2 && callStateForSlot == 0) {
                }
            } else if (callStateForSlot == 0) {
            }
        } else if (callStateForSlot != 0) {
            this.mNonDdsSubCallState = callStateForSlot;
        }
        this.mNonDdsSubCallState = callStateForSlot;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int currentDdsSub() {
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        if (!SubscriptionManager.isUsableSubIdValue(defaultDataSubscriptionId)) {
            defaultDataSubscriptionId = SubscriptionManager.getDefaultVoiceSubscriptionId();
        }
        if (!SubscriptionManager.isUsableSubIdValue(defaultDataSubscriptionId)) {
            defaultDataSubscriptionId = SubscriptionManager.getDefaultSmsSubscriptionId();
        }
        if (!SubscriptionManager.isUsableSubIdValue(defaultDataSubscriptionId)) {
            defaultDataSubscriptionId = SubscriptionManager.getDefaultSubscriptionId();
        }
        if (defaultDataSubscriptionId == -1) {
            return 0;
        }
        return defaultDataSubscriptionId;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void evaluatePossiblePolicy() {
        boolean z = false;
        boolean z2 = false;
        int i = this.mDdsServiceState.mDataRadioTechnology;
        int i2 = this.mDdsServiceState.mNrState;
        if (i == 14 || i == 19) {
            if (i2 == 2 || i2 == 3) {
                z2 = true;
            } else {
                z = true;
            }
        } else if (i == 20) {
            z2 = true;
        } else {
            z = false;
            z2 = false;
        }
        Log.d(TAG, "evaluatePossiblePolicy, isLteTech: " + z + ", isFiveGTech: " + z2);
        if (z) {
            boolean zIsLtePolicyActive = this.mDataStallPolicy.isLtePolicyActive();
            boolean zIsFiveGPolicyBlocking = this.mDataStallPolicy.isFiveGPolicyBlocking();
            if (!zIsLtePolicyActive && !zIsFiveGPolicyBlocking) {
                this.mDataStallPolicy.activiateLtePolicy(this.mDdsServiceState.mChannelNumber);
                return;
            }
            Log.d(TAG, "evaluatePossiblePolicy, isLtePolicyActive: " + zIsLtePolicyActive + ", isFiveGPolicyBlocking: " + zIsFiveGPolicyBlocking);
        }
    }

    public static FiveGDataOptimize getInstance() {
        if (sInstance == null) {
            Log.d(TAG, "getInstance null");
        }
        return sInstance;
    }

    public static FiveGDataOptimize init(Context context, CommandsInterface[] commandsInterfaceArr) {
        FiveGDataOptimize fiveGDataOptimize;
        synchronized (FiveGDataOptimize.class) {
            mContext = context;
            sCi = commandsInterfaceArr;
            if (sInstance == null) {
                sInstance = new FiveGDataOptimize(context);
            } else {
                Log.d(TAG, "init() called multiple times!  sInstance = " + sInstance);
            }
            fiveGDataOptimize = sInstance;
        }
        return fiveGDataOptimize;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendLteReAttachCmd(int i) {
        Log.d(TAG, "sendLteReAttachCmd, phoneId =  " + i);
        MtkRIL[] mtkRILArr = sCi;
        if (mtkRILArr != null) {
            mtkRILArr[i].dataConnectionDetach(0, this.mWorkerThreadHandler.obtainMessage(53));
        }
    }

    private void setLooper(Looper looper) {
        this.mWorkerThreadHandler = new WorkerHandler(looper);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateDdsServiceState(ServiceState serviceState) {
        this.mDdsServiceState.mVoiceRegState = serviceState.getVoiceRegState();
        this.mDdsServiceState.mDataRegState = serviceState.getDataRegState();
        this.mDdsServiceState.mDataRadioTechnology = serviceState.getRilDataRadioTechnology();
        this.mDdsServiceState.mChannelNumber = serviceState.getChannelNumber();
        this.mDdsServiceState.mNrState = serviceState.getNrState();
        this.mDdsServiceState.mNrFrequencyRange = serviceState.getNrFrequencyRange();
    }

    protected boolean isAnyCallOngoing() {
        boolean z = (this.mDdsSubCallState == 0 && this.mNonDdsSubCallState == 0) ? false : true;
        Log.d(TAG, "isAnyCallOngoing callOngoing= " + z);
        return z;
    }
}
