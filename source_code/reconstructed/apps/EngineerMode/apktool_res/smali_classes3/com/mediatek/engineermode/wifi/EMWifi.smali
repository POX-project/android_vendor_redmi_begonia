.class public Lcom/mediatek/engineermode/wifi/EMWifi;
.super Ljava/lang/Object;
.source "EMWifi.java"


# static fields
.field private static final DEFAULT_WAIT_TIME:J = 0x64L

.field static final DUAL_BAND_MODE:I = 0x2

.field private static final IOCTL_CMD_ID_CTIA_OFF:J

.field private static final IOCTL_CMD_ID_CTIA_ON:J

.field private static final IOCTL_CMD_ID_CTIA_SET_RATE:J

.field static final SINGLE_BAND_MODE:I = 0x1

.field private static final TAG:Ljava/lang/String; = "EMWifi"

.field private static sInTestMode:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 50
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    .line 52
    const-string v0, "FFFF1234"

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hex2Long(Ljava/lang/String;)J

    move-result-wide v0

    sput-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_ON:J

    .line 53
    const-string v0, "FFFF1235"

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hex2Long(Ljava/lang/String;)J

    move-result-wide v0

    sput-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_OFF:J

    .line 54
    const-string v0, "FFFF0123"

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hex2Long(Ljava/lang/String;)J

    move-result-wide v0

    sput-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_SET_RATE:J

    .line 698
    const-string v0, "em_wifi_jni"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 699
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static native doCTIATestGet(J[J)I
.end method

.method public static native doCTIATestSet(JJ)I
.end method

.method public static doCtiaTestOff()Z
    .locals 4

    .line 350
    sget-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_OFF:J

    const-wide/16 v2, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->doCTIATestSet(JJ)I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static doCtiaTestOn()Z
    .locals 4

    .line 341
    sget-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_ON:J

    const-wide/16 v2, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->doCTIATestSet(JJ)I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static doCtiaTestRate(I)Z
    .locals 4
    .param p0, "rate"    # I

    .line 361
    sget-wide v0, Lcom/mediatek/engineermode/wifi/EMWifi;->IOCTL_CMD_ID_CTIA_SET_RATE:J

    int-to-long v2, p0

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->doCTIATestSet(JJ)I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static native eepromReadByteStr(JJ[B)I
.end method

.method public static native eepromWriteByteStr(JJLjava/lang/String;)I
.end method

.method public static native getATParam(J[J)I
.end method

.method public static native getFwManifestVersion()Ljava/lang/String;
.end method

.method public static native getPacketRxStatus([JI)I
.end method

.method public static native getSupportChannelList([J)I
.end method

.method public static native getWifiLogLevel(I)I
.end method

.method private static hex2Long(Ljava/lang/String;)J
    .locals 2
    .param p0, "str"    # Ljava/lang/String;

    .line 365
    const/16 v0, 0x10

    invoke-static {p0, v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v0

    return-wide v0
.end method

.method public static native hqaDbdcContinuousTX(IIIIIIII)I
.end method

.method public static native hqaDbdcSetChannel(IIIIIII)I
.end method

.method public static native hqaDbdcSetTXContent(II)I
.end method

.method public static native hqaDbdcStartRXExt(IIII)I
.end method

.method public static native hqaDbdcStartTX(IIIIIIIIIII)I
.end method

.method public static native hqaDbdcStopRX(I)I
.end method

.method public static native hqaDbdcStopTX(I)I
.end method

.method public static native hqaDbdcTXTone(IIII)I
.end method

.method public static native hqaGetAFactor(I[I[I[I[I[I)I
.end method

.method static native hqaGetChipCapability([I)I
.end method

.method public static native hqaGetRXStatisticsAllExt(I[I[I[I[I)I
.end method

.method public static native hqaGetTxInfo(I[I)I
.end method

.method static native hqaGetTxPower(II)I
.end method

.method static native hqaGetWlanCfgEm([I)Ljava/lang/String;
.end method

.method static native hqaSetAntSwap(I)I
.end method

.method public static native hqaSetBandMode(I)I
.end method

.method static native hqaSetNss(I)I
.end method

.method static native hqaSetPreamble(I)I
.end method

.method public static native hqaSetRUSettings(IIIIIIIIIII)I
.end method

.method static native hqaSetRate(I)I
.end method

.method public static native hqaSetRxPath(II)I
.end method

.method public static native hqaSetTxPath(II)I
.end method

.method public static native hqaSetTxPowerExt(IIIII)I
.end method

.method static native hqaSetWlanCfgEm(ILjava/lang/String;)I
.end method

.method public static native initial()I
.end method

.method public static native isAntSwapSupport()Z
.end method

.method static isInTestMode()Z
    .locals 2

    .line 102
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "in test mode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EMWifi"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    sget-boolean v0, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    return v0
.end method

.method public static native isWifiLogUiEnable(I)Z
.end method

.method public static native readEEPRom16(J[J)I
.end method

.method public static native readMCR32(J[J)I
.end method

.method public static native readTxPowerFromEEPromEx(JJ[JI)I
.end method

.method public static native setATParam(JJ)I
.end method

.method public static native setChannel(J)I
.end method

.method public static native setEEPRomSize(J)I
.end method

.method public static native setEEPromCKSUpdated()I
.end method

.method public static native setNormalMode()I
.end method

.method public static native setPnpPower(J)I
.end method

.method public static native setStandBy()I
.end method

.method public static native setTestMode()I
.end method

.method public static native setWifiLogLevel(II)Z
.end method

.method public static startTestMode(Landroid/net/wifi/WifiManager;)Lcom/mediatek/engineermode/wifi/WifiEmState;
    .locals 6
    .param p0, "wifiMgr"    # Landroid/net/wifi/WifiManager;

    .line 65
    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    const/4 v1, 0x1

    const-string v2, "EMWifi"

    const/4 v3, 0x3

    if-eq v0, v3, :cond_1

    .line 66
    invoke-virtual {p0, v1}, Landroid/net/wifi/WifiManager;->setWifiEnabled(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 68
    :goto_0
    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    if-eq v0, v3, :cond_1

    .line 69
    const-wide/16 v4, 0x64

    invoke-static {v4, v5}, Landroid/os/SystemClock;->sleep(J)V

    goto :goto_0

    .line 72
    :cond_0
    const-string v0, "enable wifi power failed"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_ENABLE_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0

    .line 76
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Wifi state: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 77
    sget-boolean v0, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    if-eqz v0, :cond_2

    .line 78
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0

    .line 80
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->initial()I

    .line 81
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->setTestMode()I

    move-result v0

    if-nez v0, :cond_3

    .line 82
    sput-boolean v1, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    .line 83
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0

    .line 85
    :cond_3
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_SET_TM_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0
.end method

.method public static stopTestMode()V
    .locals 1

    .line 94
    sget-boolean v0, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    if-eqz v0, :cond_0

    .line 95
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->setNormalMode()I

    .line 96
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->unInitial()I

    .line 97
    const/4 v0, 0x0

    sput-boolean v0, Lcom/mediatek/engineermode/wifi/EMWifi;->sInTestMode:Z

    .line 99
    :cond_0
    return-void
.end method

.method public static native unInitial()I
.end method

.method public static native writeEEPRom16(JJ)I
.end method

.method public static native writeMCR32(JJ)I
.end method
