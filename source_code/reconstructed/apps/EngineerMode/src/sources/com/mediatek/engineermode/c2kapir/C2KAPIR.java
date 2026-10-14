package com.mediatek.engineermode.c2kapir;

import android.os.Bundle;
import android.os.SystemProperties;
import android.preference.CheckBoxPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceScreen;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class C2KAPIR extends PreferenceActivity {
    private static final String C2K_AP_IR_PROPERTY = "persist.vendor.sys.ct.ir.switcher";
    private static final String TAG = "C2KAPIR";
    private static final String WARNING = "It will take effect after you reboot the device!";
    private CheckBoxPreference[] mPreferences;

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        Elog.i(TAG, "fragmentName is " + str);
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        addPreferencesFromResource(R.xml.misc);
        String[] stringArray = getResources().getStringArray(R.array.c2k_ap_ir);
        this.mPreferences = new CheckBoxPreference[stringArray.length];
        for (int i = 0; i < stringArray.length; i++) {
            this.mPreferences[i] = new CheckBoxPreference(this);
            this.mPreferences[i].setTitle(stringArray[i]);
            this.mPreferences[i].setSummary(WARNING);
            this.mPreferences[i].setPersistent(false);
            getPreferenceScreen().addPreference(this.mPreferences[i]);
        }
    }

    @Override // android.preference.PreferenceActivity
    public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
        Elog.d(TAG, "Enter onPreferenceTreeClick()");
        int i = 0;
        while (true) {
            CheckBoxPreference[] checkBoxPreferenceArr = this.mPreferences;
            if (i >= checkBoxPreferenceArr.length) {
                return super.onPreferenceTreeClick(preferenceScreen, preference);
            }
            if (checkBoxPreferenceArr[i].equals(preference)) {
                try {
                    if (this.mPreferences[i].isChecked()) {
                        EmUtils.getEmHidlService().setEmConfigure(C2K_AP_IR_PROPERTY, "1");
                    } else {
                        EmUtils.getEmHidlService().setEmConfigure(C2K_AP_IR_PROPERTY, "0");
                    }
                    return true;
                } catch (Exception e) {
                    e.printStackTrace();
                    Elog.e(TAG, "set property failed ...");
                    return true;
                }
            }
            i++;
        }
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        if ("1".equals(SystemProperties.get(C2K_AP_IR_PROPERTY, "1"))) {
            this.mPreferences[0].setChecked(true);
        } else {
            this.mPreferences[0].setChecked(false);
        }
    }
}
