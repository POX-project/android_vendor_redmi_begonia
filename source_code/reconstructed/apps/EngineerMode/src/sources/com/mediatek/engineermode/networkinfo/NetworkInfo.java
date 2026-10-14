package com.mediatek.engineermode.networkinfo;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.CheckBox;
import android.widget.Toast;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class NetworkInfo extends Activity {
    private static final int CHECK_INFOMATION_ID = 1;
    public static final int MODEM_FDD = 1;
    public static final int MODEM_MASK_EDGE = 2;
    public static final int MODEM_MASK_GPRS = 1;
    public static final int MODEM_MASK_HSDPA = 16;
    public static final int MODEM_MASK_HSUPA = 32;
    public static final int MODEM_MASK_TDSCDMA = 8;
    public static final int MODEM_MASK_WCDMA = 4;
    public static final int MODEM_NO3G = 3;
    public static final int MODEM_NONE = -1;
    public static final int MODEM_TD = 2;
    public static final String TAG = "NetworkInfo";
    public static final int TOTAL_ITEM_NUM = 312;
    private static int sModemType = -1;
    private CheckBox[] mCheckBox;
    private int[] mChecked;
    private int mSimType;

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkinfo);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        sModemType = ModemCategory.getModemType();
        this.mCheckBox = new CheckBox[312];
        this.mChecked = new int[312];
        for (int i = 0; i < 312; i++) {
            this.mCheckBox[i] = null;
            this.mChecked[i] = 0;
        }
        this.mCheckBox[0] = (CheckBox) findViewById(R.id.NetworkInfo_Cell);
        this.mCheckBox[1] = (CheckBox) findViewById(R.id.NetworkInfo_Ch);
        this.mCheckBox[2] = (CheckBox) findViewById(R.id.NetworkInfo_Ctrl);
        this.mCheckBox[3] = (CheckBox) findViewById(R.id.NetworkInfo_RACH);
        this.mCheckBox[4] = (CheckBox) findViewById(R.id.NetworkInfo_LAI);
        this.mCheckBox[5] = (CheckBox) findViewById(R.id.NetworkInfo_Radio);
        this.mCheckBox[6] = (CheckBox) findViewById(R.id.NetworkInfo_Meas);
        this.mCheckBox[7] = (CheckBox) findViewById(R.id.NetworkInfo_Ca);
        this.mCheckBox[8] = (CheckBox) findViewById(R.id.NetworkInfo_Control);
        this.mCheckBox[9] = (CheckBox) findViewById(R.id.NetworkInfo_SI2Q);
        this.mCheckBox[10] = (CheckBox) findViewById(R.id.NetworkInfo_MI);
        this.mCheckBox[11] = (CheckBox) findViewById(R.id.NetworkInfo_BLK);
        this.mCheckBox[12] = (CheckBox) findViewById(R.id.NetworkInfo_TBF);
        this.mCheckBox[13] = (CheckBox) findViewById(R.id.NetworkInfo_GPRS);
        this.mCheckBox[70] = (CheckBox) findViewById(R.id.NetworkInfo_3GGeneralStatus);
        this.mCheckBox[Content.SM_INFO_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GSmEmInfo);
        this.mCheckBox[Content.MM_INFO_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GMmEmInfo);
        this.mCheckBox[56] = (CheckBox) findViewById(R.id.NetworkInfo_3GGmmEmInfo);
        this.mCheckBox[Content.TCM_MMI_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GTcmMmiEmInfo);
        this.mCheckBox[Content.CSCE_SERV_CELL_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GCsceEMServCellSStatusInd);
        this.mCheckBox[Content.CSCE_NEIGH_CELL_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_xGCsceEMNeighCellSStatusInd);
        this.mCheckBox[Content.CSCE_MULTIPLMN_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GCsceEmInfoMultiPlmn);
        this.mCheckBox[Content.PERIOD_IC_BLER_REPORT_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GMemeEmPeriodicBlerReportInd);
        this.mCheckBox[Content.URR_UMTS_SRNC_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GUrrUmtsSrncId);
        this.mCheckBox[Content.HSERV_CELL_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GMemeEmInfoHServCellInd);
        View viewFindViewById = findViewById(R.id.View_2G);
        View viewFindViewById2 = findViewById(R.id.View_COMMON);
        View viewFindViewById3 = findViewById(R.id.View_3G_FDD);
        View viewFindViewById4 = findViewById(R.id.View_3G_TDD);
        View viewFindViewById5 = findViewById(R.id.View_3G_COMMON);
        if (this.mSimType == 0) {
            int i2 = sModemType;
            if (i2 == 1) {
                viewFindViewById4.setVisibility(8);
                this.mCheckBox[Content.UMTS_CELL_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GMemeEmInfoUmtsCellStatus);
                this.mCheckBox[Content.PSDATA_RATE_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GSlceEmPsDataRateStatusInd);
            } else if (i2 == 2) {
                viewFindViewById3.setVisibility(8);
                this.mCheckBox[Content.HANDOVER_SEQUENCE_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GHandoverSequenceIndStuct);
                this.mCheckBox[Content.UL_ADM_POOL_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GUl2EmAdmPoolStatusIndStruct);
                this.mCheckBox[Content.UL_PSDATA_RATE_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GUl2EmPsDataRateStatusIndStruct);
                this.mCheckBox[Content.UL_HSDSCH_RECONFIG_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3Gul2EmHsdschReconfigStatusIndStruct);
                this.mCheckBox[Content.UL_URLC_EVENT_STATUS_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GUl2EmUrlcEventStatusIndStruct);
                this.mCheckBox[Content.UL_PERIOD_IC_BLER_REPORT_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GUl2EmPeriodicBlerReportInd);
            } else {
                viewFindViewById5.setVisibility(8);
                viewFindViewById4.setVisibility(8);
                viewFindViewById3.setVisibility(8);
            }
        } else {
            viewFindViewById.setVisibility(8);
            viewFindViewById2.setVisibility(8);
            viewFindViewById5.setVisibility(8);
            viewFindViewById4.setVisibility(8);
            viewFindViewById3.setVisibility(8);
        }
        if (ModemCategory.isCdma()) {
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
            this.mCheckBox[299] = (CheckBox) findViewById(R.id.NetworkInfo_EVDO_Force_Tx_Ant);
        } else {
            findViewById(R.id.View_CDMA).setVisibility(8);
        }
        if (FeatureSupport.is90Modem()) {
            findViewById(R.id.NetworkInfo_EVDO_Force_Tx_Ant).setVisibility(8);
        }
        this.mCheckBox[Content.SLCE_VOICE_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GSlceVoice);
        this.mCheckBox[Content.SECURITY_CONFIGURATION_INDEX] = (CheckBox) findViewById(R.id.NetworkInfo_3GSecurityConfiguration);
        this.mCheckBox[Content.SLCE_VOICE_INDEX].setVisibility(8);
        this.mCheckBox[Content.SECURITY_CONFIGURATION_INDEX].setVisibility(8);
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
