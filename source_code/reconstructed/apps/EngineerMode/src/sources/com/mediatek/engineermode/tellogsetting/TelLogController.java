package com.mediatek.engineermode.tellogsetting;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.SystemProperties;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;

/* JADX INFO: loaded from: classes3.dex */
public class TelLogController {
    private static final String LOG_INTERNAL_PROP = "ro.vendor.mtklog_internal";
    private static final String LOG_MUCH_DISABLE = "false";
    private static final String LOG_MUCH_ENABLE = "true";
    private static final String LOG_MUCH_PROP = "persist.vendor.logmuch";
    private static final String PREF_LOG_ENABLE = "log_enable";
    private static final String PREF_NAME = "tel_log";
    private static final String PROP_DISABLE = "0";
    private static final String PROP_ENABLE = "1";
    static final String TAG = "telLogSetting";
    private static final String TEL_LOG_PROP = "persist.vendor.log.tel_dbg";
    private static final int TIMEOUT_PERIOD = 5000;
    private static final int WAIT_TIME = 300;
    private static final String[] PROPERTY_M_LOG_TAG_COMMON_RIL = {"persist.log.tag.AT", "persist.log.tag.RILMUXD", "persist.log.tag.RILC-MTK", "persist.log.tag.RILC", "persist.log.tag.RfxMainThread", "persist.log.tag.RfxRoot", "persist.log.tag.RfxRilAdapter", "persist.log.tag.RfxController", "persist.log.tag.RILC-RP", "persist.log.tag.RfxTransUtils", "persist.log.tag.RfxMclDisThread", "persist.log.tag.RfxCloneMgr", "persist.log.tag.RfxHandlerMgr", "persist.log.tag.RfxIdToStr", "persist.log.tag.RfxDisThread", "persist.log.tag.RfxMclStatusMgr", "persist.log.tag.RIL-Fusion", "persist.log.tag.RfxContFactory", "persist.log.tag.RfxChannelMgr", "persist.log.tag.RIL-Parcel", "persist.log.tag.RIL-Socket"};
    private static final String[] PROPERTY_M_LOG_TAG = {"persist.log.tag.MtkDct", "persist.log.tag.MtkDc", "persist.log.tag.MtkDcc", "persist.log.tag.RIL-DATA", "persist.log.tag.C2K_RIL-DATA", "persist.log.tag.GsmCdmaPhone", "persist.log.tag.RILMD2-SS", "persist.log.tag.CapaSwitch", "persist.log.tag.DSSelector", "persist.log.tag.DSSExt", "persist.log.tag.Op01DSSExt", "persist.log.tag.Op02DSSExt", "persist.log.tag.Op09DSSExt", "persist.log.tag.Op18DSSExt", "persist.log.tag.DSSelectorUtil", "persist.log.tag.Op01SimSwitch", "persist.log.tag.Op02SimSwitch", "persist.log.tag.Op18SimSwitch", "persist.log.tag.DcFcMgr", "persist.log.tag.RetryManager", "persist.log.tag.IccProvider", "persist.log.tag.IccPhoneBookIM", "persist.log.tag.AdnRecordCache", "persist.log.tag.AdnRecordLoader", "persist.log.tag.AdnRecord", "persist.log.tag.RIL-PHB", "persist.log.tag.MtkIccProvider", "persist.log.tag.MtkIccPHBIM", "persist.log.tag.MtkAdnRecord", "persist.log.tag.MtkRecordLoader", "persist.log.tag.RpPhbController", "persist.log.tag.RmcPhbReq", "persist.log.tag.RmcPhbUrc", "persist.log.tag.RtcPhb", "persist.log.tag.VT", "persist.log.tag.ImsVTProvider", "persist.log.tag.IccCardProxy", "persist.log.tag.IsimFileHandler", "persist.log.tag.IsimRecords", "persist.log.tag.SIMRecords", "persist.log.tag.SpnOverride", "persist.log.tag.UiccCard", "persist.log.tag.UiccController", "persist.log.tag.RIL-SIM", "persist.log.tag.CountryDetector", "persist.log.tag.DataDispatcher", "persist.log.tag.ImsService", "persist.log.tag.IMS_RILA", "persist.log.tag.IMSRILRequest", "persist.log.tag.ImsManager", "persist.log.tag.ImsApp", "persist.log.tag.ImsBaseCommands", "persist.log.tag.MtkImsManager", "persist.log.tag.MtkImsService", "persist.log.tag.RP_IMS", "persist.log.tag.RtcIms", "persist.log.tag.RtcImsConference", "persist.log.tag.RtcImsDialog", "persist.log.tag.RmcImsCtlUrcHdl", "persist.log.tag.RmcImsCtlReqHdl", "persist.log.tag.ImsCall", "persist.log.tag.ImsPhone", "persist.log.tag.ImsPhoneCall", "persist.log.tag.ImsPhoneBase", "persist.log.tag.ImsCallSession", "persist.log.tag.ImsCallProfile", "persist.log.tag.ImsEcbm", "persist.log.tag.ImsEcbmProxy", "persist.log.tag.OperatorUtils", "persist.log.tag.WfoApp", "persist.log.tag.GsmCdmaConn", "persist.log.tag.GsmCdmaPhone", "persist.log.tag.Phone", "persist.log.tag.RIL-CC", "persist.log.tag.RpCallControl", "persist.log.tag.RpAudioControl", "persist.log.tag.GsmCallTkrHlpr", "persist.log.tag.MtkPhoneNotifr", "persist.log.tag.MtkGsmCdmaConn", "persist.log.tag.RadioManager", "persist.log.tag.RIL_Mux", "persist.log.tag.RIL-OEM", "persist.log.tag.RIL", "persist.log.tag.RIL_UIM_SOCKET", "persist.log.tag.RILD", "persist.log.tag.RIL-RP", "persist.log.tag.RfxMessage", "persist.log.tag.RfxDebugInfo", "persist.log.tag.RfxTimer", "persist.log.tag.RfxObject", "persist.log.tag.SlotQueueEntry", "persist.log.tag.RfxAction", "persist.log.tag.RFX", "persist.log.tag.RpRadioMessage", "persist.log.tag.RpModemMessage", "persist.log.tag.PhoneFactory", "persist.log.tag.ProxyController", "persist.log.tag.SpnOverride", "persist.log.tag.RfxDefDestUtils", "persist.log.tag.RfxSM", "persist.log.tag.RfxSocketSM", "persist.log.tag.RfxDT", "persist.log.tag.RpCdmaOemCtrl", "persist.log.tag.RpRadioCtrl", "persist.log.tag.RpMDCtrl", "persist.log.tag.RpCdmaRadioCtrl", "persist.log.tag.RpFOUtils", "persist.log.tag.C2K_RIL-SIM", "persist.log.tag.MtkGsmCdmaPhone", "persist.log.tag.MtkRILJ", "persist.log.tag.MtkRadioInd", "persist.log.tag.MtkRadioResp", "persist.log.tag.ExternalSimMgr", "persist.log.tag.VsimAdaptor", "persist.log.tag.MtkCsimFH", "persist.log.tag.MtkIsimFH", "persist.log.tag.MtkRuimFH", "persist.log.tag.MtkSIMFH", "persist.log.tag.MtkSIMRecords", "persist.log.tag.MtkSmsCbHeader", "persist.log.tag.MtkSmsManager", "persist.log.tag.MtkSmsMessage", "persist.log.tag.MtkSpnOverride", "persist.log.tag.MtkUiccCardApp", "persist.log.tag.MtkUiccCtrl", "persist.log.tag.MtkUsimFH", "persist.log.tag.RpRilClientCtrl", "persist.log.tag.RilMalClient", "persist.log.tag.RpSimController", "persist.log.tag.MtkSubCtrl", "persist.log.tag.RP_DAC", "persist.log.tag.RP_DC", "persist.log.tag.NetAgentService", "persist.log.tag.NetAgent_IO", "persist.log.tag.NetLnkEventHdlr", "persist.log.tag.RmcDcCommon", "persist.log.tag.RmcDcDefault", "persist.log.tag.RtcDC", "persist.log.tag.RilClient", "persist.log.tag.RmcCommSimReq", "persist.log.tag.RmcCdmaSimRequest", "persist.log.tag.RmcGsmSimRequest", "persist.log.tag.RmcCommSimUrc", "persist.log.tag.RmcGsmSimUrc", "persist.log.tag.RtcCommSimCtrl", "persist.log.tag.RmcCommSimOpReq", "persist.log.tag.RtcRadioCont", "persist.log.tag.MtkRetryManager", "persist.log.tag.RmcDcPdnManager", "persist.log.tag.RmcDcReqHandler", "persist.log.tag.RmcDcUtility", "persist.log.tag.RfxIdToMsgId", "persist.log.tag.RfxOpUtils", "persist.log.tag.RfxMclMessenger", "persist.log.tag.RfxRilAdapter", "persist.log.tag.RfxFragEnc", "persist.log.tag.RfxStatusMgr", "persist.log.tag.RmcRadioReq", "persist.log.tag.RmcCapa", "persist.log.tag.RtcCapa", "persist.log.tag.RpMalController", "persist.log.tag.WORLDMODE", "persist.log.tag.RtcWp", "persist.log.tag.RmcWp", "persist.log.tag.RmcOpRadioReq", "persist.log.tag.RP_DC", "persist.log.tag.RfxRilUtils", "persist.log.tag.RmcCdmaSimUrc", "persist.log.tag.MtkPhoneNumberUtils", "persist.log.tag.RmcOemHandler", "persist.log.tag.CarrierExpressServiceImpl", "persist.log.tag.CarrierExpressServiceImplExt", "persist.log.tag.PhoneConfigurationSettings", "persist.log.tag.RfxContFactory", "persist.log.tag.RfxChannelMgr", "persist.log.tag.RfxMclDisThread", "persist.log.tag.RfxCloneMgr", "persist.log.tag.RfxHandlerMgr", "persist.log.tag.RtcModeCont", "persist.log.tag.RIL-SocListen", "persist.log.tag.RIL-Netlink", "persist.log.tag.RfxVersionMgr", "persist.log.tag.RilOpProxy", "persist.log.tag.RILC-OP", "persist.log.tag.RilOemClient", "persist.log.tag.Telecom", "persist.log.tag.MwiRIL", "persist.log.tag.SmartRatController", "persist.log.tag.SmartGearsController", "persist.log.tag.SocketStatusProvider", "persist.log.tag.AppStatusProvider", "persist.log.tag.InformationUtil", "persist.log.tag.SmartRatDummyUsageGenerator", "persist.log.tag.SmartRatSwitchIntfMgr", "persist.log.tag.SmartRatSwitcher", "persist.log.tag.RtcCodec", "persist.log.tag.SmRATCdcNoti", "persist.log.tag.SmartRatInd", "persist.log.tag.WpfaCcciDataHeaderEncoder", "persist.log.tag.WpfaCcciReader", "persist.log.tag.WpfaCcciSender", "persist.log.tag.WpfaControlMsgHandler", "persist.log.tag.WpfaDriver", "persist.log.tag.WpfaDriverAccept", "persist.log.tag.WpfaDriverAdapter", "persist.log.tag.WpfaDriverDeReg", "persist.log.tag.WpfaDriverMessage", "persist.log.tag.WpfaDriverRegFilter", "persist.log.tag.WpfaDriverULIpPkt", "persist.log.tag.WpfaDriverUtilis", "persist.log.tag.WpfaDriverVersion", "persist.log.tag.WpfaFilterRuleReqHandler", "persist.log.tag.WpfaRingBuffer", "persist.log.tag.WpfaShmAccessController", "persist.log.tag.WpfaShmReadMsgHandler", "persist.log.tag.WpfaShmSynchronizer", "persist.log.tag.WpfaShmWriteMsgHandler", "persist.log.tag.wpfa_iptable_android", "persist.log.tag.WpfaRuleRegister", "persist.log.tag.WpfaParsing", "persist.log.tag.WpfaRuleContainer"};
    private static final String[] PROPERTY_M_LOG_TAG_V = {"persist.log.tag.NetworkStats", "persist.log.tag.NetworkPolicy", "persist.log.tag.RTC_DAC", "persist.log.tag.RmcEmbmsReq", "persist.log.tag.RmcEmbmsUrc", "persist.log.tag.RtcEmbmsUtil", "persist.log.tag.RtcEmbmsAt", "persist.log.tag.MtkEmbmsAdaptor", "persist.log.tag.MTKSST", "persist.log.tag.RmcNwHdlr", "persist.log.tag.RmcNwReqHdlr", "persist.log.tag.RmcNwRTReqHdlr", "persist.log.tag.RmcRatSwHdlr", "persist.log.tag.RtcRatSwCtrl", "persist.log.tag.RtcNwCtrl", "persist.log.tag.MtkPhoneSwitcher", "persist.log.tag.VoLTE_Stack", "persist.log.tag.VoLTE_IF_CH", "persist.log.tag.VoLTE_WAKELOCK", "persist.log.tag.VoLTE_CONFPKG", "persist.log.tag.VoLTE_DISP", "persist.log.tag.VoLTE_UA", "persist.log.tag.VoLTE_MWI", "persist.log.tag.VoLTE_REG", "persist.log.tag.VoLTE_Service", "persist.log.tag.VoLTE_SIPTimer", "persist.log.tag.VoLTE_TRANS", "persist.log.tag.VoLTE_SIPTX", "persist.log.tag.VoLTE_SMS", "persist.log.tag.VoLTE_SOC", "persist.log.tag.VoLTE_DNS", "persist.log.tag.VoLTE_IF_SERVICE", "persist.log.tag.VoLTE_IF_CORE", "persist.log.tag.VoLTE_Auto_Testing", "persist.log.tag.VoLTE_IMCB", "persist.log.tag.VoLTE_IMCB-CM", "persist.log.tag.VoLTE_IMCB-0", "persist.log.tag.VoLTE_IMCB-1", "persist.log.tag.VoLTE_IMCB-2"};
    private static final String[] PROPERTY_M_LOG_TAG_OFF_D = {"persist.log.tag.VoLTE_Stack", "persist.log.tag.VoLTE_IF_CH", "persist.log.tag.VoLTE_WAKELOCK", "persist.log.tag.VoLTE_CONFPKG", "persist.log.tag.VoLTE_DISP", "persist.log.tag.VoLTE_UA", "persist.log.tag.VoLTE_MWI", "persist.log.tag.VoLTE_REG", "persist.log.tag.VoLTE_Service", "persist.log.tag.VoLTE_SIPTimer", "persist.log.tag.VoLTE_TRANS", "persist.log.tag.VoLTE_SIPTX", "persist.log.tag.VoLTE_SMS", "persist.log.tag.VoLTE_SOC", "persist.log.tag.VoLTE_DNS", "persist.log.tag.VoLTE_IF_SERVICE", "persist.log.tag.VoLTE_IF_CORE", "persist.log.tag.VoLTE_Auto_Testing", "persist.log.tag.VoLTE_IMCB", "persist.log.tag.VoLTE_IMCB-CM", "persist.log.tag.VoLTE_IMCB-0", "persist.log.tag.VoLTE_IMCB-1", "persist.log.tag.VoLTE_IMCB-2"};

