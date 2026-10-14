.class public Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;
.super Landroid/app/Activity;
.source "LbsNiStatistic.java"


# instance fields
.field callStateListener:Landroid/telephony/PhoneStateListener;

.field protected mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

.field private mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private mBroadcastReceiverRegistered:Z

.field private mButtonCall:Landroid/widget/Button;

.field private mButtonCearReports:Landroid/widget/Button;

.field private mDistance:I

.field private mDistance67:I

.field private mDistance90:I

.field private mDistance95:I

.field private mDistance97:I

.field private mDistanceList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mFixInfo:Ljava/lang/String;

.field private mFixResultsList:Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field private mLocFixTime:Ljava/lang/String;

.field private mLocFixType:I

.field private mLocLat:D

.field private mLocLng:D

.field private mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

.field private mLocationFixedCount:I

.field private mMaxDistance:I

.field private mMeasSvCount:I

.field private mMeasSvSnr:Ljava/lang/String;

.field private mMinDistance:I

.field public mNiStatisticRportPath:Ljava/lang/String;

.field private mProtocolType:I

.field private mReportFileName:Ljava/lang/String;

.field private mSessionCount:I

.field private mSessionStartTime:Ljava/lang/String;

.field private mSessionState:I

.field private mSessionStopTime:Ljava/lang/String;

.field private mSuccessGotLocations:Z

.field private mTextViewDistanceOfFixesValue:Landroid/widget/TextView;

.field private mTextViewFixResultsValue:Landroid/widget/TextView;

.field private mTextViewMinMaxDistanceValue:Landroid/widget/TextView;

.field private mTextViewRefLocationValue:Landroid/widget/TextView;

.field private mTextViewReportLocationValue:Landroid/widget/TextView;

.field private mTextViewReportPath:Landroid/widget/TextView;

.field private mTextViewSvCountValue:Landroid/widget/TextView;

.field private mTextViewSvSnrValue:Landroid/widget/TextView;

.field private mTextViewYieldRateCountValue:Landroid/widget/TextView;

.field private mTextViewYieldRateValue:Landroid/widget/TextView;

.field private mTimerCount:I

.field private mToggleButtonNiStatistic:Landroid/widget/ToggleButton;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 44
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x1

    .line 73
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    const/4 v0, 0x0

    .line 74
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiverRegistered:Z

    .line 75
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTimerCount:I

    .line 78
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    .line 79
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    .line 80
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSuccessGotLocations:Z

    .line 90
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    .line 91
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    .line 92
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance67:I

    .line 93
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance90:I

    .line 94
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance95:I

    .line 95
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance97:I

    .line 96
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    const/4 v0, 0x0

    .line 97
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    .line 162
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->callStateListener:Landroid/telephony/PhoneStateListener;

    .line 187
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    .line 369
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method private HandleTimerCallInfo(I)V
    .locals 6

    .line 392
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTimerCount:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTimerCount:I

    .line 393
    div-int/lit8 v0, p1, 0x3c

    .line 394
    rem-int/lit8 p1, p1, 0x3c

    const-string v2, "0"

    const-string v3, ""

    const/16 v4, 0xa

    .line 395
    new-instance v5, Ljava/lang/StringBuilder;

    if-ge p1, v4, :cond_0

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    if-ge v0, v4, :cond_1

    .line 396
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 397
    :goto_1
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Session Active: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 399
    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    const-wide/16 v2, 0x3e8

    .line 400
    invoke-direct {p0, v1, v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->sendDelayedMessage(IJ)V

    :cond_2
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;II)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->sendMessage(II)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;IIILjava/lang/Object;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->showConfirmDialog()V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->registerBroadcasts()V

    return-void
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->clearAllValues()V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)I
    .locals 0

    .line 44
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTimerCount:I

    return p0
.end method

