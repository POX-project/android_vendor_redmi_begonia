package com.mediatek.engineermode.voicesettings;

import android.R;
import android.app.Activity;
import android.os.Bundle;
import android.provider.Settings;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.audio.AudioTuningJni;
import com.mediatek.provider.MtkSettingsExt;

/* JADX INFO: loaded from: classes3.dex */
public class VoiceWakeupRecognition extends Activity implements View.OnClickListener {
    private static final String CATEGORY = "VoWHwVad";
    private static final String KEY_PRE_KR = "vow_KR";
    private static final String KEY_PRE_KRSR = "vow_KRSR";
    private static final int RECOGNITION_CLEAN = 1;
    private static final int RECOGNITION_NOISY = 2;
    private static final int RECOGNITION_TESTING = 4;
    private static final int RECOGNITION_TRAINING = 3;
    private static final String TAG = "VoiceWakeupRecognition";
    private static final String TYPE = "VAD,common";
    private static final int WAKEUP_MODE_KEYWORD = 1;
    private static final int WAKEUP_MODE_KEYWORD_SPEAKER = 2;
    private static final int WAKEUP_MODE_TRIGGER_KEYWORD = 3;
    private Button mBtnSet;
    private Spinner mSpnClean;
    private Spinner mSpnNoisy;
    private Spinner mSpnTesting;
    private Spinner mSpnTraining;
    private int mWakeupMode = 0;

    private boolean checkSetResult() {
        return this.mSpnClean.getSelectedItemPosition() == getValue(1) && this.mSpnNoisy.getSelectedItemPosition() == getValue(2) && this.mSpnTraining.getSelectedItemPosition() == getValue(3) && this.mSpnTesting.getSelectedItemPosition() == getValue(4);
    }

    private ArrayAdapter<String> createEmptySpinnerAdapter() {
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, R.layout.simple_spinner_item);
        arrayAdapter.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
        return arrayAdapter;
    }

    private int getValue(int i) {
        String str;
        Elog.i(TAG, "index:" + i);
        if (this.mWakeupMode == 1) {
            str = KEY_PRE_KR + i;
        } else {
            str = KEY_PRE_KRSR + i;
        }
        Elog.i(TAG, "key:" + str);
        String params = AudioTuningJni.getParams(CATEGORY, TYPE, str);
        Elog.i(TAG, "result" + params);
        return Integer.parseInt(params);
    }

    private void initUiByData() {
        this.mSpnClean.setSelection(getValue(1));
        this.mSpnNoisy.setSelection(getValue(2));
        this.mSpnTraining.setSelection(getValue(3));
        this.mSpnTesting.setSelection(getValue(4));
    }

    private void initUiComponent() {
        int i = this.mWakeupMode;
        if (i == 1) {
            setTitle(com.mediatek.engineermode.R.string.voice_wakeup_switch_1);
        } else if (i == 2) {
            setTitle(com.mediatek.engineermode.R.string.voice_wakeup_switch_2);
        }
        this.mSpnClean = (Spinner) findViewById(com.mediatek.engineermode.R.id.voice_settings_clean_spn);
        this.mSpnNoisy = (Spinner) findViewById(com.mediatek.engineermode.R.id.voice_settings_noisy_spn);
        this.mSpnTraining = (Spinner) findViewById(com.mediatek.engineermode.R.id.voice_settings_training_spn);
        this.mSpnTesting = (Spinner) findViewById(com.mediatek.engineermode.R.id.voice_settings_testing_spn);
        ArrayAdapter<String> arrayAdapterCreateEmptySpinnerAdapter = createEmptySpinnerAdapter();
        for (int i2 = 0; i2 <= 15; i2++) {
            arrayAdapterCreateEmptySpinnerAdapter.add(String.valueOf(i2));
        }
        this.mSpnClean.setAdapter((SpinnerAdapter) arrayAdapterCreateEmptySpinnerAdapter);
        ArrayAdapter<String> arrayAdapterCreateEmptySpinnerAdapter2 = createEmptySpinnerAdapter();
        for (int i3 = 0; i3 <= 15; i3++) {
            arrayAdapterCreateEmptySpinnerAdapter2.add(String.valueOf(i3));
        }
        this.mSpnNoisy.setAdapter((SpinnerAdapter) arrayAdapterCreateEmptySpinnerAdapter2);
        ArrayAdapter<String> arrayAdapterCreateEmptySpinnerAdapter3 = createEmptySpinnerAdapter();
        for (int i4 = 0; i4 <= 7; i4++) {
            arrayAdapterCreateEmptySpinnerAdapter3.add(String.valueOf(i4));
        }
        this.mSpnTraining.setAdapter((SpinnerAdapter) arrayAdapterCreateEmptySpinnerAdapter3);
        ArrayAdapter<String> arrayAdapterCreateEmptySpinnerAdapter4 = createEmptySpinnerAdapter();
        for (int i5 = 0; i5 <= 7; i5++) {
            arrayAdapterCreateEmptySpinnerAdapter4.add(String.valueOf(i5));
        }
        this.mSpnTesting.setAdapter((SpinnerAdapter) arrayAdapterCreateEmptySpinnerAdapter4);
        Button button = (Button) findViewById(com.mediatek.engineermode.R.id.voice_settings_set_btn);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        initUiByData();
    }

    private void setRecognitionSetting(int i, int i2, int i3, int i4) {
        String str = this.mWakeupMode == 1 ? KEY_PRE_KR : KEY_PRE_KRSR;
        Elog.i(TAG, "setRecognitionSetting:" + str + " strPreKey," + i + "," + i2 + "," + i3 + "," + i4);
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(1);
        AudioTuningJni.setParams(CATEGORY, TYPE, sb.toString(), String.valueOf(i));
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(2);
        AudioTuningJni.setParams(CATEGORY, TYPE, sb2.toString(), String.valueOf(i2));
        AudioTuningJni.setParams(CATEGORY, TYPE, str + 3, String.valueOf(i3));
        AudioTuningJni.setParams(CATEGORY, TYPE, str + 4, String.valueOf(i4));
        AudioTuningJni.saveToWork(CATEGORY);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mBtnSet) {
            setRecognitionSetting(this.mSpnClean.getSelectedItemPosition(), this.mSpnNoisy.getSelectedItemPosition(), this.mSpnTraining.getSelectedItemPosition(), this.mSpnTesting.getSelectedItemPosition());
            Toast.makeText(this, checkSetResult() ? com.mediatek.engineermode.R.string.voice_set_success_msg : com.mediatek.engineermode.R.string.voice_set_fail_msg, 0).show();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(com.mediatek.engineermode.R.layout.voice_common_setting);
        int i = Settings.System.getInt(getContentResolver(), MtkSettingsExt.System.VOICE_WAKEUP_MODE, 0);
        int i2 = i == 3 ? 1 : i;
        this.mWakeupMode = i2;
        if (i2 == 1 || i2 == 2) {
            initUiComponent();
            return;
        }
        Toast.makeText(this, "Invalid voice wake-up mode:" + this.mWakeupMode, 0).show();
        finish();
    }
}
