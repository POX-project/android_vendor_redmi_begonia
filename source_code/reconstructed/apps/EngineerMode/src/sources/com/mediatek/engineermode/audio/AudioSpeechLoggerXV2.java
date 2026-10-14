package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.ComponentName;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.SharedPreferences;
import android.media.AudioManager;
import android.media.AudioSystem;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AudioSpeechLoggerXV2 extends Activity {
    private static final String ANC_DOWN_SAMPLE = "downSample";
    private static final String ANC_NO_DOWN_SAMPLE = "noDownSample";
    public static final String ANC_STATUS = "anc_status";
    private static final String CMD_GET_COMMON_PARAMETER = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para";
    private static final String CMD_GET_DEBUG_INFO = "APP_GET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info";
    private static final String CMD_GET_VMLOG_STATE = "GET_VMLOG_CONFIG";
    private static final String CMD_PREFIX = "APP_GET_PARAM=";
    private static final String CMD_SET_COMMON_PARAMETER = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#speech_common_para#";
    private static final String CMD_SET_DEBUG_INFO = "APP_SET_PARAM=SpeechGeneral#CategoryLayer,Common#debug_info#";
    public static final String CMD_SET_VMLOG_STATE = "SET_VMLOG_CONFIG=";
    private static final int CONSTANT_0XFF = 255;
    private static final int CONSTANT_256 = 256;
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int DATA_SIZE = 1444;
    private static final int DIALOG_GET_DATA_ERROR = 0;
    private static final int DIALOG_ID_DUMP_PATH_CHANGE = 10;
    private static final int DIALOG_ID_NO_SDCARD = 1;
    private static final int DIALOG_ID_SDCARD_BUSY = 2;
    private static final int ENABLE_ANC_DOWN_SAMPLE = 1;
    private static final int ENABLE_ANC_NO_DOWN_SAMPLE = 0;
    public static final String ENGINEER_MODE_PREFERENCE = "engineermode_audiolog_preferences";
    public static final String EPL_STATUS = "epl_status";
    private static final int GET_DUMP_AP_SPEECH_EPL = 161;
    private static final int GET_SPEECH_ANC_LOG_STATUS = 181;
    private static final int GET_SPEECH_ANC_SUPPORT = 176;
    private static final String PARAM_DEVIDER = "#";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    private static final int SET_DUMP_AP_SPEECH_EPL = 160;
    private static final int SET_DUMP_SPEECH_DEBUG_INFO = 97;
    private static final int SET_SPEECH_ANC_DISABLE = 180;
    private static final int SET_SPEECH_ANC_LOG_STATUS = 179;
    private static final int SET_SPEECH_VM_ENABLE = 96;
    public static final String TAG = "Audio/SpeechLogger2";
    private static final String VERSION_DEVIDER = "=";
    private static final int VM_LOG_POS = 1440;
    AudioManager mAudioManager;
    private boolean mBound;
    private CheckBox mCbAncLogger;
    private CheckBox mCbCtm4Way;
    private CheckBox mCbEplDebug;
    private CheckBox mCbMagiConf;
    private CheckBox mCbSpeechLogger;
    private Button mClearDumpButton;
    private Button mCopy2SdButton;
    private TextView mCopyProgressTv;
    private RadioButton mRbEpl;
    private RadioButton mRbNormalVm;
    private RadioGroup mRgAnc;
    private CopyHalDumpService mService;
    private boolean mForRefresh = false;
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.1
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            int i;
            SharedPreferences.Editor editorEdit = AudioSpeechLoggerXV2.this.getSharedPreferences("engineermode_audiolog_preferences", 0).edit();
            if (compoundButton.equals(AudioSpeechLoggerXV2.this.mCbSpeechLogger)) {
                if (z && AudioSpeechLoggerXV2.this.mCbCtm4Way.isChecked()) {
                    AudioSpeechLoggerXV2.this.mCbCtm4Way.setChecked(false);
                }
                AudioSpeechLoggerXV2.this.onClickSpeechLogger(editorEdit, z);
                return;
            }
            if (compoundButton.equals(AudioSpeechLoggerXV2.this.mCbCtm4Way)) {
                if (!z) {
                    AudioSpeechLoggerXV2.this.mAudioManager.setParameters("SET_VMLOG_CONFIG=0");
                    return;
                }
                if (AudioSpeechLoggerXV2.this.mCbSpeechLogger.isChecked()) {
                    AudioSpeechLoggerXV2.this.mCbSpeechLogger.setChecked(false);
                }
                AudioSpeechLoggerXV2.this.mAudioManager.setParameters("SET_VMLOG_CONFIG=2");
                return;
            }
            if (compoundButton.equals(AudioSpeechLoggerXV2.this.mCbEplDebug)) {
                if (z) {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "mCKEPLDebug checked");
                    AudioTuningJni.setAudioCommand(160, 1);
                    return;
                } else {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "mCKEPLDebug Unchecked");
                    AudioTuningJni.setAudioCommand(160, 0);
                    return;
                }
            }
            if (!compoundButton.equals(AudioSpeechLoggerXV2.this.mRbEpl)) {
                if (!compoundButton.equals(AudioSpeechLoggerXV2.this.mRbNormalVm)) {
                    if (!compoundButton.equals(AudioSpeechLoggerXV2.this.mCbAncLogger)) {
                        if (compoundButton.equals(AudioSpeechLoggerXV2.this.mCbMagiConf)) {
                            if (z) {
                                Elog.d(AudioSpeechLoggerXV2.TAG, "mCbMagiConf checked");
                                AudioSystem.setParameters("SET_MAGI_CONFERENCE_ENABLE=1");
                                return;
                            } else {
                                Elog.d(AudioSpeechLoggerXV2.TAG, "mCbMagiConf Unchecked");
                                AudioSystem.setParameters("SET_MAGI_CONFERENCE_ENABLE=0");
                                return;
                            }
                        }
                        return;
                    }
                    for (int i2 = 0; i2 < AudioSpeechLoggerXV2.this.mRgAnc.getChildCount(); i2++) {
                        AudioSpeechLoggerXV2.this.mRgAnc.getChildAt(i2).setEnabled(z);
                    }
                    if (z) {
                        Elog.d(AudioSpeechLoggerXV2.TAG, "mCbSpeechLogger checked");
                        AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV2.SET_SPEECH_ANC_LOG_STATUS, 1);
                        AudioSpeechLoggerXV2.this.mRgAnc.check(R.id.Audio_AncLogger_Down);
                    } else {
                        Elog.d(AudioSpeechLoggerXV2.TAG, "mCbSpeechLogger unchecked");
                        AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV2.SET_SPEECH_ANC_DISABLE, 0);
                    }
                    editorEdit.putString("anc_status", AudioSpeechLoggerXV2.ANC_DOWN_SAMPLE);
                    editorEdit.commit();
                    return;
                }
                if (!z) {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "mCKBNormalVm unchecked");
                    return;
                }
                Elog.d(AudioSpeechLoggerXV2.TAG, "mCKBNormalVm checked");
                if (!FeatureSupport.isEngLoad()) {
                    String parameters = AudioSpeechLoggerXV2.this.mAudioManager.getParameters(AudioSpeechLoggerXV2.CUST_XML_PARAM);
                    if (parameters == null || !AudioSpeechLoggerXV2.RESULT_SUPPORT.equals(parameters)) {
                        Elog.d(AudioSpeechLoggerXV2.TAG, "set CUST_XML_PARAM = 1");
                        AudioSpeechLoggerXV2.this.mAudioManager.setParameters(AudioSpeechLoggerXV2.CUST_XML_SET_SUPPORT_PARAM);
                        AudioTuningJni.CustXmlEnableChanged(1);
                    } else {
                        Elog.d(AudioSpeechLoggerXV2.TAG, "get CUST_XML_PARAM = 1");
                    }
                }
                if (AudioSpeechLoggerXV2.this.mForRefresh) {
                    AudioSpeechLoggerXV2.this.mForRefresh = false;
                    return;
                }
                Elog.d(AudioSpeechLoggerXV2.TAG, "mCKBNormalVm checked ok");
                String parameters2 = AudioSpeechLoggerXV2.this.getParameters(AudioSpeechLoggerXV2.CMD_GET_DEBUG_INFO);
                Elog.i(AudioSpeechLoggerXV2.TAG, "getParameters " + parameters2);
                if (parameters2 != null) {
                    String[] strArrSplit = parameters2.split(",");
                    if (strArrSplit.length < 1) {
                        Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                        Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
                    } else if (!"0x0".equals(strArrSplit[0])) {
                        strArrSplit[0] = "0x0";
                        String str = AudioSpeechLoggerXV2.CMD_SET_DEBUG_INFO;
                        for (String str2 : strArrSplit) {
                            str = str + str2 + ",";
                        }
                        String strSubstring = str.substring(0, str.length() - 1);
                        Elog.i(AudioSpeechLoggerXV2.TAG, "setParameters " + strSubstring);
                        AudioSpeechLoggerXV2.this.setParameters(strSubstring);
                    }
                } else {
                    Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
                }
                editorEdit.putInt("epl_status", 0);
                editorEdit.commit();
                return;
            }
            if (!z) {
                Elog.d(AudioSpeechLoggerXV2.TAG, "mCKBEPL unchecked");
                return;
            }
            Elog.d(AudioSpeechLoggerXV2.TAG, "mCKBEPL checked");
            if (!FeatureSupport.isEngLoad()) {
                String parameters3 = AudioSpeechLoggerXV2.this.mAudioManager.getParameters(AudioSpeechLoggerXV2.CUST_XML_PARAM);
                if (parameters3 == null || !AudioSpeechLoggerXV2.RESULT_SUPPORT.equals(parameters3)) {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "set CUST_XML_PARAM = 1");
                    AudioSpeechLoggerXV2.this.mAudioManager.setParameters(AudioSpeechLoggerXV2.CUST_XML_SET_SUPPORT_PARAM);
                    AudioTuningJni.CustXmlEnableChanged(1);
                } else {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "get CUST_XML_PARAM = 1");
                }
            }
            String parameters4 = AudioSpeechLoggerXV2.this.getParameters(AudioSpeechLoggerXV2.CMD_GET_DEBUG_INFO);
            Elog.i(AudioSpeechLoggerXV2.TAG, "getParameters " + parameters4);
            if (parameters4 != null) {
                String[] strArrSplit2 = parameters4.split(",");
                if (strArrSplit2.length >= 1) {
                    strArrSplit2[0] = "0x3";
                    String str3 = AudioSpeechLoggerXV2.CMD_SET_DEBUG_INFO;
                    for (String str4 : strArrSplit2) {
                        str3 = str3 + str4 + ",";
                    }
                    String strSubstring2 = str3.substring(0, str3.length() - 1);
                    Elog.i(AudioSpeechLoggerXV2.TAG, "setParameters " + strSubstring2);
                    AudioSpeechLoggerXV2.this.setParameters(strSubstring2);
                } else {
                    Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
                }
            } else {
                Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
            }
            String parameters5 = AudioSpeechLoggerXV2.this.getParameters(AudioSpeechLoggerXV2.CMD_GET_COMMON_PARAMETER);
            Elog.i(AudioSpeechLoggerXV2.TAG, "getParameters " + parameters5);
            if (parameters5 != null) {
                String[] strArrSplit3 = parameters5.split(",");
                if (strArrSplit3.length >= 1) {
                    strArrSplit3[0] = "0x6";
                    String str5 = AudioSpeechLoggerXV2.CMD_SET_COMMON_PARAMETER;
                    for (String str6 : strArrSplit3) {
                        str5 = str5 + str6 + ",";
                    }
                    String strSubstring3 = str5.substring(0, str5.length() - 1);
                    Elog.i(AudioSpeechLoggerXV2.TAG, "setParameters " + strSubstring3);
                    AudioSpeechLoggerXV2.this.setParameters(strSubstring3);
                    i = 1;
                } else {
                    Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                    i = 1;
                    Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
                }
            } else {
                i = 1;
                Elog.i(AudioSpeechLoggerXV2.TAG, "set mCKBEPL parameter failed");
                Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
            }
            editorEdit.putInt("epl_status", i);
            editorEdit.commit();
        }
    };
    private final RadioGroup.OnCheckedChangeListener mRgCheckedListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.2
        @Override // android.widget.RadioGroup.OnCheckedChangeListener
        public void onCheckedChanged(RadioGroup radioGroup, int i) {
            if (radioGroup.equals(AudioSpeechLoggerXV2.this.mRgAnc)) {
                SharedPreferences.Editor editorEdit = AudioSpeechLoggerXV2.this.getSharedPreferences("engineermode_audiolog_preferences", 0).edit();
                if (R.id.Audio_AncLogger_Down == i) {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "Audio_AncLogger_Down checked");
                    AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV2.SET_SPEECH_ANC_LOG_STATUS, 1);
                    editorEdit.putString("anc_status", AudioSpeechLoggerXV2.ANC_DOWN_SAMPLE);
                    editorEdit.commit();
                    return;
                }
                if (R.id.Audio_AncLogger_NoDown == i) {
                    Elog.d(AudioSpeechLoggerXV2.TAG, "Audio_SpeechLogger_NoDown checked");
                    AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV2.SET_SPEECH_ANC_LOG_STATUS, 0);
                    editorEdit.putString("anc_status", AudioSpeechLoggerXV2.ANC_NO_DOWN_SAMPLE);
                    editorEdit.commit();
                }
            }
        }
    };
    private ServiceConnection mConnection = new ServiceConnection() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.5
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            Elog.d(AudioSpeechLoggerXV2.TAG, "onServiceConnected");
            AudioSpeechLoggerXV2 audioSpeechLoggerXV2 = AudioSpeechLoggerXV2.this;
            audioSpeechLoggerXV2.mService = ((CopyHalDumpService.LocalBinder) iBinder).getService(audioSpeechLoggerXV2.mHandler);
            AudioSpeechLoggerXV2.this.mBound = true;
            AudioSpeechLoggerXV2.this.checkCopyDumpStatus();
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            Elog.d(AudioSpeechLoggerXV2.TAG, "onServiceDisconnected");
            AudioSpeechLoggerXV2.this.mService.removeUiHandler();
            AudioSpeechLoggerXV2.this.mBound = false;
        }
    };
    View.OnClickListener mCopyAudioDumpButtonListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.6
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            if (!AudioSpeechLoggerXV2.this.mBound) {
                Elog.w(AudioSpeechLoggerXV2.TAG, "onClick CopyAudioDumpButtons should connect Service first");
            }
            int id = view.getId();
            if (id == R.id.Audio_clear_dump) {
                Elog.v(AudioSpeechLoggerXV2.TAG, "clear hal dump");
                AudioSpeechLoggerXV2.this.mCopy2SdButton.setEnabled(false);
                AudioSpeechLoggerXV2.this.mClearDumpButton.setEnabled(false);
                AudioTuningJni.delAudioHalDumpFiles(AudioSpeechLoggerXV2.this.mService);
                return;
            }
            if (id != R.id.Audio_move_to_sdcard) {
                return;
            }
            AudioSpeechLoggerXV2.this.mCopy2SdButton.setEnabled(false);
            if (AudioSpeechLoggerXV2.this.mClearDumpButton.isEnabled()) {
                Elog.v(AudioSpeechLoggerXV2.TAG, "copy hal dump");
                AudioSpeechLoggerXV2.this.mCopy2SdButton.setText(R.string.Audio_stop_moving);
                AudioTuningJni.copyAudioHalDumpFilesToSdcard(AudioSpeechLoggerXV2.this.mService);
                AudioSpeechLoggerXV2.this.mClearDumpButton.setEnabled(false);
            } else {
                Elog.v(AudioSpeechLoggerXV2.TAG, "stop copying hal dump");
                AudioSpeechLoggerXV2.this.mCopy2SdButton.setText(R.string.Audio_move_to_sdcard);
                AudioSpeechLoggerXV2.this.mCopyProgressTv.setText(R.string.Audio_stop_moving_text);
                AudioTuningJni.cancleCopyAudioHalDumpFile();
                AudioSpeechLoggerXV2.this.mClearDumpButton.setEnabled(true);
            }
            try {
                Thread.sleep(200L);
            } catch (InterruptedException e) {
            }
            AudioSpeechLoggerXV2.this.mCopy2SdButton.setEnabled(true);
        }
    };
    public Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.7
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            switch (message.what) {
                case 10:
                    AudioSpeechLoggerXV2.this.mCopyProgressTv.setText((String) message.obj);
                    break;
                case 11:
                    AudioSpeechLoggerXV2.this.mCopyProgressTv.setText((String) message.obj);
                    break;
                case 12:
                    AudioSpeechLoggerXV2.this.mCopyProgressTv.setText(R.string.Audio_copy_dump_done);
                    AudioSpeechLoggerXV2.this.mCopy2SdButton.setText(R.string.Audio_move_to_sdcard);
                    AudioSpeechLoggerXV2.this.mClearDumpButton.setEnabled(true);
                    break;
                case 13:
                    AudioSpeechLoggerXV2.this.mCopyProgressTv.setText(R.string.Audio_delete_dump_done);
                    AudioSpeechLoggerXV2.this.mCopy2SdButton.setEnabled(true);
                    AudioSpeechLoggerXV2.this.mClearDumpButton.setEnabled(true);
                    break;
            }
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2$8, reason: invalid class name */
    static /* synthetic */ class AnonymousClass8 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS;

        static {
            int[] iArr = new int[CopyHalDumpService.DUMP_STATUS.values().length];
            $SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS = iArr;
            try {
                iArr[CopyHalDumpService.DUMP_STATUS.COPY_HAL_DUMP.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS[CopyHalDumpService.DUMP_STATUS.DELETE_HAL_DUMP.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS[CopyHalDumpService.DUMP_STATUS.COPY_DUMP_DONE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS[CopyHalDumpService.DUMP_STATUS.DELETE_DUMP_DONE.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void checkCopyDumpStatus() {
        int i = AnonymousClass8.$SwitchMap$com$mediatek$engineermode$audio$CopyHalDumpService$DUMP_STATUS[this.mService.getCopyDumpStatus().ordinal()];
        if (i == 1) {
            Elog.v(TAG, "COPY_HAL_DUMP");
            this.mCopy2SdButton.setText(R.string.Audio_stop_moving);
            this.mCopy2SdButton.setEnabled(true);
            this.mClearDumpButton.setEnabled(false);
            return;
        }
        if (i == 2) {
            Elog.v(TAG, "DELETE_HAL_DUMP");
            this.mCopy2SdButton.setEnabled(false);
            this.mClearDumpButton.setEnabled(false);
            return;
        }
        if (i == 3) {
            Elog.v(TAG, "COPY_DUMP_DONE");
            this.mCopy2SdButton.setEnabled(true);
            this.mClearDumpButton.setEnabled(true);
            this.mCopyProgressTv.setText(R.string.Audio_copy_dump_done);
            return;
        }
        if (i != 4) {
            Elog.v(TAG, "DEFAULT");
            this.mCopy2SdButton.setEnabled(true);
            this.mClearDumpButton.setEnabled(true);
        } else {
            Elog.v(TAG, "DELETE_DUMP_DONE");
            this.mCopy2SdButton.setEnabled(true);
            this.mClearDumpButton.setEnabled(true);
            this.mCopyProgressTv.setText(R.string.Audio_delete_dump_done);
        }
    }

    private void checkStatus() {
        int i = getSharedPreferences("engineermode_audiolog_preferences", 0).getInt("epl_status", 1);
        String parameters = this.mAudioManager.getParameters(CMD_GET_VMLOG_STATE);
        Elog.i(TAG, "return value is : " + parameters);
        if (parameters != null && parameters.length() > CMD_GET_VMLOG_STATE.length() + 1) {
            parameters = parameters.substring(CMD_GET_VMLOG_STATE.length() + 1);
        }
        if ("1".equals(parameters)) {
            this.mCbSpeechLogger.setChecked(true);
            this.mRbEpl.setEnabled(true);
            this.mRbNormalVm.setEnabled(true);
            if (i == 1) {
                this.mRbEpl.setChecked(true);
            } else {
                this.mRbNormalVm.setChecked(true);
            }
            if (!FeatureSupport.isEngLoad()) {
                String parameters2 = this.mAudioManager.getParameters(CUST_XML_PARAM);
                if (parameters2 == null || !RESULT_SUPPORT.equals(parameters2)) {
                    Elog.d(TAG, "get CUST_XML_PARAM = 0");
                    this.mCbSpeechLogger.setChecked(false);
                    this.mRbEpl.setEnabled(false);
                    this.mRbNormalVm.setEnabled(false);
                    this.mRbEpl.setChecked(false);
                    this.mRbNormalVm.setChecked(false);
                } else {
                    Elog.d(TAG, "get CUST_XML_PARAM = 1");
                }
            }
        } else {
            this.mCbSpeechLogger.setChecked(false);
            this.mRbEpl.setEnabled(false);
            this.mRbNormalVm.setEnabled(false);
            this.mRbEpl.setChecked(false);
            this.mRbNormalVm.setChecked(false);
        }
        this.mCbCtm4Way.setOnCheckedChangeListener(null);
        if ("2".equals(parameters)) {
            this.mCbCtm4Way.setChecked(true);
        } else {
            this.mCbCtm4Way.setChecked(false);
        }
        this.mCbCtm4Way.setOnCheckedChangeListener(this.mCheckedListener);
        int audioCommand = AudioTuningJni.getAudioCommand(GET_DUMP_AP_SPEECH_EPL);
        Elog.i(TAG, "Get EPL setting: " + audioCommand);
        this.mCbEplDebug.setOnCheckedChangeListener(null);
        if (audioCommand == 1) {
            this.mCbEplDebug.setChecked(true);
        } else {
            this.mCbEplDebug.setChecked(false);
        }
        this.mCbEplDebug.setOnCheckedChangeListener(this.mCheckedListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getParameters(String str) {
        if (Audio.AudioTuningVer.VER_2_2 != Audio.getAudioTuningVer()) {
            String parameters = this.mAudioManager.getParameters(str);
            if (parameters != null && parameters.length() > CMD_PREFIX.length()) {
                parameters = parameters.substring(CMD_PREFIX.length());
            }
            Elog.i(TAG, "getParameters return " + parameters);
            return parameters;
        }
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

    private void initCopyDumpUi() {
        this.mCopy2SdButton = (Button) findViewById(R.id.Audio_move_to_sdcard);
        this.mClearDumpButton = (Button) findViewById(R.id.Audio_clear_dump);
        this.mCopy2SdButton.setOnClickListener(this.mCopyAudioDumpButtonListener);
        this.mClearDumpButton.setOnClickListener(this.mCopyAudioDumpButtonListener);
        this.mCopy2SdButton.setEnabled(false);
        this.mClearDumpButton.setEnabled(false);
        this.mCopyProgressTv = (TextView) findViewById(R.id.Audio_copy_progress);
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
            this.mAudioManager.setParameters("SET_VMLOG_CONFIG=1");
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
        this.mAudioManager.setParameters("SET_VMLOG_CONFIG=0");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setParameters(String str) {
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

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_speechloggerx);
        this.mAudioManager = (AudioManager) getSystemService("audio");
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
        parameters.split(VERSION_DEVIDER);
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
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                Elog.d(AudioSpeechLoggerXV2.TAG, "On Click mDumpSpeechInfo button.");
                if (AudioTuningJni.setAudioCommand(AudioSpeechLoggerXV2.SET_DUMP_SPEECH_DEBUG_INFO, 1) != -1) {
                    Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_success_tip, 1).show();
                } else {
                    Elog.i(AudioSpeechLoggerXV2.TAG, "set mDumpSpeechInfo parameter failed");
                    Toast.makeText(AudioSpeechLoggerXV2.this, R.string.set_failed_tip, 1).show();
                }
            }
        });
        showDialog(10);
        Intent intent = new Intent();
        intent.setClass(this, CopyHalDumpService.class);
        startForegroundService(intent);
        initCopyDumpUi();
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i == 0) {
            return new AlertDialog.Builder(this).setTitle(R.string.get_data_error_title).setMessage(R.string.get_data_error_msg).setPositiveButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.audio.AudioSpeechLoggerXV2.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    AudioSpeechLoggerXV2.this.finish();
                }
            }).create();
        }
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle(R.string.no_sdcard_title).setMessage(R.string.no_sdcard_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        if (i != 2) {
            return i != 10 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle(R.string.audio_warning_title).setMessage(R.string.audio_dump_path_change_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        }
        return new AlertDialog.Builder(this).setTitle(R.string.sdcard_busy_title).setMessage(R.string.sdcard_busy_msg).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        bindService(new Intent(this, (Class<?>) CopyHalDumpService.class), this.mConnection, 1);
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        if (this.mBound) {
            unbindService(this.mConnection);
            this.mBound = false;
        }
    }
}
