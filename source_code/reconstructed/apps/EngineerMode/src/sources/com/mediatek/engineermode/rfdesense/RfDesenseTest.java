package com.mediatek.engineermode.rfdesense;

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

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseTest extends Activity implements AdapterView.OnItemClickListener {
    public static final String TAG = "RfDesense/TestMenu";

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_test);
        ListView listView = (ListView) findViewById(R.id.list);
        ArrayList arrayList = new ArrayList();
        arrayList.add(getString(R.string.rf_desense_tx_test));
        arrayList.add(getString(R.string.rf_desense_gsm_control));
        if (FeatureSupport.is95Modem()) {
            arrayList.add(getString(R.string.rf_desense_tx_test_lte_CA));
        }
        if (FeatureSupport.is97Modem()) {
            arrayList.add(getString(R.string.rf_desense_digrf_label));
        }
        listView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        if (i == 0) {
            intent.setClass(this, RfDesenseTxTest.class);
            startActivity(intent);
            return;
        }
        if (i == 1) {
            intent.setClass(this, RfDesenseGsmPowerControl.class);
            startActivity(intent);
            return;
        }
        if (i != 2) {
            if (i != 3) {
                return;
            }
            intent.setClass(this, RfDesenseDigRFTest.class);
            startActivity(intent);
            return;
        }
        if (FeatureSupport.is95Modem()) {
            intent.setClass(this, RfDesenseTxTestLteCA.class);
        } else if (FeatureSupport.is97Modem()) {
            intent.setClass(this, RfDesenseDigRFTest.class);
        }
        startActivity(intent);
    }
}
