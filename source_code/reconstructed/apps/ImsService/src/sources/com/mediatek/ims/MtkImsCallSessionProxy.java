package com.mediatek.ims;

import android.content.Context;
import android.os.Handler;
import android.os.RemoteException;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsCallSessionListener;
import com.android.ims.internal.IImsCallSession;
import com.mediatek.ims.internal.IMtkImsCallSession;
import com.mediatek.ims.internal.IMtkImsCallSessionListener;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsCallSessionProxy implements AutoCloseable {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkImsCallSessionProxy";
    private ImsCallSessionProxy mAospImsCallSessionProxy;
    private IMtkImsCallSessionListener mMtkListener;
    private IMtkImsCallSession mServiceImpl;

    private class ImsCallLogLevel {
        public static final int DEBUG = 2;
        public static final int ERROR = 5;
        public static final int INFO = 3;
        public static final int VERBOSE = 1;
        public static final int WARNNING = 4;

        private ImsCallLogLevel() {
        }
    }

    MtkImsCallSessionProxy(Context context, ImsCallProfile imsCallProfile, ImsCallSessionListener imsCallSessionListener, ImsService imsService, Handler handler, ImsCommandsInterface imsCommandsInterface, int i) {
        this(context, imsCallProfile, imsCallSessionListener, imsService, handler, imsCommandsInterface, null, i);
        logWithCallId("MtkImsCallSessionProxy() : RILAdapter = " + imsCommandsInterface, 2);
    }

    MtkImsCallSessionProxy(Context context, ImsCallProfile imsCallProfile, ImsCallSessionListener imsCallSessionListener, ImsService imsService, Handler handler, ImsCommandsInterface imsCommandsInterface, String str, int i) {
        this.mServiceImpl = new IMtkImsCallSession.Stub() { // from class: com.mediatek.ims.MtkImsCallSessionProxy.1
            public void approveEccRedial(boolean z) {
                MtkImsCallSessionProxy.this.approveEccRedial(z);
            }

            public void callTerminated() {
                MtkImsCallSessionProxy.this.callTerminated();
            }

            public void close() {
                MtkImsCallSessionProxy.this.close();
            }

            public String getCallId() {
                return MtkImsCallSessionProxy.this.getCallId();
            }

            public ImsCallProfile getCallProfile() {
                return MtkImsCallSessionProxy.this.getCallProfile();
            }

            public String getHeaderCallId() {
                return MtkImsCallSessionProxy.this.getHeaderCallId();
            }

            public IImsCallSession getIImsCallSession() {
                return MtkImsCallSessionProxy.this.getIImsCallSession();
            }

            public boolean isIncomingCallMultiparty() {
                return MtkImsCallSessionProxy.this.isIncomingCallMultiparty();
            }

            public void removeLastParticipant() {
                MtkImsCallSessionProxy.this.removeLastParticipant();
            }

            public void resume() {
                MtkImsCallSessionProxy.this.resume();
            }

            public void setIImsCallSession(IImsCallSession iImsCallSession) {
                MtkImsCallSessionProxy.this.setIImsCallSession(iImsCallSession);
            }

            public void setImsCallMode(int i2) {
                MtkImsCallSessionProxy.this.setImsCallMode(i2);
            }

            public void setListener(IMtkImsCallSessionListener iMtkImsCallSessionListener) {
                MtkImsCallSessionProxy.this.setListener(iMtkImsCallSessionListener);
            }
        };
    }

    private void logWithCallId(String str, int i) {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null) {
            Rlog.d(LOG_TAG, "logWithCallId with mAospImsCallSessionProxy = null");
            return;
        }
        String callId = imsCallSessionProxy.getCallId();
        if (1 == i) {
            Rlog.v(LOG_TAG, "[callId = " + callId + "] " + str);
            return;
        }
        if (2 == i) {
            Rlog.d(LOG_TAG, "[callId = " + callId + "] " + str);
            return;
        }
        if (3 == i) {
            Rlog.i(LOG_TAG, "[callId = " + callId + "] " + str);
            return;
        }
        if (4 == i) {
            Rlog.w(LOG_TAG, "[callId = " + callId + "] " + str);
            return;
        }
        if (5 == i) {
            Rlog.e(LOG_TAG, "[callId = " + callId + "] " + str);
            return;
        }
        Rlog.d(LOG_TAG, "[callId = " + callId + "] " + str);
    }

    public void approveEccRedial(boolean z) {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null || imsCallSessionProxy.getServiceImpl() == null) {
            logWithCallId("approveEccRedial() : mCallSessionImpl is null", 5);
        } else {
            this.mAospImsCallSessionProxy.approveEccRedial(z);
        }
    }

    public void callTerminated() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null) {
            logWithCallId("callTerminated() : mAospImsCallSessionProxy is null", 5);
        } else {
            imsCallSessionProxy.callTerminated();
        }
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        logWithCallId("close() : MtkImsCallSessionProxy is going to be closed!!! ", 2);
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy != null) {
            imsCallSessionProxy.close();
            this.mAospImsCallSessionProxy = null;
        }
        this.mMtkListener = null;
    }

    public ImsCallSessionProxy getAospCallSessionProxy() {
        return this.mAospImsCallSessionProxy;
    }

    public String getCallId() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null || imsCallSessionProxy.getServiceImpl() == null) {
            logWithCallId("getCallId() : mCallSessionImpl is null", 5);
            return "";
        }
        try {
            return this.mAospImsCallSessionProxy.getServiceImpl().getCallId();
        } catch (RemoteException e) {
            logWithCallId("getCallId() : RemoteException getCallId()", 5);
            return "";
        }
    }

    public ImsCallProfile getCallProfile() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null || imsCallSessionProxy.getServiceImpl() == null) {
            logWithCallId("getCallProfile() : mCallSessionImpl is null", 5);
            return null;
        }
        try {
            return this.mAospImsCallSessionProxy.getServiceImpl().getCallProfile();
        } catch (RemoteException e) {
            logWithCallId("getCallProfile() : RemoteException getCallProfile()", 5);
            return null;
        }
    }

    ImsCallSessionProxy.ConferenceEventListener getConfEvtListener() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy != null) {
            return imsCallSessionProxy.getConfEvtListener();
        }
        logWithCallId("ConferenceEventListener() : mAospImsCallSessionProxy is null", 5);
        return null;
    }

    public String getHeaderCallId() {
        return this.mAospImsCallSessionProxy.getHeaderCallId();
    }

    public IImsCallSession getIImsCallSession() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy != null) {
            return imsCallSessionProxy.getServiceImpl();
        }
        logWithCallId("getIImsCallSession() : mAospImsCallSessionProxy is null", 5);
        return null;
    }

    public IMtkImsCallSession getServiceImpl() {
        return this.mServiceImpl;
    }

    public boolean isIncomingCallMultiparty() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy != null && imsCallSessionProxy.getServiceImpl() != null) {
            return this.mAospImsCallSessionProxy.isIncomingCallMultiparty();
        }
        logWithCallId("isIncomingCallMultiparty() : mCallSessionImpl is null", 5);
        return false;
    }

    public void notifyCallSessionBusy() {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyCallSessionBusy() : mMtkListener is null", 2);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionBusy(this.mServiceImpl);
        } catch (RemoteException e) {
            logWithCallId("notifyCallSessionBusy() : RemoteException notifyCallSessionBusy()", 5);
        }
    }

    public void notifyCallSessionCalling() {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyCallSessionCalling() : mMtkListener is null", 2);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionCalling(this.mServiceImpl);
        } catch (RemoteException e) {
            logWithCallId("notifyCallSessionCalling() : RemoteException notifyCallSessionCalling()", 5);
        }
    }

    void notifyCallSessionMergeComplete(IMtkImsCallSession iMtkImsCallSession) {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyCallSessionMergeComplete() : mMtkListener is null", 5);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionMergeComplete(iMtkImsCallSession);
        } catch (RemoteException e) {
            logWithCallId("notifyCallSessionMergeComplete() : RemoteException when MTK session merged started", 5);
        }
    }

    void notifyCallSessionMergeStarted(IMtkImsCallSession iMtkImsCallSession, ImsCallProfile imsCallProfile) {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyCallSessionMergeStarted() : mMtkListener is null", 5);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionMergeStarted(this.mServiceImpl, iMtkImsCallSession, imsCallProfile);
        } catch (RemoteException e) {
            logWithCallId("notifyCallSessionMergeStarted() : RemoteException when MTK session merged started", 5);
        }
    }

    public void notifyCallSessionRinging(ImsCallProfile imsCallProfile) {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyCallSessionRinging() : mMtkListener is null", 2);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionRinging(this.mServiceImpl, imsCallProfile);
        } catch (RemoteException e) {
            logWithCallId("notifyCallSessionRinging() : RemoteException notifyCallSessionRinging()", 5);
        }
    }

    void notifyRedialEcc(boolean z) {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            logWithCallId("notifyRedialEcc() : mMtkListener is null", 5);
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionRedialEcc(this.mServiceImpl, z);
        } catch (RemoteException e) {
            logWithCallId("notifyRedialEcc() : RemoteException callSessionRedialEcc()", 5);
        }
    }

    public void notifyRttECCRedialEvent() {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            Rlog.d(LOG_TAG, "notifyRttECCRedialEvent() listener is null");
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionRttEventReceived(this.mServiceImpl, 137);
        } catch (RemoteException e) {
            Rlog.e(LOG_TAG, "RemoteException callSessionRttEventReceived()");
        }
    }

    public void notifyTextCapabilityChanged(int i, int i2, int i3, int i4) {
        IMtkImsCallSessionListener iMtkImsCallSessionListener = this.mMtkListener;
        if (iMtkImsCallSessionListener == null) {
            Rlog.d(LOG_TAG, "notifyTextCapabilityChanged() listener is null");
            return;
        }
        try {
            iMtkImsCallSessionListener.callSessionTextCapabilityChanged(this.mServiceImpl, i, i2, i3, i4);
        } catch (RemoteException e) {
            Rlog.e(LOG_TAG, "RemoteException callSessionTextCapabilityChanged()");
        }
    }

    public void removeLastParticipant() {
        this.mAospImsCallSessionProxy.removeLastParticipant();
    }

    public void resume() {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null) {
            logWithCallId("resume() : mAospImsCallSessionProxy is null", 5);
        } else {
            imsCallSessionProxy.resume(null);
        }
    }

    public void setAospCallSessionProxy(ImsCallSessionProxy imsCallSessionProxy) {
        this.mAospImsCallSessionProxy = imsCallSessionProxy;
    }

    void setIImsCallSession(IImsCallSession iImsCallSession) {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy != null) {
            imsCallSessionProxy.setServiceImpl(iImsCallSession);
        }
    }

    public void setImsCallMode(int i) {
        this.mAospImsCallSessionProxy.setImsCallMode(i);
    }

    public void setListener(IMtkImsCallSessionListener iMtkImsCallSessionListener) {
        this.mMtkListener = iMtkImsCallSessionListener;
    }

    public void setServiceImpl(IMtkImsCallSession iMtkImsCallSession) {
        this.mServiceImpl = iMtkImsCallSession;
    }

    void terminate(int i) {
        ImsCallSessionProxy imsCallSessionProxy = this.mAospImsCallSessionProxy;
        if (imsCallSessionProxy == null) {
            logWithCallId("terminate() : mAospImsCallSessionProxy is null", 5);
        } else {
            imsCallSessionProxy.terminate(i);
        }
    }
}
