package com.mediatek.engineermode.dm;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.ComponentName;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class DiagnosticMonitoringSettingActivity extends Activity {
    private static final String ACTION_START_APM_SERVICE = "com.mediatek.apmonitor.ACTION_START_APM_SERVICE";
    private static final String ACTION_STOP_APM_SERVICE = "com.mediatek.apmonitor.ACTION_STOP_APM_SERVICE";
    private static final int CONTROL_APM_SERVICE_RETRY = 5;
    private static final int CONTROL_APM_SERVICE_TIMEOUT = 1000;
    private static final int DLG_DM_APM_ACTIVATION_SWITCHING = 3;
    private static final int DLG_DM_APM_SERVICE_SWITCHING = 2;
    private static final int DLG_DM_LOG_PKM_SETTING_SWITCHING = 1;
    private static final int DLG_DM_LOG_SETTING_SWITCHING = 0;
    private static final String TAG = "DM-Setting";
    private static final String APM_PROCESS_NAME = "com.mediatek.apmonitor";
    private static final String APM_SERVICE_NAME = "com.mediatek.apmonitor.ApmService";
    private static final ComponentName mApmServiceComp = new ComponentName(APM_PROCESS_NAME, APM_SERVICE_NAME);
    private TextView mTvDmcFo = null;
    private TextView mTvMapiFo = null;
    private TextView mTvMdmiFo = null;
    private Button mBtnLogSetting = null;
    private Button mBtnLogPkmSetting = null;
    private Button mBtnApmServiceSetting = null;
    private Button mBtnApmActivationSetting = null;
    private DmSettingController mDmSettingCtrl = null;

    private class ApmActivationSettingTask extends AsyncTask<Void, Void, Boolean> {
        private ApmActivationSettingTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            DmSettingController unused = DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl;
            return Boolean.valueOf(DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl.activeApm(!Boolean.valueOf(DmSettingController.isDmcApmActivated()).booleanValue()));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            DiagnosticMonitoringSettingActivity.this.updateUI();
            DiagnosticMonitoringSettingActivity.this.removeDialog(3);
            if (DiagnosticMonitoringSettingActivity.this.isActivityAlive()) {
                new AlertDialog.Builder(DiagnosticMonitoringSettingActivity.this).setTitle(bool.booleanValue() ? R.string.set_success_message : R.string.set_fail_message).show();
            }
        }
    }

    private class ApmServiceSettingTask extends AsyncTask<Void, Void, Boolean> {
        private boolean mOperationStart;

        private ApmServiceSettingTask() {
        }

        public ApmServiceSettingTask(boolean z) {
            this.mOperationStart = z;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            boolean z = false;
            Intent intent = new Intent();
            intent.setComponent(DiagnosticMonitoringSettingActivity.mApmServiceComp);
            if (this.mOperationStart) {
                Log.d(DiagnosticMonitoringSettingActivity.TAG, "Start APM service");
                intent.setAction(DiagnosticMonitoringSettingActivity.ACTION_START_APM_SERVICE);
                DiagnosticMonitoringSettingActivity.this.startForegroundService(intent);
                for (int i = 0; i < 5; i++) {
                    DiagnosticMonitoringSettingActivity.sleep(1000L);
                    if (DiagnosticMonitoringSettingActivity.this.isApmServiceRunning()) {
                        z = true;
                        Log.d(DiagnosticMonitoringSettingActivity.TAG, "Start APM service successfully!");
                        break;
                    }
                    Log.e(DiagnosticMonitoringSettingActivity.TAG, "Start APM service failed!");
                }
            } else {
                Log.d(DiagnosticMonitoringSettingActivity.TAG, "Stop APM service");
                intent.setAction(DiagnosticMonitoringSettingActivity.ACTION_STOP_APM_SERVICE);
                DiagnosticMonitoringSettingActivity.this.startForegroundService(intent);
                for (int i2 = 0; i2 < 5; i2++) {
                    DiagnosticMonitoringSettingActivity.sleep(1000L);
                    if (!DiagnosticMonitoringSettingActivity.this.isApmServiceRunning()) {
                        z = true;
                        Log.d(DiagnosticMonitoringSettingActivity.TAG, "Stop APM service successfully!");
                        break;
                    }
                    Log.e(DiagnosticMonitoringSettingActivity.TAG, "Stop APM service failed!");
                }
            }
            return Boolean.valueOf(z);
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            DiagnosticMonitoringSettingActivity.this.updateUI();
            DiagnosticMonitoringSettingActivity.this.removeDialog(2);
            if (DiagnosticMonitoringSettingActivity.this.isActivityAlive()) {
                new AlertDialog.Builder(DiagnosticMonitoringSettingActivity.this).setTitle(bool.booleanValue() ? R.string.set_success_message : R.string.set_fail_message).show();
            }
        }
    }

    private class LogPkmSettingTask extends AsyncTask<Void, Void, Boolean> {
        private LogPkmSettingTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            return Boolean.valueOf(DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl.enablePkmLog(!Boolean.valueOf(DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl.isPkmLogEnabled()).booleanValue()));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            DiagnosticMonitoringSettingActivity.this.updateUI();
            DiagnosticMonitoringSettingActivity.this.removeDialog(1);
            if (DiagnosticMonitoringSettingActivity.this.isActivityAlive()) {
                new AlertDialog.Builder(DiagnosticMonitoringSettingActivity.this).setTitle(bool.booleanValue() ? R.string.set_success_message : R.string.set_fail_message).show();
            }
        }
    }

    private class LogSettingTask extends AsyncTask<Void, Void, Boolean> {
        private LogSettingTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            return Boolean.valueOf(DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl.enableDmLog(!Boolean.valueOf(DiagnosticMonitoringSettingActivity.this.mDmSettingCtrl.isDmLogEnabled()).booleanValue()));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            DiagnosticMonitoringSettingActivity.this.updateUI();
            DiagnosticMonitoringSettingActivity.this.removeDialog(0);
            if (DiagnosticMonitoringSettingActivity.this.isActivityAlive()) {
                new AlertDialog.Builder(DiagnosticMonitoringSettingActivity.this).setTitle(bool.booleanValue() ? R.string.set_success_message : R.string.set_fail_message).show();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isActivityAlive() {
        return (isFinishing() || isDestroyed()) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isApmServiceRunning() {
        for (ActivityManager.RunningServiceInfo runningServiceInfo : ((ActivityManager) getSystemService("activity")).getRunningServices(Integer.MAX_VALUE)) {
            Log.d(TAG, runningServiceInfo.service.getClassName());
            if (APM_SERVICE_NAME.equals(runningServiceInfo.service.getClassName())) {
                return true;
            }
        }
        return false;
    }

    public static boolean isSupport() {
        return DmSettingController.isDmcVendorEnabled();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void sleep(long j) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUI() {
        StringBuilder sb = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        StringBuilder sb3 = new StringBuilder();
        sb.append("DMC: system(" + DmSettingController.isDmcSystemEnabled() + ") ");
        sb.append("vendor(" + DmSettingController.isDmcVendorEnabled() + ")");
        this.mTvDmcFo.setText(sb.toString());
        sb2.append("MAPI: system(" + DmSettingController.isMapiSystemEnabled() + ") ");
        sb2.append("vendor(" + DmSettingController.isMapiVendorEnabled() + ")");
        this.mTvMapiFo.setText(sb2.toString());
        sb3.append("MDMI: system(" + DmSettingController.isMdmiSystemEnabled() + ") ");
        sb3.append("vendor(" + DmSettingController.isMdmiVendorEnabled() + ")");
        this.mTvMdmiFo.setText(sb3.toString());
        if (this.mDmSettingCtrl.isDmLogEnabled()) {
            this.mBtnLogSetting.setText(R.string.dm_log_button_disable);
        } else {
            this.mBtnLogSetting.setText(R.string.dm_log_button_enable);
        }
        if (this.mDmSettingCtrl.isPkmLogEnabled()) {
            this.mBtnLogPkmSetting.setText(R.string.dm_log_pkm_button_disable);
        } else {
            this.mBtnLogPkmSetting.setText(R.string.dm_log_pkm_button_enable);
        }
        if (!DmSettingController.isDmcSystemEnabled()) {
            this.mBtnApmServiceSetting.setText(R.string.dm_apm_not_support);
            return;
        }
        if (isApmServiceRunning()) {
            this.mBtnApmServiceSetting.setText(R.string.dm_apm_button_stop);
        } else {
            this.mBtnApmServiceSetting.setText(R.string.dm_apm_button_start);
        }
        if (DmSettingController.isDmcApmActivated()) {
            this.mBtnApmActivationSetting.setText(R.string.dm_apm_button_deactivate);
        } else {
            this.mBtnApmActivationSetting.setText(R.string.dm_apm_button_activate);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.diagnostic_monitoring_setting);
        this.mTvDmcFo = (TextView) findViewById(R.id.dm_fo_dmc_text);
        this.mTvMapiFo = (TextView) findViewById(R.id.dm_fo_mapi_text);
        this.mTvMdmiFo = (TextView) findViewById(R.id.dm_fo_mdmi_text);
        this.mBtnLogSetting = (Button) findViewById(R.id.dm_log_setting_button);
        this.mBtnLogPkmSetting = (Button) findViewById(R.id.dm_log_pkm_setting_button);
        this.mBtnApmServiceSetting = (Button) findViewById(R.id.dm_apm_service_setting_button);
        this.mBtnApmActivationSetting = (Button) findViewById(R.id.dm_apm_activation_setting_button);
        this.mDmSettingCtrl = new DmSettingController(this);
        updateUI();
        this.mBtnLogSetting.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.dm.DiagnosticMonitoringSettingActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                DiagnosticMonitoringSettingActivity.this.showDialog(0);
                new LogSettingTask().execute(new Void[0]);
            }
        });
        this.mBtnLogPkmSetting.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.dm.DiagnosticMonitoringSettingActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                DiagnosticMonitoringSettingActivity.this.showDialog(1);
                new LogPkmSettingTask().execute(new Void[0]);
            }
        });
        if (DmSettingController.isDmcSystemEnabled()) {
            this.mBtnApmServiceSetting.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.dm.DiagnosticMonitoringSettingActivity.3
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    DiagnosticMonitoringSettingActivity.this.showDialog(2);
                    if (DiagnosticMonitoringSettingActivity.this.isApmServiceRunning()) {
                        DiagnosticMonitoringSettingActivity.this.new ApmServiceSettingTask(false).execute(new Void[0]);
                    } else {
                        DiagnosticMonitoringSettingActivity.this.new ApmServiceSettingTask(true).execute(new Void[0]);
                    }
                }
            });
            this.mBtnApmActivationSetting.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.dm.DiagnosticMonitoringSettingActivity.4
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    DiagnosticMonitoringSettingActivity.this.showDialog(3);
                    new ApmActivationSettingTask().execute(new Void[0]);
                }
            });
        } else {
            Log.d(TAG, "Not support APM service");
            this.mBtnApmServiceSetting.setEnabled(false);
            this.mBtnApmActivationSetting.setEnabled(false);
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0 && i != 1 && i != 2 && i != 3) {
            return null;
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage(getString(R.string.dm_executing));
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }
}
