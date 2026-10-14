package com.mediatek.engineermode.networkinfo;

import android.app.Activity;
import android.content.Intent;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CompoundButton;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mcfconfig.FileUtils;
import java.util.HashMap;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes2.dex */
public class NetworkInfoInfomation extends Activity implements View.OnClickListener, CompoundButton.OnCheckedChangeListener {
    private static final int CDMA_INTERVAL = 2;
    private static int CDMA_URC_TYPE = 10000;
    private static final int FLAG_DATA_BIT = 8;
    private static final int FLAG_OFFSET_BIT = 8;
    private static final int FLAG_OR_DATA = -9;
    private static final int MSG_NW_INFO = 1;
    private static final int MSG_NW_INFO_CDMA = 7;
    private static final int MSG_NW_INFO_CDMA_ENABLE = 8;
    private static final int MSG_NW_INFO_CDMA_SET = 9;
    private static final int MSG_NW_INFO_CLOSE = 4;
    private static final int MSG_NW_INFO_OPEN = 3;
    private static final int MSG_NW_INFO_URC = 2;
    private static final int MSG_NW_INFO_URC_CDMA = 6;
    private static final int MSG_UPDATE_UI = 5;
    private static final String NO_CHANGE = "FEFF";
    private static final String RRC_NO_CHANGE = "06";
    private static final String SERVICE_NO_CHANGE = "04";
    private static final String TAG = "NetworkInfo/Infomation";
    private static final int TOTAL_TIMER = 1000;
    private CdmaInfoAdapter mAdapter;
    private TextView mCurrentForceTxAnt;
    private TextView mCurrentTxAnt;
    private Button mEnable;
    private TextView mHeader;
    private TextView mInfo;
    private int[] mItem;
    private ListView mList;
    private Button mPageDown;
    private Button mPageUp;
    private TextView mPageView;
    private Button mSet;
    private int mSimType;
    private RadioButton mTxRadio0;
    private RadioButton mTxRadio1;
    private NetworkInfoUrcParser mUrcParser;
    private int mItemCount = 0;
    private int mCurrentItem = 0;
    private Timer mTimer = new Timer();
    private int mFlag = 0;
    private HashMap<Integer, NetworkInfoItem> mNetworkInfo = new HashMap<>();
    private int mCdmaItems = 0;
    private int mCdmaTestItems = 0;
    private final Handler mUiHandler = new Handler() { // from class: com.mediatek.engineermode.networkinfo.NetworkInfoInfomation.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 5) {
                NetworkInfoInfomation.this.showNetworkInfo();
            }
        }
    };
    private Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.networkinfo.NetworkInfoInfomation.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult.exception == null) {
                    String[] strArr = (String[]) asyncResult.result;
                    if (strArr.length <= 0 || strArr[0] == null) {
                        Elog.v(NetworkInfoInfomation.TAG, "data[0] is null");
                        return;
                    }
                    Elog.v(NetworkInfoInfomation.TAG, "data[0] is : " + strArr[0]);
                    Elog.v(NetworkInfoInfomation.TAG, "flag is : " + strArr[0].substring(8));
                    NetworkInfoInfomation.this.mFlag = Integer.valueOf(strArr[0].substring(8)).intValue();
                    NetworkInfoInfomation networkInfoInfomation = NetworkInfoInfomation.this;
                    networkInfoInfomation.mFlag = 8 | networkInfoInfomation.mFlag;
                    Elog.v(NetworkInfoInfomation.TAG, "flag change is : " + NetworkInfoInfomation.this.mFlag);
                    for (int i2 = 0; i2 < NetworkInfoInfomation.this.mItemCount; i2++) {
                        if (NetworkInfoInfomation.this.mItem[i2] < 300) {
                            NetworkInfoInfomation.this.sendATCommand(new String[]{"AT+EINFO=" + NetworkInfoInfomation.this.mFlag + "," + NetworkInfoInfomation.this.mItem[i2] + ",0", "+EINFO"}, 3);
                        }
                    }
                }
            } else {
                if (i == 2) {
                    String[] strArr2 = (String[]) ((AsyncResult) message.obj).result;
                    if (strArr2.length <= 0 || strArr2[0] == null || strArr2[1] == null) {
                        Elog.v(NetworkInfoInfomation.TAG, "data[0] is null");
                        return;
                    }
                    Elog.v(NetworkInfoInfomation.TAG, "Receive URC: " + strArr2[0] + ", " + strArr2[1]);
                    try {
                        int i3 = Integer.parseInt(strArr2[0]);
                        if (FeatureSupport.is93Modem()) {
                            int unused = NetworkInfoInfomation.CDMA_URC_TYPE = 1000;
                        } else {
                            int unused2 = NetworkInfoInfomation.CDMA_URC_TYPE = 10000;
                        }
                        if (NetworkInfoInfomation.CDMA_URC_TYPE == i3) {
                            int cdmaInfoTypeForUrc = NetworkInfoInfomation.this.getCdmaInfoTypeForUrc(strArr2[1].trim());
                            Elog.v(NetworkInfoInfomation.TAG, "cdmaType: " + cdmaInfoTypeForUrc);
                            NetworkInfoItem networkInfoItem = (NetworkInfoItem) NetworkInfoInfomation.this.mNetworkInfo.get(Integer.valueOf(cdmaInfoTypeForUrc));
                            if (networkInfoItem == null) {
                                Elog.e(NetworkInfoInfomation.TAG, "Invalid return type: " + cdmaInfoTypeForUrc);
                                return;
                            }
                            networkInfoItem.info = strArr2[1];
                            if (NetworkInfoInfomation.this.mItem[NetworkInfoInfomation.this.mCurrentItem] == cdmaInfoTypeForUrc) {
                                NetworkInfoInfomation.this.showNetworkInfo();
                                return;
                            }
                            return;
                        }
                        NetworkInfoItem networkInfoItem2 = (NetworkInfoItem) NetworkInfoInfomation.this.mNetworkInfo.get(Integer.valueOf(i3));
                        if (networkInfoItem2 == null) {
                            Elog.e(NetworkInfoInfomation.TAG, "Invalid return type: " + i3);
                            return;
                        }
                        if (i3 == 70) {
                            networkInfoItem2.info = NetworkInfoInfomation.this.handle3gGeneralStatusInfo(networkInfoItem2.info, strArr2[1]);
                        } else {
                            networkInfoItem2.info = strArr2[1];
                        }
                        if (networkInfoItem2.size != strArr2[1].length()) {
                            Elog.w(NetworkInfoInfomation.TAG, "Wrong return length: " + strArr2[1].length());
                        }
                        if (NetworkInfoInfomation.this.mItem[NetworkInfoInfomation.this.mCurrentItem] == i3) {
                            NetworkInfoInfomation.this.showNetworkInfo();
                            return;
                        }
                        return;
                    } catch (NumberFormatException e) {
                        Toast.makeText(NetworkInfoInfomation.this, "Return type error", 0).show();
                        return;
                    }
                }
                if (i != 3 && i != 4) {
                    if (i == 8) {
                        if (((AsyncResult) message.obj).exception != null) {
                            Elog.v(NetworkInfoInfomation.TAG, "MSG_NW_INFO_CDMA_ENABLE fail");
                            return;
                        }
                        return;
                    } else {
                        if (i != 9) {
                            return;
                        }
                        if (((AsyncResult) message.obj).exception != null) {
                            Elog.v(NetworkInfoInfomation.TAG, "MSG_NW_INFO_CDMA_SET fail.");
                            return;
                        } else {
                            NetworkInfoInfomation.this.sendATCommandCdma(new String[]{"AT+ETXANT=2,4", "+ETXANT"}, 7);
                            return;
                        }
                    }
                }
            }
            if (((AsyncResult) message.obj).exception != null) {
                NetworkInfoInfomation networkInfoInfomation2 = NetworkInfoInfomation.this;
                Toast.makeText(networkInfoInfomation2, networkInfoInfomation2.getString(R.string.send_at_fail), 0);
            }
        }
    };

    private class CdmaInfoAdapter extends ArrayAdapter<String[]> {

        private class ViewHolder {
            public TextView[] texts;

            private ViewHolder() {
            }
        }

        public CdmaInfoAdapter(Activity activity) {
            super(activity, 0);
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            ViewHolder viewHolder;
            LayoutInflater layoutInflater = NetworkInfoInfomation.this.getLayoutInflater();
            if (view == null) {
                view = layoutInflater.inflate(R.layout.cdma_info_entry, (ViewGroup) null);
                viewHolder = new ViewHolder();
                viewHolder.texts = new TextView[4];
                viewHolder.texts[0] = (TextView) view.findViewById(R.id.info1);
                viewHolder.texts[1] = (TextView) view.findViewById(R.id.info2);
                viewHolder.texts[2] = (TextView) view.findViewById(R.id.info3);
                viewHolder.texts[3] = (TextView) view.findViewById(R.id.info4);
                view.setTag(viewHolder);
            } else {
                viewHolder = (ViewHolder) view.getTag();
            }
            String[] item = getItem(i);
            for (int i2 = 0; i2 < viewHolder.texts.length; i2++) {
                if (item.length > i2) {
                    viewHolder.texts[i2].setVisibility(0);
                    viewHolder.texts[i2].setText(item[i2]);
                } else {
                    viewHolder.texts[i2].setVisibility(8);
                }
            }
            return view;
        }
    }

    static class NetworkInfoItem {
        public String info = new String();
        public String name;
        public int size;

        NetworkInfoItem(String str, int i) {
            this.name = str;
            this.size = i;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getCdmaInfoTypeForUrc(String str) {
        if (FeatureSupport.is93Modem()) {
            if (str.startsWith("1xRTT_Radio_Info")) {
                return 300;
            }
            if (str.startsWith("1xRTT_Info")) {
                return Content.CDMA_1XRTT_INFO_INDEX;
            }
            if (str.startsWith("1xRTT_SCH_Info")) {
                return Content.CDMA_1XRTT_SCH_INFO_INDEX;
            }
            if (str.startsWith("1xRTT_Stat_Info")) {
                return Content.CDMA_1XRTT_STATISTICS_INDEX;
            }
            if (str.startsWith("1xRTT_Serving_Neighbr_Set_Info")) {
                return Content.CDMA_1XRTT_SERVING_INDEX;
            }
            if (str.startsWith("EVDO_Serving_Info")) {
                return 305;
            }
            if (str.startsWith("EVDO_Active_Set_Info")) {
                return Content.CDMA_EVDO_ACTIVE_SET_INDEX;
            }
            if (str.startsWith("EVDO_Cand_Set_Info")) {
                return Content.CDMA_EVDO_CANDICATE_SET_INDEX;
            }
            if (str.startsWith("EVDO_Nghbr_Set_Info")) {
                return Content.CDMA_EVDO_NEIGHBOR_SET_INDEX;
            }
            if (str.startsWith("EVDO_FL_Info")) {
                return Content.CDMA_EVDO_FL_INDEX;
            }
            if (str.startsWith("EVDO_RL_Info")) {
                return Content.CDMA_EVDO_RL_INDEX;
            }
            if (str.startsWith("EVDO_State_Info")) {
                return Content.CDMA_EVDO_STATE_INDEX;
            }
            return -1;
        }
        if (str.startsWith("\"1xRTT_Radio_Info")) {
            return 300;
        }
        if (str.startsWith("\"1xRTT_Info")) {
            return Content.CDMA_1XRTT_INFO_INDEX;
        }
        if (str.startsWith("\"1xRTT_SCH_Info")) {
            return Content.CDMA_1XRTT_SCH_INFO_INDEX;
        }
        if (str.startsWith("\"1xRTT_Stat_Info")) {
            return Content.CDMA_1XRTT_STATISTICS_INDEX;
        }
        if (str.startsWith("\"1xRTT_Serving_Neighbr_Set_Info")) {
            return Content.CDMA_1XRTT_SERVING_INDEX;
        }
        if (str.startsWith("\"EVDO_Serving_Info")) {
            return 305;
        }
        if (str.startsWith("\"EVDO_Active_Set_Info")) {
            return Content.CDMA_EVDO_ACTIVE_SET_INDEX;
        }
        if (str.startsWith("\"EVDO_Cand_Set_Info")) {
            return Content.CDMA_EVDO_CANDICATE_SET_INDEX;
        }
        if (str.startsWith("\"EVDO_Nghbr_Set_Info")) {
            return Content.CDMA_EVDO_NEIGHBOR_SET_INDEX;
        }
        if (str.startsWith("\"EVDO_FL_Info")) {
            return Content.CDMA_EVDO_FL_INDEX;
        }
        if (str.startsWith("\"EVDO_RL_Info")) {
            return Content.CDMA_EVDO_RL_INDEX;
        }
        if (str.startsWith("\"EVDO_State_Info")) {
            return Content.CDMA_EVDO_STATE_INDEX;
        }
        return -1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String handle3gGeneralStatusInfo(String str, String str2) {
        if (!Content.IS_MOLY) {
            str2 = (str2 == null || str2.length() <= 8) ? "" : str2.substring(8);
        }
        if (str.length() < 12 || str2.length() < 12) {
            return str2;
        }
        String strSubstring = str.substring(0, 2);
        String strSubstring2 = str.substring(2, 4);
        String strSubstring3 = str.substring(4, 8);
        String strSubstring4 = str.substring(8, 12);
        String strSubstring5 = str2.substring(0, 2);
        String strSubstring6 = str2.substring(2, 4);
        String strSubstring7 = str2.substring(4, 8);
        String strSubstring8 = str2.substring(8, 12);
        String str3 = SERVICE_NO_CHANGE.equals(strSubstring5) ? strSubstring : strSubstring5;
        StringBuilder sb = new StringBuilder();
        sb.append(str3);
        sb.append(RRC_NO_CHANGE.equals(strSubstring6) ? strSubstring2 : strSubstring6);
        String string = sb.toString();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(string);
        sb2.append(NO_CHANGE.equals(strSubstring7) ? strSubstring3 : strSubstring7);
        String string2 = sb2.toString();
        StringBuilder sb3 = new StringBuilder();
        sb3.append(string2);
        sb3.append(NO_CHANGE.equals(strSubstring8) ? strSubstring4 : strSubstring8);
        return sb3.toString();
    }

    private void registerNetwork() {
        sendATCommand(new String[]{"AT+EINFO?", "+EINFO"}, 1);
        if (ModemCategory.isCdma()) {
            registerNetworkCdma();
        }
        EmUtils.registerForNetworkInfo(this.mSimType, this.mATCmdHander, 2);
    }

    private void registerNetworkCdma() {
        this.mCdmaItems = 0;
        for (int i = 0; i < this.mItemCount; i++) {
            int[] iArr = this.mItem;
            if (iArr[i] >= 300) {
                this.mCdmaItems = (1 << (iArr[i] - 300)) | this.mCdmaItems;
            } else if (iArr[i] == 299) {
                this.mCdmaTestItems = 4;
            }
        }
        String[] strArr = new String[3];
        if (FeatureSupport.is93Modem()) {
            strArr[0] = "AT+ENWINFO=2," + this.mCdmaItems + ",2";
        } else {
            strArr[0] = "AT+ECENGINFO=2," + this.mCdmaItems + ",2";
        }
        strArr[1] = "";
        strArr[2] = "DESTRILD:C2K";
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(strArr);
        Elog.d(TAG, "registerNetworkCdma:  " + cdmaCmdArr[0] + ",cmd_s.length = " + cdmaCmdArr.length);
        sendATCommandCdma(cdmaCmdArr, 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendATCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, strArr, this.mATCmdHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendATCommandCdma(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(true, strArr, this.mATCmdHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showNetworkInfo() {
        int i = this.mItem[this.mCurrentItem];
        String str = this.mNetworkInfo.get(Integer.valueOf(i)).name;
        String str2 = this.mNetworkInfo.get(Integer.valueOf(i)).info;
        if (i >= 300) {
            findViewById(R.id.NetworkInfo_tx).setVisibility(8);
            this.mInfo.setVisibility(8);
            this.mList.setVisibility(0);
            this.mHeader.setVisibility(0);
            this.mHeader.setText("<" + (this.mCurrentItem + 1) + FileUtils.SEPARATOR + this.mItemCount + ">\n[" + str + "]");
            this.mAdapter.clear();
            this.mAdapter.addAll(this.mUrcParser.parseCdmaInfo(i, str2));
            this.mAdapter.notifyDataSetChanged();
            return;
        }
        if (i < 299) {
            findViewById(R.id.NetworkInfo_tx).setVisibility(8);
            this.mInfo.setVisibility(0);
            this.mList.setVisibility(8);
            this.mHeader.setVisibility(8);
            this.mInfo.setText("<" + (this.mCurrentItem + 1) + FileUtils.SEPARATOR + this.mItemCount + ">\n[" + str + "]\n" + this.mUrcParser.parseInfo(i, str2, this.mSimType));
            return;
        }
        if (i == 299) {
            Elog.v(TAG, "in showNetworkInfo, mCurrentTxAnt = " + this.mCurrentTxAnt.getText().toString());
            this.mPageView.setText("<" + (this.mCurrentItem + 1) + FileUtils.SEPARATOR + this.mItemCount + ">\n[" + str + "]");
            findViewById(R.id.NetworkInfo_tx).setVisibility(0);
            this.mInfo.setVisibility(8);
            this.mList.setVisibility(8);
            this.mHeader.setVisibility(8);
            StringBuilder sb = new StringBuilder();
            sb.append("after showNetworkInfo, mCurrentTxAnt = ");
            sb.append(this.mCurrentTxAnt.getText().toString());
            Elog.v(TAG, sb.toString());
        }
    }

    private void unregisterNetwork() {
        this.mFlag &= FLAG_OR_DATA;
        Elog.v(TAG, "The close flag is :" + this.mFlag);
        sendATCommand(new String[]{"AT+EINFO=" + this.mFlag, ""}, 4);
        if (ModemCategory.isCdma()) {
            unregisterNetworkCdma();
        }
        EmUtils.unregisterForNetworkInfo(this.mSimType);
    }

    private void unregisterNetworkCdma() {
        String[] strArr = new String[3];
        if (FeatureSupport.is93Modem()) {
            strArr[0] = "AT+ENWINFO=0," + this.mCdmaItems;
        } else {
            strArr[0] = "AT+ECENGINFO=0," + this.mCdmaItems;
        }
        strArr[1] = "";
        strArr[2] = "DESTRILD:C2K";
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(strArr);
        Elog.d(TAG, "set1XTime AT command: " + cdmaCmdArr[0] + ",cmd_s.length = " + cdmaCmdArr.length);
        sendATCommandCdma(cdmaCmdArr, 4);
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        switch (compoundButton.getId()) {
            case R.id.tx_radio_0 /* 2131101516 */:
            case R.id.tx_radio_1 /* 2131101517 */:
                this.mSet.setEnabled(true);
                break;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() == this.mPageUp.getId()) {
            int i = this.mCurrentItem - 1;
            int i2 = this.mItemCount;
            this.mCurrentItem = (i + i2) % i2;
            updateUI();
            return;
        }
        if (view.getId() == this.mPageDown.getId()) {
            this.mCurrentItem = (this.mCurrentItem + 1) % this.mItemCount;
            updateUI();
            return;
        }
        if (view.getId() == this.mEnable.getId()) {
            sendATCommandCdma(ModemCategory.getCdmaCmdArr(new String[]{"AT+ETXANT=0,4", "", "DESTRILD:C2K"}), 8);
            return;
        }
        if (view.getId() == this.mSet.getId()) {
            if (this.mTxRadio0.isChecked()) {
                sendATCommandCdma(ModemCategory.getCdmaCmdArr(new String[]{"AT+ETXANT=1,4,0", "", "DESTRILD:C2K"}), 9);
            } else if (this.mTxRadio1.isChecked()) {
                sendATCommandCdma(ModemCategory.getCdmaCmdArr(new String[]{"AT+ETXANT=1,4,1", "", "DESTRILD:C2K"}), 9);
            }
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkinfo_info);
        this.mItem = new int[312];
        Intent intent = getIntent();
        this.mSimType = intent.getIntExtra("mSimType", 0);
        int[] intArrayExtra = intent.getIntArrayExtra("mChecked");
        if (intArrayExtra != null) {
            for (int i = 0; i < intArrayExtra.length; i++) {
                if (1 == intArrayExtra[i]) {
                    int[] iArr = this.mItem;
                    int i2 = this.mItemCount;
                    iArr[i2] = i;
                    this.mItemCount = i2 + 1;
                }
            }
        }
        int modemType = ModemCategory.getModemType();
        this.mNetworkInfo.put(0, new NetworkInfoItem("RR Cell Sel", 6));
        this.mNetworkInfo.put(1, new NetworkInfoItem("RR Ch Dscr", Content.CH_DSCR_SIZE));
        this.mNetworkInfo.put(2, new NetworkInfoItem("RR Ctrl chan", 14));
        this.mNetworkInfo.put(3, new NetworkInfoItem("RR RACH Ctrl", 14));
        this.mNetworkInfo.put(4, new NetworkInfoItem("RR LAI Info", 28));
        this.mNetworkInfo.put(5, new NetworkInfoItem("RR Radio Link", 16));
        this.mNetworkInfo.put(6, new NetworkInfoItem("RR Meas Rep", Content.MEAS_REP_SIZE));
        this.mNetworkInfo.put(7, new NetworkInfoItem("RR Ca List", Content.CAL_LIST_SIZE));
        this.mNetworkInfo.put(8, new NetworkInfoItem("RR Control Msg", 4));
        this.mNetworkInfo.put(9, new NetworkInfoItem("RR SI2Q Info", 10));
        this.mNetworkInfo.put(10, new NetworkInfoItem("RR MI Info", 8));
        this.mNetworkInfo.put(11, new NetworkInfoItem("RR BLK Info", 80));
        this.mNetworkInfo.put(12, new NetworkInfoItem("RR TBF Info", 56));
        this.mNetworkInfo.put(13, new NetworkInfoItem("RR GPRS Gen", 32));
        this.mNetworkInfo.put(Integer.valueOf(Content.SM_INFO_INDEX), new NetworkInfoItem("SM EM Info", Content.SM_EM_INFO_SIZE));
        this.mNetworkInfo.put(56, new NetworkInfoItem("GMM EM Info", 40));
        this.mNetworkInfo.put(Integer.valueOf(Content.MM_INFO_INDEX), new NetworkInfoItem("RR 3G MM EM Info", 60));
        this.mNetworkInfo.put(70, new NetworkInfoItem("URR 3G General Status", 12));
        this.mNetworkInfo.put(Integer.valueOf(Content.TCM_MMI_INDEX), new NetworkInfoItem("RR 3G TCM MMI EM Info", 14));
        this.mNetworkInfo.put(Integer.valueOf(Content.CSCE_SERV_CELL_STATUS_INDEX), new NetworkInfoItem("RR 3G CsceEMServCellSStatusInd", 104));
        this.mNetworkInfo.put(Integer.valueOf(Content.CSCE_NEIGH_CELL_STATUS_INDEX), new NetworkInfoItem("RR xG CsceEMNeighCellSStatusIndStructSize", Content.XGCSCE_NEIGH_CELL_STATUS_SIZE));
        this.mNetworkInfo.put(Integer.valueOf(Content.CSCE_MULTIPLMN_INDEX), new NetworkInfoItem("RR 3G CsceEmInfoMultiPlmn", 74));
        this.mNetworkInfo.put(Integer.valueOf(Content.PERIOD_IC_BLER_REPORT_INDEX), new NetworkInfoItem("RR 3G MemeEmPeriodicBlerReportInd", 200));
        this.mNetworkInfo.put(Integer.valueOf(Content.URR_UMTS_SRNC_INDEX), new NetworkInfoItem("RR 3G UrrUmtsSrncId", 4));
        this.mNetworkInfo.put(Integer.valueOf(Content.HSERV_CELL_INDEX), new NetworkInfoItem("RR 3G MemeEmInfoHServCellInd", 16));
        this.mNetworkInfo.put(Integer.valueOf(Content.SLCE_VOICE_INDEX), new NetworkInfoItem("3G speech codec", 2));
        this.mNetworkInfo.put(Integer.valueOf(Content.SECURITY_CONFIGURATION_INDEX), new NetworkInfoItem("Security Configuration", 4));
        if (modemType == 1) {
            this.mNetworkInfo.put(Integer.valueOf(Content.UMTS_CELL_STATUS_INDEX), new NetworkInfoItem("RR 3G MemeEmInfoUmtsCellStatus", Content.UMTS_CELL_STATUS_SIZE));
            this.mNetworkInfo.put(Integer.valueOf(Content.PSDATA_RATE_STATUS_INDEX), new NetworkInfoItem("RR 3G SlceEmPsDataRateStatusInd", 200));
        } else if (modemType == 2) {
            this.mNetworkInfo.put(Integer.valueOf(Content.HANDOVER_SEQUENCE_INDEX), new NetworkInfoItem("RR 3G HandoverSequenceIndStuct", 32));
            this.mNetworkInfo.put(Integer.valueOf(Content.UL_ADM_POOL_STATUS_INDEX), new NetworkInfoItem("RR 3G Ul2EmAdmPoolStatusIndStruct", 64));
            this.mNetworkInfo.put(Integer.valueOf(Content.UL_PSDATA_RATE_STATUS_INDEX), new NetworkInfoItem("RR 3G Ul2EmPsDataRateStatusIndStruct", 16));
            this.mNetworkInfo.put(Integer.valueOf(Content.UL_HSDSCH_RECONFIG_STATUS_INDEX), new NetworkInfoItem("RR 3G Ul2EmHsdschReconfigStatusIndStruct", 16));
            this.mNetworkInfo.put(Integer.valueOf(Content.UL_URLC_EVENT_STATUS_INDEX), new NetworkInfoItem("RR 3G Ul2EmUrlcEventStatusIndStruct", 36));
            this.mNetworkInfo.put(Integer.valueOf(Content.UL_PERIOD_IC_BLER_REPORT_INDEX), new NetworkInfoItem("RR 3G Ul2EmPeriodicBlerReportInd", 200));
        }
        if (ModemCategory.isCdma()) {
            this.mNetworkInfo.put(300, new NetworkInfoItem("1xRTT Radio", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_1XRTT_INFO_INDEX), new NetworkInfoItem("1xRTT Info", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_1XRTT_SCH_INFO_INDEX), new NetworkInfoItem("1xRTT SCH Info", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_1XRTT_STATISTICS_INDEX), new NetworkInfoItem("1xRTT Statistics", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_1XRTT_SERVING_INDEX), new NetworkInfoItem("1xRTT Serving/Neighbor", 0));
            this.mNetworkInfo.put(305, new NetworkInfoItem("EVDO Serving Info", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_ACTIVE_SET_INDEX), new NetworkInfoItem("EVDO Active Set", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_CANDICATE_SET_INDEX), new NetworkInfoItem("EVDO Candidate Set", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_NEIGHBOR_SET_INDEX), new NetworkInfoItem("EVDO Neighbour Set", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_FL_INDEX), new NetworkInfoItem("EVDO FL", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_RL_INDEX), new NetworkInfoItem("EVDO RL", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_STATE_INDEX), new NetworkInfoItem("EVDO State", 0));
            this.mNetworkInfo.put(Integer.valueOf(Content.CDMA_EVDO_FORCE_TX_ANT), new NetworkInfoItem("CDMA Force TX ANT", 0));
        }
        this.mNetworkInfo.get(70).info = "FFFFFFFFFFFF";
        this.mInfo = (TextView) findViewById(R.id.NetworkInfo_Info);
        this.mList = (ListView) findViewById(R.id.NetworkInfo_List);
        this.mHeader = (TextView) findViewById(R.id.NetworkInfo_List_Header);
        CdmaInfoAdapter cdmaInfoAdapter = new CdmaInfoAdapter(this);
        this.mAdapter = cdmaInfoAdapter;
        this.mList.setAdapter((ListAdapter) cdmaInfoAdapter);
        this.mPageUp = (Button) findViewById(R.id.NetworkInfo_PageUp);
        this.mPageDown = (Button) findViewById(R.id.NetworkInfo_PageDown);
        this.mPageUp.setOnClickListener(this);
        this.mPageDown.setOnClickListener(this);
        this.mCurrentForceTxAnt = (TextView) findViewById(R.id.current_force_tx_ant);
        this.mCurrentTxAnt = (TextView) findViewById(R.id.current_tx_ant);
        Elog.v(TAG, "mCurrentTxAnt = " + this.mCurrentTxAnt.getText().toString());
        Button button = (Button) findViewById(R.id.tx_enable);
        this.mEnable = button;
        button.setOnClickListener(this);
        this.mTxRadio0 = (RadioButton) findViewById(R.id.tx_radio_0);
        this.mTxRadio1 = (RadioButton) findViewById(R.id.tx_radio_1);
        this.mTxRadio0.setOnCheckedChangeListener(this);
        this.mTxRadio1.setOnCheckedChangeListener(this);
        Button button2 = (Button) findViewById(R.id.tx_set);
        this.mSet = button2;
        button2.setOnClickListener(this);
        this.mSet.setEnabled(false);
        this.mEnable.setEnabled(false);
        this.mPageView = (TextView) findViewById(R.id.page_info);
        this.mUrcParser = new NetworkInfoUrcParser(this);
        registerNetwork();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        unregisterNetwork();
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        updateUI();
    }

    @Override // android.app.Activity
    public void onStop() {
        this.mTimer.cancel();
        super.onStop();
    }

    public void updateUI() {
        showNetworkInfo();
        this.mTimer.cancel();
        Timer timer = new Timer();
        this.mTimer = timer;
        timer.schedule(new TimerTask() { // from class: com.mediatek.engineermode.networkinfo.NetworkInfoInfomation.3
            @Override // java.util.TimerTask, java.lang.Runnable
            public void run() {
                NetworkInfoInfomation.this.mUiHandler.sendEmptyMessage(5);
            }
        }, 1000L, 1000L);
    }
}
