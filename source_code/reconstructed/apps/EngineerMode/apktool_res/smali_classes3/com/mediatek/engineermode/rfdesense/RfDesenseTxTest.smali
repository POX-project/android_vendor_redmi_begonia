.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;
.super Landroid/app/Activity;
.source "RfDesenseTxTest.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/AdapterView$OnItemClickListener;
.implements Lcom/mediatek/engineermode/RadioStateManager$RadioListener;


# static fields
.field public static final CDMD_MODE_1X:I = 0x1

.field public static final CDMD_MODE_EVDO:I = 0x2

.field public static final DEFAULT_CDMA_1X_ATCMD:Ljava/lang/String; = "AT+ECRFTX=1,384,0,83,0"

.field public static final DEFAULT_CDMA_EVDO_ATCMD:Ljava/lang/String; = "AT+ERFTX=13,4,384,0,83"

.field public static final DEFAULT_CDMA_EVDO_ATCMD_93before:Ljava/lang/String; = "AT+ERFTX=1,384,0,83,1"

.field public static final DEFAULT_CHECK_LIMIT:I = 0x2

.field public static final DEFAULT_GSM_ATCMD:Ljava/lang/String; = "AT+ERFTX=2,1,190,4100,128,5,6,0"

.field public static final DEFAULT_LTE_FDD_ATCMD:Ljava/lang/String; = "AT+ERFTX=6,0,1,3,3,17475,1,0,0,0,1,0,23"

.field public static final DEFAULT_LTE_TDD_ATCMD:Ljava/lang/String; = "AT+ERFTX=6,0,1,38,3,25950,0,0,0,0,1,0,23"

.field public static final DEFAULT_NR_ATCMD:Ljava/lang/String; = "AT+EGMC=1,\"NrForcedTx\",2,1,20,2"

.field public static final DEFAULT_READBACK_INTREVAL:I = 0x5

.field public static final DEFAULT_TDSCDMA_ATCMD:Ljava/lang/String; = "AT+ERFTX=0,0,1,10087,24"

.field public static final DEFAULT_TEST_COUNT:I = 0x1

.field public static final DEFAULT_TEST_DURATION:I = 0xa

.field public static final DEFAULT_WCDMA_ATCMD:Ljava/lang/String; = "AT+ERFTX=0,0,1,9750,23"

.field private static final DIG_EXIT_TEST_RESET_MD:I = 0x7d2

.field public static final HINT:I = 0x0

.field public static final KEY_CDMA1X_ATCMD_ANT_SWITCH:Ljava/lang/String; = "cdma1x_at_cmd_ant_switch"

.field public static final KEY_CDMA_1X_ATCMD:Ljava/lang/String; = "cdma_at_cmd"

.field public static final KEY_CDMA_EVDO_ATCMD:Ljava/lang/String; = "cdma_evdo_at_cmd"

.field public static final KEY_CHECK_LIMIT:Ljava/lang/String; = "check_limit"

.field public static final KEY_EVDO_ATCMD_ANT_SWITCH:Ljava/lang/String; = "evdo_at_cmd_ant_switch"

.field public static final KEY_GSM_ATCMD:Ljava/lang/String; = "gsm_at_cmd"

.field public static final KEY_GSM_ATCMD_ANT_SWITCH:Ljava/lang/String; = "gsm_at_cmd_ant_switch"

.field public static final KEY_LTE_FDD_ATCMD:Ljava/lang/String; = "lte_fdd_at_cmd"

.field public static final KEY_LTE_TDD_ATCMD:Ljava/lang/String; = "lte_tdd_at_cmd"

.field public static final KEY_NR_ATCMD:Ljava/lang/String; = "nr_at_cmd"

.field public static final KEY_NR_ATCMD_ANT_SWITCH:Ljava/lang/String; = "nr_at_cmd_ant_switch"

.field public static final KEY_READBACK_INTREVAL:Ljava/lang/String; = "readback_interval"

.field public static final KEY_TDSCDMA_ATCMD:Ljava/lang/String; = "tdscdma_at_cmd"

.field public static final KEY_TDSCDMA_ATCMD_ANT_SWITCH:Ljava/lang/String; = "tdscdma_at_cmd_ant_switch"

.field public static final KEY_TEST_COUNT:Ljava/lang/String; = "test_count"

.field public static final KEY_TEST_DURATION:Ljava/lang/String; = "test_duration"

.field public static final KEY_WCDMA_ATCMD:Ljava/lang/String; = "wcdma_at_cmd"

.field public static final KEY_WCDMA_ATCMD_ANT_SWITCH:Ljava/lang/String; = "wcdma_at_cmd_ant_switch"

.field public static final MSG_ANT_SWITCH:I = 0x12

.field public static final MSG_CONTINUE_TX:I = 0x2

.field public static final MSG_ECSRA:I = 0xe

.field public static final MSG_EWMPOLICY_TDSCDMA:I = 0xc

.field public static final MSG_EWMPOLICY_WCDMA:I = 0xd

.field public static final MSG_FORCE_TX_POWER_READ_URC:I = 0x7

.field public static final MSG_NEXT_RAT:I = 0x4

.field public static final MSG_READ_POWER:I = 0xa

.field public static final MSG_START_TX:I = 0x1

.field public static final MSG_START_TX_TEST:I = 0x10

