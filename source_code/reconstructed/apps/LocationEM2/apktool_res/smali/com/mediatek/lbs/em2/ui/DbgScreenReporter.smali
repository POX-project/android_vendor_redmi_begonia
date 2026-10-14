.class public Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;
.super Landroid/app/Service;
.source "DbgScreenReporter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;
    }
.end annotation


# instance fields
.field callStateListener:Landroid/telephony/PhoneStateListener;

.field private mAllSvNum:I

.field private mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private mCallDialTime:Ljava/lang/String;

.field private mCallEndTime:Ljava/lang/String;

.field private mCallState:I

.field private mFixInfo:Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field private mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

.field private mPilotList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private mRegistered:Z

.field private mReportFileName:Ljava/lang/String;

.field private mSvList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    const/4 v0, 0x1

    .line 35
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallState:I

    .line 38
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mPilotList:Ljava/util/ArrayList;

    .line 39
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    const/4 v0, 0x0

    .line 44
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mRegistered:Z

    .line 122
    new-instance v0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$1;-><init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->callStateListener:Landroid/telephony/PhoneStateListener;

    .line 143
    new-instance v0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$2;-><init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    .line 343
    new-instance v0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;-><init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)I
    .locals 0

    .line 26
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallState:I

    return p0
.end method

.method static synthetic access$002(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;I)I
    .locals 0

    .line 26
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallState:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;II)V
    .locals 0

    .line 26
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->sendMessage(II)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;IIILjava/lang/Object;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->createReport()V

    return-void
.end method

.method private clearAllValues()V
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mPilotList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 177
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    const/4 v0, 0x0

    .line 178
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mFixInfo:Ljava/lang/String;

    .line 179
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallDialTime:Ljava/lang/String;

    .line 180
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallEndTime:Ljava/lang/String;

    return-void
.end method

