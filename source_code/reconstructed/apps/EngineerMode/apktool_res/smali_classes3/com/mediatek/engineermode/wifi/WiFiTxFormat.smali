.class public Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiTxFormat.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;,
        Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;,
        Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;,
        Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    }
.end annotation


# static fields
.field private static final DEFAULT_AIFS:I = 0x32

.field private static final DEFAULT_PKT_CNT:I = 0x0

.field private static final DEFAULT_PKT_LENGTH:I = 0x400

.field private static final DEFAULT_POWER:I = 0x16

.field private static final DEFAULT_PRIM_CH:I = 0x0

.field private static final DEFAULT_RU_STA_ID:I = 0x0

.field private static final DUTY_DEFAULT_PKT_CNT:I = 0x64

.field private static final MAX_AIFS:I = 0xff

.field private static final MSG_EVENT_FINISH:I = 0x4

.field private static final MSG_EVENT_GO:I = 0x1

.field private static final MSG_EVENT_STOP:I = 0x2

.field private static final MSG_EVENT_UPDATE_TX_COUNT:I = 0x3

.field private static final MSG_GET_TX_POWER:I = 0x5

.field private static final ONE_SECOND:I = 0x3e8

.field private static final RATE_DCM:Ljava/lang/String; = "DCM"

.field private static final TAG:Ljava/lang/String; = "WifiTX"

.field private static final TX_CMD_START:I = 0x1

.field private static final TX_CMD_STOP:I


# instance fields
.field private mBandValue:I

.field private mBtnGo:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mBwAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mCap11ax:Z

.field private mCap2by2:Z

.field private mCapAntSwap:Z

.field private mCapHwTx:Z

.field private mCbHwTx:Landroid/widget/CheckBox;

.field private mCbWf1:Landroid/widget/CheckBox;

.field private mCbWf2:Landroid/widget/CheckBox;

.field private mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

.field private mChannelAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mDbdcMode:Z

.field private mEtInterPktGap:Landroid/widget/EditText;

.field private mEtPktCnt:Landroid/widget/EditText;

.field private mEtPktLength:Landroid/widget/EditText;

.field private mEtPower:Landroid/widget/EditText;

.field private mEtRuStaId:Landroid/widget/EditText;

.field private mGiAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

.field private mPreambleAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;",
            ">;"
        }
    .end annotation
.end field

.field private mRateAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mRgAnt:Landroid/widget/RadioGroup;

.field private mRgNss:Landroid/widget/RadioGroup;

.field private mRuAllocationAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mRuConfigAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
            ">;"
        }
    .end annotation
.end field

.field private mRuIndexAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mSpCbw:Landroid/widget/Spinner;

.field private mSpCh:Landroid/widget/Spinner;

.field private mSpDbw:Landroid/widget/Spinner;

.field private mSpFec:Landroid/widget/Spinner;

.field private mSpGi:Landroid/widget/Spinner;

.field private mSpMode:Landroid/widget/Spinner;

.field private mSpPreamble:Landroid/widget/Spinner;

.field private mSpPrimCh:Landroid/widget/Spinner;

.field private mSpRate:Landroid/widget/Spinner;

.field private mSpRuAllocation:Landroid/widget/Spinner;

.field private mSpRuConfig:Landroid/widget/Spinner;

.field private mSpRuIndex:Landroid/widget/Spinner;

.field private mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

.field private mTarPktCnt:I

.field private mTestMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

.field private mTestModeAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;",
            ">;"
        }
    .end annotation
.end field

.field private mTvAFactor:Landroid/widget/TextView;

.field private mTvLSig:Landroid/widget/TextView;

.field private mTvLdpcExtraSym:Landroid/widget/TextView;

.field private mTvPeDisa:Landroid/widget/TextView;

.field private mTvTxPe:Landroid/widget/TextView;

.field private mTvTxedCnt:Landroid/widget/TextView;

.field private mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

.field private mTxInfoBand:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

.field private mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

.field private mTxThread:Landroid/os/HandlerThread;

.field private mUiInitDone:Z

.field private mViewRu:Landroid/view/View;

