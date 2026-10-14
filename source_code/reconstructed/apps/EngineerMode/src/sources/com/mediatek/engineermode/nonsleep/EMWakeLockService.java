package com.mediatek.engineermode.nonsleep;

import android.R;
import android.app.Activity;
import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.PowerManager;
import android.support.v4.app.NotificationCompat;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;

/* JADX INFO: loaded from: classes2.dex */
public class EMWakeLockService extends Service {
    private static final int ID_FORE_GROUND_NOTIF = 11;
    private static final String TAG = "NonSleep/WakeLock";
    private final IBinder mBinder = new LocalBinder();
    private PowerManager.WakeLock mWakeLock = null;

    public class LocalBinder extends Binder {
        public LocalBinder() {
        }

        EMWakeLockService getService() {
            return EMWakeLockService.this;
        }
    }

    private Notification buildNotification(Class<? extends Activity> cls) {
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, EmApplication.getSilentNotificationChannelID());
        builder.setSmallIcon(R.drawable.ic_dialog_alert).setContentTitle("No Sleep Mode is Enabled").setContentText("Click Here to Switch No Sleep Mode");
        builder.setContentIntent(PendingIntent.getActivity(this, 0, new Intent(this, cls).addFlags(536870912), 0));
        return builder.build();
    }

    public void acquire(Class<? extends Activity> cls) {
        PowerManager.WakeLock wakeLock = this.mWakeLock;
        if (wakeLock == null || wakeLock.isHeld()) {
            return;
        }
        this.mWakeLock.acquire();
        startForeground(11, buildNotification(cls));
    }

    public void acquire(Class<? extends Activity> cls, long j) {
        PowerManager.WakeLock wakeLock = this.mWakeLock;
        if (wakeLock == null || wakeLock.isHeld()) {
            return;
        }
        this.mWakeLock.acquire(j);
        startForeground(11, buildNotification(cls));
    }

    public boolean isHeld() {
        PowerManager.WakeLock wakeLock = this.mWakeLock;
        return wakeLock != null && wakeLock.isHeld();
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        PowerManager powerManager = (PowerManager) getSystemService("power");
        if (powerManager == null) {
            return null;
        }
        this.mWakeLock = powerManager.newWakeLock(268435482, TAG);
        return this.mBinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        Elog.d(TAG, "onCreate()");
    }

    @Override // android.app.Service
    public void onDestroy() {
        Elog.d(TAG, "onDestroy()");
        PowerManager.WakeLock wakeLock = this.mWakeLock;
        if (wakeLock != null && wakeLock.isHeld()) {
            this.mWakeLock.release();
            this.mWakeLock = null;
        }
        super.onDestroy();
    }

    public void release() {
        PowerManager.WakeLock wakeLock = this.mWakeLock;
        if (wakeLock == null || !wakeLock.isHeld()) {
            return;
        }
        this.mWakeLock.release();
        stopForeground(true);
    }
}
