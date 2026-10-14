.class public Lcom/mediatek/engineermode/forceant/ForceTx95;
.super Landroid/app/Activity;
.source "ForceTx95.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# static fields
.field private static final DIG_WARING_WRITE_NVRAM:I = 0x1

.field private static final FORCE_TX_DISABLED_BAND:I = 0x3

.field private static final FORCE_TX_DISABLE_RAT:I = 0x0

.field private static final FORCE_TX_ENABLE_BAND:I = 0x4

.field private static final FORCE_TX_ENABLE_RAT:I = 0x1

.field private static final FORCE_TX_QUERY_BAND:I = 0x5

.field private static final FORCE_TX_QUERY_RAT:I = 0x2

.field private static final FORCE_TX_RAT_C2K:I = 0x4

.field private static final FORCE_TX_RAT_GSM:I = 0x1

.field private static final FORCE_TX_RAT_LTE:I = 0x3

.field private static final FORCE_TX_RAT_UMTS:I = 0x2

.field private static final FORCE_TYPE_BY_BAND:I = 0x1

.field private static final FORCE_TYPE_BY_RAT:I = 0x0

.field private static final QUERY_ANT_INDEX_BY_STATUS:I = 0x6

.field private static final QUERY_ANT_STATUS_BY_INDEX:I = 0x7

.field private static final SHREDPRE_NAME:Ljava/lang/String; = "ForceAnt95"

.field private static final TAG:Ljava/lang/String; = "ForceAnt95"

.field private static final TAS_BAND:Ljava/lang/String; = "TasBand"

.field private static final TAS_MODE:Ljava/lang/String; = "TasMode"

.field private static final TAS_NVRAM:Ljava/lang/String; = "TasNvram"

.field private static final TAS_RAT:Ljava/lang/String; = "TasRat"

.field private static final TAS_TYPE:Ljava/lang/String; = "TasType"

.field private static mForceType:I

