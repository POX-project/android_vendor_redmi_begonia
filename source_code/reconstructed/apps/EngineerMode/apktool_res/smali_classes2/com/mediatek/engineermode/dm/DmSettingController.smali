.class public Lcom/mediatek/engineermode/dm/DmSettingController;
.super Ljava/lang/Object;
.source "DmSettingController.java"


# static fields
.field private static final DM_SETTGIN_PREF_LOG_ENABLED:Ljava/lang/String; = "dm_setting_log_enabled"

.field private static final DM_SETTGIN_PREF_LOG_PKM_ENABLED:Ljava/lang/String; = "dm_setting_log_pkm_enabled"

.field private static final DM_SETTING_PREF_NAME:Ljava/lang/String; = "dm_setting"

.field private static final PROPERTY_M_LOG_TAG_DMC:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_MAPI:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_MDMI:[Ljava/lang/String;

.field private static final PROPERTY_M_LOG_TAG_PKM:[Ljava/lang/String;

.field private static final PROP_DMC_APM_ACTIVE:Ljava/lang/String; = "vendor.dmc.apm.active"

.field private static final PROP_DMC_FO_SYSTEM:Ljava/lang/String; = "ro.vendor.system.mtk_dmc_support"

.field private static final PROP_DMC_FO_VENDOR:Ljava/lang/String; = "ro.vendor.mtk_dmc_support"

.field private static final PROP_LOG_MUCH:Ljava/lang/String; = "persist.vendor.logmuch"

.field private static final PROP_MAPI_FO_SYSTEM:Ljava/lang/String; = "ro.vendor.system.mtk_mapi_support"

.field private static final PROP_MAPI_FO_VENDOR:Ljava/lang/String; = "ro.vendor.mtk_mapi_support"

.field private static final PROP_MDMI_FO_SYSTEM:Ljava/lang/String; = "ro.vendor.system.mtk_mdmi_support"

.field private static final PROP_MDMI_FO_VENDOR:Ljava/lang/String; = "ro.vendor.mtk_mdmi_support"

.field static final TAG:Ljava/lang/String; = "DmSettingController"

.field private static final TIMEOUT_PERIOD:I = 0x1388

.field private static final VALUE_DISABLE:Ljava/lang/String; = "0"

.field private static final VALUE_ENABLE:Ljava/lang/String; = "1"

.field private static final VALUE_FALSE:Ljava/lang/String; = "false"

.field private static final VALUE_TRUE:Ljava/lang/String; = "true"

.field private static final WAIT_TIME:I = 0x12c


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 15

    .line 42
    const-string v0, "persist.log.tag.DMC-Core"

    const-string v1, "persist.log.tag.DMC-TranslatorLoader"

    const-string v2, "persist.log.tag.DMC-TranslatorUtils"

    const-string v3, "persist.log.tag.DMC-ReqQManager"

    const-string v4, "persist.log.tag.DMC-DmcService"

    const-string v5, "persist.log.tag.DMC-ApmService"

    const-string v6, "persist.log.tag.DMC-SessionManager"

    const-string v7, "persist.log.tag.DMC-EventsSubscriber"

    const-string v8, "persist.log.tag.LCM-Subscriber"

    const-string v9, "persist.log.tag.APM-Subscriber"

    const-string v10, "persist.log.tag.MDM-Subscriber"

    const-string v11, "persist.log.tag.APM-SessionJ"

    const-string v12, "persist.log.tag.APM-SessionN"

    const-string v13, "persist.log.tag.APM-ServiceJ"

    const-string v14, "persist.log.tag.APM-KpiMonitor"

    filled-new-array/range {v0 .. v14}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_DMC:[Ljava/lang/String;

    .line 59
    const-string v1, "persist.log.tag.MAPI-TranslatorManager"

    const-string v2, "persist.log.tag.MAPI-MdiRedirectorCtrl"

    const-string v3, "persist.log.tag.MAPI-MdiRedirector"

    const-string v4, "persist.log.tag.MAPI-NetworkSocketConnection"

    const-string v5, "persist.log.tag.MAPI-SocketConnection"

    const-string v6, "persist.log.tag.MAPI-SocketListener"

    const-string v7, "persist.log.tag.MAPI-CommandProcessor"

    filled-new-array/range {v1 .. v7}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MAPI:[Ljava/lang/String;

    .line 68
    const-string v1, "persist.log.tag.MDMI-TranslatorManager"

    const-string v2, "persist.log.tag.MDMI-MdmiRedirectorCtrl"

    const-string v3, "persist.log.tag.MDMI-MdmiRedirector"

    const-string v4, "persist.log.tag.MDMI-Permission"

    const-string v5, "persist.log.tag.MDMI-CoreSession"

    const-string v6, "persist.log.tag.MDMI-NetworkSocketConnection"

    const-string v7, "persist.log.tag.MDMI-SocketConnection"

    const-string v8, "persist.log.tag.MDMI-SocketListener"

    const-string v9, "persist.log.tag.MDMI-CommandProcessor"

    const-string v10, "persist.log.tag.MDMI-Provider"

    filled-new-array/range {v1 .. v10}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MDMI:[Ljava/lang/String;

    .line 80
    const-string v0, "persist.log.tag.PKM-MDM"

    const-string v1, "persist.log.tag.PKM-Lib"

    const-string v2, "persist.log.tag.PKM-Monitor"

    const-string v3, "persist.log.tag.PKM-SA"

    const-string v4, "persist.log.tag.PKM-Service"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_PKM:[Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 88
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 90
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 91
    iput-object p1, p0, Lcom/mediatek/engineermode/dm/DmSettingController;->mContext:Landroid/content/Context;

    .line 93
    invoke-virtual {p0}, Lcom/mediatek/engineermode/dm/DmSettingController;->isDmLogEnabled()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enableDmLog(Z)Z

    goto :goto_0

    .line 96
    :cond_0
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/dm/DmSettingController;->enableDmLog(Z)Z

    .line 98
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/dm/DmSettingController;->isPkmLogEnabled()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 99
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enablePkmLog(Z)Z

    goto :goto_1

    .line 101
    :cond_1
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/dm/DmSettingController;->enablePkmLog(Z)Z

    .line 103
    :goto_1
    return-void
.end method

.method public static isDmcApmActivated()Z
    .locals 2

    .line 124
    const-string v0, "vendor.dmc.apm.active"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isDmcSystemEnabled()Z
    .locals 2

    .line 106
    const-string v0, "ro.vendor.system.mtk_dmc_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isDmcVendorEnabled()Z
    .locals 2

    .line 109
    const-string v0, "ro.vendor.mtk_dmc_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isMapiSystemEnabled()Z
    .locals 2

    .line 112
    const-string v0, "ro.vendor.system.mtk_mapi_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isMapiVendorEnabled()Z
    .locals 2

    .line 115
    const-string v0, "ro.vendor.mtk_mapi_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isMdmiSystemEnabled()Z
    .locals 2

    .line 118
    const-string v0, "ro.vendor.system.mtk_mdmi_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public static isMdmiVendorEnabled()Z
    .locals 2

    .line 121
    const-string v0, "ro.vendor.mtk_mdmi_support"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method private updateDebugLog(Z)V
    .locals 6
    .param p1, "enable"    # Z

    .line 231
    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 232
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_DMC:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_0
    const-string v4, "D"

    if-ge v3, v2, :cond_0

    aget-object v5, v1, v3

    .line 233
    .local v5, "logTag":Ljava/lang/String;
    invoke-static {v5, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 232
    .end local v5    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 235
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MDMI:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v5, v1, v3

    .line 236
    .restart local v5    # "logTag":Ljava/lang/String;
    invoke-static {v5, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    .end local v5    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 238
    :cond_1
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MAPI:[Ljava/lang/String;

    array-length v2, v1

    :goto_2
    if-ge v0, v2, :cond_5

    aget-object v3, v1, v0

    .line 239
    .local v3, "logTag":Ljava/lang/String;
    invoke-static {v3, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 238
    .end local v3    # "logTag":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 242
    :cond_2
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_DMC:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_3
    const-string v4, "I"

    if-ge v3, v2, :cond_3

    aget-object v5, v1, v3

    .line 243
    .restart local v5    # "logTag":Ljava/lang/String;
    invoke-static {v5, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 242
    .end local v5    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 245
    :cond_3
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MDMI:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_4
    if-ge v3, v2, :cond_4

    aget-object v5, v1, v3

    .line 246
    .restart local v5    # "logTag":Ljava/lang/String;
    invoke-static {v5, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    .end local v5    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_4

    .line 248
    :cond_4
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_MAPI:[Ljava/lang/String;

    array-length v2, v1

    :goto_5
    if-ge v0, v2, :cond_5

    aget-object v3, v1, v0

    .line 249
    .restart local v3    # "logTag":Ljava/lang/String;
    invoke-static {v3, v4}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 248
    .end local v3    # "logTag":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    goto :goto_5

    .line 252
    :cond_5
    return-void
.end method


# virtual methods
.method activeApm(Z)Z
    .locals 10
    .param p1, "active"    # Z

    .line 128
    const-string v0, " failed!"

    const-string v1, "set vendor.dmc.apm.active to "

    const-string v2, "vendor.dmc.apm.active"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "activeApm("

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, ")"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "DmSettingController"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    if-eqz p1, :cond_0

    const-string v3, "1"

    goto :goto_0

    :cond_0
    const-string v3, "0"

    .line 131
    .local v3, "activeApmTar":Ljava/lang/String;
    :goto_0
    const/4 v5, 0x0

    .line 134
    .local v5, "activeApmSuccess":Z
    const/4 v6, 0x0

    :try_start_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v7

    invoke-interface {v7, v2, v3}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->setEmConfigure(Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 136
    const/4 v7, 0x0

    .local v7, "time":I
    :cond_1
    const/16 v8, 0x1388

    if-ge v7, v8, :cond_2

    .line 138
    const-wide/16 v8, 0x12c

    :try_start_1
    invoke-static {v8, v9}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 141
    goto :goto_1

    .line 139
    :catch_0
    move-exception v8

    .line 140
    .local v8, "e":Ljava/lang/InterruptedException;
    :try_start_2
    invoke-virtual {v8}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 142
    .end local v8    # "e":Ljava/lang/InterruptedException;
    :goto_1
    add-int/lit16 v7, v7, 0x12c

    .line 143
    invoke-static {v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v3, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_1

    .line 144
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "set success:"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    const/4 v2, 0x1

    .line 146
    .end local v5    # "activeApmSuccess":Z
    .local v2, "activeApmSuccess":Z
    move v5, v2

    .line 149
    .end local v2    # "activeApmSuccess":Z
    .end local v7    # "time":I
    .restart local v5    # "activeApmSuccess":Z
    :cond_2
    if-nez v5, :cond_3

    .line 150
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 151
    return v6

    .line 157
    :cond_3
    nop

    .line 158
    const/4 v0, 0x1

    return v0

    .line 153
    :catch_1
    move-exception v2

    .line 154
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 155
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    return v6
.end method

.method enableDmLog(Z)Z
    .locals 7
    .param p1, "enable"    # Z

    .line 191
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "enableDmLog("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DmSettingController"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    if-eqz p1, :cond_0

    const-string v0, "false"

    goto :goto_0

    :cond_0
    const-string v0, "true"

    .line 196
    .local v0, "logMuchProTar":Ljava/lang/String;
    :goto_0
    const/4 v2, 0x0

    .line 197
    .local v2, "logMuchSetSuccess":Z
    const-string v3, "persist.vendor.logmuch"

    invoke-static {v3, v0}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    const/4 v4, 0x0

    .local v4, "time":I
    :cond_1
    const/16 v5, 0x1388

    if-ge v4, v5, :cond_2

    .line 201
    const-wide/16 v5, 0x12c

    :try_start_0
    invoke-static {v5, v6}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 204
    goto :goto_1

    .line 202
    :catch_0
    move-exception v5

    .line 203
    .local v5, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v5}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 205
    .end local v5    # "e":Ljava/lang/InterruptedException;
    :goto_1
    add-int/lit16 v4, v4, 0x12c

    .line 206
    invoke-static {v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 207
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "set success:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 208
    const/4 v2, 0x1

    .line 212
    .end local v4    # "time":I
    :cond_2
    const/4 v3, 0x0

    if-nez v2, :cond_3

    .line 213
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "set persist.vendor.logmuch to "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " failed!"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 214
    return v3

    .line 217
    :cond_3
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/dm/DmSettingController;->updateDebugLog(Z)V

    .line 218
    iget-object v1, p0, Lcom/mediatek/engineermode/dm/DmSettingController;->mContext:Landroid/content/Context;

    .line 219
    const-string v4, "dm_setting"

    invoke-virtual {v1, v4, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 220
    .local v1, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v3

    .line 221
    .local v3, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v4, "dm_setting_log_enabled"

    invoke-interface {v3, v4, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 222
    invoke-interface {v3}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 223
    const/4 v4, 0x1

    return v4
.end method

.method enablePkmLog(Z)Z
    .locals 6
    .param p1, "enable"    # Z

    .line 172
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "enablePkmLog("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DmSettingController"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 174
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_PKM:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_0
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 175
    .local v4, "logTag":Ljava/lang/String;
    const-string v5, "D"

    invoke-static {v4, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 174
    .end local v4    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 178
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/dm/DmSettingController;->PROPERTY_M_LOG_TAG_PKM:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 179
    .restart local v4    # "logTag":Ljava/lang/String;
    const-string v5, "I"

    invoke-static {v4, v5}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    .end local v4    # "logTag":Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 182
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/dm/DmSettingController;->mContext:Landroid/content/Context;

    .line 183
    const-string v2, "dm_setting"

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 184
    .local v0, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 185
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const-string v2, "dm_setting_log_pkm_enabled"

    invoke-interface {v1, v2, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 186
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 187
    const/4 v2, 0x1

    return v2
.end method

.method isDmLogEnabled()Z
    .locals 3

    .line 167
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DmSettingController;->mContext:Landroid/content/Context;

    const-string v1, "dm_setting"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 168
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v1, "dm_setting_log_enabled"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    return v1
.end method

.method isPkmLogEnabled()Z
    .locals 3

    .line 162
    iget-object v0, p0, Lcom/mediatek/engineermode/dm/DmSettingController;->mContext:Landroid/content/Context;

    const-string v1, "dm_setting"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 163
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const-string v1, "dm_setting_log_pkm_enabled"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    return v1
.end method
