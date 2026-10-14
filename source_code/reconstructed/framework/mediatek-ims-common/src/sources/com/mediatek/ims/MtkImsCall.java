package com.mediatek.ims;

import android.content.Context;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsCallSession;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.ImsStreamMediaProfile;
import android.util.Log;
import com.android.ims.ImsCall;
import com.android.ims.ImsException;
import com.mediatek.ims.internal.MtkImsCallSession;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsCall extends ImsCall {
    private static final String TAG = "MtkImsCall";
    private static final int UPDATE_ECT = 7;
    private String mAddress;
    private boolean mIsConferenceMerging;

    public static class Listener extends ImsCall.Listener {
        public void onCallRedialEcc(ImsCall imsCall, boolean z) {
        }

        public void onPauInfoChanged(ImsCall imsCall) {
        }

        public void onRttEventReceived(ImsCall imsCall, int i) {
        }

        public void onTextCapabilityChanged(ImsCall imsCall, int i, int i2, int i3, int i4) {
        }
    }

    public class MtkImsCallSessionListenerProxy extends ImsCall.ImsCallSessionListenerProxy {
        public MtkImsCallSessionListenerProxy() {
            super(MtkImsCall.this);
        }

        public void callSessionBusy(ImsCallSession imsCallSession) {
        }

        public void callSessionCalling(ImsCallSession imsCallSession) {
        }

        public void callSessionMergeComplete(ImsCallSession imsCallSession) {
            MtkImsCall.this.logi("callSessionMergeComplete :: newSession =" + imsCallSession);
            if (MtkImsCall.this.isMergeHost()) {
                if (imsCallSession != null) {
                    MtkImsCall.this.mTransientConferenceSession = imsCallSession;
                    if (MtkImsCall.this.mTransientConferenceSession == null) {
                        MtkImsCall.this.logi("callSessionMergeComplete :: callSessionExisted.");
                    }
                }
                MtkImsCall.this.processMergeComplete();
                return;
            }
            if (MtkImsCall.this.mMergeHost != null) {
                MtkImsCall.this.mMergeHost.processMergeComplete();
                return;
            }
            MtkImsCall.this.logd("merge host is null, terminate conf");
            if (imsCallSession != null) {
                imsCallSession.terminate(102);
            }
        }

        public void callSessionRedialEcc(ImsCallSession imsCallSession, boolean z) {
            ImsCall.Listener listener;
            MtkImsCall.this.loge("callSessionRedialEcc :: session=" + imsCallSession);
            synchronized (MtkImsCall.this) {
                listener = MtkImsCall.this.mListener;
            }
            if (listener == null || !(listener instanceof Listener)) {
                return;
            }
            try {
                ((Listener) listener).onCallRedialEcc(MtkImsCall.this, z);
            } catch (Throwable th) {
                MtkImsCall.this.loge("callSessionRedialEcc :: ", th);
            }
        }

        public void callSessionRinging(ImsCallSession imsCallSession, ImsCallProfile imsCallProfile) {
        }

        public void callSessionRttEventReceived(ImsCallSession imsCallSession, int i) {
            ImsCall.Listener listener;
            synchronized (MtkImsCall.this) {
                listener = MtkImsCall.this.mListener;
            }
            if (listener == null || !(listener instanceof Listener)) {
                return;
            }
            try {
                ((Listener) listener).onRttEventReceived(MtkImsCall.this, i);
            } catch (Throwable th) {
                MtkImsCall.this.loge("callSessionRttEventReceived :: ", th);
            }
        }

        public void callSessionTextCapabilityChanged(ImsCallSession imsCallSession, int i, int i2, int i3, int i4) {
            ImsCall.Listener listener;
            synchronized (MtkImsCall.this) {
                listener = MtkImsCall.this.mListener;
            }
            if (listener == null || !(listener instanceof Listener)) {
                return;
            }
            try {
                ((Listener) listener).onTextCapabilityChanged(MtkImsCall.this, i, i2, i3, i4);
            } catch (Throwable th) {
                MtkImsCall.this.loge("callSessionTextCapabilityChanged :: ", th);
            }
        }
    }

    public MtkImsCall(Context context, ImsCallProfile imsCallProfile) {
        super(context, imsCallProfile);
        this.mIsConferenceMerging = false;
        this.mAddress = null;
    }

    private String appendImsCallInfoToString(String str) {
        return str + " MtkImsCall=" + this;
    }

    public void approveEccRedial(boolean z) {
        logi("approveEccRedial :: ");
        synchronized (this.mLockObj) {
            if (this.mSession != null && (this.mSession instanceof MtkImsCallSession)) {
                this.mSession.approveEccRedial(z);
            }
        }
    }

    protected void checkIfConferenceMerge(ImsReasonInfo imsReasonInfo) {
        if (isCallSessionMergePending()) {
            if (isConferenceHost() || this.mTerminationRequestPending) {
                logi("this is a conference host during merging, and is disconnected..");
                processMergeFailed(imsReasonInfo);
            }
        }
    }

    protected void copyCallProfileIfNecessary(ImsStreamMediaProfile imsStreamMediaProfile) {
        if (this.mCallProfile != null) {
            this.mCallProfile.mMediaProfile.copyFrom(imsStreamMediaProfile);
        }
    }

    protected ImsCallSession.Listener createCallSessionListener() {
        this.mImsCallSessionListenerProxy = new MtkImsCallSessionListenerProxy();
        return this.mImsCallSessionListenerProxy;
    }

    protected ImsCall createNewCall(ImsCallSession imsCallSession, ImsCallProfile imsCallProfile) {
        MtkImsCall mtkImsCall = new MtkImsCall(this.mContext, imsCallProfile);
        try {
            mtkImsCall.attachSession(imsCallSession);
            return mtkImsCall;
        } catch (ImsException e) {
            mtkImsCall.close();
            return null;
        }
    }

    public boolean isIncomingCallMultiparty() {
        synchronized (this.mLockObj) {
            if (this.mSession != null && (this.mSession instanceof MtkImsCallSession)) {
                return this.mSession.isIncomingCallMultiparty();
            }
            return false;
        }
    }

    public boolean isMultipartyEx() {
        return isConferenceHost();
    }

    protected void logi(String str) {
        Log.i(TAG, appendImsCallInfoToString(str));
    }

    protected void resetConferenceMergingFlag() {
        this.mIsConferenceMerging = false;
    }

    protected void setPendingUpdateMerge() {
        this.mUpdateRequest = 4;
        if (this.mMergeHost != null) {
            this.mMergeHost.mUpdateRequest = 4;
        }
        if (this.mMergePeer != null) {
            this.mMergePeer.mUpdateRequest = 4;
        }
    }

    public void setTerminationRequestFlag(boolean z) {
        this.mTerminationRequestPending = z;
    }

    protected void setTransientSessionAsPrimary(ImsCallSession imsCallSession) {
        synchronized (this) {
            if (this.mSession != null) {
                this.mSession.setListener((ImsCallSession.Listener) null);
            }
            this.mSession = imsCallSession;
            if (this.mSession != null) {
                this.mSession.setListener(createCallSessionListener());
                ImsCallProfile callProfile = this.mSession.getCallProfile();
                if (callProfile != null) {
                    this.mCallProfile.updateCallType(callProfile);
                }
            }
        }
    }

    protected boolean shouldSkipResetMergePending() {
        return true;
    }

    public void start(ImsCallSession imsCallSession, String str) throws ImsException {
        super.start(imsCallSession, str);
        this.mAddress = str;
    }

    public void start(ImsCallSession imsCallSession, String[] strArr) throws ImsException {
        super.start(imsCallSession, strArr);
        if (this.mCallProfile == null || !this.mCallProfile.getCallExtraBoolean("conference")) {
            return;
        }
        this.mIsConferenceHost = true;
    }

    protected void updateHoldStateIfNecessary(boolean z) {
        this.mHold = z;
    }

    protected String updateRequestToString(int i) {
        return i != 7 ? super.updateRequestToString(i) : "ECT";
    }
}
