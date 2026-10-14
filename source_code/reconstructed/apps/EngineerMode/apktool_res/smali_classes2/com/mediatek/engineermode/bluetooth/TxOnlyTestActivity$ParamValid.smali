.class final enum Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
.super Ljava/lang/Enum;
.source "TxOnlyTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x401a
    name = "ParamValid"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

.field public static final enum PARAM_VALID_PKT_LEN_EXCEED:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

.field public static final enum PARAM_VALID_PKT_LEN_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

.field public static final enum PARAM_VALID_TX_CH_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

.field public static final enum PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 108
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    const-string v1, "PARAM_VALID_VALID"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    .line 109
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    const-string v1, "PARAM_VALID_PKT_LEN_EXCEED"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_EXCEED:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    .line 110
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    const-string v1, "PARAM_VALID_PKT_LEN_NO_VALUE"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    .line 111
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    const-string v1, "PARAM_VALID_TX_CH_NO_VALUE"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_TX_CH_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    .line 107
    const/4 v1, 0x4

    new-array v1, v1, [Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    sget-object v6, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    aput-object v6, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_EXCEED:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    aput-object v2, v1, v4

    aput-object v0, v1, v5

    sput-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 107
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 107
    const-class v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    .locals 1

    .line 107
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->$VALUES:[Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-object v0
.end method
