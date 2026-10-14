package com.mediatek.engineermode.wificalling;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class WifiCallingConfigActivity extends Activity implements AdapterView.OnItemClickListener {
    private static String TAG = "WifiCallingConfigActivity";
    private ListView itemListView;
    private ArrayList<String> items;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(LayoutInflater.from(this).inflate(R.layout.base_listview, (ViewGroup) null));
        this.itemListView = (ListView) findViewById(R.id.base_listview_id);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        if (i == 0) {
            intent.setClassName(this, "com.mediatek.engineermode.wificalling.EntitlementConfigActivity");
        } else if (i == 1) {
            intent.setClassName(this, "com.mediatek.engineermode.epdgconfig.epdgConfigSimSelect");
        }
        startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        ArrayList<String> arrayList = new ArrayList<>();
        this.items = arrayList;
        arrayList.add(getString(R.string.entitlement_config));
        if (FeatureSupport.is93Modem() && FeatureSupport.isSupportWfc() && !FeatureSupport.isUserLoad()) {
            this.items.add(getString(R.string.epdg_config));
        }
        this.itemListView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, this.items));
        this.itemListView.setOnItemClickListener(this);
    }
}
