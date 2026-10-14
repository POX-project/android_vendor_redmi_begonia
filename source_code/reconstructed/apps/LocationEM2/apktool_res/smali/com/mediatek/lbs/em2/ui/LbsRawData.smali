.class public Lcom/mediatek/lbs/em2/ui/LbsRawData;
.super Landroid/app/Activity;
.source "LbsRawData.java"


# static fields
.field private static final IS_USER_BUILD:Z


# instance fields
.field private mAntennaFileName:Ljava/lang/String;

.field private mAntennaInfoListner:Landroid/location/GnssAntennaInfo$Listener;

.field private mAntennaUpdates:I

.field protected mButtonMeasurementCorrection:Landroid/widget/Button;

.field private mHandler:Landroid/os/Handler;

.field protected mLayoutDebug:Landroid/widget/LinearLayout;

.field private mLocationManager:Landroid/location/LocationManager;

.field private mMeasFileName:Ljava/lang/String;

.field private mMeasurementCallback:Landroid/location/GnssMeasurementsEvent$Callback;

.field private mMeasurementUpdates:I

.field private mNaviFileName:Ljava/lang/String;

.field private mNaviUpdates:I

.field private mNavigationCallback:Landroid/location/GnssNavigationMessage$Callback;

.field protected mTextViewLogAntenna:Landroid/widget/TextView;

.field protected mTextViewLogMeas:Landroid/widget/TextView;

.field protected mTextViewLogMeasTitle:Landroid/widget/TextView;

.field protected mTextViewLogNavi:Landroid/widget/TextView;

.field protected mToggleButtonAntenna:Landroid/widget/ToggleButton;

.field protected mToggleButtonMeasurement:Landroid/widget/ToggleButton;

.field protected mToggleButtonNavigation:Landroid/widget/ToggleButton;

.field protected mToggleButtonRegress:Landroid/widget/ToggleButton;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 51
    sget-object v0, Landroid/os/Build;->TYPE:Ljava/lang/String;

    const-string v1, "user"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    sput-boolean v0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->IS_USER_BUILD:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 46
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 64
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    const/4 v0, 0x0

    .line 65
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementUpdates:I

    .line 66
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviUpdates:I

    .line 67
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaUpdates:I

    const-string v0, ""

    .line 68
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasFileName:Ljava/lang/String;

    .line 69
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviFileName:Ljava/lang/String;

    .line 70
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaFileName:Ljava/lang/String;

    .line 99
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementCallback:Landroid/location/GnssMeasurementsEvent$Callback;

    .line 132
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNavigationCallback:Landroid/location/GnssNavigationMessage$Callback;

    .line 154
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaInfoListner:Landroid/location/GnssAntennaInfo$Listener;

    .line 420
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 0

    .line 46
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementUpdates:I

    return p0
.end method

.method static synthetic access$002(Lcom/mediatek/lbs/em2/ui/LbsRawData;I)I
    .locals 0

    .line 46
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementUpdates:I

    return p1
.end method

.method static synthetic access$008(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 2

    .line 46
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementUpdates:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementUpdates:I

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsRawData;J)Ljava/lang/String;
    .locals 0

    .line 46
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->getTimeString2(J)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssNavigationMessage$Callback;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNavigationCallback:Landroid/location/GnssNavigationMessage$Callback;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssAntennaInfo$Listener;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaInfoListner:Landroid/location/GnssAntennaInfo$Listener;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasFileName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$202(Lcom/mediatek/lbs/em2/ui/LbsRawData;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasFileName:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsRawData;IIILjava/lang/Object;)V
    .locals 0

    .line 46
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 0

    .line 46
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviUpdates:I

    return p0
.end method

.method static synthetic access$402(Lcom/mediatek/lbs/em2/ui/LbsRawData;I)I
    .locals 0

    .line 46
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviUpdates:I

    return p1
.end method

