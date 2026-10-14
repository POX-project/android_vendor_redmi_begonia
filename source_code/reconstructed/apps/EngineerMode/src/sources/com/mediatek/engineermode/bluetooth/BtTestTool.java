package com.mediatek.engineermode.bluetooth;

import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.ParcelUuid;
import android.preference.PreferenceManager;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.RadioGroup;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class BtTestTool extends Activity implements View.OnClickListener {
    static final String PREF_BLE_ALWAYS_SCANNING = "pref_ble_always_scanning";
    static final String PREF_BT_ALWAYS_VISIBLE = "pref_bt_always_visible";
    private static final String TAG = "BtTestTool";
    private Button mBtnBluetoothInfo;
    private CheckBox mCbAlwaysVisible;
    private CheckBox mCbBleAlwaysScan;
    private RadioGroup mRgBleScanMode;
    public static final ParcelUuid BASE_UUID = ParcelUuid.fromString("12345678-0000-1000-8000-00805F9B34FB");
    private static BluetoothLeScanner mBluetoothLeScanner = null;
    private static final ScanCallback mScanCallback = new ScanCallback() { // from class: com.mediatek.engineermode.bluetooth.BtTestTool.1
        @Override // android.bluetooth.le.ScanCallback
        public void onScanFailed(int i) {
            Elog.i(BtTestTool.TAG, "onScanFailed errorCode:" + i);
        }

        @Override // android.bluetooth.le.ScanCallback
        public void onScanResult(int i, ScanResult scanResult) {
            Elog.i(BtTestTool.TAG, "onScanResult callbackType:" + i);
        }
    };
    private int mInterval = 0;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.bluetooth.BtTestTool.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            int i = message.what;
            if (i == 0) {
                SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(BtTestTool.this.getApplicationContext()).edit();
                editorEdit.putInt(BtTestTool.PREF_BLE_ALWAYS_SCANNING, -1);
                editorEdit.commit();
            } else if (i == 1) {
                BtTestTool.this.startBleScan(2);
            } else {
                if (i != 2) {
                    return;
                }
                BtTestTool.this.stopBleScan();
            }
        }
    };

    public static int getAlwaysScanning(Context context) {
        int i = PreferenceManager.getDefaultSharedPreferences(context).getInt(PREF_BLE_ALWAYS_SCANNING, -1);
        Elog.i(TAG, "getAlwaysScanning:" + i);
        return i;
    }

    public static boolean getAlwaysVisible(Context context) {
        boolean z = PreferenceManager.getDefaultSharedPreferences(context).getBoolean(PREF_BT_ALWAYS_VISIBLE, false);
        Elog.i(TAG, "getAlwaysVisible:" + z);
        return z;
    }

    public static void setAlwaysScanning(int i) {
        Elog.i(TAG, "setAlwaysScanning scan_mode:" + i);
    }

    public static void setAlwaysVisible(boolean z) {
        BluetoothAdapter defaultAdapter = BluetoothAdapter.getDefaultAdapter();
        if (defaultAdapter == null) {
            return;
        }
        Elog.i(TAG, "setAlwaysVisable on:" + z);
        if (z) {
            if (defaultAdapter.getScanMode() != 23) {
                defaultAdapter.setScanMode(23);
            }
        } else if (defaultAdapter.getScanMode() == 23) {
            defaultAdapter.setScanMode(21);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startBleScan(int i) {
        Elog.v(TAG, "startBleScan[" + i + "]: " + mBluetoothLeScanner);
        StringBuilder sb = new StringBuilder();
        sb.append("startBleScan - mScanCallback: ");
        sb.append(mScanCallback);
        Elog.v(TAG, sb.toString());
        if (mBluetoothLeScanner == null) {
            mBluetoothLeScanner = BluetoothAdapter.getDefaultAdapter().getBluetoothLeScanner();
        }
        ArrayList arrayList = new ArrayList();
        ScanFilter.Builder builder = new ScanFilter.Builder();
        builder.setServiceUuid(BASE_UUID);
        arrayList.add(builder.build());
        ScanSettings.Builder builder2 = new ScanSettings.Builder();
        builder2.setScanMode(i);
        mBluetoothLeScanner.startScan(arrayList, builder2.build(), mScanCallback);
        Elog.v(TAG, "start ble scan - " + mBluetoothLeScanner);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopBleScan() {
        Elog.v(TAG, "stopBleScan: " + mBluetoothLeScanner);
        Elog.v(TAG, "stopBleScan - mScanCallback: " + mScanCallback);
        if (mBluetoothLeScanner == null) {
            mBluetoothLeScanner = BluetoothAdapter.getDefaultAdapter().getBluetoothLeScanner();
        }
        mBluetoothLeScanner.stopScan(mScanCallback);
        Elog.v(TAG, "stop ble scan - " + mBluetoothLeScanner);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        Elog.v(TAG, "onClick: " + view);
        if (view.equals(this.mCbAlwaysVisible)) {
            SharedPreferences.Editor editorEdit = PreferenceManager.getDefaultSharedPreferences(this).edit();
            boolean zIsChecked = this.mCbAlwaysVisible.isChecked();
            editorEdit.putBoolean(PREF_BT_ALWAYS_VISIBLE, zIsChecked);
            editorEdit.commit();
            setAlwaysVisible(zIsChecked);
            BtWatchService.enableService(this, zIsChecked);
            return;
        }
        if (!view.equals(this.mCbBleAlwaysScan)) {
            if (view.equals(this.mBtnBluetoothInfo)) {
                Intent intent = new Intent();
                intent.setClassName("com.android.bluetooth", "com.android.bluetooth.util.BtInfoActivity");
                startActivity(intent);
                return;
            }
            return;
        }
        SharedPreferences.Editor editorEdit2 = PreferenceManager.getDefaultSharedPreferences(this).edit();
        boolean zIsChecked2 = this.mCbBleAlwaysScan.isChecked();
        int i = 2;
        switch (this.mRgBleScanMode.getCheckedRadioButtonId()) {
            case R.id.ble_scan_mode_low /* 2131100171 */:
                i = 0;
                break;
            case R.id.ble_scan_mode_medium /* 2131100172 */:
                i = 1;
                break;
        }
        if (!zIsChecked2) {
            i = -1;
        }
        editorEdit2.putInt(PREF_BLE_ALWAYS_SCANNING, i);
        editorEdit2.commit();
        BleScanService.enableService(this, zIsChecked2);
        if (zIsChecked2) {
            startBleScan(i);
        } else {
            stopBleScan();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.v(TAG, "onCreate: " + mBluetoothLeScanner);
        setContentView(R.layout.bt_test_tool);
        CheckBox checkBox = (CheckBox) findViewById(R.id.always_visible_cb);
        this.mCbAlwaysVisible = checkBox;
        checkBox.setChecked(getAlwaysVisible(this));
        this.mCbAlwaysVisible.setOnClickListener(this);
        this.mCbBleAlwaysScan = (CheckBox) findViewById(R.id.ble_always_scan_cb);
        int alwaysScanning = getAlwaysScanning(this);
        this.mCbBleAlwaysScan.setChecked(alwaysScanning >= 0);
        this.mCbBleAlwaysScan.setOnClickListener(this);
        this.mRgBleScanMode = (RadioGroup) findViewById(R.id.ble_scan_mode_rg);
        int i = R.id.ble_scan_mode_high;
        if (alwaysScanning == 0) {
            i = R.id.ble_scan_mode_low;
        } else if (alwaysScanning == 1) {
            i = R.id.ble_scan_mode_medium;
        }
        this.mRgBleScanMode.check(i);
        Button button = (Button) findViewById(R.id.bluetooth_info_bn);
        this.mBtnBluetoothInfo = button;
        button.setOnClickListener(this);
    }
}
