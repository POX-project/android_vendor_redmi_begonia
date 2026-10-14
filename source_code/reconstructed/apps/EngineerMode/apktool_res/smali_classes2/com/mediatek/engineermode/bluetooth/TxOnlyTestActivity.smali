.class public Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "TxOnlyTestActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;,
        Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;,
        Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    }
.end annotation


# static fields
.field private static final CHANNEL_HOP_20:[C

.field private static final ET_TYPE_PKT_LEN:I = 0x2

.field private static final ET_TYPE_TX_CH:I = 0x1

.field private static final INDEX_PKT_TYPE_NON_MODULATED:I = 0x1b

.field private static final MSG_OP_TEST_START:I = 0xb

.field private static final MSG_OP_TEST_STOP:I = 0xc

.field private static final MSG_UI_START_DONE:I = 0x1

.field private static final MSG_UI_STOP_DONE:I = 0x2

.field private static final SUPPORT_RESPONSE:[C

.field private static final TAG:Ljava/lang/String; = "BtTxOnlyTest"

.field private static final TX_PKT_DATA_MAX_INDEX:I = 0x2

.field private static final TX_PKT_DATA_MIN_INDEX:I = 0x1

.field private static final TX_PKT_DATA_NAME_INDEX:I


# instance fields
.field private mBtnStart:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mChannel:I

.field private mEtFreq:Landroid/widget/EditText;

.field private mEtPktLength:Landroid/widget/EditText;

.field private mOriBtState:I

.field private mPattern:I

.field private mPktDataList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;",
            ">;"
        }
    .end annotation
.end field

.field private mPktType:I

.field private mPktTypeLen:I

.field private mSpChannels:Landroid/widget/Spinner;

.field private mSpPattern:Landroid/widget/Spinner;

.field private mSpPktTypes:Landroid/widget/Spinner;

.field private mTvPktLength:Landroid/widget/TextView;

.field private mTxCh:I

.field private mUiHandler:Landroid/os/Handler;

.field private mWorkHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 98
    const/4 v0, 0x3

    new-array v0, v0, [C

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->CHANNEL_HOP_20:[C

    .line 99
    const/4 v0, 0x7

    new-array v0, v0, [C

    fill-array-data v0, :array_1

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->SUPPORT_RESPONSE:[C

    return-void

    nop

    :array_0
    .array-data 2
        0x0s
        0x1s
        0x2s
    .end array-data

    nop

    :array_1
    .array-data 2
        0x4s
        0xes
        0x4s
        0x1s
        0x90s
        0xfds
        0x0s
    .end array-data
.end method

.method public constructor <init>()V
    .locals 1

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 87
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTvPktLength:Landroid/widget/TextView;

    .line 88
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPattern:Landroid/widget/Spinner;

    .line 89
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpChannels:Landroid/widget/Spinner;

    .line 90
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    .line 91
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStart:Landroid/widget/Button;

    .line 92
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStop:Landroid/widget/Button;

    .line 93
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtFreq:Landroid/widget/EditText;

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtPktLength:Landroid/widget/EditText;

    .line 96
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mWorkHandler:Landroid/os/Handler;

    .line 105
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    .line 126
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;-><init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;
    .param p1, "x1"    # Z

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->doTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTvPktLength:Landroid/widget/TextView;

    return-object v0
.end method

.method private checkAndGetParameters()Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    .locals 4

    .line 374
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtFreq:Landroid/widget/EditText;

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getEditBoxValue(Landroid/widget/EditText;I)Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    move-result-object v0

    .line 375
    .local v0, "result":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    if-eq v0, v1, :cond_0

    .line 376
    return-object v0

    .line 378
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtPktLength:Landroid/widget/EditText;

    const/4 v2, 0x2

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getEditBoxValue(Landroid/widget/EditText;I)Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    move-result-object v0

    .line 379
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    if-eq v0, v1, :cond_1

    .line 380
    return-object v0

    .line 383
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktType:I

    .line 384
    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktTypeLen:I

    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    invoke-static {v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$700(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v1

    if-gt v2, v1, :cond_3

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktTypeLen:I

    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktType:I

    .line 385
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$600(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)I

    move-result v2

    if-ge v1, v2, :cond_2

    goto :goto_0

    .line 389
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPattern:I

    .line 390
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpChannels:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mChannel:I

    .line 393
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-object v1

    .line 386
    :cond_3
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_EXCEED:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-object v1
.end method

.method private doTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1

    .line 256
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getState()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mOriBtState:I

    .line 257
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->enableBluetooth(Z)V

    .line 258
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->startTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method private enableBluetooth(Z)V
    .locals 2
    .param p1, "enable"    # Z

    .line 262
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Bluetooth to enabled:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTxOnlyTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 263
    if-eqz p1, :cond_0

    .line 264
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->enable()Z

    goto :goto_0

    .line 266
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->disable()Z

    .line 268
    :goto_0
    return-void
.end method

.method private enableUI(Z)V
    .locals 2
    .param p1, "enabled"    # Z

    .line 241
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->enableAntSwap(Z)V

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 243
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 244
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpChannels:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 245
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 246
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 247
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtFreq:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtPktLength:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 249
    return-void
.end method

.method private getEditBoxValue(Landroid/widget/EditText;I)Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    .locals 4
    .param p1, "editText"    # Landroid/widget/EditText;
    .param p2, "flag"    # I

    .line 320
    invoke-virtual {p1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 322
    .local v0, "str":Ljava/lang/String;
    const/4 v1, 0x1

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    .line 327
    :cond_0
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 330
    .local v2, "value":I
    if-ne p2, v1, :cond_1

    .line 331
    iput v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTxCh:I

    goto :goto_0

    .line 332
    :cond_1
    const/4 v1, 0x2

    if-ne p2, v1, :cond_2

    .line 334
    iput v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktTypeLen:I

    .line 336
    :cond_2
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    return-object v1

    .line 323
    .end local v2    # "value":I
    :cond_3
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "editText:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " str "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " flag:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BtTxOnlyTest"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 324
    if-ne p2, v1, :cond_4

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_TX_CH_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    goto :goto_2

    .line 325
    :cond_4
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_PKT_LEN_NO_VALUE:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    .line 324
    :goto_2
    return-object v1
.end method

.method private handleNonModulated()V
    .locals 10

    .line 299
    const/4 v0, 0x5

    .line 300
    .local v0, "cmdLen":I
    new-array v1, v0, [C

    .line 302
    .local v1, "cmd":[C
    const/4 v2, 0x0

    .line 303
    .local v2, "i":I
    const/4 v3, 0x0

    const/4 v4, 0x1

    aput-char v4, v1, v3

    .line 304
    const/16 v5, 0x15

    aput-char v5, v1, v4

    .line 305
    const/4 v5, 0x2

    const/16 v6, 0xfc

    aput-char v6, v1, v5

    .line 306
    const/4 v7, 0x3

    aput-char v4, v1, v7

    .line 307
    const/4 v8, 0x4

    aput-char v3, v1, v8

    .line 308
    iget-object v9, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v9, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    .line 310
    const/4 v0, 0x5

    .line 311
    aput-char v4, v1, v3

    .line 312
    const/16 v3, 0xd5

    aput-char v3, v1, v4

    .line 313
    aput-char v6, v1, v5

    .line 314
    aput-char v4, v1, v7

    .line 315
    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTxCh:I

    int-to-char v3, v3

    aput-char v3, v1, v8

    .line 316
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v3, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    .line 317
    return-void
.end method

.method private initComponent()V
    .locals 5

    .line 185
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->initAntComponent()V

    .line 187
    const v0, 0x7f06023f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPattern:Landroid/widget/Spinner;

    .line 188
    nop

    .line 189
    const v0, 0x7f01001e

    const v1, 0x1090008

    invoke-static {p0, v0, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 191
    .local v0, "adapterPattern":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    nop

    .line 192
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 193
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 196
    const v3, 0x7f060241

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTvPktLength:Landroid/widget/TextView;

    .line 198
    const v3, 0x7f060242

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    .line 199
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    move-object v1, v3

    .line 200
    .local v1, "adapterpktType":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 201
    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 202
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->initPktDataList()V

    .line 203
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    .line 204
    .local v3, "data":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;
    invoke-static {v3}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;->access$400(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 205
    .end local v3    # "data":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;
    goto :goto_0

    .line 206
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$2;-><init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;)V

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 229
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpPktTypes:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 230
    const v2, 0x7f06023d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Spinner;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpChannels:Landroid/widget/Spinner;

    .line 231
    const v2, 0x7f060243

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStart:Landroid/widget/Button;

    .line 232
    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 233
    const v2, 0x7f060244

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStop:Landroid/widget/Button;

    .line 234
    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 235
    const v2, 0x7f06023e

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtFreq:Landroid/widget/EditText;

    .line 236
    const v2, 0x7f060240

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mEtPktLength:Landroid/widget/EditText;

    .line 237
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->enableUI(Z)V

    .line 238
    return-void
.end method

.method private initPktDataList()V
    .locals 11

    .line 436
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01001f

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    .line 438
    .local v0, "pktData":[Ljava/lang/String;
    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_0

    aget-object v4, v0, v3

    .line 439
    .local v4, "strPktData":Ljava/lang/String;
    const-string v5, ","

    invoke-virtual {v4, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 440
    .local v5, "arrayData":[Ljava/lang/String;
    iget-object v6, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktDataList:Ljava/util/ArrayList;

    new-instance v7, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;

    aget-object v8, v5, v2

    const/4 v9, 0x1

    aget-object v9, v5, v9

    .line 442
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const/4 v10, 0x2

    aget-object v10, v5, v10

    .line 443
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Integer;->intValue()I

    move-result v10

    invoke-direct {v7, p0, v8, v9, v10}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$TxPktData;-><init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Ljava/lang/String;II)V

    .line 440
    invoke-virtual {v6, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 438
    .end local v4    # "strPktData":Ljava/lang/String;
    .end local v5    # "arrayData":[Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 445
    :cond_0
    return-void
.end method

.method private startTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 8

    .line 271
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PocketType:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " Frequency:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTxCh:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTxOnlyTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 273
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktType:I

    const/16 v1, 0x1b

    if-ne v0, v1, :cond_0

    .line 274
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->handleNonModulated()V

    goto :goto_0

    .line 276
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPattern:I

    iget v4, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mChannel:I

    iget v5, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktType:I

    iget v6, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mPktTypeLen:I

    iget v7, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mTxCh:I

    invoke-virtual/range {v2 .. v7}, Lcom/mediatek/engineermode/bluetooth/BtTest;->doTxOnlyTest(IIIII)Z

    move-result v0

    if-nez v0, :cond_3

    .line 277
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 278
    const/16 v0, 0xb

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mOriBtState:I

    if-eq v0, v1, :cond_1

    const/16 v0, 0xc

    if-ne v0, v1, :cond_2

    .line 280
    :cond_1
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->enableBluetooth(Z)V

    .line 282
    :cond_2
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0

    .line 285
    :cond_3
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 398
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    return v0
.end method

.method protected handleInitResult(Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;)V
    .locals 4
    .param p1, "result"    # Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 404
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 405
    .local v0, "res":Landroid/content/res/Resources;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 406
    .local v1, "arrayCh":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const v2, 0x7f01001c

    invoke-virtual {v0, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 407
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    invoke-virtual {p1, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 408
    const v2, 0x7f01001d

    .line 409
    invoke-virtual {v0, v2}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 408
    invoke-static {v2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 412
    :cond_0
    new-instance v2, Landroid/widget/ArrayAdapter;

    const v3, 0x1090008

    invoke-direct {v2, p0, v3, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 414
    .local v2, "adapterChannels":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const v3, 0x1090009

    .line 415
    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 416
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mSpChannels:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 417
    return-void
.end method

.method protected initParams()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 11

    .line 422
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 423
    .local v0, "result":Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    sget-object v1, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->CHANNEL_HOP_20:[C

    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_2

    aget-char v5, v1, v4

    .line 424
    .local v5, "value":C
    const/4 v6, 0x5

    new-array v6, v6, [C

    const/4 v7, 0x1

    aput-char v7, v6, v3

    const/16 v8, 0x90

    aput-char v8, v6, v7

    const/4 v8, 0x2

    const/16 v9, 0xfd

    aput-char v9, v6, v8

    const/4 v8, 0x3

    aput-char v7, v6, v8

    const/4 v7, 0x4

    aput-char v5, v6, v7

    .line 425
    .local v6, "cmd":[C
    iget-object v7, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v8, v6

    invoke-virtual {v7, v6, v8}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v7

    .line 426
    .local v7, "res":[C
    array-length v8, v7

    sget-object v9, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->SUPPORT_RESPONSE:[C

    array-length v10, v9

    if-ne v8, v10, :cond_1

    .line 427
    invoke-static {v9, v7}, Ljava/util/Arrays;->equals([C[C)Z

    move-result v8

    if-nez v8, :cond_0

    goto :goto_1

    .line 423
    .end local v5    # "value":C
    .end local v6    # "cmd":[C
    .end local v7    # "res":[C
    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 428
    .restart local v5    # "value":C
    .restart local v6    # "cmd":[C
    .restart local v7    # "res":[C
    :cond_1
    :goto_1
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_CHANNEL_HOP_20_NO_SUPPORT:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 429
    nop

    .line 432
    .end local v5    # "value":C
    .end local v6    # "cmd":[C
    .end local v7    # "res":[C
    :cond_2
    return-object v0
.end method

.method public bridge synthetic onBackPressed()V
    .locals 0

    .line 68
    invoke-super {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onBackPressed()V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 342
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 343
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->showWaitDlg()V

    .line 344
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->checkAndGetParameters()Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    move-result-object v0

    .line 345
    .local v0, "checkResult":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    const/4 v1, -0x1

    .line 346
    .local v1, "resId":I
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$3;->$SwitchMap$com$mediatek$engineermode$bluetooth$TxOnlyTestActivity$ParamValid:[I

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->ordinal()I

    move-result v3

    aget v2, v2, v3

    const/4 v3, 0x1

    if-eq v2, v3, :cond_2

    const/4 v4, 0x2

    if-eq v2, v4, :cond_1

    const/4 v4, 0x3

    if-eq v2, v4, :cond_0

    goto :goto_0

    .line 354
    :cond_0
    const v1, 0x7f0a01b2

    .line 355
    goto :goto_0

    .line 351
    :cond_1
    const v1, 0x7f0a01b1

    .line 352
    goto :goto_0

    .line 348
    :cond_2
    const v1, 0x7f0a01b3

    .line 349
    nop

    .line 359
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;->PARAM_VALID_VALID:Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;

    if-eq v0, v2, :cond_3

    .line 360
    nop

    .line 361
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v2

    .line 360
    invoke-static {p0, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 361
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 362
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->removeWaitDlg()V

    goto :goto_1

    .line 364
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mWorkHandler:Landroid/os/Handler;

    const/16 v3, 0xb

    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_1

    .line 367
    .end local v0    # "checkResult":Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$ParamValid;
    .end local v1    # "resId":I
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 368
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->showWaitDlg()V

    .line 369
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mWorkHandler:Landroid/os/Handler;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_2

    .line 367
    :cond_5
    :goto_1
    nop

    .line 371
    :goto_2
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 117
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 118
    const v0, 0x7f080028

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->setContentView(I)V

    .line 120
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->mWorkHandler:Landroid/os/Handler;

    .line 122
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TxOnlyTestActivity;->initComponent()V

    .line 123
    return-void
.end method
