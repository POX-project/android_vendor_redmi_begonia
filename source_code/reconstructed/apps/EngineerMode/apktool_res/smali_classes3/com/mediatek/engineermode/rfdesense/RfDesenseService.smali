.class public Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
.super Landroid/app/Service;
.source "RfDesenseService.java"


# instance fields
.field private final DEFAULT_VALUES:Ljava/lang/String;

.field private final STATE_NONE:I

.field private final STATE_STARTED:I

.field private final TAG:Ljava/lang/String;

.field private mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

.field private mErrorCodeKey:I

.field private mErrorCodeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mIsSending:Z

.field private mPhoneStateListener:Landroid/telephony/PhoneStateListener;

.field private mRadioStatesLast:I

.field private mRatList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;",
            ">;"
        }
    .end annotation
.end field

.field private mRfDesenseServiceData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;",
            ">;"
        }
    .end annotation
.end field

.field private mRfdesenseDefaultData:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;",
            ">;"
        }
    .end annotation
.end field

.field private final mServiceHandler:Landroid/os/Handler;

.field private mState:I

.field private mTelephonyManager:Landroid/telephony/TelephonyManager;

.field private mTestCount:I

.field private mTestCountSended:I

.field private mTestDuration:J

.field private mTestDurationSended:J

.field private mToast:Landroid/widget/Toast;


