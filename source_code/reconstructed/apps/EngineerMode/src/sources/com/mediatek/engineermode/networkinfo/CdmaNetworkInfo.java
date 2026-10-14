package com.mediatek.engineermode.networkinfo;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.CheckBox;
import android.widget.Toast;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class CdmaNetworkInfo extends Activity {
    private static final int CHECK_INFOMATION_ID = 1;
    public static final String LOG_TAG = "NetworkInfo/Cdma";
    public static final int TOTAL_ITEM_NUM = 312;
    private CheckBox[] mCheckBox;
    private int[] mChecked;
    private int mSimType;

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkinfo);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        this.mCheckBox = new CheckBox[312];
        this.mChecked = new int[312];
        for (int i = 0; i < 312; i++) {
            this.mCheckBox[i] = null;
            this.mChecked[i] = 0;
        }
        View viewFindViewById = findViewById(R.id.View_2G);
        View viewFindViewById2 = findViewById(R.id.View_COMMON);
        View viewFindViewById3 = findViewById(R.id.View_3G_FDD);
        View viewFindViewById4 = findViewById(R.id.View_3G_TDD);
        View viewFindViewById5 = findViewById(R.id.View_3G_COMMON);
        viewFindViewById.setVisibility(8);
        viewFindViewById2.setVisibility(8);
        viewFindViewById5.setVisibility(8);
        viewFindViewById4.setVisibility(8);
        viewFindViewById3.setVisibility(8);
        ((CheckBox) findViewById(R.id.NetworkInfo_EVDO_Force_Tx_Ant)).setVisibility(8);
        this.mCheckBox[300] = (CheckBox) findViewById(R.id.NetworkInfo_1xRTT_Radio);
        this.mCheckBox[301] = (CheckBox) findViewById(R.id.NetworkInfo_1xRTT_Info);
        this.mCheckBox[302] = (CheckBox) findViewById(R.id.NetworkInfo_1xRTT_SCH_Info);
        this.mCheckBox[303] = (CheckBox) findViewById(R.id.NetworkInfo_1xRTT_Statistics);
        this.mCheckBox[304] = (CheckBox) findViewById(R.id.NetworkInfo_1xRTT_Serving);
        this.mCheckBox[305] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_Serving_Info);
        this.mCheckBox[306] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_Active_Set);
        this.mCheckBox[307] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_Candidate_Set);
        this.mCheckBox[308] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_Neighbor_Set);
        this.mCheckBox[309] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_FL);
        this.mCheckBox[310] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_RL);
        this.mCheckBox[311] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_State);
    }

    @Override // android.app.Activity
    public boolean onCreateOptionsMenu(Menu menu) {
        menu.add(0, 1, 0, getString(R.string.networkinfo_check));
        return true;
    }

    @Override // android.app.Activity
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        if (menuItem.getItemId() == 1) {
            Boolean bool = false;
            for (int i = 0; i < 312; i++) {
                CheckBox[] checkBoxArr = this.mCheckBox;
                if (checkBoxArr[i] != null) {
                    if (checkBoxArr[i].isChecked()) {
                        this.mChecked[i] = 1;
                        bool = true;
                    } else {
                        this.mChecked[i] = 0;
                    }
                }
            }
            if (bool.booleanValue()) {
                Intent intent = new Intent(this, (Class<?>) NetworkInfoInfomation.class);
                intent.putExtra("mChecked", this.mChecked);
                intent.putExtra("mSimType", this.mSimType);
                startActivity(intent);
            } else {
                Toast.makeText(this, getString(R.string.networkinfo_msg), 1).show();
            }
        }
        return super.onOptionsItemSelected(menuItem);
    }
}
