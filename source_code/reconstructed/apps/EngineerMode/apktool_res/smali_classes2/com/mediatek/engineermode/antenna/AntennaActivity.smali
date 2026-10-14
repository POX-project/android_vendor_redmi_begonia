.class public Lcom/mediatek/engineermode/antenna/AntennaActivity;
.super Landroid/app/Activity;
.source "AntennaActivity.java"


# static fields
.field private static final ANT_INDEX_4G:I = 0x0

.field private static final ANT_INDEX_NR:I = 0x1

.field private static final CELL_2RX_LENGTH:I = 0x2

.field private static final CELL_4RX_LENGTH:I = 0x4

.field private static final CMD_INIT_EGMC_4G:Ljava/lang/String; = "AT+EGMC=1,\"rx_path\",1,0,3,15,3,15"

.field private static final CMD_QUERY_EGMC_4G:Ljava/lang/String; = "AT+EGMC=0,\"rx_path\""

.field private static final CMD_QUERY_EGMC_NR:Ljava/lang/String; = "AT+EGMC=0,\"nr_rx_path\""

.field private static final CMD_SET_EGMC_4G:Ljava/lang/String; = "AT+EGMC=1,\"rx_path\""

.field private static final CMD_SET_EGMC_NR:Ljava/lang/String; = "AT+EGMC=1,\"nr_rx_path\""

.field private static final DIALOG_EGMC_SET_FAIL:I = 0x0

.field private static final MODE_2G_COUNT:I = 0x4

.field private static final MODE_EPCM_VALID:I = 0xff

.field private static final MODE_INDEX_BASE_2G:I = 0x14

.field private static final MODE_INDEX_BASE_3G:I = 0xa

.field private static final MSG_CONFIRM_ANTENNA_EGMC_NR:I = 0xa

.field private static final MSG_INIT_ANTENNA_EGMC_4G:I = 0x9

.field private static final MSG_QUERY_ANTENNA_EGMC_4G:I = 0x5

.field private static final MSG_QUERY_ANTENNA_EGMC_NR:I = 0x6

.field private static final MSG_QUERY_ANTENNA_MODE:I = 0x1

.field private static final MSG_QUERY_ANTENNA_MODE_C2K:I = 0x4

.field private static final MSG_SET_ANTENNA_EGMC_4G:I = 0x7

.field private static final MSG_SET_ANTENNA_EGMC_NR:I = 0x8

.field private static final MSG_SET_ANTENNA_MODE:I = 0x2

.field private static final TAG:Ljava/lang/String; = "AntennaActivity"


# instance fields
.field private G95Valid:Z

.field private SfpDisable:Landroid/widget/RadioButton;

.field private SfpEnable:Landroid/widget/RadioButton;

.field private antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

.field private antEgmcModeChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

.field private antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

.field private antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private antennaLayout2G:Landroid/widget/LinearLayout;

.field private antennaLayout4G:Landroid/widget/LinearLayout;

.field private antennaLayoutEgmc:Landroid/widget/LinearLayout;

.field private egmcForceRxMode:Landroid/widget/RadioGroup;

.field private emgcView:I

.field private final mCommandHander:Landroid/os/Handler;

.field private mCurrent2GPos:I

.field private mCurrent3GPos:I

.field private mCurrentPos:I

.field private mCurrentPosCdma:I

.field private final mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mOnClickListener:Landroid/view/View$OnClickListener;

.field private mSpAntSelect:Landroid/widget/Spinner;

.field private mSpinner2G:Landroid/widget/Spinner;

.field private mSpinner3G:Landroid/widget/Spinner;

.field private mSpinner4G:Landroid/widget/Spinner;

.field private mSpinnerC2kMode:Landroid/widget/Spinner;

.field private mToast:Landroid/widget/Toast;

