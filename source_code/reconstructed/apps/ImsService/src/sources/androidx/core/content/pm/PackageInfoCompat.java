package androidx.core.content.pm;

import android.content.pm.PackageInfo;
import android.os.Build;

/* JADX INFO: loaded from: classes.dex */
public final class PackageInfoCompat {
    private PackageInfoCompat() {
    }

    public static long getLongVersionCode(PackageInfo packageInfo) {
        return Build.VERSION.SDK_INT >= 28 ? packageInfo.getLongVersionCode() : packageInfo.versionCode;
    }
}
