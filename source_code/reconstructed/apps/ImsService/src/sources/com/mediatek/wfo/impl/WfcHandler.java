package com.mediatek.wfo.impl;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.net.wifi.ScanResult;
import android.net.wifi.WifiConfiguration;
import android.net.wifi.WifiManager;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Parcelable;
import android.os.PersistableBundle;
import android.os.RemoteCallbackList;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.CarrierConfigManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsReasonInfo;
import android.text.TextUtils;
import com.android.ims.ImsManager;
import com.mediatek.ims.ImsConstants;
import com.mediatek.ims.WfcReasonInfo;
import com.mediatek.wfo.DisconnectCause;
import com.mediatek.wfo.IWifiOffloadListener;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.op.IWosExt;
import com.mediatek.wfo.op.OpWosCustomizationUtils;
import com.mediatek.wfo.ril.MwiRIL;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class WfcHandler extends Handler {
    private static final String ACTION_OPERATOR_CONFIG_CHANGED = "com.mediatek.common.carrierexpress.operator_config_changed";
    private static final int BASE = 2000;
    private static final int EVENT_HANDLE_MODEM_POWER = 2000;
    public static final int EVENT_HANDLE_WFC_STATE_CHANGED = 2105;
    private static final int EVENT_HANDLE_WIFI_STATE_CHANGE = 2003;
    private static final int EVENT_INITIALIZE = 2005;
    private static final int EVENT_NOTIFY_EPDG_SCREEN_STATE = 2004;
    private static final int EVENT_NOTIFY_WIFI_NO_INTERNET = 2002;
    private static final int EVENT_ON_ALLOW_WIFI_OFF = 2202;
    private static final int EVENT_ON_LOCATION_TIMEOUT = 2201;
    public static final int EVENT_ON_PDN_ERROR = 2101;
    public static final int EVENT_ON_PDN_HANDOVER = 2100;
    public static final int EVENT_ON_ROVE_OUT = 2102;
    public static final int EVENT_ON_WFC_PDN_STATE_CHANGED = 2103;
    public static final int EVENT_ON_WIFI_PDN_OOS = 2104;
    private static final int EVENT_SET_WFC_EMERGENCY_ADDRESS_ID = 2001;
    private static final String EXTRA_POWER_ON_MODEM_KEY = "mediatek:POWER_ON_MODEM";
    private static final String IMS_REG_ERROR_NOTIFICATION = "com.android.imsconnection.DISCONNECTED";
    private static final String IMS_REG_ERROR_NOTIFICATION_PERMISSION = "com.mediatek.permission.IMS_ERR_NOTIFICATION";
    private static final String INTENT_KEY_PROP_KEY = "simPropKey";
    private static final int INVALID = -1;
    private static final int MAX_VALID_SIM_COUNT = 4;
    private static final String MTK_KEY_DISABLE_WFC_AFTER_AUTH_FAIL = "mtk_carrier_disable_wfc_after_auth_fail_bool";
    private static final int NOT_REGISTERED = 2;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String RADIO_MANAGER_POWER_ON_MODEM = "mediatek.intent.action.WFC_POWER_ON_MODEM";
    private static final int REGISTERED = 1;
    private static final int REGISTERING = 3;
    private static final int RESPONSE_NOTIFY_EPDG_SCREEN_STATE = 2203;
    private static final int RESPONSE_SET_WFC_EMERGENCY_ADDRESS_ID = 2200;
    private static final int RETRY_TIMEOUT = 3000;
    private static final String TAG = "WfcHandler";
    private static final boolean TELDBG;
    private static final boolean USR_BUILD;
    private static final String WFC_REQUEST_PARTIAL_SCAN = "com.mediatek.intent.action.WFC_REQUEST_PARTIAL_SCAN";
    private static final String WFC_STATUS_CHANGED = "com.mediatek.intent.action.WFC_STATUS_CHANGED";
    private ConnectivityManager mConnectivityManager;
    private final ContentObserver mContentObserver;
    private Context mContext;
    private DisconnectCause[] mDisconnectCause;
    private boolean mHasWiFiDisabledPending;
    private boolean[] mIsWfcSettingsOn;
    private boolean mIsWifiConnected;
    private boolean mIsWifiEnabled;
    private boolean mIsWifiL2Connected;
    private RemoteCallbackList<IWifiOffloadListener> mListeners;
    private MwiRIL[] mMwiRil;
    private int mPartialScanCount;
    private BroadcastReceiver mReceiver;
    private int mScreenState;
    private int mSimCount;
    private String mWfcEccAid;
    private int[] mWfcState;
    private IWifiOffloadService mWfoService;
    private WifiPdnHandler mWifiPdnHandler;
    IWosExt mWosExt;
    private static final String AID_SETTING_URI_STR = "wfc_aid_value";
    private static final Uri AID_SETTING_URI = Settings.Global.getUriFor(AID_SETTING_URI_STR);
    private static WfcHandler mInstance = null;
    private static int WIFI_NO_INTERNET_ERROR_CODE = WfcReasonInfo.CODE_WFC_EPDG_CON_OR_LOCAL_OR_NULL_PTR_ERROR;
    private static int WIFI_NO_INTERNET_TIMEOUT = 8000;
    private static int CODE_WFC_EPDG_IPSEC_SETUP_ERROR = WfcReasonInfo.CODE_WFC_EPDG_IPSEC_SETUP_ERROR;
    private static int SUB_CAUSE_IKEV2_24 = 24;

    enum ScreenState {
        USER_PRESENT,
        SCREEN_OFF,
        SCREEN_ON
    }

    static {
        USR_BUILD = TextUtils.equals(Build.TYPE, "user") || TextUtils.equals(Build.TYPE, "userdebug");
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public WfcHandler(Context context, WifiPdnHandler wifiPdnHandler, int i, Looper looper, MwiRIL[] mwiRILArr) {
        super(looper);
        this.mIsWifiL2Connected = false;
        this.mHasWiFiDisabledPending = false;
        this.mWosExt = null;
        this.mListeners = new RemoteCallbackList<>();
        this.mWfoService = new IWifiOffloadService.Stub() { // from class: com.mediatek.wfo.impl.WfcHandler.1
            @Override // com.mediatek.wfo.IWifiOffloadService
            public void factoryReset() {
                WfcHandler.this.log("factoryReset()");
                WfcHandler.this.mWosExt.factoryReset();
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public DisconnectCause getDisconnectCause(int i2) {
                if (WfcHandler.this.checkInvalidSimIdx(i2, "getDisconnectCause()")) {
                    return null;
                }
                return WfcHandler.this.mDisconnectCause[i2];
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public String[] getMccMncAllowList(int i2) {
                WfcHandler.this.log("getMccMncAllowList() not supported");
                return null;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public int getRatType(int i2) {
                WfcHandler.this.log("getRatType() not supported");
                return 0;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean isWifiConnected() {
                return WfcHandler.this.mWifiPdnHandler.isWifiConnected();
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void registerForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) {
                WfcHandler.this.log("registerForHandoverEvent for " + iWifiOffloadListener.asBinder());
                WfcHandler.this.mListeners.register(iWifiOffloadListener);
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void setEpdgFqdn(int i2, String str, boolean z) {
                WfcHandler.this.log("setEpdgFqdn() not supported");
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean setMccMncAllowList(String[] strArr) {
                WfcHandler.this.log("setMccMncAllowList() not supported");
                return false;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean setWifiOff() {
                if (WfcHandler.this.mWifiPdnHandler.isWifiPdnExisted()) {
                    WfcHandler.this.mHasWiFiDisabledPending = true;
                    WfcHandler.this.mWifiPdnHandler.setWifiOff();
                } else {
                    WfcHandler.this.mHasWiFiDisabledPending = false;
                }
                WfcHandler.this.log("setWifiOff() mHasWiFiDisabledPending" + WfcHandler.this.mHasWiFiDisabledPending);
                return WfcHandler.this.mHasWiFiDisabledPending;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void unregisterForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) {
                WfcHandler.this.log("unregisterForHandoverEvent for " + iWifiOffloadListener.asBinder());
                WfcHandler.this.mListeners.unregister(iWifiOffloadListener);
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void updateCallState(int i2, int i3, int i4, int i5) {
                WfcHandler.this.log("updateCallState() not supported");
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void updateRadioState(int i2, int i3) {
                WfcHandler.this.log("updateRadioState() : sim: " + i2 + " radioState" + i3);
                if (WfcHandler.this.mWifiPdnHandler != null) {
                    WfcHandler.this.mWifiPdnHandler.handleRadioStateChanged(i2, i3);
                }
            }
        };
        this.mContentObserver = new ContentObserver(new Handler()) { // from class: com.mediatek.wfo.impl.WfcHandler.2
            @Override // android.database.ContentObserver
            public void onChange(boolean z, Uri uri) {
                WfcHandler.this.log("SettingsObserver.onChange(), selfChange:" + z + ", uri:" + uri);
                if (WfcHandler.AID_SETTING_URI.equals(uri)) {
                    String string = Settings.Global.getString(WfcHandler.this.mContext.getContentResolver(), WfcHandler.AID_SETTING_URI_STR);
                    if (TextUtils.isEmpty(string)) {
                        WfcHandler.this.log("empty aid: " + string);
                        return;
                    }
                    WfcHandler.this.mWfcEccAid = string;
                    WfcHandler.this.log("mWfcEccAid: " + WfcHandler.this.mWfcEccAid);
                    Settings.Global.putString(WfcHandler.this.mContext.getContentResolver(), WfcHandler.AID_SETTING_URI_STR, "");
                    WfcHandler wfcHandler = WfcHandler.this;
                    wfcHandler.sendMessage(wfcHandler.obtainMessage(2001));
                }
            }
        };
        this.mReceiver = new BroadcastReceiver() { // from class: com.mediatek.wfo.impl.WfcHandler.3
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                WfcHandler.this.log("onReceive action:" + intent.getAction());
                if (intent.getAction().equals("android.net.wifi.WIFI_STATE_CHANGED")) {
                    WfcHandler wfcHandler = WfcHandler.this;
                    wfcHandler.sendMessage(wfcHandler.obtainMessage(2003));
                    return;
                }
                if (intent.getAction().equals("android.net.wifi.action.WIFI_SCAN_AVAILABILITY_CHANGED")) {
                    WfcHandler wfcHandler2 = WfcHandler.this;
                    wfcHandler2.sendMessage(wfcHandler2.obtainMessage(2003));
                    return;
                }
                if (intent.getAction().equals("android.telephony.action.CARRIER_CONFIG_CHANGED")) {
                    int intExtra = intent.getIntExtra("phone", -1);
                    ImsManager imsManager = ImsManager.getInstance(context2, intExtra);
                    if (imsManager != null && !imsManager.isWfcEnabledByPlatform()) {
                        WfcHandler.this.log("isWfcEnabledByPlatform(" + intExtra + ") is false, clearPDNErrorMessages");
                        WfcHandler.this.mWosExt.clearPDNErrorMessages();
                    }
                    WfcHandler.this.handleModemPower();
                    return;
                }
                if (intent.getAction().equals(WfcHandler.ACTION_OPERATOR_CONFIG_CHANGED)) {
                    WfcHandler.this.createWosExt();
                    return;
                }
                if (intent.getAction().equals("android.net.wifi.STATE_CHANGE")) {
                    Parcelable parcelableExtra = intent.getParcelableExtra("networkInfo");
                    if (parcelableExtra != null) {
                        WfcHandler.this.mIsWifiL2Connected = ((NetworkInfo) parcelableExtra).getState() == NetworkInfo.State.CONNECTED;
                        WfcHandler.this.checkIfShowNoInternetError(false);
                        return;
                    }
                    return;
                }
                if (intent.getAction().equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED")) {
                    if ("wfc_ims_enabled".equals(intent.getStringExtra(WfcHandler.INTENT_KEY_PROP_KEY))) {
                        WfcHandler.this.log("ACTION_SUBINFO_RECORD_UPDATED: WFC_IMS_ENABLED changes");
                        if (WfcHandler.this.updateWfcUISetting()) {
                            WfcHandler wfcHandler3 = WfcHandler.this;
                            wfcHandler3.sendMessage(wfcHandler3.obtainMessage(2000));
                            WfcHandler.this.checkIfShowNoInternetError(false);
                            return;
                        }
                        return;
                    }
                    return;
                }
                if (intent.getAction().equals(WfcHandler.WFC_STATUS_CHANGED)) {
                    if (WfcHandler.this.mWifiPdnHandler.isWifiPdnExisted() || !WfcHandler.this.mHasWiFiDisabledPending) {
                        return;
                    }
                    WfcHandler.this.mHasWiFiDisabledPending = false;
                    WfcHandler wfcHandler4 = WfcHandler.this;
                    wfcHandler4.sendMessage(wfcHandler4.obtainMessage(2202));
                    return;
                }
                if (intent.getAction().equals("android.intent.action.SCREEN_OFF")) {
                    WfcHandler.this.mScreenState = ScreenState.SCREEN_OFF.ordinal();
                    WfcHandler wfcHandler5 = WfcHandler.this;
                    wfcHandler5.notifyEPDGScreenState(wfcHandler5.mScreenState);
                } else if (intent.getAction().equals("android.intent.action.SCREEN_ON")) {
                    WfcHandler.this.mScreenState = ScreenState.SCREEN_ON.ordinal();
                    WfcHandler wfcHandler6 = WfcHandler.this;
                    wfcHandler6.notifyEPDGScreenState(wfcHandler6.mScreenState);
                } else if (intent.getAction().equals("android.intent.action.USER_PRESENT")) {
                    WfcHandler.this.mScreenState = ScreenState.USER_PRESENT.ordinal();
                    WfcHandler wfcHandler7 = WfcHandler.this;
                    wfcHandler7.notifyEPDGScreenState(wfcHandler7.mScreenState);
                }
            }
        };
        this.mContext = context;
        this.mWifiPdnHandler = wifiPdnHandler;
        if (wifiPdnHandler != null) {
            wifiPdnHandler.setWfcHandler(this);
        }
        int i2 = i <= 4 ? i : 4;
        this.mSimCount = i2;
        this.mMwiRil = mwiRILArr;
        this.mDisconnectCause = new DisconnectCause[i2];
        this.mWfcState = new int[i2];
        obtainMessage(2005).sendToTarget();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkIfShowNoInternetError(boolean z) {
        int mainCapabilityPhoneId = getMainCapabilityPhoneId();
        boolean zIsImsRegistered = TelephonyManager.getDefault().isImsRegistered(getSubIdBySlot(mainCapabilityPhoneId));
        boolean zIsWifiConnected = this.mWifiPdnHandler.isWifiConnected();
        if (!this.mIsWfcSettingsOn[mainCapabilityPhoneId] || zIsImsRegistered || !this.mIsWifiL2Connected || zIsWifiConnected) {
            if (hasMessages(2002)) {
                log("checkIfShowNoInternetError(): cancel 8s timeout");
                removeMessages(2002);
                return;
            }
            return;
        }
        if (z) {
            this.mWosExt.showPDNErrorMessages(WIFI_NO_INTERNET_ERROR_CODE);
        } else {
            if (hasMessages(2002)) {
                return;
            }
            log("checkIfShowNoInternetError(): start 8s timeout");
            sendMessageDelayed(obtainMessage(2002), WIFI_NO_INTERNET_TIMEOUT);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkInvalidSimIdx(int i, String str) {
        if (i >= 0 && i < this.mSimCount) {
            return false;
        }
        log(str);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void createWosExt() {
        IWosExt iWosExt = this.mWosExt;
        if (iWosExt != null) {
            iWosExt.dispose();
            this.mWosExt = null;
        }
        IWosExt iWosExtMakeWosExt = OpWosCustomizationUtils.getOpFactory(this.mContext).makeWosExt(this.mContext);
        this.mWosExt = iWosExtMakeWosExt;
        iWosExtMakeWosExt.initialize(this.mContext);
    }

    private boolean getBooleanCarrierConfig(String str, int i) {
        boolean z;
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(i) : null;
        if (configForSubId != null) {
            z = configForSubId.getBoolean(str);
        } else {
            log("getBooleanCarrierConfig: get from default config");
            z = CarrierConfigManager.getDefaultConfig().getBoolean(str);
        }
        log("getBooleanCarrierConfig sub: " + i + " key: " + str + " ret: " + z);
        return z;
    }

    private int getCurrentAssociatedApCount() {
        int i = 0;
        WifiManager wifiManager = (WifiManager) this.mContext.getSystemService("wifi");
        if (wifiManager != null) {
            List<ScanResult> scanResults = wifiManager.getScanResults();
            List<WifiConfiguration> configuredNetworks = wifiManager.getConfiguredNetworks();
            if (scanResults == null || configuredNetworks == null) {
                Rlog.e(TAG, "getCurrentAssociatedApCount() scanResults = " + scanResults + ", wifiConfigList = " + configuredNetworks);
            } else {
                for (ScanResult scanResult : scanResults) {
                    for (WifiConfiguration wifiConfiguration : configuredNetworks) {
                        String strReplace = wifiConfiguration.SSID != null ? wifiConfiguration.SSID.replace("\"", "") : "";
                        if (scanResult.SSID != null && scanResult.SSID.equals(strReplace)) {
                            i++;
                        }
                    }
                }
            }
        } else {
            Rlog.e(TAG, "getCurrentAssociatedApCount() wifiManager null");
        }
        log("getCurrentAssociatedApCount(): count= " + i);
        return i;
    }

    public static WfcHandler getInstance() {
        return mInstance;
    }

    public static WfcHandler getInstance(Context context, WifiPdnHandler wifiPdnHandler, int i, Looper looper, MwiRIL[] mwiRILArr) {
        if (mInstance == null) {
            mInstance = new WfcHandler(context, wifiPdnHandler, i, looper, mwiRILArr);
        }
        return mInstance;
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

    private int getSubIdBySlot(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        return subId != null ? subId[0] : SubscriptionManager.getDefaultSubscriptionId();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleModemPower() {
        log("handleModemPower() mIsWifiEnabled:" + this.mIsWifiEnabled + " mIsWfcSettingsOn: " + isWfcSettingsEnabledAny());
        if (this.mIsWifiEnabled && isWfcSettingsEnabledAny()) {
            notifyPowerOnModem(true);
        } else {
            notifyPowerOnModem(false);
        }
    }

    private void handleRetry(int i, AsyncResult asyncResult) {
        if (hasMessages(i) || asyncResult == null || asyncResult.exception == null) {
            return;
        }
        sendEmptyMessageDelayed(i, 3000L);
    }

    private void initialize() {
        this.mConnectivityManager = ConnectivityManager.from(this.mContext);
        this.mIsWfcSettingsOn = new boolean[this.mSimCount];
        updateWfcUISetting();
        sendMessage(obtainMessage(2003));
        createWosExt();
        this.mIsWifiConnected = false;
        this.mPartialScanCount = 0;
        registerForBroadcast();
        registerIndication();
        registerForWfcAidObserver();
    }

    private boolean isWfcSettingsEnabledAny() {
        for (int i = 0; i < this.mSimCount; i++) {
            if (this.mIsWfcSettingsOn[i]) {
                log("isWfcSettingsEnabledAny: found Wfc settings enabled on SIM: " + i);
                return true;
            }
        }
        return false;
    }

    private String messageToString(Message message) {
        int i = message.what;
        switch (i) {
            case 2000:
                return "EVENT_HANDLE_MODEM_POWER";
            case 2001:
                return "EVENT_SET_WFC_EMERGENCY_ADDRESS_ID";
            case 2002:
                return "EVENT_NOTIFY_WIFI_NO_INTERNET";
            case 2003:
                return "EVENT_HANDLE_WIFI_STATE_CHANGE";
            case 2004:
                return "EVENT_NOTIFY_EPDG_SCREEN_STATE";
            case 2005:
                return "EVENT_INITIALIZE";
            default:
                switch (i) {
                    case 2100:
                        return "EVENT_ON_PDN_HANDOVER";
                    case 2101:
                        return "EVENT_ON_PDN_ERROR";
                    case 2102:
                        return "EVENT_ON_ROVE_OUT";
                    case 2103:
                        return "EVENT_ON_WFC_PDN_STATE_CHANGED";
                    case 2104:
                        return "EVENT_ON_WIFI_PDN_OOS";
                    case 2105:
                        return "EVENT_HANDLE_WFC_STATE_CHANGED";
                    default:
                        switch (i) {
                            case 2200:
                                return "RESPONSE_SET_WFC_EMERGENCY_ADDRESS_ID";
                            case 2201:
                                return "EVENT_ON_LOCATION_TIMEOUT";
                            case 2202:
                                return "EVENT_ON_ALLOW_WIFI_OFF";
                            case 2203:
                                return "RESPONSE_NOTIFY_EPDG_SCREEN_STATE";
                            default:
                                return "UNKNOWN";
                        }
                }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyEPDGScreenState(int i) {
        log("notifyEPDGScreenState(), state:" + i);
        getMwiRil().notifyEPDGScreenState(i, obtainMessage(2203));
    }

    private void notifyLocationTimeout() {
        IWosExt iWosExt = this.mWosExt;
        if (iWosExt != null) {
            iWosExt.showLocationTimeoutMessage();
        } else {
            Rlog.e(TAG, "notifyLocationTimeout: mWosExt null");
        }
    }

    private void notifyOnAllowWifiOff() {
        log("notifyOnAllowWifiOff");
        int iBeginBroadcast = this.mListeners.beginBroadcast();
        while (iBeginBroadcast > 0) {
            iBeginBroadcast--;
            try {
                ((IWifiOffloadListener) this.mListeners.getBroadcastItem(iBeginBroadcast)).onAllowWifiOff();
            } catch (RemoteException e) {
                log("onHandover: RemoteException occurs!");
            } catch (IllegalStateException e2) {
                log("onHandover: IllegalStateException occurs!");
            }
        }
        this.mListeners.finishBroadcast();
    }

    private void notifyOnHandover(int i, int i2, int i3) {
        log("onHandover simIdx: " + i + " stage: " + i2 + " rat: " + i3);
        int iBeginBroadcast = this.mListeners.beginBroadcast();
        while (iBeginBroadcast > 0) {
            iBeginBroadcast--;
            try {
                ((IWifiOffloadListener) this.mListeners.getBroadcastItem(iBeginBroadcast)).onHandover(i, i2, i3);
            } catch (RemoteException e) {
                log("onHandover: RemoteException occurs!");
            } catch (IllegalStateException e2) {
                log("onHandover: IllegalStateException occurs!");
            }
        }
        this.mListeners.finishBroadcast();
    }

    private void notifyOnRoveOut(int i, boolean z, int i2) {
        log("onRoveOut simIdx: " + i + " roveOut: " + z + " rssi: " + i2);
        int iBeginBroadcast = this.mListeners.beginBroadcast();
        while (iBeginBroadcast > 0) {
            iBeginBroadcast--;
            try {
                ((IWifiOffloadListener) this.mListeners.getBroadcastItem(iBeginBroadcast)).onRoveOut(i, z, i2);
            } catch (RemoteException e) {
                log("onRoveOut: RemoteException occurs!");
            }
        }
        this.mListeners.finishBroadcast();
    }

    private void notifyOnWifiPdnOOS(String str, int i, int i2, int i3) {
        log("onWifiPdnOOS apn: " + str + " callId: " + i + " oosState: " + i2 + " simId: " + i3);
        int iBeginBroadcast = this.mListeners.beginBroadcast();
        while (iBeginBroadcast > 0) {
            iBeginBroadcast--;
            try {
                ((IWifiOffloadListener) this.mListeners.getBroadcastItem(iBeginBroadcast)).onWifiPdnOOSStateChanged(i3, i2);
                log("onWifiPdnOOSStateChanged");
            } catch (RemoteException e) {
                log("onRoveOut: RemoteException occurs!");
            }
        }
        this.mListeners.finishBroadcast();
    }

    private void notifyPowerOnModem(boolean z) {
        if (!SystemProperties.get("ro.vendor.mtk_flight_mode_power_off_md").equals("1")) {
            log("modem always on, no need to control it!");
            return;
        }
        if (this.mContext == null) {
            log("context is null, can't control modem!");
            return;
        }
        Intent intent = new Intent(RADIO_MANAGER_POWER_ON_MODEM);
        intent.setPackage(ImsConstants.PACKAGE_NAME_PHONE);
        intent.putExtra(EXTRA_POWER_ON_MODEM_KEY, z);
        this.mContext.sendBroadcast(intent);
    }

    private void onPdnHandover(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onPdnHandover(): result is null");
            return;
        }
        if (iArr.length < 5) {
            Rlog.e(TAG, "onPdnHandover(): Bad params");
            return;
        }
        if (iArr[0] != 0) {
            log("onPdnHandover(): Not IMS PDN, ignore");
            return;
        }
        int i = iArr[1];
        int i2 = iArr[2];
        int i3 = iArr[3];
        notifyOnHandover(iArr[4], i, i3);
        if (i != 1 || i3 == 2) {
            return;
        }
        this.mWosExt.clearPDNErrorMessages();
    }

    private void onWfcPdnError(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onWfcPdnError(): result is null");
            return;
        }
        int i = iArr[0];
        int i2 = iArr[1];
        int i3 = iArr[2];
        int i4 = iArr[3];
        this.mDisconnectCause[i4] = new DisconnectCause(i2, i3);
        Rlog.e(TAG, "onWfcPdnError(): errCount = " + i + ", mainErr = " + i2 + ", subErr = " + i3 + ", simIdx = " + i4);
        if (i2 != 0) {
            ImsManager imsManager = ImsManager.getInstance(this.mContext, i4);
            Intent intent = new Intent(IMS_REG_ERROR_NOTIFICATION);
            intent.putExtra("wfcErrorCode", i2);
            if (i2 == CODE_WFC_EPDG_IPSEC_SETUP_ERROR && i3 == SUB_CAUSE_IKEV2_24) {
                intent.putExtra("result", new ImsReasonInfo(1400, 1408, "WiFi_Error09-Unable to connect"));
                intent.putExtra("stateChanged", 2);
                intent.putExtra("imsRat", 18);
                if (getBooleanCarrierConfig(MTK_KEY_DISABLE_WFC_AFTER_AUTH_FAIL, getSubIdBySlot(i4))) {
                    Rlog.d(TAG, "Set WFC setting OFF.");
                    imsManager.setWfcSetting(false);
                }
            }
            this.mContext.sendBroadcast(intent, "com.mediatek.permission.IMS_ERR_NOTIFICATION");
        }
        if (i == 0) {
            this.mWosExt.clearPDNErrorMessages();
        } else {
            this.mWosExt.showPDNErrorMessages(i2);
        }
    }

    private void onWfcPdnStateChanged(Message message) {
        int[] iArr = (int[]) ((AsyncResult) message.obj).result;
        if (iArr == null) {
            Rlog.e(TAG, "onWfcPdnStateChanged(): result is null");
            return;
        }
        int i = iArr[0];
        int i2 = iArr[1];
        if (i2 < this.mSimCount) {
            this.mWfcState[i2] = i;
        }
        log("onWfcPdnStateChanged() state:" + i + " simIdx:" + i2);
        if (1 == i) {
            this.mWosExt.clearPDNErrorMessages();
        }
        int iBeginBroadcast = this.mListeners.beginBroadcast();
        while (iBeginBroadcast > 0) {
            iBeginBroadcast--;
            try {
                ((IWifiOffloadListener) this.mListeners.getBroadcastItem(iBeginBroadcast)).onWfcStateChanged(i2, i);
            } catch (RemoteException e) {
                log("onWfcStateChanged: RemoteException occurs!");
            } catch (IllegalStateException e2) {
                log("onWfcStateChanged: IllegalStateException occurs!");
            }
        }
        this.mListeners.finishBroadcast();
    }

    private void onWfcStatusChanged() {
        if (this.mWifiPdnHandler.isWifiPdnExisted() || !this.mHasWiFiDisabledPending) {
            return;
        }
        this.mHasWiFiDisabledPending = false;
        sendMessage(obtainMessage(2202));
    }

    private void onWifiPdnOOS(Message message) {
        String[] strArr = (String[]) ((AsyncResult) message.obj).result;
        if (strArr == null) {
            Rlog.e(TAG, "onWifiPdnOOS(): result is null");
            return;
        }
        if (strArr.length < 4) {
            Rlog.e(TAG, "onWifiPdnOOS(): Bad params");
            return;
        }
        try {
            notifyOnWifiPdnOOS(strArr[0], Integer.parseInt(strArr[1]), Integer.parseInt(strArr[2]), Integer.parseInt(strArr[3]));
        } catch (Exception e) {
            Rlog.e(TAG, "onWifiPdnOOS[" + strArr.length + "]" + strArr[0] + " " + strArr[1] + " " + strArr[2] + " " + strArr[3] + " e:" + e.toString());
        }
    }

    private void onWifiRoveout(Message message) {
        String[] strArr = (String[]) ((AsyncResult) message.obj).result;
        if (strArr == null) {
            Rlog.e(TAG, "onWifiRoveout(): result is null");
            return;
        }
        if (strArr.length == 3) {
            log("onWifiRoveout()[" + strArr.length + "] " + strArr[0] + " " + strArr[1] + " " + strArr[2]);
        } else {
            if (strArr.length != 4) {
                Rlog.e(TAG, "onWifiRoveout(): Bad params [" + strArr.length + "] ");
                return;
            }
            log("onWifiRoveout()[" + strArr.length + "] " + strArr[0] + " " + strArr[1] + " " + strArr[2] + " " + strArr[3]);
        }
        try {
            String str = strArr[0];
            boolean z = Integer.parseInt(strArr[1]) == 1;
            boolean z2 = strArr.length == 4 && Integer.parseInt(strArr[2]) == 1;
            int i = Integer.parseInt(strArr[strArr.length - 1]);
            if (z) {
                notifyOnRoveOut(i, z, this.mWifiPdnHandler.getLastRssi());
            }
            if (z2) {
                log("onWifiRoveout(): mobike_ind=1. count = " + this.mPartialScanCount + ", connected = " + this.mIsWifiConnected);
                if (!this.mIsWifiConnected || this.mPartialScanCount < 3 || getCurrentAssociatedApCount() <= 1) {
                    log("No need to partial scan.");
                } else {
                    log("Mobike disconnect+startscan");
                    WifiManager wifiManager = (WifiManager) this.mContext.getSystemService("wifi");
                    wifiManager.disconnect();
                    wifiManager.startScan();
                    this.mPartialScanCount = 0;
                }
            }
            log("onWifiRoveout: " + str + " " + z + " " + z2);
        } catch (Exception e) {
            Rlog.e(TAG, "onWifiRoveout()[" + strArr.length + "]" + strArr[0] + " " + strArr[1] + " " + strArr[2] + " e:" + e.toString());
        }
    }

    private void registerForBroadcast() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        intentFilter.addAction(ACTION_OPERATOR_CONFIG_CHANGED);
        intentFilter.addAction("android.net.wifi.STATE_CHANGE");
        intentFilter.addAction("android.net.wifi.action.WIFI_SCAN_AVAILABILITY_CHANGED");
        intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        intentFilter.addAction("android.intent.action.SCREEN_ON");
        intentFilter.addAction("android.intent.action.USER_PRESENT");
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    private void registerForWfcAidObserver() {
        Context context = this.mContext;
        if (context == null) {
            return;
        }
        context.getContentResolver().registerContentObserver(AID_SETTING_URI, false, this.mContentObserver);
        log("registerForWfcAidObserver()");
    }

    private void registerIndication() {
        for (int i = 0; i < this.mSimCount; i++) {
            this.mMwiRil[i].registerWifiPdnHandover(this, 2100, null);
            this.mMwiRil[i].registerWifiPdnError(this, 2101, null);
            this.mMwiRil[i].registerWifiPdnRoveOut(this, 2102, null);
            this.mMwiRil[i].registerWfcPdnStateChanged(this, 2103, null);
            this.mMwiRil[i].registerWifiPdnOos(this, 2104, null);
        }
    }

    private void setEmergencyAddressId() {
        if (TextUtils.isEmpty(this.mWfcEccAid)) {
            log("Current AID is empty");
            return;
        }
        log("setEmergencyAddressId(), mWfcEccAid:" + this.mWfcEccAid);
        getMwiRil().setEmergencyAddressId(this.mWfcEccAid, obtainMessage(2200));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean updateWfcUISetting() {
        if (SystemProperties.getInt("persist.vendor.mims_support", 1) > 1) {
            for (int i = 0; i < this.mSimCount; i++) {
                boolean booleanCarrierConfig = getBooleanCarrierConfig("carrier_default_wfc_ims_enabled_bool", getSubIdBySlot(i));
                boolean[] zArr = this.mIsWfcSettingsOn;
                boolean z = zArr[i];
                zArr[i] = SubscriptionManager.getBooleanSubscriptionProperty(getSubIdBySlot(i), "wfc_ims_enabled", booleanCarrierConfig, this.mContext);
                log("WfcSetting simId: " + i + " enabled: " + this.mIsWfcSettingsOn[i]);
                boolean[] zArr2 = this.mIsWfcSettingsOn;
                if (z != zArr2[i] || zArr2[i]) {
                    return true;
                }
            }
            return false;
        }
        int mainCapabilityPhoneId = getMainCapabilityPhoneId();
        log("mainCapabilityPhoneId = " + mainCapabilityPhoneId);
        if (mainCapabilityPhoneId < 0 || mainCapabilityPhoneId >= this.mSimCount) {
            Rlog.e(TAG, "updateWfcUISetting(): mainCapabilityPhoneId invalid");
            return false;
        }
        boolean booleanCarrierConfig2 = getBooleanCarrierConfig("carrier_default_wfc_ims_enabled_bool", getSubIdBySlot(mainCapabilityPhoneId));
        boolean[] zArr3 = this.mIsWfcSettingsOn;
        boolean z2 = zArr3[mainCapabilityPhoneId];
        zArr3[mainCapabilityPhoneId] = SubscriptionManager.getBooleanSubscriptionProperty(getSubIdBySlot(mainCapabilityPhoneId), "wfc_ims_enabled", booleanCarrierConfig2, this.mContext);
        log("WfcSetting simId: " + mainCapabilityPhoneId + " enabled: " + this.mIsWfcSettingsOn[mainCapabilityPhoneId]);
        boolean[] zArr4 = this.mIsWfcSettingsOn;
        return z2 != zArr4[mainCapabilityPhoneId] || zArr4[mainCapabilityPhoneId];
    }

    private void updateWifiEnabled() {
        if (0 == 0) {
            WifiManager wifiManager = (WifiManager) this.mContext.getSystemService("wifi");
            if (wifiManager != null) {
                this.mIsWifiEnabled = wifiManager.isWifiEnabled();
            } else {
                Rlog.e(TAG, "updateWifiEnabled: WifiManager null");
                this.mIsWifiEnabled = false;
            }
        } else {
            Rlog.e(TAG, "updateWifiEnabled: inCryptKeeperBounce");
            this.mIsWifiEnabled = false;
        }
        sendMessage(obtainMessage(2000));
    }

    public Handler getHandler() {
        return this;
    }

    public int getWfcState(int i) {
        log("getWfcState state:" + this.mWfcState[i] + " simIdx:" + i);
        return this.mWfcState[i];
    }

    public IWifiOffloadService getWfoInterface() {
        return this.mWfoService;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        log("handleMessage: " + messageToString(message));
        int i = message.what;
        switch (i) {
            case 2000:
                handleModemPower();
                break;
            case 2001:
                setEmergencyAddressId();
                break;
            case 2002:
                checkIfShowNoInternetError(true);
                break;
            case 2003:
                updateWifiEnabled();
                break;
            case 2004:
                notifyEPDGScreenState(this.mScreenState);
                break;
            case 2005:
                initialize();
                break;
            default:
                switch (i) {
                    case 2100:
                        onPdnHandover(message);
                        break;
                    case 2101:
                        onWfcPdnError(message);
                        break;
                    case 2102:
                        onWifiRoveout(message);
                        break;
                    case 2103:
                        onWfcPdnStateChanged(message);
                        break;
                    case 2104:
                        onWifiPdnOOS(message);
                        break;
                    case 2105:
                        onWfcStatusChanged();
                        break;
                    default:
                        switch (i) {
                            case 2200:
                                handleRetry(2001, (AsyncResult) message.obj);
                                break;
                            case 2201:
                                notifyLocationTimeout();
                                break;
                            case 2202:
                                notifyOnAllowWifiOff();
                                break;
                            case 2203:
                                handleRetry(2004, null);
                                break;
                        }
                        break;
                }
                break;
        }
    }

    protected void log(String str) {
        if (!USR_BUILD || TELDBG) {
            Rlog.d(TAG, str);
        }
    }

    public void onLocationTimeout() {
        sendMessage(obtainMessage(2201));
    }

    public void updatedWifiConnectedStatus(boolean z) {
        log("updatedWifiConnectedStatus: " + z);
        this.mIsWifiConnected = z;
        if (z) {
            return;
        }
        this.mPartialScanCount = 0;
    }
}
