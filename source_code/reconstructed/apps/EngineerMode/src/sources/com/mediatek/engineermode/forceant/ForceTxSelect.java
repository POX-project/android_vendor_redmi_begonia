package com.mediatek.engineermode.forceant;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class ForceTxSelect extends Activity implements AdapterView.OnItemClickListener {
    public static final String TAG = "ForceTx/select";

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_test);
        ListView listView = (ListView) findViewById(R.id.list);
        ArrayList arrayList = new ArrayList();
        if (FeatureSupport.is95Modem()) {
            arrayList.add(getString(R.string.force_ant_95));
        } else if (FeatureSupport.is97Modem()) {
            arrayList.add(getString(R.string.force_ant_97));
        } else {
            arrayList.add(getString(R.string.force_ant));
        }
        listView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        if (i != 0) {
            return;
        }
        if (FeatureSupport.is95Modem() || FeatureSupport.is97Modem()) {
            intent.setClass(this, ForceTx9597Menu.class);
        } else {
            intent.setClass(this, ForceTx.class);
        }
        startActivity(intent);
    }
}
