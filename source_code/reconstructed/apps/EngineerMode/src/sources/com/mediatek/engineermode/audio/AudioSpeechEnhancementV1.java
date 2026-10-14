package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.media.AudioManager;
import android.media.AudioSystem;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class AudioSpeechEnhancementV1 extends Activity implements View.OnClickListener {
    private static final int ACTURAL_PARAM_NUM = 32;
    static final String AFK_WB_SPEED = "MTK_WB_SPEECH_SUPPORT";
    private static final int AUDIO_PARA_DIV_INDEX = 15;
    private static final int AUDIO_PARA_DIV_INDEX1 = 16;
    private static final int COMMON_PARA_SIZE = 24;
    private static final int CONSTANT_0XFF = 255;
    private static final int CONSTANT_256 = 256;
    private static final int CONSTANT_32 = 32;
    private static final int DATA_SIZE = 1444;
    private static final int DIALOG_GET_DATA_ERROR = 1;
    private static final int DIALOG_GET_WBDATA_ERROR = 2;
    private static final int DIALOG_SET_SE_ERROR = 4;
    private static final int DIALOG_SET_SE_SUCCESS = 3;
    private static final int DIALOG_SET_WB_ERROR = 6;
    private static final int DIALOG_SET_WB_SUCCESS = 5;
    private static final int GET_SPEECH_HAC_PARAMETER = 208;
    private static final int GET_SPEECH_MAGICON_PARAMETER = 192;
    private static final int GET_WB_SPEECH_PARAMETER = 64;
    private static final int HAC_DATA_SIZE = 650;
    private static final String HAC_MODE = "HAC Mode";
    private static final int INDEX_HAC_MODE = 10;
    private static final int INDEX_VOICE_TRACKING_MODE = 9;
    private static final int LARGEST_NUM = 65535;
    private static final int LONGEST_NUM_LENGHT = 5;
    private static final int MODE0_PARAM_NUM = 12;
    private static final int SET_SPEECH_HAC_PARAMETER = 209;
    private static final int SET_SPEECH_MAGICON_PARAMETER = 193;
    private static final int SET_WB_SPEECH_PARAMETER = 65;
    private static final int SPEECH_DATA_SIZE = 64;
    private static final String TAG = "Audio/SpeechEnhancement1";
    private static final String VOICE_TRACKING_MODE = "Voice Tracking Mode";
    private static final int VOLUME_SIZE = 22;
    private static final int WB_DATA_SIZE = 2416;
    private Button mBtnSet;
    private byte[] mData;
    private byte[] mHACdata;
    private int mModeIndex;
    private ArrayAdapter<String> mParaAdatper;
    private int mParaIndex;
    private Spinner mParaSpinner;
    private String mParamterStr = "";
    private byte[] mSpeechdata;
    private EditText mValueEdit;
    private byte[] mWBdata;

    private int checkEditNumber(EditText editText, int i) {
        if (editText == null || editText.getText() == null) {
            Toast.makeText(this, getString(R.string.input_null_tip), 1).show();
            return -1;
        }
        String string = editText.getText().toString();
        if (string == null || string.length() == 0) {
            Toast.makeText(this, getString(R.string.input_null_tip), 1).show();
            return -1;
        }
        try {
            int iIntValue = Integer.valueOf(string).intValue();
            if (iIntValue <= i) {
                return iIntValue;
            }
            Toast.makeText(this, getString(R.string.number_arrage_tip) + i, 1).show();
            return -1;
        } catch (NumberFormatException e) {
            Toast.makeText(this, getString(R.string.number_arrage_tip) + i, 1).show();
            return -1;
        }
    }

    private boolean checkHacStatus() {
        String parameters = AudioSystem.getParameters("GET_HAC_SUPPORT");
        Elog.i(TAG, "Get Hac support " + parameters);
        String[] strArrSplit = parameters.split("=");
        if (strArrSplit.length < 2 || !strArrSplit[1].equals("1")) {
            return false;
        }
        this.mHACdata = new byte[HAC_DATA_SIZE];
        for (int i = 0; i < HAC_DATA_SIZE; i++) {
            this.mHACdata[i] = 0;
        }
        int audioData = AudioTuningJni.getAudioData(GET_SPEECH_HAC_PARAMETER, HAC_DATA_SIZE, this.mHACdata);
        if (audioData != 0) {
            showDialog(2);
            Elog.i(TAG, "Audio_SpeechEnhancement Get hac data return value is : " + audioData);
        }
        return true;
    }

    private boolean checkMagiStatus() {
        String parameters = AudioSystem.getParameters("GET_MAGI_CONFERENCE_SUPPORT");
        Elog.i(TAG, "Get Magi support " + parameters);
        String[] strArrSplit = parameters.split("=");
        if (strArrSplit.length < 2 || !strArrSplit[1].equals("1")) {
            return false;
        }
        this.mSpeechdata = new byte[64];
        for (int i = 0; i < 64; i++) {
            this.mSpeechdata[i] = 0;
        }
        int audioData = AudioTuningJni.getAudioData(GET_SPEECH_MAGICON_PARAMETER, 64, this.mSpeechdata);
        if (audioData != 0) {
            showDialog(2);
            Elog.i(TAG, "Audio_SpeechEnhancement Get speech data return value is : " + audioData);
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getAudioData() {
        return this.mParaIndex > 15 ? getWBAudioData() : getSpeechEnhanceAudioData();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getHacData() {
        byte[] bArr = this.mHACdata;
        int i = this.mParaIndex;
        byte b = bArr[(i * 2) + 1];
        byte b2 = bArr[i * 2];
        return ((b < 0 ? b + 256 : b) * 256) + (b2 < 0 ? b2 + 256 : b2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getSpeechData() {
        byte[] bArr = this.mSpeechdata;
        int i = this.mParaIndex;
        byte b = bArr[(i * 2) + 1];
        byte b2 = bArr[i * 2];
        return ((b < 0 ? b + 256 : b) * 256) + (b2 < 0 ? b2 + 256 : b2);
    }

    private int getSpeechEnhanceAudioData() {
        byte b;
        byte b2;
        int i = this.mModeIndex;
        if (i == 0) {
            byte[] bArr = this.mData;
            int i2 = this.mParaIndex;
            b = bArr[(i2 * 2) + 22 + 1];
            b2 = bArr[(i2 * 2) + 22];
        } else {
            byte[] bArr2 = this.mData;
            int i3 = this.mParaIndex;
            b = bArr2[((i - 1) * 32) + 46 + (i3 * 2) + 1];
            b2 = bArr2[((i - 1) * 32) + 46 + (i3 * 2)];
        }
        return ((b < 0 ? b + 256 : b) * 256) + (b2 < 0 ? b2 + 256 : b2);
    }

    private int getWBAudioData() {
        return getWBdata(this.mModeIndex - 1, this.mParaIndex - 16);
    }

    private int getWBdata(int i, int i2) {
        byte[] bArr = this.mWBdata;
        int i3 = ((bArr[(i * 32) + (i2 * 2) + 1] + 256) & 255) * 256;
        int i4 = (bArr[(i * 32) + (i2 * 2)] + 256) & 255;
        Elog.v(TAG, "getWBdata mode " + i + ", paraIdx " + i2 + "val " + (i3 + i4));
        return i3 + i4;
    }

    static boolean isAudioFeatureSupport(Context context, String str) {
        String parameters = ((AudioManager) context.getSystemService("audio")).getParameters(str);
        if (parameters == null) {
            Elog.d(TAG, "PARSE FAIL; parameters is null");
            return false;
        }
        String[] strArrSplit = parameters.split(";");
        String[] strArrSplit2 = strArrSplit[0].split("=");
        if (strArrSplit2.length >= 2) {
            String strTrim = strArrSplit2[1].trim();
            return "true".equalsIgnoreCase(strTrim) || "yes".equalsIgnoreCase(strTrim);
        }
        Elog.d(TAG, "parse fail; invalid keyval:" + strArrSplit[0]);
        return false;
    }

    private void setAudioData(int i) {
        if (this.mParaIndex > 15) {
            setWBAudioData(i);
        } else {
            setSpeechEnhanceAudioData(i);
        }
    }

    private void setHacData(int i) {
        byte[] bArr = this.mHACdata;
        int i2 = this.mParaIndex;
        bArr[i2 * 2] = (byte) (i % 256);
        bArr[(i2 * 2) + 1] = (byte) (i / 256);
        int audioData = AudioTuningJni.setAudioData(SET_SPEECH_HAC_PARAMETER, HAC_DATA_SIZE, bArr);
        if (audioData == 0 || -38 == audioData) {
            showDialog(3);
            return;
        }
        showDialog(4);
        Elog.i(TAG, "Audio_SpeechEnhancement setHacData return value is : " + audioData);
    }

    private void setSpeechData(int i) {
        byte[] bArr = this.mSpeechdata;
        int i2 = this.mParaIndex;
        bArr[i2 * 2] = (byte) (i % 256);
        bArr[(i2 * 2) + 1] = (byte) (i / 256);
        int audioData = AudioTuningJni.setAudioData(SET_SPEECH_MAGICON_PARAMETER, 64, bArr);
        if (audioData == 0 || -38 == audioData) {
            showDialog(3);
            return;
        }
        showDialog(4);
        Elog.i(TAG, "Audio_SpeechEnhancement setAudioData return value is : " + audioData);
    }

    private void setSpeechEnhanceAudioData(int i) {
        int i2 = i / 256;
        int i3 = i % 256;
        int i4 = this.mModeIndex;
        if (i4 == 0) {
            byte[] bArr = this.mData;
            int i5 = this.mParaIndex;
            bArr[(i5 * 2) + 22] = (byte) i3;
            bArr[(i5 * 2) + 22 + 1] = (byte) i2;
        } else {
            byte[] bArr2 = this.mData;
            int i6 = this.mParaIndex;
            bArr2[((i4 - 1) * 32) + 46 + (i6 * 2)] = (byte) i3;
            bArr2[((i4 - 1) * 32) + 46 + (i6 * 2) + 1] = (byte) i2;
        }
        int emParameter = AudioTuningJni.setEmParameter(this.mData, DATA_SIZE);
        if (emParameter == 0 || -38 == emParameter) {
            showDialog(3);
            return;
        }
        showDialog(4);
        Elog.i(TAG, "Audio_SpeechEnhancement SetEMParameter return value is : " + emParameter);
    }

    private void setWBAudioData(int i) {
        int i2 = this.mParaIndex;
        if (i2 < 16) {
            Elog.i(TAG, "Internal error. check the code.");
            return;
        }
        setWBdata(this.mModeIndex - 1, i2 - 16, i);
        int audioData = AudioTuningJni.setAudioData(SET_WB_SPEECH_PARAMETER, WB_DATA_SIZE, this.mWBdata);
        if (audioData == 0 || -38 == audioData) {
            showDialog(5);
            return;
        }
        showDialog(6);
        Elog.i(TAG, "WB data SetAudioData return value is : " + audioData);
    }

    private void setWBdata(int i, int i2, int i3) {
        byte[] bArr = this.mWBdata;
        bArr[(i * 32) + (i2 * 2)] = (byte) (i3 % 256);
        bArr[(i * 32) + (i2 * 2) + 1] = (byte) (i3 / 256);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int iCheckEditNumber;
        if (!view.equals(this.mBtnSet) || (iCheckEditNumber = checkEditNumber(this.mValueEdit, 65535)) == -1) {
            return;
        }
        int i = this.mModeIndex;
        if (i == 9) {
            setSpeechData(iCheckEditNumber);
        } else if (i == 10) {
            setHacData(iCheckEditNumber);
        } else {
            setAudioData(iCheckEditNumber);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_speechenhancement);
        this.mParamterStr = getResources().getString(R.string.paramter);
        this.mBtnSet = (Button) findViewById(R.id.Audio_SpEnhancement_Button);
        this.mValueEdit = (EditText) findViewById(R.id.Audio_SpEnhancement_EditText);
        this.mParaSpinner = (Spinner) findViewById(R.id.Audio_SpEnhancement_ParaType);
        TextView textView = (TextView) findViewById(R.id.Audio_SpEnhancement_TextView);
        Spinner spinner = (Spinner) findViewById(R.id.Audio_SpEnhancement_ModeType);
        String[] stringArray = getResources().getStringArray(R.array.speech_enhance_mode);
        ArrayList arrayList = new ArrayList();
        for (String str : stringArray) {
            arrayList.add(str);
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
        if (checkMagiStatus()) {
            arrayAdapter.add(VOICE_TRACKING_MODE);
        }
        if (checkHacStatus()) {
            arrayAdapter.add(HAC_MODE);
        }
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter((SpinnerAdapter) arrayAdapter);
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV1.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                int audioData;
                AudioSpeechEnhancementV1.this.mModeIndex = i;
                if (i == 0) {
                    AudioSpeechEnhancementV1.this.mParaAdatper.clear();
                    for (int i2 = 0; i2 < 12; i2++) {
                        AudioSpeechEnhancementV1.this.mParaAdatper.add(AudioSpeechEnhancementV1.this.mParamterStr + i2);
                    }
                } else {
                    AudioSpeechEnhancementV1.this.mParaAdatper.clear();
                    for (int i3 = 0; i3 < 32; i3++) {
                        AudioSpeechEnhancementV1.this.mParaAdatper.add(AudioSpeechEnhancementV1.this.mParamterStr + i3);
                    }
                }
                AudioSpeechEnhancementV1.this.mParaSpinner.setSelection(0);
                AudioSpeechEnhancementV1.this.mParaIndex = 0;
                String string = adapterView.getSelectedItem().toString();
                if (string.equals(AudioSpeechEnhancementV1.VOICE_TRACKING_MODE)) {
                    AudioSpeechEnhancementV1.this.mModeIndex = 9;
                    audioData = AudioSpeechEnhancementV1.this.getSpeechData();
                } else if (string.equals(AudioSpeechEnhancementV1.HAC_MODE)) {
                    AudioSpeechEnhancementV1.this.mModeIndex = 10;
                    audioData = AudioSpeechEnhancementV1.this.getHacData();
                } else {
                    audioData = AudioSpeechEnhancementV1.this.getAudioData();
                }
                AudioSpeechEnhancementV1.this.mValueEdit.setText(String.valueOf(audioData));
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.i(AudioSpeechEnhancementV1.TAG, "do noting...");
            }
        });
        this.mBtnSet.setOnClickListener(this);
        textView.setText(R.string.speech_enhance_text);
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mParaAdatper = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        for (int i = 0; i < 12; i++) {
            this.mParaAdatper.add(this.mParamterStr + i);
        }
        this.mParaSpinner.setAdapter((SpinnerAdapter) this.mParaAdatper);
        this.mParaSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV1.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                int hacData;
                AudioSpeechEnhancementV1.this.mParaIndex = i2;
                if (AudioSpeechEnhancementV1.this.mModeIndex == 9) {
                    hacData = AudioSpeechEnhancementV1.this.getSpeechData();
                } else {
                    hacData = AudioSpeechEnhancementV1.this.mModeIndex == 10 ? AudioSpeechEnhancementV1.this.getHacData() : AudioSpeechEnhancementV1.this.getAudioData();
                }
                AudioSpeechEnhancementV1.this.mValueEdit.setText(String.valueOf(hacData));
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.i(AudioSpeechEnhancementV1.TAG, "do noting...");
            }
        });
        this.mData = new byte[DATA_SIZE];
        for (int i2 = 0; i2 < DATA_SIZE; i2++) {
            this.mData[i2] = 0;
        }
        this.mWBdata = new byte[WB_DATA_SIZE];
        for (int i3 = 0; i3 < WB_DATA_SIZE; i3++) {
            this.mWBdata[i3] = 0;
        }
        int emParameter = AudioTuningJni.getEmParameter(this.mData, DATA_SIZE);
        if (emParameter != 0) {
            showDialog(1);
            Elog.i(TAG, "Audio_SpeechEnhancement GetEMParameter return value is : " + emParameter);
        }
        int audioData = AudioTuningJni.getAudioData(64, WB_DATA_SIZE, this.mWBdata);
        if (audioData != 0) {
            showDialog(2);
            Elog.i(TAG, "Audio_SpeechEnhancement Get wb data return value is : " + audioData);
        }
        spinner.setSelection(0);
        this.mParaSpinner.setSelection(0);
        this.mModeIndex = 0;
        this.mParaIndex = 0;
        this.mValueEdit.setText(String.valueOf(getAudioData()));
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        switch (i) {
            case 1:
                return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV1.3
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        AudioSpeechEnhancementV1.this.finish();
                    }
                }).setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null).create();
            case 2:
                return new AlertDialog.Builder(this).setTitle(R.string.get_wbdata_error_title).setMessage(R.string.get_wbdata_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV1.4
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        AudioSpeechEnhancementV1.this.finish();
                    }
                }).setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null).create();
            case 3:
                return new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.set_speech_enhance_success).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
            case 4:
                return new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(R.string.set_speech_enhance_failed).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
            case 5:
                return new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.set_wb_success).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
            case 6:
                return new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(R.string.set_wb_failed).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
            default:
                return null;
        }
    }
}
