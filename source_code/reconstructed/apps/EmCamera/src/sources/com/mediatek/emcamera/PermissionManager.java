package com.mediatek.emcamera;

import android.app.Activity;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PermissionManager {
    private static final int CAM_REQUEST_CODE_ASK_LAUNCH_PERMISSIONS = 100;
    private static final String TAG = "PermissionManager";
    private final Activity mActivity;
    private List<String> mLauchPermissionList = new ArrayList();

    public PermissionManager(Activity activity) {
        this.mActivity = activity;
        initCameraLaunchPermissionList();
    }

    private List<String> getNeedCheckPermissionList(List<String> list) {
        if (list.size() <= 0) {
            return list;
        }
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (ContextCompat.checkSelfPermission(this.mActivity, str) != 0) {
                Elog.i(TAG, "getNeedCheckPermissionList() permission =" + str);
                arrayList.add(str);
            }
        }
        Elog.i(TAG, "getNeedCheckPermissionList() listSize =" + arrayList.size());
        return arrayList;
    }

    private void initCameraLaunchPermissionList() {
        this.mLauchPermissionList.add("android.permission.CAMERA");
    }

    public boolean checkCameraLaunchPermissions() {
        if (getNeedCheckPermissionList(this.mLauchPermissionList).size() > 0) {
            return false;
        }
        Elog.i(TAG, "CheckCameraPermissions(), all on");
        return true;
    }

    public int getCameraLaunchPermissionRequestCode() {
        return 100;
    }

    public boolean isCameraLaunchPermissionsResultReady(String[] strArr, int[] iArr) {
        HashMap map = new HashMap();
        map.put("android.permission.CAMERA", 0);
        for (int i = 0; i < strArr.length; i++) {
            map.put(strArr[i], Integer.valueOf(iArr[i]));
        }
        if (((Integer) map.get("android.permission.CAMERA")).intValue() != 0) {
            return false;
        }
        Elog.i(TAG, "isCameraLaunchPermissionsResultReady(),true");
        return true;
    }

    public boolean requestCameraLaunchPermissions() {
        List<String> needCheckPermissionList = getNeedCheckPermissionList(this.mLauchPermissionList);
        if (needCheckPermissionList.size() <= 0) {
            Elog.i(TAG, "requestCameraLaunchPermissions(), all on");
            return true;
        }
        Elog.i(TAG, "requestCameraLaunchPermissions(), user check");
        ActivityCompat.requestPermissions(this.mActivity, (String[]) needCheckPermissionList.toArray(new String[needCheckPermissionList.size()]), 100);
        return false;
    }
}
