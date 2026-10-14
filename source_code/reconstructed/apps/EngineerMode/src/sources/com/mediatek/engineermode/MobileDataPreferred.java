package com.mediatek.engineermode;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.Message;
import android.os.SystemProperties;
import android.preference.CheckBoxPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceScreen;
import android.telephony.TelephonyManager;

/* JADX INFO: loaded from: classes2.dex */
public class MobileDataPreferred extends PreferenceActivity {
    private static final String DATA_PREFER_KEY = "data_prefer_key";
    private static final int MOBILE_DATA_PREF_DIALOG = 10;
    private static final int PCH_CALL_PREFER = 1;
    private static final int PCH_DATA_PREFER = 0;
    private static final String TAG = "CallDataPreferred";
    private CheckBoxPreference mMobileDataPref;

    /* JADX INFO: Access modifiers changed from: private */
    public void setGprsTransferType(int i) {
        String str = i == 0 ? "1" : "0";
        Elog.v(TAG, "Change persist.radio.gprs.prefer to " + str);
        try {
            EmUtils.getEmHidlService().setPreferGprsMode(str);
        } catch (Exception e) {
            e.printStackTrace();
            Elog.e(TAG, "set property failed ...");
        }
        for (int i2 = 0; i2 < TelephonyManager.getDefault().getPhoneCount(); i2++) {
            EmUtils.invokeOemRilRequestStringsEm(i2, new String[]{"AT+EGTP=" + i, ""}, (Message) null);
            EmUtils.invokeOemRilRequestStringsEm(i2, new String[]{"AT+EMPPCH=" + i, ""}, (Message) null);
        }
    }

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        Elog.i(TAG, "fragmentName is " + str);
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        addPreferencesFromResource(R.xml.gsm_umts_options);
        this.mMobileDataPref = (CheckBoxPreference) getPreferenceScreen().findPreference(DATA_PREFER_KEY);
        int i = SystemProperties.getInt("persist.vendor.radio.gprs.prefer", 0);
        Elog.v(TAG, "Orgin value persist.vendor.radio.gprs.prefer = " + i);
        this.mMobileDataPref.setChecked(i != 0);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        return i == 10 ? new AlertDialog.Builder(this).setTitle(android.R.string.dialog_alert_title).setCancelable(false).setIcon(android.R.drawable.ic_dialog_alert).setMessage(R.string.pch_data_prefer_message).setPositiveButton(android.R.string.yes, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.MobileDataPreferred.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                MobileDataPreferred.this.setGprsTransferType(0);
            }
        }).setNegativeButton(android.R.string.no, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.MobileDataPreferred.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                MobileDataPreferred.this.mMobileDataPref.setChecked(false);
            }
        }).create() : super.onCreateDialog(i);
    }

    @Override // android.preference.PreferenceActivity
    public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
        if (!this.mMobileDataPref.equals(preference)) {
            return super.onPreferenceTreeClick(preferenceScreen, preference);
        }
        if (this.mMobileDataPref.isChecked()) {
            showDialog(10);
        } else {
            setGprsTransferType(1);
        }
        return true;
    }
}
