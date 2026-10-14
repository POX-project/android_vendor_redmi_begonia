package com.mediatek.engineermode.bluetooth;

import android.bluetooth.BluetoothAdapter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class BleTestMode extends BtTestBaseActivity implements View.OnClickListener {
    private static final int ARG_RX = 0;
    private static final int ARG_TX = 1;
    private static final int CHANNEL_NUM = 40;
    private static final int MSG_OP_TEST_START = 11;
    private static final int MSG_OP_TEST_STOP = 12;
    private static final int MSG_UI_START_DONE = 1;
    private static final int MSG_UI_STOP_DONE = 2;
    private static final String TAG = "BleTestMode";
    private BluetoothAdapter mBtAdapter = null;
    private Button mBtnStart = null;
    private Button mBtnStop = null;
    private RadioGroup mRgMode = null;
    private TextView mTvResult = null;
    private String mResultStr = "R:";
    private Spinner mSpChannel = null;
    private Spinner mSpPattern = null;
    private byte mChannelValue = 0;
    private byte mPatternValue = 0;
    private WorkHandler mWorkHandler = null;
    private Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.BleTestMode.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(BleTestMode.TAG, "receive msg of " + message.what);
            int i = message.what;
            if (i == 1) {
                BleTestMode.this.enableUI(false);
                BleTestMode.this.removeWaitDlg();
            } else {
                if (i != 2) {
                    return;
                }
                if (message.arg1 == 0) {
                    BleTestMode.this.mTvResult.setText(BleTestMode.this.mResultStr);
                }
                BleTestMode.this.enableUI(true);
                BleTestMode.this.removeWaitDlg();
            }
        }
    };

    private final class WorkHandler extends Handler {
        private WorkHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 11) {
                if (message.arg1 == 1) {
                    BleTestMode.this.startTxTest();
                } else {
                    BleTestMode.this.startRxTest();
                }
                BleTestMode.this.mUiHandler.sendEmptyMessage(1);
                return;
            }
            if (i != 12) {
                return;
            }
            BleTestMode.this.stopTest(message.arg1);
            Message messageObtainMessage = BleTestMode.this.mUiHandler.obtainMessage(2);
            messageObtainMessage.arg1 = message.arg1;
            BleTestMode.this.mUiHandler.sendMessage(messageObtainMessage);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        int childCount = this.mRgMode.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRgMode.getChildAt(i).setEnabled(z);
        }
        this.mSpChannel.setEnabled(z);
        this.mSpPattern.setEnabled(z);
        this.mBtnStart.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
    }

    private void initComponent() {
        initAntComponent();
        this.mBtnStart = (Button) findViewById(R.id.ble_test_start_btn);
        this.mBtnStop = (Button) findViewById(R.id.ble_test_stop_btn);
        this.mTvResult = (TextView) findViewById(R.id.ble_test_result_tv);
        this.mRgMode = (RadioGroup) findViewById(R.id.ble_test_mode_rg);
        this.mSpChannel = (Spinner) findViewById(R.id.ble_test_ch_sp);
        this.mSpPattern = (Spinner) findViewById(R.id.ble_test_pattern_sp);
        this.mBtnStart.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        for (int i = 0; i < 40; i++) {
            arrayAdapter.add(getString(R.string.bt_le_test_channnel) + i);
        }
        this.mSpChannel.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mSpChannel.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.bluetooth.BleTestMode.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                Elog.i(BleTestMode.TAG, "mSpChannel item " + i2);
                BleTestMode.this.mChannelValue = (byte) i2;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        arrayAdapter2.add(getResources().getStringArray(R.array.bt_le_test_pattern));
        this.mSpPattern.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.bluetooth.BleTestMode.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                Elog.i(BleTestMode.TAG, "mSpPattern item " + i2);
                BleTestMode.this.mPatternValue = (byte) i2;
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        enableUI(true);
    }

    private char[] sendTestStopCmd() {
        char[] cArr = {1, 31, ' ', 0};
        return this.mBtTest.hciCommandRun(cArr, cArr.length);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startRxTest() {
        this.mBtTest.init();
        char[] cArr = {1, 29, ' ', 1, (char) this.mChannelValue};
        this.mBtTest.hciCommandRun(cArr, cArr.length);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startTxTest() {
        this.mBtTest.init();
        this.mBtTest.hciCommandRun(new char[]{1, 30, ' ', 3, (char) this.mChannelValue, '%', (char) this.mPatternValue}, 7);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopTest(int i) {
        Elog.v(TAG, "handleRxTestStop");
        char[] cArrSendTestStopCmd = sendTestStopCmd();
        if (i == 0 && cArrSendTestStopCmd != null) {
            this.mResultStr = String.format("***Packet Count: %d", Long.valueOf((((long) cArrSendTestStopCmd[8]) * 256) + ((long) cArrSendTestStopCmd[7])));
        }
        this.mBtTest.unInit();
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
        if (view.equals(this.mBtnStart)) {
            showWaitDlg();
            Message messageObtainMessage = this.mWorkHandler.obtainMessage(11);
            if (this.mRgMode.getCheckedRadioButtonId() == R.id.ble_test_tx_rb) {
                messageObtainMessage.arg1 = 1;
            } else {
                messageObtainMessage.arg1 = 0;
            }
            this.mWorkHandler.sendMessage(messageObtainMessage);
            return;
        }
        if (view.equals(this.mBtnStop)) {
            showWaitDlg();
            Message messageObtainMessage2 = this.mWorkHandler.obtainMessage(12);
            if (this.mRgMode.getCheckedRadioButtonId() == R.id.ble_test_tx_rb) {
                messageObtainMessage2.arg1 = 1;
            } else {
                messageObtainMessage2.arg1 = 0;
            }
            this.mWorkHandler.sendMessage(messageObtainMessage2);
        }
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bt_le_test_mode);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
