package com.mediatek.engineermode.bluetooth;

import android.app.Dialog;
import android.app.ListActivity;
import android.app.ProgressDialog;
import android.bluetooth.BluetoothAdapter;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class BtList extends ListActivity {
    private static final int DLG_CHECK_BT_CONFIG = 2;
    static final int DUAL_ANT = 2;
    static final String KEY_ANT_NUM = "ant_num";
    static final int SINGLE_ANT = 1;
    private static final String TAG = "BTList";
    private BluetoothAdapter mBtAdapter;
    private BleSupportState mBleSupport = BleSupportState.BLE_NONE;
    private boolean mComboSupport = false;
    private int mAntNum = 1;
    private BtTest mBtTest = null;
    private ArrayList<String> mModuleList = null;

    enum BleSupportState {
        BLE_NONE,
        BLE_NORMAL,
        BLE_ENHANCED
    }

    private class FunctionTask extends AsyncTask<Void, Void, Void> {
        private FunctionTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            BtList.this.mBtTest.init();
            if (BtList.this.mBtTest.isBLEEnhancedSupport()) {
                BtList.this.mBleSupport = BleSupportState.BLE_ENHANCED;
            } else if (BtList.this.mBtTest.isBLESupport()) {
                BtList.this.mBleSupport = BleSupportState.BLE_NORMAL;
            }
            BtList btList = BtList.this;
            btList.mComboSupport = btList.mBtTest.isComboSupport();
            BtList btList2 = BtList.this;
            btList2.mAntNum = btList2.mBtTest.getAntNum();
            BtList.this.mBtTest.unInit();
            Elog.i(BtList.TAG, "BLE supported: " + BtList.this.mBleSupport + " ant number:" + BtList.this.mAntNum);
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r5) {
            BtList.this.mModuleList = new ArrayList();
            BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_tx_only));
            BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_rx));
            BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_tm));
            if (BtList.this.mBleSupport == BleSupportState.BLE_ENHANCED) {
                BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_le_eh_test));
            } else if (BtList.this.mBleSupport == BleSupportState.BLE_NORMAL) {
                BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_le_test));
            }
            if (BtList.this.mComboSupport) {
                BtList.this.mModuleList.add(BtList.this.getString(R.string.bt_relayer));
            }
            BtList btList = BtList.this;
            BtList.this.setListAdapter(new ArrayAdapter(btList, android.R.layout.simple_list_item_1, btList.mModuleList));
            BtList.this.removeDialog(2);
            super.onPostExecute(r5);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (!FeatureSupport.isEmBTSupport()) {
            Toast.makeText(this, R.string.bt_not_support, 1).show();
            finish();
            return;
        }
        setContentView(R.layout.bt_list);
        this.mBtAdapter = BluetoothAdapter.getDefaultAdapter();
        BtTest btTest = new BtTest();
        this.mBtTest = btTest;
        if (!btTest.checkInitState(this.mBtAdapter, this)) {
            finish();
        } else {
            showDialog(2);
            new FunctionTask().execute(new Void[0]);
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 2) {
            return null;
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage(getString(R.string.bt_init_dev));
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }

    @Override // android.app.ListActivity
    protected void onListItemClick(ListView listView, View view, int i, long j) {
        String str = this.mModuleList.get(i);
        if (str == null) {
            return;
        }
        Intent intent = null;
        if (str.equals(getString(R.string.bt_tx_only))) {
            intent = new Intent(this, (Class<?>) TxOnlyTestActivity.class);
        } else if (str.equals(getString(R.string.bt_rx))) {
            intent = new Intent(this, (Class<?>) NoSigRxTestActivity.class);
        } else if (str.equals(getString(R.string.bt_tm))) {
            intent = new Intent(this, (Class<?>) TestModeActivity.class);
        } else if (str.equals(getString(R.string.bt_relayer))) {
            intent = new Intent(this, (Class<?>) BtRelayerModeActivity.class);
        } else if (str.equals(getString(R.string.bt_le_test))) {
            intent = new Intent(this, (Class<?>) BleTestMode.class);
        } else if (str.equals(getString(R.string.bt_le_eh_test))) {
            intent = new Intent(this, (Class<?>) BleEnhancedTestMode.class);
        }
        if (intent != null) {
            intent.putExtra(KEY_ANT_NUM, this.mAntNum);
            startActivity(intent);
        }
    }
}
