.class Lcom/mediatek/engineermode/wifi/Capability6620;
.super Lcom/mediatek/engineermode/wifi/WifiCapability;
.source "WifiCapability.java"


# instance fields
.field private mCap11ac:Z

.field private mCapAntSwap:Z

.field private mWifiChip:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 1
    .param p1, "wifiChip"    # Ljava/lang/String;

    .line 129
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiCapability;-><init>()V

    .line 125
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCap11ac:Z

    .line 127
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCapAntSwap:Z

    .line 130
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mWifiChip:Ljava/lang/String;

    .line 131
    return-void
.end method


# virtual methods
.method protected getCapability()V
    .locals 4

    .line 135
    const-string v0, "6630"

    const-string v1, "6797"

    const-string v2, "6759"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    .line 136
    .local v0, "supportedChips":[Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_1

    .line 137
    aget-object v2, v0, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mWifiChip:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 138
    const/4 v2, 0x1

    iput-boolean v2, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCap11ac:Z

    .line 136
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 141
    .end local v1    # "i":I
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->isAntSwapSupport()Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCapAntSwap:Z

    .line 142
    return-void
.end method

.method protected is11AcSupport()Z
    .locals 1

    .line 151
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCap11ac:Z

    return v0
.end method

.method protected isAntSwapSupport()Z
    .locals 1

    .line 147
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6620;->mCapAntSwap:Z

    return v0
.end method
