.class public Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "BleEnhancedTestMode.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;
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

.field private static final PL_LENGTH_MAX:I = 0xff

.field private static final PL_LENGTH_MIN:I = 0x0

.field private static final TAG:Ljava/lang/String; = "BLEEhTestMode"


# instance fields
.field private m2MPhySupport:Z

.field private mBtnStart:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mChannelValue:I

.field private mCodedPhySupport:Z

.field private mEtPlLength:Landroid/widget/EditText;

.field private mPatternValue:I

.field private mPhyValue:I

.field private mPlLength:I

.field private mRGTestMode:Landroid/widget/RadioGroup;

.field private mResultStr:Ljava/lang/String;

.field private mSpChannel:Landroid/widget/Spinner;

.field private mSpPattern:Landroid/widget/Spinner;

.field private mSpPhy:Landroid/widget/Spinner;

.field private mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mTvResult:Landroid/widget/TextView;

.field private mUiHandler:Landroid/os/Handler;

.field private mViewPattern:Landroid/view/View;

.field private mViewPlLength:Landroid/view/View;

.field private mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 65
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->m2MPhySupport:Z

    .line 66
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mCodedPhySupport:Z

    .line 70
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    .line 217
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
    .param p1, "x1"    # Z

    .line 27
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mResultStr:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mTvResult:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 27
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->startTxTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;)Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;

    .line 27
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->startRxTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;
    .param p1, "x1"    # I

    .line 27
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->stopTest(I)V

    return-void
.end method

.method private checkAndGetParameters()Z
    .locals 5

    .line 292
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpChannel:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mChannelValue:I

    .line 293
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPhyValue:I

    .line 294
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v0

    const v2, 0x7f060209

    if-ne v0, v2, :cond_2

    .line 296
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mEtPlLength:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 298
    .local v0, "strPlLength":Ljava/lang/String;
    const/4 v2, 0x0

    :try_start_0
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iput v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPlLength:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 301
    nop

    .line 303
    if-ltz v3, :cond_1

    const/16 v4, 0xff

    if-le v3, v4, :cond_0

    goto :goto_0

    .line 306
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPatternValue:I

    goto :goto_1

    .line 304
    :cond_1
    :goto_0
    return v2

    .line 299
    :catch_0
    move-exception v1

    .line 300
    .local v1, "e":Ljava/lang/NumberFormatException;
    return v2

    .line 308
    .end local v0    # "strPlLength":Ljava/lang/String;
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :cond_2
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mTvResult:Landroid/widget/TextView;

    const-string v2, ""

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 309
    return v1
.end method

