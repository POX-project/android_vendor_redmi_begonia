package com.mediatek.engineermode.bluetooth;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class NoSigRxTestActivity extends BtTestBaseActivity implements View.OnClickListener {
    private static final int DEFAULT_ADDR = 10875075;
    private static final int FREQ_MAX_VALUE = 78;
    private static final int MSG_OP_BT_START = 11;
    private static final int MSG_OP_BT_STOP = 12;
    private static final int MSG_UI_START_DONE = 2;
    private static final int MSG_UI_STOP_DONE = 4;
    private static final String TAG = "BtNoSigRxTest";
    private Button mBtnStartTest;
    private Button mBtnStopTest;
    private EditText mEtAddr;
    private EditText mEtFreq;
    private int mOriBtState;
    private Spinner mSpPattern;
    private Spinner mSpPocketType;
    private TextView mTvBitErrRate;
    private TextView mTvPackCnt;
    private TextView mTvPackErrRate;
    private TextView mTvRxByteCnt;
    private int[] mResult = null;
    private Handler mWorkHandler = null;
    private int mAddr = -1;
    private int mPattern = -1;
    private int mPocketType = -1;
    private int mFreq = 0;
    private Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.NoSigRxTestActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(NoSigRxTestActivity.TAG, "receive msg of " + message.what);
            int i = message.what;
            if (i == 2) {
                if (message.arg1 == BtTest.BtTestResult.RESULT_TEST_FAIL.ordinal()) {
                    NoSigRxTestActivity noSigRxTestActivity = NoSigRxTestActivity.this;
                    Toast.makeText(noSigRxTestActivity, noSigRxTestActivity.getText(R.string.bt_rx_start_fail), 1).show();
                } else {
                    NoSigRxTestActivity.this.enableUI(false);
                }
                NoSigRxTestActivity.this.removeWaitDlg();
                return;
            }
            if (i != 4) {
                return;
            }
            if (message.arg1 == BtTest.BtTestResult.RESULT_SUCCESS.ordinal()) {
                NoSigRxTestActivity.this.mTvPackCnt.setText(String.valueOf(NoSigRxTestActivity.this.mResult[0]));
                NoSigRxTestActivity.this.mTvPackErrRate.setText(String.format("%.2f", Double.valueOf(((double) NoSigRxTestActivity.this.mResult[1]) / 100.0d)) + "%");
                NoSigRxTestActivity.this.mTvRxByteCnt.setText(String.valueOf(NoSigRxTestActivity.this.mResult[2]));
                NoSigRxTestActivity.this.mTvBitErrRate.setText(String.format("%.2f", Double.valueOf(((double) NoSigRxTestActivity.this.mResult[3]) / 100.0d)) + "%");
                NoSigRxTestActivity.this.enableUI(true);
            } else {
                NoSigRxTestActivity noSigRxTestActivity2 = NoSigRxTestActivity.this;
                Toast.makeText(noSigRxTestActivity2, noSigRxTestActivity2.getText(R.string.bt_rx_stop_fail), 1).show();
            }
            NoSigRxTestActivity.this.removeWaitDlg();
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
                Message messageObtainMessage = NoSigRxTestActivity.this.mUiHandler.obtainMessage(2);
                messageObtainMessage.arg1 = NoSigRxTestActivity.this.doTest().ordinal();
                NoSigRxTestActivity.this.mUiHandler.sendMessage(messageObtainMessage);
            } else {
                if (i != 12) {
                    return;
                }
                Message messageObtainMessage2 = NoSigRxTestActivity.this.mUiHandler.obtainMessage(4);
                messageObtainMessage2.arg1 = NoSigRxTestActivity.this.stopTest().ordinal();
                NoSigRxTestActivity.this.mUiHandler.sendMessage(messageObtainMessage2);
            }
        }
    }

    private boolean checkAndGetParameters() {
        String string;
        String string2 = this.mEtFreq.getText().toString();
        if (string2 == null || string2.isEmpty() || (string = this.mEtAddr.getText().toString()) == null || string.isEmpty()) {
            return false;
        }
        try {
            int i = Integer.parseInt(string2);
            this.mFreq = i;
            if (i >= 0 && i <= FREQ_MAX_VALUE) {
                int i2 = (int) Long.parseLong(string, 16);
                this.mAddr = i2;
                if (i2 == 0) {
                    this.mAddr = DEFAULT_ADDR;
                    this.mEtAddr.setText(String.valueOf(DEFAULT_ADDR));
                }
                this.mPattern = this.mSpPattern.getSelectedItemPosition();
                this.mPocketType = this.mSpPocketType.getSelectedItemPosition();
                return true;
            }
            return false;
        } catch (NumberFormatException e) {
            Elog.e(TAG, e.getMessage());
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public BtTest.BtTestResult doTest() {
        this.mOriBtState = this.mBtAdapter.getState();
        enableBluetooth(false);
        return startTest();
    }

    private void enableBluetooth(boolean z) {
        Elog.i(TAG, "Bluetooth to enabled:" + z);
        if (z) {
            this.mBtAdapter.enable();
        } else {
            this.mBtAdapter.disable();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        enableAntSwap(z);
        this.mSpPattern.setEnabled(z);
        this.mSpPocketType.setEnabled(z);
        this.mEtFreq.setEnabled(z);
        this.mEtAddr.setEnabled(z);
        this.mBtnStartTest.setEnabled(z);
        this.mBtnStopTest.setEnabled(!z);
    }

    private void initComponent() {
        initAntComponent();
        this.mEtFreq = (EditText) findViewById(R.id.bt_rx_freq_et);
        this.mEtAddr = (EditText) findViewById(R.id.bt_rx_addr_et);
        this.mTvPackCnt = (TextView) findViewById(R.id.bt_rx_pkt_cnt_tv);
        this.mTvPackErrRate = (TextView) findViewById(R.id.bt_rx_pkt_err_rate_tv);
        this.mTvRxByteCnt = (TextView) findViewById(R.id.bt_rx_pkt_byte_cnt_tv);
        this.mTvBitErrRate = (TextView) findViewById(R.id.bt_rx_bit_err_rate_tv);
        this.mSpPattern = (Spinner) findViewById(R.id.bt_rx_pattern_sp);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.bt_rx_pattern, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPattern.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        this.mSpPocketType = (Spinner) findViewById(R.id.bt_rx_pocket_sp);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource2 = ArrayAdapter.createFromResource(this, R.array.bt_rx_pocket_type, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPocketType.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource2);
        this.mBtnStartTest = (Button) findViewById(R.id.bt_rx_start_btn);
        this.mBtnStopTest = (Button) findViewById(R.id.bt_rx_stop_btn);
        this.mBtnStartTest.setOnClickListener(this);
        this.mBtnStopTest.setOnClickListener(this);
        enableUI(true);
    }

    private BtTest.BtTestResult startTest() {
        this.mBtTest.init();
        if (this.mBtTest.noSigRxTestStart(this.mPattern, this.mPocketType, this.mFreq, this.mAddr)) {
            return BtTest.BtTestResult.RESULT_SUCCESS;
        }
        this.mBtTest.unInit();
        Elog.e(TAG, "no signal rx test failed.");
        int i = this.mOriBtState;
        if (11 == i || 12 == i) {
            enableBluetooth(true);
        }
        return BtTest.BtTestResult.RESULT_TEST_FAIL;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public BtTest.BtTestResult stopTest() {
        this.mResult = this.mBtTest.noSigRxTestResult();
        this.mBtTest.unInit();
        if (this.mResult != null) {
            return BtTest.BtTestResult.RESULT_SUCCESS;
        }
        Elog.e(TAG, "no signal rx test failed.");
        int i = this.mOriBtState;
        if (11 == i || 12 == i) {
            enableBluetooth(true);
        }
        return BtTest.BtTestResult.RESULT_TEST_FAIL;
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected boolean couldExit() {
        return this.mBtnStartTest.isEnabled();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    public /* bridge */ /* synthetic */ void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (!view.equals(this.mBtnStartTest)) {
            if (view.equals(this.mBtnStopTest)) {
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
        setContentView(R.layout.bt_no_sig_rx_test);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
