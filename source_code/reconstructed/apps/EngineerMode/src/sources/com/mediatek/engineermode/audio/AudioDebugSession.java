package com.mediatek.engineermode.audio;

import android.app.Activity;
import android.media.AudioManager;
import android.media.AudioSystem;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.ShellExe;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class AudioDebugSession extends Activity implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    private static final String AUDIO_DISENABLE_HYBRID_NLE = "AudioEnableHybridNLE=0";
    private static final String AUDIO_ENABLE_HYBRID_NLE = "AudioEnableHybridNLE=1";
    private static final String AUDIO_HYBRID_NLE = "AudioEnableHybridNLE";
    private static final String AUDIO_HYBRID_NLE_EOP = "AudioHybridNLEEOP";
    private static final String CUST_XML_PARAM = "GET_CUST_XML_ENABLE";
    private static final String CUST_XML_SET_SUPPORT_PARAM = "SET_CUST_XML_ENABLE=1";
    private static final String CUST_XML_SET_UNSUPPORT_PARAM = "SET_CUST_XML_ENABLE=0";
    private static final int GET_AECREC_TEST_ENABLE = 165;
    private static final int GET_MAGIASR_TEST_ENABLE = 163;
    private static final String HEAD_DETECT_PATH = "/sys/bus/platform/drivers/Accdet_Driver/state";
    private static final String HEAD_DETECT_PATH2 = "/sys/bus/platform/drivers/pmic-codec-accdet/state";
    private static final String MTK_AUDIO_HYBRID_NLE_SUPPORT = "MTK_AUDIO_HYBRID_NLE_SUPPORT";
    private static final String RESULT_SUPPORT = "GET_CUST_XML_ENABLE=1";
    private static final String RESULT_UNSUPPORT = "GET_CUST_XML_ENABLE=0";
    private static final int SET_AECREC_TEST_ENABLE = 164;
    private static final int SET_MAGIASR_TEST_ENABLE = 162;
    private static final String TAG = "Audio/DebugSession";
    private Button mBtnDetect;
    private Button mBtnSetNLE;
    private CheckBox mCbAecRec;
    private CheckBox mCbCustParam;
    private CheckBox mCbMagi;
    private CheckBox mCbNLE;
    private EditText mEtNLE;
    private LinearLayout mLinearLayoutNLE;
    private TextView mTvDetect;
    private Toast mToast = null;
    private AudioManager mAudioMgr = null;

    private void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.equals(this.mCbMagi)) {
            int audioCommand = AudioTuningJni.setAudioCommand(SET_MAGIASR_TEST_ENABLE, z ? 1 : 0);
            Elog.d(TAG, "setAudioCommand(0xA2, " + (z ? 1 : 0) + ") ret " + audioCommand);
            if (audioCommand == -1) {
                showToast("set audio parameter 0xA2 failed.");
                return;
            }
            return;
        }
        if (compoundButton.equals(this.mCbAecRec)) {
            int audioCommand2 = AudioTuningJni.setAudioCommand(SET_AECREC_TEST_ENABLE, z ? 1 : 0);
            Elog.d(TAG, "setAudioCommand(0xA4, " + (z ? 1 : 0) + ") ret " + audioCommand2);
            if (audioCommand2 == -1) {
                showToast("set audio parameter 0xA4 failed.");
                return;
            }
            return;
        }
        if (compoundButton.equals(this.mCbCustParam)) {
            this.mAudioMgr.setParameters(this.mCbCustParam.isChecked() ? CUST_XML_SET_SUPPORT_PARAM : CUST_XML_SET_UNSUPPORT_PARAM);
            AudioTuningJni.CustXmlEnableChanged(this.mCbCustParam.isChecked() ? 1 : 0);
            return;
        }
        if (compoundButton.equals(this.mCbNLE)) {
            AudioManager audioManager = this.mAudioMgr;
            boolean zIsChecked = this.mCbNLE.isChecked();
            String str = AUDIO_ENABLE_HYBRID_NLE;
            audioManager.setParameters(zIsChecked ? AUDIO_ENABLE_HYBRID_NLE : AUDIO_DISENABLE_HYBRID_NLE);
            StringBuilder sb = new StringBuilder();
            sb.append("mCbNLE changed ");
            if (!this.mCbNLE.isChecked()) {
                str = AUDIO_DISENABLE_HYBRID_NLE;
            }
            sb.append(str);
            Elog.d(TAG, sb.toString());
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mBtnDetect.getId()) {
            String str = HEAD_DETECT_PATH;
            if (!new File(HEAD_DETECT_PATH).exists()) {
                str = HEAD_DETECT_PATH2;
            }
            String str2 = "cat " + str;
            try {
                if (ShellExe.execCommand(str2, true) != 0) {
                    showToast("Detection failed");
                    return;
                }
                int i = Integer.parseInt(ShellExe.getOutput());
                Elog.d(TAG, str + ": " + ShellExe.getOutput());
                if (i == 1) {
                    this.mTvDetect.setText(getString(R.string.Audio_Headset_Jak_Headset));
                } else if (i == 2) {
                    this.mTvDetect.setText(getString(R.string.Audio_Headset_Jak_Headphone));
                } else {
                    this.mTvDetect.setText(getString(R.string.Audio_Headset_None));
                }
                return;
            } catch (IOException e) {
                Elog.d(TAG, str2.toString() + e.getMessage());
                showToast("Detection failed");
                return;
            } catch (NumberFormatException e2) {
                showToast("Detection failed");
                return;
            }
        }
        if (view.getId() == this.mBtnSetNLE.getId()) {
            EditText editText = this.mEtNLE;
            if (editText == null || editText.getText() == null) {
                showToast("Please input an num 0 ~~ -96");
                return;
            }
            String string = this.mEtNLE.getText().toString();
            Elog.d(TAG, "input AUDIO_HYBRID_NLE_EOP = " + string);
            if (string.isEmpty() || Long.valueOf(string).longValue() > 0 || Long.valueOf(string).longValue() < -96) {
                showToast("Please input an num 0 ~~ -96");
                return;
            }
            String str3 = "AudioHybridNLEEOP=" + string;
            AudioSystem.setParameters(str3);
            Elog.d(TAG, "set AUDIO_HYBRID_NLE_EOP = " + str3);
            String parameters = AudioSystem.getParameters(AUDIO_HYBRID_NLE_EOP);
            Elog.d(TAG, "get AUDIO_HYBRID_NLE_EOP = " + parameters);
            if (parameters.equals(str3)) {
                showToast("The value set succeeful");
            } else {
                showToast("The value set failed");
            }
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.audio_debugsession);
        this.mAudioMgr = (AudioManager) getSystemService("audio");
        Button button = (Button) findViewById(R.id.Audio_Headset_Detect_Button);
        this.mBtnDetect = button;
        button.setOnClickListener(this);
        this.mTvDetect = (TextView) findViewById(R.id.Audio_Headset_Detect_Text);
        this.mCbMagi = (CheckBox) findViewById(R.id.Audio_MagiAsr);
        this.mCbAecRec = (CheckBox) findViewById(R.id.Audio_AecRec);
        this.mCbCustParam = (CheckBox) findViewById(R.id.Audio_Custom_Param);
        this.mBtnSetNLE = (Button) findViewById(R.id.Audio_Hybrid_Dynamic_set);
        this.mEtNLE = (EditText) findViewById(R.id.Audio_Hybrid_Dynamic_edit);
        this.mCbNLE = (CheckBox) findViewById(R.id.Audio_Hybrid_Dynamic);
        this.mLinearLayoutNLE = (LinearLayout) findViewById(R.id.Audio_Hybrid_Dynamic_LinearLayout);
        String parameters = AudioSystem.getParameters(MTK_AUDIO_HYBRID_NLE_SUPPORT);
        Elog.d(TAG, parameters);
        this.mLinearLayoutNLE.setVisibility(8);
        if (parameters.equals("MTK_AUDIO_HYBRID_NLE_SUPPORT=1")) {
            this.mLinearLayoutNLE.setVisibility(0);
            String parameters2 = AudioSystem.getParameters(AUDIO_HYBRID_NLE);
            Elog.d(TAG, "getParameters(AUDIO_HYBRID_NLE) ret = " + parameters2);
            this.mCbNLE.setChecked(AUDIO_ENABLE_HYBRID_NLE.equals(parameters2));
            this.mCbNLE.setOnCheckedChangeListener(this);
            String parameters3 = AudioSystem.getParameters(AUDIO_HYBRID_NLE_EOP);
            Elog.d(TAG, "getParameters(AUDIO_HYBRID_NLE_EOP) rets = " + parameters3);
            String[] strArrSplit = parameters3.split("=");
            if (strArrSplit.length == 2) {
                this.mEtNLE.setText(strArrSplit[1]);
            }
            this.mBtnSetNLE.setOnClickListener(this);
        }
        TextView textView = (TextView) findViewById(R.id.Audio_Custom_Param_Title);
        View viewFindViewById = findViewById(R.id.Audio_Custom_Param_Divider);
        if (Audio.AudioTuningVer.VER_2_2 != Audio.getAudioTuningVer()) {
            this.mCbCustParam.setVisibility(8);
            textView.setVisibility(8);
            viewFindViewById.setVisibility(8);
        } else if (FeatureSupport.isEngLoad()) {
            this.mCbCustParam.setChecked(true);
            this.mCbCustParam.setEnabled(false);
        } else {
            String parameters4 = this.mAudioMgr.getParameters(CUST_XML_PARAM);
            if (parameters4 == null || !RESULT_SUPPORT.equals(parameters4)) {
                this.mCbCustParam.setChecked(false);
            } else {
                this.mCbCustParam.setChecked(true);
            }
            this.mCbCustParam.setOnCheckedChangeListener(this);
        }
        int audioCommand = AudioTuningJni.getAudioCommand(GET_MAGIASR_TEST_ENABLE);
        Elog.d(TAG, "getAudioCommand(0xA3) ret " + audioCommand);
        if (audioCommand == 0) {
            findViewById(R.id.Audio_MagiAsr_Group).setVisibility(8);
        } else {
            this.mCbMagi.setChecked(audioCommand == 1);
            this.mCbMagi.setOnCheckedChangeListener(this);
        }
        int audioCommand2 = AudioTuningJni.getAudioCommand(GET_AECREC_TEST_ENABLE);
        Elog.d(TAG, "getAudioCommand(0xA5) ret " + audioCommand2);
        this.mCbAecRec.setChecked(audioCommand2 == 1);
        this.mCbAecRec.setOnCheckedChangeListener(this);
    }
}
