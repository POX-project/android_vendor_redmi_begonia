package com.mediatek.engineermode.siminfo;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.telephony.SubscriptionManager;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.internal.telephony.uicc.IccServiceInfo;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class SimInfo extends Activity {
    private static final String ACTION_SIM_STATE_CHANGED = "android.intent.action.SIM_STATE_CHANGED";
    private static final String INTENT_KEY_ICC_STATE = "ss";
    private static final int INTENT_SIM_INFO_DPDATE = 2;
    private static final int INTENT_VALUE_ICC_ABSENT = 3;
    private static final int INTENT_VALUE_ICC_READY = 1;
    private static final String TAG = "SimInfo";
    private static final String VALUE_ICC_ABSENT = "ABSENT";
    private static final String VALUE_ICC_LOADED = "LOADED";
    private FrameLayout mInfoFrameLayout;
    List<SimInfoData> mSimInfoData;
    IccRecords mIccRecords = null;
    NormalTableComponent siminfo = null;
    TextView siminfo_status = null;
    private Toast mToast = null;
    private int mSimType = 0;
    private int mSubId = 1;
    private boolean mFirstBroadcast = true;
    private int mIccCardType = 0;
    private String[] mIccCardTypes = {"SIM", "USIM", "UNSUPPORT"};
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.siminfo.SimInfo.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                Elog.d(SimInfo.TAG, "SIM card status ready ");
                SimInfo.this.siminfo_status.setText("sim info status: Ready , card type: " + SimInfo.this.mIccCardTypes[SimInfo.this.mIccCardType]);
                return;
            }
            if (i != 2) {
                if (i != 3) {
                    return;
                }
                Elog.d(SimInfo.TAG, "SIM card status absent ");
                SimInfo.this.siminfo_status.setText("sim info status: UNReady");
                SimInfo.this.siminfo.update(0, "");
                SimInfo.this.siminfo.update(2, "");
                return;
            }
            String string = message.obj.toString();
            if (string.equals("clean")) {
                SimInfo.this.siminfo.update(0, "");
            } else if (string.equals("update")) {
                SimInfo.this.siminfo.update(2, "");
            } else {
                SimInfo.this.siminfo.update(1, string);
            }
        }
    };
    private final BroadcastReceiver SimCardChangedReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.siminfo.SimInfo.2
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.d(SimInfo.TAG, "SIMChangedBroadcastReceiver " + action.toString());
            if (SimInfo.this.mFirstBroadcast) {
                Elog.d(SimInfo.TAG, "it is the  mFirstBroadcast");
                SimInfo.this.mFirstBroadcast = false;
                return;
            }
            if (action == null || !action.equals(SimInfo.ACTION_SIM_STATE_CHANGED)) {
                return;
            }
            String stringExtra = intent.getStringExtra(SimInfo.INTENT_KEY_ICC_STATE);
            int intExtra = intent.getIntExtra("slot", 0);
            Elog.d(SimInfo.TAG, "SIM state change changeSlot=" + intExtra + " mSimType=" + SimInfo.this.mSimType + " new state =" + stringExtra);
            if (intExtra == SimInfo.this.mSimType) {
                if (stringExtra.equals(SimInfo.VALUE_ICC_LOADED)) {
                    Elog.d(SimInfo.TAG, "SIM card status ready ");
                    SimInfo.this.loadInCardInfoBackground();
                } else if (stringExtra.equals(SimInfo.VALUE_ICC_ABSENT)) {
                    Elog.d(SimInfo.TAG, "SIM card status absent ");
                    SimInfo.this.mHandler.sendEmptyMessage(3);
                }
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Type inference failed for: r0v0, types: [com.mediatek.engineermode.siminfo.SimInfo$3] */
    public void loadInCardInfoBackground() {
        new Thread() { // from class: com.mediatek.engineermode.siminfo.SimInfo.3
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                SimInfo.this.loadSubId();
                SimInfo.this.loadIccCardType();
                SimInfo.this.mHandler.sendEmptyMessage(1);
                if (SimInfo.this.mIccCardType < 2) {
                    SimInfo.this.loadSimInfoData();
                }
            }
        }.start();
    }

    private void showToast(String str) {
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    private void updateSimInfoData() {
        this.mSimInfoData.add(new SimInfoData("CDR-PER-512", "EF-ICCID", 12258, new String[]{"3F00", "3F00"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-514", "EF-MSISDN", 28480, new String[]{"7F10", "7FFF"}, 1, "linear fixed", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-516", "EF-CPHS MAIL BOX NUMBER", 28439, new String[]{"7F20", "x"}, 1, "linear fixed", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-518", "EF-3GPP MAIL BOX DIALING NUMBER", 28615, new String[]{"x", "7FFF"}, 1, "linear fixed", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-520", "EF-HPPLMN SEARCH PERIOD", 28465, new String[]{"x", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-522", "EF-LOCI", 28529, new String[]{"7F20", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-524", "EF-GPRS/PS-LOCI", 28531, new String[]{"x", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-526", "EF-ACCESS CONTROL CLASS", 28536, new String[]{"7F20", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-528", "EF-ADMINISTRATIVE DATA", 28589, new String[]{"7F20", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-530", "EF-FPLMN", 28539, new String[]{"7F20", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-536", "EF-PLMN NETWORK NAME", 28613, new String[]{"x", "7FFF"}, 1, "linear fixed", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-538", "EF-OPERATOR PLMN LIST", 28614, new String[]{"x", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-540", "EF-PLMN SELECTOR", 28464, new String[]{"7F20", "x"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-542", "EF-OPLMNAcT", 28513, new String[]{"x", "7FFF"}, 1, "transparent", false));
        this.mSimInfoData.add(new SimInfoData("CDR-PER-544", "EF-IMS PUBLIC USER IDENTITY", 28420, new String[]{"x", "7FFF"}, 3, "linear fixed", false));
    }

    void loadIccCardType() {
        String iccCardType = MtkTelephonyManagerEx.getDefault().getIccCardType(this.mSubId);
        if (iccCardType.equals("SIM")) {
            this.mIccCardType = 0;
        } else if (iccCardType.equals("USIM")) {
            this.mIccCardType = 1;
        } else {
            this.mIccCardType = 2;
        }
        Elog.d(TAG, "IccCardType: " + iccCardType + " = " + this.mIccCardType);
    }

    /* JADX WARN: Code duplicated, block: B:26:0x00fa  */
    /* JADX WARN: Code duplicated, block: B:28:0x010e  */
    /* JADX WARN: Code duplicated, block: B:30:0x013c  */
    /* JADX WARN: Code duplicated, block: B:31:0x0163  */
    /* JADX WARN: Code duplicated, block: B:33:0x0181  */
    /* JADX WARN: Code duplicated, block: B:35:0x0193  */
    /* JADX WARN: Code duplicated, block: B:37:0x01c4  */
    /* JADX WARN: Code duplicated, block: B:41:0x0207  */
    /* JADX WARN: Code duplicated, block: B:54:0x0225 A[SYNTHETIC] */
    /* JADX WARN: Instruction removed from duplicated block: B:30:0x013c, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:31:0x0163, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:41:0x0207, please report this as an issue */
    void loadSimInfoData() {
        List listLoadEFLinearFixedAll;
        String str;
        int i;
        byte[] bArrLoadEFTransparent;
        String str2;
        sendMsg(2, "clean");
        int i2 = 0;
        while (true) {
            List<SimInfoData> list = this.mSimInfoData;
            if (list == null || i2 >= list.size()) {
                break;
            }
            if (this.mSimInfoData.get(i2).EF_Path[this.mIccCardType].equals("x")) {
                sendMsg(2, this.mSimInfoData.get(i2).name + "is not support");
            } else {
                Elog.d(TAG, this.mSimInfoData.get(i2).num + "," + this.mSimInfoData.get(i2).name);
                if (this.mSimInfoData.get(i2).need_to_check) {
                    int i3 = this.mIccCardType;
                    if (i3 == 1) {
                        Elog.d(TAG, "USIM need to check");
                        MtkSIMRecords mtkSIMRecords = this.mIccRecords;
                        if (mtkSIMRecords != null && mtkSIMRecords.getSIMServiceStatus(IccServiceInfo.IccService.OPLMNwACT) != IccServiceInfo.IccServiceStatus.ACTIVATED) {
                            Elog.d(TAG, "USIM not support EF-OPLMNAcT");
                            sendMsg(2, this.mSimInfoData.get(i2).name + "is not support");
                        } else if (this.mSimInfoData.get(i2).type.equals("transparent")) {
                            bArrLoadEFTransparent = MtkTelephonyManagerEx.getDefault().loadEFTransparent(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                            if (bArrLoadEFTransparent != null) {
                                str2 = this.mSimInfoData.get(i2).name + ":" + IccUtils.bytesToHexString(bArrLoadEFTransparent).toUpperCase();
                            } else {
                                str2 = this.mSimInfoData.get(i2).name + " is empty";
                            }
                            sendMsg(2, str2);
                        } else if (this.mSimInfoData.get(i2).type.equals("linear fixed")) {
                            listLoadEFLinearFixedAll = MtkTelephonyManagerEx.getDefault().loadEFLinearFixedAll(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                            str = "";
                            while (listLoadEFLinearFixedAll != null) {
                                str = str + this.mSimInfoData.get(i2).name + "[" + i + "]:" + ((String) listLoadEFLinearFixedAll.get(i)).toUpperCase() + "\n";
                            }
                            if (listLoadEFLinearFixedAll == null) {
                                str = this.mSimInfoData.get(i2).name + " is empty";
                            }
                            sendMsg(2, str);
                        }
                    } else if (i3 == 0) {
                        Elog.d(TAG, "SIM need to check");
                        MtkSIMRecords mtkSIMRecords2 = this.mIccRecords;
                        if (mtkSIMRecords2 != null && mtkSIMRecords2.getSIMServiceStatus(IccServiceInfo.IccService.PLMNsel) != IccServiceInfo.IccServiceStatus.ACTIVATED) {
                            Elog.d(TAG, "SIM not support EF-PLMN SELECTOR");
                            sendMsg(2, this.mSimInfoData.get(i2).name + "is not support");
                        } else if (this.mSimInfoData.get(i2).type.equals("transparent")) {
                            bArrLoadEFTransparent = MtkTelephonyManagerEx.getDefault().loadEFTransparent(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                            if (bArrLoadEFTransparent != null) {
                                str2 = this.mSimInfoData.get(i2).name + ":" + IccUtils.bytesToHexString(bArrLoadEFTransparent).toUpperCase();
                            } else {
                                str2 = this.mSimInfoData.get(i2).name + " is empty";
                            }
                            sendMsg(2, str2);
                        } else if (this.mSimInfoData.get(i2).type.equals("linear fixed")) {
                            listLoadEFLinearFixedAll = MtkTelephonyManagerEx.getDefault().loadEFLinearFixedAll(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                            str = "";
                            while (listLoadEFLinearFixedAll != null) {
                                str = str + this.mSimInfoData.get(i2).name + "[" + i + "]:" + ((String) listLoadEFLinearFixedAll.get(i)).toUpperCase() + "\n";
                            }
                            if (listLoadEFLinearFixedAll == null) {
                                str = this.mSimInfoData.get(i2).name + " is empty";
                            }
                            sendMsg(2, str);
                        }
                    } else if (this.mSimInfoData.get(i2).type.equals("transparent")) {
                        bArrLoadEFTransparent = MtkTelephonyManagerEx.getDefault().loadEFTransparent(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                        if (bArrLoadEFTransparent != null) {
                            str2 = this.mSimInfoData.get(i2).name + ":" + IccUtils.bytesToHexString(bArrLoadEFTransparent).toUpperCase();
                        } else {
                            str2 = this.mSimInfoData.get(i2).name + " is empty";
                        }
                        sendMsg(2, str2);
                    } else if (this.mSimInfoData.get(i2).type.equals("linear fixed")) {
                        listLoadEFLinearFixedAll = MtkTelephonyManagerEx.getDefault().loadEFLinearFixedAll(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                        str = "";
                        while (listLoadEFLinearFixedAll != null) {
                            str = str + this.mSimInfoData.get(i2).name + "[" + i + "]:" + ((String) listLoadEFLinearFixedAll.get(i)).toUpperCase() + "\n";
                        }
                        if (listLoadEFLinearFixedAll == null) {
                            str = this.mSimInfoData.get(i2).name + " is empty";
                        }
                        sendMsg(2, str);
                    }
                } else if (this.mSimInfoData.get(i2).type.equals("transparent")) {
                    bArrLoadEFTransparent = MtkTelephonyManagerEx.getDefault().loadEFTransparent(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                    if (bArrLoadEFTransparent != null) {
                        str2 = this.mSimInfoData.get(i2).name + ":" + IccUtils.bytesToHexString(bArrLoadEFTransparent).toUpperCase();
                    } else {
                        str2 = this.mSimInfoData.get(i2).name + " is empty";
                    }
                    sendMsg(2, str2);
                } else if (this.mSimInfoData.get(i2).type.equals("linear fixed")) {
                    listLoadEFLinearFixedAll = MtkTelephonyManagerEx.getDefault().loadEFLinearFixedAll(this.mSimType, this.mSimInfoData.get(i2).Family, this.mSimInfoData.get(i2).EF_id, this.mSimInfoData.get(i2).EF_Path[this.mIccCardType]);
                    str = "";
                    for (i = 0; listLoadEFLinearFixedAll != null && i < listLoadEFLinearFixedAll.size(); i++) {
                        str = str + this.mSimInfoData.get(i2).name + "[" + i + "]:" + ((String) listLoadEFLinearFixedAll.get(i)).toUpperCase() + "\n";
                    }
                    if (listLoadEFLinearFixedAll == null) {
                        str = this.mSimInfoData.get(i2).name + " is empty";
                    }
                    sendMsg(2, str);
                }
            }
            i2++;
        }
        sendMsg(2, "update");
    }

    void loadSubId() {
        int[] subId = SubscriptionManager.getSubId(this.mSimType);
        if (subId != null) {
            for (int i = 0; i < subId.length; i++) {
                Elog.d(TAG, "subId[" + i + "]: " + subId[i]);
            }
        }
        if (subId == null || subId.length == 0 || !SubscriptionManager.isValidSubscriptionId(subId[0])) {
            Elog.e(TAG, "Invalid sub id");
        } else {
            this.mSubId = subId[0];
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.siminfo);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        Elog.d(TAG, " onCreate mSimType " + this.mSimType);
        this.mInfoFrameLayout = (FrameLayout) findViewById(R.id.siminfo_frame);
        this.mFirstBroadcast = true;
        SimInfoUpdate simInfoUpdate = new SimInfoUpdate(this);
        this.siminfo = simInfoUpdate;
        View view = simInfoUpdate.getView();
        if (view == null) {
            Elog.e(TAG, "updateUI view is null");
            return;
        }
        this.mInfoFrameLayout.removeAllViews();
        this.mInfoFrameLayout.addView(view);
        TextView textView = (TextView) findViewById(R.id.siminfo_status);
        this.siminfo_status = textView;
        textView.setText("sim" + this.mSimType + " info status: UNReady");
        this.mSimInfoData = new ArrayList();
        updateSimInfoData();
        if (ModemCategory.isSimReady(this.mSimType)) {
            Elog.d(TAG, "loadInCardInfoBackground before registSimReceiver");
            loadInCardInfoBackground();
        }
        registSimReceiver(this);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        unregisterReceiver(this.SimCardChangedReceiver);
        this.mHandler.removeMessages(1);
        this.mHandler.removeMessages(2);
        Elog.d(TAG, "unregisterReceiver SimCardChangedReceiver");
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    void registSimReceiver(Context context) {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_SIM_STATE_CHANGED);
        context.registerReceiver(this.SimCardChangedReceiver, intentFilter);
    }

    void sendMsg(int i, String str) {
        Message message = new Message();
        message.what = i;
        message.obj = str;
        this.mHandler.sendMessage(message);
    }
}