# direct methods
.method public constructor <init>()V
    .locals 5

    .line 28
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    .line 29
    const-string v0, "RfDesense/TxTestService"

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->TAG:Ljava/lang/String;

    .line 31
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->STATE_NONE:I

    .line 32
    const/4 v1, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->STATE_STARTED:I

    .line 33
    const-string v2, "[GSM,850,192,5,5][TDSCDMA,BAND34,10087,24,10][WCDMA,BAND1,9612,23,10][LTE(FDD),BAND1,19500,24,10][LTE(TDD),BAND34,20175,24,10][CDMA(1X),BC0,384,83,10][10]"

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->DEFAULT_VALUES:Ljava/lang/String;

    .line 41
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 43
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    .line 46
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    .line 47
    const/16 v2, 0x3e8

    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeKey:I

    .line 48
    const/4 v2, 0x0

    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 49
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mState:I

    .line 51
    const-wide/16 v3, 0x0

    iput-wide v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDuration:J

    .line 52
    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCount:I

    .line 53
    iput-wide v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    .line 54
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    .line 55
    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    .line 56
    iput-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mToast:Landroid/widget/Toast;

    .line 57
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    .line 59
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$1;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mServiceHandler:Landroid/os/Handler;

    .line 204
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRadioStatesLast:I

    .line 205
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService$2;-><init>(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 28
    iput-object p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # I

    .line 28
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendAtCommand(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCount:I

    return v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->updateUIView()V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRadioStatesLast:I

    return v0
.end method

.method static synthetic access$1302(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # I

    .line 28
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRadioStatesLast:I

    return p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mServiceHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mState:I

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getCurrectRatInfo()Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget-wide v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    return-wide v0
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;J)J
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # J

    .line 28
    iput-wide p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    return-wide p1
.end method

.method static synthetic access$514(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;J)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # J

    .line 28
    iget-wide v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    return-wide v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget-wide v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDuration:J

    return-wide v0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;
    .param p1, "x1"    # I

    .line 28
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->txTestStop(I)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->rebootModem()V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    return v0
.end method

.method static synthetic access$908(Lcom/mediatek/engineermode/rfdesense/RfDesenseService;)I
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/rfdesense/RfDesenseService;

    .line 28
    iget v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    return v0
.end method

.method private getCurrectRatInfo()Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    .locals 3

    .line 552
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 553
    const/4 v0, 0x0

    .local v0, "index":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 554
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCheckState()Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 555
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatSendState()Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 556
    goto :goto_1

    .line 558
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    iput-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 559
    invoke-virtual {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatTxtimes()I

    move-result v1

    mul-int/lit8 v1, v1, 0x3c

    int-to-long v1, v1

    iput-wide v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDuration:J

    .line 560
    goto :goto_2

    .line 553
    :cond_1
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 563
    :cond_2
    :goto_2
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    return-object v1
.end method

.method private getNotification(Ljava/lang/String;I)Landroid/app/Notification;
    .locals 5
    .param p1, "title"    # Ljava/lang/String;
    .param p2, "progress"    # I

    .line 606
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 607
    .local v0, "intent":Landroid/content/Intent;
    const/4 v1, 0x0

    invoke-static {p0, v1, v0, v1}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v1

    .line 608
    .local v1, "pi":Landroid/app/PendingIntent;
    new-instance v2, Landroid/support/v4/app/NotificationCompat$Builder;

    .line 609
    invoke-static {}, Lcom/mediatek/engineermode/EmApplication;->getSilentNotificationChannelID()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Landroid/support/v4/app/NotificationCompat$Builder;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 610
    .local v2, "builder":Landroid/support/v4/app/NotificationCompat$Builder;
    const/high16 v3, 0x7f050000

    invoke-virtual {v2, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setSmallIcon(I)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 611
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-static {v4, v3}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/support/v4/app/NotificationCompat$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 612
    invoke-virtual {v2, v1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 613
    invoke-virtual {v2, p1}, Landroid/support/v4/app/NotificationCompat$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;

    .line 614
    invoke-virtual {v2}, Landroid/support/v4/app/NotificationCompat$Builder;->build()Landroid/app/Notification;

    move-result-object v3

    return-object v3
.end method

.method private getNotificationManager()Landroid/app/NotificationManager;
    .locals 1

    .line 602
    const-string v0, "notification"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    return-object v0
.end method

.method private initRatList()V
    .locals 4

    .line 408
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_0

    .line 409
    new-instance v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-direct {v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;-><init>()V

    .line 410
    .local v1, "mRatInfo":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatName(Ljava/lang/String;)V

    .line 411
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStart:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStart(Ljava/lang/String;)V

    .line 412
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdStop:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStop(Ljava/lang/String;)V

    .line 413
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatCmdPowerRead:[Ljava/lang/String;

    aget-object v2, v2, v0

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatPowerRead(Ljava/lang/String;)V

    .line 414
    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCheckState(Ljava/lang/Boolean;)V

    .line 415
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 416
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 408
    .end local v1    # "mRatInfo":Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 418
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method private parseIntentData(Ljava/lang/String;)V
    .locals 18
    .param p1, "arguments"    # Ljava/lang/String;

    .line 323
    move-object/from16 v1, p0

    const-string v0, "\\[|\\]"

    move-object/from16 v2, p1

    invoke-virtual {v2, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 324
    .local v3, "rat":[Ljava/lang/String;
    const/4 v0, 0x0

    .line 325
    .local v0, "mDefaultRfData":Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;
    array-length v4, v3

    const/16 v5, 0x3e9

    if-nez v4, :cond_0

    .line 326
    const-string v4, "null]"

    invoke-virtual {v1, v5, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 327
    return-void

    .line 329
    :cond_0
    const/4 v4, 0x0

    move v6, v4

    move-object v4, v0

    .end local v0    # "mDefaultRfData":Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;
    .local v4, "mDefaultRfData":Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;
    .local v6, "i":I
    :goto_0
    array-length v0, v3

    if-ge v6, v0, :cond_e

    .line 330
    aget-object v0, v3, v6

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_d

    .line 331
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "RfService ->rat = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v3, v6

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v7, "RfDesense/TxTestService"

    invoke-static {v7, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 332
    new-instance v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-direct {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>()V

    move-object v7, v0

    .line 334
    .local v7, "rfreceiveData":Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;
    aget-object v0, v3, v6

    const-string v8, ","

    invoke-virtual {v0, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    .line 335
    .local v8, "info":[Ljava/lang/String;
    array-length v0, v8

    const/4 v9, -0x1

    const/4 v10, 0x1

    const-string v11, "]"

    const/4 v12, 0x0

    if-ne v0, v10, :cond_3

    .line 337
    :try_start_0
    aget-object v0, v8, v12

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 338
    .local v0, "count":I
    if-ne v0, v9, :cond_1

    .line 339
    iput v10, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCount:I

    goto :goto_1

    .line 341
    :cond_1
    iput v0, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCount:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 349
    .end local v0    # "count":I
    :goto_1
    move v9, v5

    goto/16 :goto_7

    .line 342
    :catch_0
    move-exception v0

    .line 343
    .local v0, "e":Ljava/lang/Exception;
    aget-object v9, v8, v12

    const-string v10, "TEST"

    invoke-virtual {v9, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_2

    .line 344
    const/16 v5, 0x3eb

    const-string v9, ""

    invoke-virtual {v1, v5, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    goto :goto_2

    .line 346
    :cond_2
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v10, v8, v12

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v1, v5, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 348
    :goto_2
    return-void

    .line 350
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_3
    array-length v0, v8

    const/4 v13, 0x5

    if-ge v0, v13, :cond_4

    .line 351
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v8, v12

    invoke-virtual {v0, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v5, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 352
    return-void

    .line 354
    :cond_4
    aget-object v0, v8, v12

    invoke-virtual {v7, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setRat(Ljava/lang/String;)V

    .line 355
    iget-object v0, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v15, v8, v12

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v15, " "

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v10, v8, v10

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v4, v0

    check-cast v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    .line 356
    if-eqz v4, :cond_c

    .line 357
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getBand()I

    move-result v0

    invoke-virtual {v7, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setBand(I)V

    .line 363
    const/4 v0, 0x2

    :try_start_1
    aget-object v0, v8, v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 364
    .local v0, "channel":I
    if-ne v0, v9, :cond_5

    .line 365
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getChannel()I

    move-result v10

    invoke-virtual {v7, v10}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setChannel(I)V

    goto :goto_3

    .line 367
    :cond_5
    invoke-virtual {v7, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setChannel(I)V

    .line 369
    :goto_3
    const/4 v10, 0x3

    aget-object v14, v8, v10

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/Integer;->intValue()I

    move-result v14

    .line 370
    .local v14, "power":I
    if-ne v14, v9, :cond_6

    .line 371
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getPower()I

    move-result v15

    invoke-virtual {v7, v15}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setPower(I)V

    goto :goto_4

    .line 373
    :cond_6
    invoke-virtual {v7, v14}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setPower(I)V

    .line 375
    :goto_4
    const/4 v15, 0x4

    aget-object v16, v8, v15

    invoke-static/range {v16 .. v16}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v16

    invoke-virtual/range {v16 .. v16}, Ljava/lang/Integer;->intValue()I

    move-result v16

    move/from16 v17, v16

    .line 376
    .local v17, "time":I
    move/from16 v5, v17

    .end local v17    # "time":I
    .local v5, "time":I
    if-ne v5, v9, :cond_7

    .line 377
    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getTime()I

    move-result v9

    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setTime(I)V

    goto :goto_5

    .line 379
    :cond_7
    invoke-virtual {v7, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setTime(I)V

    .line 381
    :goto_5
    array-length v9, v8

    if-le v9, v13, :cond_8

    .line 382
    aget-object v9, v8, v13

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 383
    .local v9, "bw":I
    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setBw(I)V

    .line 385
    .end local v9    # "bw":I
    :cond_8
    array-length v9, v8

    const/4 v15, 0x6

    if-le v9, v15, :cond_9

    .line 386
    aget-object v9, v8, v15

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 387
    .local v9, "rb":I
    invoke-virtual {v7, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->setRb(I)V

    .line 389
    .end local v9    # "rb":I
    :cond_9
    array-length v9, v8

    const/4 v15, 0x7

    if-gt v9, v15, :cond_b

    array-length v9, v8

    if-le v9, v13, :cond_a

    aget-object v9, v8, v12

    sget-object v13, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v10, v13, v10

    .line 390
    invoke-virtual {v9, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_a

    aget-object v9, v8, v12

    sget-object v10, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    const/4 v13, 0x4

    aget-object v10, v10, v13

    .line 391
    invoke-virtual {v9, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-nez v9, :cond_a

    goto :goto_6

    .line 399
    .end local v0    # "channel":I
    .end local v5    # "time":I
    .end local v14    # "power":I
    :cond_a
    nop

    .line 400
    iget-object v0, v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    invoke-interface {v0, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/16 v9, 0x3e9

    goto :goto_7

    .line 393
    .restart local v0    # "channel":I
    .restart local v5    # "time":I
    .restart local v14    # "power":I
    :cond_b
    :goto_6
    :try_start_2
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v10, v8, v12

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/16 v10, 0x3e9

    invoke-virtual {v1, v10, v9}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 394
    return-void

    .line 396
    .end local v0    # "channel":I
    .end local v5    # "time":I
    .end local v14    # "power":I
    :catch_1
    move-exception v0

    .line 397
    .local v0, "e":Ljava/lang/Exception;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v9, v8, v12

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/16 v9, 0x3e9

    invoke-virtual {v1, v9, v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 398
    return-void

    .line 359
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_c
    move v9, v5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v5, v8, v12

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v9, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 360
    return-void

    .line 330
    .end local v7    # "rfreceiveData":Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;
    .end local v8    # "info":[Ljava/lang/String;
    :cond_d
    move v9, v5

    .line 329
    :goto_7
    add-int/lit8 v6, v6, 0x1

    move v5, v9

    goto/16 :goto_0

    .line 404
    .end local v6    # "i":I
    :cond_e
    return-void
.end method

.method private rebootModem()V
    .locals 1

    .line 580
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->rebootModem()V

    .line 581
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 582
    return-void
.end method

.method private sendAtCommand(Ljava/lang/String;I)V
    .locals 3
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "what"    # I

    .line 596
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    .line 598
    .local v0, "cmd":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mServiceHandler:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm([Ljava/lang/String;Landroid/os/Message;)V

    .line 599
    return-void
.end method

.method private txTestStop(I)V
    .locals 3
    .param p1, "what"    # I

    .line 585
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const-string v1, "RfDesense/TxTestService"

    if-eqz v0, :cond_0

    .line 586
    invoke-virtual {v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStop()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0, p1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendAtCommand(Ljava/lang/String;I)V

    .line 587
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->stop: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 588
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStop()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 587
    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 590
    :cond_0
    const-string v0, "RfService ->mCurrectRatInfo is null"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 591
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->updateUIView()V

    .line 593
    :goto_0
    return-void
.end method

.method private updateRatList()V
    .locals 7

    .line 421
    const/4 v0, 0x0

    .line 422
    .local v0, "k":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 424
    const/4 v0, 0x0

    :goto_1
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v2, v2

    if-ge v0, v2, :cond_1

    .line 425
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v2, v2, v0

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 426
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getRat()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 429
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getBw()I

    move-result v3

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 430
    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getRb()I

    move-result v4

    .line 429
    invoke-virtual {v2, v3, v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdLteBwRb(II)V

    .line 431
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v3, v3, v0

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 432
    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getChannel()I

    move-result v4

    iget-object v5, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 433
    invoke-interface {v5, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getPower()I

    move-result v5

    iget-object v6, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    .line 434
    invoke-interface {v6, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getBand()I

    move-result v6

    .line 431
    invoke-virtual {v2, v3, v4, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCmdStart(Ljava/lang/String;III)V

    .line 436
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;->getTime()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatTxtimes(I)V

    .line 437
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "RfService ->mRatInfo send = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    aget-object v3, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    .line 438
    invoke-virtual {v3, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",time = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    .line 439
    invoke-virtual {v3, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatTxtimes()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 437
    const-string v3, "RfDesense/TxTestService"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 440
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatCheckState(Ljava/lang/Boolean;)V

    .line 441
    goto :goto_2

    .line 424
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_1

    .line 422
    :cond_1
    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 445
    .end local v1    # "i":I
    :cond_2
    return-void
.end method

.method private updateUIView()V
    .locals 4

    .line 567
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    .line 568
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseTxTest;->mRatName:[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_0

    .line 570
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->setRatSendState(Ljava/lang/Boolean;)V

    .line 569
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 572
    .end local v1    # "i":I
    :cond_0
    return-void
.end method


# virtual methods
.method initDefaultSuppotData()V
    .locals 16

    .line 227
    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xbe

    const/4 v4, 0x5

    const/16 v5, 0x80

    const/16 v6, 0xa

    invoke-direct {v2, v3, v4, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "GSM 850"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 228
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x3e

    const/4 v5, 0x2

    invoke-direct {v2, v3, v4, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "GSM 900"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 229
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x2bc

    const/4 v7, 0x0

    const/16 v8, 0x8

    invoke-direct {v2, v3, v7, v8, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "GSM 1800"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 230
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x295

    const/16 v9, 0x10

    invoke-direct {v2, v3, v7, v9, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "GSM 1900"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 232
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x2616

    const/16 v9, 0x17

    const/4 v10, 0x1

    invoke-direct {v2, v3, v9, v10, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND1"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 233
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x24b8

    invoke-direct {v2, v3, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND2"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 234
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x458

    const/4 v11, 0x3

    invoke-direct {v2, v3, v9, v11, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND3"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 235
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x584

    const/4 v12, 0x4

    invoke-direct {v2, v3, v9, v12, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND4"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 236
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x1056

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND5"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 237
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x104f

    const/4 v13, 0x6

    invoke-direct {v2, v3, v9, v13, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND6"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 238
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x87f

    const/4 v14, 0x7

    invoke-direct {v2, v3, v9, v14, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND7"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 239
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xae3

    invoke-direct {v2, v3, v9, v8, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND8"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 240
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x2285

    const/16 v15, 0x9

    invoke-direct {v2, v3, v9, v15, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND9"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 241
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xbd1

    invoke-direct {v2, v3, v9, v6, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND10"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 242
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xdc4

    const/16 v7, 0xb

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND11"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 243
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xe3f

    const/16 v7, 0xc

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND12"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 244
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xedd

    const/16 v7, 0xd

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND13"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 245
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0xf41

    const/16 v7, 0xe

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND14"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 246
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x151

    const/16 v7, 0x13

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND19"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 247
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x10fe

    const/16 v7, 0x14

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND20"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 248
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x1e7

    const/16 v7, 0x15

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND21"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 249
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x1211

    const/16 v7, 0x16

    invoke-direct {v2, v3, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "WCDMA BAND22"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 251
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x2767

    const/16 v7, 0x18

    invoke-direct {v2, v3, v7, v10, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "TDSCDMA BAND34"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 253
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x251c

    invoke-direct {v2, v3, v7, v13, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "TDSCDMA BAND39"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 256
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x4c2c

    invoke-direct {v2, v3, v9, v10, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(FDD) BAND1"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 257
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x4970

    invoke-direct {v2, v3, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v5, "LTE(FDD) BAND2"

    invoke-virtual {v1, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 258
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v5, 0x4443

    invoke-direct {v2, v5, v9, v11, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v5, "LTE(FDD) BAND3"

    invoke-virtual {v1, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 259
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v5, 0x43ad

    invoke-direct {v2, v5, v9, v12, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v5, "LTE(FDD) BAND4"

    invoke-virtual {v1, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 260
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v5, 0x20ad

    invoke-direct {v2, v5, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND5"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 261
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x206c

    const/16 v5, 0x2e

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND6"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 263
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x6306

    invoke-direct {v2, v4, v9, v14, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND7"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 264
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x230f

    invoke-direct {v2, v4, v9, v8, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND8"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 265
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x450a

    invoke-direct {v2, v4, v9, v15, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND9"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 266
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x43f8

    invoke-direct {v2, v4, v9, v6, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND10"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 267
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x382b

    const/16 v5, 0xb

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND11"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 268
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1ba3

    const/16 v5, 0xc

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND12"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 270
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1e8c

    const/16 v5, 0xd

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND13"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 271
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1efa

    const/16 v5, 0xe

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND14"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 272
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1bbc

    const/16 v5, 0x11

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND17"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 273
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x2021

    const/16 v5, 0x12

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND18"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 274
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x20b7

    const/16 v5, 0x13

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND19"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 275
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x2116

    const/16 v5, 0x14

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND20"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 277
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x38da

    const/16 v5, 0x15

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND21"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 278
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const v4, 0x86c4

    const/16 v5, 0x16

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND22"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 279
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x4e84

    invoke-direct {v2, v4, v9, v9, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND23"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 280
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x4033

    invoke-direct {v2, v4, v9, v7, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND24"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 281
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x4989

    const/16 v5, 0x19

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND25"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 282
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x207b

    const/16 v5, 0x1a

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND26"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 284
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1fdb

    const/16 v5, 0x1b

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND27"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 285
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x1c57

    const/16 v5, 0x1c

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND28"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 287
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x5a3c

    const/16 v5, 0x1e

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND30"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 288
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x11c6

    const/16 v5, 0x1f

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(FDD) BAND31"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 290
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x4a9c

    const/16 v5, 0x21

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(TDD) BAND33"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 291
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x4ecf

    const/16 v5, 0x22

    invoke-direct {v2, v4, v9, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v4, "LTE(TDD) BAND34"

    invoke-virtual {v1, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 292
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v4, 0x23

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND35"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 293
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x4c90

    const/16 v4, 0x24

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND36"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 294
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x4b00

    const/16 v4, 0x25

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND37"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 295
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x655e

    const/16 v4, 0x26

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND38"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 296
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x4a38

    const/16 v4, 0x27

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND39"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 297
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x5bcc

    const/16 v4, 0x28

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND40"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 298
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x654a

    const/16 v4, 0x29

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND41"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 299
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const v3, 0x88b8

    const/16 v4, 0x2a

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND42"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 300
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const v3, 0x9088

    const/16 v4, 0x2b

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND43"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 301
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x1d6a

    const/16 v4, 0x2c

    invoke-direct {v2, v3, v9, v4, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "LTE(TDD) BAND44"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 302
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfdesenseDefaultData:Ljava/util/HashMap;

    new-instance v2, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;

    const/16 v3, 0x180

    const/16 v4, 0x53

    const/4 v5, 0x0

    invoke-direct {v2, v3, v4, v5, v6}, Lcom/mediatek/engineermode/rfdesense/RfDesenseServiceData;-><init>(IIII)V

    const-string v3, "CDMA(1X) BC0"

    invoke-virtual {v1, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 304
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x3e8

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "argument parse pass and start tx"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 305
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x3e9

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "[rat,"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 306
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x3ea

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "service is tx ing,please try again later"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 307
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x3eb

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "service works well"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 309
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x7d0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "test finished"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 310
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x7d1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "test start ret"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 311
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x7d2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "test failed"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 312
    iget-object v1, v0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    const/16 v2, 0x7d3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "test stoped"

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 313
    return-void
.end method

.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .line 317
    const/4 v0, 0x0

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    .line 449
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 450
    const-string v0, "RfDesense/TxTestService"

    const-string v1, "RfService -> onCreate()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 451
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    .line 452
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/high16 v2, 0x800000

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 454
    const-string v0, "Rfdesense service started..."

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getNotification(Ljava/lang/String;I)Landroid/app/Notification;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->startForeground(ILandroid/app/Notification;)V

    .line 455
    return-void
.end method

.method public onDestroy()V
    .locals 4

    .line 459
    const-string v0, "RfDesense/TxTestService"

    const-string v1, "RfService -> onDestroy"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 461
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->stopForeground(Z)V

    .line 462
    iget-object v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTelephonyManager:Landroid/telephony/TelephonyManager;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mPhoneStateListener:Landroid/telephony/PhoneStateListener;

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 463
    const/4 v1, 0x2

    iput v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mState:I

    .line 465
    iget-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    if-ne v1, v0, :cond_0

    .line 466
    const/16 v0, 0x7d3

    const-string v1, ""

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 467
    :cond_0
    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 6
    .param p1, "intent"    # Landroid/content/Intent;
    .param p2, "flags"    # I
    .param p3, "startId"    # I

    .line 471
    const-string v0, "RfDesense/TxTestService"

    const-string v1, "RfService -> onStartCommand()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 472
    iget-boolean v1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    const/4 v2, 0x2

    const-string v3, ""

    const/4 v4, 0x1

    if-ne v1, v4, :cond_0

    .line 474
    const/16 v0, 0x3ea

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 475
    return v2

    .line 477
    :cond_0
    sget-object v1, Lcom/mediatek/engineermode/rfdesense/RfDesenseBroadcastReceiver;->ARGUMENTS:Ljava/lang/String;

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 478
    .local v1, "arguments":Ljava/lang/String;
    if-nez v1, :cond_1

    .line 479
    const-string v1, "[GSM,850,192,5,5][TDSCDMA,BAND34,10087,24,10][WCDMA,BAND1,9612,23,10][LTE(FDD),BAND1,19500,24,10][LTE(TDD),BAND34,20175,24,10][CDMA(1X),BC0,384,83,10][10]"

    .line 480
    const-string v4, "RfService -> use default arguments"

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 482
    :cond_1
    const-string v4, " "

    invoke-virtual {v1, v4, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 483
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "RfService -> arguments: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 485
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRatList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 486
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mRfDesenseServiceData:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 487
    const/16 v0, 0x3e8

    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeKey:I

    .line 489
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->initDefaultSuppotData()V

    .line 491
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->initRatList()V

    .line 493
    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->parseIntentData(Ljava/lang/String;)V

    .line 495
    iget v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeKey:I

    if-ne v4, v0, :cond_2

    .line 496
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->updateRatList()V

    .line 497
    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendResultToClient(ILjava/lang/String;)V

    .line 498
    invoke-virtual {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->startTx()V

    .line 500
    :cond_2
    return v2
.end method

.method sendResultToClient(ILjava/lang/String;)V
    .locals 6
    .param p1, "errorCodeKey"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 504
    const-string v0, ""

    .line 505
    .local v0, "info":Ljava/lang/String;
    const-string v1, ""

    .line 506
    .local v1, "rat":Ljava/lang/String;
    iput p1, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeKey:I

    .line 507
    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    if-eqz v2, :cond_0

    .line 508
    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatName()Ljava/lang/String;

    move-result-object v1

    .line 510
    :cond_0
    const/16 v2, 0x7d2

    if-eq p1, v2, :cond_2

    const/16 v2, 0x7d1

    if-ne p1, v2, :cond_1

    goto :goto_0

    .line 513
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 511
    :cond_2
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[count,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "][rat,"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 516
    :goto_1
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 517
    .local v2, "intent":Landroid/content/Intent;
    const-string v3, "com.mediatek.engineermode.rfdesenseServiceResult"

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 518
    const-string v3, "result_id"

    invoke-virtual {v2, v3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 519
    const-string v3, "result_info"

    invoke-virtual {v2, v3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 520
    const-string v3, "com.mediatek.engineermode.rfdesenseService.permission"

    invoke-virtual {p0, v2, v3}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->sendBroadcast(Landroid/content/Intent;Ljava/lang/String;)V

    .line 521
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "RfService ->send "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mErrorCodeMapping:Ljava/util/HashMap;

    .line 522
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 521
    const-string v4, "RfDesense/TxTestService"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 523
    return-void
.end method

.method startAirplane()V
    .locals 2

    .line 575
    const-string v0, "RfDesense/TxTestService"

    const-string v1, "start entry Airplane..."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 576
    const/4 v0, 0x1

    invoke-static {v0}, Lcom/mediatek/engineermode/EmUtils;->setAirplaneModeEnabled(Z)V

    .line 577
    return-void
.end method

.method startTx()V
    .locals 4

    .line 534
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->getCurrectRatInfo()Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    .line 535
    const-string v1, "RfDesense/TxTestService"

    if-eqz v0, :cond_0

    .line 536
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->mCurrectRatInfo = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mCurrectRatInfo:Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/rfdesense/RfDesenseRatInfo;->getRatCmdStart()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 541
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    .line 543
    const/4 v2, 0x0

    iput v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCountSended:I

    .line 544
    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestDurationSended:J

    .line 545
    iput v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mState:I

    .line 546
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RfService ->mTestCount = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mTestCount:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 547
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->rebootModem()V

    .line 548
    return-void

    .line 538
    :cond_0
    const-string v0, "RfService ->you must set at least one rat to tx "

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 539
    return-void
.end method

.method stopTx()V
    .locals 2

    .line 527
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mIsSending:Z

    .line 528
    iget-object v0, p0, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->mServiceHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 529
    invoke-direct {p0}, Lcom/mediatek/engineermode/rfdesense/RfDesenseService;->rebootModem()V

    .line 530
    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    .line 531
    return-void
.end method