.field private pCell2Rx:[Landroid/widget/CheckBox;

.field private pCell4Rx:[Landroid/widget/CheckBox;

.field private queryEgmcBtn:Landroid/widget/Button;

.field private rxDisable:Landroid/widget/RadioButton;

.field private rxEnable:Landroid/widget/RadioButton;

.field private sCell2Rx:[Landroid/widget/CheckBox;

.field private sCell4Rx:[Landroid/widget/CheckBox;

.field private sccFollowPccMode:Landroid/widget/RadioGroup;

.field private setEgmcBtn:Landroid/widget/Button;


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 71
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 101
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    .line 102
    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    .line 103
    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    .line 104
    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    .line 105
    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    .line 121
    const/4 v1, 0x2

    new-array v2, v1, [Landroid/widget/CheckBox;

    iput-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    .line 122
    const/4 v2, 0x4

    new-array v3, v2, [Landroid/widget/CheckBox;

    iput-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    .line 123
    new-array v1, v1, [Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    .line 124
    new-array v1, v2, [Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    .line 126
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->G95Valid:Z

    .line 128
    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mToast:Landroid/widget/Toast;

    .line 130
    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPos:I

    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPosCdma:I

    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    .line 132
    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    .line 134
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity$1;-><init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    .line 189
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity$2;-><init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCommandHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPos:I

    return v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    iput p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPos:I

    return p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    return v0
.end method

.method static synthetic access$1102(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    iput p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    return p1
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    return-object v0
.end method

.method static synthetic access$1202(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    return-object p1
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryCurrentMode()V

    return-void
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    return-object v0
.end method

.method static synthetic access$1402(Lcom/mediatek/engineermode/antenna/AntennaActivity;Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 71
    iput-object p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    return-object p1
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/LinearLayout;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout2G:Landroid/widget/LinearLayout;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/antenna/AntennaActivity;Ljava/lang/String;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->parseCurrentMode(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->isMode2G(I)Z

    move-result v0

    return v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/antenna/AntennaActivity;Ljava/lang/String;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->parseCurrentCdmaMode(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/antenna/AntennaActivity;ILjava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I
    .param p2, "x2"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->parseCurEgmcMode(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setMode(I)V

    return-void
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/antenna/AntennaActivity;ILjava/lang/String;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I
    .param p2, "x2"    # Ljava/lang/String;

    .line 71
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->confirmCurrentMode(ILjava/lang/String;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    return v0
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    iput p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    return p1
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPosCdma:I

    return v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    iput p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPosCdma:I

    return p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setCdmaMode(I)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/antenna/AntennaActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/antenna/AntennaActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;

    .line 71
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    return v0
.end method

.method static synthetic access$902(Lcom/mediatek/engineermode/antenna/AntennaActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/antenna/AntennaActivity;
    .param p1, "x1"    # I

    .line 71
    iput p1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    return p1
.end method

.method private checkValidEgmcInfo(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Z
    .locals 8
    .param p1, "antEgmcObj"    # Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 791
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 792
    return v0

    .line 793
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    if-nez v1, :cond_1

    .line 794
    nop

    .line 793
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a011e

    .line 794
    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 795
    :cond_1
    nop

    .line 794
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const v2, 0x7f0a0120

    .line 795
    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    :goto_0
    nop

    .line 796
    .local v1, "antEmgcTitle":Ljava/lang/String;
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_2

    .line 797
    return v3

    .line 799
    :cond_2
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v2

    if-eqz v2, :cond_a

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell2Rx()I

    move-result v2

    if-nez v2, :cond_3

    goto/16 :goto_4

    .line 804
    :cond_3
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    if-eqz v2, :cond_9

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell2Rx()I

    move-result v2

    if-nez v2, :cond_4

    goto :goto_3

    .line 809
    :cond_4
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v2

    const/4 v4, 0x7

    if-eq v2, v4, :cond_8

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v2

    const/16 v5, 0xb

    if-eq v2, v5, :cond_8

    .line 810
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v2

    const/16 v6, 0xd

    if-eq v2, v6, :cond_8

    .line 811
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v2

    const/16 v7, 0xe

    if-ne v2, v7, :cond_5

    goto :goto_2

    .line 816
    :cond_5
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    if-eq v2, v4, :cond_7

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    if-eq v2, v5, :cond_7

    .line 817
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    if-eq v2, v6, :cond_7

    .line 818
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    if-ne v2, v7, :cond_6

    goto :goto_1

    .line 823
    :cond_6
    return v3

    .line 819
    :cond_7
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a058e

    .line 820
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 819
    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->showDialog(ILjava/lang/String;Ljava/lang/String;)Landroid/app/Dialog;

    .line 821
    return v0

    .line 812
    :cond_8
    :goto_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a04ca

    .line 813
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 812
    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->showDialog(ILjava/lang/String;Ljava/lang/String;)Landroid/app/Dialog;

    .line 814
    return v0

    .line 805
    :cond_9
    :goto_3
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a058d

    .line 806
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 805
    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->showDialog(ILjava/lang/String;Ljava/lang/String;)Landroid/app/Dialog;

    .line 807
    return v0

    .line 800
    :cond_a
    :goto_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a04c9

    .line 801
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 800
    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->showDialog(ILjava/lang/String;Ljava/lang/String;)Landroid/app/Dialog;

    .line 802
    return v0
.end method

.method private confirmCurrentMode(ILjava/lang/String;)Z
    .locals 11
    .param p1, "ant_index"    # I
    .param p2, "data"    # Ljava/lang/String;

    .line 339
    if-nez p1, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    goto :goto_0

    .line 340
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    :goto_0
    nop

    .line 341
    .local v0, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    const-string v1, "+EGMC:"

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 342
    const-string v2, " "

    const-string v3, ""

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    .line 343
    .local v1, "rxPath":Ljava/lang/String;
    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 344
    .local v4, "origArray":[Ljava/lang/String;
    array-length v5, v4

    const/4 v6, 0x4

    const/4 v7, 0x0

    if-lt v5, v6, :cond_4

    array-length v5, v4

    const/4 v6, 0x7

    if-le v5, v6, :cond_1

    goto/16 :goto_2

    .line 346
    :cond_1
    const/4 v5, 0x6

    new-array v5, v5, [I

    .line 347
    .local v5, "rxDataArray":[I
    array-length v6, v4

    rem-int/lit8 v6, v6, 0x2

    const/4 v8, 0x1

    if-nez v6, :cond_2

    move v6, v7

    goto :goto_1

    :cond_2
    move v6, v8

    .line 349
    .local v6, "start":I
    :goto_1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "confirmCurrentMode: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell2Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 350
    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell2Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 351
    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v2

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 349
    const-string v9, "AntennaActivity"

    invoke-static {v9, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 352
    add-int/lit8 v2, v6, 0x0

    aget-object v2, v4, v2

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell2Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    add-int/lit8 v2, v6, 0x1

    aget-object v2, v4, v2

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    .line 353
    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    add-int/lit8 v2, v6, 0x2

    aget-object v2, v4, v2

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    .line 354
    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell2Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    add-int/lit8 v2, v6, 0x3

    aget-object v2, v4, v2

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    .line 355
    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 356
    return v8

    .line 358
    :cond_3
    return v7

    .line 345
    .end local v5    # "rxDataArray":[I
    .end local v6    # "start":I
    :cond_4
    :goto_2
    return v7
.end method

.method private initEgmcAnt4G()V
    .locals 3

    .line 784
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 785
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+EGMC=1,\"rx_path\",1,0,3,15,3,15"

    aput-object v2, v0, v1

    .line 786
    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    .line 787
    const/16 v1, 0x9

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 788
    return-void
.end method

.method private isMode2G(I)Z
    .locals 2
    .param p1, "mode"    # I

    .line 416
    const/16 v0, 0x14

    if-lt p1, v0, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    .line 417
    invoke-virtual {v1}, Landroid/widget/Spinner;->getCount()I

    move-result v1

    add-int/2addr v1, v0

    const/4 v0, 0x1

    sub-int/2addr v1, v0

    if-ge p1, v1, :cond_0

    .line 418
    return v0

    .line 419
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private isMode3G(I)Z
    .locals 2
    .param p1, "mode"    # I

    .line 423
    const/16 v0, 0x14

    if-lt p1, v0, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    .line 424
    invoke-virtual {v1}, Landroid/widget/Spinner;->getCount()I

    move-result v1

    add-int/2addr v1, v0

    if-ge p1, v1, :cond_0

    .line 425
    const/4 v0, 0x1

    return v0

    .line 426
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private parseCurEgmcMode(ILjava/lang/String;)V
    .locals 13
    .param p1, "ant_index"    # I
    .param p2, "data"    # Ljava/lang/String;

    .line 455
    const-string v0, ""

    const/4 v1, -0x1

    .line 456
    .local v1, "mode":I
    if-nez p1, :cond_0

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    goto :goto_0

    .line 457
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    :goto_0
    nop

    .line 459
    .local v2, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "parseCurEgmcMode data= "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AntennaActivity"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 461
    :try_start_0
    const-string v3, "+EGMC:"

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    invoke-virtual {p2, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    const-string v5, " "

    invoke-virtual {v3, v5, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v3

    .line 462
    .local v3, "rxPath":Ljava/lang/String;
    const-string v5, ","

    invoke-virtual {v3, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    .line 463
    .local v5, "origArray":[Ljava/lang/String;
    array-length v6, v5

    const/4 v7, 0x4

    if-lt v6, v7, :cond_8

    array-length v6, v5

    const/4 v7, 0x7

    if-le v6, v7, :cond_1

    goto/16 :goto_6

    .line 465
    :cond_1
    const/4 v6, 0x6

    new-array v7, v6, [I

    .line 466
    .local v7, "rxDataArray":[I
    array-length v8, v5

    rem-int/lit8 v8, v8, 0x2

    const/4 v9, 0x0

    const/4 v10, 0x1

    if-nez v8, :cond_2

    move v8, v9

    goto :goto_1

    :cond_2
    move v8, v10

    .line 467
    .local v8, "start":I
    :goto_1
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "start: "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ", origArray: "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v4, v11}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 468
    array-length v11, v5

    if-ge v11, v6, :cond_5

    .line 469
    aput v9, v7, v9

    .line 470
    aput v9, v7, v10

    .line 471
    move v6, v8

    .local v6, "i":I
    :goto_2
    array-length v11, v5

    if-ge v6, v11, :cond_4

    .line 472
    aget-object v11, v5, v6

    const-string v12, "0"

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_3

    .line 473
    aput v10, v7, v9

    .line 475
    :cond_3
    array-length v11, v7

    array-length v12, v5

    sub-int/2addr v11, v12

    add-int/2addr v11, v6

    aget-object v12, v5, v6

    .line 476
    invoke-static {v12}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v12

    .line 475
    invoke-virtual {v12}, Ljava/lang/Integer;->intValue()I

    move-result v12

    aput v12, v7, v11

    .line 471
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    .end local v6    # "i":I
    :cond_4
    goto :goto_4

    .line 479
    :cond_5
    move v6, v8

    .restart local v6    # "i":I
    :goto_3
    array-length v9, v5

    if-ge v6, v9, :cond_6

    .line 480
    sub-int v9, v6, v8

    aget-object v10, v5, v6

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v10}, Ljava/lang/Integer;->intValue()I

    move-result v10

    aput v10, v7, v9

    .line 479
    add-int/lit8 v6, v6, 0x1

    goto :goto_3

    .line 483
    .end local v6    # "i":I
    :cond_6
    :goto_4
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v7}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 484
    if-nez v2, :cond_7

    .line 485
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v0, v7}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>([I)V

    move-object v2, v0

    .end local v2    # "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .local v0, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    goto :goto_5

    .line 487
    .end local v0    # "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    .restart local v2    # "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    :cond_7
    invoke-virtual {v2, v7}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->updateAntennaEgmcInfo([I)V

    .line 489
    :goto_5
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 492
    .end local v3    # "rxPath":Ljava/lang/String;
    .end local v5    # "origArray":[Ljava/lang/String;
    .end local v7    # "rxDataArray":[I
    .end local v8    # "start":I
    goto :goto_7

    .line 464
    .restart local v3    # "rxPath":Ljava/lang/String;
    .restart local v5    # "origArray":[Ljava/lang/String;
    :cond_8
    :goto_6
    return-void

    .line 490
    .end local v3    # "rxPath":Ljava/lang/String;
    .end local v5    # "origArray":[Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 491
    .local v0, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Wrong current mode format: "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\n"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 493
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_7
    return-void
.end method

.method private parseCurrentCdmaMode(Ljava/lang/String;)I
    .locals 5
    .param p1, "data"    # Ljava/lang/String;

    .line 431
    const/4 v0, -0x1

    .line 432
    .local v0, "mode":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parseCurrentCdmaMode data= "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AntennaActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 434
    :try_start_0
    const-string v1, "+ERXTESTMODE:"

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    .line 435
    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 434
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 438
    goto :goto_0

    .line 436
    :catch_0
    move-exception v1

    .line 437
    .local v1, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Wrong current mode format: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 440
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    if-ltz v0, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getCount()I

    move-result v1

    if-lt v0, v1, :cond_0

    goto :goto_1

    .line 445
    :cond_0
    iput v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPosCdma:I

    .line 446
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrentCDMAMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPosCdma:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 447
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setSelection(I)V

    .line 448
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 450
    return v0

    .line 441
    :cond_1
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Modem returned invalid mode: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 443
    const/4 v1, -0x1

    return v1
.end method

.method private parseCurrentMode(Ljava/lang/String;)I
    .locals 7
    .param p1, "data"    # Ljava/lang/String;

    .line 364
    const/4 v0, -0x1

    .line 365
    .local v0, "mode":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parseCurrentMode data= "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AntennaActivity"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 368
    :try_start_0
    const-string v1, "+ERXPATH:"

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 371
    goto :goto_0

    .line 369
    :catch_0
    move-exception v1

    .line 370
    .local v1, "e":Ljava/lang/Exception;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Wrong current mode format: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 373
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v1, 0x0

    if-ltz v0, :cond_8

    const/16 v3, 0x18

    const/16 v4, 0xff

    const/16 v5, 0x14

    const/16 v6, 0xa

    if-ge v0, v3, :cond_1

    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    .line 375
    invoke-virtual {v3}, Landroid/widget/Spinner;->getCount()I

    move-result v3

    if-lt v0, v3, :cond_0

    if-lt v0, v6, :cond_1

    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    .line 376
    invoke-virtual {v3}, Landroid/widget/Spinner;->getCount()I

    move-result v3

    add-int/2addr v3, v6

    if-lt v0, v3, :cond_2

    if-ge v0, v5, :cond_2

    :cond_1
    if-eq v0, v4, :cond_2

    goto/16 :goto_2

    .line 381
    :cond_2
    const/16 v3, 0x8

    if-ne v0, v4, :cond_4

    .line 382
    iget-object v4, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    invoke-virtual {v4, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 383
    iget v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    if-nez v3, :cond_3

    .line 384
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->show()V

    .line 385
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 386
    iget-object v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    invoke-virtual {v3, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 388
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrentMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " index is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcAnt4G()V

    goto/16 :goto_1

    .line 391
    :cond_4
    const/4 v4, 0x1

    if-lt v0, v5, :cond_5

    .line 392
    add-int/lit8 v1, v0, -0x14

    add-int/2addr v1, v4

    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    .line 393
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrent2GMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 394
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    iget v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent2GPos:I

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 395
    :cond_5
    if-lt v0, v6, :cond_6

    .line 396
    add-int/lit8 v1, v0, -0xa

    add-int/2addr v1, v4

    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    .line 397
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrent3GMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    iget v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrent3GPos:I

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    goto :goto_1

    .line 400
    :cond_6
    iget v5, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    if-nez v5, :cond_7

    .line 401
    iget-object v5, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    invoke-virtual {v5, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 402
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 403
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 404
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->hide()V

    .line 406
    :cond_7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "parseCurrentLteMode is: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    iput v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCurrentPos:I

    .line 408
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setSelection(I)V

    .line 409
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 412
    :goto_1
    return v0

    .line 377
    :cond_8
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Modem returned invalid mode: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;I)V

    .line 379
    const/4 v1, -0x1

    return v1
.end method

.method private queryCurrentCdmaMode()V
    .locals 3

    .line 934
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 935
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+ERXTESTMODE?"

    aput-object v2, v0, v1

    .line 936
    const/4 v1, 0x1

    const-string v2, "+ERXTESTMODE:"

    aput-object v2, v0, v1

    .line 937
    const/4 v1, 0x2

    const-string v2, "DESTRILD:C2K"

    aput-object v2, v0, v1

    .line 938
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 939
    .local v1, "cmd_s":[Ljava/lang/String;
    const/4 v2, 0x4

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCdmaCommand([Ljava/lang/String;I)V

    .line 940
    return-void
.end method

.method private queryCurrentMode()V
    .locals 2

    .line 929
    const-string v0, "AT+ERXPATH?"

    const-string v1, "+ERXPATH:"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 931
    return-void
.end method

.method private sendCdmaCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 964
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "send cdma cmd: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",command.length = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v1, p1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 966
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCommandHander:Landroid/os/Handler;

    .line 967
    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 966
    const/4 v1, 0x1

    invoke-static {v1, p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 968
    return-void
.end method

.method private sendCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "command"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 958
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendCommand "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 959
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mCommandHander:Landroid/os/Handler;

    .line 960
    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    .line 959
    invoke-static {p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 961
    return-void
.end method

.method private setCdmaMode(I)V
    .locals 3
    .param p1, "mode"    # I

    .line 949
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 950
    .local v0, "cmd":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+ERXTESTMODE="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 951
    const/4 v1, 0x1

    const-string v2, "+ERXTESTMODE:"

    aput-object v2, v0, v1

    .line 952
    const-string v1, "DESTRILD:C2K"

    const/4 v2, 0x2

    aput-object v1, v0, v2

    .line 953
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 954
    .local v1, "cmd_s":[Ljava/lang/String;
    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCdmaCommand([Ljava/lang/String;I)V

    .line 955
    return-void
.end method

.method private setMode(I)V
    .locals 4
    .param p1, "mode"    # I

    .line 943
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Set mode "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AntennaActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 944
    const/4 v0, 0x2

    new-array v1, v0, [Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ERXPATH="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x1

    const-string v3, ""

    aput-object v3, v1, v2

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 946
    return-void
.end method


# virtual methods
.method public confirmEgmcAntNR()V
    .locals 3

    .line 732
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 733
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+EGMC=0,\"nr_rx_path\""

    aput-object v2, v0, v1

    .line 734
    const/4 v1, 0x1

    const-string v2, "+EGMC:"

    aput-object v2, v0, v1

    .line 735
    const/16 v1, 0xa

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 736
    return-void
.end method

.method public initAnt2GView()V
    .locals 2

    .line 900
    const v0, 0x7f0601a3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout2G:Landroid/widget/LinearLayout;

    .line 901
    const v0, 0x7f0606b9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner2G:Landroid/widget/Spinner;

    .line 902
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 903
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout2G:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 904
    return-void
.end method

.method public initAnt3GView()V
    .locals 2

    .line 890
    const v0, 0x7f0606ba

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    .line 891
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 893
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 894
    const v0, 0x7f0601cd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 895
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner3G:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 897
    :cond_0
    return-void
.end method

.method public initAntC2KView()V
    .locals 2

    .line 907
    const v0, 0x7f0606bc

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    .line 908
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 910
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 911
    :cond_0
    const v0, 0x7f0601cf

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 912
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinnerC2kMode:Landroid/widget/Spinner;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 914
    :cond_1
    return-void
.end method

.method public initAntEgmcView()V
    .locals 6

    .line 507
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity$3;-><init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcModeChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    .line 538
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity$4;-><init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    .line 595
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity$5;-><init>(Lcom/mediatek/engineermode/antenna/AntennaActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    .line 621
    const v0, 0x7f0601ca

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcBtn:Landroid/widget/Button;

    .line 622
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 623
    const v0, 0x7f0601cb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setEgmcBtn:Landroid/widget/Button;

    .line 624
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 625
    const v0, 0x7f0603c3

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->egmcForceRxMode:Landroid/widget/RadioGroup;

    .line 626
    const v0, 0x7f060693

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sccFollowPccMode:Landroid/widget/RadioGroup;

    .line 627
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->egmcForceRxMode:Landroid/widget/RadioGroup;

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcModeChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 628
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sccFollowPccMode:Landroid/widget/RadioGroup;

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcModeChangeListener:Landroid/widget/RadioGroup$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 629
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605f8

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 630
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605f9

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    .line 631
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605fa

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v2

    .line 632
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605fb

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v3

    .line 633
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605fc

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v4, 0x2

    aput-object v1, v0, v4

    .line 634
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f0605fd

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    const/4 v5, 0x3

    aput-object v1, v0, v5

    .line 635
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060694

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v2

    .line 636
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060695

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v3

    .line 637
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060696

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v2

    .line 638
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060697

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v3

    .line 639
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060698

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v4

    .line 640
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    const v1, 0x7f060699

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/CheckBox;

    aput-object v1, v0, v5

    .line 641
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    if-ge v0, v4, :cond_0

    .line 642
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 643
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 641
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 645
    .end local v0    # "i":I
    :cond_0
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/4 v1, 0x4

    if-ge v0, v1, :cond_1

    .line 646
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 647
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcStatusChangeListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 645
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 649
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method public initAntLteNrData()V
    .locals 1

    .line 884
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    .line 885
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 886
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 887
    return-void
.end method

.method public initAntLteNrView()V
    .locals 8

    .line 838
    const v0, 0x7f0601a4

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    .line 839
    const v0, 0x7f0601a2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    .line 840
    const v0, 0x7f0606bb

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    .line 841
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 842
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpinner4G:Landroid/widget/Spinner;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 843
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 844
    const v0, 0x7f0606bd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    .line 845
    const v0, 0x7f0603c2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxEnable:Landroid/widget/RadioButton;

    .line 846
    const v0, 0x7f0603c1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxDisable:Landroid/widget/RadioButton;

    .line 847
    const v0, 0x7f060692

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpEnable:Landroid/widget/RadioButton;

    .line 848
    const v0, 0x7f060691

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpDisable:Landroid/widget/RadioButton;

    .line 850
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAntLteNrData()V

    .line 851
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAntEgmcView()V

    .line 852
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v0

    const v3, 0x7f0601ce

    if-nez v0, :cond_0

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isNrSupport()Z

    move-result v0

    if-nez v0, :cond_0

    .line 853
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 854
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 855
    const v0, 0x7f0601c9

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 856
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 857
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    goto/16 :goto_2

    .line 858
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v0

    const v4, 0x7f0a0120

    const v5, 0x7f0a011e

    const/4 v6, 0x1

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isNrSupport()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 859
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    .line 860
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    .line 864
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v7

    invoke-virtual {v7, v5}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v1

    .line 865
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v6

    invoke-direct {v0, p0, v2, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    .line 866
    .local v0, "adapterPattern":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const v2, 0x1090009

    .line 867
    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 868
    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    .line 869
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    invoke-virtual {v1, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 870
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mItemSelectedListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 871
    .end local v0    # "adapterPattern":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    goto :goto_2

    .line 872
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->mSpAntSelect:Landroid/widget/Spinner;

    invoke-virtual {v0, v2}, Landroid/widget/Spinner;->setVisibility(I)V

    .line 873
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isLteSupport()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 874
    :cond_2
    move v1, v6

    :goto_0
    iput v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    .line 875
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 876
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 878
    iget v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    if-nez v2, :cond_3

    move v4, v5

    goto :goto_1

    .line 879
    :cond_3
    nop

    .line 877
    :goto_1
    invoke-virtual {v1, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 876
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 881
    :goto_2
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 497
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 498
    const v0, 0x7f080006

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setContentView(I)V

    .line 500
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAntLteNrView()V

    .line 501
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAnt3GView()V

    .line 502
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAntC2KView()V

    .line 503
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initAnt2GView()V

    .line 504
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 918
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 919
    invoke-direct {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryCurrentMode()V

    .line 920
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v0

    if-nez v0, :cond_0

    .line 921
    invoke-direct {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryCurrentCdmaMode()V

    .line 923
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->emgcView:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isNrSupport()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 924
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->queryEgmcAntNR()V

    .line 926
    :cond_1
    return-void
.end method

.method public queryEgmcAnt4G()V
    .locals 3

    .line 718
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 719
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+EGMC=0,\"rx_path\""

    aput-object v2, v0, v1

    .line 720
    const/4 v1, 0x1

    const-string v2, "+EGMC:"

    aput-object v2, v0, v1

    .line 721
    const/4 v1, 0x5

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 722
    return-void
.end method

.method public queryEgmcAntNR()V
    .locals 3

    .line 725
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 726
    .local v0, "cmd":[Ljava/lang/String;
    const/4 v1, 0x0

    const-string v2, "AT+EGMC=0,\"nr_rx_path\""

    aput-object v2, v0, v1

    .line 727
    const/4 v1, 0x1

    const-string v2, "+EGMC:"

    aput-object v2, v0, v1

    .line 728
    const/4 v1, 0x6

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 729
    return-void
.end method

.method public resetAntEgmcView()V
    .locals 3

    .line 652
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxEnable:Landroid/widget/RadioButton;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 653
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxDisable:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 654
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpEnable:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 655
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpDisable:Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 656
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/4 v2, 0x2

    if-ge v0, v2, :cond_0

    .line 657
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 658
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 656
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 660
    .end local v0    # "i":I
    :cond_0
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/4 v2, 0x4

    if-ge v0, v2, :cond_1

    .line 661
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 662
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 660
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 664
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method public resetAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V
    .locals 3
    .param p1, "antEgmcObj"    # Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 696
    const-string v0, "AntennaActivity"

    const-string v1, "resetAntEgmcView"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 697
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->isShow()Z

    move-result v0

    if-nez v0, :cond_0

    .line 698
    return-void

    .line 699
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 700
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 701
    const v0, 0x7f0603c2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 702
    const v0, 0x7f0603c1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 703
    const v0, 0x7f060692

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    .line 704
    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 705
    const v0, 0x7f060691

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    .line 706
    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 707
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/4 v2, 0x2

    if-ge v0, v2, :cond_1

    .line 708
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 709
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 707
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 711
    .end local v0    # "i":I
    :cond_1
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/4 v2, 0x4

    if-ge v0, v2, :cond_2

    .line 712
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 713
    iget-object v2, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    aget-object v2, v2, v0

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 711
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 715
    .end local v0    # "i":I
    :cond_2
    return-void
.end method

.method public setEgmcAnt4G()V
    .locals 2

    .line 739
    const-string v0, "AntennaActivity"

    const-string v1, "setEgmcAnt4G"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 740
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    if-nez v0, :cond_0

    .line 741
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 742
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v0

    if-nez v0, :cond_1

    .line 743
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->CloseForceRxFor()V

    .line 744
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V

    .line 746
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->initEgmcAnt4G()V

    .line 747
    return-void
.end method

.method public setEgmcAntForUser(I)V
    .locals 7
    .param p1, "ant_index"    # I

    .line 761
    if-nez p1, :cond_0

    const-string v0, "AT+EGMC=1,\"rx_path\""

    goto :goto_0

    .line 762
    :cond_0
    const-string v0, "AT+EGMC=1,\"nr_rx_path\""

    :goto_0
    nop

    .line 763
    .local v0, "antCmd":Ljava/lang/String;
    if-nez p1, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmc4gObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    goto :goto_1

    .line 764
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    :goto_1
    nop

    .line 765
    .local v1, "antEgmcObj":Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->checkValidEgmcInfo(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 766
    return-void

    .line 767
    :cond_2
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    .line 768
    .local v2, "cmd":[Ljava/lang/String;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v3

    const/4 v4, 0x0

    const-string v5, ","

    if-nez v3, :cond_3

    .line 769
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v4

    goto :goto_2

    .line 771
    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getIntForceRx()I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 772
    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getIntCssFollowPcc()I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 773
    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell2Rx()I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getPCell4Rx()I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 774
    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell2Rx()I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 775
    invoke-virtual {v1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getSCell4Rx()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v4

    .line 777
    :goto_2
    const/4 v3, 0x1

    const-string v5, ""

    aput-object v5, v2, v3

    .line 778
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "setEgmcAntForUser : "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v2, v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "AntennaActivity"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 779
    if-nez p1, :cond_4

    const/4 v3, 0x7

    goto :goto_3

    .line 780
    :cond_4
    const/16 v3, 0x8

    .line 779
    :goto_3
    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sendCommand([Ljava/lang/String;I)V

    .line 781
    return-void
.end method

.method public setEgmcAntNR()V
    .locals 2

    .line 750
    const-string v0, "AntennaActivity"

    const-string v1, "setEgmcAntNR"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 751
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    if-nez v0, :cond_0

    .line 752
    new-instance v0, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 753
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v0

    if-nez v0, :cond_1

    .line 754
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->CloseForceRxFor()V

    .line 755
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antEgmcNrObj:Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V

    .line 757
    :cond_1
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->setEgmcAntForUser(I)V

    .line 758
    return-void
.end method

.method protected showDialog(ILjava/lang/String;Ljava/lang/String;)Landroid/app/Dialog;
    .locals 3
    .param p1, "id"    # I
    .param p2, "title"    # Ljava/lang/String;
    .param p3, "info"    # Ljava/lang/String;

    .line 827
    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 833
    return-object v0

    .line 829
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 830
    invoke-virtual {v1, p2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    invoke-virtual {v1, p3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    const v2, 0x104000a

    .line 831
    invoke-virtual {v1, v2, v0}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    move-result-object v0

    .line 829
    return-object v0
.end method

.method public updateAntEgmcView(Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;)V
    .locals 3
    .param p1, "antEgmcObj"    # Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;

    .line 667
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->isShow()Z

    move-result v0

    if-nez v0, :cond_0

    .line 668
    return-void

    .line 669
    :cond_0
    if-nez p1, :cond_1

    .line 670
    invoke-virtual {p0}, Lcom/mediatek/engineermode/antenna/AntennaActivity;->resetAntEgmcView()V

    .line 671
    return-void

    .line 673
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayoutEgmc:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 674
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->antennaLayout4G:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 675
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateAntEgmcView: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 676
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getCssFollowPcc()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 677
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArrayPCell2Rx()[Z

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->toString([Z)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 678
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArraySCell2Rx()[Z

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->toString([Z)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 679
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArrayPCell4Rx()[Z

    move-result-object v2

    invoke-static {v2}, Ljava/util/Arrays;->toString([Z)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 680
    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArraySCell4Rx()[Z

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 675
    const-string v1, "AntennaActivity"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 681
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxEnable:Landroid/widget/RadioButton;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 682
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->rxDisable:Landroid/widget/RadioButton;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getForceRx()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 683
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpEnable:Landroid/widget/RadioButton;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getCssFollowPcc()Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 684
    iget-object v0, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->SfpDisable:Landroid/widget/RadioButton;

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getCssFollowPcc()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 685
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/4 v1, 0x2

    if-ge v0, v1, :cond_2

    .line 686
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell2Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArrayPCell2Rx()[Z

    move-result-object v2

    aget-boolean v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 687
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell2Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArraySCell2Rx()[Z

    move-result-object v2

    aget-boolean v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 685
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 689
    .end local v0    # "i":I
    :cond_2
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/4 v1, 0x4

    if-ge v0, v1, :cond_3

    .line 690
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->pCell4Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArrayPCell4Rx()[Z

    move-result-object v2

    aget-boolean v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 691
    iget-object v1, p0, Lcom/mediatek/engineermode/antenna/AntennaActivity;->sCell4Rx:[Landroid/widget/CheckBox;

    aget-object v1, v1, v0

    invoke-virtual {p1}, Lcom/mediatek/engineermode/antenna/AntennaEgmcInfo;->getBoolArraySCell4Rx()[Z

    move-result-object v2

    aget-boolean v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 689
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 693
    .end local v0    # "i":I
    :cond_3
    return-void
.end method
