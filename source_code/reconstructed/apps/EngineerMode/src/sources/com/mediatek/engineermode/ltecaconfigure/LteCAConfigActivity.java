package com.mediatek.engineermode.ltecaconfigure;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class LteCAConfigActivity extends Activity {
    private static final String FORE_CMD = "+ECASW:";
    private static final int MSG_QUERY_CA_CMD = 101;
    private static final int MSG_SET_CA_CMD = 102;
    private static final String QUERY_CA_CMD = "AT+ECASW?";
    private static final String SET_CA_CMD = "AT+ECASW=";
    private static final String TAG = "LteCAConfigActivity";
    private RadioButton mRadioBtnOff;
    private RadioButton mRadioBtnOn;
    private Toast mToast = null;
    private final Handler mCommandHander = new Handler() { // from class: com.mediatek.engineermode.ltecaconfigure.LteCAConfigActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(LteCAConfigActivity.TAG, "Receive msg from modem");
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i = message.what;
            if (i != 101) {
                if (i != 102) {
                    return;
                }
                if (asyncResult.exception == null) {
                    LteCAConfigActivity.this.showToast("set LTE CA Succeed!");
                    Elog.d(LteCAConfigActivity.TAG, "set LTE CA Succeed!");
                    return;
                } else {
                    LteCAConfigActivity.this.showToast("set LTE CA failed!");
                    Elog.d(LteCAConfigActivity.TAG, "set LTE CA failed!");
                    return;
                }
            }
            if (asyncResult == null || asyncResult.exception != null || asyncResult.result == null) {
                LteCAConfigActivity.this.showToast("Query lte CA status failed.");
                Elog.d(LteCAConfigActivity.TAG, "Query lte CA status failed.");
                return;
            }
            String[] strArr = (String[]) asyncResult.result;
            Elog.d(LteCAConfigActivity.TAG, "Query lte CA status succeed,result = " + strArr[0]);
            int currentLteCAMode = LteCAConfigActivity.this.parseCurrentLteCAMode(strArr[0]);
            Elog.d(LteCAConfigActivity.TAG, "mode = " + currentLteCAMode);
            if (currentLteCAMode == 0) {
                LteCAConfigActivity.this.mRadioBtnOff.setChecked(true);
            } else {
                LteCAConfigActivity.this.mRadioBtnOn.setChecked(true);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public int parseCurrentLteCAMode(String str) {
        try {
            return Integer.valueOf(str.substring(FORE_CMD.length()).trim()).intValue();
        } catch (NumberFormatException e) {
            Elog.e(TAG, "Wrong current mode format: " + str);
            return -1;
        }
    }

    private void queryCAStatus() {
        sendCommand(new String[]{QUERY_CA_CMD, FORE_CMD}, 101);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendAtCommand(String str) {
        sendCommand(new String[]{SET_CA_CMD + str, ""}, 102);
    }

    private void sendCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendCommand " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mCommandHander.obtainMessage(i));
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

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.lte_ca_config_activity);
        this.mRadioBtnOn = (RadioButton) findViewById(R.id.lte_ca_on_radio);
        this.mRadioBtnOff = (RadioButton) findViewById(R.id.lte_ca_off_radio);
        Button button = (Button) findViewById(R.id.lte_ca_set_button);
        queryCAStatus();
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.ltecaconfigure.LteCAConfigActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (LteCAConfigActivity.this.mRadioBtnOn.isChecked()) {
                    LteCAConfigActivity.this.sendAtCommand("1");
                    Elog.i(LteCAConfigActivity.TAG, "Set LTE CA Status : on");
                } else if (LteCAConfigActivity.this.mRadioBtnOff.isChecked()) {
                    LteCAConfigActivity.this.sendAtCommand("0");
                    Elog.i(LteCAConfigActivity.TAG, "Set LTE CA Status : off");
                }
            }
        });
    }
}
