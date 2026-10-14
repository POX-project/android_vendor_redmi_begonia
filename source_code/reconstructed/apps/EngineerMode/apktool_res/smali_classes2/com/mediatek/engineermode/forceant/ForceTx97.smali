.class public Lcom/mediatek/engineermode/forceant/ForceTx97;
.super Landroid/app/Activity;
.source "ForceTx97.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final BUTTON_BY_INDEX:I = 0x3

.field private static final BUTTON_BY_STATE:I = 0x2

.field private static final BUTTON_SET_BY_BAND:I = 0x0

.field private static final BUTTON_SET_BY_RET:I = 0x1

.field private static final DIG_WARING_WRITE_NVRAM:I = 0x1

.field private static final FORCE_TX_DISABLE:I = 0x0

.field private static final FORCE_TX_ENABLE:I = 0x1

.field private static final FORCE_TX_RAT_C2K:I = 0x4

.field private static final FORCE_TX_RAT_GSM:I = 0x1

.field private static final FORCE_TX_RAT_LTE:I = 0x3

.field private static final FORCE_TX_RAT_NR:I = 0x5

.field private static final FORCE_TX_RAT_UMTS:I = 0x2

.field private static final FORCE_TX_READ:I = 0x2

.field private static final QUERY_ANT_INDEX_BY_STATUS:I = 0x6

.field private static final QUERY_ANT_STATUS_BY_INDEX:I = 0x7

.field private static final SHREDPRE_NAME:Ljava/lang/String; = "ForceAnt97"

.field private static final TAG:Ljava/lang/String; = "ForceAnt97"

.field private static final TAS_BAND:Ljava/lang/String; = "TasBand"

.field private static final TAS_MODE:Ljava/lang/String; = "TasMode"

.field private static final TAS_NVRAM:Ljava/lang/String; = "TasNvram"

.field private static final TAS_RAT:Ljava/lang/String; = "TasRat"

.field private static final TAS_TYPE:Ljava/lang/String; = "TasType"

