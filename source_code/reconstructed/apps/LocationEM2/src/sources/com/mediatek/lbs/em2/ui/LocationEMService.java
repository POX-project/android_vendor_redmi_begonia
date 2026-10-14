package com.mediatek.lbs.em2.ui;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class LocationEMService extends Service {
    private Intent getLaunchIntent(Context context) {
        return new Intent(context, (Class<?>) MyTabActivity.class);
    }

    protected static void log(Object obj) {
        Log.d("LocationEM_LocationEMService", "" + obj);
    }

    private void setServiceForeground() {
        log("setServiceForeground");
        NotificationManager notificationManager = (NotificationManager) getSystemService("notification");
        NotificationChannel notificationChannel = new NotificationChannel("mtk_app_channel_id", "MTK APP", 2);
        notificationChannel.enableLights(false);
        notificationChannel.setLightColor(-65536);
        notificationChannel.enableVibration(false);
        notificationManager.createNotificationChannel(notificationChannel);
        Notification notificationBuild = new Notification.Builder(this).setAutoCancel(true).setContentTitle("LocationEM Service").setContentText("Service is Running! Tap to launch Activity.").setContentIntent(PendingIntent.getActivity(this, 0, getLaunchIntent(this), 0)).setSmallIcon(R.drawable.ic_launcher2).setWhen(System.currentTimeMillis()).setChannel("mtk_app_channel_id").build();
        log(String.format("notification = %s", notificationBuild));
        startForeground(22136, notificationBuild);
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        log("onCreate");
        super.onCreate();
        setServiceForeground();
    }

    @Override // android.app.Service
    public void onDestroy() {
        log("onDestroy");
        super.onDestroy();
        stopForeground(true);
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        log("onStart");
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        log("onStartCommand");
        return super.onStartCommand(intent, i, i2);
    }
}
