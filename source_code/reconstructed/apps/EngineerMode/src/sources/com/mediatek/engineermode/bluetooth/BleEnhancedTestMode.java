package com.mediatek.engineermode.bluetooth;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class BleEnhancedTestMode extends BtTestBaseActivity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
    private static final int ARG_RX = 0;
    private static final int ARG_TX = 1;
    private static final int CHANNEL_NUM = 40;
    private static final int MSG_OP_TEST_START = 11;
    private static final int MSG_OP_TEST_STOP = 12;
    private static final int MSG_UI_START_DONE = 1;
    private static final int MSG_UI_STOP_DONE = 2;
    private static final int PL_LENGTH_MAX = 255;
    private static final int PL_LENGTH_MIN = 0;
    private static final String TAG = "BLEEhTestMode";
    private Button mBtnStart;
    private Button mBtnStop;
    private int mChannelValue;
    private EditText mEtPlLength;
    private int mPatternValue;
    private int mPhyValue;
    private int mPlLength;
    private RadioGroup mRGTestMode;
    private String mResultStr;
    private Spinner mSpChannel;
    private Spinner mSpPattern;
    private Spinner mSpPhy;
    private ArrayAdapter<String> mSpPhyRxAdapter;
    private ArrayAdapter<String> mSpPhyTxAdapter;
    private TextView mTvResult;
    private View mViewPattern;
    private View mViewPlLength;
    private boolean m2MPhySupport = false;
    private boolean mCodedPhySupport = false;
    private WorkHandler mWorkHandler = null;
    private Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.BleEnhancedTestMode.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(BleEnhancedTestMode.TAG, "Rec ui msg " + message);
            int i = message.what;
            if (i == 1) {
                if (message.arg1 == BtTest.BtTestResult.RESULT_SUCCESS.ordinal()) {
                    BleEnhancedTestMode.this.enableUI(false);
                } else {
                    Toast.makeText(BleEnhancedTestMode.this, R.string.bt_test_start_failed, 1).show();
                }
                BleEnhancedTestMode.this.removeWaitDlg();
                return;
            }
            if (i != 2) {
                return;
            }
            if (message.arg1 == 0) {
                BleEnhancedTestMode.this.mTvResult.setText(BleEnhancedTestMode.this.mResultStr);
            }
            BleEnhancedTestMode.this.enableUI(true);
            BleEnhancedTestMode.this.removeWaitDlg();
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
                Message messageObtainMessage = BleEnhancedTestMode.this.mUiHandler.obtainMessage(1);
                if (message.arg1 == 1) {
                    messageObtainMessage.arg1 = BleEnhancedTestMode.this.startTxTest().ordinal();
                } else {
                    messageObtainMessage.arg1 = BleEnhancedTestMode.this.startRxTest().ordinal();
                }
                BleEnhancedTestMode.this.mUiHandler.sendMessage(messageObtainMessage);
                return;
            }
            if (i != 12) {
                return;
            }
            Message messageObtainMessage2 = BleEnhancedTestMode.this.mUiHandler.obtainMessage(2);
            BleEnhancedTestMode.this.stopTest(message.arg1);
            messageObtainMessage2.arg1 = message.arg1;
            BleEnhancedTestMode.this.mUiHandler.sendMessage(messageObtainMessage2);
        }
    }

    private boolean checkAndGetParameters() {
        this.mChannelValue = this.mSpChannel.getSelectedItemPosition();
        this.mPhyValue = this.mSpPhy.getSelectedItemPosition() + 1;
        if (this.mRGTestMode.getCheckedRadioButtonId() == R.id.ble_eh_test_tx_rb) {
            try {
                int iIntValue = Integer.valueOf(this.mEtPlLength.getText().toString()).intValue();
                this.mPlLength = iIntValue;
                if (iIntValue < 0 || iIntValue > 255) {
                    return false;
                }
                this.mPatternValue = this.mSpPattern.getSelectedItemPosition();
            } catch (NumberFormatException e) {
                return false;
            }
        }
        this.mTvResult.setText("");
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        enableAntSwap(z);
        int childCount = this.mRGTestMode.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRGTestMode.getChildAt(i).setEnabled(z);
        }
        this.mSpChannel.setEnabled(z);
        this.mSpPattern.setEnabled(z);
        this.mSpPhy.setEnabled(z);
        this.mEtPlLength.setEnabled(z);
        this.mBtnStart.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
    }

    private void initComponent() {
        initAntComponent();
        this.mViewPattern = findViewById(R.id.ble_eh_test_pattern_layout);
        this.mViewPlLength = findViewById(R.id.ble_eh_test_pl_length_layout);
        this.mBtnStart = (Button) findViewById(R.id.ble_eh_test_start_btn);
        this.mBtnStop = (Button) findViewById(R.id.ble_eh_test_stop_btn);
        this.mTvResult = (TextView) findViewById(R.id.ble_eh_test_result_tv);
        this.mSpChannel = (Spinner) findViewById(R.id.ble_eh_test_channel_sp);
        this.mSpPattern = (Spinner) findViewById(R.id.ble_eh_test_pattern_sp);
        this.mSpPhy = (Spinner) findViewById(R.id.ble_eh_test_phy_sp);
        this.mEtPlLength = (EditText) findViewById(R.id.ble_eh_test_pl_length_et);
        this.mBtnStart.setOnClickListener(this);
        this.mBtnStop.setOnClickListener(this);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        for (int i = 0; i < 40; i++) {
            arrayAdapter.add(getString(R.string.bt_le_eh_test_channnel) + i);
        }
        this.mSpChannel.setAdapter((SpinnerAdapter) arrayAdapter);
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mSpPhyTxAdapter = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        ArrayAdapter<String> arrayAdapter3 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mSpPhyRxAdapter = arrayAdapter3;
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.ble_eh_test_mode_rg);
        this.mRGTestMode = radioGroup;
        radioGroup.setOnCheckedChangeListener(this);
        this.mRGTestMode.check(R.id.ble_eh_test_tx_rb);
        enableUI(true);
    }

    private void listPhy() {
        char[] cArr = {1, 3, ' ', 0};
        char[] cArrHciCommandRun = this.mBtTest.hciCommandRun(cArr, cArr.length);
        if (cArrHciCommandRun == null || cArrHciCommandRun.length < 3 || cArrHciCommandRun[6] != 0) {
            return;
        }
        this.m2MPhySupport = (cArrHciCommandRun[8] & 1) != 0;
        this.mCodedPhySupport = ('\b' & cArrHciCommandRun[8]) != 0;
    }

    private char[] runStopTestCmd() {
        char[] cArr = {1, 31, ' ', 0};
        return this.mBtTest.hciCommandRun(cArr, cArr.length);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public BtTest.BtTestResult startRxTest() {
        if (!this.mBtTest.init()) {
            return BtTest.BtTestResult.RESULT_TEST_FAIL;
        }
        char[] cArr = {1, '3', ' ', 3, (char) this.mChannelValue, (char) this.mPhyValue, 0};
        if (this.mBtTest.hciCommandRun(cArr, cArr.length) != null) {
            return BtTest.BtTestResult.RESULT_SUCCESS;
        }
        this.mBtTest.unInit();
        return BtTest.BtTestResult.RESULT_TEST_FAIL;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public BtTest.BtTestResult startTxTest() {
        if (!this.mBtTest.init()) {
            return BtTest.BtTestResult.RESULT_TEST_FAIL;
        }
        char[] cArr = {1, '4', ' ', 4, (char) this.mChannelValue, (char) this.mPlLength, (char) this.mPatternValue, (char) this.mPhyValue};
        if (this.mBtTest.hciCommandRun(cArr, cArr.length) != null) {
            return BtTest.BtTestResult.RESULT_SUCCESS;
        }
        this.mBtTest.unInit();
        return BtTest.BtTestResult.RESULT_TEST_FAIL;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopTest(int i) {
        char[] cArrRunStopTestCmd = runStopTestCmd();
        if (i == 0 && cArrRunStopTestCmd != null && cArrRunStopTestCmd.length >= 9) {
            this.mResultStr = String.format("***Packet Count: %d", Long.valueOf((((long) cArrRunStopTestCmd[8]) * 256) + ((long) cArrRunStopTestCmd[7])));
        }
        this.mBtTest.unInit();
    }

    private void updatePhyList() {
        this.mSpPhyTxAdapter.add(getResources().getString(R.string.bt_le_eh_test_1m_phy));
        this.mSpPhyRxAdapter.add(getResources().getString(R.string.bt_le_eh_test_1m_phy));
        if (this.m2MPhySupport) {
            this.mSpPhyTxAdapter.add(getResources().getString(R.string.bt_le_eh_test_2m_phy));
            this.mSpPhyRxAdapter.add(getResources().getString(R.string.bt_le_eh_test_2m_phy));
        }
        if (this.mCodedPhySupport) {
            this.mSpPhyTxAdapter.add(getResources().getString(R.string.bt_le_eh_test_coded_phy_8));
            this.mSpPhyTxAdapter.add(getResources().getString(R.string.bt_le_eh_test_coded_phy_2));
            this.mSpPhyRxAdapter.add(getResources().getString(R.string.bt_le_eh_test_coded_phy));
        }
        if (this.mRGTestMode.getCheckedRadioButtonId() == R.id.ble_eh_test_tx_rb) {
            this.mSpPhy.setAdapter((SpinnerAdapter) this.mSpPhyTxAdapter);
        } else {
            this.mSpPhy.setAdapter((SpinnerAdapter) this.mSpPhyRxAdapter);
        }
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected boolean couldExit() {
        return this.mBtnStart.isEnabled();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected void handleInitResult(BtTest.BtTestResult btTestResult) {
        updatePhyList();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected BtTest.BtTestResult initParams() {
        listPhy();
        return BtTest.BtTestResult.RESULT_SUCCESS;
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    public /* bridge */ /* synthetic */ void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        if (i == R.id.ble_eh_test_tx_rb) {
            this.mViewPlLength.setVisibility(0);
            this.mViewPattern.setVisibility(0);
            this.mSpPhy.setAdapter((SpinnerAdapter) this.mSpPhyTxAdapter);
        } else {
            this.mViewPlLength.setVisibility(8);
            this.mViewPattern.setVisibility(8);
            this.mSpPhy.setAdapter((SpinnerAdapter) this.mSpPhyRxAdapter);
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (!view.equals(this.mBtnStart)) {
            if (view.equals(this.mBtnStop)) {
                Elog.i(TAG, "click stop");
                showWaitDlg();
                Message messageObtainMessage = this.mWorkHandler.obtainMessage(12);
                if (this.mRGTestMode.getCheckedRadioButtonId() == R.id.ble_eh_test_tx_rb) {
                    messageObtainMessage.arg1 = 1;
                } else {
                    messageObtainMessage.arg1 = 0;
                }
                this.mWorkHandler.sendMessage(messageObtainMessage);
                return;
            }
            return;
        }
        Elog.i(TAG, "click start");
        showWaitDlg();
        if (!checkAndGetParameters()) {
            Toast.makeText(this, getText(R.string.bt_invalid_param), 1).show();
            removeWaitDlg();
            return;
        }
        Message messageObtainMessage2 = this.mWorkHandler.obtainMessage(11);
        if (this.mRGTestMode.getCheckedRadioButtonId() == R.id.ble_eh_test_tx_rb) {
            messageObtainMessage2.arg1 = 1;
        } else {
            messageObtainMessage2.arg1 = 0;
        }
        this.mWorkHandler.sendMessage(messageObtainMessage2);
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bt_le_enhanced_test_mode);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