.method private convertLatitude(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 254
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x43340000    # 180.0f

    mul-float/2addr p0, p1

    const/high16 p1, 0x4c000000    # 3.3554432E7f

    div-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 256
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

    .line 260
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p0

    int-to-float p0, p0

    const/high16 p1, 0x43b40000    # 360.0f

    mul-float/2addr p0, p1

    const/high16 p1, 0x4c800000    # 6.7108864E7f

    div-float/2addr p0, p1

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    .line 262
    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    const/4 v0, 0x0

    aput-object p0, p1, v0

    const-string p0, "%.06f"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private createReport()V
    .locals 7

    .line 107
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

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mReportFileName:Ljava/lang/String;

    .line 108
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Create report file name: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mReportFileName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 110
    invoke-virtual {p0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mReportFileName:Ljava/lang/String;

    const-string v2, "DbgScreenReport"

    const/4 v3, 0x0

    const-string v5, "Call Dial Time, Call End Time, Fix Time, Fix Type, Latitude, Longitude, #SV, #MS Sat, SV info, Avg CNo, call_count\n"

    const/4 v6, 0x1

    invoke-static/range {v1 .. v6}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->write2File(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z

    .line 113
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "com.mediatek.lbs.em2.action.debug_message"

    .line 114
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 115
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    const-string v0, "phone"

    .line 118
    invoke-virtual {p0, v0}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 119
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->callStateListener:Landroid/telephony/PhoneStateListener;

    const/16 v1, 0x20

    invoke-virtual {v0, p0, v1}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    return-void
.end method

.method private generateFixReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 280
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ", "

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 281
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 282
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 283
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 284
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mAllSvNum:I

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 285
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 286
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "( "

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 288
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    const/4 v0, 0x0

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;

    .line 289
    iget v3, v2, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_prn_num:I

    const/16 v4, 0x9

    if-le v3, v4, :cond_0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "0"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    iget v4, v2, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_prn_num:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 290
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "SV"

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ":"

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, v2, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_cno:I

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 291
    iget v2, v2, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_cno:I

    add-int/2addr v0, v2

    goto :goto_0

    .line 293
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "), "

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 294
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_2

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result p0

    div-int/2addr v0, p0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    :cond_2
    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 295
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\n"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private getTimestamp(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 269
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/"

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 270
    invoke-virtual {p4}, Ljava/lang/String;->length()I

    move-result p1

    const-string p2, "0"

    const/4 p3, 0x1

    if-le p1, p3, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    :goto_0
    invoke-virtual {p0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ":"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 271
    invoke-virtual {p5}, Ljava/lang/String;->length()I

    move-result p4

    if-le p4, p3, :cond_1

    goto :goto_1

    :cond_1
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p5

    :goto_1
    invoke-virtual {p0, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 272
    invoke-virtual {p6}, Ljava/lang/String;->length()I

    move-result p1

    if-le p1, p3, :cond_2

    goto :goto_2

    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p6

    :goto_2
    invoke-virtual {p0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 388
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_DbgScreenReporter"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sendMessage(II)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 332
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 340
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private setServiceForeground()V
    .locals 7

    const-string v0, "setServiceForeground"

    .line 302
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    const-string v0, "notification"

    .line 307
    invoke-virtual {p0, v0}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 309
    new-instance v1, Landroid/app/NotificationChannel;

    const-string v2, "mtk_app_channel_id"

    const-string v3, "MTK APP"

    const/4 v4, 0x2

    invoke-direct {v1, v2, v3, v4}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    const/4 v3, 0x0

    .line 311
    invoke-virtual {v1, v3}, Landroid/app/NotificationChannel;->enableLights(Z)V

    const/high16 v4, -0x10000

    .line 312
    invoke-virtual {v1, v4}, Landroid/app/NotificationChannel;->setLightColor(I)V

    .line 313
    invoke-virtual {v1, v3}, Landroid/app/NotificationChannel;->enableVibration(Z)V

    .line 314
    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 317
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getEm2LaunchIntent(Landroid/content/Context;)Landroid/content/Intent;

    move-result-object v0

    .line 316
    invoke-static {p0, v3, v0, v3}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 318
    new-instance v1, Landroid/app/Notification$Builder;

    invoke-direct {v1, p0}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    const/4 v4, 0x1

    .line 319
    invoke-virtual {v1, v4}, Landroid/app/Notification$Builder;->setAutoCancel(Z)Landroid/app/Notification$Builder;

    move-result-object v1

    const-string v5, "Debug Screen Reporter"

    .line 320
    invoke-virtual {v1, v5}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v1

    const-string v5, "Service is Running! Tap to launch Activity."

    .line 321
    invoke-virtual {v1, v5}, Landroid/app/Notification$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v1

    .line 322
    invoke-virtual {v1, v0}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v0

    const v1, 0x7f040005

    .line 323
    invoke-virtual {v0, v1}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 324
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v0, v5, v6}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 325
    invoke-virtual {v0, v2}, Landroid/app/Notification$Builder;->setChannel(Ljava/lang/String;)Landroid/app/Notification$Builder;

    move-result-object v0

    .line 326
    invoke-virtual {v0}, Landroid/app/Notification$Builder;->build()Landroid/app/Notification;

    move-result-object v0

    new-array v1, v4, [Ljava/lang/Object;

    aput-object v0, v1, v3

    const-string v2, "notification = %s"

    .line 327
    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    const/16 v1, 0x4567

    .line 328
    invoke-virtual {p0, v1, v0}, Landroid/app/Service;->startForeground(ILandroid/app/Notification;)V

    return-void
.end method


# virtual methods
.method HandleCallStateUpdated(I)V
    .locals 6

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 379
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->clearAllValues()V

    .line 380
    new-instance p1, Ljava/util/Date;

    invoke-direct {p1}, Ljava/util/Date;-><init>()V

    invoke-virtual {p1}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString3(J)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallDialTime:Ljava/lang/String;

    .line 381
    invoke-virtual {p0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->launchLocationEM(Landroid/content/Context;)V

    goto :goto_0

    .line 368
    :cond_1
    new-instance p1, Ljava/util/Date;

    invoke-direct {p1}, Ljava/util/Date;-><init>()V

    invoke-virtual {p1}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->getTimeString3(J)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallEndTime:Ljava/lang/String;

    .line 370
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallDialTime:Ljava/lang/String;

    if-eqz p1, :cond_3

    .line 371
    invoke-virtual {p0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mReportFileName:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallDialTime:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mCallEndTime:Ljava/lang/String;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 374
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mFixInfo:Ljava/lang/String;

    if-nez v1, :cond_2

    const-string v1, "\n"

    :cond_2
    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    const-string v1, "DbgScreenReport"

    .line 371
    invoke-static/range {v0 .. v5}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->write2File(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z

    .line 376
    :cond_3
    invoke-virtual {p0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->launchLocationEM(Landroid/content/Context;)V

    :goto_0
    return-void
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 0

    const/4 p0, 0x0

    return-object p0
.end method

.method public onCreate()V
    .locals 2

    const-string v0, "onCreate"

    .line 72
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 74
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    const-string v0, "location"

    .line 75
    invoke-virtual {p0, v0}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    .line 76
    invoke-static {p0}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    .line 78
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->setServiceForeground()V

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 79
    invoke-direct {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->sendMessage(II)V

    .line 80
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mRegistered:Z

    return-void
.end method

.method public onDestroy()V
    .locals 2

    const-string v0, "onDestroy"

    .line 95
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 96
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 97
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mRegistered:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 98
    invoke-virtual {p0, v0}, Landroid/app/Service;->stopForeground(Z)V

    .line 99
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mLocalBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const-string v0, "phone"

    .line 101
    invoke-virtual {p0, v0}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 102
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->callStateListener:Landroid/telephony/PhoneStateListener;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    :cond_0
    return-void
.end method

.method public onStart(Landroid/content/Intent;I)V
    .locals 0

    const-string p0, "onStart"

    .line 92
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 1

    const-string v0, "onStartCommand"

    .line 86
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 87
    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    move-result p0

    return p0
.end method

.method parseAa(Ljava/lang/String;)V
    .locals 2

    .line 169
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 170
    array-length v0, p1

    const/4 v1, 0x3

    if-lt v0, v1, :cond_0

    const/4 v0, 0x2

    .line 171
    aget-object p1, p1, v0

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mAllSvNum:I

    :cond_0
    return-void
.end method

.method parseMsg(Ljava/lang/String;)V
    .locals 1

    const-string v0, "vzw_aa"

    .line 155
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 156
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->parseAa(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "vzw_pos"

    .line 157
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 158
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->parsePos(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "vzw_prm"

    .line 159
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 160
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->parsePrm(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string p0, "vzw_ppm"

    .line 161
    invoke-virtual {p1, p0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    :goto_0
    return-void
.end method

.method parsePos(Ljava/lang/String;)V
    .locals 10

    .line 232
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 233
    array-length v0, p1

    const/16 v1, 0x1b

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    .line 239
    aget-object v0, p1, v0

    const/4 v1, 0x3

    .line 240
    aget-object v1, p1, v1

    const/16 v2, 0x14

    .line 241
    aget-object v4, p1, v2

    const/16 v2, 0x15

    .line 242
    aget-object v5, p1, v2

    const/16 v2, 0x16

    .line 243
    aget-object v6, p1, v2

    const/16 v2, 0x17

    .line 244
    aget-object v7, p1, v2

    const/16 v2, 0x18

    .line 245
    aget-object v8, p1, v2

    const/16 v2, 0x19

    .line 246
    aget-object v9, p1, v2

    const/16 v2, 0x1a

    .line 247
    aget-object p1, p1, v2

    move-object v3, p0

    .line 248
    invoke-direct/range {v3 .. v9}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->getTimestamp(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 249
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->convertLatitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->convertLongitude(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1, v2, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->generateFixReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mFixInfo:Ljava/lang/String;

    return-void

    :cond_1
    :goto_0
    const-string p0, "parsePos Error, item is null or size less than 27"

    .line 234
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    return-void
.end method

.method parsePrm(Ljava/lang/String;)V
    .locals 6

    .line 192
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p0, "parsePrm Error, pares record return null"

    .line 197
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    return-void

    :cond_0
    const/4 v1, 0x2

    .line 201
    array-length v2, v0

    const/4 v3, 0x3

    if-lt v2, v3, :cond_1

    aget-object v1, v0, v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move v1, v3

    .line 202
    :cond_1
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_3

    .line 203
    array-length v2, v0

    sub-int/2addr v2, v1

    const/4 v3, 0x6

    if-ge v2, v3, :cond_2

    .line 204
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parsePrm Error, left item size is less than 6, msg: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v1, 0x1

    .line 207
    aget-object v1, v0, v1

    add-int/lit8 v3, v2, 0x1

    .line 208
    aget-object v2, v0, v2

    add-int/lit8 v4, v3, 0x1

    .line 209
    aget-object v3, v0, v3

    add-int/lit8 v5, v4, 0x1

    .line 210
    aget-object v4, v0, v4

    add-int/lit8 v4, v5, 0x1

    .line 211
    aget-object v5, v0, v5

    add-int/lit8 v5, v4, 0x1

    .line 212
    aget-object v4, v0, v4

    .line 214
    new-instance v4, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;

    invoke-direct {v4, p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;-><init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V

    .line 215
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    .line 216
    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v4, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_prn_num:I

    .line 217
    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, v4, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$SvInfo;->mSv_cno:I

    .line 218
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    move v1, v5

    goto :goto_0

    :cond_3
    :goto_1
    return-void
.end method
