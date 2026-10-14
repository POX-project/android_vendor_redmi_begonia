.class public Lcom/mediatek/engineermode/wifi/WiFiTx6620;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiTx6620.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;,
        Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;
    }
.end annotation


# static fields
.field private static final ANTENNA:I = 0x0

.field private static final BANDWIDTH_40MHZ_MASK:I = 0x8000

.field private static final BANDWIDTH_INDEX_20M:I = 0x0

.field private static final BANDWIDTH_INDEX_40M:I = 0x1

.field private static final BANDWIDTH_INDEX_80M:I = 0x2

.field private static final BIT_8_MASK:I = 0xff

.field private static final BW_ADVANCED_ITEMS:[Ljava/lang/String;

.field private static final BW_INDX_ADVANCED:I = 0x4

.field private static final CCK_RATE_NUMBER:I = 0x4

.field private static final COMMAND_INDEX_CARRIER_NEW:I = 0xa

.field private static final COMMAND_INDEX_LOCALFREQ:I = 0x5

.field private static final COMMAND_INDEX_OUTPUTPOWER:I = 0x4

.field private static final COMMAND_INDEX_STARTTX:I = 0x1

.field private static final COMMAND_INDEX_STOPTEST:I = 0x0

.field private static final CWMODE_CCKPI:I = 0x5

.field private static final CWMODE_OFDMLTF:I = 0x2

.field private static final DEFAULT_PKT_CNT:I = 0xbb8

.field private static final DEFAULT_PKT_LEN:I = 0x400

.field private static final DEFAULT_TX_GAIN:I = 0x0

.field private static final HANDLER_EVENT_FINISH:I = 0x4

.field private static final HANDLER_EVENT_GO:I = 0x1

.field private static final HANDLER_EVENT_STOP:I = 0x2

.field private static final HANDLER_EVENT_TIMER:I = 0x3

.field private static final HIGH_RATE_PREAMBLE_BASE:I = 0x2

.field private static final LENGTH_3:I = 0x3

.field private static final MAX_LOWER_RATE_NUMBER:I = 0xc

.field private static final ONE_SENCOND:I = 0x3e8

.field private static final PACKCONTENT_BUFFER:[J

.field private static final RATE_MCS_INDEX:I = 0x20

.field private static final RATE_MODE_MASK:I = 0x1f

.field private static final RATE_NOT_MCS_INDEX:I = 0x9

.field private static final TAG:Ljava/lang/String; = "WifiTx"

.field private static final TEST_MODE_CARRIER:I = 0x2

.field private static final TEST_MODE_DUTY:I = 0x1

.field private static final TEST_MODE_LEAKAGE:I = 0x3

.field private static final TEST_MODE_POWEROFF:I = 0x4

.field private static final TEST_MODE_TX:I = 0x0

.field private static final TXOP_LIMIT_VALUE:I = 0x20000


# instance fields
.field private mAntSwapSupport:Z

.field mBandwidth:[Ljava/lang/String;

.field private mBandwidthIndex:I

.field private mBandwidthSpinner:Landroid/widget/Spinner;

.field private mBtnGo:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mCCKRateSelected:Z

.field private mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

.field private mChannelAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mChannelBandwidth:I

.field private mChannelSpinner:Landroid/widget/Spinner;

.field private mCntNum:J

.field mDataBandwidth:I

.field private mDbwAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mEtPkt:Landroid/widget/EditText;

.field private mEtPktCnt:Landroid/widget/EditText;

.field private mEtTxGain:Landroid/widget/EditText;

.field private mEventHandler:Landroid/os/Handler;

.field mGuardInterval:[Ljava/lang/String;

.field private mGuardIntervalIndex:I

.field private mGuardIntervalSpinner:Landroid/widget/Spinner;

.field private final mHandler:Landroid/os/Handler;

.field private mHighRateSelected:Z

.field private mIsAdvancedMode:Z

.field private mLastBandwidth:I

.field mMode:[Ljava/lang/String;

.field private mModeAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mModeIndex:I

.field private mModeSpinner:Landroid/widget/Spinner;

.field private mPktLenNum:J

.field mPreamble:[Ljava/lang/String;

.field private mPreambleAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mPreambleIndex:I

.field private mPreambleSpinner:Landroid/widget/Spinner;

.field private mPrimChAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field mPrimarySetting:I

.field private mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

.field private mRateAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mRateSpinner:Landroid/widget/Spinner;

.field private mRateUpdateCounter:I

.field private mRbAntMain:Landroid/widget/RadioButton;

.field private mSpBwAdvCbw:Landroid/widget/Spinner;

.field private mSpBwAdvDbw:Landroid/widget/Spinner;

.field private mSpBwAdvPrimCh:Landroid/widget/Spinner;

.field private mTargetModeIndex:I

.field private mTestThread:Landroid/os/HandlerThread;

.field private mTxGainVal:J

.field private mVgAnt:Landroid/view/ViewGroup;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 100
    const/4 v0, 0x6

    new-array v0, v0, [J

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->PACKCONTENT_BUFFER:[J

    .line 159
    const-string v0, "BW20"

    const-string v1, "BW40"

    const-string v2, "BW80"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    return-void

    nop

    :array_0
    .array-data 8
        -0xddfffc
        0x33440006
        0x55660008
        0x55550019
        -0x5555ffe5
        -0x4444ffe3
    .end array-data
.end method

.method public constructor <init>()V
    .locals 7

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 103
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHighRateSelected:Z

    .line 104
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCCKRateSelected:Z

    .line 105
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mLastBandwidth:I

    .line 106
    const/4 v1, 0x0

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    .line 107
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalSpinner:Landroid/widget/Spinner;

    .line 108
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    .line 109
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    .line 110
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPkt:Landroid/widget/EditText;

    .line 111
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPktCnt:Landroid/widget/EditText;

    .line 112
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    .line 113
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    .line 114
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    .line 115
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    .line 116
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnStop:Landroid/widget/Button;

    .line 117
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mVgAnt:Landroid/view/ViewGroup;

    .line 118
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRbAntMain:Landroid/widget/RadioButton;

    .line 119
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 120
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeAdapter:Landroid/widget/ArrayAdapter;

    .line 121
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 122
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    .line 123
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleIndex:I

    .line 124
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    .line 125
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalIndex:I

    .line 128
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    .line 129
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 130
    const-wide/16 v2, 0x400

    iput-wide v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPktLenNum:J

    .line 131
    const-wide/16 v2, 0xbb8

    iput-wide v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCntNum:J

    .line 132
    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTxGainVal:J

    .line 133
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mAntSwapSupport:Z

    .line 134
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTestThread:Landroid/os/HandlerThread;

    .line 135
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTx6620$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHandler:Landroid/os/Handler;

    .line 145
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    .line 147
    const-string v2, "continuous packet tx"

    const-string v3, "100% duty cycle"

    const-string v4, "carrier suppression"

    const-string v5, "local leakage"

    const-string v6, "enter power off"

    filled-new-array {v2, v3, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mMode:[Ljava/lang/String;

    .line 149
    const-string v2, "Normal"

    const-string v3, "CCK short"

    const-string v4, "802.11n mixed mode"

    const-string v5, "802.11n green field"

    const-string v6, "802.11ac"

    filled-new-array {v2, v3, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreamble:[Ljava/lang/String;

    .line 151
    const-string v2, "20MHz"

    const-string v3, "40MHz"

    const-string v4, "U20MHz"

    const-string v5, "L20MHz"

    const-string v6, "Advanced"

    filled-new-array {v2, v3, v4, v5, v6}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidth:[Ljava/lang/String;

    .line 152
    const-string v2, "800ns"

    const-string v3, "400ns"

    filled-new-array {v2, v3}, [Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardInterval:[Ljava/lang/String;

    .line 153
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    .line 154
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    .line 155
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    .line 156
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    .line 157
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDataBandwidth:I

    .line 158
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimarySetting:I

    .line 161
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 162
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 163
    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    .line 164
    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 165
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateUpdateCounter:I

    .line 166
    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTargetModeIndex:I

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # Z

    .line 66
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setViewEnabled(Z)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->addPreambleItems(I)V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleIndex:I

    return v0
.end method

.method static synthetic access$1102(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleIndex:I

    return p1
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCCKRateSelected:Z

    return v0
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/wifi/WiFiTx6620;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # Z

    .line 66
    iput-boolean p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCCKRateSelected:Z

    return p1
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1608(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateUpdateCounter:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateUpdateCounter:I

    return v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateChannels()V

    return-void
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    return v0
.end method

.method static synthetic access$1802(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    return p1
.end method

.method static synthetic access$1808(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    return v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    return v0
.end method

.method static synthetic access$1902(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    return p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Lcom/mediatek/engineermode/wifi/ChannelInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    return-object v0
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mLastBandwidth:I

    return v0
.end method

.method static synthetic access$2002(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mLastBandwidth:I

    return p1
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->onAdvancedBandwidthSelected()V

    return-void
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalIndex:I

    return v0
.end method

.method static synthetic access$2302(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalIndex:I

    return p1
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$2500()[Ljava/lang/String;
    .locals 1

    .line 66
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$2600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$2800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$2900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;III)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I
    .param p2, "x2"    # I
    .param p3, "x3"    # I

    .line 66
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->onAdvancedSelectChanged(III)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->uiUpdateTxPower()V

    return-void
.end method

.method static synthetic access$3300(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTargetModeIndex:I

    return v0
.end method

.method static synthetic access$3302(Lcom/mediatek/engineermode/wifi/WiFiTx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I

    .line 66
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTargetModeIndex:I

    return p1
.end method

.method static synthetic access$3400(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-wide v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTxGainVal:J

    return-wide v0
.end method

.method static synthetic access$3500(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-wide v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPktLenNum:J

    return-wide v0
.end method

.method static synthetic access$3600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-wide v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCntNum:J

    return-wide v0
.end method

.method static synthetic access$3700()[J
    .locals 1

    .line 66
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->PACKCONTENT_BUFFER:[J

    return-object v0
.end method

.method static synthetic access$3800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setRateIndex()V

    return-void
.end method

.method static synthetic access$3900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setAntSwpIdx()V

    return-void
.end method

.method static synthetic access$4000(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$4100(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$4200(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/EditText;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPktCnt:Landroid/widget/EditText;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6620;II)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # I
    .param p2, "x2"    # I

    .line 66
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->convertAdvancedRateIndex2Normal(II)I

    move-result v0

    return v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHighRateSelected:Z

    return v0
.end method

.method static synthetic access$802(Lcom/mediatek/engineermode/wifi/WiFiTx6620;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;
    .param p1, "x1"    # Z

    .line 66
    iput-boolean p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHighRateSelected:Z

    return p1
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method private addPreambleItems(I)V
    .locals 3
    .param p1, "rateGroup"    # I

    .line 511
    const/4 v0, 0x5

    if-ne p1, v0, :cond_1

    .line 512
    const/4 v0, 0x2

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreamble:[Ljava/lang/String;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 513
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    aget-object v1, v1, v0

    invoke-virtual {v2, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 512
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .end local v0    # "i":I
    :cond_0
    goto :goto_2

    .line 515
    :cond_1
    if-nez p1, :cond_3

    .line 516
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    const/4 v1, 0x2

    if-ge v0, v1, :cond_2

    .line 517
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreamble:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 516
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .end local v0    # "i":I
    :cond_2
    goto :goto_2

    .line 519
    :cond_3
    const/4 v0, 0x6

    if-ne p1, v0, :cond_4

    .line 520
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreamble:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    goto :goto_2

    .line 522
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "addPreambleItems; INVALID rateGroup:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 524
    :goto_2
    return-void
.end method

.method private convertAdvancedRateIndex2Normal(II)I
    .locals 3
    .param p1, "cbw"    # I
    .param p2, "selectedIndex"    # I

    .line 635
    move v0, p2

    .line 636
    .local v0, "targetIndex":I
    if-nez p1, :cond_0

    .line 637
    move v0, p2

    goto :goto_0

    .line 638
    :cond_0
    const/4 v1, 0x1

    if-ne p1, v1, :cond_1

    .line 639
    add-int/lit8 v0, p2, 0xc

    goto :goto_0

    .line 640
    :cond_1
    const/4 v1, 0x2

    if-ne p1, v1, :cond_2

    .line 641
    add-int/lit8 v0, p2, 0xc

    .line 643
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "convertAdvancedRateIndex2Normal: cbw: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " targetIndex:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTx"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 644
    return v0
.end method

.method private initUiComponent()V
    .locals 6

    .line 527
    const v0, 0x7f060818

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mVgAnt:Landroid/view/ViewGroup;

    .line 528
    const v0, 0x7f06086a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRbAntMain:Landroid/widget/RadioButton;

    .line 529
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mAntSwapSupport:Z

    if-nez v0, :cond_0

    .line 530
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mVgAnt:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 532
    :cond_0
    new-instance v0, Landroid/widget/ArrayAdapter;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    const v2, 0x1090008

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    .line 534
    .local v0, "cbwAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 535
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 536
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 537
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$8;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 571
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 573
    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    const/4 v5, 0x0

    aget-object v4, v4, v5

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 574
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 575
    invoke-virtual {v3, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 576
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 577
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620$9;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$9;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 593
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 595
    const-string v2, "0"

    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 596
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 597
    invoke-virtual {v2, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 598
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 599
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTx6620$10;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$10;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 615
    return-void
.end method

.method private onAdvancedBandwidthSelected()V
    .locals 2

    .line 668
    const v0, 0x7f060819

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 669
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateChannels()V

    .line 670
    return-void
.end method

.method private onAdvancedSelectChanged(III)V
    .locals 0
    .param p1, "cbw"    # I
    .param p2, "dbw"    # I
    .param p3, "primCh"    # I

    .line 698
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateChannels()V

    .line 699
    return-void
.end method

.method private onClickBtnTxGo()V
    .locals 15

    .line 775
    const-string v0, "invalid input value"

    const-wide/16 v1, 0x0

    .line 776
    .local v1, "u4TxGainVal":J
    const/4 v3, 0x0

    .line 780
    .local v3, "i":I
    const/4 v4, 0x0

    :try_start_0
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v5

    .line 781
    .local v5, "pwrVal":F
    const/high16 v6, 0x40000000    # 2.0f

    mul-float/2addr v6, v5

    float-to-long v1, v6

    .line 782
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    sget-object v7, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    const v8, 0x7f0a0766

    .line 784
    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->getString(I)Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x1

    new-array v10, v9, [Ljava/lang/Object;

    long-to-double v11, v1

    const-wide/high16 v13, 0x4000000000000000L    # 2.0

    div-double/2addr v11, v13

    .line 785
    invoke-static {v11, v12}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v11

    aput-object v11, v10, v4

    .line 783
    invoke-static {v7, v8, v10}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_1

    .line 790
    .end local v5    # "pwrVal":F
    nop

    .line 791
    iput-wide v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTxGainVal:J

    .line 792
    const-wide/16 v5, 0xff

    cmp-long v7, v1, v5

    if-lez v7, :cond_0

    goto :goto_0

    :cond_0
    move-wide v5, v1

    :goto_0
    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTxGainVal:J

    .line 793
    const-wide/16 v7, 0x0

    cmp-long v10, v5, v7

    if-gez v10, :cond_1

    move-wide v5, v7

    :cond_1
    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTxGainVal:J

    .line 794
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Wifi Tx Test : "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mMode:[Ljava/lang/String;

    iget v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    aget-object v6, v6, v7

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "WifiTx"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 795
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    iput v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTargetModeIndex:I

    .line 796
    if-eqz v5, :cond_3

    if-eq v5, v9, :cond_2

    goto :goto_1

    .line 810
    :cond_2
    const-wide/16 v5, 0x64

    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPktLenNum:J

    .line 811
    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCntNum:J

    .line 812
    iput v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTargetModeIndex:I

    .line 813
    goto :goto_1

    .line 799
    :cond_3
    :try_start_1
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPkt:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v5

    .line 800
    .local v5, "pktNum":J
    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v7}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0

    .line 805
    .local v7, "cntNum":J
    nop

    .line 806
    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPktLenNum:J

    .line 807
    iput-wide v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mCntNum:J

    .line 808
    nop

    .line 824
    .end local v5    # "pktNum":J
    .end local v7    # "cntNum":J
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_4

    .line 825
    invoke-virtual {v0, v9}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 826
    invoke-direct {p0, v4}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setViewEnabled(Z)V

    .line 828
    :cond_4
    return-void

    .line 801
    :catch_0
    move-exception v5

    .line 802
    .local v5, "e":Ljava/lang/NumberFormatException;
    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 803
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 804
    return-void

    .line 786
    .end local v5    # "e":Ljava/lang/NumberFormatException;
    :catch_1
    move-exception v5

    .line 787
    .restart local v5    # "e":Ljava/lang/NumberFormatException;
    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 788
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 789
    return-void
.end method

.method private onClickBtnTxStop()V
    .locals 2

    .line 848
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 849
    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 851
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeIndex:I

    if-eqz v0, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    .line 861
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->setStandBy()I

    goto :goto_0

    .line 855
    :cond_1
    const-wide/16 v0, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setPnpPower(J)I

    .line 856
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->setTestMode()I

    .line 857
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSelectedFrequency()I

    move-result v0

    int-to-long v0, v0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setChannel(J)I

    .line 858
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->uiUpdateTxPower()V

    .line 859
    goto :goto_0

    .line 853
    :cond_2
    nop

    .line 864
    :goto_0
    return-void
.end method

.method private setAntSwpIdx()V
    .locals 4

    .line 867
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mAntSwapSupport:Z

    if-nez v0, :cond_0

    .line 868
    return-void

    .line 870
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRbAntMain:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 871
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    goto :goto_0

    .line 872
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    :goto_0
    nop

    .line 873
    .local v0, "antennaIdx":J
    const-wide/16 v2, 0x99

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 874
    return-void
.end method

.method private setRateIndex()V
    .locals 5

    .line 877
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->mRateIndex:I

    .line 878
    .local v0, "rateIndex":I
    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mHighRateSelected:Z

    if-eqz v1, :cond_1

    .line 879
    add-int/lit8 v0, v0, -0xc

    .line 880
    const/16 v1, 0x9

    if-le v0, v1, :cond_0

    .line 881
    const/16 v0, 0x20

    .line 883
    :cond_0
    const/high16 v1, -0x80000000

    or-int/2addr v0, v1

    .line 885
    :cond_1
    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "TX rate index = 0x%08x"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTx"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 886
    const-wide/16 v1, 0x3

    int-to-long v3, v0

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 887
    return-void
.end method

.method private setViewEnabled(Z)V
    .locals 2
    .param p1, "state"    # Z

    .line 831
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 832
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 833
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 834
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 835
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPkt:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 836
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 837
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 838
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 839
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 840
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 841
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 842
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 843
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 844
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 845
    return-void
.end method

.method private uiUpdateTxPower()V
    .locals 17

    .line 726
    move-object/from16 v0, p0

    const/4 v1, 0x0

    .line 727
    .local v1, "ucGain":S
    const-wide/16 v2, 0x0

    .line 729
    .local v2, "i4TxPwrGain":J
    const/4 v4, 0x3

    new-array v11, v4, [J

    .line 730
    .local v11, "gain":[J
    iget-object v5, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSelectedChannelId()I

    move-result v5

    .line 731
    .local v5, "comboChannelIndex":I
    iget v6, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    const/4 v12, 0x1

    const/4 v13, 0x0

    if-ne v6, v12, :cond_0

    const v6, 0x8000

    goto :goto_0

    .line 732
    :cond_0
    move v6, v13

    :goto_0
    or-int v14, v5, v6

    .line 734
    .end local v5    # "comboChannelIndex":I
    .local v14, "comboChannelIndex":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "channelIdx "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " rateIdx "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    iget v6, v6, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->mRateIndex:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " gain "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 735
    invoke-static {v11}, Ljava/util/Arrays;->toString([J)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " Len "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 734
    const-string v15, "WifiTx"

    invoke-static {v15, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 737
    int-to-long v5, v14

    iget-object v4, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    iget v4, v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->mRateIndex:I

    int-to-long v7, v4

    const/4 v10, 0x3

    move-object v9, v11

    invoke-static/range {v5 .. v10}, Lcom/mediatek/engineermode/wifi/EMWifi;->readTxPowerFromEEPromEx(JJ[JI)I

    move-result v4

    if-nez v4, :cond_1

    .line 739
    aget-wide v2, v11, v13

    .line 741
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "i4TxPwrGain from uiUpdateTxPower is "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v15, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 742
    const-wide/16 v4, 0xff

    and-long/2addr v4, v2

    long-to-int v4, v4

    int-to-short v1, v4

    .line 745
    :cond_1
    iget-object v4, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    sget-object v5, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    const v6, 0x7f0a0766

    .line 746
    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->getString(I)Ljava/lang/String;

    move-result-object v6

    new-array v7, v12, [Ljava/lang/Object;

    int-to-double v8, v1

    const-wide/high16 v15, 0x4000000000000000L    # 2.0

    div-double/2addr v8, v15

    invoke-static {v8, v9}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v8

    aput-object v8, v7, v13

    .line 745
    invoke-static {v5, v6, v7}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 747
    return-void
.end method

.method private updateChannelByAdvancedSetting(III)V
    .locals 4
    .param p1, "cbw"    # I
    .param p2, "dbw"    # I
    .param p3, "primCh"    # I

    .line 673
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateChannelByAdvancedSetting: cbw:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 674
    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 675
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1}, Landroid/widget/ArrayAdapter;->clear()V

    .line 676
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v2, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V

    .line 677
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v2, v0, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported5gChannelsByBandwidth(Landroid/widget/ArrayAdapter;IZ)V

    goto :goto_0

    .line 678
    :cond_0
    const/4 v1, 0x2

    if-ne p1, v0, :cond_1

    .line 679
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->clear()V

    .line 680
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V

    .line 681
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->removeBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 682
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v3, v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported5gChannelsByBandwidth(Landroid/widget/ArrayAdapter;IZ)V

    goto :goto_0

    .line 683
    :cond_1
    if-ne p1, v1, :cond_2

    .line 684
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1}, Landroid/widget/ArrayAdapter;->clear()V

    .line 685
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    const/4 v3, 0x4

    invoke-virtual {v1, v2, v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported5gChannelsByBandwidth(Landroid/widget/ArrayAdapter;IZ)V

    .line 687
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-direct {p0, v0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateRateByBandwidth(Landroid/widget/ArrayAdapter;I)V

    .line 688
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateUpdateCounter:I

    if-nez v0, :cond_3

    .line 690
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    goto :goto_1

    .line 692
    :cond_3
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateUpdateCounter:I

    .line 694
    :goto_1
    return-void
.end method

.method private updateChannelByRateBandwidth(II)V
    .locals 5
    .param p1, "rateIndex"    # I
    .param p2, "bandwidthIndex"    # I

    .line 618
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateChannelByRateBandwidth: rateIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " bandwidthIndex:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 620
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->getRateGroup(I)I

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 621
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    goto :goto_0

    .line 623
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    new-array v2, v1, [I

    const/4 v3, 0x0

    const/16 v4, 0xe

    aput v4, v2, v3

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->removeChannels([ILandroid/widget/ArrayAdapter;)V

    .line 625
    :goto_0
    if-ne p2, v1, :cond_1

    .line 626
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->removeBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 627
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    .line 628
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->getRateGroup(I)I

    move-result v0

    if-eqz v0, :cond_1

    .line 629
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 632
    :cond_1
    return-void
.end method

.method private updateChannels()V
    .locals 5

    .line 753
    const/4 v0, 0x0

    .line 754
    .local v0, "bUpdateWifiChannel":Z
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    .line 755
    .local v1, "targetBandwidth":I
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->resetSupportedChannels(Landroid/widget/ArrayAdapter;)V

    .line 756
    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthIndex:I

    const/4 v3, 0x4

    if-ne v2, v3, :cond_0

    .line 757
    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelBandwidth:I

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mDataBandwidth:I

    iget v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPrimarySetting:I

    invoke-direct {p0, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateChannelByAdvancedSetting(III)V

    .line 759
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    iget v2, v2, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->mRateIndex:I

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateChannelByRateBandwidth(II)V

    .line 761
    const/4 v0, 0x1

    .line 762
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v2

    if-nez v2, :cond_1

    .line 763
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 764
    const/4 v0, 0x0

    goto :goto_0

    .line 766
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setEnabled(Z)V

    .line 768
    :goto_0
    if-eqz v0, :cond_2

    .line 769
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    invoke-virtual {p0, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 770
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->uiUpdateTxPower()V

    .line 772
    :cond_2
    return-void
.end method

.method private updateRateByBandwidth(Landroid/widget/ArrayAdapter;I)V
    .locals 3
    .param p2, "bandwidth"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;I)V"
        }
    .end annotation

    .line 648
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    const/4 v0, 0x0

    .line 649
    .local v0, "rateItems":[Ljava/lang/String;
    if-nez p2, :cond_0

    .line 650
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->access$3000()[Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 651
    :cond_0
    const/4 v1, 0x1

    if-ne p2, v1, :cond_1

    .line 652
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->access$3100()[Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 653
    :cond_1
    const/4 v1, 0x2

    if-ne p2, v1, :cond_2

    .line 654
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->access$3200()[Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 656
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateRateByBandwidth:Invalid bandwith "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTx"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 658
    :goto_0
    if-nez v0, :cond_3

    .line 659
    return-void

    .line 661
    :cond_3
    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->clear()V

    .line 662
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    array-length v2, v0

    if-ge v1, v2, :cond_4

    .line 663
    aget-object v2, v0, v1

    invoke-virtual {p1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 662
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 665
    .end local v1    # "i":I
    :cond_4
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 1081
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "view"    # Landroid/view/View;

    .line 704
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 705
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->onClickBtnTxGo()V

    goto :goto_0

    .line 706
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 707
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->onClickBtnTxStop()V

    .line 709
    :cond_1
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 7
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 285
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 286
    const v0, 0x7f08010c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setContentView(I)V

    .line 287
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 288
    .local v0, "it":Landroid/content/Intent;
    const-string v1, "key_ant_swap"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mAntSwapSupport:Z

    .line 289
    const-string v1, "key_11ac"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    .line 290
    const v1, 0x7f060140

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    .line 291
    const v1, 0x7f060152

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    .line 292
    const v1, 0x7f060150

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPkt:Landroid/widget/EditText;

    .line 293
    const v1, 0x7f060151

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtPktCnt:Landroid/widget/EditText;

    .line 294
    const v1, 0x7f060164

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEtTxGain:Landroid/widget/EditText;

    .line 295
    const v1, 0x7f06015b

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    .line 296
    const v1, 0x7f06014d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    .line 297
    const v1, 0x7f060143

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    .line 298
    const v1, 0x7f060161

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnStop:Landroid/widget/Button;

    .line 299
    const v1, 0x7f06013f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    .line 300
    const v1, 0x7f060145

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalSpinner:Landroid/widget/Spinner;

    .line 302
    new-instance v1, Landroid/os/HandlerThread;

    const-string v3, "Wifi Tx Test"

    invoke-direct {v1, v3}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTestThread:Landroid/os/HandlerThread;

    .line 303
    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    .line 304
    new-instance v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTestThread:Landroid/os/HandlerThread;

    invoke-virtual {v3}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v1, p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$EventHandler;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    .line 305
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 306
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 307
    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-direct {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 308
    new-instance v1, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    invoke-direct {v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    .line 310
    new-instance v1, Landroid/widget/ArrayAdapter;

    const v3, 0x1090008

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 312
    nop

    .line 313
    const v4, 0x1090009

    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 314
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupportChannels()V

    .line 315
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v5, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V

    .line 316
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 317
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mChannelSpinner:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620$2;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 333
    new-instance v1, Landroid/widget/ArrayAdapter;

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 335
    nop

    .line 336
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 337
    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    if-nez v1, :cond_0

    .line 338
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->getRateNumber()I

    move-result v5

    if-ge v1, v5, :cond_0

    .line 339
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    invoke-static {v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->access$400(Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v1

    invoke-virtual {v5, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 338
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 343
    .end local v1    # "i":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 344
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620$3;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 394
    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    if-nez v1, :cond_1

    .line 395
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRateSpinner:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;

    iget v5, v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620$RateInfo;->mOFDMStartIndex:I

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setSelection(I)V

    .line 397
    :cond_1
    new-instance v1, Landroid/widget/ArrayAdapter;

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeAdapter:Landroid/widget/ArrayAdapter;

    .line 399
    nop

    .line 400
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 401
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_1
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mMode:[Ljava/lang/String;

    array-length v6, v5

    if-ge v1, v6, :cond_2

    .line 402
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeAdapter:Landroid/widget/ArrayAdapter;

    aget-object v5, v5, v1

    invoke-virtual {v6, v5}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 401
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 404
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 405
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mModeSpinner:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620$4;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    invoke-virtual {v1, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 423
    new-instance v1, Landroid/widget/ArrayAdapter;

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 425
    nop

    .line 426
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 427
    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->addPreambleItems(I)V

    .line 428
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 429
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mPreambleSpinner:Landroid/widget/Spinner;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTx6620$5;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$5;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 430
    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 443
    new-instance v1, Landroid/widget/ArrayAdapter;

    invoke-direct {v1, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 445
    .local v1, "bandwidthAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 446
    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 448
    iget-boolean v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mIsAdvancedMode:Z

    const/4 v5, 0x4

    if-eqz v2, :cond_3

    .line 449
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidth:[Ljava/lang/String;

    aget-object v2, v2, v5

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    goto :goto_3

    .line 451
    :cond_3
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_2
    if-ge v2, v5, :cond_4

    .line 452
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidth:[Ljava/lang/String;

    aget-object v6, v6, v2

    invoke-virtual {v1, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 451
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 455
    .end local v2    # "i":I
    :cond_4
    :goto_3
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 456
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620$6;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$6;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 457
    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 484
    new-instance v2, Landroid/widget/ArrayAdapter;

    invoke-direct {v2, p0, v3}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 486
    .local v2, "guardIntervalAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 487
    invoke-virtual {v2, v4}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 488
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_4
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardInterval:[Ljava/lang/String;

    array-length v5, v4

    if-ge v3, v5, :cond_5

    .line 489
    aget-object v4, v4, v3

    invoke-virtual {v2, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 488
    add-int/lit8 v3, v3, 0x1

    goto :goto_4

    .line 491
    .end local v3    # "i":I
    :cond_5
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalSpinner:Landroid/widget/Spinner;

    invoke-virtual {v3, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 492
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mGuardIntervalSpinner:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/wifi/WiFiTx6620$7;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620$7;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6620;)V

    .line 493
    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 503
    const v3, 0x7f06081a

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    .line 504
    const v3, 0x7f06081b

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    .line 505
    const v3, 0x7f06081d

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    .line 506
    const/4 v3, 0x1

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->setViewEnabled(Z)V

    .line 507
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->initUiComponent()V

    .line 508
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 713
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 714
    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 716
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6620;->mTestThread:Landroid/os/HandlerThread;

    if-eqz v0, :cond_1

    .line 717
    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    .line 719
    :cond_1
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 720
    return-void
.end method
