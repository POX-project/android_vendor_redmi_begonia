package com.mediatek.engineermode.voicesettings;

import android.app.Activity;
import android.os.Bundle;
import android.provider.Settings;
import android.widget.RadioGroup;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.provider.MtkSettingsExt;

/* JADX INFO: loaded from: classes3.dex */
public class VoiceWakeup extends Activity {
    private static final String TAG = "VoiceWakeup";
    private RadioGroup mRgSwtich = null;
    private int mSwitchInfo = 0;
    private int mSwitchEnable = 0;
    private final RadioGroup.OnCheckedChangeListener mCheckedListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.voicesettings.VoiceWakeup.1
        @Override // android.widget.RadioGroup.OnCheckedChangeListener
        public void onCheckedChanged(RadioGroup radioGroup, int i) {
            if (radioGroup.equals(VoiceWakeup.this.mRgSwtich)) {
                int i2 = 0;
                if (i == R.id.voice_switch_1) {
                    Elog.v(VoiceWakeup.TAG, "check voice_switch_1");
                    i2 = 1;
                } else if (i == R.id.voice_switch_2) {
                    Elog.v(VoiceWakeup.TAG, "check voice_switch_2");
                    i2 = 2;
                }
                Settings.System.putInt(VoiceWakeup.this.getContentResolver(), MtkSettingsExt.System.VOICE_WAKEUP_MODE, i2);
            }
        }
    };

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.voice_wakeup);
        this.mSwitchInfo = Settings.System.getInt(getContentResolver(), MtkSettingsExt.System.VOICE_WAKEUP_MODE, 0);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.voice_wakeup_function_switch);
        this.mRgSwtich = radioGroup;
        radioGroup.setOnCheckedChangeListener(this.mCheckedListener);
        int i = this.mSwitchInfo;
        if (i == 1) {
            this.mRgSwtich.check(R.id.voice_switch_1);
        } else if (i == 2) {
            this.mRgSwtich.check(R.id.voice_switch_2);
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        int i = Settings.System.getInt(getContentResolver(), MtkSettingsExt.System.VOICE_WAKEUP_COMMAND_STATUS, 0);
        this.mSwitchEnable = i;
        if (i == 0) {
            for (int i2 = 0; i2 < this.mRgSwtich.getChildCount(); i2++) {
                this.mRgSwtich.getChildAt(i2).setEnabled(true);
            }
            return;
        }
        Elog.v(TAG, "Disable switch info");
        for (int i3 = 0; i3 < this.mRgSwtich.getChildCount(); i3++) {
            this.mRgSwtich.getChildAt(i3).setEnabled(false);
        }
    }
}
