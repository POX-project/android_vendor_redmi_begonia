package com.mediatek.engineermode.cfu;

import android.app.Activity;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.telephony.SubscriptionManager;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.telephony.MtkTelephonyManagerEx;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class CfuActivity extends Activity {
    private static final int EF_INVALID = 0;
    private static final int EF_VALID = 1;
    private static final int EVENT_EF_CFF_CPHS_SIM_INFO_UPDATE = 3;
    private static final int EVENT_EF_CFIS_SIM_INFO_UPDATE = 2;
    private static final int EVENT_ICC_READY = 1;
    private static final String TAG = "CFU";
    private Button btRefresh;
    private TextView mTvEfCffCphsStatus;
    private TextView mTvEfcfisStatus;
    private int mSlot = 0;
    private int mSubId = -1;
    private IccRecords mIccRecords = null;
    private int mIccCardType = 0;
    private String[] mIccCardTypes = {"SIM", "USIM", "UNSUPPORT"};
    CfuSimInfoData mCfisSimInfoData = null;
    CfuSimInfoData mCffCphsSimInfoData = null;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.cfu.CfuActivity.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.arg1;
            String string = message.obj.toString();
            int i2 = message.what;
            if (i2 == 2) {
                if (i == 0) {
                    CfuActivity.this.mTvEfcfisStatus.setTextColor(Color.parseColor("#a00000"));
                } else {
                    CfuActivity.this.mTvEfcfisStatus.setTextColor(Color.parseColor("#004cc6"));
                }
                CfuActivity.this.mTvEfcfisStatus.setText(string);
                return;
            }
            if (i2 != 3) {
                return;
            }
            if (i == 0) {
                CfuActivity.this.mTvEfCffCphsStatus.setTextColor(Color.parseColor("#a00000"));
            } else {
                CfuActivity.this.mTvEfCffCphsStatus.setTextColor(Color.parseColor("#004cc6"));
            }
            CfuActivity.this.mTvEfCffCphsStatus.setText(string);
        }
    };

    private void createCfuSimInfoData() {
        this.mCfisSimInfoData = new CfuSimInfoData("EF_CFIS", 28619, new String[]{"7F20", "7FFF"}, 1, "linear fixed");
        this.mCffCphsSimInfoData = new CfuSimInfoData("EF_CFF_CPHS", 28435, new String[]{"7F20", "7F20"}, 1, "transparent");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loadCfuSimInfoData() {
        if (this.mCfisSimInfoData.EF_Path[this.mIccCardType].equals("x")) {
            Handler handler = this.mHandler;
            handler.sendMessage(handler.obtainMessage(2, 0, 0, "Not Valid"));
        } else {
            List listLoadEFLinearFixedAll = MtkTelephonyManagerEx.getDefault().loadEFLinearFixedAll(this.mSlot, this.mCfisSimInfoData.Family, this.mCfisSimInfoData.EF_id, this.mCfisSimInfoData.EF_Path[this.mIccCardType]);
            if (listLoadEFLinearFixedAll != null) {
                for (int i = 0; listLoadEFLinearFixedAll != null && i < listLoadEFLinearFixedAll.size(); i++) {
                    Elog.d(TAG, this.mCfisSimInfoData.name + "[" + i + "] : " + ((String) listLoadEFLinearFixedAll.get(i)).toUpperCase());
                }
                byte[] bArrHexStringToBytes = IccUtils.hexStringToBytes((String) listLoadEFLinearFixedAll.get(0));
                if (bArrHexStringToBytes == null || bArrHexStringToBytes.length != 16) {
                    Handler handler2 = this.mHandler;
                    handler2.sendMessage(handler2.obtainMessage(2, 0, 0, "Not Valid"));
                } else {
                    Handler handler3 = this.mHandler;
                    handler3.sendMessage(handler3.obtainMessage(2, 1, 0, "Valid (" + ((String) listLoadEFLinearFixedAll.get(0)) + ")"));
                }
            } else {
                Elog.d(TAG, this.mCfisSimInfoData.name + ": is empty");
                Handler handler4 = this.mHandler;
                handler4.sendMessage(handler4.obtainMessage(2, 0, 0, "Not Valid"));
            }
        }
        if (this.mCffCphsSimInfoData.EF_Path[this.mIccCardType].equals("x")) {
            Handler handler5 = this.mHandler;
            handler5.sendMessage(handler5.obtainMessage(3, 0, 0, "Not Valid"));
            return;
        }
        byte[] bArrLoadEFTransparent = MtkTelephonyManagerEx.getDefault().loadEFTransparent(this.mSlot, this.mCffCphsSimInfoData.Family, this.mCffCphsSimInfoData.EF_id, this.mCffCphsSimInfoData.EF_Path[this.mIccCardType]);
        if (bArrLoadEFTransparent == null) {
            Elog.d(TAG, this.mCffCphsSimInfoData.name + ": is empty");
            Handler handler6 = this.mHandler;
            handler6.sendMessage(handler6.obtainMessage(3, 0, 0, "Not Valid"));
            return;
        }
        String strBytesToHexString = IccUtils.bytesToHexString(bArrLoadEFTransparent);
        Elog.d(TAG, this.mCffCphsSimInfoData.name + ":" + strBytesToHexString.toUpperCase());
        Handler handler7 = this.mHandler;
        handler7.sendMessage(handler7.obtainMessage(3, 1, 0, "Valid (" + strBytesToHexString + ")"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loadIccCardType() {
        String iccCardType = MtkTelephonyManagerEx.getDefault().getIccCardType(this.mSubId);
        if (iccCardType == null) {
            this.mIccCardType = 2;
            return;
        }
        if (iccCardType.equals("SIM")) {
            this.mIccCardType = 0;
        } else if (iccCardType.equals("USIM")) {
            this.mIccCardType = 1;
        } else {
            this.mIccCardType = 2;
        }
        Elog.d(TAG, "IccCardType: " + iccCardType + " = " + this.mIccCardType);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [com.mediatek.engineermode.cfu.CfuActivity$3] */
    private void loadInCardInfoBackground() {
        new Thread() { // from class: com.mediatek.engineermode.cfu.CfuActivity.3
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                CfuActivity.this.loadSubId();
                CfuActivity.this.loadIccCardType();
                if (CfuActivity.this.mIccCardType < 2) {
                    CfuActivity.this.loadCfuSimInfoData();
                } else {
                    CfuActivity.this.mHandler.sendMessage(CfuActivity.this.mHandler.obtainMessage(2, 0, 0, "Not Supported for this card type"));
                    CfuActivity.this.mHandler.sendMessage(CfuActivity.this.mHandler.obtainMessage(3, 0, 0, "Not Supported for this card type"));
                }
            }
        }.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loadSubId() {
        int[] subId = SubscriptionManager.getSubId(this.mSlot);
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

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshPage() {
        if (ModemCategory.isSimReady(this.mSlot)) {
            loadInCardInfoBackground();
            return;
        }
        this.mTvEfcfisStatus.setTextColor(Color.parseColor("#000000"));
        this.mTvEfcfisStatus.setText("N/A");
        this.mTvEfCffCphsStatus.setTextColor(Color.parseColor("#000000"));
        this.mTvEfCffCphsStatus.setText("N/A");
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.cfu_activity);
        Elog.d(TAG, "onCreate");
        this.mTvEfcfisStatus = (TextView) findViewById(R.id.cfu_efcfis_status_text);
        this.mTvEfCffCphsStatus = (TextView) findViewById(R.id.cfu_efcff_cphs_status_text);
        Button button = (Button) findViewById(R.id.cfu_refresh_button);
        this.btRefresh = button;
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.cfu.CfuActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                Elog.d(CfuActivity.TAG, "onClick: Refresh");
                CfuActivity.this.refreshPage();
            }
        });
        createCfuSimInfoData();
        refreshPage();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Elog.d(TAG, "onDestroy()");
        super.onDestroy();
    }
}
