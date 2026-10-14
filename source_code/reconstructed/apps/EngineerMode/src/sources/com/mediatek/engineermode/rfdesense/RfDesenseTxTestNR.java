package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestNR extends Activity implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    public static final String DEFAULT_ANT_MODE = "0";
    public static final String DEFAULT_ANT_STATUS = "0";
    public static final int DEFAULT_BAND_NR = 0;
    public static final int DEFAULT_BAND_WIDTH = 7;
    public static final int DEFAULT_MCS = 0;
    public static final String DEFAULT_NR_FREQ = "1950000";
    public static final String DEFAULT_POWER = "23";
    public static final int DEFAULT_SCS_CONFIG = 0;
    public static final String DEFAULT_TDD_SLOT_CONFIG = "1";
    public static final int DEFAULT_TX_MODE = 0;
    public static final String DEFAULT_VRB_LENGTH = "216";
    public static final String DEFAULT_VRB_START = "0";
    public static final String KEY_NR_ANT_MODE = "ant_mode_nr";
    public static final String KEY_NR_ANT_STATUS_RX = "ant_status_nr_rx";
    public static final String KEY_NR_ANT_STATUS_TX = "ant_status_nr_tx";
    public static final String KEY_NR_BAND = "band_nr";
    public static final String KEY_NR_BAND_WIDTH = "bandwidth_nr";
    public static final String KEY_NR_FREQ = "freq_nr";
    public static final String KEY_NR_MCS = "mcs_nr";
    public static final String KEY_NR_POWER = "power_nr";
    public static final String KEY_NR_SCS = "scs_nr";
    public static final String KEY_NR_VRB_LENGTH = "vrb_length_nr";
    public static final String KEY_NR_VRB_START = "vrb_start_nr";
    public static final String KEY_TDD_SLOT_CONFIG = "tdd_slot_config";
    public static final String KEY_TX_MODE = "tx_mode";
    private static final int POWER_MAX_PUSCH = 23;
    private static final int POWER_MAX_TONE = 26;
    private static final int POWER_MIN = -50;
    public static final String TAG = "RfDesense/TxTestNr";
    private static final int TDD_SLOT_CONFIG_MAX = 44;
    private static final int TDD_SLOT_CONFIG_MIN = 1;
    private static final int VRB_LENGTH_MAX = 273;
    private static final int VRB_LENGTH_MIN = 0;
    private static final int VRB_START_MAX = 272;
    private static final int VRB_START_MIN = 0;
    public static final int[] mBandMapping = {1, 3, 7, 8, 20, 28, 38, 41, 77, 78, 79};
    public static final int[] mBandWidthMapping = {5000, 10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 55000, 60000, 65000, 70000, 75000, 80000, 85000, 90000, 95000, 100000};
    private static int mPowerMax = 23;
    private CheckBox mAntMode;
    private EditText mAntStatusRx;
    private EditText mAntStatusTx;
    private Spinner mBand;
    private Spinner mBandWidth;
    private Button mButtonSet;
    private EditText mFreq;
    private String[] mFreqRangeArray;
    private Spinner mMcs;
    private EditText mPower;
    private TextView mPowerView;
    private RadioButton mPuschTX;
    private Spinner mScsConfig;
    private EditText mTddSlotConfig;
    private RadioButton mToneTX;
    private EditText mVrbLength;
    private EditText mVrbStart;
    private int mCurrentBandIndex = 1;
    private String atcmd = "";

    private boolean checkValues() {
        try {
            int i = Integer.parseInt(this.mVrbStart.getText().toString());
            if (i >= 0 && i <= VRB_START_MAX) {
                int i2 = Integer.parseInt(this.mVrbLength.getText().toString());
                if (i2 >= 0 && i2 <= VRB_LENGTH_MAX) {
                    int i3 = Integer.parseInt(this.mPower.getText().toString());
                    if (i3 >= POWER_MIN && i3 <= mPowerMax) {
                        int i4 = Integer.parseInt(this.mTddSlotConfig.getText().toString());
                        if (i4 >= 1 && i4 <= 44) {
                            return true;
                        }
                        EmUtils.showToast("Invalid tdd Slot Config.");
                        return false;
                    }
                    EmUtils.showToast("Invalid Power Level.");
                    return false;
                }
                EmUtils.showToast("Invalid VRB Length.");
                return false;
            }
            EmUtils.showToast("Invalid VRB Start.");
            return false;
        } catch (NumberFormatException e) {
            EmUtils.showToast("Invalid Value.");
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Long getDefaultFreq() {
        String[] strArrSplit = this.mFreqRangeArray[this.mBand.getSelectedItemPosition()].split(",");
        try {
            return Long.valueOf((Long.valueOf(Long.parseLong(strArrSplit[1])).longValue() + Long.valueOf(Long.parseLong(strArrSplit[2])).longValue()) / 2);
        } catch (NumberFormatException e) {
            throw new RuntimeException("Check the array resource");
        }
    }

    private void onTxModeChange() {
        if (this.mToneTX.isChecked()) {
            this.mBandWidth.setEnabled(false);
            this.mScsConfig.setEnabled(false);
            this.mMcs.setEnabled(false);
            this.mVrbStart.setEnabled(false);
            this.mVrbLength.setEnabled(false);
            this.mTddSlotConfig.setEnabled(false);
            mPowerMax = 26;
            this.mPowerView.setText(R.string.rf_desense_nr_power_tone);
            return;
        }
        this.mBandWidth.setEnabled(true);
        this.mScsConfig.setEnabled(true);
        this.mMcs.setEnabled(true);
        this.mVrbStart.setEnabled(true);
        this.mVrbLength.setEnabled(true);
        this.mTddSlotConfig.setEnabled(true);
        mPowerMax = 23;
        this.mPowerView.setText(R.string.rf_desense_nr_power_pusch);
    }

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        int i = sharedPreferences.getInt(KEY_TX_MODE, 0);
        this.mToneTX.setChecked(i == 0);
        this.mPuschTX.setChecked(i == 1);
        this.mCurrentBandIndex = sharedPreferences.getInt(KEY_NR_BAND, 0);
        this.mBand.setSelection(sharedPreferences.getInt(KEY_NR_BAND, 0));
        this.mBandWidth.setSelection(sharedPreferences.getInt(KEY_NR_BAND_WIDTH, 7));
        this.mFreq.setText(sharedPreferences.getString(KEY_NR_FREQ, DEFAULT_NR_FREQ));
        this.mVrbStart.setText(sharedPreferences.getString(KEY_NR_VRB_START, "0"));
        this.mVrbLength.setText(sharedPreferences.getString(KEY_NR_VRB_LENGTH, DEFAULT_VRB_LENGTH));
        this.mMcs.setSelection(sharedPreferences.getInt(KEY_NR_MCS, 0));
        this.mScsConfig.setSelection(sharedPreferences.getInt(KEY_NR_SCS, 0));
        this.mPower.setText(sharedPreferences.getString(KEY_NR_POWER, "23"));
        this.mTddSlotConfig.setText(sharedPreferences.getString(KEY_TDD_SLOT_CONFIG, "1"));
        this.mAntMode.setChecked(sharedPreferences.getString(KEY_NR_ANT_MODE, "0").equals("1"));
        this.mAntStatusTx.setText(sharedPreferences.getString(KEY_NR_ANT_STATUS_TX, "0"));
        this.mAntStatusRx.setText(sharedPreferences.getString(KEY_NR_ANT_STATUS_RX, "0"));
    }

    private void saveState(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        editorEdit.putInt(KEY_TX_MODE, !this.mToneTX.isChecked() ? 1 : 0);
        editorEdit.putString(RfDesenseTxTest.KEY_NR_ATCMD, str);
        editorEdit.putInt(KEY_NR_BAND, this.mBand.getSelectedItemPosition());
        editorEdit.putInt(KEY_NR_BAND_WIDTH, this.mBandWidth.getSelectedItemPosition());
        editorEdit.putString(KEY_NR_FREQ, this.mFreq.getText().toString());
        editorEdit.putString(KEY_NR_VRB_START, this.mVrbStart.getText().toString());
        editorEdit.putString(KEY_NR_VRB_LENGTH, this.mVrbLength.getText().toString());
        editorEdit.putInt(KEY_NR_MCS, this.mMcs.getSelectedItemPosition());
        editorEdit.putInt(KEY_NR_SCS, this.mScsConfig.getSelectedItemPosition());
        editorEdit.putString(KEY_NR_POWER, this.mPower.getText().toString());
        editorEdit.putString(KEY_TDD_SLOT_CONFIG, this.mTddSlotConfig.getText().toString());
        editorEdit.putString(KEY_NR_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
        editorEdit.putString(KEY_NR_ANT_STATUS_TX, this.mAntStatusTx.getText().toString());
        editorEdit.putString(KEY_NR_ANT_STATUS_RX, this.mAntStatusRx.getText().toString());
        String str2 = "AT+EGMC=1,\"NrForceTxRx\",1," + this.mAntStatusTx.getText().toString() + "," + this.mAntStatusRx.getText().toString() + ",0";
        if (this.mAntMode.isChecked()) {
            editorEdit.putString(RfDesenseTxTest.KEY_NR_ATCMD_ANT_SWITCH, str2);
        } else {
            editorEdit.putString(RfDesenseTxTest.KEY_NR_ATCMD_ANT_SWITCH, "AT+EGMC=1,\"NrForceTxRx\",0,,,0");
        }
        editorEdit.apply();
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        int id = compoundButton.getId();
        if (id == R.id.pusch_radio_button || id == R.id.tone_radio_button) {
            onTxModeChange();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == R.id.button_set && checkValues()) {
            boolean z = !this.mToneTX.isChecked();
            int i = mBandMapping[this.mBand.getSelectedItemPosition()];
            int i2 = mBandWidthMapping[this.mBandWidth.getSelectedItemPosition()];
            String string = this.mFreq.getText().toString();
            int selectedItemPosition = this.mScsConfig.getSelectedItemPosition();
            String string2 = this.mVrbStart.getText().toString();
            String string3 = this.mVrbLength.getText().toString();
            int selectedItemPosition2 = this.mMcs.getSelectedItemPosition();
            String string4 = this.mPower.getText().toString();
            String string5 = this.mTddSlotConfig.getText().toString();
            if (z) {
                this.atcmd = "AT+EGMC=1,\"NrForcedTx\",1,";
                this.atcmd += i + "," + i2 + "," + string + "," + string2 + "," + string3 + "," + selectedItemPosition2 + "," + selectedItemPosition + "," + string4 + "," + string5;
            } else {
                this.atcmd = "AT+EGMC=1,\"NrForcedTx\",2,";
                this.atcmd += i + "," + string + "," + string4;
            }
            saveState(this.atcmd);
            EmUtils.showToast("Set param suecceed");
            Elog.d(TAG, "command = " + this.atcmd);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_tx_test_nr);
        this.mToneTX = (RadioButton) findViewById(R.id.tone_radio_button);
        this.mPuschTX = (RadioButton) findViewById(R.id.pusch_radio_button);
        this.mBand = (Spinner) findViewById(R.id.band_spinner);
        this.mBandWidth = (Spinner) findViewById(R.id.bandwidth_spinner);
        this.mFreq = (EditText) findViewById(R.id.freq_editor);
        this.mScsConfig = (Spinner) findViewById(R.id.scs_config_spinner);
        this.mTddSlotConfig = (EditText) findViewById(R.id.tddSlotConfig_editor);
        this.mVrbStart = (EditText) findViewById(R.id.vrb_start_editor);
        this.mVrbLength = (EditText) findViewById(R.id.vrb_length_editor);
        this.mMcs = (Spinner) findViewById(R.id.mcs_spinner);
        this.mPower = (EditText) findViewById(R.id.power_editor);
        this.mPowerView = (TextView) findViewById(R.id.power_view);
        this.mAntMode = (CheckBox) findViewById(R.id.rf_ant_mode);
        this.mAntStatusTx = (EditText) findViewById(R.id.rf_ant_status_tx);
        this.mAntStatusRx = (EditText) findViewById(R.id.rf_ant_status_rx);
        this.mButtonSet = (Button) findViewById(R.id.button_set);
        this.mToneTX.setOnCheckedChangeListener(this);
        this.mPuschTX.setOnCheckedChangeListener(this);
        this.mButtonSet.setOnClickListener(this);
        new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_nr_freq_range, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBand.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        this.mBandWidth.setAdapter((SpinnerAdapter) ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_nr_bandwidth, android.R.layout.simple_spinner_item));
        this.mMcs.setAdapter((SpinnerAdapter) ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_nr_mcs, android.R.layout.simple_spinner_item));
        this.mScsConfig.setAdapter((SpinnerAdapter) ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_nr_scs, android.R.layout.simple_spinner_item));
        this.mFreqRangeArray = getResources().getStringArray(R.array.rf_desense_tx_test_nr_freq_range);
        this.mBand.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestNR.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i != RfDesenseTxTestNR.this.mCurrentBandIndex) {
                    RfDesenseTxTestNR.this.mCurrentBandIndex = i;
                    RfDesenseTxTestNR.this.mFreq.setText(String.valueOf(RfDesenseTxTestNR.this.getDefaultFreq()));
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        restoreState();
        onTxModeChange();
        this.mFreq.setText(String.valueOf(getDefaultFreq()));
    }
}
