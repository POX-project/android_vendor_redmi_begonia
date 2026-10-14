package com.mediatek.wfo.impl;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.LinkAddress;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.net.RouteInfo;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telecom.TelecomManager;
import android.telephony.CarrierConfigManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.mediatek.ims.ImsConstants;
import com.mediatek.wfo.ril.MwiRIL;
import com.mediatek.wfo.util.PacketKeepAliveProcessor;
import com.mediatek.wfo.util.RssiMonitoringProcessor;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class WifiPdnHandler extends Handler {
    private static final int BASE = 1000;
    private static final int DEFAULT_MTU_SIZE = 1500;
    public static final int EVENT_HANDLE_AIRPLANE_MODE = 1152;
    private static final int EVENT_INITIALIZE = 1015;
    public static final int EVENT_ON_NATT_KEEP_ALIVE_CHANGED = 1103;
    public static final int EVENT_ON_WIFI_LOCK = 1153;
    public static final int EVENT_ON_WIFI_MONITORING_THRESHOLD_CHANGED = 1101;
    public static final int EVENT_ON_WIFI_PDN_ACTIVATE = 1102;
    public static final int EVENT_ON_WIFI_PING_REQUEST = 1150;
    private static final int EVENT_RADIO_AVAILABLE = 1005;
    private static final int EVENT_RETRY_CHECK_IF_START_WIFI_SCAN = 1010;
    private static final int EVENT_RETRY_INIT = 1008;
    private static final int EVENT_RETRY_UPDATE_LAST_RSSI = 1011;
    private static final int EVENT_RETRY_UPDATE_WIFI_CONNTECTED_INFO = 1009;
    public static final int EVENT_SET_NATT_STATUS = 1007;
    private static final int EVENT_SET_WIFI_ASSOC = 1003;
    private static final int EVENT_SET_WIFI_ENABLED = 1002;
    private static final int EVENT_SET_WIFI_IP_ADDR = 1004;
    public static final int EVENT_SET_WIFI_PING_RESULT = 1151;
    private static final int EVENT_SET_WIFI_SIGNAL_STRENGTH = 1001;
    private static final int EVENT_SET_WIFI_UE_MAC = 1014;
    private static final int EVENT_WIFI_NETWORK_STATE_CHANGE = 1000;
    private static final int EVENT_WIFI_SCAN = 1006;
    private static final int EVENT_WIFI_SCAN_AVAILABLE = 1012;
    private static final int EVENT_WIFI_STATE_CHANGE = 1013;
    private static final int EWIFIEN_AP_MODE_STATE = 8;
    private static final int EWIFIEN_CAUSE = 1;
    private static final int EWIFIEN_NEED_SEND_AP_MODE = 16;
    private static final int EWIFIEN_NEED_SEND_WIFI_ENABLED = 4;
    private static final int EWIFIEN_WIFI_ENABLED_STATE = 2;
    private static final String EXTRA_WFC_STATUS_KEY = "wfc_status";
    private static final String MTK_KEY_WOS_SUPPORT_WFC_IN_FLIGHTMODE = "wos_flight_mode_support_bool";
    private static final int NEED_DEFER = 1;
    private static final String NONE_SSID = "<unknown ssid>";
    private static final int NO_NEED_DEFER = 0;
    private static final int PING_PASS_LATENCY = 50;
    private static final int PING_PASS_LOSS_RATE = 0;
    private static final String PROPERTY_MIMS_SUPPORT = "persist.vendor.mims_support";
    private static final String PROPERTY_WFC_ENABLE = "persist.vendor.mtk.wfc.enable";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final int RESPONSE_SET_NATT_KEEP_ALIVE_STATUS = 1204;
    private static final int RESPONSE_SET_WIFI_ASSOC = 1202;
    private static final int RESPONSE_SET_WIFI_ENABLED = 1200;
    private static final int RESPONSE_SET_WIFI_IP_ADDR = 1203;
    private static final int RESPONSE_SET_WIFI_PING_RESULT = 1205;
    private static final int RESPONSE_SET_WIFI_SIGNAL_LEVEL = 1201;
    private static final int RESPONSE_SET_WIFI_UE_MAC = 1206;
    private static final int RETRY_TIMEOUT = 3000;
    public static final int SNR_UNKNOWN = 60;
    private static final String TAG = "WifiPdnHandler";
    private static final boolean TELDBG;
    private static final boolean USR_BUILD;
    private static final int WFC_NOTIFY_GO = 2;
    private static final String WFC_REQUEST_PARTIAL_SCAN = "com.mediatek.intent.action.WFC_REQUEST_PARTIAL_SCAN";
    private static final String WFC_STATUS_CHANGED = "com.mediatek.intent.action.WFC_STATUS_CHANGED";
    private static final String WIFI_IF_NAME = "wlan0";
    private static final int WIFI_SCAN_DELAY = 3000;
    private static final int WIFI_STATE_UI_DISABLING = 9900;
    private static String mWifiUeMac = "02:00:00:00:00:00";
    private ConnectivityManager mConnectivityManager;
    private Context mContext;
    private boolean mDeferredNotificationToWifi;
    private List<InetAddress> mDnsServers;
    private boolean mHasWiFiDisabledPending;
    private String mIfName;
    private boolean mIsAirplaneModeChange;
    private boolean mIsAirplaneModeOn;
    private boolean mIsWifiConnected;
    private boolean mIsWifiEnabled;
    private int mLastRssi;
    private Object mLock;
    private boolean[] mModemReqWifiLock;
    private int mMtu;
    private MwiRIL[] mMwiRil;
    private Network mNetwork;
    private boolean mOldWifiConnectedFromNetworkInfo;
    private PacketKeepAliveProcessor mPacketKeepAliveProcessor;
    private ArrayList<Message> mPendingMsgs;
    private PingDns mPingDns;
    private int mRadioState;
    private int[] mRatType;
    private BroadcastReceiver mReceiver;
    private boolean mRssiChange;
    private RssiMonitoringProcessor mRssiMonitoringProcessor;
    private int mSimCount;
    private String mSsid;
    private TelephonyManager mTelephonyManager;
    private WfcHandler mWfcHandler;
    private String mWifiApMac;
    private String mWifiIpv4Address;
    private String mWifiIpv4Gateway;
    private int mWifiIpv4PrefixLen;
    private String mWifiIpv6Address;
    private String mWifiIpv6Gateway;
    private int mWifiIpv6PrefixLen;
    private WifiManager.WifiLock mWifiLock;
    private int mWifiLockCount;
    private WifiManager mWifiManager;
    private boolean[] mWifiPdnExisted;

    /* JADX INFO: renamed from: com.mediatek.wfo.impl.WifiPdnHandler$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$wfo$impl$WifiPdnHandler$WifiLockSource;

        static {
            int[] iArr = new int[WifiLockSource.values().length];
            $SwitchMap$com$mediatek$wfo$impl$WifiPdnHandler$WifiLockSource = iArr;
            try {
                iArr[WifiLockSource.MODEM_STATE_CHANGE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$wfo$impl$WifiPdnHandler$WifiLockSource[WifiLockSource.WIFI_STATE_CHANGE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    enum WifiLockSource {
        WIFI_STATE_CHANGE,
        MODEM_STATE_CHANGE
    }

    static {
        USR_BUILD = TextUtils.equals(Build.TYPE, "user") || TextUtils.equals(Build.TYPE, "userdebug");
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public WifiPdnHandler(Context context, int i, Looper looper, MwiRIL[] mwiRILArr) {
        super(looper);
        this.mWifiLockCount = 0;
        this.mIsWifiConnected = false;
        this.mOldWifiConnectedFromNetworkInfo = false;
        this.mWifiApMac = "";
        this.mWifiIpv4Address = "";
        this.mWifiIpv6Address = "";
        this.mWifiIpv4Gateway = "";
        this.mWifiIpv6Gateway = "";
        this.mWifiIpv4PrefixLen = -1;
        this.mWifiIpv6PrefixLen = -1;
        this.mMtu = 0;
        this.mDnsServers = null;
        this.mIfName = "";
        this.mSsid = "";
        this.mRssiChange = false;
        this.mIsAirplaneModeOn = false;
        this.mIsAirplaneModeChange = false;
        this.mDeferredNotificationToWifi = false;
        this.mWfcHandler = null;
        this.mPendingMsgs = new ArrayList<>();
        this.mLock = new Object();
        this.mNetwork = null;
        this.mRadioState = 2;
        this.mReceiver = new BroadcastReceiver() { // from class: com.mediatek.wfo.impl.WifiPdnHandler.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (intent == null || intent.getAction() == null) {
                    return;
                }
                WifiPdnHandler.this.log("onReceive action:" + intent.getAction());
                if (intent.getAction().equals("android.net.wifi.WIFI_STATE_CHANGED")) {
                    WifiPdnHandler.this.obtainMessage(1013, intent.getIntExtra("wifi_state", 4), 0).sendToTarget();
                    return;
                }
                if (intent.getAction().equals("android.intent.action.AIRPLANE_MODE")) {
                    boolean booleanExtra = intent.getBooleanExtra("state", false);
                    WifiPdnHandler.this.log("ACTION_AIRPLANE_MODE_CHANGED isAirplaneModeOn: " + booleanExtra);
                    WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(WifiPdnHandler.EVENT_HANDLE_AIRPLANE_MODE));
                    return;
                }
                if (intent.getAction().equals("android.net.wifi.action.WIFI_SCAN_AVAILABILITY_CHANGED")) {
                    Rlog.d(WifiPdnHandler.TAG, "Receive WIFI_SCAN_AVAILABLE, state: " + intent.getBooleanExtra("android.net.wifi.extra.SCAN_AVAILABLE", false));
                    WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1012));
                    return;
                }
                if (!intent.getAction().equals("android.net.wifi.STATE_CHANGE")) {
                    if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED")) {
                        WifiPdnHandler.this.log("ACTION_CARRIER_CONFIG_CHANGED mIsAirplaneModeOn: " + WifiPdnHandler.this.mIsAirplaneModeOn);
                        if (WifiPdnHandler.this.mIsAirplaneModeOn) {
                            WifiPdnHandler.this.setWifiEnabled();
                            return;
                        }
                        return;
                    }
                    return;
                }
                NetworkInfo networkInfo = (NetworkInfo) intent.getParcelableExtra("networkInfo");
                boolean z = networkInfo != null && networkInfo.isConnected();
                WifiPdnHandler.this.log("Receive NETWORK_STATE_CHANGED_ACTION, mIsWifiConnected: " + WifiPdnHandler.this.mIsWifiConnected + " networkInfo.isConnected(): " + z);
                if (WifiPdnHandler.this.mIsWifiConnected && WifiPdnHandler.this.mOldWifiConnectedFromNetworkInfo) {
                    WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, z ? 1 : 0, 0, null));
                }
                WifiPdnHandler.this.mOldWifiConnectedFromNetworkInfo = z;
                WifiPdnHandler.this.log("Receive mOldWifiConnectedFromNetworkInfo: " + WifiPdnHandler.this.mOldWifiConnectedFromNetworkInfo);
            }
        };
        this.mContext = context;
        this.mSimCount = i;
        this.mMwiRil = mwiRILArr;
        obtainMessage(1015).sendToTarget();
    }

    private boolean allowWfcInAirplaneMode() {
        boolean booleanCarrierConfig = true;
        boolean zIsAirPlaneMode = isAirPlaneMode();
        if (this.mIsAirplaneModeOn != zIsAirPlaneMode) {
            this.mIsAirplaneModeOn = zIsAirPlaneMode;
            this.mIsAirplaneModeChange = true;
        }
        if (this.mIsAirplaneModeOn) {
            if (SystemProperties.getInt(PROPERTY_MIMS_SUPPORT, 1) <= 1) {
                booleanCarrierConfig = getBooleanCarrierConfig(MTK_KEY_WOS_SUPPORT_WFC_IN_FLIGHTMODE, getMainCapabilityPhoneId(), true);
            } else {
                for (int i = 0; i < this.mSimCount && (booleanCarrierConfig = getBooleanCarrierConfig(MTK_KEY_WOS_SUPPORT_WFC_IN_FLIGHTMODE, i, true)); i++) {
                }
            }
        }
        log("allowWfcInAirplaneMode: mIsAirplaneModeOn = " + this.mIsAirplaneModeOn + ", wfcInApMode = " + booleanCarrierConfig);
        return booleanCarrierConfig;
    }

    private void broadcastWfcStatusIntent(int i) {
        WfcHandler wfcHandler = this.mWfcHandler;
        wfcHandler.sendMessage(wfcHandler.obtainMessage(2105));
    }

    private void checkIfstartWifiScan(boolean z) {
        boolean zIsWifiPdnExisted = isWifiPdnExisted();
        if (this.mIsWifiConnected || !zIsWifiPdnExisted) {
            removeMessages(1006);
            return;
        }
        if (!z) {
            if (hasMessages(1006)) {
                return;
            }
            log("start 3s delay to trigger wifi scan");
            sendMessageDelayed(obtainMessage(1006), 3000L);
            return;
        }
        log("call WifiManager.startScan()");
        WifiManager wifiManager = this.mWifiManager;
        if (wifiManager != null) {
            wifiManager.startScan();
            return;
        }
        Rlog.e(TAG, "checkIfstartWifiScan(): WifiManager null");
        Message messageObtainMessage = obtainMessage(1010, Boolean.valueOf(z));
        synchronized (this.mLock) {
            this.mPendingMsgs.add(messageObtainMessage);
        }
    }

    private boolean checkInvalidSimIdx(int i, String str) {
        if (i >= 0 && i < this.mSimCount) {
            return false;
        }
        log(str);
        return true;
    }

    private void checkRadioPowerState() {
        Context context;
        if (this.mTelephonyManager == null && (context = this.mContext) != null) {
            this.mTelephonyManager = (TelephonyManager) context.getSystemService("phone");
        }
        TelephonyManager telephonyManager = this.mTelephonyManager;
        if (telephonyManager != null) {
            this.mRadioState = telephonyManager.getRadioPowerState();
        } else {
            log("mTelephonyManager is null, keep the original RadioState");
        }
        log("checkRadioPowerState: " + this.mRadioState);
    }

    private int generateWifiEnableCause(boolean z, boolean z2, boolean z3, boolean z4, boolean z5) {
        int i = (z ? 0 | 16 : 0) | (z2 ? 8 : 0);
        if (z3) {
            i |= 4;
        }
        int i2 = i | (z4 ? 2 : 0) | (z5 ? 1 : 0);
        log("generateWifiEnableCause(): " + i2);
        return i2;
    }

    private boolean getAirplaneModeFromSettings() throws Settings.SettingNotFoundException {
        try {
            boolean z = Settings.Global.getInt(this.mContext.getContentResolver(), "airplane_mode_on") == 1;
            log("getAirplaneModeFromSettings: " + z);
            checkRadioPowerState();
            if (!isEccInProgress() && this.mRadioState != 1) {
                return z;
            }
            log("Disable airplane mode after get from setting if radio is on");
            return false;
        } catch (Settings.SettingNotFoundException e) {
            Rlog.e(TAG, "Can not get AIRPLANE_MODE_ON from provider.");
            throw e;
        }
    }

    private boolean getBooleanCarrierConfig(String str, int i, boolean z) {
        boolean z2;
        if (this.mContext == null) {
            Rlog.e(TAG, "getBooleanCarrierConfig fail, mContext = null");
        }
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        int subId = getSubId(i);
        log("getBooleanCarrierConfig: phoneId=" + i + " subId=" + subId);
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(subId) : null;
        if (configForSubId != null) {
            z2 = configForSubId.getBoolean(str, z);
        } else {
            log("getBooleanCarrierConfig: get from default config");
            z2 = CarrierConfigManager.getDefaultConfig().getBoolean(str, z);
        }
        log("getBooleanCarrierConfig sub: " + subId + " key: " + str + " ret: " + z2);
        return z2;
    }

    private int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            return -1;
        }
        return i;
    }

    private MwiRIL getMwiRil() {
        int mainCapabilityPhoneId = getMainCapabilityPhoneId();
        if (mainCapabilityPhoneId == -1) {
            return null;
        }
        return this.mMwiRil[mainCapabilityPhoneId];
    }

    private int getSubId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length < 1) {
            return -1;
        }
        return subId[0];
    }

    public static String getUeWlanMacAddr() {
        return mWifiUeMac;
    }

    private void handleAirplaneMode() throws Settings.SettingNotFoundException {
        boolean airplaneModeFromSettings = false;
        try {
            airplaneModeFromSettings = getAirplaneModeFromSettings();
        } catch (Settings.SettingNotFoundException e) {
            Rlog.e(TAG, "Can not get AIRPLANE_MODE_ON from provider.");
        }
        log("handleAirplaneMode mIsAirplaneModeOn: " + this.mIsAirplaneModeOn);
        if (this.mIsAirplaneModeOn != airplaneModeFromSettings) {
            this.mIsAirplaneModeOn = airplaneModeFromSettings;
            this.mIsAirplaneModeChange = true;
        }
    }

    private void handleRetry(int i, AsyncResult asyncResult) {
    }

    private void handleWifiDefferOff(WifiLockSource wifiLockSource, int i) {
        int i2 = AnonymousClass3.$SwitchMap$com$mediatek$wfo$impl$WifiPdnHandler$WifiLockSource[wifiLockSource.ordinal()];
        if (i2 == 1) {
            if (!this.mDeferredNotificationToWifi && isWifiDeferOffNeeded()) {
                broadcastWfcStatusIntent(1);
                WifiManager.WifiLock wifiLock = this.mWifiLock;
                if (wifiLock != null) {
                    wifiLock.acquire();
                    this.mWifiLockCount++;
                }
                this.mDeferredNotificationToWifi = true;
            }
            if (this.mHasWiFiDisabledPending && !isWifiDeferOffNeeded()) {
                this.mHasWiFiDisabledPending = false;
                broadcastWfcStatusIntent(2);
            }
            if (this.mDeferredNotificationToWifi && !isWifiDeferOffNeeded()) {
                this.mDeferredNotificationToWifi = false;
                broadcastWfcStatusIntent(0);
                WifiManager.WifiLock wifiLock2 = this.mWifiLock;
                if (wifiLock2 != null) {
                    wifiLock2.release();
                    int i3 = this.mWifiLockCount - 1;
                    this.mWifiLockCount = i3;
                    if (i3 > 0) {
                        log("Warning: mWifiLockCount: " + this.mWifiLockCount);
                    }
                }
            }
        } else if (i2 == 2) {
            if (i == WIFI_STATE_UI_DISABLING) {
                if (!this.mHasWiFiDisabledPending) {
                    if (isWifiDeferOffNeeded()) {
                        this.mHasWiFiDisabledPending = true;
                    } else {
                        broadcastWfcStatusIntent(2);
                    }
                }
            } else if (i == 1) {
                if (this.mHasWiFiDisabledPending) {
                    this.mHasWiFiDisabledPending = false;
                }
                if (this.mDeferredNotificationToWifi) {
                    this.mDeferredNotificationToWifi = false;
                    log("Wi-Fi fwk automaticlly disable defer Wi-Fi off process due to timeout");
                    WifiManager.WifiLock wifiLock3 = this.mWifiLock;
                    if (wifiLock3 != null) {
                        wifiLock3.release();
                        int i4 = this.mWifiLockCount - 1;
                        this.mWifiLockCount = i4;
                        if (i4 > 0) {
                            log("Warning: mWifiLockCount: " + this.mWifiLockCount);
                        }
                    }
                }
            } else if (i == 3 && !this.mDeferredNotificationToWifi && isWifiDeferOffNeeded()) {
                broadcastWfcStatusIntent(1);
                WifiManager.WifiLock wifiLock4 = this.mWifiLock;
                if (wifiLock4 != null) {
                    wifiLock4.acquire();
                    this.mWifiLockCount++;
                }
                this.mDeferredNotificationToWifi = true;
            }
        }
        log("new handleWifiDefferOff(): WifiLockSource: " + wifiLockSource + " state: " + i + " mHasWiFiDisabledPending: " + this.mHasWiFiDisabledPending + " isWifiDeferOffNeeded(): " + isWifiDeferOffNeeded() + " mDeferredNotificationToWifi: " + this.mDeferredNotificationToWifi);
    }

    private void handleWifiStateChange(int i) {
        if (this.mWifiManager == null) {
            log("Unexpected error, mWifiManager is null!");
            Message messageObtainMessage = obtainMessage(1013, i, 0);
            synchronized (this.mLock) {
                this.mPendingMsgs.add(messageObtainMessage);
            }
            return;
        }
        log("handleWifiStateChange wifiState: " + i);
        try {
            boolean airplaneModeFromSettings = getAirplaneModeFromSettings();
            if (this.mIsAirplaneModeOn != airplaneModeFromSettings) {
                this.mIsAirplaneModeOn = airplaneModeFromSettings;
                this.mIsAirplaneModeChange = true;
                log("handleWifiStateChange change due to airplane mode change");
            }
        } catch (Settings.SettingNotFoundException e) {
            Rlog.e(TAG, "Can not get AIRPLANE_MODE_ON from provider.");
        }
        handleWifiDefferOff(WifiLockSource.WIFI_STATE_CHANGE, i);
        if (i == WIFI_STATE_UI_DISABLING) {
            this.mIsWifiEnabled = false;
            setWifiEnabled();
            return;
        }
        boolean zIsWifiEnabled = this.mWifiManager.isWifiEnabled();
        if (zIsWifiEnabled != this.mIsWifiEnabled) {
            this.mIsWifiEnabled = zIsWifiEnabled;
            setWifiEnabled();
        }
    }

    private void initWifiManager() {
        if (this.mWifiManager != null) {
            return;
        }
        Rlog.d(TAG, "initWifiManager.");
        if (0 == 0) {
            this.mWifiManager = (WifiManager) this.mContext.getSystemService("wifi");
        }
        WifiManager wifiManager = this.mWifiManager;
        if (wifiManager == null) {
            log("WifiManager null");
            this.mIsWifiEnabled = false;
            this.mWifiLock = null;
            Message messageObtainMessage = obtainMessage(1008);
            synchronized (this.mLock) {
                this.mPendingMsgs.add(messageObtainMessage);
            }
            return;
        }
        boolean zIsWifiEnabled = wifiManager.isWifiEnabled();
        if (zIsWifiEnabled != this.mIsWifiEnabled) {
            this.mIsWifiEnabled = zIsWifiEnabled;
            setWifiEnabled();
        }
        WifiManager.WifiLock wifiLockCreateWifiLock = this.mWifiManager.createWifiLock("WifiOffloadService-Wifi Lock");
        this.mWifiLock = wifiLockCreateWifiLock;
        if (wifiLockCreateWifiLock != null) {
            wifiLockCreateWifiLock.setReferenceCounted(false);
        }
    }

    private void initialize() {
        initWifiManager();
        this.mConnectivityManager = ConnectivityManager.from(this.mContext);
        ServiceManager.getService("network_management");
        this.mRssiMonitoringProcessor = new RssiMonitoringProcessor(this.mConnectivityManager);
        this.mPacketKeepAliveProcessor = new PacketKeepAliveProcessor(this.mConnectivityManager, this);
        int i = this.mSimCount;
        this.mWifiPdnExisted = new boolean[i];
        this.mModemReqWifiLock = new boolean[i];
        this.mRatType = new int[i];
        this.mRssiMonitoringProcessor.initialize(i);
        this.mIsAirplaneModeOn = Settings.System.getInt(this.mContext.getContentResolver(), "airplane_mode_on", 0) != 0;
        this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        registerForBroadcast();
        registerIndication();
        setupCallbacksForWifiStatus();
        setWifiEnabled();
    }

    private boolean isAirPlaneMode() {
        Context context = this.mContext;
        if (context != null) {
            return Settings.System.getInt(context.getContentResolver(), "airplane_mode_on", 0) != 0;
        }
        Rlog.e(TAG, "isAirPlaneMode: no context!");
        return false;
    }

    private boolean isEccInProgress() {
        TelecomManager telecomManager = (TelecomManager) this.mContext.getSystemService("telecom");
        if (telecomManager != null) {
            return telecomManager.isInEmergencyCall();
        }
        return false;
    }

    private boolean isModemReqWifiLock() {
        for (int i = 0; i < this.mSimCount; i++) {
            if (this.mModemReqWifiLock[i]) {
                return true;
            }
        }
        return false;
    }

    private boolean isWifiDeferOffNeeded() {
        return isWifiPdnExisted() || isModemReqWifiLock();
    }

    private String maskString(String str) {
        StringBuilder sb = new StringBuilder();
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        int length = str.length() / 2;
        if (length < 1) {
            sb.append("*");
            return sb.toString();
        }
        for (int i = 0; i < length; i++) {
            sb.append("*");
        }
        return sb.toString() + str.substring(length);
    }

    private String messageToString(Message message) {
        int i = message.what;
        if (i == 1015) {
            return "EVENT_INITIALIZE";
        }
        switch (i) {
            case 1000:
                return "EVENT_WIFI_NETWORK_STATE_CHANGE";
            case 1001:
                return "EVENT_SET_WIFI_SIGNAL_STRENGTH";
            case 1002:
                return "EVENT_SET_WIFI_ENABLED";
            case 1003:
                return "EVENT_SET_WIFI_ASSOC";
            case 1004:
                return "EVENT_SET_WIFI_IP_ADDR";
            case 1005:
                return "EVENT_RADIO_AVAILABLE";
            case 1006:
                return "EVENT_WIFI_SCAN";
            case 1007:
                return "EVENT_SET_NATT_STATUS";
            case 1008:
                return "EVENT_RETRY_INIT";
            case 1009:
                return "EVENT_RETRY_UPDATE_WIFI_CONNTECTED_INFO";
            case 1010:
                return "EVENT_RETRY_CHECK_IF_START_WIFI_SCAN";
            case 1011:
                return "EVENT_RETRY_UPDATE_LAST_RSSI";
            case 1012:
                return "EVENT_WIFI_SCAN_AVAILABLE";
            case 1013:
                return "EVENT_WIFI_STATE_CHANGE";
            default:
                switch (i) {
                    case 1101:
                        return "EVENT_ON_WIFI_MONITORING_THRESHOLD_CHANGED";
                    case EVENT_ON_WIFI_PDN_ACTIVATE /* 1102 */:
                        return "EVENT_ON_WIFI_PDN_ACTIVATE";
                    case EVENT_ON_NATT_KEEP_ALIVE_CHANGED /* 1103 */:
                        return "EVENT_ON_NATT_KEEP_ALIVE_CHANGED";
                    default:
                        switch (i) {
                            case EVENT_ON_WIFI_PING_REQUEST /* 1150 */:
                                return "EVENT_ON_WIFI_PING_REQUEST";
                            case EVENT_SET_WIFI_PING_RESULT /* 1151 */:
                                return "EVENT_SET_WIFI_PING_RESULT";
                            case EVENT_HANDLE_AIRPLANE_MODE /* 1152 */:
                                return "EVENT_HANDLE_AIRPLANE_MODE";
                            case EVENT_ON_WIFI_LOCK /* 1153 */:
                                return "EVENT_ON_WIFI_LOCK";
                            default:
                                switch (i) {
                                    case RESPONSE_SET_WIFI_ENABLED /* 1200 */:
                                        return "RESPONSE_SET_WIFI_ENABLED";
                                    case 1201:
                                        return "RESPONSE_SET_WIFI_SIGNAL_LEVEL";
                                    case 1202:
                                        return "RESPONSE_SET_WIFI_ASSOC";
                                    case 1203:
                                        return "RESPONSE_SET_WIFI_IP_ADDR";
                                    case RESPONSE_SET_NATT_KEEP_ALIVE_STATUS /* 1204 */:
                                        return "RESPONSE_SET_NATT_KEEP_ALIVE_STATUS";
                                    case RESPONSE_SET_WIFI_PING_RESULT /* 1205 */:
                                        return "RESPONSE_SET_WIFI_PING_RESULT";
                                    default:
                                        return "UNKNOWN:" + message.what;
                                }
                        }
                }
        }
    }

    private void onNattKeepAliveChanged(Message message) {
        this.mPacketKeepAliveProcessor.handleKeepAliveChanged((String[]) ((AsyncResult) message.obj).result);
    }

    private void onRssiMonitorRequest(int i, int i2, int[] iArr) {
        this.mRssiMonitoringProcessor.registerRssiMonitoring(i, i2, iArr);
    }

    private void onWifiLock(Message message) {
        String[] strArr = (String[]) ((AsyncResult) message.obj).result;
        if (strArr == null) {
            Rlog.e(TAG, "onWifiLock(): result is null");
            return;
        }
        if (strArr.length < 3) {
            Rlog.e(TAG, "onWifiLock(): Bad params");
            return;
        }
        try {
            String str = strArr[0];
            int i = Integer.parseInt(strArr[1]);
            int i2 = Integer.parseInt(strArr[2]);
            boolean zIsModemReqWifiLock = isModemReqWifiLock();
            this.mModemReqWifiLock[i2] = i != 0;
            if (zIsModemReqWifiLock != isModemReqWifiLock()) {
                handleWifiDefferOff(WifiLockSource.MODEM_STATE_CHANGE, 0);
            }
        } catch (Exception e) {
            Rlog.e(TAG, "onWifiLock[" + strArr.length + "]" + strArr[0] + " " + strArr[1] + " " + strArr[2] + "  e:" + e.toString());
        }
    }

    private void onWifiMonitoringThreshouldChanged(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onWifiMonitoringThreshouldChanged(): result is null");
            return;
        }
        boolean z = iArr[0] == 1;
        int length = iArr.length;
        int i = iArr[length - 1];
        if (!z) {
            log("Turn off RSSI monitoring");
            this.mRssiMonitoringProcessor.unregisterAllRssiMonitoring(i);
            return;
        }
        int i2 = iArr[1];
        if (i2 + 2 + 1 < length) {
            Rlog.e(TAG, "onWifiMonitoringThreshouldChanged(): Bad params");
            return;
        }
        if (checkInvalidSimIdx(i, "onWifiMonitoringThreshouldChanged: invalid SIM id")) {
            return;
        }
        int[] iArr2 = new int[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            iArr2[i3] = iArr[i3 + 2];
            log("onWifiMonitoringThreshouldChanged(): rssi = " + iArr2[i3]);
        }
        onRssiMonitorRequest(i, i2, iArr2);
        updateLastRssi();
        setWifiSignalLevel();
    }

    private void onWifiPdnActivate(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onWifiPdnActivate(): result is null");
            return;
        }
        if (iArr.length < 2) {
            Rlog.e(TAG, "onWifiPdnActivate(): Bad params");
            return;
        }
        int i = iArr[0];
        int i2 = iArr[1];
        if (checkInvalidSimIdx(i2, "onWifiPdnActivate(): invalid SIM id")) {
            return;
        }
        boolean zIsWifiPdnExisted = isWifiPdnExisted();
        if (SystemProperties.getInt(PROPERTY_MIMS_SUPPORT, 0) < 2) {
            log("MIMS does not support, sync up pdn status to all slots.");
            for (int i3 = 0; i3 < this.mSimCount; i3++) {
                this.mWifiPdnExisted[i3] = i > 0;
            }
        } else {
            log("MIMS supported, update pdn status to specific slot[" + i2 + "].");
            this.mWifiPdnExisted[i2] = i > 0;
        }
        checkIfstartWifiScan(false);
        if (zIsWifiPdnExisted != isWifiPdnExisted()) {
            handleWifiDefferOff(WifiLockSource.MODEM_STATE_CHANGE, 0);
        }
    }

    private void onWifiPingRequest(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onWifiPingRequest(): result is null");
            return;
        }
        if (iArr.length < 2) {
            Rlog.e(TAG, "onWifiPingRequest(): Bad params");
            return;
        }
        int i = iArr[0];
        int i2 = iArr[1];
        if (checkInvalidSimIdx(i2, "onWifiPingRequest(): invalid SIM id")) {
            return;
        }
        log("onWifiPingRequest: rat = " + i + ", simIdx = " + i2);
        PingDns pingDns = new PingDns(this.mContext, i2, i, this);
        this.mPingDns = pingDns;
        pingDns.pingWifiGateway();
    }

    private void registerForBroadcast() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
        intentFilter.addAction("android.net.wifi.STATE_CHANGE");
        intentFilter.addAction("android.intent.action.AIRPLANE_MODE");
        intentFilter.addAction("android.net.wifi.action.WIFI_SCAN_AVAILABILITY_CHANGED");
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    private void registerIndication() {
        for (int i = 0; i < this.mSimCount; i++) {
            this.mMwiRil[i].registerRssiThresholdChanged(this, 1101, null);
            this.mMwiRil[i].registerWifiPdnActivated(this, EVENT_ON_WIFI_PDN_ACTIVATE, null);
            this.mMwiRil[i].registerNattKeepAliveChanged(this, EVENT_ON_NATT_KEEP_ALIVE_CHANGED, null);
            this.mMwiRil[i].registerWifiPingRequest(this, EVENT_ON_WIFI_PING_REQUEST, null);
            this.mMwiRil[i].registerWifiLock(this, EVENT_ON_WIFI_LOCK, null);
        }
    }

    private void setNattKeepAliveStatus(Message message) {
        Message messageObtainMessage = obtainMessage(RESPONSE_SET_NATT_KEEP_ALIVE_STATUS);
        PacketKeepAliveProcessor.KeepAliveConfig keepAliveConfig = (PacketKeepAliveProcessor.KeepAliveConfig) message.obj;
        getMwiRil().setNattKeepAliveStatus(WIFI_IF_NAME, keepAliveConfig.isEnabled(), keepAliveConfig.getSrcIp(), keepAliveConfig.getSrcPort(), keepAliveConfig.getDstIp(), keepAliveConfig.getDstPort(), messageObtainMessage);
    }

    private void setWifiAssoc() {
        Message messageObtainMessage = obtainMessage(1202);
        int i = this.mMtu;
        int i2 = i == 0 ? DEFAULT_MTU_SIZE : i;
        log("setWifiAssoc() ifName: " + this.mIfName + " associated: " + this.mIsWifiConnected + " ssid: " + maskString(this.mSsid) + " apMac: " + maskString(this.mWifiApMac) + ", mtu = " + i2);
        getMwiRil().setWifiAssociated(WIFI_IF_NAME, TextUtils.isEmpty(this.mSsid) ? false : this.mIsWifiConnected, this.mSsid, this.mWifiApMac, i2, mWifiUeMac, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v3, types: [int] */
    /* JADX WARN: Type inference failed for: r2v4 */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r4v2, types: [com.mediatek.wfo.ril.MwiRIL] */
    /* JADX WARN: Type inference failed for: r7v0, types: [boolean] */
    /* JADX WARN: Type inference failed for: r9v0, types: [com.mediatek.wfo.impl.WifiPdnHandler] */
    public void setWifiEnabled() {
        Message messageObtainMessage = obtainMessage(RESPONSE_SET_WIFI_ENABLED);
        boolean zIsEccInProgress = isEccInProgress();
        log("setWifiEnabled(): " + this.mIsWifiEnabled + ", mIsAirplaneModeOn: " + this.mIsAirplaneModeOn + ", isEccInProgress: " + zIsEccInProgress);
        ?? r2 = this.mIsWifiEnabled;
        if (!allowWfcInAirplaneMode()) {
            log("allowWfcInAirplaneMode: false");
            r2 = 0;
        }
        getMwiRil().setWifiEnabled(WIFI_IF_NAME, r2, generateWifiEnableCause(false, this.mIsAirplaneModeOn, true, r2, SystemProperties.getInt("persist.vendor.mtk.wfc.enable", 0) >= 1 && this.mIsAirplaneModeOn && !zIsEccInProgress), messageObtainMessage);
    }

    private void setWifiEnabledWithSyncAPMode() {
        Message messageObtainMessage = obtainMessage(RESPONSE_SET_WIFI_ENABLED);
        boolean zIsEccInProgress = isEccInProgress();
        try {
            boolean airplaneModeFromSettings = getAirplaneModeFromSettings();
            if (this.mIsAirplaneModeOn != airplaneModeFromSettings) {
                this.mIsAirplaneModeOn = airplaneModeFromSettings;
                log("setWifiEnabledWithSyncAPMode(): update mIsAirplaneModeOn from settings");
            }
        } catch (Settings.SettingNotFoundException e) {
            Rlog.e(TAG, "Can not get AIRPLANE_MODE_ON from provider.");
        }
        log("setWifiEnabledWithSyncAPMode(): " + this.mIsWifiEnabled + ", mIsAirplaneModeOn: " + this.mIsAirplaneModeOn + ", isEccInProgress: " + zIsEccInProgress);
        getMwiRil().setWifiEnabled(WIFI_IF_NAME, this.mIsWifiEnabled ? 1 : 0, generateWifiEnableCause(true, this.mIsAirplaneModeOn, true, this.mIsWifiEnabled, SystemProperties.getInt("persist.vendor.mtk.wfc.enable", 0) >= 1 && this.mIsAirplaneModeOn && !zIsEccInProgress), messageObtainMessage);
    }

    private void setWifiIpAddress() {
        Message messageObtainMessage = obtainMessage(1203);
        log("setWifiIpAddr() ifName: " + this.mIfName + " ipv4Addr: " + maskString(this.mWifiIpv4Address) + " ipv6Addr: " + maskString(this.mWifiIpv6Address) + " ipv4PrefixLen: " + this.mWifiIpv4PrefixLen + " ipv6PrefixLen: " + this.mWifiIpv6PrefixLen);
        List<InetAddress> list = this.mDnsServers;
        if (list == null) {
            Rlog.e(TAG, "setWifiIpAddress(): mDnsServers = null");
            getMwiRil().setWifiIpAddress(WIFI_IF_NAME, this.mWifiIpv4Address, this.mWifiIpv6Address, this.mWifiIpv4PrefixLen, this.mWifiIpv6PrefixLen, this.mWifiIpv4Gateway, this.mWifiIpv6Gateway, 0, "\"\"", messageObtainMessage);
            return;
        }
        int size = list.size();
        StringBuilder sb = new StringBuilder();
        for (InetAddress inetAddress : this.mDnsServers) {
            if (sb.length() > 0) {
                sb.append(",");
            }
            String hostAddress = inetAddress.getHostAddress();
            sb.append("\"");
            sb.append(hostAddress);
            sb.append("\"");
            log("setWifiIpAddress(): dnsServerAddress: " + hostAddress);
        }
        getMwiRil().setWifiIpAddress(WIFI_IF_NAME, this.mWifiIpv4Address, this.mWifiIpv6Address, this.mWifiIpv4PrefixLen, this.mWifiIpv6PrefixLen, this.mWifiIpv4Gateway, this.mWifiIpv6Gateway, size, sb.toString(), messageObtainMessage);
    }

    private void setWifiPingResult(Message message) {
        int pingLatency;
        int packetLoss;
        Message messageObtainMessage = obtainMessage(RESPONSE_SET_WIFI_PING_RESULT);
        PingData pingData = (PingData) message.obj;
        if (this.mIsWifiConnected) {
            log("setWifiPingResult() As optr server has delayed response");
            packetLoss = 0;
            pingLatency = 50;
        } else {
            pingLatency = (int) pingData.getPingLatency();
            packetLoss = pingData.getPacketLoss();
        }
        int i = message.arg1;
        int i2 = message.arg2;
        log("setWifiPingResult() latency: = " + pingLatency + ", packetLost: = " + packetLoss);
        getMwiRil().setWifiPingResult(i2, pingLatency, packetLoss, messageObtainMessage);
    }

    private void setWifiSignalLevel() {
        Message messageObtainMessage = obtainMessage(1201);
        log("setWifiSignalLevel(): " + this.mLastRssi);
        getMwiRil().setWifiSignalLevel(this.mLastRssi, 60, messageObtainMessage);
    }

    private void setWifiUeMac() {
        getMwiRil().setWfcConfig_WifiUeMac(WIFI_IF_NAME, mWifiUeMac, obtainMessage(RESPONSE_SET_WIFI_UE_MAC));
    }

    private void setupCallbacksForWifiStatus() {
        ConnectivityManager connectivityManager = this.mConnectivityManager;
        if (connectivityManager == null) {
            log("Unexpected error, mConnectivityManager = null");
        } else {
            connectivityManager.registerDefaultNetworkCallback(new ConnectivityManager.NetworkCallback() { // from class: com.mediatek.wfo.impl.WifiPdnHandler.2
                @Override // android.net.ConnectivityManager.NetworkCallback
                public void onAvailable(Network network) {
                    NetworkCapabilities networkCapabilities = WifiPdnHandler.this.mConnectivityManager.getNetworkCapabilities(network);
                    if (networkCapabilities == null) {
                        WifiPdnHandler.this.log("Empty network capability:" + network);
                        return;
                    }
                    if (networkCapabilities.hasTransport(1) && networkCapabilities.hasCapability(16)) {
                        WifiPdnHandler.this.log("WIFI onAvailable.");
                        WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, 1, 0, null));
                        WifiPdnHandler.this.mNetwork = network;
                        return;
                    }
                    WifiPdnHandler.this.log("Without TRANSPORT_WIFI.");
                    if (WifiPdnHandler.this.mIsWifiConnected) {
                        WifiPdnHandler.this.log("TRANSPORT_WIFI lost.");
                        WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, 0, 0, null));
                    }
                }

                @Override // android.net.ConnectivityManager.NetworkCallback
                public void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
                    if (networkCapabilities == null) {
                        WifiPdnHandler.this.log("onCapabilitiesChanged, Capabilities=null");
                        return;
                    }
                    if (networkCapabilities.hasTransport(1) && networkCapabilities.hasCapability(16)) {
                        int signalStrength = networkCapabilities.getSignalStrength();
                        WifiPdnHandler.this.log("onCapabilitiesChanged, rssi == " + signalStrength);
                        if (signalStrength == Integer.MIN_VALUE && WifiPdnHandler.this.isWifiPdnExisted()) {
                            WifiPdnHandler.this.log("onCapabilitiesChanged request partial scan to switch wifi ap");
                        }
                        if (!WifiPdnHandler.this.mOldWifiConnectedFromNetworkInfo) {
                            WifiPdnHandler.this.log("onCapabilitiesChanged but wifi has been disconnected, return.");
                            return;
                        }
                        if (!WifiPdnHandler.this.mIsWifiConnected) {
                            WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, 1, 0, null));
                        }
                        WifiPdnHandler.this.mNetwork = network;
                        if (WifiPdnHandler.this.mLastRssi == signalStrength) {
                            return;
                        }
                        WifiPdnHandler.this.mLastRssi = signalStrength;
                        WifiPdnHandler.this.mRssiChange = true;
                        WifiPdnHandler.this.sendEmptyMessage(1001);
                    }
                }

                @Override // android.net.ConnectivityManager.NetworkCallback
                public void onLinkPropertiesChanged(Network network, LinkProperties linkProperties) {
                    NetworkCapabilities networkCapabilities = WifiPdnHandler.this.mConnectivityManager.getNetworkCapabilities(network);
                    if (networkCapabilities == null) {
                        WifiPdnHandler.this.log("onLinkPropertiesChanged Empty network capability:" + network);
                        return;
                    }
                    if (!networkCapabilities.hasTransport(1) || !networkCapabilities.hasCapability(16)) {
                        WifiPdnHandler.this.log("onLinkPropertiesChanged Without TRANSPORT_WIFI.");
                        return;
                    }
                    WifiPdnHandler.this.log("onLinkPropertiesChanged TRANSPORT_WIFI: " + WifiPdnHandler.this.mIsWifiConnected);
                    if (WifiPdnHandler.this.mIsWifiConnected) {
                        WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, 1, 0, null));
                    }
                    WifiPdnHandler.this.mNetwork = network;
                }

                @Override // android.net.ConnectivityManager.NetworkCallback
                public void onLost(Network network) {
                    NetworkCapabilities networkCapabilities = WifiPdnHandler.this.mConnectivityManager.getNetworkCapabilities(network);
                    if (networkCapabilities == null) {
                        if (WifiPdnHandler.this.mNetwork != null && !WifiPdnHandler.this.mNetwork.equals(network)) {
                            WifiPdnHandler.this.log("OnLost with " + network + ", mNetwork: " + WifiPdnHandler.this.mNetwork);
                            return;
                        }
                    } else if (!networkCapabilities.hasTransport(1) || !networkCapabilities.hasCapability(16)) {
                        WifiPdnHandler.this.log("OnLost without TRANSPORT_WIFI.");
                        return;
                    }
                    WifiPdnHandler.this.log("WIFI onLost.");
                    WifiPdnHandler.this.sendMessage(WifiPdnHandler.this.obtainMessage(1000, 0, 0, null));
                    WifiPdnHandler.this.mNetwork = null;
                }
            });
        }
    }

    private void updateLastRssi() {
        WifiManager wifiManager = this.mWifiManager;
        if (wifiManager != null) {
            WifiInfo connectionInfo = wifiManager.getConnectionInfo();
            if (connectionInfo != null) {
                this.mLastRssi = connectionInfo.getRssi();
                return;
            }
            return;
        }
        Rlog.e(TAG, "updateLastRssi(): WifiManager null");
        Message messageObtainMessage = obtainMessage(1011);
        synchronized (this.mLock) {
            this.mPendingMsgs.add(messageObtainMessage);
        }
    }

    private String updateSsidToHexString(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        if (str.startsWith("\"") && str.endsWith("\"")) {
            str = str.substring(1, str.length() - 1);
        }
        byte[] bytes = str.getBytes();
        StringBuilder sb = new StringBuilder();
        for (byte b : bytes) {
            sb.append(String.format("%02x", Byte.valueOf(b)));
        }
        return sb.toString();
    }

    private void updateWifiConnectedInfo(int i) {
        boolean z;
        boolean z2;
        boolean z3;
        RouteInfo routeInfo;
        boolean z4 = false;
        boolean z5 = false;
        if (i == 0) {
            WfcHandler wfcHandler = this.mWfcHandler;
            if (wfcHandler != null) {
                wfcHandler.updatedWifiConnectedStatus(false);
            }
            if (this.mIsWifiConnected) {
                this.mIsWifiConnected = false;
                this.mWifiApMac = "";
                this.mWifiIpv4Address = "";
                this.mWifiIpv6Address = "";
                this.mWifiIpv4Gateway = "";
                this.mWifiIpv6Gateway = "";
                this.mWifiIpv4PrefixLen = -1;
                this.mWifiIpv6PrefixLen = -1;
                this.mDnsServers = null;
                this.mIfName = "";
                this.mSsid = "";
                this.mMtu = 0;
                z4 = true;
                z5 = true;
            }
        } else {
            WfcHandler wfcHandler2 = this.mWfcHandler;
            if (wfcHandler2 != null) {
                wfcHandler2.updatedWifiConnectedStatus(true);
            }
            String bssid = "";
            String hostAddress = "";
            String str = "";
            String interfaceName = "";
            String strUpdateSsidToHexString = "";
            int prefixLength = -1;
            int prefixLength2 = -1;
            RouteInfo routeInfo2 = null;
            String hostAddress2 = "";
            this.mIsWifiConnected = true;
            if (!this.mIsWifiEnabled && this.mWifiManager.isWifiEnabled()) {
                this.mIsWifiEnabled = true;
                setWifiEnabled();
            }
            WifiInfo connectionInfo = null;
            WifiManager wifiManager = this.mWifiManager;
            if (wifiManager != null) {
                connectionInfo = wifiManager.getConnectionInfo();
            } else {
                Message messageObtainMessage = obtainMessage(1009, i, 0);
                synchronized (this.mLock) {
                    this.mPendingMsgs.add(messageObtainMessage);
                }
            }
            if (connectionInfo != null) {
                bssid = connectionInfo.getBSSID();
                String ssid = connectionInfo.getSSID();
                if (NONE_SSID.equals(ssid)) {
                    ssid = "";
                    log("updateWifiConnectedInfo: <unknown ssid>");
                }
                strUpdateSsidToHexString = updateSsidToHexString(ssid);
                if (this.mWifiApMac.equals(bssid) || (TextUtils.isEmpty(this.mWifiApMac) && bssid == null)) {
                    z = false;
                } else {
                    this.mWifiApMac = bssid == null ? "" : bssid;
                    z = true;
                    log("updateWifiConnectedInfo(): mWifiApMac = " + maskString(this.mWifiApMac));
                }
            } else {
                z = z4;
            }
            Network[] allNetworks = this.mConnectivityManager.getAllNetworks();
            int length = allNetworks.length;
            boolean z6 = z;
            String hostAddress3 = "";
            List<InetAddress> dnsServers = null;
            int i2 = 0;
            int i3 = 0;
            while (i3 < length) {
                int i4 = length;
                Network[] networkArr = allNetworks;
                LinkProperties linkProperties = this.mConnectivityManager.getLinkProperties(allNetworks[i3]);
                if (linkProperties == null || linkProperties.getInterfaceName() == null) {
                    routeInfo = routeInfo2;
                } else {
                    routeInfo = routeInfo2;
                    if (linkProperties.getInterfaceName().startsWith("wlan")) {
                        Iterator<LinkAddress> it = linkProperties.getLinkAddresses().iterator();
                        while (it.hasNext()) {
                            LinkAddress next = it.next();
                            Iterator<LinkAddress> it2 = it;
                            InetAddress address = next.getAddress();
                            String str2 = hostAddress;
                            if ((address instanceof Inet4Address) && !address.isLoopbackAddress()) {
                                hostAddress = address.getHostAddress();
                                prefixLength = next.getPrefixLength();
                            } else if (!(address instanceof Inet6Address) || address.isLinkLocalAddress() || address.isLoopbackAddress()) {
                                hostAddress = str2;
                            } else {
                                String hostAddress4 = address.getHostAddress();
                                prefixLength2 = next.getPrefixLength();
                                str = hostAddress4;
                                hostAddress = str2;
                            }
                            it = it2;
                        }
                        String str3 = hostAddress;
                        dnsServers = linkProperties.getDnsServers();
                        int mtu = linkProperties.getMtu();
                        routeInfo2 = routeInfo;
                        for (RouteInfo routeInfo3 : linkProperties.getRoutes()) {
                            if (routeInfo3.isIPv4Default()) {
                                routeInfo2 = routeInfo3;
                                hostAddress2 = routeInfo2.getGateway() != null ? routeInfo2.getGateway().getHostAddress() : "";
                            } else if (routeInfo3.isIPv6Default()) {
                                hostAddress3 = routeInfo3.getGateway() != null ? routeInfo3.getGateway().getHostAddress() : "";
                            }
                        }
                        interfaceName = linkProperties.getInterfaceName();
                        hostAddress = str3;
                        i2 = mtu;
                    }
                    i3++;
                    length = i4;
                    allNetworks = networkArr;
                }
                routeInfo2 = routeInfo;
                i3++;
                length = i4;
                allNetworks = networkArr;
            }
            if (this.mWifiIpv4Address.equals(hostAddress)) {
                z5 = false;
            } else {
                this.mWifiIpv4Address = TextUtils.isEmpty(hostAddress) ? "" : hostAddress;
                this.mWifiIpv4PrefixLen = prefixLength;
                this.mWifiIpv4Gateway = hostAddress2;
                z5 = true;
                log("updateWifiConnectedInfo(): mWifiIpv4Address = " + maskString(this.mWifiIpv4Address));
            }
            if (!this.mWifiIpv6Address.equals(str)) {
                this.mWifiIpv6Address = TextUtils.isEmpty(str) ? "" : str;
                this.mWifiIpv6PrefixLen = prefixLength2;
                this.mWifiIpv6Gateway = hostAddress3;
                z5 = true;
                log("updateWifiConnectedInfo(): mWifiIpv6Address = " + maskString(this.mWifiIpv6Address));
            }
            if (this.mIfName.equals(interfaceName)) {
                z2 = z6;
            } else {
                this.mIfName = interfaceName == null ? "" : interfaceName;
                z2 = true;
                log("updateWifiConnectedInfo(): mIfName = " + this.mIfName);
            }
            if (!this.mSsid.equals(strUpdateSsidToHexString)) {
                this.mSsid = strUpdateSsidToHexString == null ? "" : strUpdateSsidToHexString;
                z2 = true;
                log("updateWifiConnectedInfo(): mSsid = " + maskString(this.mSsid));
            }
            if (dnsServers == null) {
                z3 = z2;
            } else if (this.mDnsServers == null) {
                this.mDnsServers = dnsServers;
                z5 = true;
                log("updateWifiConnectedInfo(): mDnsServers =" + this.mDnsServers);
                z3 = z2;
            } else {
                ArrayList arrayList = new ArrayList(this.mDnsServers);
                arrayList.retainAll(dnsServers);
                z3 = z2;
                if (arrayList.size() != dnsServers.size()) {
                    this.mDnsServers = dnsServers;
                    log("updateWifiConnectedInfo(): mDnsServers =" + this.mDnsServers);
                    z5 = true;
                }
            }
            if (i2 < 0 || this.mMtu == i2) {
                z4 = z3;
            } else {
                this.mMtu = i2;
                log("updateWifiConnectedInfo(): mMtu = " + this.mMtu);
                z4 = true;
            }
        }
        checkIfstartWifiScan(false);
        if (z4) {
            setWifiAssoc();
        }
        if (z5) {
            setWifiIpAddress();
        }
        if (this.mIsWifiConnected && this.mRssiChange) {
            log("updateWifiConnectedInfo(): mRssiChange = " + this.mRssiChange);
            setWifiSignalLevel();
        }
        this.mRssiChange = false;
    }

    private String updateWlanMacAddr() {
        try {
            NetworkInterface byName = NetworkInterface.getByName(WIFI_IF_NAME);
            if (byName == null) {
                log("updateWlanMacAddr wnif == null");
                return "";
            }
            byte[] hardwareAddress = byName.getHardwareAddress();
            if (hardwareAddress == null) {
                log("updateWlanMacAddr macBytes == null");
                return "";
            }
            StringBuilder sb = new StringBuilder();
            for (byte b : hardwareAddress) {
                sb.append(String.format("%02X:", Byte.valueOf(b)));
            }
            if (sb.length() > 0) {
                sb.deleteCharAt(sb.length() - 1);
            }
            return sb.toString();
        } catch (Exception e) {
            return "02:00:00:00:00:00";
        }
    }

    public Handler getHandler() {
        return this;
    }

    public int getLastRssi() {
        return this.mLastRssi;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) throws Settings.SettingNotFoundException {
        int i = message.what;
        switch (i) {
            case 1000:
                int i2 = message.arg1;
                if (i2 == 0) {
                    log("wifi is disconnect, notify packet keep alive to stop");
                    this.mPacketKeepAliveProcessor.notifyWifiDisconnect();
                } else {
                    String strUpdateWlanMacAddr = updateWlanMacAddr();
                    if (!TextUtils.equals(strUpdateWlanMacAddr, "02:00:00:00:00:00") && !TextUtils.equals(mWifiUeMac, strUpdateWlanMacAddr)) {
                        mWifiUeMac = strUpdateWlanMacAddr;
                        log("WifiPdnHandler updateWlanMacAddr mWifiUeMac: " + maskString(mWifiUeMac));
                    }
                }
                updateWifiConnectedInfo(i2);
                return;
            case 1001:
                if (this.mIsWifiConnected) {
                    setWifiSignalLevel();
                    this.mRssiChange = false;
                    return;
                }
                return;
            case 1002:
                setWifiEnabled();
                return;
            case 1003:
                setWifiAssoc();
                return;
            case 1004:
                setWifiIpAddress();
                return;
            case 1005:
                log("Sync airplane mode to MD: " + this.mIsAirplaneModeChange);
                if (this.mIsAirplaneModeChange) {
                    this.mIsAirplaneModeChange = false;
                    setWifiEnabledWithSyncAPMode();
                }
                setWifiAssoc();
                setWifiEnabled();
                if (this.mIsWifiConnected) {
                    setWifiSignalLevel();
                    setWifiIpAddress();
                    this.mRssiChange = false;
                    return;
                }
                return;
            case 1006:
                checkIfstartWifiScan(true);
                return;
            case 1007:
                setNattKeepAliveStatus(message);
                return;
            case 1008:
                initWifiManager();
                return;
            case 1009:
                updateWifiConnectedInfo(message.arg1);
                return;
            case 1010:
                boolean zBooleanValue = ((Boolean) message.obj).booleanValue();
                Rlog.d(TAG, "Retry checkIfstartWifiScan, scanImmediately: " + zBooleanValue);
                checkIfstartWifiScan(zBooleanValue);
                return;
            case 1011:
                updateLastRssi();
                setWifiSignalLevel();
                return;
            case 1012:
                synchronized (this.mLock) {
                    for (Message message2 : this.mPendingMsgs) {
                        log("Retry: " + messageToString(message2));
                        message2.sendToTarget();
                    }
                    this.mPendingMsgs.clear();
                    break;
                }
                return;
            case 1013:
                handleWifiStateChange(message.arg1);
                return;
            case 1014:
                setWifiUeMac();
                return;
            case 1015:
                initialize();
                return;
            default:
                switch (i) {
                    case 1101:
                        onWifiMonitoringThreshouldChanged(message);
                        return;
                    case EVENT_ON_WIFI_PDN_ACTIVATE /* 1102 */:
                        onWifiPdnActivate(message);
                        return;
                    case EVENT_ON_NATT_KEEP_ALIVE_CHANGED /* 1103 */:
                        onNattKeepAliveChanged(message);
                        return;
                    default:
                        switch (i) {
                            case EVENT_ON_WIFI_PING_REQUEST /* 1150 */:
                                onWifiPingRequest(message);
                                return;
                            case EVENT_SET_WIFI_PING_RESULT /* 1151 */:
                                setWifiPingResult(message);
                                return;
                            case EVENT_HANDLE_AIRPLANE_MODE /* 1152 */:
                                handleAirplaneMode();
                                return;
                            case EVENT_ON_WIFI_LOCK /* 1153 */:
                                onWifiLock(message);
                                return;
                            default:
                                switch (i) {
                                    case RESPONSE_SET_WIFI_ENABLED /* 1200 */:
                                        handleRetry(1002, (AsyncResult) message.obj);
                                        return;
                                    case 1201:
                                        handleRetry(1001, (AsyncResult) message.obj);
                                        return;
                                    case 1202:
                                        handleRetry(1003, (AsyncResult) message.obj);
                                        return;
                                    case 1203:
                                        handleRetry(1004, (AsyncResult) message.obj);
                                        return;
                                    case RESPONSE_SET_NATT_KEEP_ALIVE_STATUS /* 1204 */:
                                        handleRetry(1007, (AsyncResult) message.obj);
                                        return;
                                    case RESPONSE_SET_WIFI_PING_RESULT /* 1205 */:
                                        handleRetry(EVENT_SET_WIFI_PING_RESULT, (AsyncResult) message.obj);
                                        return;
                                    case RESPONSE_SET_WIFI_UE_MAC /* 1206 */:
                                        handleRetry(1014, (AsyncResult) message.obj);
                                        return;
                                    default:
                                        return;
                                }
                        }
                }
        }
    }

    public void handleRadioStateChanged(int i, int i2) {
        log("handleRadioStateChanged intRadioState: " + i2);
        this.mRadioState = i2;
        if (i2 != 2) {
            log("send EVENT_RADIO_AVAILABLE");
            if (isEccInProgress() || (i2 == 1 && this.mIsAirplaneModeOn)) {
                log("Disable airplane mode if radio is on");
                this.mIsAirplaneModeOn = false;
                this.mIsAirplaneModeChange = true;
            }
            sendMessage(obtainMessage(1005));
        }
    }

    public boolean isWifiConnected() {
        return this.mIsWifiConnected;
    }

    public boolean isWifiPdnExisted() {
        for (int i = 0; i < this.mSimCount; i++) {
            if (this.mWifiPdnExisted[i]) {
                log("isWifiPdnExisted: found WiFi PDN on SIM: " + i);
                return true;
            }
        }
        return false;
    }

    protected void log(String str) {
        if (!USR_BUILD || TELDBG) {
            Rlog.d(TAG, str);
        }
    }

    public void setWfcHandler(WfcHandler wfcHandler) {
        this.mWfcHandler = wfcHandler;
    }

    public void setWifiOff() {
        this.mIsWifiEnabled = false;
        setWifiEnabled();
    }
}
