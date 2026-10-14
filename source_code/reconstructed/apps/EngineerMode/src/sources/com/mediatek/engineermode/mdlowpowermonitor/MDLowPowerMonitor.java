package com.mediatek.engineermode.mdlowpowermonitor;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class MDLowPowerMonitor extends Activity implements View.OnClickListener {
    private static final String MD_MONITOR_CONFIG_CMD = "AT+EGCMD=9527,4,";
    private static final String MD_MONITOR_DISABLE_CMD = "AT+EGCMD=9453";
    private static final String MD_MONITOR_ENABLE_CMD = "AT+EGCMD=9487";
    private static final int MSG_MONITOR_CONFIG_SET = 103;
    private static final int MSG_MONITOR_DISABLE = 102;
    private static final int MSG_MONITOR_ENABLE = 101;
    private static final String TAG = "MDLowPowerMonitor";
    public final int RET_SUCCESS = 1;
    public final int RET_FAILED = 0;
    private Button mRadioBtnEnabled = null;
    private Button mRadioBtnDisabled = null;
    private Spinner mSpinConfigValues = null;
    private Button buttonSet = null;
    private Toast mToast = null;
    private RadioGroup mRadioBtn = null;
    private boolean mFirstchecked = true;
    private Handler mCommandHander = new Handler() { // from class: com.mediatek.engineermode.mdlowpowermonitor.MDLowPowerMonitor.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(MDLowPowerMonitor.TAG, "Receive msg from modem");
            AsyncResult asyncResult = (AsyncResult) message.obj;
            switch (message.what) {
                case 101:
                    if (asyncResult.exception != null) {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Enable Failed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Enable Failed!");
                    } else {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Enable Succeed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Enable Succeed!");
                    }
                    break;
                case 102:
                    if (asyncResult.exception != null) {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Disabled Failed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Disabled Failed!");
                    } else {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Disabled Succeed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Disabled Succeed!");
                    }
                    break;
                case 103:
                    if (asyncResult.exception != null) {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Config Failed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Config Failed!");
                    } else {
                        MDLowPowerMonitor.this.showToast("MD Low Power Monitor Config Succeed!");
                        Elog.d(MDLowPowerMonitor.TAG, "MD Low Power Monitor Config Succeed!");
                    }
                    break;
            }
        }
    };

    private void sendCommand(String[] strArr, int i) {
        Elog.d(TAG, "Send Command " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mCommandHander.obtainMessage(i));
    }

    private int setMDLowPowerMonitorValue(int i) {
        return 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == R.id.md_low_power_monitor_enabled) {
            sendCommand(new String[]{MD_MONITOR_ENABLE_CMD, ""}, 101);
            return;
        }
        if (view.getId() == R.id.md_low_power_monitor_disabled) {
            sendCommand(new String[]{MD_MONITOR_DISABLE_CMD, ""}, 102);
            return;
        }
        if (view.getId() == R.id.md_low_power_monitor_set_button) {
            Spinner spinner = this.mSpinConfigValues;
            String string = spinner.getItemAtPosition(spinner.getSelectedItemPosition()).toString();
            Elog.e(TAG, "value = " + string);
            String str = String.format("\"%08x\"", Integer.valueOf(Integer.parseInt(string) * 1000 * 1000));
            Elog.e(TAG, "msg_value = " + str);
            sendCommand(new String[]{MD_MONITOR_CONFIG_CMD + str, ""}, 103);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.md_low_power_monitor);
        this.mFirstchecked = true;
        this.mRadioBtnEnabled = (Button) findViewById(R.id.md_low_power_monitor_enabled);
        this.mRadioBtnDisabled = (Button) findViewById(R.id.md_low_power_monitor_disabled);
        this.mSpinConfigValues = (Spinner) findViewById(R.id.sampling_rate_values_md_low_power);
        this.buttonSet = (Button) findViewById(R.id.md_low_power_monitor_set_button);
        this.mRadioBtnEnabled.setOnClickListener(this);
        this.mRadioBtnDisabled.setOnClickListener(this);
        this.buttonSet.setOnClickListener(this);
    }
}
