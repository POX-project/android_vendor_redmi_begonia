package com.mediatek.engineermode.videolog;

import android.os.SystemProperties;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
public abstract class VideoLogItem {
    private static final String LOG_INTERNAL_PROP = "ro.vendor.mtklog_internal";
    private static final String LOG_MUCH_DISABLE = "false";
    private static final String LOG_MUCH_ENABLE = "true";
    private static final String LOG_MUCH_PROP = "persist.vendor.logmuch";
    protected static final String LOG_PROP_1 = "test";
    protected static final String PROP_DISABLE = "0";
    protected static final String PROP_ENABLE = "1";
    protected static final String TAG = "VideoLog";
    protected boolean mCurStatus;

    static boolean switchLogMuchDetect(boolean z) {
        Elog.d(TAG, "switchLogMuchDetect " + z);
        String str = z ? LOG_MUCH_ENABLE : LOG_MUCH_DISABLE;
        SystemProperties.set(LOG_MUCH_PROP, str);
        return str.equals(SystemProperties.get(LOG_MUCH_PROP));
    }

    boolean getStatus() {
        String statusProp = getStatusProp();
        Elog.d(TAG, "getStatus: " + statusProp);
        this.mCurStatus = "1".equals(SystemProperties.get(statusProp));
        Elog.d(TAG, "queryCurrent: " + this.mCurStatus);
        return this.mCurStatus;
    }

    protected abstract String getStatusProp();

    protected abstract boolean switchLog(boolean z);

    boolean switchStatus() {
        Boolean boolValueOf = Boolean.valueOf(switchLog(!this.mCurStatus));
        if (boolValueOf.booleanValue()) {
            this.mCurStatus = !this.mCurStatus;
        }
        return boolValueOf.booleanValue();
    }
}
