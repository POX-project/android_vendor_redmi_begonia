package com.mediatek.engineermode;

import android.content.Context;
import android.content.Intent;
import android.content.res.XmlResourceParser;
import android.os.Bundle;
import android.os.SystemProperties;
import android.os.UserManager;
import android.preference.Preference;
import android.preference.PreferenceFragment;
import android.preference.PreferenceScreen;
import android.telephony.TelephonyManager;
import android.widget.Toast;
import com.mediatek.engineermode.cxp.CarrierExpressUtil;
import com.mediatek.engineermode.dm.DiagnosticMonitoringSettingActivity;
import com.mediatek.engineermode.rsc.RuntimeSwitchConfig;
import com.mediatek.engineermode.tellogsetting.TelLogSettingActivity;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes2.dex */
public class PrefsFragment extends PreferenceFragment {
    private static final String INNER_LOAD_INDICATOR_FILE = "/vendor/etc/system_update/address.xml";
    private static final String PROPERTY_MCF_SUPPORT = "ro.vendor.mtk_mcf_support";
    public static final String PR_MODEM_MONITOR_SUPPORT = "ro.vendor.mtk_modem_monitor_support";
    public static final String PR_OPERATOR_OPTR = "persist.vendor.operator.optr";
    public static final String PR_OPERATOR_SEG = "persist.vendor.operator.seg";
    public static final String PR_SIMME_LOCK_MODE = "ro.vendor.sim_me_lock_mode";
    public static final String PR_SIM_RIL_TESTSIM = "vendor.gsm.sim.ril.testsim";
    public static final String PR_SIM_RIL_TESTSIM2 = "vendor.gsm.sim.ril.testsim.2";
    public static final String PR_SIM_RIL_TESTSIM3 = "vendor.gsm.sim.ril.testsim.3";
    public static final String PR_SIM_RIL_TESTSIM4 = "vendor.gsm.sim.ril.testsim.4";
    private static final String TAG = "PrefsFragment";
    private int[] mFragmentRest;
    private boolean mIsInit = false;
    private int mXmlResId;
    private static final String[] KEY_REMOVE_ARRAY = {"display", "battery_log", "memory"};
    private static final int[] FRAGMENT_RES = {R.xml.telephony, R.xml.connectivity, R.xml.hardware_testing, R.xml.location, R.xml.log_and_debugging, R.xml.others};
    private static final int[] FRAGMENT_RES_WIFIONLY = {R.xml.connectivity, R.xml.hardware_testing, R.xml.location, R.xml.log_and_debugging, R.xml.others};

    class UiCusXmlParser {
        private static final String ATTR_IF_SHOW = "ifshow";
        private static final String ATTR_PREF_KEY = "key";
        private static final String ATTR_VALUE_NOT_SHOW = "false";
        private static final String TAG_FEATURE = "feature";
        private ArrayList<String> mItemsToRemove = new ArrayList<>();

        UiCusXmlParser() {
        }

        List<String> getItemsToRemove() {
            return Collections.unmodifiableList(this.mItemsToRemove);
        }

        void parse(Context context) {
            this.mItemsToRemove.clear();
            XmlResourceParser xml = context.getResources().getXml(R.xml.ui_customize);
            try {
                for (int eventType = xml.getEventType(); eventType != 1; eventType = xml.next()) {
                    if (eventType == 2 && TAG_FEATURE.equals(xml.getName()) && xml.getAttributeValue(null, ATTR_IF_SHOW).equals(ATTR_VALUE_NOT_SHOW)) {
                        this.mItemsToRemove.add(xml.getAttributeValue(null, ATTR_PREF_KEY));
                    }
                }
            } catch (IOException e) {
                e.printStackTrace();
            } catch (XmlPullParserException e2) {
                e2.printStackTrace();
            }
        }
    }

    private boolean isActivityAvailable(Intent intent) {
        return getActivity().getPackageManager().resolveActivity(intent, 0) != null;
    }

