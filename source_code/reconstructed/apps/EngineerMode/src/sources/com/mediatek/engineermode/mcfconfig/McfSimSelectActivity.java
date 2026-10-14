package com.mediatek.engineermode.mcfconfig;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class McfSimSelectActivity extends Activity implements AdapterView.OnItemClickListener {
    private static final String TAG = "McfConfig/McfSimSelectActivity";
    public static int SHOW_GENERAL_VIEW = -1;
    public static int SHOW_CERTIFICATION_VIEW = -2;
    ArrayList<String> items = null;
    ListView simTypeListView = null;
    ArrayAdapter<String> adapter = null;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.dualtalk_networkinfo);
        this.simTypeListView = (ListView) findViewById(R.id.ListView_dualtalk_networkinfo);
        this.items = new ArrayList<>();
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, this.items);
        this.adapter = arrayAdapter;
        this.simTypeListView.setAdapter((ListAdapter) arrayAdapter);
        this.simTypeListView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        if (FeatureSupport.is95Modem() || FeatureSupport.is97Modem()) {
            Elog.d(TAG, "support modem > 95");
            intent.setClassName(this, "com.mediatek.engineermode.mcfconfig.McfConfigActivity");
        } else {
            Elog.d(TAG, "support modem < 95");
            intent.setClassName(this, "com.mediatek.engineermode.mcfconfig.McfConfigActivity93");
        }
        if (i == 0) {
            intent.putExtra("mSimType", 0);
        } else if (i == 1) {
            intent.putExtra("mSimType", 1);
        } else if (i == 2) {
            intent.putExtra("mSimType", SHOW_GENERAL_VIEW);
        } else if (i == 3) {
            intent.putExtra("mSimType", SHOW_CERTIFICATION_VIEW);
        }
        startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.items.clear();
        if (ModemCategory.getCapabilitySim() == 0) {
            this.items.add("Sim1: " + getString(R.string.mdm_em_components_sim1));
            this.items.add("Sim2: " + getString(R.string.mdm_em_components_sim2));
        } else if (ModemCategory.getCapabilitySim() == 1) {
            this.items.add("Sim1: " + getString(R.string.mdm_em_components_sim2));
            this.items.add("Sim2: " + getString(R.string.mdm_em_components_sim1));
        }
        this.items.add("General");
        this.items.add("Certification");
        this.adapter.notifyDataSetInvalidated();
    }
}
