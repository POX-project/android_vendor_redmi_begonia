package com.mediatek.engineermode.bluetooth;

import android.app.Activity;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.bluetooth.BluetoothAdapter;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
abstract class BtTestBaseActivity extends Activity {
    private static final int DLG_INIT_CONFIG = 2;
    private static final int DLG_WAIT = 1;
    private static final int MSG_OP_ANT_SWAP = 11;
    private static final int MSG_OP_INIT_CONFIG = 12;
    private static final int MSG_UI_ANT_SWAP_RESULT = 1;
    private static final int MSG_UI_INIT_CONFIG_DONE = 3;
    private static final int MSG_UI_INIT_CONFIG_START = 2;
    private static final String TAG = "BtTestBaseActivity";
    protected BluetoothAdapter mBtAdapter;
    private RadioGroup mRgAntSwap;
    protected BtTest mBtTest = new BtTest();
    private boolean mAntSwapInTestProcess = false;
    private boolean mAntSwapSupport = false;
    private boolean mConfigInited = false;
    private int mAntCurrentId = R.id.bt_ant0_rb;
    private Handler mBaseWorkHandler = null;
    private HandlerThread mWorkThread = null;
    private Handler mBaseUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.BtTestBaseActivity.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(BtTestBaseActivity.TAG, "UI handler receive msg of " + message.what + " param " + message.arg1);
            int i = message.what;
            if (i == 1) {
                if (message.arg1 != BtTest.BtTestResult.RESULT_ANT_SWAP_FAIL.ordinal()) {
                    BtTestBaseActivity btTestBaseActivity = BtTestBaseActivity.this;
                    btTestBaseActivity.mAntCurrentId = btTestBaseActivity.mRgAntSwap.getCheckedRadioButtonId();
                    return;
                } else {
                    Toast.makeText(BtTestBaseActivity.this, R.string.bt_ant_swap_fail, 1).show();
                    Elog.i(BtTestBaseActivity.TAG, "mRgAntSwap.check(mAntCurrentId)");
                    BtTestBaseActivity.this.mRgAntSwap.check(BtTestBaseActivity.this.mAntCurrentId);
                    return;
                }
            }
            if (i == 2) {
                BtTestBaseActivity.this.showDialog(2);
                return;
            }
            if (i != 3) {
                return;
            }
            BtTestBaseActivity.this.removeDialog(2);
            if (message.arg1 != BtTest.BtTestResult.RESULT_ANT_INIT_FAIL.ordinal()) {
                BtTestBaseActivity.this.handleInitResult(BtTest.BtTestResult.values()[message.arg1]);
            } else {
                Toast.makeText(BtTestBaseActivity.this, R.string.bt_ant_init_fail, 1).show();
                BtTestBaseActivity.this.finish();
            }
        }
    };

    private final class BaseOpHandler extends Handler {
        private BaseOpHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(BtTestBaseActivity.TAG, "work handler msg:" + message.what);
            if (message.what != 11) {
                if (message.what == 12) {
                    BtTestBaseActivity.this.mBaseUiHandler.sendEmptyMessage(2);
                    Message messageObtainMessage = BtTestBaseActivity.this.mBaseUiHandler.obtainMessage(3);
                    BtTestBaseActivity.this.mBtTest.init();
                    if (BtTestBaseActivity.this.initAntSwap()) {
                        messageObtainMessage.arg1 = BtTestBaseActivity.this.initParams().ordinal();
                    } else {
                        messageObtainMessage.arg1 = BtTest.BtTestResult.RESULT_ANT_INIT_FAIL.ordinal();
                    }
                    BtTestBaseActivity.this.mBtTest.unInit();
                    BtTestBaseActivity.this.mBaseUiHandler.sendMessage(messageObtainMessage);
                    return;
                }
                return;
            }
            Message messageObtainMessage2 = BtTestBaseActivity.this.mBaseUiHandler.obtainMessage(1);
            Elog.i(BtTestBaseActivity.TAG, "msg.arg1:" + message.arg1 + " mAntSwapInTestProcess:" + BtTestBaseActivity.this.mAntSwapInTestProcess);
            if (BtTestBaseActivity.this.mAntSwapInTestProcess) {
                messageObtainMessage2.arg1 = (BtTestBaseActivity.this.mBtTest.switchAnt(message.arg1, true) ? BtTest.BtTestResult.RESULT_SUCCESS : BtTest.BtTestResult.RESULT_ANT_SWAP_FAIL).ordinal();
            } else {
                BtTestBaseActivity.this.mBtTest.init();
                messageObtainMessage2.arg1 = (BtTestBaseActivity.this.mBtTest.switchAnt(message.arg1, false) ? BtTest.BtTestResult.RESULT_SUCCESS : BtTest.BtTestResult.RESULT_ANT_SWAP_FAIL).ordinal();
                BtTestBaseActivity.this.mBtTest.unInit();
            }
            BtTestBaseActivity.this.mBaseUiHandler.sendMessage(messageObtainMessage2);
        }
    }

    BtTestBaseActivity() {
    }

    protected abstract boolean couldExit();

    protected void enableAntSwap(boolean z) {
        if (this.mAntSwapSupport) {
            int childCount = this.mRgAntSwap.getChildCount();
            for (int i = 0; i < childCount; i++) {
                this.mRgAntSwap.getChildAt(i).setEnabled(z);
            }
        }
    }

    protected Looper getWorkLooper() {
        return this.mWorkThread.getLooper();
    }

    protected void handleInitResult(BtTest.BtTestResult btTestResult) {
    }

    protected void initAntComponent() {
        this.mAntSwapSupport = getIntent().getIntExtra("ant_num", 1) == 2;
        findViewById(R.id.bt_ant_swap_ll).setVisibility(this.mAntSwapSupport ? 0 : 8);
        if (this.mAntSwapSupport) {
            RadioGroup radioGroup = (RadioGroup) findViewById(R.id.bt_ant_rg);
            this.mRgAntSwap = radioGroup;
            radioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.bluetooth.BtTestBaseActivity.1
                @Override // android.widget.RadioGroup.OnCheckedChangeListener
                public void onCheckedChanged(RadioGroup radioGroup2, int i) {
                    if (BtTestBaseActivity.this.mAntCurrentId == i) {
                        return;
                    }
                    Message messageObtainMessage = BtTestBaseActivity.this.mBaseWorkHandler.obtainMessage(11);
                    messageObtainMessage.arg1 = i == R.id.bt_ant1_rb ? 1 : 0;
                    Elog.i(BtTestBaseActivity.TAG, "msg.arg1:" + messageObtainMessage.arg1);
                    BtTestBaseActivity.this.mBaseWorkHandler.sendMessage(messageObtainMessage);
                }
            });
        }
    }

    protected boolean initAntSwap() {
        Elog.i(TAG, "initAntSwap()");
        if (!this.mAntSwapSupport) {
            return true;
        }
        boolean zSwitchAnt = this.mBtTest.switchAnt(0, false);
        Elog.i(TAG, "result " + zSwitchAnt);
        return zSwitchAnt;
    }

    protected BtTest.BtTestResult initParams() {
        return BtTest.BtTestResult.RESULT_SUCCESS;
    }

    protected boolean isAntSwapSupported() {
        return this.mAntSwapSupport;
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (couldExit()) {
            super.onBackPressed();
        } else {
            Toast.makeText(this, R.string.bt_warn_stop, 1).show();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        HandlerThread handlerThread = new HandlerThread(getLocalClassName());
        this.mWorkThread = handlerThread;
        handlerThread.start();
        this.mBaseWorkHandler = new BaseOpHandler(getWorkLooper());
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 1) {
            ProgressDialog progressDialog = new ProgressDialog(this);
            progressDialog.setMessage(getString(R.string.bt_operation_wait));
            progressDialog.setCancelable(false);
            progressDialog.setIndeterminate(true);
            return progressDialog;
        }
        if (i != 2) {
            return null;
        }
        ProgressDialog progressDialog2 = new ProgressDialog(this);
        progressDialog2.setMessage(getString(R.string.bt_config_init));
        progressDialog2.setCancelable(false);
        progressDialog2.setIndeterminate(true);
        return progressDialog2;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        HandlerThread handlerThread = this.mWorkThread;
        if (handlerThread != null) {
            handlerThread.quit();
        }
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        if (this.mBtAdapter == null) {
            this.mBtAdapter = BluetoothAdapter.getDefaultAdapter();
        }
        if (!this.mBtTest.checkInitState(this.mBtAdapter, this)) {
            finish();
        }
        if (this.mConfigInited) {
            return;
        }
        this.mConfigInited = true;
        this.mBaseWorkHandler.sendEmptyMessage(12);
    }

    protected void removeWaitDlg() {
        removeDialog(1);
    }

    protected void setAntSwapInTestProcess(boolean z) {
        this.mAntSwapInTestProcess = z;
    }

    protected void showWaitDlg() {
        showDialog(1);
    }
}
