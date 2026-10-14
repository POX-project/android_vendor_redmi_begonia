.class public Lcom/mediatek/engineermode/wifi/WiFiRx6620;
.super Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.source "WiFiRx6620.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field private static final BANDWIDTH_INDEX_40M:I = 0x1

.field private static final BANDWIDTH_INDEX_80M:I = 0x2

.field private static final BW_ADVANCED_ITEMS:[Ljava/lang/String;

.field private static final BW_INDX_ADVANCED:I = 0x4

.field private static final HANDLER_EVENT_RX:I = 0x2

.field protected static final HANDLER_RX_DELAY_TIME:J = 0x3e8L

.field private static final PERCENT:J = 0x64L

.field private static final TAG:Ljava/lang/String; = "WifiRx"

.field private static final TEXT_ZERO:Ljava/lang/String; = "0"

.field private static final WAIT_COUNT:I = 0xa


# instance fields
.field private mAntSwapSupport:Z

.field private final mBandwidth:[Ljava/lang/String;

.field private mBandwidthIndex:I

.field private mBandwidthSpinner:Landroid/widget/Spinner;

.field private final mBandwidthSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

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

.field mChannelBandwidth:I

.field private mChannelSpinner:Landroid/widget/Spinner;

.field private final mChannelSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

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

.field private final mHandler:Landroid/os/Handler;

.field private mInitData:[J

.field private mIsAdvancedMode:Z

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

.field private mRbAntMain:Landroid/widget/RadioButton;

.field private mSpBwAdvCbw:Landroid/widget/Spinner;

.field private mSpBwAdvDbw:Landroid/widget/Spinner;

.field private mSpBwAdvPrimCh:Landroid/widget/Spinner;

.field private mTvFcs:Landroid/widget/TextView;

.field private mTvPer:Landroid/widget/TextView;

.field private mTvRx:Landroid/widget/TextView;

.field private mVgAnt:Landroid/view/ViewGroup;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 91
    const-string v0, "BW20"

    const-string v1, "BW40"

    const-string v2, "BW80"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 5

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;-><init>()V

    .line 71
    const-string v0, "20MHz"

    const-string v1, "40MHz"

    const-string v2, "U20MHz"

    const-string v3, "L20MHz"

    const-string v4, "Advanced"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidth:[Ljava/lang/String;

    .line 72
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvFcs:Landroid/widget/TextView;

    .line 73
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvRx:Landroid/widget/TextView;

    .line 74
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvPer:Landroid/widget/TextView;

    .line 75
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    .line 76
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnStop:Landroid/widget/Button;

    .line 77
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    .line 78
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    .line 79
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mVgAnt:Landroid/view/ViewGroup;

    .line 80
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mRbAntMain:Landroid/widget/RadioButton;

    .line 81
    const/4 v1, 0x0

    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    .line 82
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 83
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 84
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mInitData:[J

    .line 85
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    .line 86
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    .line 87
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    .line 88
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelBandwidth:I

    .line 89
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDataBandwidth:I

    .line 90
    iput v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimarySetting:I

    .line 93
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 95
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mIsAdvancedMode:Z

    .line 96
    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mAntSwapSupport:Z

    .line 98
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mHandler:Landroid/os/Handler;

    .line 130
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    .line 143
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiRx6620$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvPer:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvFcs:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateChannels()V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1200()[Ljava/lang/String;
    .locals 1

    .line 61
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/wifi/WiFiRx6620;III)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;
    .param p1, "x1"    # I
    .param p2, "x2"    # I
    .param p3, "x3"    # I

    .line 61
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->onAdvancedSelectChanged(III)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/TextView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvRx:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/ArrayAdapter;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Lcom/mediatek/engineermode/wifi/ChannelInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    return v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/wifi/WiFiRx6620;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;
    .param p1, "x1"    # I

    .line 61
    iput p1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    return p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)[Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidth:[Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->onAdvancedBandwidthSelected()V

    return-void
.end method

.method private initUiComponent()V
    .locals 6

    .line 240
    const v0, 0x7f060818

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mVgAnt:Landroid/view/ViewGroup;

    .line 241
    const v0, 0x7f060863

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mRbAntMain:Landroid/widget/RadioButton;

    .line 242
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mAntSwapSupport:Z

    if-nez v0, :cond_0

    .line 243
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mVgAnt:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 245
    :cond_0
    new-instance v0, Landroid/widget/ArrayAdapter;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    const v2, 0x1090008

    invoke-direct {v0, p0, v2, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    .line 247
    .local v0, "cbwAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 248
    const v1, 0x1090009

    invoke-virtual {v0, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 249
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    invoke-virtual {v3, v0}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 250
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/wifi/WiFiRx6620$4;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 282
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 284
    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->BW_ADVANCED_ITEMS:[Ljava/lang/String;

    const/4 v5, 0x0

    aget-object v4, v4, v5

    invoke-virtual {v3, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 285
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    .line 286
    invoke-virtual {v3, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 287
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDbwAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 288
    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    new-instance v4, Lcom/mediatek/engineermode/wifi/WiFiRx6620$5;

    invoke-direct {v4, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$5;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    invoke-virtual {v3, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 304
    new-instance v3, Landroid/widget/ArrayAdapter;

    invoke-direct {v3, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 306
    const-string v2, "0"

    invoke-virtual {v3, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 307
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    .line 308
    invoke-virtual {v2, v1}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 309
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimChAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 310
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    new-instance v2, Lcom/mediatek/engineermode/wifi/WiFiRx6620$6;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620$6;-><init>(Lcom/mediatek/engineermode/wifi/WiFiRx6620;)V

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 325
    return-void
.end method

.method private onAdvancedBandwidthSelected()V
    .locals 2

    .line 332
    const v0, 0x7f060819

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 333
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateChannels()V

    .line 334
    return-void
.end method

.method private onAdvancedSelectChanged(III)V
    .locals 0
    .param p1, "cbw"    # I
    .param p2, "dbw"    # I
    .param p3, "primCh"    # I

    .line 328
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateChannels()V

    .line 329
    return-void
.end method

.method private onClickBtnRxGo()V
    .locals 6

    .line 369
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->setViewEnabled(Z)V

    .line 370
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mInitData:[J

    const/4 v2, 0x3

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->getPacketRxStatus([JI)I

    .line 371
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "before rx test: rx ok = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mInitData:[J

    aget-wide v2, v2, v0

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " fcs error = "

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mInitData:[J

    const/4 v2, 0x1

    aget-wide v2, v0, v2

    .line 372
    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 371
    const-string v1, "WifiRx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 374
    const-wide/16 v2, 0x9

    const-wide/16 v4, 0x0

    invoke-static {v2, v3, v4, v5}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 377
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    const/4 v2, 0x4

    if-ne v2, v0, :cond_0

    .line 378
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mChannelBandwidth:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelBandwidth:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " mDataBandwidth:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDataBandwidth:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " mPrimarySetting:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimarySetting:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 380
    const-wide/16 v0, 0x47

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelBandwidth:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 381
    const-wide/16 v0, 0x48

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDataBandwidth:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 382
    const-wide/16 v0, 0x49

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimarySetting:I

    int-to-long v2, v2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    goto :goto_0

    .line 384
    :cond_0
    const-wide/16 v1, 0xf

    int-to-long v3, v0

    invoke-static {v1, v2, v3, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 388
    :goto_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mAntSwapSupport:Z

    if-eqz v0, :cond_2

    .line 389
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mRbAntMain:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 390
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    goto :goto_1

    .line 391
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->ordinal()I

    move-result v0

    int-to-long v0, v0

    :goto_1
    nop

    .line 392
    .local v0, "antennaIdx":J
    const-wide/16 v2, 0x99

    invoke-static {v2, v3, v0, v1}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 395
    .end local v0    # "antennaIdx":J
    :cond_2
    const-wide/16 v0, 0x1

    const-wide/16 v2, 0x2

    invoke-static {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    .line 396
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 397
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvFcs:Landroid/widget/TextView;

    const-string v1, "0"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 398
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvRx:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 399
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvPer:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 400
    return-void
.end method

.method private onClickBtnRxStop()V
    .locals 8

    .line 407
    const/4 v0, 0x1

    new-array v1, v0, [J

    .line 408
    .local v1, "u4Value":[J
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mHandler:Landroid/os/Handler;

    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeMessages(I)V

    .line 409
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/16 v3, 0xa

    if-ge v2, v3, :cond_1

    .line 410
    const-wide/16 v3, 0x1

    const-wide/16 v5, 0x0

    invoke-static {v3, v4, v5, v6}, Lcom/mediatek/engineermode/wifi/EMWifi;->setATParam(JJ)I

    move-result v3

    int-to-long v3, v3

    const/4 v7, 0x0

    aput-wide v3, v1, v7

    .line 411
    aget-wide v3, v1, v7

    cmp-long v3, v3, v5

    if-nez v3, :cond_0

    .line 412
    goto :goto_1

    .line 414
    :cond_0
    const-wide/16 v3, 0xa

    invoke-static {v3, v4}, Landroid/os/SystemClock;->sleep(J)V

    .line 415
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

    .line 409
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 418
    .end local v2    # "i":I
    :cond_1
    :goto_1
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->setViewEnabled(Z)V

    .line 419
    return-void
.end method

.method private setViewEnabled(Z)V
    .locals 2
    .param p1, "state"    # Z

    .line 428
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 429
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 430
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 431
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 432
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 433
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 434
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 435
    return-void
.end method

.method private updateChannelByAdvancedSetting(III)V
    .locals 3
    .param p1, "cbw"    # I
    .param p2, "dbw"    # I
    .param p3, "primCh"    # I

    .line 337
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateChannelByAdvancedSetting cbw:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiRx"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 339
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 340
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->addSupported2dot4gChannels(Landroid/widget/ArrayAdapter;Z)V

    .line 341
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->removeBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 342
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    goto :goto_0

    .line 343
    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 344
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 345
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw80MChannels(Landroid/widget/ArrayAdapter;)V

    .line 347
    :cond_1
    :goto_0
    return-void
.end method

.method private updateChannelByBandwidth(I)V
    .locals 2
    .param p1, "bandwidthIndex"    # I

    .line 183
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 184
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->removeBw40mUnsupported2dot4GChannels(Landroid/widget/ArrayAdapter;)V

    .line 185
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->remove5GChannels(Landroid/widget/ArrayAdapter;)V

    .line 186
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->insertBw40MChannels(Landroid/widget/ArrayAdapter;)V

    .line 188
    :cond_0
    return-void
.end method

.method private updateChannels()V
    .locals 4

    .line 165
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->resetSupportedChannels(Landroid/widget/ArrayAdapter;)V

    .line 166
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateChannelByBandwidth(I)V

    .line 167
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthIndex:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    .line 168
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelBandwidth:I

    iget v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mDataBandwidth:I

    iget v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mPrimarySetting:I

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateChannelByAdvancedSetting(III)V

    .line 170
    :cond_0
    const/4 v0, 0x1

    .line 171
    .local v0, "bUpdateWifiChannel":Z
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1}, Landroid/widget/ArrayAdapter;->getCount()I

    move-result v1

    if-nez v1, :cond_1

    .line 172
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 173
    const/4 v0, 0x0

    goto :goto_0

    .line 175
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 177
    :goto_0
    if-eqz v0, :cond_2

    .line 178
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    invoke-virtual {p0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->updateWifiChannel(Lcom/mediatek/engineermode/wifi/ChannelInfo;Landroid/widget/ArrayAdapter;Landroid/widget/Spinner;)V

    .line 180
    :cond_2
    return-void
.end method


# virtual methods
.method isInTestProcess()Z
    .locals 1

    .line 440
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "arg0"    # Landroid/view/View;

    .line 352
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 353
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->onClickBtnRxGo()V

    goto :goto_0

    .line 354
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 355
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->onClickBtnRxStop()V

    .line 357
    :cond_1
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 192
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onCreate(Landroid/os/Bundle;)V

    .line 193
    const v0, 0x7f080107

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->setContentView(I)V

    .line 194
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 195
    .local v0, "it":Landroid/content/Intent;
    const-string v1, "key_ant_swap"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mAntSwapSupport:Z

    .line 196
    const-string v1, "key_11ac"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mIsAdvancedMode:Z

    .line 197
    const v1, 0x7f060141

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvFcs:Landroid/widget/TextView;

    .line 198
    const v1, 0x7f06015e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvRx:Landroid/widget/TextView;

    .line 199
    const v1, 0x7f06014e

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mTvPer:Landroid/widget/TextView;

    .line 200
    const v1, 0x7f060144

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    .line 201
    const v1, 0x7f060162

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnStop:Landroid/widget/Button;

    .line 202
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnGo:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 203
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 204
    const/4 v1, 0x3

    new-array v1, v1, [J

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mInitData:[J

    .line 205
    new-instance v1, Lcom/mediatek/engineermode/wifi/ChannelInfo;

    invoke-direct {v1}, Lcom/mediatek/engineermode/wifi/ChannelInfo;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    .line 206
    const v1, 0x7f06015a

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    .line 207
    new-instance v1, Landroid/widget/ArrayAdapter;

    const v2, 0x1090008

    invoke-direct {v1, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    .line 209
    nop

    .line 210
    const v3, 0x1090009

    invoke-virtual {v1, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 211
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1}, Landroid/widget/ArrayAdapter;->clear()V

    .line 212
    invoke-static {}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->getSupportChannels()V

    .line 213
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannel:Lcom/mediatek/engineermode/wifi/ChannelInfo;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v4}, Lcom/mediatek/engineermode/wifi/ChannelInfo;->resetSupportedChannels(Landroid/widget/ArrayAdapter;)V

    .line 214
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 215
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinner:Landroid/widget/Spinner;

    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mChannelSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v1, v4}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 217
    const v1, 0x7f06013f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Spinner;

    iput-object v1, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    .line 219
    new-instance v1, Landroid/widget/ArrayAdapter;

    invoke-direct {v1, p0, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 221
    .local v1, "bwAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/String;>;"
    nop

    .line 222
    invoke-virtual {v1, v3}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 223
    iget-boolean v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mIsAdvancedMode:Z

    const/4 v3, 0x4

    if-eqz v2, :cond_0

    .line 224
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidth:[Ljava/lang/String;

    aget-object v2, v2, v3

    invoke-virtual {v1, v2}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    goto :goto_1

    .line 226
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v3, :cond_1

    .line 227
    iget-object v4, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidth:[Ljava/lang/String;

    aget-object v4, v4, v2

    invoke-virtual {v1, v4}, Landroid/widget/ArrayAdapter;->add(Ljava/lang/Object;)V

    .line 226
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 230
    .end local v2    # "i":I
    :cond_1
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    invoke-virtual {v2, v1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 231
    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinner:Landroid/widget/Spinner;

    iget-object v3, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mBandwidthSpinnerListener:Landroid/widget/AdapterView$OnItemSelectedListener;

    invoke-virtual {v2, v3}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 232
    const v2, 0x7f06081a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Spinner;

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvCbw:Landroid/widget/Spinner;

    .line 233
    const v2, 0x7f06081b

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Spinner;

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvDbw:Landroid/widget/Spinner;

    .line 234
    const v2, 0x7f06081d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/Spinner;

    iput-object v2, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mSpBwAdvPrimCh:Landroid/widget/Spinner;

    .line 235
    const/4 v2, 0x1

    invoke-direct {p0, v2}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->setViewEnabled(Z)V

    .line 236
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->initUiComponent()V

    .line 237
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 361
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiRx6620;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 362
    invoke-super {p0}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity;->onDestroy()V

    .line 363
    return-void
.end method
