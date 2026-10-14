package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemClock;
import android.telephony.PhoneNumberUtils;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.android.internal.telephony.Call;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.DriverCall;
import com.android.internal.telephony.GsmCdmaCall;
import com.android.internal.telephony.GsmCdmaCallTracker;
import com.android.internal.telephony.GsmCdmaConnection;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.Registrant;
import com.android.internal.telephony.cdma.CdmaCallWaitingNotification;
import com.android.telephony.Rlog;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkGsmCdmaConnection extends GsmCdmaConnection {
    private static final int MO_CALL_VIBRATE_TIME = 200;
    private static final String PROP_LOG_TAG = "GsmCdmaConn";
    String mForwardingAddress;
    private boolean mIsIncomingCallGwsd;
    private boolean mIsRealConnected;
    private boolean mReceivedAccepted;
    String mRedirectingAddress;
    int mRejectCauseToRIL;

    public MtkGsmCdmaConnection(Context context, CdmaCallWaitingNotification cdmaCallWaitingNotification, GsmCdmaCallTracker gsmCdmaCallTracker, GsmCdmaCall gsmCdmaCall) {
        super(context, cdmaCallWaitingNotification, gsmCdmaCallTracker, gsmCdmaCall);
        this.mRejectCauseToRIL = -1;
        this.mIsIncomingCallGwsd = false;
    }

    public MtkGsmCdmaConnection(GsmCdmaPhone gsmCdmaPhone, DriverCall driverCall, GsmCdmaCallTracker gsmCdmaCallTracker, int i) {
        super(gsmCdmaPhone, driverCall, gsmCdmaCallTracker, i);
        this.mRejectCauseToRIL = -1;
        this.mIsIncomingCallGwsd = false;
        if (((MtkGsmCdmaCallTracker) gsmCdmaCallTracker).mHelper.isGwsdCall()) {
            this.mIsIncomingCallGwsd = true;
            ((MtkGsmCdmaCallTracker) gsmCdmaCallTracker).mHelper.setGwsdCall(false);
        }
        String strConvertAddress = ((MtkGsmCdmaCallTracker) gsmCdmaCallTracker).mMtkGsmCdmaCallTrackerExt.convertAddress(this.mAddress);
        if (strConvertAddress != null) {
            setConnectionExtras(((MtkGsmCdmaCallTracker) gsmCdmaCallTracker).mMtkGsmCdmaCallTrackerExt.getAddressExtras(this.mAddress));
            this.mNumberConverted = true;
            this.mConvertedNumber = this.mAddress;
            this.mAddress = strConvertAddress;
        }
    }

    public MtkGsmCdmaConnection(GsmCdmaPhone gsmCdmaPhone, String str, GsmCdmaCallTracker gsmCdmaCallTracker, GsmCdmaCall gsmCdmaCall, boolean z) {
        super(gsmCdmaPhone, str, gsmCdmaCallTracker, gsmCdmaCall, z);
        this.mRejectCauseToRIL = -1;
        this.mIsIncomingCallGwsd = false;
        this.mIsRealConnected = false;
        this.mReceivedAccepted = false;
    }

    protected static boolean equalsHandlesNulls(Object obj, Object obj2) {
        if (obj == null) {
            return obj2 == null;
        }
        return obj.equals(obj2);
    }

    private boolean isInChina() {
        int phoneId = this.mParent.getPhone().getPhoneId();
        TelephonyManager telephonyManagerFrom = TelephonyManager.from(this.mParent.getPhone().getContext());
        String networkOperatorForPhone = telephonyManagerFrom.getNetworkOperatorForPhone(phoneId);
        String networkCountryIso = "";
        if (TextUtils.isEmpty(networkOperatorForPhone)) {
            networkOperatorForPhone = MtkTelephonyManagerEx.getDefault().getLocatedPlmn(phoneId);
        }
        log("isInChina, numeric=" + Rlog.pii(PROP_LOG_TAG, networkOperatorForPhone));
        if (TextUtils.isEmpty(networkOperatorForPhone)) {
            networkCountryIso = telephonyManagerFrom.getNetworkCountryIso(phoneId);
            log("isInChina, countryIso=" + Rlog.pii(PROP_LOG_TAG, networkCountryIso));
        }
        return (networkOperatorForPhone != null && networkOperatorForPhone.indexOf(RadioCapabilitySwitchUtil.CN_MCC) == 0) || "cn".equals(networkCountryIso);
    }

    private void vibrateForAccepted() {
    }

    public void clearRejectWithCause() {
        if (this.mRejectCauseToRIL != -1) {
            Rlog.d(PROP_LOG_TAG, "clearRejectWithCause (" + this.mRejectCauseToRIL + " to -1)");
            this.mRejectCauseToRIL = -1;
        }
    }

    public boolean compareTo(DriverCall driverCall) {
        if (!this.mIsIncoming && !driverCall.isMT) {
            return true;
        }
        if (!isPhoneTypeGsm() || this.mOrigConnection == null) {
            return this.mIsIncoming == driverCall.isMT && (equalsHandlesNulls(this.mAddress, PhoneNumberUtils.stringFromStringAndTOA(driverCall.number, driverCall.TOA)) || isIncomingCallGwsd());
        }
        return true;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void consultativeTransfer(Connection connection) throws CallStateException {
        GsmCdmaPhone phone = this.mOwner.getPhone();
        if (phone == null) {
            throw new CallStateException("cs ect fail (phone null)");
        }
        if (!phone.canTransfer()) {
            throw new CallStateException("cs can transfer check fail");
        }
        phone.explicitCallTransfer();
    }

    public String getForwardingAddress() {
        return this.mForwardingAddress;
    }

    public String getRedirectingAddress() {
        return this.mRedirectingAddress;
    }

    public int getRejectWithCause() {
        return this.mRejectCauseToRIL;
    }

    public synchronized boolean isIncomingCallGwsd() {
        Rlog.d("GsmCdmaConnection", "isIncomingCallGwsd: " + this.mIsIncomingCallGwsd);
        return this.mIsIncomingCallGwsd;
    }

    public boolean isMultiparty() {
        if (this.mParent != null) {
            return this.mParent.isMultiparty();
        }
        return false;
    }

    public boolean isRealConnected() {
        return this.mIsRealConnected;
    }

    boolean onCdmaCallAccepted() {
        log("onCdmaCallAccepted, mIsRealConnected=" + this.mIsRealConnected + ", state=" + getState());
        if (getState() != Call.State.ACTIVE) {
            this.mReceivedAccepted = true;
            return false;
        }
        if (!this.mIsRealConnected) {
            this.mIsRealConnected = true;
            processNextPostDialChar();
            vibrateForAccepted();
        }
        return true;
    }

    public void onConnectedInOrOut() {
        this.mConnectTime = System.currentTimeMillis();
        this.mConnectTimeReal = SystemClock.elapsedRealtime();
        this.mDuration = 0L;
        log("onConnectedInOrOut: connectTime=" + this.mConnectTime);
        if (this.mIsIncoming) {
            releaseWakeLock();
            return;
        }
        if (isPhoneTypeGsm()) {
            processNextPostDialChar();
            return;
        }
        int size = this.mParent.mConnections.size();
        log("mParent.mConnections.size()=" + size);
        Iterator it = this.mParent.mConnections.iterator();
        while (it.hasNext()) {
            if (!((Connection) it.next()).isAlive()) {
                size--;
            }
        }
        if (!isInChina() && !this.mIsRealConnected && size == 1) {
            this.mIsRealConnected = true;
            processNextPostDialChar();
            vibrateForAccepted();
        }
        if (size > 1) {
            this.mIsRealConnected = true;
            processNextPostDialChar();
        }
    }

    public void onHangupLocal() {
        clearRejectWithCause();
        super.onHangupLocal();
    }

    protected void processNextPostDialChar() {
        char cCharAt;
        Message messageMessageForRegistrant;
        if (this.mPostDialState == Connection.PostDialState.CANCELLED) {
            return;
        }
        if (this.mPostDialString == null || this.mPostDialString.length() <= this.mNextPostDialChar || this.mDisconnected) {
            setPostDialState(Connection.PostDialState.COMPLETE);
            cCharAt = 0;
        } else {
            setPostDialState(Connection.PostDialState.STARTED);
            String str = this.mPostDialString;
            int i = this.mNextPostDialChar;
            this.mNextPostDialChar = i + 1;
            cCharAt = str.charAt(i);
            if (!processPostDialChar(cCharAt)) {
                this.mHandler.obtainMessage(3).sendToTarget();
                Rlog.e("GsmCdmaConnection", "processNextPostDialChar: c=" + cCharAt + " isn't valid!");
                return;
            }
        }
        notifyPostDialListenersNextChar(cCharAt);
        Registrant postDialHandler = this.mOwner.getPhone().getPostDialHandler();
        if (postDialHandler == null || (messageMessageForRegistrant = postDialHandler.messageForRegistrant()) == null) {
            return;
        }
        Connection.PostDialState postDialState = this.mPostDialState;
        AsyncResult asyncResultForMessage = AsyncResult.forMessage(messageMessageForRegistrant);
        asyncResultForMessage.result = this;
        asyncResultForMessage.userObj = postDialState;
        messageMessageForRegistrant.arg1 = cCharAt;
        messageMessageForRegistrant.sendToTarget();
    }

    void resumeHoldAfterDialFailed() {
        if (this.mParent != null) {
            this.mParent.detach(this);
        }
        this.mParent = this.mOwner.mForegroundCall;
        this.mParent.attachFake(this, Call.State.ACTIVE);
    }

    public void setForwardingAddress(String str) {
        this.mForwardingAddress = str;
    }

    public void setRedirectingAddress(String str) {
        this.mRedirectingAddress = str;
    }

    public void setRejectWithCause(int i) {
        if (this.mParent == null || this.mOwner == null) {
            Rlog.d(PROP_LOG_TAG, "setRejectWithCause fail. mParent(" + this.mParent + "), mOwner(" + this.mOwner + ")");
            return;
        }
        GsmCdmaPhone phone = this.mOwner.getPhone();
        if (MtkIncomingCallChecker.isMtkEnhancedCallBlockingEnabled(phone.getContext(), phone.getSubId())) {
            Rlog.d(PROP_LOG_TAG, "setRejectWithCause set (" + this.mRejectCauseToRIL + " to " + i + ")");
            this.mRejectCauseToRIL = i;
        }
    }

    public boolean update(DriverCall driverCall) {
        boolean z;
        boolean z2 = false;
        boolean zIsConnectingInOrOut = isConnectingInOrOut();
        boolean z3 = getState() == Call.State.HOLDING;
        GsmCdmaCall gsmCdmaCallParentFromDCState = parentFromDCState(driverCall.state);
        log("parent= " + this.mParent + ", newParent= " + gsmCdmaCallParentFromDCState);
        if (isPhoneTypeGsm() && this.mOrigConnection != null) {
            log("update: mOrigConnection is not null");
        } else if (isIncoming()) {
            log(" mNumberConverted " + this.mNumberConverted);
            if (((MtkGsmCdmaCallTracker) this.mOwner).mMtkGsmCdmaCallTrackerExt.isAddressChanged(this.mNumberConverted, driverCall.number, this.mAddress, this.mConvertedNumber)) {
                log("update: phone # changed!");
                this.mAddress = driverCall.number;
                z2 = true;
            }
        }
        int audioQualityFromDC = getAudioQualityFromDC(driverCall.audioQuality);
        if (getAudioQuality() != audioQualityFromDC) {
            StringBuilder sb = new StringBuilder();
            sb.append("update: audioQuality # changed!:  ");
            sb.append(audioQualityFromDC == 2 ? "high" : "standard");
            log(sb.toString());
            setAudioQuality(audioQualityFromDC);
            z2 = true;
        }
        if (!TextUtils.isEmpty(driverCall.name) && !driverCall.name.equals(this.mCnapName)) {
            z2 = true;
            this.mCnapName = driverCall.name;
        }
        log("--dssds----" + this.mCnapName);
        this.mCnapNamePresentation = driverCall.namePresentation;
        this.mNumberPresentation = driverCall.numberPresentation;
        if (gsmCdmaCallParentFromDCState != this.mParent) {
            if (this.mParent != null) {
                this.mParent.detach(this);
            }
            gsmCdmaCallParentFromDCState.attach(this, driverCall);
            this.mParent = gsmCdmaCallParentFromDCState;
            z = true;
        } else {
            z = z2 || this.mParent.update(this, driverCall);
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append("update: parent=");
        sb2.append(this.mParent);
        sb2.append(", hasNewParent=");
        sb2.append(gsmCdmaCallParentFromDCState != this.mParent);
        sb2.append(", wasConnectingInOrOut=");
        sb2.append(zIsConnectingInOrOut);
        sb2.append(", wasHolding=");
        sb2.append(z3);
        sb2.append(", isConnectingInOrOut=");
        sb2.append(isConnectingInOrOut());
        sb2.append(", changed=");
        sb2.append(z);
        log(sb2.toString());
        if (zIsConnectingInOrOut && !isConnectingInOrOut()) {
            onConnectedInOrOut();
        }
        if (z && !z3 && getState() == Call.State.HOLDING) {
            onStartedHolding();
        }
        if (!isPhoneTypeGsm()) {
            log("state=" + getState() + ", mReceivedAccepted=" + this.mReceivedAccepted);
            if (getState() == Call.State.ACTIVE && this.mReceivedAccepted) {
                onCdmaCallAccepted();
                this.mReceivedAccepted = false;
            }
        }
        return z;
    }

    void updateConferenceParticipantAddress(String str) {
        this.mAddress = str;
    }
}
