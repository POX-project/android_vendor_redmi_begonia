package com.mediatek.internal.telephony.test;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import com.android.internal.telephony.DriverCall;
import com.mediatek.internal.telephony.MtkWspTypeDecoder;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
class MtkSimulatedGsmCallState extends Handler {
    static final int CONNECTING_PAUSE_MSEC = 500;
    static final int EVENT_PROGRESS_CALL_STATE = 1;
    static final int MAX_CALLS = 7;
    private boolean mAutoProgressConnecting;
    CallInfo[] mCalls;
    private boolean mNextDialFailImmediately;

    public MtkSimulatedGsmCallState(Looper looper) {
        super(looper);
        this.mCalls = new CallInfo[7];
        this.mAutoProgressConnecting = true;
    }

    private int countActiveLines() throws InvalidStateEx {
        boolean z = false;
        boolean z2 = false;
        boolean z3 = false;
        boolean zIsConnecting = false;
        boolean zIsRinging = false;
        boolean z4 = false;
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i >= callInfoArr.length) {
                int i2 = z2 ? 0 + 1 : 0;
                if (z3) {
                    i2++;
                }
                if (zIsConnecting) {
                    i2++;
                }
                return zIsRinging ? i2 + 1 : i2;
            }
            CallInfo callInfo = callInfoArr[i];
            if (callInfo != null) {
                if (!z && callInfo.mIsMpty) {
                    z4 = callInfo.mState == CallInfo.State.HOLDING;
                } else {
                    if (callInfo.mIsMpty && z4 && callInfo.mState == CallInfo.State.ACTIVE) {
                        Rlog.e("MtkModelInterpreter", "Invalid state");
                        throw new InvalidStateEx();
                    }
                    if (!callInfo.mIsMpty && z && z4 && callInfo.mState == CallInfo.State.HOLDING) {
                        Rlog.e("MtkModelInterpreter", "Invalid state");
                        throw new InvalidStateEx();
                    }
                }
                z |= callInfo.mIsMpty;
                z2 |= callInfo.mState == CallInfo.State.HOLDING;
                z3 |= callInfo.mState == CallInfo.State.ACTIVE;
                zIsConnecting |= callInfo.isConnecting();
                zIsRinging |= callInfo.isRinging();
            }
            i++;
        }
    }

    public boolean conference() {
        int i = 0;
        int i2 = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i2 < callInfoArr.length) {
                CallInfo callInfo = callInfoArr[i2];
                if (callInfo != null) {
                    i++;
                    if (callInfo.isConnecting()) {
                        return false;
                    }
                }
                i2++;
            } else {
                int i3 = 0;
                while (true) {
                    CallInfo[] callInfoArr2 = this.mCalls;
                    if (i3 >= callInfoArr2.length) {
                        return true;
                    }
                    CallInfo callInfo2 = callInfoArr2[i3];
                    if (callInfo2 != null) {
                        callInfo2.mState = CallInfo.State.ACTIVE;
                        if (i > 0) {
                            callInfo2.mIsMpty = true;
                        }
                    }
                    i3++;
                }
            }
        }
    }

    public boolean explicitCallTransfer() {
        int i = 0;
        int i2 = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i2 >= callInfoArr.length) {
                return triggerHangupAll();
            }
            CallInfo callInfo = callInfoArr[i2];
            if (callInfo != null) {
                i++;
                if (callInfo.isConnecting()) {
                    return false;
                }
            }
            i2++;
        }
    }

    public List<String> getClccLines() {
        ArrayList arrayList = new ArrayList(this.mCalls.length);
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i >= callInfoArr.length) {
                return arrayList;
            }
            CallInfo callInfo = callInfoArr[i];
            if (callInfo != null) {
                arrayList.add(callInfo.toCLCCLine(i + 1));
            }
            i++;
        }
    }

    public List<DriverCall> getDriverCalls() {
        ArrayList arrayList = new ArrayList(this.mCalls.length);
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i >= callInfoArr.length) {
                Rlog.d("GSM", "SC< getDriverCalls " + arrayList);
                return arrayList;
            }
            CallInfo callInfo = callInfoArr[i];
            if (callInfo != null) {
                arrayList.add(callInfo.toDriverCall(i + 1));
            }
            i++;
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        synchronized (this) {
            if (message.what == 1) {
                progressConnectingCallState();
            }
        }
    }

    public boolean onAnswer() {
        synchronized (this) {
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (callInfo != null && (callInfo.mState == CallInfo.State.INCOMING || callInfo.mState == CallInfo.State.WAITING)) {
                    return switchActiveAndHeldOrWaiting();
                }
            }
            return false;
        }
    }

    public boolean onChld(char c, char c2) {
        int i = 0;
        if (c2 != 0 && ((i = c2 - '1') < 0 || i >= this.mCalls.length)) {
            return false;
        }
        switch (c) {
            case '0':
                return releaseHeldOrUDUB();
            case PplMessageManager.PendingMessage.PENDING_MESSAGE_LENGTH /* 49 */:
                if (c2 <= 0) {
                    return releaseActiveAcceptHeldOrWaiting();
                }
                CallInfo[] callInfoArr = this.mCalls;
                if (callInfoArr[i] == null) {
                    return false;
                }
                callInfoArr[i] = null;
                return true;
            case '2':
                return c2 <= 0 ? switchActiveAndHeldOrWaiting() : separateCall(i);
            case '3':
                return conference();
            case '4':
                return explicitCallTransfer();
            case MtkWspTypeDecoder.CONTENT_TYPE_B_CONNECTIVITY /* 53 */:
                return false;
            default:
                return false;
        }
    }

    public boolean onDial(String str) {
        int i = -1;
        Rlog.d("GSM", "SC> dial '" + str + "'");
        if (this.mNextDialFailImmediately) {
            this.mNextDialFailImmediately = false;
            Rlog.d("GSM", "SC< dial fail (per request)");
            return false;
        }
        String strExtractNetworkPortion = PhoneNumberUtils.extractNetworkPortion(str);
        if (strExtractNetworkPortion.length() == 0) {
            Rlog.d("GSM", "SC< dial fail (invalid ph num)");
            return false;
        }
        if (strExtractNetworkPortion.startsWith("*99") && strExtractNetworkPortion.endsWith("#")) {
            Rlog.d("GSM", "SC< dial ignored (gprs)");
            return true;
        }
        try {
            if (countActiveLines() > 1) {
                Rlog.d("GSM", "SC< dial fail (invalid call state)");
                return false;
            }
            int i2 = 0;
            while (true) {
                CallInfo[] callInfoArr = this.mCalls;
                if (i2 >= callInfoArr.length) {
                    if (i < 0) {
                        Rlog.d("GSM", "SC< dial fail (invalid call state)");
                        return false;
                    }
                    callInfoArr[i] = CallInfo.createOutgoingCall(strExtractNetworkPortion);
                    if (this.mAutoProgressConnecting) {
                        sendMessageDelayed(obtainMessage(1, this.mCalls[i]), 500L);
                    }
                    Rlog.d("GSM", "SC< dial (slot = " + i + ")");
                    return true;
                }
                if (i < 0 && callInfoArr[i2] == null) {
                    i = i2;
                }
                CallInfo[] callInfoArr2 = this.mCalls;
                if (callInfoArr2[i2] != null && !callInfoArr2[i2].isActiveOrHeld()) {
                    Rlog.d("GSM", "SC< dial fail (invalid call state)");
                    return false;
                }
                CallInfo[] callInfoArr3 = this.mCalls;
                if (callInfoArr3[i2] != null && callInfoArr3[i2].mState == CallInfo.State.ACTIVE) {
                    this.mCalls[i2].mState = CallInfo.State.HOLDING;
                }
                i2++;
            }
        } catch (InvalidStateEx e) {
            Rlog.d("GSM", "SC< dial fail (invalid call state)");
            return false;
        }
    }

    public boolean onHangup() {
        boolean z = false;
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i >= callInfoArr.length) {
                return z;
            }
            CallInfo callInfo = callInfoArr[i];
            if (callInfo != null && callInfo.mState != CallInfo.State.WAITING) {
                this.mCalls[i] = null;
                z = true;
            }
            i++;
        }
    }

    public void progressConnectingCallState() {
        synchronized (this) {
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (callInfo != null && callInfo.mState == CallInfo.State.DIALING) {
                    callInfo.mState = CallInfo.State.ALERTING;
                    if (!this.mAutoProgressConnecting) {
                        break;
                    }
                    sendMessageDelayed(obtainMessage(1, callInfo), 500L);
                    break;
                }
                if (callInfo != null && callInfo.mState == CallInfo.State.ALERTING) {
                    callInfo.mState = CallInfo.State.ACTIVE;
                    break;
                }
            }
        }
    }

    public void progressConnectingToActive() {
        synchronized (this) {
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (callInfo != null && (callInfo.mState == CallInfo.State.DIALING || callInfo.mState == CallInfo.State.ALERTING)) {
                    callInfo.mState = CallInfo.State.ACTIVE;
                    break;
                }
            }
        }
    }

    public boolean releaseActiveAcceptHeldOrWaiting() {
        boolean z = false;
        boolean z2 = false;
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i >= callInfoArr.length) {
                break;
            }
            CallInfo callInfo = callInfoArr[i];
            if (callInfo != null && callInfo.mState == CallInfo.State.ACTIVE) {
                this.mCalls[i] = null;
                z2 = true;
            }
            i++;
        }
        if (!z2) {
            int i2 = 0;
            while (true) {
                CallInfo[] callInfoArr2 = this.mCalls;
                if (i2 >= callInfoArr2.length) {
                    break;
                }
                CallInfo callInfo2 = callInfoArr2[i2];
                if (callInfo2 != null && (callInfo2.mState == CallInfo.State.DIALING || callInfo2.mState == CallInfo.State.ALERTING)) {
                    this.mCalls[i2] = null;
                }
                i2++;
            }
        }
        int i3 = 0;
        while (true) {
            CallInfo[] callInfoArr3 = this.mCalls;
            if (i3 >= callInfoArr3.length) {
                break;
            }
            CallInfo callInfo3 = callInfoArr3[i3];
            if (callInfo3 != null && callInfo3.mState == CallInfo.State.HOLDING) {
                callInfo3.mState = CallInfo.State.ACTIVE;
                z = true;
            }
            i3++;
        }
        if (z) {
            return true;
        }
        int i4 = 0;
        while (true) {
            CallInfo[] callInfoArr4 = this.mCalls;
            if (i4 >= callInfoArr4.length) {
                return true;
            }
            CallInfo callInfo4 = callInfoArr4[i4];
            if (callInfo4 != null && callInfo4.isRinging()) {
                callInfo4.mState = CallInfo.State.ACTIVE;
                return true;
            }
            i4++;
        }
    }

    public boolean releaseHeldOrUDUB() {
        boolean z = false;
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i < callInfoArr.length) {
                CallInfo callInfo = callInfoArr[i];
                if (callInfo != null && callInfo.isRinging()) {
                    z = true;
                    this.mCalls[i] = null;
                    break;
                }
                i++;
            } else {
                break;
            }
        }
        if (z) {
            return true;
        }
        int i2 = 0;
        while (true) {
            CallInfo[] callInfoArr2 = this.mCalls;
            if (i2 >= callInfoArr2.length) {
                return true;
            }
            CallInfo callInfo2 = callInfoArr2[i2];
            if (callInfo2 != null && callInfo2.mState == CallInfo.State.HOLDING) {
                this.mCalls[i2] = null;
            }
            i2++;
        }
    }

    public boolean separateCall(int i) {
        CallInfo callInfo;
        try {
            CallInfo callInfo2 = this.mCalls[i];
            if (callInfo2 != null && !callInfo2.isConnecting() && countActiveLines() == 1) {
                callInfo2.mState = CallInfo.State.ACTIVE;
                callInfo2.mIsMpty = false;
                for (int i2 = 0; i2 < this.mCalls.length; i2++) {
                    int i3 = 0;
                    int i4 = 0;
                    if (i2 != i && (callInfo = this.mCalls[i2]) != null && callInfo.mState == CallInfo.State.ACTIVE) {
                        callInfo.mState = CallInfo.State.HOLDING;
                        i3 = 0 + 1;
                        i4 = i2;
                    }
                    if (i3 == 1) {
                        this.mCalls[i4].mIsMpty = false;
                    }
                }
                return true;
            }
            return false;
        } catch (InvalidStateEx e) {
            return false;
        }
    }

    public void setAutoProgressConnectingCall(boolean z) {
        this.mAutoProgressConnecting = z;
    }

    public void setNextDialFailImmediately(boolean z) {
        this.mNextDialFailImmediately = z;
    }

    public boolean switchActiveAndHeldOrWaiting() {
        boolean z = false;
        int i = 0;
        while (true) {
            CallInfo[] callInfoArr = this.mCalls;
            if (i < callInfoArr.length) {
                CallInfo callInfo = callInfoArr[i];
                if (callInfo != null && callInfo.mState == CallInfo.State.HOLDING) {
                    z = true;
                    break;
                }
                i++;
            } else {
                break;
            }
        }
        int i2 = 0;
        while (true) {
            CallInfo[] callInfoArr2 = this.mCalls;
            if (i2 >= callInfoArr2.length) {
                return true;
            }
            CallInfo callInfo2 = callInfoArr2[i2];
            if (callInfo2 != null) {
                if (callInfo2.mState == CallInfo.State.ACTIVE) {
                    callInfo2.mState = CallInfo.State.HOLDING;
                } else if (callInfo2.mState == CallInfo.State.HOLDING) {
                    callInfo2.mState = CallInfo.State.ACTIVE;
                } else if (!z && callInfo2.isRinging()) {
                    callInfo2.mState = CallInfo.State.ACTIVE;
                }
            }
            i2++;
        }
    }

    public boolean triggerHangupAll() {
        boolean z;
        synchronized (this) {
            z = false;
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (this.mCalls[i] != null) {
                    z = true;
                }
                this.mCalls[i] = null;
            }
        }
        return z;
    }

    public boolean triggerHangupBackground() {
        boolean z;
        synchronized (this) {
            z = false;
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (callInfo != null && callInfo.mState == CallInfo.State.HOLDING) {
                    this.mCalls[i] = null;
                    z = true;
                }
            }
        }
        return z;
    }

    public boolean triggerHangupForeground() {
        boolean z;
        synchronized (this) {
            z = false;
            for (int i = 0; i < this.mCalls.length; i++) {
                CallInfo callInfo = this.mCalls[i];
                if (callInfo != null && (callInfo.mState == CallInfo.State.INCOMING || callInfo.mState == CallInfo.State.WAITING)) {
                    this.mCalls[i] = null;
                    z = true;
                }
            }
            for (int i2 = 0; i2 < this.mCalls.length; i2++) {
                CallInfo callInfo2 = this.mCalls[i2];
                if (callInfo2 != null && (callInfo2.mState == CallInfo.State.DIALING || callInfo2.mState == CallInfo.State.ACTIVE || callInfo2.mState == CallInfo.State.ALERTING)) {
                    this.mCalls[i2] = null;
                    z = true;
                }
            }
        }
        return z;
    }

    public boolean triggerRing(String str) {
        synchronized (this) {
            int i = -1;
            boolean z = false;
            for (int i2 = 0; i2 < this.mCalls.length; i2++) {
                CallInfo callInfo = this.mCalls[i2];
                if (callInfo == null && i < 0) {
                    i = i2;
                } else {
                    if (callInfo != null && (callInfo.mState == CallInfo.State.INCOMING || callInfo.mState == CallInfo.State.WAITING)) {
                        Rlog.w("MtkModelInterpreter", "triggerRing failed; phone already ringing");
                        return false;
                    }
                    if (callInfo != null) {
                        z = true;
                    }
                }
            }
            if (i < 0) {
                Rlog.w("MtkModelInterpreter", "triggerRing failed; all full");
                return false;
            }
            this.mCalls[i] = CallInfo.createIncomingCall(PhoneNumberUtils.extractNetworkPortion(str));
            if (z) {
                this.mCalls[i].mState = CallInfo.State.WAITING;
            }
            return true;
        }
    }
}
