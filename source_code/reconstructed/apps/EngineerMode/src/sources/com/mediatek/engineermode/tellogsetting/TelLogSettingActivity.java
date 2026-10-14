package com.mediatek.engineermode.tellogsetting;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class TelLogSettingActivity extends Activity {
    private static final int DLG_SWITCHING = 0;
    private TextView mTvStatus = null;
    private Button mBtnSet = null;
    private TelLogController mTelLogCtr = null;

    private class FunctionTask extends AsyncTask<Void, Void, Boolean> {
        private FunctionTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            return Boolean.valueOf(TelLogSettingActivity.this.mTelLogCtr.switchTelLog(TelLogSettingActivity.this, !Boolean.valueOf(TelLogSettingActivity.this.mTelLogCtr.getTelLogStatus(TelLogSettingActivity.this)).booleanValue()));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            TelLogSettingActivity.this.updateUI();
            TelLogSettingActivity.this.removeDialog(0);
            if (TelLogSettingActivity.this.isActivityAlive()) {
                new AlertDialog.Builder(TelLogSettingActivity.this).setTitle(bool.booleanValue() ? R.string.set_success : R.string.set_fail).show();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isActivityAlive() {
        boolean zIsFinishing = isFinishing();
        boolean zIsDestroyed = isDestroyed();
        Elog.d("telLogSetting", "isFinishing: " + zIsFinishing + " isDestroyed: " + zIsDestroyed);
        return (zIsFinishing || zIsDestroyed) ? false : true;
    }

    public static boolean isSupport() {
        return !FeatureSupport.isUserLoad() || FeatureSupport.isSupported(FeatureSupport.FK_MTK_TEL_LOG_SUPPORT);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUI() {
        if (this.mTelLogCtr.getTelLogStatus(this)) {
            this.mTvStatus.setText(R.string.tellog_status_enable);
            this.mBtnSet.setText(R.string.tellog_button_disable);
        } else {
            this.mTvStatus.setText(R.string.tellog_status_disable);
            this.mBtnSet.setText(R.string.tellog_button_enable);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.telephony_log_setting);
        this.mTvStatus = (TextView) findViewById(R.id.inCall_status);
        this.mBtnSet = (Button) findViewById(R.id.inCall_status_setting);
        this.mTelLogCtr = new TelLogController();
        updateUI();
        this.mBtnSet.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.tellogsetting.TelLogSettingActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                TelLogSettingActivity.this.showDialog(0);
                new FunctionTask().execute(new Void[0]);
            }
        });
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0) {
            return null;
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage(getString(R.string.tellog_switching));
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }
}
