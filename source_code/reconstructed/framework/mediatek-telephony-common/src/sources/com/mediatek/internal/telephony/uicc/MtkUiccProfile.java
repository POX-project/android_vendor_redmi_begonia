package com.mediatek.internal.telephony.uicc;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.text.TextUtils;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.IccCardConstants;
import com.android.internal.telephony.MccTable;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.RegistrantList;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.IccCardStatus;
import com.android.internal.telephony.uicc.UiccCard;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UiccProfile;

/* JADX INFO: loaded from: classes.dex */
public class MtkUiccProfile extends UiccProfile {
    protected static final int EVENT_BASE_ID = 100;
    private static final int EVENT_GET_ATR_DONE = 102;
    private static final int EVENT_ICC_FDN_CHANGED = 104;
    private static final int EVENT_OPEN_CHANNEL_WITH_SW_DONE = 103;
    private static final int EVENT_SIM_IO_EX_DONE = 101;
    private static final String ICCID_STRING_FOR_NO_SIM = "N/A";
    private RegistrantList mFdnChangedRegistrants;
    private int mLastAppType;
    public final Handler mMtkHandler;
    private IccCardApplicationStatus.PersoSubState mNetworkLockState;
    static final String[] UICCCARD_PROPERTY_RIL_UICC_TYPE = {"vendor.gsm.ril.uicctype", "vendor.gsm.ril.uicctype.2", "vendor.gsm.ril.uicctype.3", "vendor.gsm.ril.uicctype.4"};
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.uicc.MtkUiccProfile$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {
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
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NETWORK_PUK.ordinal()] = 6;
            } catch (NoSuchFieldError e6) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NETWORK_SUBSET_PUK.ordinal()] = 7;
            } catch (NoSuchFieldError e7) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_CORPORATE_PUK.ordinal()] = 8;
            } catch (NoSuchFieldError e8) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SERVICE_PROVIDER_PUK.ordinal()] = 9;
            } catch (NoSuchFieldError e9) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM_PUK.ordinal()] = 10;
            } catch (NoSuchFieldError e10) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NS_SP.ordinal()] = 11;
            } catch (NoSuchFieldError e11) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_NS_SP_PUK.ordinal()] = 12;
            } catch (NoSuchFieldError e12) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM_C.ordinal()] = 13;
            } catch (NoSuchFieldError e13) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_SIM_SIM_C_PUK.ordinal()] = 14;
            } catch (NoSuchFieldError e14) {
            }
        }
    }

    public MtkUiccProfile(Context context, CommandsInterface commandsInterface, IccCardStatus iccCardStatus, int i, UiccCard uiccCard, Object obj) {
        super(context, commandsInterface, iccCardStatus, i, uiccCard, obj);
        this.mFdnChangedRegistrants = new RegistrantList();
        this.mNetworkLockState = IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_UNKNOWN;
        this.mLastAppType = 1;
        this.mMtkHandler = new Handler() { // from class: com.mediatek.internal.telephony.uicc.MtkUiccProfile.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (MtkUiccProfile.this.mDisposed) {
                    MtkUiccProfile.this.loge("handleMessage: Received " + message.what + " after dispose(); ignoring the message");
                    return;
                }
                MtkUiccProfile.this.log("mHandlerEx Received message " + message + "[" + message.what + "]");
                switch (message.what) {
                    case 101:
                    case 102:
                    case 103:
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        if (asyncResult.exception != null) {
                            MtkUiccProfile.this.loge("Error in SIM access with exception" + asyncResult.exception);
                        }
                        AsyncResult.forMessage((Message) asyncResult.userObj, asyncResult.result, asyncResult.exception);
                        ((Message) asyncResult.userObj).sendToTarget();
                        return;
                    case MtkUiccProfile.EVENT_ICC_FDN_CHANGED /* 104 */:
                        synchronized (MtkUiccProfile.this.mLock) {
                            MtkUiccProfile.this.mFdnChangedRegistrants.notifyRegistrants();
                            break;
                        }
                        return;
                    default:
                        MtkUiccProfile.this.mHandler.handleMessage(message);
                        return;
                }
            }
        };
        log("MtkUiccProfile Creating");
    }

    protected Exception covertException(String str) {
        log("Fail to " + str + ", hasIccCard = " + hasIccCard());
        return CommandException.fromRilErrno(1);
    }

    public String[] getFullIccCardType() {
        return SystemProperties.get(PROPERTY_RIL_FULL_UICC_TYPE[getPhoneId()]).split(",");
    }

    public String getIccCardType() {
        return SystemProperties.get(UICCCARD_PROPERTY_RIL_UICC_TYPE[getPhoneId()]);
    }

    protected String getIccStateReason(IccCardConstants.State state) {
        log("getIccStateReason E");
        if (IccCardConstants.State.NETWORK_LOCKED != state || this.mUiccApplication == null) {
            return super.getIccStateReason(state);
        }
        switch (AnonymousClass2.$SwitchMap$com$android$internal$telephony$uicc$IccCardApplicationStatus$PersoSubState[this.mUiccApplication.getPersoSubState().ordinal()]) {
            case 1:
                return "NETWORK";
            case 2:
                return "NETWORK_SUBSET";
            case 3:
                return "CORPORATE";
            case 4:
                return "SERVICE_PROVIDER";
            case 5:
                return "SIM";
            case 6:
                return "NETWORK_PUK";
            case 7:
                return "NETWORK_SUBSET_PUK";
            case 8:
                return "CORPORATE_PUK";
            case 9:
                return "SERVICE_PROVIDER_PUK";
            case 10:
                return "SIM_PUK";
            case 11:
                return "NS_SP";
            case 12:
                return "NS_SP_PUK";
            case 13:
                return "SIM_C";
            case 14:
                return "SIM_C_PUK";
            default:
                return null;
        }
    }

    public IccCardApplicationStatus.PersoSubState getNetworkPersoType() {
        log("getNetworkPersoType E");
        synchronized (this.mLock) {
            if (this.mUiccApplication != null) {
                return this.mUiccApplication.getPersoSubState();
            }
            return IccCardApplicationStatus.PersoSubState.PERSOSUBSTATE_UNKNOWN;
        }
    }

    protected String getSubscriptionDisplayName(int i, Context context) {
        String simOperatorNumeric = this.mTelephonyManager.getSimOperatorNumeric(i);
        String strLookupOperatorNameForDisplayName = MtkSpnOverride.getInstance().lookupOperatorNameForDisplayName(i, simOperatorNumeric, true, context);
        String simOperatorName = this.mTelephonyManager.getSimOperatorName(i);
        log("getSubscriptionDisplayName- simNumeric: " + simOperatorNumeric + ", simMvnoName: " + strLookupOperatorNameForDisplayName + ", simCarrierName: " + simOperatorName);
        if (getState() == IccCardConstants.State.LOADED) {
            return (TextUtils.isEmpty(strLookupOperatorNameForDisplayName) || "carrier_a".equals(simOperatorName)) ? simOperatorName : strLookupOperatorNameForDisplayName;
        }
        return "";
    }

    public void iccExchangeSimIOEx(int i, int i2, int i3, int i4, int i5, String str, String str2, String str3, Message message) {
        this.mCi.iccIO(i2, i, str, i3, i4, i5, str2, str3, this.mMtkHandler.obtainMessage(101, message));
    }

    public void iccGetAtr(Message message) {
        this.mCi.getATR(this.mMtkHandler.obtainMessage(102, message));
    }

    protected boolean isSupportAllNetworkLockCategory() {
        return true;
    }

    protected boolean isUdpateCarrierName(String str) {
        return !TextUtils.isEmpty(str) && getState() == IccCardConstants.State.LOADED;
    }

    protected void log(String str) {
        Rlog.d("UiccProfile", str + " (phoneId " + getPhoneId() + ")");
    }

    protected void loge(String str) {
        Rlog.e("UiccProfile", str + " (phoneId " + getPhoneId() + ")");
    }

    protected UiccCardApplication makeUiccApplication(UiccProfile uiccProfile, IccCardApplicationStatus iccCardApplicationStatus, Context context, CommandsInterface commandsInterface) {
        return new MtkUiccCardApplication(uiccProfile, iccCardApplicationStatus, context, commandsInterface);
    }

    protected String overrideSpnFromConfig() {
        if (this.mIccRecords == null) {
            return "";
        }
        String operatorNumeric = PhoneFactory.getPhone(getPhoneId()).getOperatorNumeric();
        MtkSpnOverride mtkSpnOverride = MtkSpnOverride.getInstance();
        return mtkSpnOverride.containsCarrier(operatorNumeric) ? mtkSpnOverride.getSpn(operatorNumeric) : "";
    }

    public void queryIccNetworkLock(int i, Message message) {
        log("queryIccNetworkLock(): category =  " + i);
        boolean zHasIccCard = hasIccCard();
        synchronized (this.mLock) {
            if (this.mUiccApplication != null) {
                ((MtkUiccCardApplication) this.mUiccApplication).queryIccNetworkLock(i, message);
            } else if (message != null) {
                CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(1);
                log("Fail to queryIccNetworkLock, hasIccCard = " + zHasIccCard);
                AsyncResult.forMessage(message).exception = commandExceptionFromRilErrno;
                message.sendToTarget();
            }
        }
    }

    protected void registerCurrAppEvents() {
        super.registerCurrAppEvents();
        if (this.mUiccApplication == null || !(this.mUiccApplication instanceof MtkUiccCardApplication)) {
            return;
        }
        ((MtkUiccCardApplication) this.mUiccApplication).registerForFdnChanged(this.mMtkHandler, EVENT_ICC_FDN_CHANGED, null);
    }

    public void registerForFdnChanged(Handler handler, int i, Object obj) {
        synchronized (this.mLock) {
            Registrant registrant = new Registrant(handler, i, obj);
            this.mFdnChangedRegistrants.add(registrant);
            if (getIccFdnEnabled()) {
                registrant.notifyRegistrant();
            }
        }
    }

    public void repollIccStateForModemSmlChangeFeatrue(boolean z) {
        log("repollIccStateForModemSmlChangeFeatrue, needIntent = " + z);
        MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
        if (mtkUiccController != null) {
            mtkUiccController.repollIccStateForModemSmlChangeFeatrue(getPhoneId(), z);
        }
    }

    protected void setCurrentAppType(boolean z) {
        this.mLastAppType = this.mCurrentAppType;
        log("setCurrentAppType, isGsm=" + z + " mPhoneId=" + getPhoneId());
        if (z) {
            super.setCurrentAppType(z);
        } else {
            this.mCurrentAppType = 2;
        }
    }

    protected void setExternalState(IccCardConstants.State state) {
        if (state != IccCardConstants.State.PIN_REQUIRED || this.mUiccApplication == null || this.mUiccApplication.getPin1State() != IccCardStatus.PinState.PINSTATE_ENABLED_PERM_BLOCKED) {
            super.setExternalState(state);
        } else {
            log("setExternalState(): PERM_DISABLED");
            setExternalState(IccCardConstants.State.PERM_DISABLED);
        }
    }

    protected void setExternalState(IccCardConstants.State state, boolean z) {
        synchronized (this.mLock) {
            if (!SubscriptionManager.isValidSlotIndex(getPhoneId())) {
                loge("setExternalState: mPhoneId=" + getPhoneId() + " is invalid; Return!!");
                return;
            }
            log("setExternalState(): mExternalState = " + this.mExternalState + " newState =  " + state + " override = " + z);
            if (!z && state == this.mExternalState) {
                if (state == IccCardConstants.State.NETWORK_LOCKED && this.mNetworkLockState != getNetworkPersoType()) {
                    this.mNetworkLockState = getNetworkPersoType();
                } else {
                    if (this.mExternalState != IccCardConstants.State.LOADED || this.mLastAppType == this.mCurrentAppType || MtkIccUtilsEx.checkCdma3gCard(getPhoneId()) != 2) {
                        log("setExternalState: !override and newstate unchanged from " + state);
                        return;
                    }
                    log("Update operatorNumeric for CDMA 3G dual mode card");
                }
            }
            this.mExternalState = state;
            if (state == IccCardConstants.State.NETWORK_LOCKED) {
                this.mNetworkLockState = getNetworkPersoType();
                log("NetworkLockState =  " + this.mNetworkLockState);
            }
            if (this.mExternalState == IccCardConstants.State.LOADED && this.mIccRecords != null) {
                String operatorNumeric = PhoneFactory.getPhone(getPhoneId()).getOperatorNumeric();
                log("operator=" + operatorNumeric + " mPhoneId=" + getPhoneId());
                if (TextUtils.isEmpty(operatorNumeric)) {
                    loge("EVENT_RECORDS_LOADED Operator name is null");
                } else {
                    this.mTelephonyManager.setSimOperatorNumericForPhone(getPhoneId(), operatorNumeric);
                    String strSubstring = operatorNumeric.substring(0, 3);
                    if (strSubstring != null) {
                        this.mTelephonyManager.setSimCountryIsoForPhone(getPhoneId(), MccTable.countryCodeForMcc(Integer.parseInt(strSubstring)));
                    } else {
                        loge("EVENT_RECORDS_LOADED Country code is null");
                    }
                }
            }
            log("setExternalState: set mPhoneId=" + getPhoneId() + " mExternalState=" + this.mExternalState);
            this.mTelephonyManager.setSimStateForPhone(getPhoneId(), getState().toString());
            UiccController.updateInternalIccState(this.mContext, this.mExternalState, getIccStateReason(this.mExternalState), getPhoneId());
        }
    }

    public void setIccNetworkLockEnabled(int i, int i2, String str, String str2, String str3, String str4, Message message) {
        log("SetIccNetworkEnabled(): category = " + i + " lockop = " + i2);
        boolean zHasIccCard = hasIccCard();
        synchronized (this.mLock) {
            if (this.mUiccApplication != null) {
                ((MtkUiccCardApplication) this.mUiccApplication).setIccNetworkLockEnabled(i, i2, str, str2, str3, str4, message);
            } else if (message != null) {
                CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(1);
                log("Fail to setIccNetworkLockEnabled, hasIccCard = " + zHasIccCard);
                AsyncResult.forMessage(message).exception = commandExceptionFromRilErrno;
                message.sendToTarget();
            }
        }
    }

    protected void unregisterCurrAppEvents() {
        super.unregisterCurrAppEvents();
        if (this.mUiccApplication == null || !(this.mUiccApplication instanceof MtkUiccCardApplication)) {
            return;
        }
        ((MtkUiccCardApplication) this.mUiccApplication).unregisterForFdnChanged(this.mMtkHandler);
    }

    public void unregisterForFdnChanged(Handler handler) {
        synchronized (this.mLock) {
            this.mFdnChangedRegistrants.remove(handler);
        }
    }
}
