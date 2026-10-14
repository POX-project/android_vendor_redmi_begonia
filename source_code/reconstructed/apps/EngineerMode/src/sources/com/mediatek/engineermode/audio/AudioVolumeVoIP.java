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
public class AudioVolumeVoIP extends Activity implements View.OnClickListener {
    private static final String CATEGORY_GAINMAP = "VolumeGainMap";
    private static final String CATEGORY_VOIPV2 = "VoIPv2";
    private static final String CATEGORY_VOIPVOL = "VoIPVol";
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
    public static final String TAG = "Audio/VolumeVoIP";
    private static final String TYPE_PROFILE = "Profile";
    private static final String UL_GAIN = "ul_gain";
    private String[] mArrayDlTable;
    private ArrayList<EditText> mArrayDlText;
    private String[] mArraySpinnerProfile;
    private String[] mArraySpinnerProfileValue;
    private AudioManager mAudioMgr = null;
    private Button mBtnSet;
    private String mCurrentProfile;
    private EditText mEditUlGain;
    private View mLayoutText1;
    private ArrayAdapter<String> mProfileAdatper;
    private Spinner mProfileSpinner;
    private String mStrErrorInfo;
    private TableLayout mTableLayout;
    private TextView mTableTitleText;
    private AudioVolumeTypeScene mTypeScene;
    private int mUlMaxIndex;
    private int mUlMaxValue;
    private int mUlMinValue;
    private int mUlValueStep;

    private void initComponents() {
        this.mLayoutText1 = findViewById(R.id.layout_text1);
        this.mArrayDlText = new ArrayList<>();
        Button button = (Button) findViewById(R.id.btn_set);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        findViewById(R.id.audio_volume_spinner1).setVisibility(8);
        this.mProfileSpinner = (Spinner) findViewById(R.id.audio_volume_spinner2);
        String category = AudioTuningJni.getCategory(CATEGORY_VOIPVOL, TYPE_PROFILE);
        Elog.d(TAG, "strSpinner2:" + category);
        if (category == null) {
            return;
        }
        String[] strArrSplit = category.split(",");
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            return;
        }
        this.mArraySpinnerProfile = new String[length];
        this.mArraySpinnerProfileValue = new String[length];
        for (int i = 0; i < length; i++) {
            this.mArraySpinnerProfileValue[i] = strArrSplit[i * 2];
            this.mArraySpinnerProfile[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mArraySpinnerProfile);
        this.mProfileAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mProfileSpinner.setAdapter((SpinnerAdapter) this.mProfileAdatper);
        this.mCurrentProfile = this.mArraySpinnerProfileValue[0];
        this.mProfileSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoIP.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (AudioVolumeVoIP.this.mCurrentProfile != AudioVolumeVoIP.this.mArraySpinnerProfileValue[i2]) {
                    AudioVolumeVoIP audioVolumeVoIP = AudioVolumeVoIP.this;
                    audioVolumeVoIP.mCurrentProfile = audioVolumeVoIP.mArraySpinnerProfileValue[i2];
                    AudioVolumeVoIP.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mTypeScene.initSceneSpinner(this, CATEGORY_VOIPV2);
        this.mEditUlGain = (EditText) findViewById(R.id.audio_volume_edittext1);
        findViewById(R.id.layout_text2).setVisibility(8);
        this.mTableTitleText = (TextView) findViewById(R.id.table_title);
        this.mTableLayout = (TableLayout) findViewById(R.id.dl_table);
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
            Toast.makeText(this, "initTableValue Wrong format", 1).show();
        }
    }

