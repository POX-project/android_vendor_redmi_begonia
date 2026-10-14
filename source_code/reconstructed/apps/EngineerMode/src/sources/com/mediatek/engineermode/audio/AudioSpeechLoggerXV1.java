package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.media.AudioSystem;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AudioSpeechLoggerXV1 extends Activity {
    private static final String ANC_DOWN_SAMPLE = "downSample";
    private static final String ANC_NO_DOWN_SAMPLE = "noDownSample";
    public static final String ANC_STATUS = "anc_status";
    private static final int CONSTANT_0XFF = 255;
    private static final int CONSTANT_256 = 256;
    private static final int DATA_SIZE = 1444;
    private static final int DIALOG_GET_DATA_ERROR = 0;
    private static final int DIALOG_ID_NO_SDCARD = 1;
    private static final int DIALOG_ID_SDCARD_BUSY = 2;
    private static final int ENABLE_ANC_DOWN_SAMPLE = 1;
    private static final int ENABLE_ANC_NO_DOWN_SAMPLE = 0;
    public static final String ENGINEER_MODE_PREFERENCE = "engineermode_audiolog_preferences";
    public static final String EPL_STATUS = "epl_status";
    private static final int GET_DUMP_AP_SPEECH_EPL = 161;
    private static final int GET_SPEECH_ANC_LOG_STATUS = 181;
    private static final int GET_SPEECH_ANC_SUPPORT = 176;
    private static final int SET_DUMP_AP_SPEECH_EPL = 160;
    private static final int SET_DUMP_SPEECH_DEBUG_INFO = 97;
    private static final int SET_SPEECH_ANC_DISABLE = 180;
    private static final int SET_SPEECH_ANC_LOG_STATUS = 179;
    private static final int SET_SPEECH_VM_ENABLE = 96;
    public static final String TAG = "Audio/SpeechLogger1";
    private static final int VM_LOG_POS = 1440;
    private CheckBox mCbAncLogger;
    private CheckBox mCbCtm4Way;
    private CheckBox mCbEplDebug;
    private CheckBox mCbMagiConf;
    private CheckBox mCbSpeechLogger;
    private byte[] mData;
    private RadioButton mRbEpl;
    private RadioButton mRbNormalVm;
    private RadioGroup mRgAnc;
    private int mVmLogState = 0;
    private boolean mForRefresh = false;
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV1.1
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            SharedPreferences.Editor editorEdit = AudioSpeechLoggerXV1.this.getSharedPreferences("engineermode_audiolog_preferences", 0).edit();
            if (compoundButton.equals(AudioSpeechLoggerXV1.this.mCbSpeechLogger)) {
                AudioSpeechLoggerXV1.this.onClickSpeechLogger(editorEdit, z);
                return;
            }
            if (compoundButton.equals(AudioSpeechLoggerXV1.this.mCbCtm4Way)) {
                if (z) {
                    byte[] bArr = AudioSpeechLoggerXV1.this.mData;
                    bArr[AudioSpeechLoggerXV1.VM_LOG_POS] = (byte) (bArr[AudioSpeechLoggerXV1.VM_LOG_POS] | 2);
                    AudioSpeechLoggerXV1.access$476(AudioSpeechLoggerXV1.this, 2);
                    Elog.d(AudioSpeechLoggerXV1.TAG, "E mVmLogState " + AudioSpeechLoggerXV1.this.mVmLogState);
                } else {
                    byte[] bArr2 = AudioSpeechLoggerXV1.this.mData;
                    bArr2[AudioSpeechLoggerXV1.VM_LOG_POS] = (byte) (bArr2[AudioSpeechLoggerXV1.VM_LOG_POS] & (-3));
                    AudioSpeechLoggerXV1.access$472(AudioSpeechLoggerXV1.this, -3);
                    Elog.d(AudioSpeechLoggerXV1.TAG, "D mVmLogState " + AudioSpeechLoggerXV1.this.mVmLogState);
                }
                int emParameter = AudioTuningJni.setEmParameter(AudioSpeechLoggerXV1.this.mData, AudioSpeechLoggerXV1.DATA_SIZE);
                if (emParameter == 0 || emParameter == -38) {
                    return;
                }
                Elog.i(AudioSpeechLoggerXV1.TAG, "set CTM4WAY parameter failed");
                Toast.makeText(AudioSpeechLoggerXV1.this, R.string.set_failed_tip, 1).show();
                return;
            }
            if (compoundButton.equals(AudioSpeechLoggerXV1.this.mCbEplDebug)) {
                if (z) {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "mCKEPLDebug checked");
                    AudioTuningJni.setAudioCommand(160, 1);
                    return;
                } else {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "mCKEPLDebug Unchecked");
                    AudioTuningJni.setAudioCommand(160, 0);
                    return;
                }
            }
            if (compoundButton.equals(AudioSpeechLoggerXV1.this.mRbEpl)) {
                if (!z) {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "mCKBEPL unchecked");
                    return;
                }
                Elog.d(AudioSpeechLoggerXV1.TAG, "mCKBEPL checked");
                int audioCommand = AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_VM_ENABLE, 1);
                AudioTuningJni.getEmParameter(AudioSpeechLoggerXV1.this.mData, AudioSpeechLoggerXV1.DATA_SIZE);
                if (audioCommand == -1) {
                    Elog.i(AudioSpeechLoggerXV1.TAG, "set mCKBEPL parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV1.this, R.string.set_failed_tip, 1).show();
                }
                editorEdit.putInt("epl_status", 1);
                editorEdit.commit();
                return;
            }
            if (compoundButton.equals(AudioSpeechLoggerXV1.this.mRbNormalVm)) {
                if (!z) {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "mCKBNormalVm unchecked");
                    return;
                }
                Elog.d(AudioSpeechLoggerXV1.TAG, "mCKBNormalVm checked");
                if (AudioSpeechLoggerXV1.this.mForRefresh) {
                    AudioSpeechLoggerXV1.this.mForRefresh = false;
                    return;
                }
                Elog.d(AudioSpeechLoggerXV1.TAG, "mCKBNormalVm checked ok");
                int audioCommand2 = AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_VM_ENABLE, 0);
                AudioTuningJni.getEmParameter(AudioSpeechLoggerXV1.this.mData, AudioSpeechLoggerXV1.DATA_SIZE);
                if (audioCommand2 == -1) {
                    Elog.i(AudioSpeechLoggerXV1.TAG, "set mCKBNormalVm parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV1.this, R.string.set_failed_tip, 1).show();
                }
                editorEdit.putInt("epl_status", 0);
                editorEdit.commit();
                return;
            }
            if (!compoundButton.equals(AudioSpeechLoggerXV1.this.mCbAncLogger)) {
                if (compoundButton.equals(AudioSpeechLoggerXV1.this.mCbMagiConf)) {
                    if (z) {
                        Elog.d(AudioSpeechLoggerXV1.TAG, "mCbMagiConf checked");
                        AudioSystem.setParameters("SET_MAGI_CONFERENCE_ENABLE=1");
                        return;
                    } else {
                        Elog.d(AudioSpeechLoggerXV1.TAG, "mCbMagiConf Unchecked");
                        AudioSystem.setParameters("SET_MAGI_CONFERENCE_ENABLE=0");
                        return;
                    }
                }
                return;
            }
            for (int i = 0; i < AudioSpeechLoggerXV1.this.mRgAnc.getChildCount(); i++) {
                AudioSpeechLoggerXV1.this.mRgAnc.getChildAt(i).setEnabled(z);
            }
            if (z) {
                Elog.d(AudioSpeechLoggerXV1.TAG, "mCbSpeechLogger checked");
                AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_ANC_LOG_STATUS, 1);
                AudioSpeechLoggerXV1.this.mRgAnc.check(R.id.Audio_AncLogger_Down);
            } else {
                Elog.d(AudioSpeechLoggerXV1.TAG, "mCbSpeechLogger unchecked");
                AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_ANC_DISABLE, 0);
            }
            editorEdit.putString("anc_status", AudioSpeechLoggerXV1.ANC_DOWN_SAMPLE);
            editorEdit.commit();
        }
    };
    private final RadioGroup.OnCheckedChangeListener mRgCheckedListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV1.2
        @Override // android.widget.RadioGroup.OnCheckedChangeListener
        public void onCheckedChanged(RadioGroup radioGroup, int i) {
            if (radioGroup.equals(AudioSpeechLoggerXV1.this.mRgAnc)) {
                SharedPreferences.Editor editorEdit = AudioSpeechLoggerXV1.this.getSharedPreferences("engineermode_audiolog_preferences", 0).edit();
                if (R.id.Audio_AncLogger_Down == i) {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "Audio_AncLogger_Down checked");
                    AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_ANC_LOG_STATUS, 1);
                    editorEdit.putString("anc_status", AudioSpeechLoggerXV1.ANC_DOWN_SAMPLE);
                    editorEdit.commit();
                    return;
                }
                if (R.id.Audio_AncLogger_NoDown == i) {
                    Elog.d(AudioSpeechLoggerXV1.TAG, "Audio_SpeechLogger_NoDown checked");
                    AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_SPEECH_ANC_LOG_STATUS, 0);
                    editorEdit.putString("anc_status", AudioSpeechLoggerXV1.ANC_NO_DOWN_SAMPLE);
                    editorEdit.commit();
                }
            }
        }
    };

    static /* synthetic */ int access$472(AudioSpeechLoggerXV1 audioSpeechLoggerXV1, int i) {
        int i2 = audioSpeechLoggerXV1.mVmLogState & i;
        audioSpeechLoggerXV1.mVmLogState = i2;
        return i2;
    }

    static /* synthetic */ int access$476(AudioSpeechLoggerXV1 audioSpeechLoggerXV1, int i) {
        int i2 = audioSpeechLoggerXV1.mVmLogState | i;
        audioSpeechLoggerXV1.mVmLogState = i2;
        return i2;
    }

    private void checkStatus() {
        int i = getSharedPreferences("engineermode_audiolog_preferences", 0).getInt("epl_status", 1);
        byte[] bArr = new byte[DATA_SIZE];
        this.mData = bArr;
        int emParameter = AudioTuningJni.getEmParameter(bArr, DATA_SIZE);
        if (emParameter != 0) {
            showDialog(0);
            Elog.i(TAG, "Audio_SpeechLogger GetEMParameter return value is : " + emParameter);
        }
        byte[] bArr2 = this.mData;
        this.mVmLogState = shortToInt(bArr2[VM_LOG_POS], bArr2[1441]);
        Elog.i(TAG, "Audio_SpeechLogger GetEMParameter return value is : " + this.mVmLogState);
        if ((this.mVmLogState & 1) == 0) {
            this.mCbSpeechLogger.setChecked(false);
            this.mRbEpl.setEnabled(false);
            this.mRbNormalVm.setEnabled(false);
            this.mRbEpl.setChecked(false);
            this.mRbNormalVm.setChecked(false);
        } else {
            this.mCbSpeechLogger.setChecked(true);
            this.mRbEpl.setEnabled(true);
            this.mRbNormalVm.setEnabled(true);
            if (i == 1) {
                this.mRbEpl.setChecked(true);
            } else {
                this.mRbNormalVm.setChecked(true);
            }
        }
        if ((this.mVmLogState & 2) == 0) {
            this.mCbCtm4Way.setChecked(false);
        } else {
            this.mCbCtm4Way.setChecked(true);
        }
        int audioCommand = AudioTuningJni.getAudioCommand(GET_DUMP_AP_SPEECH_EPL);
        Elog.i(TAG, "Get EPL setting: " + audioCommand);
        if (audioCommand == 1) {
            this.mCbEplDebug.setChecked(true);
        } else {
            this.mCbEplDebug.setChecked(false);
        }
    }

    private void initAncStatus() {
        SharedPreferences sharedPreferences = getSharedPreferences("engineermode_audiolog_preferences", 0);
        int audioCommand = AudioTuningJni.getAudioCommand(GET_SPEECH_ANC_LOG_STATUS);
        Elog.i(TAG, "Get ANC setting: " + audioCommand);
        if (audioCommand != 1) {
            this.mCbAncLogger.setChecked(false);
            for (int i = 0; i < this.mRgAnc.getChildCount(); i++) {
                this.mRgAnc.getChildAt(i).setEnabled(false);
            }
            return;
        }
        this.mCbAncLogger.setChecked(true);
        String string = sharedPreferences.getString("anc_status", ANC_DOWN_SAMPLE);
        Elog.i(TAG, "Get ANC status: " + string);
        if (string.equals(ANC_DOWN_SAMPLE)) {
            this.mRgAnc.check(R.id.Audio_AncLogger_Down);
        } else {
            this.mRgAnc.check(R.id.Audio_AncLogger_NoDown);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onClickSpeechLogger(SharedPreferences.Editor editor, boolean z) {
        if (z) {
            Elog.d(TAG, "mCbSpeechLogger checked");
            this.mRbEpl.setEnabled(true);
            this.mRbNormalVm.setEnabled(true);
            this.mForRefresh = true;
            this.mRbNormalVm.setChecked(true);
            this.mRbEpl.setChecked(true);
            byte[] bArr = this.mData;
            bArr[VM_LOG_POS] = (byte) (bArr[VM_LOG_POS] | 1);
            int emParameter = AudioTuningJni.setEmParameter(bArr, DATA_SIZE);
            if (emParameter == 0 || emParameter == -38) {
                return;
            }
            Elog.i(TAG, "set mAutoVM parameter failed");
            Toast.makeText(this, R.string.set_failed_tip, 1).show();
            return;
        }
        Elog.d(TAG, "mCbSpeechLogger unchecked");
        if (this.mRbEpl.isChecked()) {
            this.mRbEpl.setChecked(false);
        }
        if (this.mRbNormalVm.isChecked()) {
            this.mRbNormalVm.setChecked(false);
        }
        this.mRbEpl.setEnabled(false);
        this.mRbNormalVm.setEnabled(false);
        AudioTuningJni.getEmParameter(this.mData, DATA_SIZE);
        editor.putInt("epl_status", 0);
        editor.commit();
        byte[] bArr2 = this.mData;
        bArr2[VM_LOG_POS] = (byte) (bArr2[VM_LOG_POS] & (-2));
        int emParameter2 = AudioTuningJni.setEmParameter(bArr2, DATA_SIZE);
        if (emParameter2 == 0 || emParameter2 == -38) {
            return;
        }
        Elog.i(TAG, "set mAutoVM parameter failed");
        Toast.makeText(this, R.string.set_failed_tip, 1).show();
    }

    private int shortToInt(byte b, byte b2) {
        return (((b2 + 256) & 255) * 256) + ((b + 256) & 255);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_speechloggerx);
        this.mCbSpeechLogger = (CheckBox) findViewById(R.id.Audio_SpeechLogger_Enable);
        this.mCbEplDebug = (CheckBox) findViewById(R.id.Audio_EPLDebug_Enable);
        this.mCbCtm4Way = (CheckBox) findViewById(R.id.Audio_CTM4WAYLogger_Enable);
        this.mCbAncLogger = (CheckBox) findViewById(R.id.Audio_AncLogger_Enable);
        this.mCbMagiConf = (CheckBox) findViewById(R.id.Audio_MagiConference_Enable);
        this.mRbEpl = (RadioButton) findViewById(R.id.Audio_SpeechLogger_EPL);
        this.mRbNormalVm = (RadioButton) findViewById(R.id.Audio_SpeechLogger_Normalvm);
        this.mRgAnc = (RadioGroup) findViewById(R.id.RadioGroup2);
        Button button = (Button) findViewById(R.id.Dump_Speech_DbgInfo);
        View viewFindViewById = findViewById(R.id.Audio_View1);
        TextView textView = (TextView) findViewById(R.id.Audio_CTM4WAYLogger_EnableText);
        View viewFindViewById2 = findViewById(R.id.Audio_View3);
        TextView textView2 = (TextView) findViewById(R.id.Audio_AncLogger_FileText);
        if (!AudioTuningJni.isFeatureSupported("MTK_TTY_SUPPORT")) {
            this.mCbCtm4Way.setVisibility(8);
            textView.setVisibility(8);
            viewFindViewById.setVisibility(8);
        }
        if (AudioTuningJni.getAudioCommand(GET_SPEECH_ANC_SUPPORT) == 0) {
            textView2.setVisibility(8);
            this.mCbAncLogger.setVisibility(8);
            this.mRgAnc.setVisibility(8);
            viewFindViewById2.setVisibility(8);
        } else {
            initAncStatus();
        }
        String parameters = AudioSystem.getParameters("GET_MAGI_CONFERENCE_SUPPORT");
        Elog.i(TAG, "Get Magi support " + parameters);
        parameters.split("=");
        findViewById(R.id.Audio_View2).setVisibility(8);
        findViewById(R.id.Audio_MagiConference_EnableText).setVisibility(8);
        this.mCbMagiConf.setVisibility(8);
        checkStatus();
        this.mCbSpeechLogger.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCbEplDebug.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCbCtm4Way.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCbAncLogger.setOnCheckedChangeListener(this.mCheckedListener);
        this.mCbMagiConf.setOnCheckedChangeListener(this.mCheckedListener);
        this.mRbEpl.setOnCheckedChangeListener(this.mCheckedListener);
        this.mRbNormalVm.setOnCheckedChangeListener(this.mCheckedListener);
        this.mRgAnc.setOnCheckedChangeListener(this.mRgCheckedListener);
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV1.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                Elog.d(AudioSpeechLoggerXV1.TAG, "On Click mDumpSpeechInfo button.");
                if (AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV1.SET_DUMP_SPEECH_DEBUG_INFO, 1) != -1) {
                    Toast.makeText(AudioSpeechLoggerXV1.this, R.string.set_success_tip, 1).show();
                } else {
                    Elog.i(AudioSpeechLoggerXV1.TAG, "set mDumpSpeechInfo parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV1.this, R.string.set_failed_tip, 1).show();
                }
            }
        });
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 0) {
            return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV1.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioSpeechLoggerXV1.this.finish();
                }
            }).create();
        }
        if (i != 1) {
            return i != 2 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle(R.string.sdcard_busy_title).setMessage(R.string.sdcard_busy_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        return new AlertDialog.Builder(this).setTitle(R.string.no_sdcard_title).setMessage(R.string.no_sdcard_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
    }
}
