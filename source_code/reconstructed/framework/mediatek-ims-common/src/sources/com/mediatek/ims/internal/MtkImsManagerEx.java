package com.mediatek.ims.internal;

import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.telephony.Rlog;
import com.android.ims.ImsException;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsManagerEx {
    private static final boolean DBG = true;
    public static final String MTK_IMS_SERVICE = "mtkIms";
    private static final String TAG = "MtkImsManagerEx";
    private static MtkImsManagerEx sInstance = new MtkImsManagerEx();
    private IMtkImsService mMtkImsService = null;
    private MtkImsServiceDeathRecipient mMtkDeathRecipient = new MtkImsServiceDeathRecipient();

    private class MtkImsServiceDeathRecipient implements IBinder.DeathRecipient {
        private MtkImsServiceDeathRecipient() {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            MtkImsManagerEx.this.mMtkImsService = null;
        }
    }

    private MtkImsManagerEx() {
        bindMtkImsService(DBG);
    }

    private void bindMtkImsService(boolean z) {
        if (z && ServiceManager.checkService(getMtkImsServiceName()) == null) {
            loge("bindMtkImsService binder is null");
            return;
        }
        IBinder service = ServiceManager.getService(getMtkImsServiceName());
        if (service != null) {
            try {
                service.linkToDeath(this.mMtkDeathRecipient, 0);
            } catch (RemoteException e) {
            }
        }
        this.mMtkImsService = IMtkImsService.Stub.asInterface(service);
        log("mMtkImsService = " + this.mMtkImsService);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private void checkAndThrowExceptionIfServiceUnavailable() throws ImsException {
        if (this.mMtkImsService == null) {
            bindMtkImsService(DBG);
            if (this.mMtkImsService == null) {
                throw new ImsException("MtkImsService is unavailable", 106);
            }
        }
    }

    public static MtkImsManagerEx getInstance() {
        return sInstance;
    }

    private static String getMtkImsServiceName() {
        return "mtkIms";
    }

    private static void log(String str) {
        Rlog.d(TAG, str);
    }

    private static void loge(String str) {
        Rlog.e(TAG, str);
    }

    private static void loge(String str, Throwable th) {
        Rlog.e(TAG, str, th);
    }

    private static void logw(String str) {
        Rlog.w(TAG, str);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getCurrentCallCount(int i) throws ImsException {
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            int currentCallCount = this.mMtkImsService.getCurrentCallCount(i);
            log("getCurrentCallCount, phoneId: " + i + " callCount: " + currentCallCount);
            return currentCallCount;
        } catch (RemoteException e) {
            throw new ImsException("getCurrentCallCount()", e, 106);
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public int getImsState(int i) throws ImsException {
        checkAndThrowExceptionIfServiceUnavailable();
        try {
            int imsState = this.mMtkImsService.getImsState(i);
            log("getImsState=" + imsState + " for phoneId=" + i);
            return imsState;
        } catch (RemoteException e) {
            throw new ImsException("getImsState()", e, 106);
        }
    }
}
