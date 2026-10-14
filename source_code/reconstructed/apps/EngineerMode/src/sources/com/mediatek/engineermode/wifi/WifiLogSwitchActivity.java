package com.mediatek.engineermode.wifi;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.os.SystemClock;
import android.preference.PreferenceManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.EngineerMode;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class WifiLogSwitchActivity extends Activity implements AdapterView.OnItemSelectedListener, AdapterView.OnItemClickListener {
    private static final int CHIP_ID_6620 = 26144;
    private static final long DEFAULT_WAIT_TIME = 100;
    private static final String DEV_FW_LOG_ACTION = "android.settings.APPLICATION_DEVELOPMENT_SETTINGS";
    private static final int DLG_ENABLE_WIFI_ERROR = 1;
    private static final int DLG_INIT_ITEMS = 0;
    private static final int LOG_LEVEL_DEFAULT = 1;
    private static final int LOG_LEVEL_EXTREME = 2;
    private static final int LOG_LEVEL_OFF = 0;
    private static final int LOG_MODULE_DRIVER = 0;
    private static final int LOG_MODULE_FW = 1;
    private static final String PREF_DRIVER_LOG_LEVEL = "pref_wifilog_driver";
    private static final String PREF_FW_LOG_LEVEL = "pref_wifilog_fw";
    private static final String TAG = "WifiLogSwitch";
    private static final int VALUE_DEFAULT_LOG_LEVEL = 0;
    private Intent mFwLogIntent;
    private ArrayList<String> mListData;
    private ArrayAdapter<String> mLogAdapter;
    private Spinner mSpDriver = null;
    private Spinner mSpFw = null;
    private ListView mListLog = null;
    private boolean mInited = false;
    private WifiManager mWifiManager = null;

    /* JADX INFO: Access modifiers changed from: private */
    public boolean enableWifi() {
        WifiManager wifiManager = this.mWifiManager;
        if (wifiManager == null) {
            return false;
        }
        if (wifiManager.getWifiState() == 3) {
            return true;
        }
        if (EmUtils.ifAirplaneModeEnabled()) {
            return false;
        }
        if (!this.mWifiManager.setWifiEnabled(true)) {
            Elog.e(TAG, "enable wifi failed");
            return false;
        }
        while (this.mWifiManager.getWifiState() != 3) {
            SystemClock.sleep(DEFAULT_WAIT_TIME);
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void initItems() {
        EMWifi.initial();
        runOnUiThread(new Runnable() { // from class: com.mediatek.engineermode.wifi.WifiLogSwitchActivity.2
            @Override // java.lang.Runnable
            public void run() {
                Elog.i(WifiLogSwitchActivity.TAG, "driver log enable: " + EMWifi.isWifiLogUiEnable(0));
                Elog.i(WifiLogSwitchActivity.TAG, "FW log enable: " + EMWifi.isWifiLogUiEnable(1));
                WifiLogSwitchActivity.this.mInited = true;
                if (EMWifi.isWifiLogUiEnable(0)) {
                    WifiLogSwitchActivity.this.mSpDriver.setOnItemSelectedListener(WifiLogSwitchActivity.this);
                } else {
                    WifiLogSwitchActivity.this.findViewById(R.id.driver_log_layout).setVisibility(8);
                }
                if (EMWifi.isWifiLogUiEnable(1)) {
                    WifiLogSwitchActivity.this.mSpFw.setOnItemSelectedListener(WifiLogSwitchActivity.this);
                } else {
                    WifiLogSwitchActivity.this.findViewById(R.id.fw_log_layout).setVisibility(8);
                }
                WifiLogSwitchActivity.this.updateItems();
                WifiLogSwitchActivity.this.removeDialog(0);
            }
        });
    }

    public static void onWifiStateChanged(Context context) {
        if (((WifiManager) context.getSystemService("wifi")).getWifiState() == 3) {
            int iRestoreSettings = restoreSettings(true, context);
            int iRestoreSettings2 = restoreSettings(false, context);
            Elog.i(TAG, "[Wifi Enabled] driverLogLevel " + iRestoreSettings + " fwLogLevel " + iRestoreSettings2);
            if (iRestoreSettings == 0 && iRestoreSettings2 == 0) {
                return;
            }
            EMWifi.initial();
            if (iRestoreSettings != 0) {
                EMWifi.setWifiLogLevel(0, iRestoreSettings);
            }
            if (iRestoreSettings2 != 0) {
                EMWifi.setWifiLogLevel(1, iRestoreSettings2);
            }
            EMWifi.unInitial();
        }
    }

    private static int restoreSettings(boolean z, Context context) {
        int i = PreferenceManager.getDefaultSharedPreferences(context).getInt(z ? PREF_DRIVER_LOG_LEVEL : PREF_FW_LOG_LEVEL, 0);
        Elog.i(TAG, "restore driver log:" + z + " value:" + i);
        return i;
    }

    private void saveSettings(boolean z, int i) {
        SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(this).edit();
        editorEdit.putInt(z ? PREF_DRIVER_LOG_LEVEL : PREF_FW_LOG_LEVEL, i);
        editorEdit.commit();
        Elog.i(TAG, "save driver log:" + z + " value:" + i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateItems() {
        this.mListData.clear();
        boolean zIsVerboseLoggingEnabled = this.mWifiManager.isVerboseLoggingEnabled();
        Elog.i(TAG, "VerboseLog:" + zIsVerboseLoggingEnabled);
        this.mListData.add(getString(zIsVerboseLoggingEnabled ? R.string.wifi_log_switch_fwk_suppli_on : R.string.wifi_log_switch_fwk_suppli_off));
        this.mLogAdapter.notifyDataSetChanged();
        Elog.i(TAG, "mInited:" + this.mInited);
        if (this.mInited) {
            if (this.mSpDriver.getVisibility() == 0) {
                Elog.i(TAG, "Driver:" + EMWifi.getWifiLogLevel(0));
                this.mSpDriver.setSelection(EMWifi.getWifiLogLevel(0));
            }
            if (this.mSpFw.getVisibility() == 0) {
                Elog.i(TAG, "FW:" + EMWifi.getWifiLogLevel(1));
                this.mSpFw.setSelection(EMWifi.getWifiLogLevel(1));
            }
        }
    }

    /* JADX WARN: Type inference failed for: r0v19, types: [com.mediatek.engineermode.wifi.WifiLogSwitchActivity$1] */
    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (EngineerMode.isAutoTest()) {
            finish();
            return;
        }
        setContentView(R.layout.wifi_log_switch);
        this.mSpDriver = (Spinner) findViewById(R.id.driver_log_spinner);
        this.mSpFw = (Spinner) findViewById(R.id.fw_log_spinner);
        this.mListData = new ArrayList<>();
        this.mLogAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, this.mListData);
        ListView listView = (ListView) findViewById(R.id.log_listview);
        this.mListLog = listView;
        listView.setAdapter((ListAdapter) this.mLogAdapter);
        this.mListLog.setOnItemClickListener(this);
        this.mFwLogIntent = new Intent(DEV_FW_LOG_ACTION);
        this.mWifiManager = (WifiManager) getSystemService("wifi");
        showDialog(0);
        new Thread() { // from class: com.mediatek.engineermode.wifi.WifiLogSwitchActivity.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                Elog.d(WifiLogSwitchActivity.TAG, "initItems");
                if (WifiLogSwitchActivity.this.enableWifi()) {
                    WifiLogSwitchActivity.this.initItems();
                } else {
                    WifiLogSwitchActivity.this.runOnUiThread(new Runnable() { // from class: com.mediatek.engineermode.wifi.WifiLogSwitchActivity.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            WifiLogSwitchActivity.this.removeDialog(0);
                            WifiLogSwitchActivity.this.showDialog(1);
                        }
                    });
                }
            }
        }.start();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0) {
            if (i != 1) {
                return null;
            }
            return new AlertDialog.Builder(this).setTitle(R.string.wifi_dialog_error).setCancelable(false).setMessage(getString(R.string.wifi_log_switch_enable_wifi_failed)).setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.wifi.WifiLogSwitchActivity.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    WifiLogSwitchActivity.this.finish();
                }
            }).create();
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setTitle(R.string.wifi_dialog_init);
        progressDialog.setMessage(getString(R.string.wifi_log_init_items));
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        if (this.mInited) {
            EMWifi.unInitial();
            this.mInited = false;
        }
        Elog.i(TAG, "mInited:" + this.mInited);
        super.onDestroy();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        if (this.mListData.get(i) != null && i == 0) {
            if (getPackageManager().resolveActivity(this.mFwLogIntent, 0) != null) {
                startActivity(this.mFwLogIntent);
            } else {
                Elog.i(TAG, "no intent receiver");
                Toast.makeText(this, getString(R.string.wifi_log_switch_fwk_not_support), 0).show();
            }
        }
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        Elog.i(TAG, "Selected:" + i);
        if (adapterView.equals(this.mSpDriver)) {
            EMWifi.setWifiLogLevel(0, i);
            saveSettings(true, i);
        } else if (adapterView.equals(this.mSpFw)) {
            EMWifi.setWifiLogLevel(1, i);
            saveSettings(false, i);
        }
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        updateItems();
    }
}
