package com.mediatek.engineermode.audio;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.Handler;
import android.os.IBinder;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mcfconfig.FileUtils;

/* JADX INFO: loaded from: classes2.dex */
public class CopyHalDumpService extends Service implements OnCopyProgressChangeListener {
    private static final String EMAUDIO_NOTIFICATION_NAME = "CopyAudioHalDumpService is running";
    private static final int ID_EMAUDIO_SERVICE = 197459;
    public static final int MSG_COPY_DONE = 12;
    public static final int MSG_COPY_PROGRESS_UPDATE = 10;
    public static final int MSG_DELETE_DONE = 13;
    public static final int MSG_DELETE_PROGRESS_UPDATE = 11;
    private static final String NOTIFICATION_CHANNEL = "CopyAudioHalDumpService";
    public static final String TAG = "Audio/Service";
    private Handler mActivityHandler;
    private final IBinder mBinder = new LocalBinder();
    private DUMP_STATUS mStatus = DUMP_STATUS.DEFAULT;

    enum DUMP_STATUS {
        DEFAULT,
        COPY_HAL_DUMP,
        DELETE_HAL_DUMP,
        COPY_DUMP_DONE,
        DELETE_DUMP_DONE
    }

    public class LocalBinder extends Binder {
        public LocalBinder() {
        }

        public CopyHalDumpService getService(Handler handler) {
            CopyHalDumpService.this.mActivityHandler = handler;
            return CopyHalDumpService.this;
        }
    }

    public DUMP_STATUS getCopyDumpStatus() {
        return this.mStatus;
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return this.mBinder;
    }

    @Override // com.mediatek.engineermode.audio.OnCopyProgressChangeListener
    public void onCopyProgressChanged(String str, float f, float f2) {
        if (this.mActivityHandler == null) {
            Elog.v(TAG, "mActivityHandler is null, don't need update COPY UI");
            return;
        }
        Elog.v(TAG, str + ":" + f + FileUtils.SEPARATOR + f2);
        if (!"SUCCESS".equals(str)) {
            this.mActivityHandler.sendMessage(this.mActivityHandler.obtainMessage(10, getString(R.string.Audio_copy_progress, new Object[]{str, Float.valueOf(f), Float.valueOf(f2)})));
            this.mStatus = DUMP_STATUS.COPY_HAL_DUMP;
        } else {
            Elog.v(TAG, "[onCopyProgressChanged] done");
            this.mActivityHandler.sendEmptyMessage(12);
            this.mStatus = DUMP_STATUS.COPY_DUMP_DONE;
        }
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        Elog.d(TAG, "onCreate");
    }

    @Override // com.mediatek.engineermode.audio.OnCopyProgressChangeListener
    public void onDeleteProgressChanged(String str) {
        if (this.mActivityHandler == null) {
            Elog.v(TAG, "mActivityHandler is null, don't need update DELETE UI");
            return;
        }
        Elog.v(TAG, str);
        if ("SUCCESS".equals(str)) {
            Elog.v(TAG, "[onDeleteProgressChanged] done");
            this.mActivityHandler.sendEmptyMessage(13);
            this.mStatus = DUMP_STATUS.DELETE_DUMP_DONE;
        } else {
            Elog.v(TAG, "[onDeleteProgressChanged] delete" + str);
            this.mActivityHandler.sendMessage(this.mActivityHandler.obtainMessage(10, getString(R.string.Audio_delete_progress, new Object[]{str})));
            this.mStatus = DUMP_STATUS.DELETE_HAL_DUMP;
        }
    }

    @Override // android.app.Service
    public void onDestroy() {
        Elog.d(TAG, "onDestroy");
        super.onDestroy();
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        super.onStart(intent, i);
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        ((NotificationManager) getSystemService("notification")).createNotificationChannel(new NotificationChannel(NOTIFICATION_CHANNEL, EMAUDIO_NOTIFICATION_NAME, 2));
        startForeground(ID_EMAUDIO_SERVICE, new Notification.Builder(getApplicationContext()).setContentTitle(EMAUDIO_NOTIFICATION_NAME).setSmallIcon(android.R.drawable.ic_dialog_info).setChannelId(NOTIFICATION_CHANNEL).build());
        return super.onStartCommand(intent, i, i2);
    }

    public void removeUiHandler() {
        this.mActivityHandler = null;
        if (this.mStatus == DUMP_STATUS.COPY_DUMP_DONE || this.mStatus == DUMP_STATUS.DELETE_DUMP_DONE) {
            Elog.v(TAG, "reset dump status");
            this.mStatus = DUMP_STATUS.DEFAULT;
        }
    }
}