    private void showDebugLog(boolean z) {
        Elog.i(TAG, "showDebugLog enable = " + z);
        int i = 0;
        if (z) {
            for (String str : PROPERTY_M_LOG_TAG_COMMON_RIL) {
                SystemProperties.set(str, "D");
            }
            for (String str2 : PROPERTY_M_LOG_TAG) {
                SystemProperties.set(str2, "D");
            }
            String[] strArr = PROPERTY_M_LOG_TAG_V;
            int length = strArr.length;
            while (i < length) {
                SystemProperties.set(strArr[i], "V");
                i++;
            }
            return;
        }
        for (String str3 : PROPERTY_M_LOG_TAG_COMMON_RIL) {
            SystemProperties.set(str3, "I");
        }
        if (SystemProperties.get(FeatureSupport.FK_BUILD_TYPE).equals(FeatureSupport.ENG_LOAD)) {
            String[] strArr2 = PROPERTY_M_LOG_TAG_OFF_D;
            int length2 = strArr2.length;
            while (i < length2) {
                SystemProperties.set(strArr2[i], "D");
                i++;
            }
            return;
        }
        for (String str4 : PROPERTY_M_LOG_TAG) {
            SystemProperties.set(str4, "I");
        }
        String[] strArr3 = PROPERTY_M_LOG_TAG_V;
        int length3 = strArr3.length;
        while (i < length3) {
            SystemProperties.set(strArr3[i], "I");
            i++;
        }
    }