.method static synthetic access$408(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 2

    .line 46
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviUpdates:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviUpdates:I

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviFileName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$502(Lcom/mediatek/lbs/em2/ui/LbsRawData;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNaviFileName:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 0

    .line 46
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaUpdates:I

    return p0
.end method

.method static synthetic access$602(Lcom/mediatek/lbs/em2/ui/LbsRawData;I)I
    .locals 0

    .line 46
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaUpdates:I

    return p1
.end method

.method static synthetic access$608(Lcom/mediatek/lbs/em2/ui/LbsRawData;)I
    .locals 2

    .line 46
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaUpdates:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaUpdates:I

    return v0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Ljava/lang/String;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaFileName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$702(Lcom/mediatek/lbs/em2/ui/LbsRawData;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaFileName:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 46
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->showMeasConfirmDialog()V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/GnssMeasurementsEvent$Callback;
    .locals 0

    .line 46
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementCallback:Landroid/location/GnssMeasurementsEvent$Callback;

    return-object p0
.end method

.method private getTimeString2(J)Ljava/lang/String;
    .locals 1

    .line 345
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0, p1, p2}, Ljava/util/Date;-><init>(J)V

    const/4 p1, 0x6

    new-array p1, p1, [Ljava/lang/Object;

    .line 347
    invoke-virtual {p0}, Ljava/util/Date;->getYear()I

    move-result p2

    add-int/lit16 p2, p2, 0x76c

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x0

    aput-object p2, p1, v0

    .line 348
    invoke-virtual {p0}, Ljava/util/Date;->getMonth()I

    move-result p2

    const/4 v0, 0x1

    add-int/2addr p2, v0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v0

    .line 349
    invoke-virtual {p0}, Ljava/util/Date;->getDate()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x2

    aput-object p2, p1, v0

    .line 350
    invoke-virtual {p0}, Ljava/util/Date;->getHours()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x3

    aput-object p2, p1, v0

    .line 351
    invoke-virtual {p0}, Ljava/util/Date;->getMinutes()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x4

    aput-object p2, p1, v0

    .line 352
    invoke-virtual {p0}, Ljava/util/Date;->getSeconds()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const/4 p2, 0x5

    aput-object p0, p1, p2

    const-string p0, "%04d%02d%02d_%02d%02d%02d"

    .line 346
    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 446
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 417
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private showMeasConfirmDialog()V
    .locals 3

    .line 314
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Enable GnssMeasurement may log sensitve data into files, are you sure to enable it?"

    .line 315
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 316
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 318
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 334
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$10;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 340
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 341
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method


# virtual methods
.method protected initUI()V
    .locals 2

    const v0, 0x7f050176

    .line 182
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    const v0, 0x7f050177

    .line 183
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    const v0, 0x7f050178

    .line 184
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonRegress:Landroid/widget/ToggleButton;

    const v0, 0x7f050175

    .line 185
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonAntenna:Landroid/widget/ToggleButton;

    const v0, 0x7f050011

    .line 186
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mButtonMeasurementCorrection:Landroid/widget/Button;

    const v0, 0x7f05011f

    .line 187
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogNavi:Landroid/widget/TextView;

    const v0, 0x7f05011c

    .line 188
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogMeas:Landroid/widget/TextView;

    const v0, 0x7f05011e

    .line 189
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogMeasTitle:Landroid/widget/TextView;

    const v0, 0x7f050119

    .line 190
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogAntenna:Landroid/widget/TextView;

    const v0, 0x7f0500a6

    .line 191
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLayoutDebug:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    .line 193
    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 194
    sget-boolean v0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->IS_USER_BUILD:Z

    if-eqz v0, :cond_0

    .line 195
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogMeasTitle:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 196
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setVisibility(I)V

    .line 199
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonRegress:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonMeasurement:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 230
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonNavigation:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$6;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 247
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mButtonMeasurementCorrection:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 293
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mToggleButtonAntenna:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 74
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070020

    .line 75
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 76
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    .line 78
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->initUI()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 83
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mMeasurementCallback:Landroid/location/GnssMeasurementsEvent$Callback;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterGnssMeasurementsCallback(Landroid/location/GnssMeasurementsEvent$Callback;)V

    .line 84
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mNavigationCallback:Landroid/location/GnssNavigationMessage$Callback;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterGnssNavigationMessageCallback(Landroid/location/GnssNavigationMessage$Callback;)V

    .line 85
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mAntennaInfoListner:Landroid/location/GnssAntennaInfo$Listener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterAntennaInfoListener(Landroid/location/GnssAntennaInfo$Listener;)V

    .line 86
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onPause()V
    .locals 0

    .line 91
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onResume()V
    .locals 0

    .line 96
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    return-void
.end method

.method public write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z
    .locals 2

    const-string v0, "/"

    if-eqz p5, :cond_0

    .line 362
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "/sdcard/"

    invoke-virtual {p0, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 364
    :cond_0
    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "/data/data/"

    invoke-virtual {p5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 366
    :goto_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 367
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    .line 368
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 369
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x1

    const/4 p5, 0x0

    if-eqz p4, :cond_1

    .line 372
    :try_start_0
    new-instance p1, Ljava/io/DataOutputStream;

    new-instance p4, Ljava/io/FileOutputStream;

    invoke-direct {p4, p0, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;Z)V

    invoke-direct {p1, p4}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    goto :goto_1

    .line 374
    :cond_1
    new-instance p0, Ljava/io/DataOutputStream;

    new-instance p4, Ljava/io/FileOutputStream;

    invoke-direct {p4, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {p0, p4}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object p1, p0

    .line 376
    :goto_1
    invoke-virtual {p1, p3}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 377
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return p2

    :catch_0
    move-exception p0

    .line 382
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    return p5

    :catch_1
    move-exception p0

    .line 379
    invoke-virtual {p0}, Ljava/io/FileNotFoundException;->printStackTrace()V

    return p5
.end method
