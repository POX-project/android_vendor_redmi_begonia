package com.mediatek.boostframework;

import android.util.Log;
import com.mediatek.powerhalwrapper.PowerHalWrapper;

/* JADX INFO: loaded from: classes.dex */
public class Performance {
    private static final String TAG = "Performance";
    private static PowerHalWrapper mPowerHalWrap = null;
    private int mhandle = 0;

    public Performance() {
        mPowerHalWrap = PowerHalWrapper.getInstance();
    }

    private static void log(String str) {
        Log.d("@M_Performance", "[Performance] " + str + " ");
    }

    private static void loge(String str) {
        Log.e("@M_Performance", "[Performance] ERR: " + str + " ");
    }

    public int perfLockAcquire(int i, int... iArr) {
        if (perfchecklist(iArr) == 0) {
            return -1;
        }
        int iPerfLockAcquire = mPowerHalWrap.perfLockAcquire(this.mhandle, i, iArr);
        this.mhandle = iPerfLockAcquire;
        return iPerfLockAcquire;
    }

    public int perfLockRelease() {
        mPowerHalWrap.perfLockRelease(this.mhandle);
        return 0;
    }

    public int perfLockRelease(int i) {
        mPowerHalWrap.perfLockRelease(i);
        return 0;
    }

    public int perfchecklist(int... iArr) {
        return iArr.length % 2 == 0 ? 1 : 0;
    }
}
