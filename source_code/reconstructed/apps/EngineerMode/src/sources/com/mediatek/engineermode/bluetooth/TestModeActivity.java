package com.mediatek.engineermode.bluetooth;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class TestModeActivity extends BtTestBaseActivity {
    private static final int DEFAULT_INT = 9;
    private static final int MSG_OP_TEST_START = 11;
    private static final int MSG_OP_TEST_STOP = 12;
    private static final int MSG_UI_TEST_START = 1;
    private static final int MSG_UI_TEST_STOP = 2;
    private static final int POWER_INVALID = -1;
    private static final String TAG = "BtTestMode";
    private Button mBtnDisableTm;
    private Button mBtnEnableTm;
    private EditText mEtPower;
    private View mLayoutPower;
    private RadioGroup mRgPowerLevel;
    private WorkHandler mWorkHandler = null;
    private final Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.TestModeActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(TestModeActivity.TAG, "receive msg of " + message.what);
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                TestModeActivity.this.setAntSwapInTestProcess(false);
                TestModeActivity.this.enableUI(true);
                TestModeActivity.this.removeWaitDlg();
                return;
            }
            if (message.arg1 == BtTest.BtTestResult.RESULT_TEST_FAIL.ordinal()) {
                Toast.makeText(TestModeActivity.this, R.string.bt_tm_start_failed, 0).show();
            } else {
                TestModeActivity.this.setAntSwapInTestProcess(true);
                TestModeActivity.this.enableUI(false);
            }
            TestModeActivity.this.removeWaitDlg();
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
                    TestModeActivity.this.mBtTest.pollingStop();
                    TestModeActivity.this.mBtTest.runHCIResetCmd();
                    TestModeActivity.this.mBtTest.unInit();
                    TestModeActivity.this.mUiHandler.sendEmptyMessage(2);
                    return;
                }
                return;
            }
            Message messageObtainMessage = TestModeActivity.this.mUiHandler.obtainMessage(1);
            Elog.i(TestModeActivity.TAG, "power:" + message.arg1);
            TestModeActivity.this.mBtTest.init();
            if (TestModeActivity.this.mBtTest.enableTestMode(message.arg1)) {
                TestModeActivity.this.mBtTest.pollingStart();
                messageObtainMessage.arg1 = BtTest.BtTestResult.RESULT_SUCCESS.ordinal();
            } else {
                TestModeActivity.this.mBtTest.unInit();
                messageObtainMessage.arg1 = BtTest.BtTestResult.RESULT_TEST_FAIL.ordinal();
            }
            TestModeActivity.this.mUiHandler.sendMessage(messageObtainMessage);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        int childCount = this.mRgPowerLevel.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRgPowerLevel.getChildAt(i).setEnabled(z);
        }
        this.mEtPower.setEnabled(z);
        this.mBtnEnableTm.setEnabled(z);
        this.mBtnDisableTm.setEnabled(!z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getPowerInput() {
        String string = this.mEtPower.getText().toString();
        if (string == null || string.length() != 1) {
            return -1;
        }
        try {
            return Integer.parseInt(string);
        } catch (NumberFormatException e) {
            e.printStackTrace();
            return -1;
        }
    }

    private void initComponent() {
        initAntComponent();
        this.mLayoutPower = findViewById(R.id.bt_tm_power_ll);
        this.mEtPower = (EditText) findViewById(R.id.bt_tm_power_et);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.bt_tm_power_rg);
        this.mRgPowerLevel = radioGroup;
        radioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.bluetooth.TestModeActivity.2
            @Override // android.widget.RadioGroup.OnCheckedChangeListener
            public void onCheckedChanged(RadioGroup radioGroup2, int i) {
                TestModeActivity.this.mLayoutPower.setVisibility(i == R.id.bt_tm_power_cus_rb ? 0 : 8);
            }
        });
        Button button = (Button) findViewById(R.id.bt_tm_enable);
        this.mBtnEnableTm = button;
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.bluetooth.TestModeActivity.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                TestModeActivity.this.showWaitDlg();
                int powerInput = -1;
                if (TestModeActivity.this.mRgPowerLevel.getCheckedRadioButtonId() == R.id.bt_tm_power_cus_rb && (powerInput = TestModeActivity.this.getPowerInput()) == -1) {
                    TestModeActivity testModeActivity = TestModeActivity.this;
                    Toast.makeText(testModeActivity, testModeActivity.getString(R.string.bt_tm_power_invalid), 1).show();
                    TestModeActivity.this.removeWaitDlg();
                } else {
                    Message messageObtainMessage = TestModeActivity.this.mWorkHandler.obtainMessage(11);
                    messageObtainMessage.arg1 = powerInput;
                    TestModeActivity.this.mWorkHandler.sendMessage(messageObtainMessage);
                }
            }
        });
        Button button2 = (Button) findViewById(R.id.bt_tm_disable);
        this.mBtnDisableTm = button2;
        button2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.bluetooth.TestModeActivity.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                TestModeActivity.this.showWaitDlg();
                TestModeActivity.this.mWorkHandler.sendEmptyMessage(12);
            }
        });
        enableUI(true);
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected boolean couldExit() {
        return this.mBtnEnableTm.isEnabled();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    public /* bridge */ /* synthetic */ void onBackPressed() {
        super.onBackPressed();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bt_test_mode);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
