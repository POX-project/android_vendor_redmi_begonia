package com.mediatek.engineermode.bluetooth;

import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.IBinder;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes2.dex */
public class BleScanService extends Service {
    private static final String TAG = "BleScanService";
    private final BroadcastReceiver mBtStateReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.bluetooth.BleScanService.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if ("android.bluetooth.adapter.action.STATE_CHANGED".equals(intent.getAction())) {
                int intExtra = intent.getIntExtra("android.bluetooth.adapter.extra.STATE", 0);
                Elog.d(BleScanService.TAG, "state " + intExtra);
                if (intExtra == 0) {
                    BtTestTool.setAlwaysScanning(-1);
                }
            }
        }
    };

    public static void enableService(Context context, boolean z) {
        Intent intent = new Intent(context, (Class<?>) BleScanService.class);
        Elog.i(TAG, "enableService:" + z);
        if (z) {
            context.startService(intent);
        } else {
            context.stopService(intent);
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        registerReceiver(this.mBtStateReceiver, new IntentFilter("android.bluetooth.adapter.action.STATE_CHANGED"));
        Elog.i(TAG, "registerReceiver");
    }

    @Override // android.app.Service
    public void onDestroy() {
        unregisterReceiver(this.mBtStateReceiver);
        Elog.i(TAG, "unregisterReceiver");
        super.onDestroy();
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        return 1;
    }
}
