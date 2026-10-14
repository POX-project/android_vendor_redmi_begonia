package com.mediatek.engineermode.bluetooth;

import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.IBinder;
import android.support.v4.app.NotificationCompat;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class BtWatchService extends Service {
    private static final int NOTIFICATION_ID = 2020;
    private static final String TAG = "BtWatchService";
    private final BroadcastReceiver mBtStateReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.bluetooth.BtWatchService.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if ("android.bluetooth.adapter.action.SCAN_MODE_CHANGED".equals(intent.getAction())) {
                Elog.d(BtWatchService.TAG, "state " + intent.getIntExtra("android.bluetooth.adapter.extra.SCAN_MODE", 0));
                BtTestTool.setAlwaysVisible(true);
            }
        }
    };

    private Notification buildNotification() {
        String string = getString(R.string.bt_title);
        String string2 = getString(R.string.bt_always_visible);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, EmApplication.getSilentNotificationChannelID());
        builder.setSmallIcon(android.R.drawable.ic_dialog_alert);
        builder.setContentTitle(string);
        builder.setContentText(string2);
        Notification notificationBuild = builder.build();
        notificationBuild.flags |= 32;
        Intent intent = new Intent(this, (Class<?>) BtTestTool.class);
        intent.setFlags(335544320);
        notificationBuild.setLatestEventInfo(this, string, string2, PendingIntent.getActivity(this, 0, intent, 0));
        return notificationBuild;
    }

    public static void enableService(Context context, boolean z) {
        Intent intent = new Intent(context, (Class<?>) BtWatchService.class);
        Elog.i(TAG, "enableService:" + z);
        if (z) {
            context.startForegroundService(intent);
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
        registerReceiver(this.mBtStateReceiver, new IntentFilter("android.bluetooth.adapter.action.SCAN_MODE_CHANGED"));
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
        startForeground(NOTIFICATION_ID, buildNotification());
        return 1;
    }
}