.method static synthetic access$1400(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;I)V
    .locals 0

    .line 44
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->HandleTimerCallInfo(I)V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;IILjava/lang/String;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->parseMsg(IILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$1600(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->createReport()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/ToggleButton;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mToggleButtonNiStatistic:Landroid/widget/ToggleButton;

    return-object p0
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->showNiStatisticConfirmDialog()V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/os/Handler;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->unregisterBroadcasts()V

    return-void
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCearReports:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;Z)V
    .locals 0

    .line 44
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->setNiStatistic2Agpsd(Z)V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->startComponent(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private clearAllValues()V
    .locals 4

    const/4 v0, 0x0

    .line 518
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    .line 519
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    const/4 v1, 0x0

    .line 521
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStartTime:Ljava/lang/String;

    .line 522
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStopTime:Ljava/lang/String;

    const-string v1, ""

    .line 523
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixTime:Ljava/lang/String;

    const/4 v2, -0x1

    .line 524
    iput v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixType:I

    .line 525
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    .line 526
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    .line 527
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 528
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 530
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateCountValue:Landroid/widget/TextView;

    const-string v2, "0/0/0"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 531
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateValue:Landroid/widget/TextView;

    const-string v2, "0"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 532
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportLocationValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 533
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewMinMaxDistanceValue:Landroid/widget/TextView;

    const-string v3, "0/0"

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 534
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewDistanceOfFixesValue:Landroid/widget/TextView;

    const-string v3, "0/0/0/0"

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 535
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvCountValue:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 536
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvSnrValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 537
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewFixResultsValue:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private createReport()V
    .locals 8

    .line 541
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "E911TEST_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString2(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".csv"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mReportFileName:Ljava/lang/String;

    .line 542
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Create report file name: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mReportFileName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 544
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Session count, Session Start Time, Session Stop Time, Fix Time, Location Fixed, Yield Rate, Protocol, Fix Type, Latitude, Longitude, "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Distance, 67%Distance, 90%Distance, 95%Distance, 97%Distance, #SV, SV info\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 545
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mReportFileName:Ljava/lang/String;

    const-string v3, "NiStatisticReport"

    const/4 v4, 0x0

    const/4 v7, 0x1

    invoke-static/range {v2 .. v7}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->write2File(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z

    return-void
.end method

.method private handleSessionStateIdle()V
    .locals 14

    .line 553
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    .line 554
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString3(J)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStopTime:Ljava/lang/String;

    .line 555
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSuccessGotLocations:Z

    if-eqz v0, :cond_0

    .line 556
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    const-string v0, "Y"

    goto :goto_0

    :cond_0
    const-string v0, "N"

    .line 561
    :goto_0
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateCountValue:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    iget v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    sub-int/2addr v6, v7

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 563
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v3, v1, [Ljava/lang/Object;

    iget v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocationFixedCount:I

    int-to-float v5, v5

    const/high16 v6, 0x42c80000    # 100.0f

    mul-float/2addr v5, v6

    iget v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    int-to-float v6, v6

    div-float/2addr v5, v6

    .line 564
    invoke-static {v5}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v5

    const/4 v6, 0x0

    aput-object v5, v3, v6

    const-string v5, "%.01f"

    .line 563
    invoke-static {v5, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "%"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 565
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateValue:Landroid/widget/TextView;

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 567
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportLocationValue:Landroid/widget/TextView;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v7, v1, [Ljava/lang/Object;

    iget-wide v8, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    invoke-static {v8, v9}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v8

    aput-object v8, v7, v6

    const-string v8, "%.06f"

    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ", "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v7, v1, [Ljava/lang/Object;

    iget-wide v9, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    .line 568
    invoke-static {v9, v10}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v9

    aput-object v9, v7, v6

    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 567
    invoke-virtual {v3, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 570
    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    if-lez v3, :cond_1

    .line 571
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v5, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 572
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-static {v3}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 576
    :cond_1
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    const/16 v5, 0x64

    if-lez v3, :cond_2

    mul-int/lit8 v6, v3, 0x43

    .line 584
    div-int/2addr v6, v5

    mul-int/lit8 v7, v3, 0x5a

    .line 585
    div-int/2addr v7, v5

    mul-int/lit8 v8, v3, 0x5f

    .line 586
    div-int/2addr v8, v5

    mul-int/lit8 v3, v3, 0x61

    .line 587
    div-int/2addr v3, v5

    .line 588
    iget-object v9, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v9, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance67:I

    .line 589
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v6, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance90:I

    .line 590
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v6, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance95:I

    .line 591
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    invoke-interface {v6, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iput v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance97:I

    .line 594
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance67:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "/\n"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 595
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance90:I

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 596
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance95:I

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 597
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance97:I

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 598
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewDistanceOfFixesValue:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 599
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "distance indexes : "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto :goto_1

    :cond_2
    const-string v3, "distance list is empty"

    .line 601
    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 607
    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ","

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStartTime:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStopTime:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixTime:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 608
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    const/16 v8, 0xa

    const-string v9, "0"

    if-ge v7, v8, :cond_3

    move-object v7, v9

    goto :goto_2

    :cond_3
    move-object v7, v4

    :goto_2
    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 609
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    if-ge v7, v5, :cond_4

    move-object v4, v9

    :cond_4
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 610
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionCount:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ": "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 611
    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mProtocolType:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_5

    const-string v3, "UP"

    goto :goto_3

    :cond_5
    if-ne v3, v1, :cond_6

    const-string v3, "CP"

    goto :goto_3

    :cond_6
    const-string v3, "NA"

    .line 618
    :goto_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "] "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 620
    iget v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixType:I

    const/4 v5, -0x1

    const-string v7, "\n"

    if-eq v4, v5, :cond_9

    const-string v5, "distance="

    if-eqz v4, :cond_8

    if-eq v4, v1, :cond_7

    goto/16 :goto_4

    .line 626
    :cond_7
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",MSA,"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 627
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance67:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 628
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance90:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance95:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance97:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 629
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 630
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " svCount="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", SNR: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    goto/16 :goto_4

    .line 633
    :cond_8
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",MSB,"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 634
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance67:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 635
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance90:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance95:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance97:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",,\n"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 636
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    goto :goto_4

    .line 622
    :cond_9
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",N/A,,,,,,,,,\n"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 623
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "No Update \n"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    .line 639
    :goto_4
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v8

    const/4 v10, 0x0

    iget-object v11, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mReportFileName:Ljava/lang/String;

    .line 641
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    if-nez v0, :cond_a

    move-object v12, v7

    goto :goto_5

    :cond_a
    move-object v12, v0

    :goto_5
    const/4 v13, 0x1

    const-string v9, "NiStatisticReport"

    .line 639
    invoke-static/range {v8 .. v13}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->write2File(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z

    .line 642
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewFixResultsValue:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixResultsList:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 v0, 0x0

    .line 644
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStartTime:Ljava/lang/String;

    .line 645
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mFixInfo:Ljava/lang/String;

    .line 647
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v1}, Landroid/os/Handler;->removeMessages(I)V

    return-void
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 651
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_NiStatistic"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private parseLocation(Ljava/lang/String;)V
    .locals 12

    .line 480
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 482
    array-length v0, p1

    const/4 v1, 0x3

    if-ge v0, v1, :cond_0

    const-string p0, "Failed to get 3 values in niMsg"

    .line 483
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    return-void

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 487
    :try_start_0
    aget-object v2, p1, v0

    invoke-static {v2}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2

    iput-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    .line 488
    aget-object p1, p1, v1

    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2

    iput-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 490
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ParseFloat"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "LbsNiStatistic"

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    const/4 p1, 0x2

    new-array v11, p1, [F

    .line 494
    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    iget-wide v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    sget-wide v6, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    sget-wide v8, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    move-object v10, v11

    invoke-static/range {v2 .. v10}, Landroid/location/Location;->distanceBetween(DDDD[F)V

    .line 495
    aget v0, v11, v0

    float-to-int v0, v0

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    .line 501
    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mProtocolType:I

    if-ne v2, p1, :cond_1

    .line 502
    iput-boolean v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSuccessGotLocations:Z

    goto :goto_1

    :cond_1
    if-ne v2, v1, :cond_2

    const/16 p1, 0x32

    if-ge v0, p1, :cond_2

    .line 505
    iput-boolean v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSuccessGotLocations:Z

    :cond_2
    :goto_1
    return-void
.end method

.method private parseMsg(IILjava/lang/String;)V
    .locals 6

    .line 414
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseMsg protocolType="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    if-ne p1, v0, :cond_2

    .line 416
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixTime:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 417
    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString3(J)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixTime:Ljava/lang/String;

    .line 419
    :cond_1
    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixType:I

    const/4 v2, -0x1

    if-ne v1, v2, :cond_2

    .line 420
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixType:I

    :cond_2
    const/4 v1, 0x0

    const-string v2, ""

    if-eqz p1, :cond_8

    const/4 v3, 0x2

    if-eq p1, v0, :cond_6

    if-eq p1, v3, :cond_4

    const/4 p3, 0x3

    if-eq p1, p3, :cond_3

    goto/16 :goto_2

    .line 471
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "handle NI_MESSAGE_TYPE_SESSION_END protocolType="

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 472
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->updateSessionIdle()V

    goto/16 :goto_2

    .line 462
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "handle NI_MESSAGE_TYPE_SESSION_START protocolType="

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    if-ne p2, v3, :cond_5

    .line 464
    iput v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mProtocolType:I

    goto :goto_0

    .line 466
    :cond_5
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mProtocolType:I

    .line 468
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->updateSessionActive()V

    goto/16 :goto_2

    .line 439
    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "handle NI_MESSAGE_TYPE_MEAS protocolType="

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 441
    invoke-direct {p0, p3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 443
    array-length p2, p1

    if-ge p2, v3, :cond_7

    const-string p0, "Failed to get 2 values in Meas niMsg"

    .line 444
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto/16 :goto_2

    .line 448
    :cond_7
    :try_start_0
    aget-object p2, p1, v1

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    iput p2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    .line 449
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "parseMsg Meas niMsg mMeasSvCount = "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 451
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ParseInt"

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "LbsNiStatistic"

    invoke-static {p3, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 456
    :goto_1
    aget-object p1, p1, v0

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    .line 457
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvCountValue:Landroid/widget/TextView;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 458
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvSnrValue:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_2

    .line 426
    :cond_8
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "handle NI_MESSAGE_TYPE_POS protocolType="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 427
    invoke-direct {p0, p3}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->parseLocation(Ljava/lang/String;)V

    .line 428
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportLocationValue:Landroid/widget/TextView;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array p3, v0, [Ljava/lang/Object;

    iget-wide v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v3

    aput-object v3, p3, v1

    const-string v3, "%.06f"

    invoke-static {v3, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array p3, v0, [Ljava/lang/Object;

    iget-wide v4, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    .line 429
    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    aput-object v0, p3, v1

    invoke-static {v3, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 428
    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 430
    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    if-eqz p1, :cond_9

    iget p2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    if-le p1, p2, :cond_a

    .line 431
    :cond_9
    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    .line 433
    :cond_a
    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    iget p2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    if-ge p1, p2, :cond_b

    .line 434
    iput p2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    .line 436
    :cond_b
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewMinMaxDistanceValue:Landroid/widget/TextView;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "/\n"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_2
    return-void
.end method

.method private registerBroadcasts()V
    .locals 3

    .line 151
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiverRegistered:Z

    if-nez v0, :cond_0

    .line 152
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "com.mediatek.lbs.em2.action.ni_message"

    .line 153
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 154
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    :cond_0
    const/4 v0, 0x1

    .line 156
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiverRegistered:Z

    const-string v0, "phone"

    .line 158
    invoke-virtual {p0, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 159
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->callStateListener:Landroid/telephony/PhoneStateListener;

    const/16 v1, 0x20

    invoke-virtual {v0, p0, v1}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    return-void
.end method

.method private sendDelayedMessage(IJ)V
    .locals 0

    .line 362
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method private sendMessage(II)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 358
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 366
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private setNiStatistic2Agpsd(Z)V
    .locals 2

    .line 405
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setNiStatistic2Agpsd enabled: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 406
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    if-nez p0, :cond_0

    const-string p0, "setNiStatistic2Agpsd return because of null mAgpsInterface"

    .line 407
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    return-void

    .line 410
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setNiStatisticEnable(Z)V

    return-void
.end method

.method private showConfirmDialog()V
    .locals 3

    .line 338
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Are you sure to detele all Reports?"

    .line 339
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 340
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 342
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 348
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$9;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 353
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 354
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private showNiStatisticConfirmDialog()V
    .locals 3

    .line 302
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Enable NI STATISTIC may save sensitve data in report files, are you sure to enable it?"

    .line 303
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 304
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 306
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 317
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 323
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 324
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private split(Ljava/lang/String;)[Ljava/lang/String;
    .locals 0

    const-string p0, ","

    .line 513
    invoke-virtual {p1, p0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private startComponent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 671
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 672
    new-instance v1, Landroid/content/ComponentName;

    invoke-direct {v1, p1, p2}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 673
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 674
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/content/ActivityNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 676
    invoke-virtual {p1}, Landroid/content/ActivityNotFoundException;->printStackTrace()V

    .line 677
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "ERR: startComponent failed fullActivityName="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 678
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x1

    const-string p2, "ERR: startComponent failed!!"

    invoke-static {p0, p2, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 679
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method

.method private unregisterBroadcasts()V
    .locals 2

    .line 178
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiverRegistered:Z

    if-eqz v0, :cond_0

    .line 179
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    :cond_0
    const/4 v0, 0x0

    .line 181
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mBroadcastReceiverRegistered:Z

    const-string v1, "phone"

    .line 183
    invoke-virtual {p0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    .line 184
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->callStateListener:Landroid/telephony/PhoneStateListener;

    invoke-virtual {v1, p0, v0}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    return-void
.end method


# virtual methods
.method HandleCallStateUpdated(I)V
    .locals 0

    if-eqz p1, :cond_2

    const/4 p0, 0x1

    if-eq p1, p0, :cond_1

    const/4 p0, 0x2

    if-eq p1, p0, :cond_0

    goto :goto_0

    :cond_0
    const-string p0, "Call_State_Active"

    .line 663
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    const-string p0, "Call_State_Idle"

    .line 660
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto :goto_0

    .line 657
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    const-string p1, "AutoDialer"

    invoke-virtual {p0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method

.method deleteReportFiles()V
    .locals 3

    .line 328
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "deleteReportFiles in path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 329
    new-instance v0, Ljava/io/File;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 330
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 331
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p0, v1

    .line 332
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method protected initAgpsInterface()V
    .locals 1

    .line 143
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "agpsInterface connection failure"

    .line 145
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 146
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected initUI()V
    .locals 2

    const v0, 0x7f050173

    .line 242
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mToggleButtonNiStatistic:Landroid/widget/ToggleButton;

    const v0, 0x7f05012f

    .line 243
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    const v0, 0x7f050134

    .line 244
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    const v0, 0x7f050132

    .line 245
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    const v0, 0x7f050130

    .line 246
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCearReports:Landroid/widget/Button;

    const v0, 0x7f0500dd

    .line 248
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateCountValue:Landroid/widget/TextView;

    const v0, 0x7f0500de

    .line 249
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewYieldRateValue:Landroid/widget/TextView;

    const v0, 0x7f0500da

    .line 250
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportLocationValue:Landroid/widget/TextView;

    const v0, 0x7f0500d8

    .line 251
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewMinMaxDistanceValue:Landroid/widget/TextView;

    const v0, 0x7f0500d7

    .line 252
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewDistanceOfFixesValue:Landroid/widget/TextView;

    const v0, 0x7f0500db

    .line 253
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvCountValue:Landroid/widget/TextView;

    const v0, 0x7f0500dc

    .line 254
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvSnrValue:Landroid/widget/TextView;

    const v0, 0x7f0500d9

    .line 255
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewRefLocationValue:Landroid/widget/TextView;

    const v0, 0x7f050110

    .line 256
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportPath:Landroid/widget/TextView;

    const v0, 0x7f0500fd

    .line 257
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewFixResultsValue:Landroid/widget/TextView;

    .line 259
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mToggleButtonNiStatistic:Landroid/widget/ToggleButton;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 260
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mToggleButtonNiStatistic:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 279
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 285
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCearReports:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$5;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const-string v0, "/sdcard/NiStatisticReport/"

    .line 292
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    .line 293
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Report file path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 294
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 295
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 296
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 298
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportPath:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mNiStatisticRportPath:Ljava/lang/String;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 120
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 122
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->initAgpsInterface()V
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    const p1, 0x7f07000f

    .line 128
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 129
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    .line 130
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    .line 131
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistanceList:Ljava/util/List;

    .line 133
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->initUI()V

    const-string p1, "onCreate, set debug Screen function disabled"

    .line 135
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    const/4 p1, 0x0

    .line 136
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->HandleCallStateUpdated(I)V

    .line 137
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 138
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->setNiStatistic2Agpsd(Z)V

    return-void

    :catch_0
    const-string p0, "onCreate, Failed to initAgpsInterface"

    .line 124
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const-string v0, "onDestroy"

    .line 202
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 203
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    const/4 v0, 0x0

    .line 204
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->setNiStatistic2Agpsd(Z)V

    .line 205
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->unregisterBroadcasts()V

    .line 206
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Landroid/os/Handler;->removeMessages(I)V

    return-void
.end method

.method public onPause()V
    .locals 0

    .line 211
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 0

    .line 216
    invoke-super {p0, p1}, Landroid/app/Activity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method public onResume()V
    .locals 7

    .line 221
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 223
    sget-wide v0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    const-string v1, ""

    if-nez v0, :cond_0

    sget-wide v4, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    cmpl-double v0, v4, v2

    if-nez v0, :cond_0

    .line 224
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "0,0 (Please set it at [GPS][REF POSITION])"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 225
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewRefLocationValue:Landroid/widget/TextView;

    const/high16 v2, -0x10000

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 227
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Object;

    sget-wide v3, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-string v3, "%.06f"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v1, v1, [Ljava/lang/Object;

    sget-wide v5, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    .line 228
    invoke-static {v5, v6}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 229
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewRefLocationValue:Landroid/widget/TextView;

    const v2, -0xff0100

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 231
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewRefLocationValue:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method updateSessionActive()V
    .locals 9

    .line 684
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 685
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->updateSessionIdle()V

    .line 688
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    const-string v2, "Session Active: 00:00"

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    const/4 v0, 0x0

    .line 689
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSuccessGotLocations:Z

    .line 690
    new-instance v2, Ljava/util/Date;

    invoke-direct {v2}, Ljava/util/Date;-><init>()V

    invoke-virtual {v2}, Ljava/util/Date;->getTime()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString3(J)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionStartTime:Ljava/lang/String;

    .line 691
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTimerCount:I

    .line 692
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    const-string v2, ""

    .line 693
    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    .line 694
    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixTime:Ljava/lang/String;

    .line 695
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mDistance:I

    const-wide/16 v3, 0x0

    .line 696
    iput-wide v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    .line 697
    iput-wide v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    .line 698
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    .line 699
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    const/4 v3, -0x1

    .line 700
    iput v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocFixType:I

    .line 701
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    const-wide/16 v3, 0x3e8

    const/4 v1, 0x1

    .line 702
    invoke-direct {p0, v1, v3, v4}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->sendDelayedMessage(IJ)V

    .line 703
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewReportLocationValue:Landroid/widget/TextView;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v5, v1, [Ljava/lang/Object;

    iget-wide v6, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLat:D

    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v6

    aput-object v6, v5, v0

    const-string v6, "%.06f"

    invoke-static {v6, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v1, v1, [Ljava/lang/Object;

    iget-wide v7, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mLocLng:D

    .line 704
    invoke-static {v7, v8}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v5

    aput-object v5, v1, v0

    invoke-static {v6, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 703
    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 705
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewMinMaxDistanceValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMinDistance:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMaxDistance:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 706
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvCountValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvCount:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 707
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mTextViewSvSnrValue:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mMeasSvSnr:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 708
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->launchLocationEM(Landroid/content/Context;)V

    return-void
.end method

.method updateSessionIdle()V
    .locals 3

    .line 712
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return-void

    .line 715
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mButtonCall:Landroid/widget/Button;

    const-string v2, "Session Idle"

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 716
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->mSessionState:I

    .line 717
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->handleSessionStateIdle()V

    .line 718
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->launchLocationEM(Landroid/content/Context;)V

    return-void
.end method
