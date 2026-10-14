package com.mediatek.engineermode.bluetooth;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class BtRelayerModeActivity extends BtTestBaseActivity implements View.OnClickListener {
    private static final int INDEX_USB = 4;
    private static final int MSG_OP_TEST_START = 11;
    private static final int MSG_OP_TEST_STOP = 12;
    private static final int MSG_UI_TEST_START = 1;
    private static final int MSG_UI_TEST_STOP = 2;
    private static final String TAG = "BtRelayerMode";
    private Button mBtnStart;
    private Button mBtnStop;
    private Spinner mSpBaudrate;
    private Spinner mSpUartPort;
    private int mBaudrate = 9600;
    private int mPortNumber = 3;
    private WorkHandler mWorkHandler = null;
    private final Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.BtRelayerModeActivity.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                if (message.arg1 == BtTest.BtTestResult.RESULT_TEST_FAIL.ordinal()) {
                    Toast.makeText(BtRelayerModeActivity.this, R.string.bt_test_start_failed, 0).show();
                } else {
                    BtRelayerModeActivity.this.enableUI(false);
                }
                BtRelayerModeActivity.this.removeWaitDlg();
                return;
            }
            if (i != 2) {
                return;
            }
            if (message.arg1 == BtTest.BtTestResult.RESULT_TEST_FAIL.ordinal()) {
                BtRelayerModeActivity btRelayerModeActivity = BtRelayerModeActivity.this;
                Toast.makeText(btRelayerModeActivity, btRelayerModeActivity.getText(R.string.bt_test_stop_failed), 1).show();
            } else {
                BtRelayerModeActivity.this.enableUI(true);
            }
            BtRelayerModeActivity.this.removeWaitDlg();
        }
    };

    private final class WorkHandler extends Handler {
        private WorkHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 11) {
                if (message.what == 12) {
                    Message messageObtainMessage = BtRelayerModeActivity.this.mUiHandler.obtainMessage(2);
                    messageObtainMessage.arg1 = (BtRelayerModeActivity.this.mBtTest.stopRelayerMode() ? BtTest.BtTestResult.RESULT_SUCCESS : BtTest.BtTestResult.RESULT_TEST_FAIL).ordinal();
                    BtRelayerModeActivity.this.mUiHandler.sendMessage(messageObtainMessage);
                    return;
                }
                return;
            }
            Message messageObtainMessage2 = BtRelayerModeActivity.this.mUiHandler.obtainMessage(1);
            BtTest.BtTestResult btTestResult = BtRelayerModeActivity.this.mBtTest.startRelayerMode(BtRelayerModeActivity.this.mPortNumber, BtRelayerModeActivity.this.mBaudrate) ? BtTest.BtTestResult.RESULT_SUCCESS : BtTest.BtTestResult.RESULT_TEST_FAIL;
            messageObtainMessage2.arg1 = btTestResult.ordinal();
            Elog.i(BtRelayerModeActivity.TAG, "-->relayerStart-" + BtRelayerModeActivity.this.mBaudrate + " uart " + BtRelayerModeActivity.this.mPortNumber + "result 0 success,-1 fail: result= " + btTestResult);
            BtRelayerModeActivity.this.mUiHandler.sendMessage(messageObtainMessage2);
        }
    }

    private boolean checkAndGetParameters() {
        try {
            this.mBaudrate = Integer.parseInt(this.mSpBaudrate.getSelectedItem().toString().trim());
            this.mPortNumber = Long.valueOf(this.mSpUartPort.getSelectedItemId()).intValue();
            return true;
        } catch (NumberFormatException e) {
            Elog.e(TAG, e.getMessage());
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        if (!z || (z && this.mSpUartPort.getSelectedItemPosition() != 4)) {
            this.mSpBaudrate.setEnabled(z);
        }
        this.mSpUartPort.setEnabled(z);
        this.mBtnStart.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
    }

    private void initComponent() {
        initAntComponent();
        this.mSpBaudrate = (Spinner) findViewById(R.id.bt_relayer_baudrate_sp);
        Spinner spinner = (Spinner) findViewById(R.id.bt_relayer_port_sp);
        this.mSpUartPort = spinner;
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.bluetooth.BtRelayerModeActivity.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i == 4) {
                    BtRelayerModeActivity.this.mSpBaudrate.setEnabled(false);
                } else {
                    BtRelayerModeActivity.this.mSpBaudrate.setEnabled(true);
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mBtnStart = (Button) findViewById(R.id.bt_relayer_start_btn);
        this.mBtnStop = (Button) findViewById(R.id.bt_relayer_stop_btn);
        this.mBtnStart.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        enableUI(true);
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected boolean couldExit() {
        return this.mBtnStart.isEnabled();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    public /* bridge */ /* synthetic */ void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (!view.equals(this.mBtnStart)) {
            if (view.equals(this.mBtnStop)) {
                showWaitDlg();
                this.mWorkHandler.sendEmptyMessage(12);
                return;
            }
            return;
        }
        showWaitDlg();
        if (checkAndGetParameters()) {
            this.mWorkHandler.sendEmptyMessage(11);
        } else {
            Toast.makeText(this, getText(R.string.bt_invalid_param), 1).show();
            removeWaitDlg();
        }
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bt_relayer_mode);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
