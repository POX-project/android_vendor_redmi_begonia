package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.preference.PreferenceManager;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.CarrierAppUtils;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.IccCard;
import com.android.internal.telephony.MccTable;
import com.android.internal.telephony.MultiSimSettingController;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.RILConstants;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.SubscriptionInfoUpdater;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UiccSlot;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.internal.telephony.uicc.MtkSpnOverride;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkSubscriptionInfoUpdater extends SubscriptionInfoUpdater {
    private static final boolean DBG = true;
    private static final int EVENT_RADIO_AVAILABLE = 101;
    private static final int EVENT_RADIO_UNAVAILABLE = 102;
    private static final int EVENT_SIM_MOUNT_CHANGED = 106;
    private static final int EVENT_SIM_NO_CHANGED = 103;
    private static final String LOG_TAG = "MtkSubscriptionInfoUpdater";
    private static final String PROPERTY_FLIGHT_MODE_POWER_OFF_MD = "ro.vendor.mtk_flight_mode_power_off_md";
    private static final String PROPERTY_SML_MODE = "ro.vendor.sim_me_lock_mode";
    private static final int sReadICCID_retry_time = 1000;
    private CommandsInterface[] mCis;
    private boolean mIsMultiSimSettingControllerInitialized;
    private boolean mIsSmlLockMode;
    private boolean[] mIsUpdateAvailable;
    private final Object mLockUpdate;
    private final BroadcastReceiver mMtkReceiver;
    private int mOldDensityDpi;
    private Runnable mReadCurrentIccIdRunnable;
    private int mReadIccIdCount;
    private int[] newSmlDt;
    private int[] newSmlInfo;
    private int[] oldSmlDt;
    private int[] oldSmlInfo;

    /* JADX WARN: Multi-variable type inference failed */
    public MtkSubscriptionInfoUpdater(Looper looper, Context context, CommandsInterface[] commandsInterfaceArr) {
        super(looper, context, commandsInterfaceArr);
        this.mLockUpdate = new Object();
        this.newSmlInfo = new int[]{4, 0, -1, -1, -1, -1};
        this.oldSmlInfo = new int[]{4, 0, -1, -1, -1, -1};
        this.newSmlDt = new int[]{4, 4, 4, 4};
        this.oldSmlDt = new int[]{4, 4, 4, 4};
        this.mIsSmlLockMode = SystemProperties.get(PROPERTY_SML_MODE, "").equals("3");
        this.mCis = null;
        this.mIsUpdateAvailable = new boolean[SUPPORTED_MODEM_COUNT];
        this.mReadIccIdCount = 0;
        this.mIsMultiSimSettingControllerInitialized = false;
        this.mMtkReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkSubscriptionInfoUpdater.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                MtkSubscriptionInfoUpdater.logd("onReceive, Action: " + action);
                if (action.equals("android.intent.action.LOCALE_CHANGED")) {
                    for (int i : MtkSubscriptionInfoUpdater.this.mSubscriptionManager.getActiveSubscriptionIdList()) {
                        MtkSubscriptionInfoUpdater.this.updateSubName(i);
                    }
                    return;
                }
                if (!action.equals("com.mediatek.phone.ACTION_COMMON_SLOT_NO_CHANGED")) {
                    if (!action.equals("android.intent.action.CONFIGURATION_CHANGED") || MtkSubscriptionInfoUpdater.this.mOldDensityDpi == MtkSubscriptionInfoUpdater.sContext.getResources().getConfiguration().densityDpi) {
                        return;
                    }
                    MtkSubscriptionInfoUpdater.this.mOldDensityDpi = MtkSubscriptionInfoUpdater.sContext.getResources().getConfiguration().densityDpi;
                    MtkSubscriptionController.getMtkInstance().refreshCachedActiveSubscriptionInfoList();
                    return;
                }
                int intExtra = intent.getIntExtra("phone", -1);
                MtkSubscriptionInfoUpdater.logd("[Common Slot] NO_CHANTED, slotId: " + intExtra);
                MtkSubscriptionInfoUpdater mtkSubscriptionInfoUpdater = MtkSubscriptionInfoUpdater.this;
                mtkSubscriptionInfoUpdater.sendMessage(mtkSubscriptionInfoUpdater.obtainMessage(103, intExtra, -1));
            }
        };
        this.mReadCurrentIccIdRunnable = new Runnable() { // from class: com.mediatek.internal.telephony.MtkSubscriptionInfoUpdater.2
            @Override // java.lang.Runnable
            public void run() {
                MtkSubscriptionInfoUpdater.access$604(MtkSubscriptionInfoUpdater.this);
                if (MtkSubscriptionInfoUpdater.this.mReadIccIdCount <= 10) {
                    if (MtkSubscriptionInfoUpdater.this.checkAllIccIdReady()) {
                        MtkSubscriptionInfoUpdater.this.updateSubscriptionInfoIfNeed();
                    } else {
                        MtkSubscriptionInfoUpdater mtkSubscriptionInfoUpdater = MtkSubscriptionInfoUpdater.this;
                        mtkSubscriptionInfoUpdater.postDelayed(mtkSubscriptionInfoUpdater.mReadCurrentIccIdRunnable, 1000L);
                    }
                }
            }
        };
        logd("MtkSubscriptionInfoUpdater created");
        this.mCis = commandsInterfaceArr;
        this.mOldDensityDpi = sContext.getResources().getConfiguration().densityDpi;
        IntentFilter intentFilter = new IntentFilter("com.mediatek.phone.ACTION_COMMON_SLOT_NO_CHANGED");
        if (DataSubConstants.OPERATOR_OP09.equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR))) {
            intentFilter.addAction("android.intent.action.LOCALE_CHANGED");
        }
        intentFilter.addAction("android.intent.action.CONFIGURATION_CHANGED");
        sContext.registerReceiver(this.mMtkReceiver, intentFilter);
        for (int i = 0; i < this.mCis.length; i++) {
            Integer num = new Integer(i);
            this.mCis[i].registerForNotAvailable(this, 102, num);
            this.mCis[i].registerForAvailable(this, 101, num);
        }
    }

    static /* synthetic */ int access$604(MtkSubscriptionInfoUpdater mtkSubscriptionInfoUpdater) {
        int i = mtkSubscriptionInfoUpdater.mReadIccIdCount + 1;
        mtkSubscriptionInfoUpdater.mReadIccIdCount = i;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkAllIccIdReady() {
        logd("checkAllIccIdReady +, retry_count = " + this.mReadIccIdCount);
        for (int i = 0; i < TelephonyManager.getDefault().getActiveModemCount(); i++) {
            MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
            String strStripTrailingFs = mtkUiccController != null ? IccUtils.stripTrailingFs(mtkUiccController.getIccid(i)) : "";
            if (strStripTrailingFs.length() == 3) {
                logd("No SIM insert :" + i);
            }
            if (strStripTrailingFs.equals("")) {
                return false;
            }
            logd("iccId[" + i + "] = " + MtkSubscriptionInfo.givePrintableIccid(strStripTrailingFs));
        }
        return true;
    }

    private boolean checkIsAvailable() {
        boolean z = true;
        for (int i = 0; i < TelephonyManager.getDefault().getActiveModemCount(); i++) {
            if (!this.mIsUpdateAvailable[i]) {
                logd("mIsUpdateAvailable[" + i + "] = " + this.mIsUpdateAvailable[i]);
                z = false;
                break;
            }
        }
        logd("checkIsAvailable result = " + z);
        return z;
    }

    private Integer getCiIndex(Message message) {
        Integer num = new Integer(0);
        if (message == null) {
            return num;
        }
        if (message.obj != null && (message.obj instanceof Integer)) {
            return (Integer) message.obj;
        }
        if (message.obj == null || !(message.obj instanceof AsyncResult)) {
            return num;
        }
        AsyncResult asyncResult = (AsyncResult) message.obj;
        return (asyncResult.userObj == null || !(asyncResult.userObj instanceof Integer)) ? num : (Integer) asyncResult.userObj;
    }

    private static String initIccidStringForNoSim() {
        logd("initIccidStringForNoSim");
        return DataSubConstants.NO_SIM_VALUE;
    }

    private boolean isNewSim(String str, String str2, String str3) {
        boolean z = true;
        if (str != null && str3 != null && (str3.indexOf(str) == 0 || str3.indexOf(str.toLowerCase()) == 0)) {
            z = false;
        } else if (str2 != null && str2.equals(str3)) {
            z = false;
        }
        logd("isNewSim newSim = " + z);
        return z;
    }

    static /* synthetic */ void lambda$updateSubscriptionInfoByIccId$0(boolean z) {
        if (z) {
            MtkSubscriptionController.getMtkInstance().notifySubscriptionInfoChanged();
        }
        logd("updateSubscriptionInfoByIccId: SubscriptionInfo update complete");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    private void resetSimMountChangeState(int i) {
        boolean z;
        this.newSmlInfo[0] = this.newSmlDt[i];
        this.oldSmlInfo[0] = this.oldSmlDt[i];
        int i2 = 0;
        while (true) {
            if (i2 >= 6) {
                z = false;
                break;
            } else {
                if (this.newSmlInfo[i2] != this.oldSmlInfo[i2]) {
                    z = true;
                    break;
                }
                i2++;
            }
        }
        if (!z) {
            logd("resetSimMountChangeState no  need report ");
            return;
        }
        int[] iArr = this.newSmlInfo;
        int i3 = iArr[0];
        int i4 = iArr[1];
        int i5 = iArr[2];
        int i6 = iArr[3];
        int i7 = iArr[4];
        int i8 = iArr[5];
        Intent intent = new Intent("com.mediatek.phone.ACTION_SIM_SLOT_SIM_MOUNT_CHANGE");
        intent.putExtra("DETECTED_TYPE", i3);
        intent.putExtra("SML_SIM_COUNT", i4);
        intent.putExtra("SML_SIM1_VALID", i5);
        intent.putExtra("SML_SIM2_VALID", i6);
        intent.putExtra("SML_SIM3_VALID", i7);
        intent.putExtra("SML_SIM4_VALID", i8);
        intent.putExtra("phone", i);
        intent.putExtra("slot", i);
        logd("Broadcasting ACTION_SIM_SLOT_SIM_MOUNT_CHANGE,  [" + i3 + ", " + i4 + ", " + i5 + ", " + i6 + ", " + i7 + ", " + i8 + ", " + this.newSmlDt[i] + ", " + i + "]");
        sContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        updateOldSmlInfo(i3, i4, i5, i6, i7, i8, i);
    }

    protected static void setSubInfoInitialized() {
        if (sIsSubInfoInitialized) {
            return;
        }
        logd("SubInfo Initialized");
        sIsSubInfoInitialized = true;
        SubscriptionController.getInstance().notifySubInfoReady();
    }

    private void updateNewSmlInfo(int i, int i2, int i3) {
        this.newSmlDt[i3] = i;
        int[] iArr = this.newSmlInfo;
        iArr[0] = i;
        iArr[1] = i2;
        iArr[2] = MtkTelephonyManagerEx.getDefault().checkValidCard(0);
        this.newSmlInfo[3] = MtkTelephonyManagerEx.getDefault().checkValidCard(1);
        this.newSmlInfo[4] = MtkTelephonyManagerEx.getDefault().checkValidCard(2);
        this.newSmlInfo[5] = MtkTelephonyManagerEx.getDefault().checkValidCard(3);
        logd("[updateNewSmlInfo]- [" + this.newSmlInfo[0] + ", " + this.newSmlInfo[1] + ", " + this.newSmlInfo[2] + ", " + this.newSmlInfo[3] + ", " + this.newSmlInfo[4] + ", " + this.newSmlInfo[5] + ", " + this.newSmlDt[i3] + ", " + i3 + "]");
    }

    private void updateOldSmlInfo(int i, int i2, int i3, int i4, int i5, int i6, int i7) {
        this.oldSmlDt[i7] = i;
        int[] iArr = this.oldSmlInfo;
        iArr[0] = i;
        iArr[1] = i2;
        iArr[2] = i3;
        iArr[3] = i4;
        iArr[4] = i5;
        iArr[5] = i6;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateSubName(int i) {
        String strLookupOperatorName;
        MtkSubscriptionInfo subInfo = MtkSubscriptionManager.getSubInfo((String) null, i, sContext.getAttributionTag());
        if (subInfo == null || subInfo.getNameSource() == 2) {
            return;
        }
        MtkSpnOverride mtkSpnOverride = MtkSpnOverride.getInstance();
        String simOperator = TelephonyManager.getDefault().getSimOperator(i);
        int slotIndex = SubscriptionManager.getSlotIndex(i);
        logd("updateSubName, carrierName = " + simOperator + ", subId = " + i);
        if (SubscriptionManager.isValidSlotIndex(slotIndex)) {
            if (mtkSpnOverride.containsCarrierEx(simOperator)) {
                strLookupOperatorName = mtkSpnOverride.lookupOperatorName(i, simOperator, true, sContext);
                logd("SPN found, name = " + strLookupOperatorName);
            } else {
                strLookupOperatorName = "CARD " + Integer.toString(slotIndex + 1);
                logd("SPN not found, set name to " + strLookupOperatorName);
            }
            MtkSubscriptionController.getMtkInstance().setDisplayNameUsingSrc(strLookupOperatorName, i, 0);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateSubscriptionInfoIfNeed() {
        for (int i = 0; i < TelephonyManager.getDefault().getActiveModemCount(); i++) {
            logd("[updateSubscriptionInfoIfNeed] before update sIccId[" + i + "]: " + MtkSubscriptionInfo.givePrintableIccid(sIccId[i]));
            if (areUiccAppsDisabledOnCard(i)) {
                logd("[updateSubscriptionInfoIfNeed] Should not update for uicc apps is disabled");
            } else {
                boolean z = false;
                MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
                String strStripTrailingFs = mtkUiccController != null ? IccUtils.stripTrailingFs(mtkUiccController.getIccid(i)) : "";
                if (sIccId[i] == null || !sIccId[i].equals(strStripTrailingFs)) {
                    sIccId[i] = strStripTrailingFs;
                    z = true;
                    StringBuilder sb = new StringBuilder();
                    sb.append("[updateSubscriptionInfoIfNeed] sIccId[");
                    sb.append(i);
                    sb.append("]: ");
                    sb.append(MtkSubscriptionInfo.givePrintableIccid(sIccId[i]));
                    sb.append(" needUpdate: ");
                    sb.append(true);
                    sb.append("  !TextUtils.isEmpty(sIccId[");
                    sb.append(i);
                    sb.append("]): ");
                    sb.append(!TextUtils.isEmpty(sIccId[i]));
                    logd(sb.toString());
                }
                if (z && !TextUtils.isEmpty(sIccId[i])) {
                    updateSubscriptionInfoByIccId(i, true);
                }
            }
        }
    }

    protected boolean areUiccAppsDisabledOnCard(int i) {
        MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
        if (mtkUiccController == null) {
            loge("[areUiccAppsDisabledOnCard] MtkUiccController is null.");
            return false;
        }
        String iccid = mtkUiccController.getIccid(i);
        if (TextUtils.isEmpty(iccid)) {
            loge("[areUiccAppsDisabledOnCard] iccid[" + i + "] is empty.");
            return false;
        }
        if (iccid.equals(ICCID_STRING_FOR_NO_SIM)) {
            UiccSlot uiccSlotForPhone = UiccController.getInstance().getUiccSlotForPhone(i);
            if (uiccSlotForPhone == null || uiccSlotForPhone.getIccId() == null) {
                return false;
            }
            iccid = uiccSlotForPhone.getIccId();
        }
        SubscriptionInfo subInfoForIccId = SubscriptionController.getInstance().getSubInfoForIccId(IccUtils.stripTrailingFs(iccid));
        StringBuilder sb = new StringBuilder();
        sb.append("[areUiccAppsDisabledOnCard] IccUtils.stripTrailingFs(iccid) = ");
        sb.append(MtkSubscriptionInfo.givePrintableIccid(IccUtils.stripTrailingFs(iccid)));
        sb.append(", info = ");
        sb.append(subInfoForIccId == null ? "null" : subInfoForIccId);
        logd(sb.toString());
        return (subInfoForIccId == null || subInfoForIccId.areUiccApplicationsEnabled()) ? false : true;
    }

    public void dispose() {
        logd("[dispose]");
        sContext.unregisterReceiver(this.mMtkReceiver);
    }

    public void handleMessage(Message message) {
        Integer ciIndex = getCiIndex(message);
        int i = message.what;
        if (i == 10) {
            updateSubscriptionInfoIfNeed();
            super.handleMessage(message);
            return;
        }
        if (i == EVENT_SIM_MOUNT_CHANGED) {
            synchronized (this.mLockUpdate) {
                updateNewSmlInfo(this.newSmlDt[ciIndex.intValue()], this.newSmlInfo[1], ciIndex.intValue());
                resetSimMountChangeState(ciIndex.intValue());
            }
            return;
        }
        switch (i) {
            case 101:
                logd("handleMessage : <EVENT_RADIO_AVAILABLE> SIM" + (ciIndex.intValue() + 1));
                this.mIsUpdateAvailable[ciIndex.intValue()] = true;
                if (checkIsAvailable()) {
                    this.mReadIccIdCount = 0;
                    if (checkAllIccIdReady()) {
                        updateSubscriptionInfoIfNeed();
                        return;
                    } else {
                        postDelayed(this.mReadCurrentIccIdRunnable, 1000L);
                        return;
                    }
                }
                return;
            case 102:
                logd("handleMessage : <EVENT_RADIO_UNAVAILABLE> SIM" + (ciIndex.intValue() + 1));
                this.mIsUpdateAvailable[ciIndex.intValue()] = false;
                return;
            case 103:
                if (checkAllIccIdReady()) {
                    updateSubscriptionInfoIfNeed();
                    return;
                }
                int i2 = message.arg1;
                sIccId[i2] = ICCID_STRING_FOR_NO_SIM;
                logd("case SIM_NO_CHANGED: set N/A for slot" + i2);
                this.mReadIccIdCount = 0;
                postDelayed(this.mReadCurrentIccIdRunnable, 1000L);
                return;
            default:
                super.handleMessage(message);
                return;
        }
    }

    protected void handleSimLoaded(int i) {
        int intAtIndex;
        String str;
        String str2 = "preferred_network_mode";
        logd("handleSimLoaded: phoneId: " + i);
        IccCard iccCard = PhoneFactory.getPhone(i).getIccCard();
        if (iccCard == null) {
            logd("handleSimLoaded: IccCard null");
            return;
        }
        IccRecords iccRecords = iccCard.getIccRecords();
        if (iccRecords == null) {
            logd("handleSimLoaded: IccRecords null");
            return;
        }
        if (IccUtils.stripTrailingFs(iccRecords.getFullIccId()) == null) {
            logd("handleSimLoaded: IccID null");
            return;
        }
        updateSubscriptionInfoIfNeed();
        List subInfoUsingSlotIndexPrivileged = MtkSubscriptionController.getMtkInstance().getSubInfoUsingSlotIndexPrivileged(i);
        if (subInfoUsingSlotIndexPrivileged == null || subInfoUsingSlotIndexPrivileged.isEmpty()) {
            loge("empty subinfo for phoneId: " + i + "could not update ContentResolver");
        } else {
            Iterator it = subInfoUsingSlotIndexPrivileged.iterator();
            while (it.hasNext()) {
                int subscriptionId = ((SubscriptionInfo) it.next()).getSubscriptionId();
                TelephonyManager telephonyManager = (TelephonyManager) sContext.getSystemService("phone");
                String simOperatorNumeric = telephonyManager.getSimOperatorNumeric(subscriptionId);
                if (TextUtils.isEmpty(simOperatorNumeric)) {
                    logd("EVENT_RECORDS_LOADED Operator name is null");
                } else {
                    if (subscriptionId == MtkSubscriptionController.getMtkInstance().getDefaultSubId()) {
                        MccTable.updateMccMncConfiguration(sContext, simOperatorNumeric);
                    }
                    MtkSubscriptionController.getMtkInstance().setMccMnc(simOperatorNumeric, subscriptionId);
                }
                String simCountryIsoForPhone = TelephonyManager.getSimCountryIsoForPhone(i);
                if (TextUtils.isEmpty(simCountryIsoForPhone)) {
                    logd("EVENT_RECORDS_LOADED sim country iso is null");
                } else {
                    MtkSubscriptionController.getMtkInstance().setCountryIso(simCountryIsoForPhone, subscriptionId);
                }
                if (0 != 0) {
                    MtkSubscriptionController.getMtkInstance().setDisplayNumber(null, subscriptionId);
                }
                String subscriberId = telephonyManager.createForSubscriptionId(subscriptionId).getSubscriberId();
                if (subscriberId != null) {
                    MtkSubscriptionController.getMtkInstance().setImsi(subscriberId, subscriptionId);
                }
                String[] ehplmns = iccRecords.getEhplmns();
                IccCard iccCard2 = iccCard;
                String[] plmnsFromHplmnActRecord = iccRecords.getPlmnsFromHplmnActRecord();
                if (ehplmns != null || plmnsFromHplmnActRecord != null) {
                    MtkSubscriptionController.getMtkInstance().setAssociatedPlmns(ehplmns, plmnsFromHplmnActRecord, subscriptionId);
                }
                SubscriptionInfo activeSubscriptionInfo = this.mSubscriptionManager.getActiveSubscriptionInfo(subscriptionId);
                String simOperatorName = telephonyManager.getSimOperatorName(subscriptionId);
                if (activeSubscriptionInfo != null && TextUtils.isEmpty(activeSubscriptionInfo.getNumber())) {
                    String line1Number = telephonyManager.getLine1Number(subscriptionId);
                    if (!TextUtils.isEmpty(line1Number)) {
                        MtkSubscriptionController.getMtkInstance().setDisplayNumber(line1Number, subscriptionId);
                    }
                }
                if (activeSubscriptionInfo != null && activeSubscriptionInfo.getNameSource() != 2) {
                    String simOperatorNumeric2 = telephonyManager.getSimOperatorNumeric(subscriptionId);
                    String strLookupOperatorNameForDisplayName = MtkSpnOverride.getInstance().lookupOperatorNameForDisplayName(subscriptionId, simOperatorNumeric2, true, sContext);
                    logd("[handleSimLoaded]- simNumeric: " + simOperatorNumeric2 + ", simMvnoName: " + strLookupOperatorNameForDisplayName + ", simCarrierName: " + simOperatorName);
                    if (!TextUtils.isEmpty(strLookupOperatorNameForDisplayName)) {
                        str = strLookupOperatorNameForDisplayName;
                    } else if (TextUtils.isEmpty(simOperatorName)) {
                        str = "CARD " + Integer.toString(i + 1);
                    } else {
                        str = simOperatorName;
                    }
                    logd("sim name = " + str + ", nameSource = " + activeSubscriptionInfo.getNameSource());
                    MtkSubscriptionController.getMtkInstance().setDisplayNameUsingSrc(str, subscriptionId, activeSubscriptionInfo.getNameSource());
                }
                SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(sContext);
                if (defaultSharedPreferences.getInt("curr_subid" + i, -1) != subscriptionId) {
                    int i2 = RILConstants.PREFERRED_NETWORK_MODE;
                    try {
                        intAtIndex = TelephonyManager.getIntAtIndex(sContext.getContentResolver(), str2, i);
                    } catch (Settings.SettingNotFoundException e) {
                        logd("Settings Exception reading value at slotId for " + i + " Settings.Global.PREFERRED_NETWORK_MODE");
                        intAtIndex = i2;
                    }
                    if (intAtIndex == -1) {
                        int i3 = RILConstants.PREFERRED_NETWORK_MODE;
                        try {
                            intAtIndex = TelephonyManager.getIntAtIndex(sContext.getContentResolver(), str2, i);
                        } catch (Settings.SettingNotFoundException e2) {
                            Rlog.e(LOG_TAG, "Settings Exception Reading Value At Index for Settings.Global.PREFERRED_NETWORK_MODE");
                            intAtIndex = i3;
                        }
                        Settings.Global.putInt(PhoneFactory.getPhone(i).getContext().getContentResolver(), str2 + subscriptionId, intAtIndex);
                    }
                    PhoneFactory.getPhone(i).setPreferredNetworkType(intAtIndex, (Message) null);
                    PhoneFactory.getPhone(i).getNetworkSelectionMode(obtainMessage(2, new Integer(i)));
                    SharedPreferences.Editor editorEdit = defaultSharedPreferences.edit();
                    editorEdit.putInt("curr_subid" + i, subscriptionId);
                    editorEdit.apply();
                }
                iccCard = iccCard2;
                iccRecords = iccRecords;
                subInfoUsingSlotIndexPrivileged = subInfoUsingSlotIndexPrivileged;
                str2 = str2;
            }
        }
        CarrierAppUtils.disableCarrierAppsUntilPrivileged(sContext.getOpPackageName(), TelephonyManager.getDefault(), this.mCurrentlyActiveUserId, sContext);
        broadcastSimStateChanged(i, "LOADED", null);
        broadcastSimCardStateChanged(i, 11);
        broadcastSimApplicationStateChanged(i, 10);
        updateSubscriptionCarrierId(i, "LOADED");
        updateCarrierServices(i, "LOADED");
    }

    protected void handleSimLocked(int i, String str) {
        if (sIccId[i] != null && sIccId[i].equals(ICCID_STRING_FOR_NO_SIM)) {
            logd("SIM" + (i + 1) + " hot plug in");
            sIccId[i] = null;
        }
        IccCard iccCard = PhoneFactory.getPhone(i).getIccCard();
        if (iccCard == null) {
            logd("handleSimLocked: IccCard null");
            return;
        }
        if (iccCard.getIccRecords() == null) {
            logd("handleSimLocked: IccRecords null");
            return;
        }
        MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
        String strStripTrailingFs = mtkUiccController != null ? IccUtils.stripTrailingFs(mtkUiccController.getIccid(i)) : "";
        if ("1".equals(SystemProperties.get(PROPERTY_FLIGHT_MODE_POWER_OFF_MD)) && !checkAllIccIdReady() && !strStripTrailingFs.equals(sIccId[i])) {
            logd("All iccids are not ready and iccid changed");
            sIccId[i] = null;
            this.mSubscriptionManager.clearSubscriptionInfo();
        }
        updateSubscriptionInfoIfNeed();
        broadcastSimStateChanged(i, "LOCKED", str);
        broadcastSimCardStateChanged(i, 11);
        broadcastSimApplicationStateChanged(i, getSimStateFromLockedReason(str));
        updateSubscriptionCarrierId(i, "LOCKED");
        updateCarrierServices(i, "LOCKED");
    }

    protected void handleSimNotReady(int i) {
        logd("handleSimNotReady: phoneId: " + i);
        boolean z = false;
        IccCard iccCard = PhoneFactory.getPhone(i).getIccCard();
        boolean zAreUiccAppsDisabledOnCard = areUiccAppsDisabledOnCard(i);
        UiccSlot uiccSlotForPhone = UiccController.getInstance().getUiccSlotForPhone(i);
        if ((uiccSlotForPhone != null && uiccSlotForPhone.isEuicc() && iccCard.isEmptyProfile()) || zAreUiccAppsDisabledOnCard) {
            if (zAreUiccAppsDisabledOnCard) {
                sInactiveIccIds[i] = IccUtils.stripTrailingFs(uiccSlotForPhone.getIccId());
            }
            z = true;
            sIccId[i] = ICCID_STRING_FOR_NO_SIM;
            updateSubscriptionInfoByIccId(i, false);
        } else {
            updateSubscriptionInfoIfNeed();
        }
        broadcastSimStateChanged(i, "NOT_READY", null);
        broadcastSimCardStateChanged(i, 11);
        broadcastSimApplicationStateChanged(i, 6);
        if (z) {
            updateCarrierServices(i, "NOT_READY");
        }
    }

    protected boolean isAllIccIdQueryDone() {
        for (int i = 0; i < TelephonyManager.getDefault().getActiveModemCount(); i++) {
            if (sIccId[i] == null || sIccId[i].equals("")) {
                logd("Wait for SIM " + i + " Iccid");
                return false;
            }
        }
        logd("All IccIds query complete");
        return true;
    }

    protected void onMultiSimConfigChanged() {
        super.onMultiSimConfigChanged();
        int activeModemCount = ((TelephonyManager) sContext.getSystemService("phone")).getActiveModemCount();
        loge("onMultiSimConfigChangedcase activeModemCount=" + activeModemCount + ", SUPPORTED_MODEM_COUNT=" + SUPPORTED_MODEM_COUNT);
        for (int i = activeModemCount; i < SUPPORTED_MODEM_COUNT; i++) {
            this.mIsUpdateAvailable[i] = false;
        }
    }

    public void triggerUpdateInternalSimMountState(int i) {
        logd("triggerUpdateInternalSimMountState slotId " + i);
        sendMessage(obtainMessage(EVENT_SIM_MOUNT_CHANGED, Integer.valueOf(i)));
    }

    protected synchronized void updateSubscriptionInfoByIccId(int i, boolean z) {
        UiccController uiccController;
        logd("updateSubscriptionInfoByIccId:+ Start - phoneId: " + i);
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("[updateSubscriptionInfoByIccId]- invalid phoneId=" + i);
            return;
        }
        List subInfoUsingSlotIndexPrivileged = MtkSubscriptionController.getMtkInstance().getSubInfoUsingSlotIndexPrivileged(i);
        String iccId = subInfoUsingSlotIndexPrivileged != null ? ((SubscriptionInfo) subInfoUsingSlotIndexPrivileged.get(0)).getIccId() : ICCID_STRING_FOR_NO_SIM;
        logd("updateSubscriptionInfoByIccId: removing subscription info record: phoneId:" + i + " oldIccId:" + MtkSubscriptionInfo.givePrintableIccid(iccId));
        MtkSubscriptionController.getMtkInstance().clearSubInfoRecord(i);
        if (!ICCID_STRING_FOR_NO_SIM.equals(sIccId[i])) {
            logd("updateSubscriptionInfoByIccId: adding subscription info record: iccid: " + MtkSubscriptionInfo.givePrintableIccid(sIccId[i]) + "  phoneId: " + i);
            this.mSubscriptionManager.addSubscriptionInfoRecord(sIccId[i], i);
        }
        List subInfoUsingSlotIndexPrivileged2 = MtkSubscriptionController.getMtkInstance().getSubInfoUsingSlotIndexPrivileged(i);
        if (subInfoUsingSlotIndexPrivileged2 != null) {
            boolean z2 = false;
            for (int i2 = 0; i2 < subInfoUsingSlotIndexPrivileged2.size(); i2++) {
                SubscriptionInfo subscriptionInfo = (SubscriptionInfo) subInfoUsingSlotIndexPrivileged2.get(i2);
                ContentValues contentValues = new ContentValues(1);
                if (0 != 0) {
                    contentValues.put(PplMessageManager.PendingMessage.KEY_NUMBER, (String) null);
                    sContext.getContentResolver().update(SubscriptionManager.getUriForSubscriptionId(subscriptionInfo.getSubscriptionId()), contentValues, null, null);
                    z2 = true;
                }
            }
            if (z2) {
                MtkSubscriptionController.getMtkInstance().refreshCachedActiveSubscriptionInfoList();
            }
        }
        List activeSubscriptionInfoList = MtkSubscriptionController.getMtkInstance().getActiveSubscriptionInfoList(sContext.getOpPackageName(), sContext.getAttributionTag());
        if (isAllIccIdQueryDone()) {
            MtkDefaultSmsSimSettings.setSmsTalkDefaultSim(activeSubscriptionInfoList, sContext);
            if (SystemProperties.getInt("ro.vendor.mtk_external_sim_support", 0) == 1 && SystemProperties.getInt("ro.vendor.mtk_non_dsda_rsim_support", 0) == 1) {
                int i3 = SystemProperties.getInt("vendor.gsm.prefered.rsim.slot", -1);
                int[] subId = MtkSubscriptionController.getMtkInstance().getSubId(i3);
                if (i3 >= 0 && i3 < TelephonyManager.getDefault().getActiveModemCount() && subId != null && subId.length != 0) {
                    MtkSubscriptionController.getMtkInstance().setDefaultDataSubId(subId[0]);
                }
            }
            SubscriptionManager subscriptionManager = this.mSubscriptionManager;
            SubscriptionManager subscriptionManager2 = this.mSubscriptionManager;
            if (subscriptionManager.isActiveSubId(SubscriptionManager.getDefaultDataSubscriptionId())) {
                MtkSubscriptionController mtkInstance = MtkSubscriptionController.getMtkInstance();
                SubscriptionManager subscriptionManager3 = this.mSubscriptionManager;
                mtkInstance.setDefaultDataSubIdWithoutCapabilitySwitch(SubscriptionManager.getDefaultDataSubscriptionId());
            } else {
                logd("bypass reset default data sub if inactive");
            }
            setSubInfoInitialized();
        }
        int i4 = (sIccId[i] == null || !sIccId[i].equals(ICCID_STRING_FOR_NO_SIM) || iccId.equals(ICCID_STRING_FOR_NO_SIM)) ? isNewSim(sIccId[i], IccUtils.getDecimalSubstring(sIccId[i]), iccId) ? 1 : 4 : 2;
        int size = activeSubscriptionInfoList == null ? 0 : activeSubscriptionInfoList.size();
        if (this.mIsSmlLockMode) {
            synchronized (this.mLockUpdate) {
                updateNewSmlInfo(i4, size, i);
                resetSimMountChangeState(i);
            }
        }
        Intent intent = new Intent("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
        int i5 = i4;
        MtkSubscriptionController.getMtkInstance().putSubinfoRecordUpdatedExtra(intent, i, i4, size, null);
        UiccController uiccController2 = UiccController.getInstance();
        UiccSlot[] uiccSlots = uiccController2.getUiccSlots();
        if (uiccSlots != null && z) {
            ArrayList arrayList = new ArrayList();
            int length = uiccSlots.length;
            int i6 = 0;
            while (i6 < length) {
                UiccSlot uiccSlot = uiccSlots[i6];
                if (uiccSlot == null || uiccSlot.getUiccCard() == null) {
                    uiccController = uiccController2;
                } else {
                    try {
                        uiccController = uiccController2;
                        try {
                            arrayList.add(Integer.valueOf(uiccController2.convertToPublicCardId(uiccSlot.getUiccCard().getCardId())));
                        } catch (NullPointerException e) {
                            logd("updateSubscriptionInfoByIccId uiccSlots.getUiccCard() is null.");
                        }
                    } catch (NullPointerException e2) {
                        uiccController = uiccController2;
                    }
                }
                i6++;
                uiccController2 = uiccController;
            }
            updateEmbeddedSubscriptions(arrayList, new SubscriptionInfoUpdater.UpdateEmbeddedSubsCallback() { // from class: com.mediatek.internal.telephony.-$$Lambda$MtkSubscriptionInfoUpdater$HgsoAJgGNs-z09cU20UKt6-y2NQ
                public final void run(boolean z3) {
                    MtkSubscriptionInfoUpdater.lambda$updateSubscriptionInfoByIccId$0(z3);
                }
            });
        }
        MtkSubscriptionController.getMtkInstance().notifySubscriptionInfoChanged(intent);
        logd("updateSubscriptionInfoByIccId: SubscriptionInfo update complete: phoneId" + i + " detectedType = " + i5 + " subCount = " + size);
        if (isAllIccIdQueryDone() && !this.mIsMultiSimSettingControllerInitialized) {
            this.mIsMultiSimSettingControllerInitialized = true;
            MultiSimSettingController.getInstance().notifyAllSubscriptionLoaded();
        }
    }
}
