package com.mediatek.internal.telephony;

import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.SystemProperties;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneNumberUtils;
import android.telephony.TelephonyManager;
import android.telephony.emergency.EmergencyNumber;
import android.text.TextUtils;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.DriverCall;
import com.android.internal.telephony.GsmCdmaCall;
import com.android.internal.telephony.GsmCdmaCallTracker;
import com.android.internal.telephony.GsmCdmaConnection;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.TelephonyDevController;
import com.android.internal.telephony.UUSInfo;
import com.android.internal.telephony.cdma.CdmaCallWaitingNotification;
import com.android.telephony.Rlog;
import com.mediatek.internal.telephony.cdma.pluscode.PlusCodeProcessor;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.imsphone.MtkImsPhoneConnection;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmCdmaCallTracker extends GsmCdmaCallTracker {
    protected static final int EVENT_CALL_ADDITIONAL_INFO = 1006;
    protected static final int EVENT_CDMA_CALL_ACCEPTED = 1004;
    protected static final int EVENT_DIAL_CALL_RESULT = 1002;
    protected static final int EVENT_ECONF_SRVCC_INDICATION = 1005;
    protected static final int EVENT_HANG_UP_RESULT = 1003;
    protected static final int EVENT_INCOMING_CALL_INDICATION = 1000;
    protected static final int EVENT_MTK_BASE = 1000;
    protected static final int EVENT_RADIO_OFF_OR_NOT_AVAILABLE = 1001;
    private static final int MIN_CONNECTIONS_IN_CDMA_CONFERENCE = 2;
    private static final String PROP_LOG_TAG = "GsmCdmaCallTkr";
    private int[] mEconfSrvccConnectionIds;
    private boolean mHasPendingCheckAndEnableData;
    boolean mHasPendingSwapRequest;
    private boolean mHasPendingUpdatePhoneType;
    public MtkGsmCdmaCallTrackerHelper mHelper;
    protected Connection mImsConfHostConnection;
    private ArrayList<Connection> mImsConfParticipants;
    public MtkRIL mMtkCi;
    protected IMtkGsmCdmaCallTrackerExt mMtkGsmCdmaCallTrackerExt;
    protected boolean mNeedWaitImsEConfSrvcc;
    private int mPhoneType;
    TelephonyDevController mTelDevController;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    WaitForHoldToHangup mWaitForHoldToHangupRequest;
    WaitForHoldToRedial mWaitForHoldToRedialRequest;
    boolean mWaitPollAfterHangupPendingMO;

    class WaitForHoldToHangup {
        private boolean mWaitToHangup = false;
        private boolean mHoldDone = false;
        private GsmCdmaCall mCall = null;

        WaitForHoldToHangup() {
            resetToHangup();
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
        public boolean resumeHangupAfterHold() {
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeHangupAfterHold begin");
            if (!this.mWaitToHangup || this.mCall == null) {
                resetToHangup();
                return false;
            }
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeHangupAfterHold to hangup call");
            this.mWaitToHangup = false;
            this.mHoldDone = false;
            try {
                MtkGsmCdmaCallTracker.this.hangup(this.mCall);
            } catch (CallStateException e) {
                e.printStackTrace();
                Rlog.e(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "unexpected error on hangup (" + e.getMessage() + ")");
            }
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeHangupAfterHold end");
            this.mCall = null;
            return true;
        }

        boolean isHoldDone() {
            return this.mHoldDone;
        }

        boolean isWaitToHangup() {
            return this.mWaitToHangup;
        }

        public void resetToHangup() {
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "Reset mWaitForHoldToHangupRequest variables");
            this.mWaitToHangup = false;
            this.mHoldDone = false;
            this.mCall = null;
        }

        void setHoldDone() {
            this.mHoldDone = true;
        }

        void setToHangup() {
            this.mWaitToHangup = true;
        }

        public void setToHangup(GsmCdmaCall gsmCdmaCall) {
            this.mWaitToHangup = true;
            this.mCall = gsmCdmaCall;
        }
    }

    class WaitForHoldToRedial {
        private EmergencyNumber mEmergencyNumberInfo;
        private boolean mWaitToRedial = false;
        private String mDialString = null;
        private int mClirMode = 0;
        private UUSInfo mUUSInfo = null;
        private boolean mIsEmergencyCall = false;
        private boolean mHasKnownUserIntentEmergency = false;

        WaitForHoldToRedial() {
            resetToRedial();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean resumeDialAfterHold() {
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeDialAfterHold begin");
            if (!this.mWaitToRedial) {
                return false;
            }
            if (this.mDialString == null) {
                Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeDialAfterHold cancel (dial string empty yet)");
            } else {
                MtkGsmCdmaCallTracker.this.mCi.dial(this.mDialString, this.mIsEmergencyCall, this.mEmergencyNumberInfo, this.mHasKnownUserIntentEmergency, this.mClirMode, this.mUUSInfo, MtkGsmCdmaCallTracker.this.obtainCompleteMessage(1002));
            }
            resetToRedial();
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "resumeDialAfterHold end");
            return true;
        }

        boolean isWaitToRedial() {
            return this.mWaitToRedial;
        }

        public void resetToRedial() {
            Rlog.d(MtkGsmCdmaCallTracker.PROP_LOG_TAG, "Reset mWaitForHoldToRedialRequest variables");
            this.mWaitToRedial = false;
            this.mDialString = null;
            this.mClirMode = 0;
            this.mUUSInfo = null;
            this.mIsEmergencyCall = false;
            this.mHasKnownUserIntentEmergency = false;
        }

        void setToRedial() {
            this.mWaitToRedial = true;
        }

        public void setToRedial(String str, boolean z, EmergencyNumber emergencyNumber, boolean z2, int i, UUSInfo uUSInfo) {
            this.mWaitToRedial = true;
            this.mDialString = str;
            this.mIsEmergencyCall = z;
            this.mEmergencyNumberInfo = emergencyNumber;
            this.mHasKnownUserIntentEmergency = z2;
            this.mClirMode = i;
            this.mUUSInfo = uUSInfo;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MtkGsmCdmaCallTracker(GsmCdmaPhone gsmCdmaPhone) {
        super(gsmCdmaPhone);
        this.mMtkCi = null;
        this.mTelephonyCustomizationFactory = null;
        this.mMtkGsmCdmaCallTrackerExt = null;
        this.mHasPendingSwapRequest = false;
        this.mWaitForHoldToRedialRequest = new WaitForHoldToRedial();
        this.mWaitForHoldToHangupRequest = new WaitForHoldToHangup();
        this.mWaitPollAfterHangupPendingMO = false;
        this.mPhoneType = 0;
        this.mHasPendingUpdatePhoneType = false;
        this.mHasPendingCheckAndEnableData = false;
        this.mTelDevController = TelephonyDevController.getInstance();
        this.mNeedWaitImsEConfSrvcc = false;
        this.mImsConfHostConnection = null;
        this.mImsConfParticipants = new ArrayList<>();
        this.mEconfSrvccConnectionIds = null;
        this.mRingingCall = new MtkGsmCdmaCall(this);
        this.mForegroundCall = new MtkGsmCdmaCall(this);
        this.mBackgroundCall = new MtkGsmCdmaCall(this);
        MtkRIL mtkRIL = this.mCi;
        this.mMtkCi = mtkRIL;
        mtkRIL.setOnIncomingCallIndication(this, 1000, null);
        this.mMtkCi.registerForCallAdditionalInfo(this, 1006, null);
        this.mMtkCi.registerForOffOrNotAvailable(this, 1001, null);
        this.mHelper = new MtkGsmCdmaCallTrackerHelper(gsmCdmaPhone.getContext(), this);
        this.mMtkCi.registerForEconfSrvcc(this, 1005, null);
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(this.mPhone.getContext());
            this.mTelephonyCustomizationFactory = opFactory;
            this.mMtkGsmCdmaCallTrackerExt = opFactory.makeMtkGsmCdmaCallTrackerExt(gsmCdmaPhone.getContext());
        } catch (Exception e) {
            Rlog.d("GsmCdmaCallTracker", "mMtkGsmCdmaCallTrackerExt init fail");
            e.printStackTrace();
        }
    }

    private void disableDataCallInEmergencyCall(boolean z) {
        if (z) {
            log("disableDataCallInEmergencyCall");
            setIsInEmergencyCall();
        }
    }

    private PersistableBundle getCarrierConfig() {
        return ((CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config")).getConfigForSubId(this.mPhone.getSubId());
    }

    private void handleCallAccepted() {
        ArrayList connections = this.mForegroundCall.getConnections();
        int size = connections.size();
        Rlog.d(PROP_LOG_TAG, "handleCallAccepted, fgcall count=" + size);
        if (size == 1) {
            GsmCdmaConnection gsmCdmaConnection = (GsmCdmaConnection) connections.get(0);
            if ((gsmCdmaConnection instanceof MtkGsmCdmaConnection) && (this.mPhone instanceof MtkGsmCdmaPhone)) {
                ((MtkGsmCdmaConnection) gsmCdmaConnection).onCdmaCallAccepted();
            }
        }
    }

    private boolean hasC2kOverImsModem() {
        TelephonyDevController telephonyDevController = this.mTelDevController;
        return (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasC2kOverImsModem()) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean needToConvert(String str) {
        String dialString = GsmCdmaConnection.formatDialString(str);
        return (str == null || dialString == null || str.equals(dialString)) ? false : true;
    }

    private boolean noAnyCallFromModemExist(AsyncResult asyncResult) {
        return (asyncResult.exception == null ? (List) asyncResult.result : new ArrayList()).size() == 0;
    }

    private String processPlusCodeForDriverCall(String str, boolean z, int i) {
        if (z && i == 145) {
            if (str != null && str.length() > 0 && str.charAt(0) == '+') {
                str = str.substring(1, str.length());
            }
            str = PlusCodeProcessor.getPlusCodeUtils().removeIddNddAddPlusCode(str);
        }
        return PhoneNumberUtils.stringFromStringAndTOA(str, i);
    }

    private String processPlusCodeForWaitingCall(String str, int i) {
        String strRemoveIddNddAddPlusCode = PlusCodeProcessor.getPlusCodeUtils().removeIddNddAddPlusCode(str);
        if (strRemoveIddNddAddPlusCode == null) {
            return str;
        }
        if (i != 1 || strRemoveIddNddAddPlusCode.length() <= 0 || strRemoveIddNddAddPlusCode.charAt(0) == '+') {
            return strRemoveIddNddAddPlusCode;
        }
        return "+" + strRemoveIddNddAddPlusCode;
    }

    private void processPlusCodeForWaitingCall(CdmaCallWaitingNotification cdmaCallWaitingNotification) {
        String str = cdmaCallWaitingNotification.number;
        if (str == null || str.length() <= 0) {
            return;
        }
        cdmaCallWaitingNotification.number = processPlusCodeForWaitingCall(str, cdmaCallWaitingNotification.numberType);
    }

    private synchronized boolean restoreConferenceParticipantAddress() {
        if (this.mEconfSrvccConnectionIds == null) {
            Rlog.d(PROP_LOG_TAG, "SRVCC: restoreConferenceParticipantAddress():ignore because mEconfSrvccConnectionIds is empty");
            return false;
        }
        boolean z = false;
        int i = this.mEconfSrvccConnectionIds[0];
        for (int i2 = 1; i2 <= i; i2++) {
            GsmCdmaConnection gsmCdmaConnection = this.mConnections[this.mEconfSrvccConnectionIds[i2] - 1];
            if (gsmCdmaConnection != null) {
                Rlog.d(PROP_LOG_TAG, "SRVCC: found conference connections!");
                if (gsmCdmaConnection.mOrigConnection instanceof MtkImsPhoneConnection) {
                    MtkImsPhoneConnection mtkImsPhoneConnection = gsmCdmaConnection.mOrigConnection;
                    if (mtkImsPhoneConnection == null) {
                        Rlog.v(PROP_LOG_TAG, "SRVCC: no host, ignore connection: " + gsmCdmaConnection);
                    } else {
                        String conferenceParticipantAddress = mtkImsPhoneConnection.getConferenceParticipantAddress(i2 - 1);
                        if (gsmCdmaConnection instanceof MtkGsmCdmaConnection) {
                            ((MtkGsmCdmaConnection) gsmCdmaConnection).updateConferenceParticipantAddress(conferenceParticipantAddress);
                        }
                        z = true;
                        Rlog.v(PROP_LOG_TAG, "SRVCC: restore Connection=" + gsmCdmaConnection + " with address:" + conferenceParticipantAddress);
                    }
                } else {
                    Rlog.v(PROP_LOG_TAG, "SRVCC: host is abnormal, ignore connection: " + gsmCdmaConnection);
                }
            }
        }
        return z;
    }

    private void resumeBackgroundAfterDialFailed() {
        List list = (List) this.mBackgroundCall.mConnections.clone();
        int size = list.size();
        for (int i = 0; i < size; i++) {
            ((MtkGsmCdmaConnection) list.get(i)).resumeHoldAfterDialFailed();
        }
    }

    private boolean shouldNotifyWaitingCall(CdmaCallWaitingNotification cdmaCallWaitingNotification) {
        GsmCdmaConnection latestConnection;
        String str = cdmaCallWaitingNotification.number;
        Rlog.d(PROP_LOG_TAG, "shouldNotifyWaitingCall");
        if (str == null || str.length() <= 0 || (latestConnection = this.mRingingCall.getLatestConnection()) == null || !str.equals(latestConnection.getAddress())) {
            return true;
        }
        Rlog.d(PROP_LOG_TAG, "handleCallWaitingInfo, skip duplicate waiting call!");
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void updatePhoneType(boolean z, boolean z2) {
        if (this.mPhoneType != 2 || this.mPhone.isPhoneTypeGsm()) {
            if (!z) {
                if (!z2 && this.mState != PhoneConstants.State.IDLE) {
                    this.mHasPendingUpdatePhoneType = true;
                    Rlog.d("GsmCdmaCallTracker", "[updatePhoneType]mHasPendingUpdatePhoneType = true");
                    if (this.mPhoneType == 2 && this.mPhone.isPhoneTypeGsm()) {
                        this.mHasPendingCheckAndEnableData = true;
                    }
                    if (this.mLastRelevantPoll == null) {
                        pollCallsWhenSafe();
                        return;
                    }
                    return;
                }
                reset();
                if (hasC2kOverImsModem()) {
                    Phone imsPhone = this.mPhone.getImsPhone();
                    if (imsPhone == null || (imsPhone != null && imsPhone.getHandoverConnection() == null)) {
                        pollCallsWhenSafe();
                    } else {
                        Rlog.d("GsmCdmaCallTracker", "not trigger pollCall since imsCall exists");
                    }
                }
            }
            super.updatePhoneType(true);
            if (this.mPhone.isPhoneTypeGsm()) {
                if (this.mMtkCi == null) {
                    this.mMtkCi = this.mCi;
                }
                this.mMtkCi.unregisterForLineControlInfo(this);
                this.mPhoneType = 1;
                return;
            }
            if (this.mMtkCi == null) {
                this.mMtkCi = this.mCi;
            }
            this.mMtkCi.unregisterForLineControlInfo(this);
            this.mMtkCi.registerForLineControlInfo(this, 1004, null);
            this.mPhoneType = 2;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void checkForDialIssues(boolean z) throws CallStateException {
        super.checkForDialIssues(z);
        if (this.mPendingMO != null || this.mHangupPendingMO || this.mWaitPollAfterHangupPendingMO) {
            StringBuilder sb = new StringBuilder();
            sb.append("Check pendingMO operations before dial (");
            sb.append(this.mPendingMO != null ? "t," : "f,");
            sb.append(this.mHangupPendingMO ? "t," : "f,");
            sb.append(this.mWaitPollAfterHangupPendingMO ? "t" : "f");
            sb.append(")");
            Rlog.d("GsmCdmaCallTracker", sb.toString());
            updateWaitPollAfterAbortPendingMO(false);
            throw new CallStateException(3, "A call is already dialing..");
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    /* JADX WARN: Code duplicated, block: B:27:0x0080  */
    /* JADX WARN: Multi-variable type inference failed */
    protected Connection dialCdma(String str, int i, Bundle bundle) throws CallStateException {
        boolean z;
        clearDisconnected();
        boolean zIsLocalEmergencyNumber = PhoneNumberUtils.isLocalEmergencyNumber(this.mPhone.getContext(), str);
        checkForDialIssues(zIsLocalEmergencyNumber);
        String networkCountryIso = ((TelephonyManager) this.mPhone.getContext().getSystemService("phone")).getNetworkCountryIso(this.mPhone.getPhoneId());
        String simCountryIsoForPhone = TelephonyManager.getSimCountryIsoForPhone(this.mPhone.getPhoneId());
        boolean z2 = (TextUtils.isEmpty(networkCountryIso) || TextUtils.isEmpty(simCountryIsoForPhone) || simCountryIsoForPhone.equals(networkCountryIso)) ? false : true;
        if (!z2) {
            z = z2;
        } else if ("us".equals(simCountryIsoForPhone)) {
            z = z2 && !"vi".equals(networkCountryIso);
        } else if ("vi".equals(simCountryIsoForPhone)) {
            z = z2 && !"us".equals(networkCountryIso);
        } else {
            z = z2;
        }
        String strConvertNumberIfNecessary = z ? convertNumberIfNecessary(this.mPhone, str) : str;
        boolean zIsInEcm = this.mPhone.isInEcm();
        if ("OP20".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "")) && zIsInEcm && !zIsLocalEmergencyNumber) {
            throw new CallStateException("cannot dial in ECBM");
        }
        if (zIsInEcm && zIsLocalEmergencyNumber) {
            handleEcmTimer(1);
        }
        if (this.mForegroundCall.getState() == Call.State.ACTIVE) {
            return dialThreeWay(strConvertNumberIfNecessary, bundle);
        }
        String str2 = strConvertNumberIfNecessary;
        this.mPendingMO = new MtkGsmCdmaConnection(this.mPhone, strConvertNumberIfNecessary, this, this.mForegroundCall, zIsLocalEmergencyNumber);
        if (bundle != null) {
            Rlog.d("GsmCdmaCallTracker", "dialGsm - emergency dialer: " + bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
            this.mPendingMO.setHasKnownUserIntentEmergency(bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
        }
        this.mHangupPendingMO = false;
        updateWaitPollAfterAbortPendingMO(false);
        if (this.mPendingMO.getAddress() == null || this.mPendingMO.getAddress().length() == 0 || this.mPendingMO.getAddress().indexOf(78) >= 0) {
            this.mPendingMO.mCause = 7;
            pollCallsWhenSafe();
        } else {
            setMute(false);
            disableDataCallInEmergencyCall(zIsLocalEmergencyNumber);
            if (!zIsInEcm || (zIsInEcm && zIsLocalEmergencyNumber)) {
                String address = this.mPendingMO.getAddress();
                if (!hasC2kOverImsModem()) {
                    address = address + "," + PhoneNumberUtils.extractNetworkPortionAlt(str2);
                }
                this.mCi.dial(address, this.mPendingMO.isEmergencyCall(), this.mPendingMO.getEmergencyNumberInfo(), this.mPendingMO.hasKnownUserIntentEmergency(), i, obtainCompleteMessage());
                if (needToConvert(str2)) {
                    this.mPendingMO.restoreDialedNumberAfterConversion(PhoneNumberUtils.extractNetworkPortionAlt(str2));
                }
            } else {
                this.mPhone.exitEmergencyCallbackMode();
                this.mPhone.setOnEcbModeExitResponse(this, 14, str2);
                this.mPendingCallClirMode = i;
                this.mPendingCallInEcm = true;
            }
        }
        if (this.mNumberConverted) {
            this.mPendingMO.restoreDialedNumberAfterConversion(str);
            this.mNumberConverted = false;
        }
        updatePhoneState();
        this.mPhone.notifyPreciseCallStateChanged();
        return this.mPendingMO;
    }

    public synchronized Connection dialGsm(String str, int i, UUSInfo uUSInfo, Bundle bundle) throws CallStateException {
        clearDisconnected();
        boolean zIsLocalEmergencyNumber = PhoneNumberUtils.isLocalEmergencyNumber(this.mPhone.getContext(), str);
        checkForDialIssues(zIsLocalEmergencyNumber);
        String strConvertNumberIfNecessary = convertNumberIfNecessary(this.mPhone, str);
        if (this.mForegroundCall.getState() == Call.State.ACTIVE) {
            this.mWaitForHoldToRedialRequest.setToRedial();
            switchWaitingOrHoldingAndActive();
            try {
                Thread.sleep(250L);
            } catch (InterruptedException e) {
            }
            fakeHoldForegroundBeforeDial();
        }
        if (this.mForegroundCall.getState() != Call.State.IDLE) {
            throw new CallStateException("cannot dial in current state");
        }
        this.mPendingMO = new MtkGsmCdmaConnection(this.mPhone, strConvertNumberIfNecessary, this, this.mForegroundCall, zIsLocalEmergencyNumber);
        if (bundle != null) {
            Rlog.d("GsmCdmaCallTracker", "dialGsm - emergency dialer: " + bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
            this.mPendingMO.setHasKnownUserIntentEmergency(bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
        }
        this.mHangupPendingMO = false;
        updateWaitPollAfterAbortPendingMO(false);
        this.mMetrics.writeRilDial(this.mPhone.getPhoneId(), this.mPendingMO, i, uUSInfo);
        String strConvertDialString = this.mMtkGsmCdmaCallTrackerExt.convertDialString(bundle, this.mPendingMO.getAddress());
        if (strConvertDialString != null) {
            this.mPendingMO.setConnectionExtras(bundle);
        }
        if (this.mPendingMO.getAddress() == null || this.mPendingMO.getAddress().length() == 0 || this.mPendingMO.getAddress().indexOf(78) >= 0) {
            this.mPendingMO.mCause = 7;
            this.mWaitForHoldToRedialRequest.resetToRedial();
            pollCallsWhenSafe();
        } else {
            setMute(false);
            synchronized (this.mWaitForHoldToRedialRequest) {
                if (this.mWaitForHoldToRedialRequest.isWaitToRedial()) {
                    if (strConvertDialString != null) {
                        this.mNumberConverted = true;
                    } else {
                        strConvertDialString = this.mPendingMO.getAddress();
                    }
                    this.mWaitForHoldToRedialRequest.setToRedial(strConvertDialString, this.mPendingMO.isEmergencyCall(), this.mPendingMO.getEmergencyNumberInfo(), this.mPendingMO.hasKnownUserIntentEmergency(), i, uUSInfo);
                } else {
                    if (strConvertDialString != null) {
                        this.mNumberConverted = true;
                    } else {
                        strConvertDialString = this.mPendingMO.getAddress();
                    }
                    this.mCi.dial(strConvertDialString, this.mPendingMO.isEmergencyCall(), this.mPendingMO.getEmergencyNumberInfo(), this.mPendingMO.hasKnownUserIntentEmergency(), i, uUSInfo, obtainCompleteMessage());
                }
            }
        }
        if (this.mNumberConverted) {
            this.mPendingMO.restoreDialedNumberAfterConversion(str);
            this.mNumberConverted = false;
        }
        updatePhoneState();
        this.mPhone.notifyPreciseCallStateChanged();
        return this.mPendingMO;
    }

    protected Connection dialThreeWay(String str, Bundle bundle) {
        if (this.mForegroundCall.isIdle()) {
            return null;
        }
        disableDataCallInEmergencyCall(str);
        this.mPendingMO = new MtkGsmCdmaConnection(this.mPhone, str, this, this.mForegroundCall, this.mIsInEmergencyCall);
        if (bundle != null) {
            Rlog.d("GsmCdmaCallTracker", "dialThreeWay - emergency dialer " + bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
            this.mPendingMO.setHasKnownUserIntentEmergency(bundle.getBoolean("android.telecom.extra.IS_USER_INTENT_EMERGENCY_CALL"));
        }
        PersistableBundle configForSubId = ((CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config")).getConfigForSubId(this.mPhone.getSubId());
        if (configForSubId != null) {
            this.m3WayCallFlashDelay = configForSubId.getInt("cdma_3waycall_flash_delay_int");
        } else {
            this.m3WayCallFlashDelay = 0;
        }
        if (this.m3WayCallFlashDelay > 0) {
            this.mCi.sendCDMAFeatureCode("", obtainMessage(20, str));
        } else {
            this.mCi.sendCDMAFeatureCode(this.mPendingMO.getAddress() + "," + PhoneNumberUtils.extractNetworkPortionAlt(str), obtainMessage(16));
            if (needToConvert(str)) {
                this.mPendingMO.restoreDialedNumberAfterConversion(PhoneNumberUtils.extractNetworkPortionAlt(str));
            }
        }
        return this.mPendingMO;
    }

    protected void dumpState() {
        Rlog.i("GsmCdmaCallTracker", "Phone State:" + this.mState);
        Rlog.i("GsmCdmaCallTracker", "Ringing call: " + this.mRingingCall.toString());
        ArrayList connections = this.mRingingCall.getConnections();
        int size = connections.size();
        for (int i = 0; i < size; i++) {
            Rlog.i("GsmCdmaCallTracker", connections.get(i).toString());
        }
        Rlog.i("GsmCdmaCallTracker", "Foreground call: " + this.mForegroundCall.toString());
        ArrayList connections2 = this.mForegroundCall.getConnections();
        int size2 = connections2.size();
        for (int i2 = 0; i2 < size2; i2++) {
            Rlog.i("GsmCdmaCallTracker", connections2.get(i2).toString());
        }
        Rlog.i("GsmCdmaCallTracker", "Background call: " + this.mBackgroundCall.toString());
        ArrayList connections3 = this.mBackgroundCall.getConnections();
        int size3 = connections3.size();
        for (int i3 = 0; i3 < size3; i3++) {
            Rlog.i("GsmCdmaCallTracker", connections3.get(i3).toString());
        }
        if (isPhoneTypeGsm()) {
            this.mHelper.LogState();
        }
    }

    public int getHandoverConnectionSize() {
        return this.mHandoverConnections.size();
    }

    protected Connection getHoConnection(DriverCall driverCall) {
        if (driverCall == null) {
            return null;
        }
        int[] iArr = this.mEconfSrvccConnectionIds;
        if (iArr != null && driverCall != null) {
            int i = iArr[0];
            for (int i2 = 1; i2 <= i; i2++) {
                if (driverCall.index == this.mEconfSrvccConnectionIds[i2]) {
                    Rlog.d(PROP_LOG_TAG, "SRVCC: getHoConnection for call-id:" + driverCall.index + " in a conference is found!");
                    if (this.mImsConfHostConnection == null) {
                        Rlog.d(PROP_LOG_TAG, "SRVCC: but mImsConfHostConnection is null, try to find by callState");
                        break;
                    }
                    Rlog.v(PROP_LOG_TAG, "SRVCC: ret= " + this.mImsConfHostConnection);
                    return this.mImsConfHostConnection;
                }
            }
        }
        if (driverCall.number != null && !driverCall.number.isEmpty()) {
            for (Connection connection : this.mHandoverConnections) {
                log("getHoConnection - compare number: hoConn= " + connection.toString());
                if (connection.getAddress() != null && connection.getAddress().contains(driverCall.number)) {
                    log("getHoConnection: Handover connection match found = " + connection.toString());
                    return connection;
                }
            }
        }
        for (Connection connection2 : this.mHandoverConnections) {
            log("getHoConnection: compare state hoConn= " + connection2.toString());
            if (connection2.getStateBeforeHandover() == Call.stateFromDCState(driverCall.state)) {
                log("getHoConnection: Handover connection match found = " + connection2.toString());
                return connection2;
            }
        }
        return null;
    }

    public int getMaxConnections() {
        return this.mPhone.isPhoneTypeGsm() ? 19 : 8;
    }

    protected void handleCallWaitingInfo(CdmaCallWaitingNotification cdmaCallWaitingNotification) {
        processPlusCodeForWaitingCall(cdmaCallWaitingNotification);
        if (shouldNotifyWaitingCall(cdmaCallWaitingNotification)) {
            if (this.mForegroundCall.mConnections.size() > 2) {
                for (Connection connection : this.mForegroundCall.mConnections) {
                    if (cdmaCallWaitingNotification.number != null && cdmaCallWaitingNotification.number.equals(connection.getAddress())) {
                        connection.onDisconnect(2);
                        break;
                    }
                }
            }
            new MtkGsmCdmaConnection(this.mPhone.getContext(), cdmaCallWaitingNotification, this, this.mRingingCall);
            updatePhoneState();
            notifyCallWaitingInfo(cdmaCallWaitingNotification);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void handleMessage(Message message) {
        Connection latestConnection;
        this.mHelper.LogerMessage(message.what);
        int i = message.what;
        if (i == 1) {
            Rlog.d("GsmCdmaCallTracker", "Event EVENT_POLL_CALLS_RESULT Received");
            if (message == this.mLastRelevantPoll) {
                this.mNeedsPoll = false;
                this.mLastRelevantPoll = null;
                boolean zNoAnyCallFromModemExist = noAnyCallFromModemExist((AsyncResult) message.obj);
                if (!zNoAnyCallFromModemExist && this.mHasPendingUpdatePhoneType) {
                    this.mHasPendingUpdatePhoneType = false;
                    updatePhoneType(false, true);
                    Rlog.d("GsmCdmaCallTracker", "[EVENT_POLL_CALLS_RESULT]!bNoCallExists");
                }
                handlePollCalls((AsyncResult) message.obj);
                if (zNoAnyCallFromModemExist && this.mHasPendingUpdatePhoneType) {
                    this.mHasPendingUpdatePhoneType = false;
                    updatePhoneType(false, true);
                    Rlog.d("GsmCdmaCallTracker", "[EVENT_POLL_CALLS_RESULT]bNoCallExists");
                }
                if (this.mHasPendingCheckAndEnableData) {
                    if (zNoAnyCallFromModemExist) {
                        checkAndEnableDataCallAfterEmergencyCallDropped();
                    }
                    this.mHasPendingCheckAndEnableData = false;
                }
                if (this.mWaitForHoldToHangupRequest.isHoldDone()) {
                    Rlog.d(PROP_LOG_TAG, "Switch ends, and poll call done, then resume hangup");
                    this.mWaitForHoldToHangupRequest.resumeHangupAfterHold();
                    return;
                }
                return;
            }
            return;
        }
        if (i == 8) {
            if (isPhoneTypeGsm()) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult.exception != null) {
                    if (this.mWaitForHoldToRedialRequest.isWaitToRedial()) {
                        if (this.mPendingMO != null) {
                            this.mPendingMO.mCause = 3;
                            this.mPendingMO.onDisconnect(3);
                            this.mPendingMO = null;
                            this.mHangupPendingMO = false;
                            updateWaitPollAfterAbortPendingMO(false);
                            updatePhoneState();
                        }
                        resumeBackgroundAfterDialFailed();
                        this.mPhone.notifyPreciseCallStateChanged();
                        this.mWaitForHoldToRedialRequest.resetToRedial();
                    }
                    if (message.what == 8 && (latestConnection = this.mForegroundCall.getLatestConnection()) != null) {
                        latestConnection.onConnectionEvent("android.telecom.event.CALL_SWITCH_FAILED", (Bundle) null);
                    }
                    this.mPhone.notifySuppServiceFailed(getFailedService(message.what));
                } else {
                    synchronized (this.mWaitForHoldToRedialRequest) {
                        if (this.mWaitForHoldToRedialRequest.isWaitToRedial()) {
                            boolean zResumeDialAfterHold = this.mWaitForHoldToRedialRequest.resumeDialAfterHold();
                            StringBuilder sb = new StringBuilder();
                            sb.append("Switch success, then resume dial. ");
                            sb.append(zResumeDialAfterHold ? "(t)" : "(f)");
                            Rlog.d(PROP_LOG_TAG, sb.toString());
                        }
                    }
                }
                if (this.mWaitForHoldToHangupRequest.isWaitToHangup()) {
                    if (asyncResult.exception == null && this.mWaitForHoldToHangupRequest.mCall != null) {
                        Rlog.d(PROP_LOG_TAG, "Switch ends, found waiting hangup. switch fg/bg call.");
                        if (this.mWaitForHoldToHangupRequest.mCall == this.mForegroundCall) {
                            this.mWaitForHoldToHangupRequest.setToHangup(this.mBackgroundCall);
                        } else if (this.mWaitForHoldToHangupRequest.mCall == this.mBackgroundCall) {
                            this.mWaitForHoldToHangupRequest.setToHangup(this.mForegroundCall);
                        }
                    }
                    Rlog.d(PROP_LOG_TAG, "Switch ends, wait for poll call done to hangup");
                    this.mWaitForHoldToHangupRequest.setHoldDone();
                }
                this.mHasPendingSwapRequest = false;
                operationComplete();
                return;
            }
            return;
        }
        if (i == 14) {
            Rlog.d(PROP_LOG_TAG, "Receives EVENT_EXIT_ECM_RESPONSE_CDMA");
            if (this.mPendingCallInEcm) {
                String str = (String) ((AsyncResult) message.obj).userObj;
                if (this.mPendingMO == null) {
                    this.mPendingMO = new GsmCdmaConnection(this.mPhone, str, this, this.mForegroundCall, false);
                }
                if (isPhoneTypeGsm()) {
                    Rlog.e("GsmCdmaCallTracker", "originally unexpected event " + message.what + " not handled by phone type " + this.mPhone.getPhoneType());
                    this.mCi.dial(this.mPendingMO.getAddress(), this.mPendingMO.isEmergencyCall(), this.mPendingMO.getEmergencyNumberInfo(), this.mPendingMO.hasKnownUserIntentEmergency(), this.mPendingCallClirMode, (UUSInfo) null, obtainCompleteMessage());
                } else {
                    this.mCi.dial(this.mPendingMO.getAddress() + "," + PhoneNumberUtils.extractNetworkPortionAlt(str), this.mPendingMO.isEmergencyCall(), this.mPendingMO.getEmergencyNumberInfo(), this.mPendingMO.hasKnownUserIntentEmergency(), this.mPendingCallClirMode, obtainCompleteMessage());
                    if (needToConvert(str)) {
                        this.mPendingMO.restoreDialedNumberAfterConversion(PhoneNumberUtils.extractNetworkPortionAlt(str));
                    }
                }
                this.mPendingCallInEcm = false;
            }
            this.mPhone.unsetOnEcbModeExitResponse(this);
            return;
        }
        if (i == 16) {
            if (!isPhoneTypeGsm()) {
                if (((AsyncResult) message.obj).exception != null || this.mPendingMO == null) {
                    return;
                }
                this.mPendingMO.onConnectedInOrOut();
                this.mPendingMO = null;
                return;
            }
            Rlog.e("GsmCdmaCallTracker", "unexpected event " + message.what + " not handled by phone type " + this.mPhone.getPhoneType());
            return;
        }
        if (i == 20) {
            Rlog.d(PROP_LOG_TAG, "Receives EVENT_THREE_WAY_DIAL_BLANK_FLASH");
            if (isPhoneTypeGsm()) {
                Rlog.e("GsmCdmaCallTracker", "unexpected event " + message.what + " not handled by phone type " + this.mPhone.getPhoneType());
                return;
            }
            if (((AsyncResult) message.obj).exception == null) {
                final String str2 = (String) ((AsyncResult) message.obj).userObj;
                postDelayed(new Runnable() { // from class: com.mediatek.internal.telephony.MtkGsmCdmaCallTracker.1
                    @Override // java.lang.Runnable
                    public void run() {
                        if (MtkGsmCdmaCallTracker.this.mPendingMO != null) {
                            MtkGsmCdmaCallTracker.this.mCi.sendCDMAFeatureCode(MtkGsmCdmaCallTracker.this.mPendingMO.getAddress() + "," + PhoneNumberUtils.extractNetworkPortionAlt(str2), MtkGsmCdmaCallTracker.this.obtainMessage(16));
                            if (MtkGsmCdmaCallTracker.this.needToConvert(str2)) {
                                MtkGsmCdmaCallTracker.this.mPendingMO.restoreDialedNumberAfterConversion(PhoneNumberUtils.extractNetworkPortionAlt(str2));
                            }
                        }
                    }
                }, this.m3WayCallFlashDelay);
                return;
            } else {
                this.mPendingMO = null;
                Rlog.w("GsmCdmaCallTracker", "exception happened on Blank Flash for 3-way call");
                return;
            }
        }
        switch (i) {
            case 1000:
                this.mHelper.CallIndicationProcess((AsyncResult) message.obj);
                return;
            case 1001:
                Rlog.d(PROP_LOG_TAG, "Receives EVENT_RADIO_OFF_OR_NOT_AVAILABLE");
                if (this.mPendingCallInEcm) {
                    return;
                }
                handlePollCalls(new AsyncResult((Object) null, (Object) null, new CommandException(CommandException.Error.RADIO_NOT_AVAILABLE)));
                this.mLastRelevantPoll = null;
                return;
            case 1002:
                if (((AsyncResult) message.obj).exception != null) {
                    Rlog.d(PROP_LOG_TAG, "dial call failed!!");
                }
                operationComplete();
                return;
            case 1003:
                operationComplete();
                return;
            case 1004:
                Rlog.d(PROP_LOG_TAG, "Receives EVENT_CDMA_CALL_ACCEPTED");
                if (((AsyncResult) message.obj).exception == null) {
                    handleCallAccepted();
                    return;
                }
                return;
            case 1005:
                log("Receives EVENT_ECONF_SRVCC_INDICATION");
                if (hasParsingCEPCapability()) {
                    return;
                }
                this.mEconfSrvccConnectionIds = (int[]) ((AsyncResult) message.obj).result;
                this.mNeedWaitImsEConfSrvcc = false;
                pollCallsWhenSafe();
                return;
            case 1006:
                this.mHelper.handleCallAdditionalInfo((AsyncResult) message.obj);
                return;
            default:
                super.handleMessage(message);
                return;
        }
    }

    protected synchronized void handlePollCalls(AsyncResult asyncResult) {
        List arrayList;
        Phone imsPhone;
        DriverCall driverCall;
        boolean z;
        boolean z2;
        int i;
        AsyncResult asyncResult2 = asyncResult;
        synchronized (this) {
            try {
                if (this.mWaitPollAfterHangupPendingMO) {
                    updateWaitPollAfterAbortPendingMO(false);
                }
                if (asyncResult2.exception == null) {
                    arrayList = (List) asyncResult2.result;
                } else {
                    if (!isCommandExceptionRadioNotAvailable(asyncResult2.exception)) {
                        pollCallsAfterDelay();
                        return;
                    }
                    arrayList = new ArrayList();
                }
                if (this.mNeedWaitImsEConfSrvcc && !hasParsingCEPCapability()) {
                    Rlog.d(PROP_LOG_TAG, "SRVCC: +ECONFSRVCC is still not arrival, skip this poll call.");
                    return;
                }
                Connection connectionCheckMtFindNewRinging = null;
                ArrayList<Connection> arrayList2 = new ArrayList();
                GsmCdmaConnection gsmCdmaConnection = null;
                boolean z3 = false;
                boolean z4 = false;
                boolean z5 = false;
                boolean z6 = false;
                int size = this.mHandoverConnections.size();
                boolean z7 = true;
                if (arrayList.size() == 0) {
                    this.mHelper.setGwsdCall(false);
                }
                int i2 = 0;
                int i3 = 0;
                int size2 = arrayList.size();
                while (true) {
                    GsmCdmaConnection gsmCdmaConnection2 = gsmCdmaConnection;
                    if (i2 >= this.mConnections.length) {
                        boolean zOnDisconnect = z4;
                        boolean z8 = z5;
                        boolean z9 = z6;
                        int i4 = size;
                        if (!isPhoneTypeGsm() && z7) {
                            checkAndEnableDataCallAfterEmergencyCallDropped();
                        }
                        if (this.mPendingMO != null) {
                            Rlog.d("GsmCdmaCallTracker", "Pending MO dropped before poll fg state:" + this.mForegroundCall.getState());
                            this.mDroppedDuringPoll.add(this.mPendingMO);
                            this.mPendingMO = null;
                            this.mHangupPendingMO = false;
                            updateWaitPollAfterAbortPendingMO(false);
                            if (this.mPendingCallInEcm) {
                                this.mPendingCallInEcm = false;
                            }
                            if (this.mPhone.isEcmCanceledForEmergency()) {
                                this.mPhone.handleTimerInEmergencyCallbackMode(0);
                            }
                            if (!isPhoneTypeGsm()) {
                                checkAndEnableDataCallAfterEmergencyCallDropped();
                            }
                        }
                        if (arrayList.size() == 0 && this.mConnections.length == 0) {
                            log("check whether fgCall or ringCall have mConnections");
                            if (!isPhoneTypeGsm()) {
                                int size3 = this.mForegroundCall.mConnections.size();
                                for (int i5 = 0; i5 < size3; i5++) {
                                    log("adding fgCall cn " + i5 + " to droppedDuringPoll");
                                    this.mDroppedDuringPoll.add((GsmCdmaConnection) this.mForegroundCall.mConnections.get(i5));
                                }
                                int size4 = this.mRingingCall.mConnections.size();
                                for (int i6 = 0; i6 < size4; i6++) {
                                    log("adding rgCall cn " + i6 + " to droppedDuringPoll");
                                    this.mDroppedDuringPoll.add((GsmCdmaConnection) this.mRingingCall.mConnections.get(i6));
                                }
                            }
                        }
                        if (connectionCheckMtFindNewRinging != null) {
                            this.mPhone.notifyNewRingingConnection(connectionCheckMtFindNewRinging);
                        }
                        ArrayList arrayList3 = new ArrayList();
                        int size5 = this.mDroppedDuringPoll.size() - 1;
                        GsmCdmaConnection gsmCdmaConnection3 = gsmCdmaConnection2;
                        boolean z10 = z9;
                        while (size5 >= 0) {
                            GsmCdmaConnection gsmCdmaConnection4 = (GsmCdmaConnection) this.mDroppedDuringPoll.get(size5);
                            boolean z11 = false;
                            if (isCommandExceptionRadioNotAvailable(asyncResult2.exception)) {
                                this.mDroppedDuringPoll.remove(size5);
                                z11 = true;
                                zOnDisconnect |= gsmCdmaConnection4.onDisconnect(14);
                            } else if (gsmCdmaConnection4.isIncoming() && gsmCdmaConnection4.getConnectTime() == 0) {
                                int i7 = gsmCdmaConnection4.mCause == 3 ? 16 : 1;
                                log("missed/rejected call, conn.cause=" + gsmCdmaConnection4.mCause);
                                log("setting cause to " + i7);
                                this.mDroppedDuringPoll.remove(size5);
                                boolean zOnDisconnect2 = zOnDisconnect | gsmCdmaConnection4.onDisconnect(i7);
                                z11 = true;
                                arrayList3.add(gsmCdmaConnection4);
                                zOnDisconnect = zOnDisconnect2;
                            } else if (gsmCdmaConnection4.mCause == 3 || gsmCdmaConnection4.mCause == 7) {
                                this.mDroppedDuringPoll.remove(size5);
                                boolean zOnDisconnect3 = zOnDisconnect | gsmCdmaConnection4.onDisconnect(gsmCdmaConnection4.mCause);
                                z11 = true;
                                arrayList3.add(gsmCdmaConnection4);
                                zOnDisconnect = zOnDisconnect3;
                            }
                            if (!isPhoneTypeGsm() && z11 && z10 && gsmCdmaConnection4 == gsmCdmaConnection3) {
                                gsmCdmaConnection3 = null;
                                z10 = false;
                            }
                            size5--;
                            asyncResult2 = asyncResult;
                        }
                        if (arrayList3.size() > 0) {
                            this.mMetrics.writeRilCallList(this.mPhone.getPhoneId(), arrayList3, TelephonyManager.getDefault().getNetworkCountryIso());
                        }
                        if (this.mImsConfHostConnection != null) {
                            MtkImsPhoneConnection mtkImsPhoneConnection = this.mImsConfHostConnection;
                            if (this.mImsConfParticipants.size() >= 2) {
                                restoreConferenceParticipantAddress();
                                Rlog.d(PROP_LOG_TAG, "SRVCC: notify new participant connections");
                                mtkImsPhoneConnection.notifyConferenceConnectionsConfigured(this.mImsConfParticipants);
                            } else if (this.mImsConfParticipants.size() == 1) {
                                GsmCdmaConnection gsmCdmaConnection5 = this.mImsConfParticipants.get(0);
                                String conferenceParticipantAddress = mtkImsPhoneConnection.getConferenceParticipantAddress(0);
                                Rlog.d(PROP_LOG_TAG, "SRVCC: restore participant connection with address: " + Rlog.pii(PROP_LOG_TAG, conferenceParticipantAddress));
                                if (gsmCdmaConnection5 instanceof MtkGsmCdmaConnection) {
                                    ((MtkGsmCdmaConnection) gsmCdmaConnection5).updateConferenceParticipantAddress(conferenceParticipantAddress);
                                }
                                Rlog.d(PROP_LOG_TAG, "SRVCC: only one connection, consider it as a normal call SRVCC");
                                this.mPhone.notifyHandoverStateChanged(gsmCdmaConnection5);
                            } else {
                                Rlog.e(PROP_LOG_TAG, "SRVCC: abnormal case, no participant connections.");
                            }
                            this.mImsConfParticipants.clear();
                            this.mImsConfHostConnection = null;
                            this.mEconfSrvccConnectionIds = null;
                        }
                        Iterator it = this.mHandoverConnections.iterator();
                        while (it.hasNext()) {
                            Connection connection = (Connection) it.next();
                            log("handlePollCalls - disconnect hoConn= " + connection + " hoConn.State= " + connection.getState());
                            if (connection.getState().isRinging()) {
                                connection.onDisconnect(1);
                            } else {
                                connection.onDisconnect(-1);
                            }
                            it.remove();
                        }
                        if (this.mDroppedDuringPoll.size() > 0) {
                            this.mMtkCi.getLastCallFailCause(obtainNoPollCompleteMessage(5));
                        }
                        if (z8) {
                            pollCallsAfterDelay();
                        }
                        if ((connectionCheckMtFindNewRinging != null || z3 || zOnDisconnect) && !this.mHasPendingSwapRequest) {
                            internalClearDisconnected();
                        }
                        updatePhoneState();
                        if (z10) {
                            if (isPhoneTypeGsm()) {
                                for (Connection connection2 : arrayList2) {
                                    log("Notify unknown for " + connection2);
                                    this.mPhone.notifyUnknownConnection(connection2);
                                }
                            } else {
                                this.mPhone.notifyUnknownConnection(gsmCdmaConnection3);
                            }
                        }
                        if (z3 || connectionCheckMtFindNewRinging != null || zOnDisconnect) {
                            this.mPhone.notifyPreciseCallStateChanged();
                            updateMetrics(this.mConnections);
                        }
                        if (i4 > 0 && this.mHandoverConnections.size() == 0 && (imsPhone = this.mPhone.getImsPhone()) != null) {
                            imsPhone.callEndCleanupHandOverCallIfAny();
                        }
                        if (isPhoneTypeGsm() && this.mConnections != null && this.mConnections.length == 19 && this.mHelper.getCurrentTotalConnections() == 1 && this.mRingingCall.getState() == Call.State.WAITING) {
                            this.mRingingCall.mState = Call.State.INCOMING;
                        }
                        return;
                    }
                    GsmCdmaConnection gsmCdmaConnection6 = this.mConnections[i2];
                    size2 = size2;
                    if (i3 < size2) {
                        DriverCall driverCall2 = (DriverCall) arrayList.get(i3);
                        if (isPhoneTypeGsm()) {
                            driverCall = driverCall2;
                        } else {
                            driverCall = driverCall2;
                            driverCall.number = processPlusCodeForDriverCall(driverCall.number, driverCall.isMT, driverCall.TOA);
                        }
                        if (driverCall.index == i2 + 1) {
                            i3++;
                        } else {
                            driverCall = null;
                        }
                    } else {
                        size2 = size2;
                        z4 = z4;
                        z6 = z6;
                        size = size;
                        driverCall = null;
                    }
                    if (gsmCdmaConnection6 != null || driverCall != null) {
                        z7 = false;
                    }
                    if (gsmCdmaConnection6 != null || driverCall == null) {
                        z = z5;
                        z2 = z7;
                        i = i3;
                        if (gsmCdmaConnection6 != null && driverCall == null) {
                            if (!isPhoneTypeGsm() || this.mPhoneType == 2) {
                                int size6 = this.mForegroundCall.mConnections.size();
                                for (int i8 = 0; i8 < size6; i8++) {
                                    log("adding fgCall cn " + i8 + " to droppedDuringPoll");
                                    this.mDroppedDuringPoll.add((GsmCdmaConnection) this.mForegroundCall.mConnections.get(i8));
                                }
                                int size7 = this.mRingingCall.mConnections.size();
                                for (int i9 = 0; i9 < size7; i9++) {
                                    log("adding rgCall cn " + i9 + " to droppedDuringPoll");
                                    this.mDroppedDuringPoll.add((GsmCdmaConnection) this.mRingingCall.mConnections.get(i9));
                                }
                                if (this.mPhone.isEcmCanceledForEmergency()) {
                                    this.mPhone.handleTimerInEmergencyCallbackMode(0);
                                }
                                checkAndEnableDataCallAfterEmergencyCallDropped();
                            } else {
                                if (((gsmCdmaConnection6.getCall() == this.mForegroundCall && this.mForegroundCall.mConnections.size() == 1 && this.mBackgroundCall.isIdle()) || (gsmCdmaConnection6.getCall() == this.mBackgroundCall && this.mBackgroundCall.mConnections.size() == 1 && this.mForegroundCall.isIdle())) && this.mRingingCall.getState() == Call.State.WAITING) {
                                    this.mRingingCall.mState = Call.State.INCOMING;
                                }
                                this.mDroppedDuringPoll.add(gsmCdmaConnection6);
                                if (this.mPhone.isEcmCanceledForEmergency()) {
                                    this.mPhone.handleTimerInEmergencyCallbackMode(0);
                                }
                                this.mConnections[i2] = null;
                                this.mHelper.CallIndicationEnd();
                                this.mHelper.clearForwardingAddressVariables(i2);
                            }
                            this.mConnections[i2] = null;
                        } else if (gsmCdmaConnection6 != null && driverCall != null && !gsmCdmaConnection6.compareTo(driverCall) && isPhoneTypeGsm()) {
                            this.mDroppedDuringPoll.add(gsmCdmaConnection6);
                            if (this.mPendingMO == null || !this.mPendingMO.compareTo(driverCall)) {
                                this.mConnections[i2] = new MtkGsmCdmaConnection(this.mPhone, driverCall, this, i2);
                            } else {
                                Rlog.d(PROP_LOG_TAG, "ringing disc not updated yet & replaced by pendingMo");
                                this.mConnections[i2] = this.mPendingMO;
                                this.mPendingMO.mIndex = i2;
                                this.mPendingMO.update(driverCall);
                                this.mPendingMO = null;
                            }
                            if (this.mConnections[i2].getCall() == this.mRingingCall) {
                                connectionCheckMtFindNewRinging = this.mConnections[i2];
                            }
                            z3 = true;
                            gsmCdmaConnection = gsmCdmaConnection2;
                            z6 = z6;
                        } else if (gsmCdmaConnection6 != null && driverCall != null) {
                            if (isPhoneTypeGsm() || gsmCdmaConnection6.isIncoming() == driverCall.isMT) {
                                z3 = z3 || gsmCdmaConnection6.update(driverCall);
                                gsmCdmaConnection = gsmCdmaConnection2;
                                z6 = z6;
                            } else if (driverCall.isMT) {
                                this.mConnections[i2] = new MtkGsmCdmaConnection(this.mPhone, driverCall, this, i2);
                                this.mDroppedDuringPoll.add(gsmCdmaConnection6);
                                connectionCheckMtFindNewRinging = checkMtFindNewRinging(driverCall, i2);
                                if (connectionCheckMtFindNewRinging == null) {
                                    z6 = true;
                                    gsmCdmaConnection2 = gsmCdmaConnection6;
                                } else {
                                    z6 = z6;
                                }
                                checkAndEnableDataCallAfterEmergencyCallDropped();
                                gsmCdmaConnection = gsmCdmaConnection2;
                            } else {
                                Rlog.e("GsmCdmaCallTracker", "Error in RIL, Phantom call appeared " + driverCall);
                            }
                        }
                        gsmCdmaConnection = gsmCdmaConnection2;
                        z6 = z6;
                    } else {
                        if (this.mPendingMO == null || !this.mPendingMO.compareTo(driverCall)) {
                            log("pendingMo=" + this.mPendingMO + ", dc=" + driverCall);
                            if (this.mPendingMO != null && !this.mPendingMO.compareTo(driverCall)) {
                                Rlog.d(PROP_LOG_TAG, "MO/MT conflict! MO should be hangup by MD");
                            }
                            this.mConnections[i2] = new MtkGsmCdmaConnection(this.mPhone, driverCall, this, i2);
                            if (isPhoneTypeGsm()) {
                                this.mHelper.setForwardingAddressToConnection(i2, this.mConnections[i2]);
                            }
                            MtkImsPhoneConnection hoConnection = getHoConnection(driverCall);
                            if (hoConnection == null) {
                                z = z5;
                                z2 = z7;
                                i = i3;
                                connectionCheckMtFindNewRinging = checkMtFindNewRinging(driverCall, i2);
                                if (connectionCheckMtFindNewRinging == null) {
                                    z6 = true;
                                    if (isPhoneTypeGsm()) {
                                        arrayList2.add(this.mConnections[i2]);
                                    } else {
                                        gsmCdmaConnection2 = this.mConnections[i2];
                                    }
                                } else {
                                    z6 = z6;
                                }
                            } else if ((hoConnection instanceof MtkImsPhoneConnection) && hoConnection.isMultipartyBeforeHandover() && hoConnection.isConfHostBeforeHandover() && !hasParsingCEPCapability()) {
                                Rlog.i("GsmCdmaCallTracker", "SRVCC: goes to conference case.");
                                this.mConnections[i2].mOrigConnection = hoConnection;
                                this.mImsConfParticipants.add(this.mConnections[i2]);
                                z = z5;
                                z2 = z7;
                                i = i3;
                            } else {
                                Rlog.i("GsmCdmaCallTracker", "SRVCC: goes to normal call case.");
                                this.mConnections[i2].migrateFrom(hoConnection);
                                if (((Connection) hoConnection).mPreHandoverState != Call.State.ACTIVE && ((Connection) hoConnection).mPreHandoverState != Call.State.HOLDING && driverCall.state == DriverCall.State.ACTIVE) {
                                    this.mConnections[i2].onConnectedInOrOut();
                                }
                                this.mHandoverConnections.remove(hoConnection);
                                if (isPhoneTypeGsm()) {
                                    Iterator it2 = this.mHandoverConnections.iterator();
                                    while (it2.hasNext()) {
                                        Connection connection3 = (Connection) it2.next();
                                        boolean z12 = z7;
                                        int i10 = i3;
                                        StringBuilder sb = new StringBuilder();
                                        boolean z13 = z5;
                                        sb.append("HO Conn state is ");
                                        sb.append(connection3.mPreHandoverState);
                                        Rlog.i("GsmCdmaCallTracker", sb.toString());
                                        if (connection3.mPreHandoverState == this.mConnections[i2].getState()) {
                                            Rlog.i("GsmCdmaCallTracker", "Removing HO conn " + hoConnection + connection3.mPreHandoverState);
                                            it2.remove();
                                        }
                                        z7 = z12;
                                        i3 = i10;
                                        z5 = z13;
                                    }
                                    z = z5;
                                    z2 = z7;
                                    i = i3;
                                } else {
                                    z = z5;
                                    z2 = z7;
                                    i = i3;
                                }
                                if (this.mIsInEmergencyCall && !this.mPhone.isEcmCanceledForEmergency() && this.mPhone.isInEcm()) {
                                    Rlog.i("GsmCdmaCallTracker", "Ecm timer has been canceled in IMS, so set setEcmCanceledForEmergency(true) directly");
                                    this.mPhone.setEcmCanceledForEmergency(true);
                                }
                                this.mPhone.notifyHandoverStateChanged(this.mConnections[i2]);
                                this.mConnections[i2].onConnectionEvent("android.telecom.event.CALL_REMOTELY_UNHELD", (Bundle) null);
                            }
                            z3 = true;
                            gsmCdmaConnection = gsmCdmaConnection2;
                        } else {
                            this.mConnections[i2] = this.mPendingMO;
                            this.mPendingMO.mIndex = i2;
                            this.mPendingMO.update(driverCall);
                            this.mPendingMO = null;
                            if (this.mHangupPendingMO) {
                                this.mHangupPendingMO = false;
                                if (this.mPhone.isEcmCanceledForEmergency()) {
                                    this.mPhone.handleTimerInEmergencyCallbackMode(0);
                                }
                                try {
                                    log("poll: hangupPendingMO, hangup conn " + i2);
                                    updateWaitPollAfterAbortPendingMO(true);
                                    hangup(this.mConnections[i2]);
                                } catch (CallStateException e) {
                                    Rlog.e("GsmCdmaCallTracker", "unexpected error on hangup");
                                    updateWaitPollAfterAbortPendingMO(false);
                                }
                                return;
                            }
                            z = z5;
                            z2 = z7;
                            i = i3;
                        }
                        z6 = z6;
                        z3 = true;
                        gsmCdmaConnection = gsmCdmaConnection2;
                    }
                    i2++;
                    z7 = z2;
                    z4 = z4;
                    size = size;
                    i3 = i;
                    z5 = z;
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangup(GsmCdmaCall gsmCdmaCall) throws CallStateException {
        if (gsmCdmaCall.getConnections().size() == 0) {
            throw new CallStateException("no connections in call");
        }
        if (gsmCdmaCall == this.mRingingCall) {
            log("(ringing) hangup waiting or background");
            logHangupEvent(gsmCdmaCall);
            GsmCdmaConnection gsmCdmaConnection = (GsmCdmaConnection) gsmCdmaCall.getConnections().get(0);
            if (!(gsmCdmaConnection instanceof MtkGsmCdmaConnection) || ((MtkGsmCdmaConnection) gsmCdmaConnection).getRejectWithCause() == -1) {
                this.mCi.hangupWaitingOrBackground(obtainCompleteMessage(1003));
            } else {
                this.mMtkCi.hangupConnectionWithCause(gsmCdmaConnection.getGsmCdmaIndex(), ((MtkGsmCdmaConnection) gsmCdmaConnection).getRejectWithCause(), obtainCompleteMessage(1003));
            }
        } else if (gsmCdmaCall == this.mForegroundCall) {
            if (gsmCdmaCall.isDialingOrAlerting()) {
                log("(foregnd) hangup dialing or alerting...");
                hangup((GsmCdmaConnection) gsmCdmaCall.getConnections().get(0));
            } else {
                logHangupEvent(gsmCdmaCall);
                log("(foregnd) hangup active");
                if (isPhoneTypeGsm()) {
                    if (TelephonyManager.getDefault().isEmergencyNumber(((GsmCdmaConnection) gsmCdmaCall.getConnections().get(0)).getAddress())) {
                        Rlog.d(PROP_LOG_TAG, "(foregnd) hangup active ECC call by connection index");
                        hangup((GsmCdmaConnection) gsmCdmaCall.getConnections().get(0));
                    } else if (this.mWaitForHoldToHangupRequest.isWaitToHangup()) {
                        this.mWaitForHoldToHangupRequest.setToHangup(gsmCdmaCall);
                    } else {
                        hangupForegroundResumeBackground();
                    }
                } else {
                    hangupForegroundResumeBackground();
                }
            }
        } else {
            if (gsmCdmaCall != this.mBackgroundCall) {
                throw new RuntimeException("GsmCdmaCall " + gsmCdmaCall + "does not belong to GsmCdmaCallTracker " + this);
            }
            if (this.mRingingCall.isRinging()) {
                log("hangup all conns in background call");
                hangupAllConnections(gsmCdmaCall);
            } else {
                log("(backgnd) hangup waiting/background");
                if (this.mWaitForHoldToHangupRequest.isWaitToHangup()) {
                    this.mWaitForHoldToHangupRequest.setToHangup(gsmCdmaCall);
                } else {
                    hangupWaitingOrBackground();
                }
            }
        }
        gsmCdmaCall.onHangupLocal();
        this.mPhone.notifyPreciseCallStateChanged();
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangup(GsmCdmaConnection gsmCdmaConnection) throws CallStateException {
        if (gsmCdmaConnection.mOwner != this) {
            throw new CallStateException("GsmCdmaConnection " + gsmCdmaConnection + "does not belong to GsmCdmaCallTracker " + this);
        }
        if (gsmCdmaConnection == this.mPendingMO) {
            log("hangup: set hangupPendingMO to true");
            this.mHangupPendingMO = true;
            updateWaitPollAfterAbortPendingMO(false);
        } else if (!isPhoneTypeGsm() && gsmCdmaConnection.getCall() == this.mRingingCall && this.mRingingCall.getState() == Call.State.WAITING) {
            gsmCdmaConnection.onLocalDisconnect();
            updatePhoneState();
            this.mPhone.notifyPreciseCallStateChanged();
            return;
        } else {
            try {
                this.mMetrics.writeRilHangup(this.mPhone.getPhoneId(), gsmCdmaConnection, gsmCdmaConnection.getGsmCdmaIndex(), TelephonyManager.getDefault().getNetworkCountryIso());
                this.mCi.hangupConnection(gsmCdmaConnection.getGsmCdmaIndex(), obtainCompleteMessage(1003));
            } catch (CallStateException e) {
                Rlog.w("GsmCdmaCallTracker", "GsmCdmaCallTracker WARN: hangup() on absent connection " + gsmCdmaConnection);
            }
        }
        gsmCdmaConnection.onHangupLocal();
    }

    public void hangupAll() throws CallStateException {
        Rlog.d(PROP_LOG_TAG, "hangupAll");
        this.mMtkCi.hangupAll(obtainCompleteMessage());
        if (!this.mRingingCall.isIdle()) {
            this.mRingingCall.onHangupLocal();
        }
        if (!this.mForegroundCall.isIdle()) {
            this.mForegroundCall.onHangupLocal();
        }
        if (this.mBackgroundCall.isIdle()) {
            return;
        }
        this.mBackgroundCall.onHangupLocal();
    }

    public void hangupForegroundResumeBackground() {
        log("hangupForegroundResumeBackground");
        this.mCi.hangupForegroundResumeBackground(obtainCompleteMessage(1003));
    }

    public void hangupWaitingOrBackground() {
        log("hangupWaitingOrBackground");
        logHangupEvent(this.mBackgroundCall);
        this.mCi.hangupWaitingOrBackground(obtainCompleteMessage(1003));
    }

    boolean hasParsingCEPCapability() {
        MtkHardwareConfig mtkHardwareConfig;
        String simOperatorNumericForPhone = ((TelephonyManager) this.mPhone.getContext().getSystemService("phone")).getSimOperatorNumericForPhone(this.mPhone.getPhoneId());
        log("hasParsingCEPCapability - mccmnc = " + simOperatorNumericForPhone);
        if ("25099".equals(simOperatorNumericForPhone) || "732103".equals(simOperatorNumericForPhone) || "732111".equals(simOperatorNumericForPhone) || "24001".equals(simOperatorNumericForPhone) || (mtkHardwareConfig = (MtkHardwareConfig) this.mTelDevController.getModem(0)) == null) {
            return false;
        }
        return mtkHardwareConfig.hasParsingCEPCapability();
    }

    protected void notifySrvccState(Call.SrvccState srvccState, ArrayList<Connection> arrayList) {
        if (srvccState == Call.SrvccState.STARTED && arrayList != null) {
            this.mHandoverConnections.addAll(arrayList);
            if (!hasParsingCEPCapability()) {
                for (Connection connection : this.mHandoverConnections) {
                    if (connection.isMultiparty() && (connection instanceof MtkImsPhoneConnection) && connection.isConferenceHost()) {
                        log("srvcc: mNeedWaitImsEConfSrvcc set True");
                        this.mNeedWaitImsEConfSrvcc = true;
                        this.mImsConfHostConnection = connection;
                    }
                }
            }
        } else if (srvccState != Call.SrvccState.COMPLETED) {
            this.mHandoverConnections.clear();
        }
        log("notifySrvccState: mHandoverConnections= " + this.mHandoverConnections.toString());
    }

    protected void reset() {
        this.mHelper.setGwsdCall(false);
        if (!hasC2kOverImsModem()) {
            super.reset();
            return;
        }
        Rlog.d("GsmCdmaCallTracker", "reset");
        for (GsmCdmaConnection gsmCdmaConnection : this.mConnections) {
            if (gsmCdmaConnection != null) {
                gsmCdmaConnection.dispose();
            }
        }
        if (this.mPendingMO != null) {
            this.mPendingMO.dispose();
        }
        this.mConnections = null;
        this.mPendingMO = null;
        clearDisconnected();
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void switchWaitingOrHoldingAndActive() throws CallStateException {
        if (this.mRingingCall.getState() == Call.State.INCOMING) {
            throw new CallStateException("cannot be in the incoming state");
        }
        if (!isPhoneTypeGsm()) {
            if (this.mForegroundCall.getConnections().size() > 1) {
                flashAndSetGenericTrue();
                return;
            } else {
                this.mCi.sendCDMAFeatureCode("", obtainMessage(8));
                return;
            }
        }
        if (this.mHasPendingSwapRequest) {
            return;
        }
        this.mWaitForHoldToHangupRequest.setToHangup();
        this.mCi.switchWaitingOrHoldingAndActive(obtainCompleteMessage(8));
        this.mHasPendingSwapRequest = true;
    }

    protected void updatePhoneState() {
        PhoneConstants.State state = this.mState;
        if (this.mRingingCall.isRinging()) {
            this.mState = PhoneConstants.State.RINGING;
        } else if (this.mPendingMO == null && this.mForegroundCall.isIdle() && this.mBackgroundCall.isIdle()) {
            Phone imsPhone = this.mPhone.getImsPhone();
            if (imsPhone != null) {
                imsPhone.callEndCleanupHandOverCallIfAny();
            }
            this.mState = PhoneConstants.State.IDLE;
        } else {
            this.mState = PhoneConstants.State.OFFHOOK;
        }
        if (this.mState == PhoneConstants.State.IDLE && state != this.mState) {
            this.mVoiceCallEndedRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        } else if (state == PhoneConstants.State.IDLE && state != this.mState) {
            this.mVoiceCallStartedRegistrants.notifyRegistrants(new AsyncResult((Object) null, (Object) null, (Throwable) null));
        }
        log("update phone state, old=" + state + " new=" + this.mState);
        if (this.mState != state) {
            this.mPhone.notifyPhoneStateChanged();
            this.mMetrics.writePhoneState(this.mPhone.getPhoneId(), this.mState);
        }
    }

    protected void updatePhoneType(boolean z) {
        updatePhoneType(z, false);
    }

    void updateWaitPollAfterAbortPendingMO(boolean z) {
        updateWaitPollAfterAbortPendingMO(z, false);
    }

    void updateWaitPollAfterAbortPendingMO(boolean z, boolean z2) {
        if (this.mWaitPollAfterHangupPendingMO != z || z2) {
            StringBuilder sb = new StringBuilder();
            sb.append("set mWaitPollAfterHangupPendingMO ");
            sb.append(this.mWaitPollAfterHangupPendingMO ? "t" : "f");
            sb.append(" -> ");
            sb.append(z ? "t" : "f");
            sb.append(z2 ? " (forceUpdate)" : "");
            Rlog.d("GsmCdmaCallTracker", sb.toString());
            this.mWaitPollAfterHangupPendingMO = z;
        }
    }
}
