package com.mediatek.engineermode.wifi;

import android.app.TabActivity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TabHost;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes3.dex */
public class WiFiDBDC extends TabActivity {
    static final String KEY_MODE = "mode";
    static final String RX_BAND_0 = "RX Band0";
    static final String RX_BAND_1 = "RX Band1";
    private static final String TAG = "EM/WiFiDBDC";
    static final String TX_BAND_0 = "TX Band0";
    static final String TX_BAND_1 = "TX Band1";
    private TabHost mTabHost = null;

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.d(TAG, "onCreate");
        this.mTabHost = getTabHost();
        if (getIntent().getIntExtra("key_wifi_type", WiFi.WifiType.WIFI_6632.ordinal()) == WiFi.WifiType.WIFI_FORMAT.ordinal()) {
            TabHost tabHost = this.mTabHost;
            tabHost.addTab(tabHost.newTabSpec(TX_BAND_0).setIndicator(TX_BAND_0).setContent(new Intent(this, (Class<?>) WiFiTxFormat.class).putExtra(KEY_MODE, TX_BAND_0)));
            TabHost tabHost2 = this.mTabHost;
            tabHost2.addTab(tabHost2.newTabSpec(RX_BAND_0).setIndicator(RX_BAND_0).setContent(new Intent(this, (Class<?>) WiFiRxFormat.class).putExtra(KEY_MODE, RX_BAND_0)));
            TabHost tabHost3 = this.mTabHost;
            tabHost3.addTab(tabHost3.newTabSpec(TX_BAND_1).setIndicator(TX_BAND_1).setContent(new Intent(this, (Class<?>) WiFiTxFormat.class).putExtra(KEY_MODE, TX_BAND_1)));
            TabHost tabHost4 = this.mTabHost;
            tabHost4.addTab(tabHost4.newTabSpec(RX_BAND_1).setIndicator(RX_BAND_1).setContent(new Intent(this, (Class<?>) WiFiRxFormat.class).putExtra(KEY_MODE, RX_BAND_1)));
            return;
        }
        TabHost tabHost5 = this.mTabHost;
        tabHost5.addTab(tabHost5.newTabSpec(TX_BAND_0).setIndicator(TX_BAND_0).setContent(new Intent(this, (Class<?>) WiFiTx6632.class).putExtra(KEY_MODE, TX_BAND_0)));
        TabHost tabHost6 = this.mTabHost;
        tabHost6.addTab(tabHost6.newTabSpec(RX_BAND_0).setIndicator(RX_BAND_0).setContent(new Intent(this, (Class<?>) WiFiRx6632.class).putExtra(KEY_MODE, RX_BAND_0)));
        TabHost tabHost7 = this.mTabHost;
        tabHost7.addTab(tabHost7.newTabSpec(TX_BAND_1).setIndicator(TX_BAND_1).setContent(new Intent(this, (Class<?>) WiFiTx6632.class).putExtra(KEY_MODE, TX_BAND_1)));
        TabHost tabHost8 = this.mTabHost;
        tabHost8.addTab(tabHost8.newTabSpec(RX_BAND_1).setIndicator(RX_BAND_1).setContent(new Intent(this, (Class<?>) WiFiRx6632.class).putExtra(KEY_MODE, RX_BAND_1)));
    }
}
