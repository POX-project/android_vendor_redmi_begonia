.class Lcom/mediatek/engineermode/wifi/Capability6632;
.super Lcom/mediatek/engineermode/wifi/WifiCapability;
.source "WifiCapability.java"


# static fields
.field private static final CHIP_SUPPORT_DBDC:[Ljava/lang/String;

.field private static final PROPERTY:Ljava/lang/String; = "persist.vendor.connsys.chipid"


# instance fields
.field private mCapAntSwap:Z

.field private mCapDbdc:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 161
    const-string v0, "0x6779"

    const-string v1, "0x6885"

    const-string v2, "0x6873"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/Capability6632;->CHIP_SUPPORT_DBDC:[Ljava/lang/String;

    return-void
.end method

.method constructor <init>()V
    .locals 1

    .line 159
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiCapability;-><init>()V

    .line 162
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapAntSwap:Z

    .line 163
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapDbdc:Z

    return-void
.end method


# virtual methods
.method protected getCapability()V
    .locals 6

    .line 166
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->isAntSwapSupport()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapAntSwap:Z

    .line 167
    const-string v0, "persist.vendor.connsys.chipid"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 168
    .local v0, "id":Ljava/lang/String;
    sget-object v1, Lcom/mediatek/engineermode/wifi/Capability6632;->CHIP_SUPPORT_DBDC:[Ljava/lang/String;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 169
    .local v4, "strId":Ljava/lang/String;
    invoke-virtual {v4, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 170
    const/4 v5, 0x1

    iput-boolean v5, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapDbdc:Z

    .line 168
    .end local v4    # "strId":Ljava/lang/String;
    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 173
    :cond_1
    return-void
.end method

.method protected isAntSwapSupport()Z
    .locals 1

    .line 177
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapAntSwap:Z

    return v0
.end method

.method protected isDbdcSupport()Z
    .locals 1

    .line 182
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/Capability6632;->mCapDbdc:Z

    return v0
.end method
