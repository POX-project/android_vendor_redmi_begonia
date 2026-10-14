.class public Lcom/mediatek/engineermode/PrefsFragment;
.super Landroid/preference/PreferenceFragment;
.source "PrefsFragment.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;
    }
.end annotation


# static fields
.field private static final FRAGMENT_RES:[I

.field private static final FRAGMENT_RES_WIFIONLY:[I

.field private static final INNER_LOAD_INDICATOR_FILE:Ljava/lang/String; = "/vendor/etc/system_update/address.xml"

.field private static final KEY_REMOVE_ARRAY:[Ljava/lang/String;

.field private static final PROPERTY_MCF_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_mcf_support"

.field public static final PR_MODEM_MONITOR_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_modem_monitor_support"

.field public static final PR_OPERATOR_OPTR:Ljava/lang/String; = "persist.vendor.operator.optr"

.field public static final PR_OPERATOR_SEG:Ljava/lang/String; = "persist.vendor.operator.seg"

.field public static final PR_SIMME_LOCK_MODE:Ljava/lang/String; = "ro.vendor.sim_me_lock_mode"

.field public static final PR_SIM_RIL_TESTSIM:Ljava/lang/String; = "vendor.gsm.sim.ril.testsim"

.field public static final PR_SIM_RIL_TESTSIM2:Ljava/lang/String; = "vendor.gsm.sim.ril.testsim.2"

.field public static final PR_SIM_RIL_TESTSIM3:Ljava/lang/String; = "vendor.gsm.sim.ril.testsim.3"

.field public static final PR_SIM_RIL_TESTSIM4:Ljava/lang/String; = "vendor.gsm.sim.ril.testsim.4"

.field private static final TAG:Ljava/lang/String; = "PrefsFragment"


# instance fields
.field private mFragmentRest:[I

.field private mIsInit:Z

.field private mXmlResId:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 83
    const-string v0, "display"

    const-string v1, "battery_log"

    const-string v2, "memory"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/PrefsFragment;->KEY_REMOVE_ARRAY:[Ljava/lang/String;

    .line 84
    const/4 v0, 0x6

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/PrefsFragment;->FRAGMENT_RES:[I

    .line 87
    const/4 v0, 0x5

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    sput-object v0, Lcom/mediatek/engineermode/PrefsFragment;->FRAGMENT_RES_WIFIONLY:[I

    return-void

    nop

    :array_0
    .array-data 4
        0x7f0d000a
        0x7f0d0000
        0x7f0d0002
        0x7f0d0005
        0x7f0d0006
        0x7f0d0008
    .end array-data

    :array_1
    .array-data 4
        0x7f0d0000
        0x7f0d0002
        0x7f0d0005
        0x7f0d0006
        0x7f0d0008
    .end array-data
.end method

.method public constructor <init>()V
    .locals 1

    .line 69
    invoke-direct {p0}, Landroid/preference/PreferenceFragment;-><init>()V

    .line 92
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mIsInit:Z

    return-void
.end method

.method private isActivityAvailable(Landroid/content/Intent;)Z
    .locals 2
    .param p1, "intent"    # Landroid/content/Intent;

    .line 575
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->resolveActivity(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public static isMcfSupport()Z
    .locals 3

    .line 96
    const-string v0, "ro.vendor.mtk_mcf_support"

    const/4 v1, 0x0

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v1, v2

    :cond_0
    return v1
.end method

.method private isTestSim()Z
    .locals 2

    .line 567
    const-string v0, "vendor.gsm.sim.ril.testsim"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 568
    const-string v0, "vendor.gsm.sim.ril.testsim.2"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 569
    const-string v0, "vendor.gsm.sim.ril.testsim.3"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 570
    const-string v0, "vendor.gsm.sim.ril.testsim.4"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    .line 571
    .local v0, "isTestSim":Z
    :goto_1
    return v0
.end method

.method private isVoiceCapable()Z
    .locals 4

    .line 559
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v0

    .line 560
    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 561
    .local v0, "telephony":Landroid/telephony/TelephonyManager;
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->isVoiceCapable()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 562
    .local v1, "bVoiceCapable":Z
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sIsVoiceCapable : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "PrefsFragment"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 563
    return v1
.end method

.method private removeItemsByBuildType(Landroid/preference/PreferenceScreen;)V
    .locals 3
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 165
    invoke-direct {p0}, Lcom/mediatek/engineermode/PrefsFragment;->isTestSim()Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "PrefsFragment"

    if-nez v0, :cond_0

    .line 166
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v0

    if-nez v0, :cond_0

    .line 167
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserDebugLoad()Z

    move-result v0

    if-nez v0, :cond_0

    .line 168
    invoke-static {v1}, Lcom/mediatek/engineermode/ChipSupport;->isFeatureSupported(I)Z

    move-result v0

    if-nez v0, :cond_0

    .line 169
    const-string v0, "auto_answer"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 170
    const-string v0, "Hide the auto_answer item"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    :cond_0
    invoke-static {v1}, Lcom/mediatek/engineermode/ChipSupport;->isFeatureSupported(I)Z

    move-result v0

    if-nez v0, :cond_2

    .line 174
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isEngLoad()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserDebugLoad()Z

    move-result v0

    if-nez v0, :cond_2

    .line 175
    const-string v0, "it is customer user load!"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    const-string v0, "ro.debuggable"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 177
    const-string v0, "only remove atci on not root version"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    const-string v0, "atci"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 180
    :cond_1
    const-string v0, "voice_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 181
    const-string v0, "md_log_filter"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 183
    const-string v0, "non_sleep_mode"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 184
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsByCustomization(Landroid/preference/PreferenceScreen;)V

    .line 187
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserDebugLoad()Z

    move-result v0

    const-string v1, "battery_log"

    if-eqz v0, :cond_3

    .line 188
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 190
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserLoad()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 192
    const-string v0, "amr_wb"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 193
    const-string v0, "lte_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 194
    const-string v0, "cmas"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 195
    const-string v0, "diagnostic"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 196
    const-string v0, "dsda_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 197
    const-string v0, "fast_dormancy"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 198
    const-string v0, "gprs"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 199
    const-string v0, "hspa_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 200
    const-string v0, "iatype"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 201
    const-string v0, "md_em_filter"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 202
    const-string v0, "sbp"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 203
    const-string v0, "spc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 204
    const-string v0, "sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 205
    const-string v0, "simme_lock1"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 206
    const-string v0, "simme_lock2"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 207
    const-string v0, "u3_phy"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 208
    const-string v0, "gwsd_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 209
    const-string v0, "vodata"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 210
    const-string v0, "noise_profiling_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 211
    const-string v0, "nrconfig"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 212
    const-string v0, "xpxtaging"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 213
    const-string v0, "multi_sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 214
    const-string v0, "nrmapconfig"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 217
    const-string v0, "bt_test_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 218
    const-string v0, "cds_information"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 219
    const-string v0, "fm_receiver"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 220
    const-string v0, "fm_transmitter"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 221
    const-string v0, "wfd_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 222
    const-string v0, "wifi_em_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 225
    const-string v0, "aal"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 226
    const-string v0, "memory"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 227
    const-string v0, "power"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 228
    const-string v0, "usbmode_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 229
    const-string v0, "usb"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 230
    const-string v0, "usb_speed"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 233
    const-string v0, "clk_quality_at"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 234
    const-string v0, "cw_test"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 235
    const-string v0, "fused_location_provider"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 236
    const-string v0, "desense_at"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 237
    const-string v0, "dcb_cal"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 238
    const-string v0, "mnl_config_editor"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 241
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 242
    const-string v0, "modem_reset_delay"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 243
    const-string v0, "modem_warning"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 244
    const-string v0, "wcn_core_dump"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 247
    const-string v0, "carrier_express"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 248
    const-string v0, "mdml_sample"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 249
    const-string v0, "swla"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 250
    const-string v0, "system_update"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 251
    const-string v0, "usbacm"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 252
    const-string v0, "usb_checker_enabler"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 254
    :cond_4
    return-void
.end method

.method private removeItemsByCustomization(Landroid/preference/PreferenceScreen;)V
    .locals 4
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 155
    new-instance v0, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;-><init>(Lcom/mediatek/engineermode/PrefsFragment;)V

    .line 156
    .local v0, "xmlParser":Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->parse(Landroid/content/Context;)V

    .line 157
    invoke-virtual {v0}, Lcom/mediatek/engineermode/PrefsFragment$UiCusXmlParser;->getItemsToRemove()Ljava/util/List;

    move-result-object v1

    .line 158
    .local v1, "itemsToRemove":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 159
    .local v3, "key":Ljava/lang/String;
    invoke-direct {p0, p1, v3}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 160
    .end local v3    # "key":Ljava/lang/String;
    goto :goto_0

    .line 161
    :cond_0
    return-void
.end method

.method private removeItemsByFeatureSupport(Landroid/preference/PreferenceScreen;)V
    .locals 4
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 430
    invoke-static {}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->isSupport()Z

    move-result v0

    if-nez v0, :cond_0

    .line 431
    const-string v0, "telephony_log_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 433
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/dm/DiagnosticMonitoringSettingActivity;->isSupport()Z

    move-result v0

    if-nez v0, :cond_1

    .line 434
    const-string v0, "diagnostic_monitoring_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 437
    :cond_1
    const-string v0, "vendor.debug.gps.support.l5"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 438
    const-string v0, "dcb_cal"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 442
    :cond_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/PrefsFragment;->isVoiceCapable()Z

    move-result v0

    if-eqz v0, :cond_3

    sget-boolean v0, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    if-eqz v0, :cond_4

    .line 443
    :cond_3
    const-string v0, "auto_dialer"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 446
    :cond_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isGpsSupport(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 447
    const-string v0, "ygps"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 448
    const-string v0, "cw_test"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 451
    :cond_5
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isWifiSupport(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 452
    const-string v0, "wifi"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 455
    :cond_6
    const-string v0, "vendor.ril.apc.support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 456
    const-string v0, "apc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 458
    :cond_7
    const-string v0, "ro.vendor.mtk_fd_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 459
    const-string v0, "fast_dormancy"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 461
    :cond_8
    const-string v0, "ro.vendor.mtk_modem_monitor_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 462
    const-string v0, "mdml_sample"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 463
    const-string v0, "mdm_em_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 464
    const-string v0, "mdm_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 467
    :cond_9
    const-string v0, "ro.vendor.mtk_devreg_app"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_a

    .line 468
    const-string v0, "device_register"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 471
    :cond_a
    const-string v0, "ro.vendor.mtk_wfd_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 472
    const-string v0, "wfd_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 474
    :cond_b
    const-string v0, "persist.vendor.ims_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 475
    const-string v0, "ims"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 478
    :cond_c
    const-string v0, "ro.vendor.sim_me_lock_mode"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_d

    .line 479
    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "2"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_d

    .line 480
    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "3"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_d

    .line 482
    const-string v0, "simme_lock1"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 483
    const-string v0, "simme_lock2"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 486
    :cond_d
    const-string v0, "ro.vendor.mtk_aal_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 487
    const-string v0, "aal"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 489
    :cond_e
    const-string v0, "persist.vendor.vilte_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_f

    .line 490
    const-string v0, "vilte"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 493
    :cond_f
    const-string v0, "ro.vendor.mtk_md_world_mode_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_10

    .line 494
    const-string v0, "rat_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 496
    :cond_10
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isWorldPhoneSupport()Z

    move-result v0

    const-string v1, "modem_switch"

    const-string v2, "world_mode"

    if-nez v0, :cond_12

    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isNrSupported()Z

    move-result v0

    if-eqz v0, :cond_11

    goto :goto_0

    .line 503
    :cond_11
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 504
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    goto :goto_1

    .line 497
    :cond_12
    :goto_0
    invoke-static {}, Lcom/mediatek/engineermode/WorldModeUtil;->isWorldModeSupport()Z

    move-result v0

    if-eqz v0, :cond_13

    .line 498
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    goto :goto_1

    .line 500
    :cond_13
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 506
    :goto_1
    invoke-static {}, Lcom/mediatek/engineermode/PrefsFragment;->isMcfSupport()Z

    move-result v0

    if-nez v0, :cond_14

    .line 507
    const-string v0, "mcf_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 510
    :cond_14
    const-string v0, "ro.vendor.mtk_gwsd_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_15

    .line 511
    const-string v0, "gwsd_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 514
    :cond_15
    const-string v0, "ro.vendor.vodata_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_16

    .line 515
    const-string v0, "vodata"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 517
    :cond_16
    return-void
.end method

.method private removeItemsByModemType(Landroid/preference/PreferenceScreen;)V
    .locals 5
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 384
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    const-string v1, "cdma_network_info"

    if-nez v0, :cond_0

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 385
    :cond_0
    const-string v0, "mdm_em_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 386
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 388
    const-string v0, "ltecaconfig"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 391
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    const-string v2, "network_info"

    const-string v3, "cdma_network_select"

    const-string v4, "c2k_ir_settings"

    if-eqz v0, :cond_2

    .line 392
    const-string v0, "c2k_ap_ir"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 393
    invoke-direct {p0, p1, v4}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 394
    invoke-direct {p0, p1, v3}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 395
    const-string v0, "u3_phy"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 396
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 397
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 398
    const-string v0, "test_sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 399
    const-string v0, "iatype"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 402
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is91Modem()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is92Modem()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 403
    :cond_3
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 404
    const-string v0, "md_low_power_monitor"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 408
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is91Modem()Z

    move-result v0

    if-nez v0, :cond_5

    .line 409
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is3GOnlyModem()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 410
    :cond_5
    const-string v0, "anttunerdebug"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 413
    :cond_6
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is95Modem()Z

    move-result v0

    if-nez v0, :cond_7

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is97Modem()Z

    move-result v0

    if-nez v0, :cond_7

    .line 414
    const-string v0, "lte_rx_mimo_configure"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 417
    :cond_7
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v0

    if-nez v0, :cond_8

    .line 418
    const-string v0, "lte_network_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 421
    :cond_8
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    if-nez v0, :cond_9

    .line 422
    invoke-direct {p0, p1, v4}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 423
    const-string v0, "bypass"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 424
    invoke-direct {p0, p1, v3}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 426
    :cond_9
    return-void
.end method

.method private removeItemsByOptr(Landroid/preference/PreferenceScreen;)V
    .locals 2
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 361
    const-string v0, "persist.vendor.operator.optr"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 363
    .local v0, "mOptr":Ljava/lang/String;
    const-string v1, "OP12"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 364
    const-string v1, "spc"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 367
    :cond_0
    const-string v1, "OP01"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 368
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v1

    if-nez v1, :cond_2

    .line 369
    :cond_1
    const-string v1, "c2k_ap_ir"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 372
    :cond_2
    const-string v1, "OP07"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 373
    const-string v1, "sim_info"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 374
    const-string v1, "diagnostic"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 377
    :cond_3
    const-string v1, "OP20"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 378
    const-string v1, "rtn"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 380
    :cond_4
    return-void
.end method

.method private removeItemsForNonTelAddOn(Landroid/preference/PreferenceScreen;)V
    .locals 1
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 325
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isMtkTelephonyAddOnPolicyEnable()Z

    move-result v0

    if-nez v0, :cond_0

    .line 326
    const-string v0, "aal"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 327
    const-string v0, "camerasolo"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 328
    const-string v0, "voice_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 330
    const-string v0, "apc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 331
    const-string v0, "bt_test_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 332
    const-string v0, "c2k_ap_ir"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 333
    const-string v0, "c2k_ir_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 334
    const-string v0, "cdma_network_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 335
    const-string v0, "cfu"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 336
    const-string v0, "cmas"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 337
    const-string v0, "diagnostic"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 338
    const-string v0, "dsda_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 339
    const-string v0, "emergency_num_key"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 340
    const-string v0, "gprs"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 341
    const-string v0, "gwsd_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 342
    const-string v0, "vodata"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 343
    const-string v0, "iatype"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 344
    const-string v0, "iot_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 345
    const-string v0, "misc_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 346
    const-string v0, "modem_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 347
    const-string v0, "network_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 348
    const-string v0, "rtn"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 349
    const-string v0, "sim_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 350
    const-string v0, "sim_recoverytest_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 351
    const-string v0, "simme_lock1"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 352
    const-string v0, "simme_lock2"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 353
    const-string v0, "smart_rat_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 354
    const-string v0, "test_sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 355
    const-string v0, "wfd_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 356
    const-string v0, "nrmapconfig"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 358
    :cond_0
    return-void
.end method

.method private removeItemsForOtherCondition(Landroid/preference/PreferenceScreen;)V
    .locals 4
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 520
    invoke-static {}, Lcom/mediatek/engineermode/rsc/RuntimeSwitchConfig;->supportRsc()Z

    move-result v0

    if-nez v0, :cond_0

    .line 521
    const-string v0, "rsc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 524
    :cond_0
    invoke-static {}, Landroid/telephony/TelephonyManager;->getDefault()Landroid/telephony/TelephonyManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getSimCount()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    .line 525
    const-string v0, "simme_lock1"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    goto :goto_0

    .line 527
    :cond_1
    const-string v0, "simme_lock2"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 529
    :goto_0
    new-instance v0, Ljava/io/File;

    const-string v1, "/vendor/etc/system_update/address.xml"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 530
    .local v0, "innerLoadIndicator":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_2

    .line 531
    const-string v1, "system_update"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 533
    :cond_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const-string v2, "com.mediatek.connectivity"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/FeatureSupport;->isPackageExisted(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 534
    const-string v1, "cds_information"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 537
    :cond_3
    const-string v1, "cmas"

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/PrefsFragment;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v2

    .line 538
    .local v2, "pref":Landroid/preference/Preference;
    if-eqz v2, :cond_4

    invoke-virtual {v2}, Landroid/preference/Preference;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/PrefsFragment;->isActivityAvailable(Landroid/content/Intent;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 539
    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 541
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/cxp/CarrierExpressUtil;->isCarrierExpressSupported()Z

    move-result v1

    if-nez v1, :cond_5

    .line 542
    const-string v1, "carrier_express"

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 544
    :cond_5
    return-void
.end method

.method private removeItemsOnTc1Load(Landroid/preference/PreferenceScreen;)V
    .locals 2
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;

    .line 257
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/ChipSupport;->isFeatureSupported(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 258
    const-string v0, "PrefsFragment"

    const-string v1, "it is tc1 branch"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 259
    const-string v0, "force_tx"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 262
    const-string v0, "apc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 263
    const-string v0, "lte_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 264
    const-string v0, "auto_answer"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 265
    const-string v0, "c2k_ap_ir"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 266
    const-string v0, "cfu"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 267
    const-string v0, "cmas"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 268
    const-string v0, "diagnostic"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 269
    const-string v0, "dsda_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 270
    const-string v0, "ehrpd_bg_data"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 271
    const-string v0, "emergency_num_key"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 272
    const-string v0, "gwsd_setting"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 273
    const-string v0, "vodata"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 274
    const-string v0, "iatype"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 275
    const-string v0, "ims"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 276
    const-string v0, "iot_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 277
    const-string v0, "ltecaconfig"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 278
    const-string v0, "lte_hpue_configue"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 280
    const-string v0, "mcf_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 281
    const-string v0, "md_em_filter"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 282
    const-string v0, "md_low_power_monitor"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 283
    const-string v0, "misc_config"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 284
    const-string v0, "mobile_data_prefer"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 285
    const-string v0, "network_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 286
    const-string v0, "noise_profiling_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 287
    const-string v0, "ota_airplane_mode"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 288
    const-string v0, "rf_desense_test"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 289
    const-string v0, "rtn"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 290
    const-string v0, "spc"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 291
    const-string v0, "sim_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 292
    const-string v0, "sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 293
    const-string v0, "simme_lock1"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 294
    const-string v0, "simme_lock2"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 295
    const-string v0, "sim_recoverytest_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 296
    const-string v0, "test_sim_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 297
    const-string v0, "u3_phy"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 298
    const-string v0, "usb_tethering"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 299
    const-string v0, "vilte"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 300
    const-string v0, "wifi_calling"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 301
    const-string v0, "modem_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 303
    const-string v0, "bt_test_tool"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 304
    const-string v0, "connsys_patch_info"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 305
    const-string v0, "nfc_st"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 306
    const-string v0, "wfd_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 308
    const-string v0, "modem_reset_delay"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 309
    const-string v0, "modem_warning"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 311
    const-string v0, "wcn_core_dump"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 313
    const-string v0, "carrier_express"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 314
    const-string v0, "moms"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 315
    const-string v0, "voice_settings"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 316
    const-string v0, "smart_rat_switch"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    goto :goto_0

    .line 319
    :cond_0
    const-string v0, "security_status"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 320
    const-string v0, "antenna_diversity"

    invoke-direct {p0, p1, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V

    .line 322
    :goto_0
    return-void
.end method

.method private removePreference(Landroid/preference/PreferenceScreen;Ljava/lang/String;)V
    .locals 1
    .param p1, "prefScreen"    # Landroid/preference/PreferenceScreen;
    .param p2, "prefId"    # Ljava/lang/String;

    .line 143
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/PrefsFragment;->findPreference(Ljava/lang/CharSequence;)Landroid/preference/Preference;

    move-result-object v0

    .line 144
    .local v0, "pref":Landroid/preference/Preference;
    if-eqz v0, :cond_0

    .line 145
    invoke-virtual {p1, v0}, Landroid/preference/PreferenceScreen;->removePreference(Landroid/preference/Preference;)Z

    .line 147
    :cond_0
    return-void
.end method

.method private removeUnsupportedItems()V
    .locals 1

    .line 547
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    .line 548
    .local v0, "screen":Landroid/preference/PreferenceScreen;
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsByBuildType(Landroid/preference/PreferenceScreen;)V

    .line 549
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsOnTc1Load(Landroid/preference/PreferenceScreen;)V

    .line 550
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsForNonTelAddOn(Landroid/preference/PreferenceScreen;)V

    .line 551
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsByOptr(Landroid/preference/PreferenceScreen;)V

    .line 552
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsByModemType(Landroid/preference/PreferenceScreen;)V

    .line 553
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsByFeatureSupport(Landroid/preference/PreferenceScreen;)V

    .line 554
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->removeItemsForOtherCondition(Landroid/preference/PreferenceScreen;)V

    .line 555
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 110
    invoke-super {p0, p1}, Landroid/preference/PreferenceFragment;->onCreate(Landroid/os/Bundle;)V

    .line 112
    sget-boolean v0, Lcom/mediatek/engineermode/EngineerMode;->sWifiOnly:Z

    if-eqz v0, :cond_0

    .line 113
    sget-object v0, Lcom/mediatek/engineermode/PrefsFragment;->FRAGMENT_RES_WIFIONLY:[I

    iput-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mFragmentRest:[I

    goto :goto_0

    .line 114
    :cond_0
    invoke-static {}, Landroid/os/UserManager;->supportsMultipleUsers()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 115
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Landroid/os/UserManager;->get(Landroid/content/Context;)Landroid/os/UserManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/UserManager;->getUserHandle()I

    move-result v0

    if-eqz v0, :cond_1

    .line 116
    sget-object v0, Lcom/mediatek/engineermode/PrefsFragment;->FRAGMENT_RES_WIFIONLY:[I

    iput-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mFragmentRest:[I

    goto :goto_0

    .line 118
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/PrefsFragment;->FRAGMENT_RES:[I

    iput-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mFragmentRest:[I

    .line 120
    :goto_0
    return-void
.end method

.method public onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z
    .locals 6
    .param p1, "screen"    # Landroid/preference/PreferenceScreen;
    .param p2, "pref"    # Landroid/preference/Preference;

    .line 124
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isSupportedEmSrv()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 125
    invoke-super {p0, p1, p2}, Landroid/preference/PreferenceFragment;->onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z

    move-result v0

    return v0

    .line 127
    :cond_0
    invoke-virtual {p2}, Landroid/preference/Preference;->getKey()Ljava/lang/String;

    move-result-object v0

    .line 128
    .local v0, "id":Ljava/lang/String;
    sget-object v1, Lcom/mediatek/engineermode/PrefsFragment;->KEY_REMOVE_ARRAY:[Ljava/lang/String;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v1, v3

    .line 129
    .local v4, "c":Ljava/lang/String;
    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 130
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const v2, 0x7f0a048d

    const/4 v3, 0x1

    invoke-static {v1, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 131
    return v3

    .line 128
    .end local v4    # "c":Ljava/lang/String;
    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 134
    :cond_2
    invoke-super {p0, p1, p2}, Landroid/preference/PreferenceFragment;->onPreferenceTreeClick(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z

    move-result v1

    return v1
.end method

.method public onStart()V
    .locals 0

    .line 139
    invoke-super {p0}, Landroid/preference/PreferenceFragment;->onStart()V

    .line 140
    return-void
.end method

.method public setResource(I)V
    .locals 0
    .param p1, "resIndex"    # I

    .line 105
    iput p1, p0, Lcom/mediatek/engineermode/PrefsFragment;->mXmlResId:I

    .line 106
    return-void
.end method

.method public setUserVisibleHint(Z)V
    .locals 7
    .param p1, "isVisibleToUser"    # Z

    .line 581
    invoke-super {p0, p1}, Landroid/preference/PreferenceFragment;->setUserVisibleHint(Z)V

    .line 583
    if-eqz p1, :cond_2

    .line 584
    iget-boolean v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mIsInit:Z

    if-nez v0, :cond_0

    .line 586
    iget-object v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mFragmentRest:[I

    iget v1, p0, Lcom/mediatek/engineermode/PrefsFragment;->mXmlResId:I

    aget v0, v0, v1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/PrefsFragment;->addPreferencesFromResource(I)V

    .line 587
    invoke-direct {p0}, Lcom/mediatek/engineermode/PrefsFragment;->removeUnsupportedItems()V

    .line 588
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/PrefsFragment;->mIsInit:Z

    .line 590
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/PrefsFragment;->getPreferenceScreen()Landroid/preference/PreferenceScreen;

    move-result-object v0

    .line 592
    .local v0, "screen":Landroid/preference/PreferenceScreen;
    invoke-virtual {v0}, Landroid/preference/PreferenceScreen;->getPreferenceCount()I

    move-result v1

    .line 593
    .local v1, "count":I
    add-int/lit8 v2, v1, -0x1

    .local v2, "i":I
    :goto_0
    if-ltz v2, :cond_2

    .line 594
    invoke-virtual {v0, v2}, Landroid/preference/PreferenceScreen;->getPreference(I)Landroid/preference/Preference;

    move-result-object v3

    .line 595
    .local v3, "pre":Landroid/preference/Preference;
    if-eqz v3, :cond_1

    .line 596
    invoke-virtual {v3}, Landroid/preference/Preference;->getIntent()Landroid/content/Intent;

    move-result-object v4

    .line 597
    .local v4, "intent":Landroid/content/Intent;
    invoke-direct {p0, v4}, Lcom/mediatek/engineermode/PrefsFragment;->isActivityAvailable(Landroid/content/Intent;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 598
    invoke-virtual {v0, v3}, Landroid/preference/PreferenceScreen;->removePreference(Landroid/preference/Preference;)Z

    .line 599
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "intent : "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "PrefsFragment"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 593
    .end local v3    # "pre":Landroid/preference/Preference;
    .end local v4    # "intent":Landroid/content/Intent;
    :cond_1
    add-int/lit8 v2, v2, -0x1

    goto :goto_0

    .line 604
    .end local v0    # "screen":Landroid/preference/PreferenceScreen;
    .end local v1    # "count":I
    .end local v2    # "i":I
    :cond_2
    return-void
.end method
