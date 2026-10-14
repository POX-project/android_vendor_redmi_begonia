package com.mediatek.engineermode;

import android.os.Bundle;
import android.os.SystemProperties;
import android.preference.ListPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;

/* JADX INFO: loaded from: classes2.dex */
public class DeviceRegister extends PreferenceActivity implements Preference.OnPreferenceChangeListener {
    private static final String KEY_SMS_REGISTER_SWITCH = "ct_sms_register_switch";
    private static final String PROPERTY_KEY_SMSREG = "persist.vendor.radio.selfreg";
    private static final String TAG = "DeviceRegister";
    private static final String TURN_OFF = "Off";
    private static final String TURN_ON = "On";
    private ListPreference mListPreference;

    private int getSavedCTAValue() {
        return getSelfRegConfig().charAt(0) == '1' ? 1 : 0;
    }

    private String getSelfRegConfig() {
        String str = SystemProperties.get("persist.vendor.radio.selfreg", "11");
        if (!str.equals("11") && !str.equals("10") && !str.equals("01") && !str.equals("00")) {
            str = "11";
        }
        Elog.i(TAG, "persist.vendor.radio.selfreg: " + str);
        return str;
    }

    private void setCTAValue(String str) {
        String str2 = str + getSelfRegConfig().charAt(1);
        SystemProperties.set("persist.vendor.radio.selfreg", str2);
        Elog.i(TAG, "save CTA [" + str2 + "]");
    }

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        Elog.i(TAG, "fragmentName is " + str);
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        addPreferencesFromResource(R.layout.device_register);
        ListPreference listPreference = (ListPreference) findPreference(KEY_SMS_REGISTER_SWITCH);
        this.mListPreference = listPreference;
        listPreference.setOnPreferenceChangeListener(this);
        int savedCTAValue = getSavedCTAValue();
        this.mListPreference.setSummary(savedCTAValue == 1 ? TURN_ON : TURN_OFF);
        this.mListPreference.setValue(String.valueOf(savedCTAValue));
    }

    @Override // android.preference.Preference.OnPreferenceChangeListener
    public boolean onPreferenceChange(Preference preference, Object obj) {
        if (preference.getKey().equals(KEY_SMS_REGISTER_SWITCH)) {
            try {
                setCTAValue((String) obj);
            } catch (NumberFormatException e) {
                Elog.e(TAG, "setCTAValue NumberFormatException");
            }
            boolean z = getSavedCTAValue() == 1;
            this.mListPreference.setValue(z ? "1" : "0");
            this.mListPreference.setSummary(z ? TURN_ON : TURN_OFF);
        }
        return false;
    }
}