    boolean getTelLogStatus(Context context) {
        return context.getSharedPreferences(PREF_NAME, 0).getBoolean(PREF_LOG_ENABLE, false);
    }

    boolean switchTelLog(Context context, boolean z) {
        Elog.i(TAG, "switchTelLog " + z);
        String str = z ? "1" : "0";
        String str2 = z ? LOG_MUCH_DISABLE : LOG_MUCH_ENABLE;
        SystemProperties.set(TEL_LOG_PROP, str);
        SystemProperties.set(LOG_MUCH_PROP, str2);
        boolean z2 = false;
        int i = 0;
        while (i < TIMEOUT_PERIOD) {
            try {
                Thread.sleep(300L);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i += 300;
            Elog.i(TAG, "sleep:" + i);
            if (str2.equals(SystemProperties.get(LOG_MUCH_PROP))) {
                Elog.i(TAG, "set success:" + SystemProperties.get(LOG_MUCH_PROP));
                z2 = true;
                break;
            }
        }
        if (!z2) {
            return false;
        }
        showDebugLog(z);
        SharedPreferences.Editor editorEdit = context.getSharedPreferences(PREF_NAME, 0).edit();
        editorEdit.putBoolean(PREF_LOG_ENABLE, z);
        editorEdit.commit();
        return true;
    }
}
