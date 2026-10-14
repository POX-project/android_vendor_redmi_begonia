package com.mediatek.engineermode.networkinfotc1;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mdmcomponent.MDMContent;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class SecurityStatus extends Activity implements MDMCoreOperation.IMDMSeiviceInterface {
    private static final String TAG = "SecurityStatus";
    private TextView m2gCipher;
    private TextView m2gGprs;
    private TextView m3gCipher;
    private TextView m3gIntegrity;
    private TextView m4gEnasCipher;
    private TextView m4gEnasIntegrity;
    private TextView m4gErrcCipher;
    private TextView m4gErrcIntegrity;
    String[] m2gCipherInfo = {"No Ciphering", "A5/1", "A5/2", "A5/3", "A5/4", "A5/5", "A5/6", "A5/7"};
    String[] m2gGprsInfo = {"No Ciphering", "GEA1", "GEA2", "GEA3"};
    String[] m3gCipherInfo = {"No Ciphering", "UEA0", "UEA1", "", "UEA2"};
    String[] m3gIntegrityInfo = {"No Integrity", "UIA1", "UIA2"};
    String[] m4gEnasCipherInfo = {"EEA0(NULL)", "EEA1(SNOW3G)", "EEA2(AES)", "EEA3(ZUC)"};
    String[] m4gEnasIntegrityInfo = {"EIA0(NULL)", "EIA1(SNOW3G)", "EIA2(AES)", "EIA3(ZUC)"};
    String[] m4gErrcCipherInfo = {"EEA0(NULL)", "EEA1(SNOW3G)", "EEA2(AES)", "EEA3(ZUC)"};
    String[] m4gErrcIntegrityInfo = {"EIA0(NULL)", "EIA1(SNOW3G)", "EIA2(AES)", "EIA3(ZUC)"};
    private List<MdmBaseComponent> componentsArray = new ArrayList();
    private int mSimTypeToShow = 0;
    private String[] SubscribeMsgIdName = {"MSG_ID_EM_RRM_CHANNEL_DESCR_INFO_IND", "MSG_ID_EM_LLC_STATUS_IND", "MSG_ID_EM_RRCE_3G_SECURITY_CONFIGURATION_STATUS_IND", "MSG_ID_EM_ERRC_SEC_PARAM_IND", "MSG_ID_EM_EMM_SEC_INFO_IND", MDMContent.MSG_ID_EM_ERRC_STATE_IND};

    private void registerNetworkInfo() {
        MdmBaseComponent mdmBaseComponent = new MdmBaseComponent();
        mdmBaseComponent.setEmComponentName(this.SubscribeMsgIdName);
        this.componentsArray.add(mdmBaseComponent);
        MDMCoreOperation.getInstance().mdmlSubscribe();
    }

    int getFieldValue(Msg msg, String str) {
        return MDMCoreOperation.getInstance().getFieldValue(msg, str, false);
    }

    int getFieldValue(Msg msg, String str, boolean z) {
        return MDMCoreOperation.getInstance().getFieldValue(msg, str, z);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.security_status);
        this.m2gCipher = (TextView) findViewById(R.id.security_status_2g_cipher);
        this.m2gGprs = (TextView) findViewById(R.id.security_status_2g_gprs);
        this.m3gCipher = (TextView) findViewById(R.id.security_status_3g_cipher);
        this.m3gIntegrity = (TextView) findViewById(R.id.security_status_3g_integrity);
        this.m4gEnasCipher = (TextView) findViewById(R.id.security_status_4g_enas_cipher);
        this.m4gEnasIntegrity = (TextView) findViewById(R.id.security_status_4g_enas_integrity);
        this.m4gErrcCipher = (TextView) findViewById(R.id.security_status_4g_errc_cipher);
        this.m4gErrcIntegrity = (TextView) findViewById(R.id.security_status_4g_errc_integrity);
        this.mSimTypeToShow = 0;
        MDMCoreOperation.getInstance().mdmInitialize(this);
        MDMCoreOperation.getInstance().setOnMDMChangedListener(this);
        MDMCoreOperation.getInstance().mdmParametersSeting(this.componentsArray, this.mSimTypeToShow);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        MDMCoreOperation.getInstance().mdmlUnSubscribe();
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMData(String str, Msg msg) {
        Elog.d(TAG, "update = " + str);
        if (str.equals("MSG_ID_EM_RRM_CHANNEL_DESCR_INFO_IND")) {
            int fieldValue = getFieldValue(msg, "rr_em_channel_descr_info.cipher_algo");
            this.m2gCipher.setText(this.m2gCipherInfo[fieldValue]);
            Elog.d(TAG, "2G cipher_algo = " + fieldValue + " = " + this.m2gCipherInfo[fieldValue]);
            return;
        }
        if (str.equals("MSG_ID_EM_LLC_STATUS_IND")) {
            int fieldValue2 = getFieldValue(msg, "cipher_algo");
            this.m2gGprs.setText(this.m2gGprsInfo[fieldValue2]);
            Elog.d(TAG, "2G cipher_algo = " + fieldValue2 + " = " + this.m2gGprsInfo[fieldValue2]);
            return;
        }
        if (str.equals("MSG_ID_EM_RRCE_3G_SECURITY_CONFIGURATION_STATUS_IND")) {
            int fieldValue3 = getFieldValue(msg, "uCipheringAlgorithm");
            int fieldValue4 = getFieldValue(msg, "uIntegrityAlgorithm");
            this.m3gCipher.setText(this.m3gCipherInfo[fieldValue3]);
            this.m3gIntegrity.setText(this.m3gIntegrityInfo[fieldValue4]);
            StringBuilder sb = new StringBuilder();
            sb.append("3G ciphering_alg = ");
            sb.append(fieldValue3);
            sb.append(" = ");
            sb.append(fieldValue3 == 255 ? "N/A" : this.m3gCipherInfo[fieldValue3]);
            Elog.d(TAG, sb.toString());
            StringBuilder sb2 = new StringBuilder();
            sb2.append("3G integrity_alg = ");
            sb2.append(fieldValue4);
            sb2.append(" = ");
            sb2.append(fieldValue4 != 255 ? this.m3gIntegrityInfo[fieldValue4] : "N/A");
            Elog.d(TAG, sb2.toString());
            return;
        }
        if (str.equals("MSG_ID_EM_EMM_SEC_INFO_IND")) {
            int fieldValue5 = getFieldValue(msg, "ciphering_alg");
            int fieldValue6 = getFieldValue(msg, "integrity_alg");
            if (fieldValue5 == 255) {
                this.m4gEnasCipher.setText("N/A");
            } else {
                this.m4gEnasCipher.setText(this.m4gEnasCipherInfo[fieldValue5]);
            }
            if (fieldValue6 == 255) {
                this.m4gEnasIntegrity.setText("N/A");
            } else {
                this.m4gEnasIntegrity.setText(this.m4gEnasIntegrityInfo[fieldValue6]);
            }
            StringBuilder sb3 = new StringBuilder();
            sb3.append("4G ciphering_alg = ");
            sb3.append(fieldValue5);
            sb3.append(" = ");
            sb3.append(fieldValue5 == 255 ? "N/A" : this.m4gEnasCipherInfo[fieldValue5]);
            Elog.d(TAG, sb3.toString());
            StringBuilder sb4 = new StringBuilder();
            sb4.append("4G integrity_alg = ");
            sb4.append(fieldValue6);
            sb4.append(" = ");
            sb4.append(fieldValue6 != 255 ? this.m4gEnasIntegrityInfo[fieldValue6] : "N/A");
            Elog.d(TAG, sb4.toString());
            return;
        }
        if (!str.equals("MSG_ID_EM_ERRC_SEC_PARAM_IND")) {
            if (str.equals(MDMContent.MSG_ID_EM_ERRC_STATE_IND)) {
                int fieldValue7 = getFieldValue(msg, MDMContent.EM_ERRC_STATE_ERRC_STS);
                Elog.d(TAG, "errc_sts = " + fieldValue7);
                if (fieldValue7 == 3 || fieldValue7 == 6) {
                    return;
                }
                this.m4gErrcCipher.setText("N/A");
                this.m4gErrcIntegrity.setText("N/A");
                return;
            }
            return;
        }
        int fieldValue8 = getFieldValue(msg, "enc_algo");
        int fieldValue9 = getFieldValue(msg, "int_algo");
        if (fieldValue8 == 255) {
            this.m4gErrcCipher.setText("N/A");
            return;
        }
        this.m4gErrcCipher.setText(this.m4gErrcCipherInfo[fieldValue8]);
        if (fieldValue9 == 255) {
            this.m4gErrcIntegrity.setText("N/A");
            return;
        }
        this.m4gErrcIntegrity.setText(this.m4gErrcIntegrityInfo[fieldValue9]);
        StringBuilder sb5 = new StringBuilder();
        sb5.append("enc_algo = ");
        sb5.append(fieldValue8);
        sb5.append(" = ");
        sb5.append(fieldValue8 == 255 ? "N/A" : this.m4gErrcCipherInfo[fieldValue8]);
        Elog.d(TAG, sb5.toString());
        StringBuilder sb6 = new StringBuilder();
        sb6.append("int_algo = ");
        sb6.append(fieldValue9);
        sb6.append(" = ");
        sb6.append(fieldValue9 != 255 ? this.m4gErrcIntegrityInfo[fieldValue9] : "N/A");
        Elog.d(TAG, sb6.toString());
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMStatus(int i) {
        if (i == 0) {
            Elog.d(TAG, "MDM Service init done");
            registerNetworkInfo();
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
