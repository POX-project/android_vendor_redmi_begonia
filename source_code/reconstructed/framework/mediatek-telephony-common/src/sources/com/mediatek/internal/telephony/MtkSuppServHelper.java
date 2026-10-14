package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.preference.PreferenceManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.ims.ImsMmTelManager;
import com.android.ims.FeatureConnector;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Base64;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes.dex */
public class MtkSuppServHelper extends Handler {
    private static final String ACTION_SYSTEM_UPDATE_SUCCESSFUL = "com.mediatek.systemupdate.UPDATE_SUCCESSFUL";
    private static final boolean CFU_QUERY_WHEN_IMS_REGISTERED_DEFAULT = false;
    private static final String CFU_SETTING_ALWAYS_NOT_QUERY = "1";
    private static final String CFU_SETTING_ALWAYS_QUERY = "2";
    private static final String CFU_SETTING_DEFAULT = "0";
    private static final String CFU_SETTING_QUERY_IF_EFCFIS_INVALID = "3";
    private static final boolean DBG = true;
    private static final int EFCFIS_STATUS_INVALID = 3;
    private static final int EFCFIS_STATUS_NOT_READY = 0;
    private static final int EFCFIS_STATUS_VALID = 2;
    private static final int EVENT_CALL_FORWARDING_STATUS_FROM_MD = 6;
    private static final int EVENT_CARRIER_CONFIG_LOADED = 15;
    private static final int EVENT_CFU_STATUS_FROM_MD = 8;
    public static final int EVENT_CLEAN_CFU_STATUS = 16;
    private static final int EVENT_DATA_CONNECTION_ATTACHED = 2;
    private static final int EVENT_DATA_CONNECTION_DETACHED = 3;
    private static final int EVENT_GET_CALL_FORWARD_BY_GSM_DONE = 4;
    private static final int EVENT_GET_CALL_FORWARD_BY_IMS_DONE = 5;
    private static final int EVENT_GET_CALL_FORWARD_TIME_SLOT_BY_GSM_DONE = 10;
    private static final int EVENT_GET_CALL_FORWARD_TIME_SLOT_BY_IMS_DONE = 11;
    private static final int EVENT_ICCRECORDS_READY = 1;
    private static final int EVENT_ICC_CHANGED = 13;
    private static final int EVENT_QUERY_CFU_OVER_CS = 7;
    private static final int EVENT_QUERY_CFU_OVER_CS_AFTER_DATA_NOT_ATTACHED = 14;
    private static final int EVENT_REGISTERED_TO_NETWORK = 0;
    private static final int EVENT_SIM_RECORDS_LOADED = 12;
    private static final int EVENT_SS_RESET = 9;
    private static final String IMS_NOT_QUERY_YET = "1";
    private static final String IMS_NO_NEED_QUERY = "0";
    private static final String IMS_QUERY_DONE = "2";
    private static final String LOG_TAG = "SuppServHelper";
    private static final int QUERY_OVER_GSM = 0;
    private static final int QUERY_OVER_GSM_OVER_UT = 1;
    private static final int QUERY_OVER_IMS = 2;
    private static final boolean SDBG;
    private static final String SIM_CHANGED = "1";
    private static final String SIM_NO_CHANGED = "0";
    private static final int TASK_CLEAN_CFU_STATUS = 4;
    private static final int TASK_QUERY_CFU = 0;
    private static final int TASK_QUERY_CFU_OVER_GSM = 1;
    private static final int TASK_QUERY_CFU_OVER_IMS = 2;
    private static final int TASK_SET_CW_STATUS = 5;
    private static final int TASK_TIME_SLOT_FAILED = 3;
    private static final int TIMER_FOR_RETRY_QUERY_CFU = 20000;
    private static final int TIMER_FOR_WAIT_DATA_ATTACHED = 20000;
    private static final boolean VDBG = SystemProperties.get("ro.build.type").equals("eng");
    private Context mContext;
    private final FeatureConnector<ImsManager> mImsManagerConnector;
    private MtkGsmCdmaPhone mPhone;
    private UiccController mUiccController = null;
    private AtomicBoolean mAttached = new AtomicBoolean(false);
    private MtkSuppServHelper mMtkSuppServHelper = null;
    private SuppServTaskDriven mSuppServTaskDriven = null;
    private boolean mSimRecordsLoaded = false;
    private boolean mCarrierConfigLoaded = false;
    private ImsManager mImsManager = null;
    private int mNeeedSyncForOTA = -1;
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkSuppServHelper.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) throws UnsupportedEncodingException {
            String action = intent.getAction();
            if (action.equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED")) {
                MtkSuppServHelper.this.handleSubinfoUpdate();
                return;
            }
            if (action.equals("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE")) {
                return;
            }
            if (action.equals("android.intent.action.AIRPLANE_MODE")) {
                boolean booleanExtra = intent.getBooleanExtra("state", false);
                MtkSuppServHelper.this.logd("ACTION_AIRPLANE_MODE_CHANGED, bAirplaneModeOn = " + booleanExtra);
                if (booleanExtra && MtkSuppServHelper.this.isResetCSFBStatusAfterFlightMode()) {
                    MtkSuppServHelper.this.mPhone.setCsFallbackStatus(0);
                    return;
                }
                return;
            }
            if (action.equals("android.intent.action.ACTION_SUPPLEMENTARY_SERVICE_UT_TEST")) {
                MtkSuppServHelper.this.logd("ACTION_SUPPLEMENTARY_SERVICE_UT_TEST");
                if (MtkSuppServHelper.this.isSupportSuppServUTTest()) {
                    MtkSuppServHelper.this.makeMtkSuppServUtTest(intent).run();
                    return;
                }
                return;
            }
            if (!action.equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                if (action.equals(MtkSuppServHelper.ACTION_SYSTEM_UPDATE_SUCCESSFUL)) {
                    MtkSuppServHelper.this.logd("ACTION_SYSTEM_UPDATE_SUCCESSFUL");
                    return;
                }
                return;
            }
            int intExtra = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
            int intExtra2 = intent.getIntExtra("subscription", -1);
            MtkSuppServHelper.this.logd("ACTION_SIM_APPLICATION_STATE_CHANGED: " + intExtra + ", subId: " + intExtra2);
            if (10 != intExtra) {
            }
        }
    };
    private final ImsMmTelManager.RegistrationCallback mImsRegistrationCallback = new ImsMmTelManager.RegistrationCallback() { // from class: com.mediatek.internal.telephony.MtkSuppServHelper.3
        public void onRegistered(int i) {
            MtkSuppServHelper.this.logd("onImsRegistered imsRadioTech=" + i);
            if (MtkSuppServHelper.this.isMDSupportIMSSuppServ()) {
                return;
            }
            if (MtkSuppServHelper.this.mPhone.isOpTbcwWithCS()) {
                MtkSuppServHelper.this.mPhone.setTbcwMode(3);
                MtkSuppServHelper.this.mPhone.setTbcwToEnabledOnIfDisabled();
            } else {
                MtkSuppServHelper.this.mPhone.setTbcwMode(1);
                MtkSuppServHelper.this.mPhone.setTbcwToEnabledOnIfDisabled();
            }
        }
    };

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.MtkSuppServHelper$4, reason: invalid class name */
    static /* synthetic */ class AnonymousClass4 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$CommandException$Error;

        static {
            int[] iArr = new int[CommandException.Error.values().length];
            $SwitchMap$com$android$internal$telephony$CommandException$Error = iArr;
            try {
                iArr[CommandException.Error.OEM_ERROR_25.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_6.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_24.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_23.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_22.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

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
                    MtkSuppServHelper.this.logd("removePendingTask remain mPendingTask: " + this.mPendingTask.size());
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
            MtkSuppServHelper.this.logd(currentPendingTask.toString());
            if (taskId != 5) {
                MtkSuppServHelper.this.taskDone();
                return;
            }
            if (!MtkSuppServHelper.this.isMDSupportIMSSuppServ()) {
                MtkSuppServHelper.this.mPhone.setTbcwMode(0);
                MtkSuppServHelper.this.mPhone.setSSPropertyThroughHidl(MtkSuppServHelper.this.mPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
            }
            MtkSuppServHelper.this.taskDone();
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
        SDBG = !SystemProperties.get("ro.build.type").equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    }

    public MtkSuppServHelper(Context context, Phone phone) {
        this.mPhone = null;
        this.mContext = context;
        this.mPhone = (MtkGsmCdmaPhone) phone;
        FeatureConnector<ImsManager> featureConnector = new FeatureConnector<>(this.mPhone.getContext(), this.mPhone.getPhoneId(), new FeatureConnector.Listener<ImsManager>() { // from class: com.mediatek.internal.telephony.MtkSuppServHelper.1
            /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
            public void connectionReady(ImsManager imsManager) throws ImsException {
                MtkSuppServHelper.this.mImsManager = imsManager;
                MtkSuppServHelper.this.setImsCallback();
            }

            public void connectionUnavailable() {
                MtkSuppServHelper.this.unSetImsCallback();
            }

            /* JADX INFO: renamed from: getFeatureManager, reason: merged with bridge method [inline-methods] */
            public ImsManager m0getFeatureManager() {
                return ImsManager.getInstance(MtkSuppServHelper.this.mPhone.getContext(), MtkSuppServHelper.this.mPhone.getPhoneId());
            }
        }, this.mPhone.getContext().getMainExecutor(), "MtkSuppServHelper");
        this.mImsManagerConnector = featureConnector;
        featureConnector.connect();
        registerEvent();
        registerBroadcastReceiver();
        logd("MtkSuppServHelper init done.");
    }

    private int checkEfCfis() {
        MtkSIMRecords iccRecords = this.mPhone.getIccRecords();
        if (iccRecords == null || !(iccRecords instanceof MtkSIMRecords)) {
            return 0;
        }
        return iccRecords.checkEfCfis() ? 2 : 3;
    }

    private boolean checkInitCriteria(StringBuilder sb) {
        if (!isSubInfoReady()) {
            sb.append("SubInfo not ready, ");
            return false;
        }
        if (!isIccCardMncMccAvailable(this.mPhone.getPhoneId())) {
            sb.append("MCC MNC not ready, ");
            return false;
        }
        if (!isIccRecordsAvailable()) {
            sb.append("Icc record available, ");
            return false;
        }
        if (!isVoiceInService()) {
            sb.append("Network is not registered, ");
            return false;
        }
        if (getSimRecordsLoaded()) {
            sb.append("All Criteria ready.");
            return true;
        }
        sb.append("Sim not loaded, ");
        return false;
    }

    public static String encryptString(String str) throws UnsupportedEncodingException {
        byte[] bytes;
        Base64.Encoder encoder = Base64.getEncoder();
        if (str == null) {
            return "null";
        }
        try {
            bytes = str.getBytes("UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
            bytes = null;
        }
        return bytes == null ? "" : encoder.encodeToString(bytes);
    }

    private boolean getCarrierConfigLoaded() {
        logi("mCarrierConfigLoaded: " + this.mCarrierConfigLoaded);
        return this.mCarrierConfigLoaded;
    }

    private boolean getSIMChangedRecordFromSystemProp() {
        String str = SystemProperties.get("persist.vendor.radio.cfu.change." + this.mPhone.getPhoneId(), "0");
        logd("getSIMChangedRecordFromSystemProp: " + str);
        return str.equals("1");
    }

    private boolean getSimRecordsLoaded() {
        logi("mSimRecordsLoaded: " + this.mSimRecordsLoaded);
        return this.mSimRecordsLoaded;
    }

    private IccRecords getUiccRecords(int i) {
        return this.mUiccController.getIccRecords(this.mPhone.getPhoneId(), i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSubinfoUpdate() throws UnsupportedEncodingException {
        if (isSubInfoReady()) {
            handleSuppServInit();
            if (isIccRecordsAvailable()) {
            }
        }
    }

    private void handleSuppServIfSimChanged() {
        if (getSIMChangedRecordFromSystemProp()) {
            reset();
            this.mPhone.setCsFallbackStatus(0);
            this.mSuppServTaskDriven.appendTask(new Task(5, false, "Sim Changed"));
            this.mPhone.saveTimeSlot(null);
            SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(this.mContext);
            if (defaultSharedPreferences.getInt("clir_sub_key" + this.mPhone.getPhoneId(), -1) != -1) {
                SharedPreferences.Editor editorEdit = defaultSharedPreferences.edit();
                editorEdit.remove("clir_sub_key" + this.mPhone.getPhoneId());
                if (!editorEdit.commit()) {
                    loge("failed to commit the removal of CLIR preference");
                }
            }
            this.mSuppServTaskDriven.appendTask(new Task(0, false, "Sim Changed"));
        }
    }

    private void handleSuppServInit() throws UnsupportedEncodingException {
        String str = "persist.vendor.radio.cfu.iccid." + this.mPhone.getPhoneId();
        String str2 = SystemProperties.get(str, "");
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
        SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom != null ? subscriptionManagerFrom.getActiveSubscriptionInfo(this.mPhone.getSubId()) : null;
        if (activeSubscriptionInfo == null) {
            this.mNeeedSyncForOTA = -1;
            return;
        }
        String strEncryptString = encryptString(activeSubscriptionInfo.getIccId());
        if (str2.equals(strEncryptString)) {
            return;
        }
        logw("mySubId " + this.mPhone.getSubId() + " mySettingName " + Rlog.pii(SDBG, str) + " old iccid : " + str2 + " new iccid : " + strEncryptString);
        SystemProperties.set(str, strEncryptString);
        StringBuilder sb = new StringBuilder();
        sb.append("persist.vendor.radio.cfu.change.");
        sb.append(this.mPhone.getPhoneId());
        SystemProperties.set(sb.toString(), "1");
        handleSuppServIfSimChanged();
    }

    private boolean isIMSRegistered() {
        Phone imsPhone = this.mPhone.getImsPhone();
        return this.mPhone.getCsFallbackStatus() == 0 && imsPhone != null && imsPhone.getServiceState().getState() == 0;
    }

    private boolean isIccCardMncMccAvailable(int i) {
        IccRecords iccRecords = UiccController.getInstance().getIccRecords(i, 1);
        return (iccRecords == null || iccRecords.getOperatorNumeric() == null) ? false : true;
    }

    private boolean isIccRecordsAvailable() {
        return this.mPhone.getIccRecords() != null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isMDSupportIMSSuppServ() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    private boolean isNoNeedToCSFBWhenIMSRegistered() {
        return this.mPhone.isNoNeedToCSFBWhenIMSRegistered();
    }

    private boolean isNotMachineTest() {
        String str = "0";
        boolean z = false;
        if (this.mPhone.getPhoneId() == 0) {
            str = SystemProperties.get("vendor.gsm.sim.ril.testsim", "0");
        } else if (this.mPhone.getPhoneId() == 1) {
            str = SystemProperties.get("vendor.gsm.sim.ril.testsim.2", "0");
        }
        String operatorNumeric = this.mPhone.getServiceState().getOperatorNumeric();
        if (operatorNumeric != null && operatorNumeric.equals("46602")) {
            z = true;
        }
        logd("isTestSIM : " + str + " isRRMEnv : " + z);
        return str.equals("0") && !z;
    }

    private boolean isNotSupportUtToCS() {
        return this.mPhone.isNotSupportUtToCSforCFUQuery();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isResetCSFBStatusAfterFlightMode() {
        return this.mPhone.isResetCSFBStatusAfterFlightMode();
    }

    private boolean isSubInfoReady() {
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
        SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom != null ? subscriptionManagerFrom.getActiveSubscriptionInfo(this.mPhone.getSubId()) : null;
        return (activeSubscriptionInfo == null || activeSubscriptionInfo.getIccId() == null) ? false : true;
    }

    private boolean isSupportCFUTimeSlot() {
        return this.mPhone.isSupportCFUTimeSlot();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isSupportSuppServUTTest() {
        return SystemProperties.get("persist.vendor.ims_support").equals("1") && SystemProperties.get("persist.vendor.volte_support").equals("1") && this.mPhone.getPhoneId() == 0;
    }

    private boolean isVoiceInService() {
        return (this.mPhone.mSST == null || this.mPhone.mSST.mSS == null || this.mPhone.mSST.mSS.getState() != 0) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logd(String str) {
        Rlog.d(LOG_TAG, "[" + this.mPhone.getPhoneId() + "]" + str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, "[" + this.mPhone.getPhoneId() + "]" + str);
    }

    private void logi(String str) {
        Rlog.i(LOG_TAG, "[" + this.mPhone.getPhoneId() + "]" + str);
    }

    private void logv(String str) {
        Rlog.v(LOG_TAG, "[" + this.mPhone.getPhoneId() + "]" + str);
    }

    private void logw(String str) {
        Rlog.w(LOG_TAG, "[" + this.mPhone.getPhoneId() + "]" + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public MtkSuppServUtTest makeMtkSuppServUtTest(Intent intent) {
        return new MtkSuppServUtTest(this.mContext, intent, this.mPhone);
    }

    private void notifyCdmaCallForwardingIndicator() {
        if (this.mPhone.isGsmSsPrefer() && this.mPhone.getPhoneType() == 2) {
            this.mPhone.notifyCallForwardingIndicator();
        }
    }

    private void registerBroadcastReceiver() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        intentFilter.addAction("android.intent.action.AIRPLANE_MODE");
        intentFilter.addAction("android.telephony.action.SIM_APPLICATION_STATE_CHANGED");
        intentFilter.addAction(ACTION_SYSTEM_UPDATE_SUCCESSFUL);
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
        IntentFilter intentFilter2 = new IntentFilter();
        intentFilter2.addAction("android.intent.action.ACTION_SUPPLEMENTARY_SERVICE_UT_TEST");
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter2, "com.mediatek.permission.SUPPLEMENTARY_SERVICE_UT_TEST", null);
    }

    private void registerEvent() {
        this.mPhone.getServiceStateTracker().registerForDataConnectionAttached(1, this, 2, (Object) null);
        this.mPhone.getServiceStateTracker().registerForDataConnectionDetached(1, this, 3, (Object) null);
        this.mPhone.getServiceStateTracker().registerForNetworkAttached(this, 0, (Object) null);
        this.mPhone.registerForSimRecordsLoaded(this, 12, null);
        UiccController uiccController = UiccController.getInstance();
        this.mUiccController = uiccController;
        uiccController.registerForIccChanged(this, 13, (Object) null);
        this.mPhone.mCi.registerForCallForwardingInfo(this, 8, null);
    }

    private void reset() {
        this.mSuppServTaskDriven.clearPendingTask();
    }

    private void setCarrierConfigLoaded(boolean z) {
        logi("Set mCarrierConfigLoaded: " + z);
        this.mCarrierConfigLoaded = z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setImsCallback() throws ImsException {
        try {
            this.mImsManager.addRegistrationCallback(this.mImsRegistrationCallback);
        } catch (ImsException e) {
            logd("ImsManager addRegistrationCallback failed, " + e.toString());
        }
    }

    private void setSimRecordsLoaded(boolean z) {
        logi("Set mSimRecordsLoaded: " + z);
        this.mSimRecordsLoaded = z;
    }

    private boolean syncSysPropToSIMforOTA() {
        int i = this.mNeeedSyncForOTA;
        if (i == 0) {
            logd("syncSysPropToSIMforOTA: No need to sync (sim change): " + this.mNeeedSyncForOTA);
            return true;
        }
        if (i == -1) {
            logd("syncSysPropToSIMforOTA: No need to sync (unknown): " + this.mNeeedSyncForOTA);
            return false;
        }
        if (!getSimRecordsLoaded()) {
            logd("syncSysPropToSIMforOTA: SIM not loaded.");
            return false;
        }
        int iCheckEfCfis = checkEfCfis();
        logd("syncSysPropToSIMforOTA: checkEfCfis = " + iCheckEfCfis);
        if (iCheckEfCfis == 0) {
            return false;
        }
        if (iCheckEfCfis != 2) {
            return iCheckEfCfis == 3 ? true : true;
        }
        boolean callForwardingIndicator = this.mPhone.getCallForwardingIndicator();
        if (callForwardingIndicator) {
            logd("syncSysPropToSIMforOTA: true from system preference.");
            this.mPhone.setVoiceCallForwardingFlag(1, callForwardingIndicator, "");
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void taskDone() {
        this.mSuppServTaskDriven.obtainMessage(0).sendToTarget();
    }

    private String toEventString(int i) {
        switch (i) {
            case 0:
                return "EVENT_REGISTERED_TO_NETWORK";
            case 1:
                return "EVENT_ICCRECORDS_READY";
            case 2:
                return "EVENT_DATA_CONNECTION_ATTACHED";
            case 3:
                return "EVENT_DATA_CONNECTION_DETACHED";
            case 4:
                return "EVENT_GET_CALL_FORWARD_BY_GSM_DONE";
            case 5:
                return "EVENT_GET_CALL_FORWARD_BY_IMS_DONE";
            case 6:
                return "EVENT_CALL_FORWARDING_STATUS_FROM_MD";
            case 7:
                return "EVENT_QUERY_CFU_OVER_CS";
            case 8:
                return "EVENT_CFU_STATUS_FROM_MD";
            case 9:
                return "EVENT_SS_RESET";
            case 10:
                return "EVENT_GET_CALL_FORWARD_TIME_SLOT_BY_GSM_DONE";
            case 11:
                return "EVENT_GET_CALL_FORWARD_TIME_SLOT_BY_IMS_DONE";
            case 12:
                return "EVENT_SIM_RECORDS_LOADED";
            case 13:
                return "EVENT_ICC_CHANGED";
            case 14:
                return "EVENT_QUERY_CFU_OVER_CS_AFTER_DATA_NOT_ATTACHED";
            case 15:
                return "EVENT_CARRIER_CONFIG_LOADED";
            case 16:
                return "EVENT_CLEAN_CFU_STATUS";
            default:
                return "UNKNOWN_EVENT_ID";
        }
    }

    private String toReasonString(int i) {
        if (i == 0) {
            return "CS in service";
        }
        if (i == 1) {
            return "ICCRecords ready";
        }
        if (i == 2) {
            return "Data Attached";
        }
        if (i == 12) {
            return "SIM records loaded";
        }
        if (i != 15) {
            return i != 16 ? "Unknown reason, should not be here." : "Clean CFU status";
        }
        return "Carrier config loaded";
    }

    private void unRegisterBroadReceiver() {
        this.mContext.unregisterReceiver(this.mBroadcastReceiver);
    }

    private void unRegisterEvent() {
        this.mPhone.getServiceStateTracker().unregisterForDataConnectionAttached(1, this);
        this.mPhone.getServiceStateTracker().unregisterForDataConnectionDetached(1, this);
        this.mPhone.getServiceStateTracker().unregisterForNetworkAttached(this);
        this.mPhone.unregisterForSimRecordsLoaded(this);
        UiccController uiccController = UiccController.getInstance();
        this.mUiccController = uiccController;
        uiccController.unregisterForIccChanged(this);
        this.mPhone.mCi.unregisterForCallForwardingInfo(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unSetImsCallback() {
        ImsManager imsManager = this.mImsManager;
        if (imsManager != null) {
            imsManager.removeRegistrationListener(this.mImsRegistrationCallback);
        }
    }

    public void dispose() {
        unRegisterEvent();
        unRegisterBroadReceiver();
        this.mImsManagerConnector.disconnect();
    }

    public boolean getIMSRegistered() {
        return isIMSRegistered();
    }

    public String getXCAPErrorMessageFromSysProp(CommandException.Error error) {
        String str;
        String str2 = "vendor.gsm.radio.ss.errormsg." + this.mPhone.getPhoneId();
        String str3 = "";
        int i = 0;
        String str4 = SystemProperties.get(str2 + ".0", "");
        while (!str4.equals("")) {
            str3 = str3 + str4;
            i++;
            str4 = SystemProperties.get(str2 + "." + i, "");
        }
        logd("fullErrorMsg: " + str3);
        int i2 = AnonymousClass4.$SwitchMap$com$android$internal$telephony$CommandException$Error[error.ordinal()];
        if (i2 == 1) {
            str = "409";
        } else if (i2 == 2) {
            str = "412";
        } else if (i2 == 3) {
            str = "415";
        } else if (i2 == 4) {
            str = "500";
        } else {
            if (i2 != 5) {
                return null;
            }
            str = "503";
        }
        if (!str3.startsWith(str)) {
            return null;
        }
        String strSubstring = str3.substring(str.length() + 1);
        logd("errorMsg: " + strSubstring);
        return strSubstring;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        logd("handleMessage: " + toEventString(message.what) + "(" + message.what + ")");
        int i = message.what;
        if (i == 3) {
            this.mAttached.set(false);
            return;
        }
        if (i == 12) {
            setSimRecordsLoaded(true);
            notifyCdmaCallForwardingIndicator();
        } else {
            if (i == 15) {
                setCarrierConfigLoaded(true);
                return;
            }
            logd("Bypass msg: " + message.what);
        }
    }

    public void init(Looper looper) {
        this.mSuppServTaskDriven = new SuppServTaskDriven(looper);
    }

    public void notifyCarrierConfigLoaded() {
        obtainMessage(15).sendToTarget();
    }

    public void setIccRecordsReady() {
        obtainMessage(1).sendToTarget();
    }
}
