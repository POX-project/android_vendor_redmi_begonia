package com.mediatek.engineermode.apc;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.widget.TableLayout;
import android.widget.TableRow;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.channellock.ChannelLockReceiver;
import com.mediatek.internal.telephony.PseudoCellInfo;

/* JADX INFO: loaded from: classes2.dex */
public class ApcFakeInfo extends Activity {
    private static final String ACTION_APC_INFO_NOTIFY = "com.mediatek.phone.ACTION_APC_INFO_NOTIFY";
    private static final String EXTRA_APC_INFO = "info";
    private static final String EXTRA_APC_PHONE = "phoneId";
    private static String TAG = "ApcFakeInfo";
    private static int mRowNum = 0;
    private static String[] mTitle = {"TYPE", "PLMN", "LAC", "Cell ID", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC"};
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.apc.ApcFakeInfo.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.d(ApcFakeInfo.TAG, "onReceive: " + intent.getAction());
            if (intent.getAction().equals(ApcFakeInfo.ACTION_APC_INFO_NOTIFY)) {
                if (ApcFakeInfo.mRowNum >= 10) {
                    ApcFakeInfo.this.clearTableRow();
                    int unused = ApcFakeInfo.mRowNum = 0;
                }
                int intExtra = intent.getIntExtra(ApcFakeInfo.EXTRA_APC_PHONE, 0);
                Elog.d(ApcFakeInfo.TAG, "phoneId: " + intExtra);
                PseudoCellInfo parcelableExtra = intent.getParcelableExtra(ApcFakeInfo.EXTRA_APC_INFO);
                Elog.d(ApcFakeInfo.TAG, "info: " + parcelableExtra.toString());
                ApcFakeInfo.this.addTableRow(parcelableExtra);
            }
        }
    };
    private TableLayout mTableLayout;

    /* JADX INFO: Access modifiers changed from: private */
    public void addTableRow(PseudoCellInfo pseudoCellInfo) {
        int cellCount = pseudoCellInfo.getCellCount();
        for (int i = 0; i < cellCount; i++) {
            TableRow tableRow = new TableRow(this);
            TextView textView = new TextView(this);
            Elog.d(TAG, "tvType = " + textView);
            textView.setText(String.valueOf(pseudoCellInfo.getType(i)));
            textView.setGravity(17);
            tableRow.addView(textView);
            TextView textView2 = new TextView(this);
            Elog.d(TAG, "tvPlmn = " + textView2);
            textView2.setText(String.valueOf(pseudoCellInfo.getPlmn(i)));
            textView2.setGravity(17);
            tableRow.addView(textView2);
            TextView textView3 = new TextView(this);
            Elog.d(TAG, "tvLai = " + textView3);
            textView3.setText(Integer.toHexString(pseudoCellInfo.getLac(i)));
            textView3.setGravity(17);
            tableRow.addView(textView3);
            TextView textView4 = new TextView(this);
            Elog.d(TAG, "tvCi = " + textView4);
            textView4.setText(Integer.toHexString(pseudoCellInfo.getCid(i)));
            textView4.setGravity(17);
            tableRow.addView(textView4);
            TextView textView5 = new TextView(this);
            Elog.d(TAG, "tvArfcn = " + textView5);
            textView5.setText(String.valueOf(pseudoCellInfo.getArfcn(i)));
            textView5.setGravity(17);
            tableRow.addView(textView5);
            TextView textView6 = new TextView(this);
            Elog.d(TAG, "tvBsic = " + textView6);
            textView6.setText(String.valueOf(pseudoCellInfo.getBsic(i)));
            textView6.setGravity(17);
            tableRow.addView(textView6);
            this.mTableLayout.addView(tableRow, new TableLayout.LayoutParams(-1, -2));
            mRowNum++;
        }
    }

    private void addTableTitle() {
        TableRow tableRow = new TableRow(this);
        for (int i = 0; i < mTitle.length; i++) {
            TextView textView = new TextView(this);
            textView.setText(mTitle[i]);
            textView.setGravity(17);
            tableRow.addView(textView);
        }
        this.mTableLayout.addView(tableRow, new TableLayout.LayoutParams(-1, -2));
        mRowNum++;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearTableRow() {
        this.mTableLayout.removeAllViews();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.apc_fake_info);
        this.mTableLayout = (TableLayout) findViewById(R.id.table_layout);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        addTableTitle();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_APC_INFO_NOTIFY);
        Elog.d(TAG, "before registerReceiver: com.mediatek.phone.ACTION_APC_INFO_NOTIFY");
        registerReceiver(this.mReceiver, intentFilter);
    }
}
