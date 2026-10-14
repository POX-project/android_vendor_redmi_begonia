package com.mediatek.internal.telephony;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.Parcelable;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.telephony.RadioAccessFamily;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import com.android.internal.telecom.ITelecomService;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.ProxyController;
import com.android.internal.telephony.RadioCapability;
import com.mediatek.internal.telephony.devreg.DeviceRegisterController;
import com.mediatek.internal.telephony.phb.MtkUiccPhoneBookController;
import com.mediatek.internal.telephony.worldphone.WorldPhoneUtil;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimManager;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkProxyController extends ProxyController {
    private static final int C6M_1RILD = 2;
    private static final int C6M_3RILD = 1;
    private static final int EVENT_ON_REQUEST = 7;
    private static final int EVENT_RADIO_AVAILABLE = 6;
    private static final int G5M_1RILD = 0;
    private static final String PROPERTY_CAPABILITY_SWITCH = "persist.vendor.radio.simswitch";
    private static final String PROPERTY_CAPABILITY_SWITCH_STATE = "persist.vendor.radio.simswitchstate";
    private static final int RC_CANNOT_SWITCH = 2;
    private static final int RC_DO_SWITCH = 0;
    private static final int RC_NO_NEED_SWITCH = 1;
    private static final int RC_RETRY_CAUSE_AIRPLANE_MODE = 5;
    private static final int RC_RETRY_CAUSE_CAPABILITY_SWITCHING = 2;
    private static final int RC_RETRY_CAUSE_IN_CALL = 3;
    private static final int RC_RETRY_CAUSE_NONE = 0;
    private static final int RC_RETRY_CAUSE_RADIO_UNAVAILABLE = 4;
    private static final int RC_RETRY_CAUSE_RESULT_ERROR = 6;
    private static final int RC_RETRY_CAUSE_WORLD_MODE_SWITCHING = 1;
    private BroadcastReceiver mCallStateReceiver;
    private CommandsInterface[] mCi;
    RadioAccessFamily[] mCurrRafs;
    private DeviceRegisterController mDeviceRegisterController;
    private boolean mHasRegisterCallStateReceiver;
    private boolean mHasRegisterWorldModeReceiver;
    private boolean mIsCapSwitching;
    private Handler mMtkHandler;
    private MtkPhoneSubInfoControllerEx mMtkPhoneSubInfoControllerEx;
    protected MtkUiccPhoneBookController mMtkUiccPhoneBookController;
    private MtkUiccSmsController mMtkUiccSmsController;
    RadioAccessFamily[] mNextRafs;
    private IMtkProxyControllerExt mProxyControllerExt;
    private int mRildMode;
    private int mSetRafRetryCause;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    private BroadcastReceiver mWorldModeReceiver;
    private int onExceptionCount;

    public MtkProxyController(Context context) {
        super(context);
        this.mIsCapSwitching = false;
        this.mHasRegisterWorldModeReceiver = false;
        this.mHasRegisterCallStateReceiver = false;
        this.mNextRafs = null;
        this.mCurrRafs = null;
        this.onExceptionCount = 0;
        this.mTelephonyCustomizationFactory = null;
        this.mProxyControllerExt = null;
        this.mMtkHandler = new Handler() { // from class: com.mediatek.internal.telephony.MtkProxyController.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                MtkProxyController.this.mtkLogd("mtkHandleMessage msg.what=" + message.what);
                int i = message.what;
                if (i == 6) {
                    if (MtkProxyController.this.mRildMode == 2) {
                        return;
                    }
                    MtkProxyController.this.onRetryWhenRadioAvailable(message);
                } else {
                    if (i != 7) {
                        return;
                    }
                    MtkProxyController mtkProxyController = MtkProxyController.this;
                    mtkProxyController.onSetRadioCapabilityRequest(mtkProxyController.mCurrRafs);
                }
            }
        };
        this.mWorldModeReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkProxyController.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                MtkProxyController.this.mtkLogd("mWorldModeReceiver: action = " + action);
                if (!WorldPhoneUtil.isWorldModeSupport() && WorldPhoneUtil.isWorldPhoneSupport() && ModemSwitchHandler.ACTION_MODEM_SWITCH_DONE.equals(action) && MtkProxyController.this.mNextRafs != null && MtkProxyController.this.mSetRafRetryCause == 1) {
                    try {
                        if (MtkProxyController.this.setRadioCapability(MtkProxyController.this.mNextRafs)) {
                            return;
                        }
                        MtkProxyController.this.sendCapabilityFailBroadcast();
                    } catch (RuntimeException e) {
                        MtkProxyController.this.sendCapabilityFailBroadcast();
                    }
                }
            }
        };
        this.mCallStateReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.MtkProxyController.3
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                MtkProxyController.this.mtkLogd("mCallStateReceiver: action = " + action);
                if (TelephonyManager.getDefault().getCallState() != 0 || MtkProxyController.this.isEccInProgress() || MtkProxyController.this.mNextRafs == null || MtkProxyController.this.mSetRafRetryCause != 3) {
                    return;
                }
                MtkProxyController.this.unRegisterCallStateReceiver();
                try {
                    if (MtkProxyController.this.setRadioCapability(MtkProxyController.this.mNextRafs)) {
                        return;
                    }
                    MtkProxyController.this.sendCapabilityFailBroadcast();
                } catch (RuntimeException e) {
                    MtkProxyController.this.sendCapabilityFailBroadcast();
                }
            }
        };
        this.mCi = PhoneFactory.getCommandsInterfaces();
        String str = SystemProperties.get("ro.vendor.mtk_ril_mode", "c6m_1rild");
        if (str.equals("c6m_1rild")) {
            this.mRildMode = 2;
        } else if (str.equals("c6m_3rild")) {
            this.mRildMode = 1;
        } else {
            this.mRildMode = 0;
        }
        mtkLogd("Constructor - Enter, rild mode = " + this.mRildMode);
        this.mMtkUiccPhoneBookController = new MtkUiccPhoneBookController();
        this.mMtkPhoneSubInfoControllerEx = new MtkPhoneSubInfoControllerEx(this.mContext, this.mPhones);
        this.mMtkUiccSmsController = new MtkUiccSmsController();
        mtkLogd("Constructor - Exit");
        this.mDeviceRegisterController = new DeviceRegisterController(this.mContext, this.mPhones, this.mMtkUiccSmsController);
        if (this.mRildMode != 2) {
            try {
                OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(context);
                this.mTelephonyCustomizationFactory = opFactory;
                this.mProxyControllerExt = opFactory.makeMtkProxyControllerExt(context);
            } catch (Exception e) {
                mtkLogd("mProxyControllerExt init fail");
                e.printStackTrace();
            }
        }
    }

    private int checkRadioCapabilitySwitchConditions(RadioAccessFamily[] radioAccessFamilyArr) {
        synchronized (this) {
            this.mNextRafs = radioAccessFamilyArr;
            if (this.mIsCapSwitching) {
                mtkLogd("keep it and return,because capability swithing");
                this.mSetRafRetryCause = 2;
                return 1;
            }
            if (this.mSetRafRetryCause == 2) {
                mtkLogd("setCapability, mIsCapSwitching is not switching, can switch");
                this.mSetRafRetryCause = 0;
            }
            this.mIsCapSwitching = true;
            if (SystemProperties.getBoolean("ro.vendor.mtk_disable_cap_switch", false)) {
                this.mNextRafs = null;
                completeRadioCapabilityTransaction();
                mtkLogd("skip switching because mtk_disable_cap_switch is true");
                return 1;
            }
            if (SystemProperties.getInt("vendor.gsm.gcf.testmode", 0) == 2) {
                this.mNextRafs = null;
                completeRadioCapabilityTransaction();
                mtkLogd("skip switching because FTA mode");
                return 1;
            }
            if (SystemProperties.getInt("persist.vendor.radio.simswitch.emmode", 1) == 0) {
                this.mNextRafs = null;
                completeRadioCapabilityTransaction();
                mtkLogd("skip switching because EM disable mode");
                return 1;
            }
            if (WorldPhoneUtil.isWorldPhoneSupport()) {
                if (WorldPhoneUtil.isWorldModeSupport()) {
                    if (this.mSetRafRetryCause == 1 && this.mHasRegisterWorldModeReceiver) {
                        unRegisterWorldModeReceiver();
                        this.mSetRafRetryCause = 0;
                    }
                } else if (ModemSwitchHandler.isModemTypeSwitching()) {
                    logd("world mode switching.");
                    if (!this.mHasRegisterWorldModeReceiver) {
                        registerWorldModeReceiverFor90Modem();
                    }
                    this.mSetRafRetryCause = 1;
                    synchronized (this) {
                        this.mIsCapSwitching = false;
                    }
                    return 2;
                }
            }
            if (TelephonyManager.getDefault().getCallState() != 0 || isEccInProgress()) {
                mtkLogd("setCapability in calling, fail to set RAT for phones");
                if (!this.mHasRegisterCallStateReceiver) {
                    registerCallStateReceiver();
                }
                this.mSetRafRetryCause = 3;
                synchronized (this) {
                    this.mIsCapSwitching = false;
                }
                return 2;
            }
            if (this.mSetRafRetryCause == 3 && this.mHasRegisterCallStateReceiver) {
                unRegisterCallStateReceiver();
                this.mSetRafRetryCause = 0;
            }
            for (int i = 0; i < this.mPhones.length; i++) {
                if (!this.mPhones[i].isRadioAvailable()) {
                    this.mSetRafRetryCause = 4;
                    this.mCi[i].registerForAvailable(this.mMtkHandler, 6, (Object) null);
                    mtkLogd("setCapability fail,Phone" + i + " is not available");
                    synchronized (this) {
                        this.mIsCapSwitching = false;
                    }
                    return 2;
                }
                if (this.mSetRafRetryCause == 4) {
                    this.mCi[i].unregisterForAvailable(this.mMtkHandler);
                    if (i == this.mPhones.length - 1) {
                        this.mSetRafRetryCause = 0;
                    }
                }
            }
            int iIntValue = Integer.valueOf(SystemProperties.get("persist.vendor.radio.simswitch", "1")).intValue();
            int i2 = 0;
            boolean z = true;
            boolean z2 = false;
            for (int i3 = 0; i3 < radioAccessFamilyArr.length; i3++) {
                if ((radioAccessFamilyArr[i3].getRadioAccessFamily() & 1) > 0) {
                    int phoneId = radioAccessFamilyArr[i3].getPhoneId();
                    if (phoneId == iIntValue - 1) {
                        this.mSetRafRetryCause = 0;
                        synchronized (this) {
                            if (this.mNextRafs == null || phoneId != this.mNextRafs[phoneId].getPhoneId()) {
                                mtkLogd("no change, skip setRadioCapability and trigger next");
                            } else {
                                this.mNextRafs = null;
                                mtkLogd("no change, skip setRadioCapability");
                            }
                        }
                        completeRadioCapabilityTransaction();
                        return 1;
                    }
                    if (z2) {
                        mtkLogd("set more than one 3G phone, fail");
                        synchronized (this) {
                            this.mIsCapSwitching = false;
                        }
                        throw new RuntimeException("input parameter is incorrect");
                    }
                    z2 = true;
                    i2 = phoneId;
                }
                if (this.mPhones[i3].getRadioAccessFamily() != radioAccessFamilyArr[i3].getRadioAccessFamily()) {
                    z = false;
                }
            }
            if (z) {
                mtkLogd("setRadioCapability: Already in requested configuration, nothing to do.");
                synchronized (this) {
                    this.mIsCapSwitching = false;
                }
                return 1;
            }
            if (!z2) {
                synchronized (this) {
                    this.mIsCapSwitching = false;
                }
                throw new RuntimeException("input parameter is incorrect - no 3g phone");
            }
            if (SystemProperties.getInt("ro.vendor.mtk_external_sim_support", 0) == 1) {
                for (int i4 = 0; i4 < this.mPhones.length; i4++) {
                    TelephonyManager.getDefault();
                    String telephonyProperty = TelephonyManager.getTelephonyProperty(i4, "vendor.gsm.external.sim.enabled", "0");
                    TelephonyManager.getDefault();
                    String telephonyProperty2 = TelephonyManager.getTelephonyProperty(i4, "vendor.gsm.external.sim.inserted", "0");
                    int phoneId2 = MtkSubscriptionController.getMtkInstance().getPhoneId(MtkSubscriptionController.getMtkInstance().getDefaultDataSubId());
                    if ("1".equals(telephonyProperty) && (("0".equals(telephonyProperty2) || "".equals(telephonyProperty2)) && i2 != phoneId2)) {
                        synchronized (this) {
                            this.mIsCapSwitching = false;
                        }
                        return 1;
                    }
                }
                int mainCapabilityPhoneId = RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
                TelephonyManager.getDefault();
                String telephonyProperty3 = TelephonyManager.getTelephonyProperty(mainCapabilityPhoneId, "vendor.gsm.external.sim.enabled", "0");
                TelephonyManager.getDefault();
                String telephonyProperty4 = TelephonyManager.getTelephonyProperty(mainCapabilityPhoneId, "vendor.gsm.external.sim.inserted", "0");
                int preferedRsimSlot = ExternalSimManager.getPreferedRsimSlot();
                if ((telephonyProperty3.equals("1") && telephonyProperty4.equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN)) || (preferedRsimSlot != -1 && i2 != preferedRsimSlot)) {
                    synchronized (this) {
                        this.mIsCapSwitching = false;
                    }
                    return 1;
                }
                if (SystemProperties.getInt("ro.vendor.mtk_non_dsda_rsim_support", 0) == 1 && preferedRsimSlot != -1 && preferedRsimSlot == i2) {
                    return 0;
                }
            }
            if (this.mProxyControllerExt.isNeedSimSwitch(i2, this.mPhones.length)) {
                if (!WorldPhoneUtil.isWorldModeSupport() && WorldPhoneUtil.isWorldPhoneSupport()) {
                    WorldPhoneUtil.getWorldPhone().notifyRadioCapabilityChange(i2);
                }
                mtkLogd("checkRadioCapabilitySwitchConditions, do switch");
                return 0;
            }
            logd("check sim card type and skip setRadioCapability");
            this.mSetRafRetryCause = 0;
            this.mNextRafs = null;
            completeRadioCapabilityTransaction();
            return 1;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isEccInProgress() {
        String str = SystemProperties.get("ril.cdma.inecmmode", "");
        boolean zContains = str.contains("true");
        boolean zIsInEmergencyCall = false;
        ITelecomService iTelecomServiceAsInterface = ITelecomService.Stub.asInterface(ServiceManager.getService("telecom"));
        if (iTelecomServiceAsInterface != null) {
            try {
                zIsInEmergencyCall = iTelecomServiceAsInterface.isInEmergencyCall();
            } catch (RemoteException e) {
                loge("Exception of isEccInProgress");
            }
        }
        logd("isEccInProgress, value:" + str + ", inEcm:" + zContains + ", isInEcc:" + zIsInEmergencyCall);
        return zContains || zIsInEmergencyCall;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onRetryWhenRadioAvailable(Message message) {
        mtkLogd("onRetryWhenRadioAvailable,mSetRafRetryCause:" + this.mSetRafRetryCause);
        for (int i = 0; i < this.mPhones.length; i++) {
            if (RadioManager.isModemPowerOff(i)) {
                mtkLogd("onRetryWhenRadioAvailable, Phone" + i + " modem off");
                return;
            }
        }
        RadioAccessFamily[] radioAccessFamilyArr = this.mNextRafs;
        if (radioAccessFamilyArr == null || this.mSetRafRetryCause != 4) {
            return;
        }
        try {
            setRadioCapability(radioAccessFamilyArr);
        } catch (RuntimeException e) {
            e.printStackTrace();
        }
    }

    private void registerCallStateReceiver() {
        if (this.mContext == null) {
            mtkLogd("registerCallStateReceiver, context is null => return");
            return;
        }
        IntentFilter intentFilter = new IntentFilter("android.intent.action.PHONE_STATE");
        intentFilter.addAction("android.intent.action.EMERGENCY_CALLBACK_MODE_CHANGED");
        this.mContext.registerReceiver(this.mCallStateReceiver, intentFilter);
        this.mHasRegisterCallStateReceiver = true;
    }

    private void registerWorldModeReceiverFor90Modem() {
        if (this.mContext == null) {
            logd("registerWorldModeReceiverFor90Modem, context is null => return");
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ModemSwitchHandler.ACTION_MODEM_SWITCH_DONE);
        this.mContext.registerReceiver(this.mWorldModeReceiver, intentFilter);
        this.mHasRegisterWorldModeReceiver = true;
    }

    private void resetSimSwitchState() {
        if (isCapabilitySwitching()) {
            this.mHandler.removeMessages(5);
        }
        if (this.mRildMode == 2) {
            clearTransaction();
            return;
        }
        synchronized (this) {
            this.mIsCapSwitching = false;
        }
        clearTransaction();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCapabilityFailBroadcast() {
        if (this.mContext != null) {
            this.mContext.sendBroadcastAsUser(new Intent("android.intent.action.ACTION_SET_RADIO_CAPABILITY_FAILED"), UserHandle.ALL);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unRegisterCallStateReceiver() {
        if (this.mContext == null) {
            mtkLogd("unRegisterCallStateReceiver, context is null => return");
        } else {
            this.mContext.unregisterReceiver(this.mCallStateReceiver);
            this.mHasRegisterCallStateReceiver = false;
        }
    }

    private void unRegisterWorldModeReceiver() {
        if (this.mContext == null) {
            mtkLogd("unRegisterWorldModeReceiver, context is null => return");
        } else {
            this.mContext.unregisterReceiver(this.mWorldModeReceiver);
            this.mHasRegisterWorldModeReceiver = false;
        }
    }

    protected void completeRadioCapabilityTransaction() {
        Intent intent;
        StringBuilder sb = new StringBuilder();
        sb.append("onFinishRadioCapabilityResponse: success=");
        sb.append(!this.mTransactionFailed);
        mtkLogd(sb.toString());
        SystemProperties.set(PROPERTY_CAPABILITY_SWITCH_STATE, "-1");
        if (this.mTransactionFailed) {
            intent = new Intent("android.intent.action.ACTION_SET_RADIO_CAPABILITY_FAILED");
            this.mTransactionFailed = false;
            resetSimSwitchState();
        } else {
            ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
            for (int i = 0; i < this.mPhones.length; i++) {
                int radioAccessFamily = this.mPhones[i].getRadioAccessFamily();
                mtkLogd("radioAccessFamily[" + i + "]=" + radioAccessFamily);
                arrayList.add(new RadioAccessFamily(i, radioAccessFamily));
            }
            intent = new Intent("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
            intent.putParcelableArrayListExtra("rafs", arrayList);
            this.mRadioCapabilitySessionId = this.mUniqueIdGenerator.getAndIncrement();
            resetSimSwitchState();
        }
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL, "android.permission.READ_PHONE_STATE");
        if (this.mNextRafs != null) {
            int i2 = this.mSetRafRetryCause;
            if (i2 == 2 || i2 == 6 || this.mRildMode == 2) {
                mtkLogd("has next request, trigger it, cause = " + this.mSetRafRetryCause);
                try {
                    if (setRadioCapability(this.mNextRafs)) {
                        this.mSetRafRetryCause = 0;
                        this.mNextRafs = null;
                    } else {
                        sendCapabilityFailBroadcast();
                    }
                } catch (RuntimeException e) {
                    sendCapabilityFailBroadcast();
                }
            }
        }
    }

    protected boolean doSetRadioCapabilities(RadioAccessFamily[] radioAccessFamilyArr) {
        if (this.mRildMode == 2) {
            return super.doSetRadioCapabilities(radioAccessFamilyArr);
        }
        synchronized (this) {
            this.mIsCapSwitching = true;
        }
        this.onExceptionCount = 0;
        return super.doSetRadioCapabilities(radioAccessFamilyArr);
    }

    public void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        try {
            this.mPhoneSwitcher.dump(fileDescriptor, printWriter, strArr);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public DeviceRegisterController getDeviceRegisterController() {
        return this.mDeviceRegisterController;
    }

    public int getMaxRafSupported() {
        int[] iArr = new int[this.mPhones.length];
        int radioAccessFamily = 0;
        if (this.mRildMode == 2) {
            return super.getMaxRafSupported();
        }
        for (int i = 0; i < this.mPhones.length; i++) {
            if ((this.mPhones[i].getRadioAccessFamily() & 1) == 1) {
                radioAccessFamily = this.mPhones[i].getRadioAccessFamily();
            }
        }
        mtkLogd("getMaxRafSupported: maxRafBit=0 maxRaf=" + radioAccessFamily + " flag=" + (radioAccessFamily & 1));
        return radioAccessFamily == 0 ? radioAccessFamily | 1 : radioAccessFamily;
    }

    public int getMinRafSupported() {
        int[] iArr = new int[this.mPhones.length];
        int radioAccessFamily = 0;
        if (this.mRildMode == 2) {
            return super.getMinRafSupported();
        }
        for (int i = 0; i < this.mPhones.length; i++) {
            if ((this.mPhones[i].getRadioAccessFamily() & 1) == 0) {
                radioAccessFamily = this.mPhones[i].getRadioAccessFamily();
            }
        }
        mtkLogd("getMinRafSupported: minRafBit=0 minRaf=" + radioAccessFamily + " flag=" + (radioAccessFamily & 1));
        return radioAccessFamily;
    }

    public boolean isCapabilitySwitching() {
        boolean z;
        int i;
        if (this.mRildMode != 2) {
            synchronized (this) {
                z = this.mIsCapSwitching;
            }
            return z;
        }
        synchronized (this.mSetRadioAccessFamilyStatus) {
            while (i < this.mPhones.length) {
                i = (this.mSetRadioAccessFamilyStatus[i] == 2 || this.mSetRadioAccessFamilyStatus[i] == 3 || this.mSetRadioAccessFamilyStatus[i] == 4) ? 0 : i + 1;
                mtkLogd("isCapabilitySwitching: Phone[" + i + "] status is " + this.mSetRadioAccessFamilyStatus[i]);
                return true;
            }
            return false;
        }
    }

    protected void issueFinish(int i) {
        if (this.mRildMode == 2) {
            super.issueFinish(i);
            return;
        }
        synchronized (this.mSetRadioAccessFamilyStatus) {
            resetRadioAccessFamilyStatusCounter();
            for (int i2 = 0; i2 < this.mPhones.length; i2++) {
                mtkLogd("issueFinish: phoneId=" + i2 + " sessionId=" + i + " mTransactionFailed=" + this.mTransactionFailed);
                sendRadioCapabilityRequest(i2, i, 4, this.mOldRadioAccessFamily[i2], this.mCurrentLogicalModemIds[i2], this.mTransactionFailed ? 2 : 1, 4);
                if (this.mTransactionFailed) {
                    mtkLogd("issueFinish: phoneId: " + i2 + " status: FAIL");
                    this.mSetRadioAccessFamilyStatus[i2] = 5;
                }
            }
        }
    }

    protected void mtkLogd(String str) {
        Rlog.d("MtkProxyController", str);
    }

    protected void mtkLoge(String str) {
        Rlog.e("MtkProxyController", str);
    }

    protected void onApplyExceptionHandler(Message message) {
        if (this.mRildMode == 2) {
            super.onApplyExceptionHandler(message);
            return;
        }
        RadioCapability radioCapability = (RadioCapability) ((AsyncResult) message.obj).result;
        AsyncResult asyncResult = (AsyncResult) message.obj;
        int phoneId = radioCapability.getPhoneId();
        if ((asyncResult.exception instanceof CommandException ? asyncResult.exception.getCommandError() : null) == CommandException.Error.RADIO_NOT_AVAILABLE) {
            this.mSetRafRetryCause = 4;
            this.mCi[phoneId].registerForAvailable(this.mMtkHandler, 6, (Object) null);
            mtkLoge("onApplyRadioCapabilityResponse: Retry later due to modem off");
        } else {
            mtkLoge("onApplyRadioCapabilityResponse: exception=" + asyncResult.exception);
        }
    }

    protected void onApplyRadioCapabilityErrorHandler(Message message) {
        if (this.mRildMode == 2) {
            this.mRadioCapabilitySessionId = this.mUniqueIdGenerator.getAndIncrement();
            sendCapabilityFailBroadcast();
            resetSimSwitchState();
            return;
        }
        RadioCapability radioCapability = (RadioCapability) ((AsyncResult) message.obj).result;
        AsyncResult asyncResult = (AsyncResult) message.obj;
        if (radioCapability == null && asyncResult.exception != null && this.onExceptionCount == 0) {
            this.onExceptionCount = 1;
            if ((asyncResult.exception instanceof CommandException ? asyncResult.exception.getCommandError() : null) == CommandException.Error.RADIO_NOT_AVAILABLE) {
                this.mSetRafRetryCause = 4;
                for (int i = 0; i < this.mPhones.length; i++) {
                    this.mCi[i].registerForAvailable(this.mMtkHandler, 6, (Object) null);
                }
                mtkLoge("onApplyRadioCapabilityResponse: Retry due to RADIO_NOT_AVAILABLE");
            } else {
                mtkLoge("onApplyRadioCapabilityResponse: exception=" + asyncResult.exception);
            }
            this.mRadioCapabilitySessionId = this.mUniqueIdGenerator.getAndIncrement();
            sendCapabilityFailBroadcast();
            resetSimSwitchState();
        }
    }

    protected void onFinishRadioCapabilityResponse(Message message) {
        RadioCapability radioCapability = (RadioCapability) ((AsyncResult) message.obj).result;
        if ((radioCapability == null || radioCapability.getSession() != this.mRadioCapabilitySessionId) && radioCapability == null && ((AsyncResult) message.obj).exception != null) {
            synchronized (this.mSetRadioAccessFamilyStatus) {
                mtkLogd("onFinishRadioCapabilityResponse C2K mRadioAccessFamilyStatusCounter=" + this.mRadioAccessFamilyStatusCounter);
                this.mRadioAccessFamilyStatusCounter = this.mRadioAccessFamilyStatusCounter - 1;
                if (this.mRadioAccessFamilyStatusCounter == 0) {
                    completeRadioCapabilityTransaction();
                }
            }
            return;
        }
        if (this.mRildMode == 2) {
            super.onFinishRadioCapabilityResponse(message);
            return;
        }
        int i = SystemProperties.getInt(PROPERTY_CAPABILITY_SWITCH_STATE, -1);
        if (i >= 0 && i < this.mPhones.length && this.mRadioAccessFamilyStatusCounter == 1) {
            int radioAccessFamily = this.mPhones[i].getRadioAccessFamily();
            if ((radioAccessFamily & 1) == 0) {
                mtkLogd("onFinishRadioCapabilityResponse, main phone raf[" + i + "]=" + radioAccessFamily);
                this.mSetRafRetryCause = 6;
            }
        }
        super.onFinishRadioCapabilityResponse(message);
    }

    protected void onNotificationRadioCapabilityChanged(Message message) {
        RadioCapability radioCapability = (RadioCapability) ((AsyncResult) message.obj).result;
        if (radioCapability == null) {
            logd("onNotificationRadioCapabilityChanged: rc == null");
            return;
        }
        logd("onNotificationRadioCapabilityChanged: rc=" + radioCapability);
        int phoneId = radioCapability.getPhoneId();
        if (((AsyncResult) message.obj).exception == null) {
            logd("onNotificationRadioCapabilityChanged: update phone capability");
            this.mPhones[phoneId].radioCapabilityUpdated(radioCapability);
        }
        super.onNotificationRadioCapabilityChanged(message);
    }

    public boolean onSetRadioCapabilityRequest(RadioAccessFamily[] radioAccessFamilyArr) {
        if (this.mRildMode == 2) {
            boolean radioCapability = super.setRadioCapability(radioAccessFamilyArr);
            if (!radioCapability) {
                this.mNextRafs = radioAccessFamilyArr;
            }
            return radioCapability;
        }
        if (radioAccessFamilyArr.length != this.mPhones.length) {
            throw new RuntimeException("Length of input rafs must equal to total phone count");
        }
        for (int i = 0; i < radioAccessFamilyArr.length; i++) {
            if ((radioAccessFamilyArr[i].getRadioAccessFamily() & 1) > 0) {
                SystemProperties.set(PROPERTY_CAPABILITY_SWITCH_STATE, String.valueOf(i));
                break;
            }
        }
        if (checkRadioCapabilitySwitchConditions(radioAccessFamilyArr) == 0) {
            return super.setRadioCapability(radioAccessFamilyArr);
        }
        return true;
    }

    protected void onStartRadioCapabilityResponse(Message message) {
        synchronized (this.mSetRadioAccessFamilyStatus) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            boolean z = true;
            if (asyncResult.exception != null) {
                if (this.onExceptionCount == 0 && this.mRildMode != 2) {
                    this.onExceptionCount = 1;
                    if ((asyncResult.exception instanceof CommandException ? asyncResult.exception.getCommandError() : null) == CommandException.Error.RADIO_NOT_AVAILABLE) {
                        this.mSetRafRetryCause = 4;
                        for (int i = 0; i < this.mPhones.length; i++) {
                            this.mCi[i].registerForAvailable(this.mMtkHandler, 6, (Object) null);
                        }
                        mtkLoge("onStartRadioCapabilityResponse: Retry later due to modem off");
                    }
                }
                mtkLogd("onStartRadioCapabilityResponse got exception=" + asyncResult.exception);
                this.mRadioCapabilitySessionId = this.mUniqueIdGenerator.getAndIncrement();
                sendCapabilityFailBroadcast();
                resetSimSwitchState();
                return;
            }
            RadioCapability radioCapability = (RadioCapability) ((AsyncResult) message.obj).result;
            if (radioCapability != null && radioCapability.getSession() == this.mRadioCapabilitySessionId) {
                this.mRadioAccessFamilyStatusCounter--;
                int phoneId = radioCapability.getPhoneId();
                if (((AsyncResult) message.obj).exception != null) {
                    mtkLogd("onStartRadioCapabilityResponse: Error response session=" + radioCapability.getSession());
                    mtkLogd("onStartRadioCapabilityResponse: phoneId=" + phoneId + " status=FAIL");
                    this.mSetRadioAccessFamilyStatus[phoneId] = 5;
                    this.mTransactionFailed = true;
                } else {
                    mtkLogd("onStartRadioCapabilityResponse: phoneId=" + phoneId + " status=STARTED");
                    this.mSetRadioAccessFamilyStatus[phoneId] = 2;
                }
                if (this.mRadioAccessFamilyStatusCounter == 0) {
                    StringBuilder sb = new StringBuilder();
                    sb.append("onStartRadioCapabilityResponse: success=");
                    if (this.mTransactionFailed) {
                        z = false;
                    }
                    sb.append(z);
                    mtkLogd(sb.toString());
                    if (this.mTransactionFailed) {
                        issueFinish(this.mRadioCapabilitySessionId);
                    } else {
                        resetRadioAccessFamilyStatusCounter();
                        for (int i2 = 0; i2 < this.mPhones.length; i2++) {
                            sendRadioCapabilityRequest(i2, this.mRadioCapabilitySessionId, 2, this.mNewRadioAccessFamily[i2], this.mNewLogicalModemIds[i2], 0, 3);
                            mtkLogd("onStartRadioCapabilityResponse: phoneId=" + i2 + " status=APPLYING");
                            this.mSetRadioAccessFamilyStatus[i2] = 3;
                        }
                    }
                }
                return;
            }
            mtkLogd("onStartRadioCapabilityResponse: Ignore session=" + this.mRadioCapabilitySessionId + " rc=" + radioCapability);
        }
    }

    protected void onTimeoutRadioCapability(Message message) {
        this.mHandler.sendMessageDelayed(this.mHandler.obtainMessage(5, this.mRadioCapabilitySessionId, 0), 45000L);
    }

    protected void sendRadioCapabilityRequest(int i, int i2, int i3, int i4, String str, int i5, int i6) {
        if (this.mRildMode == 2) {
            super.sendRadioCapabilityRequest(i, i2, i3, i4, str, i5, i6);
            return;
        }
        if (str == null || str.equals("")) {
            str = "modem_sys3";
        }
        super.sendRadioCapabilityRequest(i, i2, i3, i4, str, i5, i6);
    }

    public boolean setRadioCapability(RadioAccessFamily[] radioAccessFamilyArr) {
        if (SystemProperties.getBoolean("ro.vendor.mtk_disable_cap_switch", false)) {
            completeRadioCapabilityTransaction();
            mtkLogd("skip switching because mtk_disable_cap_switch is true");
        } else {
            Message messageObtainMessage = this.mMtkHandler.obtainMessage(7);
            this.mCurrRafs = radioAccessFamilyArr;
            this.mMtkHandler.sendMessage(messageObtainMessage);
        }
        return true;
    }
}
