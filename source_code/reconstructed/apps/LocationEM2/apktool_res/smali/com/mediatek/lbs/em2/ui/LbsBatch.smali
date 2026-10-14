.class public Lcom/mediatek/lbs/em2/ui/LbsBatch;
.super Landroid/app/Activity;
.source "LbsBatch.java"


# instance fields
.field private mBatchingCallback:Landroid/location/BatchedLocationCallback;

.field mButtonClearInfo:Landroid/widget/Button;

.field mButtonDecreasePeriod:Landroid/widget/Button;

.field mButtonFlushLocations:Landroid/widget/Button;

.field mButtonIncreasePeriod:Landroid/widget/Button;

.field mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

.field private mHandler:Landroid/os/Handler;

.field mIsStarted:Z

.field mIsWakeOnFifoFull:Z

.field mLocationCallbackCount:I

.field mLocationInfo:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mLocationManager:Landroid/location/LocationManager;

.field mPeriodSecond:J

.field mSupportedBatchSize:I

.field mTextViewLocationCallback:Landroid/widget/TextView;

.field mTextViewLocationCount:Landroid/widget/TextView;

.field mTextViewPeriod:Landroid/widget/TextView;

.field mTextViewSupportBatchSize:Landroid/widget/TextView;

.field mToggleButtonStart:Landroid/widget/ToggleButton;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 24
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 40
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationInfo:Lcom/mediatek/lbs/em2/ui/StringList;

    const/4 v0, 0x0

    .line 44
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsStarted:Z

    const/4 v0, 0x1

    .line 45
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    const-wide/16 v0, 0x1

    .line 46
    iput-wide v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    const/4 v0, 0x0

    .line 48
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationManager:Landroid/location/LocationManager;

    .line 106
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsBatch$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mBatchingCallback:Landroid/location/BatchedLocationCallback;

    .line 264
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsBatch;IIILjava/lang/Object;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/BatchedLocationCallback;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mBatchingCallback:Landroid/location/BatchedLocationCallback;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsBatch;)Landroid/location/LocationManager;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsBatch;Z)V
    .locals 0

    .line 24
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->enableOptions(Z)V

    return-void
.end method

.method private enableOptions(Z)V
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonIncreasePeriod:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 207
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonDecreasePeriod:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 208
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

    invoke-virtual {p0, p1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    return-void
.end method

.method private initUi()V
    .locals 4

    const v0, 0x7f050169

    .line 86
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewSupportBatchSize:Landroid/widget/TextView;

    const v0, 0x7f050162

    .line 87
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewPeriod:Landroid/widget/TextView;

    const v0, 0x7f050133

    .line 88
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonIncreasePeriod:Landroid/widget/Button;

    const v0, 0x7f050131

    .line 89
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonDecreasePeriod:Landroid/widget/Button;

    const v0, 0x7f05006d

    .line 90
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

    const v0, 0x7f05012c

    .line 91
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mToggleButtonStart:Landroid/widget/ToggleButton;

    const v0, 0x7f05014f

    .line 92
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonFlushLocations:Landroid/widget/Button;

    const v0, 0x7f05014d

    .line 93
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonClearInfo:Landroid/widget/Button;

    const v0, 0x7f05014e

    .line 94
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCount:Landroid/widget/TextView;

    const v0, 0x7f05014c

    .line 95
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewLocationCallback:Landroid/widget/TextView;

    .line 97
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewPeriod:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Location report Period (s) : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 98
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mIsWakeOnFifoFull:Z

    if-eqz v0, :cond_0

    .line 99
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 101
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SupportedBatchSize = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mSupportedBatchSize:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", report period ="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 102
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewSupportBatchSize:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mSupportedBatchSize:I

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private initUiListeners()V
    .locals 2

    .line 114
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonIncreasePeriod:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$2;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 121
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonDecreasePeriod:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 129
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mCheckBoxWakeupOnFifoFull:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 140
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mToggleButtonStart:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonClearInfo:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 190
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mButtonFlushLocations:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsBatch$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public static log(Ljava/lang/Object;)V
    .locals 2

    .line 245
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_Batch"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static loge(Ljava/lang/Object;)V
    .locals 2

    .line 249
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ERR: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_Batch"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 261
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method


# virtual methods
.method public mapReportLocation(Landroid/location/Location;)V
    .locals 0

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 52
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070001

    .line 53
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 55
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationManager:Landroid/location/LocationManager;

    if-nez p1, :cond_0

    const-string p1, "ERR: mLocationManager is null"

    .line 57
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->log(Ljava/lang/Object;)V

    .line 61
    :cond_0
    :try_start_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {p1}, Landroid/location/LocationManager;->getGnssBatchSize()I

    move-result p1

    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mSupportedBatchSize:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "Failed to run GnssBatching getGnssBatchSize."

    .line 63
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->loge(Ljava/lang/Object;)V

    .line 65
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->initUi()V

    .line 66
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsBatch;->initUiListeners()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 71
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 72
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mLocationManager:Landroid/location/LocationManager;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mBatchingCallback:Landroid/location/BatchedLocationCallback;

    invoke-virtual {v0, p0}, Landroid/location/LocationManager;->unregisterGnssBatchedLocationCallback(Landroid/location/BatchedLocationCallback;)Z

    return-void
.end method

.method protected onPause()V
    .locals 0

    .line 77
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 82
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    return-void
.end method