    public static boolean isMcfSupport() {
        return SystemProperties.getInt(PROPERTY_MCF_SUPPORT, 0) == 1;
    }

    private boolean isTestSim() {
        return SystemProperties.get(PR_SIM_RIL_TESTSIM).equals("1") || SystemProperties.get(PR_SIM_RIL_TESTSIM2).equals("1") || SystemProperties.get(PR_SIM_RIL_TESTSIM3).equals("1") || SystemProperties.get(PR_SIM_RIL_TESTSIM4).equals("1");
    }

    private boolean isVoiceCapable() {
        TelephonyManager telephonyManager = (TelephonyManager) getActivity().getSystemService("phone");
        boolean z = telephonyManager != null && telephonyManager.isVoiceCapable();
        Elog.i(TAG, "sIsVoiceCapable : " + z);
        return z;
    }

    private void removeItemsByBuildType(PreferenceScreen preferenceScreen) {
        if (!isTestSim() && !FeatureSupport.isEngLoad() && !FeatureSupport.isUserDebugLoad() && !ChipSupport.isFeatureSupported(0)) {
            removePreference(preferenceScreen, "auto_answer");
            Elog.d(TAG, "Hide the auto_answer item");
        }
        if (!ChipSupport.isFeatureSupported(0) && !FeatureSupport.isEngLoad() && !FeatureSupport.isUserDebugLoad()) {
            Elog.i(TAG, "it is customer user load!");
            if (SystemProperties.get("ro.debuggable", "0").equals("0")) {
                Elog.i(TAG, "only remove atci on not root version");
                removePreference(preferenceScreen, "atci");
            }
            removePreference(preferenceScreen, "voice_settings");
            removePreference(preferenceScreen, "md_log_filter");
            removePreference(preferenceScreen, "non_sleep_mode");
            removeItemsByCustomization(preferenceScreen);
        }
        if (FeatureSupport.isUserDebugLoad()) {
            removePreference(preferenceScreen, "battery_log");
        }
        if (FeatureSupport.isUserLoad()) {
            removePreference(preferenceScreen, "amr_wb");
            removePreference(preferenceScreen, "lte_tool");
            removePreference(preferenceScreen, "cmas");
            removePreference(preferenceScreen, "diagnostic");
            removePreference(preferenceScreen, "dsda_setting");
            removePreference(preferenceScreen, "fast_dormancy");
            removePreference(preferenceScreen, "gprs");
            removePreference(preferenceScreen, "hspa_info");
            removePreference(preferenceScreen, "iatype");
            removePreference(preferenceScreen, "md_em_filter");
            removePreference(preferenceScreen, "sbp");
            removePreference(preferenceScreen, "spc");
            removePreference(preferenceScreen, "sim_switch");
            removePreference(preferenceScreen, "simme_lock1");
            removePreference(preferenceScreen, "simme_lock2");
            removePreference(preferenceScreen, "u3_phy");
            removePreference(preferenceScreen, "gwsd_setting");
            removePreference(preferenceScreen, "vodata");
            removePreference(preferenceScreen, "noise_profiling_tool");
            removePreference(preferenceScreen, "nrconfig");
            removePreference(preferenceScreen, "xpxtaging");
            removePreference(preferenceScreen, "multi_sim_switch");
            removePreference(preferenceScreen, "nrmapconfig");
            removePreference(preferenceScreen, "bt_test_tool");
            removePreference(preferenceScreen, "cds_information");
            removePreference(preferenceScreen, "fm_receiver");
            removePreference(preferenceScreen, "fm_transmitter");
            removePreference(preferenceScreen, "wfd_settings");
            removePreference(preferenceScreen, "wifi_em_config");
            removePreference(preferenceScreen, "aal");
            removePreference(preferenceScreen, "memory");
            removePreference(preferenceScreen, "power");
            removePreference(preferenceScreen, "usbmode_switch");
            removePreference(preferenceScreen, "usb");
            removePreference(preferenceScreen, "usb_speed");
            removePreference(preferenceScreen, "clk_quality_at");
            removePreference(preferenceScreen, "cw_test");
            removePreference(preferenceScreen, "fused_location_provider");
            removePreference(preferenceScreen, "desense_at");
            removePreference(preferenceScreen, "dcb_cal");
            removePreference(preferenceScreen, "mnl_config_editor");
            removePreference(preferenceScreen, "battery_log");
            removePreference(preferenceScreen, "modem_reset_delay");
            removePreference(preferenceScreen, "modem_warning");
            removePreference(preferenceScreen, "wcn_core_dump");
            removePreference(preferenceScreen, "carrier_express");
            removePreference(preferenceScreen, "mdml_sample");
            removePreference(preferenceScreen, "swla");
            removePreference(preferenceScreen, "system_update");
            removePreference(preferenceScreen, "usbacm");
            removePreference(preferenceScreen, "usb_checker_enabler");
        }
    }

