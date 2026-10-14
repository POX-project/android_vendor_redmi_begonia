.class public Lcom/mediatek/engineermode/wifi/WiFiTx6632;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiTx6632.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/RadioGroup$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;,
        Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;
    }
.end annotation


# static fields
.field private static final BAND_WIDTH_160NC_INDEX:I = 0x6

.field private static final BAND_WIDTH_160_INDEX:I = 0x5

.field private static final BAND_WIDTH_20_INDEX:I = 0x2

.field private static final BAND_WIDTH_40_INDEX:I = 0x3

.field private static final BAND_WIDTH_80_INDEX:I = 0x4

.field private static final COMMAND_INDEX_LOCALFREQ:I = 0x5

.field private static final COMMAND_INDEX_OUTPUTPOWER:I = 0x4

.field private static final COMMAND_INDEX_STARTTX:I = 0x1

.field private static final COMMAND_INDEX_STOPTEST:I = 0x0

.field private static final DEFAULT_PKT_CNT:I = 0x0

.field private static final DEFAULT_PKT_LEN:I = 0x400

.field private static final DEFAULT_TX_GAIN:I = 0x16

.field private static final HANDLER_EVENT_FINISH:I = 0x4

.field private static final HANDLER_EVENT_GO:I = 0x1

.field private static final HANDLER_EVENT_STOP:I = 0x2

.field private static final HANDLER_EVENT_TIMER:I = 0x3

.field private static final ONE_SENCOND:I = 0x3e8

.field private static final POWER_UNIT_DBM:I = 0x0

.field private static final RATE_MODE_MASK:I = 0x1f

.field private static final TAG:Ljava/lang/String; = "WifiTx"

.field private static final TEST_MODE_CW_TONE:I = 0x2

.field private static final TEST_MODE_DUTY:I = 0x1

.field private static final TEST_MODE_TX:I = 0x0

.field private static final WIFI_MODE_DBDC_TX0:I = 0x2

.field private static final WIFI_MODE_DBDC_TX1:I = 0x3

.field private static final WIFI_MODE_NORMAL:I = 0x1

