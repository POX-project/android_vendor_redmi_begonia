.class public Lcom/mediatek/engineermode/EmUtils;
.super Ljava/lang/Object;
.source "EmUtils.java"


# static fields
.field private static final BATTERY_DEFAULT_PATH:Ljava/lang/String; = "battery/"

.field private static final BATTERY_FILE:Ljava/lang/String; = "Power_On_Voltage"

.field private static final BATTERY_MT6357_PATH:Ljava/lang/String; = "mt6357-gauge/"

.field private static final BATTERY_MT6359_PATH:Ljava/lang/String; = "mt6359-gauge/"

.field private static final BATTERY_MT6359_P_PATH:Ljava/lang/String; = "mt6359p-gauge/"

.field public static final BATTERY_ROOT_PATH:Ljava/lang/String; = "/sys/bus/platform/devices/"

.field private static final CHANNEL_OUT:Ljava/lang/String; = "mtk_debugService2mnld"

.field private static final DEFAULT_MNL_PROP:Ljava/lang/String; = "00000001"

.field private static final MNL_DISABLE:C = '0'

.field private static final MNL_ENABLE:C = '1'

.field private static final MNL_INDEX_DBG2FILE:I = 0x2

.field private static final MNL_INDEX_GNSS_PORT:I = 0x3

.field private static final MNL_PROP_NAME:Ljava/lang/String; = "persist.vendor.radio.mnl.prop"

.field public static final OEM_RIL_REQUEST_HIDL:I = 0x1

.field public static final OEM_RIL_REQUEST_MODE:I = 0x1

.field public static final OEM_RIL_REQUEST_PHOHE:I = 0x0

.field public static final RADIO_INDICATION_TYPE_NETWORKINFO:I = 0x1

.field public static final RADIO_INDICATION_TYPE_NONE:I = -0x1

.field public static final RADIO_INDICATION_TYPE_PHONE_STAUS_CHANGE:I = 0x3

.field public static final RADIO_INDICATION_TYPE_TXPOWER_INFO:I = 0x2

.field public static final RADIO_INDICATION_TYPE_URCINFO:I = 0x0

.field public static final RADIO_RESPONSE_MODEM_STAUS_CHANGE:I = 0x4

.field public static final TAG:Ljava/lang/String; = "EmUtils"

.field public static mEmHIDLService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

.field public static mPhone:Lcom/android/internal/telephony/Phone;

.field public static mPhoneCdma:Lcom/android/internal/telephony/Phone;

.field public static mPhoneMain:Lcom/android/internal/telephony/Phone;

.field public static mPhoneSlot1:Lcom/android/internal/telephony/Phone;

.field public static mPhoneSlot2:Lcom/android/internal/telephony/Phone;

.field public static mToast:Landroid/widget/Toast;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 43
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 44
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mEmHIDLService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    .line 45
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    .line 46
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot1:Lcom/android/internal/telephony/Phone;

    .line 47
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot2:Lcom/android/internal/telephony/Phone;

    .line 48
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneMain:Lcom/android/internal/telephony/Phone;

    .line 49
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneCdma:Lcom/android/internal/telephony/Phone;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addZeroForNum(Ljava/lang/String;I)Ljava/lang/String;
    .locals 3
    .param p0, "str"    # Ljava/lang/String;
    .param p1, "strLength"    # I

    .line 202
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    .line 203
    .local v0, "strLen":I
    const/4 v1, 0x0

    .line 204
    .local v1, "sb":Ljava/lang/StringBuffer;
    :goto_0
    if-ge v0, p1, :cond_0

    .line 205
    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    move-object v1, v2

    .line 206
    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "0"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 207
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    .line 208
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    goto :goto_0

    .line 210
    :cond_0
    return-object p0
.end method

.method public static enableDbg2File(Z)V
    .locals 1
    .param p0, "enable"    # Z

    .line 414
    const/4 v0, 0x2

    invoke-static {v0, p0}, Lcom/mediatek/engineermode/EmUtils;->setMnldProp(IZ)V

    .line 415
    return-void
.end method

