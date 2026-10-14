.class public Lcom/mediatek/engineermode/wifi/WiFiRx6632;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiRx6632.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# static fields
.field private static final BAND_WIDTH_160NC_INDEX:I = 0x6

.field private static final BAND_WIDTH_160_INDEX:I = 0x5

.field private static final BAND_WIDTH_20_INDEX:I = 0x2

.field private static final BAND_WIDTH_40_INDEX:I = 0x3

.field private static final BAND_WIDTH_80_INDEX:I = 0x4

.field private static final COMMAND_INDEX_STARTRX:I = 0x2

.field private static final HANDLER_EVENT_RX:I = 0x2

.field protected static final HANDLER_RX_DELAY_TIME:J = 0x3e8L

.field private static final PERCENT:J = 0x64L

.field private static final TAG:Ljava/lang/String; = "WifiRx"

.field private static final TEXT_ZERO:Ljava/lang/String; = "0"

.field private static final WAIT_COUNT:I = 0xa

.field private static final WIFI_MODE_DBDC_RX0:I = 0x2

.field private static final WIFI_MODE_DBDC_RX1:I = 0x3

.field private static final WIFI_MODE_NORMAL:I = 0x1

.field private static final sBandWidth:[Ljava/lang/String;

.field private static final sBandWidthDBW:[Ljava/lang/String;


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

.field private mChannelRx0Freq:I

.field private mChannelRx1Freq:I

.field private mCkDuplicateMode:Landroid/widget/CheckBox;

.field private mCkWf0:Landroid/widget/CheckBox;

.field private mCkWf1:Landroid/widget/CheckBox;

.field private mDataBandwidthIndex:I

.field private mDbwAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mEventHandler:Landroid/os/Handler;

.field private final mHandler:Landroid/os/Handler;

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

.field private mRbAntMain:Landroid/widget/RadioButton;

.field private mSpBandwidth:Landroid/widget/Spinner;

.field private mSpChannelRx0:Landroid/widget/Spinner;

.field private mSpChannelRx1:Landroid/widget/Spinner;

.field private mSpDbw:Landroid/widget/Spinner;

.field private mSpPrimCh:Landroid/widget/Spinner;

.field private mTestThread:Landroid/os/HandlerThread;

.field private mTvDbw:Landroid/widget/TextView;

.field private mTvFcs:Landroid/widget/TextView;

.field private mTvPer:Landroid/widget/TextView;

.field private mTvPrimCh:Landroid/widget/TextView;

.field private mTvRx:Landroid/widget/TextView;

.field private mTvWiFi0RssiContext:Landroid/widget/TextView;

.field private mTvWiFi0RssiText:Landroid/widget/TextView;

.field private mTvWiFi1RssiContext:Landroid/widget/TextView;

.field private mTvWiFi1RssiText:Landroid/widget/TextView;

.field private mVgAnt:Landroid/view/ViewGroup;

.field private mViewChannelRx1:Landroid/view/View;

.field private mWiFiMode:I


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 38
    const-string v0, "5MHz"

    const-string v1, "10MHz"

    const-string v2, "20MHz"

    const-string v3, "40MHz"

    const-string v4, "80MHz"

    const-string v5, "160MHz"

    const-string v6, "160NC"

    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->sBandWidth:[Ljava/lang/String;

    .line 40
    const-string v1, "BW5"

    const-string v2, "BW10"

    const-string v3, "BW20"

    const-string v4, "BW40"

    const-string v5, "BW80"

    const-string v6, "BW160"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->sBandWidthDBW:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 59
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvFcs:Landroid/widget/TextView;

    .line 60
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvRx:Landroid/widget/TextView;

    .line 61
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPer:Landroid/widget/TextView;

    .line 62
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiContext:Landroid/widget/TextView;

    .line 63
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiContext:Landroid/widget/TextView;

    .line 64
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiText:Landroid/widget/TextView;

    .line 65
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiText:Landroid/widget/TextView;

    .line 66
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    .line 67
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    .line 68
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    .line 69
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    .line 70
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    .line 71
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvDbw:Landroid/widget/TextView;

    .line 72
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPrimCh:Landroid/widget/TextView;

    .line 73
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpDbw:Landroid/widget/Spinner;

    .line 74
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    .line 75
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpBandwidth:Landroid/widget/Spinner;

    .line 76
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    .line 77
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnStop:Landroid/widget/Button;

    .line 78
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mViewChannelRx1:Landroid/view/View;

    .line 79
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTestThread:Landroid/os/HandlerThread;

    .line 80
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mEventHandler:Landroid/os/Handler;

    .line 81
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 82
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 83
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 84
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 87
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    .line 88
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDataBandwidthIndex:I

    .line 89
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimaryIndex:I

    .line 90
    const/4 v2, 0x1

    iput v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    .line 91
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mVgAnt:Landroid/view/ViewGroup;

    .line 92
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mRbAntMain:Landroid/widget/RadioButton;

    .line 93
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mAntSwapSupport:Z

    .line 94
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPer:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    return v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1202(Lcom/mediatek/engineermode/wifi/WiFiRx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelRx0Freq:I

    return p1
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/wifi/WiFiRx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelRx1Freq:I

    return p1
.end method

.method static synthetic access$1402(Lcom/mediatek/engineermode/wifi/WiFiRx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    return p1
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPrimCh:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1700(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvDbw:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1800(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpDbw:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1900(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvFcs:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$2000()[Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->sBandWidthDBW:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$2100(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/view/View;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mViewChannelRx1:Landroid/view/View;

    return-object v0
.end method

.method static synthetic access$2200(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$2300(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->updateChannels()V

    return-void
.end method

.method static synthetic access$2400(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDataBandwidthIndex:I

    return v0
.end method

.method static synthetic access$2402(Lcom/mediatek/engineermode/wifi/WiFiRx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDataBandwidthIndex:I

    return p1
.end method

.method static synthetic access$2500(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimaryIndex:I

    return v0
.end method

.method static synthetic access$2502(Lcom/mediatek/engineermode/wifi/WiFiRx6632;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;
    .param p1, "x1"    # I

    .line 35
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimaryIndex:I

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvRx:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/CheckBox;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiContext:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiText:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiText:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    .line 35
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiContext:Landroid/widget/TextView;

    return-object v0
.end method

.method private checkRxPath()Z
    .locals 2

    .line 480
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-nez v0, :cond_0

    .line 481
    const v0, 0x7f0a0718

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 482
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 483
    const/4 v0, 0x0

    return v0

    .line 485
    :cond_0
    return v1
.end method

.method private initUiComponent()V
    .locals 7

    .line 202
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 203
    const v2, 0x1090009

    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 204
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 205
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupportChannels()V

    .line 206
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->resetSupportedChannels(Landroid/widget/ArrayAdapter;)V

    .line 209
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 210
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/wifi/WiFiRx6632$2;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 226
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 227
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    new-instance v3, Lcom/mediatek/engineermode/wifi/WiFiRx6632$3;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    invoke-virtual {v0, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 242
    new-instance v0, Landroid/widget/ArrayAdapter;

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 244
    .local v0, "bandwidthAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 245
    invoke-virtual {v0, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 246
    sget-object v3, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->sBandWidth:[Ljava/lang/String;

    array-length v4, v3

    .line 248
    .local v4, "size":I
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    const/4 v6, 0x2

    if-ne v5, v6, :cond_0

    .line 249
    array-length v3, v3

    add-int/lit8 v4, v3, -0x3

    .line 252
    :cond_0
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v4, :cond_1

    .line 253
    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->sBandWidth:[Ljava/lang/String;

    aget-object v5, v5, v3

    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 252
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 256
    .end local v3    # "i":I
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpBandwidth:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 257
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpBandwidth:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiRx6632$4;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 315
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 316
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 317
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpDbw:Landroid/widget/Spinner;

    new-instance v5, Lcom/mediatek/engineermode/wifi/WiFiRx6632$5;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$5;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 331
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 332
    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 333
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiRx6632$6;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632$6;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6632;)V

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 348
    return-void
.end method

.method private initUiLayout()V
    .locals 2

    .line 161
    const v0, 0x7f060872

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    .line 162
    const v0, 0x7f060873

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    .line 163
    const v0, 0x7f060822

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    .line 164
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 167
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 169
    const v0, 0x7f060144

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    .line 170
    const v0, 0x7f060162

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnStop:Landroid/widget/Button;

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 172
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 174
    const v0, 0x7f06081f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpBandwidth:Landroid/widget/Spinner;

    .line 176
    const v0, 0x7f06085f

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    .line 177
    const v0, 0x7f060861

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    .line 178
    const v0, 0x7f060860

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mViewChannelRx1:Landroid/view/View;

    .line 180
    const v0, 0x7f06081c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvDbw:Landroid/widget/TextView;

    .line 181
    const v0, 0x7f06081b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpDbw:Landroid/widget/Spinner;

    .line 182
    const v0, 0x7f06081e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPrimCh:Landroid/widget/TextView;

    .line 183
    const v0, 0x7f06081d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    .line 185
    const v0, 0x7f060141

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvFcs:Landroid/widget/TextView;

    .line 186
    const v0, 0x7f06015e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvRx:Landroid/widget/TextView;

    .line 187
    const v0, 0x7f06014e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPer:Landroid/widget/TextView;

    .line 188
    const v0, 0x7f06013c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiText:Landroid/widget/TextView;

    .line 189
    const v0, 0x7f06013e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiText:Landroid/widget/TextView;

    .line 190
    const v0, 0x7f06013b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi0RssiContext:Landroid/widget/TextView;

    .line 191
    const v0, 0x7f06013d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvWiFi1RssiContext:Landroid/widget/TextView;

    .line 193
    new-instance v0, Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-direct {v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 195
    const v0, 0x7f060818

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mVgAnt:Landroid/view/ViewGroup;

    .line 196
    const v0, 0x7f060863

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mRbAntMain:Landroid/widget/RadioButton;

    .line 197
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->setViewEnabled(Z)V

    .line 198
    return-void
.end method

.method private onClickBtnRxGo()V
    .locals 12

    .line 492
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->checkRxPath()Z

    move-result v0

    if-nez v0, :cond_0

    .line 493
    return-void

    .line 495
    :cond_0
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->setViewEnabled(Z)V

    .line 497
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    const/4 v1, 0x1

    const/4 v2, 0x3

    const-wide/16 v3, 0x68

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x6e

    const-wide/16 v9, 0x1

    const/4 v11, 0x2

    if-ne v0, v1, :cond_1

    .line 498
    invoke-static {v7, v8, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 499
    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_0

    .line 500
    :cond_1
    if-ne v0, v11, :cond_2

    .line 501
    invoke-static {v7, v8, v9, v10}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 502
    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_0

    .line 503
    :cond_2
    if-ne v0, v2, :cond_3

    .line 504
    invoke-static {v7, v8, v9, v10}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 505
    invoke-static {v3, v4, v9, v10}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 507
    :cond_3
    :goto_0
    const-wide/32 v0, 0x10001

    .line 508
    .local v0, "wfValue":J
    iget v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    if-ne v3, v2, :cond_5

    .line 509
    const-wide/32 v0, 0x10001

    .line 510
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_7

    .line 511
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_4

    .line 512
    const-wide/32 v0, 0x20001

    goto :goto_1

    .line 514
    :cond_4
    const-wide/32 v0, 0x30001

    goto :goto_1

    .line 518
    :cond_5
    const-wide/32 v0, 0x10000

    .line 519
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_7

    .line 520
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-nez v2, :cond_6

    .line 521
    const-wide/32 v0, 0x20000

    goto :goto_1

    .line 523
    :cond_6
    const-wide/32 v0, 0x30000

    .line 529
    :cond_7
    :goto_1
    const-wide/16 v2, 0x6a

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 534
    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    if-lt v2, v11, :cond_8

    sub-int/2addr v2, v11

    goto :goto_2

    .line 535
    :cond_8
    add-int/lit8 v2, v2, 0x5

    :goto_2
    nop

    .line 536
    .local v2, "cbw":I
    const-wide/16 v3, 0x47

    int-to-long v5, v2

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 539
    const-wide/16 v3, 0x48

    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mDataBandwidthIndex:I

    int-to-long v5, v5

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 542
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v3}, Landroid/widget/Spinner;->getVisibility()I

    move-result v3

    if-nez v3, :cond_9

    .line 543
    const-wide/16 v3, 0x49

    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mPrimaryIndex:I

    int-to-long v5, v5

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 547
    :cond_9
    const-wide/16 v3, 0x12

    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelRx0Freq:I

    int-to-long v5, v5

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 550
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mViewChannelRx1:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getVisibility()I

    move-result v3

    if-nez v3, :cond_a

    .line 551
    const-wide/32 v3, 0x10012

    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelRx1Freq:I

    int-to-long v5, v5

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 555
    :cond_a
    iget-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mAntSwapSupport:Z

    if-eqz v3, :cond_c

    .line 556
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mRbAntMain:Landroid/widget/RadioButton;

    invoke-virtual {v3}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v3

    if-eqz v3, :cond_b

    .line 557
    sget-object v3, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v3

    int-to-long v3, v3

    goto :goto_3

    .line 558
    :cond_b
    sget-object v3, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v3

    int-to-long v3, v3

    :goto_3
    nop

    .line 559
    .local v3, "antennaIdx":J
    const-wide/16 v5, 0x99

    invoke-static {v5, v6, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 563
    .end local v3    # "antennaIdx":J
    :cond_c
    const-wide/16 v3, 0x2

    invoke-static {v9, v10, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 564
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mHandler:Landroid/os/Handler;

    invoke-virtual {v3, v11}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 565
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvFcs:Landroid/widget/TextView;

    const-string v4, "0"

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 566
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvRx:Landroid/widget/TextView;

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 567
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mTvPer:Landroid/widget/TextView;

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 568
    return-void
.end method

.method private onClickBtnRxStop()V
    .locals 8

    .line 574
    const/4 v0, 0x1

    new-array v1, v0, [J

    .line 575
    .local v1, "u4Value":[J
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 576
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/16 v3, 0xa

    if-ge v2, v3, :cond_1

    .line 577
    const-wide/16 v3, 0x1

    const-wide/16 v5, 0x0

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v3

    int-to-long v3, v3

    const/4 v7, 0x0

    aput-wide v3, v1, v7

    .line 578
    aget-wide v3, v1, v7

    cmp-long v3, v3, v5

    if-nez v3, :cond_0

    .line 579
    goto :goto_1

    .line 581
    :cond_0
    const-wide/16 v3, 0xa

    invoke-static {v3, v4}, Landroid/os/SystemClock;->sleep(J)V

    .line 582
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "stop Rx test failed at the "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "times try"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "WifiRx"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 576
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 585
    .end local v2    # "i":I
    :cond_1
    :goto_1
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->setViewEnabled(Z)V

    .line 586
    return-void
.end method

.method private setViewEnabled(Z)V
    .locals 2
    .param p1, "state"    # Z

    .line 589
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 590
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 591
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 592
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 593
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 594
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 595
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpBandwidth:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 596
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 597
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 598
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 599
    return-void
.end method

.method private updateChannels()V
    .locals 8

    .line 391
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090008

    invoke-direct {v0, p0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 395
    .local v0, "tempChAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    const/4 v2, 0x2

    if-ge v1, v2, :cond_0

    .line 396
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw20MChannels(Landroid/widget/ArrayAdapter;)V

    .line 397
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 398
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 399
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw160MChannels(Landroid/widget/ArrayAdapter;)V

    .line 402
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    if-ne v1, v2, :cond_1

    .line 403
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw20MChannels(Landroid/widget/ArrayAdapter;)V

    .line 406
    :cond_1
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    const/4 v3, 0x3

    if-ne v1, v3, :cond_2

    .line 407
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 409
    :cond_2
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    const/4 v4, 0x4

    if-ne v1, v4, :cond_3

    .line 410
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 412
    :cond_3
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    const/4 v4, 0x5

    if-ne v1, v4, :cond_4

    .line 413
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw160MChannels(Landroid/widget/ArrayAdapter;)V

    .line 415
    :cond_4
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBandwidthIndex:I

    const/4 v4, 0x6

    if-ne v1, v4, :cond_5

    .line 416
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 419
    :cond_5
    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    if-ne v1, v2, :cond_6

    .line 420
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    goto :goto_0

    .line 421
    :cond_6
    if-ne v1, v3, :cond_7

    .line 422
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-virtual {v1, v0}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 424
    :cond_7
    :goto_0
    const/4 v1, 0x0

    .line 425
    .local v1, "bUpdateWifiChannel":Z
    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v4

    .line 426
    .local v4, "count":I
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v5

    if-ne v4, v5, :cond_a

    .line 427
    const/4 v5, 0x0

    .local v5, "k":I
    :goto_1
    if-ge v5, v4, :cond_9

    .line 428
    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    iget-object v7, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v7, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_8

    .line 429
    const/4 v1, 0x1

    .line 430
    goto :goto_2

    .line 427
    :cond_8
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .end local v5    # "k":I
    :cond_9
    :goto_2
    goto :goto_3

    .line 435
    :cond_a
    const/4 v1, 0x1

    .line 437
    :goto_3
    const-string v5, "WifiRx"

    if-nez v1, :cond_b

    .line 438
    const-string v2, "no update"

    invoke-static {v5, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 439
    return-void

    .line 441
    :cond_b
    const-string v6, "need update"

    invoke-static {v5, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 442
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->clear()V

    .line 443
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_4
    if-ge v5, v4, :cond_c

    .line 444
    iget-object v6, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v5}, Landroid/widget/ArrayAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 443
    add-int/lit8 v5, v5, 0x1

    goto :goto_4

    .line 447
    .end local v5    # "i":I
    :cond_c
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v5}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v5

    if-nez v5, :cond_d

    .line 448
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    const/4 v6, 0x0

    invoke-virtual {v5, v6}, Landroid/widget/Button;->setEnabled(Z)V

    .line 449
    const/4 v1, 0x0

    goto :goto_5

    .line 451
    :cond_d
    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    const/4 v6, 0x1

    invoke-virtual {v5, v6}, Landroid/widget/Button;->setEnabled(Z)V

    .line 453
    :goto_5
    if-eqz v1, :cond_10

    .line 455
    iget v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    const-wide/16 v6, 0x68

    if-ne v5, v2, :cond_e

    .line 456
    const-wide/16 v2, 0x0

    invoke-static {v6, v7, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_6

    .line 457
    :cond_e
    if-ne v5, v3, :cond_f

    .line 458
    const-wide/16 v2, 0x1

    invoke-static {v6, v7, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 460
    :cond_f
    :goto_6
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx0:Landroid/widget/Spinner;

    invoke-virtual {p0, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 461
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    invoke-virtual {v2}, Landroid/widget/Spinner;->getVisibility()I

    move-result v2

    if-nez v2, :cond_10

    .line 462
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mSpChannelRx1:Landroid/widget/Spinner;

    invoke-virtual {p0, v2, v3, v5}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 465
    :cond_10
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 629
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 3
    .param p1, "buttonView"    # Landroid/widget/CompoundButton;
    .param p2, "isChecked"    # Z

    .line 610
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060822

    if-ne v0, v1, :cond_0

    .line 611
    if-eqz p2, :cond_2

    .line 612
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 613
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 615
    :cond_0
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060872

    const/4 v2, 0x0

    if-ne v0, v1, :cond_1

    .line 616
    if-nez p2, :cond_2

    .line 617
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 619
    :cond_1
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    const v1, 0x7f060873

    if-ne v0, v1, :cond_2

    .line 620
    if-nez p2, :cond_2

    .line 621
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 624
    :cond_2
    :goto_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 471
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 472
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->onClickBtnRxGo()V

    goto :goto_0

    .line 473
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 474
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->onClickBtnRxStop()V

    .line 476
    :cond_1
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 353
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 355
    const v0, 0x7f080108

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->setContentView(I)V

    .line 356
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 357
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "key_ant_swap"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mAntSwapSupport:Z

    .line 358
    const-string v1, "mode"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 359
    .local v1, "data":Ljava/lang/String;
    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-nez v1, :cond_0

    .line 360
    iput v5, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    goto :goto_0

    .line 361
    :cond_0
    const-string v6, "RX Band0"

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 362
    iput v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    goto :goto_0

    .line 363
    :cond_1
    const-string v6, "RX Band1"

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 364
    iput v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    .line 367
    :cond_2
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->initUiLayout()V

    .line 368
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->initUiComponent()V

    .line 370
    iget v6, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mWiFiMode:I

    const/16 v7, 0x8

    if-ne v6, v4, :cond_3

    .line 371
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v3, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 372
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v3, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 373
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 374
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 375
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    goto :goto_1

    .line 376
    :cond_3
    if-ne v6, v3, :cond_4

    .line 377
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v3, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 378
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 379
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf0:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 380
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkWf1:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 381
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mCkDuplicateMode:Landroid/widget/CheckBox;

    invoke-virtual {v2, v7}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 384
    :cond_4
    :goto_1
    iget-boolean v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mAntSwapSupport:Z

    if-nez v2, :cond_5

    .line 385
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mVgAnt:Landroid/view/ViewGroup;

    invoke-virtual {v2, v7}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 387
    :cond_5
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 603
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6632;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 604
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 605
    return-void
.end method
