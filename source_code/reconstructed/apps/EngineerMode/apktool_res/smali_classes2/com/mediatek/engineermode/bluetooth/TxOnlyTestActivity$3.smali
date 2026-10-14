.class synthetic Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$3;
.super Ljava/lang/Object;
.source "TxOnlyTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1008
    name = null
.end annotation


# static fields
.field static final synthetic $SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 346
    invoke-static {}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->values()[Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$3;->$SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid:[I

    :try_start_0
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_EXCEED:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :goto_0
    :try_start_1
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$3;->$SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid:[I

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    :goto_1
    :try_start_2
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$3;->$SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid:[I

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_TX_CH_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v0

    :goto_2
    return-void
.end method