.method public static enableDbg2FileAndGnssPort(ZZ)V
    .locals 9
    .param p0, "onDbg2File"    # Z
    .param p1, "onGnssPort"    # Z

    .line 433
    const-string v0, "persist.vendor.radio.mnl.prop"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 434
    .local v0, "prop":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getMnlProp: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 436
    :cond_0
    const-string v0, "00000001"

    .line 439
    :cond_1
    invoke-virtual {v0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v1

    .line 440
    .local v1, "charArray":[C
    const/4 v3, 0x2

    const/16 v4, 0x31

    const/16 v5, 0x30

    if-eqz p0, :cond_2

    move v6, v4

    goto :goto_0

    :cond_2
    move v6, v5

    :goto_0
    aput-char v6, v1, v3

    .line 441
    const/4 v3, 0x3

    if-eqz p1, :cond_3

    goto :goto_1

    :cond_3
    move v4, v5

    :goto_1
    aput-char v4, v1, v3

    .line 442
    invoke-static {v1}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v3

    .line 443
    .local v3, "newProp":Ljava/lang/String;
    new-instance v4, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    invoke-direct {v4}, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;-><init>()V

    .line 444
    .local v4, "toMnldSender":Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;
    new-instance v5, Lcom/mediatek/socket/base/UdpClient;

    sget-object v6, Landroid/net/LocalSocketAddress$Namespace;->ABSTRACT:Landroid/net/LocalSocketAddress$Namespace;

    const/16 v7, 0x17

    const-string v8, "mtk_debugService2mnld"

    invoke-direct {v5, v8, v6, v7}, Lcom/mediatek/socket/base/UdpClient;-><init>(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;I)V

    .line 446
    .local v5, "udpClient":Lcom/mediatek/socket/base/UdpClient;
    invoke-virtual {v4, v5, v3}, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldRadioMsg(Lcom/mediatek/socket/base/UdpClient;Ljava/lang/String;)Z

    .line 447
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "setMnlProp newProp: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 448
    return-void
.end method

.method public static enableGnssPort(Z)V
    .locals 1
    .param p0, "enable"    # Z

    .line 410
    const/4 v0, 0x3

    invoke-static {v0, p0}, Lcom/mediatek/engineermode/EmUtils;->setMnldProp(IZ)V

    .line 411
    return-void
.end method

.method public static getBatteryPath()Ljava/lang/String;
    .locals 3

    .line 373
    new-instance v0, Ljava/io/File;

    const-string v1, "/sys/bus/platform/devices/mt6357-gauge/Power_On_Voltage"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    const-string v1, "EmUtils"

    if-eqz v0, :cond_0

    .line 374
    const-string v0, "it is MT6357 "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    const-string v0, "mt6357-gauge/"

    return-object v0

    .line 377
    :cond_0
    new-instance v0, Ljava/io/File;

    const-string v2, "/sys/bus/platform/devices/mt6359-gauge/Power_On_Voltage"

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 378
    const-string v0, "it is MT6359 "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 379
    const-string v0, "mt6359-gauge/"

    return-object v0

    .line 382
    :cond_1
    new-instance v0, Ljava/io/File;

    const-string v2, "/sys/bus/platform/devices/mt6359p-gauge/Power_On_Voltage"

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 383
    const-string v0, "it is MT6359 P"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 384
    const-string v0, "mt6359p-gauge/"

    return-object v0

    .line 387
    :cond_2
    const-string v0, "battery/"

    return-object v0
.end method

.method public static getDbg2FileValue(Z)Z
    .locals 5
    .param p0, "defaultValue"    # Z

    .line 419
    const-string v0, "persist.vendor.radio.mnl.prop"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 421
    .local v0, "prop":Ljava/lang/String;
    const/4 v1, 0x2

    .line 422
    .local v1, "index":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getMnlProp: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmUtils"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 423
    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    .line 426
    :cond_0
    invoke-virtual {v0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v2

    .line 427
    .local v2, "c":C
    const/16 v3, 0x31

    invoke-virtual {v0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v4

    if-ne v3, v4, :cond_1

    const/4 v3, 0x1

    goto :goto_0

    :cond_1
    const/4 v3, 0x0

    :goto_0
    return v3

    .line 424
    .end local v2    # "c":C
    :cond_2
    :goto_1
    return p0
.end method

.method public static getEmHidlService()Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
    .locals 3

    .line 161
    const-string v0, "EmUtils"

    const-string v1, "getEmHidlService ..."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    sget-object v1, Lcom/mediatek/engineermode/EmUtils;->mEmHIDLService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    if-nez v1, :cond_0

    .line 163
    const-string v1, "getEmHidlService init..."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    :try_start_0
    const-string v1, "EmHidlServer"

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;->getService(Ljava/lang/String;Z)Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/EmUtils;->mEmHIDLService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/util/NoSuchElementException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 170
    :catch_0
    move-exception v1

    .line 171
    .local v1, "e":Ljava/util/NoSuchElementException;
    invoke-virtual {v1}, Ljava/util/NoSuchElementException;->printStackTrace()V

    .line 172
    const-string v2, "EmHIDLConnection exception2 ..."

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 173
    invoke-virtual {v1}, Ljava/util/NoSuchElementException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 166
    .end local v1    # "e":Ljava/util/NoSuchElementException;
    :catch_1
    move-exception v1

    .line 167
    .local v1, "e":Landroid/os/RemoteException;
    invoke-virtual {v1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 168
    const-string v2, "EmHIDLConnection exception1 ..."

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    invoke-virtual {v1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    .end local v1    # "e":Landroid/os/RemoteException;
    :cond_0
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mEmHIDLService:Lvendor/mediatek/hardware/engineermode/V1_3/IEmd;

    return-object v0
.end method

.method public static getmPhone(I)Lcom/android/internal/telephony/Phone;
    .locals 2
    .param p0, "phoneid"    # I

    .line 67
    const/4 v0, -0x1

    if-eq p0, v0, :cond_5

    if-eqz p0, :cond_3

    const/4 v0, 0x1

    if-eq p0, v0, :cond_1

    const/16 v0, 0xff

    if-eq p0, v0, :cond_0

    goto :goto_0

    .line 85
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaPhone()Lcom/android/internal/telephony/Phone;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneCdma:Lcom/android/internal/telephony/Phone;

    .line 86
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    goto :goto_0

    .line 79
    :cond_1
    sget-object v1, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot2:Lcom/android/internal/telephony/Phone;

    if-nez v1, :cond_2

    .line 80
    invoke-static {v0}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot2:Lcom/android/internal/telephony/Phone;

    .line 82
    :cond_2
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot2:Lcom/android/internal/telephony/Phone;

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    .line 83
    goto :goto_0

    .line 73
    :cond_3
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot1:Lcom/android/internal/telephony/Phone;

    if-nez v0, :cond_4

    .line 74
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot1:Lcom/android/internal/telephony/Phone;

    .line 76
    :cond_4
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneSlot1:Lcom/android/internal/telephony/Phone;

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    .line 77
    goto :goto_0

    .line 69
    :cond_5
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getCapabilitySim()I

    move-result v0

    invoke-static {v0}, Lcom/android/internal/telephony/PhoneFactory;->getPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhoneMain:Lcom/android/internal/telephony/Phone;

    .line 70
    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    .line 71
    nop

    .line 89
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getmPhone,phoneid = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmUtils"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mPhone:Lcom/android/internal/telephony/Phone;

    return-object v0
.end method

.method public static ifAirplaneModeEnabled()Z
    .locals 3

    .line 291
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 292
    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    .line 291
    const-string v1, "airplane_mode_on"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v2, 0x1

    :cond_0
    move v0, v2

    .line 293
    .local v0, "isAirplaneModeOn":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isAirplaneModeOn: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    return v0
.end method

.method public static initPoweroffmdMode(ZZ)V
    .locals 4
    .param p0, "enabled"    # Z
    .param p1, "RFonly"    # Z

    .line 285
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "initPoweroffmdMode: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ",RFonly: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmUtils"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    const-string v0, "0"

    const-string v1, "1"

    if-eqz p1, :cond_0

    move-object v2, v0

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    const-string v3, "vendor.ril.test.poweroffmd"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    .line 287
    if-eqz p0, :cond_1

    move-object v0, v1

    :cond_1
    const-string v1, "vendor.ril.testmode"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/EmUtils;->systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z

    .line 288
    return-void
.end method

.method public static invokeOemRilRequestRawEm(I[BLandroid/os/Message;)V
    .locals 0
    .param p0, "phoneid"    # I
    .param p1, "command"    # [B
    .param p2, "response"    # Landroid/os/Message;

    .line 149
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestRawEmHidl(I[BLandroid/os/Message;)V

    .line 153
    return-void
.end method

.method public static invokeOemRilRequestRawEm([BLandroid/os/Message;)V
    .locals 1
    .param p0, "command"    # [B
    .param p1, "response"    # Landroid/os/Message;

    .line 157
    const/4 v0, -0x1

    invoke-static {v0, p0, p1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestRawEm(I[BLandroid/os/Message;)V

    .line 158
    return-void
.end method

.method public static invokeOemRilRequestRawEmHidl(I[BLandroid/os/Message;)V
    .locals 0
    .param p0, "phoneid"    # I
    .param p1, "command"    # [B
    .param p2, "response"    # Landroid/os/Message;

    .line 142
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/EmRadioHidl;->invokeOemRilRequestRawEm(I[BLandroid/os/Message;)V

    .line 143
    return-void
.end method

.method public static invokeOemRilRequestRawEmPhone(I[BLandroid/os/Message;)V
    .locals 3
    .param p0, "phoneid"    # I
    .param p1, "command"    # [B
    .param p2, "response"    # Landroid/os/Message;

    .line 133
    :try_start_0
    invoke-static {p0}, Lcom/mediatek/engineermode/EmUtils;->getmPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/android/internal/telephony/Phone;->invokeOemRilRequestRaw([BLandroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 137
    goto :goto_0

    .line 134
    :catch_0
    move-exception v0

    .line 135
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    const-string v1, "get phone invokeOemRilRequestRaw failed"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V
    .locals 0
    .param p0, "phoneid"    # I
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "response"    # Landroid/os/Message;

    .line 111
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEmHidl(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 115
    return-void
.end method

.method public static invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V
    .locals 1
    .param p0, "isCdma"    # Z
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "response"    # Landroid/os/Message;

    .line 124
    if-eqz p0, :cond_0

    .line 125
    const/16 v0, 0xff

    invoke-static {v0, p1, p2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    goto :goto_0

    .line 127
    :cond_0
    const/4 v0, -0x1

    invoke-static {v0, p1, p2}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 128
    :goto_0
    return-void
.end method

.method public static invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V
    .locals 1
    .param p0, "command"    # [Ljava/lang/String;
    .param p1, "response"    # Landroid/os/Message;

    .line 119
    const/4 v0, -0x1

    invoke-static {v0, p0, p1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 120
    return-void
.end method

.method private static invokeOemRilRequestStringsEmHidl(I[Ljava/lang/String;Landroid/os/Message;)V
    .locals 0
    .param p0, "phoneid"    # I
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "response"    # Landroid/os/Message;

    .line 105
    invoke-static {p0, p1, p2}, Lcom/mediatek/engineermode/EmRadioHidl;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 106
    return-void
.end method

.method private static invokeOemRilRequestStringsEmPhone(I[Ljava/lang/String;Landroid/os/Message;)V
    .locals 3
    .param p0, "phoneid"    # I
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "response"    # Landroid/os/Message;

    .line 96
    :try_start_0
    invoke-static {p0}, Lcom/mediatek/engineermode/EmUtils;->getmPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/android/internal/telephony/Phone;->invokeOemRilRequestStrings([Ljava/lang/String;Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 100
    goto :goto_0

    .line 97
    :catch_0
    move-exception v0

    .line 98
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    const-string v1, "get phone invokeOemRilRequestStrings failed"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static readSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "preferencesName"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "default_value"    # Ljava/lang/String;

    .line 307
    const-string v0, ""

    .line 308
    .local v0, "value":Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 309
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    const/4 v2, 0x0

    invoke-virtual {v1, p0, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    .line 310
    .local v1, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v1, p1, p2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 311
    return-object v0
.end method

.method public static rebootModem()V
    .locals 0

    .line 196
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModemHidl()V

    .line 200
    return-void
.end method

.method public static rebootModemHidl()V
    .locals 2

    .line 190
    invoke-static {}, Lcom/mediatek/engineermode/EmRadioHidl;->rebootModemHidl()V

    .line 191
    const-string v0, "EmUtils"

    const-string v1, "rebootModemHidl"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    return-void
.end method

.method public static rebootModemPhone()V
    .locals 4

    .line 181
    const-string v0, "EmUtils"

    const/4 v1, -0x1

    :try_start_0
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->getmPhone(I)Lcom/android/internal/telephony/Phone;

    move-result-object v1

    const-string v2, "SET_TRM"

    const-string v3, "2"

    filled-new-array {v2, v3}, [Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Lcom/android/internal/telephony/Phone;->invokeOemRilRequestStrings([Ljava/lang/String;Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 185
    goto :goto_0

    .line 182
    :catch_0
    move-exception v1

    .line 183
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    const-string v2, "rebootModem SET_TRM 2 failed"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    const-string v1, "rebootModem SET_TRM 2"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 187
    return-void
.end method

.method public static registerForModemStatusChanged(ILandroid/os/Handler;I)V
    .locals 1
    .param p0, "phoneid"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I

    .line 355
    const/4 v0, 0x4

    sput v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    .line 356
    const/4 v0, 0x1

    invoke-static {p0, p1, p2, v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->setRadioResponseAosp(ILandroid/os/Handler;IZ)V

    .line 357
    return-void
.end method

.method public static registerForNetworkInfo(ILandroid/os/Handler;I)V
    .locals 1
    .param p0, "phoneid"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I

    .line 315
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 316
    invoke-static {p0, p1, p2, v0}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 317
    return-void
.end method

.method public static registerForTxpowerInfo(Landroid/os/Handler;I)V
    .locals 2
    .param p0, "handler"    # Landroid/os/Handler;
    .param p1, "what"    # I

    .line 325
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 326
    const/4 v0, 0x0

    const/4 v1, 0x1

    invoke-static {v0, p0, p1, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 327
    return-void
.end method

.method public static registerForUrcInfo(ILandroid/os/Handler;I)V
    .locals 1
    .param p0, "phoneid"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I

    .line 335
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 336
    const/4 v0, 0x1

    invoke-static {p0, p1, p2, v0}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 337
    return-void
.end method

.method public static registerForradioStateChanged(ILandroid/os/Handler;I)V
    .locals 1
    .param p0, "phoneid"    # I
    .param p1, "handler"    # Landroid/os/Handler;
    .param p2, "what"    # I

    .line 345
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    .line 346
    const/4 v0, 0x1

    invoke-static {p0, p1, p2, v0}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mSetRadioIndicationAosp(ILandroid/os/Handler;IZ)V

    .line 347
    return-void
.end method

.method public static reloadModemType(I)V
    .locals 0
    .param p0, "modemType"    # I

    .line 365
    invoke-static {p0}, Lcom/mediatek/engineermode/EmRadioHidl;->reloadModemType(I)V

    .line 366
    return-void
.end method

.method public static setAirplaneModeEnabled(Z)V
    .locals 2
    .param p0, "enabled"    # Z

    .line 276
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setAirplaneModEnabled = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmUtils"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    invoke-static {}, Lcom/mediatek/engineermode/aospradio/RadioIndication;->resetStateLast()V

    .line 279
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 280
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    .line 279
    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    .line 281
    .local v0, "mgr":Landroid/net/ConnectivityManager;
    invoke-virtual {v0, p0}, Landroid/net/ConnectivityManager;->setAirplaneMode(Z)V

    .line 282
    return-void
.end method

.method private static setMnldProp(IZ)V
    .locals 9
    .param p0, "index"    # I
    .param p1, "enable"    # Z

    .line 392
    const-string v0, "persist.vendor.radio.mnl.prop"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 393
    .local v0, "prop":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getMnlProp: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 394
    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 395
    :cond_0
    const-string v0, "00000001"

    .line 397
    :cond_1
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-le v1, p0, :cond_3

    .line 398
    invoke-virtual {v0}, Ljava/lang/String;->toCharArray()[C

    move-result-object v1

    .line 399
    .local v1, "charArray":[C
    if-eqz p1, :cond_2

    const/16 v3, 0x31

    goto :goto_0

    :cond_2
    const/16 v3, 0x30

    :goto_0
    aput-char v3, v1, p0

    .line 400
    invoke-static {v1}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v3

    .line 401
    .local v3, "newProp":Ljava/lang/String;
    new-instance v4, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    invoke-direct {v4}, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;-><init>()V

    .line 402
    .local v4, "toMnldSender":Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;
    new-instance v5, Lcom/mediatek/socket/base/UdpClient;

    sget-object v6, Landroid/net/LocalSocketAddress$Namespace;->ABSTRACT:Landroid/net/LocalSocketAddress$Namespace;

    const/16 v7, 0x17

    const-string v8, "mtk_debugService2mnld"

    invoke-direct {v5, v8, v6, v7}, Lcom/mediatek/socket/base/UdpClient;-><init>(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;I)V

    .line 404
    .local v5, "udpClient":Lcom/mediatek/socket/base/UdpClient;
    invoke-virtual {v4, v5, v3}, Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldRadioMsg(Lcom/mediatek/socket/base/UdpClient;Ljava/lang/String;)Z

    .line 405
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "setMnlProp newProp: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    .end local v1    # "charArray":[C
    .end local v3    # "newProp":Ljava/lang/String;
    .end local v4    # "toMnldSender":Lcom/mediatek/engineermode/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;
    .end local v5    # "udpClient":Lcom/mediatek/socket/base/UdpClient;
    :cond_3
    return-void
.end method

.method public static showToast(I)V
    .locals 2
    .param p0, "msg_id"    # I

    .line 250
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 251
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 253
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 254
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 255
    return-void
.end method

.method public static showToast(II)V
    .locals 1
    .param p0, "msg_id"    # I
    .param p1, "time"    # I

    .line 242
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 243
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 245
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 246
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 247
    return-void
.end method

.method public static showToast(Ljava/lang/String;)V
    .locals 2
    .param p0, "msg"    # Ljava/lang/String;

    .line 258
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 259
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 261
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 262
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 263
    return-void
.end method

.method public static showToast(Ljava/lang/String;I)V
    .locals 1
    .param p0, "msg"    # Ljava/lang/String;
    .param p1, "time"    # I

    .line 234
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 235
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 237
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 238
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 239
    return-void
.end method

.method public static showToast(Ljava/lang/String;Z)V
    .locals 2
    .param p0, "msg"    # Ljava/lang/String;
    .param p1, "last"    # Z

    .line 266
    if-nez p1, :cond_0

    .line 267
    sget-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    if-eqz v0, :cond_0

    .line 268
    invoke-virtual {v0}, Landroid/widget/Toast;->cancel()V

    .line 271
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmUtils;->mToast:Landroid/widget/Toast;

    .line 272
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 273
    return-void
.end method

.method public static storeModemType(I)V
    .locals 0
    .param p0, "modemType"    # I

    .line 369
    invoke-static {p0}, Lcom/mediatek/engineermode/EmRadioHidl;->storeModemType(I)V

    .line 370
    return-void
.end method

.method public static systemPropertyGet(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "property_name"    # Ljava/lang/String;
    .param p1, "default_value"    # Ljava/lang/String;

    .line 213
    const-string v0, ""

    .line 215
    .local v0, "property_value":Ljava/lang/String;
    :try_start_0
    invoke-static {p0, p1}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    .line 218
    goto :goto_0

    .line 216
    :catch_0
    move-exception v1

    .line 217
    .local v1, "e":Ljava/lang/Exception;
    const-string v2, "EmUtils"

    const-string v3, "EmUtils systemPropertyGet failed"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    return-object v0
.end method

.method public static systemPropertySet(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3
    .param p0, "property_name"    # Ljava/lang/String;
    .param p1, "set_value"    # Ljava/lang/String;

    .line 225
    :try_start_0
    invoke-static {p0, p1}, Landroid/os/SystemProperties;->set(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 226
    const/4 v0, 0x1

    return v0

    .line 227
    :catch_0
    move-exception v0

    .line 228
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "EmUtils systemPropertySet failed :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmUtils"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    const/4 v1, 0x0

    return v1
.end method

.method public static unregisterForModemStatusChanged(I)V
    .locals 2
    .param p0, "phoneid"    # I

    .line 360
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    .line 361
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->setRadioResponseAosp(ILandroid/os/Handler;IZ)V

    .line 362
    return-void
.end method

.method public static unregisterForNetworkInfo(I)V
    .locals 2
    .param p0, "phoneid"    # I

    .line 320
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 321
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 322
    return-void
.end method

.method public static unregisterForTxpowerInfo()V
    .locals 2

    .line 330
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 331
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {v0, v1, v0, v0}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 332
    return-void
.end method

.method public static unregisterForUrcInfo(I)V
    .locals 2
    .param p0, "phoneid"    # I

    .line 340
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/EmRadioHidl;->mRadioIndicationType:I

    .line 341
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1}, Lcom/mediatek/engineermode/EmRadioHidl;->mSetRadioIndicationMtk(ILandroid/os/Handler;IZ)V

    .line 342
    return-void
.end method

.method public static unregisterradioStateChanged(I)V
    .locals 2
    .param p0, "phoneid"    # I

    .line 350
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mRadioIndicationType:I

    .line 351
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {p0, v0, v1, v1}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->mSetRadioIndicationAosp(ILandroid/os/Handler;IZ)V

    .line 352
    return-void
.end method

.method public static writeSharedPreferences(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p0, "preferencesName"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;

    .line 298
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 299
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getContext()Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 300
    .local v0, "preferences":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 301
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v1, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 302
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 303
    return-void
.end method
