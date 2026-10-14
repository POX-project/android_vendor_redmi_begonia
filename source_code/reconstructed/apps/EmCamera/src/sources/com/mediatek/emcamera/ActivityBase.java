package com.mediatek.emcamera;

import android.app.Activity;
import android.app.KeyguardManager;
import android.content.Intent;
import android.hardware.camera2.CameraDevice;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.widget.Toast;

/* JADX INFO: loaded from: classes.dex */
public abstract class ActivityBase extends Activity implements ActivityCompat.OnRequestPermissionsResultCallback {
    private static final String TAG = "ActivityBase";
    protected CameraDevice mCameraDevice;
    private boolean mOnResumePending;
    private PermissionManager mPermissionManager;
    private boolean mPermissionPending;
    private int mResultCodeForTesting;
    private Intent mResultDataForTesting;

    private boolean isKeyguardLocked() {
        KeyguardManager keyguardManager = (KeyguardManager) getSystemService("keyguard");
        if (keyguardManager != null) {
            Elog.v(TAG, "kgm.isKeyguardLocked()=" + keyguardManager.isKeyguardLocked() + ". kgm.isKeyguardSecure()=" + keyguardManager.isKeyguardSecure());
        }
        return keyguardManager != null && keyguardManager.isKeyguardLocked() && keyguardManager.isKeyguardSecure();
    }

    protected abstract void doOnResume();

    public int getResultCode() {
        return this.mResultCodeForTesting;
    }

    public Intent getResultData() {
        return this.mResultDataForTesting;
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (!Utils.isAutoTest()) {
            this.mPermissionManager = new PermissionManager(this);
        } else {
            Elog.d(TAG, "Monkey running.");
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onPause() {
        Elog.v(TAG, "onPause");
        super.onPause();
        this.mOnResumePending = false;
        getWindow().clearFlags(128);
    }

    @Override // android.app.Activity, android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        Elog.i(TAG, "onRequestPermissionsResult(), requestCode = " + i);
        if (iArr == null || iArr.length <= 0) {
            return;
        }
        if (this.mPermissionManager.getCameraLaunchPermissionRequestCode() != i) {
            super.onRequestPermissionsResult(i, strArr, iArr);
            return;
        }
        if (!this.mPermissionManager.isCameraLaunchPermissionsResultReady(strArr, iArr)) {
            Toast.makeText(this, R.string.denied_required_permission, 1).show();
            finish();
            return;
        }
        this.mPermissionPending = false;
        if (this.mOnResumePending || 0 != 0) {
            return;
        }
        doOnResume();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.v(TAG, "onResume. hasWindowFocus()=" + hasWindowFocus());
        if (this.mCameraDevice == null || isKeyguardLocked()) {
            Elog.v(TAG, "onResume. mOnResumePending=true");
            this.mOnResumePending = true;
        } else {
            Elog.v(TAG, "onResume. mOnResumePending=false");
            this.mOnResumePending = false;
        }
        getWindow().addFlags(128);
        if (this.mPermissionManager.requestCameraLaunchPermissions()) {
            Elog.d(TAG, "requestCameraLaunchPermissions return true");
            this.mPermissionPending = false;
        } else {
            this.mPermissionPending = true;
        }
        if (this.mOnResumePending || this.mPermissionPending) {
            return;
        }
        doOnResume();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean onSearchRequested() {
        return false;
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean z) {
        Elog.v(TAG, "onWindowFocusChanged.hasFocus=" + z + ".mOnResumePending=" + this.mOnResumePending + ".mPermissionPending=" + this.mPermissionPending);
        if (z && this.mOnResumePending) {
            this.mOnResumePending = false;
            if (0 != 0 || this.mPermissionPending) {
                return;
            }
            doOnResume();
        }
    }

    protected void setResultEx(int i) {
        this.mResultCodeForTesting = i;
        setResult(i);
    }

    protected void setResultEx(int i, Intent intent) {
        this.mResultCodeForTesting = i;
        this.mResultDataForTesting = intent;
        setResult(i, intent);
    }
}
