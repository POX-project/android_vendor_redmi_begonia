package com.mediatek.engineermode.rfdesense;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestTd extends RfDesenseTxTestBase {
    public static final String KEY_FDD_ANT_MODE = "Power_FDD_ant_mode";
    public static final String KEY_FDD_ANT_STATUS = "Power_FDD_ant_status";
    public static final String KEY_FDD_BAND = "Band_FDD_3G";
    public static final String KEY_FDD_CHANNEL = "Channel_FDD_3G";
    public static final String KEY_FDD_POWER = "Power_FDD_3G";
    public static final String KEY_TDD_ANT_MODE = "Power_TDD_ant_mode";
    public static final String KEY_TDD_ANT_STATUS = "Power_TDD_ant_status";
    public static final String KEY_TDD_BAND = "Band_TDD_3G";
    public static final String KEY_TDD_CHANNEL = "Channel_TDD_3G";
    public static final String KEY_TDD_POWER = "Power_TDD_3G";
    public static final String TAG = "RfDesense/TxTestTd";
    private static int mModemType;
    private String[] mBandValues;

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        if (mModemType == 2) {
            this.mCurrentBand = sharedPreferences.getInt(KEY_TDD_BAND, 0);
            this.mBand.setSelection(this.mCurrentBand);
            updateLimits();
            this.mChannel.setText(sharedPreferences.getString(KEY_TDD_CHANNEL, this.mChannel.defaultValue));
            this.mPower.setText(sharedPreferences.getString(KEY_TDD_POWER, this.mPower.defaultValue));
            this.mAntMode.setChecked(sharedPreferences.getString(KEY_TDD_ANT_MODE, "0").equals("1"));
            this.mAntStatus.setText(sharedPreferences.getString(KEY_TDD_ANT_STATUS, "0"));
            return;
        }
        this.mCurrentBand = sharedPreferences.getInt(KEY_FDD_BAND, 0);
        this.mBand.setSelection(this.mCurrentBand);
        updateLimits();
        this.mChannel.setText(sharedPreferences.getString(KEY_FDD_CHANNEL, this.mChannel.defaultValue));
        this.mPower.setText(sharedPreferences.getString(KEY_FDD_POWER, this.mPower.defaultValue));
        this.mAntMode.setChecked(sharedPreferences.getString(KEY_FDD_ANT_MODE, "0").equals("1"));
        this.mAntStatus.setText(sharedPreferences.getString(KEY_FDD_ANT_STATUS, "0"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void saveState(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0).edit();
        if (mModemType == 2) {
            editorEdit.putString(RfDesenseTxTest.KEY_TDSCDMA_ATCMD, str);
            editorEdit.putInt(KEY_TDD_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putString(KEY_TDD_CHANNEL, this.mChannel.getText());
            editorEdit.putString(KEY_TDD_POWER, this.mPower.getText());
            editorEdit.putString(KEY_TDD_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_TDD_ANT_STATUS, this.mAntStatus.getText().toString());
            String str2 = "AT+ETXANT=1,2," + ((Object) this.mAntStatus.getText()) + ",,0";
            if (this.mAntMode.isChecked()) {
                editorEdit.putString(RfDesenseTxTest.KEY_TDSCDMA_ATCMD_ANT_SWITCH, str2);
            } else {
                editorEdit.putString(RfDesenseTxTest.KEY_TDSCDMA_ATCMD_ANT_SWITCH, "AT+ETXANT=0,2,0,,0");
            }
        } else {
            editorEdit.putString(RfDesenseTxTest.KEY_WCDMA_ATCMD, str);
            editorEdit.putInt(KEY_FDD_BAND, this.mBand.getSelectedItemPosition());
            editorEdit.putString(KEY_FDD_CHANNEL, this.mChannel.getText());
            editorEdit.putString(KEY_FDD_POWER, this.mPower.getText());
            editorEdit.putString(KEY_FDD_ANT_MODE, this.mAntMode.isChecked() ? "1" : "0");
            editorEdit.putString(KEY_FDD_ANT_STATUS, this.mAntStatus.getText().toString());
            String str3 = "AT+ETXANT=1,2," + ((Object) this.mAntStatus.getText());
            if (this.mAntMode.isChecked()) {
                editorEdit.putString(RfDesenseTxTest.KEY_WCDMA_ATCMD_ANT_SWITCH, str3);
            } else {
                editorEdit.putString(RfDesenseTxTest.KEY_WCDMA_ATCMD_ANT_SWITCH, "AT+ETXANT=0,2,0");
            }
        }
        editorEdit.apply();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        if (this.mToast != null) {
            this.mToast.cancel();
        }
        this.mToast = Toast.makeText(this, str, 1);
        this.mToast.show();
    }

    @Override // com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        mModemType = getIntent().getIntExtra("mModemType", 1);
        findViewById(R.id.afc).setVisibility(8);
        findViewById(R.id.tsc).setVisibility(8);
        findViewById(R.id.pattern).setVisibility(8);
        this.mAfc.editor.setVisibility(8);
        this.mTsc.editor.setVisibility(8);
        this.mPattern.setVisibility(8);
        ((TextView) findViewById(R.id.channel)).setText(R.string.rf_desense_channel_3g);
        if (mModemType == 2) {
            this.mBandValues = getResources().getStringArray(R.array.rf_desense_tx_test_td_band_values);
        } else {
            this.mBandValues = getResources().getStringArray(R.array.rf_desense_tx_test_fd_band_values);
        }
        this.mButtonSet.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseTxTestTd.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (view.getId() == R.id.button_set && RfDesenseTxTestTd.this.checkValues()) {
                    RfDesenseTxTestTd.this.saveState("AT+ERFTX=0,0," + RfDesenseTxTestTd.this.mBandValues[RfDesenseTxTestTd.this.mBand.getSelectedItemPosition()] + "," + RfDesenseTxTestTd.this.mChannel.getText() + "," + RfDesenseTxTestTd.this.mPower.getText());
                    RfDesenseTxTestTd.this.showToast("Set param suecceed!");
                }
            }
        });
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = mModemType == 2 ? ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_td_band, android.R.layout.simple_spinner_item) : ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_fd_band, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBand.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        restoreState();
    }

    @Override // com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase
    protected void updateLimits() {
        int selectedItemPosition = this.mBand.getSelectedItemPosition();
        String[] strArrSplit = mModemType == 2 ? getResources().getStringArray(R.array.rf_desense_tx_test_td_limits)[selectedItemPosition].split(",") : getResources().getStringArray(R.array.rf_desense_tx_test_fd_limits)[selectedItemPosition].split(",");
        String str = "";
        try {
            str = ((Integer.valueOf(strArrSplit[1]).intValue() + Integer.valueOf(strArrSplit[2]).intValue()) / 2) + "";
        } catch (Exception e) {
            e.getMessage();
        }
        this.mChannel.set(str, strArrSplit[1], strArrSplit[2], strArrSplit[3], strArrSplit[4]);
        this.mPower.set(strArrSplit[5], strArrSplit[6], strArrSplit[7]);
    }
}
