package com.mediatek.view.impl;

import android.content.pm.IPackageManager;
import android.os.Binder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.appresolutiontuner.ResolutionTunerAppList;
import com.mediatek.view.SurfaceExt;

/* JADX INFO: loaded from: classes.dex */
public class SurfaceExtimpl extends SurfaceExt {
    private static final String TAG = "SurfaceExt";
    private String mPackageName;
    private static final boolean ENABLE_WHITE_LIST = SystemProperties.getBoolean("debug.enable.whitelist", false);
    private static final int ENABLE_RESOLUTION_TUNING = SystemProperties.getInt("ro.vendor.app_resolution_tuner", 0);
    private static final String[] WHITE_LIST = {"com.tencent.qqlive"};
    private static ResolutionTunerAppList mApplist = null;
    private boolean mIsContainPackageName = false;
    private float mXScaleValue = 1.0f;
    private float mYScaleValue = 1.0f;

    private String getCallerProcessName() {
        int callingUid = Binder.getCallingUid();
        IPackageManager iPackageManagerAsInterface = IPackageManager.Stub.asInterface(ServiceManager.getService("package"));
        if (iPackageManagerAsInterface == null) {
            return null;
        }
        try {
            return iPackageManagerAsInterface.getNameForUid(callingUid);
        } catch (RemoteException e) {
            Log.e(TAG, "getCallerProcessName exception :" + e);
            return null;
        }
    }

    private ResolutionTunerAppList getTunerList() {
        ResolutionTunerAppList resolutionTunerAppList = ResolutionTunerAppList.getInstance();
        resolutionTunerAppList.loadTunerAppList();
        return resolutionTunerAppList;
    }

    public float getXScale() {
        return this.mXScaleValue;
    }

    public float getYScale() {
        return this.mYScaleValue;
    }

    public void initResolutionTunner() {
        if (ENABLE_RESOLUTION_TUNING == 1 && mApplist == null) {
            this.mPackageName = getCallerProcessName();
            ResolutionTunerAppList tunerList = getTunerList();
            mApplist = tunerList;
            this.mIsContainPackageName = tunerList.isScaledBySurfaceView(this.mPackageName);
            float scaleValue = mApplist.getScaleValue(this.mPackageName);
            this.mXScaleValue = scaleValue;
            this.mYScaleValue = scaleValue;
            Log.d(TAG, "initResolutionTunner, mPackageName:" + this.mPackageName + ",mContainPackageName:" + this.mIsContainPackageName + "mXScaleValue:" + this.mXScaleValue + ",mYScaleValue:" + this.mYScaleValue);
        }
    }

    public boolean isInWhiteList() {
        if (ENABLE_WHITE_LIST) {
            return true;
        }
        String callerProcessName = getCallerProcessName();
        String[] strArr = WHITE_LIST;
        if (strArr == null || callerProcessName == null) {
            return false;
        }
        for (String str : strArr) {
            if (str.equals(callerProcessName)) {
                return true;
            }
        }
        return false;
    }

    public boolean isResolutionTuningPackage() {
        return this.mIsContainPackageName;
    }
}
