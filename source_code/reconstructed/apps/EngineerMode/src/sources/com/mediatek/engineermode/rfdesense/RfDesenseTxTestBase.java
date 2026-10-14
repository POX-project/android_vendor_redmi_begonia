package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;
import com.android.internal.telephony.Phone;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestBase extends Activity {
    protected static final int CHANNEL_DEFAULT = 0;
    protected static final int CHANNEL_MAX = 2;
    protected static final int CHANNEL_MAX2 = 4;
    protected static final int CHANNEL_MIN = 1;
    protected static final int CHANNEL_MIN2 = 3;
    protected static final int HINT = 5;
    protected static final int PAUSE = 2;
    protected static final int POWER_DEFAULT = 5;
    protected static final int POWER_MAX = 7;
    protected static final int POWER_MIN = 6;
    protected static final int START = 1;
    protected static final int STATE_NONE = 0;
    protected static final int STATE_PAUSED = 2;
    protected static final int STATE_STARTED = 1;
    public static final String TAG = "RfDesense/TxTestBase";
    protected static final int UPDATE_BUTTON = 4;
    protected static final int UPDATE_DELAY = 1000;
    protected CheckBox mAntMode;
    protected EditText mAntStatus;
    protected Spinner mBand;
    private String[] mBandArray;
    protected Button mButtonSet;
    protected TextView mDbm;
    protected Spinner mPattern;
    private String[] mPatternArray;
    protected Phone mPhone;
    protected Editor mChannel = new Editor();
    protected Editor mPower = new Editor();
    protected Editor mAfc = new Editor();
    protected Editor mTsc = new Editor();
    protected Toast mToast = null;
    protected int mCurrentBand = -1;

    protected static class Editor {
        public EditText editor;
        public int max;
        public int max2;
        public int min;
        public int min2;
        public String defaultValue = null;
        public int step = 1;

        protected Editor() {
        }

        public boolean check() {
            try {
                int i = Integer.parseInt(getText());
                if ((i >= this.min && i <= this.max) || (i >= this.min2 && i <= this.max2)) {
                    return this.step == 1 || (i - this.min) % this.step == 0;
                }
                return false;
            } catch (NumberFormatException e) {
                return false;
            }
        }

        public String getText() {
            return this.editor.getText().toString();
        }

        public String getValidRange() {
            String str = "[" + this.min + "," + this.max + "]";
            if (this.min != this.min2) {
                str = str + ", [" + this.min2 + "," + this.max2 + "]";
            }
            if (this.step == 1) {
                return str;
            }
            return str + ", step " + this.step;
        }

        public void set(String str, String str2, String str3) {
            this.defaultValue = str;
            this.min = Integer.parseInt(str2);
            this.max = Integer.parseInt(str3);
            this.min2 = Integer.parseInt(str2);
            this.max2 = Integer.parseInt(str3);
        }

        public void set(String str, String str2, String str3, String str4, String str5) {
            this.defaultValue = str;
            this.min = Integer.parseInt(str2);
            this.max = Integer.parseInt(str3);
            this.min2 = Integer.parseInt(str4);
            this.max2 = Integer.parseInt(str5);
        }

        public void setText(String str) {
            this.editor.setText(str);
        }

        public void setToDefault() {
            this.editor.setText(this.defaultValue);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void saveState(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        editorEdit.putInt(RfDesenseTxTestGsm.KEY_BAND, this.mBand.getSelectedItemPosition());
        editorEdit.putString(RfDesenseTxTestGsm.KEY_CHANNEL, this.mChannel.getText());
        editorEdit.putString(RfDesenseTxTestGsm.KEY_POWER, this.mPower.getText());
        editorEdit.putString(RfDesenseTxTestGsm.KEY_AFC, this.mAfc.getText());
        editorEdit.putString(RfDesenseTxTestGsm.KEY_TSC, this.mTsc.getText());
        editorEdit.putInt(RfDesenseTxTestGsm.KEY_PATTERN, this.mPattern.getSelectedItemPosition());
        editorEdit.putString(RfDesenseTxTestGsm.KEY_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
        editorEdit.putString(RfDesenseTxTestGsm.KEY_ANT_STATUS, this.mAntStatus.getText().toString());
        editorEdit.putString(RfDesenseTxTest.KEY_GSM_ATCMD, str);
        String str2 = "AT+ETXANT=1,1," + ((Object) this.mAntStatus.getText()) + ",,0";
        if (this.mAntMode.isChecked()) {
            editorEdit.putString(RfDesenseTxTest.KEY_GSM_ATCMD_ANT_SWITCH, str2);
        } else {
            str2 = "AT+ETXANT=0,1,0,,0";
            editorEdit.putString(RfDesenseTxTest.KEY_GSM_ATCMD_ANT_SWITCH, "AT+ETXANT=0,1,0,,0");
        }
        Elog.i(TAG, "GSM at command = " + str);
        Elog.i(TAG, "GSM at command ant status = " + str2);
        editorEdit.apply();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 1);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    protected boolean checkValues() {
        Editor[] editorArr = {this.mChannel, this.mPower, this.mAfc, this.mTsc};
        String[] strArr = {"Channel", "TX Power", "AFC", "TSC"};
        for (int i = 0; i < 4; i++) {
            Editor editor = editorArr[i];
            if (editor.editor.getVisibility() == 0 && !editor.check()) {
                Toast.makeText(this, "Invalid " + strArr[i] + ". Valid range: " + editor.getValidRange(), 0).show();
                return false;
            }
        }
        return true;
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_tx_test_gsm);
        this.mBand = (Spinner) findViewById(R.id.band_spinner);
        this.mChannel.editor = (EditText) findViewById(R.id.channel_editor);
        this.mPower.editor = (EditText) findViewById(R.id.power_editor);
        this.mAfc.editor = (EditText) findViewById(R.id.afc_editor);
        this.mTsc.editor = (EditText) findViewById(R.id.tsc_editor);
        this.mPattern = (Spinner) findViewById(R.id.pattern_spinner);
        this.mAntMode = (CheckBox) findViewById(R.id.rf_ant_mode);
        this.mAntStatus = (EditText) findViewById(R.id.rf_ant_status);
        this.mButtonSet = (Button) findViewById(R.id.button_set);
        this.mDbm = (TextView) findViewById(R.id.powerDbm);
        this.mBandArray = getResources().getStringArray(R.array.rf_desense_tx_test_gsm_band_values);
        this.mPatternArray = getResources().getStringArray(R.array.rf_desense_tx_test_gsm_pattern_values);
        this.mButtonSet.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (view.getId() == R.id.button_set && RfDesenseTxTestBase.this.checkValues()) {
                    String str = RfDesenseTxTestBase.this.mBandArray[RfDesenseTxTestBase.this.mBand.getSelectedItemPosition()];
                    String text = RfDesenseTxTestBase.this.mChannel.getText();
                    String text2 = RfDesenseTxTestBase.this.mPower.getText();
                    RfDesenseTxTestBase.this.saveState("AT+ERFTX=2,1," + text + "," + RfDesenseTxTestBase.this.mAfc.getText() + "," + str + "," + RfDesenseTxTestBase.this.mTsc.getText() + "," + text2 + "," + RfDesenseTxTestBase.this.mPatternArray[RfDesenseTxTestBase.this.mPattern.getSelectedItemPosition()]);
                    RfDesenseTxTestBase.this.showToast("Set param suecceed!");
                }
            }
        });
        this.mBand.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i != RfDesenseTxTestBase.this.mCurrentBand) {
                    RfDesenseTxTestBase.this.mCurrentBand = i;
                    RfDesenseTxTestBase.this.updateLimits();
                    RfDesenseTxTestBase.this.setDefaultValues();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    protected void setDefaultValues() {
        this.mChannel.setToDefault();
        this.mPower.setToDefault();
        this.mAfc.setToDefault();
        this.mTsc.setToDefault();
        this.mAntMode.setChecked("0".equals("1"));
        this.mAntStatus.setText("0");
    }

    protected void updateLimits() {
    }
}
