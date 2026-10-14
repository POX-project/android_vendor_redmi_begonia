package com.mediatek.internal.telephony.uicc;

import android.R;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.os.storage.StorageManager;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UiccSlot;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkIccCardConstants;
import com.mediatek.internal.telephony.MtkSubscriptionInfoUpdater;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import com.mediatek.internal.telephony.RadioManager;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.rsu.MtkRsuSmlFactory;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimManager;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkUiccController extends UiccController {
    protected static final String COMMON_SLOT_PROPERTY = "ro.vendor.mtk_sim_hot_swap_common_slot";
    protected static final String DECRYPT_STATE = "trigger_restart_framework";
    protected static final int EVENT_BASE_ID = 100;
    protected static final int EVENT_CARD_DETECTED_IND = 115;
    protected static final int EVENT_COMMON_SLOT_NO_CHANGED = 111;
    protected static final int EVENT_GET_ICC_STATUS_DONE_FOR_SIM_MISSING = 105;
    protected static final int EVENT_GET_ICC_STATUS_DONE_FOR_SIM_RECOVERY = 106;
    protected static final int EVENT_ICCID_CHANGED_IND = 116;
    protected static final int EVENT_INVALID_SIM_DETECTED = 109;
    protected static final int EVENT_REPOLL_SML_STATE = 110;
    protected static final int EVENT_SIM_MISSING = 103;
    protected static final int EVENT_SIM_PLUG_IN = 108;
    protected static final int EVENT_SIM_PLUG_OUT = 107;
    protected static final int EVENT_SIM_POWER_CHANGED = 114;
    protected static final int EVENT_SIM_RECOVERY = 104;
    protected static final int EVENT_SML_SLOT_LOCK_INFO_CHANGED = 112;
    protected static final int EVENT_SUPPLY_DEVICE_LOCK_DONE = 113;
    protected static final int EVENT_VIRTUAL_SIM_OFF = 102;
    protected static final int EVENT_VIRTUAL_SIM_ON = 101;
    private static final String LOG_TAG_EX = "MtkUiccCtrl";
    private static final String PROPERTY_SIM_CARD_ONOFF = "ro.vendor.mtk_sim_card_onoff";
    private static final String[] PROPERTY_SIM_ONOFF_STATE = {"vendor.ril.sim.onoff.state1", "vendor.ril.sim.onoff.state2", "vendor.ril.sim.onoff.state3", "vendor.ril.sim.onoff.state4"};
    private static final String PROPERTY_SIM_ONOFF_SUPPORT = "vendor.ril.sim.onoff.support";
    private static final int SML_FEATURE_NEED_BROADCAST_INTENT = 1;
    private static final int SML_FEATURE_NO_NEED_BROADCAST_INTENT = 0;
    private int[] UICCCONTROLLER_STRING_NOTIFICATION_VIRTUAL_SIM_ON;
    private String[] mIccid;
    private BroadcastReceiver mMdStateReceiver;
    private IMtkRsuSml mMtkRsuSml;
    private int[] mSimPower;
    private int[] mSimPowerExecutingState;
    private int prevActiveModemCount;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.uicc.MtkUiccController$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState;

        static {
            int[] iArr = new int[IccCardApplicationStatus.PersoSubState.values().length];
            $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState = iArr;
            try {
                iArr[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NETWORK.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NETWORK_SUBSET.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_CORPORATE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SERVICE_PROVIDER.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

    private class ModemStateChangedReceiver extends BroadcastReceiver {
        private ModemStateChangedReceiver() {
        }

        /* synthetic */ ModemStateChangedReceiver(MtkUiccController mtkUiccController, AnonymousClass1 anonymousClass1) {
            this();
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals(RadioManager.ACTION_MODEM_POWER_NO_CHANGE)) {
                for (int i = 0; i < MtkUiccController.this.mCis.length; i++) {
                    MtkUiccController.this.sendMessage(MtkUiccController.this.obtainMessage(1, new Integer(i)));
                    MtkUiccController.this.mtkLog("Trigger GET_SIM_STATUS due to modem state changed for slot " + i);
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkUiccController(Context context) {
        super(context);
        AnonymousClass1 anonymousClass1 = null;
        this.mMtkRsuSml = null;
        this.UICCCONTROLLER_STRING_NOTIFICATION_VIRTUAL_SIM_ON = new int[]{134545753, 134545754, 134545755, 134545756};
        this.prevActiveModemCount = 0;
        Rlog.d(LOG_TAG_EX, "Creating MtkUiccController");
        this.prevActiveModemCount = this.mCis.length;
        for (int i = 0; i < this.mCis.length; i++) {
            Integer num = new Integer(i);
            this.mCis[i].unregisterForAvailable(this);
            this.mCis[i].unregisterForOn(this);
            if (SystemProperties.get("ro.crypto.state").equals("unencrypted") || SystemProperties.get("ro.crypto.state").equals("unsupported") || SystemProperties.get("ro.crypto.type").equals("file") || DECRYPT_STATE.equals(SystemProperties.get("vold.decrypt")) || !StorageManager.inCryptKeeperBounce()) {
                this.mCis[i].registerForAvailable(this, 6, num);
            } else {
                this.mCis[i].registerForOn(this, 5, num);
            }
            this.mCis[i].registerForVirtualSimOn(this, 101, num);
            this.mCis[i].registerForVirtualSimOff(this, 102, num);
            this.mCis[i].registerForSimMissing(this, 103, num);
            this.mCis[i].registerForSimRecovery(this, EVENT_SIM_RECOVERY, num);
            this.mCis[i].registerForSimPlugOut(this, EVENT_SIM_PLUG_OUT, num);
            this.mCis[i].registerForSimPlugIn(this, EVENT_SIM_PLUG_IN, num);
            this.mCis[i].registerForCommonSlotNoChanged(this, 111, num);
            this.mCis[i].registerForSmlSlotLockInfoChanged(this, EVENT_SML_SLOT_LOCK_INFO_CHANGED, num);
            this.mCis[i].registerForSimPower(this, EVENT_SIM_POWER_CHANGED, num);
            this.mCis[i].registerForCardDetectedInd(this, EVENT_CARD_DETECTED_IND, num);
            this.mCis[i].registerForIccidChanged(this, EVENT_ICCID_CHANGED_IND, num);
        }
        if (SystemProperties.getInt("ro.vendor.mtk_external_sim_support", 0) == 1) {
            ExternalSimManager.make(context, this.mCis);
        }
        this.mMdStateReceiver = new ModemStateChangedReceiver(this, anonymousClass1);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(RadioManager.ACTION_MODEM_POWER_NO_CHANGE);
        this.mContext.registerReceiver(this.mMdStateReceiver, intentFilter);
        this.mSimPower = new int[this.mCis.length];
        this.mSimPowerExecutingState = new int[this.mCis.length];
        Arrays.fill(this.mSimPower, -1);
        Arrays.fill(this.mSimPowerExecutingState, -1);
        String[] strArr = new String[this.mCis.length];
        this.mIccid = strArr;
        Arrays.fill(strArr, "");
        try {
            OpTelephonyCustomizationUtils.getRsuSmlFactory(this.mContext);
            this.mMtkRsuSml = MtkRsuSmlFactory.makeRsuSml(this.mContext, this.mCis);
            Rlog.d(LOG_TAG_EX, "[RSU-SIMLOCK] Create RsuSml, mCis=" + this.mCis);
        } catch (Exception e) {
            Rlog.e(LOG_TAG_EX, "[RSU-SIMLOCK] e = " + e);
        }
    }

    public static MtkIccCardConstants.VsimType getVsimCardType(int i) {
        int i2 = SystemProperties.getInt("vendor.gsm.prefered.rsim.slot", -1);
        int i3 = SystemProperties.getInt("vendor.gsm.prefered.aka.sim.slot", -1);
        boolean z = false;
        TelephonyManager.getDefault();
        String telephonyProperty = TelephonyManager.getTelephonyProperty(i, "vendor.gsm.external.sim.inserted", "0");
        if (telephonyProperty != null && telephonyProperty.length() > 0 && !"0".equals(telephonyProperty)) {
            z = true;
        }
        if (i == i2 && z) {
            return MtkIccCardConstants.VsimType.REMOTE_SIM;
        }
        if (i == i3) {
            return z ? MtkIccCardConstants.VsimType.SOFT_AKA_SIM : MtkIccCardConstants.VsimType.PHYSICAL_AKA_SIM;
        }
        return (i2 == -1 && i3 == -1 && z) ? MtkIccCardConstants.VsimType.LOCAL_SIM : MtkIccCardConstants.VsimType.PHYSICAL_SIM;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void onMultiSimConfigChangedEx(int i) {
        int length = this.mIccid.length;
        this.mCis = PhoneFactory.getCommandsInterfaces();
        this.mSimPowerExecutingState = Arrays.copyOf(this.mSimPowerExecutingState, i);
        this.mSimPower = Arrays.copyOf(this.mSimPower, i);
        this.mIccid = (String[]) Arrays.copyOf(this.mIccid, i);
        for (int i2 = length; i2 < i; i2++) {
            this.mPhoneIdToSlotId[i2] = -1;
            this.mSimPowerExecutingState[i2] = -1;
            this.mSimPower[i2] = -1;
            this.mIccid[i2] = "";
        }
        for (int i3 = this.prevActiveModemCount; i3 < i; i3++) {
            Integer num = new Integer(i3);
            this.mSimPowerExecutingState[i3] = -1;
            this.mSimPower[i3] = -1;
            this.mIccid[i3] = "";
            this.mCis[i3].registerForVirtualSimOn(this, 101, num);
            this.mCis[i3].registerForVirtualSimOff(this, 102, num);
            this.mCis[i3].registerForSimMissing(this, 103, num);
            this.mCis[i3].registerForSimRecovery(this, EVENT_SIM_RECOVERY, num);
            this.mCis[i3].registerForSimPlugOut(this, EVENT_SIM_PLUG_OUT, num);
            this.mCis[i3].registerForSimPlugIn(this, EVENT_SIM_PLUG_IN, num);
            this.mCis[i3].registerForCommonSlotNoChanged(this, 111, num);
            this.mCis[i3].registerForSmlSlotLockInfoChanged(this, EVENT_SML_SLOT_LOCK_INFO_CHANGED, num);
            this.mCis[i3].registerForSimPower(this, EVENT_SIM_POWER_CHANGED, num);
            this.mCis[i3].registerForCardDetectedInd(this, EVENT_CARD_DETECTED_IND, num);
            this.mCis[i3].registerForIccidChanged(this, EVENT_ICCID_CHANGED_IND, num);
        }
    }

    private void onSmlSlotLoclInfoChaned(AsyncResult asyncResult, Integer num) {
        if (asyncResult.exception != null || asyncResult.result == null) {
            Rlog.e(LOG_TAG_EX, "onSmlSlotLoclInfoChaned exception");
            return;
        }
        int[] iArr = (int[]) asyncResult.result;
        if (iArr.length != 4) {
            Rlog.e(LOG_TAG_EX, "onSmlSlotLoclInfoChaned exception");
            return;
        }
        mtkLog("onSmlSlotLoclInfoChaned, infomation:,lock policy:" + iArr[0] + ",lock state:" + iArr[1] + ",service capability:" + iArr[2] + ",sim valid:" + iArr[3]);
        Intent intent = new Intent("com.mediatek.phone.ACTION_SIM_SLOT_LOCK_POLICY_INFORMATION");
        int iIntValue = num.intValue();
        SubscriptionManager.putPhoneIdAndSubIdExtra(intent, iIntValue);
        intent.putExtra("slot", iIntValue);
        intent.putExtra("DEVICE_LOCK_POLICY", iArr[0]);
        intent.putExtra("DEVICE_LOCK_STATE", iArr[1]);
        intent.putExtra("SIM_SERVICE_CAPABILITY", iArr[2]);
        intent.putExtra("SIM_VALID", iArr[3]);
        mtkLog("Broadcasting intent ACTION_SIM_SLOT_LOCK_POLICY_INFORMATION for mSlotId : " + iIntValue);
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
    }

    private String parsePersoType(IccCardApplicationStatus.PersoSubState persoSubState) {
        mtkLog("parsePersoType, state = " + persoSubState);
        int i = AnonymousClass1.$SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[persoSubState.ordinal()];
        if (i == 1) {
            return "NETWORK";
        }
        if (i == 2) {
            return "NETWORK_SUBSET";
        }
        if (i == 3) {
            return "CORPORATE";
        }
        if (i != 4) {
            return i != 5 ? "UNKNOWN" : "SIM";
        }
        return "SERVICE_PROVIDER";
    }

    private int parseUnlockDeviceResult(AsyncResult asyncResult) {
        int[] iArr = (int[]) asyncResult.result;
        if (iArr == null) {
            return -1;
        }
        int i = iArr.length > 0 ? iArr[0] : -1;
        mtkLog("parseUnlockDeviceResult: attemptsRemaining=" + i);
        return i;
    }

    private void removeNotificationVirtual(int i, int i2) {
        ((NotificationManager) this.mContext.getSystemService("notification")).cancel(i2 + i);
    }

    private void setNotificationVirtual(int i, int i2) {
        mtkLog("setNotificationVirtual(): notifyType = " + i2);
        Notification notification = new Notification();
        notification.when = System.currentTimeMillis();
        notification.flags = 16;
        notification.icon = R.drawable.stat_sys_warning;
        notification.contentIntent = PendingIntent.getActivity(this.mContext, 0, new Intent(), 134217728);
        String string = TelephonyManager.getDefault().getSimCount() > 1 ? Resources.getSystem().getText(this.UICCCONTROLLER_STRING_NOTIFICATION_VIRTUAL_SIM_ON[i]).toString() : Resources.getSystem().getText(134545752).toString();
        String string2 = this.mContext.getText(134545752).toString();
        notification.tickerText = this.mContext.getText(134545752).toString();
        notification.setLatestEventInfo(this.mContext, string, string2, notification.contentIntent);
        ((NotificationManager) this.mContext.getSystemService("notification")).notify(i2 + i, notification);
    }

    private void triggerUpdateInternalSimMountState(int i) {
        MtkSubscriptionInfoUpdater mtkSubscriptionInfoUpdater = (MtkSubscriptionInfoUpdater) PhoneFactory.getSubscriptionInfoUpdater();
        if (mtkSubscriptionInfoUpdater != null) {
            mtkSubscriptionInfoUpdater.triggerUpdateInternalSimMountState(i);
        } else {
            mtkLog("subInfoUpdate is null.");
        }
    }

    public int getIccApplicationChannel(int i, int i2) {
        return 0;
    }

    public String getIccid(int i) {
        if (i < 0 || i >= this.mIccid.length) {
            mtkLog("getIccid: invalid slotId " + i);
            return "";
        }
        mtkLog("getIccid: slotId = " + i);
        return this.mIccid[i];
    }

    public IMtkRsuSml getRsuSml() {
        if (this.mMtkRsuSml == null) {
            Rlog.e(LOG_TAG_EX, "getRsuSml : [RSU-SIMLOCK] Sml not supported");
        }
        return this.mMtkRsuSml;
    }

    public IMtkRsuSml getRsuSml(String str) {
        OpTelephonyCustomizationUtils.getRsuSmlFactory(this.mContext);
        IMtkRsuSml iMtkRsuSmlCheckAndMakeRsuSml = MtkRsuSmlFactory.checkAndMakeRsuSml(this.mMtkRsuSml, this.mContext, this.mCis, str);
        this.mMtkRsuSml = iMtkRsuSmlCheckAndMakeRsuSml;
        if (iMtkRsuSmlCheckAndMakeRsuSml == null) {
            Rlog.e(LOG_TAG_EX, "getRsuSml: [RSU-SIMLOCK] " + str + "Sml not supported");
        }
        return this.mMtkRsuSml;
    }

    public int getSimOnOffExecutingState(int i) {
        if (i < 0 || i >= this.mSimPowerExecutingState.length) {
            mtkLog("getSimOnOffExecutingState: invalid slotId " + i);
            return -1;
        }
        mtkLog("getSimOnOffExecutingState slotId = " + i + " mSimPowerExecutingState = " + this.mSimPowerExecutingState[i]);
        return this.mSimPowerExecutingState[i];
    }

    public int getSimOnOffState(int i) {
        if (i < 0 || i >= this.mSimPower.length) {
            mtkLog("getSimOnOffState: invalid slotId " + i);
            return -1;
        }
        boolean zEquals = SystemProperties.get(PROPERTY_SIM_CARD_ONOFF).equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN);
        boolean zEquals2 = SystemProperties.get(PROPERTY_SIM_ONOFF_SUPPORT).equals("1");
        int i2 = SystemProperties.getInt(PROPERTY_SIM_ONOFF_STATE[i], -1);
        mtkLog("getSimOnOffState slotId = " + i + " onoffAPSupport = " + zEquals + " onoffMDSupport = " + zEquals2 + " mSimPower = " + this.mSimPower[i] + " onoffState = " + i2);
        if (!zEquals || !zEquals2) {
            return 11;
        }
        int[] iArr = this.mSimPower;
        return iArr[i] == -1 ? i2 : iArr[i];
    }

    public UiccCardApplication getUiccCardApplication(int i) {
        return getUiccCardApplication(SubscriptionController.getInstance().getPhoneId(SubscriptionController.getInstance().getDefaultSubId()), i);
    }

    public void handleMessage(Message message) {
        synchronized (mLock) {
            Integer ciIndex = getCiIndex(message);
            if (ciIndex.intValue() >= 0 && ciIndex.intValue() < this.mCis.length) {
                if (message.obj != null && (message.obj instanceof AsyncResult)) {
                }
                int i = message.what;
                if (i == 1) {
                    mtkLog("Received EVENT_ICC_STATUS_CHANGED, calling getIccCardStatus,index: " + ciIndex);
                    if (ignoreGetSimStatus()) {
                        mtkLog("FlightMode ON, Modem OFF: ignore get sim status");
                    } else {
                        this.mCis[ciIndex.intValue()].getIccCardStatus(obtainMessage(3, ciIndex));
                    }
                } else if (i == 10) {
                    int iIntValue = ((Integer) ((AsyncResult) message.obj).result).intValue();
                    this.prevActiveModemCount = this.mCis.length;
                    for (int i2 = iIntValue; i2 < this.prevActiveModemCount; i2++) {
                        UiccSlot uiccSlot = getUiccSlot(getSlotIdFromPhoneId(i2));
                        if (uiccSlot != null) {
                            uiccSlot.onRadioStateUnavailable();
                        }
                        this.mIccChangedRegistrants.notifyRegistrants(new AsyncResult((Object) null, Integer.valueOf(i2), (Throwable) null));
                    }
                    super.handleMessage(message);
                    onMultiSimConfigChangedEx(iIntValue);
                } else if (i != 5 && i != 6) {
                    switch (i) {
                        case 101:
                            mtkLog("handleMessage (EVENT_VIRTUAL_SIM_ON)");
                            setNotificationVirtual(ciIndex.intValue(), 101);
                            SharedPreferences.Editor editorEdit = this.mContext.getSharedPreferences("AutoAnswer", 0).edit();
                            editorEdit.putBoolean("flag", true);
                            editorEdit.commit();
                            break;
                        case 102:
                            mtkLog("handleMessage (EVENT_VIRTUAL_SIM_OFF)");
                            removeNotificationVirtual(ciIndex.intValue(), 101);
                            SharedPreferences.Editor editorEdit2 = this.mContext.getSharedPreferences("AutoAnswer", 0).edit();
                            editorEdit2.putBoolean("flag", false);
                            editorEdit2.commit();
                            break;
                        case 103:
                            mtkLog("handleMessage (EVENT_SIM_MISSING)");
                            this.mCis[ciIndex.intValue()].getIccCardStatus(obtainMessage(EVENT_GET_ICC_STATUS_DONE_FOR_SIM_MISSING, ciIndex));
                            break;
                        case EVENT_SIM_RECOVERY /* 104 */:
                            mtkLog("handleMessage (EVENT_SIM_RECOVERY)");
                            this.mCis[ciIndex.intValue()].getIccCardStatus(obtainMessage(EVENT_GET_ICC_STATUS_DONE_FOR_SIM_RECOVERY, ciIndex));
                            Intent intent = new Intent();
                            intent.setAction("com.mediatek.phone.ACTION_SIM_RECOVERY_DONE");
                            this.mContext.sendBroadcast(intent);
                            break;
                        case EVENT_GET_ICC_STATUS_DONE_FOR_SIM_MISSING /* 105 */:
                            mtkLog("Received EVENT_GET_ICC_STATUS_DONE_FOR_SIM_MISSING");
                            onGetIccCardStatusDone((AsyncResult) message.obj, ciIndex);
                            break;
                        case EVENT_GET_ICC_STATUS_DONE_FOR_SIM_RECOVERY /* 106 */:
                            mtkLog("Received EVENT_GET_ICC_STATUS_DONE_FOR_SIM_RECOVERY");
                            onGetIccCardStatusDone((AsyncResult) message.obj, ciIndex);
                            break;
                        default:
                            switch (i) {
                                case 110:
                                    mtkLog("Received EVENT_REPOLL_SML_STATE");
                                    AsyncResult asyncResult = (AsyncResult) message.obj;
                                    boolean z = message.arg1 == 1;
                                    onGetIccCardStatusDone(asyncResult, ciIndex);
                                    if (z) {
                                        UiccCardApplication uiccCardApplication = getUiccCardApplication(ciIndex.intValue(), 1);
                                        if (uiccCardApplication == null) {
                                            mtkLog("UiccCardApplication = null");
                                        } else if (uiccCardApplication.getState() == IccCardApplicationStatus.AppState.APPSTATE_SUBSCRIPTION_PERSO) {
                                            Intent intent2 = new Intent();
                                            mtkLog("Broadcast ACTION_UNLOCK_SIM_LOCK");
                                            intent2.setAction("com.mediatek.phone.ACTION_UNLOCK_SIM_LOCK");
                                            intent2.putExtra("ss", "LOCKED");
                                            intent2.putExtra(DataSubConstants.EXTRA_MOBILE_DATA_ENABLE_REASON, parsePersoType(uiccCardApplication.getPersoSubState()));
                                            SubscriptionManager.putPhoneIdAndSubIdExtra(intent2, ciIndex.intValue());
                                            this.mContext.sendBroadcast(intent2);
                                        }
                                    }
                                    break;
                                case 111:
                                    mtkLog("handleMessage (EVENT_COMMON_SLOT_NO_CHANGED)");
                                    Intent intent3 = new Intent("com.mediatek.phone.ACTION_COMMON_SLOT_NO_CHANGED");
                                    int iIntValue2 = ciIndex.intValue();
                                    SubscriptionManager.putPhoneIdAndSubIdExtra(intent3, iIntValue2);
                                    mtkLog("Broadcasting intent ACTION_COMMON_SLOT_NO_CHANGED for mSlotId : " + iIntValue2);
                                    this.mContext.sendBroadcast(intent3);
                                    break;
                                case EVENT_SML_SLOT_LOCK_INFO_CHANGED /* 112 */:
                                    mtkLog("handleMessage (EVENT_SML_SLOT_LOCK_INFO_CHANGED)");
                                    onSmlSlotLoclInfoChaned((AsyncResult) message.obj, ciIndex);
                                    triggerUpdateInternalSimMountState(ciIndex.intValue());
                                    break;
                                case EVENT_SUPPLY_DEVICE_LOCK_DONE /* 113 */:
                                    mtkLog("handleMessage (EVENT_SUPPLY_DEVICE_LOCK_DONE)");
                                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                                    int unlockDeviceResult = asyncResult2.result != null ? parseUnlockDeviceResult(asyncResult2) : -1;
                                    Message message2 = (Message) asyncResult2.userObj;
                                    AsyncResult.forMessage(message2).exception = asyncResult2.exception;
                                    message2.arg1 = unlockDeviceResult;
                                    message2.sendToTarget();
                                    break;
                                case EVENT_SIM_POWER_CHANGED /* 114 */:
                                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                                    if (asyncResult3.exception == null && asyncResult3.result != null) {
                                        if (ciIndex.intValue() >= this.mSimPower.length) {
                                            Rlog.e(LOG_TAG_EX, "EVENT_SIM_POWER_CHANGED index error");
                                            return;
                                        }
                                        int[] iArr = (int[]) asyncResult3.result;
                                        if (iArr.length == 1) {
                                            this.mSimPower[ciIndex.intValue()] = iArr[0];
                                            if (iArr[0] == 10 || iArr[0] == 11) {
                                                this.mSimPowerExecutingState[ciIndex.intValue()] = -1;
                                            }
                                        }
                                        mtkLog("Received EVENT_SIM_POWER_CHANGED, index: " + ciIndex + " simPower: " + this.mSimPower[ciIndex.intValue()] + " mSimPowerExecutingState = " + this.mSimPowerExecutingState[ciIndex.intValue()]);
                                        break;
                                    }
                                    Rlog.e(LOG_TAG_EX, "EVENT_SIM_POWER_CHANGED exception");
                                    return;
                                case EVENT_CARD_DETECTED_IND /* 115 */:
                                    Intent intent4 = new Intent("com.mediatek.phone.ACTION_CARD_DETECTED");
                                    int iIntValue3 = ciIndex.intValue();
                                    SubscriptionManager.putPhoneIdAndSubIdExtra(intent4, iIntValue3);
                                    mtkLog("Broadcasting intent ACTION_CARD_DETECTED, mSlotId : " + iIntValue3);
                                    this.mContext.sendBroadcast(intent4);
                                    break;
                                case EVENT_ICCID_CHANGED_IND /* 116 */:
                                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                                    if (asyncResult4.exception == null && asyncResult4.result != null) {
                                        if (ciIndex.intValue() >= this.mIccid.length) {
                                            Rlog.e(LOG_TAG_EX, "EVENT_ICCID_CHANGED_IND index error");
                                            return;
                                        } else {
                                            this.mIccid[ciIndex.intValue()] = (String) asyncResult4.result;
                                            mtkLog("Received EVENT_ICCID_CHANGED_IND, index: " + ciIndex + ", iccid: " + this.mIccid);
                                        }
                                        break;
                                    }
                                    Rlog.e(LOG_TAG_EX, "EVENT_ICCID_CHANGED_IND exception");
                                    return;
                                default:
                                    super.handleMessage(message);
                                    break;
                            }
                            break;
                    }
                } else if (ignoreGetSimStatus()) {
                    mtkLog("FlightMode ON, Modem OFF: ignore get sim status, index: " + ciIndex);
                } else {
                    super.handleMessage(message);
                }
                return;
            }
            Rlog.e(LOG_TAG_EX, "Invalid index : " + ciIndex + " received with event " + message.what);
        }
    }

    public boolean ignoreGetSimStatus() {
        int i = Settings.Global.getInt(this.mContext.getContentResolver(), "airplane_mode_on", 0);
        mtkLog("ignoreGetSimStatus(): airplaneMode - " + i);
        if (!RadioManager.isFlightModePowerOffModemEnabled() || i != 1) {
            return false;
        }
        mtkLog("ignoreGetSimStatus(): return true");
        return true;
    }

    public boolean isAllRadioAvailable() {
        boolean z = true;
        for (int i = 0; i < TelephonyManager.getDefault().getPhoneCount(); i++) {
            if (2 == this.mCis[i].getRadioState()) {
                z = false;
            }
        }
        mtkLog("isAllRadioAvailable = " + z);
        return z;
    }

    protected void mtkLog(String str) {
        Rlog.d(LOG_TAG_EX, str);
    }

    public void repollIccStateForModemSmlChangeFeatrue(int i, boolean z) {
        mtkLog("repollIccStateForModemSmlChangeFeatrue, needIntent = " + z);
        this.mCis[i].getIccCardStatus(obtainMessage(110, !z ? 0 : 1, 0, Integer.valueOf(i)));
    }

    public void resetRadioForVsim() {
        mtkLog("resetRadioForVsim...resetRadio");
        this.mCis[RadioCapabilitySwitchUtil.getMainCapabilityPhoneId()].restartRILD(null);
    }

    public void setSimOnOffExecutingState(int i, int i2) {
        this.mSimPowerExecutingState[i] = i2;
    }

    public void setSimPower(int i, int i2, Message message) {
        this.mCis[i].setSimPower(i2, message);
    }

    public void supplyDeviceNetworkDepersonalization(String str, Message message) {
        this.mCis[0].supplyDeviceNetworkDepersonalization(str, obtainMessage(EVENT_SUPPLY_DEVICE_LOCK_DONE, message));
    }
}
