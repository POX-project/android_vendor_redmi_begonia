package android.support.v4.content;

import android.content.Context;
import android.os.Process;

/* JADX INFO: loaded from: classes.dex */
public class ContextCompat {
    public static int checkSelfPermission(Context context, String str) {
        if (str != null) {
            return context.checkPermission(str, Process.myPid(), Process.myUid());
        }
        throw new IllegalArgumentException("permission is null");
    }
}
