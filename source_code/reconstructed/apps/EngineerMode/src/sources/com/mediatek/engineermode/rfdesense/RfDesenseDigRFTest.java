package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Message;
import android.text.InputFilter;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.ProgressBar;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;
import com.android.internal.telephony.Phone;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseDigRFTest extends Activity {
    private static final String AT_CMD_START = "AT+EGCMD=4896,1,\"04\"";
    private static final String AT_CMD_STOP = "AT+EGCMD=4896,1,\"05\"";
    private static final int CLOSE = 2;
    private static final int HINT = 1;
    public static final String KEY_PERIOD = "digrf_period";
    public static final String KEY_PERIOD_STATUS = "digrf_period_status";
    public static final String KEY_ROUND = "digrf_round";
    public static final String KEY_ROUND_STATUS = "digrf_round_status";
    public static final String KEY_STATE = "digrf_state";
    private static final int MSG_NW_RF_OFF = 6;
    public static final int MSG_TEST_PERIOD_END = 7;
    private static final int OPEN = 1;
    private static final int PAUSE = 3;
    private static final int SIM_CARD_INSERT = 2;
    private static final int START = 0;
    public static final int STATE_CLOSED = 4;
    public static final int STATE_NONE = 0;
    public static final int STATE_OPENED = 3;
    public static final int STATE_PAUSED = 2;
    public static final int STATE_STARTED = 1;
    public static final String TAG = "RfDesenseDigRFTest";
    public static final String TEST_RESULT_TITLE = "Test Result:\n\n";
    private static final int UPDATE_BUTTON = 5;
    private static final int VRB_LENGTH_MAX = 0;
    private static final int VRB_LENGTH_MIN = 0;
    private static final int VRB_START_MAX = 0;
    private static final int VRB_START_MIN = 0;
    private Button mButtonPause;
    private Button mButtonStart;
    private Phone mPhone;
    private ProgressBar mProgress;
    private int period;
    String resultText;
    private int round;
    private CheckBox testPeriodCb;
    private Spinner testPeriodSpinner;
    private TextView testResultOverallTv;
    private TextView testResultTitleTv;
    private TextView testResultTv;
    private CheckBox testRoundCb;
    private EditText testRoundEt;
    CountDownTimer timer;
    private int phoneid = 0;
    private Toast mToast = null;
    private int mState = 0;
    private int mCellCount = 1;
    private int testPeriod = 0;
    private int testRound = 0;
    private int testNum = 0;
    private int testFailedNum = 0;
    private int testSucceedNum = 0;
    boolean isPeriod = false;
    boolean isRound = false;
    List<String> resultList = new ArrayList();
    boolean[] oneResult = new boolean[2];
    HashMap<Integer, Integer> TestPeriodMap = new HashMap<Integer, Integer>() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.1
        {
            put(0, 1);
            put(1, 10);
            put(2, 60);
            put(3, 180);
            put(4, 600);
            put(5, 1800);
        }
    };
    private View.OnClickListener mOnClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.2
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            int id = view.getId();
            if (id == R.id.button_cancel) {
                RfDesenseDigRFTest.this.disableAllButtons();
                RfDesenseDigRFTest.this.mState = 2;
            } else {
                if (id != R.id.button_start) {
                    return;
                }
                RfDesenseDigRFTest.this.disableAllButtons();
                RfDesenseDigRFTest.this.testStart();
            }
        }
    };
    private final AdapterView.OnItemSelectedListener mItemSelectedListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.3
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            if (adapterView == RfDesenseDigRFTest.this.testPeriodSpinner) {
                RfDesenseDigRFTest rfDesenseDigRFTest = RfDesenseDigRFTest.this;
                rfDesenseDigRFTest.testPeriod = rfDesenseDigRFTest.TestPeriodMap.get(Integer.valueOf(adapterView.getSelectedItemPosition())).intValue();
            }
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
            RfDesenseDigRFTest.this.testPeriod = 0;
        }
    };
    private CompoundButton.OnCheckedChangeListener mOnCheckListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.4
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            switch (compoundButton.getId()) {
                case R.id.rb_digrf_period /* 2131101271 */:
                    RfDesenseDigRFTest.this.isPeriod = z;
                    break;
                case R.id.rb_digrf_round /* 2131101272 */:
                    RfDesenseDigRFTest.this.isRound = z;
                    break;
            }
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.6
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                RfDesenseDigRFTest.this.mState = 1;
                RfDesenseDigRFTest.this.updateButtons();
            } else if (i != 1) {
                if (i != 2) {
                    if (i != 3) {
                        if (i == 5) {
                            RfDesenseDigRFTest.this.updateButtons();
                            return;
                        }
                        if (i == 6) {
                            Elog.d(RfDesenseDigRFTest.TAG, "The rf is off");
                            RfDesenseDigRFTest.this.mState = 0;
                            RfDesenseDigRFTest.this.updateButtons();
                            return;
                        } else {
                            if (i != 7) {
                                return;
                            }
                            if (RfDesenseDigRFTest.this.oneResult[0]) {
                                RfDesenseDigRFTest.this.sendAtCommand(RfDesenseDigRFTest.AT_CMD_STOP, 2);
                                return;
                            } else {
                                RfDesenseDigRFTest.this.testRoundEnd();
                                return;
                            }
                        }
                    }
                    RfDesenseDigRFTest.this.mState = 2;
                    RfDesenseDigRFTest.this.updateButtons();
                }
                if (((AsyncResult) message.obj).exception == null) {
                    RfDesenseDigRFTest.this.oneResult[1] = true;
                } else {
                    Elog.d(RfDesenseDigRFTest.TAG, "CLOSE Command failed.");
                    RfDesenseDigRFTest.this.oneResult[1] = false;
                }
                RfDesenseDigRFTest.this.testRoundEnd();
                return;
            }
            if (((AsyncResult) message.obj).exception == null) {
                if (RfDesenseDigRFTest.this.mState != 2) {
                    RfDesenseDigRFTest.this.mState = 3;
                }
                RfDesenseDigRFTest.this.oneResult[0] = true;
            } else {
                RfDesenseDigRFTest.this.showToast("OPEN Command failed.");
                RfDesenseDigRFTest.this.oneResult[0] = false;
            }
            RfDesenseDigRFTest rfDesenseDigRFTest = RfDesenseDigRFTest.this;
            rfDesenseDigRFTest.startTimer(rfDesenseDigRFTest.period);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void disableAllButtons() {
        this.mButtonStart.setEnabled(false);
        this.mButtonPause.setEnabled(false);
    }

    private int getTestPeriodIndex(int i) {
        for (int i2 = 0; i2 < this.TestPeriodMap.size(); i2++) {
            if (this.TestPeriodMap.get(Integer.valueOf(i2)).intValue() == i) {
                return i2;
            }
        }
        return 0;
    }

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        this.testPeriod = sharedPreferences.getInt(KEY_PERIOD, 0);
        this.testRound = sharedPreferences.getInt(KEY_ROUND, 0);
        this.isPeriod = sharedPreferences.getBoolean(KEY_PERIOD_STATUS, false);
        this.isRound = sharedPreferences.getBoolean(KEY_ROUND_STATUS, false);
        this.testPeriodSpinner.setSelection(getTestPeriodIndex(this.testPeriod));
        this.testPeriodCb.setChecked(this.isPeriod);
        this.testRoundCb.setChecked(this.isRound);
        this.testRoundEt.setText(this.testRound + "");
        updateButtons();
    }

    private void saveState() {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        this.testPeriod = this.TestPeriodMap.get(Integer.valueOf(this.testPeriodSpinner.getSelectedItemPosition())).intValue();
        if (this.testRoundEt.getText().toString().equals("")) {
            this.testRound = 1;
        } else {
            try {
                this.testRound = Integer.valueOf(this.testRoundEt.getText().toString()).intValue();
            } catch (NumberFormatException e) {
                Elog.e(TAG, "NumberFormatException for " + ((Object) this.testRoundEt.getText()) + " " + e.getMessage());
                this.testRound = 1;
            }
        }
        this.isPeriod = this.testPeriodCb.isChecked();
        this.isPeriod = this.testPeriodCb.isChecked();
        editorEdit.putInt(KEY_STATE, this.mState);
        editorEdit.putInt(KEY_PERIOD, this.testPeriod);
        editorEdit.putInt(KEY_ROUND, this.testRound);
        editorEdit.putBoolean(KEY_PERIOD_STATUS, this.isPeriod);
        editorEdit.putBoolean(KEY_ROUND_STATUS, this.isRound);
        editorEdit.commit();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendAtCommand(String str, int i) {
        String[] strArr = {str, ""};
        Elog.d(TAG, "send: " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mHandler.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Elog.d(TAG, str);
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 1);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void testRoundEnd() {
        ProgressBar progressBar = this.mProgress;
        progressBar.setSecondaryProgress(progressBar.getProgress() + 1);
        if (this.resultList.size() >= 99) {
            List<String> list = this.resultList;
            list.remove(list.size() - 1);
        }
        boolean[] zArr = this.oneResult;
        if (zArr[0] && zArr[1]) {
            this.resultList.add(0, "Round " + this.testNum + " : PASS\n");
            this.testSucceedNum = this.testSucceedNum + 1;
        } else {
            this.resultList.add(0, "Round " + this.testNum + " : NG\n");
            this.testFailedNum = this.testFailedNum + 1;
        }
        String str = "NG: " + this.testFailedNum + " round, PASS: " + this.testSucceedNum + " round\n";
        this.resultText = str;
        this.testResultOverallTv.setText(str);
        this.testResultTv.setText(" " + this.resultList.toString().replace("[", "").replace("]", "").replace(",", ""));
        int i = this.testNum + 1;
        this.testNum = i;
        if (i < this.round && this.mState != 2) {
            sendAtCommand(AT_CMD_START, 1);
            this.mState = 4;
            this.mProgress.setProgress((this.testNum * 100) / this.round);
            return;
        }
        this.testResultTv.setVisibility(8);
        this.mHandler.sendEmptyMessageDelayed(5, 1000L);
        Elog.d(TAG, "Test stoped round  " + this.testNum + ": (" + this.testSucceedNum + " : " + this.testFailedNum + ").");
        this.mProgress.setProgress((this.testNum * 100) / this.round);
        if (this.testNum >= this.round) {
            this.mState = 0;
            this.mProgress.setVisibility(8);
            this.testResultTv.setVisibility(8);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void testStart() {
        if (this.testRoundEt.getText().toString().equals("")) {
            this.round = 1;
        } else {
            try {
                int iIntValue = Integer.valueOf(this.testRoundEt.getText().toString()).intValue();
                this.testRound = iIntValue;
                if (!this.isRound) {
                    iIntValue = 1;
                }
                this.round = iIntValue;
            } catch (NumberFormatException e) {
                Elog.e(TAG, "NumberFormatException for " + ((Object) this.testRoundEt.getText()) + " " + e.getMessage());
                this.round = 1;
            }
        }
        int iIntValue2 = this.TestPeriodMap.get(Integer.valueOf(this.testPeriodSpinner.getSelectedItemPosition())).intValue();
        this.testPeriod = iIntValue2;
        if (!this.isPeriod) {
            iIntValue2 = 0;
        }
        this.period = iIntValue2;
        this.mState = 1;
        this.testResultTitleTv.setVisibility(0);
        this.resultText = "";
        this.testResultOverallTv.setText("");
        this.testResultOverallTv.setVisibility(0);
        this.resultList.clear();
        this.testResultTv.setText("");
        this.testResultTv.setVisibility(0);
        this.mProgress.setProgress(0);
        this.mProgress.setSecondaryProgress(1);
        this.mProgress.setVisibility(0);
        this.testNum = 0;
        this.testSucceedNum = 0;
        this.testFailedNum = 0;
        this.oneResult = new boolean[]{false, false};
        sendAtCommand(AT_CMD_START, 0);
        Elog.d(TAG, "Test Start -> period: " + this.period + ",round:  " + this.round);
    }

    private void testStop() {
        this.mState = 2;
        CountDownTimer countDownTimer = this.timer;
        if (countDownTimer != null) {
            countDownTimer.cancel();
            this.timer = null;
        }
        Elog.d(TAG, "Test Stop -> period: " + this.period + ",round:  " + this.round + ", testNum:" + this.testNum);
        sendAtCommand(AT_CMD_STOP, 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateButtons() {
        Elog.d(TAG, "[updateButtons] mState :" + this.mState);
        disableAllButtons();
        int i = this.mState;
        ((i == 1 || i == 3) ? this.mButtonPause : this.mButtonStart).setEnabled(true);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        int i = this.mState;
        if (i == 1 || i == 3) {
            showDialog(1);
        } else {
            EmUtils.setAirplaneModeEnabled(false);
            super.onBackPressed();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindow().addFlags(128);
        setContentView(R.layout.rf_desense_digrf_test);
        this.mButtonStart = (Button) findViewById(R.id.button_start);
        this.mButtonPause = (Button) findViewById(R.id.button_cancel);
        this.testPeriodSpinner = (Spinner) findViewById(R.id.test_period);
        this.testPeriodCb = (CheckBox) findViewById(R.id.rb_digrf_period);
        this.testRoundEt = (EditText) findViewById(R.id.test_round);
        this.testRoundCb = (CheckBox) findViewById(R.id.rb_digrf_round);
        this.testResultTv = (TextView) findViewById(R.id.test_result);
        this.mProgress = (ProgressBar) findViewById(R.id.test_progress);
        this.testResultTitleTv = (TextView) findViewById(R.id.test_result_title);
        this.testResultOverallTv = (TextView) findViewById(R.id.test_result_overall);
        this.mButtonStart.setOnClickListener(this.mOnClickListener);
        this.mButtonPause.setOnClickListener(this.mOnClickListener);
        this.testPeriodSpinner.setOnItemSelectedListener(this.mItemSelectedListener);
        this.testPeriodCb.setOnCheckedChangeListener(this.mOnCheckListener);
        this.testRoundCb.setOnCheckedChangeListener(this.mOnCheckListener);
        this.testRoundEt.setFilters(new InputFilter[]{new InputFilter.LengthFilter(10)});
        disableAllButtons();
        if (!EmUtils.ifAirplaneModeEnabled()) {
            Elog.d(TAG, "it is in AirplaneMode");
            EmUtils.setAirplaneModeEnabled(true);
        }
        restoreState();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 1) {
            return i != 2 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle("Notice").setMessage("Please pull out the sim card before test").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create();
        }
        return new AlertDialog.Builder(this).setTitle("Hint").setMessage("Please pause the test first!").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        saveState();
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d(TAG, "onResume");
        if (ModemCategory.isSimReady(-1)) {
            Elog.d(TAG, "some card insert");
            showDialog(2);
        }
    }

    public void startTimer(final int i) {
        Elog.d(TAG, "waitTime = " + i + "s");
        ProgressBar progressBar = this.mProgress;
        progressBar.setSecondaryProgress(progressBar.getProgress() + 1);
        CountDownTimer countDownTimer = new CountDownTimer((long) (i * 1000), 100L) { // from class: com.mediatek.engineermode.rfdesense.RfDesenseDigRFTest.5
            @Override // android.os.CountDownTimer
            public void onFinish() {
                if (RfDesenseDigRFTest.this.oneResult[0]) {
                    RfDesenseDigRFTest rfDesenseDigRFTest = RfDesenseDigRFTest.this;
                    rfDesenseDigRFTest.sendAtCommand(RfDesenseDigRFTest.AT_CMD_STOP, rfDesenseDigRFTest.mState == 2 ? 3 : 2);
                } else {
                    RfDesenseDigRFTest.this.testRoundEnd();
                }
                Elog.d(RfDesenseDigRFTest.TAG, "test closed, round : " + RfDesenseDigRFTest.this.testNum + ", period: " + i + ", mState: " + RfDesenseDigRFTest.this.mState);
                if (RfDesenseDigRFTest.this.timer != null) {
                    RfDesenseDigRFTest.this.timer.cancel();
                }
                RfDesenseDigRFTest.this.timer = null;
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
                ProgressBar progressBar2 = RfDesenseDigRFTest.this.mProgress;
                int i2 = i;
                progressBar2.setSecondaryProgress((int) ((((long) (i2 * 1000)) - j) / ((long) (i2 * 10))));
                Elog.d(RfDesenseDigRFTest.TAG, "millisUntilFinishied: " + j);
                if (j <= 1000 || RfDesenseDigRFTest.this.mState != 2) {
                    return;
                }
                onFinish();
            }
        };
        this.timer = countDownTimer;
        countDownTimer.start();
    }
}