.method private enableUI(Z)V
    .locals 3
    .param p1, "enabled"    # Z

    .line 160
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->enableAntSwap(Z)V

    .line 161
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 162
    .local v0, "count":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 163
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 162
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 165
    .end local v1    # "k":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpChannel:Landroid/widget/Spinner;

    invoke-virtual {v1, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 166
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPattern:Landroid/widget/Spinner;

    invoke-virtual {v1, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 167
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    invoke-virtual {v1, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 168
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mEtPlLength:Landroid/widget/EditText;

    invoke-virtual {v1, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 169
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v1, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 170
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v2, p1, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 171
    return-void
.end method

.method private initComponent()V
    .locals 6

    .line 83
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->initAntComponent()V

    .line 84
    const v0, 0x7f060200

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPattern:Landroid/view/View;

    .line 85
    const v0, 0x7f060204

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPlLength:Landroid/view/View;

    .line 86
    const v0, 0x7f060207

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStart:Landroid/widget/Button;

    .line 87
    const v0, 0x7f060208

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStop:Landroid/widget/Button;

    .line 88
    const v0, 0x7f060205

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mTvResult:Landroid/widget/TextView;

    .line 90
    const v0, 0x7f0601fe

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpChannel:Landroid/widget/Spinner;

    .line 91
    const v0, 0x7f060201

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPattern:Landroid/widget/Spinner;

    .line 92
    const v0, 0x7f060202

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    .line 94
    const v0, 0x7f060203

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mEtPlLength:Landroid/widget/EditText;

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 97
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 99
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 101
    .local v0, "spChannelAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 102
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 104
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/16 v4, 0x28

    if-ge v3, v4, :cond_0

    .line 105
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const v5, 0x7f0a019e

    .line 106
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 104
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 108
    .end local v3    # "i":I
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpChannel:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 110
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    .line 112
    nop

    .line 113
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 114
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    .line 116
    nop

    .line 117
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 118
    const v1, 0x7f0601ff

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    .line 119
    invoke-virtual {v1, p0}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 120
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    const v2, 0x7f060209

    invoke-virtual {v1, v2}, Landroid/widget/RadioGroup;->check(I)V

    .line 121
    const/4 v1, 0x1

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->enableUI(Z)V

    .line 123
    return-void
.end method

.method private listPhy()V
    .locals 6

    .line 283
    const/4 v0, 0x4

    new-array v0, v0, [C

    fill-array-data v0, :array_0

    .line 284
    .local v0, "cmd":[C
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v2, v0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v1

    .line 285
    .local v1, "response":[C
    if-eqz v1, :cond_2

    array-length v2, v1

    const/4 v3, 0x3

    if-lt v2, v3, :cond_2

    const/4 v2, 0x6

    aget-char v2, v1, v2

    if-nez v2, :cond_2

    .line 286
    const/16 v2, 0x8

    aget-char v3, v1, v2

    const/4 v4, 0x1

    and-int/2addr v3, v4

    const/4 v5, 0x0

    if-eqz v3, :cond_0

    move v3, v4

    goto :goto_0

    :cond_0
    move v3, v5

    :goto_0
    iput-boolean v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->m2MPhySupport:Z

    .line 287
    aget-char v3, v1, v2

    and-int/2addr v2, v3

    if-eqz v2, :cond_1

    goto :goto_1

    :cond_1
    move v4, v5

    :goto_1
    iput-boolean v4, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mCodedPhySupport:Z

    .line 289
    :cond_2
    return-void

    :array_0
    .array-data 2
        0x1s
        0x3s
        0x20s
        0x0s
    .end array-data
.end method

.method private runStopTestCmd()[C
    .locals 3

    .line 155
    const/4 v0, 0x4

    new-array v0, v0, [C

    fill-array-data v0, :array_0

    .line 156
    .local v0, "cmd":[C
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

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

.method private startRxTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 4

    .line 190
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    move-result v0

    if-nez v0, :cond_0

    .line 191
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0

    .line 194
    :cond_0
    const/4 v0, 0x7

    new-array v0, v0, [C

    const/4 v1, 0x0

    const/4 v2, 0x1

    aput-char v2, v0, v1

    const/16 v3, 0x33

    aput-char v3, v0, v2

    const/4 v2, 0x2

    const/16 v3, 0x20

    aput-char v3, v0, v2

    const/4 v2, 0x3

    aput-char v2, v0, v2

    const/4 v2, 0x4

    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mChannelValue:I

    int-to-char v3, v3

    aput-char v3, v0, v2

    const/4 v2, 0x5

    iget v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPhyValue:I

    int-to-char v3, v3

    aput-char v3, v0, v2

    const/4 v2, 0x6

    aput-char v1, v0, v2

    .line 197
    .local v0, "cmd":[C
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v2, v0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v1

    .line 198
    .local v1, "response":[C
    if-eqz v1, :cond_1

    .line 199
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v2

    .line 201
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 202
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v2
.end method

.method private startTxTest()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 3

    .line 174
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->init()Z

    move-result v0

    if-nez v0, :cond_0

    .line 175
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0

    .line 177
    :cond_0
    const/16 v0, 0x8

    new-array v0, v0, [C

    const/4 v1, 0x0

    const/4 v2, 0x1

    aput-char v2, v0, v1

    const/16 v1, 0x34

    aput-char v1, v0, v2

    const/4 v1, 0x2

    const/16 v2, 0x20

    aput-char v2, v0, v1

    const/4 v1, 0x3

    const/4 v2, 0x4

    aput-char v2, v0, v1

    iget v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mChannelValue:I

    int-to-char v1, v1

    aput-char v1, v0, v2

    const/4 v1, 0x5

    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPlLength:I

    int-to-char v2, v2

    aput-char v2, v0, v1

    const/4 v1, 0x6

    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPatternValue:I

    int-to-char v2, v2

    aput-char v2, v0, v1

    const/4 v1, 0x7

    iget v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mPhyValue:I

    int-to-char v2, v2

    aput-char v2, v0, v1

    .line 180
    .local v0, "cmd":[C
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    array-length v2, v0

    invoke-virtual {v1, v0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->hciCommandRun([CI)[C

    move-result-object v1

    .line 181
    .local v1, "response":[C
    if-eqz v1, :cond_1

    .line 182
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v2

    .line 184
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 185
    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_TEST_FAIL:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v2
.end method

.method private stopTest(I)V
    .locals 7
    .param p1, "type"    # I

    .line 209
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->runStopTestCmd()[C

    move-result-object v0

    .line 210
    .local v0, "response":[C
    if-nez p1, :cond_0

    if-eqz v0, :cond_0

    array-length v1, v0

    const/16 v2, 0x9

    if-lt v1, v2, :cond_0

    .line 211
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

    .line 212
    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    aput-object v3, v1, v2

    .line 211
    const-string v2, "***Packet Count: %d"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mResultStr:Ljava/lang/String;

    .line 214
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/bluetooth/BtTest;->unInit()Z

    .line 215
    return-void
.end method

.method private updatePhyList()V
    .locals 3

    .line 126
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a019b

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 128
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 131
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->m2MPhySupport:Z

    if-eqz v0, :cond_0

    .line 132
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a019c

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 134
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 137
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mCodedPhySupport:Z

    if-eqz v0, :cond_1

    .line 138
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a01a1

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 140
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a01a0

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 142
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a019f

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 146
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v0

    const v1, 0x7f060209

    if-ne v0, v1, :cond_2

    .line 147
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    goto :goto_0

    .line 149
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 151
    :goto_0
    return-void
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 380
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    return v0
.end method

.method protected handleInitResult(Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;)V
    .locals 0
    .param p1, "result"    # Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 373
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->updatePhyList()V

    .line 374
    return-void
.end method

.method protected initParams()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1

    .line 365
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->listPhy()V

    .line 366
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method

.method public bridge synthetic onBackPressed()V
    .locals 0

    .line 27
    invoke-super {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onBackPressed()V

    return-void
.end method

.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 2
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 351
    const v0, 0x7f060209

    if-ne p2, v0, :cond_0

    .line 352
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPlLength:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 353
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPattern:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 354
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyTxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    goto :goto_0

    .line 356
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPlLength:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 357
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mViewPattern:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 358
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhy:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mSpPhyRxAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 360
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5
    .param p1, "v"    # Landroid/view/View;

    .line 316
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    const v2, 0x7f060209

    const-string v3, "BLEEhTestMode"

    const/4 v4, 0x1

    if-eqz v0, :cond_2

    .line 317
    const-string v0, "click start"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 318
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->showWaitDlg()V

    .line 319
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->checkAndGetParameters()Z

    move-result v0

    if-nez v0, :cond_0

    .line 320
    const v0, 0x7f0a0199

    .line 321
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getText(I)Ljava/lang/CharSequence;

    move-result-object v0

    .line 320
    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 321
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 322
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->removeWaitDlg()V

    goto :goto_2

    .line 324
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    const/16 v3, 0xb

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 325
    .local v0, "msg":Landroid/os/Message;
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v3}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v3

    if-ne v3, v2, :cond_1

    .line 326
    iput v4, v0, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 328
    :cond_1
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 330
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->sendMessage(Landroid/os/Message;)Z

    .line 331
    .end local v0    # "msg":Landroid/os/Message;
    goto :goto_2

    .line 334
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 335
    const-string v0, "click stop"

    invoke-static {v3, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 336
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->showWaitDlg()V

    .line 337
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    const/16 v3, 0xc

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 338
    .restart local v0    # "msg":Landroid/os/Message;
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mRGTestMode:Landroid/widget/RadioGroup;

    invoke-virtual {v3}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v3

    if-ne v3, v2, :cond_3

    .line 339
    iput v4, v0, Landroid/os/Message;->arg1:I

    goto :goto_1

    .line 341
    :cond_3
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 343
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;->sendMessage(Landroid/os/Message;)Z

    .line 346
    .end local v0    # "msg":Landroid/os/Message;
    :cond_4
    :goto_2
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "onSavedInstanceState"    # Landroid/os/Bundle;

    .line 74
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 75
    const v0, 0x7f080021

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->setContentView(I)V

    .line 77
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode$WorkHandler;

    .line 78
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BleEnhancedTestMode;->initComponent()V

    .line 79
    return-void
.end method