.field private static mModeArray:[Ljava/lang/String;

.field private static mRatArray:[Ljava/lang/String;

.field private static mTasModeEnableStates:I

.field private static mTypeArray:[Ljava/lang/String;

.field private static mtasBand:Ljava/lang/String;

.field private static mtasMode:I

.field private static mtasNvram:Ljava/lang/String;

.field private static mtasRat:I

.field private static mtasStates:Ljava/lang/String;


# instance fields
.field private mATCmdHander:Landroid/os/Handler;

.field private mAntIndexDRxTableRow:Landroid/widget/TableRow;

.field private mEnableStatesBtn:Landroid/widget/Button;

.field private mForceAntModeSpinner:Landroid/widget/Spinner;

.field private mForceBandRadioBtn:Landroid/widget/RadioButton;

.field private mForceRatRadioBtn:Landroid/widget/RadioButton;

.field private mQueryIndexOrStatesBtn:Landroid/widget/Button;

.field private mQueryMode:Ljava/lang/String;

.field private mRGForceType:Landroid/widget/RadioGroup;

.field private mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mTasAntDrx:Landroid/widget/Spinner;

.field private mTasAntDrx1:Landroid/widget/Spinner;

.field private mTasAntDrx2:Landroid/widget/Spinner;

.field private mTasAntStatesSpinner:Landroid/widget/Spinner;

.field private mTasAntSwitchLabel:Landroid/widget/TextView;

.field private mTasAntTest:Landroid/widget/TextView;

.field private mTasAntTxPrx:Landroid/widget/Spinner;

.field private mTasBandEdit:Landroid/widget/EditText;

.field private mTasNvramEdit:Landroid/widget/EditText;

.field private mTasRatSpinner:Landroid/widget/Spinner;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 94
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    .line 96
    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    .line 98
    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    .line 99
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    .line 100
    const-string v0, "false"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    .line 101
    const-string v0, "1"

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    .line 102
    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasStates:Ljava/lang/String;

    .line 104
    const-string v0, "by rat"

    const-string v1, "by band"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTypeArray:[Ljava/lang/String;

    .line 105
    const-string v0, "Disable"

    const-string v1, "Enable"

    const-string v2, "Read"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mModeArray:[Ljava/lang/String;

    .line 106
    const-string v0, "GSM"

    const-string v1, "UTMS"

    const-string v2, "LTE"

    const-string v3, "C2K"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mRatArray:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 66
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 107
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    .line 111
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mRGForceType:Landroid/widget/RadioGroup;

    .line 112
    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceRatRadioBtn:Landroid/widget/RadioButton;

    .line 113
    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceBandRadioBtn:Landroid/widget/RadioButton;

    .line 128
    new-instance v0, Lcom/mediatek/engineermode/forceant/ForceTx95$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/forceant/ForceTx95$1;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx95;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mATCmdHander:Landroid/os/Handler;

    .line 223
    new-instance v0, Lcom/mediatek/engineermode/forceant/ForceTx95$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/forceant/ForceTx95$2;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx95;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTest:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasRatSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1200()I
    .locals 1

    .line 66
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    return v0
.end method

.method static synthetic access$1202(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 66
    sput p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    return p0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/TableRow;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mAntIndexDRxTableRow:Landroid/widget/TableRow;

    return-object v0
.end method

.method static synthetic access$1402(Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Ljava/lang/String;

    .line 66
    sput-object p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasStates:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1500()I
    .locals 1

    .line 66
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    return v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceAntModeSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$402(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 66
    sput p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    return p0
.end method

.method static synthetic access$500()I
    .locals 1

    .line 66
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    return v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/forceant/ForceTx95;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/forceant/ForceTx95;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    return-object v0
.end method


# virtual methods
.method public execTheCmd()V
    .locals 11

    .line 425
    const-string v0, ""

    .line 426
    .local v0, "tasBand":Ljava/lang/String;
    const-string v1, ""

    .line 427
    .local v1, "tasNvram":Ljava/lang/String;
    const-string v2, ""

    .line 429
    .local v2, "tasStates":Ljava/lang/String;
    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    .line 430
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    .line 431
    sget-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    .line 432
    const-string v3, ""

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 433
    const-string v3, "By band mode,the band value should not be empty"

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 434
    return-void

    .line 437
    :cond_0
    const-string v0, ""

    .line 440
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceAntModeSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    .line 441
    sget v5, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    const/4 v6, 0x3

    if-ne v5, v4, :cond_2

    move v5, v6

    goto :goto_0

    :cond_2
    const/4 v5, 0x0

    :goto_0
    add-int/2addr v3, v5

    sput v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    .line 443
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasStates:Ljava/lang/String;

    .line 444
    const/4 v5, 0x2

    if-eqz v3, :cond_6

    if-eq v3, v5, :cond_6

    if-eq v3, v6, :cond_6

    const/4 v7, 0x5

    if-ne v3, v7, :cond_3

    goto :goto_1

    .line 447
    :cond_3
    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    if-eq v7, v5, :cond_7

    if-eq v3, v4, :cond_4

    const/4 v7, 0x4

    if-ne v3, v7, :cond_7

    .line 449
    :cond_4
    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasStates:Ljava/lang/String;

    const-string v7, "8"

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_5

    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasStates:Ljava/lang/String;

    const-string v7, "9"

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    .line 450
    :cond_5
    const-string v3, "The ANT states should be 0~7"

    invoke-static {v3}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 451
    return-void

    .line 446
    :cond_6
    :goto_1
    const-string v2, ""

    .line 455
    :cond_7
    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    const-string v7, "true"

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    const-string v3, "1"

    goto :goto_2

    :cond_8
    const-string v3, "0"

    :goto_2
    move-object v1, v3

    .line 456
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mForceType = "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ","

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTypeArray:[Ljava/lang/String;

    sget v9, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    aget-object v8, v8, v9

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v8, "ForceAnt95"

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 457
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "mtasMode = "

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v9, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v9, Lcom/mediatek/engineermode/forceant/ForceTx95;->mModeArray:[Ljava/lang/String;

    .line 458
    sget v10, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    if-ge v10, v6, :cond_9

    goto :goto_3

    :cond_9
    add-int/lit8 v10, v10, -0x3

    :goto_3
    aget-object v6, v9, v10

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 457
    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 460
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mtasRat = "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v6, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v6, Lcom/mediatek/engineermode/forceant/ForceTx95;->mRatArray:[Ljava/lang/String;

    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    sub-int/2addr v7, v4

    aget-object v6, v6, v7

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 461
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mtasNvram = "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 462
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "tasBand = "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 463
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "mtasStates = "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 465
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->writeTasSettingStates()V

    .line 467
    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    if-ne v3, v4, :cond_a

    .line 468
    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    invoke-virtual {p0, v3, v0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx95;->queryIndexByStates(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 469
    :cond_a
    if-ne v3, v5, :cond_b

    .line 470
    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    invoke-virtual {p0, v3, v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->queryStatesByIndex(ILjava/lang/String;)V

    goto :goto_4

    .line 472
    :cond_b
    sget v6, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    sget v7, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    move-object v5, p0

    move-object v8, v2

    move-object v9, v0

    move-object v10, v1

    invoke-virtual/range {v5 .. v10}, Lcom/mediatek/engineermode/forceant/ForceTx95;->setTasForceIdx(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 474
    :goto_4
    return-void
.end method

.method forceTypeUpdate()V
    .locals 5

    .line 664
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    const/4 v1, 0x0

    const-string v2, "false"

    const/4 v3, 0x1

    if-nez v0, :cond_0

    .line 665
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceRatRadioBtn:Landroid/widget/RadioButton;

    invoke-virtual {v0, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 666
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    const-string v4, "true"

    invoke-virtual {v0, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 667
    sput-object v4, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    .line 668
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 669
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    const-string v4, "all band"

    invoke-virtual {v0, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 670
    :cond_0
    if-ne v0, v3, :cond_1

    .line 671
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceBandRadioBtn:Landroid/widget/RadioButton;

    invoke-virtual {v0, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 672
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 673
    sput-object v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    .line 674
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    invoke-virtual {v0, v3}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 675
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    sget-object v4, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    invoke-virtual {v0, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 678
    :cond_1
    :goto_0
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    const/4 v4, 0x2

    if-eq v0, v4, :cond_2

    const/4 v4, 0x5

    if-ne v0, v4, :cond_3

    .line 679
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    const-string v4, ""

    invoke-virtual {v0, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 680
    sput-object v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    .line 683
    :cond_3
    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    if-ne v0, v3, :cond_5

    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    if-eq v0, v3, :cond_4

    const/4 v2, 0x4

    if-ne v0, v2, :cond_5

    .line 685
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    goto :goto_1

    .line 687
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 689
    :goto_1
    return-void
.end method

.method public getTasSettingStates()V
    .locals 4

    .line 634
    const-string v0, "ForceAnt95"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 636
    .local v2, "tasVersionSh":Landroid/content/SharedPreferences;
    const-string v3, "TasType"

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v3

    sput v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    .line 637
    const-string v3, "TasMode"

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    .line 638
    const-string v1, "TasRat"

    const/4 v3, 0x1

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    .line 639
    const-string v1, "TasNvram"

    const-string v3, "true"

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    .line 640
    const-string v1, "TasBand"

    const-string v3, "1"

    invoke-interface {v2, v1, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    .line 642
    const-string v1, "\ngetTasSettingStates: "

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 643
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mForceType = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 644
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasMode = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 645
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasRat = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 646
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasNvram = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 647
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mtasBand = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 648
    return-void
.end method

.method isTasStatesValid(Landroid/widget/Spinner;)Z
    .locals 2
    .param p1, "mTasAntTxPrx"    # Landroid/widget/Spinner;

    .line 498
    invoke-virtual {p1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x5

    if-eq v0, v1, :cond_1

    .line 499
    invoke-virtual {p1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x6

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 502
    :cond_0
    const/4 v0, 0x1

    return v0

    .line 500
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 3
    .param p1, "arg0"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 694
    const v0, 0x7f0603c0

    if-ne p2, v0, :cond_0

    .line 695
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    goto :goto_0

    .line 696
    :cond_0
    const v0, 0x7f0603bc

    if-ne p2, v0, :cond_1

    .line 697
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    .line 699
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "forceTypeChanged, mForceType = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTypeArray:[Ljava/lang/String;

    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ForceAnt95"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 700
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->forceTypeUpdate()V

    .line 701
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 405
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mEnableStatesBtn:Landroid/widget/Button;

    const/4 v1, 0x1

    const-string v2, "ForceAnt95"

    if-ne p1, v0, :cond_0

    .line 406
    const-string v0, "Set ANT States click:."

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    goto :goto_0

    .line 408
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    if-ne p1, v0, :cond_2

    .line 409
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    const-string v3, "by_states"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 410
    sput v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    .line 411
    const-string v0, "Query ANT index by states click."

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 413
    :cond_1
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    .line 414
    const-string v0, "Query ANT states by index click."

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    :cond_2
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    const-string v2, "true"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    sget v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    if-nez v0, :cond_3

    .line 418
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->showDialog(I)V

    goto :goto_1

    .line 420
    :cond_3
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->execTheCmd()V

    .line 422
    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 335
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 336
    const v0, 0x7f080060

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->setContentView(I)V

    .line 337
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 338
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "MODE"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    .line 339
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MODE = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ForceAnt95"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 340
    const v1, 0x7f0603c8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mRGForceType:Landroid/widget/RadioGroup;

    .line 341
    const v1, 0x7f0603c0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceRatRadioBtn:Landroid/widget/RadioButton;

    .line 342
    const v1, 0x7f0603bc

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioButton;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceBandRadioBtn:Landroid/widget/RadioButton;

    .line 343
    const v1, 0x7f0603bb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceAntModeSpinner:Landroid/widget/Spinner;

    .line 344
    const v1, 0x7f0606f8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasRatSpinner:Landroid/widget/Spinner;

    .line 345
    const v1, 0x7f0606f3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasBandEdit:Landroid/widget/EditText;

    .line 346
    const v1, 0x7f0606f6

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    .line 348
    const v1, 0x7f0606e9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    .line 350
    const v1, 0x7f0603e0

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    .line 351
    const v1, 0x7f06037d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mEnableStatesBtn:Landroid/widget/Button;

    .line 353
    const v1, 0x7f0606f2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    .line 354
    const v1, 0x7f0606e2

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    .line 355
    const v1, 0x7f0606e3

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    .line 356
    const v1, 0x7f0606e4

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    .line 358
    const v1, 0x7f0606ef

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTest:Landroid/widget/TextView;

    .line 359
    const v1, 0x7f060004

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntSwitchLabel:Landroid/widget/TextView;

    .line 360
    const v1, 0x7f0600d9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TableRow;

    iput-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mAntIndexDRxTableRow:Landroid/widget/TableRow;

    .line 361
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasNvramEdit:Landroid/widget/EditText;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 362
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 363
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mEnableStatesBtn:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 365
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mRGForceType:Landroid/widget/RadioGroup;

    invoke-virtual {v1, p0}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 366
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceAntModeSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 367
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasRatSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 368
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 369
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I

    .line 705
    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    .line 724
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0

    .line 707
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 708
    const-string v1, "Warning"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 709
    const-string v1, "Enable force state for all bands and write force state to NVRAM\n"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/engineermode/forceant/ForceTx95$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/forceant/ForceTx95$3;-><init>(Lcom/mediatek/engineermode/forceant/ForceTx95;)V

    .line 711
    const-string v2, "Confirm"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const/4 v1, 0x0

    .line 720
    const-string v2, "Cancel"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 721
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 707
    return-object v0
.end method

.method public onResume()V
    .locals 5

    .line 373
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 374
    const-string v0, "ForceAnt95"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 375
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getTasSettingStates()V

    .line 377
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceAntModeSpinner:Landroid/widget/Spinner;

    sget v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    const/4 v2, 0x3

    if-ge v1, v2, :cond_0

    goto :goto_0

    :cond_0
    add-int/lit8 v1, v1, -0x3

    :goto_0
    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 378
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasRatSpinner:Landroid/widget/Spinner;

    sget v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    sub-int/2addr v1, v2

    invoke-virtual {v0, v1, v2}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 380
    invoke-virtual {p0}, Lcom/mediatek/engineermode/forceant/ForceTx95;->forceTypeUpdate()V

    .line 382
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    const-string v1, "by_states"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 383
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntSwitchLabel:Landroid/widget/TextView;

    const v3, 0x7f0a0334

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 384
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 385
    sput v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    .line 386
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 387
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 388
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 389
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 390
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    goto :goto_1

    .line 391
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryMode:Ljava/lang/String;

    const-string v3, "by_index"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 392
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntSwitchLabel:Landroid/widget/TextView;

    const v3, 0x7f0a0335

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 393
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mQueryIndexOrStatesBtn:Landroid/widget/Button;

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 394
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasModeEnableStates:I

    .line 395
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 396
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 397
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 398
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 399
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 401
    :cond_2
    :goto_1
    return-void
.end method

.method parseAntIndex(Ljava/lang/String;)I
    .locals 9
    .param p1, "info"    # Ljava/lang/String;

    .line 302
    const-string v0, "255"

    :try_start_0
    const-string v1, ","

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 303
    .local v1, "index":[Ljava/lang/String;
    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_0

    aget-object v5, v1, v4

    .line 304
    .local v5, "value":Ljava/lang/String;
    const-string v6, "ForceAnt95"

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "value = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    .end local v5    # "value":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 306
    :cond_0
    const/4 v2, 0x2

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const/4 v5, 0x5

    if-eqz v4, :cond_1

    .line 307
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 309
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 311
    :goto_1
    const/4 v2, 0x3

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 312
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_2

    .line 314
    :cond_2
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 316
    :goto_2
    const/4 v2, 0x4

    aget-object v4, v1, v2

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 317
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_3

    .line 319
    :cond_3
    iget-object v4, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    aget-object v2, v1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v4, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 321
    :goto_3
    aget-object v2, v1, v5

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 322
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_4

    .line 324
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    aget-object v2, v1, v5

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setSelection(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 326
    :goto_4
    return v3

    .line 327
    .end local v1    # "index":[Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 328
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, -0x1

    return v1
.end method

.method parseAntStaus(Ljava/lang/String;)I
    .locals 4
    .param p1, "info"    # Ljava/lang/String;

    .line 286
    :try_start_0
    const-string v0, ","

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 287
    .local v0, "states":[Ljava/lang/String;
    const/4 v1, 0x1

    aget-object v1, v0, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 288
    .local v1, "states_value":I
    const/4 v2, 0x6

    if-ltz v1, :cond_0

    if-ge v1, v2, :cond_0

    .line 289
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_0

    .line 291
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntStatesSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setSelection(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 293
    :goto_0
    const/4 v2, 0x0

    return v2

    .line 294
    .end local v0    # "states":[Ljava/lang/String;
    .end local v1    # "states_value":I
    :catch_0
    move-exception v0

    .line 295
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, -0x1

    return v1
.end method

.method public queryIndexByStates(ILjava/lang/String;Ljava/lang/String;)V
    .locals 6
    .param p1, "rat"    # I
    .param p2, "band"    # Ljava/lang/String;
    .param p3, "tasStates"    # Ljava/lang/String;

    .line 619
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 620
    .local v0, "cmd":[Ljava/lang/String;
    const-string v1, ""

    const-string v2, "0"

    const-string v3, "1"

    const-string v4, "4"

    const-string v5, "3"

    filled-new-array {v1, v2, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v1

    .line 621
    .local v1, "ratMapping":[Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+EGMC=1,\"utas_query_ant_port\","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v1, p1

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    .line 623
    const/4 v2, 0x1

    const-string v4, "+EGMC:"

    aput-object v4, v0, v2

    .line 624
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sendAtCommand: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v0, v3

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "ForceAnt95"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 625
    iget-object v2, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTest:Landroid/widget/TextView;

    aget-object v3, v0, v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 626
    const/4 v2, 0x6

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/forceant/ForceTx95;->senAtCommand([Ljava/lang/String;I)V

    .line 627
    return-void
.end method

.method public queryStatesByIndex(ILjava/lang/String;)V
    .locals 19
    .param p1, "rat"    # I
    .param p2, "band"    # Ljava/lang/String;

    .line 507
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/String;

    .line 508
    .local v3, "cmd":[Ljava/lang/String;
    const-string v4, "\"gsm_utas\""

    const-string v5, "\"wcdma_utas\""

    const-string v6, "\"t_utas_query\""

    const-string v7, "\"c2k_utas\""

    const-string v8, "\"l_utas_query\""

    filled-new-array {v4, v5, v6, v7, v8}, [Ljava/lang/String;

    move-result-object v4

    .line 511
    .local v4, "configureName":[Ljava/lang/String;
    const-string v5, ""

    const-string v6, "0"

    const-string v7, "1"

    const-string v8, "4"

    const-string v9, "3"

    filled-new-array {v5, v6, v7, v8, v9}, [Ljava/lang/String;

    move-result-object v5

    .line 512
    .local v5, "ratMapping":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v6

    .line 513
    .local v6, "modemType":I
    const-string v8, "ForceAnt95"

    const/4 v9, 0x1

    if-ne v6, v9, :cond_0

    .line 514
    aput-object v7, v5, v2

    .line 515
    const-string v7, "3G WCDMA"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 517
    :cond_0
    const-string v7, "2"

    aput-object v7, v5, v2

    .line 518
    const-string v7, "3G TDSCDMA"

    invoke-static {v8, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 520
    :goto_0
    aget-object v7, v5, p1

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    .line 521
    .local v7, "ratIndex":I
    const/4 v10, 0x0

    .line 522
    .local v10, "tx_count":I
    const/16 v11, 0xff

    .line 523
    .local v11, "tasAntTxPrx":I
    const/16 v12, 0xff

    .line 524
    .local v12, "tasAntDrx":I
    const/16 v13, 0xff

    .line 525
    .local v13, "tasAntDrx1":I
    const/16 v14, 0xff

    .line 527
    .local v14, "tasAntDrx2":I
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v15}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v15

    if-nez v15, :cond_1

    .line 528
    const-string v2, "The TxPrxshould not be 255 or null"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 529
    return-void

    .line 531
    :cond_1
    iget-object v15, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTxPrx:Landroid/widget/Spinner;

    invoke-virtual {v15}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v11

    .line 532
    const-string v15, "AT+EGMC=1,"

    const/16 v16, 0x0

    const-string v2, ","

    if-nez v7, :cond_4

    .line 533
    add-int/lit8 v11, v11, 0x1

    .line 534
    iget-object v9, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v9

    if-nez v9, :cond_2

    .line 535
    const/4 v9, 0x1

    .line 536
    .end local v10    # "tx_count":I
    .local v9, "tx_count":I
    const/4 v10, 0x0

    move v12, v10

    move v10, v9

    .end local v12    # "tasAntDrx":I
    .local v10, "tasAntDrx":I
    goto :goto_1

    .line 538
    .end local v9    # "tx_count":I
    .local v10, "tx_count":I
    .restart local v12    # "tasAntDrx":I
    :cond_2
    const/4 v9, 0x2

    .line 539
    .end local v10    # "tx_count":I
    .restart local v9    # "tx_count":I
    iget-object v10, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v10}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    const/16 v17, 0x1

    add-int/lit8 v10, v10, 0x1

    move v12, v10

    move v10, v9

    .line 541
    .end local v9    # "tx_count":I
    .restart local v10    # "tx_count":I
    :goto_1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v15, v4, v7

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v3, v16

    .line 542
    const/4 v9, 0x1

    if-ne v10, v9, :cond_3

    .line 543
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v3, v16

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ",,"

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    goto :goto_2

    .line 545
    :cond_3
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v3, v16

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    .line 610
    :goto_2
    move-object/from16 v18, v5

    goto/16 :goto_6

    .line 548
    :cond_4
    const-string v9, ",1,"

    move-object/from16 v18, v5

    const/4 v5, 0x1

    .end local v5    # "ratMapping":[Ljava/lang/String;
    .local v18, "ratMapping":[Ljava/lang/String;
    if-ne v7, v5, :cond_6

    .line 549
    add-int/lit8 v11, v11, 0x1

    .line 550
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 551
    const/4 v5, 0x1

    .line 552
    .end local v10    # "tx_count":I
    .local v5, "tx_count":I
    const/16 v10, 0xff

    .line 553
    .end local v12    # "tasAntDrx":I
    .local v10, "tasAntDrx":I
    const/4 v12, 0x0

    .line 554
    .end local v13    # "tasAntDrx1":I
    .local v12, "tasAntDrx1":I
    const/4 v13, 0x0

    move v14, v13

    move v13, v12

    move v12, v10

    move v10, v5

    .end local v14    # "tasAntDrx2":I
    .local v13, "tasAntDrx2":I
    goto :goto_3

    .line 556
    .end local v5    # "tx_count":I
    .local v10, "tx_count":I
    .local v12, "tasAntDrx":I
    .local v13, "tasAntDrx1":I
    .restart local v14    # "tasAntDrx2":I
    :cond_5
    const/4 v5, 0x2

    .line 557
    .end local v10    # "tx_count":I
    .restart local v5    # "tx_count":I
    iget-object v10, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v10}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    const/16 v17, 0x1

    add-int/lit8 v10, v10, 0x1

    .line 558
    .end local v12    # "tasAntDrx":I
    .local v10, "tasAntDrx":I
    const/4 v12, 0x0

    .line 559
    .end local v13    # "tasAntDrx1":I
    .local v12, "tasAntDrx1":I
    const/4 v13, 0x0

    move v14, v13

    move v13, v12

    move v12, v10

    move v10, v5

    .line 561
    .end local v5    # "tx_count":I
    .local v10, "tx_count":I
    .local v12, "tasAntDrx":I
    .restart local v13    # "tasAntDrx1":I
    :goto_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v15, v4, v7

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v16

    .line 562
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v3, v16

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    goto/16 :goto_6

    .line 564
    :cond_6
    const/4 v5, 0x2

    if-ne v7, v5, :cond_8

    .line 565
    const/4 v10, 0x1

    .line 566
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_7

    .line 567
    const-string v2, "The tdscdma only support 1 path\uff1a prx trx"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 568
    return-void

    .line 570
    :cond_7
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v4, v7

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    goto/16 :goto_6

    .line 572
    :cond_8
    const/4 v5, 0x3

    if-ne v7, v5, :cond_a

    .line 573
    add-int/lit8 v11, v11, 0x1

    .line 574
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-nez v5, :cond_9

    .line 575
    const/4 v5, 0x1

    .line 576
    .end local v10    # "tx_count":I
    .restart local v5    # "tx_count":I
    const/16 v9, 0xff

    move v10, v5

    move v12, v9

    .end local v12    # "tasAntDrx":I
    .local v9, "tasAntDrx":I
    goto :goto_4

    .line 578
    .end local v5    # "tx_count":I
    .end local v9    # "tasAntDrx":I
    .restart local v10    # "tx_count":I
    .restart local v12    # "tasAntDrx":I
    :cond_9
    const/4 v5, 0x2

    .line 579
    .end local v10    # "tx_count":I
    .restart local v5    # "tx_count":I
    iget-object v9, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v9}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v9

    const/4 v10, 0x1

    add-int/2addr v9, v10

    move v10, v5

    move v12, v9

    .line 581
    .end local v5    # "tx_count":I
    .restart local v10    # "tx_count":I
    :goto_4
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v9, v4, v7

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v16

    .line 582
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v3, v16

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    goto/16 :goto_6

    .line 583
    :cond_a
    const/4 v5, 0x4

    if-ne v7, v5, :cond_10

    .line 584
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-nez v5, :cond_b

    .line 585
    const-string v2, "The mTasAntDrx not be 255 or null in lte mode"

    invoke-static {v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 586
    return-void

    .line 588
    :cond_b
    add-int/lit8 v11, v11, 0x1

    .line 589
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_c

    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_d

    :cond_c
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    .line 590
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-nez v5, :cond_e

    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_e

    .line 591
    :cond_d
    const-string v5, "TasAntDrx1 or TasAntDrx2 should both 255 or not"

    invoke-static {v5}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    goto :goto_5

    .line 592
    :cond_e
    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_f

    iget-object v5, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/forceant/ForceTx95;->isTasStatesValid(Landroid/widget/Spinner;)Z

    move-result v5

    if-eqz v5, :cond_f

    .line 593
    const/4 v5, 0x4

    .line 594
    .end local v10    # "tx_count":I
    .restart local v5    # "tx_count":I
    iget-object v10, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v10}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    const/16 v17, 0x1

    add-int/lit8 v10, v10, 0x1

    .line 595
    .end local v12    # "tasAntDrx":I
    .local v10, "tasAntDrx":I
    iget-object v12, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx1:Landroid/widget/Spinner;

    invoke-virtual {v12}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v12

    add-int/lit8 v12, v12, 0x1

    .line 596
    .end local v13    # "tasAntDrx1":I
    .local v12, "tasAntDrx1":I
    iget-object v13, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx2:Landroid/widget/Spinner;

    invoke-virtual {v13}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v13

    add-int/lit8 v13, v13, 0x1

    move v14, v13

    move v13, v12

    move v12, v10

    move v10, v5

    .end local v14    # "tasAntDrx2":I
    .local v13, "tasAntDrx2":I
    goto :goto_5

    .line 592
    .end local v5    # "tx_count":I
    .local v10, "tx_count":I
    .local v12, "tasAntDrx":I
    .local v13, "tasAntDrx1":I
    .restart local v14    # "tasAntDrx2":I
    :cond_f
    const/16 v17, 0x1

    .line 598
    const/4 v5, 0x2

    .line 599
    .end local v10    # "tx_count":I
    .restart local v5    # "tx_count":I
    iget-object v10, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntDrx:Landroid/widget/Spinner;

    invoke-virtual {v10}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v10

    add-int/lit8 v10, v10, 0x1

    .line 600
    .end local v12    # "tasAntDrx":I
    .local v10, "tasAntDrx":I
    const/4 v12, 0x0

    .line 601
    .end local v13    # "tasAntDrx1":I
    .local v12, "tasAntDrx1":I
    const/4 v13, 0x0

    move v14, v13

    move v13, v12

    move v12, v10

    move v10, v5

    .line 603
    .end local v5    # "tx_count":I
    .local v10, "tx_count":I
    .local v12, "tasAntDrx":I
    .restart local v13    # "tasAntDrx1":I
    :goto_5
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v15, v4, v7

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v16

    .line 605
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v3, v16

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v3, v16

    .line 610
    :cond_10
    :goto_6
    const-string v2, "+EGMC:"

    const/4 v5, 0x1

    aput-object v2, v3, v5

    .line 611
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "sendAtCommand: "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v3, v16

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 612
    iget-object v2, v0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTest:Landroid/widget/TextView;

    aget-object v5, v3, v16

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 613
    const/4 v2, 0x7

    invoke-virtual {v0, v3, v2}, Lcom/mediatek/engineermode/forceant/ForceTx95;->senAtCommand([Ljava/lang/String;I)V

    .line 614
    return-void
.end method

.method public senAtCommand([Ljava/lang/String;I)V
    .locals 1
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 630
    iget-object v0, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 631
    return-void
.end method

.method public setTasForceIdx(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6
    .param p1, "mode"    # I
    .param p2, "rat"    # I
    .param p3, "antenna_idx"    # Ljava/lang/String;
    .param p4, "band"    # Ljava/lang/String;
    .param p5, "nvram_write"    # Ljava/lang/String;

    .line 478
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 480
    .local v0, "cmd":[Ljava/lang/String;
    sget v1, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    const-string v2, "AT+ETXANT="

    const/4 v3, 0x1

    const/4 v4, 0x0

    const-string v5, ","

    if-ne v1, v3, :cond_0

    .line 481
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v4

    goto :goto_0

    .line 483
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v4

    .line 486
    :goto_0
    const-string v1, "+ETXANT:"

    aput-object v1, v0, v3

    .line 487
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sendAtCommand: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v0, v4

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ForceAnt95"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 488
    iget-object v1, p0, Lcom/mediatek/engineermode/forceant/ForceTx95;->mTasAntTest:Landroid/widget/TextView;

    aget-object v2, v0, v4

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 489
    invoke-virtual {p0, v0, p1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->senAtCommand([Ljava/lang/String;I)V

    .line 490
    return-void
.end method

.method public writeTasSettingStates()V
    .locals 4

    .line 651
    const-string v0, "ForceAnt95"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/forceant/ForceTx95;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 653
    .local v0, "tasVersionSh":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 655
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mForceType:I

    const-string v3, "TasType"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 656
    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasMode:I

    const-string v3, "TasMode"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 657
    sget v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasRat:I

    const-string v3, "TasRat"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 658
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasNvram:Ljava/lang/String;

    const-string v3, "TasNvram"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 659
    sget-object v2, Lcom/mediatek/engineermode/forceant/ForceTx95;->mtasBand:Ljava/lang/String;

    const-string v3, "TasBand"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 660
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 661
    return-void
.end method
