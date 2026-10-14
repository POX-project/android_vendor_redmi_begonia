.class public Lcom/mediatek/engineermode/bluetooth/BleTestMode;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "BleTestMode.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;
    }
.end annotation


# static fields
.field private static final ARG_RX:I = 0x0

.field private static final ARG_TX:I = 0x1

.field private static final CHANNEL_NUM:I = 0x28

.field private static final MSG_OP_TEST_START:I = 0xb

.field private static final MSG_OP_TEST_STOP:I = 0xc

.field private static final MSG_UI_START_DONE:I = 0x1

.field private static final MSG_UI_STOP_DONE:I = 0x2

.field private static final TAG:Ljava/lang/String; = "BleTestMode"


# instance fields
.field private mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

.field private mBtnStart:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mChannelValue:B

.field private mPatternValue:B

.field private mResultStr:Ljava/lang/String;

.field private mRgMode:Landroid/widget/RadioGroup;

.field private mSpChannel:Landroid/widget/Spinner;

.field private mSpPattern:Landroid/widget/Spinner;

.field private mTvResult:Landroid/widget/TextView;

.field private mUiHandler:Landroid/os/Handler;

.field private mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 64
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 66
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    .line 71
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    .line 72
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStop:Landroid/widget/Button;

    .line 73
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    .line 74
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mTvResult:Landroid/widget/TextView;

    .line 75
    const-string v1, "R:"

    iput-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mResultStr:Ljava/lang/String;

    .line 81
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpChannel:Landroid/widget/Spinner;

    .line 82
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpPattern:Landroid/widget/Spinner;

    .line 85
    const/4 v1, 0x0

    iput-byte v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mChannelValue:B

    .line 86
    iput-byte v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mPatternValue:B

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    .line 165
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$3;-><init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/bluetooth/BleTestMode;B)B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;
    .param p1, "x1"    # B

    .line 64
    iput-byte p1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mChannelValue:B

    return p1
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/bluetooth/BleTestMode;B)B
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;
    .param p1, "x1"    # B

    .line 64
    iput-byte p1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mPatternValue:B

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;
    .param p1, "x1"    # Z

    .line 64
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 64
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mResultStr:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 64
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mTvResult:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 64
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->startTxTest()V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 64
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->startRxTest()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;

    .line 64
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/bluetooth/BleTestMode;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleTestMode;
    .param p1, "x1"    # I

    .line 64
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->stopTest(I)V

    return-void
.end method

.method private enableUI(Z)V
    .locals 3
    .param p1, "enabled"    # Z

    .line 259
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 260
    .local v0, "count":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 261
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 260
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 263
    .end local v1    # "k":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpChannel:Landroid/widget/Spinner;

    invoke-virtual {v1, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 264
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v1, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 266
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v1, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 267
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v2, p1, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 268
    return-void
.end method

.method private initComponent()V
    .locals 6

    .line 106
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->initAntComponent()V

    .line 107
    const v0, 0x7f060213

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    .line 108
    const v0, 0x7f060214

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStop:Landroid/widget/Button;

    .line 109
    const v0, 0x7f060211

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mTvResult:Landroid/widget/TextView;

    .line 111
    const v0, 0x7f06020f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    .line 113
    const v0, 0x7f06020e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpChannel:Landroid/widget/Spinner;

    .line 114
    const v0, 0x7f060210

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpPattern:Landroid/widget/Spinner;

    .line 116
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 117
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 120
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 122
    .local v0, "mSpnChannelAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 123
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 125
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/16 v4, 0x28

    if-ge v3, v4, :cond_0

    .line 126
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const v5, 0x7f0a01aa

    .line 127
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 125
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 130
    .end local v3    # "i":I
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpChannel:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 131
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpChannel:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/bluetooth/BleTestMode$1;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 144
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    move-object v1, v3

    .line 146
    .local v1, "mSpnPatternAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<[Ljava/lang/String;>;"
    nop

    .line 147
    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 148
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f010017

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 151
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mSpPattern:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/bluetooth/BleTestMode$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$2;-><init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;)V

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 161
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->enableUI(Z)V

    .line 162
    return-void
.end method

