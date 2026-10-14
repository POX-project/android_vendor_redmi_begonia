package com.mediatek.engineermode.debugtool;

import android.content.ComponentName;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.SystemProperties;
import android.preference.ListPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceCategory;
import android.preference.PreferenceScreen;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class DebugToolboxActivity extends PreferenceActivity implements SharedPreferences.OnSharedPreferenceChangeListener, Preference.OnPreferenceClickListener {
    private static final String TAG = "DebugToolboxActivity/Debugutils";
    private static final String sAEE_BUILD_INFO = "ro.vendor.aee.build.info";
    private static final String sAEE_MODE = "persist.vendor.mtk.aee.mode";
    private static final String[] sAEE_MODE_STRING = {"", "MediatekEngineer", "MediatekUser", "CustomerEngineer", "CustomerUser"};
    private static final String[] sDAL_OPTION_STRING = {"EnableDAL", "DisableDAL"};
    private static final String sDAL_SETTING = "persist.vendor.mtk.aee.dal";
    private AEEControlService mBoundService;
    PreferenceScreen mCleanData;
    PreferenceScreen mClearDAL;
    private ServiceConnection mConnection = new ServiceConnection() { // from class: com.mediatek.engineermode.debugtool.DebugToolboxActivity.1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            DebugToolboxActivity.this.mBoundService = ((AEEControlService.LocalBinder) iBinder).getService();
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            DebugToolboxActivity.this.mBoundService = null;
        }
    };
    private boolean mIsBound;
    ListPreference mPrefAeemode;
    ListPreference mPrefDaloption;

    private static String currentAEEMode() {
        int iIntValue;
        String property = getProperty(sAEE_MODE);
        if (property == null || property.isEmpty() || (iIntValue = Integer.valueOf(property).intValue()) < 1 || iIntValue > 4) {
            return sAEE_MODE_STRING[(getProperty(sAEE_BUILD_INFO).equals("mtk") ? 2 : 4) - (Build.TYPE.equals(FeatureSupport.ENG_LOAD) ? 1 : 0)];
        }
        return sAEE_MODE_STRING[iIntValue];
    }

    private static String currentDalOption() {
        String property = getProperty(sDAL_SETTING);
        if (property == null || property.isEmpty()) {
            return "";
        }
        int iIntValue = Integer.valueOf(property).intValue();
        if (iIntValue == 0) {
            return sDAL_OPTION_STRING[1];
        }
        return iIntValue == 1 ? sDAL_OPTION_STRING[0] : "";
    }

    private static String getProperty(String str) {
        return SystemProperties.get(str);
    }

    void doBindService() {
        bindService(new Intent(this, (Class<?>) AEEControlService.class), this.mConnection, 1);
        this.mIsBound = true;
    }

    void doUnbindService() {
        if (this.mIsBound) {
            unbindService(this.mConnection);
            this.mIsBound = false;
        }
    }

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        addPreferencesFromResource(R.xml.preference_debugtoolbox);
        this.mPrefAeemode = (ListPreference) getPreferenceScreen().findPreference(getString(R.string.preference_aeemode));
        String property = getProperty(sAEE_BUILD_INFO);
        if (property == null || !property.equals("mtk")) {
            this.mPrefAeemode.setEntries(R.array.entries_list_preference_aeemode_oem);
            this.mPrefAeemode.setEntryValues(R.array.entryvalues_list_preference_aeemode_oem);
        }
        String strCurrentAEEMode = currentAEEMode();
        this.mPrefAeemode.setValue(strCurrentAEEMode);
        this.mPrefAeemode.setSummary(strCurrentAEEMode);
        this.mPrefDaloption = (ListPreference) getPreferenceScreen().findPreference(getString(R.string.preference_dal_setting));
        String strCurrentDalOption = currentDalOption();
        this.mPrefDaloption.setValue(strCurrentDalOption);
        this.mPrefDaloption.setSummary(strCurrentDalOption);
        if (property == null || !property.equals("mtk")) {
            this.mPrefDaloption.setSelectable(false);
        }
        PreferenceScreen preferenceScreen = (PreferenceScreen) getPreferenceScreen().findPreference(getString(R.string.preference_cleardal));
        this.mClearDAL = preferenceScreen;
        preferenceScreen.setOnPreferenceClickListener(this);
        PreferenceScreen preferenceScreen2 = (PreferenceScreen) getPreferenceScreen().findPreference(getString(R.string.preference_cleandata));
        this.mCleanData = preferenceScreen2;
        preferenceScreen2.setOnPreferenceClickListener(this);
        if (!Build.TYPE.equals(FeatureSupport.ENG_LOAD)) {
            this.mCleanData.setEnabled(false);
        }
        getPreferenceScreen().removePreference((PreferenceCategory) getPreferenceScreen().findPreference(getString(R.string.preferences_device_maintain)));
        doBindService();
    }

    @Override // android.preference.PreferenceActivity, android.app.ListActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        doUnbindService();
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        getPreferenceScreen().getSharedPreferences().unregisterOnSharedPreferenceChangeListener(this);
    }

    @Override // android.preference.Preference.OnPreferenceClickListener
    public boolean onPreferenceClick(Preference preference) {
        if (preference.equals(this.mClearDAL)) {
            try {
                this.mBoundService.clearDAL();
                return true;
            } catch (NullPointerException e) {
                Elog.e(TAG, "AEE Service is not started");
                return false;
            }
        }
        if (!preference.equals(this.mCleanData)) {
            return false;
        }
        try {
            this.mBoundService.cleanData();
            return true;
        } catch (NullPointerException e2) {
            Elog.e(TAG, "AEE Service is not started");
            return false;
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        getPreferenceScreen().getSharedPreferences().registerOnSharedPreferenceChangeListener(this);
    }

    @Override // android.content.SharedPreferences.OnSharedPreferenceChangeListener
    public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String str) {
        if (str.equals(getString(R.string.preference_aeemode))) {
            String string = sharedPreferences.getString(str, null);
            if (string == null) {
                Elog.e(TAG, "AEE working mode is set to NULL.");
                return;
            }
            try {
                this.mBoundService.changeAEEMode(string);
            } catch (NullPointerException e) {
                Elog.e(TAG, "AEE Service is not started");
            }
            String strCurrentAEEMode = currentAEEMode();
            if (!strCurrentAEEMode.equals(string)) {
                this.mPrefAeemode.setValue(strCurrentAEEMode);
                String str2 = "Change debug level [" + strCurrentAEEMode + "-->" + string + "] too fequent, please retry later.";
                Elog.e(TAG, str2);
                Toast.makeText(this, str2, 0).show();
            }
            this.mPrefAeemode.setSummary(strCurrentAEEMode);
        }
        if (str.equals(getString(R.string.preference_dal_setting))) {
            String string2 = sharedPreferences.getString(str, null);
            if (string2 == null) {
                Elog.d(TAG, "DAL setting mode is set to NULL.");
                return;
            }
            try {
                this.mBoundService.dalSetting(string2);
            } catch (NullPointerException e2) {
                Elog.e(TAG, "DAL setting error");
            }
            String strCurrentDalOption = currentDalOption();
            if (!strCurrentDalOption.equals(string2)) {
                this.mPrefDaloption.setValue(strCurrentDalOption);
            }
            this.mPrefDaloption.setSummary(strCurrentDalOption);
        }
    }
}
