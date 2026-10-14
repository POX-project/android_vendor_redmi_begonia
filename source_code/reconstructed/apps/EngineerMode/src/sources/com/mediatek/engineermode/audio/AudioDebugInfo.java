package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.bandselect.BandModeContent;

/* JADX INFO: loaded from: classes2.dex */
public class AudioDebugInfo extends Activity implements AdapterView.OnItemSelectedListener, View.OnClickListener {
    private static final String AUDIO_RECORD_PREFER = "audio_record";
    private static final int DATA_SIZE = 1444;
    private static final int DIALOG_ID_GET_DATA_ERROR = 1;
    private static final int DIALOG_ID_SET_ERROR = 3;
    private static final int DIALOG_ID_SET_SUCCESS = 2;
    private static final int LONGEST_NUM_LEN = 5;
    private static final int MAGIC_NUMBER_256 = 256;
    private static final int MAGIC_NUMBER_65535 = 65535;
    private static final int SPINNER_COUNT = 16;
    private static final String TAG = "Audio/DebugInfo";
    private static final int VOLUME_SPEECH_SIZE = 310;
    private Button mBtnSet;
    private byte[] mData;
    private EditText mDebugValue;
    private int mSpinnerIndex;

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mBtnSet.getId()) {
            EditText editText = this.mDebugValue;
            if (editText == null || editText.getText() == null || this.mDebugValue.getText().toString() == null) {
                Toast.makeText(this, R.string.input_null_tip, 1).show();
                return;
            }
            if (5 < this.mDebugValue.getText().toString().length() || this.mDebugValue.getText().toString().length() == 0) {
                Toast.makeText(this, R.string.input_length_error, 1).show();
                return;
            }
            long jLongValue = Long.valueOf(this.mDebugValue.getText().toString()).longValue();
            if (jLongValue > BandModeContent.UMTS_MAX_VALUE) {
                Toast.makeText(this, R.string.input_length_error, 1).show();
                return;
            }
            byte[] bArr = this.mData;
            int i = this.mSpinnerIndex;
            bArr[(i * 2) + 310] = (byte) (jLongValue % 256);
            bArr[(i * 2) + 310 + 1] = (byte) (jLongValue / 256);
            int emParameter = AudioTuningJni.setEmParameter(bArr, DATA_SIZE);
            if (emParameter == 0 || -38 == emParameter) {
                showDialog(2);
                return;
            }
            showDialog(3);
            Elog.i(TAG, "SetEMParameter return value is : " + emParameter);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_debuginfo);
        Spinner spinner = (Spinner) findViewById(R.id.Audio_DebugInfo_Spinner);
        this.mDebugValue = (EditText) findViewById(R.id.Audio_DebugInfo_EditText);
        Button button = (Button) findViewById(R.id.Audio_DebugInfo_Button);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        Resources resources = getResources();
        for (int i = 0; i < 16; i++) {
            arrayAdapter.add(resources.getString(R.string.paramter) + i);
        }
        spinner.setAdapter((SpinnerAdapter) arrayAdapter);
        spinner.setOnItemSelectedListener(this);
        this.mData = new byte[DATA_SIZE];
        for (int i2 = 0; i2 < DATA_SIZE; i2++) {
            this.mData[i2] = 0;
        }
        int emParameter = AudioTuningJni.getEmParameter(this.mData, DATA_SIZE);
        if (emParameter != 0) {
            showDialog(1);
            Elog.i(TAG, "Audio_DebugInfo GetEMParameter return value is : " + emParameter);
        }
        int i3 = getSharedPreferences(AUDIO_RECORD_PREFER, 0).getInt("NUM", 0);
        this.mSpinnerIndex = i3;
        spinner.setSelection(i3);
        byte[] bArr = this.mData;
        int i4 = this.mSpinnerIndex;
        this.mDebugValue.setText(String.valueOf((bArr[(i4 * 2) + 310 + 1] * 256) + bArr[(i4 * 2) + 310]));
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioDebugInfo.1
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioDebugInfo.this.finish();
                }
            }).setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null).create();
        }
        if (i == 2) {
            return new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.set_debuginfo_success).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        if (i != 3) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(R.string.set_debuginfo_failed).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        this.mSpinnerIndex = i;
        byte[] bArr = this.mData;
        this.mDebugValue.setText(String.valueOf((bArr[(i * 2) + 310 + 1] * 256) + bArr[(i * 2) + 310]));
        SharedPreferences.Editor editorEdit = getSharedPreferences(AUDIO_RECORD_PREFER, 0).edit();
        editorEdit.putInt("NUM", this.mSpinnerIndex);
        editorEdit.commit();
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
        Elog.i(TAG, "do noting...");
    }
}
