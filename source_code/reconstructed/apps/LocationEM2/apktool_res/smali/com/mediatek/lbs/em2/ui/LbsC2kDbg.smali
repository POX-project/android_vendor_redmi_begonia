.class public Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;
.super Landroid/app/Activity;
.source "LbsC2kDbg.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;,
        Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;
    }
.end annotation


# instance fields
.field callStateListener:Landroid/telephony/PhoneStateListener;

.field protected mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

.field private mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private mBroadcastReceiverRegistered:Z

.field private mButtonCall:Landroid/widget/Button;

.field private mButtonCearReports:Landroid/widget/Button;

.field private mButtonDecreaseTimeout:Landroid/widget/Button;

.field private mButtonIncreaseTimeout:Landroid/widget/Button;

.field private mCallState:I

.field public mDbgScreenRportPath:Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field private mLaunchDialerWhenTimeout:Z

.field private mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

.field mPilotList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;",
            ">;"
        }
    .end annotation
.end field

.field private mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field mSvList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;",
            ">;"
        }
    .end annotation
.end field

.field private mTextViewC2kBaseLocation:Landroid/widget/TextView;

.field private mTextViewC2kHVelocityValue:Landroid/widget/TextView;

.field private mTextViewC2kHeadingValue:Landroid/widget/TextView;

.field private mTextViewC2kHeightValue:Landroid/widget/TextView;

.field private mTextViewC2kLocationValue:Landroid/widget/TextView;

.field private mTextViewC2kPpmNum:Landroid/widget/TextView;

.field private mTextViewC2kPpmResult:Landroid/widget/TextView;

.field private mTextViewC2kPrmNum:Landroid/widget/TextView;

.field private mTextViewC2kPrmResult:Landroid/widget/TextView;

.field private mTextViewC2kRefPnValue:Landroid/widget/TextView;

.field private mTextViewC2kSidNidBaseIdValue:Landroid/widget/TextView;

.field private mTextViewC2kTimeStampValue:Landroid/widget/TextView;

.field private mTextViewC2kUncAlongPerpValue:Landroid/widget/TextView;

.field private mTextViewC2kUncAngleValue:Landroid/widget/TextView;

.field private mTextViewC2kUncVerValue:Landroid/widget/TextView;

.field private mTextViewC2kVVelocityValue:Landroid/widget/TextView;

.field private mTextViewReportPath:Landroid/widget/TextView;

.field private mTextViewWaitFixTimeout:Landroid/widget/TextView;

.field private mTimeCount:I

.field private mToggleButtonC2kDbg:Landroid/widget/ToggleButton;

.field private mWaitFixTimeout:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 50
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPilotList:Ljava/util/ArrayList;

    .line 51
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mSvList:Ljava/util/ArrayList;

    const/4 v0, 0x0

    .line 52
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mCallState:I

    .line 53
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiverRegistered:Z

    const/16 v1, 0x1e

    .line 54
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    .line 55
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLaunchDialerWhenTimeout:Z

    .line 56
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTimeCount:I

    .line 85
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0xc

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 86
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 148
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->callStateListener:Landroid/telephony/PhoneStateListener;

    .line 177
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    .line 368
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method private HandleTimerCallInfo(I)V
    .locals 7

    .line 388
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTimeCount:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTimeCount:I

    .line 389
    div-int/lit8 v0, p1, 0x3c

    .line 390
    rem-int/lit8 v2, p1, 0x3c

    const-string v3, "0"

    const-string v4, ""

    const/16 v5, 0xa

    .line 391
    new-instance v6, Ljava/lang/StringBuilder;

    if-ge v2, v5, :cond_0

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    if-ge v0, v5, :cond_1

    .line 392
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 393
    :goto_1
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Call Active : "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 395
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    if-lt p1, v0, :cond_2

    iget-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLaunchDialerWhenTimeout:Z

    if-eqz p1, :cond_2

    .line 396
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Wait fix timeout: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    const-string p1, "telecom"

    .line 397
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telecom/TelecomManager;

    const/4 v0, 0x0

    .line 398
    invoke-virtual {p1, v0}, Landroid/telecom/TelecomManager;->showInCallScreen(Z)V

    .line 399
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLaunchDialerWhenTimeout:Z

    :cond_2
    const-wide/16 v2, 0x3e8

    .line 401
    invoke-direct {p0, v1, v2, v3}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->sendDelayedMessage(IJ)V

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I
    .locals 0

    .line 35
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mCallState:I

    return p0
