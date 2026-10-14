package com.mediatek.engineermode.wifi;

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

/* JADX INFO: loaded from: classes3.dex */
public class WifiWatchService extends Service {
    private static final int NOTIFICATION_ID = 2070;
    private static final String TAG = "WifiWatchService";
    private final BroadcastReceiver mWifiStateReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.wifi.WifiWatchService.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if ("android.net.wifi.WIFI_STATE_CHANGED".equals(intent.getAction())) {
                int intExtra = intent.getIntExtra("wifi_state", 0);
                Elog.i(WifiWatchService.TAG, "state" + intExtra);
                if (intExtra == 1) {
                    WifiWatchService.this.onWifiDisabled(context);
                } else {
                    if (intExtra != 3) {
                        return;
                    }
                    WifiWatchService.this.onWifiEnbled(context);
                }
            }
        }
    };

    private Notification buildNotification() {
        String string = getString(R.string.wifi);
        String string2 = getString(R.string.wifi_state_watch);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, EmApplication.getSilentNotificationChannelID());
        builder.setSmallIcon(android.R.drawable.ic_dialog_alert);
        builder.setContentTitle(string);
        builder.setContentText(string2);
        Notification notificationBuild = builder.build();
        notificationBuild.flags |= 32;
        Intent intent = new Intent(this, (Class<?>) WifiTestSetting.class);
        intent.setFlags(335544320);
        notificationBuild.setLatestEventInfo(this, string, string2, PendingIntent.getActivity(this, 0, intent, 0));
        return notificationBuild;
    }

    public static void enableService(Context context, boolean z) {
        Intent intent = new Intent(context, (Class<?>) WifiWatchService.class);
        Elog.i(TAG, "enableService:" + z);
        if (z) {
            context.startForegroundService(intent);
        } else {
            context.stopService(intent);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onWifiDisabled(Context context) {
        MtkCTIATestDialog.dismissCtiaEnabledNotify(context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onWifiEnbled(Context context) {
        if (MtkCTIATestDialog.isWifiCtiaEnabled(context)) {
            MtkCTIATestDialog.initWifiCtiaOnEnabled(context);
            MtkCTIATestDialog.notifyCtiaEnabled(context);
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        registerReceiver(this.mWifiStateReceiver, new IntentFilter("android.net.wifi.WIFI_STATE_CHANGED"));
        Elog.i(TAG, "registerReceiver");
    }

    @Override // android.app.Service
    public void onDestroy() {
        unregisterReceiver(this.mWifiStateReceiver);
        Elog.i(TAG, "unregisterReceiver");
        super.onDestroy();
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        startForeground(NOTIFICATION_ID, buildNotification());
        return 1;
    }
}