    private void setDlGain() {
        String str = new String();
        for (EditText editText : this.mArrayDlText) {
            if (editText == null || editText.getText() == null) {
                this.mStrErrorInfo += getString(R.string.audio_volume_error_dl_empty);
                return;
            }
            String strTrim = editText.getText().toString().trim();
            int length = this.mArrayDlTable.length;
            int i = 0;
            while (i < length) {
                if (this.mArrayDlTable[i].equals(strTrim)) {
                    if (str.length() != 0) {
                        str = str + "," + i;
                        break;
                    }
                    str = str + i;
                    break;
                }
                i++;
            }
            if (i == length) {
                this.mStrErrorInfo += strTrim + getString(R.string.audio_volume_error_dl_invalid);
                return;
            }
        }
        if (AudioTuningJni.setParams(CATEGORY_VOIPVOL, this.mTypeScene.getPara2String("Profile," + this.mCurrentProfile), DL_GAIN, str)) {
            return;
        }
        this.mStrErrorInfo += getString(R.string.audio_volume_error_set_dl_gain);
    }

    private void setUlGain() {
        EditText editText = this.mEditUlGain;
        if (editText == null || editText.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_ul_invalid, new Object[]{Integer.valueOf(this.mUlMinValue), Integer.valueOf(this.mUlMaxValue)});
            return;
        }
        try {
            int i = Integer.parseInt(this.mEditUlGain.getText().toString());
            if (i <= this.mUlMaxValue && i >= this.mUlMinValue) {
                if (!AudioTuningJni.setParams(CATEGORY_VOIPVOL, this.mTypeScene.getPara2String("Profile," + this.mCurrentProfile), UL_GAIN, String.valueOf(this.mUlMaxIndex - ((this.mUlMaxValue - i) / this.mUlValueStep)))) {
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
        String params = AudioTuningJni.getParams(CATEGORY_VOIPVOL, this.mTypeScene.getPara2String("Profile," + this.mCurrentProfile), UL_GAIN);
        Elog.d(TAG, "UL gain Value:" + params);
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
        this.mArrayDlTable = AudioTuningJni.getParams(CATEGORY_GAINMAP, this.mTypeScene.getPara2String("Profile," + this.mCurrentProfile), DL_MAP).split(",");
        String params2 = AudioTuningJni.getParams(CATEGORY_VOIPVOL, this.mTypeScene.getPara2String("Profile," + this.mCurrentProfile), DL_GAIN);
        this.mArrayDlText.clear();
        this.mTableLayout.removeAllViews();
        if (params2 == null) {
            this.mTableTitleText.setVisibility(8);
            return;
        }
        this.mTableTitleText.setVisibility(0);
        String[] strArrSplit = params2.split(",");
        int length = strArrSplit.length;
        for (int i2 = 0; i2 < length; i2++) {
            TableRow tableRow = new TableRow(this);
            TextView textView = new TextView(this);
            EditText editText = new EditText(this);
            textView.setText("Index " + i2);
            try {
                editText.setText(this.mArrayDlTable[Integer.parseInt(strArrSplit[i2])]);
                editText.setInputType(2);
                textView.setPadding(0, 3, 3, 3);
                editText.setPadding(20, 3, 3, 3);
                this.mArrayDlText.add(editText);
                tableRow.addView(textView);
                tableRow.addView(editText);
                this.mTableLayout.addView(tableRow);
            } catch (NumberFormatException e2) {
                e2.printStackTrace();
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
            setDlGain();
            setUlGain();
            if (!AudioTuningJni.saveToWork(CATEGORY_VOIPVOL)) {
                this.mStrErrorInfo += getString(R.string.audio_volume_error_save_xml);
            }
            removeDialog(3);
            showDialog(3);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_volume_item);
        this.mAudioMgr = (AudioManager) getSystemService("audio");
        this.mTypeScene = new AudioVolumeTypeScene(new AudioVolumeTypeScene.Listener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoIP.1
            @Override // com.mediatek.engineermode.audio.AudioVolumeTypeScene.Listener
            public void onSceneChanged() {
                AudioVolumeVoIP.this.updateValue();
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
        return (str == null || str.isEmpty()) ? new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.audio_volume_set_success).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoIP.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create() : new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(this.mStrErrorInfo).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoIP.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create();
    }
}
