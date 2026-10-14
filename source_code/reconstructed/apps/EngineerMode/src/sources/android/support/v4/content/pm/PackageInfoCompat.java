package android.support.v4.content.pm;

import android.content.pm.PackageInfo;
import android.support.v4.os.BuildCompat;

/* JADX INFO: loaded from: classes2.dex */
public final class PackageInfoCompat {
    private PackageInfoCompat() {
    }

    public static long getLongVersionCode(PackageInfo packageInfo) {
        return BuildCompat.isAtLeastP() ? packageInfo.getLongVersionCode() : packageInfo.versionCode;
    }
}
