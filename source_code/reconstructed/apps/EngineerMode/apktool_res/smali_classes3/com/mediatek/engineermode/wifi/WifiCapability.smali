.class abstract Lcom/mediatek/engineermode/wifi/WifiCapability;
.super Ljava/lang/Object;
.source "WifiCapability.java"


# static fields
.field protected static final TAG:Ljava/lang/String; = "Wifi/Capability"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static getWifiCapability(Ljava/lang/String;Lcom/mediatek/engineermode/wifi/WiFi$WifiType;)Lcom/mediatek/engineermode/wifi/WifiCapability;
    .locals 3
    .param p0, "wifichip"    # Ljava/lang/String;
    .param p1, "wifiType"    # Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 17
    const/4 v0, 0x0

    .line 18
    .local v0, "wifiCapbility":Lcom/mediatek/engineermode/wifi/WifiCapability;
    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiCapability$1;->$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType:[I

    invoke-virtual {p1}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v2

    aget v1, v1, v2

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    const/4 v2, 0x2

    if-eq v1, v2, :cond_1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    .line 29
    const-string v1, "Wifi/Capability"

    const-string v2, "WifiType error"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 26
    :cond_0
    new-instance v1, Lcom/mediatek/engineermode/wifi/Capability6620;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/Capability6620;-><init>(Ljava/lang/String;)V

    move-object v0, v1

    .line 27
    goto :goto_0

    .line 23
    :cond_1
    new-instance v1, Lcom/mediatek/engineermode/wifi/Capability6632;

    invoke-direct {v1}, Lcom/mediatek/engineermode/wifi/Capability6632;-><init>()V

    move-object v0, v1

    .line 24
    goto :goto_0

    .line 20
    :cond_2
    new-instance v1, Lcom/mediatek/engineermode/wifi/CapabilityFormat;

    invoke-direct {v1}, Lcom/mediatek/engineermode/wifi/CapabilityFormat;-><init>()V

    move-object v0, v1

    .line 21
    nop

    .line 32
    :goto_0
    if-eqz v0, :cond_3

    .line 33
    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->getCapability()V

    .line 35
    :cond_3
    return-object v0
.end method


# virtual methods
.method protected abstract getCapability()V
.end method

.method protected is11AcSupport()Z
    .locals 1

    .line 53
    const/4 v0, 0x0

    return v0
.end method

.method protected is11AxSupport()Z
    .locals 1

    .line 43
    const/4 v0, 0x0

    return v0
.end method

.method protected is2by2Support()Z
    .locals 1

    .line 46
    const/4 v0, 0x0

    return v0
.end method

.method protected abstract isAntSwapSupport()Z
.end method

.method protected isDbdcSupport()Z
    .locals 1

    .line 49
    const/4 v0, 0x0

    return v0
.end method

.method protected isHwTxSupport()Z
    .locals 1

    .line 56
    const/4 v0, 0x0

    return v0
.end method