.method private sendTestStopCmd()[C
    .locals 3

    .line 187
    const/4 v0, 0x4

    new-array v0, v0, [C

    fill-array-data v0, :array_0

    .line 188
    .local v0, "cmd":[C
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v2, v0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v1

    return-object v1

    :array_0
    .array-data 2
        0x1s
        0x1fs
        0x20s
        0x0s
    .end array-data
.end method

.method private startRxTest()V
    .locals 4

    .line 209
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 211
    const/4 v0, 0x5

    new-array v0, v0, [C

    .line 212
    .local v0, "cmd":[C
    const/4 v1, 0x0

    const/4 v2, 0x1

    aput-char v2, v0, v1

    .line 213
    const/16 v1, 0x1d

    aput-char v1, v0, v2

    .line 214
    const/4 v1, 0x2

    const/16 v3, 0x20

    aput-char v3, v0, v1

    .line 215
    const/4 v1, 0x3

    aput-char v2, v0, v1

    .line 216
    iget-byte v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mChannelValue:B

    int-to-char v1, v1

    const/4 v2, 0x4

    aput-char v1, v0, v2

    .line 217
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v2, v0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    .line 218
    return-void
.end method

.method private startTxTest()V
    .locals 5

    .line 193
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    .line 194
    const/4 v0, 0x7

    .line 195
    .local v0, "cmdLen":I
    new-array v1, v0, [C

    .line 196
    .local v1, "cmd":[C
    const/4 v2, 0x0

    .line 197
    .local v2, "i":I
    const/4 v3, 0x0

    const/4 v4, 0x1

    aput-char v4, v1, v3

    .line 198
    const/16 v3, 0x1e

    aput-char v3, v1, v4

    .line 199
    const/4 v3, 0x2

    const/16 v4, 0x20

    aput-char v4, v1, v3

    .line 200
    const/4 v3, 0x3

    aput-char v3, v1, v3

    .line 201
    iget-byte v3, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mChannelValue:B

    int-to-char v3, v3

    const/4 v4, 0x4

    aput-char v3, v1, v4

    .line 202
    const/4 v3, 0x5

    const/16 v4, 0x25

    aput-char v4, v1, v3

    .line 203
    iget-byte v3, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mPatternValue:B

    int-to-char v3, v3

    const/4 v4, 0x6

    aput-char v3, v1, v4

    .line 205
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v3, v1, v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    .line 206
    return-void
.end method

.method private stopTest(I)V
    .locals 7
    .param p1, "type"    # I

    .line 222
    const-string v0, "BleTestMode"

    const-string v1, "handleRxTestStop"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->sendTestStopCmd()[C

    move-result-object v0

    .line 224
    .local v0, "response":[C
    if-nez p1, :cond_0

    if-eqz v0, :cond_0

    .line 225
    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const/16 v3, 0x8

    aget-char v3, v0, v3

    int-to-long v3, v3

    const-wide/16 v5, 0x100

    mul-long/2addr v3, v5

    const/4 v5, 0x7

    aget-char v5, v0, v5

    int-to-long v5, v5

    add-long/2addr v3, v5

    .line 226
    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v1, v2

    .line 225
    const-string v2, "***Packet Count: %d"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mResultStr:Ljava/lang/String;

    .line 228
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 229
    return-void
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 308
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    return v0
.end method

.method public bridge synthetic onBackPressed()V
    .locals 0

    .line 64
    invoke-super {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onBackPressed()V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 235
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    const v3, 0x7f060215

    if-eqz v0, :cond_1

    .line 236
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->showWaitDlg()V

    .line 237
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    const/16 v4, 0xb

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 238
    .local v0, "msg":Landroid/os/Message;
    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v4

    if-ne v4, v3, :cond_0

    .line 239
    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 241
    :cond_0
    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 243
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->sendMessage(Landroid/os/Message;)Z

    .end local v0    # "msg":Landroid/os/Message;
    goto :goto_2

    .line 245
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 247
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->showWaitDlg()V

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    const/16 v4, 0xc

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 249
    .restart local v0    # "msg":Landroid/os/Message;
    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mRgMode:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v4

    if-ne v4, v3, :cond_2

    .line 250
    iput v1, v0, Landroid/os/Message;->arg1:I

    goto :goto_1

    .line 252
    :cond_2
    iput v2, v0, Landroid/os/Message;->arg1:I

    .line 254
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_3

    .line 245
    .end local v0    # "msg":Landroid/os/Message;
    :cond_3
    :goto_2
    nop

    .line 256
    :goto_3
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "onSavedInstanceState"    # Landroid/os/Bundle;

    .line 98
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 99
    const v0, 0x7f080022

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->setContentView(I)V

    .line 100
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BleTestMode;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BleTestMode$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleTestMode$WorkHandler;

    .line 101
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleTestMode;->initComponent()V

    .line 102
    return-void
.end method
