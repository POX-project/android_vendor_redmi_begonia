package com.mediatek.engineermode.testsimswitch;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class TestSimSwitchActivity extends Activity {
    private static final String PROP_TESTSIM_CARDTYPE = "persist.vendor.radio.testsim.cardtype";
    private static final int REBOOT = 0;
    private static final String TAG = "testsimswitch";
    private RadioButton mRadioBtnCdma;
    private RadioButton mRadioBtnDefault;
    private RadioButton mRadioBtnGsm;
    private String mTestSimType = "";

    private void queryTestSimType() {
        this.mTestSimType = SystemProperties.get(PROP_TESTSIM_CARDTYPE, "0");
        Elog.d(TAG, "get persist.radio.testsim.cardtype is " + this.mTestSimType);
        if (this.mTestSimType.equals("0")) {
            this.mRadioBtnDefault.setChecked(true);
            return;
        }
        if (this.mTestSimType.equals("1")) {
            this.mRadioBtnCdma.setChecked(true);
        } else if (this.mTestSimType.equals("2")) {
            this.mRadioBtnGsm.setChecked(true);
        } else {
            this.mRadioBtnDefault.setChecked(true);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.testsimswitch);
        this.mRadioBtnDefault = (RadioButton) findViewById(R.id.simtype_default_radio);
        this.mRadioBtnCdma = (RadioButton) findViewById(R.id.simtype_cdma_radio);
        this.mRadioBtnGsm = (RadioButton) findViewById(R.id.simtype_gsm_radio);
        ((Button) findViewById(R.id.simtype_set_button)).setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.testsimswitch.TestSimSwitchActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (TestSimSwitchActivity.this.mRadioBtnDefault.isChecked()) {
                    TestSimSwitchActivity.this.mTestSimType = "0";
                } else if (TestSimSwitchActivity.this.mRadioBtnCdma.isChecked()) {
                    TestSimSwitchActivity.this.mTestSimType = "1";
                } else if (TestSimSwitchActivity.this.mRadioBtnGsm.isChecked()) {
                    TestSimSwitchActivity.this.mTestSimType = "2";
                } else {
                    TestSimSwitchActivity.this.mTestSimType = "";
                }
                try {
                    EmUtils.getEmHidlService().setTestSimCardType(TestSimSwitchActivity.this.mTestSimType);
                } catch (Exception e) {
                    e.printStackTrace();
                    Elog.e(TestSimSwitchActivity.TAG, "set property failed ...");
                }
                Elog.d(TestSimSwitchActivity.TAG, "set persist.radio.testsim.cardtype to " + TestSimSwitchActivity.this.mTestSimType);
                TestSimSwitchActivity.this.showDialog(0);
            }
        });
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        return i != 0 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle("Hint").setMessage("Please reboot phone to apply new setting!").setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.testsimswitch.TestSimSwitchActivity.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        queryTestSimType();
    }
}
