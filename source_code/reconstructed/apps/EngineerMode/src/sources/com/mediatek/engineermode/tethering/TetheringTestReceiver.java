package com.mediatek.engineermode.tethering;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
public class TetheringTestReceiver extends BroadcastReceiver {
    private static final String ACTION_ENABLE_NSIOT = "com.mediatek.intent.action.ACTION_ENABLE_NSIOT_TESTING";
    private static final String TAG = "TetheringTestReceiver";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent == null) {
            Elog.e(TAG, "Intent is null");
            return;
        }
        Elog.i(TAG, "TetheringTestReceiver:" + intent.getAction());
        if (ACTION_ENABLE_NSIOT.equals(intent.getAction())) {
            boolean booleanExtra = intent.getBooleanExtra("nsiot_enabled", true);
            Elog.i(TAG, "enabled:" + booleanExtra);
            Intent intent2 = new Intent(context, (Class<?>) TetheringTestService.class);
            if (booleanExtra) {
                context.startForegroundService(intent2);
            } else {
                context.stopService(intent2);
            }
        }
    }
}