.field private static final mGuardInterval:[Ljava/lang/String;

.field private static final mMode:[Ljava/lang/String;

.field private static final mPreamble:[Ljava/lang/String;

.field private static final sBandWidth:[Ljava/lang/String;

.field private static final sBandWidthDBW:[Ljava/lang/String;

.field private static final sMapDbwValue:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private mAntSwapSupport:Z

.field private mBandwidthIndex:I

.field private mBtnGo:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

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

.field private mChannelTx0Freq:I

.field private mChannelTx1Freq:I

.field private final mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

.field private mCkDuplicateMode:Landroid/widget/CheckBox;

.field private mCkWf0:Landroid/widget/CheckBox;

.field private mCkWf1:Landroid/widget/CheckBox;

.field private mCntNum:J

.field private mDataBandwidthValue:I

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

.field private mGuardIntervalIndex:I

.field private final mHandler:Landroid/os/Handler;

.field private mHighRateSelected:Z

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

.field private mNssValue:I

.field private mPktLenNum:J

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

.field private mPrimChAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mPrimaryIndex:I

.field private mRGNss:Landroid/widget/RadioGroup;

.field private mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

.field private mRateAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mRbAntMain:Landroid/widget/RadioButton;

.field private mRbNss1:Landroid/widget/RadioButton;

.field private mRbNss2:Landroid/widget/RadioButton;

.field private mSpBandwidth:Landroid/widget/Spinner;

.field private mSpChannelTx0:Landroid/widget/Spinner;

.field private mSpChannelTx1:Landroid/widget/Spinner;

.field private mSpDbw:Landroid/widget/Spinner;

.field private mSpGuardInterval:Landroid/widget/Spinner;

.field private mSpMode:Landroid/widget/Spinner;

.field private mSpPreamble:Landroid/widget/Spinner;

.field private mSpPrimCh:Landroid/widget/Spinner;

.field private mSpRate:Landroid/widget/Spinner;

.field private mTargetModeIndex:I

.field private mTestInProcess:Z

.field private mTestThread:Landroid/os/HandlerThread;

.field private mTvDbw:Landroid/widget/TextView;

.field private mTvNss:Landroid/widget/TextView;

.field private mTvPrimCh:Landroid/widget/TextView;

.field private mTxGainVal:J

.field private mVgAnt:Landroid/view/ViewGroup;

.field private mViewChannelTx1:Landroid/view/View;

.field private mWiFiMode:I


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 51
    const-string v0, "continuous packet tx"

    const-string v1, "100% duty cycle"

    const-string v2, "CW tone"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mMode:[Ljava/lang/String;

    .line 53
    const-string v0, "Normal"

    const-string v1, "CCK short"

    const-string v2, "802.11n mixed mode"

    const-string v3, "802.11n green field"

    const-string v4, "802.11ac"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreamble:[Ljava/lang/String;

    .line 55
    const-string v0, "normal GI"

    const-string v1, "short GI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mGuardInterval:[Ljava/lang/String;

    .line 56
    const-string v1, "5MHz"

    const-string v2, "10MHz"

    const-string v3, "20MHz"

    const-string v4, "40MHz"

    const-string v5, "80MHz"

    const-string v6, "160MHz"

    const-string v7, "160NC"

    filled-new-array/range {v1 .. v7}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sBandWidth:[Ljava/lang/String;

    .line 58
    const-string v1, "BW5"

    const-string v2, "BW10"

    const-string v3, "BW20"

    const-string v4, "BW40"

    const-string v5, "BW80"

    const-string v6, "BW160"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sBandWidthDBW:[Ljava/lang/String;

    .line 60
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$1;

    invoke-direct {v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$1;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sMapDbwValue:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 5

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 85
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRGNss:Landroid/widget/RadioGroup;

    .line 86
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvNss:Landroid/widget/TextView;

    .line 88
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    .line 89
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    .line 90
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    .line 92
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    .line 93
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvDbw:Landroid/widget/TextView;

    .line 95
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvPrimCh:Landroid/widget/TextView;

    .line 96
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    .line 97
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    .line 98
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpGuardInterval:Landroid/widget/Spinner;

    .line 99
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpBandwidth:Landroid/widget/Spinner;

    .line 100
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPreamble:Landroid/widget/Spinner;

    .line 101
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPkt:Landroid/widget/EditText;

    .line 102
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    .line 103
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    .line 104
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    .line 105
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss1:Landroid/widget/RadioButton;

    .line 106
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss2:Landroid/widget/RadioButton;

    .line 107
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpMode:Landroid/widget/Spinner;

    .line 108
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    .line 109
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnStop:Landroid/widget/Button;

    .line 110
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    .line 111
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestThread:Landroid/os/HandlerThread;

    .line 112
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    .line 113
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 114
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    .line 115
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 116
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeAdapter:Landroid/widget/ArrayAdapter;

    .line 117
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 118
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 119
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 120
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 121
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    .line 122
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    .line 123
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimaryIndex:I

    .line 124
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeIndex:I

    .line 125
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    .line 126
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mGuardIntervalIndex:I

    .line 129
    const/4 v2, 0x1

    iput v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    .line 130
    const-wide/16 v3, 0x400

    iput-wide v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPktLenNum:J

    .line 131
    const-wide/16 v3, 0x0

    iput-wide v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCntNum:J

    .line 132
    const-wide/16 v3, 0x16

    iput-wide v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTxGainVal:J

    .line 133
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHighRateSelected:Z

    .line 134
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    .line 135
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mAntSwapSupport:Z

    .line 136
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    .line 137
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mVgAnt:Landroid/view/ViewGroup;

    .line 138
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbAntMain:Landroid/widget/RadioButton;

    .line 140
    iput v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    .line 142
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHandler:Landroid/os/Handler;

    .line 1006
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$12;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # Z

    .line 35
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setViewEnabled(Z)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1100()[Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sBandWidthDBW:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/view/View;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateRate()V

    return-void
.end method

.method static synthetic access$1500()Ljava/util/HashMap;
    .locals 1

    .line 35
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sMapDbwValue:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    return v0
.end method

.method static synthetic access$1602(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    return p1
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimaryIndex:I

    return v0
.end method

.method static synthetic access$1702(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimaryIndex:I

    return p1
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    return-object v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    return v0
.end method

.method static synthetic access$1902(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    return p1
.end method

.method static synthetic access$2000(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateChannels()V

    return-void
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx0Freq:I

    return p1
.end method

.method static synthetic access$2102(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeIndex:I

    return p1
.end method

.method static synthetic access$2202(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mGuardIntervalIndex:I

    return p1
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    return v0
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->startTxTest(I)V

    return-void
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->stopTxTest()V

    return-void
.end method

.method static synthetic access$2600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->handleEventTimer()V

    return-void
.end method

.method static synthetic access$2700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$2800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$2900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateTxPower()V

    return-void
.end method

.method static synthetic access$402(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx1Freq:I

    return p1
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/wifi/WiFiTx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    return p1
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvPrimCh:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvDbw:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    return-object v0
.end method

.method private checkTxPath()Z
    .locals 2

    .line 904
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 905
    const v0, 0x7f0a0718

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 906
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 907
    const/4 v0, 0x0

    return v0

    .line 909
    :cond_0
    return v1
.end method

.method private handleEventTimer()V
    .locals 16

    .line 817
    move-object/from16 v1, p0

    const/4 v0, 0x2

    new-array v2, v0, [J

    .line 818
    .local v2, "u4Value":[J
    const/4 v3, 0x0

    const-wide/16 v4, 0x0

    aput-wide v4, v2, v3

    .line 819
    const-wide/16 v6, 0x0

    .line 820
    .local v6, "pktCnt":J
    const-string v0, "WifiTx"

    const-string v8, "handleEventTimer"

    invoke-static {v0, v8}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 821
    const/16 v8, 0x20

    .line 822
    .local v8, "indexTransmitCount":I
    iget v9, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/4 v10, 0x3

    if-ne v9, v10, :cond_0

    .line 823
    const/16 v8, 0x120

    .line 826
    :cond_0
    iget v9, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeIndex:I

    const-string v11, " target count = "

    const-string v12, "query Transmitted packet count succeed, count = "

    const-string v13, "query Transmitted packet count failed"

    const/4 v14, 0x1

    if-ne v9, v14, :cond_4

    .line 827
    const-wide/16 v6, 0x64

    .line 828
    const/4 v9, 0x0

    .line 829
    .local v9, "completed":Z
    int-to-long v14, v8

    invoke-static {v14, v15, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v10

    if-nez v10, :cond_1

    .line 830
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v12, v2, v3

    invoke-virtual {v10, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v0, v10}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 832
    aget-wide v10, v2, v3

    cmp-long v0, v10, v6

    if-nez v0, :cond_2

    .line 833
    const/4 v9, 0x1

    goto :goto_0

    .line 836
    :cond_1
    invoke-static {v0, v13}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 838
    :cond_2
    :goto_0
    if-nez v9, :cond_3

    .line 839
    const-wide/16 v10, 0x1

    invoke-static {v10, v11, v4, v5}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 842
    :cond_3
    const/4 v0, 0x1

    iput v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    .line 843
    iget-object v3, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    invoke-virtual {v3, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 844
    return-void

    .line 847
    .end local v9    # "completed":Z
    :cond_4
    :try_start_0
    iget-object v4, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v4}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 851
    .end local v6    # "pktCnt":J
    .local v4, "pktCnt":J
    nop

    .line 854
    int-to-long v6, v8

    invoke-static {v6, v7, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v6

    if-nez v6, :cond_5

    .line 855
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-wide v12, v2, v3

    invoke-virtual {v6, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 857
    aget-wide v6, v2, v3

    cmp-long v0, v6, v4

    if-nez v0, :cond_6

    .line 858
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    invoke-virtual {v0, v10}, Landroid/os/Handler;->removeMessages(I)V

    .line 859
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x4

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 860
    return-void

    .line 863
    :cond_5
    invoke-static {v0, v13}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 865
    :cond_6
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    const-wide/16 v6, 0x3e8

    invoke-virtual {v0, v10, v6, v7}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 866
    return-void

    .line 848
    .end local v4    # "pktCnt":J
    .restart local v6    # "pktCnt":J
    :catch_0
    move-exception v0

    .line 849
    .local v0, "e":Ljava/lang/NumberFormatException;
    const-string v4, "invalid input value"

    invoke-static {v1, v4, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/Toast;->show()V

    .line 850
    return-void
.end method

.method private initUiComponent()V
    .locals 8

    .line 250
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 251
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 252
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupportChannels()V

    .line 253
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    const/4 v4, 0x0

    invoke-virtual {v0, v3, v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V

    .line 256
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 271
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632$4;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 284
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 286
    .local v0, "bandwidthAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 287
    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 289
    sget-object v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sBandWidth:[Ljava/lang/String;

    array-length v4, v3

    .line 291
    .local v4, "size":I
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/4 v6, 0x2

    if-ne v5, v6, :cond_0

    .line 292
    array-length v3, v3

    add-int/lit8 v4, v3, -0x3

    .line 295
    :cond_0
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v4, :cond_1

    .line 296
    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->sBandWidth:[Ljava/lang/String;

    aget-object v5, v5, v3

    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 295
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 298
    .end local v3    # "i":I
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpBandwidth:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 299
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpBandwidth:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$5;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 355
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 356
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 357
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$6;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 378
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 379
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 380
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632$7;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$7;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 396
    new-instance v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    invoke-direct {v3}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;-><init>()V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    .line 397
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    .line 398
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 400
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$8;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 420
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    .line 421
    nop

    .line 422
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 423
    sget-object v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreamble:[Ljava/lang/String;

    array-length v3, v3

    .line 424
    .local v3, "sizePreamble":I
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_1
    if-ge v5, v3, :cond_2

    .line 425
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    sget-object v7, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreamble:[Ljava/lang/String;

    aget-object v7, v7, v5

    invoke-virtual {v6, v7}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 424
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 427
    .end local v5    # "i":I
    :cond_2
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPreamble:Landroid/widget/Spinner;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5, v6}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 428
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPreamble:Landroid/widget/Spinner;

    new-instance v6, Lcom/mediatek/engineermode/wifi/WiFiTx6632$9;

    invoke-direct {v6, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$9;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v5, v6}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 441
    new-instance v5, Landroid/widget/ArrayAdapter;

    invoke-direct {v5, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeAdapter:Landroid/widget/ArrayAdapter;

    .line 442
    invoke-virtual {v5, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 443
    const/4 v5, 0x0

    .restart local v5    # "i":I
    :goto_2
    sget-object v6, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mMode:[Ljava/lang/String;

    array-length v7, v6

    if-ge v5, v7, :cond_3

    .line 444
    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeAdapter:Landroid/widget/ArrayAdapter;

    aget-object v6, v6, v5

    invoke-virtual {v7, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 443
    add-int/lit8 v5, v5, 0x1

    goto :goto_2

    .line 446
    .end local v5    # "i":I
    :cond_3
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpMode:Landroid/widget/Spinner;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5, v6}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 447
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpMode:Landroid/widget/Spinner;

    new-instance v6, Lcom/mediatek/engineermode/wifi/WiFiTx6632$10;

    invoke-direct {v6, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$10;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v5, v6}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 458
    new-instance v5, Landroid/widget/ArrayAdapter;

    invoke-direct {v5, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    move-object v1, v5

    .line 460
    .local v1, "guardIntervalAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 461
    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 462
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_3
    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mGuardInterval:[Ljava/lang/String;

    array-length v6, v5

    if-ge v2, v6, :cond_4

    .line 463
    aget-object v5, v5, v2

    invoke-virtual {v1, v5}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 462
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    .line 466
    .end local v2    # "i":I
    :cond_4
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpGuardInterval:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 467
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpGuardInterval:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632$11;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$11;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;)V

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 476
    new-instance v2, Landroid/os/HandlerThread;

    const-string v5, "Wifi Tx Test"

    invoke-direct {v2, v5}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestThread:Landroid/os/HandlerThread;

    .line 477
    invoke-virtual {v2}, Landroid/os/HandlerThread;->start()V

    .line 478
    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestThread:Landroid/os/HandlerThread;

    invoke-virtual {v5}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v5

    invoke-direct {v2, p0, v5}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$EventHandler;-><init>(Lcom/mediatek/engineermode/wifi/WiFiTx6632;Landroid/os/Looper;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    .line 480
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setViewEnabled(Z)V

    .line 482
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss1:Landroid/widget/RadioButton;

    invoke-virtual {v5, v2}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 484
    return-void
.end method

.method private initUiLayout()V
    .locals 2

    .line 204
    const v0, 0x7f060143

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    .line 205
    const v0, 0x7f060161

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnStop:Landroid/widget/Button;

    .line 206
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 207
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 208
    const v0, 0x7f06086b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRGNss:Landroid/widget/RadioGroup;

    .line 209
    invoke-virtual {v0, p0}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 210
    const v0, 0x7f06081f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpBandwidth:Landroid/widget/Spinner;

    .line 211
    const v0, 0x7f06015b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    .line 213
    const v0, 0x7f060859

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvNss:Landroid/widget/TextView;

    .line 214
    const v0, 0x7f06086c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss1:Landroid/widget/RadioButton;

    .line 215
    const v0, 0x7f06086d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss2:Landroid/widget/RadioButton;

    .line 216
    const v0, 0x7f06081c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvDbw:Landroid/widget/TextView;

    .line 217
    const v0, 0x7f06081b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    .line 218
    const v0, 0x7f06081e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvPrimCh:Landroid/widget/TextView;

    .line 219
    const v0, 0x7f06081d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    .line 220
    const v0, 0x7f060150

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPkt:Landroid/widget/EditText;

    .line 221
    const v0, 0x7f060151

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    .line 222
    const v0, 0x7f060164

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    .line 223
    const v0, 0x7f06014d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpMode:Landroid/widget/Spinner;

    .line 224
    const v0, 0x7f060152

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPreamble:Landroid/widget/Spinner;

    .line 225
    const v0, 0x7f060145

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpGuardInterval:Landroid/widget/Spinner;

    .line 226
    const v0, 0x7f060872

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    .line 228
    const v0, 0x7f060873

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    .line 229
    const v0, 0x7f060823

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    .line 230
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 231
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 232
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCheckedListener:Landroid/widget/CompoundButton$OnCheckedChangeListener;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 233
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 235
    const v0, 0x7f060866

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    .line 236
    const v0, 0x7f060868

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    .line 237
    const v0, 0x7f060867

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    .line 238
    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 240
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPkt:Landroid/widget/EditText;

    const-string v1, "1024"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 241
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    const-string v1, "0"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 242
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    const-string v1, "22"

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 244
    const v0, 0x7f060818

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mVgAnt:Landroid/view/ViewGroup;

    .line 245
    const v0, 0x7f06086a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbAntMain:Landroid/widget/RadioButton;

    .line 246
    return-void
.end method

.method private onClickBtnTxGo()V
    .locals 11

    .line 913
    const-string v0, "invalid input value"

    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->checkTxPath()Z

    move-result v1

    if-nez v1, :cond_0

    .line 914
    return-void

    .line 916
    :cond_0
    const-wide/16 v1, 0x0

    .line 917
    .local v1, "u4TxGainVal":J
    const/4 v3, 0x0

    .line 922
    .local v3, "i":I
    const/4 v4, 0x0

    :try_start_0
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v5

    const/high16 v6, 0x40000000    # 2.0f

    mul-float/2addr v5, v6

    float-to-long v5, v5

    iput-wide v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTxGainVal:J
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_1

    .line 926
    nop

    .line 927
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeIndex:I

    iput v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    .line 928
    const/4 v6, 0x1

    if-eqz v5, :cond_2

    if-eq v5, v6, :cond_1

    goto :goto_0

    .line 942
    :cond_1
    const-wide/16 v7, 0x64

    iput-wide v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPktLenNum:J

    .line 943
    iput-wide v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCntNum:J

    .line 944
    iput v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    .line 945
    goto :goto_0

    .line 931
    :cond_2
    :try_start_1
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPkt:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    .line 932
    .local v7, "pktNum":J
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v5}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v9
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0

    .line 937
    .local v9, "cntNum":J
    nop

    .line 938
    iput-wide v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPktLenNum:J

    .line 939
    iput-wide v9, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCntNum:J

    .line 940
    nop

    .line 950
    .end local v7    # "pktNum":J
    .end local v9    # "cntNum":J
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 951
    invoke-virtual {v0, v6}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 952
    invoke-direct {p0, v4}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setViewEnabled(Z)V

    .line 954
    :cond_3
    return-void

    .line 933
    :catch_0
    move-exception v5

    .line 934
    .local v5, "e":Ljava/lang/NumberFormatException;
    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 935
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 936
    return-void

    .line 923
    .end local v5    # "e":Ljava/lang/NumberFormatException;
    :catch_1
    move-exception v5

    .line 924
    .restart local v5    # "e":Ljava/lang/NumberFormatException;
    invoke-static {p0, v0, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 925
    return-void
.end method

.method private onClickBtnTxStop()V
    .locals 2

    .line 993
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 994
    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 996
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mModeIndex:I

    if-eqz v0, :cond_1

    .line 1000
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->setStandBy()I

    goto :goto_0

    .line 998
    :cond_1
    nop

    .line 1003
    :goto_0
    return-void
.end method

.method private setAntSwpIdx()V
    .locals 4

    .line 633
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mAntSwapSupport:Z

    if-nez v0, :cond_0

    .line 634
    return-void

    .line 636
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbAntMain:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 637
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    goto :goto_0

    .line 638
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    :goto_0
    nop

    .line 639
    .local v0, "antennaIdx":J
    const-wide/16 v2, 0x99

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 640
    return-void
.end method

.method private setRateIndex()V
    .locals 5

    .line 643
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    iget v0, v0, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    .line 644
    .local v0, "rateIndex":I
    const/16 v1, 0xc

    if-lt v0, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHighRateSelected:Z

    .line 645
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "rateIndex : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTx"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 646
    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHighRateSelected:Z

    if-eqz v1, :cond_1

    .line 647
    add-int/lit8 v0, v0, -0xc

    .line 648
    const/high16 v1, -0x80000000

    or-int/2addr v0, v1

    .line 651
    :cond_1
    const-wide/16 v1, 0x3

    int-to-long v3, v0

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 652
    return-void
.end method

.method private setViewEnabled(Z)V
    .locals 2
    .param p1, "state"    # Z

    .line 968
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 969
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 970
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpGuardInterval:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 971
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpBandwidth:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 972
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss1:Landroid/widget/RadioButton;

    invoke-virtual {v0, p1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 973
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRbNss2:Landroid/widget/RadioButton;

    invoke-virtual {v0, p1}, Landroid/widget/RadioButton;->setEnabled(Z)V

    .line 974
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 975
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPreamble:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 976
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPkt:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 977
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtPktCnt:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 978
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    invoke-virtual {v0, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 979
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 980
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpMode:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 981
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 982
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 983
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 984
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 985
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRGNss:Landroid/widget/RadioGroup;

    invoke-virtual {v0, p1}, Landroid/widget/RadioGroup;->setEnabled(Z)V

    .line 986
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 987
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 988
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 989
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 990
    return-void
.end method

.method private startCWToneTx()V
    .locals 8

    .line 760
    const-wide/16 v0, 0x1f

    const-wide/16 v2, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 761
    iget-wide v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTxGainVal:J

    const-wide/16 v2, 0x2

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 763
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx0Freq:I

    int-to-long v0, v0

    const-wide/16 v2, 0x12

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 765
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 766
    const-wide/32 v0, 0x10012

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx1Freq:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 768
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setAntSwpIdx()V

    .line 769
    const-wide/16 v0, 0x1

    .line 770
    .local v0, "wfValue":J
    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/4 v3, 0x1

    if-ne v2, v3, :cond_2

    .line 771
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 772
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_1

    .line 773
    const-wide/16 v0, 0x2

    goto :goto_0

    .line 775
    :cond_1
    const-wide/16 v0, 0x3

    .line 780
    :cond_2
    :goto_0
    const-wide/16 v4, 0x71

    invoke-static {v4, v5, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 782
    const-wide/16 v4, 0x1

    const-wide/16 v6, 0x5

    invoke-static {v4, v5, v6, v7}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v2

    if-nez v2, :cond_3

    .line 783
    iput-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    .line 785
    :cond_3
    return-void
.end method

.method private startContinueTx()V
    .locals 14

    .line 657
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/4 v1, 0x3

    const-wide/16 v2, 0x68

    const-wide/16 v4, 0x6e

    const/4 v6, 0x2

    const/4 v7, 0x1

    const-wide/16 v8, 0x1

    const-wide/16 v10, 0x0

    if-ne v0, v7, :cond_0

    .line 658
    invoke-static {v4, v5, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 659
    invoke-static {v2, v3, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_0

    .line 660
    :cond_0
    if-ne v0, v6, :cond_1

    .line 661
    invoke-static {v4, v5, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 662
    invoke-static {v2, v3, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_0

    .line 663
    :cond_1
    if-ne v0, v1, :cond_2

    .line 664
    invoke-static {v4, v5, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 665
    invoke-static {v2, v3, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 669
    :cond_2
    :goto_0
    const-wide/16 v2, 0x72

    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    int-to-long v4, v0

    invoke-static {v2, v3, v4, v5}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 670
    const-wide/16 v2, 0x1

    .line 671
    .local v2, "wfValue":J
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    if-ne v0, v7, :cond_4

    .line 672
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 673
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_3

    .line 674
    const-wide/16 v2, 0x2

    goto :goto_1

    .line 676
    :cond_3
    const-wide/16 v2, 0x3

    .line 681
    :cond_4
    :goto_1
    const-wide/16 v4, 0x71

    invoke-static {v4, v5, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 684
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    if-lt v0, v6, :cond_5

    sub-int/2addr v0, v6

    goto :goto_2

    .line 685
    :cond_5
    add-int/lit8 v0, v0, 0x5

    :goto_2
    nop

    .line 687
    .local v0, "cbw":I
    const-wide/16 v4, 0x47

    int-to-long v12, v0

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 690
    const-wide/16 v4, 0x48

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 693
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v4}, Landroid/widget/Spinner;->getVisibility()I

    move-result v4

    if-nez v4, :cond_6

    .line 694
    const-wide/16 v4, 0x49

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimaryIndex:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 698
    :cond_6
    const-wide/16 v4, 0x12

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx0Freq:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 701
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    invoke-virtual {v4}, Landroid/view/View;->getVisibility()I

    move-result v4

    if-nez v4, :cond_7

    .line 702
    const-wide/32 v4, 0x10012

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx1Freq:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 706
    :cond_7
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setRateIndex()V

    .line 709
    const-wide/16 v4, 0x6

    iget-wide v12, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPktLenNum:J

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 712
    const-wide/16 v4, 0x7

    iget-wide v12, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCntNum:J

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 715
    const-wide/16 v4, 0x1f

    invoke-static {v4, v5, v10, v11}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 716
    const-wide/16 v4, 0x2

    iget-wide v12, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTxGainVal:J

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 719
    const-wide/16 v4, 0x4

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 722
    const-wide/16 v4, 0x10

    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mGuardIntervalIndex:I

    int-to-long v12, v6

    invoke-static {v4, v5, v12, v13}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 725
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setAntSwpIdx()V

    .line 728
    invoke-static {v8, v9, v8, v9}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v4

    if-nez v4, :cond_8

    .line 729
    iput-boolean v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    .line 733
    :cond_8
    iget-wide v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCntNum:J

    cmp-long v4, v4, v10

    if-eqz v4, :cond_9

    .line 734
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    const-wide/16 v5, 0x3e8

    invoke-virtual {v4, v1, v5, v6}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 737
    :cond_9
    return-void
.end method

.method private startDutyTx()V
    .locals 5

    .line 740
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v1, 0x2

    if-lt v0, v1, :cond_0

    sub-int/2addr v0, v1

    goto :goto_0

    .line 741
    :cond_0
    add-int/lit8 v0, v0, 0x5

    :goto_0
    nop

    .line 742
    .local v0, "cbw":I
    const-wide/16 v1, 0x47

    int-to-long v3, v0

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 743
    const-wide/16 v1, 0x48

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    int-to-long v3, v3

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 745
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getVisibility()I

    move-result v1

    if-nez v1, :cond_1

    .line 746
    const-wide/16 v1, 0x49

    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPrimaryIndex:I

    int-to-long v3, v3

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 748
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setRateIndex()V

    .line 749
    const-wide/16 v1, 0x1f

    const-wide/16 v3, 0x0

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 750
    const-wide/16 v1, 0x2

    iget-wide v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTxGainVal:J

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 751
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    int-to-long v1, v1

    const-wide/16 v3, 0x4

    invoke-static {v3, v4, v1, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 752
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setAntSwpIdx()V

    .line 754
    const-wide/16 v1, 0x1

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v1

    if-nez v1, :cond_2

    .line 755
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    .line 757
    :cond_2
    return-void
.end method

.method private startTxTest(I)V
    .locals 2
    .param p1, "mode"    # I

    .line 788
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTargetModeIndex:I

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 796
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->startCWToneTx()V

    .line 797
    goto :goto_0

    .line 793
    :cond_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->startDutyTx()V

    .line 794
    goto :goto_0

    .line 790
    :cond_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->startContinueTx()V

    .line 791
    nop

    .line 801
    :goto_0
    return-void
.end method

.method private stopTxTest()V
    .locals 4

    .line 804
    const-string v0, "WifiTx"

    const-string v1, "stopTxTest"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 805
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    if-eqz v0, :cond_0

    .line 806
    const-wide/16 v0, 0x1

    const-wide/16 v2, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 807
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestInProcess:Z

    .line 809
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 810
    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 812
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 813
    return-void
.end method

.method private updateChannelByRateBandwidth(Landroid/widget/ArrayAdapter;II)V
    .locals 2
    .param p2, "rateIndex"    # I
    .param p3, "bandwidthIndex"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;II)V"
        }
    .end annotation

    .line 626
    .local p1, "adapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    invoke-virtual {v0, p2}, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->getRateGroup(I)I

    move-result v0

    if-nez v0, :cond_0

    .line 627
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    .line 628
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "The mode not support 5G channel : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 630
    :cond_0
    return-void
.end method

.method private updateChannels()V
    .locals 8

    .line 544
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 546
    .local v0, "tempChAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    .line 547
    .local v1, "targetBandwidth":I
    const-string v2, "WifiTx"

    const-string v3, "updateChannels"

    invoke-static {v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 549
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v4, 0x2

    if-ge v3, v4, :cond_0

    .line 550
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw20MChannels(Landroid/widget/ArrayAdapter;)V

    .line 551
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 552
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 553
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw160MChannels(Landroid/widget/ArrayAdapter;)V

    .line 556
    :cond_0
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    if-ne v3, v4, :cond_1

    .line 557
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw20MChannels(Landroid/widget/ArrayAdapter;)V

    .line 560
    :cond_1
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v5, 0x3

    if-ne v3, v5, :cond_2

    .line 561
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 563
    :cond_2
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v6, 0x4

    if-ne v3, v6, :cond_3

    .line 564
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 566
    :cond_3
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v6, 0x5

    if-ne v3, v6, :cond_4

    .line 567
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw160MChannels(Landroid/widget/ArrayAdapter;)V

    .line 569
    :cond_4
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    const/4 v6, 0x6

    if-ne v3, v6, :cond_5

    .line 570
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 573
    :cond_5
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    if-ne v3, v4, :cond_6

    .line 574
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    goto :goto_0

    .line 575
    :cond_6
    if-ne v3, v5, :cond_7

    .line 576
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v3, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 579
    :cond_7
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    iget v3, v3, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->mRateIndex:I

    invoke-direct {p0, v0, v3, v1}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateChannelByRateBandwidth(Landroid/widget/ArrayAdapter;II)V

    .line 581
    const/4 v3, 0x0

    .line 582
    .local v3, "bUpdateWifiChannel":Z
    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v4

    .line 583
    .local v4, "count":I
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v5

    if-ne v4, v5, :cond_a

    .line 584
    const/4 v5, 0x0

    .local v5, "k":I
    :goto_1
    if-ge v5, v4, :cond_9

    .line 585
    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v7, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_8

    .line 586
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "index"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "new:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " old:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 587
    invoke-virtual {v7, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 586
    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 588
    const/4 v3, 0x1

    .line 589
    goto :goto_2

    .line 584
    :cond_8
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .end local v5    # "k":I
    :cond_9
    :goto_2
    goto :goto_3

    .line 594
    :cond_a
    const/4 v3, 0x1

    .line 596
    :goto_3
    if-nez v3, :cond_b

    .line 597
    const-string v5, "no update"

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 598
    return-void

    .line 600
    :cond_b
    const-string v5, "need update"

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 601
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->clear()V

    .line 602
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_4
    if-ge v2, v4, :cond_c

    .line 603
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-virtual {v5, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 602
    add-int/lit8 v2, v2, 0x1

    goto :goto_4

    .line 605
    .end local v2    # "i":I
    :cond_c
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v2

    if-nez v2, :cond_d

    .line 606
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    const/4 v5, 0x0

    invoke-virtual {v2, v5}, Landroid/widget/Button;->setEnabled(Z)V

    .line 607
    const/4 v3, 0x0

    goto :goto_5

    .line 609
    :cond_d
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    const/4 v5, 0x1

    invoke-virtual {v2, v5}, Landroid/widget/Button;->setEnabled(Z)V

    .line 611
    :goto_5
    if-eqz v3, :cond_e

    .line 612
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    invoke-virtual {p0, v2, v5, v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 613
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mViewChannelTx1:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getVisibility()I

    move-result v2

    if-nez v2, :cond_e

    .line 614
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    invoke-virtual {p0, v2, v5, v6}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 617
    :cond_e
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx0:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 618
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpChannelTx1:Landroid/widget/Spinner;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v2, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 619
    return-void
.end method

.method private updateRate()V
    .locals 7

    .line 1034
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 1035
    const/4 v0, 0x0

    .line 1036
    .local v0, "size":I
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateRate, mNssValue = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiTx"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1037
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    const/4 v2, 0x4

    if-nez v1, :cond_1

    .line 1038
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_54M:[Ljava/lang/String;

    array-length v0, v1

    .line 1039
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 1040
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_54M:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1039
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .end local v1    # "i":I
    :cond_0
    goto/16 :goto_6

    .line 1042
    :cond_1
    const/4 v3, 0x1

    if-ne v1, v3, :cond_3

    .line 1043
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_11M:[Ljava/lang/String;

    array-length v0, v1

    .line 1044
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_1
    if-ge v1, v0, :cond_2

    .line 1045
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_11M:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1044
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .end local v1    # "i":I
    :cond_2
    goto :goto_6

    .line 1047
    :cond_3
    const/4 v4, 0x2

    if-eq v1, v4, :cond_7

    const/4 v5, 0x3

    if-ne v1, v5, :cond_4

    goto :goto_3

    .line 1061
    :cond_4
    if-ne v1, v2, :cond_a

    .line 1062
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS7:[Ljava/lang/String;

    array-length v0, v1

    .line 1063
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_2
    if-ge v1, v0, :cond_5

    .line 1064
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    sget-object v6, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS7:[Ljava/lang/String;

    aget-object v6, v6, v1

    invoke-virtual {v3, v6}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1063
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 1066
    .end local v1    # "i":I
    :cond_5
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    if-lt v1, v4, :cond_6

    .line 1067
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    const-string v3, "MCS8"

    invoke-virtual {v1, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1069
    :cond_6
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    if-lt v1, v5, :cond_a

    .line 1070
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    const-string v3, "MCS9"

    invoke-virtual {v1, v3}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    goto :goto_6

    .line 1050
    :cond_7
    :goto_3
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    if-ne v1, v3, :cond_9

    .line 1051
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS7:[Ljava/lang/String;

    array-length v0, v1

    .line 1052
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_4
    if-ge v1, v0, :cond_8

    .line 1053
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS7:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1052
    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    .end local v1    # "i":I
    :cond_8
    goto :goto_6

    .line 1055
    :cond_9
    if-ne v1, v4, :cond_a

    .line 1056
    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS15:[Ljava/lang/String;

    array-length v0, v1

    .line 1057
    const/4 v1, 0x0

    .restart local v1    # "i":I
    :goto_5
    if-ge v1, v0, :cond_a

    .line 1058
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;->RATE_ITEM_CS15:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 1057
    add-int/lit8 v1, v1, 0x1

    goto :goto_5

    .line 1073
    .end local v1    # "i":I
    :cond_a
    :goto_6
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRateAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 1075
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBandwidthIndex:I

    if-lt v1, v2, :cond_b

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    if-nez v1, :cond_b

    .line 1076
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mSpRate:Landroid/widget/Spinner;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 1078
    :cond_b
    return-void
.end method

.method private updateTxPower()V
    .locals 9

    .line 1097
    const-string v0, "WifiTx"

    const-string v1, "updateTxPower"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1098
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRate:Lcom/mediatek/engineermode/wifi/WiFiTx6632$RateInfo;

    if-nez v0, :cond_0

    .line 1099
    return-void

    .line 1102
    :cond_0
    const-wide/16 v0, 0x12

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mChannelTx0Freq:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1103
    const-wide/16 v0, 0x4

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mPreambleIndex:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1104
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setRateIndex()V

    .line 1105
    const-wide/16 v0, 0x48

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mDataBandwidthValue:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1106
    const-wide/16 v0, 0x1

    .line 1107
    .local v0, "wfValue":J
    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/4 v3, 0x1

    if-ne v2, v3, :cond_2

    .line 1108
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 1109
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_1

    .line 1110
    const-wide/16 v0, 0x2

    goto :goto_0

    .line 1112
    :cond_1
    const-wide/16 v0, 0x3

    .line 1116
    :cond_2
    :goto_0
    const-wide/16 v2, 0x71

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 1117
    const/4 v2, 0x2

    new-array v2, v2, [J

    .line 1118
    .local v2, "u4Value":[J
    const/4 v3, 0x0

    const-wide/16 v4, 0x0

    aput-wide v4, v2, v3

    .line 1119
    const-wide/16 v6, 0x88

    invoke-static {v6, v7, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v6

    if-nez v6, :cond_3

    aget-wide v6, v2, v3

    cmp-long v4, v6, v4

    if-eqz v4, :cond_3

    .line 1121
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    aget-wide v5, v2, v3

    long-to-double v5, v5

    const-wide/high16 v7, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v5, v7

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 1123
    :cond_3
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEtTxGain:Landroid/widget/EditText;

    const/16 v4, 0x16

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 1125
    :goto_1
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 1130
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onCheckedChanged(Landroid/widget/RadioGroup;I)V
    .locals 2
    .param p1, "group"    # Landroid/widget/RadioGroup;
    .param p2, "checkedId"    # I

    .line 1083
    const v0, 0x7f06086c

    if-ne p2, v0, :cond_0

    .line 1084
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    .line 1085
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setVisibility(I)V

    goto :goto_0

    .line 1086
    :cond_0
    const v0, 0x7f06086d

    if-ne p2, v0, :cond_1

    .line 1087
    const/4 v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    .line 1088
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 1090
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mNssValue changed = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mNssValue:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiTx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 1091
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->updateRate()V

    .line 1092
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 490
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 491
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->onClickBtnTxGo()V

    goto :goto_0

    .line 492
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 493
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->onClickBtnTxStop()V

    .line 495
    :cond_1
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 7
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 500
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 501
    const v0, 0x7f08010d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->setContentView(I)V

    .line 503
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 504
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "key_ant_swap"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mAntSwapSupport:Z

    .line 505
    const-string v1, "mode"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 507
    .local v1, "data":Ljava/lang/String;
    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-nez v1, :cond_0

    .line 508
    iput v4, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    goto :goto_0

    .line 509
    :cond_0
    const-string v5, "TX Band0"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 510
    iput v3, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    goto :goto_0

    .line 511
    :cond_1
    const-string v5, "TX Band1"

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 512
    iput v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    .line 515
    :cond_2
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->initUiLayout()V

    .line 516
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->initUiComponent()V

    .line 518
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mWiFiMode:I

    const/16 v6, 0x8

    if-ne v5, v3, :cond_3

    .line 519
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 520
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRGNss:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v6}, Landroid/widget/RadioGroup;->setVisibility(I)V

    .line 521
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 522
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 523
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 524
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvNss:Landroid/widget/TextView;

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_1

    .line 525
    :cond_3
    if-ne v5, v2, :cond_4

    .line 526
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 527
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mRGNss:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v6}, Landroid/widget/RadioGroup;->setVisibility(I)V

    .line 528
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 529
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 530
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v2, v6}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 531
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTvNss:Landroid/widget/TextView;

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 534
    :cond_4
    :goto_1
    iget-boolean v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mAntSwapSupport:Z

    if-nez v2, :cond_5

    .line 535
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mVgAnt:Landroid/view/ViewGroup;

    invoke-virtual {v2, v6}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 537
    :cond_5
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 958
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mEventHandler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 959
    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 961
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTx6632;->mTestThread:Landroid/os/HandlerThread;

    if-eqz v0, :cond_1

    .line 962
    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    .line 964
    :cond_1
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 965
    return-void
.end method
