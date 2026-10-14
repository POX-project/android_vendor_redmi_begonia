package android.support.v4.content.pm;

import android.content.pm.PermissionInfo;
import android.support.v4.os.BuildCompat;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes2.dex */
public final class PermissionInfoCompat {

    @Retention(RetentionPolicy.SOURCE)
    public @interface Protection {
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface ProtectionFlags {
    }

    private PermissionInfoCompat() {
    }

    public static int getProtection(PermissionInfo permissionInfo) {
        return BuildCompat.isAtLeastP() ? permissionInfo.getProtection() : permissionInfo.protectionLevel & 15;
    }

    public static int getProtectionFlags(PermissionInfo permissionInfo) {
        return BuildCompat.isAtLeastP() ? permissionInfo.getProtectionFlags() : permissionInfo.protectionLevel & (-16);
    }
}
