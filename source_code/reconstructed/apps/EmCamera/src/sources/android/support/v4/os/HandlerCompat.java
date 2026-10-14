package android.support.v4.os;

import android.os.Handler;
import android.os.Message;

/* JADX INFO: loaded from: classes.dex */
public final class HandlerCompat {
    private HandlerCompat() {
    }

    public static boolean postDelayed(Handler handler, Runnable runnable, Object obj, long j) {
        if (BuildCompat.isAtLeastP()) {
            return handler.postDelayed(runnable, obj, j);
        }
        Message messageObtain = Message.obtain(handler, runnable);
        messageObtain.obj = obj;
        return handler.sendMessageDelayed(messageObtain, j);
    }
}
