package com.mediatek.ims;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.preference.PreferenceManager;
import android.provider.Settings;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneStateListener;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.ims.ImsManager;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsSSOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkSuppServExt extends Handler {
    private static final boolean DBG = true;
    private static final int EVENT_IMS_REGISTRATION_INFO = 1;
    private static final int EVENT_IMS_UT_EVENT_QUERY_XCAP = 0;
    private static final int EVENT_ON_VOLTE_SUBSCRIPTION = 5;
    private static final int EVENT_RADIO_NOT_AVAILABLE = 2;
    private static final int EVENT_RADIO_OFF = 3;
    private static final int EVENT_RADIO_ON = 4;
    private static final String ICCID_KEY = "iccid_key";
    private static final String LOG_TAG = "SuppServExt";
    private static final boolean SDBG;
    private static final String SETTING_UT_CAPABILITY = "ut_capability";
    private static final String SYS_PROP_QUERY_VOLTE_SUB = "persist.vendor.suppserv.query_volte_sub";
    private static final int TASK_QUERY_XCAP = 0;
    private static final int TASK_RESET_AND_QUERY_XCAP = 1;
    private static final int TASK_SET_UT_CAPABILITY = 3;
    private static final int TASK_SET_VOLTE_SUBSCRIPTION_DIRECLY = 2;
    private static final int UT_CAPABILITY_DISABLE = 2;
    private static final int UT_CAPABILITY_ENABLE = 1;
    private static final int UT_CAPABILITY_UNKNOWN = 0;
    private static final boolean VDBG = SystemProperties.get("ro.build.type").equals("eng");
    private BroadcastReceiver mBroadcastReceiver;
    private Context mContext;
    private ImsManager mImsManager;
    private ImsCommandsInterface mImsRILAdapter;
    private ImsService mImsService;
    private String mOldIccId;
    private int mPhoneId;
    private PhoneStateListener mPhoneStateListener;
    private ImsSSOemPlugin mPluginBase;
    private boolean mQueryXcapDone;
    private int mRadioState;
    private boolean mSimIsChangedAfterBoot;
    private boolean mSimLoaded;
    private MtkSuppServExt mSuppServExt;
    private SuppServTaskDriven mSuppServTaskDriven;

    private class SuppServTaskDriven extends Handler {
        private static final int EVENT_DONE = 0;
        private static final int EVENT_EXEC_NEXT = 1;
        private static final int STATE_DOING = 1;
        private static final int STATE_DONE = 2;
        private static final int STATE_NO_PENDING = 0;
        private ArrayList<Task> mPendingTask;
        private int mState;
        private Object mStateLock;
        private Object mTaskLock;

        public SuppServTaskDriven() {
            this.mPendingTask = new ArrayList<>();
            this.mTaskLock = new Object();
            this.mStateLock = new Object();
            this.mState = 0;
        }

        public SuppServTaskDriven(Looper looper) {
            super(looper);
            this.mPendingTask = new ArrayList<>();
            this.mTaskLock = new Object();
            this.mStateLock = new Object();
            this.mState = 0;
        }

        private String eventToString(int i) {
            if (i != 0) {
                return i != 1 ? "UNKNOWN_EVENT" : "EVENT_EXEC_NEXT";
            }
            return "EVENT_DONE";
        }

        private Task getCurrentPendingTask() {
            synchronized (this.mTaskLock) {
                if (this.mPendingTask.size() == 0) {
                    return null;
                }
                return this.mPendingTask.get(0);
            }
        }

        private int getState() {
            int i;
            synchronized (this.mStateLock) {
                i = this.mState;
            }
            return i;
        }

        private void removePendingTask(int i) {
            synchronized (this.mTaskLock) {
                if (this.mPendingTask.size() > 0) {
                    this.mPendingTask.remove(i);
                }
            }
        }

        private void setState(int i) {
            synchronized (this.mStateLock) {
                this.mState = i;
            }
        }

        private String stateToString(int i) {
            if (i == 0) {
                return "STATE_NO_PENDING";
            }
            if (i != 1) {
                return i != 2 ? "UNKNOWN_STATE" : "STATE_DONE";
            }
            return "STATE_DOING";
        }

        public void appendTask(Task task) {
            synchronized (this.mTaskLock) {
                this.mPendingTask.add(task);
            }
            obtainMessage(1).sendToTarget();
        }

        public void clearPendingTask() {
            synchronized (this.mTaskLock) {
                this.mPendingTask.clear();
            }
        }

        public void exec() {
            Task currentPendingTask = getCurrentPendingTask();
            if (currentPendingTask == null) {
                setState(0);
                return;
            }
            if (getState() == 1) {
                return;
            }
            setState(1);
            int taskId = currentPendingTask.getTaskId();
            if (MtkSuppServExt.VDBG) {
                MtkSuppServExt.this.logd(currentPendingTask.toString());
            }
            if (taskId != 0) {
                if (taskId != 1) {
                    if (taskId == 2) {
                        int volteSubscriptionFromSettings = MtkSuppServExt.this.getVolteSubscriptionFromSettings();
                        int extraInt = currentPendingTask.getExtraInt();
                        MtkSuppServExt.this.logd("TASK_SET_VOLTE_SUBSCRIPTION_DIRECLY, currentVolteStatus: " + volteSubscriptionFromSettings + " newVolteStatus: " + extraInt);
                        if (volteSubscriptionFromSettings != extraInt) {
                            MtkSuppServExt.this.setVolteSubscriptionToSettings(extraInt);
                        }
                        MtkSuppServExt.this.mQueryXcapDone = MtkSuppServExt.DBG;
                        MtkSuppServExt.this.taskDone();
                        return;
                    }
                    if (taskId != 3) {
                        MtkSuppServExt.this.taskDone();
                        return;
                    }
                    int utCapabilityFromSettings = MtkSuppServExt.this.getUtCapabilityFromSettings();
                    int extraInt2 = currentPendingTask.getExtraInt();
                    MtkSuppServExt.this.logd("TASK_SET_UT_CAPABILITY, currentUtStatus: " + utCapabilityFromSettings + " newUtStatus: " + extraInt2);
                    if (utCapabilityFromSettings != extraInt2) {
                        MtkSuppServExt.this.setUtCapabilityToSettings(extraInt2);
                    }
                    MtkSuppServExt.this.mQueryXcapDone = MtkSuppServExt.DBG;
                    MtkSuppServExt.this.taskDone();
                    return;
                }
                MtkSuppServExt.this.mQueryXcapDone = false;
            }
            MtkSuppServExt.this.startHandleXcapQueryProcess(currentPendingTask.getExtraBoolean(), currentPendingTask.getExtraMsg());
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                removePendingTask(0);
                setState(2);
            } else if (i != 1) {
                return;
            }
            exec();
        }
    }

    private class Task {
        private boolean mExtraBool;
        private int mExtraInt;
        private String mExtraMsg;
        private int mTaskId;

        public Task(int i, int i2, String str) {
            this.mTaskId = -1;
            this.mExtraBool = false;
            this.mExtraInt = -1;
            this.mExtraMsg = "";
            this.mTaskId = i;
            this.mExtraInt = i2;
            this.mExtraMsg = str;
        }

        public Task(int i, String str) {
            this.mTaskId = -1;
            this.mExtraBool = false;
            this.mExtraInt = -1;
            this.mExtraMsg = "";
            this.mTaskId = i;
            this.mExtraMsg = str;
        }

        public Task(int i, boolean z, String str) {
            this.mTaskId = -1;
            this.mExtraBool = false;
            this.mExtraInt = -1;
            this.mExtraMsg = "";
            this.mTaskId = i;
            this.mExtraBool = z;
            this.mExtraMsg = str;
        }

        public boolean getExtraBoolean() {
            return this.mExtraBool;
        }

        public int getExtraInt() {
            return this.mExtraInt;
        }

        public String getExtraMsg() {
            return this.mExtraMsg;
        }

        public int getTaskId() {
            return this.mTaskId;
        }

        public String toString() {
            return "Task ID: " + this.mTaskId + ", ExtraBool: " + this.mExtraBool + ", ExtraInt: " + this.mExtraInt + ", ExtraMsg: " + this.mExtraMsg;
        }
    }

    static {
        SDBG = SystemProperties.get("ro.build.type").equals("user") ? false : DBG;
    }

    public MtkSuppServExt(Context context, int i, ImsService imsService, Looper looper) {
        super(looper);
        this.mPhoneId = 1;
        this.mImsManager = null;
        this.mSuppServExt = null;
        this.mSuppServTaskDriven = null;
        this.mSimLoaded = false;
        this.mQueryXcapDone = false;
        this.mOldIccId = "";
        this.mSimIsChangedAfterBoot = false;
        this.mRadioState = ImsCommandsInterface.RadioState.RADIO_UNAVAILABLE.ordinal();
        this.mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.MtkSuppServExt.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                if (action.equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED")) {
                    MtkSuppServExt.this.post(new Runnable() { // from class: com.mediatek.ims.MtkSuppServExt.2.1
                        @Override // java.lang.Runnable
                        public void run() {
                            MtkSuppServExt.this.handleSubinfoUpdate();
                        }
                    });
                    return;
                }
                if (action.equals("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE")) {
                    MtkSuppServExt.this.mQueryXcapDone = false;
                    MtkSuppServExt.this.mSuppServTaskDriven.appendTask(MtkSuppServExt.this.new Task(0, false, "Radio capability done"));
                    return;
                }
                if (action.equals("android.intent.action.AIRPLANE_MODE")) {
                    boolean booleanExtra = intent.getBooleanExtra("state", false);
                    MtkSuppServExt.this.logd("ACTION_AIRPLANE_MODE_CHANGED, bAirplaneModeOn = " + booleanExtra);
                    if (booleanExtra) {
                        MtkSuppServExt.this.mQueryXcapDone = false;
                        return;
                    }
                    return;
                }
                if (action.equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                    int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
                    int intExtra2 = intent.getIntExtra("subscription", -1);
                    MtkSuppServExt.this.logd("ACTION_SIM_APPLICATION_STATE_CHANGED: " + intExtra + ", subId: " + intExtra2);
                    if (intExtra2 != MtkSuppServExt.getSubIdUsingPhoneId(MtkSuppServExt.this.mPhoneId)) {
                        return;
                    }
                    if (10 != intExtra) {
                        MtkSuppServExt.this.setSimLoaded(false);
                        return;
                    }
                    MtkSuppServExt.this.setSimLoaded(MtkSuppServExt.DBG);
                    MtkSuppServExt.this.mSuppServTaskDriven.appendTask(MtkSuppServExt.this.new Task(0, false, "SIM loaded."));
                    if (!MtkSuppServExt.this.isOp(OperatorUtils.OPID.OP09) || SystemProperties.getInt("persist.vendor.mtk_ct_volte_support", 0) == 0) {
                        return;
                    }
                    MtkSuppServExt.this.mImsService.notifyUtCapabilityChange(MtkSuppServExt.this.mPhoneId);
                    return;
                }
                if (action.equals("android.telephony.action.CARRIER_CONFIG_CHANGED")) {
                    int intExtra3 = intent.getIntExtra("subscription", -1);
                    if (intExtra3 == -1) {
                        MtkSuppServExt.this.logd("ACTION_CARRIER_CONFIG_CHANGED: not loaded, subId: " + intExtra3);
                        return;
                    }
                    if (intExtra3 != MtkSuppServExt.getSubIdUsingPhoneId(MtkSuppServExt.this.mPhoneId)) {
                        MtkSuppServExt.this.logd("ACTION_CARRIER_CONFIG_CHANGED: not for this phone, subId: " + intExtra3);
                        return;
                    }
                    MtkSuppServExt.this.logd("ACTION_CARRIER_CONFIG_CHANGED: loaded, subId: " + intExtra3);
                    MtkSuppServExt.this.mSuppServTaskDriven.appendTask(MtkSuppServExt.this.new Task(0, false, "Carrier config changed"));
                }
            }
        };
        this.mContext = context;
        this.mPhoneId = i;
        this.mImsService = imsService;
        this.mImsRILAdapter = imsService.getImsRILAdapter(i);
        this.mSuppServTaskDriven = new SuppServTaskDriven(looper);
        this.mImsManager = ImsManager.getInstance(context, i);
        this.mPluginBase = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsSSOemPlugin(this.mContext);
        checkImsInService();
        registerBroadcastReceiver();
        registerEvent();
        logd("MtkSuppServExt init done.");
    }

    private void checkImsInService() {
        if (this.mImsService.getImsServiceState(this.mPhoneId) == 0) {
            this.mQueryXcapDone = DBG;
            setVolteSubscriptionToSettings(this.mPluginBase.getVolteSubEnableConstant());
        }
    }

    private boolean checkInitCriteria(StringBuilder sb) {
        if (!checkNeedQueryXcap()) {
            sb.append("No need to support for this operator OR carrier config not ready, ");
            return false;
        }
        if (!isDataEnabled()) {
            sb.append("Data is not enabled, ");
            return false;
        }
        if (!isDataEnabled()) {
            sb.append("Data is not enabled, ");
            return false;
        }
        if (!isSubInfoReady()) {
            sb.append("SubInfo not ready, ");
            return false;
        }
        if (!getSimLoaded()) {
            sb.append("Sim not loaded, ");
            return false;
        }
        if (!isDataRegStateInService()) {
            sb.append("Data reg state is not in service, ");
            return false;
        }
        if (this.mQueryXcapDone) {
            sb.append("No need query, ");
            return false;
        }
        if (!this.mSimIsChangedAfterBoot) {
            sb.append("Sim not changed, ");
            return false;
        }
        if (this.mRadioState != ImsCommandsInterface.RadioState.RADIO_ON.ordinal()) {
            sb.append("radio not available, ");
            return false;
        }
        sb.append("All Criteria ready.");
        return DBG;
    }

    private boolean checkNeedQueryXcap() {
        if ("0".equals(SystemProperties.get(SYS_PROP_QUERY_VOLTE_SUB, "0"))) {
            return false;
        }
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mContext.getSystemService("carrier_config");
        PersistableBundle configForSubId = carrierConfigManager != null ? carrierConfigManager.getConfigForSubId(getSubIdUsingPhoneId(this.mPhoneId)) : null;
        if (configForSubId == null) {
            logd("checkNeedQueryXcap: carrier config not ready, return false");
            return false;
        }
        logd("checkNeedQueryXcap: carrier config is ready, config = " + configForSubId.getBoolean(this.mPluginBase.getXcapQueryCarrierConfigKey(), false));
        return configForSubId.getBoolean(this.mPluginBase.getXcapQueryCarrierConfigKey(), false);
    }

    private int commandExceptionToVolteServiceStatus(CommandException commandException) {
        int volteSubUnknownConstant = this.mPluginBase.getVolteSubUnknownConstant();
        CommandException.Error commandError = commandException.getCommandError();
        logd("commandException: " + commandError);
        if (commandError == CommandException.Error.OEM_ERROR_2) {
            return this.mPluginBase.getVolteSubDisableConstant();
        }
        if (commandError != CommandException.Error.OEM_ERROR_4 && commandError != CommandException.Error.OEM_ERROR_25) {
            return commandError == CommandException.Error.REQUEST_NOT_SUPPORTED ? this.mPluginBase.getVolteSubDisableConstant() : volteSubUnknownConstant;
        }
        return this.mPluginBase.getVolteSubEnableConstant();
    }

    private String getIccIdFromSp() {
        String string = PreferenceManager.getDefaultSharedPreferences(this.mContext).getString(ICCID_KEY + this.mPhoneId, "");
        logd("getIccIdFromSp: " + string);
        return string;
    }

    private boolean getSimLoaded() {
        logi("mSimLoaded: " + this.mSimLoaded);
        return this.mSimLoaded;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int getSubIdUsingPhoneId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        return (subId == null || subId.length <= 0) ? SubscriptionManager.getDefaultSubscriptionId() : subId[0];
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getVolteSubscriptionFromSettings() {
        return Settings.Global.getInt(this.mContext.getContentResolver(), this.mPluginBase.getVolteSubscriptionKey() + this.mPhoneId, this.mPluginBase.getVolteSubUnknownConstant());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSubinfoUpdate() {
        if (isSubInfoReady()) {
            handleSuppServInit();
        }
    }

    private void handleSuppServInit() {
        String simSerialNumber = ((TelephonyManager) this.mContext.getSystemService("phone")).getSimSerialNumber(getSubIdUsingPhoneId(this.mPhoneId));
        if (TextUtils.isEmpty(simSerialNumber)) {
            return;
        }
        handleXcapQueryIfSimChangedOrBootup(simSerialNumber);
    }

    private void handleXcapQueryIfSimChangedOrBootup(String str) {
        logw("handleXcapQueryIfSimChangedOrBootup mySubId " + getSubIdUsingPhoneId(this.mPhoneId) + " old iccid : " + Rlog.pii(LOG_TAG, this.mOldIccId) + " new iccid : " + Rlog.pii(LOG_TAG, str));
        if (str.equals(this.mOldIccId)) {
            if (VDBG) {
                logd("handleXcapQueryIfSimChangedOrBootup: Same SIM.");
                return;
            }
            return;
        }
        this.mOldIccId = str;
        this.mSimIsChangedAfterBoot = DBG;
        this.mSuppServTaskDriven.clearPendingTask();
        setVolteSubscriptionDirectly(this.mPluginBase.getVolteSubUnknownConstant(), "Reset VoLTE subscription status");
        setUtCapabilityDirectly(0, "Reset Ut capabatility status");
        this.mSuppServTaskDriven.appendTask(new Task(1, false, "Sim Changed or Bootup"));
    }

    private void initPhoneStateListener(Looper looper) {
        TelephonyManager telephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        PhoneStateListener phoneStateListener = new PhoneStateListener(looper) { // from class: com.mediatek.ims.MtkSuppServExt.1
            @Override // android.telephony.PhoneStateListener
            public void onServiceStateChanged(ServiceState serviceState) {
                if (serviceState.getDataRegState() != 0) {
                    return;
                }
                MtkSuppServExt.this.mSuppServTaskDriven.appendTask(MtkSuppServExt.this.new Task(0, false, "Data reg state in service."));
            }
        };
        this.mPhoneStateListener = phoneStateListener;
        telephonyManager.listen(phoneStateListener, 1);
    }

    private boolean isDataEnabled() {
        return ((TelephonyManager) this.mContext.getSystemService("phone")).getDataEnabled(getSubIdUsingPhoneId(this.mPhoneId));
    }

    private boolean isDataRegStateInService() {
        if (((TelephonyManager) this.mContext.getSystemService("phone")).getServiceStateForSubscriber(getSubIdUsingPhoneId(this.mPhoneId)).getDataRegState() == 0) {
            return DBG;
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isOp(OperatorUtils.OPID opid) {
        return OperatorUtils.isOperator(OperatorUtils.getSimOperatorNumericForPhone(this.mPhoneId), opid);
    }

    private boolean isSubInfoReady() {
        if (TextUtils.isEmpty(((TelephonyManager) this.mContext.getSystemService("phone")).getSimSerialNumber(getSubIdUsingPhoneId(this.mPhoneId)))) {
            return false;
        }
        return DBG;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logd(String str) {
        Rlog.d(LOG_TAG, "[" + this.mPhoneId + "]" + str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, "[" + this.mPhoneId + "]" + str);
    }

    private void logi(String str) {
        Rlog.i(LOG_TAG, "[" + this.mPhoneId + "]" + str);
    }

    private void logv(String str) {
        Rlog.v(LOG_TAG, "[" + this.mPhoneId + "]" + str);
    }

    private void logw(String str) {
        Rlog.w(LOG_TAG, "[" + this.mPhoneId + "]" + str);
    }

    private void registerBroadcastReceiver() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        intentFilter.addAction("android.intent.action.AIRPLANE_MODE");
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        intentFilter.addAction("android.telephony.action.SIM_APPLICATION_STATE_CHANGED");
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
    }

    private void registerEvent() {
        this.mImsRILAdapter.registerForImsRegistrationInfo(this, 1, null);
        this.mImsRILAdapter.registerForNotAvailable(this, 2, null);
        this.mImsRILAdapter.registerForOff(this, 3, null);
        this.mImsRILAdapter.registerForOn(this, 4, null);
        this.mImsRILAdapter.registerForVolteSubscription(this, 5, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setSimLoaded(boolean z) {
        logi("Set mSimLoaded: " + z);
        this.mSimLoaded = z;
    }

    private void setUtCapabilityDirectly(int i, String str) {
        this.mSuppServTaskDriven.appendTask(new Task(3, i, str));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setUtCapabilityToSettings(int i) {
        logd("setUtCapabilityToSettings: " + i);
        Settings.Global.putInt(this.mContext.getContentResolver(), SETTING_UT_CAPABILITY + this.mPhoneId, i);
        this.mImsService.notifyUtCapabilityChange(this.mPhoneId);
    }

    private void setVolteSubscriptionDirectly(int i, String str) {
        this.mSuppServTaskDriven.appendTask(new Task(2, i, str));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setVolteSubscriptionToSettings(int i) {
        logd("setVolteSubscriptionToSettings: " + i);
        Settings.Global.putInt(this.mContext.getContentResolver(), this.mPluginBase.getVolteSubscriptionKey() + this.mPhoneId, i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startHandleXcapQueryProcess(boolean z, String str) {
        StringBuilder sb = new StringBuilder();
        boolean zCheckInitCriteria = checkInitCriteria(sb);
        logd("startHandleXcapQueryProcess(), forceQuery: " + z + ", reason: " + str + ", checkCriteria: " + zCheckInitCriteria + ", criteriaFailReason: " + sb.toString());
        if (!zCheckInitCriteria) {
            taskDone();
        } else {
            this.mSimIsChangedAfterBoot = false;
            startXcapQuery();
        }
    }

    private void startXcapQuery() {
        if (!ImsCommonUtil.supportMdAutoSetupIms()) {
            taskDone();
        } else {
            this.mImsRILAdapter.getXcapStatus(obtainMessage(0, null));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void taskDone() {
        this.mSuppServTaskDriven.obtainMessage(0).sendToTarget();
    }

    private String toEventString(int i) {
        if (i == 0) {
            return "EVENT_IMS_UT_EVENT_QUERY_XCAP";
        }
        if (i == 1) {
            return "EVENT_IMS_REGISTRATION_INFO";
        }
        if (i == 2) {
            return "EVENT_RADIO_NOT_AVAILABLE";
        }
        if (i == 3) {
            return "EVENT_RADIO_OFF";
        }
        if (i != 4) {
            return i != 5 ? "UNKNOWN_IMS_EVENT_ID" : "EVENT_ON_VOLTE_SUBSCRIPTION";
        }
        return "EVENT_RADIO_ON";
    }

    private void unRegisterBroadReceiver() {
        this.mContext.unregisterReceiver(this.mBroadcastReceiver);
    }

    private void unRegisterEvent() {
        this.mImsRILAdapter.unregisterForImsRegistrationInfo(this);
        this.mImsRILAdapter.unregisterForNotAvailable(this);
        this.mImsRILAdapter.unregisterForOff(this);
        this.mImsRILAdapter.unregisterForOn(this);
        this.mImsRILAdapter.unregisterForVolteSubscription(this);
    }

    public void dispose() {
        unRegisterBroadReceiver();
    }

    public int getUtCapabilityFromSettings() {
        return Settings.Global.getInt(this.mContext.getContentResolver(), SETTING_UT_CAPABILITY + this.mPhoneId, 0);
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        logd("handleMessage: " + toEventString(message.what) + "(" + message.what + ")");
        AsyncResult asyncResult = (AsyncResult) message.obj;
        int i = message.what;
        if (i == 0) {
            this.mQueryXcapDone = DBG;
            taskDone();
            return;
        }
        if (i == 1) {
            int i2 = ((int[]) asyncResult.result)[0];
            logd("EVENT_IMS_REGISTRATION_INFO: " + i2);
            if (i2 == 1) {
                setVolteSubscriptionDirectly(this.mPluginBase.getVolteSubEnableConstant(), "Ims registered.");
                return;
            }
            return;
        }
        if (i == 2) {
            this.mRadioState = ImsCommandsInterface.RadioState.RADIO_UNAVAILABLE.ordinal();
            return;
        }
        if (i == 3) {
            this.mRadioState = ImsCommandsInterface.RadioState.RADIO_OFF.ordinal();
            return;
        }
        if (i == 4) {
            this.mRadioState = ImsCommandsInterface.RadioState.RADIO_ON.ordinal();
            this.mSuppServTaskDriven.appendTask(new Task(0, false, "Radio on"));
            return;
        }
        if (i != 5) {
            logd("Unhandled msg: " + message.what);
            return;
        }
        int i3 = ((int[]) asyncResult.result)[0];
        logd(" EVENT_ON_VOLTE_SUBSCRIPTION, volteSubstatus = " + i3);
        if (i3 == 1) {
            setVolteSubscriptionDirectly(this.mPluginBase.getVolteSubEnableConstant(), "Receive VoLTE Subscription URC");
            setUtCapabilityDirectly(1, "Receive VoLTE Subscription URC");
        } else if (i3 == 2) {
            setVolteSubscriptionDirectly(this.mPluginBase.getVolteSubDisableConstant(), "Receive VoLTE Subscription URC");
            setUtCapabilityDirectly(2, "Receive VoLTE Subscription URC");
        }
    }

    public boolean isSupportCFT() {
        logd("isSupportCFT: getVolteSubscriptionFromSettings = " + getVolteSubscriptionFromSettings());
        if (isOp(OperatorUtils.OPID.OP01)) {
            return DBG;
        }
        return false;
    }
}