    private void removeItemsByCustomization(PreferenceScreen preferenceScreen) {
        UiCusXmlParser uiCusXmlParser = new UiCusXmlParser();
        uiCusXmlParser.parse(EmApplication.getContext());
        Iterator<String> it = uiCusXmlParser.getItemsToRemove().iterator();
        while (it.hasNext()) {
            removePreference(preferenceScreen, it.next());
        }
    }

    private void removeItemsByFeatureSupport(PreferenceScreen preferenceScreen) {
        if (!TelLogSettingActivity.isSupport()) {
            removePreference(preferenceScreen, "telephony_log_setting");
        }
        if (!DiagnosticMonitoringSettingActivity.isSupport()) {
            removePreference(preferenceScreen, "diagnostic_monitoring_setting");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_GNSS_L5_SUPPORT)) {
            removePreference(preferenceScreen, "dcb_cal");
        }
        if (!isVoiceCapable() || EngineerMode.sWifiOnly) {
            removePreference(preferenceScreen, "auto_dialer");
        }
        if (!FeatureSupport.isGpsSupport(getActivity())) {
            removePreference(preferenceScreen, "ygps");
            removePreference(preferenceScreen, "cw_test");
        }
        if (!FeatureSupport.isWifiSupport(getActivity())) {
            removePreference(preferenceScreen, "wifi");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_APC_SUPPORT)) {
            removePreference(preferenceScreen, "apc");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_FD_SUPPORT)) {
            removePreference(preferenceScreen, "fast_dormancy");
        }
        if (!SystemProperties.get(PR_MODEM_MONITOR_SUPPORT).equals("1")) {
            removePreference(preferenceScreen, "mdml_sample");
            removePreference(preferenceScreen, "mdm_em_info");
            removePreference(preferenceScreen, "mdm_config");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_DEVREG_APP)) {
            removePreference(preferenceScreen, "device_register");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_WFD_SUPPORT)) {
            removePreference(preferenceScreen, "wfd_settings");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_IMS_SUPPORT)) {
            removePreference(preferenceScreen, "ims");
        }
        if (!SystemProperties.get(PR_SIMME_LOCK_MODE, "0").equals("0") && !SystemProperties.get(PR_SIMME_LOCK_MODE, "0").equals("2") && !SystemProperties.get(PR_SIMME_LOCK_MODE, "0").equals("3")) {
            removePreference(preferenceScreen, "simme_lock1");
            removePreference(preferenceScreen, "simme_lock2");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_AAL_SUPPORT)) {
            removePreference(preferenceScreen, "aal");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_VILTE_SUPPORT)) {
            removePreference(preferenceScreen, "vilte");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_MD_WM_SUPPORT)) {
            removePreference(preferenceScreen, "rat_config");
        }
        if (!WorldModeUtil.isWorldPhoneSupport() && !WorldModeUtil.isNrSupported()) {
            removePreference(preferenceScreen, "world_mode");
            removePreference(preferenceScreen, "modem_switch");
        } else if (WorldModeUtil.isWorldModeSupport()) {
            removePreference(preferenceScreen, "modem_switch");
        } else {
            removePreference(preferenceScreen, "world_mode");
        }
        if (!isMcfSupport()) {
            removePreference(preferenceScreen, "mcf_config");
        }
        if (!FeatureSupport.isSupported(FeatureSupport.FK_GWSD_SUPPORT)) {
            removePreference(preferenceScreen, "gwsd_setting");
        }
        if (FeatureSupport.isSupported(FeatureSupport.FK_VODATA_SUPPORT)) {
            return;
        }
        removePreference(preferenceScreen, "vodata");
    }

    private void removeItemsByModemType(PreferenceScreen preferenceScreen) {
        if (FeatureSupport.is90Modem() || FeatureSupport.is3GOnlyModem()) {
            removePreference(preferenceScreen, "mdm_em_info");
            removePreference(preferenceScreen, "cdma_network_info");
            removePreference(preferenceScreen, "ltecaconfig");
        }
        if (FeatureSupport.is93Modem()) {
            removePreference(preferenceScreen, "c2k_ap_ir");
            removePreference(preferenceScreen, "c2k_ir_settings");
            removePreference(preferenceScreen, "cdma_network_select");
            removePreference(preferenceScreen, "u3_phy");
            removePreference(preferenceScreen, "network_info");
            removePreference(preferenceScreen, "cdma_network_info");
            removePreference(preferenceScreen, "test_sim_switch");
            removePreference(preferenceScreen, "iatype");
        }
        if (FeatureSupport.is91Modem() || FeatureSupport.is92Modem()) {
            removePreference(preferenceScreen, "network_info");
            removePreference(preferenceScreen, "md_low_power_monitor");
        }
        if (FeatureSupport.is90Modem() || FeatureSupport.is91Modem() || FeatureSupport.is3GOnlyModem()) {
            removePreference(preferenceScreen, "anttunerdebug");
        }
        if (!FeatureSupport.is95Modem() && !FeatureSupport.is97Modem()) {
            removePreference(preferenceScreen, "lte_rx_mimo_configure");
        }
        if (!ModemCategory.isLteSupport()) {
            removePreference(preferenceScreen, "lte_network_info");
        }
        if (ModemCategory.isCdma()) {
            return;
        }
        removePreference(preferenceScreen, "c2k_ir_settings");
        removePreference(preferenceScreen, "bypass");
        removePreference(preferenceScreen, "cdma_network_select");
    }

    private void removeItemsByOptr(PreferenceScreen preferenceScreen) {
        String str = SystemProperties.get(PR_OPERATOR_OPTR);
        if (!"OP12".equals(str)) {
            removePreference(preferenceScreen, "spc");
        }
        if (!"OP01".equals(str) || !ModemCategory.isCdma()) {
            removePreference(preferenceScreen, "c2k_ap_ir");
        }
        if (!"OP07".equals(str)) {
            removePreference(preferenceScreen, "sim_info");
            removePreference(preferenceScreen, "diagnostic");
        }
        if ("OP20".equals(str)) {
            return;
        }
        removePreference(preferenceScreen, "rtn");
    }

    private void removeItemsForNonTelAddOn(PreferenceScreen preferenceScreen) {
        if (FeatureSupport.isMtkTelephonyAddOnPolicyEnable()) {
            return;
        }
        removePreference(preferenceScreen, "aal");
        removePreference(preferenceScreen, "camerasolo");
        removePreference(preferenceScreen, "voice_settings");
        removePreference(preferenceScreen, "apc");
        removePreference(preferenceScreen, "bt_test_tool");
        removePreference(preferenceScreen, "c2k_ap_ir");
        removePreference(preferenceScreen, "c2k_ir_settings");
        removePreference(preferenceScreen, "cdma_network_info");
        removePreference(preferenceScreen, "cfu");
        removePreference(preferenceScreen, "cmas");
        removePreference(preferenceScreen, "diagnostic");
        removePreference(preferenceScreen, "dsda_setting");
        removePreference(preferenceScreen, "emergency_num_key");
        removePreference(preferenceScreen, "gprs");
        removePreference(preferenceScreen, "gwsd_setting");
        removePreference(preferenceScreen, "vodata");
        removePreference(preferenceScreen, "iatype");
        removePreference(preferenceScreen, "iot_config");
        removePreference(preferenceScreen, "misc_config");
        removePreference(preferenceScreen, "modem_switch");
        removePreference(preferenceScreen, "network_info");
        removePreference(preferenceScreen, "rtn");
        removePreference(preferenceScreen, "sim_info");
        removePreference(preferenceScreen, "sim_recoverytest_tool");
        removePreference(preferenceScreen, "simme_lock1");
        removePreference(preferenceScreen, "simme_lock2");
        removePreference(preferenceScreen, "smart_rat_switch");
        removePreference(preferenceScreen, "test_sim_switch");
        removePreference(preferenceScreen, "wfd_settings");
        removePreference(preferenceScreen, "nrmapconfig");
    }

    private void removeItemsForOtherCondition(PreferenceScreen preferenceScreen) {
        if (!RuntimeSwitchConfig.supportRsc()) {
            removePreference(preferenceScreen, "rsc");
        }
        if (TelephonyManager.getDefault().getSimCount() > 1) {
            removePreference(preferenceScreen, "simme_lock1");
        } else {
            removePreference(preferenceScreen, "simme_lock2");
        }
        if (!new File(INNER_LOAD_INDICATOR_FILE).exists()) {
            removePreference(preferenceScreen, "system_update");
        }
        if (!FeatureSupport.isPackageExisted(getActivity(), FeatureSupport.PK_CDS_EM)) {
            removePreference(preferenceScreen, "cds_information");
        }
        Preference preferenceFindPreference = findPreference("cmas");
        if (preferenceFindPreference != null && !isActivityAvailable(preferenceFindPreference.getIntent())) {
            removePreference(preferenceScreen, "cmas");
        }
        if (CarrierExpressUtil.isCarrierExpressSupported()) {
            return;
        }
        removePreference(preferenceScreen, "carrier_express");
    }

    private void removeItemsOnTc1Load(PreferenceScreen preferenceScreen) {
        if (!ChipSupport.isFeatureSupported(1)) {
            removePreference(preferenceScreen, "security_status");
            removePreference(preferenceScreen, "antenna_diversity");
            return;
        }
        Elog.d(TAG, "it is tc1 branch");
        removePreference(preferenceScreen, "force_tx");
        removePreference(preferenceScreen, "apc");
        removePreference(preferenceScreen, "lte_tool");
        removePreference(preferenceScreen, "auto_answer");
        removePreference(preferenceScreen, "c2k_ap_ir");
        removePreference(preferenceScreen, "cfu");
        removePreference(preferenceScreen, "cmas");
        removePreference(preferenceScreen, "diagnostic");
        removePreference(preferenceScreen, "dsda_setting");
        removePreference(preferenceScreen, "ehrpd_bg_data");
        removePreference(preferenceScreen, "emergency_num_key");
        removePreference(preferenceScreen, "gwsd_setting");
        removePreference(preferenceScreen, "vodata");
        removePreference(preferenceScreen, "iatype");
        removePreference(preferenceScreen, "ims");
        removePreference(preferenceScreen, "iot_config");
        removePreference(preferenceScreen, "ltecaconfig");
        removePreference(preferenceScreen, "lte_hpue_configue");
        removePreference(preferenceScreen, "mcf_config");
        removePreference(preferenceScreen, "md_em_filter");
        removePreference(preferenceScreen, "md_low_power_monitor");
        removePreference(preferenceScreen, "misc_config");
        removePreference(preferenceScreen, "mobile_data_prefer");
        removePreference(preferenceScreen, "network_info");
        removePreference(preferenceScreen, "noise_profiling_tool");
        removePreference(preferenceScreen, "ota_airplane_mode");
        removePreference(preferenceScreen, "rf_desense_test");
        removePreference(preferenceScreen, "rtn");
        removePreference(preferenceScreen, "spc");
        removePreference(preferenceScreen, "sim_info");
        removePreference(preferenceScreen, "sim_switch");
        removePreference(preferenceScreen, "simme_lock1");
        removePreference(preferenceScreen, "simme_lock2");
        removePreference(preferenceScreen, "sim_recoverytest_tool");
        removePreference(preferenceScreen, "test_sim_switch");
        removePreference(preferenceScreen, "u3_phy");
        removePreference(preferenceScreen, "usb_tethering");
        removePreference(preferenceScreen, "vilte");
        removePreference(preferenceScreen, "wifi_calling");
        removePreference(preferenceScreen, "modem_switch");
        removePreference(preferenceScreen, "bt_test_tool");
        removePreference(preferenceScreen, "connsys_patch_info");
        removePreference(preferenceScreen, "nfc_st");
        removePreference(preferenceScreen, "wfd_settings");
        removePreference(preferenceScreen, "modem_reset_delay");
        removePreference(preferenceScreen, "modem_warning");
        removePreference(preferenceScreen, "wcn_core_dump");
        removePreference(preferenceScreen, "carrier_express");
        removePreference(preferenceScreen, "moms");
        removePreference(preferenceScreen, "voice_settings");
        removePreference(preferenceScreen, "smart_rat_switch");
    }

    private void removePreference(PreferenceScreen preferenceScreen, String str) {
        Preference preferenceFindPreference = findPreference(str);
        if (preferenceFindPreference != null) {
            preferenceScreen.removePreference(preferenceFindPreference);
        }
    }

    private void removeUnsupportedItems() {
        PreferenceScreen preferenceScreen = getPreferenceScreen();
        removeItemsByBuildType(preferenceScreen);
        removeItemsOnTc1Load(preferenceScreen);
        removeItemsForNonTelAddOn(preferenceScreen);
        removeItemsByOptr(preferenceScreen);
        removeItemsByModemType(preferenceScreen);
        removeItemsByFeatureSupport(preferenceScreen);
        removeItemsForOtherCondition(preferenceScreen);
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (EngineerMode.sWifiOnly) {
            this.mFragmentRest = FRAGMENT_RES_WIFIONLY;
        } else if (!UserManager.supportsMultipleUsers() || UserManager.get(getActivity()).getUserHandle() == 0) {
            this.mFragmentRest = FRAGMENT_RES;
        } else {
            this.mFragmentRest = FRAGMENT_RES_WIFIONLY;
        }
    }

    @Override // android.preference.PreferenceFragment
    public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
        if (FeatureSupport.isSupportedEmSrv()) {
            return super.onPreferenceTreeClick(preferenceScreen, preference);
        }
        String key = preference.getKey();
        for (String str : KEY_REMOVE_ARRAY) {
            if (key.equals(str)) {
                Toast.makeText(getActivity(), R.string.notice_wo_emsvr, 1).show();
                return true;
            }
        }
        return super.onPreferenceTreeClick(preferenceScreen, preference);
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onStart() {
        super.onStart();
    }

    public void setResource(int i) {
        this.mXmlResId = i;
    }

    @Override // android.app.Fragment
    public void setUserVisibleHint(boolean z) {
        super.setUserVisibleHint(z);
        if (z) {
            if (!this.mIsInit) {
                addPreferencesFromResource(this.mFragmentRest[this.mXmlResId]);
                removeUnsupportedItems();
                this.mIsInit = true;
            }
            PreferenceScreen preferenceScreen = getPreferenceScreen();
            for (int preferenceCount = preferenceScreen.getPreferenceCount() - 1; preferenceCount >= 0; preferenceCount--) {
                Preference preference = preferenceScreen.getPreference(preferenceCount);
                if (preference != null) {
                    Intent intent = preference.getIntent();
                    if (!isActivityAvailable(intent)) {
                        preferenceScreen.removePreference(preference);
                        Elog.i(TAG, "intent : " + intent);
                    }
                }
            }
        }
    }
}
