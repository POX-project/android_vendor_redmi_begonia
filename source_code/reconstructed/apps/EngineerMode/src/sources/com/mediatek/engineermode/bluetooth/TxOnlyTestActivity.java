package com.mediatek.engineermode.bluetooth;

import android.content.res.Resources;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;

/* JADX INFO: loaded from: classes2.dex */
public class TxOnlyTestActivity extends BtTestBaseActivity implements View.OnClickListener {
    private static final int ET_TYPE_PKT_LEN = 2;
    private static final int ET_TYPE_TX_CH = 1;
    private static final int INDEX_PKT_TYPE_NON_MODULATED = 27;
    private static final int MSG_OP_TEST_START = 11;
    private static final int MSG_OP_TEST_STOP = 12;
    private static final int MSG_UI_START_DONE = 1;
    private static final int MSG_UI_STOP_DONE = 2;
    private static final String TAG = "BtTxOnlyTest";
    private static final int TX_PKT_DATA_MAX_INDEX = 2;
    private static final int TX_PKT_DATA_MIN_INDEX = 1;
    private static final int TX_PKT_DATA_NAME_INDEX = 0;
    private int mChannel;
    private int mOriBtState;
    private int mPattern;
    private int mPktType;
    private int mPktTypeLen;
    private int mTxCh;
    private static final char[] CHANNEL_HOP_20 = {0, 1, 2};
    private static final char[] SUPPORT_RESPONSE = {4, 14, 4, 1, 144, 253, 0};
    private TextView mTvPktLength = null;
    private Spinner mSpPattern = null;
    private Spinner mSpChannels = null;
    private Spinner mSpPktTypes = null;
    private Button mBtnStart = null;
    private Button mBtnStop = null;
    private EditText mEtFreq = null;
    private EditText mEtPktLength = null;
    private Handler mWorkHandler = null;
    private ArrayList<TxPktData> mPktDataList = new ArrayList<>();
    private Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.TxOnlyTestActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(TxOnlyTestActivity.TAG, "receive msg of " + message.what);
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                TxOnlyTestActivity.this.enableUI(true);
                TxOnlyTestActivity.this.removeWaitDlg();
                return;
            }
            if (message.arg1 == BtTest.BtTestResult.RESULT_SUCCESS.ordinal()) {
                TxOnlyTestActivity.this.enableUI(false);
            } else {
                Toast.makeText(TxOnlyTestActivity.this, R.string.bt_tx_start_failed, 1).show();
            }
            TxOnlyTestActivity.this.removeWaitDlg();
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.bluetooth.TxOnlyTestActivity$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid;

        static {
            int[] iArr = new int[ParamValid.values().length];
            $SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid = iArr;
            try {
                iArr[ParamValid.PARAM_VALID_PKT_LEN_EXCEED.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid[ParamValid.PARAM_VALID_PKT_LEN_NO_VALUE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid[ParamValid.PARAM_VALID_TX_CH_NO_VALUE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    private enum ParamValid {
        PARAM_VALID_VALID,
        PARAM_VALID_PKT_LEN_EXCEED,
        PARAM_VALID_PKT_LEN_NO_VALUE,
        PARAM_VALID_TX_CH_NO_VALUE
    }

    private class TxPktData {
        private int mMax;
        private int mMin;
        private String mName;

        TxPktData(String str, int i, int i2) {
            this.mName = str;
            this.mMin = i;
            this.mMax = i2;
            Elog.i(TxOnlyTestActivity.TAG, "init pkt data with " + str + " " + i + " " + i2);
        }

        int getMax() {
            return this.mMax;
        }

        int getMin() {
            return this.mMin;
        }

        String getName() {
            return this.mName;
        }
    }

    private final class WorkHandler extends Handler {
        private WorkHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.i(TxOnlyTestActivity.TAG, "work handler msg:" + message.what);
            int i = message.what;
            if (i == 11) {
                Message messageObtainMessage = TxOnlyTestActivity.this.mUiHandler.obtainMessage(1);
                messageObtainMessage.arg1 = TxOnlyTestActivity.this.doTest().ordinal();
                TxOnlyTestActivity.this.mUiHandler.sendMessage(messageObtainMessage);
            } else {
                if (i != 12) {
                    return;
                }
                TxOnlyTestActivity.this.mBtTest.runHCIResetCmd();
                TxOnlyTestActivity.this.mBtTest.unInit();
                TxOnlyTestActivity.this.mUiHandler.sendEmptyMessage(2);
            }
        }
    }

    private ParamValid checkAndGetParameters() {
        ParamValid editBoxValue = getEditBoxValue(this.mEtFreq, 1);
        if (editBoxValue != ParamValid.PARAM_VALID_VALID) {
            return editBoxValue;
        }
        ParamValid editBoxValue2 = getEditBoxValue(this.mEtPktLength, 2);
        if (editBoxValue2 != ParamValid.PARAM_VALID_VALID) {
            return editBoxValue2;
        }
        int selectedItemPosition = this.mSpPktTypes.getSelectedItemPosition();
        this.mPktType = selectedItemPosition;
        if (this.mPktTypeLen > this.mPktDataList.get(selectedItemPosition).mMax || this.mPktTypeLen < this.mPktDataList.get(this.mPktType).mMin) {
            return ParamValid.PARAM_VALID_PKT_LEN_EXCEED;
        }
        this.mPattern = this.mSpPattern.getSelectedItemPosition();
        this.mChannel = this.mSpChannels.getSelectedItemPosition();
        return ParamValid.PARAM_VALID_VALID;
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
        this.mBtnStart.setEnabled(z);
        this.mBtnStop.setEnabled(!z);
        this.mSpChannels.setEnabled(z);
        this.mSpPattern.setEnabled(z);
        this.mSpPktTypes.setEnabled(z);
        this.mEtFreq.setEnabled(z);
        this.mEtPktLength.setEnabled(z);
    }

    private ParamValid getEditBoxValue(EditText editText, int i) {
        String string = editText.getText().toString();
        if (string != null && !string.isEmpty()) {
            int i2 = Integer.parseInt(string);
            if (i == 1) {
                this.mTxCh = i2;
            } else if (i == 2) {
                this.mPktTypeLen = i2;
            }
            return ParamValid.PARAM_VALID_VALID;
        }
        Elog.i(TAG, "editText:" + editText + " str " + string + " flag:" + i);
        return i == 1 ? ParamValid.PARAM_VALID_TX_CH_NO_VALUE : ParamValid.PARAM_VALID_PKT_LEN_NO_VALUE;
    }

    private void handleNonModulated() {
        char[] cArr = {1, 21, 252, 1, 0};
        this.mBtTest.hciCommandRun(cArr, 5);
        cArr[0] = 1;
        cArr[1] = 213;
        cArr[2] = 252;
        cArr[3] = 1;
        cArr[4] = (char) this.mTxCh;
        this.mBtTest.hciCommandRun(cArr, 5);
    }

    private void initComponent() {
        initAntComponent();
        this.mSpPattern = (Spinner) findViewById(R.id.bt_tx_pattern_sp);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.bt_tx_pattern, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPattern.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        this.mTvPktLength = (TextView) findViewById(R.id.bt_tx_pkt_length_tv);
        this.mSpPktTypes = (Spinner) findViewById(R.id.bt_tx_pkt_type_sp);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        initPktDataList();
        Iterator<TxPktData> it = this.mPktDataList.iterator();
        while (it.hasNext()) {
            arrayAdapter.add(it.next().mName);
        }
        this.mSpPktTypes.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.bluetooth.TxOnlyTestActivity.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                String str;
                TxPktData txPktData = (TxPktData) TxOnlyTestActivity.this.mPktDataList.get(i);
                new String();
                if (txPktData.mMin == txPktData.mMax) {
                    str = "[" + txPktData.mMin + "]";
                } else {
                    str = "[" + txPktData.mMin + "~" + txPktData.mMax + "]";
                }
                TxOnlyTestActivity.this.mTvPktLength.setText(TxOnlyTestActivity.this.getResources().getString(R.string.bt_tx_pkt_length) + str);
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mSpPktTypes.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mSpChannels = (Spinner) findViewById(R.id.bt_tx_channel_sp);
        Button button = (Button) findViewById(R.id.bt_tx_start_btn);
        this.mBtnStart = button;
        button.setOnClickListener(this);
        Button button2 = (Button) findViewById(R.id.bt_tx_stop_btn);
        this.mBtnStop = button2;
        button2.setOnClickListener(this);
        this.mEtFreq = (EditText) findViewById(R.id.bt_tx_freq_et);
        this.mEtPktLength = (EditText) findViewById(R.id.bt_tx_pkt_length_et);
        enableUI(true);
    }

    private void initPktDataList() {
        for (String str : getResources().getStringArray(R.array.bt_tx_pkt_data)) {
            String[] strArrSplit = str.split(",");
            this.mPktDataList.add(new TxPktData(strArrSplit[0], Integer.valueOf(strArrSplit[1]).intValue(), Integer.valueOf(strArrSplit[2]).intValue()));
        }
    }

    private BtTest.BtTestResult startTest() {
        Elog.i(TAG, "PocketType:" + this.mPktType + " Frequency:" + this.mTxCh);
        this.mBtTest.init();
        if (this.mPktType == 27) {
            handleNonModulated();
        } else if (!this.mBtTest.doTxOnlyTest(this.mPattern, this.mChannel, this.mPktType, this.mPktTypeLen, this.mTxCh)) {
            this.mBtTest.unInit();
            int i = this.mOriBtState;
            if (11 == i || 12 == i) {
                enableBluetooth(true);
            }
            return BtTest.BtTestResult.RESULT_TEST_FAIL;
        }
        return BtTest.BtTestResult.RESULT_SUCCESS;
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected boolean couldExit() {
        return this.mBtnStart.isEnabled();
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected void handleInitResult(BtTest.BtTestResult btTestResult) {
        Resources resources = getResources();
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(Arrays.asList(resources.getStringArray(R.array.bt_tx_channels)));
        if (btTestResult.equals(BtTest.BtTestResult.RESULT_CHANNEL_HOP_20_SUPPORT)) {
            arrayList.addAll(Arrays.asList(resources.getStringArray(R.array.bt_tx_channels_20)));
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpChannels.setAdapter((SpinnerAdapter) arrayAdapter);
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity
    protected BtTest.BtTestResult initParams() {
        BtTest.BtTestResult btTestResult = BtTest.BtTestResult.RESULT_CHANNEL_HOP_20_SUPPORT;
        for (char c : CHANNEL_HOP_20) {
            char[] cArr = {1, 144, 253, 1, c};
            char[] cArrHciCommandRun = this.mBtTest.hciCommandRun(cArr, cArr.length);
            int length = cArrHciCommandRun.length;
            char[] cArr2 = SUPPORT_RESPONSE;
            if (length != cArr2.length || !Arrays.equals(cArr2, cArrHciCommandRun)) {
                return BtTest.BtTestResult.RESULT_CHANNEL_HOP_20_NO_SUPPORT;
            }
        }
        return btTestResult;
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
        ParamValid paramValidCheckAndGetParameters = checkAndGetParameters();
        int i = -1;
        int i2 = AnonymousClass3.$SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid[paramValidCheckAndGetParameters.ordinal()];
        if (i2 == 1) {
            i = R.string.bt_param_pkt_lenth_exceed;
        } else if (i2 == 2) {
            i = R.string.bt_param_no_pkt_length;
        } else if (i2 == 3) {
            i = R.string.bt_param_no_tx_ch;
        }
        if (paramValidCheckAndGetParameters == ParamValid.PARAM_VALID_VALID) {
            this.mWorkHandler.sendEmptyMessage(11);
        } else {
            Toast.makeText(this, getText(i), 1).show();
            removeWaitDlg();
        }
    }

    @Override // com.mediatek.engineermode.bluetooth.BtTestBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bt_tx_only_test);
        this.mWorkHandler = new WorkHandler(getWorkLooper());
        initComponent();
    }
}
