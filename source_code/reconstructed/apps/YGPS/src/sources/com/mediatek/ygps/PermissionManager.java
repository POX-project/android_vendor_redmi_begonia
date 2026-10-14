package com.mediatek.ygps;

import android.app.Activity;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PermissionManager {
    private final Activity mActivity;
    private List<String> mLaunchPermissionList = new ArrayList();

    public PermissionManager(Activity activity) {
        this.mActivity = activity;
        initLocationLaunchPermissionList();
    }

    private List<String> getNeedCheckPermissionList(List<String> list) {
        if (list.size() <= 0) {
            return list;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (ContextCompat.checkSelfPermission(this.mActivity, str) != 0) {
                Log.i("YGPS/Permission", "getNeedCheckPermissionList() permission =" + str);
                arrayList.add(str);
            }
        }
        Log.i("YGPS/Permission", "getNeedCheckPermissionList() listSize =" + arrayList.size());
        return arrayList;
    }

    private void initLocationLaunchPermissionList() {
        this.mLaunchPermissionList.add("android.permission.ACCESS_FINE_LOCATION");
        this.mLaunchPermissionList.add("android.permission.ACCESS_COARSE_LOCATION");
    }

    public int getLocationLaunchPermissionRequestCode() {
        return 100;
    }

    public boolean isLocationLaunchPermissionsResultReady(String[] strArr, int[] iArr) {
        for (int i = 0; i < iArr.length; i++) {
            if (iArr[i] != 0) {
                Log.e("YGPS/Permission", "permissions not granted for " + strArr[i]);
                return false;
            }
        }
        return true;
    }

    public boolean requestLocationLaunchPermissions() {
        List<String> needCheckPermissionList = getNeedCheckPermissionList(this.mLaunchPermissionList);
        if (needCheckPermissionList.size() <= 0) {
            Log.i("YGPS/Permission", "requestLocationLaunchPermissions(), all on");
            return true;
        }
        Log.i("YGPS/Permission", "requestLocationLaunchPermissions(), user check");
        ActivityCompat.requestPermissions(this.mActivity, (String[]) needCheckPermissionList.toArray(new String[needCheckPermissionList.size()]), 100);
        return false;
    }
}
