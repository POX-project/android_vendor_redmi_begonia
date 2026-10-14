package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.ContentResolver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.NetworkCapabilities;
import android.net.NetworkRequest;
import android.os.AsyncResult;
import android.os.Looper;
import android.os.Message;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneSwitcher;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.DcRequest;
import com.android.internal.telephony.datasub.SmartDualSimSwitch;
import com.mediatek.internal.telephony.dataconnection.MtkDcHelper;
import com.mediatek.internal.telephony.datasub.SmartDataSwitchAssistant;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkPhoneSwitcher extends PhoneSwitcher {
    private static final int EVENT_CALL_EVALUATE = 1001;
    private static final int EVENT_SIMLOCK_INFO_CHANGED = 1000;
    private static final int EVENT_TEMP_DATA_EVALUATE = 1010;
    private static final String LOG_TAG = "MtkPhoneSwitcher";
    static final int SML_SLOT_LOCK_POLICY_LK_SLOTA_RESTRICT_INVALID_ECC_FOR_VALID_NO_SERVICE = 9;
    private static final String TEMP_DATA_DELAY = "temp_data_delay";
    private static final boolean VDBG = true;
    private boolean mIsInCall;
    private boolean[] mPhoneStateIsSet;
    private Object mRegistrantidentifier;
    private ContentResolver mResolver;
    private final BroadcastReceiver mSimLockChangedReceiver;
    private boolean mTempDataSwitching;

    public MtkPhoneSwitcher(int i, Context context, Looper looper) {
        super(i, context, looper);
        this.mIsInCall = false;
        this.mTempDataSwitching = false;
        this.mSimLockChangedReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkPhoneSwitcher.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                MtkPhoneSwitcher.this.obtainMessage(MtkPhoneSwitcher.EVENT_SIMLOCK_INFO_CHANGED).sendToTarget();
            }
        };
        this.mRegistrantidentifier = new Object();
        this.mPhoneStateIsSet = new boolean[this.mActiveModemCount];
        this.mResolver = context.getContentResolver();
        updateHalCommandToUse();
        logd("updateHalCommandToUse done");
        for (int i2 = 0; i2 < this.mActiveModemCount; i2++) {
            this.mPhoneStateIsSet[i2] = false;
        }
        if (MtkTelephonyManagerEx.getDefault() != null) {
            logd("getSimLockPolicy:" + MtkTelephonyManagerEx.getDefault().getSimLockPolicy());
        }
        registerSmartDualSim();
    }

    public static boolean acceptRequest(NetworkRequest networkRequest, int i) {
        if (ApnContext.getApnTypeFromNetworkRequest(networkRequest) != 0) {
            return true;
        }
        logd("[acceptRequest] Invalid APN ID request: " + networkRequest);
        return false;
    }

    public static MtkPhoneSwitcher getInstance() {
        return (MtkPhoneSwitcher) sPhoneSwitcher;
    }

    private int getTemporaryDataDelay() {
        return Settings.Global.getInt(this.mResolver, TEMP_DATA_DELAY, 0);
    }

    private boolean isEimsAllowed(NetworkRequest networkRequest) {
        if (!networkRequest.networkCapabilities.hasCapability(10)) {
            loge("isAllowEims, NetworkRequest not include EIMS capability");
            return false;
        }
        for (int i = 0; i < this.mActiveModemCount; i++) {
            if (MtkDcHelper.getInstance().isSimInserted(i)) {
                loge("isAllowEims, sim is not null");
                return false;
            }
        }
        return true;
    }

    private boolean isVoLteCalling(int i) {
        if (findPhoneById(i) != null) {
            return findPhoneById(i).isDuringVoLteCall();
        }
        loge("isVoLteCalling: mPhones[" + i + "] is null");
        return false;
    }

    private static void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private static void logv(String str) {
        Rlog.v(LOG_TAG, str);
    }

    public static MtkPhoneSwitcher mtkMake(int i, Context context, Looper looper) {
        if (sPhoneSwitcher == null) {
            logd("MtkPhoneSwitcher mtkMake");
            sPhoneSwitcher = new MtkPhoneSwitcher(i, context, looper);
            MtkSubscriptionController.mtkInvalidateActiveDataSubIdCaches();
        }
        return (MtkPhoneSwitcher) sPhoneSwitcher;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void registerSmartDualSim() {
        log("registerSmartDualSim");
        SmartDualSimSwitch.getInstance().registerReEvaluateEvent(this, 1010, (Object) null);
    }

    protected void activate(int i) {
        super.activate(i);
        this.mPhoneStateIsSet[i] = true;
    }

    protected void deactivate(int i) {
        super.deactivate(i);
        this.mPhoneStateIsSet[i] = true;
    }

    public boolean getPsAllowedByPhoneId(int i) {
        int shouldServiceCapability = MtkTelephonyManagerEx.getDefault().getShouldServiceCapability(i);
        switch (MtkTelephonyManagerEx.getDefault().getSimLockPolicy()) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                return shouldServiceCapability == 0 || shouldServiceCapability == 2;
            default:
                return true;
        }
    }

    public boolean getSimLockMode() {
        int simLockPolicy = MtkTelephonyManagerEx.getDefault().getSimLockPolicy();
        return simLockPolicy == 1 || simLockPolicy == 2 || simLockPolicy == 3 || simLockPolicy == 4 || simLockPolicy == 5 || simLockPolicy == 6 || simLockPolicy == 7 || simLockPolicy == 8 || simLockPolicy == 9;
    }

    public boolean getTempDataSwitchState() {
        int phoneId = this.mSubscriptionController.getPhoneId(this.mSubscriptionController.getDefaultDataSubId());
        return this.mTempDataSwitching && !((this.mTempDataPhoneId == -1 || this.mTempDataPhoneId == phoneId) && (this.mPhoneIdInVoiceCall == -1 || this.mPhoneIdInVoiceCall == phoneId));
    }

    public void handleMessage(Message message) {
        int i = message.what;
        if (i == EVENT_SIMLOCK_INFO_CHANGED) {
            StringBuilder sb = new StringBuilder("simLockChange");
            for (int i2 = 0; i2 < this.mActiveModemCount; i2++) {
                int shouldServiceCapability = MtkTelephonyManagerEx.getDefault().getShouldServiceCapability(i2);
                sb.append(" phone[");
                sb.append(i2);
                sb.append("],Capability=");
                sb.append(shouldServiceCapability);
            }
            onEvaluate(true, sb.toString());
            return;
        }
        if (i == 1001) {
            logd("EVENT_CALL_EVALUATE");
            onEvaluate(false, "CALL_EVALUATE");
            return;
        }
        if (i != 1010) {
            super.handleMessage(message);
            return;
        }
        log("EVENT_TEMP_DATA_EVALUATE");
        AsyncResult asyncResult = (AsyncResult) message.obj;
        if (asyncResult.exception != null || asyncResult.result == null) {
            log("Unexpected exception on EVENT_TEMP_DATA_EVALUATE");
            this.mTempDataPhoneId = -1;
        } else {
            this.mTempDataPhoneId = ((Integer) asyncResult.result).intValue();
        }
        log("EVENT_TEMP_DATA_EVALUATE mTempDataPhoneId=" + this.mTempDataPhoneId);
        if (this.mTempDataPhoneId != -1) {
            onEvaluate(false, "SMARTDUALSIM_EVALUATE");
        }
    }

    protected boolean isPhoneInVoiceCall(Phone phone) {
        if (phone == null) {
            return false;
        }
        boolean zIsVoLteCalling = isVoLteCalling(phone.getPhoneId());
        logd("ForegroundCall:" + phone.getForegroundCall().getState() + ", RingingCall:" + phone.getRingingCall().getState() + ", BackgroundCall: " + phone.getBackgroundCall().getState() + ", getPhoneId(): " + phone.getPhoneId() + ", mIsVolteCalling: " + zIsVoLteCalling);
        if (getTemporaryDataDelay() != 1 || !phone.getRingingCall().getState().isRinging() || !zIsVoLteCalling) {
            return phone.getForegroundCall().getState() == Call.State.ACTIVE || phone.getForegroundCall().getState() == Call.State.ALERTING || phone.getBackgroundCall().getState() == Call.State.HOLDING || phone.getForegroundCall().getState() == Call.State.DIALING || phone.getRingingCall().getState().isRinging() || phone.getBackgroundCall().getState().isAlive();
        }
        logd("TEMP_DATA_DELAY = 1 , Delay temp data");
        return phone.getForegroundCall().getState() == Call.State.ACTIVE || phone.getForegroundCall().getState() == Call.State.ALERTING || phone.getBackgroundCall().getState() == Call.State.HOLDING || phone.getForegroundCall().getState() == Call.State.DIALING || phone.getBackgroundCall().getState().isAlive();
    }

    protected NetworkCapabilities makeNetworkFilter() {
        return super.makeNetworkFilter();
    }

    public void onRadioCapChanged(int i) {
        if (this.mHalCommandToUse != 1 && this.mHalCommandToUse != 0) {
            logd("onRadioCapChanged: preferred data");
            super.onRadioCapChanged(i);
            return;
        }
        logd("onRadioCapChanged: mPhoneStateIsSet[" + i + "] =" + this.mPhoneStateIsSet[i]);
        if (this.mPhoneStateIsSet[i]) {
            super.onRadioCapChanged(i);
        }
    }

    protected int phoneIdForRequest(NetworkRequest networkRequest) {
        int iPhoneIdForRequest = super.phoneIdForRequest(networkRequest);
        if ((this.mHalCommandToUse == 1 || this.mHalCommandToUse == 0) && getSimLockMode() && !getPsAllowedByPhoneId(iPhoneIdForRequest)) {
            return -1;
        }
        return iPhoneIdForRequest;
    }

    protected void suggestDefaultActivePhone(List<Integer> list) {
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        int mainCapabilityPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
        if (list.isEmpty()) {
            logd("newActivePhones is empty");
            if (mtkDcHelper.isSimInserted(mainCapabilityPhoneId) && (!getSimLockMode() || getPsAllowedByPhoneId(mainCapabilityPhoneId))) {
                logd("newActivePhones mainCapPhoneId=" + mainCapabilityPhoneId);
                list.add(Integer.valueOf(mainCapabilityPhoneId));
            }
        }
        logv("mPrioritizedDcRequests" + this.mPrioritizedDcRequests.toString());
        if (list.isEmpty()) {
            logd("ECC w/o SIM");
            Iterator it = this.mPrioritizedDcRequests.iterator();
            while (it.hasNext()) {
                if (isEimsAllowed(((DcRequest) it.next()).networkRequest)) {
                    logd("newActivePhones mainCapPhoneId=" + mainCapabilityPhoneId);
                    list.add(Integer.valueOf(mainCapabilityPhoneId));
                }
            }
        }
    }

    protected void updateHalCommandToUse() {
        if (this.mHalCommandToUse == 2) {
            log("updateHalCommandToUse, preferred mode already, no need update.");
            return;
        }
        super.updateHalCommandToUse();
        logd("updateHalCommandToUse");
        if (this.mHalCommandToUse == 1 || this.mHalCommandToUse == 0) {
            logd("updateHalCommandToUse: The HIDL preferred data not exist, use ALLOW_DATA");
            if (getSimLockMode()) {
                this.mContext.registerReceiver(this.mSimLockChangedReceiver, new IntentFilter("com.mediatek.phone.ACTION_SIM_SLOT_LOCK_POLICY_INFORMATION"));
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void updatePreferredDataPhoneId() {
        log("updatePreferredDataPhoneId -mtkphoneswitch mTempDataPhoneId=" + this.mTempDataPhoneId);
        SmartDataSwitchAssistant smartDataSwitchAssistant = SmartDataSwitchAssistant.getInstance();
        Phone phoneFindPhoneById = findPhoneById(this.mPhoneIdInVoiceCall);
        boolean zIsTempDdsSwitchEnabled = SmartDualSimSwitch.getInstance().isTempDdsSwitchEnabled();
        log("updatePreferredDataPhoneId  TempDataPhoneId=" + this.mTempDataPhoneId + ",isTempDdsSwitchEnabled=" + zIsTempDdsSwitchEnabled);
        Phone phoneFindPhoneById2 = findPhoneById(this.mTempDataPhoneId);
        if (phoneFindPhoneById2 == null || !zIsTempDdsSwitchEnabled) {
            this.mTempDataSwitching = false;
        }
        if (phoneFindPhoneById != null && phoneFindPhoneById.isUserDataEnabled() && !this.mIsInCall) {
            logd("set mIsInCall to true");
            this.mIsInCall = true;
            smartDataSwitchAssistant.registerReEvaluateEvent(this, 1001, null, this.mPhoneIdInVoiceCall);
        }
        if (phoneFindPhoneById == null && this.mIsInCall) {
            logd("set mIsInCall to false");
            this.mIsInCall = false;
            this.mTempDataSwitching = false;
            smartDataSwitchAssistant.unregisterReEvaluateEvent(this);
        }
        if (this.mEmergencyOverride != null && findPhoneById(this.mEmergencyOverride.mPhoneId) != null) {
            logd("updatePreferredDataPhoneId: preferred data overridden for emergency. phoneId = " + this.mEmergencyOverride.mPhoneId);
            this.mPreferredDataPhoneId = this.mEmergencyOverride.mPhoneId;
        } else if (phoneFindPhoneById != null && phoneFindPhoneById.getDataEnabledSettings().isDataEnabled(17) && smartDataSwitchAssistant.checkIsSwitchAvailable(this.mPhoneIdInVoiceCall)) {
            this.mPreferredDataPhoneId = this.mPhoneIdInVoiceCall;
            this.mTempDataSwitching = true;
        } else if (phoneFindPhoneById2 != null && phoneFindPhoneById2.getDataEnabledSettings().isDataEnabled(17) && zIsTempDdsSwitchEnabled) {
            log("updatePreferredDataPhoneId: preferred data overridden for smartdualsim:mpreferred=" + this.mPreferredDataPhoneId + ",temp=" + this.mTempDataPhoneId);
            this.mPreferredDataPhoneId = this.mTempDataPhoneId;
            this.mTempDataSwitching = true;
        } else {
            int subIdForDefaultNetworkRequests = getSubIdForDefaultNetworkRequests();
            int i = -1;
            if (SubscriptionManager.isUsableSubIdValue(subIdForDefaultNetworkRequests)) {
                for (int i2 = 0; i2 < this.mActiveModemCount; i2++) {
                    if (this.mPhoneSubscriptions[i2] == subIdForDefaultNetworkRequests) {
                        i = i2;
                        break;
                    }
                }
            }
            this.mPreferredDataPhoneId = i;
            this.mTempDataSwitching = false;
        }
        this.mPreferredDataSubId.set(this.mSubscriptionController.getSubIdUsingPhoneId(this.mPreferredDataPhoneId));
    }
}
