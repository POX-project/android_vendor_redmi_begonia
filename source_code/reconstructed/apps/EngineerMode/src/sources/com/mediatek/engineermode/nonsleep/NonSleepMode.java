package com.mediatek.engineermode.nonsleep;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class NonSleepMode extends Activity implements View.OnClickListener, ServiceConnection {
    private static final String TAG = "NonSleep";
    private Button mSetButton;
    private EMWakeLockService mWakeLockServ = null;

    private static boolean isServiceRunning(Context context, Class<? extends Service> cls) {
        ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
        int i = 100;
        List<ActivityManager.RunningServiceInfo> runningServices = activityManager.getRunningServices(100);
        while (runningServices.size() == i) {
            i += 50;
            runningServices = activityManager.getRunningServices(i);
        }
        for (int i2 = 0; i2 < runningServices.size(); i2++) {
            if (runningServices.get(i2).service.getClass().equals(cls)) {
                return true;
            }
        }
        return false;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mSetButton) {
            if (getString(R.string.non_sleep_enable).equals(this.mSetButton.getText())) {
                this.mSetButton.setText(R.string.non_sleep_disable);
                if (this.mWakeLockServ.isHeld()) {
                    return;
                }
                this.mWakeLockServ.acquire(NonSleepMode.class);
                return;
            }
            this.mSetButton.setText(R.string.non_sleep_enable);
            if (this.mWakeLockServ.isHeld()) {
                this.mWakeLockServ.release();
            }
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.non_sleep_mode);
        Button button = (Button) findViewById(R.id.non_sleep_switch);
        this.mSetButton = button;
        button.setOnClickListener(this);
        if (isServiceRunning(this, EMWakeLockService.class)) {
            return;
        }
        startService(new Intent(this, (Class<?>) EMWakeLockService.class));
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        EMWakeLockService eMWakeLockService;
        if (isServiceRunning(this, EMWakeLockService.class) && (eMWakeLockService = this.mWakeLockServ) != null && !eMWakeLockService.isHeld()) {
            stopService(new Intent(this, (Class<?>) EMWakeLockService.class));
        }
        super.onDestroy();
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        EMWakeLockService service = ((EMWakeLockService.LocalBinder) iBinder).getService();
        this.mWakeLockServ = service;
        if (service == null) {
            Toast.makeText(this, "Connect PowerManager fail, finish activity", 0).show();
            finish();
        }
        this.mSetButton.setEnabled(true);
        if (this.mWakeLockServ.isHeld()) {
            this.mSetButton.setText(R.string.non_sleep_disable);
        } else {
            this.mSetButton.setText(R.string.non_sleep_enable);
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        Elog.d(TAG, "onServiceDisconnected");
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        this.mSetButton.setEnabled(false);
        bindService(new Intent(this, (Class<?>) EMWakeLockService.class), this, 1);
    }

    @Override // android.app.Activity
    protected void onStop() {
        unbindService(this);
        super.onStop();
    }
}
