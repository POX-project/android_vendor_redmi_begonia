.class Lcom/mediatek/engineermode/wifi/CapabilityFormat;
.super Lcom/mediatek/engineermode/wifi/WifiCapability;
.source "WifiCapability.java"


# static fields
.field private static final CAPABILITY_LENGTH:I = 0x20

.field private static final INDEX_CAP_ANT_NUM:I = 0x1

.field private static final INDEX_CAP_ANT_SWAP:I = 0x10

.field private static final INDEX_CAP_DBDC:I = 0x2

.field private static final INDEX_CAP_PROTOCOL:I = 0x0

.field private static final MASK_CAP_11AX:I = 0x8

.field private static final MASK_CAP_ANT_SWAP:I = 0x1

.field private static final MASK_CAP_DBDC:I = 0x1

.field private static final MASK_CAP_HW_TX:I = 0x2


# instance fields
.field private mCap11ax:Z

.field private mCap2by2:Z

.field private mCapAntSwap:Z

.field private mCapDbdc:Z

.field private mCapHwTx:Z


# direct methods
.method constructor <init>()V
    .locals 1

    .line 64
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiCapability;-><init>()V

    .line 65
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapAntSwap:Z

    .line 66
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap11ax:Z

    .line 67
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapDbdc:Z

    .line 68
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap2by2:Z

    .line 69
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapHwTx:Z

    return-void
.end method


# virtual methods
.method protected getCapability()V
    .locals 6

    .line 83
    const/16 v0, 0x20

    new-array v0, v0, [I

    .line 84
    .local v0, "capability":[I
    const/4 v1, 0x0

    invoke-static {v0, v1}, Ljava/util/Arrays;->fill([II)V

    .line 85
    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaGetChipCapability([I)I

    move-result v2

    const-string v3, "Wifi/Capability"

    if-eqz v2, :cond_0

    .line 86
    const-string v1, "Query capability failed"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    return-void

    .line 89
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "capability:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    aget v2, v0, v1

    and-int/lit8 v2, v2, 0x8

    const/4 v3, 0x1

    if-lez v2, :cond_1

    move v2, v3

    goto :goto_0

    :cond_1
    move v2, v1

    :goto_0
    iput-boolean v2, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap11ax:Z

    .line 91
    aget v2, v0, v3

    if-le v2, v3, :cond_2

    move v2, v3

    goto :goto_1

    :cond_2
    move v2, v1

    :goto_1
    iput-boolean v2, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap2by2:Z

    .line 92
    const/4 v2, 0x2

    aget v4, v0, v2

    and-int/2addr v4, v3

    if-lez v4, :cond_3

    move v4, v3

    goto :goto_2

    :cond_3
    move v4, v1

    :goto_2
    iput-boolean v4, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapDbdc:Z

    .line 93
    const/16 v4, 0x10

    aget v5, v0, v4

    and-int/2addr v5, v3

    if-lez v5, :cond_4

    move v5, v3

    goto :goto_3

    :cond_4
    move v5, v1

    :goto_3
    iput-boolean v5, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapAntSwap:Z

    .line 94
    aget v4, v0, v4

    and-int/2addr v2, v4

    if-lez v2, :cond_5

    move v1, v3

    :cond_5
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapHwTx:Z

    .line 96
    return-void
.end method

.method protected is11AxSupport()Z
    .locals 1

    .line 104
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap11ax:Z

    return v0
.end method

.method protected is2by2Support()Z
    .locals 1

    .line 112
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCap2by2:Z

    return v0
.end method

.method protected isAntSwapSupport()Z
    .locals 1

    .line 100
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapAntSwap:Z

    return v0
.end method

.method protected isDbdcSupport()Z
    .locals 1

    .line 108
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapDbdc:Z

    return v0
.end method

.method protected isHwTxSupport()Z
    .locals 1

    .line 116
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/CapabilityFormat;->mCapHwTx:Z

    return v0
.end method