.field private mWfPathListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 93
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    .line 95
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 96
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 97
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    .line 98
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestModeAdapter:Landroid/widget/ArrayAdapter;

    .line 99
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    .line 100
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    .line 101
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    .line 103
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    .line 104
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTarPktCnt:I

    .line 105
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mUiInitDone:Z

    .line 106
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mDbdcMode:Z

    .line 107
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapAntSwap:Z

    .line 108
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap11ax:Z

    .line 109
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap2by2:Z

    .line 110
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapHwTx:Z

    .line 115
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 117
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-direct {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    .line 118
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;->TX_INFO_BAND0:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxInfoBand:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    .line 265
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mWfPathListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;ILcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # I
    .param p2, "x2"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 38
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateParamWithRuConfig(ILcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;)V

    return-void
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    return-object v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->startContinuesTx()V

    return-void
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->startDutyTx()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->startCwToneTx()V

    return-void
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->stopTx()V

    return-void
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxInfoBand:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    return-object v0
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Ljava/lang/String;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # Ljava/lang/String;

    .line 38
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateTxCountView(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTarPktCnt:I

    return v0
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # Z

    .line 38
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setUiEnable(Z)V

    return-void
.end method

.method static synthetic access$2600(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    return-object v0
.end method

.method static synthetic access$2700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .param p2, "x2"    # I

    .line 38
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->ctrlDutyTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    return-void
.end method

.method static synthetic access$2802(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 38
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    return-object p1
.end method

.method static synthetic access$2900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mUiInitDone:Z

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    return-object v0
.end method

.method static synthetic access$3000(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->getTxPower()V

    return-void
.end method

.method static synthetic access$3100(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvTxedCnt:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # I

    .line 38
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateParamWithCbw(I)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->checkIfShowRuUI()V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktCnt:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    .line 38
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
    .param p1, "x1"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 38
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateParamWithPreamble(Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;)V

    return-void
.end method

.method private checkIfShowRuUI()V
    .locals 4

    .line 597
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_TB:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->equals(Ljava/lang/Object;)Z

    move-result v0

    .line 599
    .local v0, "isTB":Z
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->equals(Ljava/lang/Object;)Z

    move-result v1

    .line 602
    .local v1, "isContinousTx":Z
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    if-eqz v0, :cond_0

    if-eqz v1, :cond_0

    const/4 v3, 0x0

    goto :goto_0

    :cond_0
    const/16 v3, 0x8

    :goto_0
    invoke-virtual {v2, v3}, Landroid/view/View;->setVisibility(I)V

    .line 603
    return-void
.end method

.method private ctrlCwToneTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V
    .locals 3
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .param p2, "cmd"    # I

    .line 895
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-static {v0, v1, p2, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcTXTone(IIII)I

    .line 896
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcTXTone:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 898
    return-void
.end method

.method private ctrlDutyTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V
    .locals 8
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .param p2, "cmd"    # I

    .line 886
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    iget v5, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    iget v6, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    iget v7, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    move v1, p2

    invoke-static/range {v0 .. v7}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcContinuousTX(IIIIIIII)I

    .line 889
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcContinuousTX:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 892
    return-void
.end method

.method private get11axInfo()V
    .locals 13

    .line 942
    const/4 v0, 0x1

    new-array v1, v0, [I

    const/4 v2, 0x0

    aput v2, v1, v2

    .line 943
    .local v1, "factorValue":[I
    new-array v3, v0, [I

    aput v2, v3, v2

    move-object v9, v3

    .line 944
    .local v9, "ldpcExtraSys":[I
    new-array v3, v0, [I

    aput v2, v3, v2

    move-object v10, v3

    .line 945
    .local v10, "peDisamp":[I
    new-array v3, v0, [I

    aput v2, v3, v2

    move-object v11, v3

    .line 946
    .local v11, "txPe":[I
    new-array v0, v0, [I

    aput v2, v0, v2

    .line 947
    .local v0, "lSig":[I
    const-string v12, "WifiTX"

    const-string v3, "start hqaGetAFactor"

    invoke-static {v12, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 948
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    move-object v4, v1

    move-object v5, v9

    move-object v6, v10

    move-object v7, v11

    move-object v8, v0

    invoke-static/range {v3 .. v8}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaGetAFactor(I[I[I[I[I[I)I

    move-result v3

    if-nez v3, :cond_0

    .line 950
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "hqaGetAFactor:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v5, v1, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v5, v9, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v5, v10, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v5, v11, v2

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v4, v0, v2

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v12, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 952
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvAFactor:Landroid/widget/TextView;

    aget v4, v1, v2

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 953
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvLdpcExtraSym:Landroid/widget/TextView;

    aget v4, v9, v2

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 954
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvPeDisa:Landroid/widget/TextView;

    aget v4, v10, v2

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 955
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvTxPe:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    aget v5, v11, v2

    mul-int/lit8 v5, v5, 0x4

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "us"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 956
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvLSig:Landroid/widget/TextView;

    aget v2, v0, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 959
    :cond_0
    return-void
.end method

.method private getPowerUpdateParam()Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .locals 8

    .line 159
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Lcom/mediatek/engineermode/wifi/WiFiTxFormat$1;)V

    .line 160
    .local v0, "param":Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v2

    aget-object v1, v1, v2

    .line 161
    .local v1, "channel":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->getId()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    .line 162
    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->is5G()Z

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    .line 163
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eqz v2, :cond_1

    .line 164
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x3

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    goto :goto_1

    .line 166
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 167
    iput v4, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    .line 170
    :cond_2
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mCbwIndex:I

    .line 171
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    .line 172
    const/4 v2, 0x0

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    .line 174
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 177
    goto :goto_2

    .line 175
    :catch_0
    move-exception v2

    .line 176
    .local v2, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 179
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :goto_2
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapRate()Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    .line 181
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 182
    .local v2, "preambleConfig":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "preambleConfig:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v6}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 183
    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getIndex()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 182
    const-string v6, "WifiTX"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 184
    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getIndex()I

    move-result v5

    iput v5, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    .line 186
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpGi:Landroid/widget/Spinner;

    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    .line 187
    .local v5, "strGi":Ljava/lang/String;
    invoke-virtual {v2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getGiList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v6

    iput v6, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mGiIndex:I

    .line 188
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    invoke-virtual {v6}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v6

    const v7, 0x7f06084e

    if-ne v6, v7, :cond_3

    goto :goto_3

    :cond_3
    move v3, v4

    :goto_3
    iput v3, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    .line 189
    return-object v0
.end method

.method private getTxParam()Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .locals 3

    .line 193
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->getPowerUpdateParam()Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    move-result-object v0

    .line 195
    .local v0, "param":Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    const/16 v1, 0x400

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    .line 197
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktLength:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 200
    goto :goto_0

    .line 198
    :catch_0
    move-exception v1

    .line 199
    .local v1, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v1}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 201
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    const/16 v1, 0x16

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    .line 203
    :try_start_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1

    const/high16 v2, 0x40000000    # 2.0f

    mul-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    .line 206
    goto :goto_1

    .line 204
    :catch_1
    move-exception v1

    .line 205
    .restart local v1    # "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v1}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 209
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpFec:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    .line 210
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v1

    const v2, 0x7f060843

    if-ne v1, v2, :cond_0

    .line 211
    const/4 v1, 0x0

    goto :goto_2

    :cond_0
    const/4 v1, 0x1

    :goto_2
    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mAntIndex:I

    .line 212
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mInterPktGap:I

    .line 213
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbHwTx:Landroid/widget/CheckBox;

    invoke-virtual {v1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v1

    iput v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mHwTx:I

    .line 214
    return-object v0
.end method

.method private getTxPower()V
    .locals 7

    .line 829
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->getPowerUpdateParam()Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    move-result-object v0

    .line 830
    .local v0, "powerParam":Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->isPowerParamValid()Z

    move-result v1

    const-string v2, "WifiTX"

    if-nez v1, :cond_0

    .line 831
    const-string v1, "get power param invalid"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 832
    return-void

    .line 834
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 835
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setChannel(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 836
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-nez v1, :cond_1

    .line 837
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setRuSettings(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 839
    :cond_1
    iget v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetPreamble(I)I

    .line 840
    iget v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetRate(I)I

    .line 841
    iget v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    invoke-static {v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetNss(I)I

    .line 842
    iget v1, v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaGetTxPower(II)I

    move-result v1

    .line 843
    .local v1, "power":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "power get:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 844
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPower:Landroid/widget/EditText;

    int-to-double v3, v1

    const-wide/high16 v5, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v3, v5

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 845
    return-void
.end method

.method private initComponent()V
    .locals 13

    .line 276
    const v0, 0x7f060855

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    .line 277
    const v0, 0x7f060856

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    .line 278
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 279
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mWfPathListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 280
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mWfPathListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 281
    const v0, 0x7f060850

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    .line 282
    const v2, 0x7f06084e

    invoke-virtual {v0, v2}, Landroid/widget/RadioGroup;->check(I)V

    .line 283
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v2}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 294
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap2by2:Z

    const v2, 0x7f06084f

    const v3, 0x7f060857

    const/16 v4, 0x8

    if-nez v0, :cond_0

    .line 295
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 296
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 298
    :cond_0
    const v0, 0x7f060845

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    .line 299
    const v5, 0x7f060843

    invoke-virtual {v0, v5}, Landroid/widget/RadioGroup;->check(I)V

    .line 301
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapAntSwap:Z

    if-nez v0, :cond_1

    .line 302
    const v0, 0x7f060844

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 304
    :cond_1
    const v0, 0x7f060842

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    .line 305
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v5, 0x1090008

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 306
    const v6, 0x1090009

    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 307
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    array-length v7, v0

    const/4 v8, 0x0

    move v9, v8

    :goto_0
    if-ge v9, v7, :cond_2

    aget-object v10, v0, v9

    .line 308
    .local v10, "ch":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    iget-object v11, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/wifi/ChannelDataFormat;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 307
    .end local v10    # "ch":Lcom/mediatek/engineermode/wifi/ChannelDataFormat;
    add-int/lit8 v9, v9, 0x1

    goto :goto_0

    .line 310
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 311
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    invoke-virtual {v0, v8, v8}, Landroid/widget/Spinner;->setSelection(IZ)V

    .line 312
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$3;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 328
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    .line 329
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 330
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getMapBw()Ljava/util/LinkedHashMap;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v7

    invoke-virtual {v0, v7}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 331
    const v0, 0x7f060846

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    .line 332
    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 349
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 351
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getBW20Index()I

    move-result v7

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setSelection(I)V

    .line 352
    const v0, 0x7f060848

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpDbw:Landroid/widget/Spinner;

    .line 353
    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 355
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpDbw:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getBW20Index()I

    move-result v7

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setSelection(I)V

    .line 356
    const v0, 0x7f060812

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    .line 357
    const v0, 0x7f060853

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    .line 358
    const v0, 0x7f06082d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    .line 359
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestModeAdapter:Landroid/widget/ArrayAdapter;

    .line 360
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 361
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestModeAdapter:Landroid/widget/ArrayAdapter;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->values()[Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    move-result-object v7

    invoke-virtual {v0, v7}, Landroid/widget/ArrayAdapter;->addAll([Ljava/lang/Object;)V

    .line 362
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestModeAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 363
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$5;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 387
    const v0, 0x7f060852

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    .line 388
    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$6;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 407
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 409
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 410
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    iget-boolean v9, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap11ax:Z

    invoke-virtual {v7, v1, v9}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getPreambleConfig(ZZ)Ljava/util/ArrayList;

    move-result-object v7

    invoke-virtual {v0, v7}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 411
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 413
    const v0, 0x7f06082e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    .line 414
    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$7;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 441
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 442
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 443
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 445
    const v0, 0x7f06082c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpGi:Landroid/widget/Spinner;

    .line 446
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    .line 447
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 448
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpGi:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 450
    const v0, 0x7f06085d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    .line 451
    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$8;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 471
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    .line 472
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 473
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 475
    const v0, 0x7f06085c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuAllocation:Landroid/widget/Spinner;

    .line 476
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    .line 477
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 478
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuAllocation:Landroid/widget/Spinner;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 479
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuAllocation:Landroid/widget/Spinner;

    new-instance v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$9;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$9;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v7}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 493
    const v0, 0x7f06085e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    .line 494
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v5}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    .line 495
    invoke-virtual {v0, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 496
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 498
    const v0, 0x7f06082b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpFec:Landroid/widget/Spinner;

    .line 499
    const v0, 0x7f060811

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktLength:Landroid/widget/EditText;

    .line 500
    const/16 v5, 0x400

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 501
    const v0, 0x7f060810

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktCnt:Landroid/widget/EditText;

    .line 502
    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 503
    const v0, 0x7f060851

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPower:Landroid/widget/EditText;

    .line 504
    const/16 v5, 0x16

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 505
    const v0, 0x7f06086e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtRuStaId:Landroid/widget/EditText;

    .line 506
    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 507
    const v0, 0x7f060814

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvLSig:Landroid/widget/TextView;

    .line 508
    const v0, 0x7f060815

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvLdpcExtraSym:Landroid/widget/TextView;

    .line 509
    const v0, 0x7f060816

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvPeDisa:Landroid/widget/TextView;

    .line 510
    const v0, 0x7f060813

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvAFactor:Landroid/widget/TextView;

    .line 511
    const v0, 0x7f060817

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvTxPe:Landroid/widget/TextView;

    .line 512
    const v0, 0x7f060847

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTvTxedCnt:Landroid/widget/TextView;

    .line 514
    const v0, 0x7f060849

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnGo:Landroid/widget/Button;

    .line 515
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 516
    const v0, 0x7f060854

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnStop:Landroid/widget/Button;

    .line 517
    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 518
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mDbdcMode:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap2by2:Z

    if-nez v0, :cond_4

    .line 519
    :cond_3
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    .line 520
    .local v0, "wfView":Landroid/view/View;
    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 521
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v2

    .line 522
    .local v2, "nssView":Landroid/view/View;
    invoke-virtual {v2, v4}, Landroid/view/View;->setVisibility(I)V

    .line 524
    .end local v0    # "wfView":Landroid/view/View;
    .end local v2    # "nssView":Landroid/view/View;
    :cond_4
    const v0, 0x7f06084d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    .line 525
    const/16 v2, 0x32

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 526
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$10;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$10;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;)V

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    .line 548
    const v0, 0x7f06084a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbHwTx:Landroid/widget/CheckBox;

    .line 549
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapHwTx:Z

    if-nez v0, :cond_5

    .line 550
    const v0, 0x7f06084c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 551
    const v0, 0x7f06084b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/view/View;->setVisibility(I)V

    .line 553
    :cond_5
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setUiEnable(Z)V

    .line 554
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mUiInitDone:Z

    .line 555
    const-string v0, "WifiTX"

    const-string v1, "init done"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 556
    return-void
.end method

.method private isPowerParamValid()Z
    .locals 2

    .line 820
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 821
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    if-ltz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    .line 822
    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    if-ltz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 821
    :goto_0
    return v1

    .line 825
    :cond_1
    return v1
.end method

.method private setChannel(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V
    .locals 10
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    .line 799
    iget v0, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetTxPath(II)I

    .line 800
    iget v0, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetRxPath(II)I

    .line 801
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaSetTxPath:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "WifiTX"

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 802
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaSetRxPath:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 803
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapAntSwap:Z

    if-eqz v0, :cond_0

    .line 804
    iget v0, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mAntIndex:I

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetAntSwap(I)I

    .line 805
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaSetAntSwap:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mAntIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 807
    :cond_0
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    const/4 v5, 0x0

    iget v6, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mCbwIndex:I

    iget v7, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    iget v8, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    iget v9, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    invoke-static/range {v3 .. v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcSetChannel(IIIIIII)I

    .line 809
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaDbdcSetChannel:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mCbwIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mDbwIndex:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPrimCh:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 812
    return-void
.end method

.method private setRuSettings(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V
    .locals 14
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    .line 856
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 857
    .local v0, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    const/4 v1, 0x0

    .line 859
    .local v1, "stad":I
    :try_start_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtRuStaId:Landroid/widget/EditText;

    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v2

    .line 862
    goto :goto_0

    .line 860
    :catch_0
    move-exception v2

    .line 861
    .local v2, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 863
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getIndex()I

    move-result v4

    .line 864
    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getAllocation()I

    move-result v5

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    .line 865
    invoke-virtual {v6}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v7

    iget v8, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    iget v9, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    iget v10, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    const/4 v11, 0x1

    iget v12, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    iget v13, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    .line 863
    move v6, v1

    invoke-static/range {v3 .. v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetRUSettings(IIIIIIIIIII)I

    .line 867
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hqaSetRUSettings:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getIndex()I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 868
    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getAllocation()I

    move-result v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    .line 869
    invoke-virtual {v5}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x1

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 867
    const-string v3, "WifiTX"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 872
    return-void
.end method

.method private setTxContent(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V
    .locals 2
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    .line 815
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcSetTXContent(II)I

    .line 816
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcSetTXContent:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPktLength:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 817
    return-void
.end method

.method private setTxPower(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V
    .locals 5
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    .line 848
    iget v0, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-static {v0, v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetTxPowerExt(IIIII)I

    .line 850
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaSetTxPowerExt:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChID:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mChannelType:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 853
    return-void
.end method

.method private setUiEnable(Z)V
    .locals 4
    .param p1, "enable"    # Z

    .line 760
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    invoke-virtual {v0, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 761
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 762
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 763
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 764
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 765
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpCbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 766
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 767
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 768
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 769
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 770
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpGi:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 771
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 772
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuAllocation:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 773
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 774
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpFec:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 775
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktLength:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 776
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 777
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktCnt:Landroid/widget/EditText;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    goto :goto_0

    .line 779
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 781
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPower:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 782
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtRuStaId:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 783
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 784
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 785
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    invoke-virtual {v0, p1}, Landroid/widget/RadioGroup;->setEnabled(Z)V

    .line 786
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 787
    .local v0, "nssCnt":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_1
    if-ge v1, v0, :cond_1

    .line 788
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgNss:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 787
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 790
    .end local v1    # "k":I
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v1}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v1

    .line 791
    .local v1, "antCnt":I
    const/4 v2, 0x0

    .local v2, "k":I
    :goto_2
    if-ge v2, v1, :cond_2

    .line 792
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRgAnt:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v2}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 791
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 794
    .end local v2    # "k":I
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    invoke-virtual {v2, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 795
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbHwTx:Landroid/widget/CheckBox;

    invoke-virtual {v2, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 796
    return-void
.end method

.method private startContinuesTx()V
    .locals 5

    .line 900
    const-string v0, "WifiTX"

    const-string v1, "startContinuesTx"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 901
    const-string v0, ""

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateTxCountView(Ljava/lang/String;)V

    .line 902
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setChannel(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 903
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setTxContent(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 904
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setTxPower(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 905
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 906
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setRuSettings(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 908
    :cond_0
    const/4 v0, 0x0

    .line 910
    .local v0, "pktCnt":I
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 913
    goto :goto_0

    .line 911
    :catch_0
    move-exception v1

    .line 912
    .local v1, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v1}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 914
    .end local v1    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->startTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 915
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 916
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mViewRu:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-nez v1, :cond_1

    .line 917
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->get11axInfo()V

    .line 919
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    const/4 v2, 0x3

    const-wide/16 v3, 0x3e8

    invoke-virtual {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 920
    return-void
.end method

.method private startCwToneTx()V
    .locals 2

    .line 935
    const-string v0, "NA"

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateTxCountView(Ljava/lang/String;)V

    .line 936
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setChannel(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 937
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->ctrlCwToneTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 938
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CW_TONE:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 939
    return-void
.end method

.method private startDutyTx()V
    .locals 4

    .line 923
    const-string v0, ""

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateTxCountView(Ljava/lang/String;)V

    .line 924
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setChannel(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 925
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setTxContent(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 926
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setTxPower(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;)V

    .line 927
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    const/16 v1, 0x64

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->startTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 930
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 931
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    const/4 v1, 0x3

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessageDelayed(IJ)Z

    .line 932
    return-void
.end method

.method private startTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V
    .locals 11
    .param p1, "param"    # Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;
    .param p2, "pktCnt"    # I

    .line 875
    iput p2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTarPktCnt:I

    .line 876
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    iget v3, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    iget v4, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    iget v5, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    iget v6, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mInterPktGap:I

    iget v7, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mGiIndex:I

    iget v8, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    iget v9, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    iget v10, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mHwTx:I

    move v1, p2

    invoke-static/range {v0 .. v10}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcStartTX(IIIIIIIIIII)I

    .line 879
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcStartTX:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPreambleIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mRateIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mPower:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mFecIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mInterPktGap:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mGiIndex:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mWfSelect:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mNssValue:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;->mHwTx:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 883
    return-void
.end method

.method private stopTx()V
    .locals 4

    .line 710
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    if-nez v0, :cond_0

    .line 711
    return-void

    .line 713
    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$12;->$SwitchMap$com$mediatek$engineermode$wifi$WiFiTxFormat$TXTestMode:[I

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const/4 v2, 0x3

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    const/4 v3, 0x0

    if-eq v0, v1, :cond_2

    if-eq v0, v2, :cond_1

    .line 726
    return-void

    .line 723
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->ctrlCwToneTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 724
    goto :goto_0

    .line 720
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->ctrlDutyTx(Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;I)V

    .line 721
    goto :goto_0

    .line 715
    :cond_3
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-static {v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaDbdcStopTX(I)I

    .line 716
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "hqaDbdcStopTX:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 717
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->removeMessages(I)V

    .line 718
    nop

    .line 728
    :goto_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mStopMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 729
    return-void
.end method

.method private updateParamWithCbw(I)V
    .locals 4
    .param p1, "index"    # I

    .line 574
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getRuConfig(I)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 575
    .local v0, "ruConfig":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;"
    if-eqz v0, :cond_2

    .line 576
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v1

    .line 577
    .local v1, "oldSelection":I
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->clear()V

    .line 578
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 579
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 580
    if-ltz v1, :cond_1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v2

    if-lt v1, v2, :cond_0

    goto :goto_0

    .line 589
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuConfigAdapter:Landroid/widget/ArrayAdapter;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 590
    .local v2, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    invoke-direct {p0, p1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->updateParamWithRuConfig(ILcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;)V

    goto :goto_1

    .line 584
    .end local v2    # "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    :cond_1
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuConfig:Landroid/widget/Spinner;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 594
    .end local v1    # "oldSelection":I
    :cond_2
    :goto_1
    return-void
.end method

.method private updateParamWithPreamble(Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;)V
    .locals 4
    .param p1, "config"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 560
    invoke-virtual {p1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getRateList()[Ljava/lang/String;

    move-result-object v0

    .line 561
    .local v0, "rateList":[Ljava/lang/String;
    invoke-virtual {p1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getGiList()Ljava/util/List;

    move-result-object v1

    .line 562
    .local v1, "giList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->clear()V

    .line 563
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v1}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 564
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mGiAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 565
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpGi:Landroid/widget/Spinner;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 566
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->clear()V

    .line 567
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v0}, Landroid/widget/ArrayAdapter;->addAll([Ljava/lang/Object;)V

    .line 568
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 569
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRate:Landroid/widget/Spinner;

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 570
    return-void
.end method

.method private updateParamWithRuConfig(ILcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;)V
    .locals 7
    .param p1, "cbwIndex"    # I
    .param p2, "config"    # Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 606
    if-eqz p2, :cond_1

    .line 607
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 608
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "0x"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getAllocation()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 609
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuAllocationAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 610
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuAllocation:Landroid/widget/Spinner;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 611
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 612
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mParamConfig:Lcom/mediatek/engineermode/wifi/WifiFormatConfig;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->getRuConfig(I)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 613
    .local v0, "configMap":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;"
    if-eqz v0, :cond_1

    .line 614
    invoke-virtual {v0, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 615
    .local v2, "maxIndex":I
    invoke-virtual {p2}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->getOffset()I

    move-result v3

    .line 616
    .local v3, "offSet":I
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v4}, Landroid/widget/ArrayAdapter;->clear()V

    .line 617
    const/4 v4, 0x0

    .local v4, "k":I
    :goto_0
    if-gt v4, v2, :cond_0

    .line 618
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    add-int v6, v4, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 617
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 620
    .end local v4    # "k":I
    :cond_0
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mRuIndexAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v4}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 621
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpRuIndex:Landroid/widget/Spinner;

    invoke-virtual {v4, v1}, Landroid/widget/Spinner;->setSelection(I)V

    .line 624
    .end local v0    # "configMap":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;"
    .end local v2    # "maxIndex":I
    .end local v3    # "offSet":I
    :cond_1
    return-void
.end method

.method private updateTxCountView(Ljava/lang/String;)V
    .locals 1
    .param p1, "text"    # Ljava/lang/String;

    .line 699
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;

    invoke-direct {v0, p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$11;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 707
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 982
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "v"    # Landroid/view/View;

    .line 734
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_3

    .line 736
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCbWf2:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 737
    const v0, 0x7f0a0718

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 738
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 739
    return-void

    .line 741
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 742
    .local v0, "interPktGap":Ljava/lang/String;
    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    if-gtz v2, :cond_2

    .line 743
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mEtInterPktGap:Landroid/widget/EditText;

    const/16 v3, 0x32

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 745
    :cond_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->getTxParam()Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxParam:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxParam;

    .line 747
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mSpMode:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTestMode:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 749
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    if-eqz v2, :cond_4

    .line 750
    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 751
    const/4 v1, 0x0

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setUiEnable(Z)V

    goto :goto_0

    .line 753
    .end local v0    # "interPktGap":Ljava/lang/String;
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 754
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    const/4 v2, 0x2

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->sendEmptyMessage(I)Z

    .line 755
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setUiEnable(Z)V

    goto :goto_1

    .line 753
    :cond_4
    :goto_0
    nop

    .line 757
    :goto_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 229
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 231
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 232
    .local v0, "it":Landroid/content/Intent;
    const-string v1, "mode"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 233
    .local v1, "mode":Ljava/lang/String;
    const-string v2, "WifiTX"

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    .line 234
    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mDbdcMode:Z

    .line 235
    const-string v4, "TX Band1"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 236
    iput v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mBandValue:I

    .line 237
    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;->TX_INFO_BAND1:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    iput-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxInfoBand:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    .line 239
    :cond_0
    const-string v4, "wifi tx in dbdc mode"

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 241
    :cond_1
    iget-boolean v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mDbdcMode:Z

    if-eqz v4, :cond_2

    const/4 v3, 0x2

    :cond_2
    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->hqaSetBandMode(I)I

    .line 242
    const-string v3, "key_ant_swap"

    const/4 v4, 0x0

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapAntSwap:Z

    .line 243
    const-string v3, "key_11ax"

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap11ax:Z

    .line 244
    const-string v3, "key_2by2"

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCap2by2:Z

    .line 245
    const-string v3, "key_hw_tx"

    invoke-virtual {v0, v3, v4}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mCapHwTx:Z

    .line 246
    const v3, 0x7f08010e

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->setContentView(I)V

    .line 247
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getAllChannels()[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mChList:[Lcom/mediatek/engineermode/wifi/ChannelDataFormat;

    .line 248
    new-instance v3, Landroid/os/HandlerThread;

    invoke-direct {v3, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxThread:Landroid/os/HandlerThread;

    .line 249
    invoke-virtual {v3}, Landroid/os/HandlerThread;->start()V

    .line 250
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxThread:Landroid/os/HandlerThread;

    invoke-virtual {v3}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTxFormat;Landroid/os/Looper;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    .line 251
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->initComponent()V

    .line 252
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 257
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ondestory with mTxInfoBand "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxInfoBand:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$GetTxInfoType;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTX"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxHandler:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;

    if-eqz v0, :cond_0

    .line 259
    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TxHandler;->removeMessages(I)V

    .line 261
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;->mTxThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    .line 262
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 263
    return-void
.end method
