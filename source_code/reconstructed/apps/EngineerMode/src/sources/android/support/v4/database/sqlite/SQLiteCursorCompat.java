package android.support.v4.database.sqlite;

import android.database.sqlite.SQLiteCursor;
import android.support.v4.os.BuildCompat;

/* JADX INFO: loaded from: classes2.dex */
public final class SQLiteCursorCompat {
    private SQLiteCursorCompat() {
    }

    public void setFillWindowForwardOnly(SQLiteCursor sQLiteCursor, boolean z) {
        if (BuildCompat.isAtLeastP()) {
            sQLiteCursor.setFillWindowForwardOnly(z);
        }
    }
}
