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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AudioVolumeRecord extends Activity implements View.OnClickListener {
    private static final String CATEGORY_GAINMAP = "VolumeGainMap";
    private static final String CATEGORY_RECORD = "Record";
    private static final String CATEGORY_RECORDVOL = "RecordVol";
    private static final String CATEGORY_VOLUME = "Volume";
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int DIALOG_RESULT = 3;
    private static final String DL_GAIN = "dl_gain";
    private static final String DL_MAP = "dl_total_gain_decimal";
    private static final String PARAM_COMMON = "VolumeParam,Common";
    private static final String PARAM_UL_INDEX_MAX = "mic_idx_range_max";
    private static final String PARAM_UL_INDEX_MIN = "mic_idx_range_min";
    private static final String PARAM_UL_STEP = "dec_rec_step_per_db";
    private static final String PARAM_UL_VALUE_MAX = "dec_rec_max";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    private static final String STF_GAIN = "stf_gain";
    public static final String TAG = "Audio/VolumeRecord";
    private static final String TYPE_APP = "Application";
    private static final String TYPE_PROFILE = "Profile";
    private static final String UL_GAIN = "ul_gain";
    private ArrayAdapter<String> mAppAdatper;
    private Spinner mAppSpinner;
    private String[] mArrayDlTable;
    private String[] mArraySpinnerApp;
    private String[] mArraySpinnerAppValue;
    private String[] mArraySpinnerProfile;
    private String[] mArraySpinnerProfileValue;
    private AudioManager mAudioMgr = null;
    private Button mBtnSet;
    private String mCurrentApp;
    private String mCurrentProfile;
    private EditText mEditUlGain;
    private View mLayoutText1;
    private ArrayAdapter<String> mProfileAdatper;
    private Spinner mProfileSpinner;
    private String mStrErrorInfo;
    private TableLayout mTableLayout;
    private AudioVolumeTypeScene mTypeScene;
    private int mUlMaxIndex;
    private int mUlMaxValue;
    private int mUlMinValue;
    private int mUlValueStep;

    private void initComponents() {
        this.mLayoutText1 = findViewById(R.id.layout_text1);
        Button button = (Button) findViewById(R.id.btn_set);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        this.mAppSpinner = (Spinner) findViewById(R.id.audio_volume_spinner1);
        String category = AudioTuningJni.getCategory(CATEGORY_RECORDVOL, TYPE_APP);
        Elog.d(TAG, "strSpinner1:" + category);
        if (category == null) {
            return;
        }
        String[] strArrSplit = category.split(",");
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            return;
        }
        this.mArraySpinnerApp = new String[length];
        this.mArraySpinnerAppValue = new String[length];
        for (int i = 0; i < length; i++) {
            this.mArraySpinnerAppValue[i] = strArrSplit[i * 2];
            this.mArraySpinnerApp[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mArraySpinnerApp);
        this.mAppAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mAppSpinner.setAdapter((SpinnerAdapter) this.mAppAdatper);
        this.mCurrentApp = this.mArraySpinnerAppValue[0];
        this.mAppSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeRecord.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (AudioVolumeRecord.this.mCurrentApp != AudioVolumeRecord.this.mArraySpinnerAppValue[i2]) {
                    AudioVolumeRecord audioVolumeRecord = AudioVolumeRecord.this;
                    audioVolumeRecord.mCurrentApp = audioVolumeRecord.mArraySpinnerAppValue[i2];
                    AudioVolumeRecord.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mProfileSpinner = (Spinner) findViewById(R.id.audio_volume_spinner2);
        String category2 = AudioTuningJni.getCategory(CATEGORY_RECORDVOL, TYPE_PROFILE);
        Elog.d(TAG, "strSpinner2:" + category2);
        if (category2 == null) {
            return;
        }
        String[] strArrSplit2 = category2.split(",");
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
        this.mProfileSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeRecord.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                if (AudioVolumeRecord.this.mCurrentProfile != AudioVolumeRecord.this.mArraySpinnerProfileValue[i3]) {
                    AudioVolumeRecord audioVolumeRecord = AudioVolumeRecord.this;
                    audioVolumeRecord.mCurrentProfile = audioVolumeRecord.mArraySpinnerProfileValue[i3];
                    AudioVolumeRecord.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mTypeScene.initSceneSpinner(this, CATEGORY_RECORD);
        this.mEditUlGain = (EditText) findViewById(R.id.audio_volume_edittext1);
        findViewById(R.id.layout_text2).setVisibility(8);
        findViewById(R.id.table_title).setVisibility(8);
        findViewById(R.id.dl_table).setVisibility(8);
        initTableValue();
        updateValue();
    }

    private void initTableValue() {
        String params = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_VALUE_MAX);
        String params2 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_INDEX_MAX);
        String params3 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_INDEX_MIN);
        String params4 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_STEP);
        try {
            this.mUlMaxValue = Integer.parseInt(params);
            this.mUlMaxIndex = Integer.parseInt(params2);
            this.mUlValueStep = Integer.parseInt(params4);
            this.mUlMinValue = this.mUlMaxValue - (this.mUlValueStep * (this.mUlMaxIndex - Integer.parseInt(params3)));
            Elog.d(TAG, "Init UL gain table: mUlMaxValue " + this.mUlMaxValue + " mUlMinValue " + this.mUlMinValue + " mUlMaxIndex " + this.mUlMaxIndex + " mUlValueStep " + this.mUlValueStep);
        } catch (NumberFormatException e) {
            e.printStackTrace();
            Toast.makeText(this, "initTableValue wrong format", 1).show();
        }
    }

    private void setUlGain() {
        EditText editText = this.mEditUlGain;
        if (editText == null || editText.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_ul_gain_format);
            return;
        }
        try {
            int i = Integer.parseInt(this.mEditUlGain.getText().toString());
            if (i <= this.mUlMaxValue && i >= this.mUlMinValue) {
                if (!AudioTuningJni.setParams(CATEGORY_RECORDVOL, this.mTypeScene.getPara2String("Application," + this.mCurrentApp + "," + TYPE_PROFILE + "," + this.mCurrentProfile), UL_GAIN, String.valueOf((i - 72) / 4)) || !AudioTuningJni.saveToWork(CATEGORY_RECORDVOL)) {
                    this.mStrErrorInfo += getString(R.string.audio_volume_error_set_ul_gain);
                }
                return;
            }
            this.mStrErrorInfo += getString(R.string.audio_volume_error_ul_invalid, new Object[]{Integer.valueOf(this.mUlMinValue), Integer.valueOf(this.mUlMaxValue)});
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mStrErrorInfo += getString(R.string.audio_volume_error_ul_gain_format);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateValue() {
        String params = AudioTuningJni.getParams(CATEGORY_RECORDVOL, this.mTypeScene.getPara2String("Application," + this.mCurrentApp + "," + TYPE_PROFILE + "," + this.mCurrentProfile), UL_GAIN);
        StringBuilder sb = new StringBuilder();
        sb.append("UL gain Value:");
        sb.append(params);
        Elog.d(TAG, sb.toString());
        try {
            int i = this.mUlMaxValue - (this.mUlValueStep * (this.mUlMaxIndex - Integer.parseInt(params)));
            if (i > this.mUlMaxValue || i < this.mUlMinValue) {
                this.mLayoutText1.setVisibility(8);
            } else {
                this.mEditUlGain.setText(String.valueOf(i));
                this.mLayoutText1.setVisibility(0);
            }
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mLayoutText1.setVisibility(8);
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
            setUlGain();
            removeDialog(3);
            showDialog(3);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_volume_item);
        this.mAudioMgr = (AudioManager) getSystemService("audio");
        this.mTypeScene = new AudioVolumeTypeScene(new AudioVolumeTypeScene.Listener() { // from class: com.mediatek.engineermode.audio.AudioVolumeRecord.1
            @Override // com.mediatek.engineermode.audio.AudioVolumeTypeScene.Listener
            public void onSceneChanged() {
                AudioVolumeRecord.this.updateValue();
            }
        });
        initComponents();
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i != 3) {
            return null;
        }
        String str = this.mStrErrorInfo;
        return (str == null || str.isEmpty()) ? new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.audio_volume_set_success).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeRecord.5
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create() : new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(this.mStrErrorInfo).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeRecord.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create();
    }
}
