.class public Lcom/mediatek/engineermode/FeatureSupport;
.super Ljava/lang/Object;
.source "FeatureSupport.java"


# static fields
.field public static final ENG_LOAD:Ljava/lang/String; = "eng"

.field public static final FK_AAL_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_aal_support"

.field public static final FK_APC_SUPPORT:Ljava/lang/String; = "vendor.ril.apc.support"

.field public static final FK_BOARD_PLATFORM:Ljava/lang/String; = "ro.board.platform"

.field public static final FK_BUILD_TYPE:Ljava/lang/String; = "ro.build.type"

.field public static final FK_CT4GREG_APP:Ljava/lang/String; = "ro.vendor.mtk_ct4greg_app"

.field public static final FK_DEVREG_APP:Ljava/lang/String; = "ro.vendor.mtk_devreg_app"

.field public static final FK_FD_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_fd_support"

.field public static final FK_GMO_RAM_OPTIMIZE:Ljava/lang/String; = "ro.vendor.gmo.ram_optimize"

.field public static final FK_GNSS_L5_SUPPORT:Ljava/lang/String; = "vendor.debug.gps.support.l5"

.field public static final FK_GWSD_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_gwsd_support"

.field public static final FK_IMS_SUPPORT:Ljava/lang/String; = "persist.vendor.ims_support"

.field public static final FK_MD_WM_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_md_world_mode_support"

.field public static final FK_MTK_93_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_ril_mode"

.field public static final FK_MTK_DSDA_SUPPORT:Ljava/lang/String; = "persist.vendor.radio.multisim.config"

.field public static final FK_MTK_TELEPHONY_ADD_ON_POLICY:Ljava/lang/String; = "ro.vendor.mtk_telephony_add_on_policy"

.field public static final FK_MTK_TEL_LOG_SUPPORT:Ljava/lang/String; = "persist.vendor.log.tel_log_ctrl"

.field public static final FK_MTK_WFC_SUPPORT:Ljava/lang/String; = "persist.vendor.mtk_wfc_support"

.field public static final FK_SINGLE_BIN_MODEM_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_single_bin_modem_support"

.field public static final FK_VILTE_SUPPORT:Ljava/lang/String; = "persist.vendor.vilte_support"

.field public static final FK_VODATA_SUPPORT:Ljava/lang/String; = "ro.vendor.vodata_support"

.field public static final FK_WCDMA_PREFERRED:Ljava/lang/String; = "ro.vendor.mtk_rat_wcdma_preferred"

.field public static final FK_WFD_SUPPORT:Ljava/lang/String; = "ro.vendor.mtk_wfd_support"

