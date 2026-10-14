.class final enum Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
.super Ljava/lang/Enum;
.source "BtList.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/BtList;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "BleSupportState"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

.field public static final enum BLE_ENHANCED:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

.field public static final enum BLE_NONE:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

.field public static final enum BLE_NORMAL:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 85
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    const-string v1, "BLE_NONE"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NONE:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    const-string v1, "BLE_NORMAL"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NORMAL:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 87
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    const-string v1, "BLE_ENHANCED"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_ENHANCED:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    .line 84
    const/4 v1, 0x3

    new-array v1, v1, [Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    sget-object v5, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NONE:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    aput-object v5, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->BLE_NORMAL:Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    aput-object v2, v1, v3

    aput-object v0, v1, v4

    sput-object v1, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 84
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 84
    const-class v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;
    .locals 1

    .line 84
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/bluetooth/BtList$BleSupportState;

    return-object v0
.end method
