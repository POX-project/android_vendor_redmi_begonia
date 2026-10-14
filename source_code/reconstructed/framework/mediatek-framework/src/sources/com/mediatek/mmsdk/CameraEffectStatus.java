package com.mediatek.mmsdk;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class CameraEffectStatus {
    private static final boolean DEBUG = true;
    private static final String TAG = "CameraEffectStatus";
    private CameraEffectHalStatus mCurrentStatus = CameraEffectHalStatus.STATUS_UNINITIALIZED;

    public enum CameraEffectHalStatus {
        STATUS_UNINITIALIZED,
        STATUS_INITIALIZED,
        STATUS_CONFINGURED,
        STATUS_RUNNING
    }

    public CameraEffectHalStatus getEffectHalStatus() {
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ,mCurrentStatus = " + this.mCurrentStatus);
        return this.mCurrentStatus;
    }

    public void setEffectHalStatus(CameraEffectHalStatus cameraEffectHalStatus) {
        Log.i(TAG, "[" + Thread.currentThread().getStackTrace()[2].getMethodName() + "] ,mCurrentStatus = " + this.mCurrentStatus + ",next status = " + cameraEffectHalStatus);
        this.mCurrentStatus = cameraEffectHalStatus;
    }
}
