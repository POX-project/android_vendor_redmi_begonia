package com.mediatek.engineermode.channellock;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioButton;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class ChannelLock extends Activity implements View.OnClickListener {
    private static final int MSG_CHANNEL_LOCK = 1;
    private static final int MSG_QUERY_CHANNEL_LOCK = 2;
    private static final int REBOOT_DIALOG = 2000;
    private static final String TAG = "ChannelLock";
    private RadioButton mRadioGSM1900NoButton;
    private RadioButton mRadioGSM1900YesButton;
    private RadioButton mRadioLockDisableButton;
    private RadioButton mRadioLockEnableButton;
    private RadioButton mRadioLockModeIdleConnected;
    private RadioButton mRadioLockModeIdleOnly;
    private RadioButton mRadioLockModeUnchanged;
    private RadioButton mRadioRatGSMButton;
    private RadioButton mRadioRatLTEButton;
    private RadioButton mRadioRatNRButton;
    private RadioButton mRadioRatUMTSButton;
    private Button mSetButtonApply;
    private Button mSetButtonReset;
    private int mSimType;
    private EditText mTextARFCNnumber;
    private EditText mTextCELLIDNnumber;
    private String mEMMCHLCKcommand = "AT+EMMCHLCK=";
    private final Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.channellock.ChannelLock.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i = message.what;
            if (i == 1) {
                if (asyncResult.exception != null) {
                    Elog.i(ChannelLock.TAG, "Failed to set Channel Lock");
                    EmUtils.showToast("Failed to set Channel Lock");
                    return;
                } else {
                    Elog.i(ChannelLock.TAG, "set Channel Lock success");
                    EmUtils.showToast("set Channel Lock success");
                    ChannelLock.this.showDialog(ChannelLock.REBOOT_DIALOG);
                    return;
                }
            }
            if (i != 2) {
                return;
            }
            if (asyncResult.exception != null) {
                EmUtils.showToast("Query failed.");
                Elog.d(ChannelLock.TAG, "Query failed.");
                return;
            }
            Elog.i(ChannelLock.TAG, "Query success.");
            String[] strArr = (String[]) asyncResult.result;
            if (strArr != null) {
                ChannelLock.this.handleQuery(strArr);
            } else {
                EmUtils.showToast("The returned data is wrong.");
                Elog.e(ChannelLock.TAG, "The returned data is wrong.");
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQuery(String[] strArr) {
        Elog.v(TAG, "data = " + strArr[0]);
        String strTrim = strArr[0].substring("+EMMCHLCK:".length()).trim();
        Elog.d(TAG, "response value:" + strTrim);
        String[] strArrSplit = strTrim.split(",");
        int i = 0;
        int i2 = 0;
        int i3 = 0;
        int i4 = 0;
        int i5 = 0;
        int i6 = 0;
        try {
            i = Integer.parseInt(strArrSplit[0]);
            Elog.v(TAG, "lockStatus = " + i);
            if (i != 0) {
                i2 = Integer.parseInt(strArrSplit[1]);
                i3 = Integer.parseInt(strArrSplit[2]);
                i4 = Integer.parseInt(strArrSplit[3]);
                i5 = Integer.parseInt(strArrSplit[4]);
                i6 = Integer.parseInt(strArrSplit[5]);
                Elog.v(TAG, "ret = " + i2);
                Elog.v(TAG, "gsm1900 = " + i3);
                Elog.v(TAG, "arfcn = " + i4);
                Elog.v(TAG, "cellId = " + i5);
                Elog.v(TAG, "lockMode = " + i6);
            }
        } catch (Exception e) {
            Elog.e(TAG, "response value parse failed," + e.getMessage());
        }
        if (i == 0) {
            this.mRadioLockDisableButton.setChecked(true);
            return;
        }
        if (i != 1) {
            Elog.e(TAG, "Invalid Channel Lock value");
            return;
        }
        this.mRadioLockEnableButton.setChecked(true);
        if (i2 == 0) {
            this.mRadioRatGSMButton.setChecked(true);
        } else if (i2 == 2) {
            this.mRadioRatUMTSButton.setChecked(true);
        } else if (i2 == 7) {
            this.mRadioRatLTEButton.setChecked(true);
        } else if (i2 == 11) {
            this.mRadioRatNRButton.setChecked(true);
        } else {
            Elog.e(TAG, "Invalid Channel Lock RAT value");
        }
        if (i3 == 1) {
            this.mRadioGSM1900YesButton.setChecked(true);
        } else if (i3 == 0) {
            this.mRadioGSM1900NoButton.setChecked(true);
        } else {
            Elog.e(TAG, "Invalid Channel Lock GSM1900 value");
        }
        this.mTextARFCNnumber.setText(String.valueOf(i4));
        if (i5 < 0 || i5 > 511) {
            Elog.e(TAG, "Invalid Cell ID value");
            EmUtils.showToast("Invalid Cell ID value");
        } else {
            this.mTextCELLIDNnumber.setText(String.valueOf(i5));
        }
        if (i6 == 0) {
            this.mRadioLockModeIdleOnly.setChecked(true);
        } else if (i6 == 3) {
            this.mRadioLockModeIdleConnected.setChecked(true);
        } else {
            Elog.e(TAG, "Invalid Channel Lock mode value");
        }
    }

    private void sendATCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendATCommand " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, strArr, this.mATCmdHander.obtainMessage(i));
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.mEMMCHLCKcommand = "AT+EMMCHLCK=";
        if (view == this.mSetButtonReset) {
            EmUtils.setAirplaneModeEnabled(true);
            EmUtils.setAirplaneModeEnabled(false);
            EmUtils.showToast("Reset the airplane Mode succeed,please try");
            return;
        }
        if (view == this.mSetButtonApply) {
            if (this.mRadioLockDisableButton.isChecked()) {
                this.mEMMCHLCKcommand += "0";
            } else if (this.mRadioLockEnableButton.isChecked()) {
                this.mEMMCHLCKcommand += "1,";
                if (this.mRadioRatGSMButton.isChecked()) {
                    this.mEMMCHLCKcommand += "0,";
                } else if (this.mRadioRatUMTSButton.isChecked()) {
                    this.mEMMCHLCKcommand += "2,";
                } else if (this.mRadioRatLTEButton.isChecked()) {
                    this.mEMMCHLCKcommand += "7,";
                } else if (this.mRadioRatNRButton.isChecked()) {
                    this.mEMMCHLCKcommand += "11,";
                } else {
                    EmUtils.showToast("ERROR in RAT");
                }
                if (this.mRadioGSM1900YesButton.isChecked()) {
                    this.mEMMCHLCKcommand += "1,";
                } else if (this.mRadioGSM1900NoButton.isChecked()) {
                    this.mEMMCHLCKcommand += "0,";
                } else {
                    EmUtils.showToast("ERROR in GSM1900");
                }
                this.mEMMCHLCKcommand += ((Object) this.mTextARFCNnumber.getText()) + ",";
                this.mEMMCHLCKcommand += ((Object) this.mTextCELLIDNnumber.getText());
                if (!this.mRadioLockModeUnchanged.isChecked()) {
                    if (this.mRadioLockModeIdleOnly.isChecked()) {
                        this.mEMMCHLCKcommand += ",0";
                    } else if (this.mRadioLockModeIdleConnected.isChecked()) {
                        this.mEMMCHLCKcommand += ",3";
                    }
                }
            } else {
                EmUtils.showToast("ERROR in Lock");
            }
            sendATCommand(new String[]{this.mEMMCHLCKcommand, ""}, 1);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.channel_lock);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        Elog.d(TAG, "mSimType: " + this.mSimType);
        this.mSetButtonApply = (Button) findViewById(R.id.channel_lock_apply_button);
        Button button = (Button) findViewById(R.id.channellock_reset_button);
        this.mSetButtonReset = button;
        button.setOnClickListener(this);
        this.mSetButtonApply.setOnClickListener(this);
        this.mRadioLockEnableButton = (RadioButton) findViewById(R.id.channel_lock_lock_enable_radio);
        this.mRadioLockDisableButton = (RadioButton) findViewById(R.id.channel_lock_lock_disable_radio);
        this.mRadioRatGSMButton = (RadioButton) findViewById(R.id.rat_gsm_radio);
        this.mRadioRatUMTSButton = (RadioButton) findViewById(R.id.rat_umts_radio);
        this.mRadioRatLTEButton = (RadioButton) findViewById(R.id.rat_lte_radio);
        this.mRadioRatNRButton = (RadioButton) findViewById(R.id.rat_nr_radio);
        this.mRadioGSM1900YesButton = (RadioButton) findViewById(R.id.gsm1900_yes_radio);
        this.mRadioGSM1900NoButton = (RadioButton) findViewById(R.id.gsm1900_no_radio);
        this.mTextARFCNnumber = (EditText) findViewById(R.id.channel_lock_ARCFN_number_text);
        this.mTextCELLIDNnumber = (EditText) findViewById(R.id.channel_lock_cellid_number_text);
        this.mRadioLockModeUnchanged = (RadioButton) findViewById(R.id.lock_mode_unchanged);
        this.mRadioLockModeIdleOnly = (RadioButton) findViewById(R.id.lock_mode_idle_only);
        this.mRadioLockModeIdleConnected = (RadioButton) findViewById(R.id.lock_mode_idle_connected);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != REBOOT_DIALOG) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle("Channel lock:").setMessage("Please click Reset by Airplane Mode button to take effect!").setPositiveButton("OK", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        sendATCommand(new String[]{"AT+EMMCHLCK?", "+EMMCHLCK:"}, 2);
    }
}
