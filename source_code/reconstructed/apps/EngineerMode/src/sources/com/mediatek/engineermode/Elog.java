package com.mediatek.engineermode;

import android.util.Log;
import java.text.SimpleDateFormat;
import java.util.Arrays;

/* JADX INFO: loaded from: classes2.dex */
public class Elog {
    public static final void d(String str, String str2) {
        Log.d("EM/" + str, str2);
    }

    public static final void d(String str, String[] strArr, String str2) {
        int length = strArr.length;
        int i = 0;
        while (i < length) {
            if (strArr[i] == null) {
                strArr[i] = new SimpleDateFormat("HH:mm:ss SSS").format(Long.valueOf(System.currentTimeMillis())) + ":" + str2;
                break;
            }
            i++;
        }
        if (i >= strArr.length - 1) {
            Log.d("EM/" + str, Arrays.toString(strArr));
            for (int i2 = 0; i2 < length; i2++) {
                strArr[i2] = null;
            }
        }
    }

    public static final void e(String str, String str2) {
        Log.e("EM/" + str, str2);
    }

    public static final void i(String str, String str2) {
        Log.i("EM/" + str, str2);
    }

    public static final void v(String str, String str2) {
        Log.v("EM/" + str, str2);
    }

    public static final void w(String str, String str2) {
        Log.w("EM/" + str, str2);
    }
}
