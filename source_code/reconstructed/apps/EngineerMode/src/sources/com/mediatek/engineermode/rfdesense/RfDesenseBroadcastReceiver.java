package com.mediatek.engineermode.rfdesense;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseBroadcastReceiver extends BroadcastReceiver {
    public static String ARGUMENTS = "argument";
    public final String TAG = "RfDesense/BroadcastReceiver";
    private String START_ACTION = "com.mediatek.engineermode.rfdesenseServiceStart";
    private String STOP_ACTION = "com.mediatek.engineermode.rfdesenseServiceStop";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Elog.d("RfDesense/BroadcastReceiver", "onReceive");
        String action = intent.getAction();
        if (!this.START_ACTION.equalsIgnoreCase(action)) {
            if (this.STOP_ACTION.equalsIgnoreCase(action)) {
                Elog.d("RfDesense/BroadcastReceiver", "RfDesenseService stop");
                context.stopService(new Intent(context, (Class<?>) RfDesenseService.class));
                return;
            }
            return;
        }
        Intent intent2 = new Intent(context, (Class<?>) RfDesenseService.class);
        String str = ARGUMENTS;
        intent2.putExtra(str, intent.getStringExtra(str));
        Elog.d("RfDesense/BroadcastReceiver", "RfDesenseService start ");
        context.startService(intent2);
    }
}
