package com.mediatek.internal.telephony.datasub;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.mediatek.internal.telephony.MtkSubscriptionController;
import com.mediatek.internal.telephony.MtkSubscriptionManager;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DataSubSelector {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "DSSelector";
    private static String mOperatorSpec;
    private CapabilitySwitch mCapabilitySwitch;
    private Context mContext;
    private IDataSubSelectorOPExt mDataSubSelectorOPExt;
    private Handler mProtocolHandler;
    private ISimSwitchForDSSExt mSimSwitchForDSSExt;
    private static final boolean USER_BUILD = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    private static String ACTION_BOOT_COMPLETE = "android.intent.action.BOOT_COMPLETED";
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory = null;
    private boolean mIsWaitIccid = false;
    private boolean mIsNeedPreCheck = true;
    private boolean mIsNeedWaitAirplaneModeOff = false;
    private boolean mIsNeedWaitAirplaneModeOffRoaming = false;
    private boolean mAirplaneModeOn = false;
    private Intent mIntent = null;
    private boolean mIsInRoaming = false;
    protected final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.datasub.DataSubSelector.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (action == null) {
                return;
            }
            DataSubSelector.this.log("onReceive: action=" + action);
            if (action.equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                DataSubSelector.this.handleSimStateChanged(intent);
                return;
            }
            if (action.equals("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED")) {
                int intExtra = intent.getIntExtra("subscription", -1);
                DataSubSelector.this.log("nDefaultDataSubId: " + intExtra);
                DataSubSelector.this.handleDefaultDataChanged(intent);
                return;
            }
            if ("android.intent.action.AIRPLANE_MODE".equals(action)) {
                DataSubSelector.this.mAirplaneModeOn = intent.getBooleanExtra("state", false);
                DataSubSelector.this.log("ACTION_AIRPLANE_MODE_CHANGED, enabled = " + DataSubSelector.this.mAirplaneModeOn);
                if (DataSubSelector.this.mAirplaneModeOn) {
                    return;
                }
                if (DataSubSelector.this.mIsNeedWaitAirplaneModeOff) {
                    DataSubSelector.this.mIsNeedWaitAirplaneModeOff = false;
                    DataSubSelector.this.handleAirPlaneModeOff(intent);
                }
                if (DataSubSelector.this.mIsNeedWaitAirplaneModeOffRoaming) {
                    DataSubSelector.this.mIsNeedWaitAirplaneModeOffRoaming = false;
                    return;
                }
                return;
            }
            if (action.equals("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED")) {
                DataSubSelector.this.handleSubinfoRecordUpdated(intent);
                return;
            }
            if ("com.mediatek.intent.action.LOCATED_PLMN_CHANGED".equals(action)) {
                DataSubSelector.this.handlePlmnChanged(intent);
                return;
            }
            if (action.equals("android.net.conn.CONNECTIVITY_CHANGE") && RadioCapabilitySwitchUtil.isSubsidyLockForOmSupported()) {
                DataSubSelector.this.log("DataSubSelector receive CONNECTIVITY_ACTION");
                DataSubSelector.this.handleConnectivityAction();
            } else if (action.equals(DataSubSelector.ACTION_BOOT_COMPLETE) && RadioCapabilitySwitchUtil.isSubsidyLockForOmSupported()) {
                DataSubSelector.this.log("DataSubSelector receive ACTION_BOOT_COMPLETE");
                DataSubSelector.this.handleBootCompleteAction();
            }
        }
    };
    private ContentObserver mPrefNetworkModeObserver = new ContentObserver(new Handler()) { // from class: com.mediatek.internal.telephony.datasub.DataSubSelector.2
        @Override // android.database.ContentObserver
        public void onChange(boolean z) {
            DataSubSelector.this.log("mPrefNetworkModeObserver, changed");
            DataSubSelector.this.handlePrefNetworkModeChanged();
        }
    };
    private UpdateNWTypeHandler mUpdateNWTypeHandler = new UpdateNWTypeHandler();

    private class UpdateNWTypeHandler extends Handler {
        static final int MESSAGE_SET_PREFERRED_NETWORK_TYPE = 0;

        private UpdateNWTypeHandler() {
        }

        private void handleSetPreferredNetworkTypeResponse(Message message, int i, int i2) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            Phone phone = PhoneFactory.getPhone(SubscriptionManager.getPhoneId(i));
            if (asyncResult.exception != null) {
                DataSubSelector.this.log("handleSetPreferredNetworkTypeResponse:exception in setting network.");
                return;
            }
            DataSubSelector.this.log("handleSetPreferredNetwrokTypeResponse2: networkMode:" + i2);
            Settings.Global.putInt(phone.getContext().getContentResolver(), "preferred_network_mode" + i, i2);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            handleSetPreferredNetworkTypeResponse(message, message.arg1, message.arg2);
        }
    }

    public DataSubSelector(Context context) {
        this.mDataSubSelectorOPExt = null;
        this.mSimSwitchForDSSExt = null;
        this.mContext = null;
        this.mCapabilitySwitch = null;
        log("DataSubSelector is created");
        mOperatorSpec = SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "OM");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.telephony.action.SIM_APPLICATION_STATE_CHANGED");
        intentFilter.addAction("com.mediatek.intent.action.LOCATED_PLMN_CHANGED");
        intentFilter.addAction("android.intent.action.ACTION_DEFAULT_DATA_SUBSCRIPTION_CHANGED");
        intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
        intentFilter.addAction(ACTION_BOOT_COMPLETE);
        context.registerReceiver(this.mBroadcastReceiver, intentFilter);
        this.mContext = context;
        initOpDataSubSelector(context);
        if (this.mDataSubSelectorOPExt == null) {
            this.mDataSubSelectorOPExt = new DataSubSelectorOpExt(context);
        }
        initSimSwitchForDSS(context);
        if (this.mSimSwitchForDSSExt == null) {
            this.mSimSwitchForDSSExt = new SimSwitchForDSSExt(context);
        }
        this.mCapabilitySwitch = CapabilitySwitch.getInstance(context, this);
        this.mSimSwitchForDSSExt.init(this);
        this.mDataSubSelectorOPExt.init(this, this.mSimSwitchForDSSExt);
        registerPrefNetworkModeObserver();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleAirPlaneModeOff(Intent intent) {
        this.mDataSubSelectorOPExt.handleAirPlaneModeOff(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleBootCompleteAction() {
        this.mDataSubSelectorOPExt.handleBootCompleteAction();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleConnectivityAction() {
        this.mDataSubSelectorOPExt.handleConnectivityAction();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleDefaultDataChanged(Intent intent) {
        this.mDataSubSelectorOPExt.handleDefaultDataChanged(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handlePlmnChanged(Intent intent) {
        this.mDataSubSelectorOPExt.handlePlmnChanged(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handlePrefNetworkModeChanged() {
        int phoneId;
        int defaultDataSubId = SubscriptionController.getInstance().getDefaultDataSubId();
        if (defaultDataSubId == -1 || (phoneId = SubscriptionManager.getPhoneId(defaultDataSubId)) < 0) {
            return;
        }
        this.mCapabilitySwitch.setCapability(phoneId);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSimStateChanged(Intent intent) {
        this.mDataSubSelectorOPExt.handleSimStateChanged(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleSubinfoRecordUpdated(Intent intent) {
        this.mDataSubSelectorOPExt.handleSubinfoRecordUpdated(intent);
    }

    private void initOpDataSubSelector(Context context) {
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
            this.mTelephonyCustomizationFactory = opFactory;
            this.mDataSubSelectorOPExt = opFactory.makeDataSubSelectorOPExt(context);
        } catch (Exception e) {
            log("mDataSubSelectorOPExt init fail");
            e.printStackTrace();
        }
    }

    private void initSimSwitchForDSS(Context context) {
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
            this.mTelephonyCustomizationFactory = opFactory;
            this.mSimSwitchForDSSExt = opFactory.makeSimSwitchForDSSOPExt(context);
        } catch (Exception e) {
            log("mSimSwitchForDSSExt init fail");
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private void registerPrefNetworkModeObserver() {
        for (int i = 0; i < getPhoneNum(); i++) {
            int subIdUsingPhoneId = SubscriptionController.getInstance().getSubIdUsingPhoneId(i);
            if (SubscriptionManager.isValidSubscriptionId(subIdUsingPhoneId)) {
                this.mContext.getContentResolver().registerContentObserver(Settings.Global.getUriFor("preferred_network_mode" + subIdUsingPhoneId), true, this.mPrefNetworkModeObserver);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateNetworkModeUtil(int i, int i2) {
        log("Updating network mode for subId " + i + "mode " + i2);
        PhoneFactory.getPhone(SubscriptionManager.getPhoneId(i)).setPreferredNetworkType(i2, this.mUpdateNWTypeHandler.obtainMessage(0, i, i2));
    }

    public boolean getAirPlaneModeOn() {
        return this.mAirplaneModeOn;
    }

    public IDataSubSelectorOPExt getDataSubSelectorOpExt() {
        return this.mDataSubSelectorOPExt;
    }

    public boolean getIsNeedPreCheck() {
        return this.mIsNeedPreCheck;
    }

    public boolean getIsWaitIccid() {
        return this.mIsWaitIccid;
    }

    public int getPhoneNum() {
        return ((TelephonyManager) this.mContext.getSystemService("phone")).getActiveModemCount();
    }

    public void setDataEnabled(int i, boolean z) {
        log("setDataEnabled: phoneId=" + i + ", enable=" + z);
        TelephonyManager telephonyManager = TelephonyManager.getDefault();
        if (telephonyManager != null) {
            if (i == -1) {
                telephonyManager.setDataEnabled(z);
                return;
            }
            if (!z) {
                int subId = PhoneFactory.getPhone(i).getSubId();
                log("Set Sub" + subId + " to disable");
                telephonyManager.setDataEnabled(subId, z);
                return;
            }
            for (int i2 = 0; i2 < getPhoneNum(); i2++) {
                int subId2 = PhoneFactory.getPhone(i2).getSubId();
                if (i2 != i) {
                    log("Set Sub" + subId2 + " to disable");
                    telephonyManager.setDataEnabled(subId2, false);
                } else {
                    log("Set Sub" + subId2 + " to enable");
                    telephonyManager.setDataEnabled(subId2, true);
                }
            }
        }
    }

    public void setDefaultData(int i) {
        SubscriptionController.getInstance();
        int subIdUsingPhoneId = MtkSubscriptionManager.getSubIdUsingPhoneId(i);
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        log("setDefaultDataSubId: " + subIdUsingPhoneId + ", current default sub:" + defaultDataSubscriptionId);
        if (subIdUsingPhoneId == defaultDataSubscriptionId || subIdUsingPhoneId < -1) {
            log("setDefaultDataSubId: default data unchanged");
        } else {
            MtkSubscriptionController.getMtkInstance().setDefaultDataSubIdWithoutCapabilitySwitch(subIdUsingPhoneId);
        }
    }

    public void setIsNeedPreCheck(boolean z) {
        this.mIsNeedPreCheck = z;
    }

    public void setIsWaitIccid(boolean z) {
        this.mIsWaitIccid = z;
    }

    public void updateNetworkMode(Context context, final int i) {
        Context applicationContext = context.getApplicationContext();
        this.mContext = applicationContext;
        final List<SubscriptionInfo> activeSubscriptionInfoList = SubscriptionManager.from(applicationContext).getActiveSubscriptionInfoList();
        if (activeSubscriptionInfoList == null) {
            log("subInfoList null");
            return;
        }
        this.mProtocolHandler = new Handler();
        this.mProtocolHandler.postDelayed(new Runnable() { // from class: com.mediatek.internal.telephony.datasub.DataSubSelector.3
            @Override // java.lang.Runnable
            public void run() {
                if (activeSubscriptionInfoList.size() == 1) {
                    DataSubSelector.this.updateNetworkModeUtil(i, 9);
                    return;
                }
                if (activeSubscriptionInfoList.size() > 1) {
                    for (int i2 = 0; i2 < activeSubscriptionInfoList.size(); i2++) {
                        int subscriptionId = ((SubscriptionInfo) activeSubscriptionInfoList.get(i2)).getSubscriptionId();
                        if (subscriptionId == i) {
                            DataSubSelector.this.updateNetworkModeUtil(subscriptionId, 9);
                        } else {
                            DataSubSelector.this.updateNetworkModeUtil(subscriptionId, 0);
                        }
                    }
                }
            }
        }, 5000L);
    }
}
