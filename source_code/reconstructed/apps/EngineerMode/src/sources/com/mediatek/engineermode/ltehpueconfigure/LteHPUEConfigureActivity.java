package com.mediatek.engineermode.ltehpueconfigure;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class LteHPUEConfigureActivity extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final String CMD_QUERY = "+ESBP:";
    private static final String CMD_QUERY_HPUE = "AT+ESBP=7,\"SBP_HPUE\"";
    private static final String CMD_SET_HPUE = "AT+ESBP=5,\"SBP_HPUE\",";
    private static final int MSG_QUERY_HPUE = 1;
    private static final int MSG_SET = 3;
    private static final String TAG = "LteHPUEConfigureActivity";
    private CheckBox mLteHPUEConfigureCb;
    private boolean mLteHPUEChecked = false;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.ltehpueconfigure.LteHPUEConfigureActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                LteHPUEConfigureActivity lteHPUEConfigureActivity = LteHPUEConfigureActivity.this;
                lteHPUEConfigureActivity.mLteHPUEChecked = lteHPUEConfigureActivity.parseData(asyncResult);
                LteHPUEConfigureActivity.this.mLteHPUEConfigureCb.setChecked(LteHPUEConfigureActivity.this.mLteHPUEChecked);
                return;
            }
            if (i != 3) {
                return;
            }
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            if (asyncResult2.exception == null) {
                EmUtils.showToast("Succeed to set", 0);
                Elog.i(LteHPUEConfigureActivity.TAG, "Succeed to set");
            } else {
                Elog.e(LteHPUEConfigureActivity.TAG, asyncResult2.exception.getMessage());
                EmUtils.showToast("Failed to set", 0);
                Elog.w(LteHPUEConfigureActivity.TAG, "Failed to set");
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public boolean parseData(AsyncResult asyncResult) {
        if (asyncResult.exception != null) {
            Elog.e(TAG, asyncResult.exception.getMessage());
        } else if (asyncResult.result != null && (asyncResult.result instanceof String[])) {
            String[] strArr = (String[]) asyncResult.result;
            if (strArr.length > 0 && strArr[0].length() > CMD_QUERY.length()) {
                Elog.v(TAG, "data[0] is : " + strArr[0]);
                try {
                    return Integer.valueOf(strArr[0].substring(CMD_QUERY.length()).trim()).intValue() == 1;
                } catch (NumberFormatException e) {
                    Elog.e(TAG, e.getMessage());
                }
            }
        }
        EmUtils.showToast("Failed to query current settings", 0);
        return false;
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.i(TAG, "sendAtCommand() " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mHandler.obtainMessage(i));
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton != this.mLteHPUEConfigureCb || this.mLteHPUEChecked == z) {
            return;
        }
        this.mLteHPUEChecked = z;
        sendAtCommand(new String[]{CMD_SET_HPUE + (z ? 1 : 0), ""}, 3);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.lte_hpue_configure);
        CheckBox checkBox = (CheckBox) findViewById(R.id.lte_hpue_configure);
        this.mLteHPUEConfigureCb = checkBox;
        checkBox.setOnCheckedChangeListener(this);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        sendAtCommand(new String[]{CMD_QUERY_HPUE, CMD_QUERY}, 1);
    }
}
