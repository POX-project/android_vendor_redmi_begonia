package com.mediatek.engineermode.worldphone;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.SystemProperties;
import android.provider.Settings;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.internal.telephony.ModemSwitchHandler;
import com.mediatek.internal.telephony.worldphone.IWorldPhone;
import com.mediatek.internal.telephony.worldphone.WorldPhoneUtil;

/* JADX INFO: loaded from: classes3.dex */
public class ModemSwitch extends Activity implements View.OnClickListener {
    private static final int PROJ_TYPE_NOT_SUPPORT = 0;
    private static final int PROJ_TYPE_WORLD_PHONE = 1;
    private static final String TAG = "ModemSwitch";
    private static int sProjectType;
    private static IWorldPhone sWorldPhone = null;
    private AlertDialog alertDialog;
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.worldphone.ModemSwitch.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.d(ModemSwitch.TAG, "[Receiver]+");
            Elog.d(ModemSwitch.TAG, "Action: " + action);
            if ("mediatek.intent.action.ACTION_MD_TYPE_CHANGE".equals(action)) {
                int intExtra = intent.getIntExtra("mdType", 0);
                Elog.d(ModemSwitch.TAG, "mdType: " + intExtra);
                ModemSwitch.this.updateUi(intExtra);
            }
            Elog.d(ModemSwitch.TAG, "[Receiver]-");
        }
    };
    private Button mButtonSet;
    private Button mButtonSetTimer;
    private RadioButton mRadioAuto;
    private RadioButton mRadioLtg;
    private RadioButton mRadioLwg;
    private RadioButton mRadioTg;
    private RadioButton mRadioWg;
    private TextView mText;
    private EditText mTimer;

    private int getModemType() {
        return ModemSwitchHandler.getActiveModemType();
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [com.mediatek.engineermode.worldphone.ModemSwitch$2] */
    private void switchModemAlert(long j, long j2) {
        this.alertDialog.setMessage("Wait");
        this.alertDialog.setCanceledOnTouchOutside(false);
        this.alertDialog.show();
        new CountDownTimer(j, j2) { // from class: com.mediatek.engineermode.worldphone.ModemSwitch.2
            @Override // android.os.CountDownTimer
            public void onFinish() {
                ModemSwitch.this.alertDialog.cancel();
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j3) {
                ModemSwitch.this.alertDialog.setMessage("Wait " + (j3 / 1000) + " seconds");
            }
        }.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUi(int i) {
        if (i == 3) {
            this.mText.setText(R.string.modem_switch_is_wg);
            return;
        }
        if (i == 4) {
            this.mText.setText(R.string.modem_switch_is_tg);
        } else if (i == 5) {
            this.mText.setText(R.string.modem_switch_is_fdd_csfb);
        } else if (i == 6) {
            this.mText.setText(R.string.modem_switch_is_tdd_csfb);
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int i;
        if (view == this.mButtonSetTimer) {
            try {
                i = Integer.parseInt(this.mTimer.getText().toString());
            } catch (NumberFormatException e) {
                Elog.w(TAG, "Invalid format: " + ((Object) this.mTimer.getText()));
                i = 0;
            }
            SystemProperties.set("persist.vendor.radio.wm_fddtimer", String.valueOf(i));
            Toast.makeText(this, "Set timer succeed.", 0).show();
            return;
        }
        getModemType();
        int i2 = Settings.Global.getInt(getContentResolver(), "airplane_mode_on", 0);
        Elog.d(TAG, "airplaneMode: " + i2);
        if (i2 == 1) {
            Toast.makeText(this, "Modem switch is not allowed in flight mode", 0).show();
            return;
        }
        if (this.mRadioWg.isChecked()) {
            Elog.d(TAG, "Set modem type: 3");
            if (sProjectType == 1) {
                sWorldPhone.setModemSelectionMode(0, 3);
            }
        } else if (this.mRadioTg.isChecked()) {
            Elog.d(TAG, "Set modem type: 4");
            if (sProjectType == 1) {
                sWorldPhone.setModemSelectionMode(0, 4);
            }
        } else if (this.mRadioLwg.isChecked()) {
            Elog.d(TAG, "Set modem type: 5");
            if (sProjectType == 1) {
                sWorldPhone.setModemSelectionMode(0, 5);
            }
        } else if (this.mRadioLtg.isChecked()) {
            Elog.d(TAG, "Set modem type: 6");
            if (sProjectType == 1) {
                sWorldPhone.setModemSelectionMode(0, 6);
            }
        } else {
            if (!this.mRadioAuto.isChecked()) {
                return;
            }
            Elog.d(TAG, "Set modem type: auto");
            if (sProjectType == 1) {
                sWorldPhone.setModemSelectionMode(1, 0);
            }
        }
        Toast.makeText(this, "Please Wait", 0).show();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.modem_switch);
        if (WorldPhoneUtil.isWorldPhoneSupport()) {
            Elog.d(TAG, "World Phone Project");
            sWorldPhone = WorldPhoneUtil.getWorldPhone();
            sProjectType = 1;
        } else {
            Elog.d(TAG, "Not Supported Project");
            sProjectType = 0;
        }
        this.mRadioWg = (RadioButton) findViewById(R.id.modem_switch_wg);
        this.mRadioTg = (RadioButton) findViewById(R.id.modem_switch_tg);
        this.mRadioLwg = (RadioButton) findViewById(R.id.modem_switch_fdd_csfb);
        this.mRadioLtg = (RadioButton) findViewById(R.id.modem_switch_tdd_csfb);
        this.mRadioAuto = (RadioButton) findViewById(R.id.modem_switch_auto);
        this.mButtonSet = (Button) findViewById(R.id.modem_switch_set);
        int i = sProjectType;
        if (i == 1) {
            if (WorldPhoneUtil.isLteSupport()) {
                this.mRadioWg.setVisibility(8);
                this.mRadioTg.setVisibility(8);
            } else {
                this.mRadioLwg.setVisibility(8);
                this.mRadioLtg.setVisibility(8);
            }
        } else if (i == 0) {
            this.mRadioWg.setVisibility(8);
            this.mRadioTg.setVisibility(8);
            this.mRadioLwg.setVisibility(8);
            this.mRadioLtg.setVisibility(8);
            this.mRadioAuto.setVisibility(8);
            this.mButtonSet.setVisibility(8);
        }
        this.mText = (TextView) findViewById(R.id.modem_switch_current_value);
        this.mTimer = (EditText) findViewById(R.id.modem_switch_timer);
        this.mButtonSet.setOnClickListener(this);
        Button button = (Button) findViewById(R.id.modem_switch_set_timer);
        this.mButtonSetTimer = button;
        button.setOnClickListener(this);
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this).create();
        this.alertDialog = alertDialogCreate;
        alertDialogCreate.setTitle("Switching Mode");
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("mediatek.intent.action.ACTION_MD_TYPE_CHANGE");
        registerReceiver(this.mBroadcastReceiver, intentFilter);
    }

    @Override // android.app.Activity
    protected void onResume() {
        Elog.d(TAG, "onResume()");
        super.onResume();
        int modemType = getModemType();
        Elog.d(TAG, "Get modem type: " + modemType);
        if (modemType == 3) {
            this.mText.setText(R.string.modem_switch_is_wg);
            this.mRadioWg.setChecked(true);
        } else if (modemType == 4) {
            this.mText.setText(R.string.modem_switch_is_tg);
            this.mRadioTg.setChecked(true);
        } else if (modemType == 5) {
            this.mText.setText(R.string.modem_switch_is_fdd_csfb);
            this.mRadioLwg.setChecked(true);
        } else if (modemType == 6) {
            this.mText.setText(R.string.modem_switch_is_tdd_csfb);
            this.mRadioLtg.setChecked(true);
        } else {
            this.mText.setText(R.string.modem_switch_current_value);
            Toast.makeText(this, "Query Modem type failed: " + modemType, 0).show();
        }
        if (Integer.parseInt(SystemProperties.get("persist.vendor.radio.wm_selectmode", "0")) == 1) {
            this.mRadioWg.setChecked(false);
            this.mRadioTg.setChecked(false);
            this.mRadioLwg.setChecked(false);
            this.mRadioLtg.setChecked(false);
            this.mRadioAuto.setChecked(true);
        }
        this.mTimer.setText(String.valueOf(Integer.parseInt(SystemProperties.get("persist.vendor.radio.wm_fddtimer", "0"))));
    }
}
