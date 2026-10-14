package com.mediatek.powerhalwrapper;

import android.os.Binder;
import android.os.Build;
import android.os.Process;
import android.os.Trace;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes.dex */
public class PowerHalWrapper {
    private static final int AMS_BOOST_TIME = 10000;
    public static final int CMD_GET_TOUCH_DOWN_TIME = 50;
    public static final int MAX_NETD_IP_FILTER_COUNT = 3;
    public static final int MTKPOWER_CMD_GET_POWER_SCN_TYPE = 105;
    public static final int MTKPOWER_CMD_GET_RILD_CAP = 40;
    private static final int MTKPOWER_HINT_ACT_SWITCH = 23;
    private static final int MTKPOWER_HINT_ALWAYS_ENABLE = 268435455;
    private static final int MTKPOWER_HINT_APP_ROTATE = 24;
    private static final int MTKPOWER_HINT_EXT_LAUNCH = 30;
    private static final int MTKPOWER_HINT_GALLERY_BOOST = 26;
    private static final int MTKPOWER_HINT_PACK_SWITCH = 22;
    private static final int MTKPOWER_HINT_PMS_INSTALL = 29;
    private static final int MTKPOWER_HINT_PROCESS_CREATE = 21;
    private static final int MTKPOWER_HINT_WFD = 28;
    private static final int MTKPOWER_HINT_WIPHY_SPEED_DL = 32;
    private static final int MTKPOWER_STATE_DEAD = 3;
    private static final int MTKPOWER_STATE_DESTORYED = 2;
    private static final int MTKPOWER_STATE_PAUSED = 0;
    private static final int MTKPOWER_STATE_RESUMED = 1;
    private static final int MTKPOWER_STATE_STOPPED = 4;
    public static final int PERF_RES_NET_MD_CRASH_PID = 41992960;
    public static final int PERF_RES_NET_WIFI_SMART_PREDICT = 41959680;
    public static final int PERF_RES_POWERHAL_SCREEN_OFF_STATE = 54525952;
    public static final int POWER_HIDL_SET_SYS_INFO = 0;
    public static final int SCN_PERF_LOCK_HINT = 3;
    public static final int SCN_USER_HINT = 2;
    public static final int SCREEN_OFF_DISABLE = 0;
    public static final int SCREEN_OFF_ENABLE = 1;
    public static final int SCREEN_OFF_WAIT_RESTORE = 2;
    public static final int SETSYS_FOREGROUND_SPORTS = 3;
    public static final int SETSYS_INTERNET_STATUS = 5;
    public static final int SETSYS_MANAGEMENT_PERIODIC = 4;
    public static final int SETSYS_MANAGEMENT_PREDICT = 1;
    public static final int SETSYS_NETD_DUPLICATE_PACKET_LINK = 8;
    public static final int SETSYS_NETD_STATUS = 6;
    public static final int SETSYS_PACKAGE_VERSION_NAME = 9;
    public static final int SETSYS_PREDICT_INFO = 7;
    public static final int SETSYS_SPORTS_APK = 2;
    private static final String TAG = "PowerHalWrapper";
    private static final int USER_DURATION_MAX = 30000;
    private static boolean AMS_BOOST_PROCESS_CREATE = true;
    private static boolean AMS_BOOST_PROCESS_CREATE_BOOST = true;
    private static boolean AMS_BOOST_PACK_SWITCH = true;
    private static boolean AMS_BOOST_ACT_SWITCH = true;
    private static boolean EXT_PEAK_PERF_MODE = false;
    private static PowerHalWrapper sInstance = null;
    private static Object lock = new Object();
    private static String mProcessCreatePack = null;
    private static final boolean ENG = "eng".equals(Build.TYPE);
    public List<ScnList> scnlist = new ArrayList();
    private Lock mLock = new ReentrantLock();

    static {
        System.loadLibrary("powerhalwrap_jni");
    }

    private PowerHalWrapper() {
    }

    public static PowerHalWrapper getInstance() {
        PowerHalWrapper powerHalWrapper;
        log("PowerHalWrapper.getInstance");
        synchronized (lock) {
            if (sInstance == null) {
                sInstance = new PowerHalWrapper();
            }
            powerHalWrapper = sInstance;
        }
        return powerHalWrapper;
    }

    private static void log(String str) {
        Log.i(TAG, str + " ");
    }

    private static void logd(String str) {
        if (ENG) {
            Log.d(TAG, str + " ");
        }
    }

    private static void loge(String str) {
        Log.e(TAG, "ERR: " + str + " ");
    }

    public static native int nativeMtkCusPowerHint(int i, int i2);

    public static native int nativeMtkPowerHint(int i, int i2);

    public static native int nativeNotifyAppState(String str, String str2, int i, int i2, int i3);

    public static native int nativePerfCusLockHint(int i, int i2);

