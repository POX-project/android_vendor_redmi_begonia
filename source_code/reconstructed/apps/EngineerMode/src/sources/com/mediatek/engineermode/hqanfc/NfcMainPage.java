package com.mediatek.engineermode.hqanfc;

import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.nfc.NfcAdapter;
import android.os.AsyncTask;
import android.os.Bundle;
import android.preference.PreferenceActivity;
import android.preference.PreferenceScreen;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.ShellExe;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class NfcMainPage extends PreferenceActivity {
    private static final int DIALOG_WAIT = 1;
    private static final int DLG_NOT_SUPPORT = 2;
    private static final String KILL_LIB_COMMAND = "kill -9 nfcstackp";
    private static final String QUICK_MODE_FILE = "/sdcard/mtknfcSyncQuickMode";
    private static final String START_LIB_COMMAND = "./system/bin/nfcstackp";
    public static final String TAG = "Nfc";
    private boolean mIsSupport = true;
    private ConnectServerTask mTask;

    private class ConnectServerTask extends AsyncTask<Void, Void, Boolean> {
        private ConnectServerTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            NfcMainPage.this.init();
            return Boolean.valueOf(NfcClient.getInstance().createConnection(NfcMainPage.this));
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            if (bool == null || !bool.booleanValue()) {
                Toast.makeText(NfcMainPage.this, R.string.hqa_nfc_connect_fail, 0).show();
            } else {
                PreferenceScreen preferenceScreen = NfcMainPage.this.getPreferenceScreen();
                int preferenceCount = preferenceScreen.getPreferenceCount();
                for (int i = 0; i < preferenceCount; i++) {
                    preferenceScreen.getPreference(i).setEnabled(true);
                }
                NfcClient.getInstance().sendCommand(100, null);
                NfcClient.getInstance().sendCommand(135, null);
            }
            NfcMainPage.this.dismissDialog(1);
        }
    }

    private void closeNFCServiceAtStart() {
        NfcAdapter defaultAdapter = NfcAdapter.getDefaultAdapter(getApplicationContext());
        if (!defaultAdapter.isEnabled()) {
            Elog.i(TAG, "[NfcMainPage]Nfc service is off");
        } else if (defaultAdapter.disable()) {
            Elog.i(TAG, "[NfcMainPage]Nfc service set off.");
        } else {
            Elog.i(TAG, "[NfcMainPage]Nfc service set off Fail.");
        }
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [com.mediatek.engineermode.hqanfc.NfcMainPage$2] */
    private void executeXbinFile(final String str, int i) {
        new Thread() { // from class: com.mediatek.engineermode.hqanfc.NfcMainPage.2
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                Elog.d(NfcMainPage.TAG, "[NfcMainPage]nfc command:" + str);
                try {
                    Elog.d(NfcMainPage.TAG, "[NfcMainPage]nfc command:result: " + ShellExe.execCommand(str, true));
                } catch (IOException e) {
                    Elog.e(NfcMainPage.TAG, "[NfcMainPage]executeXbinFile IOException: " + e.getMessage());
                    e.printStackTrace();
                }
            }
        }.start();
        try {
            Thread.sleep(500L);
        } catch (InterruptedException e) {
            Elog.e(TAG, "[NfcMainPage]executeXbinFile InterruptedException: " + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void init() {
        NfcAdapter defaultAdapter = NfcAdapter.getDefaultAdapter(getApplicationContext());
        if (defaultAdapter == null) {
            Elog.e(TAG, "adp == null");
            return;
        }
        Elog.i(TAG, "[QE]Engineer Mode clear all.");
        setNfcQuickMode(0);
        Elog.i(TAG, "[QE]set file");
        setNfcQuickMode(1);
        Elog.i(TAG, "[QE]NFC Disable.");
        if (defaultAdapter.isEnabled()) {
            Elog.i(TAG, "[QE] force NFC Disable.");
            defaultAdapter.disable();
        } else {
            Elog.i(TAG, "[QE]NFC Enable -->Disable.");
            defaultAdapter.enable();
            try {
                Thread.sleep(100L);
            } catch (InterruptedException e) {
                Elog.i(TAG, "InterruptedException");
            }
            defaultAdapter.disable();
        }
        do {
            try {
                Thread.sleep(1000L);
            } catch (InterruptedException e2) {
                Elog.i(TAG, "InterruptedException");
            }
        } while (defaultAdapter.isEnabled());
    }

    private void setNfcQuickMode(int i) {
        File file = new File(QUICK_MODE_FILE);
        boolean zDelete = false;
        try {
            Elog.i(TAG, "[QE]setNfcQuickMode(" + i);
            if (file.exists()) {
                if (i == 0) {
                    zDelete = file.delete();
                }
            } else if (i == 1) {
                zDelete = file.createNewFile();
            }
            Elog.i(TAG, "[QE]setNfcQuickMode(" + i + ") result:" + zDelete);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        Elog.i(TAG, "fragmentName is " + str);
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (!FeatureSupport.isNfcSupport()) {
            showDialog(2);
            this.mIsSupport = false;
            return;
        }
        addPreferencesFromResource(R.xml.hqa_nfc_main);
        showDialog(1);
        ConnectServerTask connectServerTask = new ConnectServerTask();
        this.mTask = connectServerTask;
        connectServerTask.execute(new Void[0]);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 1) {
            if (i == 2) {
                return new AlertDialog.Builder(this).setTitle(R.string.nfc_st).setCancelable(false).setMessage(getString(R.string.nfc_st_not_support)).setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.NfcMainPage.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        NfcMainPage.this.finish();
                    }
                }).create();
            }
            Elog.d(TAG, "error dialog ID");
            return super.onCreateDialog(i);
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage("Please Wait...");
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }

    @Override // android.preference.PreferenceActivity, android.app.ListActivity, android.app.Activity
    protected void onDestroy() {
        if (this.mIsSupport) {
            Elog.i(TAG, "[NfcMainPage]Nfc main page onDestroy().");
            NfcClient.getInstance().sendCommand(135, null);
            NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, null);
            NfcClient.getInstance().closeConnection();
            this.mTask.cancel(true);
        }
        super.onDestroy();
    }
}
