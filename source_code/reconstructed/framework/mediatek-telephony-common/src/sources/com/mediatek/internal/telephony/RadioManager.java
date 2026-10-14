package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.net.ConnectivityManager;
import android.net.wifi.WifiManager;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.os.storage.StorageManager;
import android.provider.Settings;
import android.telecom.TelecomManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.ims.ImsManager;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConfigurationManager;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.State;
import com.android.internal.telephony.StateMachine;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.selfactivation.SaPersistDataHelper;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class RadioManager extends Handler {
    protected static final String ACTION_AIRPLANE_CHANGE_DONE = "com.mediatek.intent.action.AIRPLANE_CHANGE_DONE";
    public static final String ACTION_FORCE_SET_RADIO_POWER = "com.mediatek.internal.telephony.RadioManager.intent.action.FORCE_SET_RADIO_POWER";
    public static final String ACTION_MODEM_POWER_NO_CHANGE = "com.mediatek.intent.action.MODEM_POWER_CHANGE";
    private static final String ACTION_WIFI_OFFLOAD_SERVICE_ON = "mediatek.intent.action.WFC_POWER_ON_MODEM";
    private static final String ACTION_WIFI_ONLY_MODE_CHANGED = "android.intent.action.ACTION_WIFI_ONLY_MODE";
    protected static final boolean AIRPLANE_MODE_OFF = false;
    protected static final boolean AIRPLANE_MODE_ON = true;
    public static final int ERROR_AIRPLANE_MODE = 2;
    public static final int ERROR_ICCID_NOT_READY = 5;
    public static final int ERROR_MODEM_OFF = 4;
    public static final int ERROR_NO_PHONE_INSTANCE = 1;
    public static final int ERROR_PCO = 6;
    public static final int ERROR_PCO_ALREADY_OFF = 7;
    public static final int ERROR_SIM_SWITCH_EXECUTING = 8;
    public static final int ERROR_TURN_OFF_RADIO_DURING_ECC = 9;
    public static final int ERROR_WIFI_ONLY = 3;
    private static final int EVENT_DSBP_STATE_CHANGED_SLOT_1 = 10;
    private static final int EVENT_DSBP_STATE_CHANGED_SLOT_2 = 11;
    private static final int EVENT_DSBP_STATE_CHANGED_SLOT_3 = 12;
    private static final int EVENT_DSBP_STATE_CHANGED_SLOT_4 = 13;
    private static final int EVENT_MULTI_SIM_CONFIG_CHANGED = 14;
    private static final int EVENT_RADIO_AVAILABLE_SLOT_1 = 1;
    private static final int EVENT_RADIO_AVAILABLE_SLOT_2 = 2;
    private static final int EVENT_RADIO_AVAILABLE_SLOT_3 = 3;
    private static final int EVENT_RADIO_AVAILABLE_SLOT_4 = 4;
    private static final int EVENT_REPORT_AIRPLANE_DONE = 8;
    private static final int EVENT_REPORT_SIM_MODE_DONE = 9;
    private static final int EVENT_SET_MODEM_POWER_OFF_DONE = 6;
    private static final int EVENT_SET_SILENT_REBOOT_DONE = 7;
    private static final int EVENT_VIRTUAL_SIM_ON = 5;
    protected static final String EXTRA_AIRPLANE_MODE = "airplaneMode";
    public static final String EXTRA_MODEM_POWER = "modemPower";
    private static final String EXTRA_WIFI_OFFLOAD_SERVICE_ON = "mediatek:POWER_ON_MODEM";
    private static final boolean ICC_READ_NOT_READY = false;
    private static final boolean ICC_READ_READY = true;
    protected static final int INITIAL_RETRY_INTERVAL_MSEC = 200;
    protected static final int INVALID_PHONE_ID = -1;
    private static final String IS_NOT_SILENT_REBOOT = "0";
    protected static final String IS_SILENT_REBOOT = "1";
    static final String LOG_TAG = "RadioManager";
    private static final int MAX_PHONE_COUNT = 4;
    protected static final boolean MODEM_POWER_OFF = false;
    protected static final boolean MODEM_POWER_ON = true;
    protected static final int MODE_PHONE1_ONLY = 1;
    private static final int MODE_PHONE2_ONLY = 2;
    private static final int MODE_PHONE3_ONLY = 4;
    private static final int MODE_PHONE4_ONLY = 8;
    protected static final int NO_SIM_INSERTED = 0;
    private static final String PREF_CATEGORY_RADIO_STATUS = "RADIO_STATUS";
    private static final String PROPERTY_AIRPLANE_MODE = "persist.vendor.radio.airplane.mode.on";
    protected static final String PROPERTY_SILENT_REBOOT_MD1 = "vendor.gsm.ril.eboot";
    private static final String PROPERTY_SIM_MODE = "persist.vendor.radio.sim.mode";
    protected static final boolean RADIO_POWER_OFF = false;
    protected static final boolean RADIO_POWER_ON = true;
    public static final int REASON_NONE = -1;
    public static final int REASON_PCO_OFF = 1;
    public static final int REASON_PCO_ON = 0;
    private static final String REGISTRANTS_WITH_NO_NAME = "NO_NAME";
    protected static final int SIM_INSERTED = 1;
    private static final int SIM_NOT_INITIALIZED = -1;
    protected static final String STRING_NO_SIM_INSERTED = "N/A";
    public static final int SUCCESS = 0;
    protected static final int TO_SET_MODEM_POWER = 2;
    protected static final int TO_SET_RADIO_POWER = 1;
    private static final int WIFI_ONLY_INIT = -1;
    private static final boolean WIFI_ONLY_MODE_OFF = false;
    private static final boolean WIFI_ONLY_MODE_ON = true;
    protected static SharedPreferences sIccidPreference;
    private static RadioManager sRadioManager;
    private boolean mAirDnMsgSent;
    protected boolean mAirplaneMode;
    protected int mBitmapForPhoneCount;
    private CommandsInterface[] mCi;
    private Context mContext;
    private Runnable[] mForceRefreshSimStateRunnable;
    private Runnable[] mForceSetRadioPowerRunnable;
    private ImsSwitchController mImsSwitchController;
    private int[] mInitializeWaitCounter;
    private boolean[] mIsDsbpChanging;
    private boolean mIsWifiOn;
    private boolean mIsWifiOnlyDevice;
    private ModemPowerMessage[] mModemPowerMessages;
    private boolean mNeedIgnoreMessageForChangeDone;
    private boolean mNeedIgnoreMessageForWait;
    private Runnable mNotifyMSimModeChangeRunnable;
    private Runnable[] mNotifySimModeChangeRunnable;
    protected int mPhoneCount;
    private PowerSM mPowerSM;
    private Runnable[] mRadioPowerRunnable;
    public int[] mReason;
    protected int[] mSimInsertedStatus;
    private int mSimModeSetting;
    private boolean mWifiOnlyMode;
    protected static ConcurrentHashMap<IRadioPower, String> mNotifyRadioPowerChange = new ConcurrentHashMap<>();
    protected static String[] PROPERTY_RADIO_OFF = {"vendor.ril.ipo.radiooff", "vendor.ril.ipo.radiooff.2"};
    private static final int[] EVENT_RADIO_AVAILABLE = {1, 2, 3, 4};
    private static final int[] EVENT_DSBP_STATE_CHANGED = {10, 11, 12, 13};
    private static final boolean mFlightModePowerOffModem = SystemProperties.get("ro.vendor.mtk_flight_mode_power_off_md").equals("1");
    private static final boolean isOP01 = DataSubConstants.OPERATOR_OP01.equalsIgnoreCase(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, ""));
    private static final boolean isOP09 = DataSubConstants.OPERATOR_OP09.equalsIgnoreCase(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, ""));
    private boolean mIsPendingRadioByDsbpChanging = false;
    private boolean mModemPower = true;
    private boolean mIsRadioUnavailable = false;
    private BroadcastReceiver mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.RadioManager.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            RadioManager.log("BroadcastReceiver: " + intent.getAction());
            if (intent.getAction().equals("android.telephony.action.SIM_CARD_STATE_CHANGED")) {
                RadioManager.this.onReceiveSimStateChangedIntent(intent);
                return;
            }
            if (intent.getAction().equals(RadioManager.ACTION_FORCE_SET_RADIO_POWER)) {
                RadioManager.this.onReceiveForceSetRadioPowerIntent(intent);
                return;
            }
            if (intent.getAction().equals(RadioManager.ACTION_WIFI_ONLY_MODE_CHANGED)) {
                RadioManager.this.onReceiveWifiOnlyModeStateChangedIntent(intent);
                return;
            }
            if (intent.getAction().equals(RadioManager.ACTION_WIFI_OFFLOAD_SERVICE_ON)) {
                RadioManager.this.onReceiveWifiStateChangedIntent(intent);
                return;
            }
            if (intent.getAction().equals("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE") || intent.getAction().equals("android.intent.action.ACTION_SET_RADIO_CAPABILITY_FAILED")) {
                if (RadioManager.isFlightModePowerOffModemConfigEnabled()) {
                    RadioManager.this.mPowerSM.updateModemPowerState(RadioManager.this.mAirplaneMode, RadioManager.this.mBitmapForPhoneCount, 128);
                }
                if (RadioManager.this.mIsDsbpChanging[RadioManager.this.findMainCapabilityPhoneId()]) {
                    RadioManager.this.mIsPendingRadioByDsbpChanging = true;
                } else {
                    RadioManager.this.setRadioPowerAfterCapabilitySwitch();
                }
            }
        }
    };

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.RadioManager$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {
        static final /* synthetic */ int[] $SwitchMap$android$telephony$TelephonyManager$MultiSimVariants;

        static {
            int[] iArr = new int[TelephonyManager.MultiSimVariants.values().length];
            $SwitchMap$android$telephony$TelephonyManager$MultiSimVariants = iArr;
            try {
                iArr[TelephonyManager.MultiSimVariants.DSDS.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$android$telephony$TelephonyManager$MultiSimVariants[TelephonyManager.MultiSimVariants.DSDA.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$android$telephony$TelephonyManager$MultiSimVariants[TelephonyManager.MultiSimVariants.TSTS.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    protected class ForceRefreshSimStateRunnable implements Runnable {
        int mRetryPhoneId;
        boolean mRetryPower;

        public ForceRefreshSimStateRunnable(boolean z, int i) {
            this.mRetryPower = z;
            this.mRetryPhoneId = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            RadioManager.this.forceRefreshSimState(this.mRetryPower, this.mRetryPhoneId);
        }
    }

    protected class ForceSetRadioPowerRunnable implements Runnable {
        int mRetryPhoneId;
        boolean mRetryPower;

        public ForceSetRadioPowerRunnable(boolean z, int i) {
            this.mRetryPower = z;
            this.mRetryPhoneId = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            RadioManager.this.forceSetRadioPower(this.mRetryPower, this.mRetryPhoneId);
        }
    }

    protected class MSimModeChangeRunnable implements Runnable {
        int mRetryMode;

        public MSimModeChangeRunnable(int i) {
            this.mRetryMode = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            RadioManager.this.notifyMSimModeChange(this.mRetryMode);
        }
    }

    static class ModemPowerCasue {
        static final int CAUSE_AIRPLANE_MODE = 2;
        static final int CAUSE_ECC = 16;
        static final int CAUSE_FORCE = 32;
        static final int CAUSE_IPO = 8;
        static final int CAUSE_RADIO_AVAILABLE = 64;
        static final int CAUSE_SIM_SWITCH = 128;
        static final int CAUSE_START = 0;
        static final int CAUSE_WIFI_CALLING = 4;

        ModemPowerCasue() {
        }

        public static String print(int i) {
            if (i == 2) {
                return "CAUSE_AIRPLANE_MODE";
            }
            if (i == 4) {
                return "CAUSE_WIFI_CALLING";
            }
            if (i == 8) {
                return "CAUSE_IPO";
            }
            if (i == 16) {
                return "CAUSE_ECC";
            }
            if (i == 32) {
                return "CAUSE_FORCE";
            }
            if (i == 64) {
                return "CAUSE_RADIO_AVAILABLE";
            }
            throw new IllegalArgumentException("Invalid eventCode: " + i);
        }
    }

    private static final class ModemPowerMessage {
        public boolean isFinish = false;
        private final int mPhoneId;

        public ModemPowerMessage(int i) {
            this.mPhoneId = i;
        }

        public String toString() {
            return "MPMsg [mPhoneId=" + this.mPhoneId + ", isFinish=" + this.isFinish + "]";
        }
    }

    static class PowerEvent {
        static final int EVENT_MODEM_POWER_OFF = 2;
        static final int EVENT_MODEM_POWER_OFF_DONE = 5;
        static final int EVENT_MODEM_POWER_ON = 1;
        static final int EVENT_MODEM_POWER_ON_DONE = 4;
        static final int EVENT_RADIO_AVAILABLE = 3;
        static final int EVENT_SIM_SWITCH_DONE = 6;
        static final int EVENT_START = 0;

        PowerEvent() {
        }

        public static String print(int i) {
            switch (i) {
                case 1:
                    return "EVENT_MODEM_POWER_ON";
                case 2:
                    return "EVENT_MODEM_POWER_OFF";
                case 3:
                    return "EVENT_RADIO_AVAILABLE";
                case 4:
                    return "EVENT_MODEM_POWER_ON_DONE";
                case 5:
                    return "EVENT_MODEM_POWER_OFF_DONE";
                case 6:
                    return "EVENT_SIM_SWITCH_DONE";
                default:
                    throw new IllegalArgumentException("Invalid eventCode: " + i);
            }
        }
    }

    private class PowerSM extends StateMachine {
        private int mCurrentModemCause;
        public boolean mCurrentModemPower;
        private int mDesiredModemCause;
        public boolean mDesiredModemPower;
        protected PowerIdleState mIdleState;
        protected int mPhoneBitMap;
        protected PowerTurnOffState mTurnOffState;
        protected PowerTurnOnState mTurnOnState;
        private PowerSM self;

        private class PowerIdleState extends State {
            private PowerIdleState() {
            }

            public void enter() {
                Rlog.i(RadioManager.LOG_TAG, "PowerIdleState: enter");
                PowerSM.this.log("mDesiredModemPower: " + PowerSM.this.mDesiredModemPower + " mCurrentModemPower: " + PowerSM.this.mCurrentModemPower);
                if (RadioManager.this.mPowerSM.mDesiredModemPower != RadioManager.this.mPowerSM.mCurrentModemPower) {
                    if (RadioManager.this.mPowerSM.mDesiredModemPower) {
                        RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOnState);
                    } else {
                        RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOffState);
                    }
                }
            }

            public void exit() {
                Rlog.i(RadioManager.LOG_TAG, "PowerIdleState: exit");
            }

            public boolean processMessage(Message message) {
                Rlog.i(RadioManager.LOG_TAG, "processMessage: " + PowerEvent.print(message.what));
                int i = message.what;
                if (i != 1) {
                    if (i != 2) {
                        if (i == 3) {
                            RadioManager.this.mPowerSM.mCurrentModemPower = true;
                            if (RadioManager.this.mPowerSM.mDesiredModemPower != RadioManager.this.mPowerSM.mCurrentModemPower) {
                                if (RadioManager.this.mPowerSM.mDesiredModemPower) {
                                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOnState);
                                } else {
                                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOffState);
                                }
                            }
                        } else if (i != 5) {
                            Rlog.i(RadioManager.LOG_TAG, "un-expected event, stay at idle");
                        } else {
                            RadioManager.this.mPowerSM.mCurrentModemPower = false;
                            if (RadioManager.this.mPowerSM.mDesiredModemPower != RadioManager.this.mPowerSM.mCurrentModemPower) {
                                RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mDesiredModemPower ? RadioManager.this.mPowerSM.mTurnOnState : RadioManager.this.mPowerSM.mTurnOffState);
                            } else {
                                Rlog.i(RadioManager.LOG_TAG, "the same power state: " + PowerEvent.print(message.what));
                            }
                        }
                    } else if (RadioManager.this.mPowerSM.mDesiredModemPower != RadioManager.this.mPowerSM.mCurrentModemPower) {
                        RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOffState);
                    } else {
                        Rlog.i(RadioManager.LOG_TAG, "the same power state: " + PowerEvent.print(message.what));
                    }
                } else if (RadioManager.this.mPowerSM.mDesiredModemPower != RadioManager.this.mPowerSM.mCurrentModemPower) {
                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mTurnOnState);
                } else {
                    Rlog.i(RadioManager.LOG_TAG, "the same power state: " + PowerEvent.print(message.what));
                    Intent intent = new Intent(RadioManager.ACTION_MODEM_POWER_NO_CHANGE);
                    intent.putExtra(RadioManager.EXTRA_MODEM_POWER, true);
                    RadioManager.this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
                }
                return true;
            }
        }

        private class PowerTurnOffState extends State {
            private PowerTurnOffState() {
            }

            public void enter() {
                Rlog.i(RadioManager.LOG_TAG, "PowerTurnOffState: enter");
                if (RadioManager.this.waitForReady(false) || ((MtkProxyController) MtkProxyController.getInstance()).isCapabilitySwitching()) {
                    return;
                }
                RadioManager.this.mPowerSM.mCurrentModemPower = false;
                RadioManager.this.mPowerSM.mCurrentModemCause = RadioManager.this.mPowerSM.mDesiredModemCause;
                RadioManager.this.setModemPower(false, RadioManager.this.mPowerSM.mPhoneBitMap);
            }

            public void exit() {
                Rlog.i(RadioManager.LOG_TAG, "PowerTurnOffState: exit");
            }

            public boolean processMessage(Message message) {
                Rlog.i(RadioManager.LOG_TAG, "processMessage: " + PowerEvent.print(message.what));
                int i = message.what;
                if (i == 3) {
                    PowerSM.this.mCurrentModemPower = true;
                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mIdleState);
                } else if (i == 5 || i == 6) {
                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mIdleState);
                } else {
                    Rlog.i(RadioManager.LOG_TAG, "un-expected event, stay at PowerTurnOffState");
                }
                return true;
            }
        }

        private class PowerTurnOnState extends State {
            private PowerTurnOnState() {
            }

            public void enter() {
                Rlog.i(RadioManager.LOG_TAG, "PowerTurnOnState: enter");
                if (RadioManager.this.waitForReady(true) || ((MtkProxyController) MtkProxyController.getInstance()).isCapabilitySwitching()) {
                    return;
                }
                RadioManager.this.mPowerSM.mCurrentModemPower = true;
                RadioManager.this.mPowerSM.mCurrentModemCause = RadioManager.this.mPowerSM.mDesiredModemCause;
                RadioManager.this.setModemPower(true, RadioManager.this.mPowerSM.mPhoneBitMap);
            }

            public void exit() {
                Rlog.i(RadioManager.LOG_TAG, "PowerTurnOnState: exit");
            }

            public boolean processMessage(Message message) {
                Rlog.i(RadioManager.LOG_TAG, "processMessage: " + PowerEvent.print(message.what));
                int i = message.what;
                if (i == 3) {
                    PowerSM.this.mCurrentModemPower = true;
                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mIdleState);
                } else if (i == 4 || i == 6) {
                    RadioManager.this.mPowerSM.transitionTo(RadioManager.this.mPowerSM.mIdleState);
                } else {
                    Rlog.i(RadioManager.LOG_TAG, "un-expected event, stay at PowerTurnOnState");
                }
                return true;
            }
        }

        PowerSM(String str) {
            super(str);
            this.self = null;
            this.mIdleState = new PowerIdleState();
            this.mTurnOnState = new PowerTurnOnState();
            this.mTurnOffState = new PowerTurnOffState();
            this.mCurrentModemPower = true;
            this.mDesiredModemPower = true;
            this.mCurrentModemCause = 0;
            this.mDesiredModemCause = 0;
            addState(this.mIdleState);
            addState(this.mTurnOnState);
            addState(this.mTurnOffState);
            setInitialState(this.mIdleState);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void sendEvent(int i) {
            Rlog.i(RadioManager.LOG_TAG, "sendEvent: " + PowerEvent.print(i));
            getHandler().sendMessage(Message.obtain(getHandler(), i));
        }

        private void sendEvent(int i, int i2) {
            Rlog.i(RadioManager.LOG_TAG, "sendEvent: " + PowerEvent.print(i));
            Message messageObtain = Message.obtain(getHandler(), i);
            messageObtain.arg1 = i2;
            getHandler().sendMessage(messageObtain);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void updateModemPowerState(boolean z, int i, int i2) {
            if ((!z) && RadioManager.isUnderCryptKeeper()) {
                log("Skip MODEM_POWER_OFF due to CryptKeeper mode");
                return;
            }
            this.mPhoneBitMap = i;
            if (4 == i2) {
                if (RadioManager.this.mAirplaneMode && RadioManager.isFlightModePowerOffModemConfigEnabled()) {
                    this.mDesiredModemCause = 4 | this.mDesiredModemCause;
                    if (RadioManager.this.mIsWifiOn) {
                        this.mDesiredModemPower = true;
                    } else {
                        this.mDesiredModemPower = false;
                    }
                }
                sendEvent(z ? 1 : 2);
                return;
            }
            if (2 == i2) {
                this.mDesiredModemCause |= 2;
                this.mDesiredModemPower = z;
                sendEvent(z ? 1 : 2);
                return;
            }
            if (16 == i2) {
                this.mDesiredModemCause |= 16;
                this.mDesiredModemPower = z;
                sendEvent(1);
            } else if (8 == i2) {
                this.mDesiredModemCause |= 8;
                this.mDesiredModemPower = z;
                sendEvent(z ? 1 : 2);
            } else if (64 == i2) {
                this.mCurrentModemPower = true;
                this.mDesiredModemPower = false;
                sendEvent(2);
            } else if (128 == i2) {
                sendEvent(6);
            }
        }
    }

    protected class RadioPowerRunnable implements Runnable {
        int retryPhoneId;
        boolean retryPower;

        public RadioPowerRunnable(boolean z, int i) {
            this.retryPower = z;
            this.retryPhoneId = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            RadioManager.this.setRadioPower(this.retryPower, this.retryPhoneId);
        }
    }

    private class SimModeChangeRunnable implements Runnable {
        int mPhoneId;
        boolean mPower;

        public SimModeChangeRunnable(boolean z, int i) {
            this.mPower = z;
            this.mPhoneId = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            RadioManager.this.notifySimModeChange(this.mPower, this.mPhoneId);
        }
    }

    protected RadioManager(Context context, int i, CommandsInterface[] commandsInterfaceArr) {
        int i2 = 0;
        this.mAirplaneMode = false;
        this.mWifiOnlyMode = false;
        this.mIsWifiOn = false;
        this.mImsSwitchController = null;
        int i3 = Settings.Global.getInt(context.getContentResolver(), "airplane_mode_on", 0);
        int wfcMode = ImsManager.getWfcMode(context);
        this.mAirDnMsgSent = false;
        if (ImsManager.getInstance(context, 0).isServiceReady() && ImsManager.isWfcEnabledByPlatform(context) && !StorageManager.inCryptKeeperBounce()) {
            log("initial actual wifi state when wifi calling is on");
            WifiManager wifiManager = (WifiManager) context.getSystemService("wifi");
            if (wifiManager != null) {
                this.mIsWifiOn = wifiManager.isWifiEnabled();
            }
        }
        log("Initialize RadioManager under airplane mode:" + i3 + " wifi only mode:" + wfcMode + " wifi mode: " + this.mIsWifiOn + "phoneCount:" + i);
        this.mSimInsertedStatus = new int[4];
        for (int i4 = 0; i4 < 4; i4++) {
            this.mSimInsertedStatus[i4] = -1;
        }
        this.mInitializeWaitCounter = new int[4];
        for (int i5 = 0; i5 < 4; i5++) {
            this.mInitializeWaitCounter[i5] = 0;
        }
        this.mRadioPowerRunnable = new RadioPowerRunnable[4];
        for (int i6 = 0; i6 < 4; i6++) {
            this.mRadioPowerRunnable[i6] = new RadioPowerRunnable(true, i6);
        }
        this.mNotifySimModeChangeRunnable = new SimModeChangeRunnable[4];
        for (int i7 = 0; i7 < 4; i7++) {
            this.mNotifySimModeChangeRunnable[i7] = new SimModeChangeRunnable(true, i7);
        }
        this.mNotifyMSimModeChangeRunnable = new MSimModeChangeRunnable(3);
        this.mForceSetRadioPowerRunnable = new ForceSetRadioPowerRunnable[4];
        this.mForceRefreshSimStateRunnable = new ForceRefreshSimStateRunnable[4];
        this.mContext = context;
        this.mAirplaneMode = i3 != 0;
        this.mWifiOnlyMode = wfcMode == 0;
        this.mCi = commandsInterfaceArr;
        this.mPhoneCount = i;
        this.mBitmapForPhoneCount = convertPhoneCountIntoBitmap(i);
        sIccidPreference = this.mContext.getSharedPreferences("RADIO_STATUS", 0);
        this.mSimModeSetting = Settings.Global.getInt(context.getContentResolver(), "msim_mode_setting", this.mBitmapForPhoneCount);
        this.mImsSwitchController = new ImsSwitchController(this.mContext, this.mPhoneCount, this.mCi);
        this.mCi[RadioCapabilitySwitchUtil.getMainCapabilityPhoneId()].setVendorSetting(8, Integer.toString(i3), obtainMessage(8));
        log("Not BSP Package, register intent!!!");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.telephony.action.SIM_CARD_STATE_CHANGED");
        intentFilter.addAction(ACTION_FORCE_SET_RADIO_POWER);
        intentFilter.addAction(ACTION_WIFI_ONLY_MODE_CHANGED);
        intentFilter.addAction(ACTION_WIFI_OFFLOAD_SERVICE_ON);
        intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_FAILED");
        this.mContext.registerReceiver(this.mIntentReceiver, intentFilter);
        registerListener();
        PhoneConfigurationManager.registerForMultiSimConfigChange(this, 14, (Object) null);
        this.mIsWifiOnlyDevice = !((ConnectivityManager) this.mContext.getSystemService("connectivity")).isNetworkSupported(0);
        PowerSM powerSM = new PowerSM("PowerSM");
        this.mPowerSM = powerSM;
        powerSM.start();
        this.mReason = new int[4];
        int i8 = 0;
        for (int i9 = 4; i8 < i9; i9 = 4) {
            if (i8 < i) {
                MtkSubscriptionManager.getSubIdUsingPhoneId(i8);
                int intData = SaPersistDataHelper.getIntData(this.mContext, i8, SaPersistDataHelper.DATA_KEY_SA_STATE, i2);
                String str = SystemProperties.get("persist.vendor.pco5.radio.ctrl", "0");
                if (2 != intData || str.equals("0")) {
                    this.mReason[i8] = -1;
                } else {
                    this.mReason[i8] = 1;
                }
            } else {
                this.mReason[i8] = -1;
            }
            i8++;
            i2 = 0;
        }
        this.mIsDsbpChanging = new boolean[4];
        for (int i10 = 0; i10 < 4; i10++) {
            this.mIsDsbpChanging[i10] = false;
        }
    }

    private String binaryToHex(String str) {
        return String.format("%040x", new BigInteger(1, str.getBytes()));
    }

    private final void cleanModemPowerMessage() {
        log("cleanModemPowerMessage");
        if (this.mModemPowerMessages == null) {
            return;
        }
        int i = 0;
        while (true) {
            ModemPowerMessage[] modemPowerMessageArr = this.mModemPowerMessages;
            if (i >= modemPowerMessageArr.length) {
                this.mModemPowerMessages = null;
                return;
            } else {
                modemPowerMessageArr[i] = null;
                i++;
            }
        }
    }

    private int convertPhoneCountIntoBitmap(int i) {
        int i2 = 0;
        for (int i3 = 0; i3 < i; i3++) {
            i2 += 1 << i3;
        }
        log("Convert phoneCount " + i + " into bitmap " + i2);
        return i2;
    }

    private static final ModemPowerMessage[] createMessage(boolean z, int i, int i2, int i3) {
        TelephonyManager.MultiSimVariants multiSimConfiguration = TelephonyManager.getDefault().getMultiSimConfiguration();
        log("createMessage, config:" + multiSimConfiguration);
        ModemPowerMessage[] modemPowerMessageArr = new ModemPowerMessage[i3];
        int i4 = AnonymousClass2.$SwitchMap$android$telephony$TelephonyManager$MultiSimVariants[multiSimConfiguration.ordinal()];
        if (i4 == 1 || i4 == 2 || i4 == 3) {
            modemPowerMessageArr[i2] = new ModemPowerMessage(i2);
        } else {
            int phoneId = PhoneFactory.getDefaultPhone().getPhoneId();
            modemPowerMessageArr[phoneId] = new ModemPowerMessage(phoneId);
        }
        for (int i5 = 0; i5 < i3; i5++) {
            if (modemPowerMessageArr[i5] != null) {
                log("createMessage, [" + i5 + "]: " + modemPowerMessageArr[i5].toString());
            }
        }
        return modemPowerMessageArr;
    }

    private String eventIdtoString(int i) {
        switch (i) {
            case 1:
            case 2:
            case 3:
            case 4:
                return "EVENT_RADIO_AVAILABLE";
            case 5:
                return "EVENT_VIRTUAL_SIM_ON";
            case 6:
            default:
                return null;
            case 7:
                return "EVENT_SET_SILENT_REBOOT_DONE";
            case 8:
                return "EVENT_REPORT_AIRPLANE_DONE";
            case 9:
                return "EVENT_REPORT_SIM_MODE_DONE";
            case 10:
            case 11:
            case 12:
            case 13:
                return "EVENT_DSBP_STATE_CHANGED";
            case 14:
                return "EVENT_MULTI_SIM_CONFIG_CHANGED";
        }
    }

    private int getCiIndex(Message message) {
        Integer num = new Integer(0);
        if (message != null) {
            if (message.obj != null && (message.obj instanceof Integer)) {
                num = (Integer) message.obj;
            } else if (message.obj != null && (message.obj instanceof AsyncResult)) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult.userObj != null && (asyncResult.userObj instanceof Integer)) {
                    num = (Integer) asyncResult.userObj;
                }
            }
        }
        return num.intValue();
    }

    public static RadioManager getInstance() {
        RadioManager radioManager;
        synchronized (RadioManager.class) {
            radioManager = sRadioManager;
        }
        return radioManager;
    }

    public static RadioManager init(Context context, int i, CommandsInterface[] commandsInterfaceArr) {
        RadioManager radioManager;
        synchronized (RadioManager.class) {
            if (sRadioManager == null) {
                sRadioManager = new RadioManager(context, i, commandsInterfaceArr);
            }
            radioManager = sRadioManager;
        }
        return radioManager;
    }

    public static boolean isFlightModePowerOffModemConfigEnabled() {
        if (SystemProperties.get("vendor.ril.testmode").equals("1")) {
            return SystemProperties.get("vendor.ril.test.poweroffmd").equals("1");
        }
        if (isOP01 || isOP09) {
            if (SystemProperties.get("vendor.ril.atci.flightmode").equals("1")) {
                return true;
            }
            if (SystemProperties.get("vendor.gsm.sim.ril.testsim").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.2").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.3").equals("1") || SystemProperties.get("vendor.gsm.sim.ril.testsim.4").equals("1")) {
                return true;
            }
        }
        return mFlightModePowerOffModem;
    }

    public static boolean isFlightModePowerOffModemEnabled() {
        if (getInstance() == null) {
            log("Instance not exists, return config only");
            return isFlightModePowerOffModemConfigEnabled();
        }
        if (isFlightModePowerOffModemConfigEnabled()) {
            return !getInstance().mIsWifiOn;
        }
        return false;
    }

    public static boolean isMSimModeSupport() {
        return true;
    }

    public static boolean isModemPowerOff(int i) {
        return getInstance().isModemOff(i);
    }

    public static boolean isPowerOnFeatureAllClosed() {
        return (isFlightModePowerOffModemConfigEnabled() || isMSimModeSupport()) ? false : true;
    }

    private boolean isRadioAvaliable() {
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (!isRadioAvaliable(i)) {
                log("isRadioAvaliable=false, phoneId = " + i);
                return false;
            }
        }
        return true;
    }

    private boolean isRadioAvaliable(int i) {
        Phone phone = PhoneFactory.getPhone(i);
        if (phone == null) {
            return false;
        }
        log("phoneId = " + i + ", RadioState=" + phone.mCi.getRadioState());
        return phone.mCi.getRadioState() != 2;
    }

    private boolean isRadioOn() {
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (!isRadioOn(i)) {
                return false;
            }
        }
        return true;
    }

    private boolean isRadioOn(int i) {
        Phone phone = PhoneFactory.getPhone(i);
        return phone != null && phone.mCi.getRadioState() == 1;
    }

    private boolean isRadioUnavailable() {
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (isRadioAvaliable(i)) {
                log("isRadioUnavailable=false, phoneId = " + i);
                return false;
            }
        }
        return true;
    }

    private boolean isRequiredRadioOff(String str) {
        return sIccidPreference.contains(getHashCode(str));
    }

    private final boolean isSetModemPowerFinish() {
        if (this.mModemPowerMessages == null) {
            return true;
        }
        int i = 0;
        while (true) {
            ModemPowerMessage[] modemPowerMessageArr = this.mModemPowerMessages;
            if (i >= modemPowerMessageArr.length) {
                return true;
            }
            if (modemPowerMessageArr[i] != null) {
                log("isSetModemPowerFinish [" + i + "]: " + this.mModemPowerMessages[i]);
                if (!this.mModemPowerMessages[i].isFinish) {
                    return false;
                }
            } else {
                log("isSetModemPowerFinish [" + i + "]: MPMsg is null");
            }
            i++;
        }
    }

    public static boolean isUnderCryptKeeper() {
        if (SystemProperties.get("ro.crypto.type").equals("block") && SystemProperties.get("ro.crypto.state").equals("encrypted") && SystemProperties.get("vold.decrypt").equals("trigger_restart_min_framework")) {
            log("[Special Case] Under CryptKeeper, Not to turn on/off modem");
            return true;
        }
        log("[Special Case] Not Under CryptKeeper");
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void log(String str) {
        Rlog.d(LOG_TAG, "[RadioManager] " + str);
    }

    private void notifyDsbpStateChanged(int i, AsyncResult asyncResult) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            return;
        }
        int iIntValue = ((Integer) asyncResult.result).intValue();
        int i2 = 0;
        switch (i) {
            case 10:
                i2 = 0;
                break;
            case 11:
                i2 = 1;
                break;
            case 12:
                i2 = 2;
                break;
            case 13:
                i2 = 3;
                break;
        }
        log("notifyDsbpStateChanged state:" + iIntValue + "phoneId:" + i2);
        if (iIntValue == 1) {
            this.mIsDsbpChanging[i2] = true;
            return;
        }
        this.mIsDsbpChanging[i2] = false;
        if (findMainCapabilityPhoneId() == i2 && this.mIsPendingRadioByDsbpChanging) {
            this.mIsPendingRadioByDsbpChanging = false;
            setRadioPowerAfterCapabilitySwitch();
        }
    }

    private void notifyMultiSimConfigChanged(int i) {
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        log("multiSimConfigChanged, activeModems:" + i + ", phoneCount:" + phoneCount + ", oldPhoneCount:" + this.mPhoneCount);
        unregisterListener();
        this.mCi = PhoneFactory.getCommandsInterfaces();
        this.mPhoneCount = phoneCount;
        this.mBitmapForPhoneCount = convertPhoneCountIntoBitmap(phoneCount);
        registerListener();
    }

    private static synchronized void notifyRadioPowerChange(boolean z, int i) {
        for (Map.Entry<IRadioPower, String> entry : mNotifyRadioPowerChange.entrySet()) {
            log("notifyRadioPowerChange: user:" + entry.getValue());
            entry.getKey().notifyRadioPowerChange(z, i);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onReceiveForceSetRadioPowerIntent(Intent intent) {
        int intExtra = intent.getIntExtra("mode", -1);
        log("force set radio power, mode: " + intExtra);
        if (intExtra == -1) {
            log("Invalid mode, MSIM_MODE intent has no extra value");
            return;
        }
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (true == (((1 << i) & intExtra) != 0)) {
                forceSetRadioPower(true, i);
            }
        }
    }

    private void putIccIdToPreference(SharedPreferences.Editor editor, String str) {
        if (str != null) {
            Rlog.i(LOG_TAG, "Add radio off SIM: " + ("N/A".equals(str) ? "N/A" : binaryToHex(getHashCode(SubscriptionInfo.givePrintableIccid(str)))));
            editor.putInt(getHashCode(str), 0);
        }
    }

    public static synchronized void registerForRadioPowerChange(String str, IRadioPower iRadioPower) {
        if (str == null) {
            str = REGISTRANTS_WITH_NO_NAME;
        }
        log(str + " registerForRadioPowerChange");
        mNotifyRadioPowerChange.put(iRadioPower, str);
    }

    private void registerListener() {
        for (int i = 0; i < this.mPhoneCount; i++) {
            this.mCi[i].registerForVirtualSimOn(this, 5, null);
            this.mCi[i].registerForAvailable(this, EVENT_RADIO_AVAILABLE[i], (Object) null);
            this.mCi[i].registerForDsbpStateChanged(this, EVENT_DSBP_STATE_CHANGED[i], null);
        }
    }

    private void removeIccIdFromPreference(SharedPreferences.Editor editor, String str) {
        if (str != null) {
            Rlog.i(LOG_TAG, "Remove radio off SIM: " + ("N/A".equals(str) ? "N/A" : binaryToHex(getHashCode(SubscriptionInfo.givePrintableIccid(str)))));
            editor.remove(getHashCode(str));
        }
    }

    public static void sendRequestBeforeSetRadioPower(boolean z, int i) {
        log("Send request before EFUN, power:" + z + " phoneId:" + i);
        notifyRadioPowerChange(z, i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setModemPower(boolean z, int i) {
        log("Set Modem Power according to bitmap, Power:" + z + ", PhoneBitMap:" + i);
        if (PhoneFactory.getDefaultPhone().getServiceStateTracker().isDeviceShuttingDown()) {
            Rlog.d(LOG_TAG, "[RadioManager] skip the request because device is shutdown");
            return;
        }
        TelephonyManager.MultiSimVariants multiSimConfiguration = TelephonyManager.getDefault().getMultiSimConfiguration();
        Message[] messageArrMonitorModemPowerChangeDone = monitorModemPowerChangeDone(z, i, findMainCapabilityPhoneId());
        int i2 = AnonymousClass2.$SwitchMap$android$telephony$TelephonyManager$MultiSimVariants[multiSimConfiguration.ordinal()];
        if (i2 == 1 || i2 == 2 || i2 == 3) {
            int iFindMainCapabilityPhoneId = findMainCapabilityPhoneId();
            log("Set Modem Power, Power:" + z + ", phoneId:" + iFindMainCapabilityPhoneId);
            this.mCi[iFindMainCapabilityPhoneId].setModemPower(z, messageArrMonitorModemPowerChangeDone[iFindMainCapabilityPhoneId]);
            if (!z) {
                for (int i3 = 0; i3 < this.mPhoneCount; i3++) {
                    resetSimInsertedStatus(i3);
                }
            }
        } else {
            int phoneId = PhoneFactory.getDefaultPhone().getPhoneId();
            log("Set Modem Power under SS mode:" + z + ", phoneId:" + phoneId);
            this.mCi[phoneId].setModemPower(z, messageArrMonitorModemPowerChangeDone[phoneId]);
        }
        if (z) {
            if ((isOP01 || isOP09) && SystemProperties.get("vendor.ril.atci.flightmode").equals("1")) {
                log("Power on Modem, Set vendor.ril.atci.flightmode to 0");
                SystemProperties.set("vendor.ril.atci.flightmode", "0");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setRadioPowerAfterCapabilitySwitch() {
        log("Update radio power after capability switch or dsbp changing");
        int defaultDataPhoneId = SubscriptionManager.from(this.mContext).getDefaultDataPhoneId();
        if (!SubscriptionManager.isValidPhoneId(defaultDataPhoneId)) {
            defaultDataPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
        }
        setRadioPower(!this.mAirplaneMode, defaultDataPhoneId);
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (defaultDataPhoneId != i) {
                setRadioPower(!this.mAirplaneMode, i);
            }
        }
    }

    private void turnOffCTARadioIfNecessary() {
        for (int i = 0; i < this.mPhoneCount; i++) {
            Phone phone = PhoneFactory.getPhone(i);
            if (phone != null && this.mSimInsertedStatus[i] == 0) {
                if (isModemPowerOff(i)) {
                    log("modem off, not to handle CTA");
                    return;
                }
                log("turn off phone " + i + " radio because we are no longer in CTA mode");
                phone.setRadioPower(false, false, false, false);
            }
        }
    }

    public static synchronized void unregisterForRadioPowerChange(IRadioPower iRadioPower) {
        log(mNotifyRadioPowerChange.get(iRadioPower) + " unregisterForRadioPowerChange");
        mNotifyRadioPowerChange.remove(iRadioPower);
    }

    private void unregisterListener() {
        int i = 0;
        while (true) {
            MtkRIL[] mtkRILArr = this.mCi;
            if (i >= mtkRILArr.length) {
                return;
            }
            mtkRILArr[i].unregisterForVirtualSimOn(this);
            this.mCi[i].unregisterForAvailable(this);
            this.mCi[i].unregisterForDsbpStateChanged(this);
            i++;
        }
    }

    private boolean waitRadioAvaliable(boolean z) {
        boolean z2 = (this.mIsWifiOnlyDevice || isRadioAvaliable()) ? false : true;
        log("waitRadioAvaliable, state=" + z + ", wait=" + z2);
        return z2;
    }

    protected boolean checkForCTACase() {
        boolean z = true;
        if (this.mAirplaneMode || this.mWifiOnlyMode) {
            z = false;
        } else {
            for (int i = 0; i < this.mPhoneCount; i++) {
                log("Check For CTA case: mSimInsertedStatus[" + i + "]:" + this.mSimInsertedStatus[i]);
                int[] iArr = this.mSimInsertedStatus;
                if (iArr[i] == 1 || iArr[i] == -1) {
                    z = false;
                }
            }
        }
        boolean z2 = false;
        TelecomManager telecomManager = (TelecomManager) this.mContext.getSystemService("telecom");
        if (telecomManager != null && telecomManager.isInEmergencyCall()) {
            z2 = true;
        }
        if (!z && !z2) {
            turnOffCTARadioIfNecessary();
        }
        log("CTA case: " + z);
        return z;
    }

    protected int findMainCapabilityPhoneId() {
        int iIntValue = Integer.valueOf(SystemProperties.get("persist.vendor.radio.simswitch", "1")).intValue() - 1;
        if (iIntValue < 0 || iIntValue >= this.mPhoneCount) {
            return 0;
        }
        return iIntValue;
    }

    public void forceAllowAirplaneModeChange(boolean z) {
    }

    public void forceRefreshSimState(boolean z, int i) {
        log("force refresh sim state" + i + " ,power: " + z);
        if (PhoneFactory.getPhone(i) == null) {
            return;
        }
        if (isFlightModePowerOffModemConfigEnabled() && this.mAirplaneMode) {
            log("force refresh sim state under airplane mode, ignore");
            return;
        }
        if (isModemPowerOff(i) && this.mAirplaneMode) {
            log("Modem Power Off for phone " + i + ", Power on modem first");
            this.mPowerSM.updateModemPowerState(true, 1 << i, 16);
        }
        removeCallbacks(this.mForceRefreshSimStateRunnable[i]);
        if (isIccIdReady(i) && (!isFlightModePowerOffModemConfigEnabled() || this.mAirplaneMode || !z || !isModemOff(i))) {
            refreshIccIdPreference(z, readIccIdUsingPhoneId(i));
            refreshSimSetting(z, i);
        } else {
            log("force refresh sim state, read iccid not ready, wait for200ms");
            this.mForceRefreshSimStateRunnable[i] = new ForceRefreshSimStateRunnable(z, i);
            postDelayed(this.mForceRefreshSimStateRunnable[i], 200L);
        }
    }

    public void forceSetRadioPower(boolean z, int i) {
        log("force set radio power for phone" + i + " ,power: " + z);
        Phone phone = PhoneFactory.getPhone(i);
        if (phone == null) {
            return;
        }
        if (isFlightModePowerOffModemConfigEnabled() && this.mAirplaneMode) {
            log("Force Set Radio Power under airplane mode, ignore");
            return;
        }
        if (isModemPowerOff(i) && this.mAirplaneMode) {
            log("Modem Power Off for phone " + i + ", Power on modem first");
            this.mPowerSM.updateModemPowerState(true, 1 << i, 16);
        }
        removeCallbacks(this.mForceSetRadioPowerRunnable[i]);
        if (!isIccIdReady(i) || (isFlightModePowerOffModemConfigEnabled() && !this.mAirplaneMode && z && isModemOff(i))) {
            log("force set radio power, read iccid not ready, wait for200ms");
            this.mForceSetRadioPowerRunnable[i] = new ForceSetRadioPowerRunnable(z, i);
            postDelayed(this.mForceSetRadioPowerRunnable[i], 200L);
        } else {
            refreshIccIdPreference(z, readIccIdUsingPhoneId(i));
            phone.setRadioPower(z, false, false, false);
            refreshSimSetting(z, i);
        }
    }

    public String getHashCode(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update(str.getBytes());
            return new String(messageDigest.digest());
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException("isRequiredRadioOff SHA-256 must exist");
        }
    }

    protected int getSimInsertedStatus(int i) {
        return this.mSimInsertedStatus[i];
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int ciIndex = getCiIndex(message);
        log("handleMessage msg.what: " + eventIdtoString(message.what));
        switch (message.what) {
            case 1:
            case 2:
            case 3:
            case 4:
                notifyRadioAvailable(message.what - 1);
                break;
            case 5:
                forceSetRadioPower(true, ciIndex);
                break;
            case 6:
                StringBuilder sb = new StringBuilder();
                sb.append("handle EVENT_SET_MODEM_POWER_OFF_DONE -> ");
                sb.append(this.mModemPower ? "ON" : "OFF");
                log(sb.toString());
                if (this.mModemPower) {
                    log("EVENT_SET_MODEM_POWER_OFF_DONE: wrong state");
                    break;
                } else {
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    ModemPowerMessage modemPowerMessage = (ModemPowerMessage) asyncResult.userObj;
                    log("handleModemPowerMessage, message:" + modemPowerMessage.toString());
                    if (asyncResult.exception == null) {
                        log("handleModemPowerMessage, result: " + asyncResult.result);
                    } else {
                        log("handleModemPowerMessage, Unhandle ar.exception:" + asyncResult.exception);
                    }
                    modemPowerMessage.isFinish = true;
                    if (isSetModemPowerFinish()) {
                        cleanModemPowerMessage();
                        unMonitorModemPowerChangeDone();
                        if (asyncResult.exception != null) {
                            log("retry turn off MD()");
                            setModemPower(false, this.mPhoneCount);
                        } else {
                            log("send EVENT_MODEM_POWER_OFF_DONE");
                            this.mPowerSM.sendEvent(5);
                        }
                        break;
                    }
                }
                break;
            case 7:
            case 8:
            case 9:
            default:
                super.handleMessage(message);
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                notifyDsbpStateChanged(message.what, (AsyncResult) message.obj);
                break;
            case 14:
                notifyMultiSimConfigChanged(((Integer) ((AsyncResult) message.obj).result).intValue());
                break;
        }
    }

    public boolean isAllowAirplaneModeChange() {
        log("always allow airplane mode");
        return true;
    }

    protected boolean isIccIdReady(int i) {
        String iccIdUsingPhoneId = readIccIdUsingPhoneId(i);
        return (iccIdUsingPhoneId == null || "".equals(iccIdUsingPhoneId)) ? false : true;
    }

    protected boolean isModemOff(int i) {
        int i2 = AnonymousClass2.$SwitchMap$android$telephony$TelephonyManager$MultiSimVariants[TelephonyManager.getDefault().getMultiSimConfiguration().ordinal()];
        if (i2 == 1) {
            return SystemProperties.get("vendor.ril.ipo.radiooff").equals("1");
        }
        if (i2 != 2) {
            return i2 != 3 ? SystemProperties.get("vendor.ril.ipo.radiooff").equals("1") : SystemProperties.get("vendor.ril.ipo.radiooff").equals("1");
        }
        if (i == 0) {
            return SystemProperties.get("vendor.ril.ipo.radiooff").equals("1");
        }
        if (i != 1) {
            return true;
        }
        return SystemProperties.get("vendor.ril.ipo.radiooff.2").equals("1");
    }

    protected boolean isValidPhoneId(int i) {
        return i >= 0 && i < TelephonyManager.getDefault().getPhoneCount();
    }

    protected final Message[] monitorModemPowerChangeDone(boolean z, int i, int i2) {
        this.mModemPower = z;
        log("monitorModemPowerChangeDone, Power:" + z + ", PhoneBitMap:" + i + ", mainCapabilityPhoneId:" + i2 + ", mPhoneCount:" + this.mPhoneCount);
        this.mNeedIgnoreMessageForChangeDone = false;
        this.mIsRadioUnavailable = false;
        int i3 = this.mPhoneCount;
        Message[] messageArr = new Message[i3];
        if (!this.mModemPower) {
            ModemPowerMessage[] modemPowerMessageArrCreateMessage = createMessage(z, i, i2, i3);
            this.mModemPowerMessages = modemPowerMessageArrCreateMessage;
            for (int i4 = 0; i4 < modemPowerMessageArrCreateMessage.length; i4++) {
                if (modemPowerMessageArrCreateMessage[i4] != null) {
                    messageArr[i4] = obtainMessage(6, modemPowerMessageArrCreateMessage[i4]);
                }
            }
        }
        return messageArr;
    }

    public void notifyAirplaneModeChange(boolean z) {
        if (z == this.mAirplaneMode) {
            log("enabled = " + z + ", mAirplaneMode = " + this.mAirplaneMode + " is not expected (the same)");
            return;
        }
        int iFindMainCapabilityPhoneId = findMainCapabilityPhoneId();
        this.mAirplaneMode = z;
        log("Airplane mode changed: " + z + " mDesiredPower: " + this.mPowerSM.mDesiredModemPower + " mCurrentModemPower: " + this.mPowerSM.mCurrentModemPower);
        this.mCi[iFindMainCapabilityPhoneId].setVendorSetting(8, Integer.toString(z ? 1 : 0), obtainMessage(8));
        if (z) {
            this.mIsWifiOn = false;
        }
        byte b = -1;
        if (!isFlightModePowerOffModemConfigEnabled() || isUnderCryptKeeper()) {
            if (isMSimModeSupport()) {
                log("Airplane mode changed: turn on/off all radio");
                b = 1;
            }
        } else if (this.mPowerSM.mDesiredModemPower && !this.mAirplaneMode) {
            log("Airplane mode changed: turn on all radio due to mode conflict");
            b = 1;
        } else if (this.mAirplaneMode || !this.mIsWifiOn) {
            log("Airplane mode changed: turn on/off all modem");
            b = 2;
        } else {
            log("airplane mode changed: airplane mode on and wifi-calling on. Then,leave airplane mode: turn on/off all radio");
            b = 1;
        }
        if (b != 1) {
            if (b == 2) {
                boolean z2 = !z;
                setSilentRebootPropertyForAllModem("1");
                this.mPowerSM.updateModemPowerState(z2, this.mBitmapForPhoneCount, 2);
                return;
            }
            return;
        }
        boolean z3 = !z;
        int defaultDataPhoneId = SubscriptionManager.from(this.mContext).getDefaultDataPhoneId();
        if (!SubscriptionManager.isValidPhoneId(defaultDataPhoneId)) {
            defaultDataPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
        }
        setRadioPower(z3, defaultDataPhoneId);
        for (int i = 0; i < this.mPhoneCount; i++) {
            if (defaultDataPhoneId != i) {
                setRadioPower(z3, i);
            }
        }
        Intent intent = new Intent(ACTION_AIRPLANE_CHANGE_DONE);
        intent.putExtra(EXTRA_AIRPLANE_MODE, !z);
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
    }

    public void notifyMSimModeChange(int i) {
        log("MSIM mode changed, mode: " + i);
        if (i == -1) {
            log("Invalid mode, MSIM_MODE intent has no extra value");
            return;
        }
        if (!isMSimModeSupport() || this.mAirplaneMode) {
            log("Airplane mode on or MSIM Mode option is closed, do nothing!");
            return;
        }
        boolean z = true;
        for (int i2 = 0; i2 < this.mPhoneCount; i2++) {
            if (!isIccIdReady(i2)) {
                z = false;
                break;
            }
        }
        removeCallbacks(this.mNotifyMSimModeChangeRunnable);
        if (!z) {
            MSimModeChangeRunnable mSimModeChangeRunnable = new MSimModeChangeRunnable(i);
            this.mNotifyMSimModeChangeRunnable = mSimModeChangeRunnable;
            postDelayed(mSimModeChangeRunnable, 200L);
            return;
        }
        for (int i3 = 0; i3 < this.mPhoneCount; i3++) {
            boolean z2 = ((1 << i3) & i) != 0;
            if ("N/A".equals(readIccIdUsingPhoneId(i3))) {
                z2 = false;
                log("phoneId " + i3 + " sim not insert, set  power  to false");
            }
            refreshIccIdPreference(z2, readIccIdUsingPhoneId(i3));
            log("Set Radio Power due to MSIM mode change, power: " + z2 + ", phoneId: " + i3);
            setRadioPower(z2, i3);
        }
    }

    public void notifyRadioAvailable(int i) {
        log("Phone " + i + " notifies radio available airplane mode: " + this.mAirplaneMode + " cryptkeeper: " + isUnderCryptKeeper() + " mIsWifiOn:" + this.mIsWifiOn);
        if (isRadioAvaliable()) {
            this.mPowerSM.sendEvent(3);
        }
        if (RadioCapabilitySwitchUtil.getMainCapabilityPhoneId() == i) {
            cleanModemPowerMessage();
            if (this.mAirplaneMode && isFlightModePowerOffModemConfigEnabled() && !isUnderCryptKeeper() && !this.mIsWifiOn) {
                log("Power off modem because boot up under airplane mode");
                this.mPowerSM.updateModemPowerState(false, 1 << i, 64);
            }
        }
        if (this.mAirDnMsgSent || !this.mAirplaneMode) {
            return;
        }
        if (!isFlightModePowerOffModemConfigEnabled() || isUnderCryptKeeper()) {
            Intent intent = new Intent(ACTION_AIRPLANE_CHANGE_DONE);
            intent.putExtra(EXTRA_AIRPLANE_MODE, true);
            this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
            this.mAirDnMsgSent = true;
        }
    }

    public void notifySimModeChange(boolean z, int i) {
        log("SIM mode changed, power: " + z + ", phoneId" + i);
        if (!isMSimModeSupport() || this.mAirplaneMode) {
            log("Airplane mode on or MSIM Mode option is closed, do nothing!");
            return;
        }
        removeCallbacks(this.mNotifySimModeChangeRunnable[i]);
        if (!isIccIdReady(i)) {
            log("sim mode read iccid not ready, wait for 200ms");
            this.mNotifySimModeChangeRunnable[i] = new SimModeChangeRunnable(z, i);
            postDelayed(this.mNotifySimModeChangeRunnable[i], 200L);
            return;
        }
        if ("N/A".equals(readIccIdUsingPhoneId(i))) {
            z = false;
            log("phoneId " + i + " sim not insert, set  power  to false");
        }
        refreshIccIdPreference(z, readIccIdUsingPhoneId(i));
        log("Set Radio Power due to SIM mode change, power: " + z + ", phoneId: " + i);
        setRadioPower(z, i);
    }

    protected void onReceiveSimStateChangedIntent(Intent intent) {
        int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
        int intExtra2 = intent.getIntExtra("phone", -1);
        if (!isValidPhoneId(intExtra2)) {
            log("INTENT:Invalid phone id:" + intExtra2 + ", do nothing!");
            return;
        }
        log("INTENT:SIM_STATE_CHANGED: " + intent.getAction() + ", sim status: " + intExtra + ", phoneId: " + intExtra2);
        if (11 != intExtra) {
            if (1 == intExtra) {
                this.mSimInsertedStatus[intExtra2] = 0;
                log("Phone[" + intExtra2 + "]: " + simStatusToString(0));
                if (this.mAirplaneMode) {
                    return;
                }
                log("Set Radio Power due to SIM_STATE_CHANGED, power: false, phoneId: " + intExtra2);
                setRadioPower(false, intExtra2);
                return;
            }
            return;
        }
        this.mSimInsertedStatus[intExtra2] = 1;
        log("Phone[" + intExtra2 + "]: " + simStatusToString(1));
        if ("N/A".equals(readIccIdUsingPhoneId(intExtra2))) {
            log("Phone " + intExtra2 + ":SIM ready but ICCID not ready, do nothing");
            return;
        }
        if (this.mAirplaneMode) {
            return;
        }
        log("Set Radio Power due to SIM_STATE_CHANGED, power: true, phoneId: " + intExtra2);
        setRadioPower(true, intExtra2);
    }

    public void onReceiveWifiOnlyModeStateChangedIntent(Intent intent) {
        boolean booleanExtra = intent.getBooleanExtra("state", false);
        log("Received ACTION_WIFI_ONLY_MODE_CHANGED, enabled = " + booleanExtra);
        if (booleanExtra == this.mWifiOnlyMode) {
            log("enabled = " + booleanExtra + ", mWifiOnlyMode = " + this.mWifiOnlyMode + " is not expected (the same)");
            return;
        }
        this.mWifiOnlyMode = booleanExtra;
        if (this.mAirplaneMode) {
            return;
        }
        boolean z = !booleanExtra;
        for (int i = 0; i < this.mPhoneCount; i++) {
            setRadioPower(z, i);
        }
    }

    protected void onReceiveWifiStateChangedIntent(Intent intent) {
        if (!intent.getAction().equals(ACTION_WIFI_OFFLOAD_SERVICE_ON)) {
            log("Wrong intent");
            return;
        }
        int i = intent.getBooleanExtra(EXTRA_WIFI_OFFLOAD_SERVICE_ON, false) ? 3 : 1;
        log("Receiving ACTION_WIFI_OFFLOAD_SERVICE_ON, airplaneMode: " + this.mAirplaneMode + " isFlightModePowerOffModemConfigEnabled:" + isFlightModePowerOffModemConfigEnabled() + ", mIsWifiOn: " + this.mIsWifiOn);
        if (i == 1) {
            log("WIFI_STATE_CHANGED disabled");
            this.mIsWifiOn = false;
            if (this.mAirplaneMode && isFlightModePowerOffModemConfigEnabled()) {
                log("WIFI_STATE_CHANGED disabled, set modem off");
                setSilentRebootPropertyForAllModem("1");
                this.mPowerSM.updateModemPowerState(false, this.mBitmapForPhoneCount, 4);
                return;
            }
            return;
        }
        if (i != 3) {
            log("default: WIFI_STATE_CHANGED extra" + i);
            return;
        }
        log("WIFI_STATE_CHANGED enabled");
        this.mIsWifiOn = true;
        if (this.mAirplaneMode && isFlightModePowerOffModemConfigEnabled()) {
            if (isModemPowerOff(0)) {
            }
            log("WIFI_STATE_CHANGED enabled, set modem on");
            setSilentRebootPropertyForAllModem("1");
            this.mPowerSM.updateModemPowerState(true, this.mBitmapForPhoneCount, 4);
        }
    }

    protected String readIccIdUsingPhoneId(int i) {
        MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
        String iccid = mtkUiccController != null ? mtkUiccController.getIccid(i) : "N/A";
        Rlog.i(LOG_TAG, "Hash(ICCID) for phone " + i + " is " + ("N/A".equals(iccid) ? "N/A" : binaryToHex(getHashCode(SubscriptionInfo.givePrintableIccid(iccid)))));
        return iccid;
    }

    protected void refreshIccIdPreference(boolean z, String str) {
        if (MtkTelephonyManagerEx.getDefault().simSwitchMode() != 1) {
            Rlog.i(LOG_TAG, "SIM on/off feature is enabled, don't refresh iccid preference");
            return;
        }
        Rlog.i(LOG_TAG, "refresh iccid preference");
        SharedPreferences.Editor editorEdit = sIccidPreference.edit();
        if (z || "N/A".equals(str)) {
            removeIccIdFromPreference(editorEdit, str);
        } else {
            putIccIdToPreference(editorEdit, str);
        }
        editorEdit.commit();
    }

    protected void refreshSimSetting(boolean z, int i) {
        if (PhoneFactory.getDefaultPhone().getServiceStateTracker().isDeviceShuttingDown()) {
            Rlog.i(LOG_TAG, "[RadioManager] skip the refreshSimSetting because device is shutdown");
            return;
        }
        int i2 = this.mSimModeSetting;
        if (z) {
            this.mSimModeSetting = (1 << i) | this.mSimModeSetting;
        } else {
            this.mSimModeSetting = (~(1 << i)) & this.mSimModeSetting;
        }
        log("Refresh MSIM mode setting to " + this.mSimModeSetting + " from " + i2);
        this.mCi[findMainCapabilityPhoneId()].setVendorSetting(9, Integer.toString(this.mSimModeSetting), obtainMessage(9));
        Settings.Global.putInt(this.mContext.getContentResolver(), "msim_mode_setting", this.mSimModeSetting);
    }

    protected void resetSimInsertedStatus(int i) {
        log("reset Sim InsertedStatus for Phone:" + i);
        this.mSimInsertedStatus[i] = -1;
    }

    public int setRadioPower(boolean z, int i) {
        Rlog.i(LOG_TAG, "setRadioPower, power=" + z + "  phoneId=" + i);
        Phone phone = PhoneFactory.getPhone(i);
        if (phone == null) {
            return 1;
        }
        if ((isFlightModePowerOffModemEnabled() || z) && this.mAirplaneMode) {
            log("Set Radio Power on under airplane mode, ignore");
            return 2;
        }
        if (!((ConnectivityManager) this.mContext.getSystemService("connectivity")).isNetworkSupported(0)) {
            log("wifi-only device, so return");
            return 3;
        }
        if (((MtkProxyController) MtkProxyController.getInstance()).isCapabilitySwitching()) {
            log("SIM switch executing, return and wait SIM switch done");
            return 8;
        }
        if (isModemPowerOff(i)) {
            log("modem for phone " + i + " off, do not set radio again");
            return 4;
        }
        String str = SystemProperties.get("persist.vendor.pco5.radio.ctrl", "0");
        if (1 == this.mReason[i] && z && !str.equals("0")) {
            log("Not allow to turn on radio under PCO=5");
            return 6;
        }
        if (1 == this.mReason[i] && phone.mCi.getRadioState() == 0) {
            log("PCO5 and already off");
            return 7;
        }
        boolean z2 = false;
        TelecomManager telecomManager = (TelecomManager) this.mContext.getSystemService("telecom");
        if (telecomManager != null && telecomManager.isInEmergencyCall()) {
            z2 = true;
        }
        if (!z && z2) {
            if (this.mAirplaneMode) {
                ConnectivityManager.from(this.mContext).setAirplaneMode(false);
                Intent intent = new Intent(ACTION_AIRPLANE_CHANGE_DONE);
                intent.putExtra(EXTRA_AIRPLANE_MODE, false);
                this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
            }
            log("Not allow to operate radio power during emergency call");
            return 2;
        }
        removeCallbacks(this.mRadioPowerRunnable[i]);
        if (!isIccIdReady(i)) {
            if (!hasCallbacks(this.mForceSetRadioPowerRunnable[i])) {
                log("RILD initialize not completed, wait for 200ms");
                this.mRadioPowerRunnable[i] = new RadioPowerRunnable(z, i);
                postDelayed(this.mRadioPowerRunnable[i], 200L);
                return 5;
            }
            log("ForceSetRadioPowerRunnable exists queue, do not execute RadioPowerRunnablefor phone " + i);
            return 5;
        }
        setSimInsertedStatus(i);
        boolean z3 = z;
        if (MtkTelephonyManagerEx.getDefault().simSwitchMode() == 1) {
            Rlog.i(LOG_TAG, "Radio on/off feature is enabled, adjust radio power according to ICCID");
            String iccIdUsingPhoneId = readIccIdUsingPhoneId(i);
            if (isRequiredRadioOff(iccIdUsingPhoneId)) {
                if (z2) {
                    log("Adjust radio to off because once manually turned off during ECC, return");
                    return 9;
                }
                Rlog.i(LOG_TAG, "Adjust radio to off because once manually turned off, hash(iccid): " + ("N/A".equals(iccIdUsingPhoneId) ? "N/A" : binaryToHex(getHashCode(SubscriptionInfo.givePrintableIccid(iccIdUsingPhoneId)))) + " , phone: " + i);
                z3 = false;
            } else if (!this.mAirplaneMode && !phone.isShuttingDown() && 1 != this.mReason[i]) {
                z3 = true;
            }
            if (this.mWifiOnlyMode && !z2) {
                log("setradiopower but wifi only, turn off");
                z3 = false;
            }
        }
        boolean zCheckForCTACase = checkForCTACase();
        if (getSimInsertedStatus(i) != 0) {
            Rlog.i(LOG_TAG, "Trigger set Radio Power, power: " + z3 + ", phoneId: " + i);
            PhoneFactory.getPhone(i).setRadioPower(z3, false, false, false);
        } else if (zCheckForCTACase) {
            int iFindMainCapabilityPhoneId = findMainCapabilityPhoneId();
            Rlog.i(LOG_TAG, "No SIM inserted, force to turn on 3G/4G phone " + iFindMainCapabilityPhoneId + " radio if no any sim radio is enabled!");
            PhoneFactory.getPhone(iFindMainCapabilityPhoneId).setRadioPower(true, false, false, false);
            for (int i2 = 0; i2 < this.mPhoneCount; i2++) {
                Phone phone2 = PhoneFactory.getPhone(i2);
                if (phone2 != null && i2 != iFindMainCapabilityPhoneId && !z2) {
                    phone2.setRadioPower(false, false, false, false);
                }
            }
        } else if (true != z2 || this.mAirplaneMode) {
            Rlog.i(LOG_TAG, "No SIM inserted, turn Radio off!");
            z3 = false;
            PhoneFactory.getPhone(i).setRadioPower(false, false, false, false);
        } else {
            Rlog.i(LOG_TAG, "No SIM inserted, turn/keep Radio On for ECC! target power: " + z3 + ", phoneId: " + i);
            if (z3) {
                PhoneFactory.getPhone(i).setRadioPower(z3, false, false, false);
            }
        }
        refreshSimSetting(z3, i);
        return 0;
    }

    public int setRadioPower(boolean z, int i, int i2) {
        this.mReason[i] = i2;
        return setRadioPower(z, i);
    }

    public void setSilentRebootPropertyForAllModem(String str) {
        TelephonyManager.getDefault().getMultiSimConfiguration();
        int iFindMainCapabilityPhoneId = findMainCapabilityPhoneId();
        int i = str.equals("1") ? 1 : 0;
        log("enable silent reboot");
        this.mCi[iFindMainCapabilityPhoneId].setVendorSetting(10, Integer.toString(i), obtainMessage(7));
    }

    protected void setSimInsertedStatus(int i) {
        if ("N/A".equals(readIccIdUsingPhoneId(i))) {
            this.mSimInsertedStatus[i] = 0;
        } else {
            this.mSimInsertedStatus[i] = 1;
        }
        if (TelephonyManager.getDefault().getActiveModemCount() == 1) {
            for (int i2 = 1; i2 < this.mPhoneCount; i2++) {
                this.mSimInsertedStatus[i2] = 0;
            }
        }
    }

    protected String simStatusToString(int i) {
        if (i == -1) {
            return "SIM HAVE NOT INITIALIZED";
        }
        if (i == 0) {
            return "NO SIM DETECTED";
        }
        if (i != 1) {
            return null;
        }
        return "SIM DETECTED";
    }

    protected void unMonitorModemPowerChangeDone() {
        this.mNeedIgnoreMessageForChangeDone = true;
        Intent intent = new Intent(ACTION_AIRPLANE_CHANGE_DONE);
        intent.putExtra(EXTRA_AIRPLANE_MODE, true ^ this.mModemPower);
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        for (int i = 0; i < this.mPhoneCount; i++) {
            Phone phone = PhoneFactory.getPhone(i);
            if (phone != null) {
                phone.mCi.unregisterForRadioStateChanged(this);
                log("unMonitorModemPowerChangeDone, phoneId = " + i);
            }
        }
    }

    protected boolean waitForReady(boolean z) {
        if (!waitRadioAvaliable(z)) {
            return false;
        }
        log("waitForReady, wait radio avaliable");
        this.mPowerSM.updateModemPowerState(z, this.mBitmapForPhoneCount, 2);
        return true;
    }
}
