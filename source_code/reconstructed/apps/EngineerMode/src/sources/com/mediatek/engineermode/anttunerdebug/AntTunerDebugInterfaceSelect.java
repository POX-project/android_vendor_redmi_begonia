package com.mediatek.engineermode.anttunerdebug;

import android.app.TabActivity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TabHost;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AntTunerDebugInterfaceSelect extends TabActivity {
    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        TabHost tabHost = getTabHost();
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.ant_tuner_debug_mipi).toString()).setIndicator(null, getApplicationContext().getDrawable(R.drawable.ic_m)).setContent(new Intent(this, (Class<?>) AntTunerDebugMIPI.class)));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.ant_tuner_debug_bpi).toString()).setIndicator(null, getApplicationContext().getDrawable(R.drawable.ic_b)).setContent(new Intent(this, (Class<?>) AntTunerDebugBPI.class)));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.ant_tuner_debug_dat).toString()).setIndicator(null, getApplicationContext().getDrawable(R.drawable.ic_d)).setContent(new Intent(this, (Class<?>) AntTunerDebugDAT.class)));
        tabHost.setCurrentTab(0);
    }
}
