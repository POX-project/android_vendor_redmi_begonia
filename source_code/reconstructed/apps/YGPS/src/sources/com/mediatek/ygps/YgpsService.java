package com.mediatek.ygps;

import android.app.Activity;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.support.v4.app.NotificationCompat;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class YgpsService extends Service {
    private boolean mForeground = false;
    private Binder mBinder = new LocalYgpsBinder();

    class LocalYgpsBinder extends Binder {
        LocalYgpsBinder() {
        }

        public YgpsService getServiceInstance() {
            return YgpsService.this;
        }
    }

    private Notification buildNotification(Class<? extends Activity> cls) {
        ((NotificationManager) getSystemService("notification")).createNotificationChannel(new NotificationChannel("ygps_channel_id", getString(R.string.app_name), 2));
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, "ygps_channel_id");
        builder.setSmallIcon(android.R.drawable.ic_dialog_alert);
        builder.setContentTitle(getString(R.string.bg_notification_title));
        builder.setContentText(getString(R.string.bg_notification_content));
        builder.setContentIntent(PendingIntent.getActivity(this, 0, new Intent(this, cls), 0));
        return builder.build();
    }

    public void dismissForeground() {
        stopForeground(true);
        this.mForeground = false;
    }

    public boolean isForeground() {
        return this.mForeground;
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return this.mBinder;
    }

    @Override // android.app.Service
    public void onDestroy() {
        if (this.mForeground) {
            dismissForeground();
        }
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        Log.i("YGPS/Service", "onStartCommand " + intent + " flags " + i);
        return 1;
    }

    public void requestForeground(Class<? extends Activity> cls) {
        startForeground(10, buildNotification(cls));
        this.mForeground = true;
    }
}
