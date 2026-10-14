.class final enum Lcom/mediatek/engineermode/wifi/WifiEmState;
.super Ljava/lang/Enum;
.source "EMWifi.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WifiEmState;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WifiEmState;

.field public static final enum WIFI_EM_STATE_ENABLE_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

.field public static final enum WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

.field public static final enum WIFI_EM_STATE_SET_TM_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 708
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiEmState;

    const-string v1, "WIFI_EM_STATE_READY"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/wifi/WifiEmState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

    .line 709
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiEmState;

    const-string v1, "WIFI_EM_STATE_ENABLE_FAIL"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/wifi/WifiEmState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_ENABLE_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

    .line 710
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiEmState;

    const-string v1, "WIFI_EM_STATE_SET_TM_FAIL"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/wifi/WifiEmState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_SET_TM_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

    .line 707
    const/4 v1, 0x3

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WifiEmState;

    sget-object v5, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_READY:Lcom/mediatek/engineermode/wifi/WifiEmState;

    aput-object v5, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiEmState;->WIFI_EM_STATE_ENABLE_FAIL:Lcom/mediatek/engineermode/wifi/WifiEmState;

    aput-object v2, v1, v3

    aput-object v0, v1, v4

    sput-object v1, Lcom/mediatek/engineermode/wifi/WifiEmState;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 707
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WifiEmState;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 707
    const-class v0, Lcom/mediatek/engineermode/wifi/WifiEmState;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WifiEmState;
    .locals 1

    .line 707
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiEmState;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiEmState;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WifiEmState;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WifiEmState;

    return-object v0
.end method
