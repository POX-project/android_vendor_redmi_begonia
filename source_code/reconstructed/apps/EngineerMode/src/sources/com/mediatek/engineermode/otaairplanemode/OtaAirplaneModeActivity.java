package com.mediatek.engineermode.otaairplanemode;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v4.internal.view.SupportMenu;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.TelephonyManager;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.mdmcomponent.MDMContent;
import com.mediatek.mdml.Msg;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class OtaAirplaneModeActivity extends Activity implements View.OnClickListener, MDMCoreOperation.IMDMSeiviceInterface {
    private static final float DEFAULT_AIRPLANE_TIMEOUT = 1.0f;
    private static final int DEFAULT_DL_TPUT_TIMEOUT = 10000;
    private static final String KEY_FLAG_ENABLE = "enable_status";
    private static final String KEY_LAST_TIME = "last_time";
    private static final int MSG_ID_DL_TPUT_0_TIMEOUT = 2;
    private static final int MSG_ID_TIMEOUT = 1;
    private static final String SHREDPRE_NAME = "OtaAirplaneMode";
    private static final String TAG = "OtaAirplaneMode";
    private static TextView airplane_network_status;
    private static TextView mAirplaneCountTv;
    private static EditText mAirplaneLastTimeEt;
    private static CheckBox mEnableFeatureCb;
    private static Button mLastTimeSetBt;
    private static TextView mSimCardStatusTv;
    private PhoneStateListener mPhoneStateListener;
    private TelephonyManager mTelephonyManager;
    private static final String[] SubscribeMsgIdName = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};
    private static int mCount = 0;
    private static ServiceState mLastSS = null;
    private static int mLastCallState = 0;
    private static List<MdmBaseComponent> componentsArray = new ArrayList();
    private MsgHandler mHandler = new MsgHandler();
    private SimpleDateFormat mCurrectTime = null;
    private int mSimTypeToShow = 0;
    private int mDlTputTimeout = DEFAULT_DL_TPUT_TIMEOUT;
    private float mAirplanTimeout = DEFAULT_AIRPLANE_TIMEOUT;
    private int mLastDlTput = 0;

    class CheckBoxListener implements CompoundButton.OnCheckedChangeListener {
        CheckBoxListener() {
        }

        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            OtaAirplaneModeActivity.this.log("Enable listen the network status changed: " + z);
            OtaAirplaneModeActivity.this.setupOtaRequest(z);
        }
    }

    private class MsgHandler extends Handler {
        private MsgHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                OtaAirplaneModeActivity.this.updateNetworkstatus("PSD disabled timeout:Call OTA Request", SupportMenu.CATEGORY_MASK);
                OtaAirplaneModeActivity.this.handleOTARequest();
                return;
            }
            OtaAirplaneModeActivity.this.setAirplaneMode(false);
            OtaAirplaneModeActivity.access$1004();
            OtaAirplaneModeActivity.mAirplaneCountTv.setText(String.valueOf(OtaAirplaneModeActivity.mCount));
            OtaAirplaneModeActivity.this.log("Set AirplaneMode off, mCount: " + OtaAirplaneModeActivity.mCount);
        }
    }

    static /* synthetic */ int access$1004() {
        int i = mCount + 1;
        mCount = i;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getCurrectTime() {
        return this.mCurrectTime.format(new Date());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleOTARequest() {
        log("handleOTARequest");
        setAirplaneMode(true);
        MsgHandler msgHandler = this.mHandler;
        msgHandler.sendMessageDelayed(msgHandler.obtainMessage(1), (int) (this.mAirplanTimeout * 1000.0f));
    }

    private void handleOtaPSDisconnect(boolean z) {
        log("PSD status:" + z);
        if (!z) {
            this.mHandler.removeMessages(2);
        } else {
            MsgHandler msgHandler = this.mHandler;
            msgHandler.sendMessageDelayed(msgHandler.obtainMessage(2), this.mDlTputTimeout);
        }
    }

    private boolean is2G(int i) {
        return i == 1 || i == 2 || i == 16 || i == 4 || i == 7;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean is2GCSHasService(ServiceState serviceState) {
        if (serviceState == null) {
            return false;
        }
        return serviceState.getVoiceRegState() == 0 && is2G(serviceState.getVoiceNetworkType());
    }

    private boolean is3G4G(int i) {
        return i == 3 || i == 8 || i == 9 || i == 10 || i == 13 || i == 15 || i == 17 || i == 5 || i == 6 || i == 12 || i == 14;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean is3G4GPSHasService(ServiceState serviceState) {
        if (serviceState == null) {
            return false;
        }
        return serviceState.getDataRegState() == 0 && is3G4G(serviceState.getDataNetworkType());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isInCall(int i) {
        return i != 0;
    }

    private boolean isOtaPSDisconnect(int i) {
        return i == 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Elog.i("OtaAirplaneMode", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setAirplaneMode(boolean z) {
        updateNetworkstatus(getCurrectTime() + ":", -16711936);
        updateNetworkstatus("setAirplaneMode, onOff: " + z, -16711936);
        EmUtils.setAirplaneModeEnabled(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateNetworkstatus(String str, int i) {
        SpannableString spannableString = new SpannableString(str + "\r\n");
        spannableString.setSpan(new ForegroundColorSpan(i), 0, spannableString.length(), 33);
        airplane_network_status.append(spannableString);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() != R.id.airplane_time_last_set) {
            return;
        }
        setAirplaneSecond();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ota_airplane_mode);
        log("Enter: onCreate");
        mSimCardStatusTv = (TextView) findViewById(R.id.airplan_simcard_status);
        mLastTimeSetBt = (Button) findViewById(R.id.airplane_time_last_set);
        CheckBox checkBox = (CheckBox) findViewById(R.id.airplane_enable);
        mEnableFeatureCb = checkBox;
        checkBox.setOnCheckedChangeListener(new CheckBoxListener());
        mAirplaneCountTv = (TextView) findViewById(R.id.airplane_count);
        mAirplaneLastTimeEt = (EditText) findViewById(R.id.airplane_time_last);
        airplane_network_status = (TextView) findViewById(R.id.airplane_network_status);
        mLastTimeSetBt.setOnClickListener(this);
        this.mCurrectTime = new SimpleDateFormat("HH:mm:ss.S");
        if (!ModemCategory.isSimReady(-1)) {
            mSimCardStatusTv.setText("please insert only one card");
            log("please insert only one card");
            mLastTimeSetBt.setEnabled(false);
            mEnableFeatureCb.setEnabled(false);
            return;
        }
        log("The sim insert ");
        mSimCardStatusTv.setText("The sim insert ");
        this.mSimTypeToShow = 0;
        MdmBaseComponent mdmBaseComponent = new MdmBaseComponent();
        mdmBaseComponent.setEmComponentName(SubscribeMsgIdName);
        componentsArray.add(mdmBaseComponent);
        MDMCoreOperation.getInstance().mdmParametersSeting(componentsArray, this.mSimTypeToShow);
        MDMCoreOperation.getInstance().setOnMDMChangedListener(this);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
        this.mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.engineermode.otaairplanemode.OtaAirplaneModeActivity.1
            @Override // android.telephony.PhoneStateListener
            public void onCallStateChanged(int i, String str) {
                if (OtaAirplaneModeActivity.this.isInCall(i) != OtaAirplaneModeActivity.this.isInCall(OtaAirplaneModeActivity.mLastCallState)) {
                    OtaAirplaneModeActivity.this.updateNetworkstatus(OtaAirplaneModeActivity.this.getCurrectTime() + ":", -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("The call status changed:", -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tcall status(LastStatus): " + OtaAirplaneModeActivity.this.isInCall(OtaAirplaneModeActivity.mLastCallState), -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tcall status(CurrentState): " + OtaAirplaneModeActivity.this.isInCall(i), -16776961);
                    if (!OtaAirplaneModeActivity.this.isInCall(i) && OtaAirplaneModeActivity.this.isInCall(OtaAirplaneModeActivity.mLastCallState)) {
                        OtaAirplaneModeActivity.this.updateNetworkstatus("For Call hangup: Call OTA Request", SupportMenu.CATEGORY_MASK);
                        OtaAirplaneModeActivity.this.handleOTARequest();
                    }
                }
                int unused = OtaAirplaneModeActivity.mLastCallState = i;
            }

            @Override // android.telephony.PhoneStateListener
            public void onServiceStateChanged(ServiceState serviceState) {
                if (OtaAirplaneModeActivity.this.is2GCSHasService(serviceState) != OtaAirplaneModeActivity.this.is2GCSHasService(OtaAirplaneModeActivity.mLastSS)) {
                    OtaAirplaneModeActivity.this.updateNetworkstatus("The 2G service status changed:", -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tis2GCSHasService(mLastSS): " + OtaAirplaneModeActivity.this.is2GCSHasService(OtaAirplaneModeActivity.mLastSS), -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tis2GCSHasService(serviceState): " + OtaAirplaneModeActivity.this.is2GCSHasService(serviceState), -16776961);
                }
                if (OtaAirplaneModeActivity.this.is3G4GPSHasService(serviceState) != OtaAirplaneModeActivity.this.is3G4GPSHasService(OtaAirplaneModeActivity.mLastSS)) {
                    OtaAirplaneModeActivity.this.updateNetworkstatus("The 3G/4G service status changed:", -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tis3G4GPSHasService(mLastSS): " + OtaAirplaneModeActivity.this.is3G4GPSHasService(OtaAirplaneModeActivity.mLastSS), -16776961);
                    OtaAirplaneModeActivity.this.updateNetworkstatus("\tis3G4GPSHasService(serviceState):" + OtaAirplaneModeActivity.this.is3G4GPSHasService(serviceState), -16776961);
                }
                if (!OtaAirplaneModeActivity.this.is2GCSHasService(serviceState) && OtaAirplaneModeActivity.this.is2GCSHasService(OtaAirplaneModeActivity.mLastSS)) {
                    OtaAirplaneModeActivity.this.updateNetworkstatus("For 2G CS NO SERVICE:Call OTA Request", SupportMenu.CATEGORY_MASK);
                    OtaAirplaneModeActivity.this.handleOTARequest();
                } else if (!OtaAirplaneModeActivity.this.is3G4GPSHasService(serviceState) && OtaAirplaneModeActivity.this.is3G4GPSHasService(OtaAirplaneModeActivity.mLastSS)) {
                    OtaAirplaneModeActivity.this.updateNetworkstatus("For 3G/4G CS NO SERVICE:Call OTA Request", SupportMenu.CATEGORY_MASK);
                    OtaAirplaneModeActivity.this.handleOTARequest();
                }
                ServiceState unused = OtaAirplaneModeActivity.mLastSS = serviceState;
            }
        };
        float f = Float.parseFloat(EmUtils.readSharedPreferences("OtaAirplaneMode", KEY_LAST_TIME, String.valueOf(DEFAULT_AIRPLANE_TIMEOUT)));
        this.mAirplanTimeout = f;
        mAirplaneLastTimeEt.setText(String.valueOf(f));
        if (EmUtils.readSharedPreferences("OtaAirplaneMode", KEY_FLAG_ENABLE, "0").equals("1")) {
            mEnableFeatureCb.setChecked(true);
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        log("onDestroy");
    }

    @Override // com.mediatek.engineermode.otaairplanemode.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMData(String str, Msg msg) {
        if (str.equals(MDMContent.MSG_ID_EM_EL1_STATUS_IND)) {
            int fieldValue = MDMCoreOperation.getInstance().getFieldValue(msg, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_TPUT, true);
            log("PrimaryCellDlThroughput,dl_tput : " + fieldValue);
            if (isOtaPSDisconnect(fieldValue) && !isOtaPSDisconnect(this.mLastDlTput)) {
                log("The Ota PSD status changed:");
                log("PSD status(Last):" + this.mLastDlTput);
                log("PSD status(Serving):" + fieldValue);
                handleOtaPSDisconnect(true);
            } else if (!isOtaPSDisconnect(fieldValue) && isOtaPSDisconnect(this.mLastDlTput)) {
                log("The Ota PSD status changed:");
                log("PSD status(Last):" + this.mLastDlTput);
                log("PSD status(Serving):" + fieldValue);
                handleOtaPSDisconnect(false);
            }
            this.mLastDlTput = fieldValue;
        }
    }

    @Override // com.mediatek.engineermode.otaairplanemode.MDMCoreOperation.IMDMSeiviceInterface
    public void onUpdateMDMStatus(int i) {
        if (i == 0) {
            log("MDM Service init done");
            MDMCoreOperation.getInstance().mdmlSubscribe();
        } else if (i == 1) {
            log("Subscribe message id done");
            MDMCoreOperation.getInstance().mdmlEnableSubscribe();
        } else {
            if (i != 4) {
                return;
            }
            log("UnSubscribe message id done");
            MDMCoreOperation.getInstance().mdmlClosing();
        }
    }

    void registerNetworkListen() {
        this.mTelephonyManager.listen(this.mPhoneStateListener, 33);
        MDMCoreOperation.getInstance().mdmInitialize(this);
    }

    public void setAirplaneSecond() {
        log("onClick, setAirplaneSecond");
        String string = mAirplaneLastTimeEt.getText().toString();
        if (string == null || string.equals("")) {
            EmUtils.showToast("Use the default value: 1s");
            return;
        }
        float f = Float.parseFloat(string);
        this.mAirplanTimeout = f;
        EmUtils.writeSharedPreferences("OtaAirplaneMode", KEY_LAST_TIME, String.valueOf(f));
        EmUtils.showToast("Set the Airplane Last time to(s):" + this.mAirplanTimeout);
        log("Set the Airplane Last time to(s): " + this.mAirplanTimeout);
    }

    void setupOtaRequest(boolean z) {
        if (!z) {
            mCount = 0;
            unRegisterNetworkListen();
            log("Disable the listen succeed");
            EmUtils.showToast("Disable the listen succeed");
            EmUtils.writeSharedPreferences("OtaAirplaneMode", KEY_FLAG_ENABLE, "0");
            return;
        }
        registerNetworkListen();
        airplane_network_status.setText("");
        mAirplaneCountTv.setText(String.valueOf(mCount));
        log("Enable the status listen succeed");
        EmUtils.showToast("Enable the status listen succeed");
        EmUtils.writeSharedPreferences("OtaAirplaneMode", KEY_FLAG_ENABLE, "1");
    }

    void unRegisterNetworkListen() {
        this.mTelephonyManager.listen(this.mPhoneStateListener, 0);
        MDMCoreOperation.getInstance().mdmlUnSubscribe();
        this.mHandler.removeCallbacksAndMessages(null);
    }
}
