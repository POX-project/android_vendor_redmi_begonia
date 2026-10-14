.class public Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "NoSigRxTestActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;
    }
.end annotation


# static fields
.field private static final DEFAULT_ADDR:I = 0xa5f0c3

.field private static final FREQ_MAX_VALUE:I = 0x4e

.field private static final MSG_OP_BT_START:I = 0xb

.field private static final MSG_OP_BT_STOP:I = 0xc

.field private static final MSG_UI_START_DONE:I = 0x2

.field private static final MSG_UI_STOP_DONE:I = 0x4

.field private static final TAG:Ljava/lang/String; = "BtNoSigRxTest"


# instance fields
.field private mAddr:I

.field private mBtnStartTest:Landroid/widget/Button;

.field private mBtnStopTest:Landroid/widget/Button;

.field private mEtAddr:Landroid/widget/EditText;

.field private mEtFreq:Landroid/widget/EditText;

.field private mFreq:I

.field private mOriBtState:I

.field private mPattern:I

.field private mPocketType:I

.field private mResult:[I

.field private mSpPattern:Landroid/widget/Spinner;

.field private mSpPocketType:Landroid/widget/Spinner;

.field private mTvBitErrRate:Landroid/widget/TextView;

.field private mTvPackCnt:Landroid/widget/TextView;

.field private mTvPackErrRate:Landroid/widget/TextView;

.field private mTvRxByteCnt:Landroid/widget/TextView;

.field private mUiHandler:Landroid/os/Handler;

.field private mWorkHandler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 86
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mResult:[I

    .line 88
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mWorkHandler:Landroid/os/Handler;

    .line 90
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mAddr:I

    .line 91
    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPattern:I

    .line 92
    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPocketType:I

    .line 93
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mFreq:I

    .line 148
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;-><init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;
    .param p1, "x1"    # Z

    .line 61
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mResult:[I

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvPackCnt:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvPackErrRate:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvRxByteCnt:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvBitErrRate:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->doTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->stopTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method private checkAndGetParameters()Z
    .locals 7

    .line 249
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtFreq:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 250
    .local v0, "strFreq":Ljava/lang/String;
    const/4 v1, 0x0

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_2

    .line 253
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtAddr:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 254
    .local v2, "strAddr":Ljava/lang/String;
    if-eqz v2, :cond_5

    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_1

    .line 258
    :cond_1
    :try_start_0
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mFreq:I

    .line 259
    if-ltz v3, :cond_4

    const/16 v4, 0x4e

    if-le v3, v4, :cond_2

    goto :goto_0

    .line 262
    :cond_2
    const/16 v3, 0x10

    invoke-static {v2, v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;I)J

    move-result-wide v3

    .line 263
    .local v3, "longAdd":J
    long-to-int v5, v3

    iput v5, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mAddr:I

    .line 264
    if-nez v5, :cond_3

    .line 265
    const v5, 0xa5f0c3

    iput v5, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mAddr:I

    .line 266
    iget-object v6, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtAddr:Landroid/widget/EditText;

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 271
    .end local v3    # "longAdd":J
    :cond_3
    nop

    .line 272
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPattern:I

    .line 273
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPocketType:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPocketType:I

    .line 274
    const/4 v1, 0x1

    return v1

    .line 260
    :cond_4
    :goto_0
    return v1

    .line 268
    :catch_0
    move-exception v3

    .line 269
    .local v3, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v3}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v4

    const-string v5, "BtNoSigRxTest"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 270
    return v1

    .line 255
    .end local v3    # "e":Ljava/lang/NumberFormatException;
    :cond_5
    :goto_1
    return v1

    .line 251
    .end local v2    # "strAddr":Ljava/lang/String;
    :cond_6
    :goto_2
    return v1
.end method

.method private doTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getState()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mOriBtState:I

    .line 216
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableBluetooth(Z)V

    .line 217
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->startTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method private enableBluetooth(Z)V
    .locals 2
    .param p1, "enable"    # Z

    .line 239
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Bluetooth to enabled:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtNoSigRxTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    if-eqz p1, :cond_0

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->enable()Z

    goto :goto_0

    .line 243
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->disable()Z

    .line 245
    :goto_0
    return-void
.end method

.method private enableUI(Z)V
    .locals 2
    .param p1, "enabled"    # Z

    .line 105
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableAntSwap(Z)V

    .line 106
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 107
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPocketType:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 108
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtFreq:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 109
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtAddr:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 111
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStartTest:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 112
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStopTest:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 113
    return-void
.end method

.method private initComponent()V
    .locals 4

    .line 116
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->initAntComponent()V

    .line 117
    const v0, 0x7f06022e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtFreq:Landroid/widget/EditText;

    .line 118
    const v0, 0x7f06022c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mEtAddr:Landroid/widget/EditText;

    .line 119
    const v0, 0x7f060231

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvPackCnt:Landroid/widget/TextView;

    .line 120
    const v0, 0x7f060232

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvPackErrRate:Landroid/widget/TextView;

    .line 121
    const v0, 0x7f060230

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvRxByteCnt:Landroid/widget/TextView;

    .line 122
    const v0, 0x7f06022d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mTvBitErrRate:Landroid/widget/TextView;

    .line 125
    const v0, 0x7f06022f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPattern:Landroid/widget/Spinner;

    .line 126
    nop

    .line 127
    const v0, 0x7f01001a

    const v1, 0x1090008

    invoke-static {p0, v0, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v0

    .line 129
    .local v0, "adapterPattern":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    nop

    .line 130
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 131
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 134
    const v3, 0x7f060233

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPocketType:Landroid/widget/Spinner;

    .line 135
    nop

    .line 136
    const v3, 0x7f01001b

    invoke-static {p0, v3, v1}, Landroid/widget/ArrayAdapter;->createFromResource(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;

    move-result-object v1

    .line 138
    .local v1, "adapterPocketType":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    nop

    .line 139
    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 140
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mSpPocketType:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 141
    const v2, 0x7f060234

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStartTest:Landroid/widget/Button;

    .line 142
    const v2, 0x7f060235

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Button;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStopTest:Landroid/widget/Button;

    .line 143
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStartTest:Landroid/widget/Button;

    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 144
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStopTest:Landroid/widget/Button;

    invoke-virtual {v2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 145
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableUI(Z)V

    .line 146
    return-void
.end method

.method private startTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 5

    .line 278
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 279
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPattern:I

    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mPocketType:I

    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mFreq:I

    iget v4, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mAddr:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/mediatek/engineermode/bluetooth/BtTest;->noSigRxTestStart(IIII)Z

    move-result v0

    if-nez v0, :cond_2

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 281
    const-string v0, "BtNoSigRxTest"

    const-string v1, "no signal rx test failed."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    const/16 v0, 0xb

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mOriBtState:I

    if-eq v0, v1, :cond_0

    const/16 v0, 0xc

    if-ne v0, v1, :cond_1

    .line 284
    :cond_0
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableBluetooth(Z)V

    .line 286
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0

    .line 288
    :cond_2
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method

.method private stopTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 2

    .line 293
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->noSigRxTestResult()[I

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mResult:[I

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 295
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mResult:[I

    if-nez v0, :cond_2

    .line 296
    const-string v0, "BtNoSigRxTest"

    const-string v1, "no signal rx test failed."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    const/16 v0, 0xb

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mOriBtState:I

    if-eq v0, v1, :cond_0

    const/16 v0, 0xc

    if-ne v0, v1, :cond_1

    .line 299
    :cond_0
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->enableBluetooth(Z)V

    .line 301
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0

    .line 303
    :cond_2
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 310
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStartTest:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    return v0
.end method

.method public bridge synthetic onBackPressed()V
    .locals 0

    .line 61
    invoke-super {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onBackPressed()V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 223
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStartTest:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 224
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->showWaitDlg()V

    .line 225
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->checkAndGetParameters()Z

    move-result v0

    if-nez v0, :cond_0

    .line 226
    const v0, 0x7f0a0199

    .line 227
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v0

    const/4 v1, 0x1

    .line 226
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 227
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 228
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->removeWaitDlg()V

    goto :goto_0

    .line 230
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mWorkHandler:Landroid/os/Handler;

    const/16 v1, 0xb

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 232
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mBtnStopTest:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 233
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->showWaitDlg()V

    .line 234
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mWorkHandler:Landroid/os/Handler;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 236
    :cond_2
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 98
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 99
    const v0, 0x7f080024

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->setContentView(I)V

    .line 100
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->mWorkHandler:Landroid/os/Handler;

    .line 101
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/NoSigRxTestActivity;->initComponent()V

    .line 102
    return-void
.end method
