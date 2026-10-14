package com.mediatek.engineermode.bandselect;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class BandModeSimSelect extends Activity implements AdapterView.OnItemClickListener {
    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        ArrayAdapter arrayAdapter;
        super.onCreate(bundle);
        setContentView(R.layout.bandmodesimselect);
        ListView listView = (ListView) findViewById(R.id.listview_bandmode_sim_select);
        if (TelephonyManager.getDefault().getSimCount() > 1) {
            ArrayList arrayList = new ArrayList();
            arrayList.add(getString(R.string.bandmode_sim1));
            arrayList.add(getString(R.string.bandmode_sim2));
            if (TelephonyManager.getDefault().getSimCount() >= 3) {
                arrayList.add(getString(R.string.bandmode_sim3));
            }
            if (TelephonyManager.getDefault().getSimCount() == 4) {
                arrayList.add(getString(R.string.bandmode_sim4));
            }
            arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList);
        } else {
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(getString(R.string.bandmode_sim1));
            arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList2);
        }
        listView.setAdapter((ListAdapter) arrayAdapter);
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        if (i == 0) {
            intent.setClass(this, BandSelect.class);
            intent.putExtra("mSimType", 0);
        } else if (i == 1) {
            intent.setClass(this, BandSelect.class);
            intent.putExtra("mSimType", 1);
        } else if (i == 2) {
            intent.setClass(this, BandSelect.class);
            intent.putExtra("mSimType", 2);
        } else if (i == 3) {
            intent.setClass(this, BandSelect.class);
            intent.putExtra("mSimType", 3);
        }
        startActivity(intent);
    }
}
