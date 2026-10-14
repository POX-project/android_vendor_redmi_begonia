package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Resources;
import android.media.AudioSystem;
import android.os.Bundle;
import android.support.v4.view.InputDeviceCompat;
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
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class AudioModeSetting extends Activity implements View.OnClickListener {
    private static final int AUDIO_COMMAND_PARAM0 = 32;
    private static final int AUDIO_COMMAND_PARAM1 = 33;
    private static final int AUDIO_COMMAND_PARAM2 = 34;
    private static final int CONSTANT_0XFF = 255;
    private static final int CONSTANT_256 = 256;
    private static final int DIALOG_ID_GET_DATA_ERROR = 1;
    private static final int DIALOG_ID_SET_ERROR = 3;
    private static final int DIALOG_ID_SET_SUCCESS = 2;
    private static final int GET_CUSTOMD_DATASIZE = 5;
    private static final int MAX_VOL_SIZE = 6;
    private static final String TAG = "Audio/ModeSetting";
    private static final int TYPE_MAX_EXTAMP = 6;
    private static final int TYPE_MAX_HEADSET = 6;
    private static final int TYPE_MAX_HEADSPEAKER = 8;
    private static final int TYPE_MAX_NORMAL = 6;
    private static final int TYPE_MAX_SPEAKER = 6;
    private static final int VALUE_RANGE_160 = 160;
    private static final int VALUE_RANGE_255 = 255;
    private Button mBtnSet;
    private Button mBtnSetMaxVol;
    private Button mBtnSetMaxVolSpeaker;
    private int mCurrentMode;
    private EditText mEditMaxVol;
    private EditText mEditMaxVolSpeaker;
    private Spinner mFirSpinner;
    private TextView mFirsummary;
    private int mLevelIndex;
    private int[] mRealUsageVols;
    private int mTypeIndex;
    private TextView mValText;
    private EditText mValueEdit;
    private Spinner mVolLevelSpinner;
    private Spinner mVolTypeSpinner;
    private static int sMaxVolMode = 3;
    private static int sMaxVolLevel = 7;
    private static int sMaxVolType = 8;
    private static int[] sOffSet = {(3 * 7) * 0, (3 * 7) * 1, (3 * 7) * 2, (3 * 7) * 3, (3 * 7) * 4, (3 * 7) * 5, (3 * 7) * 6, (3 * 7) * 7};
    private static int sTypeMedia = 6;
    private static int sStructSize = (3 * 7) * 8;
    private static int sSetCustomerData = 6;
    private static int sGetCustomerData = 7;
    private static int sModeMicIndex = 2;
    private static int sModeSphIndex = 4;
    private static int sModeSph2Index = 4;
    private static int sModeSidIndex = 5;
    private int mValueRange = 255;
    private byte[] mData = null;
    private boolean mIsFirstFirSet = true;
    private boolean mSupportEnhance = false;

    private class ValLevelItemSelectListener implements AdapterView.OnItemSelectedListener {
        private ValLevelItemSelectListener() {
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            AudioModeSetting.this.mLevelIndex = i;
            EditText editText = AudioModeSetting.this.mValueEdit;
            AudioModeSetting audioModeSetting = AudioModeSetting.this;
            editText.setText(String.valueOf(audioModeSetting.getValue(audioModeSetting.mData, AudioModeSetting.this.mCurrentMode, AudioModeSetting.this.mTypeIndex, AudioModeSetting.this.mLevelIndex)));
            AudioModeSetting.this.setMaxVolEdit();
            Elog.v(AudioModeSetting.TAG, "SLevel: " + AudioModeSetting.this.mCurrentMode + " " + AudioModeSetting.this.mTypeIndex + " " + AudioModeSetting.this.mLevelIndex);
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
            Elog.v(AudioModeSetting.TAG, "noting selected.");
        }
    }

    private boolean checkEditNumber(EditText editText, int i) {
        if (editText == null || editText.getText() == null) {
            Toast.makeText(this, getString(R.string.input_null_tip), 1).show();
            return false;
        }
        String string = editText.getText().toString();
        if (string == null || string.length() == 0) {
            Toast.makeText(this, getString(R.string.input_null_tip), 1).show();
            return false;
        }
        try {
            if (Integer.valueOf(string).intValue() <= i) {
                return true;
            }
            Toast.makeText(this, getString(R.string.number_arrage_tip) + i, 1).show();
            return false;
        } catch (NumberFormatException e) {
            Toast.makeText(this, getString(R.string.number_arrage_tip) + i, 1).show();
            return false;
        }
    }

    private int getMaxValue(byte[] bArr, int i, boolean z) {
        if (bArr != null && i < sMaxVolMode) {
            return (z && i == 3) ? bArr[sOffSet[sMaxVolType] + (i * 6) + 1] & 255 : bArr[sOffSet[sMaxVolType] + (i * 6)] & 255;
        }
        Elog.d(TAG, "assert! Check the setting value.");
        return -1;
    }

    private int getUsageVol(String str) {
        int[] iArr = this.mRealUsageVols;
        if (iArr == null || iArr.length != sMaxVolType) {
            throw new RuntimeException("Invalid mRealUsageVols");
        }
        int volumeTypeIndex = getVolumeTypeIndex(str);
        if (volumeTypeIndex != -1) {
            return this.mRealUsageVols[volumeTypeIndex];
        }
        return -1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getValue(byte[] bArr, int i, int i2, int i3) {
        if (bArr == null || i >= sMaxVolMode || i2 >= sMaxVolType || i3 >= sMaxVolLevel) {
            Elog.d(TAG, "assert! Check the setting value.");
        }
        return bArr[(sMaxVolLevel * i) + i3 + sOffSet[i2]] & 255;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<String> getVolLevelList(String str) {
        ArrayList arrayList = new ArrayList();
        int usageVol = getUsageVol(str);
        for (int i = 0; i < usageVol; i++) {
            arrayList.add("Level " + i);
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getVolumeTypeIndex(String str) {
        if (getString(R.string.audio_val_type_ring).equals(str)) {
            return 0;
        }
        if (getString(R.string.audio_val_type_sip).equals(str)) {
            return 1;
        }
        if (getString(R.string.audio_val_type_mic).equals(str)) {
            return 2;
        }
        if (getString(R.string.audio_val_type_fmr).equals(str)) {
            return 3;
        }
        if (getString(R.string.audio_val_type_sph).equals(str)) {
            return 4;
        }
        if (getString(R.string.audio_val_type_sph2).equals(str)) {
            return 5;
        }
        if (getString(R.string.audio_val_type_sid).equals(str)) {
            return 6;
        }
        if (getString(R.string.audio_val_type_media).equals(str)) {
            return 7;
        }
        return getString(R.string.audio_val_type_matv).equals(str) ? 8 : -1;
    }

    private void setAudioData() {
        int audioData = AudioTuningJni.setAudioData(sSetCustomerData, sStructSize, this.mData);
        AudioSystem.setParameters("ReloadAudioVolume");
        if (audioData == 0 || -38 == audioData) {
            showDialog(2);
            return;
        }
        showDialog(3);
        Elog.i(TAG, "AudioModeSetting SetAudioData return value is : " + audioData);
    }

    private void setMaxValue(byte[] bArr, int i, byte b, boolean z) {
        if (bArr == null || i >= sMaxVolMode) {
            Elog.d(TAG, "assert! Check the setting value.");
        } else if (z && i == 3) {
            bArr[sOffSet[sMaxVolType] + (i * 6) + 1] = b;
        } else {
            bArr[sOffSet[sMaxVolType] + (i * 6)] = b;
        }
    }

    private void setMaxVolData(byte b) {
        int i = this.mCurrentMode;
        if (i == 0) {
            setValue(this.mData, 0, sTypeMedia, sModeSphIndex, b);
            return;
        }
        if (i == 1) {
            setValue(this.mData, 0, sTypeMedia, sModeSidIndex, b);
        } else if (i == 2) {
            byte[] bArr = this.mData;
            int i2 = sTypeMedia;
            setValue(bArr, 0, i2, i2, b);
        }
    }

    private void setMaxVolData(byte b, boolean z) {
        setMaxValue(this.mData, this.mCurrentMode, b, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setMaxVolEdit() {
        Elog.i(TAG, "Set max vol Edit.");
        if (this.mSupportEnhance) {
            this.mEditMaxVol.setText(String.valueOf(getMaxValue(this.mData, this.mCurrentMode, false)));
            int i = this.mCurrentMode;
            if (i == 3) {
                this.mEditMaxVolSpeaker.setText(String.valueOf(getMaxValue(this.mData, i, true)));
                return;
            }
            return;
        }
        int i2 = this.mCurrentMode;
        if (i2 == 0) {
            this.mEditMaxVol.setText(String.valueOf(getValue(this.mData, 0, sTypeMedia, sModeSphIndex)));
            Elog.i(TAG, "0 is " + getValue(this.mData, 0, sTypeMedia, sModeSphIndex));
            return;
        }
        if (i2 == 1) {
            this.mEditMaxVol.setText(String.valueOf(getValue(this.mData, 0, sTypeMedia, sModeSidIndex)));
            Elog.i(TAG, "1 is " + getValue(this.mData, 0, sTypeMedia, sModeSidIndex));
            return;
        }
        if (i2 != 2) {
            this.mEditMaxVol.setText("0");
            Elog.i(TAG, "error is 0");
            return;
        }
        EditText editText = this.mEditMaxVol;
        byte[] bArr = this.mData;
        int i3 = sTypeMedia;
        editText.setText(String.valueOf(getValue(bArr, 0, i3, i3)));
        StringBuilder sb = new StringBuilder();
        sb.append("2 is ");
        byte[] bArr2 = this.mData;
        int i4 = sTypeMedia;
        sb.append(getValue(bArr2, 0, i4, i4));
        Elog.i(TAG, sb.toString());
    }

    private void setValue(byte[] bArr, int i, int i2, int i3, byte b) {
        if (bArr == null || i >= sMaxVolMode || i2 >= sMaxVolType || i3 >= sMaxVolLevel) {
            Elog.d(TAG, "assert! Check the setting value.");
            return;
        }
        Elog.d(TAG, "setValue() mode:" + i + ", type:" + i2 + "level:" + i3);
        bArr[(sMaxVolLevel * i) + i3 + sOffSet[i2]] = b;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mBtnSet.getId()) {
            if (checkEditNumber(this.mValueEdit, this.mValueRange)) {
                setValue(this.mData, this.mCurrentMode, this.mTypeIndex, this.mLevelIndex, (byte) Integer.valueOf(this.mValueEdit.getText().toString()).intValue());
                setAudioData();
                return;
            }
            return;
        }
        if (view.getId() != this.mBtnSetMaxVol.getId()) {
            if (view.getId() == this.mBtnSetMaxVolSpeaker.getId() && checkEditNumber(this.mEditMaxVolSpeaker, 160)) {
                setMaxVolData((byte) Integer.valueOf(this.mEditMaxVolSpeaker.getText().toString()).intValue(), true);
                setAudioData();
                return;
            }
            return;
        }
        if (checkEditNumber(this.mEditMaxVol, 160)) {
            byte bIntValue = (byte) Integer.valueOf(this.mEditMaxVol.getText().toString()).intValue();
            if (this.mSupportEnhance) {
                setMaxVolData(bIntValue, false);
            } else {
                setMaxVolData(bIntValue);
            }
            setAudioData();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Resources resources = getResources();
        Intent intent = getIntent();
        this.mCurrentMode = intent.getIntExtra(Audio.CURRENT_MODE, 0);
        this.mSupportEnhance = intent.getBooleanExtra(Audio.ENHANCE_MODE, false);
        Elog.v(TAG, "mCurrentMode: " + this.mCurrentMode + "mSupportEnhance: " + this.mSupportEnhance);
        if (this.mSupportEnhance) {
            setContentView(R.layout.audio_modesetting_enhance);
            sMaxVolMode = 4;
            sMaxVolLevel = 15;
            sMaxVolType = 9;
            sTypeMedia = 7;
            sStructSize = (4 * 15 * 9) + 6 + 6 + 6 + 8 + 6 + 9;
            sSetCustomerData = InputDeviceCompat.SOURCE_KEYBOARD;
            sGetCustomerData = 256;
            sModeSph2Index = 5;
            sModeSidIndex = 6;
            sOffSet = new int[]{4 * 15 * 0, 4 * 15 * 1, 4 * 15 * 2, 4 * 15 * 3, 4 * 15 * 4, 4 * 15 * 5, 4 * 15 * 6, 4 * 15 * 7, 4 * 15 * 8, 4 * 15 * 9};
        } else {
            setContentView(R.layout.audio_modesetting);
            if (AudioTuningJni.getAudioCommand(5) != sStructSize) {
                Elog.d(TAG, "assert! Check the structure size!");
                Toast.makeText(this, "Error: the structure size is error", 0).show();
                finish();
                return;
            }
        }
        int i = sStructSize;
        byte[] bArr = new byte[i];
        this.mData = bArr;
        Arrays.fill(bArr, 0, i, (byte) 0);
        int audioData = AudioTuningJni.getAudioData(sGetCustomerData, sStructSize, this.mData);
        if (audioData != 0) {
            showDialog(1);
            Elog.i(TAG, "AudioModeSetting GetAudioData return value is : " + audioData);
        }
        if (this.mSupportEnhance) {
            this.mRealUsageVols = new int[sMaxVolType];
            String str = "[";
            int i2 = 0;
            while (true) {
                int i3 = sMaxVolType;
                if (i2 >= i3) {
                    break;
                }
                this.mRealUsageVols[(i3 - i2) - 1] = this.mData[(sStructSize - i2) - 1];
                str = str + ((int) this.mData[(sStructSize - i2) - 1]) + ",";
                i2++;
            }
            Elog.d(TAG, "mRealUsageVols: " + str + "]");
        }
        this.mBtnSet = (Button) findViewById(R.id.Audio_ModeSetting_Button);
        this.mValueEdit = (EditText) findViewById(R.id.Audio_ModeSetting_EditText);
        if (this.mSupportEnhance) {
            this.mBtnSetMaxVol = (Button) findViewById(R.id.Audio_MaxVol_Set_headset);
            this.mEditMaxVol = (EditText) findViewById(R.id.Audio_MaxVol_Edit_headset);
            this.mBtnSetMaxVolSpeaker = (Button) findViewById(R.id.Audio_MaxVol_Set_speaker);
            this.mEditMaxVolSpeaker = (EditText) findViewById(R.id.Audio_MaxVol_Edit_speaker);
        } else {
            this.mBtnSetMaxVol = (Button) findViewById(R.id.Audio_MaxVol_Set);
            this.mEditMaxVol = (EditText) findViewById(R.id.Audio_MaxVol_Edit);
        }
        this.mVolTypeSpinner = (Spinner) findViewById(R.id.Audio_ModeSetting);
        this.mVolLevelSpinner = (Spinner) findViewById(R.id.Audio_Level);
        this.mValText = (TextView) findViewById(R.id.Audio_ModeSetting_TextView);
        if (!this.mSupportEnhance) {
            this.mFirSpinner = (Spinner) findViewById(R.id.Audio_Fir_Spinner);
            this.mFirsummary = (TextView) findViewById(R.id.Audio_Fir_Title);
        } else if (this.mCurrentMode != 3) {
            ((TextView) findViewById(R.id.Audio_MaxVol_Tv_Max)).setText(R.string.Audio_MaxVol_Text);
            findViewById(R.id.Audio_MaxVol_Dual_Set).setVisibility(8);
        }
        ArrayList arrayList = new ArrayList();
        int i4 = this.mCurrentMode;
        if (i4 == 0) {
            arrayList.addAll(Arrays.asList(resources.getStringArray(this.mSupportEnhance ? R.array.mode_type0_enh : R.array.mode_type0)));
        } else if (i4 == 1) {
            arrayList.addAll(Arrays.asList(resources.getStringArray(this.mSupportEnhance ? R.array.mode_type1_enh : R.array.mode_type1)));
        } else if (i4 == 2) {
            arrayList.addAll(Arrays.asList(resources.getStringArray(this.mSupportEnhance ? R.array.mode_type2_enh : R.array.mode_type2)));
        } else {
            arrayList.addAll(Arrays.asList(resources.getStringArray(R.array.mode_type3_enh)));
        }
        if (this.mSupportEnhance) {
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                String str2 = (String) arrayList.get(size);
                if (getString(R.string.audio_val_type_fmr).equals(str2)) {
                    arrayList.remove(str2);
                }
                if (getString(R.string.audio_val_type_matv).equals(str2)) {
                    arrayList.remove(str2);
                }
            }
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, arrayList);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mVolTypeSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mVolTypeSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioModeSetting.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i5, long j) {
                AudioModeSetting.this.mValText.setText(R.string.Audio_ModeSetting_TextView);
                AudioModeSetting.this.mValueRange = 255;
                String string = adapterView.getSelectedItem().toString();
                if (AudioModeSetting.this.mSupportEnhance) {
                    AudioModeSetting audioModeSetting = AudioModeSetting.this;
                    audioModeSetting.mTypeIndex = audioModeSetting.getVolumeTypeIndex(string);
                } else if (AudioModeSetting.this.mCurrentMode == 0) {
                    if (i5 == 0 || i5 == 1) {
                        AudioModeSetting.this.mTypeIndex = i5 + 1;
                    } else {
                        AudioModeSetting.this.mTypeIndex = i5 + 2;
                    }
                } else if (AudioModeSetting.this.mCurrentMode == 1) {
                    AudioModeSetting.this.mTypeIndex = i5 + 1;
                } else {
                    AudioModeSetting.this.mTypeIndex = i5;
                }
                Elog.d(AudioModeSetting.TAG, "mTypeIndex is:" + AudioModeSetting.this.mTypeIndex);
                if (AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeSphIndex || AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeSph2Index || AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeSidIndex || AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeMicIndex) {
                    AudioModeSetting.this.mEditMaxVol.setEnabled(false);
                    AudioModeSetting.this.mBtnSetMaxVol.setEnabled(false);
                    if (AudioModeSetting.this.mSupportEnhance) {
                        AudioModeSetting.this.mEditMaxVolSpeaker.setEnabled(false);
                        AudioModeSetting.this.mBtnSetMaxVolSpeaker.setEnabled(false);
                    }
                    if (AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeSphIndex || AudioModeSetting.this.mTypeIndex == AudioModeSetting.sModeSph2Index) {
                        AudioModeSetting.this.mValText.setText(R.string.text_tip);
                        AudioModeSetting.this.mValueRange = 160;
                    }
                } else {
                    AudioModeSetting.this.mEditMaxVol.setEnabled(true);
                    AudioModeSetting.this.mBtnSetMaxVol.setEnabled(true);
                    if (AudioModeSetting.this.mSupportEnhance) {
                        AudioModeSetting.this.mEditMaxVolSpeaker.setEnabled(true);
                        AudioModeSetting.this.mBtnSetMaxVolSpeaker.setEnabled(true);
                    }
                }
                EditText editText = AudioModeSetting.this.mValueEdit;
                AudioModeSetting audioModeSetting2 = AudioModeSetting.this;
                editText.setText(String.valueOf(audioModeSetting2.getValue(audioModeSetting2.mData, AudioModeSetting.this.mCurrentMode, AudioModeSetting.this.mTypeIndex, AudioModeSetting.this.mLevelIndex)));
                AudioModeSetting.this.setMaxVolEdit();
                Elog.v(AudioModeSetting.TAG, "SMode: " + AudioModeSetting.this.mCurrentMode + " " + AudioModeSetting.this.mTypeIndex + " " + AudioModeSetting.this.mLevelIndex);
                if (AudioModeSetting.this.mSupportEnhance) {
                    Elog.d(AudioModeSetting.TAG, "itemName: " + string);
                    AudioModeSetting audioModeSetting3 = AudioModeSetting.this;
                    ArrayAdapter arrayAdapter2 = new ArrayAdapter(audioModeSetting3, android.R.layout.simple_spinner_item, audioModeSetting3.getVolLevelList(string));
                    arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
                    AudioModeSetting.this.mVolLevelSpinner.setAdapter((SpinnerAdapter) arrayAdapter2);
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.v(AudioModeSetting.TAG, "noting selected.");
            }
        });
        ArrayAdapter arrayAdapter2 = new ArrayAdapter(this, android.R.layout.simple_spinner_item, this.mSupportEnhance ? getVolLevelList((String) arrayList.get(0)) : Arrays.asList(resources.getStringArray(R.array.mode_level)));
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mVolLevelSpinner.setAdapter((SpinnerAdapter) arrayAdapter2);
        this.mVolLevelSpinner.setOnItemSelectedListener(new ValLevelItemSelectListener());
        this.mBtnSet.setOnClickListener(this);
        this.mBtnSetMaxVol.setOnClickListener(this);
        if (this.mSupportEnhance) {
            this.mBtnSetMaxVolSpeaker.setOnClickListener(this);
        } else {
            ArrayAdapter arrayAdapter3 = new ArrayAdapter(this, android.R.layout.simple_spinner_item, resources.getStringArray(R.array.mode_fir));
            arrayAdapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            this.mFirSpinner.setAdapter((SpinnerAdapter) arrayAdapter3);
            this.mFirSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioModeSetting.2
                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onItemSelected(AdapterView<?> adapterView, View view, int i5, long j) {
                    if (AudioModeSetting.this.mIsFirstFirSet) {
                        AudioModeSetting.this.mFirsummary.setText(R.string.fir_text);
                        AudioModeSetting.this.mIsFirstFirSet = false;
                        return;
                    }
                    int audioCommand = -1;
                    if (AudioModeSetting.this.mCurrentMode == 0) {
                        audioCommand = AudioTuningJni.setAudioCommand(32, i5);
                        Elog.v(AudioModeSetting.TAG, "set normal fir Z" + i5);
                    } else if (AudioModeSetting.this.mCurrentMode == 1) {
                        audioCommand = AudioTuningJni.setAudioCommand(33, i5);
                        Elog.v(AudioModeSetting.TAG, "set headset fir Z" + i5);
                    } else if (AudioModeSetting.this.mCurrentMode == 2) {
                        audioCommand = AudioTuningJni.setAudioCommand(34, i5);
                        Elog.v(AudioModeSetting.TAG, "set loudspeaker fir Z" + i5);
                    }
                    if (-1 == audioCommand) {
                        AudioModeSetting.this.mFirsummary.setText("FIR set error!");
                        Toast.makeText(AudioModeSetting.this, "Set error, check permission.", 1).show();
                        return;
                    }
                    AudioModeSetting.this.mFirsummary.setText("Current selected: " + i5);
                }

                @Override // android.widget.AdapterView.OnItemSelectedListener
                public void onNothingSelected(AdapterView<?> adapterView) {
                    Elog.v(AudioModeSetting.TAG, "noting selected.");
                }
            });
        }
        this.mValueEdit.setText(String.valueOf(getValue(this.mData, this.mCurrentMode, this.mTypeIndex, this.mLevelIndex)));
        setMaxVolEdit();
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioModeSetting.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioModeSetting.this.removeDialog(1);
                    AudioModeSetting.this.finish();
                }
            }).setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null).create();
        }
        if (i == 2) {
            return new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.set_success_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        if (i != 3) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(R.string.set_error_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
    }
}
