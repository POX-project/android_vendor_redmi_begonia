package com.mediatek.internal.telephony.dataconnection;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.PhoneSwitcher;
import com.android.internal.telephony.TelephonyDevController;
import com.mediatek.internal.telephony.IMtkTelephonyEx;
import com.mediatek.internal.telephony.MtkGsmCdmaCallTracker;
import com.mediatek.internal.telephony.MtkHardwareConfig;
import com.mediatek.internal.telephony.MtkIccCardConstants;
import com.mediatek.internal.telephony.MtkPhoneSwitcher;
import com.mediatek.internal.telephony.datasub.SmartDataSwitchAssistant;
import com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class MtkDcHelper extends Handler {
    private static final int DATA_CONFIG_MULTI_PS = 1;
    private static final boolean DBG = true;
    private static final int EVENT_CALL_ADDITIONAL_INFO = 70;
    private static final int EVENT_DSDA_STATE_CHANGED = 50;
    private static final int EVENT_ID_INTVL = 10;
    private static final int EVENT_NO_CS_CALL_AFTER_SRVCC = 40;
    private static final int EVENT_RADIO_UNAVAILABLE = 10;
    private static final int EVENT_SUBSCRIPTION_CHANGED = 0;
    private static final int EVENT_VOICE_CALL_ENDED = 30;
    private static final int EVENT_VOICE_CALL_OFFHOOK = 60;
    private static final int EVENT_VOICE_CALL_STARTED = 20;
    private static final String INVALID_ICCID = "N/A";
    private static final String LOG_TAG = "DcHelper";
    private static final int MT_CALL_MISSED = 2;
    private static final int MT_CALL_NUMREDIRECT = 3;
    private static final int MT_CALL_REJECTED = 1;
    private static final int MT_CALL_RQ = 4;
    private static final String PROP_DATA_CONFIG = "ro.vendor.mtk_data_config";
    private static final String RIL_CDMA_DUALACT_SUPPORT = "vendor.ril.cdma.3g.dualact";
    private Context mContext;
    private boolean[] mGwsdDualSimStatusArray;
    private boolean[] mIsCallingArray;
    protected int mPhoneNum;
    protected Phone[] mPhones;
    private static final boolean VDBG = SystemProperties.get("ro.build.type").equals("eng");
    private static MtkDcHelper sMtkDcHelper = null;
    private static final String[] PROPERTY_RIL_TEST_SIM = {"vendor.gsm.sim.ril.testsim", "vendor.gsm.sim.ril.testsim.2", "vendor.gsm.sim.ril.testsim.3", "vendor.gsm.sim.ril.testsim.4"};
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    private static final Map<Operator, List> mOperatorMap = new HashMap<Operator, List>() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcHelper.1
        {
            put(Operator.OP129, Arrays.asList("44007", "44008", "44050", "44051", "44052", "44053", "44054", "44055", "44056", "44070", "44071", "44072", "44073", "44074", "44075", "44076", "44077", "44078", "44079", "44088", "44089", "44170"));
            put(Operator.OP156, Arrays.asList("23802", "23877"));
        }
    };
    private TelephonyDevController mTelDevController = TelephonyDevController.getInstance();
    private boolean mHasFetchMpsAttachSupport = false;
    private boolean mMpsAttachSupport = false;
    private int mDsdaMode = 0;
    private Call.SrvccState mSrvccState = Call.SrvccState.NONE;
    private boolean mIsPhoneOffhook = false;
    protected final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcHelper.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            if (action != null && action.equals("android.intent.action.PHONE_STATE")) {
                String stringExtra = intent.getStringExtra("state");
                if (stringExtra.equals(TelephonyManager.EXTRA_STATE_IDLE)) {
                    MtkDcHelper.logd("onPhoneStateChanged: phone is IDLE");
                    MtkDcHelper.this.mIsPhoneOffhook = false;
                } else if (stringExtra.equals(TelephonyManager.EXTRA_STATE_OFFHOOK)) {
                    MtkDcHelper.logd("onPhoneStateChanged: phone is OFFHOOK");
                    MtkDcHelper.this.mRspHandler.obtainMessage(60).sendToTarget();
                }
            }
        }
    };
    private Handler mRspHandler = new Handler() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDcHelper.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what % 10;
            int i2 = message.what - i;
            if (i2 == 10) {
                MtkDcHelper.logd("EVENT_PHONE" + i + "_RADIO_UNAVAILABLE");
                MtkDcHelper.this.mDsdaMode = 0;
                return;
            }
            if (i2 == 20) {
                if (MtkDcHelper.this.isInSRVCC()) {
                    return;
                }
                MtkDcHelper.this.mIsCallingArray[i] = true;
                MtkDcHelper.logd("Voice Call Started, phoneId = " + i);
                MtkDcHelper.this.onVoiceCallStarted();
                return;
            }
            if (i2 != 30) {
                if (i2 != 40) {
                    if (i2 == 50) {
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult == null || asyncResult.result == null) {
                            return;
                        }
                        MtkDcHelper.this.mDsdaMode = ((Integer) asyncResult.result).intValue();
                        MtkDcHelper.logd("mDsdaMode = " + MtkDcHelper.this.mDsdaMode);
                        if (MtkDcHelper.this.isInCallStatusInternel()) {
                            for (int i3 = 0; i3 < MtkDcHelper.this.mPhoneNum; i3++) {
                                ((MtkDcTracker) MtkDcHelper.this.mPhones[i3].getDcTracker(1)).onDsdaStateChanged();
                            }
                        }
                        SmartDataSwitchAssistant smartDataSwitchAssistant = SmartDataSwitchAssistant.getInstance();
                        if (smartDataSwitchAssistant != null) {
                            smartDataSwitchAssistant.onDsdaStateChanged();
                            return;
                        }
                        return;
                    }
                    if (i2 == 60) {
                        if (MtkDcHelper.this.isInCallStatusInternel()) {
                            MtkDcHelper.this.mIsPhoneOffhook = true;
                            MtkDcHelper.logd("Voice Call OffHook, re-evaluate call start");
                            MtkDcHelper.this.onVoiceCallStarted();
                            return;
                        }
                        return;
                    }
                    if (i2 != 70) {
                        MtkDcHelper.logd("Unhandled message with number: " + message.what);
                        return;
                    }
                    String[] strArr = (String[]) ((AsyncResult) message.obj).result;
                    if (Integer.parseInt(strArr[0]) == 4) {
                        int i4 = Integer.parseInt(strArr[1]);
                        MtkDcHelper.this.mGwsdDualSimStatusArray[i] = i4 == 1;
                        MtkDcHelper.logd("MT_CALL_RQ, phoneId= " + i + ", mtCallRq = " + i4 + ", mGwsdDualSimStatus = " + MtkDcHelper.this.mGwsdDualSimStatusArray[i]);
                        return;
                    }
                    return;
                }
                MtkDcHelper.logd("Got 'no CS calls after SRVCC' notification, tunnel it to VOICE_CALL_END");
                MtkDcHelper.this.mSrvccState = Call.SrvccState.NONE;
                MtkPhoneSwitcher mtkPhoneSwitcher = MtkPhoneSwitcher.getInstance();
                if (mtkPhoneSwitcher != null) {
                    mtkPhoneSwitcher.sendEmptyMessage(109);
                }
            }
            MtkDcHelper.this.mIsPhoneOffhook = false;
            Call.SrvccState srvccState = MtkDcHelper.this.mSrvccState;
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            if (asyncResult2 == null || asyncResult2.result == null) {
                MtkDcHelper.this.mSrvccState = Call.SrvccState.NONE;
            } else {
                MtkDcHelper.this.mSrvccState = (Call.SrvccState) asyncResult2.result;
            }
            MtkDcHelper.logd("mSrvccState = " + MtkDcHelper.this.mSrvccState);
            if (!MtkDcHelper.this.isInSRVCC() || srvccState == Call.SrvccState.NONE) {
                MtkDcHelper.logd("Voice Call Ended, phoneId = " + i);
                MtkDcHelper.this.mIsCallingArray[i] = false;
                MtkDcHelper.this.onVoiceCallEnded();
            }
        }
    };

    public enum Operator {
        OP129,
        OP156
    }

    protected MtkDcHelper(Context context, Phone[] phoneArr) {
        this.mContext = context;
        this.mPhones = phoneArr;
        int length = phoneArr.length;
        this.mPhoneNum = length;
        this.mGwsdDualSimStatusArray = new boolean[length];
        this.mIsCallingArray = new boolean[length];
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mGwsdDualSimStatusArray[i] = false;
            this.mIsCallingArray[i] = false;
        }
        registerEvents();
    }

    public static MtkDcHelper getInstance() {
        MtkDcHelper mtkDcHelper = sMtkDcHelper;
        if (mtkDcHelper != null) {
            return mtkDcHelper;
        }
        throw new RuntimeException("Should not be called before makesMtkDcHelper");
    }

    public static boolean hasVsimApn(String[] strArr) {
        if (strArr == null) {
            loge("hasVsimApn: apnTypes is null");
            return false;
        }
        if (strArr.length == 0) {
            return false;
        }
        for (String str : strArr) {
            if (TextUtils.equals("vsim", str)) {
                return true;
            }
        }
        return false;
    }

    public static boolean isCdma3GCard(int i) {
        if (i >= 0 && i < TelephonyManager.getDefault().getPhoneCount()) {
            MtkIccCardConstants.CardType cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(i);
            return cdmaCardType == MtkIccCardConstants.CardType.UIM_CARD || cdmaCardType == MtkIccCardConstants.CardType.CT_3G_UIM_CARD;
        }
        logd("isCdma3GCard invalid phoneId = " + i);
        return false;
    }

    public static boolean isCdma3GDualModeCard(int i) {
        if (i >= 0 && i < TelephonyManager.getDefault().getPhoneCount()) {
            MtkIccCardConstants.CardType cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(i);
            return cdmaCardType == MtkIccCardConstants.CardType.UIM_SIM_CARD || cdmaCardType == MtkIccCardConstants.CardType.CT_UIM_SIM_CARD;
        }
        logd("isCdma3GDualModeCard invalid phoneId = " + i);
        return false;
    }

    public static boolean isCdma4GDualModeCard(int i) {
        if (i >= 0 && i < TelephonyManager.getDefault().getPhoneCount()) {
            MtkIccCardConstants.CardType cdmaCardType = MtkTelephonyManagerEx.getDefault().getCdmaCardType(i);
            return cdmaCardType == MtkIccCardConstants.CardType.CT_4G_UICC_CARD || cdmaCardType == MtkIccCardConstants.CardType.NOT_CT_UICC_CARD;
        }
        logd("isCdma4GDualModeCard invalid phoneId = " + i);
        return false;
    }

    public static boolean isCdmaDualActivationSupport() {
        return SystemProperties.get(RIL_CDMA_DUALACT_SUPPORT).equals("1");
    }

    public static boolean isImsOrEmergencyApn(String[] strArr) {
        if (strArr == null) {
            loge("isImsOrEmergencyApn: apnTypes is null");
            return false;
        }
        if (strArr.length == 0) {
            return false;
        }
        for (String str : strArr) {
            if (!"ims".equals(str) && !"emergency".equals(str)) {
                return false;
            }
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isInCallStatusInternel() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            if (this.mIsCallingArray[i]) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isInSRVCC() {
        return this.mSrvccState == Call.SrvccState.COMPLETED;
    }

    public static boolean isPreferredDataPhone(Phone phone) {
        int preferredDataPhoneId = PhoneSwitcher.getInstance() != null ? PhoneSwitcher.getInstance().getPreferredDataPhoneId() : -1;
        int phoneId = phone.getPhoneId();
        if (preferredDataPhoneId == phoneId) {
            return true;
        }
        logd("Current phone is not preferred phone: curPhoneId = " + phoneId + ", preferredDataPhoneId = " + preferredDataPhoneId);
        return false;
    }

    protected static void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    protected static void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    protected static void logi(String str) {
        Rlog.i(LOG_TAG, str);
    }

    protected static void logv(String str) {
        Rlog.v(LOG_TAG, str);
    }

    public static MtkDcHelper makeMtkDcHelper(Context context, Phone[] phoneArr) {
        if (context == null || phoneArr == null) {
            throw new RuntimeException("param is null");
        }
        MtkDcHelper mtkDcHelper = sMtkDcHelper;
        if (mtkDcHelper == null) {
            logd("makeMtkDcHelper: phones.length=" + phoneArr.length);
            sMtkDcHelper = new MtkDcHelper(context, phoneArr);
        } else {
            mtkDcHelper.updatePhones(phoneArr);
        }
        logd("makesMtkDcHelper: X sMtkDcHelper =" + sMtkDcHelper);
        return sMtkDcHelper;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onVoiceCallEnded() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            logd("onVoiceCallEnded: mPhone[ " + i + "]");
            ((MtkDcTracker) this.mPhones[i].getDcTracker(1)).onVoiceCallEndedEx();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onVoiceCallStarted() {
        for (int i = 0; i < this.mPhoneNum; i++) {
            logd("onVoiceCallStarted: mPhone[ " + i + "]");
            ((MtkDcTracker) this.mPhones[i].getDcTracker(1)).onVoiceCallStartedEx();
        }
    }

    private void registerEvents() {
        logd("registerEvents");
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].mCi.registerForNotAvailable(this.mRspHandler, i + 10, (Object) null);
            this.mPhones[i].getCallTracker().registerForVoiceCallStarted(this.mRspHandler, i + 20, (Object) null);
            this.mPhones[i].getCallTracker().registerForVoiceCallEnded(this.mRspHandler, i + 30, (Object) null);
            this.mPhones[i].mCi.registerForDsdaStateChanged(this.mRspHandler, i + 50, null);
            this.mPhones[i].mCi.registerForCallAdditionalInfo(this.mRspHandler, i + 70, null);
        }
        new IntentFilter();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.PHONE_STATE");
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
        logd("registered phone change event.");
    }

    private boolean shouldAutoAttachForCall(int i) {
        ServiceState serviceState = this.mPhones[i].getServiceState();
        boolean z = (serviceState == null || i == PhoneSwitcher.getInstance().getPreferredDataPhoneId() || serviceState.getVoiceNetworkType() != 3) ? false : true;
        if (serviceState != null) {
            logd("shouldAutoAttachForCall=" + z + ", phoneId:" + i + ", getVoiceNetworkType=" + serviceState.getVoiceNetworkType());
        }
        return z;
    }

    private void unregisterEvents() {
        logd("unregisterEvents");
        for (int i = 0; i < this.mPhoneNum; i++) {
            this.mPhones[i].mCi.unregisterForNotAvailable(this.mRspHandler);
            this.mPhones[i].getCallTracker().unregisterForVoiceCallStarted(this.mRspHandler);
            this.mPhones[i].getCallTracker().unregisterForVoiceCallEnded(this.mRspHandler);
            this.mPhones[i].mCi.unregisterForDsdaStateChanged(this.mRspHandler);
        }
    }

    public void dispose() {
        logd("MtkDcHelper.dispose");
        unregisterEvents();
    }

    public int getDsdaMode() {
        return this.mDsdaMode;
    }

    public boolean hasMdAutoSetupImsCapability() {
        TelephonyDevController telephonyDevController = this.mTelDevController;
        if (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasMdAutoSetupImsCapability()) {
            logd("hasMdAutoSetupImsCapability: false");
            return false;
        }
        logd("hasMdAutoSetupImsCapability: true");
        return true;
    }

    public boolean isAllCallingStateIdle() {
        PhoneConstants.State[] stateArr = new PhoneConstants.State[this.mPhoneNum];
        boolean z = false;
        for (int i = 0; i < this.mPhoneNum; i++) {
            stateArr[i] = this.mPhones[i].getState();
            if (stateArr[i] == null || stateArr[i] != PhoneConstants.State.IDLE) {
                z = false;
                break;
            }
            z = true;
        }
        if (!z && VDBG) {
            for (int i2 = 0; i2 < this.mPhoneNum; i2++) {
                logd("isAllCallingStateIdle: state[" + i2 + "]=" + stateArr[i2] + " allCallingState = " + z);
            }
        }
        return z;
    }

    public boolean isDataAllowedForConcurrent(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            logd("isDataAllowedForConcurrent: invalid calling phone id");
            return false;
        }
        if (isAllCallingStateIdle() || isDataSupportConcurrent(i)) {
            return true;
        }
        return isWifiCallingEnabled() && !this.mPhones[i].isInEmergencyCall();
    }

    public boolean isDataSupportConcurrent(int i) {
        boolean zIsConcurrentVoiceAndDataAllowed;
        ArrayList arrayList = new ArrayList();
        for (int i2 = 0; i2 < this.mPhoneNum; i2++) {
            if (this.mPhones[i2].getState() != PhoneConstants.State.IDLE) {
                arrayList.add(Integer.valueOf(i2));
            }
        }
        if (arrayList.size() == 0) {
            logd("isDataSupportConcurrent: no calling phone!");
            return true;
        }
        if (i != ((Integer) arrayList.get(0)).intValue()) {
            if (this.mDsdaMode == 1) {
                logd("DSDA mode, support concurrent");
                return true;
            }
            MtkTelephonyManagerEx mtkTelephonyManagerEx = MtkTelephonyManagerEx.getDefault();
            if (mtkTelephonyManagerEx != null) {
                int iIntValue = ((Integer) arrayList.get(0)).intValue();
                boolean zIsDataAvailableForGwsdDualSim = mtkTelephonyManagerEx.isDataAvailableForGwsdDualSim(this.mGwsdDualSimStatusArray[iIntValue]);
                if (zIsDataAvailableForGwsdDualSim) {
                    logd("isDataAvailable: " + zIsDataAvailableForGwsdDualSim + ", phoneId: " + i + ", mGwsdDualSimStatusArray[" + iIntValue + "]:" + this.mGwsdDualSimStatusArray[iIntValue]);
                    return true;
                }
            }
            logd("isDataSupportConcurrent return false.");
            return false;
        }
        boolean z = false;
        MtkGsmCdmaCallTracker callTracker = this.mPhones[i].getCallTracker();
        Phone imsPhone = this.mPhones[i].getImsPhone();
        boolean zIsInEmergencyCall = imsPhone == null ? false : imsPhone.isInEmergencyCall();
        PhoneConstants.State state = PhoneConstants.State.IDLE;
        if (callTracker != null) {
            z = callTracker.getHandoverConnectionSize() != 0;
            state = callTracker.getState();
        }
        if (zIsInEmergencyCall || z || state != PhoneConstants.State.IDLE) {
            zIsConcurrentVoiceAndDataAllowed = this.mPhones[i].getServiceStateTracker().isConcurrentVoiceAndDataAllowed();
            if (shouldAutoAttachForCall(i)) {
                zIsConcurrentVoiceAndDataAllowed = true;
            }
        } else {
            zIsConcurrentVoiceAndDataAllowed = true;
        }
        logd("isDataSupportConcurrent: (voice/data on the same phone) isConcurrent = " + zIsConcurrentVoiceAndDataAllowed + ", phoneId = " + i + ", callingPhoneId = " + arrayList.get(0) + ", inPsEcc = " + zIsInEmergencyCall + ", inSrvcc = " + z + ", csCallState = " + state);
        return zIsConcurrentVoiceAndDataAllowed;
    }

    public boolean isMultiPsAttachSupport() {
        if (!this.mHasFetchMpsAttachSupport) {
            if ((SystemProperties.getInt(PROP_DATA_CONFIG, 0) & 1) == 1) {
                this.mMpsAttachSupport = true;
            }
            this.mHasFetchMpsAttachSupport = true;
        }
        return this.mMpsAttachSupport;
    }

    public boolean isOperatorMccMnc(Operator operator, int i) {
        String simOperatorNumericForPhone = TelephonyManager.getDefault().getSimOperatorNumericForPhone(i);
        boolean zContains = mOperatorMap.get(operator).contains(simOperatorNumericForPhone);
        logd("isOperatorMccMnc: mccmnc=" + simOperatorNumericForPhone + ", bMatched=" + zContains);
        return zContains;
    }

    public boolean isSimInserted(int i) {
        logd("isSimInserted:phoneId =" + i);
        String iccid = ((MtkDcTracker) this.mPhones[i].getDcTracker(1)).getIccid();
        return (TextUtils.isEmpty(iccid) || "N/A".equals(iccid)) ? false : true;
    }

    public boolean isSimMeLockAllowed(int i) {
        return MtkPhoneSwitcher.getInstance() == null || !MtkPhoneSwitcher.getInstance().getSimLockMode() || MtkPhoneSwitcher.getInstance().getPsAllowedByPhoneId(i);
    }

    public boolean isTestIccCard(int i) {
        String str = SystemProperties.get(PROPERTY_RIL_TEST_SIM[i], "");
        if (VDBG) {
            logd("isTestIccCard: phoneId id = " + i + ", iccType = " + str);
        }
        return str != null && str.equals("1");
    }

    public boolean isWifiCallingEnabled() {
        boolean zIsWifiCallingEnabled = false;
        IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
        if (iMtkTelephonyExAsInterface != null) {
            for (int i = 0; i < this.mPhoneNum; i++) {
                try {
                    if (SubscriptionManager.isValidPhoneId(i) && this.mIsCallingArray[i] && (zIsWifiCallingEnabled = iMtkTelephonyExAsInterface.isWifiCallingEnabled(this.mPhones[i].getSubId()))) {
                        logd("isWifiCallingEnabled phoneId: " + i);
                        break;
                    }
                } catch (RemoteException e) {
                    e.printStackTrace();
                }
            }
        }
        return zIsWifiCallingEnabled;
    }

    public void registerImsEvents(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            logd("registerImsEvents, invalid phoneId");
            return;
        }
        logd("registerImsEvents, phoneId = " + i);
        Phone imsPhone = this.mPhones[i].getImsPhone();
        if (imsPhone == null) {
            logd("Not register IMS phone calling state yet.");
            return;
        }
        MtkImsPhoneCallTracker callTracker = imsPhone.getCallTracker();
        callTracker.registerForVoiceCallStarted(this.mRspHandler, i + 20, null);
        callTracker.registerForVoiceCallEnded(this.mRspHandler, i + 30, null);
        callTracker.registerForCallsDisconnectedDuringSrvcc(this.mRspHandler, i + 40, null);
    }

    public void unregisterImsEvents(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            logd("unregisterImsEvents, invalid phoneId");
            return;
        }
        logd("unregisterImsEvents, phoneId = " + i);
        Phone imsPhone = this.mPhones[i].getImsPhone();
        if (imsPhone == null) {
            logd("Not unregister IMS phone calling state yet.");
            return;
        }
        MtkImsPhoneCallTracker callTracker = imsPhone.getCallTracker();
        callTracker.unregisterForVoiceCallStarted(this.mRspHandler);
        callTracker.unregisterForVoiceCallEnded(this.mRspHandler);
        callTracker.unregisterForCallsDisconnectedDuringSrvcc(this.mRspHandler);
    }

    public void updatePhones(Phone[] phoneArr) {
        logd("updatePhones: prev=" + this.mPhoneNum + ", current=" + phoneArr.length);
        if (this.mPhoneNum > phoneArr.length) {
            return;
        }
        int i = this.mPhoneNum;
        this.mPhones = phoneArr;
        int length = phoneArr.length;
        this.mPhoneNum = length;
        this.mGwsdDualSimStatusArray = new boolean[length];
        this.mIsCallingArray = new boolean[length];
        for (int i2 = 0; i2 < this.mPhoneNum; i2++) {
            this.mGwsdDualSimStatusArray[i2] = false;
            this.mIsCallingArray[i2] = false;
        }
        for (int i3 = i; i3 < this.mPhoneNum; i3++) {
            this.mPhones[i3].mCi.registerForNotAvailable(this.mRspHandler, i3 + 10, (Object) null);
            this.mPhones[i3].getCallTracker().registerForVoiceCallStarted(this.mRspHandler, i3 + 20, (Object) null);
            this.mPhones[i3].getCallTracker().registerForVoiceCallEnded(this.mRspHandler, i3 + 30, (Object) null);
            this.mPhones[i3].mCi.registerForDsdaStateChanged(this.mRspHandler, i3 + 50, null);
            this.mPhones[i3].mCi.registerForCallAdditionalInfo(this.mRspHandler, i3 + 70, null);
        }
    }
}
