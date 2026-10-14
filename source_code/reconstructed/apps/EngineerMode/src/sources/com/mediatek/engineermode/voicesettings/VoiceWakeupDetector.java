package com.mediatek.engineermode.voicesettings;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.audio.AudioTuningJni;

/* JADX INFO: loaded from: classes3.dex */
public class VoiceWakeupDetector extends Activity implements View.OnClickListener {
    private static final String CATEGORY = "VoWHwVad";
    private static final int DETECTOR_PAR_COUNT = 10;
    private static final String KEY_PRE = "Par_";
    private static final String TAG = "VoiceWakeupDetector";
    private static final String TYPE = "VAD,common";
    private Button mBtnSet;
    private Spinner[] mSpnParArr = new Spinner[10];

    private boolean checkSetResult() {
        int i = 0;
        while (true) {
            Spinner[] spinnerArr = this.mSpnParArr;
            if (i >= spinnerArr.length) {
                return true;
            }
            if (spinnerArr[i].getSelectedItemPosition() != getValue(i)) {
                return false;
            }
            i++;
        }
    }

    private int getValue(int i) {
        String str = KEY_PRE + String.format("%02d", Integer.valueOf(i + 1));
        Elog.i(TAG, "strKey:" + str);
        String params = AudioTuningJni.getParams(CATEGORY, TYPE, str);
        Elog.i(TAG, "result:" + params);
        return Integer.parseInt(params);
    }

    private void initUiByData() {
        for (int i = 0; i < this.mSpnParArr.length; i++) {
            int value = getValue(i);
            this.mSpnParArr[i].setSelection(value);
            Elog.i(TAG, "val:" + value);
        }
    }

    private void initUiComponent() {
        int[] iArr = {R.id.voice_detector_par01, R.id.voice_detector_par02, R.id.voice_detector_par03, R.id.voice_detector_par04, R.id.voice_detector_par05, R.id.voice_detector_par06, R.id.voice_detector_par07, R.id.voice_detector_par08, R.id.voice_detector_par09, R.id.voice_detector_par10};
        int i = 0;
        while (i < 10) {
            Spinner spinner = (Spinner) findViewById(iArr[i]);
            this.mSpnParArr[i] = spinner;
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            int i2 = i <= 4 ? 15 : 7;
            for (int i3 = 0; i3 <= i2; i3++) {
                arrayAdapter.add(String.valueOf(i3));
            }
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
            i++;
        }
        Button button = (Button) findViewById(R.id.voice_detector_set_btn);
        this.mBtnSet = button;
        button.setOnClickListener(this);
        initUiByData();
    }

    private void setDetectorSetting() {
        int i = 0;
        while (true) {
            Spinner[] spinnerArr = this.mSpnParArr;
            if (i >= spinnerArr.length) {
                AudioTuningJni.saveToWork(CATEGORY);
                return;
            }
            int selectedItemPosition = spinnerArr[i].getSelectedItemPosition();
            String str = KEY_PRE + String.format("%02d", Integer.valueOf(i + 1));
            Elog.i(TAG, "strKey:" + str);
            AudioTuningJni.setParams(CATEGORY, TYPE, str, String.valueOf(selectedItemPosition));
            i++;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mBtnSet) {
            setDetectorSetting();
            Toast.makeText(this, checkSetResult() ? R.string.voice_set_success_msg : R.string.voice_set_fail_msg, 0).show();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.voice_wakeup_detector);
        initUiComponent();
    }
}