.field private static final MODEM_GEN95_ARRAY:[Ljava/lang/String;

.field private static final MODEM_GEN97_ARRAY:[Ljava/lang/String;

.field public static final PK_CDS_EM:Ljava/lang/String; = "com.mediatek.connectivity"

.field private static final SUPPORTED:Ljava/lang/String; = "1"

.field private static final TAG:Ljava/lang/String; = "FeatureSupport"

.field public static final USERDEBUG_LOAD:Ljava/lang/String; = "userdebug"

.field public static final USER_LOAD:Ljava/lang/String; = "user"

.field public static is_support_3GOnly_md:Z

.field public static is_support_90_md:Z

.field public static is_support_91_md:Z

.field public static is_support_92_md:Z

.field public static is_support_93_md:Z


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 46
    const-string v0, "mt6785"

    const-string v1, "mt6779"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/FeatureSupport;->MODEM_GEN95_ARRAY:[Ljava/lang/String;

    .line 47
    const-string v0, "mt6885"

    const-string v1, "mt6873"

    const-string v2, "mt6853"

    const-string v3, "mt6893"

    const-string v4, "mt6833"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/FeatureSupport;->MODEM_GEN97_ARRAY:[Ljava/lang/String;

    .line 48
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_3GOnly_md:Z

    .line 49
    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_90_md:Z

    .line 50
    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_91_md:Z

    .line 51
    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_92_md:Z

    .line 52
    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_93_md:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "propertyName"    # Ljava/lang/String;

    .line 135
    invoke-static {p0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static is3GOnlyModem()Z
    .locals 2

    .line 55
    invoke-static {}, Lcom/mediatek/engineermode/ChipSupport;->getChip()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 56
    const/4 v0, 0x1

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_3GOnly_md:Z

    goto :goto_0

    .line 58
    :cond_0
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_3GOnly_md:Z

    .line 60
    :goto_0
    sget-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_3GOnly_md:Z

    return v0
.end method

.method public static is90Modem()Z
    .locals 2

    .line 64
    invoke-static {}, Lcom/mediatek/engineermode/ChipSupport;->getChip()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 65
    sput-boolean v1, Lcom/mediatek/engineermode/FeatureSupport;->is_support_90_md:Z

    goto :goto_0

    .line 67
    :cond_0
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_90_md:Z

    .line 69
    :goto_0
    sget-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_90_md:Z

    return v0
.end method

.method public static is91Modem()Z
    .locals 1

    .line 74
    const/4 v0, 0x0

    return v0
.end method

.method public static is92Modem()Z
    .locals 2

    .line 78
    invoke-static {}, Lcom/mediatek/engineermode/ChipSupport;->getChip()I

    move-result v0

    const/4 v1, 0x2

    if-le v0, v1, :cond_0

    .line 79
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-nez v0, :cond_0

    .line 80
    const/4 v0, 0x1

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_92_md:Z

    goto :goto_0

    .line 82
    :cond_0
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_92_md:Z

    .line 84
    :goto_0
    sget-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_92_md:Z

    return v0
.end method

.method public static is93Modem()Z
    .locals 2

    .line 88
    nop

    .line 89
    const-string v0, "ro.vendor.mtk_ril_mode"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 88
    const-string v1, "c6m_1rild"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 89
    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sput-boolean v0, Lcom/mediatek/engineermode/FeatureSupport;->is_support_93_md:Z

    .line 90
    return v0
.end method

.method public static is95Modem()Z
    .locals 8

    .line 94
    const-string v0, "ro.board.platform"

    const-string v1, "0"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 95
    .local v0, "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ro.board.platform = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "FeatureSupport"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    sget-object v1, Lcom/mediatek/engineermode/FeatureSupport;->MODEM_GEN95_ARRAY:[Ljava/lang/String;

    array-length v3, v1

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_1

    aget-object v6, v1, v5

    .line 97
    .local v6, "name":Ljava/lang/String;
    invoke-virtual {v6, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 98
    const-string v1, "it is Gen95 modem"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    const/4 v1, 0x1

    return v1

    .line 96
    .end local v6    # "name":Ljava/lang/String;
    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 102
    :cond_1
    return v4
.end method

.method public static is97Modem()Z
    .locals 8

    .line 106
    const-string v0, "ro.board.platform"

    const-string v1, "0"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 107
    .local v0, "value":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ro.board.platform = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "FeatureSupport"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    sget-object v1, Lcom/mediatek/engineermode/FeatureSupport;->MODEM_GEN97_ARRAY:[Ljava/lang/String;

    array-length v3, v1

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_1

    aget-object v6, v1, v5

    .line 109
    .local v6, "name":Ljava/lang/String;
    invoke-virtual {v6, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 110
    const-string v1, "it is Gen97 modem"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    const/4 v1, 0x1

    return v1

    .line 108
    .end local v6    # "name":Ljava/lang/String;
    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 114
    :cond_1
    return v4
.end method

.method public static isEmBTSupport()Z
    .locals 3

    .line 206
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->btIsEmSupport()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 207
    .local v1, "result":I
    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    return v0

    .line 208
    .end local v1    # "result":I
    :catch_0
    move-exception v1

    .line 209
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 210
    return v0
.end method

.method public static isEngLoad()Z
    .locals 2

    .line 172
    const-string v0, "ro.build.type"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "eng"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isGauge30Support()Z
    .locals 3

    .line 241
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->isGauge30Support()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 242
    .local v1, "result":I
    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    return v0

    .line 243
    .end local v1    # "result":I
    :catch_0
    move-exception v1

    .line 244
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 245
    return v0
.end method

.method static isGpsSupport(Landroid/content/Context;)Z
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 230
    const-string v0, "location"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    .line 232
    .local v0, "locManager":Landroid/location/LocationManager;
    if-eqz v0, :cond_0

    .line 233
    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->getProvider(Ljava/lang/String;)Landroid/location/LocationProvider;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 234
    const/4 v1, 0x1

    return v1

    .line 236
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public static isMtkTelephonyAddOnPolicyEnable()Z
    .locals 2

    .line 250
    const-string v0, "ro.vendor.mtk_telephony_add_on_policy"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isNfcSupport()Z
    .locals 3

    .line 221
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    invoke-interface {v1}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->isNfcSupport()I

    move-result v1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    .line 222
    .local v1, "result":I
    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    return v0

    .line 223
    .end local v1    # "result":I
    :catch_0
    move-exception v1

    .line 224
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 225
    return v0
.end method

.method public static isPackageExisted(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 6
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "packageName"    # Ljava/lang/String;

    .line 161
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 162
    .local v0, "pm":Landroid/content/pm/PackageManager;
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getInstalledApplications(I)Ljava/util/List;

    move-result-object v2

    .line 163
    .local v2, "packages":Ljava/util/List;, "Ljava/util/List<Landroid/content/pm/ApplicationInfo;>;"
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/content/pm/ApplicationInfo;

    .line 164
    .local v4, "ai":Landroid/content/pm/ApplicationInfo;
    iget-object v5, v4, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    invoke-virtual {v5, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 165
    const/4 v1, 0x1

    return v1

    .line 167
    .end local v4    # "ai":Landroid/content/pm/ApplicationInfo;
    :cond_0
    goto :goto_0

    .line 168
    :cond_1
    return v1
.end method

.method public static isSupportWfc()Z
    .locals 2

    .line 185
    const-string v0, "persist.vendor.mtk_wfc_support"

    const-string v1, "0"

    invoke-static {v0, v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isSupported(Ljava/lang/String;)Z
    .locals 2
    .param p0, "featureKey"    # Ljava/lang/String;

    .line 124
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " support:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FeatureSupport"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    invoke-static {p0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isSupportedEmSrv()Z
    .locals 3

    .line 144
    const/4 v0, 0x1

    .line 145
    .local v0, "isSupported":Z
    const-string v1, "ro.vendor.gmo.ram_optimize"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "1"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 146
    const-string v1, "ro.build.type"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "eng"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 147
    const/4 v0, 0x0

    .line 150
    :cond_0
    return v0
.end method

.method public static isUserDebugLoad()Z
    .locals 2

    .line 181
    const-string v0, "ro.build.type"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "userdebug"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isUserLoad()Z
    .locals 3

    .line 176
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "FK_BUILD_TYPE:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "ro.build.type"

    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "FeatureSupport"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    invoke-static {v1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "user"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isWifiSupport(Landroid/content/Context;)Z
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 195
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 196
    .local v0, "pm":Landroid/content/pm/PackageManager;
    const-string v1, "android.hardware.wifi"

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method
