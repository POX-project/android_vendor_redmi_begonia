package com.mediatek.engineermode.networkselect;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class NetworkSelectSimType extends Activity implements AdapterView.OnItemClickListener {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.network_select_sim_type);
        ListView listView = (ListView) findViewById(R.id.ListView_SimSelect);
        ArrayList arrayList = new ArrayList();
        arrayList.add(getString(R.string.networkinfo_sim1));
        if (TelephonyManager.getDefault().getSimCount() > 1) {
            arrayList.add(getString(R.string.networkinfo_sim2));
        }
        listView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        String str = FeatureSupport.is93Modem() ? "com.mediatek.engineermode.networkselect.NetworkSelectActivity93" : "com.mediatek.engineermode.networkselect.NetworkSelectActivity";
        if (i == 0) {
            intent.setClassName(this, str);
            intent.putExtra("mSimType", 0);
        } else if (i == 1) {
            intent.setClassName(this, str);
            intent.putExtra("mSimType", 1);
        }
        startActivity(intent);
    }
}
