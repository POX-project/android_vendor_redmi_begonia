package android.support.v4.database;

import android.database.CursorWindow;
import android.os.Build;
import android.support.v4.os.BuildCompat;

/* JADX INFO: loaded from: classes.dex */
public final class CursorWindowCompat {
    private CursorWindowCompat() {
    }

    public CursorWindow create(String str, long j) {
        if (BuildCompat.isAtLeastP()) {
            return new CursorWindow(str, j);
        }
        return Build.VERSION.SDK_INT >= 15 ? new CursorWindow(str) : new CursorWindow(false);
    }
}