.field private static mModeArray:[Ljava/lang/String;

.field private static mRatArray:[Ljava/lang/String;

.field private static mTasModeEnableStates:I

.field private static mTypeArray:[Ljava/lang/String;

.field private static mtasBand:Ljava/lang/String;

.field private static mtasMode:I

.field private static mtasNvram:Ljava/lang/String;

.field private static mtasRat:I

.field private static mtasStatesRx:Ljava/lang/String;

.field private static mtasStatesTx:Ljava/lang/String;


# instance fields
.field private mATCmdHander:Landroid/os/Handler;

.field private mAntIndexMIMOTableRow:Landroid/widget/TableRow;

.field private mAntIndexTxTableRow:Landroid/widget/TableRow;

.field private mEnableStatesBtnBand:Landroid/widget/Button;

.field private mEnableStatesBtnRet:Landroid/widget/Button;

.field private mForceAntModeSpinner:Landroid/widget/Spinner;

.field private mModemType:I

.field private mQueryIndexOrStatesBtn:Landroid/widget/Button;

.field private mQueryMode:Ljava/lang/String;

.field private mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mTasAntDrx:Landroid/widget/Spinner;

.field private mTasAntMIMO1:Landroid/widget/Spinner;

.field private mTasAntMIMO2:Landroid/widget/Spinner;

.field private mTasAntPrx:Landroid/widget/Spinner;

.field private mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

.field private mTasAntStatesSpinnerRxView:Landroid/widget/TextView;

.field private mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

.field private mTasAntStatesSpinnerTxView:Landroid/widget/TextView;

.field private mTasAntSwitchLabel:Landroid/widget/TextView;

.field private mTasAntTest:Landroid/widget/TextView;

.field private mTasAntTx0:Landroid/widget/Spinner;

.field private mTasAntTx1:Landroid/widget/Spinner;

.field private mTasBandEdit:Landroid/widget/EditText;

.field private mTasRatSpinner:Landroid/widget/Spinner;

.field private mTextViewTx1:Landroid/widget/TextView;

.field private ratMapping:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 96
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 98
    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    .line 99
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    .line 100
    const-string v0, "false"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    .line 101
    const-string v0, "1"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    .line 102
    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesTx:Ljava/lang/String;

    .line 103
    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesRx:Ljava/lang/String;

    .line 105
    const-string v0, "by rat"

    const-string v1, "by band"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTypeArray:[Ljava/lang/String;

    .line 106
    const-string v0, "Disable"

    const-string v1, "Enable"

    const-string v2, "Read"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mModeArray:[Ljava/lang/String;

    .line 107
    const-string v0, "GSM"

    const-string v1, "UTMS"

    const-string v2, "LTE"

    const-string v3, "C2K"

    const-string v4, "NR"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mRatArray:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 6

    .line 63
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 108
    const-string v0, ""

    const-string v1, "0"

    const-string v2, "1"

    const-string v3, "4"

    const-string v4, "3"

    const-string v5, "5"

    filled-new-array/range {v0 .. v5}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->ratMapping:[Ljava/lang/String;

    .line 110
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    .line 138
    new-instance v0, Lcom/mediatek/engineermode/forceant/ForceTx97$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/forceant/ForceTx97$1;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mATCmdHander:Landroid/os/Handler;

    .line 257
    new-instance v0, Lcom/mediatek/engineermode/forceant/ForceTx97$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/forceant/ForceTx97$2;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTest:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRxView:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTxView:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTextViewTx1:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1402(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Ljava/lang/String;

    .line 63
    sput-object p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesTx:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1502(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Ljava/lang/String;

    .line 63
    sput-object p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesRx:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mForceAntModeSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$502(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 63
    sput p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    return p0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasRatSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$700()I
    .locals 1

    .line 63
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    return v0
.end method

.method static synthetic access$702(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 63
    sput p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    return p0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mAntIndexTxTableRow:Landroid/widget/TableRow;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/forceant/ForceTx97;)Landroid/widget/TableRow;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx97;

    .line 63
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mAntIndexMIMOTableRow:Landroid/widget/TableRow;

    return-object v0
.end method


# virtual methods
.method public execTheCmd()V
    .locals 12

    .line 500
    const-string v0, ""

    .line 501
    .local v0, "tasBand":Ljava/lang/String;
    const-string v1, ""

    .line 502
    .local v1, "tasNvram":Ljava/lang/String;
    const-string v2, ""

    .line 503
    .local v2, "tasStatesTx":Ljava/lang/String;
    const-string v3, ""

    .line 505
    .local v3, "tasStatesRx":Ljava/lang/String;
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    const/4 v5, 0x3

    const/4 v6, 0x2

    if-eqz v4, :cond_0

    if-eq v4, v6, :cond_0

    if-ne v4, v5, :cond_1

    .line 508
    :cond_0
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasBandEdit:Landroid/widget/EditText;

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    sput-object v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    .line 509
    sget-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    .line 510
    const-string v4, ""

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 511
    const-string v4, "By band mode,the band value should not be empty"

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 512
    return-void

    .line 516
    :cond_1
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesTx:Ljava/lang/String;

    .line 517
    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasStatesRx:Ljava/lang/String;

    .line 518
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mForceAntModeSpinner:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v4

    sput v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    .line 519
    if-eqz v4, :cond_2

    if-ne v4, v6, :cond_3

    .line 520
    :cond_2
    const-string v2, ""

    .line 521
    const-string v3, ""

    .line 524
    :cond_3
    sget-object v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    const-string v7, "true"

    invoke-virtual {v4, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    const-string v4, "1"

    goto :goto_0

    :cond_4
    const-string v4, "0"

    :goto_0
    move-object v1, v4

    .line 525
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mtasMode = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ","

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/forceant/ForceTx97;->mModeArray:[Ljava/lang/String;

    sget v9, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    aget-object v8, v8, v9

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v8, "ForceAnt97"

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 526
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "mtasRat = "

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v7, Lcom/mediatek/engineermode/forceant/ForceTx97;->mRatArray:[Ljava/lang/String;

    sget v9, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    add-int/lit8 v9, v9, -0x1

    aget-object v7, v7, v9

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 527
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mtasNvram = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "tasBand = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 529
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mtasStatesTx = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 530
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mtasStatesRx = "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v8, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 532
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->writeTasSettingStates()V

    .line 534
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    if-ne v4, v6, :cond_5

    .line 535
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    invoke-virtual {p0, v4, v0, v2, v3}, Lcom/mediatek/engineermode/forceant/ForceTx97;->queryIndexByStates(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 536
    :cond_5
    if-ne v4, v5, :cond_6

    .line 537
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    invoke-virtual {p0, v4, v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->queryStatesByIndex(ILjava/lang/String;)V

    goto :goto_1

    .line 539
    :cond_6
    sget v6, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    move-object v5, p0

    move-object v8, v2

    move-object v9, v3

    move-object v10, v0

    move-object v11, v1

    invoke-virtual/range {v5 .. v11}, Lcom/mediatek/engineermode/forceant/ForceTx97;->setTasForceIdx(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 541
    :goto_1
    return-void
.end method

.method public getTasSettingStates()V
    .locals 4

    .line 747
    const-string v0, "ForceAnt97"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 749
    .local v2, "tasVersionSh":Landroid/content/SharedPreferences;
    const-string v3, "TasMode"

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    .line 750
    const-string v1, "TasRat"

    const/4 v3, 0x1

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    .line 751
    const-string v1, "TasNvram"

    const-string v3, "true"

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    .line 752
    const-string v1, "TasBand"

    const-string v3, "1"

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    .line 754
    const-string v1, "\ngetTasSettingStates: "

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 755
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasMode = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 756
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasRat = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 757
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasNvram = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 758
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasBand = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 759
    return-void
.end method

.method isTasStatesValid(Landroid/widget/Spinner;)Z
    .locals 2
    .param p1, "mTasAntTxPrx"    # Landroid/widget/Spinner;

    .line 574
    invoke-virtual {p1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x5

    if-eq v0, v1, :cond_1

    .line 575
    invoke-virtual {p1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x6

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 578
    :cond_0
    const/4 v0, 0x1

    return v0

    .line 576
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 475
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnBand:Landroid/widget/Button;

    const/4 v1, 0x1

    const-string v2, "ForceAnt97"

    if-ne p1, v0, :cond_0

    .line 476
    const-string v0, "Set ANT state click by band"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 477
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 478
    const-string v0, "false"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    goto :goto_0

    .line 479
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnRet:Landroid/widget/Button;

    if-ne p1, v0, :cond_1

    .line 480
    const-string v0, "Set ANT state click by ret"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 481
    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 482
    const-string v0, "true"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    goto :goto_0

    .line 483
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    if-ne p1, v0, :cond_3

    .line 484
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    const-string v3, "by_states"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 485
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 486
    const-string v0, "Query ANT index by state click"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 488
    :cond_2
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 489
    const-string v0, "Query ANT state by index click"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 492
    :cond_3
    :goto_0
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    if-ne v0, v1, :cond_4

    .line 493
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->showDialog(I)V

    goto :goto_1

    .line 495
    :cond_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->execTheCmd()V

    .line 497
    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 383
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 384
    const v0, 0x7f080061

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->setContentView(I)V

    .line 385
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mModemType:I

    .line 386
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 387
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "MODE"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    .line 388
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MODE = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ForceAnt97"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    const v1, 0x7f0603bb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mForceAntModeSpinner:Landroid/widget/Spinner;

    .line 391
    const v1, 0x7f0606f8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasRatSpinner:Landroid/widget/Spinner;

    .line 392
    const v1, 0x7f0606f3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasBandEdit:Landroid/widget/EditText;

    .line 394
    const v1, 0x7f0606ee

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTxView:Landroid/widget/TextView;

    .line 395
    const v1, 0x7f0606ec

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRxView:Landroid/widget/TextView;

    .line 396
    const v1, 0x7f0600e0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTextViewTx1:Landroid/widget/TextView;

    .line 398
    const v1, 0x7f0606ed

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    .line 399
    const v1, 0x7f0606eb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    .line 401
    const v1, 0x7f0603e0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    .line 402
    const v1, 0x7f06037d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnBand:Landroid/widget/Button;

    .line 403
    const v1, 0x7f06037e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnRet:Landroid/widget/Button;

    .line 405
    const v1, 0x7f0600df

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableRow;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mAntIndexTxTableRow:Landroid/widget/TableRow;

    .line 406
    const v1, 0x7f0600dd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableRow;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mAntIndexMIMOTableRow:Landroid/widget/TableRow;

    .line 408
    const v1, 0x7f0606f0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    .line 409
    const v1, 0x7f0606f1

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    .line 410
    const v1, 0x7f0606f2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    .line 411
    const v1, 0x7f0606e2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    .line 412
    const v1, 0x7f0606e7

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    .line 413
    const v1, 0x7f0606e8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    .line 415
    const v1, 0x7f0606ef

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTest:Landroid/widget/TextView;

    .line 416
    const v1, 0x7f060004

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntSwitchLabel:Landroid/widget/TextView;

    .line 418
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 419
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnBand:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 420
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mEnableStatesBtnRet:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 422
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mForceAntModeSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 423
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasRatSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 424
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 425
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 426
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I

    .line 776
    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    .line 795
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 778
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 779
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 780
    const-string v1, "Enable force state for all bands and write force state to NVRAM\n"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/forceant/ForceTx97$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/forceant/ForceTx97$3;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx97;)V

    .line 782
    const-string v2, "Confirm"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 791
    const-string v2, "Cancel"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 792
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 778
    return-object v0
.end method

.method public onResume()V
    .locals 7

    .line 430
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 431
    const-string v0, "ForceAnt97"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 432
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getTasSettingStates()V

    .line 434
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mForceAntModeSpinner:Landroid/widget/Spinner;

    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 435
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasRatSpinner:Landroid/widget/Spinner;

    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    sub-int/2addr v2, v3

    invoke-virtual {v1, v2, v3}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 437
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    const-string v2, "by_states"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x2

    const/4 v4, 0x0

    if-eqz v1, :cond_0

    .line 438
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntSwitchLabel:Landroid/widget/TextView;

    const v5, 0x7f0a0334

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getString(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 439
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 440
    sput v3, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 441
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 442
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 443
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 444
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 445
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 446
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 447
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 448
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    goto :goto_0

    .line 449
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryMode:Ljava/lang/String;

    const-string v5, "by_index"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 450
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntSwitchLabel:Landroid/widget/TextView;

    const v5, 0x7f0a0335

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getString(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 451
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 452
    sput v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    .line 453
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 454
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 455
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 456
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 457
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 458
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 459
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 460
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 464
    :cond_1
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mModemType:I

    if-ne v1, v3, :cond_2

    .line 465
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->ratMapping:[Ljava/lang/String;

    const-string v3, "1"

    aput-object v3, v1, v2

    .line 466
    const-string v1, "FDD"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 468
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->ratMapping:[Ljava/lang/String;

    const-string v3, "2"

    aput-object v3, v1, v2

    .line 469
    const-string v1, "tdd"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    :goto_1
    return-void
.end method

.method parseAntIndex(Ljava/lang/String;)I
    .locals 9
    .param p1, "info"    # Ljava/lang/String;

    .line 337
    const-string v0, "255"

    :try_start_0
    const-string v1, ","

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 338
    .local v1, "index":[Ljava/lang/String;
    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_0

    aget-object v5, v1, v4

    .line 339
    .local v5, "value":Ljava/lang/String;
    const-string v6, "ForceAnt97"

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "value = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    .end local v5    # "value":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 342
    :cond_0
    const/4 v2, 0x1

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const/16 v5, 0xa

    if-eqz v4, :cond_1

    .line 343
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 345
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 348
    :goto_1
    const/4 v2, 0x2

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 349
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_2

    .line 351
    :cond_2
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 354
    :goto_2
    const/4 v2, 0x3

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 355
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_3

    .line 357
    :cond_3
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 359
    :goto_3
    const/4 v2, 0x4

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 360
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_4

    .line 362
    :cond_4
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 364
    :goto_4
    const/4 v2, 0x5

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 365
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_5

    .line 367
    :cond_5
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 369
    :goto_5
    const/4 v2, 0x6

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 370
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_6

    .line 372
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setSelection(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 374
    :goto_6
    return v3

    .line 375
    .end local v1    # "index":[Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 376
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, -0x1

    return v1
.end method

.method parseAntStaus(Ljava/lang/String;)I
    .locals 5
    .param p1, "info"    # Ljava/lang/String;

    .line 313
    :try_start_0
    const-string v0, ","

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 314
    .local v0, "state":[Ljava/lang/String;
    const/4 v1, 0x1

    aget-object v1, v0, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 315
    .local v1, "states_tx":I
    const/16 v2, 0x18

    if-ltz v1, :cond_0

    if-ge v1, v2, :cond_0

    .line 316
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    invoke-virtual {v3, v1}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_0

    .line 318
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerTx:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 320
    :goto_0
    array-length v3, v0

    const/4 v4, 0x2

    if-le v3, v4, :cond_2

    .line 321
    aget-object v3, v0, v4

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 322
    .local v3, "states_rx":I
    if-ltz v3, :cond_1

    if-ge v3, v2, :cond_1

    .line 323
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 325
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntStatesSpinnerRx:Landroid/widget/Spinner;

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 328
    .end local v3    # "states_rx":I
    :cond_2
    :goto_1
    const/4 v2, 0x0

    return v2

    .line 329
    .end local v0    # "state":[Ljava/lang/String;
    .end local v1    # "states_tx":I
    :catch_0
    move-exception v0

    .line 330
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, -0x1

    return v1
.end method

.method public queryIndexByStates(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "rat"    # I
    .param p2, "band"    # Ljava/lang/String;
    .param p3, "tasStatesTx"    # Ljava/lang/String;
    .param p4, "tasStatesRx"    # Ljava/lang/String;

    .line 729
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 731
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x5

    if-eq p1, v1, :cond_0

    .line 732
    move-object p4, p3

    .line 734
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+EGMC=1,\"utas_query_ant_port\","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->ratMapping:[Ljava/lang/String;

    aget-object v2, v2, p1

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 736
    const/4 v1, 0x1

    const-string v3, "+EGMC:"

    aput-object v3, v0, v1

    .line 737
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendAtCommand: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v0, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "ForceAnt97"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 738
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTest:Landroid/widget/TextView;

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 739
    const/4 v1, 0x6

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->senAtCommand([Ljava/lang/String;I)V

    .line 740
    return-void
.end method

.method public queryStatesByIndex(ILjava/lang/String;)V
    .locals 18
    .param p1, "rat"    # I
    .param p2, "band"    # Ljava/lang/String;

    .line 583
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/String;

    .line 584
    .local v3, "cmd":[Ljava/lang/String;
    const-string v4, "\"gsm_utas\""

    const-string v5, "\"wcdma_utas\""

    const-string v6, "\"t_utas_query\""

    const-string v7, "\"c2k_utas\""

    const-string v8, "\"l_utas_query\""

    const-string v9, "\"n_utas_query\""

    filled-new-array/range {v4 .. v9}, [Ljava/lang/String;

    move-result-object v4

    .line 589
    .local v4, "configureName":[Ljava/lang/String;
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->ratMapping:[Ljava/lang/String;

    aget-object v5, v5, p1

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    .line 590
    .local v5, "ratIndex":I
    const/4 v6, 0x0

    .line 591
    .local v6, "tx_count":I
    const/16 v7, 0xff

    .line 592
    .local v7, "tasAntTx0":I
    const/16 v8, 0xff

    .line 593
    .local v8, "tasAntTx1":I
    const/16 v9, 0xff

    .line 594
    .local v9, "tasAntPrx":I
    const/16 v10, 0xff

    .line 595
    .local v10, "tasAntDrx":I
    const/16 v11, 0xff

    .line 596
    .local v11, "tasAntMIMO1":I
    const/16 v12, 0xff

    .line 603
    .local v12, "tasAntMIMO2":I
    const-string v14, "AT+EGMC=1,"

    const/4 v15, 0x0

    const-string v2, ","

    if-nez v5, :cond_2

    .line 604
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 606
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v13

    if-nez v13, :cond_0

    .line 607
    const/4 v6, 0x1

    .line 608
    const/4 v10, 0x0

    goto :goto_0

    .line 610
    :cond_0
    const/4 v6, 0x2

    .line 611
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 613
    :goto_0
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v3, v15

    .line 614
    const/4 v13, 0x1

    if-ne v6, v13, :cond_1

    .line 615
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v14, v3, v15

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v15

    goto/16 :goto_5

    .line 617
    :cond_1
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v14, v3, v15

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v15

    goto/16 :goto_5

    .line 620
    :cond_2
    const-string v13, ",1,"

    const/4 v15, 0x1

    if-ne v5, v15, :cond_4

    .line 621
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 623
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_3

    .line 624
    const/4 v6, 0x1

    .line 625
    const/16 v10, 0xff

    .line 626
    const/4 v11, 0x0

    .line 627
    const/4 v12, 0x0

    goto :goto_1

    .line 629
    :cond_3
    const/4 v6, 0x2

    .line 630
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 631
    const/4 v11, 0x0

    .line 632
    const/4 v12, 0x0

    .line 634
    :goto_1
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x0

    aput-object v13, v3, v14

    .line 635
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v3, v14

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v13, 0x0

    aput-object v2, v3, v13

    goto/16 :goto_5

    .line 637
    :cond_4
    const/4 v15, 0x2

    if-ne v5, v15, :cond_6

    .line 638
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 639
    const/4 v6, 0x1

    .line 640
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v13

    if-eqz v13, :cond_5

    .line 641
    const-string v2, "The tdscdma only support 1 path\uff1a prx trx"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 642
    return-void

    .line 644
    :cond_5
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v13, 0x0

    aput-object v2, v3, v13

    goto/16 :goto_5

    .line 646
    :cond_6
    const/4 v15, 0x3

    if-ne v5, v15, :cond_8

    .line 647
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 649
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v13}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v13

    if-nez v13, :cond_7

    .line 650
    const/4 v6, 0x1

    .line 651
    const/16 v10, 0xff

    goto :goto_2

    .line 653
    :cond_7
    const/4 v6, 0x2

    .line 654
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 656
    :goto_2
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x0

    aput-object v13, v3, v14

    .line 657
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v3, v14

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v14

    goto/16 :goto_5

    .line 658
    :cond_8
    const/4 v15, 0x4

    const-string v16, "TasAntMimo1 or TasAntMimo2 should both 255 or not"

    const-string v17, "The mTasAntDrx not be 255 or null in lte mode"

    if-ne v5, v15, :cond_e

    .line 659
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v7

    .line 660
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v8

    .line 661
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 662
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_9

    .line 663
    invoke-static/range {v17 .. v17}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 664
    return-void

    .line 669
    :cond_9
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_a

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_b

    :cond_a
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    .line 670
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_c

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_c

    .line 671
    :cond_b
    invoke-static/range {v16 .. v16}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_3

    .line 672
    :cond_c
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_d

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_d

    .line 673
    const/4 v6, 0x4

    .line 674
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 675
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v11

    .line 676
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v12

    goto :goto_3

    .line 678
    :cond_d
    const/4 v6, 0x2

    .line 679
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 680
    const/4 v11, 0x0

    .line 681
    const/4 v12, 0x0

    .line 683
    :goto_3
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x0

    aput-object v13, v3, v14

    .line 685
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v3, v14

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v13, 0x0

    aput-object v2, v3, v13

    goto/16 :goto_5

    .line 688
    :cond_e
    const/4 v15, 0x5

    if-ne v5, v15, :cond_14

    .line 689
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx0:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v7

    .line 690
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTx1:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v8

    .line 691
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntPrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    .line 692
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_f

    .line 693
    invoke-static/range {v17 .. v17}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 694
    return-void

    .line 699
    :cond_f
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_10

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_11

    :cond_10
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    .line 700
    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_12

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_12

    .line 701
    :cond_11
    invoke-static/range {v16 .. v16}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_4

    .line 702
    :cond_12
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_13

    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx97;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-eqz v15, :cond_13

    .line 703
    const/4 v6, 0x4

    .line 704
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 705
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO1:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v11

    .line 706
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntMIMO2:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v12

    goto :goto_4

    .line 708
    :cond_13
    const/4 v6, 0x2

    .line 709
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    .line 710
    const/4 v11, 0x0

    .line 711
    const/4 v12, 0x0

    .line 713
    :goto_4
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v14, v4, v5

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/4 v14, 0x0

    aput-object v13, v3, v14

    .line 715
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v3, v14

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v13, 0x0

    aput-object v2, v3, v13

    .line 720
    :cond_14
    :goto_5
    const-string v2, "+EGMC:"

    const/4 v13, 0x1

    aput-object v2, v3, v13

    .line 721
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "sendAtCommand: "

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v13, 0x0

    aget-object v14, v3, v13

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v14, "ForceAnt97"

    invoke-static {v14, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 722
    iget-object v2, v0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTest:Landroid/widget/TextView;

    aget-object v13, v3, v13

    invoke-virtual {v2, v13}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 723
    const/4 v2, 0x7

    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/forceant/ForceTx97;->senAtCommand([Ljava/lang/String;I)V

    .line 724
    return-void
.end method

.method public senAtCommand([Ljava/lang/String;I)V
    .locals 1
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 743
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 744
    return-void
.end method

.method public setTasForceIdx(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6
    .param p1, "mode"    # I
    .param p2, "rat"    # I
    .param p3, "tasStatesTx"    # Ljava/lang/String;
    .param p4, "tasStatesRx"    # Ljava/lang/String;
    .param p5, "band"    # Ljava/lang/String;
    .param p6, "nvram_write"    # Ljava/lang/String;

    .line 545
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 548
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, ","

    const/4 v4, 0x5

    if-ne p2, v4, :cond_1

    .line 549
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    const-string v5, "AT+EGMC=1,\"NrForceTxRx\","

    if-nez v4, :cond_0

    .line 550
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, p1, 0x3

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    goto :goto_0

    .line 552
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    .line 553
    :goto_0
    const-string v3, "+EGMC:"

    aput-object v3, v0, v1

    goto :goto_2

    .line 555
    :cond_1
    sget v4, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasModeEnableStates:I

    const-string v5, "AT+ETXANT="

    if-nez v4, :cond_2

    .line 556
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, p1, 0x3

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    goto :goto_1

    .line 558
    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    .line 560
    :goto_1
    const-string v3, "+ETXANT:"

    aput-object v3, v0, v1

    .line 563
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sendAtCommand: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v0, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "ForceAnt97"

    invoke-static {v3, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 564
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx97;->mTasAntTest:Landroid/widget/TextView;

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 565
    invoke-virtual {p0, v0, p1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->senAtCommand([Ljava/lang/String;I)V

    .line 566
    return-void
.end method

.method public writeTasSettingStates()V
    .locals 4

    .line 762
    const-string v0, "ForceAnt97"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx97;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 764
    .local v0, "tasVersionSh":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 766
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasMode:I

    const-string v3, "TasMode"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 767
    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasRat:I

    const-string v3, "TasRat"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 768
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasNvram:Ljava/lang/String;

    const-string v3, "TasNvram"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 769
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx97;->mtasBand:Ljava/lang/String;

    const-string v3, "TasBand"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 770
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 771
    return-void
.end method
