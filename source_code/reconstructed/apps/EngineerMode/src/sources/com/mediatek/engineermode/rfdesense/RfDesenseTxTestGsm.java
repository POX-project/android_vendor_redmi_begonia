package com.mediatek.engineermode.rfdesense;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.SpinnerAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTxTestGsm extends RfDesenseTxTestBase {
    public static final String KEY_AFC = "AFC_2G";
    public static final String KEY_ANT_MODE = "gsm_ant_mode";
    public static final String KEY_ANT_STATUS = "gsm_ant_status";
    public static final String KEY_BAND = "Band_2G";
    public static final String KEY_CHANNEL = "Channel_2G";
    public static final String KEY_MODULATION = "Bodulation_2G";
    public static final String KEY_PATTERN = "Pattern_2G";
    public static final String KEY_POWER = "Power_2G";
    public static final String KEY_TSC = "TSC_2G";
    public static final String TAG = "RfDesense/TxTestGsm";

    private void restoreState() {
        SharedPreferences sharedPreferences = getSharedPreferences(RfDesenseTxTest.PREF_FILE, 0);
        this.mCurrentBand = sharedPreferences.getInt(KEY_BAND, 0);
        this.mBand.setSelection(this.mCurrentBand);
        updateLimits();
        this.mChannel.setText(sharedPreferences.getString(KEY_CHANNEL, this.mChannel.defaultValue));
        this.mPower.setText(sharedPreferences.getString(KEY_POWER, this.mPower.defaultValue));
        this.mAfc.setText(sharedPreferences.getString(KEY_AFC, this.mAfc.defaultValue));
        this.mTsc.setText(sharedPreferences.getString(KEY_TSC, this.mTsc.defaultValue));
        this.mPattern.setSelection(sharedPreferences.getInt(KEY_PATTERN, 0));
        this.mAntMode.setChecked(sharedPreferences.getString(KEY_ANT_MODE, "0").equals("1"));
        this.mAntStatus.setText(sharedPreferences.getString(KEY_ANT_STATUS, "0"));
    }

    @Override // com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_gsm_band, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBand.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource2 = ArrayAdapter.createFromResource(this, R.array.rf_desense_tx_test_gsm_pattern, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mPattern.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource2);
        restoreState();
        Elog.i(TAG, "restoreState GSM");
        this.mDbm.setVisibility(8);
    }

    @Override // com.mediatek.engineermode.rfdesense.RfDesenseTxTestBase
    protected void updateLimits() {
        String[] strArrSplit = getResources().getStringArray(R.array.rf_desense_tx_test_gsm_gmsk_limits)[this.mBand.getSelectedItemPosition()].split(",");
        this.mChannel.set(strArrSplit[0], strArrSplit[1], strArrSplit[2], strArrSplit[3], strArrSplit[4]);
        this.mPower.set(strArrSplit[5], strArrSplit[6], strArrSplit[7]);
        this.mPower.step = 1;
        this.mAfc.set("4100", "0", "8191");
        this.mTsc.set("0", "0", "7");
    }
}
