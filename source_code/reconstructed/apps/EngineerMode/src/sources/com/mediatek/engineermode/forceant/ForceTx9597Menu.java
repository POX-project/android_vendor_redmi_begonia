package com.mediatek.engineermode.forceant;

import android.app.TabActivity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TabHost;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class ForceTx9597Menu extends TabActivity {
    public static final String TAG = "ForceTx/9597Menu";

    @Override // android.app.ActivityGroup, android.app.Activity
    protected void onCreate(Bundle bundle) {
        Class cls;
        super.onCreate(bundle);
        if (FeatureSupport.is95Modem()) {
            cls = ForceTx95.class;
            setTitle(R.string.force_ant_95);
        } else {
            cls = ForceTx97.class;
            setTitle(R.string.force_ant_97);
        }
        TabHost tabHost = getTabHost();
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.force_ant_by_states).toString()).setIndicator(getString(R.string.force_ant_by_states).toString()).setContent(new Intent(this, (Class<?>) cls).putExtra("MODE", "by_states")));
        tabHost.addTab(tabHost.newTabSpec(getString(R.string.force_ant_by_index).toString()).setIndicator(getString(R.string.force_ant_by_index).toString()).setContent(new Intent(this, (Class<?>) cls).putExtra("MODE", "by_index")));
    }
}