.field public static final MSG_STOP_ALL_TX:I = 0x3

.field public static final MSG_SWITCH_RAT:I = 0x8

.field public static final MSG_SWITCH_RAT_DONE:I = 0xf

.field public static final MSG_TURN_OFF_RF:I = 0x9

.field public static final MSG_TURN_ON_RF:I = 0x6

.field public static final MSG_UPDATE_BUTTON:I = 0x5

.field public static final PREF_FILE:Ljava/lang/String; = "rfdesense_tx_test"

.field public static final RAT_INDEX_CDMA_1X:I = 0x6

.field public static final RAT_INDEX_CDMA_EVDO:I = 0x5

.field public static final RAT_INDEX_GSM:I = 0x0

.field public static final RAT_INDEX_LTE_FDD:I = 0x3

.field public static final RAT_INDEX_LTE_TDD:I = 0x4

.field public static final RAT_INDEX_NR:I = 0x7

.field public static final RAT_INDEX_TDSCDMA:I = 0x1

.field public static final RAT_INDEX_WCDMA:I = 0x2

.field public static final SIM_CARD_INSERT:I = 0x1

.field public static final STATE_NONE:I = 0x0

.field public static final STATE_STARTED:I = 0x1

.field public static final STATE_STOPPED:I = 0x2

.field public static final TAG:Ljava/lang/String; = "RfDesense/TxTest"

.field public static mCheckLimit:J

.field public static mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

.field private static mKeyStates:I

