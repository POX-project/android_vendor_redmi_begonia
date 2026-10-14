package com.mediatek.engineermode.irsettings;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.ChipSupport;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class IRSettings extends Activity implements View.OnClickListener {
    private static final String COMMAND_SET = "AT+EFAKECFG=";
    private static final int DIALOG_NOTICE = 0;
    private static final String IR_MODE_PROPERTY = "persist.vendor.radio.ct.ir.engmode";
    private static final String KEY_CURRENT_VALUE = "current_value";
    private static final String MODE_CDMA_ONLY = "1";
    private static final String MODE_FTA_ONLY = "3";
    private static final String MODE_GSM_ONLY = "2";
    private static final String MODE_NONE = "0";
    private static final int MSG_SET = 0;
    private static final int OFF = 0;
    private static final int ON = 1;
    private static final String PREF_FILE = "pref";
    private static final String TAG = "IRSettings";
    private SharedPreferences mPref;
    private int mCurrentSelected = 0;
    private Spinner mIRModeSpinner = null;
    private Spinner mIntegrityOffSpinner = null;
    private Button mBtDone = null;
    private Button mBtIntegrityOffDone = null;
    private TextView mIntegrityCheckOff = null;
    private int mInitSelected = 0;
    private Toast mToast = null;
    private final Handler mResponseHander = new Handler() { // from class: com.mediatek.engineermode.irsettings.IRSettings.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            if (((AsyncResult) message.obj).exception == null) {
                IRSettings.this.mPref.edit().putInt(IRSettings.KEY_CURRENT_VALUE, IRSettings.this.mIntegrityOffSpinner.getSelectedItemPosition()).commit();
                IRSettings.this.showToast("Set done.");
            } else {
                IRSettings.this.mPref.edit().putInt(IRSettings.KEY_CURRENT_VALUE, IRSettings.this.mIntegrityOffSpinner.getSelectedItemPosition()).commit();
                IRSettings.this.showToast("Set failed.");
            }
        }
    };
    private AdapterView.OnItemSelectedListener mIRModeListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.irsettings.IRSettings.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
            Elog.d(IRSettings.TAG, "onItemSelected " + i);
            IRSettings.this.mCurrentSelected = i;
            if (IRSettings.this.mCurrentSelected != IRSettings.this.mInitSelected) {
                IRSettings.this.mBtDone.setEnabled(true);
            } else {
                IRSettings.this.mBtDone.setEnabled(false);
            }
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };

    private void sendATCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendATCommand() " + strArr + ", " + i);
        EmUtils.invokeOemRilRequestStringsEm(true, strArr, this.mResponseHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String str;
        Elog.d(TAG, "view_id = " + view.getId());
        if (view.getId() != this.mBtDone.getId()) {
            if (view.getId() == this.mBtIntegrityOffDone.getId()) {
                if (this.mIntegrityOffSpinner.getSelectedItemPosition() == 0) {
                    sendATCommand(new String[]{"AT+EFAKECFG=0", ""}, 0);
                    return;
                } else {
                    if (this.mIntegrityOffSpinner.getSelectedItemPosition() == 1) {
                        sendATCommand(new String[]{"AT+EFAKECFG=1", ""}, 0);
                        return;
                    }
                    return;
                }
            }
            return;
        }
        int i = this.mCurrentSelected;
        if (i == 1) {
            str = "1";
        } else if (i == 2) {
            str = MODE_GSM_ONLY;
        } else {
            str = i == 3 ? MODE_FTA_ONLY : "0";
        }
        try {
            EmUtils.getEmHidlService().setCtIREngMode(str);
        } catch (Exception e) {
            e.printStackTrace();
            Elog.e(TAG, "set property failed ...");
        }
        if (this.mInitSelected != this.mCurrentSelected) {
            showDialog(0);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ir_settings);
        this.mIRModeSpinner = (Spinner) findViewById(R.id.c2k_ir_mode);
        ArrayList arrayList = new ArrayList();
        arrayList.add("None");
        arrayList.add("CDMA Only");
        if (ModemCategory.isCdma() && ModemCategory.isLteSupport() && ModemCategory.isGsmSupport() && !ModemCategory.isTdscdmaSupport() && !ModemCategory.isWcdmaSupport()) {
            arrayList.add("LTE/GSM Only");
        } else {
            arrayList.add("LTE/WCDMA/GSM Only");
        }
        arrayList.add("FTA LTE Only");
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mIRModeSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mIRModeSpinner.setOnItemSelectedListener(this.mIRModeListener);
        Button button = (Button) findViewById(R.id.ir_done_btn);
        this.mBtDone = button;
        button.setOnClickListener(this);
        this.mBtDone.setEnabled(false);
        String str = SystemProperties.get(IR_MODE_PROPERTY, "0");
        Elog.i(TAG, "ir mode : " + str);
        if (str.equals("1")) {
            this.mInitSelected = 1;
            this.mIRModeSpinner.setSelection(1);
        } else if (str.equals(MODE_GSM_ONLY)) {
            this.mInitSelected = 2;
            this.mIRModeSpinner.setSelection(2);
        } else if (str.equals(MODE_FTA_ONLY)) {
            this.mInitSelected = 3;
            this.mIRModeSpinner.setSelection(3);
        } else {
            this.mInitSelected = 0;
            this.mIRModeSpinner.setSelection(0);
        }
        this.mIntegrityOffSpinner = (Spinner) findViewById(R.id.c2k_ir_integrity_off);
        Button button2 = (Button) findViewById(R.id.ir_integrity_off_done_btn);
        this.mBtIntegrityOffDone = button2;
        button2.setOnClickListener(this);
        SharedPreferences sharedPreferences = getSharedPreferences(PREF_FILE, 0);
        this.mPref = sharedPreferences;
        this.mIntegrityOffSpinner.setSelection(sharedPreferences.getInt(KEY_CURRENT_VALUE, 0));
        this.mIntegrityCheckOff = (TextView) findViewById(R.id.wcdma_integrity_off);
        if (ChipSupport.isCurrentChipEquals(1)) {
            return;
        }
        this.mIntegrityOffSpinner.setVisibility(8);
        this.mBtIntegrityOffDone.setVisibility(8);
        this.mIntegrityCheckOff.setVisibility(8);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0) {
            Elog.d(TAG, "error dialog ID");
            return null;
        }
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle(R.string.c2k_ir_dialog);
        builder.setCancelable(false);
        builder.setMessage(getString(R.string.c2k_ir_notice));
        builder.setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.irsettings.IRSettings.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                IRSettings.this.finish();
            }
        });
        return builder.create();
    }
}
