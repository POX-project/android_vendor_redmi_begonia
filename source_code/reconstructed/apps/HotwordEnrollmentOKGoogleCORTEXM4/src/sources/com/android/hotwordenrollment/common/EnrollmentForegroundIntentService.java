package com.android.hotwordenrollment.common;

import android.app.IntentService;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Intent;
import android.util.Log;
import androidx.core.app.NotificationCompat;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class EnrollmentForegroundIntentService extends IntentService {
    public EnrollmentForegroundIntentService() {
        super(EnrollmentForegroundIntentService.class.getSimpleName());
    }

    private void startForegroundWithNotification() {
        String name = EnrollmentForegroundIntentService.class.getPackage().getName();
        NotificationChannel notificationChannel = new NotificationChannel(name, EnrollmentForegroundIntentService.class.getSimpleName(), 0);
        notificationChannel.setLockscreenVisibility(0);
        ((NotificationManager) getSystemService(NotificationManager.class)).createNotificationChannel(notificationChannel);
        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, name);
        int identifier = getResources().getIdentifier("notification_setup_language_msg", "string", getPackageName());
        builder.setOngoing(true);
        builder.setSmallIcon(getResources().getIdentifier("ic_app", "drawable", getPackageName()));
        builder.setContentTitle(getResources().getString(identifier));
        builder.setPriority(1);
        builder.setCategory("service");
        startForeground(1, builder.build());
    }

    @Override // android.app.IntentService, android.app.Service
    public void onCreate() {
        Log.d("EnrollmentForegroundSrv", "onCreate");
        super.onCreate();
    }

    @Override // android.app.IntentService, android.app.Service
    public void onDestroy() {
        Log.d("EnrollmentForegroundSrv", "onDestroy");
        super.onDestroy();
    }

    @Override // android.app.IntentService
    protected void onHandleIntent(Intent intent) {
        Log.d("EnrollmentForegroundSrv", "onHandleIntent");
        if (EnrollmentIntentHandler.isValidIntent(intent)) {
            startForegroundWithNotification();
            EnrollmentIntentHandler.handleIntent(this, intent);
            stopForeground(true);
        }
    }
}
