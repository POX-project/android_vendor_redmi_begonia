package com.mediatek.powerhalmgr;

import android.content.Context;
import android.os.IBinder;
import android.os.IRemoteCallback;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class PowerHalMgrImpl extends PowerHalMgr {
    private static final String TAG = "PowerHalMgrImpl";
    private Context mContext;
    private static PowerHalMgrImpl sInstance = null;
    private static Object lock = new Object();
    private IPowerHalMgr sService = null;
    private int inited = 0;
    private int setTid = 0;
    private long mPreviousTime = 0;

    public static PowerHalMgrImpl getInstance() {
        PowerHalMgrImpl powerHalMgrImpl;
        synchronized (lock) {
            if (sInstance == null) {
                sInstance = new PowerHalMgrImpl();
            }
            powerHalMgrImpl = sInstance;
        }
        return powerHalMgrImpl;
    }

    private void init() {
        IBinder iBinderCheckService;
        if (this.inited != 0 || (iBinderCheckService = ServiceManager.checkService("power_hal_mgr_service")) == null) {
            return;
        }
        IPowerHalMgr iPowerHalMgrAsInterface = IPowerHalMgr.Stub.asInterface(iBinderCheckService);
        this.sService = iPowerHalMgrAsInterface;
        if (iPowerHalMgrAsInterface != null) {
            this.inited = 1;
        } else {
            loge("ERR: getService() sService is still null..");
        }
    }

    private void log(String str) {
        Log.i(TAG, str + " ");
    }

    private void logd(String str) {
        Log.d(TAG, str + " ");
    }

    private void loge(String str) {
        Log.e(TAG, "ERR: " + str + " ");
    }

    public static native int nativeGetPid();

    public static native int nativeGetTid();

    public void UpdateManagementPkt(int i, String str) {
        try {
            init();
            if (this.sService != null) {
                this.sService.UpdateManagementPkt(i, str);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in UpdateManagementPkt:" + e);
        }
    }

    public void getCpuCap() {
        log("getCpuCap");
    }

    public void getCpuRTInfo() {
        log("getCpuRTInfo");
    }

    public void getGpuCap() {
        log("getGpuCap");
    }

    public void getGpuRTInfo() {
        log("getGpuRTInfo");
    }

    public int getTimeToLastTouch() {
        try {
            init();
            if (this.sService != null) {
                return this.sService.getTimeToLastTouch();
            }
            return -1;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in getTimeToLastTouch:" + e);
            return -1;
        }
    }

    public boolean isDupPacketPredictionStarted() {
        try {
            init();
            if (this.sService == null) {
                return false;
            }
            boolean zIsDupPacketPredictionStarted = this.sService.isDupPacketPredictionStarted();
            logd("isDupPacketPredictionStarted() enable:" + zIsDupPacketPredictionStarted);
            return zIsDupPacketPredictionStarted;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in isDupPacketPredictionStarted:" + e);
            return false;
        }
    }

    public void mtkCusPowerHint(int i, int i2) {
        try {
            init();
            if (this.sService != null) {
                this.sService.mtkCusPowerHint(i, i2);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in mtkCusPowerHint:" + e);
        }
    }

    public void mtkPowerHint(int i, int i2) {
        try {
            init();
            if (this.sService != null) {
                this.sService.mtkPowerHint(i, i2);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in mtkPowerHint:" + e);
        }
    }

    public int perfCusLockHint(int i, int i2) {
        try {
            init();
            if (this.sService != null) {
                return this.sService.perfCusLockHint(i, i2);
            }
            return -1;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in perfCusLockHint:" + e);
            return -1;
        }
    }

    public int perfLockAcquire(int i, int i2, int[] iArr) {
        try {
            init();
            return this.sService != null ? this.sService.perfLockAcquire(i, i2, iArr) : i;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in perfLockAcquire:" + e);
            return i;
        }
    }

    public void perfLockRelease(int i) {
        try {
            init();
            if (this.sService != null) {
                this.sService.perfLockRelease(i);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in perfLockRelease:" + e);
        }
    }

    public int querySysInfo(int i, int i2) {
        try {
            init();
            if (this.sService != null) {
                return this.sService.querySysInfo(i, i2);
            }
            return -1;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in perfLockAcquire:" + e);
            return -1;
        }
    }

    public boolean registerDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) {
        logd("registerDuplicatePacketPredictionEvent() " + iRemoteCallback.getClass().toString());
        try {
            init();
            if (this.sService != null) {
                return this.sService.registerDuplicatePacketPredictionEvent(iRemoteCallback);
            }
            return false;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in registerDuplicatePacketPredictionEvent:" + e);
            return false;
        }
    }

    public void scnConfig(int i, int i2, int i3, int i4, int i5, int i6) {
        try {
            init();
            if (this.sService != null) {
                this.sService.scnConfig(i, i2, i3, i4, i5, i6);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnConfig:" + e);
        }
    }

    public void scnDisable(int i) {
        try {
            init();
            if (this.sService != null) {
                this.sService.scnDisable(i);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnDisable:" + e);
        }
    }

    public void scnEnable(int i, int i2) {
        try {
            init();
            if (this.sService != null) {
                this.sService.scnEnable(i, i2);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnEnable:" + e);
        }
    }

    public int scnReg() {
        try {
            init();
            if (this.sService != null) {
                return this.sService.scnReg();
            }
            return -1;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnReg:" + e);
            return -1;
        }
    }

    public void scnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6) {
        try {
            init();
            if (this.sService != null) {
                this.sService.scnUltraCfg(i, i2, i3, i4, i5, i6);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnConfig:" + e);
        }
    }

    public void scnUnreg(int i) {
        try {
            init();
            if (this.sService != null) {
                this.sService.scnUnreg(i);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in scnUnreg:" + e);
        }
    }

    public void setForegroundSports() {
        try {
            init();
            if (this.sService != null) {
                this.sService.setForegroundSports();
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in setForegroundSports:" + e);
        }
    }

    public void setPredictInfo(String str, int i) {
        try {
            init();
            if (this.sService != null) {
                this.sService.setPredictInfo(str, i);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in setPredictInfo:" + e);
        }
    }

    public void setSysInfo(int i, String str) {
        try {
            init();
            if (this.sService != null) {
                this.sService.setSysInfo(i, str);
            }
        } catch (RemoteException e) {
            loge("ERR: RemoteException in setSysInfo:" + e);
        }
    }

    public int setSysInfoSync(int i, String str) {
        try {
            init();
            if (this.sService != null) {
                return this.sService.setSysInfoSync(i, str);
            }
            return -1;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in setPredictInfo:" + e);
            return -1;
        }
    }

    public boolean startDuplicatePacketPrediction() {
        logd("startDuplicatePacketPrediction()");
        try {
            init();
            if (this.sService != null) {
                return this.sService.startDuplicatePacketPrediction();
            }
            return false;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in startDuplicatePacketPrediction:" + e);
            return false;
        }
    }

    public boolean stopDuplicatePacketPrediction() {
        logd("stopDuplicatePacketPrediction()");
        try {
            init();
            if (this.sService != null) {
                return this.sService.stopDuplicatePacketPrediction();
            }
            return false;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in stopDuplicatePacketPrediction:" + e);
            return false;
        }
    }

    public boolean unregisterDuplicatePacketPredictionEvent(IRemoteCallback iRemoteCallback) {
        logd("unregisterDuplicatePacketPredictionEvent() " + iRemoteCallback.getClass().toString());
        try {
            init();
            if (this.sService != null) {
                return this.sService.unregisterDuplicatePacketPredictionEvent(iRemoteCallback);
            }
            return false;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in unregisterDuplicatePacketPredictionEvent:" + e);
            return false;
        }
    }

    public boolean updateMultiDuplicatePacketLink(DupLinkInfo[] dupLinkInfoArr) {
        try {
            init();
            if (this.sService != null) {
                return this.sService.updateMultiDuplicatePacketLink(dupLinkInfoArr);
            }
            return false;
        } catch (RemoteException e) {
            loge("ERR: RemoteException in updateMultiDuplicatePacketLink:" + e);
            return false;
        }
    }
}
