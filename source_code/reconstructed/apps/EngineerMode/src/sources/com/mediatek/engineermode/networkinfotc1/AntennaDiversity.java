package com.mediatek.engineermode.networkinfotc1;

import android.app.Activity;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.TextView;
import android.widget.ToggleButton;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mdmcomponent.MDMContent;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class AntennaDiversity extends Activity implements View.OnClickListener, MDMCoreOperation.IMDMSeiviceInterface {
    private static final int ANT_BOTH = 3;
    private static final int ANT_DRX = 2;
    private static final int ANT_PRX = 1;
    private static final String DEFAULT_VALUE = "---";
    private static final int DIALOG_WAIT_INIT = 0;
    private static final int DIALOG_WAIT_SUBSCRIB = 1;
    private static final int DIALOG_WAIT_UNSUBSCRIB = 2;
    private static final int MODE_INDEX_BASE_3G = 10;
    private static final int MSG_NW_INFO_QUERY_3G_4G_ANT = 1;
    private static final int MSG_NW_INFO_QUERY_CDMA_ANT = 2;
    private static final int MSG_NW_INFO_SET_ANT = 3;
    private static final int MSG_NW_INFO_SET_ANT_CDMA = 4;
    private static final String TAG = "AntennaDiversity";
    private ToggleButton m1xBoth;
    private ToggleButton m1xDrx;
    private ToggleButton m1xPrx;
    private TextView m1xRssiAnt0;
    private TextView m1xRssiAnt1;
    private TextView m1xRssiCombine;
    private ToggleButton m3GBoth;
    private ToggleButton m3GDrx;
    private ToggleButton m3GPrx;
    private ToggleButton m4GBoth;
    private ToggleButton m4GDrx;
    private ToggleButton m4GPrx;
    private ToggleButton mEvdoBoth;
    private ToggleButton mEvdoDrx;
    private ToggleButton mEvdoPrx;
    private TextView mEvdoRssiAnt0;
    private TextView mEvdoRssiAnt1;
    private TextView mEvdoRssiCombine;
    private TextView mLteRsrpAnt0;
    private TextView mLteRsrpAnt1;
    private TextView mLteRsrpCombine;
    private TextView mLteRsrqAnt0;
    private TextView mLteRsrqAnt1;
    private TextView mLteRsrqCombine;
    private TextView mLteRssiAnt0;
    private TextView mLteRssiAnt1;
    private TextView mLteRssiCombine;
    private TextView mLteSinrAnt0;
    private TextView mLteSinrAnt1;
    private TextView mLteSinrCombine;
    private ProgressDialog mProgressDialog;
    private ProgressDialog mProgressDialog1;
    private ProgressDialog mProgressDialog2;
    private TextView mWcdmaRscpAnt0;
    private TextView mWcdmaRscpAnt1;
    private TextView mWcdmaRscpCombine;
    private TextView mWcdmaRssiAnt0;
    private TextView mWcdmaRssiAnt1;
    private TextView mWcdmaRssiCombine;
    private int m3gAnt = -1;
    private int m4gAnt = -1;
    private int mCdmaAnt = -1;
    private String mExtent = "+ERXTESTMODE:";
    private List<MdmBaseComponent> componentsArray = new ArrayList();
    private int mSimTypeToShow = 0;
    private String[] SubscribeMsgIdNameCDMA = {MDMContent.MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND, MDMContent.MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND};
    private String[] SubscribeMsgIdNameLTE = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};
    private String[] SubscribeMsgIdNameFDD = {MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND};
    private Handler mAtCmdHandler = new Handler() { // from class: com.mediatek.engineermode.networkinfotc1.AntennaDiversity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult.exception != null) {
                    Elog.e(AntennaDiversity.TAG, "Query 3G/4G antenna currect mode failed.");
                    return;
                }
                for (String str : (String[]) asyncResult.result) {
                    AntennaDiversity.this.parseCurrentMode(str);
                }
                AntennaDiversity.this.updateButtons();
                return;
            }
            if (i != 2) {
                if (i == 3) {
                    if (((AsyncResult) message.obj).exception == null) {
                        Elog.d(AntennaDiversity.TAG, "set 3G/4G antenna mode succeed.");
                        return;
                    } else {
                        Elog.e(AntennaDiversity.TAG, "set 3G/4G antenna mode failed.");
                        return;
                    }
                }
                if (i != 4) {
                    return;
                }
                if (((AsyncResult) message.obj).exception != null) {
                    Elog.e(AntennaDiversity.TAG, "set cdma antenna mode failed.");
                    return;
                }
                Elog.d(AntennaDiversity.TAG, "set cdma antenna mode succeed.on/off RF");
                EmUtils.setAirplaneModeEnabled(true);
                EmUtils.setAirplaneModeEnabled(false);
                return;
            }
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            if (asyncResult2.exception != null) {
                Elog.e(AntennaDiversity.TAG, "exception");
                return;
            }
            String[] strArr = (String[]) asyncResult2.result;
            Elog.v(AntennaDiversity.TAG, "cdma,data[0] = " + strArr[0]);
            try {
                String strSubstring = strArr[0].substring(AntennaDiversity.this.mExtent.length());
                Elog.v(AntennaDiversity.TAG, "data[0] = " + strSubstring);
                AntennaDiversity.this.mCdmaAnt = Integer.parseInt(strSubstring);
                AntennaDiversity.this.updateButtons();
            } catch (NumberFormatException e) {
            }
        }
    };

    private void QueryAntennaStatus() {
        sendATCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+ERXTESTMODE?", "+ERXTESTMODE:", "DESTRILD:C2K"}), 2);
        sendATCommand(new String[]{"AT+ERXPATH?", "+ERXPATH:"}, 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void parseCurrentMode(String str) {
        Elog.d(TAG, "parseCurrentMode data= " + str);
        try {
            int iIntValue = Integer.valueOf(str.substring("+ERXPATH:".length()).trim()).intValue();
            if (iIntValue >= 10) {
                this.m3gAnt = (iIntValue - 10) + 1;
                Elog.d(TAG, "parseCurrent3GMode is: " + this.m3gAnt);
                return;
            }
            if (iIntValue == 0) {
                this.m4gAnt = 3;
            } else if (iIntValue == 1) {
                this.m4gAnt = 1;
            } else if (iIntValue == 2) {
                this.m4gAnt = 2;
            } else {
                this.m4gAnt = -1;
            }
            Elog.d(TAG, "parseCurrentLteMode is: " + this.m4gAnt);
        } catch (Exception e) {
            Elog.e(TAG, "Wrong current mode format: " + str);
        }
    }

    private void registerNetworkInfo() {
        MdmBaseComponent mdmBaseComponent = new MdmBaseComponent();
        mdmBaseComponent.setEmComponentName(this.SubscribeMsgIdNameCDMA);
        this.componentsArray.add(mdmBaseComponent);
        MdmBaseComponent mdmBaseComponent2 = new MdmBaseComponent();
        mdmBaseComponent2.setEmComponentName(this.SubscribeMsgIdNameLTE);
        this.componentsArray.add(mdmBaseComponent2);
        MdmBaseComponent mdmBaseComponent3 = new MdmBaseComponent();
        mdmBaseComponent3.setEmComponentName(this.SubscribeMsgIdNameFDD);
        this.componentsArray.add(mdmBaseComponent3);
        MDMCoreOperation.getInstance().mdmlSubscribe();
    }

    private void sendATCommand(String[] strArr, int i) {
        Elog.v(TAG, "sendATCommand = " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mAtCmdHandler.obtainMessage(i));
    }

    private void setDefaultText() {
        this.mWcdmaRscpAnt0.setText(DEFAULT_VALUE);
        this.mWcdmaRssiAnt0.setText(DEFAULT_VALUE);
        this.mWcdmaRscpAnt1.setText(DEFAULT_VALUE);
        this.mWcdmaRssiAnt1.setText(DEFAULT_VALUE);
        this.mWcdmaRscpCombine.setText(DEFAULT_VALUE);
        this.mWcdmaRssiCombine.setText(DEFAULT_VALUE);
        this.mLteRsrpAnt0.setText(DEFAULT_VALUE);
        this.mLteRsrqAnt0.setText(DEFAULT_VALUE);
        this.mLteRssiAnt0.setText(DEFAULT_VALUE);
        this.mLteSinrAnt0.setText(DEFAULT_VALUE);
        this.mLteRsrpAnt1.setText(DEFAULT_VALUE);
        this.mLteRsrqAnt1.setText(DEFAULT_VALUE);
        this.mLteRssiAnt1.setText(DEFAULT_VALUE);
        this.mLteSinrAnt1.setText(DEFAULT_VALUE);
        this.mLteRsrpCombine.setText(DEFAULT_VALUE);
        this.mLteRsrqCombine.setText(DEFAULT_VALUE);
        this.mLteRssiCombine.setText(DEFAULT_VALUE);
        this.mLteSinrCombine.setText(DEFAULT_VALUE);
        this.m1xRssiAnt0.setText(DEFAULT_VALUE);
        this.m1xRssiAnt1.setText(DEFAULT_VALUE);
        this.m1xRssiCombine.setText(DEFAULT_VALUE);
        this.mEvdoRssiAnt0.setText(DEFAULT_VALUE);
        this.mEvdoRssiAnt1.setText(DEFAULT_VALUE);
        this.mEvdoRssiCombine.setText(DEFAULT_VALUE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateButtons() {
        this.m3GPrx.setChecked(this.m3gAnt == 1);
        this.m3GDrx.setChecked(this.m3gAnt == 2);
        this.m3GBoth.setChecked(this.m3gAnt == 3);
        this.m4GPrx.setChecked(this.m4gAnt == 1);
        this.m4GDrx.setChecked(this.m4gAnt == 2);
        this.m4GBoth.setChecked(this.m4gAnt == 3);
        this.m1xPrx.setChecked(this.mCdmaAnt == 1);
        this.m1xDrx.setChecked(this.mCdmaAnt == 2);
        this.m1xBoth.setChecked(this.mCdmaAnt == 3);
        this.mEvdoPrx.setChecked(this.mCdmaAnt == 1);
        this.mEvdoDrx.setChecked(this.mCdmaAnt == 2);
        this.mEvdoBoth.setChecked(this.mCdmaAnt == 3);
    }

    int getFieldValue(Msg msg, String str) {
        return MDMCoreOperation.getInstance().getFieldValue(msg, str, false);
    }

    int getFieldValue(Msg msg, String str, boolean z) {
        return MDMCoreOperation.getInstance().getFieldValue(msg, str, z);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        showDialog(2);
        MDMCoreOperation.getInstance().mdmlUnSubscribe();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String str = "";
        int i = this.m3gAnt;
        int i2 = this.m4gAnt;
        int i3 = this.mCdmaAnt;
        if (view.getId() == this.m3GPrx.getId()) {
            this.m3gAnt = 1;
            str = "AT+ERXPATH=10";
        } else if (view.getId() == this.m3GDrx.getId()) {
            this.m3gAnt = 2;
            str = "AT+ERXPATH=11";
        } else if (view.getId() == this.m3GBoth.getId()) {
            this.m3gAnt = 3;
            str = "AT+ERXPATH=12";
        } else if (view.getId() == this.m4GPrx.getId()) {
            this.m4gAnt = 1;
            str = (FeatureSupport.is95Modem() || FeatureSupport.is97Modem()) ? "AT+EGMC=1,\"rx_path\", 1, 0, 1, 1, 1, 1" : "AT+ERXPATH=1";
        } else if (view.getId() == this.m4GDrx.getId()) {
            this.m4gAnt = 2;
            str = (FeatureSupport.is95Modem() || FeatureSupport.is97Modem()) ? "AT+EGMC=1,\"rx_path\", 1, 0, 2, 2, 2, 2" : "AT+ERXPATH=2";
        } else if (view.getId() == this.m4GBoth.getId()) {
            this.m4gAnt = 3;
            str = (FeatureSupport.is95Modem() || FeatureSupport.is97Modem()) ? "AT+EGMC=1,\"rx_path\", 1, 0, 3, 3, 3, 3" : "AT+ERXPATH=0";
        } else if (view.getId() == this.m1xPrx.getId()) {
            this.mCdmaAnt = 1;
        } else if (view.getId() == this.m1xDrx.getId()) {
            this.mCdmaAnt = 2;
        } else if (view.getId() == this.m1xBoth.getId()) {
            this.mCdmaAnt = 3;
        } else if (view.getId() == this.mEvdoPrx.getId()) {
            this.mCdmaAnt = 1;
        } else if (view.getId() == this.mEvdoDrx.getId()) {
            this.mCdmaAnt = 2;
        } else if (view.getId() == this.mEvdoBoth.getId()) {
            this.mCdmaAnt = 3;
        }
        if (i != this.m3gAnt || i2 != this.m4gAnt) {
            sendATCommand(new String[]{str, ""}, 3);
        } else if (i3 != this.mCdmaAnt) {
            sendATCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+ERXTESTMODE=" + this.mCdmaAnt, "", "DESTRILD:C2K"}), 4);
        }
        setDefaultText();
        updateButtons();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.antenna_diversity);
        this.mWcdmaRscpAnt0 = (TextView) findViewById(R.id.antenna_diversity_rscp_ant0);
        this.mWcdmaRscpAnt1 = (TextView) findViewById(R.id.antenna_diversity_rscp_ant1);
        this.mWcdmaRscpCombine = (TextView) findViewById(R.id.antenna_diversity_rscp_combined);
        this.mWcdmaRssiAnt0 = (TextView) findViewById(R.id.antenna_diversity_pssi_ant0);
        this.mWcdmaRssiAnt1 = (TextView) findViewById(R.id.antenna_diversity_pssi_ant1);
        this.mWcdmaRssiCombine = (TextView) findViewById(R.id.antenna_diversity_pssi_combined);
        this.mLteRsrpAnt0 = (TextView) findViewById(R.id.antenna_diversity_rsrp_ant0);
        this.mLteRsrpAnt1 = (TextView) findViewById(R.id.antenna_diversity_rsrp_ant1);
        this.mLteRsrpCombine = (TextView) findViewById(R.id.antenna_diversity_rsrp_combined);
        this.mLteRsrqAnt0 = (TextView) findViewById(R.id.antenna_diversity_rsrq_ant0);
        this.mLteRsrqAnt1 = (TextView) findViewById(R.id.antenna_diversity_rsrq_ant1);
        this.mLteRsrqCombine = (TextView) findViewById(R.id.antenna_diversity_rsrq_combined);
        this.mLteRssiAnt0 = (TextView) findViewById(R.id.antenna_diversity_rssi_ant0);
        this.mLteRssiAnt1 = (TextView) findViewById(R.id.antenna_diversity_rssi_ant1);
        this.mLteRssiCombine = (TextView) findViewById(R.id.antenna_diversity_rssi_combined);
        this.mLteSinrAnt0 = (TextView) findViewById(R.id.antenna_diversity_sinr_ant0);
        this.mLteSinrAnt1 = (TextView) findViewById(R.id.antenna_diversity_sinr_ant1);
        this.mLteSinrCombine = (TextView) findViewById(R.id.antenna_diversity_sinr_combined);
        this.m1xRssiAnt0 = (TextView) findViewById(R.id.antenna_diversity_1x_rssi_ant0);
        this.m1xRssiAnt1 = (TextView) findViewById(R.id.antenna_diversity_1x_rssi_ant1);
        this.m1xRssiCombine = (TextView) findViewById(R.id.antenna_diversity_1x_rssi_combined);
        this.mEvdoRssiAnt0 = (TextView) findViewById(R.id.antenna_diversity_evdo_rssi_ant0);
        this.mEvdoRssiAnt1 = (TextView) findViewById(R.id.antenna_diversity_evdo_rssi_ant1);
        this.mEvdoRssiCombine = (TextView) findViewById(R.id.antenna_diversity_evdo_rssi_combined);
        this.m3GPrx = (ToggleButton) findViewById(R.id.antenna_diversity_3g_prx);
        this.m3GDrx = (ToggleButton) findViewById(R.id.antenna_diversity_3g_drx);
        this.m3GBoth = (ToggleButton) findViewById(R.id.antenna_diversity_3g_prx_drx);
        this.m4GPrx = (ToggleButton) findViewById(R.id.antenna_diversity_4g_prx);
        this.m4GDrx = (ToggleButton) findViewById(R.id.antenna_diversity_4g_drx);
        this.m4GBoth = (ToggleButton) findViewById(R.id.antenna_diversity_4g_prx_drx);
        this.m1xPrx = (ToggleButton) findViewById(R.id.antenna_diversity_1x_prx);
        this.m1xDrx = (ToggleButton) findViewById(R.id.antenna_diversity_1x_drx);
        this.m1xBoth = (ToggleButton) findViewById(R.id.antenna_diversity_1x_prx_drx);
        this.mEvdoPrx = (ToggleButton) findViewById(R.id.antenna_diversity_evdo_prx);
        this.mEvdoDrx = (ToggleButton) findViewById(R.id.antenna_diversity_evdo_drx);
        this.mEvdoBoth = (ToggleButton) findViewById(R.id.antenna_diversity_evdo_prx_drx);
        this.m3GPrx.setOnClickListener(this);
        this.m3GDrx.setOnClickListener(this);
        this.m3GBoth.setOnClickListener(this);
        this.m4GPrx.setOnClickListener(this);
        this.m4GDrx.setOnClickListener(this);
        this.m4GBoth.setOnClickListener(this);
        this.m1xPrx.setOnClickListener(this);
        this.m1xDrx.setOnClickListener(this);
        this.m1xBoth.setOnClickListener(this);
        this.mEvdoPrx.setOnClickListener(this);
        this.mEvdoDrx.setOnClickListener(this);
        this.mEvdoBoth.setOnClickListener(this);
        this.mSimTypeToShow = 0;
        showDialog(0);
        MDMCoreOperation.getInstance().mdmInitialize(this);
        MDMCoreOperation.getInstance().setOnMDMChangedListener(this);
        MDMCoreOperation.getInstance().mdmParametersSeting(this.componentsArray, this.mSimTypeToShow);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i == 0) {
            Elog.d(TAG, "Wait MDML init");
            ProgressDialog progressDialog = new ProgressDialog(this);
            this.mProgressDialog = progressDialog;
            progressDialog.setTitle("Waiting");
            this.mProgressDialog.setMessage("Wait MDML init");
            this.mProgressDialog.setCancelable(false);
            this.mProgressDialog.setIndeterminate(true);
            return this.mProgressDialog;
        }
        if (i == 1) {
            Elog.d(TAG, "Before Wait subscribe message..");
            ProgressDialog progressDialog2 = new ProgressDialog(this);
            this.mProgressDialog1 = progressDialog2;
            progressDialog2.setTitle("Waiting");
            this.mProgressDialog1.setMessage("Wait subscribe message..");
            this.mProgressDialog1.setCancelable(false);
            this.mProgressDialog1.setIndeterminate(true);
            return this.mProgressDialog1;
        }
        if (i != 2) {
            return super.onCreateDialog(i);
        }
        Elog.d(TAG, "Before Wait Unsubscribe message..");
        ProgressDialog progressDialog3 = new ProgressDialog(this);
        this.mProgressDialog2 = progressDialog3;
        progressDialog3.setTitle("Waiting");
        this.mProgressDialog2.setMessage("Wait Unsubscribe message..");
        this.mProgressDialog2.setCancelable(false);
        this.mProgressDialog2.setIndeterminate(true);
        return this.mProgressDialog2;
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Elog.d(TAG, "onDestroy");
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        QueryAntennaStatus();
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMData(String str, Msg msg) {
        Elog.d(TAG, "update = " + str);
        if (str.equals(MDMContent.MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND)) {
            updateCdma1xInfo(msg);
            return;
        }
        if (str.equals(MDMContent.MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND)) {
            updateCdmaEvdoInfo(msg);
        } else if (str.equals(MDMContent.MSG_ID_EM_EL1_STATUS_IND)) {
            updateLTEInfo(msg);
        } else if (str.equals(MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND)) {
            updateWcdmaInfo(msg);
        }
    }

    @Override // com.mediatek.engineermode.networkinfotc1.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMStatus(int i) {
        if (i == 0) {
            Elog.d(TAG, "MDM Service init done");
            registerNetworkInfo();
            removeDialog(0);
            showDialog(1);
            return;
        }
        if (i == 1) {
            Elog.d(TAG, "Subscribe message id done");
            removeDialog(1);
            MDMCoreOperation.getInstance().mdmlEnableSubscribe();
        } else {
            if (i != 4) {
                return;
            }
            Elog.d(TAG, "UnSubscribe message id done");
            removeDialog(2);
            MDMCoreOperation.getInstance().mdmlClosing();
            finish();
        }
    }

    void updateCdma1xInfo(Msg msg) {
        int fieldValue = getFieldValue(msg, MDMContent.C2K_L4_RX_POWER, true);
        int fieldValue2 = getFieldValue(msg, "div_rx_power", true);
        int i = fieldValue > fieldValue2 ? fieldValue : fieldValue2;
        Elog.d(TAG, "prx_power = " + fieldValue);
        Elog.d(TAG, "drx_power = " + i);
        Elog.d(TAG, "rx_power = " + i);
        int i2 = this.mCdmaAnt;
        if (i2 == 1) {
            this.m1xRssiAnt0.setText(fieldValue + "");
            return;
        }
        if (i2 == 2) {
            this.m1xRssiAnt1.setText(i + "");
            return;
        }
        if (i2 != 3) {
            return;
        }
        this.m1xRssiCombine.setText(i + "");
    }

    void updateCdmaEvdoInfo(Msg msg) {
        int fieldValue = getFieldValue(msg, "rssi_dbm", true) / 128;
        int fieldValue2 = getFieldValue(msg, "div_rssi", true) / 128;
        int i = fieldValue > fieldValue2 ? fieldValue : fieldValue2;
        Elog.d(TAG, "prx_power = " + fieldValue);
        Elog.d(TAG, "drx_power = " + fieldValue2);
        Elog.d(TAG, "rx_power = " + i);
        int i2 = this.mCdmaAnt;
        if (i2 == 1) {
            this.mEvdoRssiAnt0.setText(fieldValue + "");
            return;
        }
        if (i2 == 2) {
            this.mEvdoRssiAnt1.setText(fieldValue2 + "");
            return;
        }
        if (i2 != 3) {
            return;
        }
        this.mEvdoRssiCombine.setText(i + "");
    }

    void updateLTEInfo(Msg msg) {
        int fieldValue = getFieldValue(msg, "dl_info[0].dl_rsrp[0]", true);
        int fieldValue2 = getFieldValue(msg, "dl_info[0].dl_rsrq[0]", true);
        int fieldValue3 = getFieldValue(msg, "dl_info[0].dl_rssi[0]", true);
        int fieldValue4 = getFieldValue(msg, "dl_info[0].dl_sinr[0]", true);
        int fieldValue5 = getFieldValue(msg, "dl_info[0].dl_rsrp[1]", true);
        int fieldValue6 = getFieldValue(msg, "dl_info[0].dl_rsrq[1]", true);
        int fieldValue7 = getFieldValue(msg, "dl_info[0].dl_rssi[1]", true);
        int fieldValue8 = getFieldValue(msg, "dl_info[0].dl_sinr[1]", true);
        int fieldValue9 = getFieldValue(msg, "dl_info[0].rsrp", true);
        int fieldValue10 = getFieldValue(msg, "dl_info[0].rsrq", true);
        int i = fieldValue3 > fieldValue7 ? fieldValue3 : fieldValue7;
        int fieldValue11 = getFieldValue(msg, "dl_info[0].sinr", true);
        Elog.d(TAG, "dl_rsrp0 = " + fieldValue);
        Elog.d(TAG, "dl_rsrq0 = " + fieldValue2);
        Elog.d(TAG, "dl_rssi0 = " + fieldValue3);
        Elog.d(TAG, "dl_sinr0 = " + fieldValue4);
        Elog.d(TAG, "dl_rsrp1 = " + fieldValue5);
        Elog.d(TAG, "dl_rsrq1 = " + fieldValue6);
        Elog.d(TAG, "dl_rssi1 = " + fieldValue7);
        Elog.d(TAG, "dl_sinr1 = " + fieldValue8);
        Elog.d(TAG, "dl_rsrp = " + fieldValue9);
        Elog.d(TAG, "dl_rsrq = " + fieldValue10);
        Elog.d(TAG, "dl_rssi = " + i);
        Elog.d(TAG, "dl_sinr = " + fieldValue11);
        int i2 = this.m4gAnt;
        if (i2 == 1) {
            this.mLteRsrpAnt0.setText(fieldValue + "");
            this.mLteRsrqAnt0.setText(fieldValue2 + "");
            this.mLteRssiAnt0.setText(fieldValue3 + "");
            this.mLteSinrAnt0.setText(fieldValue4 + "");
            return;
        }
        if (i2 == 2) {
            this.mLteRsrpAnt1.setText(fieldValue5 + "");
            this.mLteRsrqAnt1.setText(fieldValue6 + "");
            this.mLteRssiAnt1.setText(fieldValue7 + "");
            this.mLteSinrAnt1.setText(fieldValue8 + "");
            return;
        }
        if (i2 != 3) {
            return;
        }
        this.mLteRsrpCombine.setText(fieldValue9 + "");
        this.mLteRsrqCombine.setText(fieldValue10 + "");
        this.mLteRssiCombine.setText(i + "");
        this.mLteSinrCombine.setText(fieldValue11 + "");
    }

    void updateWcdmaInfo(Msg msg) {
        int fieldValue = getFieldValue(msg, "EmUl1Tas.main_ant_idx");
        int fieldValue2 = getFieldValue(msg, "EmUl1Tas.rscp_0", true);
        int fieldValue3 = getFieldValue(msg, "EmUl1Tas.rscp_1", true);
        int fieldValue4 = getFieldValue(msg, "EmUl1Tas.rscp_2", true);
        int fieldValue5 = getFieldValue(msg, "EmUl1Tas.rssi_0", true);
        int fieldValue6 = getFieldValue(msg, "EmUl1Tas.rssi_1", true);
        int fieldValue7 = getFieldValue(msg, "EmUl1Tas.rssi_2", true);
        int fieldValue8 = getFieldValue(msg, "EmUl1Tas.rscp_max", true);
        int fieldValue9 = getFieldValue(msg, "EmUl1Tas.rssi_max", true);
        int i = 0;
        int i2 = 0;
        int i3 = 0;
        int i4 = 0;
        if (fieldValue == 0) {
            i = fieldValue2;
            i2 = fieldValue5;
            i3 = fieldValue3;
            i4 = fieldValue6;
        } else if (fieldValue == 1) {
            i = fieldValue3;
            i2 = fieldValue6;
            i3 = fieldValue2;
            i4 = fieldValue5;
        } else if (fieldValue == 2) {
            i = fieldValue4;
            i2 = fieldValue7;
            i3 = fieldValue3;
            i4 = fieldValue6;
        } else if (fieldValue == 3) {
            i = fieldValue3;
            i2 = fieldValue6;
            i3 = fieldValue4;
            i4 = fieldValue7;
        }
        Elog.d(TAG, "rscp_main = " + i);
        Elog.d(TAG, "rssi_main = " + i2);
        Elog.d(TAG, "rscp_div = " + i3);
        Elog.d(TAG, "rssi_div = " + i4);
        int i5 = this.m3gAnt;
        if (i5 == 1) {
            this.mWcdmaRscpAnt0.setText(i + "");
            this.mWcdmaRssiAnt0.setText(i2 + "");
            return;
        }
        if (i5 == 2) {
            this.mWcdmaRscpAnt1.setText(i3 + "");
            this.mWcdmaRssiAnt1.setText(i4 + "");
            return;
        }
        if (i5 != 3) {
            return;
        }
        this.mWcdmaRscpCombine.setText(fieldValue8 + "");
        this.mWcdmaRssiCombine.setText(fieldValue9 + "");
    }
}
