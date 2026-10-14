package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestCdma extends Activity {
    private static final int CHANNEL_DEFAULT = 0;
    private static final int CHANNEL_MAX = 2;
    private static final int CHANNEL_MAX2 = 4;
    private static final int CHANNEL_MIN = 1;
    private static final int CHANNEL_MIN2 = 3;
    public static final int DEFAULT_BAND_VALUE = 0;
    public static final int DEFAULT_CHANNEL_VALUE = 384;
    public static final int DEFAULT_POWER_VALUE = 23;
    public static final String KEY_1X_BAND = "Band_1x_CDMA";
    public static final String KEY_1X_CHANNEL = "Channel_1x_CDMA";
    public static final String KEY_1X_POWER = "Power_1x_CDMA";
    public static final String KEY_CDMA1X_ANT_MODE = "cdma1x_ant_mode";
    public static final String KEY_CDMA1x_ANT_STATUS = "cdma1x_ant_status";
    public static final String KEY_EVDO_ANT_MODE = "evdo_ant_mode";
    public static final String KEY_EVDO_ANT_STATUS = "evdo_ant_status";
    public static final String KEY_EVDO_BAND = "Band_evdo_CDMA";
    public static final String KEY_EVDO_CHANNEL = "Channel_evdo_CDMA";
    public static final String KEY_EVDO_POWER = "Power_evdo_CDMA";
    public static final String KEY_MODULATION = "Modulation_CDMA";
    private static final int POWER_DEFAULT = 5;
    private static final int POWER_MAX = 7;
    private static final int POWER_MIN = 6;
    public static final String TAG = "RfDesense/TxTestCdma";
    private static int mModemType;
    protected CheckBox mAntMode;
    protected EditText mAntStatus;
    private Spinner mBand;
    private Button mButtonSet;
    private EditText mChannel;
    private RadioGroup mModulation;
    private EditText mPower;
    protected Toast mToast = null;

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        if (mModemType == 1) {
            this.mModulation.check(R.id.modulation_1x);
            this.mBand.setSelection(sharedPreferences.getInt(KEY_1X_BAND, 0));
            this.mChannel.setText(sharedPreferences.getString(KEY_1X_CHANNEL, "384"));
            this.mPower.setText(sharedPreferences.getString(KEY_1X_POWER, "23"));
            this.mAntMode.setChecked(sharedPreferences.getString(KEY_CDMA1X_ANT_MODE, "0").equals("1"));
            this.mAntStatus.setText(sharedPreferences.getString(KEY_CDMA1x_ANT_STATUS, "0"));
            return;
        }
        this.mModulation.check(R.id.modulation_evdo);
        this.mBand.setSelection(sharedPreferences.getInt(KEY_EVDO_BAND, 0));
        this.mChannel.setText(sharedPreferences.getString(KEY_EVDO_CHANNEL, "384"));
        this.mPower.setText(sharedPreferences.getString(KEY_EVDO_POWER, "23"));
        this.mAntMode.setChecked(sharedPreferences.getString(KEY_EVDO_ANT_MODE, "0").equals("1"));
        this.mAntStatus.setText(sharedPreferences.getString(KEY_EVDO_ANT_STATUS, "0"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void saveState(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        if (mModemType == 1) {
            editorEdit.putInt(KEY_1X_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putString(KEY_1X_CHANNEL, this.mChannel.getText().toString());
            editorEdit.putString(KEY_1X_POWER, this.mPower.getText().toString());
            editorEdit.putString(KEY_CDMA1X_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_CDMA1x_ANT_STATUS, this.mAntStatus.getText().toString());
            editorEdit.putString(RfDesenseTxTest.KEY_CDMA_1X_ATCMD, str);
            String str2 = "AT+ETXANT=1,4," + ((Object) this.mAntStatus.getText());
            if (this.mAntMode.isChecked()) {
                editorEdit.putString(RfDesenseTxTest.KEY_CDMA1X_ATCMD_ANT_SWITCH, str2);
            } else {
                editorEdit.putString(RfDesenseTxTest.KEY_CDMA1X_ATCMD_ANT_SWITCH, "AT+ETXANT=0,4,0");
            }
        } else {
            editorEdit.putInt(KEY_EVDO_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putString(KEY_EVDO_CHANNEL, this.mChannel.getText().toString());
            editorEdit.putString(KEY_EVDO_POWER, this.mPower.getText().toString());
            editorEdit.putString(RfDesenseTxTest.KEY_CDMA_EVDO_ATCMD, str);
            editorEdit.putString(KEY_EVDO_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_EVDO_ANT_STATUS, this.mAntStatus.getText().toString());
            String str3 = "AT+ETXANT=1,4," + ((Object) this.mAntStatus.getText()) + ",,0";
            if (this.mAntMode.isChecked()) {
                editorEdit.putString(RfDesenseTxTest.KEY_EVDO_ATCMD_ANT_SWITCH, str3);
            } else {
                editorEdit.putString(RfDesenseTxTest.KEY_EVDO_ATCMD_ANT_SWITCH, "AT+ETXANT=0,4,0,,0");
            }
        }
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
        return true;
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_tx_test_cdma);
        mModemType = getIntent().getIntExtra("mModemType", 2);
        this.mBand = (Spinner) findViewById(R.id.band_spinner);
        this.mModulation = (RadioGroup) findViewById(R.id.modulation_radio_group);
        this.mChannel = (EditText) findViewById(R.id.channel_editor);
        this.mPower = (EditText) findViewById(R.id.power_editor);
        this.mAntMode = (CheckBox) findViewById(R.id.rf_ant_mode);
        this.mAntStatus = (EditText) findViewById(R.id.rf_ant_status);
        this.mButtonSet = (Button) findViewById(R.id.button_set);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_cdma_band, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBand.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        final String[] stringArray = getResources().getStringArray(R.array.rf_desense_tx_test_cdma_band_values);
        this.mButtonSet.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestCdma.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                String string;
                if (view.getId() == R.id.button_set && RfDesenseTxTestCdma.this.checkValues()) {
                    String str = stringArray[RfDesenseTxTestCdma.this.mBand.getSelectedItemPosition()];
                    long checkedRadioButtonId = RfDesenseTxTestCdma.this.mModulation.getCheckedRadioButtonId();
                    String string2 = RfDesenseTxTestCdma.this.mChannel.getText().toString();
                    String string3 = RfDesenseTxTestCdma.this.mPower.getText().toString();
                    int iIntValue = 0;
                    if (string3 != null && !"".equals(string3)) {
                        iIntValue = Integer.valueOf(string3).intValue() + 60;
                    }
                    if (RfDesenseTxTestCdma.mModemType == 1) {
                        StringBuilder sb = new StringBuilder();
                        sb.append("AT+ECRFTX=1,");
                        sb.append(string2);
                        sb.append(",");
                        sb.append(str);
                        sb.append(",");
                        sb.append(iIntValue);
                        sb.append(",");
                        sb.append(checkedRadioButtonId == 2131101093 ? 0 : 1);
                        string = sb.toString();
                    } else {
                        string = "AT+ERFTX=13,4," + string2 + "," + str + "," + iIntValue;
                    }
                    RfDesenseTxTestCdma.this.saveState(string);
                    RfDesenseTxTestCdma.this.showToast("Set param suecceed!");
                }
            }
        });
        restoreState();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }
}
