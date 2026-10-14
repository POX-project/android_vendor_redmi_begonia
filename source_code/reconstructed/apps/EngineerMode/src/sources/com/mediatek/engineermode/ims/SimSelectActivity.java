package com.mediatek.engineermode.ims;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class SimSelectActivity extends Activity implements AdapterView.OnItemClickListener {
    public static final String MULT_IMS_SUPPORT = "persist.vendor.mims_support";
    private static final String TAG = "Ims/simSelect";
    int mims_num = 0;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.dualtalk_networkinfo);
        ListView listView = (ListView) findViewById(R.id.ListView_dualtalk_networkinfo);
        ArrayList arrayList = new ArrayList();
        this.mims_num = Integer.valueOf(SystemProperties.get(MULT_IMS_SUPPORT, "1").toString()).intValue();
        Elog.d(TAG, "persist.vendor.mims_support = " + this.mims_num);
        int i = this.mims_num;
        if (i == 1) {
            if (ModemCategory.getCapabilitySim() == 0) {
                arrayList.add("sim1: " + getString(R.string.ims_primary_card));
            } else if (ModemCategory.getCapabilitySim() == 1) {
                arrayList.add("sim2: " + getString(R.string.ims_primary_card));
            }
        } else if (i == 2) {
            if (ModemCategory.getCapabilitySim() == 0) {
                arrayList.add("sim1: " + getString(R.string.ims_primary_card));
                arrayList.add("sim2: " + getString(R.string.ims_secondary_card));
            } else if (ModemCategory.getCapabilitySim() == 1) {
                arrayList.add("sim1: " + getString(R.string.ims_secondary_card));
                arrayList.add("sim2: " + getString(R.string.ims_primary_card));
            }
        } else if (i == 3) {
            arrayList.add(getString(R.string.bandmode_sim1));
            arrayList.add(getString(R.string.bandmode_sim2));
            arrayList.add(getString(R.string.bandmode_sim3));
        } else if (i == 4) {
            arrayList.add(getString(R.string.bandmode_sim1));
            arrayList.add(getString(R.string.bandmode_sim2));
            arrayList.add(getString(R.string.bandmode_sim3));
            arrayList.add(getString(R.string.bandmode_sim4));
        }
        listView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        int i2;
        Intent intent = new Intent();
        intent.setClassName(this, "com.mediatek.engineermode.ims.ImsActivity");
        if (i == 0) {
            i2 = (this.mims_num == 1 && ModemCategory.getCapabilitySim() == 1) ? 1 : 0;
        } else if (i == 1) {
            i2 = 1;
        } else if (i != 2) {
            i2 = i != 3 ? 0 : 3;
        } else {
            i2 = 2;
        }
        Elog.d(TAG, "mSimType = " + i2);
        intent.putExtra("mSimType", i2);
        startActivity(intent);
    }
}
