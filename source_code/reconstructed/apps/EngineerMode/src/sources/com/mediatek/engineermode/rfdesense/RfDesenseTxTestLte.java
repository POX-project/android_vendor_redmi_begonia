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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestLte extends Activity implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    public static final String DEFAULT_ANT_MODE = "0";
    public static final String DEFAULT_ANT_STATUS = "0";
    public static final int DEFAULT_BAND_FDD = 2;
    public static final int DEFAULT_BAND_TDD = 5;
    public static final int DEFAULT_BAND_WIDTH = 3;
    public static final String DEFAULT_FDD_FREQ = "17475";
    public static final int DEFAULT_MCS = 0;
    public static final int DEFAULT_MODULATION_MODE = 1;
    public static final String DEFAULT_POWER = "23";
    public static final int DEFAULT_TDD_CONFIG = 0;
    public static final String DEFAULT_TDD_FREQ = "25950";
    public static final int DEFAULT_TDD_SPECIAL = 0;
    public static final String DEFAULT_VRB_LENGTH = "1";
    public static final String DEFAULT_VRB_START = "0";
    private static final int DUPLEX_FDD = 1;
    private static final int DUPLEX_TDD = 0;
    private static final int FDD_BAND_MAX = 31;
    private static final int FDD_BAND_MIN = 1;
    public static final String KEY_FDD_ANT_MODE = "ant_mode_fdd";
    public static final String KEY_FDD_ANT_STATUS = "ant_status_fdd";
    public static final String KEY_FDD_BAND = "band_fdd";
    public static final String KEY_FDD_BAND_WIDTH = "bandwidth_fdd";
    public static final String KEY_FDD_FREQ = "freq_fdd";
    public static final String KEY_FDD_MCS = "mcs_fdd";
    public static final String KEY_FDD_POWER = "power_fdd";
    public static final String KEY_FDD_VRB_LENGTH = "vrb_length_fdd";
    public static final String KEY_FDD_VRB_START = "vrb_start_fdd";
    public static final String KEY_MODULATION_MODE = "modulation_mode";
    public static final String KEY_TDD_ANT_MODE = "ant_mode_tdd";
    public static final String KEY_TDD_ANT_STATUS = "ant_status_tdd";
    public static final String KEY_TDD_BAND = "band_tdd";
    public static final String KEY_TDD_BAND_WIDTH = "bandwidth_tdd";
    public static final String KEY_TDD_CONFIG = "tdd_config";
    public static final String KEY_TDD_FREQ = "freq_tdd";
    public static final String KEY_TDD_MCS = "mcs_tdd";
    public static final String KEY_TDD_POWER = "power_tdd";
    public static final String KEY_TDD_SPECIAL = "tdd_special";
    public static final String KEY_TDD_VRB_LENGTH = "vrb_length_tdd";
    public static final String KEY_TDD_VRB_START = "vrb_start_tdd";
    private static final int POWER_MAX = 27;
    private static final int POWER_MIN = -50;
    private static final String TAG = "RfDesense/TxTestLte";
    private static final int TDD_BAND_MAX = 44;
    private static final int TDD_BAND_MIN = 33;
    private static final int TDD_CONFIG_MAX = 6;
    private static final int TDD_SPECIAL_MAX = 9;
    private static final int VRB_LENGTH_MAX = 100;
    private static final int VRB_LENGTH_MIN = 1;
    private static final int VRB_START_MAX = 99;
    private static final int VRB_START_MIN = 0;
    private static int mModemType;
    protected CheckBox mAntMode;
    protected EditText mAntStatus;
    private Spinner mBand;
    private Spinner mBandWidth;
    private Button mButtonSet;
    private RadioButton mFdd;
    private EditText mFreq;
    private TextView mFreqRange;
    String[] mFreqRangeArray;
    private Spinner mMcs;
    private TextView mModulationMode;
    private RadioButton mModulationSignal;
    private EditText mPower;
    private RadioButton mSingleTone;
    private RadioButton mTdd;
    private Spinner mTddConfig;
    private Spinner mTddSpecial;
    private EditText mVrbLength;
    private EditText mVrbStart;
    private Toast mToast = null;
    private int mCurrentBand = 0;

    private boolean checkValues() {
        try {
            int i = Integer.parseInt(this.mVrbStart.getText().toString());
            if (i >= 0 && i <= VRB_START_MAX) {
                int i2 = Integer.parseInt(this.mVrbLength.getText().toString());
                if (i2 >= 1 && i2 <= 100) {
                    int i3 = Integer.parseInt(this.mPower.getText().toString());
                    if (i3 >= POWER_MIN && i3 <= 27) {
                        return true;
                    }
                    showToast("Invalid Power Level.");
                    return false;
                }
                showToast("Invalid VRB Length.");
                return false;
            }
            showToast("Invalid VRB Start.");
            return false;
        } catch (NumberFormatException e) {
            showToast("Invalid Value.");
            return false;
        }
    }

    private int getDefaultFreq() {
        int selectedItemPosition = this.mBand.getSelectedItemPosition() + (this.mTdd.isChecked() ? 33 : 1);
        if (this.mBand.getSelectedItemPosition() == 32) {
            selectedItemPosition = 29;
        }
        String[] strArrSplit = this.mFreqRangeArray[selectedItemPosition - 1].split(",");
        try {
            return (Integer.parseInt(strArrSplit[0]) + Integer.parseInt(strArrSplit[1])) / 2;
        } catch (NumberFormatException e) {
            throw new RuntimeException("Check the array resource");
        }
    }

    private void onDuplexChange() {
        boolean zIsChecked = this.mTdd.isChecked();
        if (zIsChecked) {
        }
        if (zIsChecked) {
        }
        int i = zIsChecked ? 6 : 0;
        int i2 = zIsChecked ? 9 : 0;
        this.mTddConfig.setEnabled(zIsChecked);
        this.mTddSpecial.setEnabled(zIsChecked);
        Elog.i(TAG, "tdd = " + zIsChecked);
        ArrayAdapter arrayAdapter = (ArrayAdapter) this.mBand.getAdapter();
        arrayAdapter.clear();
        arrayAdapter.addAll(getResources().getStringArray(zIsChecked ? R.array.rf_desense_tx_test_lte_tdd_band_values : R.array.rf_desense_tx_test_lte_fdd_band_values));
        arrayAdapter.notifyDataSetChanged();
        this.mBand.setSelection(zIsChecked ? 5 : 2);
        ArrayAdapter arrayAdapter2 = (ArrayAdapter) this.mTddConfig.getAdapter();
        arrayAdapter2.clear();
        for (int i3 = 0; i3 <= i; i3++) {
            arrayAdapter2.add(String.valueOf(i3));
        }
        arrayAdapter2.notifyDataSetChanged();
        ArrayAdapter arrayAdapter3 = (ArrayAdapter) this.mTddSpecial.getAdapter();
        arrayAdapter3.clear();
        for (int i4 = 0; i4 <= i2; i4++) {
            arrayAdapter3.add(String.valueOf(i4));
        }
        arrayAdapter3.notifyDataSetChanged();
        setDefaultValue();
    }

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        int i = sharedPreferences.getInt(KEY_MODULATION_MODE, 1);
        this.mSingleTone.setChecked(i == 0);
        this.mModulationSignal.setChecked(i == 1);
        if (mModemType != 2) {
            this.mCurrentBand = sharedPreferences.getInt(KEY_FDD_BAND, 2);
            this.mBand.setSelection(sharedPreferences.getInt(KEY_FDD_BAND, 2));
            this.mBandWidth.setSelection(sharedPreferences.getInt(KEY_FDD_BAND_WIDTH, 3));
            this.mFreq.setText(sharedPreferences.getString(KEY_FDD_FREQ, DEFAULT_FDD_FREQ));
            this.mVrbStart.setText(sharedPreferences.getString(KEY_FDD_VRB_START, "0"));
            this.mVrbLength.setText(sharedPreferences.getString(KEY_FDD_VRB_LENGTH, "1"));
            this.mMcs.setSelection(sharedPreferences.getInt(KEY_FDD_MCS, 0));
            this.mPower.setText(sharedPreferences.getString(KEY_FDD_POWER, "23"));
            this.mAntMode.setChecked(sharedPreferences.getString(KEY_FDD_ANT_MODE, "0").equals("1"));
            this.mAntStatus.setText(sharedPreferences.getString(KEY_FDD_ANT_STATUS, "0"));
            return;
        }
        this.mCurrentBand = sharedPreferences.getInt(KEY_TDD_BAND, 5);
        this.mBand.setSelection(sharedPreferences.getInt(KEY_TDD_BAND, 5));
        this.mBandWidth.setSelection(sharedPreferences.getInt(KEY_TDD_BAND_WIDTH, 3));
        this.mFreq.setText(sharedPreferences.getString(KEY_TDD_FREQ, DEFAULT_TDD_FREQ));
        this.mTddConfig.setSelection(sharedPreferences.getInt(KEY_TDD_CONFIG, 0));
        this.mTddSpecial.setSelection(sharedPreferences.getInt(KEY_TDD_SPECIAL, 0));
        this.mVrbStart.setText(sharedPreferences.getString(KEY_TDD_VRB_START, "0"));
        this.mVrbLength.setText(sharedPreferences.getString(KEY_TDD_VRB_LENGTH, "1"));
        this.mMcs.setSelection(sharedPreferences.getInt(KEY_TDD_MCS, 0));
        this.mPower.setText(sharedPreferences.getString(KEY_TDD_POWER, "23"));
        this.mAntMode.setChecked(sharedPreferences.getString(KEY_TDD_ANT_MODE, "0").equals("1"));
        this.mAntStatus.setText(sharedPreferences.getString(KEY_TDD_ANT_STATUS, "0"));
    }

    private void saveState(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        editorEdit.putInt(KEY_MODULATION_MODE, !this.mSingleTone.isChecked() ? 1 : 0);
        if (mModemType == 2) {
            editorEdit.putString(RfDesenseTxTest.KEY_LTE_TDD_ATCMD, str);
            editorEdit.putInt(KEY_TDD_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putInt(KEY_TDD_BAND_WIDTH, this.mBandWidth.getSelectedItemPosition());
            editorEdit.putString(KEY_TDD_FREQ, this.mFreq.getText().toString());
            editorEdit.putInt(KEY_TDD_CONFIG, this.mTddConfig.getSelectedItemPosition());
            editorEdit.putInt(KEY_TDD_SPECIAL, this.mTddSpecial.getSelectedItemPosition());
            editorEdit.putString(KEY_TDD_VRB_START, this.mVrbStart.getText().toString());
            editorEdit.putString(KEY_TDD_VRB_LENGTH, this.mVrbLength.getText().toString());
            editorEdit.putInt(KEY_TDD_MCS, this.mMcs.getSelectedItemPosition());
            editorEdit.putString(KEY_TDD_POWER, this.mPower.getText().toString());
            editorEdit.putString(KEY_TDD_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_TDD_ANT_STATUS, this.mAntStatus.getText().toString());
        } else {
            editorEdit.putString(RfDesenseTxTest.KEY_LTE_FDD_ATCMD, str);
            editorEdit.putInt(KEY_FDD_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putInt(KEY_FDD_BAND_WIDTH, this.mBandWidth.getSelectedItemPosition());
            editorEdit.putString(KEY_FDD_FREQ, this.mFreq.getText().toString());
            editorEdit.putString(KEY_FDD_VRB_START, this.mVrbStart.getText().toString());
            editorEdit.putString(KEY_FDD_VRB_LENGTH, this.mVrbLength.getText().toString());
            editorEdit.putInt(KEY_FDD_MCS, this.mMcs.getSelectedItemPosition());
            editorEdit.putString(KEY_FDD_POWER, this.mPower.getText().toString());
            editorEdit.putString(KEY_FDD_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_FDD_ANT_STATUS, this.mAntStatus.getText().toString());
        }
        editorEdit.apply();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setDefaultValue() {
        this.mBandWidth.setSelection(3);
        this.mFreq.setText(String.valueOf(getDefaultFreq()));
        this.mTddConfig.setSelection(0);
        this.mTddSpecial.setSelection(0);
        this.mVrbStart.setText("0");
        this.mVrbLength.setText("1");
        this.mMcs.setSelection(0);
        this.mPower.setText("23");
        this.mAntMode.setChecked("0".equals("1"));
        this.mAntStatus.setText("0");
    }

    private void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    int calcExtentedIndex(int i) {
        if (i == 31) {
            return 34;
        }
        return i == 32 ? 38 : 0;
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        int id = compoundButton.getId();
        if (id == R.id.fdd_radio_button || id == R.id.tdd_radio_button) {
            onDuplexChange();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == R.id.button_set && checkValues()) {
            String str = (FeatureSupport.is93Modem() && this.mSingleTone.isChecked()) ? "AT+ERFTX=6,0,2," : "AT+ERFTX=6,0,1,";
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(this.mBand.getSelectedItemPosition() + (this.mTdd.isChecked() ? 33 : 1) + calcExtentedIndex(this.mBand.getSelectedItemPosition()));
            sb.append(",");
            sb.append(this.mBandWidth.getSelectedItemPosition());
            sb.append(",");
            sb.append(this.mFreq.getText().toString());
            sb.append(",");
            sb.append(!this.mTdd.isChecked() ? 1 : 0);
            sb.append(",");
            sb.append(this.mTddConfig.getSelectedItemPosition());
            sb.append(",");
            sb.append(this.mTddSpecial.getSelectedItemPosition());
            sb.append(",");
            sb.append(this.mVrbStart.getText().toString());
            sb.append(",");
            sb.append(this.mVrbLength.getText().toString());
            sb.append(",");
            sb.append(this.mMcs.getSelectedItemPosition());
            sb.append(",");
            sb.append(this.mPower.getText().toString());
            String string = sb.toString();
            if (this.mAntMode.isChecked() && FeatureSupport.is93Modem()) {
                string = string + ",1," + this.mAntStatus.getText().toString();
            }
            saveState(string);
            showToast("Set param suecceed, " + string);
            Elog.d(TAG, "command = " + string);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_tx_test_lte);
        mModemType = getIntent().getIntExtra("mModemType", 1);
        this.mModulationMode = (TextView) findViewById(R.id.rf_desense_modulation_mode);
        this.mSingleTone = (RadioButton) findViewById(R.id.single_radio_button);
        this.mModulationSignal = (RadioButton) findViewById(R.id.modulatio_radio_button);
        if (!FeatureSupport.is93Modem()) {
            this.mModulationMode.setVisibility(8);
            this.mSingleTone.setVisibility(8);
            this.mModulationSignal.setVisibility(8);
        }
        this.mFdd = (RadioButton) findViewById(R.id.fdd_radio_button);
        this.mTdd = (RadioButton) findViewById(R.id.tdd_radio_button);
        this.mFdd.setChecked(false);
        this.mTdd.setChecked(false);
        this.mBand = (Spinner) findViewById(R.id.band_spinner);
        this.mBandWidth = (Spinner) findViewById(R.id.bandwidth_spinner);
        this.mFreq = (EditText) findViewById(R.id.freq_editor);
        this.mTddConfig = (Spinner) findViewById(R.id.tdd_config_spinner);
        this.mTddSpecial = (Spinner) findViewById(R.id.tdd_special_spinner);
        this.mVrbStart = (EditText) findViewById(R.id.vrb_start_editor);
        this.mVrbLength = (EditText) findViewById(R.id.vrb_length_editor);
        this.mMcs = (Spinner) findViewById(R.id.mcs_spinner);
        this.mPower = (EditText) findViewById(R.id.power_editor);
        this.mFreqRange = (TextView) findViewById(R.id.freq);
        this.mAntMode = (CheckBox) findViewById(R.id.rf_ant_mode);
        this.mAntStatus = (EditText) findViewById(R.id.rf_ant_status);
        this.mButtonSet = (Button) findViewById(R.id.button_set);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBand.setAdapter((SpinnerAdapter) arrayAdapter);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_lte_bandwidth, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBandWidth.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource2 = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_lte_mcs, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mMcs.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource2);
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mTddConfig.setAdapter((SpinnerAdapter) arrayAdapter2);
        ArrayAdapter arrayAdapter3 = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mTddSpecial.setAdapter((SpinnerAdapter) arrayAdapter3);
        this.mFdd.setOnCheckedChangeListener(this);
        this.mTdd.setOnCheckedChangeListener(this);
        this.mButtonSet.setOnClickListener(this);
        this.mBand.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestLte.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                if (i != RfDesenseTxTestLte.this.mCurrentBand) {
                    RfDesenseTxTestLte.this.mCurrentBand = i;
                    RfDesenseTxTestLte.this.setDefaultValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mFreqRangeArray = getResources().getStringArray(R.array.rf_desense_tx_test_lte_freq_range);
        if (mModemType == 2) {
            this.mTdd.setChecked(true);
        } else {
            this.mFdd.setChecked(true);
        }
        restoreState();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
    }
}
