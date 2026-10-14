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
public class AudioVolumeVoice extends Activity implements View.OnClickListener {
    private static final String CATEGORY_GAINMAP = "VolumeGainMap";
    private static final String CATEGORY_SPEECHVOL = "SpeechVol";
    private static final String CATEGORY_VOLUME = "Volume";
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int DIALOG_INIT_FAIL = 4;
    private static final int DIALOG_RESULT = 3;
    private static final String DL_GAIN = "dl_gain";
    private static final String DL_MAP = "dl_total_gain_decimal";
    private static final String LIST_DIVIDER = ",";
    private static final String PARAM2 = "Band,%1$s,Profile,%2$s";
    private static final String PARAM2_NEW = "Band,%1$s,Profile,%2$s,Network,%3$s";
    private static final String PARAM_COMMON = "VolumeParam,Common";
    private static final String PARAM_STF_LIST = "stf_gain_field";
    private static final String PARAM_STF_STEP = "dec_stf_step_per_db";
    private static final String PARAM_STF_VALUE_MAX = "dec_stf_max";
    private static final String PARAM_UL_INDEX_MAX = "mic_idx_range_max";
    private static final String PARAM_UL_INDEX_MIN = "mic_idx_range_min";
    private static final String PARAM_UL_STEP = "dec_rec_step_per_db";
    private static final String PARAM_UL_VALUE_MAX = "dec_rec_max";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    private static final String STF_GAIN = "stf_gain";
    private static final int STF_MAX = 240;
    private static final int STF_MIN = 0;
    public static final String TAG = "Audio/VolumeVoice";
    private static final String TYPE_BAND = "Band";
    private static final String TYPE_NETWORK = "Network";
    private static final String TYPE_PROFILE = "Profile";
    private static final String UL_GAIN = "ul_gain";
    private String[] mArrayDlTable;
    private ArrayList<EditText> mArrayDlText;
    private String[] mArraySpinnerBand;
    private String[] mArraySpinnerBandValue;
    private String[] mArraySpinnerProfile;
    private String[] mArraySpinnerProfileValue;
    private AudioManager mAudioMgr = null;
    private ArrayAdapter<String> mBandAdatper;
    private Spinner mBandSpinner;
    private Button mBtnSet;
    private String mCurrentBand;
    private String mCurrentNetwork;
    private String mCurrentProfile;
    private EditText mEditStfGain;
    private EditText mEditUlGain;
    private View mLayoutText1;
    private View mLayoutText2;
    private Spinner mNetworkSpinner;
    private ArrayAdapter<String> mProfileAdatper;
    private Spinner mProfileSpinner;
    private boolean mStfAscending;
    private int mStfIndexStep;
    private int mStfMaxIndex;
    private int mStfMaxValue;
    private int mStfMinValue;
    private int mStfValueStep;
    private String mStrErrorInfo;
    private TableLayout mTableLayout;
    private TextView mTableTitleText;
    private AudioVolumeTypeScene mTypeScene;
    private int mUlMaxIndex;
    private int mUlMaxValue;
    private int mUlMinValue;
    private int mUlValueStep;

    private String getParam2() {
        String str = this.mCurrentNetwork;
        return str == null ? String.format(PARAM2, this.mCurrentBand, this.mCurrentProfile) : String.format(PARAM2_NEW, this.mCurrentBand, this.mCurrentProfile, str);
    }

