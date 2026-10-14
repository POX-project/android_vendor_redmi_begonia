package com.mediatek.internal.telephony.imsphone;

import android.telephony.Rlog;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.imsphone.ImsPhoneCall;
import com.android.internal.telephony.imsphone.ImsPhoneCallTracker;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsPhoneCall extends ImsPhoneCall {
    private static final String LOG_TAG = "MtkImsPhoneCall";

    public MtkImsPhoneCall(ImsPhoneCallTracker imsPhoneCallTracker, String str) {
        super(imsPhoneCallTracker, str);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangupIfAlive(int i) {
        if (this.mState.isAlive()) {
            try {
                Rlog.d(LOG_TAG, "hangupIfAlive with reason: " + i);
                hangupWithCause(i);
            } catch (CallStateException e) {
                Rlog.w(LOG_TAG, " hangupIfActive: caught " + e);
            }
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.CallStateException */
    public void hangupWithCause(int i) throws CallStateException {
        Rlog.d(LOG_TAG, "hangup with reason: " + i);
        ((MtkImsPhoneCallTracker) this.mOwner).hangup(this, i);
    }

    protected ImsPhoneCall makeTempImsPhoneCall() {
        return new MtkImsPhoneCall(this.mOwner, "UK");
    }

    void resetRingbackTone() {
        this.mIsRingbackTonePlaying = false;
    }
}
