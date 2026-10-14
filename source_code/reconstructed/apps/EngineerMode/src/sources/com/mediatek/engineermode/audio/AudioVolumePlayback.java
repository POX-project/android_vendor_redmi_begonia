package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.media.AudioManager;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TableLayout;
import android.widget.TableRow;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class AudioVolumePlayback extends Activity implements View.OnClickListener {
    private static final String CATEGORY_PLAYBACK = "Playback";
    private static final String CATEGORY_PLAYBACK_ANA = "PlaybackVolAna";
    private static final String CATEGORY_PLAYBACK_DIGI = "PlaybackVolDigi";
    private static final String CATEGORY_VOLUME = "Volume";
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int DGGAIN_MAX = 255;
    private static final int DGGAIN_MIN = 0;
    private static final int DIALOG_INIT_FAIL = 4;
    private static final int DIALOG_RESULT = 3;
    private static final String DIGI_GAIN = "digital_gain";
    private static final int HEADSET_MAX = 160;
    private static final int HEADSET_MIN = 88;
    private static final String HEADSET_PGA = "headset_pga";
    private static final int INVALID_RESULT = -1;
    private static final String LIST_DIVIDER = ",";
    private static final String PARAM_COMMON = "VolumeParam,Common";
    private static final String PARAM_DG_INDEX_MAX = "play_digi_range_max";
    private static final String PARAM_DG_INDEX_MIN = "play_digi_range_min";
    private static final String PARAM_DG_STEP = "dec_play_digi_step_per_db";
    private static final String PARAM_DG_VALUE_MAX = "dec_play_digi_max";
    private static final String PARAM_HS_LIST = "hs_ana_gain";
    private static final String PARAM_HS_STEP = "dec_play_hs_step_per_db";
    private static final String PARAM_HS_VALUE_MAX = "dec_play_hs_max";
    private static final String PARAM_SPK_LIST = "spk_ana_gain";
    private static final String PARAM_SPK_STEP = "dec_play_spk_step_per_db";
    private static final String PARAM_SPK_VALUE_MAX = "dec_play_spk_max";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    private static final int SPEAKER_MAX = 180;
    private static final int SPEAKER_NIN = 128;
    private static final String SPEAKER_PGA = "speaker_pga";
    private static final int SPECIAL_MAX = 256;
    public static final String TAG = "Audio/VolumePlayback";
    private static final String TYPE_PROFILE = "Profile";
    private static final String TYPE_VOLUME_TYPE = "Volume type";
    private static final String TYPE_VOLUME_TYPE_ALARM = "Alarm";
    private static final String TYPE_VOLUME_TYPE_OTHERS = "Others";
    private static final String TYPE_VOLUME_TYPE_RING = "Ring";
    private static final String TYPE_VOLUME_TYPE_RING_ALARM = "Ring_Alarm";
    private ArrayList<EditText> mArrayDlText;
    private String[] mArraySpinnerProfile;
    private String[] mArraySpinnerProfileValue;
    private String[] mArraySpinnerVolumeType;
    private String[] mArraySpinnerVolumeTypeValue;
    private AudioManager mAudioMgr = null;
    private Button mBtnSet;
    private String mCurrentProfile;
    private String mCurrentVolumeType;
    private int mDgMaxIndex;
    private int mDgMaxValue;
    private int mDgMinValue;
    private int mDgValueStep;
    private EditText mEditHeaset;
    private EditText mEditSpeaker;
    private boolean mHsAscending;
    private int mHsIndexStep;
    private int mHsMaxIndex;
    private int mHsMaxValue;
    private int mHsMinValue;
    private int mHsValueStep;
    private View mLayoutText1;
    private View mLayoutText2;
    private ArrayAdapter<String> mProfileAdatper;
    private Spinner mProfileSpinner;
    private boolean mSpkAscending;
    private int mSpkIndexStep;
    private int mSpkMaxIndex;
    private int mSpkMaxValue;
    private int mSpkMinValue;
    private int mSpkValueStep;
    private String mStrErrorInfo;
    private TableLayout mTableLayout;
    private TextView mTableTitleText;
    private AudioVolumeTypeScene mTypeScene;
    private ArrayAdapter<String> mVolumeTypeAdatper;
    private Spinner mVolumeTypeSpinner;

    private void initComponents() {
        this.mLayoutText1 = findViewById(R.id.layout_text1);
        this.mLayoutText2 = findViewById(R.id.layout_text2);
        this.mArrayDlText = new ArrayList<>();
        Button button = (Button) findViewById(R.id.btn_set);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        this.mVolumeTypeSpinner = (Spinner) findViewById(R.id.audio_volume_spinner1);
        String category = AudioTuningJni.getCategory(CATEGORY_PLAYBACK, TYPE_VOLUME_TYPE);
        Elog.d(TAG, "strSpinner1:" + category);
        if (category == null) {
            return;
        }
        String[] strArrSplit = category.split(LIST_DIVIDER);
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            return;
        }
        this.mArraySpinnerVolumeType = new String[length];
        this.mArraySpinnerVolumeTypeValue = new String[length];
        for (int i = 0; i < length; i++) {
            this.mArraySpinnerVolumeTypeValue[i] = strArrSplit[i * 2];
            this.mArraySpinnerVolumeType[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mArraySpinnerVolumeType);
        this.mVolumeTypeAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mVolumeTypeSpinner.setAdapter((SpinnerAdapter) this.mVolumeTypeAdatper);
        this.mCurrentVolumeType = this.mArraySpinnerVolumeTypeValue[0];
        this.mVolumeTypeSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (AudioVolumePlayback.this.mCurrentVolumeType != AudioVolumePlayback.this.mArraySpinnerVolumeTypeValue[i2]) {
                    AudioVolumePlayback audioVolumePlayback = AudioVolumePlayback.this;
                    audioVolumePlayback.mCurrentVolumeType = audioVolumePlayback.mArraySpinnerVolumeTypeValue[i2];
                    AudioVolumePlayback.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mProfileSpinner = (Spinner) findViewById(R.id.audio_volume_spinner2);
        String category2 = AudioTuningJni.getCategory(CATEGORY_PLAYBACK, TYPE_PROFILE);
        Elog.d(TAG, "strSpinner2:" + category2);
        if (category2 == null) {
            return;
        }
        String[] strArrSplit2 = category2.split(LIST_DIVIDER);
        int length2 = strArrSplit2.length / 2;
        if (length2 <= 0) {
            return;
        }
        this.mArraySpinnerProfile = new String[length2];
        this.mArraySpinnerProfileValue = new String[length2];
        for (int i2 = 0; i2 < length2; i2++) {
            this.mArraySpinnerProfileValue[i2] = strArrSplit2[i2 * 2];
            this.mArraySpinnerProfile[i2] = strArrSplit2[(i2 * 2) + 1];
        }
        ArrayAdapter<String> arrayAdapter2 = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mArraySpinnerProfile);
        this.mProfileAdatper = arrayAdapter2;
        arrayAdapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mProfileSpinner.setAdapter((SpinnerAdapter) this.mProfileAdatper);
        this.mCurrentProfile = this.mArraySpinnerProfileValue[0];
        this.mProfileSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                if (AudioVolumePlayback.this.mCurrentProfile != AudioVolumePlayback.this.mArraySpinnerProfileValue[i3]) {
                    AudioVolumePlayback audioVolumePlayback = AudioVolumePlayback.this;
                    audioVolumePlayback.mCurrentProfile = audioVolumePlayback.mArraySpinnerProfileValue[i3];
                    AudioVolumePlayback.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mTypeScene.initSceneSpinner(this, CATEGORY_PLAYBACK);
        ((TextView) findViewById(R.id.audio_volume_text1)).setText(R.string.audio_volume_heaset_pga);
        this.mEditHeaset = (EditText) findViewById(R.id.audio_volume_edittext1);
        ((TextView) findViewById(R.id.audio_volume_text2)).setText(R.string.audio_volume_speaker_pga);
        this.mEditSpeaker = (EditText) findViewById(R.id.audio_volume_edittext2);
        this.mTableLayout = (TableLayout) findViewById(R.id.dl_table);
        TextView textView = (TextView) findViewById(R.id.table_title);
        this.mTableTitleText = textView;
        textView.setText(R.string.audio_volume_digital_gain);
        initTableValue();
        updateValue();
    }

    private void initTableValue() {
        try {
            String params = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_DG_VALUE_MAX);
            String params2 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_DG_INDEX_MAX);
            String params3 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_DG_INDEX_MIN);
            String params4 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_DG_STEP);
            this.mDgMaxValue = Integer.parseInt(params);
            this.mDgMaxIndex = Integer.parseInt(params2);
            this.mDgValueStep = Integer.parseInt(params4);
            this.mDgMinValue = this.mDgMaxValue - (this.mDgValueStep * (this.mDgMaxIndex - Integer.parseInt(params3)));
            Elog.d(TAG, "Init UL gain table: mUlMaxValue " + this.mDgMaxValue + " mUlMinValue " + this.mDgMinValue + " mUlMaxIndex " + this.mDgMaxIndex + " mUlValueStep " + this.mDgValueStep);
            String params5 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_HS_VALUE_MAX);
            String params6 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_HS_STEP);
            String[] strArrSplit = AudioTuningJni.getChecklist(CATEGORY_PLAYBACK_ANA, HEADSET_PGA, PARAM_HS_LIST).trim().split(LIST_DIVIDER);
            if (strArrSplit.length < 3) {
                removeDialog(4);
                showDialog(4);
                return;
            }
            String str = strArrSplit[0];
            this.mHsMaxValue = Integer.parseInt(params5);
            this.mHsMaxIndex = Integer.parseInt(str);
            this.mHsValueStep = Integer.parseInt(params6);
            int i = Integer.parseInt(strArrSplit[2]);
            this.mHsAscending = this.mHsMaxIndex < i;
            this.mHsIndexStep = Math.abs(i - this.mHsMaxIndex);
            this.mHsMinValue = this.mHsMaxValue - (this.mHsValueStep * Math.abs(Integer.parseInt(strArrSplit[strArrSplit.length - 2]) - this.mHsMaxIndex));
            Elog.d(TAG, "Init Headset table: mHsMaxValue " + this.mHsMaxValue + " mHsMinValue " + this.mHsMinValue + " mHsMaxIndex " + this.mHsMaxIndex + " mHsValueStep " + this.mHsValueStep + " mHsIndexStep " + this.mHsIndexStep);
            String params7 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_SPK_VALUE_MAX);
            String params8 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_SPK_STEP);
            String[] strArrSplit2 = AudioTuningJni.getChecklist(CATEGORY_PLAYBACK_ANA, SPEAKER_PGA, PARAM_SPK_LIST).trim().split(LIST_DIVIDER);
            if (strArrSplit2.length < 3) {
                removeDialog(4);
                showDialog(4);
                return;
            }
            String str2 = strArrSplit2[0];
            this.mSpkMaxValue = Integer.parseInt(params7);
            this.mSpkMaxIndex = Integer.parseInt(str2);
            this.mSpkValueStep = Integer.parseInt(params8);
            int i2 = Integer.parseInt(strArrSplit2[2]);
            this.mSpkAscending = this.mSpkMaxIndex < i2;
            this.mSpkIndexStep = Math.abs(this.mSpkMaxIndex - i2);
            this.mSpkMinValue = this.mSpkMaxValue - (this.mSpkValueStep * Math.abs(this.mSpkMaxIndex - Integer.parseInt(strArrSplit2[strArrSplit2.length - 2])));
            Elog.d(TAG, "Init Speaker table: mSpkMaxValue " + this.mSpkMaxValue + " mSpkMinValue " + this.mSpkMinValue + " mStfMaxIndex " + this.mSpkMaxIndex + " mSpkValueStep " + this.mSpkValueStep + " mSpkIndexStep " + this.mSpkIndexStep);
        } catch (NumberFormatException e) {
            e.printStackTrace();
            Toast.makeText(this, "initTableValue wrong format", 1).show();
        }
    }

    private void setDigiGain() {
        String str = new String();
        for (EditText editText : this.mArrayDlText) {
            if (editText == null || editText.getText() == null) {
                this.mStrErrorInfo += getString(R.string.audio_volume_error_digi_empty);
                return;
            }
            try {
                int i = Integer.parseInt(editText.getText().toString().trim());
                if (i <= this.mDgMaxValue && i >= this.mDgMinValue) {
                    if (this.mDgMaxValue == 256 && i == this.mDgMaxValue) {
                        i++;
                    }
                    int i2 = this.mDgMaxIndex - ((this.mDgMaxValue - i) / this.mDgValueStep);
                    str = str.length() == 0 ? str + i2 : str + LIST_DIVIDER + i2;
                }
                this.mStrErrorInfo += getString(R.string.audio_volume_error_digital_gain_invalid, new Object[]{Integer.valueOf(this.mDgMinValue), Integer.valueOf(this.mDgMaxValue)});
                return;
            } catch (NumberFormatException e) {
                e.printStackTrace();
                this.mStrErrorInfo += getString(R.string.audio_volume_error_ditigain_format);
                return;
            }
        }
        if (AudioTuningJni.setParams(CATEGORY_PLAYBACK_DIGI, this.mTypeScene.getPara2String("Volume type," + this.mCurrentVolumeType + LIST_DIVIDER + TYPE_PROFILE + LIST_DIVIDER + this.mCurrentProfile), DIGI_GAIN, str) && AudioTuningJni.saveToWork(CATEGORY_PLAYBACK_DIGI)) {
            return;
        }
        this.mStrErrorInfo += getString(R.string.audio_volume_error_set_ditigain);
    }

    private void setHeadsetPga() {
        boolean params;
        if (this.mLayoutText1.getVisibility() != 0) {
            return;
        }
        EditText editText = this.mEditHeaset;
        if (editText == null || editText.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_headset_invalid, new Object[]{Integer.valueOf(this.mHsMinValue), Integer.valueOf(this.mHsMaxValue)});
        }
        try {
            int i = Integer.parseInt(this.mEditHeaset.getText().toString());
            if (i <= this.mHsMaxValue && i >= this.mHsMinValue) {
                int i2 = (((this.mHsMaxValue - i) / this.mHsValueStep) / this.mHsIndexStep) * this.mHsIndexStep;
                String strValueOf = String.valueOf(this.mHsAscending ? this.mHsMaxIndex + i2 : this.mHsMaxIndex - i2);
                if (TYPE_VOLUME_TYPE_RING.equals(this.mCurrentVolumeType) || TYPE_VOLUME_TYPE_ALARM.equals(this.mCurrentVolumeType)) {
                    params = AudioTuningJni.setParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Ring_Alarm,Profile," + this.mCurrentProfile), HEADSET_PGA, strValueOf);
                } else {
                    params = AudioTuningJni.setParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Others,Profile," + this.mCurrentProfile), HEADSET_PGA, strValueOf);
                }
                if (params && AudioTuningJni.saveToWork(CATEGORY_PLAYBACK_ANA)) {
                    return;
                }
                this.mStrErrorInfo += getString(R.string.audio_volume_error_set_headset_pga);
                return;
            }
            this.mStrErrorInfo += getString(R.string.audio_volume_error_headset_invalid, new Object[]{Integer.valueOf(this.mHsMinValue), Integer.valueOf(this.mHsMaxValue)});
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mStrErrorInfo += getString(R.string.audio_volume_error_headset_format);
        }
    }

    private void setSpeakerPga() {
        boolean params;
        if (this.mLayoutText2.getVisibility() != 0) {
            return;
        }
        EditText editText = this.mEditHeaset;
        if (editText == null || editText.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_headset_invalid, new Object[]{Integer.valueOf(this.mHsMinValue), Integer.valueOf(this.mHsMaxValue)});
        }
        try {
            int i = Integer.parseInt(this.mEditSpeaker.getText().toString());
            if (i <= this.mSpkMaxValue && i >= this.mSpkMinValue) {
                int i2 = (((this.mSpkMaxValue - i) / this.mSpkValueStep) / this.mSpkIndexStep) * this.mSpkIndexStep;
                String strValueOf = String.valueOf(this.mSpkAscending ? this.mSpkMaxIndex + i2 : this.mSpkMaxIndex - i2);
                if (TYPE_VOLUME_TYPE_RING.equals(this.mCurrentVolumeType) || TYPE_VOLUME_TYPE_ALARM.equals(this.mCurrentVolumeType)) {
                    params = AudioTuningJni.setParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Ring_Alarm,Profile," + this.mCurrentProfile), SPEAKER_PGA, strValueOf);
                } else {
                    params = AudioTuningJni.setParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Others,Profile," + this.mCurrentProfile), SPEAKER_PGA, strValueOf);
                }
                if (params && AudioTuningJni.saveToWork(CATEGORY_PLAYBACK_ANA)) {
                    return;
                }
                this.mStrErrorInfo += getString(R.string.audio_volume_error_set_speaker_pga);
                return;
            }
            this.mStrErrorInfo += getString(R.string.audio_volume_error_speaker_invalid, new Object[]{Integer.valueOf(this.mSpkMinValue), Integer.valueOf(this.mSpkMaxValue)});
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mStrErrorInfo += getString(R.string.audio_volume_error_speaker_format);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x00e7 -> B:54:0x00ef). Please report as a decompilation issue!!! */
    public void updateValue() {
        String params;
        String params2;
        int iAbs;
        int iAbs2;
        if (TYPE_VOLUME_TYPE_RING.equals(this.mCurrentVolumeType) || TYPE_VOLUME_TYPE_ALARM.equals(this.mCurrentVolumeType)) {
            params = AudioTuningJni.getParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Ring_Alarm,Profile," + this.mCurrentProfile), HEADSET_PGA);
            params2 = AudioTuningJni.getParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Ring_Alarm,Profile," + this.mCurrentProfile), SPEAKER_PGA);
        } else {
            params = AudioTuningJni.getParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Others,Profile," + this.mCurrentProfile), HEADSET_PGA);
            params2 = AudioTuningJni.getParams(CATEGORY_PLAYBACK_ANA, this.mTypeScene.getPara2String("Volume type,Others,Profile," + this.mCurrentProfile), SPEAKER_PGA);
        }
        Elog.d(TAG, "valueHeadset:" + params + " valueSpeaker: " + params2);
        try {
            int i = Integer.parseInt(params);
            if (i != -1 && (iAbs2 = this.mHsMaxValue - (this.mHsValueStep * Math.abs(i - this.mHsMaxIndex))) <= this.mHsMaxValue && iAbs2 >= this.mHsMinValue) {
                this.mEditHeaset.setText(String.valueOf(iAbs2));
                this.mLayoutText1.setVisibility(0);
            } else {
                this.mLayoutText1.setVisibility(8);
            }
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mLayoutText1.setVisibility(8);
        }
        try {
            int i2 = Integer.parseInt(params2);
            if (i2 != -1 && (iAbs = this.mSpkMaxValue - (this.mSpkValueStep * Math.abs(this.mSpkMaxIndex - i2))) <= this.mSpkMaxValue && iAbs >= this.mSpkMinValue) {
                this.mEditSpeaker.setText(String.valueOf(iAbs));
                this.mLayoutText2.setVisibility(0);
            } else {
                this.mLayoutText2.setVisibility(8);
            }
        } catch (NumberFormatException e2) {
            e2.printStackTrace();
            this.mLayoutText2.setVisibility(8);
        }
        String params3 = AudioTuningJni.getParams(CATEGORY_PLAYBACK_DIGI, this.mTypeScene.getPara2String("Volume type," + this.mCurrentVolumeType + LIST_DIVIDER + TYPE_PROFILE + LIST_DIVIDER + this.mCurrentProfile), DIGI_GAIN);
        this.mArrayDlText.clear();
        this.mTableLayout.removeAllViews();
        if (params3 == null) {
            this.mTableTitleText.setVisibility(8);
            return;
        }
        this.mTableTitleText.setVisibility(0);
        String[] strArrSplit = params3.split(LIST_DIVIDER);
        int length = strArrSplit.length;
        for (int i3 = 0; i3 < length; i3++) {
            TableRow tableRow = new TableRow(this);
            TextView textView = new TextView(this);
            EditText editText = new EditText(this);
            textView.setText("Index " + i3);
            try {
                int i4 = Integer.parseInt(strArrSplit[i3]);
                int i5 = this.mDgMaxValue - (this.mDgValueStep * (this.mDgMaxIndex - i4));
                if (i4 == this.mDgMaxIndex && i5 == 256) {
                    i5 = 255;
                }
                editText.setText(String.valueOf(i5));
                editText.setInputType(2);
                textView.setPadding(0, 3, 3, 3);
                editText.setPadding(20, 3, 3, 3);
                this.mArrayDlText.add(editText);
                tableRow.addView(textView);
                tableRow.addView(editText);
                this.mTableLayout.addView(tableRow);
            } catch (NumberFormatException e3) {
                e3.printStackTrace();
            }
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.equals(this.mBtnSet)) {
            if (!FeatureSupport.isEngLoad()) {
                String parameters = this.mAudioMgr.getParameters(CUST_XML_PARAM);
                if (parameters == null || !RESULT_SUPPORT.equals(parameters)) {
                    Elog.d(TAG, "set CUST_XML_PARAM = 1");
                    this.mAudioMgr.setParameters(CUST_XML_SET_SUPPORT_PARAM);
                    AudioTuningJni.CustXmlEnableChanged(1);
                } else {
                    Elog.d(TAG, "get CUST_XML_PARAM = 1");
                }
            }
            this.mStrErrorInfo = new String();
            setDigiGain();
            setSpeakerPga();
            setHeadsetPga();
            removeDialog(3);
            showDialog(3);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_volume_item);
        this.mAudioMgr = (AudioManager) getSystemService("audio");
        this.mTypeScene = new AudioVolumeTypeScene(new AudioVolumeTypeScene.Listener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.1
            @Override // com.mediatek.engineermode.audio.AudioVolumeTypeScene.Listener
            public void onSceneChanged() {
                AudioVolumePlayback.this.updateValue();
            }
        });
        initComponents();
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 3) {
            String str = this.mStrErrorInfo;
            return (str == null || str.isEmpty()) ? new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.audio_volume_set_success).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.5
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                }
            }).create() : new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(this.mStrErrorInfo).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                }
            }).create();
        }
        if (i != 4) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(R.string.init_error_title).setMessage(R.string.init_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumePlayback.6
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create();
    }
}