    public static native int nativePerfLockAcq(int i, int i2, int... iArr);

    public static native int nativePerfLockRel(int i);

    public static native int nativeQuerySysInfo(int i, int i2);

    public static native int nativeScnConfig(int i, int i2, int i3, int i4, int i5, int i6);

    public static native int nativeScnDisable(int i);

    public static native int nativeScnEnable(int i, int i2);

    public static native int nativeScnReg();

    public static native int nativeScnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6);

    public static native int nativeScnUnreg(int i);

    public static native int nativeSetSysInfo(String str, int i);

    public static native int nativeSetSysInfoAsync(String str, int i);

    public void NotifyAppCrash(int i, int i2, String str) {
        int i3 = 0;
        int iMyPid = Process.myPid();
        if (iMyPid == i) {
            log("<NotifyAppCrash> pack:" + str + " ,pid:" + str + " == myPid:" + iMyPid);
            return;
        }
        nativeNotifyAppState(str, str, i, 3, i2);
        this.mLock.lock();
        List<ScnList> list = this.scnlist;
        if (list != null && list.size() > 0) {
            Iterator<ScnList> it = this.scnlist.iterator();
            while (it.hasNext()) {
                ScnList next = it.next();
                if (next.getpid() == i) {
                    nativePerfLockRel(next.gethandle());
                    log("<NotifyAppCrash> pid:" + next.getpid() + " uid:" + next.getuid() + " handle:" + next.gethandle());
                    it.remove();
                    i3++;
                }
            }
        }
        this.mLock.unlock();
    }

    public void UpdateManagementPkt(int i, String str) {
        logd("<UpdateManagementPkt> type:" + i + ", packet:" + str);
        if (i == 1) {
            nativeSetSysInfo(str, 1);
        } else {
            if (i != 4) {
                return;
            }
            nativeSetSysInfo(str, 4);
        }
    }

    public void amsBoostNotify(int i, String str, String str2, int i2) {
        logd("amsBoostNotify pid:" + i + ",activity:" + str + ", package:" + str2 + ", mProcessCreatePack" + mProcessCreatePack);
        nativeNotifyAppState(str2, str, i, 1, i2);
        if (str2.equalsIgnoreCase(mProcessCreatePack)) {
            return;
        }
        logd("amsBoostNotify AMS_BOOST_PROCESS_CREATE_BOOST:" + AMS_BOOST_PROCESS_CREATE_BOOST);
        if (AMS_BOOST_PROCESS_CREATE_BOOST) {
            nativeMtkPowerHint(MTKPOWER_HINT_PROCESS_CREATE, 1);
        }
        AMS_BOOST_PROCESS_CREATE_BOOST = false;
    }

    public void amsBoostProcessCreate(String str, String str2) {
        if (str == null || !str.contains("activity")) {
            return;
        }
        logd("amsBoostProcessCreate package:" + str2);
        Trace.asyncTraceBegin(64L, "amPerfBoost", 0);
        AMS_BOOST_PROCESS_CREATE = true;
        AMS_BOOST_PROCESS_CREATE_BOOST = true;
        mProcessCreatePack = str2;
        nativeMtkPowerHint(MTKPOWER_HINT_EXT_LAUNCH, 0);
        nativeMtkPowerHint(MTKPOWER_HINT_PROCESS_CREATE, AMS_BOOST_TIME);
    }

    public void amsBoostResume(String str, String str2) {
        logd("<amsBoostResume> last:" + str + ", next:" + str2);
        Trace.asyncTraceBegin(64L, "amPerfBoost", 0);
        nativeMtkPowerHint(MTKPOWER_HINT_EXT_LAUNCH, 0);
        if (str == null || !str.equalsIgnoreCase(str2)) {
            AMS_BOOST_PACK_SWITCH = true;
            nativeMtkPowerHint(MTKPOWER_HINT_PACK_SWITCH, AMS_BOOST_TIME);
        } else {
            AMS_BOOST_ACT_SWITCH = true;
            nativeMtkPowerHint(MTKPOWER_HINT_ACT_SWITCH, AMS_BOOST_TIME);
        }
    }

    public void amsBoostStop() {
        logd("amsBoostStop AMS_BOOST_PACK_SWITCH:" + AMS_BOOST_PACK_SWITCH + ", AMS_BOOST_ACT_SWITCH:" + AMS_BOOST_ACT_SWITCH + ", AMS_BOOST_PROCESS_CREATE:" + AMS_BOOST_PROCESS_CREATE);
        if (AMS_BOOST_PACK_SWITCH) {
            AMS_BOOST_PACK_SWITCH = false;
            nativeMtkPowerHint(MTKPOWER_HINT_PACK_SWITCH, 0);
        }
        if (AMS_BOOST_ACT_SWITCH) {
            AMS_BOOST_ACT_SWITCH = false;
            nativeMtkPowerHint(MTKPOWER_HINT_ACT_SWITCH, 0);
        }
        if (AMS_BOOST_PROCESS_CREATE) {
            AMS_BOOST_PROCESS_CREATE = false;
            nativeMtkPowerHint(MTKPOWER_HINT_PROCESS_CREATE, 0);
        }
        Trace.asyncTraceEnd(64L, "amPerfBoost", 0);
    }

    public void galleryBoostEnable(int i) {
        log("<galleryBoostEnable> do boost with " + i + "ms");
        nativeMtkPowerHint(MTKPOWER_HINT_GALLERY_BOOST, i);
    }

    public void getCpuCap() {
        log("getCpuCap");
    }

    public void getCpuRTInfo() {
        log("mCpuRTInfo");
    }

    public void getGpuCap() {
        log("mGpuCap");
    }

    public void getGpuRTInfo() {
        log("getGpuCap");
    }

    public boolean getRildCap(int i) {
        return nativeQuerySysInfo(40, i) == 1;
    }

    public int getTimeToLastTouch() {
        return nativeQuerySysInfo(50, 0);
    }

    public void mtkCusPowerHint(int i, int i2) {
        nativeMtkCusPowerHint(i, i2);
    }

    public void mtkPowerHint(int i, int i2) {
        nativeMtkPowerHint(i, i2);
    }

    public int perfCusLockHint(int i, int i2) {
        return nativePerfCusLockHint(i, i2);
    }

    public int perfLockAcquire(int i, int i2, int... iArr) {
        int callingPid = Binder.getCallingPid();
        int callingUid = Binder.getCallingUid();
        int iNativePerfLockAcq = nativePerfLockAcq(i, i2, iArr);
        if (iNativePerfLockAcq > 0 && iNativePerfLockAcq != i && (i2 > USER_DURATION_MAX || i2 == 0)) {
            this.mLock.lock();
            this.scnlist.add(new ScnList(iNativePerfLockAcq, callingPid, callingUid));
            this.mLock.unlock();
        }
        return iNativePerfLockAcq;
    }

    public void perfLockRelease(int i) {
        this.mLock.lock();
        List<ScnList> list = this.scnlist;
        if (list != null && list.size() > 0) {
            Iterator<ScnList> it = this.scnlist.iterator();
            while (it.hasNext()) {
                if (it.next().gethandle() == i) {
                    it.remove();
                }
            }
        }
        this.mLock.unlock();
        nativePerfLockRel(i);
    }

    public int querySysInfo(int i, int i2) {
        logd("<querySysInfo> cmd:" + i + " param:" + i2);
        return nativeQuerySysInfo(i, i2);
    }

    public int scnConfig(int i, int i2, int i3, int i4, int i5, int i6) {
        loge("scnConfig not support!!!");
        return 0;
    }

    public int scnDisable(int i) {
        loge("scnDisable not support!!!");
        return 0;
    }

    public int scnEnable(int i, int i2) {
        loge("scnEnable not support!!!");
        return 0;
    }

    public int scnReg() {
        loge("scnReg not support!!!");
        return -1;
    }

    public int scnUltraCfg(int i, int i2, int i3, int i4, int i5, int i6) {
        loge("scnUltraCfg not support!!!");
        return 0;
    }

    public int scnUnreg(int i) {
        loge("scnUnreg not support!!!");
        return 0;
    }

    public void setInstallationBoost(boolean z) {
        log("<setInstallationBoost> enable:" + z);
        if (z) {
            nativeMtkPowerHint(MTKPOWER_HINT_PMS_INSTALL, 15000);
        } else {
            nativeMtkPowerHint(MTKPOWER_HINT_PMS_INSTALL, 0);
        }
    }

    public void setRotationBoost(int i) {
        log("<setRotation> do boost with " + i + "ms");
        nativeMtkPowerHint(MTKPOWER_HINT_APP_ROTATE, i);
    }

    public void setSpeedDownload(int i) {
        log("<setSpeedDownload> do boost with " + i + "ms");
        nativeMtkPowerHint(32, i);
    }

    public void setSportsApk(String str) {
        log("<setSportsApk> pack:" + str);
        nativeSetSysInfo(str, 2);
    }

    public int setSysInfo(int i, String str) {
        return nativeSetSysInfo(str, i);
    }

    public void setSysInfoAsync(int i, String str) {
        nativeSetSysInfoAsync(str, i);
    }

    public void setWFD(boolean z) {
        log("<setWFD> enable:" + z);
        if (z) {
            nativeMtkPowerHint(MTKPOWER_HINT_WFD, MTKPOWER_HINT_ALWAYS_ENABLE);
        } else {
            nativeMtkPowerHint(MTKPOWER_HINT_WFD, 0);
        }
    }
}
