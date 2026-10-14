.class public Lcom/mediatek/lbs/em2/ui/LbsNlp;
.super Landroid/app/Activity;
.source "LbsNlp.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsNlp$GeolocationThread;
    }
.end annotation


# instance fields
.field protected mButtonClearScreen:Landroid/widget/Button;

.field private mButtonGetGeolocation:Landroid/widget/Button;

.field private mHandler:Landroid/os/Handler;

.field private mLastLocation:Landroid/location/Location;

.field private mLocationListenerFlp:Landroid/location/LocationListener;

.field private mLocationListenerNlp:Landroid/location/LocationListener;

.field private mLocationManager:Landroid/location/LocationManager;

.field private mStringListFlp:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mStringListNlp:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mTextViewFlpResult:Landroid/widget/TextView;

.field private mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

.field private mTextViewGeolocation:Landroid/widget/TextView;

.field private mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

.field private mTextViewNlpEnabledValue:Landroid/widget/TextView;

.field private mTextViewNlpInstalledValue:Landroid/widget/TextView;

.field private mTextViewNlpPackageNameValue:Landroid/widget/TextView;

.field private mTextViewNlpResult:Landroid/widget/TextView;

.field protected mToggleButtonFlp:Landroid/widget/ToggleButton;

.field protected mToggleButtonNlp:Landroid/widget/ToggleButton;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 39
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 62
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    .line 63
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0xc

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mStringListNlp:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 64
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mStringListFlp:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 236
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNlp$5;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerNlp:Landroid/location/LocationListener;

    .line 265
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerFlp:Landroid/location/LocationListener;

    .line 327
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsNlp$9;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerNlp:Landroid/location/LocationListener;

    return-object p0
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/os/Handler;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsNlp;J)Ljava/lang/String;
    .locals 0

    .line 39
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->getTimeString(J)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpPackageNameValue:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsNlp;IIILjava/lang/Object;)V
    .locals 0

    .line 39
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationManager;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/LocationListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerFlp:Landroid/location/LocationListener;

    return-object p0
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mStringListNlp:Lcom/mediatek/lbs/em2/ui/StringList;

    return-object p0
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Lcom/mediatek/lbs/em2/ui/StringList;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mStringListFlp:Lcom/mediatek/lbs/em2/ui/StringList;

    return-object p0
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpResult:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewFlpResult:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/widget/TextView;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeolocation:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsNlp;)Landroid/location/Location;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLastLocation:Landroid/location/Location;

    return-object p0
.end method

.method static synthetic access$902(Lcom/mediatek/lbs/em2/ui/LbsNlp;Landroid/location/Location;)Landroid/location/Location;
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLastLocation:Landroid/location/Location;

    return-object p1
.end method

.method private getTimeString(J)Ljava/lang/String;
    .locals 1

    .line 389
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0, p1, p2}, Ljava/util/Date;-><init>(J)V

    const/4 p1, 0x6

    new-array p1, p1, [Ljava/lang/Object;

    .line 391
    invoke-virtual {p0}, Ljava/util/Date;->getYear()I

    move-result p2

    add-int/lit16 p2, p2, 0x76c

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x0

    aput-object p2, p1, v0

    .line 392
    invoke-virtual {p0}, Ljava/util/Date;->getMonth()I

    move-result p2

    const/4 v0, 0x1

    add-int/2addr p2, v0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v0

    .line 393
    invoke-virtual {p0}, Ljava/util/Date;->getDate()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x2

    aput-object p2, p1, v0

    .line 394
    invoke-virtual {p0}, Ljava/util/Date;->getHours()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x3

    aput-object p2, p1, v0

    .line 395
    invoke-virtual {p0}, Ljava/util/Date;->getMinutes()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x4

    aput-object p2, p1, v0

    .line 396
    invoke-virtual {p0}, Ljava/util/Date;->getSeconds()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const/4 p2, 0x5

    aput-object p0, p1, p2

    const-string p0, "%04d/%02d/%02d %02d:%02d:%02d"

    .line 390
    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 401
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "LocationEM_NLP"

    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 324
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method


# virtual methods
.method protected initUI()V
    .locals 3

    const v0, 0x7f0500e0

    .line 139
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    const v0, 0x7f0500df

    .line 140
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    const v0, 0x7f0500d6

    .line 141
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    const v0, 0x7f0500e1

    .line 142
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    const v0, 0x7f0500e2

    .line 143
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpPackageNameValue:Landroid/widget/TextView;

    const v0, 0x7f050174

    .line 144
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonNlp:Landroid/widget/ToggleButton;

    const v0, 0x7f050172

    .line 145
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonFlp:Landroid/widget/ToggleButton;

    const v0, 0x7f050006

    .line 146
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mButtonClearScreen:Landroid/widget/Button;

    const v0, 0x7f05000c

    .line 147
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mButtonGetGeolocation:Landroid/widget/Button;

    const v0, 0x7f05010a

    .line 148
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpResult:Landroid/widget/TextView;

    const v0, 0x7f0500fe

    .line 149
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewFlpResult:Landroid/widget/TextView;

    const v0, 0x7f0500ff

    .line 150
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeolocation:Landroid/widget/TextView;

    .line 152
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 153
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 154
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 155
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 156
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpPackageNameValue:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 157
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeolocation:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 159
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonNlp:Landroid/widget/ToggleButton;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 160
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonNlp:Landroid/widget/ToggleButton;

    new-instance v2, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;

    invoke-direct {v2, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    invoke-virtual {v0, v2}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 183
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonFlp:Landroid/widget/ToggleButton;

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 184
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonFlp:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNlp$2;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 208
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mButtonClearScreen:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mButtonGetGeolocation:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsNlp;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 0

    .line 69
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070010

    .line 70
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 71
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    .line 73
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsNlp;->initUI()V

    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 78
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 79
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerNlp:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 80
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationListenerFlp:Landroid/location/LocationListener;

    invoke-virtual {v0, p0}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    return-void
.end method

.method public onPause()V
    .locals 0

    .line 85
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 1

    .line 90
    invoke-super {p0, p1}, Landroid/app/Activity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    .line 91
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonNlp:Landroid/widget/ToggleButton;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 92
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mToggleButtonFlp:Landroid/widget/ToggleButton;

    invoke-virtual {p0, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    return-void
.end method

.method public onResume()V
    .locals 6

    .line 97
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 99
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "network"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->getProvider(Ljava/lang/String;)Landroid/location/LocationProvider;

    move-result-object v0

    const v2, -0xff0100

    const-string v3, "Yes"

    const/high16 v4, -0x10000

    const-string v5, "No"

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 101
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 103
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 104
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 107
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 108
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 109
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_1

    .line 111
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 112
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpEnabledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 115
    :goto_1
    invoke-static {}, Landroid/location/Geocoder;->isPresent()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 116
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 117
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_2

    .line 119
    :cond_2
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 120
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewGeocoderInstalledValue:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 123
    :goto_2
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "com.mediatek.location.mtknlp"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderPackage(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 124
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 125
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_3

    .line 127
    :cond_3
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 128
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewMtkNlpBoundValue:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 131
    :goto_3
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "com.baidu.map.location"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderPackage(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 132
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpPackageNameValue:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 133
    :cond_4
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "com.google.android.gms"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderPackage(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 134
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNlp;->mTextViewNlpPackageNameValue:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_5
    :goto_4
    return-void
.end method