    private void initComponents() {
        this.mLayoutText1 = findViewById(R.id.layout_text1);
        this.mLayoutText2 = findViewById(R.id.layout_text2);
        this.mArrayDlText = new ArrayList<>();
        Button button = (Button) findViewById(R.id.btn_set);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        this.mBandSpinner = (Spinner) findViewById(R.id.audio_volume_spinner1);
        String category = AudioTuningJni.getCategory(CATEGORY_SPEECHVOL, TYPE_BAND);
        Elog.d(TAG, "strSpinner1:" + category);
        if (category == null) {
            return;
        }
        String[] strArrSplit = category.split(LIST_DIVIDER);
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            return;
        }
        this.mArraySpinnerBand = new String[length];
        this.mArraySpinnerBandValue = new String[length];
        for (int i = 0; i < length; i++) {
            this.mArraySpinnerBandValue[i] = strArrSplit[i * 2];
            this.mArraySpinnerBand[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mArraySpinnerBand);
        this.mBandAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mBandSpinner.setAdapter((SpinnerAdapter) this.mBandAdatper);
        this.mCurrentBand = this.mArraySpinnerBandValue[0];
        this.mBandSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                if (AudioVolumeVoice.this.mCurrentBand != AudioVolumeVoice.this.mArraySpinnerBandValue[i2]) {
                    AudioVolumeVoice audioVolumeVoice = AudioVolumeVoice.this;
                    audioVolumeVoice.mCurrentBand = audioVolumeVoice.mArraySpinnerBandValue[i2];
                    AudioVolumeVoice.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mProfileSpinner = (Spinner) findViewById(R.id.audio_volume_spinner2);
        String category2 = AudioTuningJni.getCategory(CATEGORY_SPEECHVOL, TYPE_PROFILE);
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
        this.mProfileSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i3, long j) {
                if (AudioVolumeVoice.this.mCurrentProfile != AudioVolumeVoice.this.mArraySpinnerProfileValue[i3]) {
                    AudioVolumeVoice audioVolumeVoice = AudioVolumeVoice.this;
                    audioVolumeVoice.mCurrentProfile = audioVolumeVoice.mArraySpinnerProfileValue[i3];
                    AudioVolumeVoice.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        initNetworkSpinner();
        this.mTypeScene.initSceneSpinner(this, CATEGORY_SPEECHVOL);
        this.mEditUlGain = (EditText) findViewById(R.id.audio_volume_edittext1);
        this.mEditStfGain = (EditText) findViewById(R.id.audio_volume_edittext2);
        this.mTableTitleText = (TextView) findViewById(R.id.table_title);
        this.mTableLayout = (TableLayout) findViewById(R.id.dl_table);
        initTableValue();
        updateValue();
    }

    private boolean initNetworkSpinner() {
        this.mNetworkSpinner = (Spinner) findViewById(R.id.audio_volume_spinner3);
        String category = AudioTuningJni.getCategory(CATEGORY_SPEECHVOL, TYPE_NETWORK);
        Elog.d(TAG, "strSpinner3:" + category);
        if (category == null) {
            return false;
        }
        String[] strArrSplit = category.split(LIST_DIVIDER);
        int length = strArrSplit.length / 2;
        if (length <= 0) {
            return false;
        }
        String[] strArr = new String[length];
        final String[] strArr2 = new String[length];
        for (int i = 0; i < length; i++) {
            strArr2[i] = strArrSplit[i * 2];
            strArr[i] = strArrSplit[(i * 2) + 1];
        }
        ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, strArr);
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mNetworkSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
        this.mCurrentNetwork = strArr2[0];
        this.mNetworkSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.4
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i2, long j) {
                String str = AudioVolumeVoice.this.mCurrentNetwork;
                String[] strArr3 = strArr2;
                if (str != strArr3[i2]) {
                    AudioVolumeVoice.this.mCurrentNetwork = strArr3[i2];
                    AudioVolumeVoice.this.updateValue();
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        this.mNetworkSpinner.setVisibility(0);
        return true;
    }

    private void initTableValue() {
        try {
            String params = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_VALUE_MAX);
            String params2 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_INDEX_MAX);
            String params3 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_INDEX_MIN);
            String params4 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_UL_STEP);
            this.mUlMaxValue = Integer.parseInt(params);
            this.mUlMaxIndex = Integer.parseInt(params2);
            this.mUlValueStep = Integer.parseInt(params4);
            this.mUlMinValue = this.mUlMaxValue - (this.mUlValueStep * (this.mUlMaxIndex - Integer.parseInt(params3)));
            Elog.d(TAG, "Init UL gain table: mUlMaxValue " + this.mUlMaxValue + " mUlMinValue " + this.mUlMinValue + " mUlMaxIndex " + this.mUlMaxIndex + " mUlValueStep " + this.mUlValueStep);
            String params5 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_STF_VALUE_MAX);
            String params6 = AudioTuningJni.getParams(CATEGORY_VOLUME, PARAM_COMMON, PARAM_STF_STEP);
            String[] strArrSplit = AudioTuningJni.getChecklist(CATEGORY_SPEECHVOL, STF_GAIN, PARAM_STF_LIST).trim().split(LIST_DIVIDER);
            if (strArrSplit.length >= 3) {
                params2 = strArrSplit[0];
            } else {
                removeDialog(4);
                showDialog(4);
            }
            this.mStfMaxValue = Integer.parseInt(params5);
            this.mStfMaxIndex = Integer.parseInt(params2);
            this.mStfValueStep = Integer.parseInt(params6);
            int i = Integer.parseInt(strArrSplit[2]);
            this.mStfAscending = this.mStfMaxIndex < i;
            this.mStfIndexStep = Math.abs(this.mStfMaxIndex - i);
            this.mStfMinValue = this.mStfMaxValue - (this.mStfValueStep * Math.abs(this.mStfMaxIndex - Integer.parseInt(strArrSplit[strArrSplit.length - 2])));
            Elog.d(TAG, "Init Stf gain table: mStfMaxValue " + this.mStfMaxValue + " mStfMinValue " + this.mStfMinValue + " mStfMaxIndex " + this.mStfMaxIndex + " mStfValueStep " + this.mStfValueStep + " mStfIndexStep " + this.mStfIndexStep);
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
                        str = str + LIST_DIVIDER + i;
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
        if (AudioTuningJni.setParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), DL_GAIN, str)) {
            return;
        }
        this.mStrErrorInfo += getString(R.string.audio_volume_error_set_dl_gain);
    }

    private void setStfGain() {
        if (this.mEditStfGain.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_stf_gain_format);
            return;
        }
        try {
            int i = Integer.parseInt(this.mEditStfGain.getText().toString());
            if (i <= this.mStfMaxValue && i >= this.mStfMinValue) {
                int i2 = (((this.mStfMaxValue - i) / this.mStfValueStep) / this.mStfIndexStep) * this.mStfIndexStep;
                if (!AudioTuningJni.setParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), STF_GAIN, String.valueOf(this.mStfAscending ? this.mStfMaxIndex + i2 : this.mStfMaxIndex - i2))) {
                    this.mStrErrorInfo += getString(R.string.audio_volume_error_set_stf_gain);
                }
                return;
            }
            this.mStrErrorInfo += getString(R.string.audio_volume_error_stf_invalid, new Object[]{Integer.valueOf(this.mStfMinValue), Integer.valueOf(this.mStfMaxValue)});
        } catch (NumberFormatException e) {
            e.printStackTrace();
            this.mStrErrorInfo += getString(R.string.audio_volume_error_stf_gain_format);
        }
    }

    private void setUlGain() {
        if (this.mEditUlGain.getText() == null) {
            this.mStrErrorInfo += getString(R.string.audio_volume_error_ul_gain_format);
            return;
        }
        try {
            int i = Integer.parseInt(this.mEditUlGain.getText().toString());
            if (i <= this.mUlMaxValue && i >= this.mUlMinValue) {
                if (!AudioTuningJni.setParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), UL_GAIN, String.valueOf(this.mUlMaxIndex - ((this.mUlMaxValue - i) / this.mUlValueStep)))) {
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
        String params = AudioTuningJni.getParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), UL_GAIN);
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
        String params2 = AudioTuningJni.getParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), STF_GAIN);
        Elog.d(TAG, "STF gain Value:" + params2);
        try {
            int iAbs = this.mStfMaxValue - (this.mStfValueStep * Math.abs(this.mStfMaxIndex - Integer.parseInt(params2)));
            if (iAbs > this.mStfMaxValue || iAbs < this.mStfMinValue) {
                this.mLayoutText2.setVisibility(8);
            } else {
                this.mEditStfGain.setText(String.valueOf(iAbs));
                this.mLayoutText2.setVisibility(0);
            }
        } catch (NumberFormatException e2) {
            e2.printStackTrace();
            this.mLayoutText2.setVisibility(8);
        }
        this.mArrayDlTable = AudioTuningJni.getParams(CATEGORY_GAINMAP, "Profile," + this.mCurrentProfile, DL_MAP).split(LIST_DIVIDER);
        String params3 = AudioTuningJni.getParams(CATEGORY_SPEECHVOL, this.mTypeScene.getPara2String(getParam2()), DL_GAIN);
        this.mArrayDlText.clear();
        this.mTableLayout.removeAllViews();
        if (params3 == null) {
            this.mTableTitleText.setVisibility(8);
            return;
        }
        this.mTableTitleText.setVisibility(0);
        String[] strArrSplit = params3.split(LIST_DIVIDER);
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
            setDlGain();
            setUlGain();
            setStfGain();
            if (!AudioTuningJni.saveToWork(CATEGORY_SPEECHVOL)) {
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
        this.mTypeScene = new AudioVolumeTypeScene(new AudioVolumeTypeScene.Listener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.1
            @Override // com.mediatek.engineermode.audio.AudioVolumeTypeScene.Listener
            public void onSceneChanged() {
                AudioVolumeVoice.this.updateValue();
            }
        });
        initComponents();
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 3) {
            String str = this.mStrErrorInfo;
            return (str == null || str.isEmpty()) ? new AlertDialog.Builder(this).setTitle(R.string.set_success_title).setMessage(R.string.audio_volume_set_success).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.6
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                }
            }).create() : new AlertDialog.Builder(this).setTitle(R.string.set_error_title).setMessage(this.mStrErrorInfo).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.5
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                }
            }).create();
        }
        if (i != 4) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(R.string.init_error_title).setMessage(R.string.init_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioVolumeVoice.7
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
            }
        }).create();
    }
}