.end method

.method static synthetic access$002(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;I)I
    .locals 0

    .line 35
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mCallState:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;II)V
    .locals 0

    .line 35
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->sendMessage(II)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;Z)V
    .locals 0

    .line 35
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->setC2kDebugScreen(Z)V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I
    .locals 0

    .line 35
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    return p0
.end method

.method static synthetic access$1102(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;I)I
    .locals 0

    .line 35
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    return p1
.end method

.method static synthetic access$1108(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I
    .locals 2

    .line 35
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    return v0
.end method

.method static synthetic access$1110(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I
    .locals 2

    .line 35
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mWaitFixTimeout:I

    return v0
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/TextView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewWaitFixTimeout:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$1300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->showConfirmDialog()V

    return-void
.end method

.method static synthetic access$1400(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->registerBroadcasts()V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I
    .locals 0

    .line 35
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTimeCount:I

    return p0
.end method

.method static synthetic access$1600(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;I)V
    .locals 0

    .line 35
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->HandleTimerCallInfo(I)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;IIILjava/lang/Object;)V
    .locals 0

    .line 35
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/ToggleButton;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mToggleButtonC2kDbg:Landroid/widget/ToggleButton;

    return-object p0
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->showC2kConfirmDialog()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/os/Handler;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->unregisterBroadcasts()V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->clearAllValues()V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCearReports:Landroid/widget/Button;

    return-object p0
.end method

.method private clearAllValues()V
    .locals 3

    .line 442
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPilotList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 443
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 444
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kLocationValue:Landroid/widget/TextView;

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 445
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kTimeStampValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 446
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHVelocityValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 447
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kVVelocityValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 448
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeadingValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 449
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeightValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 450
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAngleValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 451
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAlongPerpValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 452
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncVerValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 453
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kSidNidBaseIdValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 454
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kRefPnValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 455
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kBaseLocation:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 456
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmNum:Landroid/widget/TextView;

    const-string v2, "0"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 457
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmNum:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 458
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmResult:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 459
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmResult:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private convertFromTable(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 753
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    const-string p1, "12288"

    packed-switch p0, :pswitch_data_0

    goto/16 :goto_0

    :pswitch_0
    const-string p1, "8192"

    goto/16 :goto_0

    :pswitch_1
    const-string p1, "6144"

    goto/16 :goto_0

    :pswitch_2
    const-string p1, "4096"

    goto/16 :goto_0

    :pswitch_3
    const-string p1, "3072"

    goto :goto_0

    :pswitch_4
    const-string p1, "2048"

    goto :goto_0

    :pswitch_5
    const-string p1, "1536"

    goto :goto_0

    :pswitch_6
    const-string p1, "1024"

    goto :goto_0

    :pswitch_7
    const-string p1, "768"

    goto :goto_0

    :pswitch_8
    const-string p1, "512"

    goto :goto_0

    :pswitch_9
    const-string p1, "384"

    goto :goto_0

    :pswitch_a
    const-string p1, "256"

    goto :goto_0

    :pswitch_b
    const-string p1, "192"

    goto :goto_0

    :pswitch_c
    const-string p1, "128"

    goto :goto_0

    :pswitch_d
    const-string p1, "96"

    goto :goto_0

    :pswitch_e
    const-string p1, "64"

    goto :goto_0

    :pswitch_f
    const-string p1, "48"

    goto :goto_0

    :pswitch_10
    const-string p1, "32"

    goto :goto_0

    :pswitch_11
    const-string p1, "24"

    goto :goto_0

    :pswitch_12
    const-string p1, "16"

    goto :goto_0

    :pswitch_13
    const-string p1, "12"

    goto :goto_0

    :pswitch_14
    const-string p1, "8"

    goto :goto_0

    :pswitch_15
    const-string p1, "6"

    goto :goto_0

    :pswitch_16
    const-string p1, "4"

    goto :goto_0

    :pswitch_17
    const-string p1, "3"

    goto :goto_0

    :pswitch_18
    const-string p1, "2"

    goto :goto_0

    :pswitch_19
    const-string p1, "1.5"

    goto :goto_0

    :pswitch_1a
    const-string p1, "1"

    goto :goto_0

    :pswitch_1b
    const-string p1, "0.75"

    goto :goto_0

    :pswitch_1c
    const-string p1, "0.5"

    :goto_0
    :pswitch_1d
    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1d
    .end packed-switch
.end method

.method private convertHVelocity(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 674
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x3e800000    # 0.25f

    mul-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 676
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private convertHeading(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 662
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x43b40000    # 360.0f

    mul-float/2addr p0, p1

    const/high16 p1, 0x44800000    # 1024.0f

    div-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 664
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private convertLatitude(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 680
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x43340000    # 180.0f

    mul-float/2addr p0, p1

    const/high16 p1, 0x4c000000    # 3.3554432E7f

    div-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 682
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private convertLongitude(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 686
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x43b40000    # 360.0f

    mul-float/2addr p0, p1

    const/high16 p1, 0x4c800000    # 6.7108864E7f

    div-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 688
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private convertPilotPnPhase(Ljava/lang/String;)F
    .locals 0

    .line 638
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x41800000    # 16.0f

    div-float/2addr p0, p1

    return p0
.end method

.method private convertPilotStrength(Ljava/lang/String;)F
    .locals 0

    .line 629
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    int-to-float p0, p0

    const/high16 p1, -0x40000000    # -2.0f

    div-float/2addr p0, p1

    return p0
.end method

.method private convertPsDoppler(Ljava/lang/String;)F
    .locals 0

    .line 651
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const p1, 0x3e4ccccd    # 0.2f

    mul-float/2addr p0, p1

    return p0
.end method

.method private convertSvCodePh(Ljava/lang/String;Ljava/lang/String;)F
    .locals 0

    .line 644
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    .line 645
    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p1

    int-to-float p0, p0

    int-to-float p1, p1

    const/high16 p2, 0x44800000    # 1024.0f

    div-float/2addr p1, p2

    add-float/2addr p0, p1

    return p0
.end method

.method private convertUncAngle(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 656
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x40b40000    # 5.625f

    mul-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 658
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private convertVVelocity(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 668
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x3f000000    # 0.5f

    mul-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 670
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private getTestCount(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 732
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    .line 741
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "("

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "th)"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, "(3rd)"

    goto :goto_0

    :cond_1
    const-string p0, "(2nd)"

    goto :goto_0

    :cond_2
    const-string p0, "(1st)"

    :goto_0
    return-object p0
.end method

.method private getTimestamp(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 694
    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    packed-switch p0, :pswitch_data_0

    const-string p0, ""

    goto :goto_0

    :pswitch_0
    const-string p0, "Dec"

    goto :goto_0

    :pswitch_1
    const-string p0, "Nov"

    goto :goto_0

    :pswitch_2
    const-string p0, "Oct"

    goto :goto_0

    :pswitch_3
    const-string p0, "Sep"

    goto :goto_0

    :pswitch_4
    const-string p0, "Aug"

    goto :goto_0

    :pswitch_5
    const-string p0, "Jul"

    goto :goto_0

    :pswitch_6
    const-string p0, "Jun"

    goto :goto_0

    :pswitch_7
    const-string p0, "May"

    goto :goto_0

    :pswitch_8
    const-string p0, "Apr"

    goto :goto_0

    :pswitch_9
    const-string p0, "Mar"

    goto :goto_0

    :pswitch_a
    const-string p0, "Feb"

    goto :goto_0

    :pswitch_b
    const-string p0, "Jan"

    .line 724
    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " "

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 725
    invoke-virtual {p4}, Ljava/lang/String;->length()I

    move-result p0

    const-string p1, "0"

    const/4 p3, 0x1

    if-le p0, p3, :cond_0

    goto :goto_1

    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    :goto_1
    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 726
    invoke-virtual {p5}, Ljava/lang/String;->length()I

    move-result p4

    if-le p4, p3, :cond_1

    goto :goto_2

    :cond_1
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p5

    :goto_2
    invoke-virtual {p2, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 727
    invoke-virtual {p6}, Ljava/lang/String;->length()I

    move-result p0

    if-le p0, p3, :cond_2

    goto :goto_3

    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p6

    :goto_3
    invoke-virtual {p2, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 748
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_C2kDbg"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private registerBroadcasts()V
    .locals 3

    .line 137
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiverRegistered:Z

    if-nez v0, :cond_0

    .line 138
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "com.mediatek.lbs.em2.action.debug_message"

    .line 139
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 140
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    :cond_0
    const/4 v0, 0x1

    .line 142
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiverRegistered:Z

    const-string v0, "phone"

    .line 144
    invoke-virtual {p0, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 145
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->callStateListener:Landroid/telephony/PhoneStateListener;

    const/16 v1, 0x20

    invoke-virtual {v0, p0, v1}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    return-void
.end method

.method private sendDelayedMessage(IJ)V
    .locals 0

    .line 361
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method private sendMessage(II)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 357
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 365
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private setC2kDebugScreen(Z)V
    .locals 2

    .line 404
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setC2kDebugScreen enabled: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 405
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    if-nez v0, :cond_0

    const-string p0, "setC2kDebugScreen return because of null mAgpsInterface"

    .line 406
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    return-void

    .line 409
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setVzwDebugScreenEnable(Z)V

    if-eqz p1, :cond_1

    .line 413
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    const-class v0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-virtual {p1, p0, v0}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_0

    .line 416
    :cond_1
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    const-class v0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-virtual {p1, p0, v0}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/app/Activity;->stopService(Landroid/content/Intent;)Z

    :goto_0
    return-void
.end method

.method private showC2kConfirmDialog()V
    .locals 3

    .line 303
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Enable C2K DEBUG may save sensitve data in report files, are you sure to enable it?"

    .line 304
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 305
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 307
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 316
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$9;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 322
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 323
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private showConfirmDialog()V
    .locals 3

    .line 337
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Are you sure to detele all Reports?"

    .line 338
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 339
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 341
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$10;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 347
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$11;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$11;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 352
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 353
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private unregisterBroadcasts()V
    .locals 2

    .line 168
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiverRegistered:Z

    if-eqz v0, :cond_0

    .line 169
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    :cond_0
    const/4 v0, 0x0

    .line 171
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mBroadcastReceiverRegistered:Z

    const-string v1, "phone"

    .line 173
    invoke-virtual {p0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    .line 174
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->callStateListener:Landroid/telephony/PhoneStateListener;

    invoke-virtual {v1, p0, v0}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    return-void
.end method


# virtual methods
.method HandleCallStateUpdated(I)V
    .locals 3

    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 833
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    const-string v1, "Call Active : 00:00"

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 834
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLaunchDialerWhenTimeout:Z

    const/4 p1, 0x0

    .line 835
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTimeCount:I

    const-wide/16 v1, 0x3e8

    .line 836
    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->sendDelayedMessage(IJ)V

    .line 837
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->clearAllValues()V

    goto :goto_0

    .line 829
    :cond_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    const-string v1, "Call Idle"

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 830
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->removeMessages(I)V

    goto :goto_0

    .line 826
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    const-string p1, "Call State"

    invoke-virtual {p0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :goto_0
    return-void
.end method

.method deleteReportFiles()V
    .locals 3

    .line 327
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "deleteReportFiles in path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 328
    new-instance v0, Ljava/io/File;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 329
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 330
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p0, v1

    .line 331
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method protected initAgpsInterface()V
    .locals 1

    .line 129
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "agpsInterface connection failure"

    .line 131
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 132
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected initUI()V
    .locals 2

    const v0, 0x7f050171

    .line 213
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mToggleButtonC2kDbg:Landroid/widget/ToggleButton;

    const v0, 0x7f05012f

    .line 214
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    const v0, 0x7f050134

    .line 215
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonIncreaseTimeout:Landroid/widget/Button;

    const v0, 0x7f050132

    .line 216
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonDecreaseTimeout:Landroid/widget/Button;

    const v0, 0x7f050130

    .line 217
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCearReports:Landroid/widget/Button;

    const v0, 0x7f0500cc

    .line 219
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kLocationValue:Landroid/widget/TextView;

    const v0, 0x7f0500d1

    .line 220
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kTimeStampValue:Landroid/widget/TextView;

    const v0, 0x7f0500c9

    .line 221
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHVelocityValue:Landroid/widget/TextView;

    const v0, 0x7f0500d5

    .line 222
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kVVelocityValue:Landroid/widget/TextView;

    const v0, 0x7f0500ca

    .line 223
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeadingValue:Landroid/widget/TextView;

    const v0, 0x7f0500cb

    .line 224
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeightValue:Landroid/widget/TextView;

    const v0, 0x7f0500d3

    .line 225
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAngleValue:Landroid/widget/TextView;

    const v0, 0x7f0500d2

    .line 226
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAlongPerpValue:Landroid/widget/TextView;

    const v0, 0x7f0500d4

    .line 227
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncVerValue:Landroid/widget/TextView;

    const v0, 0x7f0500d0

    .line 228
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kSidNidBaseIdValue:Landroid/widget/TextView;

    const v0, 0x7f0500cf

    .line 229
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kRefPnValue:Landroid/widget/TextView;

    const v0, 0x7f0500c8

    .line 230
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kBaseLocation:Landroid/widget/TextView;

    const v0, 0x7f0500cd

    .line 232
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmNum:Landroid/widget/TextView;

    const v0, 0x7f0500ce

    .line 233
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmNum:Landroid/widget/TextView;

    const v0, 0x7f05010c

    .line 234
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmResult:Landroid/widget/TextView;

    const v0, 0x7f05010d

    .line 235
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmResult:Landroid/widget/TextView;

    const v0, 0x7f050110

    .line 236
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewReportPath:Landroid/widget/TextView;

    const v0, 0x7f050117

    .line 237
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewWaitFixTimeout:Landroid/widget/TextView;

    .line 239
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mToggleButtonC2kDbg:Landroid/widget/ToggleButton;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 240
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mToggleButtonC2kDbg:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 259
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 271
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonIncreaseTimeout:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 278
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonDecreaseTimeout:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$6;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 286
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCearReports:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const-string v0, "/sdcard/DbgScreenReport/"

    .line 293
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    .line 294
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Report file path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 295
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 296
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 297
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 299
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewReportPath:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mDbgScreenRportPath:Ljava/lang/String;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 107
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 109
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->initAgpsInterface()V
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    const p1, 0x7f070002

    .line 115
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 116
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    .line 117
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    .line 119
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->initUI()V

    const-string p1, "onCreate, set debug Screen function disabled"

    .line 121
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    const/4 p1, 0x0

    .line 122
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->HandleCallStateUpdated(I)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mButtonCall:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 124
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->setC2kDebugScreen(Z)V

    return-void

    :catch_0
    const-string p0, "onCreate, Failed to initAgpsInterface"

    .line 111
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    const-string v0, "onDestroy"

    .line 190
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 191
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    const/4 v0, 0x0

    .line 192
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->setC2kDebugScreen(Z)V

    .line 193
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->unregisterBroadcasts()V

    .line 194
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Landroid/os/Handler;->removeMessages(I)V

    return-void
.end method

.method public onPause()V
    .locals 0

    .line 199
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 0

    .line 204
    invoke-super {p0, p1}, Landroid/app/Activity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method public onResume()V
    .locals 0

    .line 209
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    return-void
.end method

.method parseAa(Ljava/lang/String;)V
    .locals 1

    .line 435
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 436
    array-length p1, p0

    const/4 v0, 0x3

    if-lt p1, v0, :cond_0

    const/4 p1, 0x2

    .line 437
    aget-object p0, p0, p1

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method parseMsg(Ljava/lang/String;)V
    .locals 1

    const-string v0, "vzw_aa"

    .line 421
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 422
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->parseAa(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "vzw_ppm"

    .line 423
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 424
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->parsePpm(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "vzw_pos"

    .line 425
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 426
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->parsePos(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "vzw_prm"

    .line 427
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 428
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->parsePrm(Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method parsePos(Ljava/lang/String;)V
    .locals 28

    move-object/from16 v7, p0

    .line 579
    invoke-static/range {p1 .. p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 580
    array-length v1, v0

    const/16 v2, 0x1b

    if-ge v1, v2, :cond_0

    goto/16 :goto_0

    :cond_0
    const/4 v1, 0x2

    .line 586
    aget-object v8, v0, v1

    const/4 v1, 0x3

    .line 587
    aget-object v9, v0, v1

    const/4 v1, 0x4

    .line 588
    aget-object v10, v0, v1

    const/4 v1, 0x5

    .line 589
    aget-object v11, v0, v1

    const/4 v1, 0x6

    .line 590
    aget-object v12, v0, v1

    const/4 v1, 0x7

    .line 591
    aget-object v13, v0, v1

    const/16 v1, 0x8

    .line 592
    aget-object v14, v0, v1

    const/16 v1, 0x9

    .line 593
    aget-object v15, v0, v1

    const/16 v1, 0xa

    .line 594
    aget-object v6, v0, v1

    const/16 v1, 0xb

    .line 595
    aget-object v5, v0, v1

    const/16 v1, 0xc

    .line 596
    aget-object v4, v0, v1

    const/16 v1, 0xd

    .line 597
    aget-object v3, v0, v1

    const/16 v1, 0xe

    .line 598
    aget-object v2, v0, v1

    const/16 v1, 0xf

    .line 599
    aget-object v1, v0, v1

    const/16 v16, 0x10

    move-object/from16 p1, v13

    .line 600
    aget-object v13, v0, v16

    const/16 v16, 0x11

    move-object/from16 v17, v13

    .line 601
    aget-object v13, v0, v16

    const/16 v16, 0x12

    .line 602
    aget-object v16, v0, v16

    const/16 v16, 0x13

    .line 603
    aget-object v16, v0, v16

    const/16 v16, 0x14

    .line 604
    aget-object v16, v0, v16

    const/16 v18, 0x15

    .line 605
    aget-object v18, v0, v18

    const/16 v19, 0x16

    .line 606
    aget-object v19, v0, v19

    const/16 v20, 0x17

    .line 607
    aget-object v20, v0, v20

    const/16 v21, 0x18

    .line 608
    aget-object v21, v0, v21

    const/16 v22, 0x19

    .line 609
    aget-object v22, v0, v22

    const/16 v23, 0x1a

    .line 610
    aget-object v0, v0, v23

    .line 611
    invoke-direct {v7, v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->getTestCount(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    move-object/from16 v23, v13

    move-object v13, v0

    move-object/from16 v0, p0

    move-object/from16 v24, v1

    move-object/from16 v1, v16

    move-object/from16 v25, v2

    move-object/from16 v2, v18

    move-object/from16 v26, v3

    move-object/from16 v3, v19

    move-object/from16 v27, v4

    move-object/from16 v4, v20

    move-object/from16 v16, v12

    move-object v12, v5

    move-object/from16 v5, v21

    move-object/from16 v18, v11

    move-object v11, v6

    move-object/from16 v6, v22

    .line 612
    invoke-direct/range {v0 .. v6}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->getTimestamp(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 614
    iget-object v1, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kLocationValue:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {v7, v8}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertLatitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " / "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {v7, v9}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertLongitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 615
    iget-object v1, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kTimeStampValue:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 616
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHVelocityValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {v7, v11}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertHVelocity(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " m/s"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 617
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kVVelocityValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {v7, v12}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertVVelocity(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 618
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeadingValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {v7, v15}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertHeading(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " d"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 619
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kHeightValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " m"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 620
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAngleValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {v7, v10}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertUncAngle(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 621
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncAlongPerpValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v2, v18

    invoke-direct {v7, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertFromTable(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " m /"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v2, v16

    invoke-direct {v7, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertFromTable(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 622
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kUncVerValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v2, p1

    invoke-direct {v7, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertFromTable(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 623
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kSidNidBaseIdValue:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v2, v27

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v2, v26

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v2, v25

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 624
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kRefPnValue:Landroid/widget/TextView;

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 625
    iget-object v0, v7, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kBaseLocation:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v2, v24

    invoke-direct {v7, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertLatitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v2, v17

    invoke-direct {v7, v2}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertLongitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_1
    :goto_0
    const-string v0, "parsePos Error, item is null or size less than 27"

    .line 581
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    return-void
.end method

.method parsePpm(Ljava/lang/String;)V
    .locals 10

    .line 470
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p0, "parsePpm Error, split record return null"

    .line 475
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    return-void

    :cond_0
    const/4 v1, 0x2

    .line 479
    array-length v2, v0

    const/4 v3, 0x3

    const/4 v4, 0x0

    if-lt v2, v3, :cond_1

    aget-object v1, v0, v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_1
    move v3, v1

    move v1, v4

    .line 480
    :goto_0
    array-length v2, v0

    if-ge v3, v2, :cond_3

    .line 481
    array-length v2, v0

    sub-int/2addr v2, v3

    const/4 v5, 0x5

    if-ge v2, v5, :cond_2

    .line 482
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parsePpm Error, left item size is less than 5, msg: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v3, 0x1

    .line 485
    aget-object v3, v0, v3

    add-int/lit8 v5, v2, 0x1

    .line 486
    aget-object v2, v0, v2

    add-int/lit8 v6, v5, 0x1

    .line 487
    aget-object v5, v0, v5

    add-int/lit8 v7, v6, 0x1

    .line 488
    aget-object v6, v0, v6

    add-int/lit8 v8, v7, 0x1

    .line 489
    aget-object v7, v0, v7

    .line 491
    new-instance v9, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;

    invoke-direct {v9, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    .line 492
    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v9, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mIndex:I

    .line 493
    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v9, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPn:I

    .line 494
    invoke-direct {p0, v5}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertPilotPnPhase(Ljava/lang/String;)F

    move-result v2

    iput v2, v9, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPilot_pn_phase:F

    .line 495
    invoke-direct {p0, v6}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertPilotStrength(Ljava/lang/String;)F

    move-result v2

    iput v2, v9, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPilot_strength:F

    .line 496
    invoke-static {v7}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    .line 497
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPilotList:Ljava/util/ArrayList;

    invoke-virtual {v2, v9}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    move v3, v8

    goto :goto_0

    .line 499
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmNum:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 501
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 502
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    const-string v0, "        PN  PN_Phase  Ec/Io"

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 503
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPilotList:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;

    .line 504
    iget v1, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mIndex:I

    const-string v3, "0"

    const/16 v5, 0x9

    if-le v1, v5, :cond_4

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_3
    iget v6, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mIndex:I

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 505
    iget v6, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPn:I

    if-le v6, v5, :cond_5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPn:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_4

    :cond_5
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPn:I

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 507
    :goto_4
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\n["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]  "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    new-array v7, v3, [Ljava/lang/Object;

    iget v8, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPilot_pn_phase:F

    .line 508
    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v8

    aput-object v8, v7, v4

    const-string v8, "%.04f"

    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v1, v3, [Ljava/lang/Object;

    iget v0, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$PilotInfo;->mPilot_strength:F

    .line 509
    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    aput-object v0, v1, v4

    const-string v0, "%.01f"

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 507
    invoke-virtual {v5, v0}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 511
    :cond_6
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPpmResult:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPpmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method parsePrm(Ljava/lang/String;)V
    .locals 11

    .line 524
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p0, "parsePrm Error, split record return null"

    .line 529
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    return-void

    :cond_0
    const/4 v1, 0x2

    .line 533
    array-length v2, v0

    const/4 v3, 0x3

    const/4 v4, 0x0

    if-lt v2, v3, :cond_1

    aget-object v1, v0, v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_1
    move v3, v1

    move v1, v4

    .line 534
    :goto_0
    array-length v2, v0

    if-ge v3, v2, :cond_3

    .line 535
    array-length v2, v0

    sub-int/2addr v2, v3

    const/4 v5, 0x6

    if-ge v2, v5, :cond_2

    .line 536
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "parsePrm Error, left item size is less than 6, msg: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v3, 0x1

    .line 539
    aget-object v3, v0, v3

    add-int/lit8 v5, v2, 0x1

    .line 540
    aget-object v2, v0, v2

    add-int/lit8 v6, v5, 0x1

    .line 541
    aget-object v5, v0, v5

    add-int/lit8 v7, v6, 0x1

    .line 542
    aget-object v6, v0, v6

    add-int/lit8 v8, v7, 0x1

    .line 543
    aget-object v7, v0, v7

    add-int/lit8 v9, v8, 0x1

    .line 544
    aget-object v8, v0, v8

    .line 546
    new-instance v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;

    invoke-direct {v10, p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;-><init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    .line 547
    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mIndex:I

    .line 548
    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_prn_num:I

    .line 549
    invoke-static {v5}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_cno:I

    .line 550
    invoke-direct {p0, v6}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertPsDoppler(Ljava/lang/String;)F

    move-result v2

    iput v2, v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mPs_doppler:F

    .line 551
    invoke-direct {p0, v7, v8}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->convertSvCodePh(Ljava/lang/String;Ljava/lang/String;)F

    move-result v2

    iput v2, v10, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_code_ph:F

    .line 552
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v2, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    move v3, v9

    goto :goto_0

    .line 554
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmNum:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 556
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    .line 557
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    const-string v0, "    PRN  C/NO  Dopp  Code_Ph"

    invoke-virtual {p1, v0}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    .line 558
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;

    .line 559
    iget v1, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mIndex:I

    const-string v3, "0"

    const/16 v5, 0x9

    if-le v1, v5, :cond_4

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_4
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_3
    iget v6, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mIndex:I

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 560
    iget v6, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_prn_num:I

    if-le v6, v5, :cond_5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_prn_num:I

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_4

    :cond_5
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_prn_num:I

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 562
    :goto_4
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\n["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]  "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_cno:I

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ".0  "

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    new-array v7, v3, [Ljava/lang/Object;

    iget v8, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mPs_doppler:F

    .line 563
    invoke-static {v8}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v8

    aput-object v8, v7, v4

    const-string v8, "%.02f"

    invoke-static {v8, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array v1, v3, [Ljava/lang/Object;

    iget v0, v0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;->mSv_code_ph:F

    .line 564
    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    aput-object v0, v1, v4

    const-string v0, "%.04f"

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 562
    invoke-virtual {v5, v0}, Lcom/mediatek/lbs/em2/ui/StringList;->add(Ljava/lang/String;)V

    goto/16 :goto_2

    .line 566
    :cond_6
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mTextViewC2kPrmResult:Landroid/widget/TextView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->mPrmStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/StringList;->get()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
