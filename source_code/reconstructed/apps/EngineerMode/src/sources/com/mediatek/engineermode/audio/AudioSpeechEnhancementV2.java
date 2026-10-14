package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.media.AudioManager;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class AudioSpeechEnhancementV2 extends Activity implements View.OnClickListener {
    private static final String CMD_GET_COMMON_PARAMETER = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para";
    private static final String CMD_GET_DEBUG_INFO = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info";
    private static final String CMD_GET_LIST_PREFIX = "APP_GET_CATEGORY=";
    private static final String CMD_GET_MODE_LIST = "APP_GET_CATEGORY=Speech#Band";
    private static final String CMD_GET_PARAMETER = "APP_GET_PARAM=Speech#Band,%s,Profile,%s,VolIndex,%s,Network,GSM#speech_mode_para";
    private static final String CMD_GET_PARAMETER_LIST = "APP_GET_CATEGORY=Speech#Profile";
    private static final String CMD_GET_VOLINDEX_LIST = "APP_GET_CATEGORY=Speech#VolIndex";
    private static final String CMD_PREFIX = "APP_GET_PARAM=";
    private static final String CMD_SET_COMMON_PARAMETER = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#";
    private static final String CMD_SET_DEBUG_INFO = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#";
    private static final String CMD_SET_PARAMETER = "APP_SET_PARAM=Speech#Band,%s,Profile,%s,VolIndex,%s,Network,GSM#speech_mode_para#";
    private static final String CMD_SPH_PARSER_SET = "SPH_PARSER_SET_PARAM,PHONE_CALL,TestMode,";
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int DIALOG_GET_DATA_ERROR = 1;
    private static final int DIALOG_GET_WBDATA_ERROR = 2;
    private static final int DIALOG_SET_SE_ERROR = 4;
    private static final int DIALOG_SET_SE_SUCCESS = 3;
    private static final int DIALOG_SET_WB_ERROR = 6;
    private static final int DIALOG_SET_WB_SUCCESS = 5;
    private static final int INDEX_COMMON = 0;
    private static final int INDEX_DEBUG = 1;
    private static final int INDEX_DEBUGMODE_DEFAULT = 0;
    private static final String PARAM_DEVIDER = "#";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    public static final String TAG = "Audio/SpeechEnhancement2";
    private static final String VERSION_DEVIDER = "=";
    private MyAdapter mAdapter;
    private AudioManager mAudioManager;
    private Button mBtnSet;
    private ListView mList;
    private ArrayAdapter<String> mModeAdatper;
    private int mModeIndex;
    private Spinner mModeSpinner;
    private ArrayAdapter<String> mParaAdatper;
    private int mParaIndex;
    private Spinner mParaSpinner;
    private String[] mParserEntries;
    private ArrayAdapter<String> mVolumeAdatper;
    private int mVolumeIndex;
    private Spinner mVolumeSpinner;
    private List<String> mModeEntries = new ArrayList();
    private List<String> mModeEntryValues = new ArrayList();
    private List<String> mParaEntries = new ArrayList();
    private List<String> mParaEntryValues = new ArrayList();
    private List<String> mVolumeEntries = new ArrayList();
    private List<String> mVolumeEntryValues = new ArrayList();
    private List<String> mParameters = new ArrayList();
    private List<View> mParameterViews = new ArrayList();
    private Map<String, String> mParserMap = new HashMap();

    private class MyAdapter extends ArrayAdapter<String> {

        private class ViewHolder {
            public EditText editor;
            public TextView label;

            private ViewHolder() {
            }
        }

        public MyAdapter(Context context) {
            super(context, 0);
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(final int i, View view, ViewGroup viewGroup) {
            final ViewHolder viewHolder;
            LayoutInflater layoutInflater = AudioSpeechEnhancementV2.this.getLayoutInflater();
            View viewInflate = (View) AudioSpeechEnhancementV2.this.mParameterViews.get(i);
            if (viewInflate == null) {
                viewInflate = layoutInflater.inflate(R.layout.audio_speechenhancement_entry, (ViewGroup) null);
                viewHolder = new ViewHolder();
                viewHolder.label = (TextView) viewInflate.findViewById(R.id.label);
                viewHolder.editor = (EditText) viewInflate.findViewById(R.id.editor);
                viewInflate.setTag(viewHolder);
                AudioSpeechEnhancementV2.this.mParameterViews.set(i, viewInflate);
            } else {
                viewHolder = (ViewHolder) viewInflate.getTag();
            }
            viewHolder.editor.addTextChangedListener(new TextWatcher() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.MyAdapter.1
                @Override // android.text.TextWatcher
                public void afterTextChanged(Editable editable) {
                    if (i >= AudioSpeechEnhancementV2.this.mParameters.size() || viewHolder.editor.getText() == null) {
                        return;
                    }
                    AudioSpeechEnhancementV2.this.mParameters.set(i, viewHolder.editor.getText().toString());
                }

                @Override // android.text.TextWatcher
                public void beforeTextChanged(CharSequence charSequence, int i2, int i3, int i4) {
                }

                @Override // android.text.TextWatcher
                public void onTextChanged(CharSequence charSequence, int i2, int i3, int i4) {
                }
            });
            viewHolder.label.setText("Index " + i);
            viewHolder.editor.setText(String.valueOf(getItem(i)));
            return viewInflate;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getParameters(String str) {
        if (Audio.AudioTuningVer.VER_2_2 == Audio.getAudioTuningVer()) {
            String strSubstring = str.substring(str.indexOf(VERSION_DEVIDER) + 1);
            String[] strArrSplit = strSubstring.split(PARAM_DEVIDER);
            String category = null;
            if (strArrSplit.length == 3) {
                category = AudioTuningJni.getParams(strArrSplit[0], strArrSplit[1], strArrSplit[2]);
            } else if (strArrSplit.length == 2) {
                category = AudioTuningJni.getCategory(strArrSplit[0], strArrSplit[1]);
            } else {
                Elog.i(TAG, "error parameter");
            }
            Elog.i(TAG, "getParameters " + strSubstring + " return " + category);
            return category;
        }
        String parameters = this.mAudioManager.getParameters(str);
        Elog.i(TAG, "getParameters " + str + " return " + parameters);
        int length = CMD_PREFIX.length();
        if (CMD_GET_MODE_LIST.equals(str) || CMD_GET_PARAMETER_LIST.equals(str) || CMD_GET_VOLINDEX_LIST.equals(str)) {
            length = CMD_GET_LIST_PREFIX.length();
        }
        if (parameters != null && parameters.length() > length) {
            parameters = parameters.substring(length);
        }
        Elog.i(TAG, "getParameters return " + parameters);
        return parameters;
    }

    private boolean handleModeList(String str) {
        if (str == null) {
            return false;
        }
        String[] strArrSplit = str.split(",");
        if (strArrSplit.length <= 0 || strArrSplit.length % 2 != 0) {
            return false;
        }
        this.mModeEntries.clear();
        this.mModeEntryValues.clear();
        this.mModeEntries.add("Common Parameter");
        this.mModeEntries.add("Debug Info");
        this.mModeEntryValues.add("");
        this.mModeEntryValues.add("");
        for (int i = 0; i < strArrSplit.length; i++) {
            if (i % 2 == 0) {
                this.mModeEntryValues.add(strArrSplit[i]);
            } else {
                this.mModeEntries.add(strArrSplit[i]);
            }
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mModeEntries);
        this.mModeAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mModeSpinner.setAdapter((SpinnerAdapter) this.mModeAdatper);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleParameterList(String str) {
        if (str == null) {
            return false;
        }
        String[] strArrSplit = str.split(",");
        if (strArrSplit.length <= 0 || strArrSplit.length % 2 != 0) {
            return false;
        }
        this.mParaEntries.clear();
        this.mParaEntryValues.clear();
        for (int i = 0; i < strArrSplit.length; i++) {
            if (i % 2 == 0) {
                this.mParaEntryValues.add(strArrSplit[i]);
            } else {
                this.mParaEntries.add(strArrSplit[i]);
            }
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mParaEntries);
        this.mParaAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mParaSpinner.setAdapter((SpinnerAdapter) this.mParaAdatper);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleParameters(String str) {
        String string;
        if (str == null) {
            return;
        }
        String[] strArrSplit = str.split(",");
        this.mParameters.clear();
        this.mParameterViews.clear();
        for (String str2 : strArrSplit) {
            if (str2 == null || str2.length() <= 2) {
                string = "ERROR";
            } else {
                try {
                    string = Long.valueOf(str2.substring(2), 16).toString();
                } catch (NumberFormatException e) {
                    string = "ERROR";
                }
            }
            this.mParameters.add(string);
            this.mParameterViews.add(null);
        }
        this.mAdapter.clear();
        this.mAdapter.addAll(this.mParameters);
    }

    private boolean handleVolindexList(String str) {
        if (str == null) {
            return false;
        }
        String[] strArrSplit = str.split(",");
        if (strArrSplit.length <= 0 || strArrSplit.length % 2 != 0) {
            return false;
        }
        this.mVolumeEntries.clear();
        this.mVolumeEntryValues.clear();
        for (int i = 0; i < strArrSplit.length; i++) {
            if (i % 2 == 0) {
                this.mVolumeEntryValues.add(strArrSplit[i]);
            } else {
                this.mVolumeEntries.add(strArrSplit[i]);
            }
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.mVolumeEntries);
        this.mVolumeAdatper = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mVolumeSpinner.setAdapter((SpinnerAdapter) this.mVolumeAdatper);
        return true;
    }

    private void initComponents() {
        this.mAudioManager = (AudioManager) getSystemService("audio");
        this.mModeSpinner = (Spinner) findViewById(R.id.Audio_SpEnhancement_ModeType);
        this.mParaSpinner = (Spinner) findViewById(R.id.Audio_SpEnhancement_ParaType);
        this.mVolumeSpinner = (Spinner) findViewById(R.id.Audio_SpEnhancement_Vol_spin);
        this.mList = (ListView) findViewById(R.id.Audio_SpEnhancement_ListView);
        MyAdapter myAdapter = new MyAdapter(this);
        this.mAdapter = myAdapter;
        this.mList.setAdapter((ListAdapter) myAdapter);
        Button button = (Button) findViewById(R.id.Audio_SpEnhancement_Button);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        if (!handleModeList(getParameters(CMD_GET_MODE_LIST))) {
            Toast.makeText(this, "Wrong format", 0).show();
        }
        if (!handleVolindexList(getParameters(CMD_GET_VOLINDEX_LIST))) {
            Toast.makeText(this, "Wrong format", 0).show();
        }
        this.mVolumeSpinner.setVisibility(8);
        this.mModeSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                AudioSpeechEnhancementV2.this.mModeIndex = i;
                int i2 = AudioSpeechEnhancementV2.this.mModeIndex;
                if (i2 == 0) {
                    AudioSpeechEnhancementV2 audioSpeechEnhancementV2 = AudioSpeechEnhancementV2.this;
                    audioSpeechEnhancementV2.handleParameters(audioSpeechEnhancementV2.getParameters(AudioSpeechEnhancementV2.CMD_GET_COMMON_PARAMETER));
                    AudioSpeechEnhancementV2.this.mParaSpinner.setVisibility(8);
                    AudioSpeechEnhancementV2.this.mVolumeSpinner.setVisibility(8);
                    return;
                }
                if (i2 == 1) {
                    AudioSpeechEnhancementV2 audioSpeechEnhancementV3 = AudioSpeechEnhancementV2.this;
                    audioSpeechEnhancementV3.handleParameters(audioSpeechEnhancementV3.getParameters(AudioSpeechEnhancementV2.CMD_GET_DEBUG_INFO));
                    AudioSpeechEnhancementV2.this.mParaSpinner.setVisibility(8);
                    AudioSpeechEnhancementV2.this.mVolumeSpinner.setVisibility(8);
                    return;
                }
                AudioSpeechEnhancementV2 audioSpeechEnhancementV4 = AudioSpeechEnhancementV2.this;
                if (audioSpeechEnhancementV4.handleParameterList(audioSpeechEnhancementV4.getParameters(AudioSpeechEnhancementV2.CMD_GET_PARAMETER_LIST))) {
                    AudioSpeechEnhancementV2.this.mParaSpinner.setVisibility(0);
                    AudioSpeechEnhancementV2.this.mVolumeSpinner.setVisibility(0);
                } else {
                    Toast.makeText(AudioSpeechEnhancementV2.this, "Wrong format", 0).show();
                    AudioSpeechEnhancementV2.this.mParaSpinner.setVisibility(8);
                    AudioSpeechEnhancementV2.this.mVolumeSpinner.setVisibility(8);
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.i(AudioSpeechEnhancementV2.TAG, "do noting...");
            }
        });
        this.mParaSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                AudioSpeechEnhancementV2.this.mParaIndex = i;
                String str = String.format(AudioSpeechEnhancementV2.CMD_GET_PARAMETER, AudioSpeechEnhancementV2.this.mModeEntryValues.get(AudioSpeechEnhancementV2.this.mModeIndex), AudioSpeechEnhancementV2.this.mParaEntryValues.get(AudioSpeechEnhancementV2.this.mParaIndex), AudioSpeechEnhancementV2.this.mVolumeEntryValues.get(AudioSpeechEnhancementV2.this.mVolumeIndex));
                Elog.d(AudioSpeechEnhancementV2.TAG, "cmd= " + str);
                AudioSpeechEnhancementV2 audioSpeechEnhancementV2 = AudioSpeechEnhancementV2.this;
                audioSpeechEnhancementV2.handleParameters(audioSpeechEnhancementV2.getParameters(str));
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.i(AudioSpeechEnhancementV2.TAG, "do noting...");
            }
        });
        this.mVolumeSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.3
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
                AudioSpeechEnhancementV2.this.mVolumeIndex = i;
                String str = String.format(AudioSpeechEnhancementV2.CMD_GET_PARAMETER, AudioSpeechEnhancementV2.this.mModeEntryValues.get(AudioSpeechEnhancementV2.this.mModeIndex), AudioSpeechEnhancementV2.this.mParaEntryValues.get(AudioSpeechEnhancementV2.this.mParaIndex), AudioSpeechEnhancementV2.this.mVolumeEntryValues.get(AudioSpeechEnhancementV2.this.mVolumeIndex));
                Elog.d(AudioSpeechEnhancementV2.TAG, "cmd= " + str);
                AudioSpeechEnhancementV2 audioSpeechEnhancementV2 = AudioSpeechEnhancementV2.this;
                audioSpeechEnhancementV2.handleParameters(audioSpeechEnhancementV2.getParameters(str));
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
                Elog.i(AudioSpeechEnhancementV2.TAG, "do noting...");
            }
        });
    }

    private void setDebugInfoIndex10Param() {
        Elog.v(TAG, "setDebugInfoIndex10Param");
        try {
            int i = Integer.parseInt(this.mParameters.get(10));
            if (i < 0 || i >= this.mParserEntries.length) {
                return;
            }
            String str = this.mParserEntries[i];
            this.mAudioManager.setParameters(CMD_SPH_PARSER_SET + str);
            Elog.i(TAG, "setDebugInfoIndex10Param " + str);
        } catch (NumberFormatException e) {
            Toast.makeText(this, "Wrong format", 0).show();
        }
    }

    private void setParameters(String str) {
        if (Audio.AudioTuningVer.VER_2_2 != Audio.getAudioTuningVer()) {
            this.mAudioManager.setParameters(str);
        } else {
            str = str.substring(str.indexOf(VERSION_DEVIDER) + 1);
            String[] strArrSplit = str.split(PARAM_DEVIDER);
            if (strArrSplit.length == 4) {
                AudioTuningJni.setParams(strArrSplit[0], strArrSplit[1], strArrSplit[2], strArrSplit[3]);
                AudioTuningJni.saveToWork(strArrSplit[0]);
            }
        }
        Elog.i(TAG, "setParameters " + str);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String str;
        if (view.equals(this.mBtnSet)) {
            if (!FeatureSupport.isEngLoad()) {
                String parameters = this.mAudioManager.getParameters(CUST_XML_PARAM);
                if (parameters == null || !RESULT_SUPPORT.equals(parameters)) {
                    Elog.d(TAG, "set CUST_XML_PARAM = 1");
                    this.mAudioManager.setParameters(CUST_XML_SET_SUPPORT_PARAM);
                    AudioTuningJni.CustXmlEnableChanged(1);
                } else {
                    Elog.d(TAG, "get CUST_XML_PARAM = 1");
                }
            }
            int i = this.mModeIndex;
            if (i == 0) {
                str = CMD_SET_COMMON_PARAMETER;
            } else if (i == 1) {
                setDebugInfoIndex10Param();
                str = CMD_SET_DEBUG_INFO;
            } else if (this.mModeEntryValues.size() <= 0 || this.mParaEntryValues.size() <= 0) {
                return;
            } else {
                str = String.format(CMD_SET_PARAMETER, this.mModeEntryValues.get(this.mModeIndex), this.mParaEntryValues.get(this.mParaIndex), this.mVolumeEntryValues.get(this.mVolumeIndex));
            }
            Iterator<String> it = this.mParameters.iterator();
            while (it.hasNext()) {
                try {
                    str = str + "0x" + Long.toString(Long.parseLong(it.next()), 16) + ",";
                } catch (NumberFormatException e) {
                    Toast.makeText(this, "Wrong format", 0).show();
                    return;
                }
            }
            setParameters(str.substring(0, str.length() - 1));
            Toast.makeText(this, "Set parameter done", 0).show();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_speechenhancement_new);
        initComponents();
        this.mParserEntries = getResources().getStringArray(R.array.speech_enhance_parser);
        int i = 0;
        while (true) {
            String[] strArr = this.mParserEntries;
            if (i >= strArr.length) {
                return;
            }
            this.mParserMap.put(strArr[i], String.valueOf(i));
            i++;
        }
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        switch (i) {
            case 1:
                return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.4
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        AudioSpeechEnhancementV2.this.finish();
                    }
                }).setNegativeButton(android.R.string.cancel, (DialogInterface.OnClickListener) null).create();
            case 2:
                return new AlertDialog.Builder(this).setTitle(R.string.get_wbdata_error_title).setMessage(R.string.get_wbdata_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechEnhancementV2.5
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        AudioSpeechEnhancementV2.this.finish();
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
