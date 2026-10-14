.class public Lcom/mediatek/lbs/em2/ui/LbsView;
.super Landroid/app/Activity;
.source "LbsView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;
    }
.end annotation


# instance fields
.field private mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

.field private mGpsStatusListener:Landroid/location/GpsStatus$Listener;

.field private mLocationManager:Landroid/location/LocationManager;

.field private mNmeaListener:Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;

.field protected mRadioButtonGNSS:Landroid/widget/RadioButton;

.field protected mRadioButtonGPS:Landroid/widget/RadioButton;

.field protected mRadioButtonINFO:Landroid/widget/RadioButton;

.field protected mRadioButtonNMEA:Landroid/widget/RadioButton;

.field protected mRadioButtonPage1:Landroid/widget/RadioButton;

.field protected mRadioButtonPage2:Landroid/widget/RadioButton;

.field protected mRadioButtonPage3:Landroid/widget/RadioButton;

.field private mShowingView:I

.field private mViewGnss:Lcom/mediatek/lbs/em2/ui/ViewGnss;

.field private mViewGps:Lcom/mediatek/lbs/em2/ui/ViewGps;

.field private mViewNmea:Lcom/mediatek/lbs/em2/ui/ViewNmea;

.field private nmeaInd:Lcom/mediatek/lbs/em2/ui/NmeaParser;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    .line 35
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mNmeaListener:Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;

    .line 36
    invoke-static {}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getNMEAParser()Lcom/mediatek/lbs/em2/ui/NmeaParser;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->nmeaInd:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    .line 147
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$8;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    .line 164
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$9;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGpsStatusListener:Landroid/location/GpsStatus$Listener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsView;)I
    .locals 0

    .line 18
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mShowingView:I

    return p0
.end method

.method static synthetic access$002(Lcom/mediatek/lbs/em2/ui/LbsView;I)I
    .locals 0

    .line 18
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mShowingView:I

    return p1
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsView;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->showView()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsView;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsView;->showInfoDialog(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGnss;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGnss:Lcom/mediatek/lbs/em2/ui/ViewGnss;

    return-object p0
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewGps;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGps:Lcom/mediatek/lbs/em2/ui/ViewGps;

    return-object p0
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/ViewNmea;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewNmea:Lcom/mediatek/lbs/em2/ui/ViewNmea;

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsView;)Landroid/location/LocationManager;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsView;)Lcom/mediatek/lbs/em2/ui/NmeaParser;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->nmeaInd:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    return-object p0
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "LocationEM"

    .line 228
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private showInfoDialog(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
    .locals 1

    .line 232
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 233
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 234
    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 p1, 0x1

    .line 235
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 237
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsView$10;

    invoke-direct {p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    const-string p0, "OK"

    invoke-virtual {v0, p0, p1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 242
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 243
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private showView()V
    .locals 3

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "showView mShowingView="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mShowingView:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsView;->log(Ljava/lang/String;)V

    .line 190
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGnss:Lcom/mediatek/lbs/em2/ui/ViewGnss;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 191
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGps:Lcom/mediatek/lbs/em2/ui/ViewGps;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 192
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewNmea:Lcom/mediatek/lbs/em2/ui/ViewNmea;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 194
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mShowingView:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 202
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewNmea:Lcom/mediatek/lbs/em2/ui/ViewNmea;

    invoke-virtual {p0, v2}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    .line 199
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGps:Lcom/mediatek/lbs/em2/ui/ViewGps;

    invoke-virtual {p0, v2}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    .line 196
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGnss:Lcom/mediatek/lbs/em2/ui/ViewGnss;

    invoke-virtual {p0, v2}, Landroid/view/View;->setVisibility(I)V

    :goto_0
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 41
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070021

    .line 42
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const p1, 0x7f05017a

    .line 44
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/mediatek/lbs/em2/ui/ViewGnss;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGnss:Lcom/mediatek/lbs/em2/ui/ViewGnss;

    const p1, 0x7f05017b

    .line 45
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/mediatek/lbs/em2/ui/ViewGps;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewGps:Lcom/mediatek/lbs/em2/ui/ViewGps;

    const p1, 0x7f05017c

    .line 46
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/mediatek/lbs/em2/ui/ViewNmea;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mViewNmea:Lcom/mediatek/lbs/em2/ui/ViewNmea;

    const p1, 0x7f0500ae

    .line 47
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGNSS:Landroid/widget/RadioButton;

    const p1, 0x7f0500af

    .line 48
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGPS:Landroid/widget/RadioButton;

    const p1, 0x7f0500ba

    .line 49
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonNMEA:Landroid/widget/RadioButton;

    const p1, 0x7f0500b0

    .line 50
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonINFO:Landroid/widget/RadioButton;

    const p1, 0x7f0500bd

    .line 51
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage1:Landroid/widget/RadioButton;

    const p1, 0x7f0500be

    .line 52
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage2:Landroid/widget/RadioButton;

    const p1, 0x7f0500bf

    .line 53
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RadioButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage3:Landroid/widget/RadioButton;

    const-string p1, "location"

    .line 55
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    if-nez p1, :cond_0

    const-string p1, "ERR: mLocationManager is null"

    .line 57
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->log(Ljava/lang/String;)V

    .line 60
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGNSS:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 67
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGPS:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 74
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonNMEA:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$3;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 81
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonINFO:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$4;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 104
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage1:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$5;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 113
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage2:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$6;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 122
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage3:Landroid/widget/RadioButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsView$7;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsView$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 132
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {p1, v0}, Landroid/location/LocationManager;->registerGnssStatusCallback(Landroid/location/GnssStatus$Callback;)Z

    .line 135
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGpsStatusListener:Landroid/location/GpsStatus$Listener;

    invoke-virtual {p1, v0}, Landroid/location/LocationManager;->addGpsStatusListener(Landroid/location/GpsStatus$Listener;)Z

    .line 138
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;

    const/4 v0, 0x0

    invoke-direct {p1, p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsView$NmeaStatusListener;-><init>(Lcom/mediatek/lbs/em2/ui/LbsView;Lcom/mediatek/lbs/em2/ui/LbsView$1;)V

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mNmeaListener:Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;

    .line 139
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->nmeaInd:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->addSVUpdateListener(Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;)V

    const/4 p1, 0x1

    .line 141
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mShowingView:I

    .line 142
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGNSS:Landroid/widget/RadioButton;

    invoke-virtual {v0, p1}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 143
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonPage1:Landroid/widget/RadioButton;

    invoke-virtual {p0, p1}, Landroid/widget/RadioButton;->setChecked(Z)V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 216
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 218
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterGnssStatusCallback(Landroid/location/GnssStatus$Callback;)V

    .line 221
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mGpsStatusListener:Landroid/location/GpsStatus$Listener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeGpsStatusListener(Landroid/location/GpsStatus$Listener;)V

    .line 224
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->nmeaInd:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mNmeaListener:Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;

    invoke-virtual {v0, p0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->removeSVUpdateListener(Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;)V

    return-void
.end method

.method public onResume()V
    .locals 0

    .line 211
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 212
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsView;->showView()V

    return-void
.end method
