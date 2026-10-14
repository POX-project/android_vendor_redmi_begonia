package com.mediatek.internal.telephony.datasub;

import android.content.Context;
import android.content.Intent;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import com.mediatek.internal.telephony.dataconnection.MtkDcHelper;

/* JADX INFO: loaded from: classes.dex */
public class SmartDataSwitchAssistantOpExt implements ISmartDataSwitchAssistantOpExt {
    private static boolean DBG = true;
    private static String LOG_TAG = "SmartDataSwitchOpExt";
    private static Context mContext = null;
    private static SmartDataSwitchAssistant mSmartData = null;
    private boolean isSrvccDuringCall = false;
    protected int mVoiceNetworkType = 0;

    public SmartDataSwitchAssistantOpExt(Context context) {
        mContext = context;
    }

    private boolean isNetworkTypeChanged(int i) {
        logd("isNetworkTypeChanged: mVoiceNetworkType=" + this.mVoiceNetworkType + " newVoiceNwType=" + i);
        if (this.mVoiceNetworkType == i) {
            return false;
        }
        this.mVoiceNetworkType = i;
        return true;
    }

    protected static void logd(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str);
        }
    }

    protected static void loge(String str) {
        if (DBG) {
            Rlog.e(LOG_TAG, str);
        }
    }

    protected static void logi(String str) {
        if (DBG) {
            Rlog.i(LOG_TAG, str);
        }
    }

    protected static void logv(String str) {
        if (DBG) {
            Rlog.v(LOG_TAG, str);
        }
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public boolean checkIsSwitchAvailable(int i) {
        if (Settings.Global.getInt(mContext.getContentResolver(), "data_service_enabled", 0) == 0) {
            logd("checkIsSwitchAvailable() settings is off, not passed");
            return false;
        }
        MtkDcHelper mtkDcHelper = MtkDcHelper.getInstance();
        if (mtkDcHelper != null && mtkDcHelper.getDsdaMode() == 1) {
            logd("checkIsSwitchAvailable(): Dsda mode, not passed");
            return false;
        }
        int voiceNetworkType = mSmartData.getVoiceNetworkType(i);
        boolean zIsWifcCalling = mSmartData.isWifcCalling(i);
        boolean zIsVoLteCalling = mSmartData.isVoLteCalling(i);
        int temporaryDataMode = mSmartData.getTemporaryDataMode();
        logd("checkIsSwitchAvailable() nwType=" + voiceNetworkType + ", isCdma=" + ServiceState.isCdma(voiceNetworkType) + ", isWifcCalling=" + zIsWifcCalling + ", isVoLteCalling=" + zIsVoLteCalling + ", isSrvccDuringCall=" + this.isSrvccDuringCall + ", mode=" + temporaryDataMode);
        if (temporaryDataMode == 0) {
            if (ServiceState.isCdma(voiceNetworkType) || voiceNetworkType == 16 || zIsWifcCalling) {
                logd("checkIsSwitchAvailable(): not passed, mode TEMP_DATA_MODE_DEFAULT");
                return false;
            }
        } else if (temporaryDataMode == 1) {
            if (ServiceState.isCdma(voiceNetworkType) || voiceNetworkType == 16 || zIsWifcCalling || !zIsVoLteCalling) {
                logd("checkIsSwitchAvailable(): not passed, mode TEMP_DATA_MODE_ONLY_VOLTE");
                return false;
            }
        } else if (temporaryDataMode != 2) {
            logd("checkIsSwitchAvailable(): not passed, unknown mode:" + temporaryDataMode);
        } else if (ServiceState.isCdma(voiceNetworkType) || voiceNetworkType == 16 || zIsWifcCalling || (!zIsVoLteCalling && !this.isSrvccDuringCall)) {
            logd("checkIsSwitchAvailable(): not passed, mode TEMP_DATA_MODE_EXCEPT_CSFB");
            return false;
        }
        logd("checkIsSwitchAvailable(): passed");
        return true;
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void init(SmartDataSwitchAssistant smartDataSwitchAssistant) {
        logd("init()");
        mSmartData = smartDataSwitchAssistant;
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public boolean isNeedSwitchCallType(int i) {
        return false;
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public boolean isSmartDataSwtichAllowed() {
        return true;
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onCallEnded() {
        this.isSrvccDuringCall = false;
        mSmartData.unregServiceStateChangedEvent();
        mSmartData.unregSrvccEvent();
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onCallStarted() {
        this.isSrvccDuringCall = false;
        mSmartData.regServiceStateChangedEvent();
        mSmartData.regSrvccEvent();
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onHandoverToCellular() {
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onHandoverToWifi() {
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public boolean onServiceStateChanged(int i) {
        return i == mSmartData.getInCallPhoneId() && isNetworkTypeChanged(mSmartData.getVoiceNetworkType(i));
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onSrvccStateChanged() {
        this.isSrvccDuringCall = true;
        logd("onSrvccStateChanged, isSrvccDuringCall=true");
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onSubChanged() {
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public void onTemporaryDataSettingsChanged() {
    }

    @Override // com.mediatek.internal.telephony.datasub.ISmartDataSwitchAssistantOpExt
    public boolean preCheckByCallStateExt(Intent intent, boolean z) {
        return z;
    }
}
