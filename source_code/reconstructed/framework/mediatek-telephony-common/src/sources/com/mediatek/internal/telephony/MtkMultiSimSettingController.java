package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.os.Handler;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.provider.Settings;
import android.telephony.SubscriptionInfo;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.android.internal.telephony.MultiSimSettingController;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.mediatek.internal.telephony.datasub.DataSubSelector;
import com.mediatek.internal.telephony.datasub.DataSubSelectorUtil;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkMultiSimSettingController extends MultiSimSettingController {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkMultiSimSettingController";
    private int mActiveModemCount;
    private DataSubSelector mDataSubSelector;
    private int mSimCloseMode;
    private boolean mSimMeLockSupport;

    public MtkMultiSimSettingController(Context context, SubscriptionController subscriptionController) {
        super(context, subscriptionController);
        this.mDataSubSelector = null;
        this.mSimMeLockSupport = false;
        this.mSimCloseMode = 0;
        this.mActiveModemCount = 0;
        this.mDataSubSelector = new DataSubSelector(context);
        initSimMeLock(context);
        initSimCloseMode(context);
    }

    private void filterOutClosedSim(List<SubscriptionInfo> list) {
        if (list != null) {
            Iterator<SubscriptionInfo> it = list.iterator();
            while (it.hasNext()) {
                int subscriptionId = it.next().getSubscriptionId();
                if (isSimClosed(subscriptionId)) {
                    it.remove();
                    log("sub " + subscriptionId + " is closed, remove from active.");
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void initSimCloseMode(Context context) {
        this.mSimCloseMode = MtkTelephonyManagerEx.getDefault().simSwitchMode();
        log("sim close mode is " + this.mSimCloseMode);
        int i = this.mSimCloseMode;
        Handler handler = null;
        if (i == 1) {
            context.getContentResolver().registerContentObserver(Settings.Global.getUriFor("msim_mode_setting"), false, new ContentObserver(handler) { // from class: com.mediatek.internal.telephony.MtkMultiSimSettingController.2
                @Override // android.database.ContentObserver
                public void onChange(boolean z) {
                    MtkMultiSimSettingController.this.log("radio on/off status changed.");
                    MtkMultiSimSettingController.this.notifySubscriptionInfoChanged();
                }
            });
            return;
        }
        if (i == 2) {
            MtkRIL[] commandsInterfaces = PhoneFactory.getCommandsInterfaces();
            this.mActiveModemCount = commandsInterfaces.length;
            for (int i2 = 0; i2 < this.mActiveModemCount; i2++) {
                commandsInterfaces[i2].registerForSimPower(this, 4, null);
            }
        }
    }

    private void initSimMeLock(Context context) {
        if (MtkTelephonyManagerEx.getDefault().getSimLockPolicy() != 0) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mediatek.phone.ACTION_SIM_SLOT_LOCK_POLICY_INFORMATION");
            context.registerReceiver(new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkMultiSimSettingController.1
                @Override // android.content.BroadcastReceiver
                public void onReceive(Context context2, Intent intent) {
                    String action = intent.getAction();
                    if (action == null) {
                        return;
                    }
                    MtkMultiSimSettingController.this.log("onReceive: action=" + action);
                    if (action.equals("com.mediatek.phone.ACTION_SIM_SLOT_LOCK_POLICY_INFORMATION")) {
                        MtkMultiSimSettingController.this.updateDefaults();
                    }
                }
            }, intentFilter);
            this.mSimMeLockSupport = true;
            log("initSimMeLock done.");
        }
    }

    private boolean isRadioOffBySimManagement(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
            if (iMtkTelephonyExAsInterface != null) {
                return iMtkTelephonyExAsInterface.isRadioOffBySimManagement(i);
            }
            log("iTelEx is null!");
            return false;
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    private boolean isSimClosed(int i) {
        int i2 = this.mSimCloseMode;
        if (i2 == 1) {
            return isRadioOffBySimManagement(i);
        }
        if (i2 == 2) {
            return MtkTelephonyManagerEx.getDefault().getSimOnOffState(this.mSubController.getPhoneId(i)) == 10;
        }
        return false;
    }

    private /* synthetic */ void lambda$updateDefaults$0(int i) {
        this.mSubController.setDefaultDataSubId(i);
    }

    private /* synthetic */ void lambda$updateDefaults$1(int i) {
        this.mSubController.setDefaultVoiceSubId(i);
    }

    private /* synthetic */ void lambda$updateDefaults$2(int i) {
        this.mSubController.setDefaultSmsSubId(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Log.d(LOG_TAG, str);
    }

    private boolean updateDefaultDataForSimMeLock(int i) {
        if (!this.mSimMeLockSupport) {
            return false;
        }
        int i2 = 0;
        int i3 = 0;
        int subIdUsingPhoneId = -1;
        int activeModemCount = ((TelephonyManager) this.mContext.getSystemService("phone")).getActiveModemCount();
        for (int i4 = 0; i4 < activeModemCount; i4++) {
            if (!DataSubSelectorUtil.isActiveSub(this.mContext, i4)) {
                log("slot " + i4 + " has no active sub, ignore it.");
            } else if (this.mSimCloseMode == 2 && MtkTelephonyManagerEx.getDefault().getSimOnOffState(i4) == 10) {
                log("slot " + i4 + " is closed sub(mtk sim on/off), ignore it.");
            } else if (this.mSimCloseMode == 1 && isRadioOffBySimManagement(this.mSubController.getSubIdUsingPhoneId(i4))) {
                log("slot " + i4 + " is closed sub(mtk radio on/off), ignore it.");
            } else {
                int shouldServiceCapability = MtkTelephonyManagerEx.getDefault().getShouldServiceCapability(i4);
                if (shouldServiceCapability == 0) {
                    i3++;
                    subIdUsingPhoneId = this.mSubController.getSubIdUsingPhoneId(i4);
                } else {
                    if (shouldServiceCapability != 1 && shouldServiceCapability != 2 && shouldServiceCapability != 3) {
                        log("sim me lock temp sim status:" + shouldServiceCapability + ", wait for next.");
                        return true;
                    }
                    i2++;
                }
            }
        }
        if (i3 == 1 && i > i3) {
            log("sim me lock set only unlock sim as default data between multi sims.");
            this.mSubController.setDefaultDataSubId(subIdUsingPhoneId);
            this.mInitialHandling = false;
            return true;
        }
        if (i == i2) {
            log("sim me lock block set lock sim as default data.");
            return true;
        }
        log("subCount:" + i + ", lock:" + i2 + ", unlock:" + i3);
        return false;
    }

    protected void disableDataForNonDefaultNonOpportunisticSubscriptions() {
    }

    protected MultiSimSettingController.SimCombinationWarningParams getSimCombinationWarningParams(int i) {
        return new MultiSimSettingController.SimCombinationWarningParams(this);
    }

    protected int getSimSelectDialogType(int i, boolean z, boolean z2, boolean z3) {
        int simSelectDialogType = super.getSimSelectDialogType(i, z, z2, z3);
        if (simSelectDialogType != 0 || this.mPrimarySubList.size() <= 1 || i != 6 || z) {
            return simSelectDialogType;
        }
        return 1;
    }

    protected boolean isCarrierConfigLoadedForAllSub() {
        for (int i : this.mSubController.getActiveSubIdList(false)) {
            boolean z = false;
            for (int i2 : this.mCarrierConfigLoadedSubIds) {
                if (i2 == i) {
                    z = true;
                    break;
                }
            }
            if (!z) {
                log("Carrier config subId " + i + " is not loaded.");
                if (this.mSimCloseMode != 2 || !isSimClosed(i)) {
                    return false;
                }
                log("mtk sim on/off feature used, ignore closed sim carrier loaded event.");
            }
        }
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void onMultiSimConfigChanged(int i) {
        super.onMultiSimConfigChanged(i);
        if (this.mSimCloseMode == 2) {
            MtkRIL[] commandsInterfaces = PhoneFactory.getCommandsInterfaces();
            for (int i2 = this.mActiveModemCount; i2 < i; i2++) {
                commandsInterfaces[i2].registerForSimPower(this, 4, null);
            }
            this.mActiveModemCount = commandsInterfaces.length;
        }
    }

    protected void onUserDataEnabled(int i, boolean z) {
        log("onUserDataEnabled");
        setUserDataEnabledForGroup(i, z);
    }

    protected void updateDefaults() {
        log("updateDefaults");
    }
}
