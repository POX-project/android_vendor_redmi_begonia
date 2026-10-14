package com.mediatek.engineermode;

import android.app.Activity;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
class RuntimePermissionManager {
    private static final String TAG = "RuntimePermissionManager";
    private final Activity mActivity;
    private int mRequestCode;
    private List<String> mRuntimePermissionList = new ArrayList();

    RuntimePermissionManager(Activity activity, int i) {
        this.mRequestCode = 100;
        this.mActivity = activity;
        this.mRequestCode = i;
        initPermissionList();
    }

    private void initPermissionList() {
        this.mRuntimePermissionList.add("android.permission.ACCESS_FINE_LOCATION");
        this.mRuntimePermissionList.add("android.permission.ACCESS_COARSE_LOCATION");
        if (!FeatureSupport.isUserLoad()) {
            this.mRuntimePermissionList.add("android.permission.ACCESS_BACKGROUND_LOCATION");
        }
        this.mRuntimePermissionList.add("android.permission.WRITE_EXTERNAL_STORAGE");
        this.mRuntimePermissionList.add("android.permission.CAMERA");
    }

    List<String> getPermissionNotGranted() {
        if (this.mRuntimePermissionList.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : this.mRuntimePermissionList) {
            if (ContextCompat.checkSelfPermission(this.mActivity, str) != 0) {
                Log.i(TAG, "getNeedCheckPermissionList() permission =" + str);
                arrayList.add(str);
            }
        }
        Elog.i(TAG, "Permission not granted:");
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Elog.i(TAG, (String) it.next());
        }
        return arrayList;
    }

    boolean isPermissionsResultReady(String[] strArr, int[] iArr) {
        for (int i = 0; i < iArr.length; i++) {
            if (iArr[i] != 0) {
                Log.e(TAG, "permissions not granted for " + strArr[i]);
                return false;
            }
        }
        return true;
    }

    boolean requestRuntimePermissions() {
        List<String> permissionNotGranted = getPermissionNotGranted();
        if (permissionNotGranted.size() > 0) {
            ActivityCompat.requestPermissions(this.mActivity, (String[]) permissionNotGranted.toArray(new String[permissionNotGranted.size()]), this.mRequestCode);
            return false;
        }
        Log.i(TAG, "requestLocationLaunchPermissions(), all on");
        return true;
    }
}
