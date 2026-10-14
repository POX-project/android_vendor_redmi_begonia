package com.mediatek.engineermode;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;

/* JADX INFO: loaded from: classes2.dex */
public final class EngineerModeReceiver extends BroadcastReceiver {
    private static final String SECRET_CODE_ACTION = "android.provider.Telephony.SECRET_CODE";
    private static final String TAG = "EngineerModeReceiver";
    private final Uri mEmUri = Uri.parse("android_secret_code://3646633");
    private final Uri mMTKLoggerUri = Uri.parse("android_secret_code://98685");

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent.getAction() == null) {
            Elog.e(TAG, "Null action");
            return;
        }
        if (intent.getAction().equals(SECRET_CODE_ACTION)) {
            Uri data = intent.getData();
            Elog.i(TAG, "Receive secret code intent and uri is " + data);
            if (data.equals(this.mEmUri)) {
                Intent intent2 = new Intent(context, (Class<?>) EngineerMode.class);
                intent2.setFlags(268435456);
                context.startActivity(intent2);
            } else if (data.equals(this.mMTKLoggerUri)) {
                Intent intent3 = new Intent();
                intent3.setAction("android.intent.action.MAIN");
                intent3.addCategory("android.intent.category.LAUNCHER");
                intent3.setComponent(new ComponentName("com.debug.loggerui", "com.debug.loggerui.MainActivity"));
                intent3.setFlags(268435456);
                Elog.i(TAG, "Before start MTKLogger MainActivity");
                context.startActivity(intent3);
            }
        }
    }
}
