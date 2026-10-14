package com.mediatek.engineermode.networkinfotc1;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mdmcomponent.MDMContent;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class MDMSample extends Activity implements View.OnClickListener, MDMCoreOperation.IMDMSeiviceInterface {
    private static final int MSG_UPDATE_UI = 0;
    private static final String TAG = "MDMSample";
    private TextView mResult;
    private Button mStart_listen;
    private Button mStop_listen;
    private String info = "";
    private List<MdmBaseComponent> componentsArray = new ArrayList();
    private int mSimTypeToShow = 0;
    private String[] SubscribeMsgIdName = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND, MDMContent.MSG_ID_EM_EL1_STATUS_IND, "EM_EL1_STATUS_DL_INFO"};

    private void bindViews() {
        this.mStart_listen = (Button) findViewById(R.id.start_listen);
        this.mStop_listen = (Button) findViewById(R.id.stop_listen);
        this.mResult = (TextView) findViewById(R.id.result);
        this.mStart_listen.setOnClickListener(this);
        this.mStop_listen.setOnClickListener(this);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int id = view.getId();
        if (id == R.id.start_listen) {
            MDMCoreOperation.getInstance().mdmInitialize(this);
        } else {
            if (id != R.id.stop_listen) {
                return;
            }
            MDMCoreOperation.getInstance().mdmlUnSubscribe();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.mdm_sample);
        bindViews();
        this.mSimTypeToShow = 0;
        MdmBaseComponent mdmBaseComponent = new MdmBaseComponent();
        mdmBaseComponent.setEmComponentName(this.SubscribeMsgIdName);
        this.componentsArray.add(mdmBaseComponent);
        MDMCoreOperation.getInstance().mdmParametersSeting(this.componentsArray, this.mSimTypeToShow);
        MDMCoreOperation.getInstance().setOnMDMChangedListener(this);
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMData(String str, Msg msg) {
        Elog.d(TAG, "update = " + str);
        if (str.equals(MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND)) {
            this.info = "";
            int fieldValue = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.rsrp", true);
            int fieldValue2 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.rsrq", true);
            int fieldValue3 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.rs_snr_in_qdb", true);
            int fieldValue4 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.earfcn");
            int fieldValue5 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.pci");
            int fieldValue6 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info.serv_lte_band");
            int fieldValue7 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info." + MDMContent.DL_BANDWIDTH, true);
            int fieldValue8 = MDMCoreOperation.getInstance().getFieldValue(msg, "serving_info." + MDMContent.UL_BANDWIDTH, true);
            this.info += "rsrp: " + fieldValue + "\n";
            this.info += "rsrq: " + fieldValue2 + "\n";
            this.info += "sinr: " + fieldValue3 + "\n";
            this.info += "earfcn: " + fieldValue4 + "\n";
            this.info += "pci: " + fieldValue5 + "\n";
            this.info += "band: " + fieldValue6 + "\n";
            this.info += "dlBandwidth: " + fieldValue7 + "\n";
            this.info += "ulBandwidth: " + fieldValue8 + "\n";
            Elog.d(TAG, "info = " + this.info);
            this.mResult.setText(this.info);
        }
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMStatus(int i) {
        if (i == 0) {
            Elog.d(TAG, "MDM Service init done");
            MDMCoreOperation.getInstance().mdmlSubscribe();
        } else if (i == 1) {
            Elog.d(TAG, "Subscribe message id done");
            MDMCoreOperation.getInstance().mdmlEnableSubscribe();
        } else {
            if (i != 4) {
                return;
            }
            Elog.d(TAG, "UnSubscribe message id done");
            MDMCoreOperation.getInstance().mdmlClosing();
        }
    }
}