.field public static mRatCmdAntSwitch:[Ljava/lang/String;

.field public static mRatCmdPowerRead:[Ljava/lang/String;

.field public static mRatCmdStart:[Ljava/lang/String;

.field public static mRatCmdStop:[Ljava/lang/String;

.field public static mRatName:[Ljava/lang/String;

.field public static mReadbackInterval:J

.field public static mTestCount:J

.field public static mTestCountSended:J

.field public static mTestDuration:J

.field public static mTestDurationSended:J

.field private static mTestExitStatus:I

.field public static phoneid:I


# instance fields
.field private band1800_1900:[I

.field private band850_900:[I

.field private mEtCheckLimit:Landroid/widget/EditText;

.field private mEtReadbackInterval:Landroid/widget/EditText;

.field private mEtTestCount:Landroid/widget/EditText;

.field private mEtTestDuration:Landroid/widget/EditText;

.field private mExitButton:Landroid/widget/Button;

.field public mFileListAdapter:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;

.field private mGSMBand:[Ljava/lang/String;

.field private final mHandler:Landroid/os/Handler;

.field private mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

.field private mRadioStatesLast:I

.field public mRatBand:[Ljava/lang/String;

.field public mRatList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;",
            ">;"
        }
    .end annotation
.end field

.field public mRatPowerSet:[Ljava/lang/String;

.field private mStartButton:Landroid/widget/Button;

.field private mStopButton:Landroid/widget/Button;

.field private mTvCheckLimit:Landroid/widget/TextView;

.field private mTvReadbackInterval:Landroid/widget/TextView;

.field private mTvTxStatus:Landroid/widget/TextView;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    .line 147
    const-string v0, "GSM"

    const-string v1, "TDSCDMA"

    const-string v2, "WCDMA"

    const-string v3, "LTE(FDD)"

    const-string v4, "LTE(TDD)"

    const-string v5, "CDMA(EVDO)"

    const-string v6, "CDMA(1X)"

    const-string v7, "NR"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    .line 150
    const-string v1, "0"

    const-string v2, "0"

    const-string v3, "0"

    const-string v4, "0"

    const-string v5, "0"

    const-string v6, "0"

    const-string v7, "0"

    const-string v8, "0"

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    .line 152
    const-string v1, "AT+ERFTX=2,1,190,4100,128,5,6,0"

    const-string v2, "AT+ERFTX=0,0,1,10087,24"

    const-string v3, "AT+ERFTX=0,0,1,9750,23"

    const-string v4, "AT+ERFTX=6,0,1,3,3,17475,1,0,0,0,1,0,23"

    const-string v5, "AT+ERFTX=6,0,1,38,3,25950,0,0,0,0,1,0,23"

    const-string v6, "AT+ERFTX=13,4,384,0,83"

    const-string v7, "AT+ECRFTX=1,384,0,83,0"

    const-string v8, "AT+EGMC=1,\"NrForcedTx\",2,1,20,2"

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    .line 157
    const-string v1, "AT+ERFTX=2,0"

    const-string v2, "AT+ERFTX=0,1"

    const-string v3, "AT+ERFTX=0,1"

    const-string v4, "AT+ERFTX=6,0,0"

    const-string v5, "AT+ERFTX=6,0,0"

    const-string v6, "AT+ERFTX=13,5"

    const-string v7, "AT+ECRFTX=0"

    const-string v8, "AT+EGMC=1,\"NrForcedTx\",0"

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStop:[Ljava/lang/String;

    .line 161
    const-string v1, "AT+ERFTX=2,6"

    const-string v2, "AT+ERFTX=0,3"

    const-string v3, "AT+ERFTX=0,3"

    const-string v4, "AT+ERFTX=6,1"

    const-string v5, "AT+ERFTX=6,1"

    const-string v6, "AT+ERFTX=13,3"

    const-string v7, "AT+ERFTX=13,3"

    const-string v8, "AT+EGMC=0,\"NrFetchTxPwr\""

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdPowerRead:[Ljava/lang/String;

    .line 164
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 165
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->phoneid:I

    .line 166
    const-wide/16 v1, 0x0

    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    .line 167
    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    .line 168
    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    .line 169
    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    .line 170
    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    .line 171
    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    .line 172
    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    .line 183
    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    return-void
.end method

.method public constructor <init>()V
    .locals 9

    .line 73
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 173
    const-string v0, ""

    const-string v1, ""

    const-string v2, ""

    const-string v3, ""

    const-string v4, ""

    const-string v5, ""

    const-string v6, ""

    const-string v7, ""

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    .line 174
    const-string v1, ""

    const-string v2, ""

    const-string v3, ""

    const-string v4, ""

    const-string v5, ""

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    .line 175
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mFileListAdapter:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;

    .line 176
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    .line 177
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStatesLast:I

    .line 178
    const/16 v0, 0x14

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->band850_900:[I

    .line 180
    const/16 v0, 0x10

    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->band1800_1900:[I

    .line 182
    const-string v1, "850"

    const-string v2, "P900"

    const-string v3, "E900"

    const-string v4, "R900"

    const-string v5, "1800"

    const-string v6, "1900"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mGSMBand:[Ljava/lang/String;

    .line 209
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    return-void

    :array_0
    .array-data 4
        0x0
        0x0
        0x0
        0x0
        0x0
        0x21
        0x1f
        0x1d
        0x1b
        0x19
        0x17
        0x15
        0x13
        0x11
        0xf
        0xd
        0xb
        0x9
        0x7
        0x5
    .end array-data

    :array_1
    .array-data 4
        0x1e
        0x1c
        0x1a
        0x18
        0x16
        0x14
        0x12
        0x10
        0xe
        0xc
        0xa
        0x8
        0x6
        0x4
        0x2
        0x0
    .end array-data
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mGSMBand:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->band850_900:[I

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;
    .param p1, "x1"    # I

    .line 73
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->txTestStop(I)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->band1800_1900:[I

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;
    .param p1, "x1"    # Ljava/lang/String;

    .line 73
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showTxStatusUI(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I

    .line 73
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->sendAtCommand(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getCurrectRatInfo()Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->updateButtons()V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->updateUIView()V

    return-void
.end method

.method static synthetic access$800()I
    .locals 1

    .line 73
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    return v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private getCurrectRatInfo()Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 2

    .line 574
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 575
    const/4 v0, 0x0

    .local v0, "index":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 576
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCheckState()Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 577
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatSendState()Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 578
    goto :goto_1

    .line 580
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    sput-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 581
    goto :goto_2

    .line 575
    :cond_1
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 584
    :cond_2
    :goto_2
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    return-object v1
.end method

.method private restoreAtCmdState()V
    .locals 15

    .line 730
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 731
    .local v0, "pref":Landroid/content/SharedPreferences;
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    aget-object v3, v2, v1

    const-string v4, "gsm_at_cmd"

    invoke-interface {v0, v4, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    .line 732
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v4, v2, v3

    const-string v5, "tdscdma_at_cmd"

    invoke-interface {v0, v5, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v3

    .line 733
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v4, 0x2

    aget-object v5, v2, v4

    const-string v6, "wcdma_at_cmd"

    invoke-interface {v0, v6, v5}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v4

    .line 734
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v5, 0x3

    aget-object v6, v2, v5

    const-string v7, "lte_fdd_at_cmd"

    invoke-interface {v0, v7, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    aput-object v6, v2, v5

    .line 735
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v6, 0x4

    aget-object v7, v2, v6

    const-string v8, "lte_tdd_at_cmd"

    invoke-interface {v0, v8, v7}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v2, v6

    .line 736
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v7, 0x5

    aget-object v8, v2, v7

    const-string v9, "cdma_evdo_at_cmd"

    invoke-interface {v0, v9, v8}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 737
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v8, 0x6

    aget-object v9, v2, v8

    const-string v10, "cdma_at_cmd"

    invoke-interface {v0, v10, v9}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v2, v8

    .line 738
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const/4 v9, 0x7

    aget-object v10, v2, v9

    const-string v11, "nr_at_cmd"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v9

    .line 740
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v1

    const-string v11, "gsm_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v1

    .line 741
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v3

    const-string v11, "tdscdma_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v3

    .line 742
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v4

    const-string v11, "wcdma_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v4

    .line 743
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v7

    const-string v11, "evdo_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v7

    .line 744
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v8

    const-string v11, "cdma1x_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v8

    .line 745
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v10, v2, v9

    const-string v11, "nr_at_cmd_ant_switch"

    invoke-interface {v0, v11, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v9

    .line 747
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "Band_2G"

    invoke-interface {v0, v11, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v11, ""

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v2, v1

    .line 749
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v10, 0x7f010096

    invoke-virtual {v2, v10}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 751
    .local v2, "mBandValues":[Ljava/lang/String;
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    const-string v12, "Band_TDD_3G"

    invoke-interface {v0, v12, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v12

    aget-object v12, v2, v12

    aput-object v12, v10, v3

    .line 753
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getResources()Landroid/content/res/Resources;

    move-result-object v10

    const v12, 0x7f010085

    invoke-virtual {v10, v12}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 755
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    const-string v12, "Band_FDD_3G"

    invoke-interface {v0, v12, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v12

    aget-object v12, v2, v12

    aput-object v12, v10, v4

    .line 757
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getResources()Landroid/content/res/Resources;

    move-result-object v10

    const v12, 0x7f01008d

    invoke-virtual {v10, v12}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 759
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    const-string v12, "band_fdd"

    invoke-interface {v0, v12, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v12

    aget-object v12, v2, v12

    aput-object v12, v10, v5

    .line 762
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getResources()Landroid/content/res/Resources;

    move-result-object v10

    const v12, 0x7f010090

    invoke-virtual {v10, v12}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v2

    .line 764
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    const-string v12, "band_tdd"

    invoke-interface {v0, v12, v7}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v12

    aget-object v12, v2, v12

    aput-object v12, v10, v6

    .line 767
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Band_evdo_CDMA"

    invoke-interface {v0, v13, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v10, v7

    .line 769
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "Band_1x_CDMA"

    invoke-interface {v0, v13, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v10, v8

    .line 771
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v13, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;->mBandMapping:[I

    const-string v14, "band_nr"

    invoke-interface {v0, v14, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v14

    aget v13, v13, v14

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v10, v9

    .line 774
    iget-object v10, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v11, "Power_2G"

    const-string v12, "5"

    invoke-interface {v0, v11, v12}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v10, v1

    .line 775
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v10, "Power_TDD_3G"

    const-string v11, "24"

    invoke-interface {v0, v10, v11}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v1, v3

    .line 776
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "Power_FDD_3G"

    const-string v10, "23"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v4

    .line 777
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "power_fdd"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v5

    .line 779
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "power_tdd"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v6

    .line 781
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "Power_evdo_CDMA"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v7

    .line 783
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "Power_1x_CDMA"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v8

    .line 785
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    const-string v3, "power_nr"

    invoke-interface {v0, v3, v10}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v9

    .line 787
    return-void
.end method

.method private restoreConfigureState()V
    .locals 4

    .line 790
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 791
    .local v0, "pref":Landroid/content/SharedPreferences;
    const-string v1, "test_duration"

    const-wide/16 v2, 0xa

    invoke-interface {v0, v1, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    .line 792
    const-string v1, "test_count"

    const-wide/16 v2, 0x1

    invoke-interface {v0, v1, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    .line 793
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestDuration:Landroid/widget/EditText;

    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 794
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestCount:Landroid/widget/EditText;

    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 795
    const-string v1, "check_limit"

    const-wide/16 v2, 0x2

    invoke-interface {v0, v1, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    .line 796
    const-string v1, "readback_interval"

    const-wide/16 v2, 0x5

    invoke-interface {v0, v1, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v1

    sput-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    .line 797
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtCheckLimit:Landroid/widget/EditText;

    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 798
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    sget-wide v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 799
    return-void
.end method

.method private saveConfigureState()V
    .locals 4

    .line 802
    const-string v0, "rfdesense_tx_test"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 803
    .local v0, "editor":Landroid/content/SharedPreferences$Editor;
    sget-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    const-string v3, "test_duration"

    invoke-interface {v0, v3, v1, v2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 804
    sget-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    const-string v3, "test_count"

    invoke-interface {v0, v3, v1, v2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 805
    sget-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    const-string v3, "check_limit"

    invoke-interface {v0, v3, v1, v2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 806
    sget-wide v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    const-string v3, "readback_interval"

    invoke-interface {v0, v3, v1, v2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 807
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 808
    return-void
.end method

.method private sendAtCommand(Ljava/lang/String;I)V
    .locals 5
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 680
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    const-string v1, ""

    const/4 v2, 0x0

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-nez v0, :cond_1

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->isSendToCdmaCmd(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 687
    :cond_0
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    aput-object p1, v0, v2

    aput-object v1, v0, v4

    const-string v1, "DESTRILD:C2K"

    aput-object v1, v0, v3

    .line 689
    .local v0, "cmd":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v4, v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    goto :goto_1

    .line 681
    .end local v0    # "cmd":[Ljava/lang/String;
    :cond_1
    :goto_0
    new-array v0, v3, [Ljava/lang/String;

    aput-object p1, v0, v2

    aput-object v1, v0, v4

    .line 682
    .restart local v0    # "cmd":[Ljava/lang/String;
    const-string v1, "AT+EGMC=0,\"NrFetchTxPwr\""

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 683
    const-string v1, "+EGMC:"

    aput-object v1, v0, v4

    .line 685
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 686
    .end local v0    # "cmd":[Ljava/lang/String;
    nop

    .line 691
    :goto_1
    return-void
.end method

.method private setListViewItemsHeight(Landroid/widget/ListView;)V
    .locals 5
    .param p1, "listview"    # Landroid/widget/ListView;

    .line 698
    if-nez p1, :cond_0

    .line 699
    return-void

    .line 701
    :cond_0
    invoke-virtual {p1}, Landroid/widget/ListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    .line 702
    .local v0, "adapter":Landroid/widget/ListAdapter;
    const/4 v1, 0x0

    .line 703
    .local v1, "totalHeight":I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 704
    const/4 v3, 0x0

    invoke-interface {v0, v2, v3, p1}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    .line 705
    .local v3, "itemView":Landroid/view/View;
    const/4 v4, 0x0

    invoke-virtual {v3, v4, v4}, Landroid/view/View;->measure(II)V

    .line 706
    invoke-virtual {v3}, Landroid/view/View;->getMeasuredHeight()I

    move-result v4

    add-int/2addr v1, v4

    .line 703
    .end local v3    # "itemView":Landroid/view/View;
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 708
    .end local v2    # "i":I
    :cond_1
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    invoke-virtual {p1}, Landroid/widget/ListView;->getDividerHeight()I

    move-result v3

    mul-int/2addr v2, v3

    add-int/2addr v1, v2

    .line 709
    invoke-virtual {p1}, Landroid/widget/ListView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 710
    .local v2, "params":Landroid/view/ViewGroup$LayoutParams;
    iput v1, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 711
    invoke-virtual {p1, v2}, Landroid/widget/ListView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 712
    return-void
.end method

.method private setTestParameter()V
    .locals 9

    .line 614
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestDuration:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 615
    .local v0, "TestDuration":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestCount:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 617
    .local v1, "TestCount":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtCheckLimit:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 618
    .local v2, "CheckLimit":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    invoke-virtual {v3}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 620
    .local v3, "ReadbackInterval":Ljava/lang/String;
    const-string v4, ""

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 621
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestDuration:Landroid/widget/EditText;

    const-string v6, "10"

    invoke-virtual {v5, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 622
    const-wide/16 v5, 0xa

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    goto :goto_0

    .line 624
    :cond_0
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-long v5, v5

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    .line 627
    :goto_0
    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 628
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestCount:Landroid/widget/EditText;

    const-string v6, "1"

    invoke-virtual {v5, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 629
    const-wide/16 v5, 0x1

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    goto :goto_1

    .line 631
    :cond_1
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-long v5, v5

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCount:J

    .line 634
    :goto_1
    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 635
    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtCheckLimit:Landroid/widget/EditText;

    const-string v6, "2"

    invoke-virtual {v5, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 636
    const-wide/16 v5, 0x2

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    goto :goto_2

    .line 638
    :cond_2
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-long v5, v5

    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCheckLimit:J

    .line 640
    :goto_2
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const-wide/16 v5, 0x5

    if-eqz v4, :cond_3

    .line 641
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    const/4 v7, 0x5

    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 642
    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    goto :goto_3

    .line 644
    :cond_3
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    int-to-long v7, v4

    sput-wide v7, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    .line 645
    cmp-long v4, v7, v5

    if-gez v4, :cond_4

    .line 646
    sput-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    .line 647
    const-string v4, "mReadbackInterval at least 5s"

    invoke-static {v4}, Lcom/mediatek/engineermode/EmUtils;->showToast(Ljava/lang/String;)V

    .line 648
    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    sget-wide v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 652
    :cond_4
    :goto_3
    sget-wide v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    sget-wide v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDuration:J

    cmp-long v4, v4, v6

    if-lez v4, :cond_5

    .line 653
    sput-wide v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mReadbackInterval:J

    .line 656
    :cond_5
    const-wide/16 v4, 0x0

    sput-wide v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestCountSended:J

    .line 657
    sput-wide v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestDurationSended:J

    .line 658
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->saveConfigureState()V

    .line 659
    return-void
.end method

.method private showTxStatusUI(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 694
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvTxStatus:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->append(Ljava/lang/CharSequence;)V

    .line 695
    return-void
.end method

.method private txTestStop(I)V
    .locals 3
    .param p1, "what"    # I

    .line 603
    sget-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const-string v1, "RfDesense/TxTest"

    if-eqz v0, :cond_0

    .line 604
    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStop()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->sendAtCommand(Ljava/lang/String;I)V

    .line 605
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "stop: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 606
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStop()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 605
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 608
    :cond_0
    const-string v0, "mCurrectRatInfo is null"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 609
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->updateUIView()V

    .line 611
    :goto_0
    return-void
.end method

.method private updateButtons()V
    .locals 5

    .line 715
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v1, v2, :cond_0

    move v1, v4

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 716
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStopButton:Landroid/widget/Button;

    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    if-ne v1, v4, :cond_1

    move v1, v4

    goto :goto_1

    :cond_1
    move v1, v3

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 717
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mExitButton:Landroid/widget/Button;

    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    if-eqz v1, :cond_2

    if-ne v1, v2, :cond_3

    :cond_2
    move v3, v4

    :cond_3
    invoke-virtual {v0, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 718
    return-void
.end method

.method private updateRatInfo()V
    .locals 5

    .line 588
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_2

    .line 589
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 590
    .local v2, "item":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 591
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    aget-object v1, v1, v0

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStart(Ljava/lang/String;)V

    .line 592
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    aget-object v1, v1, v0

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatband(Ljava/lang/String;)V

    .line 593
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    aget-object v1, v1, v0

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatPowerSet(Ljava/lang/String;)V

    .line 594
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v1, v1, v0

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdAntSwitch(Ljava/lang/String;)V

    .line 595
    goto :goto_2

    .line 597
    .end local v2    # "item":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    :cond_0
    goto :goto_1

    .line 588
    :cond_1
    :goto_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 599
    .end local v0    # "i":I
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mFileListAdapter:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;->notifyDataSetInvalidated()V

    .line 600
    return-void
.end method

.method private updateUIView()V
    .locals 4

    .line 721
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    .line 722
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x5

    invoke-static {v0, v1}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v1

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 723
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 725
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 723
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 727
    .end local v0    # "i":I
    :cond_0
    return-void
.end method


# virtual methods
.method exit_test_and_rest_md()V
    .locals 3

    .line 499
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    .line 500
    const/4 v1, 0x0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/EmUtils;->initPoweroffmdMode(ZZ)V

    .line 501
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RadioStateManager;->rebootModem()V

    .line 502
    const-string v0, "RfDesense/TxTest"

    const-string v2, "reboot MD"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 503
    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 504
    const-string v1, "leave AirplaneMode"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 505
    return-void
.end method

.method isRatsChecked()Z
    .locals 3

    .line 559
    const/4 v0, 0x0

    .line 561
    .local v0, "checked":Z
    const/4 v1, 0x0

    .local v1, "index":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 562
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCheckState()Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 563
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCheckState()Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 564
    const/4 v0, 0x1

    .line 565
    goto :goto_1

    .line 561
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 569
    :cond_1
    :goto_1
    return v0
.end method

.method isSendToCdmaCmd(Ljava/lang/String;)Z
    .locals 7
    .param p1, "str"    # Ljava/lang/String;

    .line 662
    sget-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    .line 663
    const-string v0, "AT+EFUN=0"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 664
    return v1

    .line 665
    :cond_0
    const-string v0, "AT+CPOF"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x1

    const-string v3, "send to cdma rat:"

    const-string v4, "RfDesense/TxTest"

    if-eqz v0, :cond_1

    .line 666
    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 667
    return v2

    .line 668
    :cond_1
    const-string v0, "AT+CFUN=1,1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 669
    return v1

    .line 670
    :cond_2
    sget-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v0

    sget-object v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v6, 0x5

    aget-object v5, v5, v6

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 671
    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v0

    sget-object v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v6, 0x6

    aget-object v5, v5, v6

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 672
    :cond_3
    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 673
    return v2

    .line 676
    :cond_4
    return v1
.end method

.method public onBackPressed()V
    .locals 2

    .line 509
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 510
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showDialog(I)V

    goto :goto_0

    .line 512
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "exit ui: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RfDesense/TxTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 513
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    if-nez v0, :cond_1

    .line 514
    const/16 v0, 0x7d2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showDialog(I)V

    goto :goto_0

    .line 515
    :cond_1
    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    .line 516
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->finish()V

    .line 519
    :cond_2
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 523
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mExitButton:Landroid/widget/Button;

    const/4 v1, 0x1

    const-string v2, "RfDesense/TxTest"

    const/4 v3, 0x2

    if-ne p1, v0, :cond_3

    .line 524
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    if-ne v0, v1, :cond_0

    .line 525
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showDialog(I)V

    goto/16 :goto_0

    .line 526
    :cond_0
    if-eq v0, v3, :cond_1

    if-nez v0, :cond_7

    .line 527
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "exit ui: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 528
    sget v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    if-nez v0, :cond_2

    .line 529
    const/16 v0, 0x7d2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showDialog(I)V

    goto :goto_0

    .line 530
    :cond_2
    if-ne v0, v3, :cond_7

    .line 531
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->finish()V

    goto :goto_0

    .line 535
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    if-ne p1, v0, :cond_6

    .line 536
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvTxStatus:Landroid/widget/TextView;

    const-string v3, ""

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 537
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->isRatsChecked()Z

    move-result v0

    if-nez v0, :cond_4

    .line 538
    const-string v0, "you must select at least one rat"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 539
    const-string v0, "you must select at least one rat\n"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showTxStatusUI(Ljava/lang/String;)V

    .line 540
    return-void

    .line 542
    :cond_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->setTestParameter()V

    .line 543
    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    .line 544
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x5

    invoke-static {v0, v1}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 545
    const-string v0, "Start TX: \n"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showTxStatusUI(Ljava/lang/String;)V

    .line 546
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 547
    const-string v0, "Rat(band)          Power_Set   Power_Get    Result\n"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showTxStatusUI(Ljava/lang/String;)V

    .line 550
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x10

    invoke-static {v0, v1}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v1

    const-wide/16 v2, 0x7d0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto :goto_0

    .line 551
    :cond_6
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStopButton:Landroid/widget/Button;

    if-ne p1, v0, :cond_7

    .line 552
    const-string v0, "Stop all"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 553
    sput v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    .line 554
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    invoke-static {v0, v3}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object v1

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 556
    :cond_7
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 11
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 394
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 395
    const v0, 0x7f0800cd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->setContentView(I)V

    .line 396
    const v0, 0x7f06025e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStopButton:Landroid/widget/Button;

    .line 397
    const v0, 0x7f060258

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mExitButton:Landroid/widget/Button;

    .line 398
    const v0, 0x7f06025c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    .line 399
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStopButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 400
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mExitButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 401
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 402
    const v0, 0x7f060715

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestDuration:Landroid/widget/EditText;

    .line 403
    const v0, 0x7f060714

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtTestCount:Landroid/widget/EditText;

    .line 404
    const v0, 0x7f060719

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvTxStatus:Landroid/widget/TextView;

    .line 405
    const v0, 0x7f06028e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtCheckLimit:Landroid/widget/EditText;

    .line 406
    const v0, 0x7f060660

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    .line 407
    const v0, 0x7f06028f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvCheckLimit:Landroid/widget/TextView;

    .line 408
    const v0, 0x7f060661

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvReadbackInterval:Landroid/widget/TextView;

    .line 409
    const v0, 0x7f060533

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    .line 410
    .local v0, "simTypeListView":Landroid/widget/ListView;
    const/4 v1, 0x0

    .line 435
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 410
    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    .line 411
    const/4 v3, -0x1

    invoke-static {v3}, Lcom/mediatek/engineermode/ModemCategory;->isSimReady(I)Z

    move-result v3

    const-string v4, "RfDesense/TxTest"

    const/4 v5, 0x1

    if-eqz v3, :cond_0

    .line 412
    const-string v3, "some card insert"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 413
    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->showDialog(I)V

    .line 415
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v3

    const/4 v6, 0x5

    if-nez v3, :cond_1

    .line 416
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtCheckLimit:Landroid/widget/EditText;

    const/16 v7, 0x8

    invoke-virtual {v3, v7}, Landroid/widget/EditText;->setVisibility(I)V

    .line 417
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mEtReadbackInterval:Landroid/widget/EditText;

    invoke-virtual {v3, v7}, Landroid/widget/EditText;->setVisibility(I)V

    .line 418
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvCheckLimit:Landroid/widget/TextView;

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setVisibility(I)V

    .line 419
    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvReadbackInterval:Landroid/widget/TextView;

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setVisibility(I)V

    .line 420
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    const-string v7, "AT+ERFTX=1,384,0,83,1"

    aput-object v7, v3, v6

    .line 421
    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStop:[Ljava/lang/String;

    const-string v7, "AT+ECRFTX=0"

    aput-object v7, v3, v6

    .line 424
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->restoreAtCmdState()V

    .line 425
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->restoreConfigureState()V

    .line 426
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    sget-object v7, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v7, v7

    const/4 v8, 0x7

    if-ge v3, v7, :cond_7

    .line 427
    new-instance v7, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-direct {v7}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;-><init>()V

    .line 428
    .local v7, "mRatInfo":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatName(Ljava/lang/String;)V

    .line 429
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStart(Ljava/lang/String;)V

    .line 430
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStop:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStop(Ljava/lang/String;)V

    .line 431
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdPowerRead:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatPowerRead(Ljava/lang/String;)V

    .line 432
    iget-object v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatBand:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatband(Ljava/lang/String;)V

    .line 433
    iget-object v9, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatPowerSet:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatPowerSet(Ljava/lang/String;)V

    .line 434
    sget-object v9, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdAntSwitch:[Ljava/lang/String;

    aget-object v9, v9, v3

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdAntSwitch(Ljava/lang/String;)V

    .line 435
    invoke-virtual {v7, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCheckState(Ljava/lang/Boolean;)V

    .line 436
    invoke-virtual {v7, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 438
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v9

    .line 439
    .local v9, "modemType":I
    if-ne v9, v5, :cond_2

    .line 440
    if-ne v3, v5, :cond_3

    .line 441
    goto :goto_1

    .line 442
    :cond_2
    const/4 v10, 0x2

    if-ne v9, v10, :cond_3

    .line 443
    if-ne v3, v10, :cond_3

    .line 444
    goto :goto_1

    .line 447
    :cond_3
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v10

    if-nez v10, :cond_4

    .line 448
    if-eq v3, v6, :cond_6

    const/4 v10, 0x6

    if-ne v3, v10, :cond_4

    .line 449
    goto :goto_1

    .line 451
    :cond_4
    invoke-static {}, Lcom/mediatek/engineermode/RatConfiguration;->isNrSupported()Z

    move-result v10

    if-nez v10, :cond_5

    .line 452
    if-ne v3, v8, :cond_5

    .line 453
    goto :goto_1

    .line 455
    :cond_5
    iget-object v8, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v8, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 426
    .end local v7    # "mRatInfo":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .end local v9    # "modemType":I
    :cond_6
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 457
    .end local v3    # "i":I
    :cond_7
    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-direct {v2, p0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;-><init>(Landroid/content/Context;Ljava/util/ArrayList;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mFileListAdapter:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatAdapter;

    .line 458
    invoke-virtual {v0, v2}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 459
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 460
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->setListViewItemsHeight(Landroid/widget/ListView;)V

    .line 462
    new-instance v2, Lcom/mediatek/engineermode/RadioStateManager;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/RadioStateManager;-><init>(Landroid/app/Activity;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    .line 463
    invoke-virtual {v2, p0}, Lcom/mediatek/engineermode/RadioStateManager;->registerRadioStateChanged(Lcom/mediatek/engineermode/RadioStateManager$RadioListener;)V

    .line 464
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v2

    if-eqz v2, :cond_8

    .line 465
    const-string v2, "registerForTxPower"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 466
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mHandler:Landroid/os/Handler;

    invoke-static {v2, v8}, Lcom/mediatek/engineermode/EmUtils;->registerForTxpowerInfo(Landroid/os/Handler;I)V

    .line 468
    :cond_8
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTvTxStatus:Landroid/widget/TextView;

    const-string v3, ""

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 469
    sput v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mKeyStates:I

    .line 470
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->updateButtons()V

    .line 471
    invoke-static {v5, v5}, Lcom/mediatek/engineermode/EmUtils;->initPoweroffmdMode(ZZ)V

    .line 472
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v2

    if-nez v2, :cond_9

    .line 473
    const-string v2, "turn off rf"

    invoke-static {v4, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 474
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    invoke-virtual {v2, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 475
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v1, v5}, Lcom/mediatek/engineermode/RadioStateManager;->setAirplaneModeEnabled(Z)V

    goto :goto_2

    .line 477
    :cond_9
    const-string v1, "it is in Airplane Mode"

    invoke-static {v4, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    invoke-virtual {v1, v5}, Landroid/widget/Button;->setEnabled(Z)V

    .line 480
    :goto_2
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 842
    const-string v0, "Confirm"

    if-nez p1, :cond_0

    .line 843
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 844
    .local v1, "builder":Landroid/app/AlertDialog$Builder;
    const-string v2, "Hint"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 845
    const-string v3, "Please stop the test first!"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    const/4 v3, 0x0

    .line 846
    invoke-virtual {v2, v0, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 847
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 844
    return-object v0

    .line 848
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_0
    const/4 v1, 0x1

    if-ne p1, v1, :cond_1

    .line 849
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 850
    .restart local v1    # "builder":Landroid/app/AlertDialog$Builder;
    const-string v2, "Notice"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 851
    const-string v3, "Please pull out the sim card before test"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$2;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    .line 852
    invoke-virtual {v2, v0, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 858
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 850
    return-object v0

    .line 860
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_1
    const/16 v1, 0x7d2

    if-ne p1, v1, :cond_2

    .line 861
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 862
    .restart local v1    # "builder":Landroid/app/AlertDialog$Builder;
    const-string v2, "You are leaving the test ui"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    .line 863
    const-string v3, "Please wait until md reset succeed"

    invoke-virtual {v2, v3}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest$3;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;)V

    .line 864
    invoke-virtual {v2, v0, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 870
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 862
    return-object v0

    .line 872
    .end local v1    # "builder":Landroid/app/AlertDialog$Builder;
    :cond_2
    const/16 v0, 0x3e9

    if-ne p1, v0, :cond_3

    .line 873
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RadioStateManager;->getRebootModemDialog()Landroid/app/ProgressDialog;

    move-result-object v0

    return-object v0

    .line 875
    :cond_3
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreateDialog(I)Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method

.method public onDestroy()V
    .locals 2

    .line 492
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRadioStateManager:Lcom/mediatek/engineermode/RadioStateManager;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/RadioStateManager;->unregisterRadioStateChanged()V

    .line 493
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->unregisterForTxpowerInfo()V

    .line 494
    const-string v0, "RfDesense/TxTest"

    const-string v1, "onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 495
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 496
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 7
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 812
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 813
    .local v0, "intent":Landroid/content/Intent;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v1

    .line 814
    .local v1, "item":Ljava/lang/String;
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v3, 0x0

    aget-object v2, v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 815
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestGsm;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto/16 :goto_0

    .line 816
    :cond_0
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x2

    const-string v5, "mModemType"

    if-eqz v2, :cond_1

    .line 817
    invoke-virtual {v0, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 818
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto/16 :goto_0

    .line 819
    :cond_1
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v2, v2, v4

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 820
    invoke-virtual {v0, v5, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 821
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestTd;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 822
    :cond_2
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v6, 0x3

    aget-object v2, v2, v6

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 823
    invoke-virtual {v0, v5, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 824
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 825
    :cond_3
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v6, 0x4

    aget-object v2, v2, v6

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 826
    invoke-virtual {v0, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 827
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestLte;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 828
    :cond_4
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v6, 0x5

    aget-object v2, v2, v6

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 829
    invoke-virtual {v0, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 830
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 831
    :cond_5
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v4, 0x6

    aget-object v2, v2, v4

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 832
    invoke-virtual {v0, v5, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 833
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestCdma;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    goto :goto_0

    .line 834
    :cond_6
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v3, 0x7

    aget-object v2, v2, v3

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 835
    const-class v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTestNR;

    invoke-virtual {v0, p0, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 837
    :cond_7
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->startActivity(Landroid/content/Intent;)V

    .line 838
    return-void
.end method

.method public onRadioPowerOff()V
    .locals 2

    .line 197
    const-string v0, "RfDesense/TxTest"

    const-string v1, "RADIO_POWER_OFF"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mStartButton:Landroid/widget/Button;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 199
    return-void
.end method

.method public onRadioPowerOn()V
    .locals 3

    .line 201
    const-string v0, "RfDesense/TxTest"

    const-string v1, "RADIO_POWER_ON"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 202
    sget v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 203
    const-string v1, "modem reset succeed"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 204
    const/4 v0, 0x2

    sput v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mTestExitStatus:I

    .line 205
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->finish()V

    .line 207
    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 484
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 485
    const-string v0, "RfDesense/TxTest"

    const-string v1, "onResume"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 486
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->restoreAtCmdState()V

    .line 487
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->updateRatInfo()V

    .line 488
    return-void
.end method
