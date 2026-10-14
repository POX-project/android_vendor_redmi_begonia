.class public Lcom/mediatek/lbs/em2/ui/LbsGps;
.super Landroid/app/Activity;
.source "LbsGps.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;,
        Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;
    }
.end annotation


# static fields
.field public static mRefLat:D

.field public static mRefLng:D


# instance fields
.field private mBlackList:Ljava/lang/String;

.field private mButtonChangeRefLatLng:Landroid/widget/Button;

.field private mButtonClearLog:Landroid/widget/Button;

.field private mButtonDelete:Landroid/widget/Button;

.field private mButtonGps:Landroid/widget/ToggleButton;

.field private mButtonGpsMode:Landroid/widget/Button;

.field private mButtonStress:Landroid/widget/ToggleButton;

.field private mCheckBoxBlockBeidou:Landroid/widget/CheckBox;

.field private mCheckBoxBlockGalileo:Landroid/widget/CheckBox;

.field private mCheckBoxBlockGlonass:Landroid/widget/CheckBox;

.field private mCheckBoxBlockGps:Landroid/widget/CheckBox;

.field private mCheckBoxBlockIrnss:Landroid/widget/CheckBox;

.field private mCheckBoxBlockQzss:Landroid/widget/CheckBox;

.field private mCheckBoxBlockSbas:Landroid/widget/CheckBox;

.field private mCheckBoxLogNmea:Landroid/widget/CheckBox;

.field private mCheckBoxLogToSdcard:Landroid/widget/CheckBox;

.field private mCheckBoxLowPowerMode:Landroid/widget/CheckBox;

.field private mCheckBoxSingleShot:Landroid/widget/CheckBox;

.field private mCheckBoxSvArr:[Landroid/widget/CheckBox;

.field private mCheckBoxSwitchDelet2First:Landroid/widget/CheckBox;

.field private mDelay1:I

.field private mDelay2:I

.field private mDelay3:I

.field private mDelay4:I

.field private mDistance:F

.field private mEditTextDelay1:Landroid/widget/EditText;

.field private mEditTextDelay2:Landroid/widget/EditText;

.field private mEditTextDelay3:Landroid/widget/EditText;

.field private mEditTextDelay4:Landroid/widget/EditText;

.field private mEditTextNumOfLoop:Landroid/widget/EditText;

.field private mFirstDistance:F

.field private mFirstLocation:Landroid/location/Location;

.field private mFirstSvNumStr:Ljava/lang/String;

.field private mFirstSvStr:Ljava/lang/String;

.field private mFixCount:I

.field private mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

.field private mGotFirstSv:Z

.field private mGotFix:Z

.field private mGpsMode:I

.field private mHandler:Landroid/os/Handler;

.field private mLocationListener:Landroid/location/LocationListener;

.field private mLocationManager:Landroid/location/LocationManager;

.field private mLogToSdcard:Z

.field private mLowPowerMode:Z

.field private mNmeaCount:I

.field private mNmeaFileName:Ljava/lang/String;

.field private mNmeaFolderName:Ljava/lang/String;

.field private mNmeaListener:Landroid/location/OnNmeaMessageListener;

.field private mNumOfLoop:I

.field private mPopupDeleteAidingData:Landroid/widget/PopupMenu;

.field private mSatUpdateCount:I

.field private mSingleShot:Z

.field private mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

.field private mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mTTFF:I

.field private mTextView5:Landroid/widget/TextView;

.field private mTextViewAlmanacDateValue:Landroid/widget/TextView;

.field private mTextViewBlockBeidou:Landroid/widget/TextView;

.field private mTextViewBlockGalileo:Landroid/widget/TextView;

.field private mTextViewBlockGlonass:Landroid/widget/TextView;

.field private mTextViewBlockGps:Landroid/widget/TextView;

.field private mTextViewBlockIrnss:Landroid/widget/TextView;

.field private mTextViewBlockQzss:Landroid/widget/TextView;

.field private mTextViewBlockSbas:Landroid/widget/TextView;

.field private mTextViewDeleteAidingData:Landroid/widget/TextView;

.field private mTextViewGnssHwNameValue:Landroid/widget/TextView;

.field private mTextViewHasAlmanacValue:Landroid/widget/TextView;

.field private mTextViewLocation:Landroid/widget/TextView;

.field private mTextViewLoop:Landroid/widget/TextView;

.field private mTextViewNmea:Landroid/widget/TextView;

.field private mTextViewRefLatLng:Landroid/widget/TextView;

.field private mTextViewSatellite:Landroid/widget/TextView;

.field private mTextViewTimer:Landroid/widget/TextView;

.field private mTextViewYearOfGnssHwValue:Landroid/widget/TextView;

.field private mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

.field private mToMnldSender:Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

.field private mUdpClient:Lcom/mediatek/socket/base/UdpClient;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 9

    .line 52
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/16 v0, 0x64

    .line 73
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNumOfLoop:I

    const/16 v0, 0x14

    .line 74
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay1:I

    const/4 v0, 0x2

    .line 75
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay2:I

    const/16 v0, 0x258

    .line 76
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay3:I

    const/4 v0, 0x0

    .line 77
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay4:I

    .line 78
    new-instance v8, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    iget v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNumOfLoop:I

    iget v4, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay1:I

    iget v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay2:I

    iget v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay3:I

    iget v7, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay4:I

    move-object v1, v8

    move-object v2, p0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;IIIII)V

    iput-object v8, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    .line 81
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFixCount:I

    .line 82
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSatUpdateCount:I

    .line 83
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaCount:I

    const/4 v1, -0x1

    .line 84
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTTFF:I

    .line 85
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFix:Z

    const/4 v1, 0x0

    .line 87
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstDistance:F

    const-string v2, ""

    .line 88
    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvNumStr:Ljava/lang/String;

    .line 89
    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    .line 90
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFirstSv:Z

    .line 92
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDistance:F

    .line 93
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGpsMode:I

    .line 94
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLogToSdcard:Z

    .line 95
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLowPowerMode:Z

    .line 96
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSingleShot:Z

    const/4 v0, 0x0

    .line 98
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    .line 99
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFolderName:Ljava/lang/String;

    .line 100
    iput-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    .line 133
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    .line 134
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    .line 135
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    const/16 v0, 0x29

    new-array v0, v0, [Landroid/widget/CheckBox;

    .line 150
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    .line 639
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$23;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$23;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    .line 646
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$24;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$24;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    .line 663
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$25;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$25;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationListener:Landroid/location/LocationListener;

    .line 871
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$26;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$26;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->launchPackageSettings(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->resetVarialbe()V

    return-void
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->showClearLogConfirmDialog()V

    return-void
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->openDialogLatlng(Z)V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->showLogNmeaConfirmDialog()V

    return-void
.end method

.method static synthetic access$1400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z
    .locals 0

    .line 52
    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLogToSdcard:Z

    return p0
.end method

.method static synthetic access$1402(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLogToSdcard:Z

    return p1
.end method

.method static synthetic access$1500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogToSdcard:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$1602(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLowPowerMode:Z

    return p1
.end method

.method static synthetic access$1700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLowPowerMode:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$1802(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSingleShot:Z

    return p1
.end method

.method static synthetic access$1900(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSingleShot:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    return-object p0
.end method

.method static synthetic access$2000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2100(Lcom/mediatek/lbs/em2/ui/LbsGps;ILjava/lang/String;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->openBlackSvSelectDialog(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$2200(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setBlacklistData()V

    return-void
.end method

.method static synthetic access$2300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2600(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$2900(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->isGPSProviderEnable()Z

    move-result p0

    return p0
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->startGps()V

    return-void
.end method

.method static synthetic access$3000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->isBackgroundPermissionGranted()Z

    move-result p0

    return p0
.end method

.method static synthetic access$3100(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->startStressGps()V

    return-void
.end method

.method static synthetic access$3200(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->stopStressGps()V

    return-void
.end method

.method static synthetic access$3300(Lcom/mediatek/lbs/em2/ui/LbsGps;IIILjava/lang/Object;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mediatek/lbs/em2/ui/LbsGps;->sendMessage(IIILjava/lang/Object;)V

    return-void
.end method

.method static synthetic access$3400(Lcom/mediatek/lbs/em2/ui/LbsGps;II)V
    .locals 0

    .line 52
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->sendMessage(II)V

    return-void
.end method

.method static synthetic access$3500(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$3608(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 2

    .line 52
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFixCount:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFixCount:I

    return v0
.end method

.method static synthetic access$3700(Lcom/mediatek/lbs/em2/ui/LbsGps;)F
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDistance:F

    return p0
.end method

.method static synthetic access$3702(Lcom/mediatek/lbs/em2/ui/LbsGps;F)F
    .locals 0

    .line 52
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDistance:F

    return p1
.end method

.method static synthetic access$3800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z
    .locals 0

    .line 52
    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFix:Z

    return p0
.end method

.method static synthetic access$3802(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFix:Z

    return p1
.end method

.method static synthetic access$3900(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTTFF:I

    return p0
.end method

.method static synthetic access$3902(Lcom/mediatek/lbs/em2/ui/LbsGps;I)I
    .locals 0

    .line 52
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTTFF:I

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->stopGps()V

    return-void
.end method

.method static synthetic access$4000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    return-object p0
.end method

.method static synthetic access$4102(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/Location;)Landroid/location/Location;
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstLocation:Landroid/location/Location;

    return-object p1
.end method

.method static synthetic access$4202(Lcom/mediatek/lbs/em2/ui/LbsGps;F)F
    .locals 0

    .line 52
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstDistance:F

    return p1
.end method

.method static synthetic access$4300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    return-object p0
.end method

.method static synthetic access$4400(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/Location;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateLocationInfo(Landroid/location/Location;)V

    return-void
.end method

.method static synthetic access$4500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSwitchDelet2First:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$4600(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewTimer:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$4700(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->enableWidgetAfterStress()V

    return-void
.end method

.method static synthetic access$4800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewLoop:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$4900(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateHasAlmanacValue()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/PopupMenu;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    return-object p0
.end method

.method static synthetic access$5000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Lcom/mediatek/lbs/em2/ui/StringList;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    return-object p0
.end method

.method static synthetic access$5100(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaCount:I

    return p0
.end method

.method static synthetic access$5108(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 2

    .line 52
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaCount:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaCount:I

    return v0
.end method

.method static synthetic access$5200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewNmea:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$5300(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogNmea:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$5400(Lcom/mediatek/lbs/em2/ui/LbsGps;)Ljava/lang/String;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$5500(Lcom/mediatek/lbs/em2/ui/LbsGps;)Ljava/lang/String;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFolderName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$5600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSatUpdateCount:I

    return p0
.end method

.method static synthetic access$5608(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 2

    .line 52
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSatUpdateCount:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSatUpdateCount:I

    return v0
.end method

.method static synthetic access$5700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewSatellite:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$5800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z
    .locals 0

    .line 52
    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFirstSv:Z

    return p0
.end method

.method static synthetic access$5802(Lcom/mediatek/lbs/em2/ui/LbsGps;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFirstSv:Z

    return p1
.end method

.method static synthetic access$5900(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/location/GnssStatus;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateFirstSvStr(Landroid/location/GnssStatus;)V

    return-void
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsGps;)I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGpsMode:I

    return p0
.end method

.method static synthetic access$6000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewRefLatLng:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$602(Lcom/mediatek/lbs/em2/ui/LbsGps;I)I
    .locals 0

    .line 52
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGpsMode:I

    return p1
.end method

.method static synthetic access$6100(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateRefLatLng()V

    return-void
.end method

.method static synthetic access$6200(Lcom/mediatek/lbs/em2/ui/LbsGps;I)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setSvOutCheckStr(I)V

    return-void
.end method

.method static synthetic access$6300(Lcom/mediatek/lbs/em2/ui/LbsGps;)[Landroid/widget/CheckBox;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->startDeletingAidingData()V

    return-void
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsGps;J)V
    .locals 0

    .line 52
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->msleep(J)V

    return-void
.end method

.method private enableWidgetAfterStress()V
    .locals 3

    .line 744
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->stopStress()V

    .line 746
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 747
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextNumOfLoop:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 748
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay1:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 749
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay2:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 750
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 751
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay4:Landroid/widget/EditText;

    invoke-virtual {v0, v1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 752
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonDelete:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 753
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGpsMode:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 755
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 756
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSwitchDelet2First:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1}, Landroid/widget/CheckBox;->setEnabled(Z)V

    return-void
.end method

.method private getTimeString(J)Ljava/lang/String;
    .locals 1

    .line 1083
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0, p1, p2}, Ljava/util/Date;-><init>(J)V

    .line 1084
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/util/Date;->getYear()I

    move-result p2

    add-int/lit16 p2, p2, 0x76c

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "/"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/util/Date;->getMonth()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/util/Date;->getDate()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1085
    invoke-virtual {p0}, Ljava/util/Date;->getHours()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ":"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/util/Date;->getMinutes()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/util/Date;->getSeconds()I

    move-result p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private getTimeString2(J)Ljava/lang/String;
    .locals 1

    .line 946
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0, p1, p2}, Ljava/util/Date;-><init>(J)V

    const/4 p1, 0x6

    new-array p1, p1, [Ljava/lang/Object;

    .line 948
    invoke-virtual {p0}, Ljava/util/Date;->getYear()I

    move-result p2

    add-int/lit16 p2, p2, 0x76c

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x0

    aput-object p2, p1, v0

    .line 949
    invoke-virtual {p0}, Ljava/util/Date;->getMonth()I

    move-result p2

    const/4 v0, 0x1

    add-int/2addr p2, v0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, p1, v0

    .line 950
    invoke-virtual {p0}, Ljava/util/Date;->getDate()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x2

    aput-object p2, p1, v0

    .line 951
    invoke-virtual {p0}, Ljava/util/Date;->getHours()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x3

    aput-object p2, p1, v0

    .line 952
    invoke-virtual {p0}, Ljava/util/Date;->getMinutes()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v0, 0x4

    aput-object p2, p1, v0

    .line 953
    invoke-virtual {p0}, Ljava/util/Date;->getSeconds()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const/4 p2, 0x5

    aput-object p0, p1, p2

    const-string p0, "%04d%02d%02d_%02d%02d%02d"

    .line 947
    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private initWidget()V
    .locals 8

    const v0, 0x7f05001b

    .line 254
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    const v0, 0x7f050012

    .line 255
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonDelete:Landroid/widget/Button;

    const v0, 0x7f05000d

    .line 256
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGpsMode:Landroid/widget/Button;

    const v0, 0x7f050004

    .line 257
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonChangeRefLatLng:Landroid/widget/Button;

    const v0, 0x7f050005

    .line 258
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonClearLog:Landroid/widget/Button;

    const v0, 0x7f05004b

    .line 259
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogNmea:Landroid/widget/CheckBox;

    const v0, 0x7f05004d

    .line 260
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogToSdcard:Landroid/widget/CheckBox;

    const v0, 0x7f05004e

    .line 261
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLowPowerMode:Landroid/widget/CheckBox;

    const v0, 0x7f050064

    .line 262
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSingleShot:Landroid/widget/CheckBox;

    const v0, 0x7f050142

    .line 263
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSwitchDelet2First:Landroid/widget/CheckBox;

    const v0, 0x7f05001c

    .line 264
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    const v0, 0x7f0500e3

    .line 265
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewRefLatLng:Landroid/widget/TextView;

    const v0, 0x7f0500e4

    .line 266
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewTimer:Landroid/widget/TextView;

    const v0, 0x7f0500e5

    .line 267
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewLocation:Landroid/widget/TextView;

    const v0, 0x7f0500e6

    .line 268
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewSatellite:Landroid/widget/TextView;

    const v0, 0x7f0500e7

    .line 269
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewNmea:Landroid/widget/TextView;

    const v0, 0x7f0500e8

    .line 270
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextView5:Landroid/widget/TextView;

    const v0, 0x7f050105

    .line 271
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewLoop:Landroid/widget/TextView;

    const v0, 0x7f0500f9

    .line 272
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const v0, 0x7f05009d

    .line 273
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextNumOfLoop:Landroid/widget/EditText;

    const v0, 0x7f050098

    .line 274
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay1:Landroid/widget/EditText;

    const v0, 0x7f050099

    .line 275
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay2:Landroid/widget/EditText;

    const v0, 0x7f05009a

    .line 276
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    const v0, 0x7f05009b

    .line 277
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay4:Landroid/widget/EditText;

    const v0, 0x7f050103

    .line 278
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewHasAlmanacValue:Landroid/widget/TextView;

    const v0, 0x7f0500e9

    .line 279
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewAlmanacDateValue:Landroid/widget/TextView;

    const v0, 0x7f050118

    .line 280
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewYearOfGnssHwValue:Landroid/widget/TextView;

    const v0, 0x7f050100

    .line 281
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewGnssHwNameValue:Landroid/widget/TextView;

    const v0, 0x7f05013e

    .line 282
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGps:Landroid/widget/CheckBox;

    const v0, 0x7f050141

    .line 283
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockSbas:Landroid/widget/CheckBox;

    const v0, 0x7f05013d

    .line 284
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGlonass:Landroid/widget/CheckBox;

    const v0, 0x7f050140

    .line 285
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockQzss:Landroid/widget/CheckBox;

    const v0, 0x7f05013b

    .line 286
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockBeidou:Landroid/widget/CheckBox;

    const v0, 0x7f05013c

    .line 287
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGalileo:Landroid/widget/CheckBox;

    const v0, 0x7f05013f

    .line 288
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockIrnss:Landroid/widget/CheckBox;

    const v0, 0x7f0500ed

    .line 289
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    const v0, 0x7f0500f0

    .line 290
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    const v0, 0x7f0500ec

    .line 291
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    const v0, 0x7f0500ef

    .line 292
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    const v0, 0x7f0500ea

    .line 293
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    const v0, 0x7f0500eb

    .line 294
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    const v0, 0x7f0500ee

    .line 295
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    .line 297
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextView5:Landroid/widget/TextView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 298
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewNmea:Landroid/widget/TextView;

    const/high16 v2, 0x41300000    # 11.0f

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextSize(F)V

    .line 299
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v2, "Hot Start"

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 301
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextNumOfLoop:Landroid/widget/EditText;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNumOfLoop:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 302
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay1:Landroid/widget/EditText;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay1:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 303
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay2:Landroid/widget/EditText;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay2:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 304
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay3:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 305
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay4:Landroid/widget/EditText;

    iget v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDelay4:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 307
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogToSdcard:Landroid/widget/CheckBox;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogNmea:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 309
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewRefLatLng:Landroid/widget/TextView;

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Object;

    sget-wide v4, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    .line 310
    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    sget-wide v6, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    const/4 v6, 0x1

    aput-object v4, v3, v6

    const-string v4, "Reference Lat=%.06f Lng=%.06f"

    invoke-static {v4, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 309
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 312
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewHasAlmanacValue:Landroid/widget/TextView;

    const-string v3, "No"

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 313
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewAlmanacDateValue:Landroid/widget/TextView;

    const-string v3, ""

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 314
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewYearOfGnssHwValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 315
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewGnssHwNameValue:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 317
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    invoke-virtual {v0, v5}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 318
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    new-instance v3, Lcom/mediatek/lbs/em2/ui/LbsGps$5;

    invoke-direct {v3, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v3}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 332
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGpsMode:Landroid/widget/Button;

    new-instance v3, Lcom/mediatek/lbs/em2/ui/LbsGps$6;

    invoke-direct {v3, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v3}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 340
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGpsMode:Landroid/widget/Button;

    invoke-direct {v0, p0, v3}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    .line 341
    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v3, "Hot"

    invoke-interface {v0, v5, v5, v5, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 342
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v3, "Warm"

    invoke-interface {v0, v5, v6, v5, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 343
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v3, "Cold"

    invoke-interface {v0, v5, v2, v5, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 344
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v2, 0x3

    const-string v3, "Full"

    invoke-interface {v0, v5, v2, v5, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 345
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v2, "delete ALM, EPH"

    invoke-interface {v0, v5, v1, v5, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 346
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v1, 0x5

    const-string v2, "delete EPH"

    invoke-interface {v0, v5, v1, v5, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 347
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v1, 0x6

    const-string v2, "delete Time"

    invoke-interface {v0, v5, v1, v5, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 348
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/4 v1, 0x7

    const-string v2, "delete all except Time, ALM"

    invoke-interface {v0, v5, v1, v5, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 349
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x8

    const-string v2, "delete all except Time, ALM, EPO"

    invoke-interface {v0, v5, v1, v5, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 351
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mPopupDeleteAidingData:Landroid/widget/PopupMenu;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$7;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    .line 352
    invoke-virtual {v0, v1}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 378
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonDelete:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 386
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonClearLog:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$9;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 392
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonChangeRefLatLng:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$10;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 397
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogNmea:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$11;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$11;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 402
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLogToSdcard:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$12;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$12;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 407
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxLowPowerMode:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$13;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$13;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 412
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSingleShot:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$14;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$14;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 418
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGps:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$15;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$15;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 429
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockSbas:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$16;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$16;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 440
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGlonass:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$17;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$17;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 451
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockQzss:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$18;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$18;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 462
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockBeidou:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$19;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$19;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 473
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGalileo:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$20;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$20;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 484
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockIrnss:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$21;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$21;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 496
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    invoke-virtual {v0, v5}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 497
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$22;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$22;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private isBackgroundPermissionGranted()Z
    .locals 5

    .line 229
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 230
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "android.permission.ACCESS_BACKGROUND_LOCATION"

    .line 231
    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    if-nez v1, :cond_1

    .line 234
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "Background location access permission has not yet set, do you want to set it?"

    .line 235
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/lbs/em2/ui/LbsGps$4;

    invoke-direct {v2, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string v4, "No"

    .line 236
    invoke-virtual {v1, v4, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/lbs/em2/ui/LbsGps$3;

    invoke-direct {v2, p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Ljava/lang/String;)V

    const-string p0, "Yes"

    .line 241
    invoke-virtual {v1, p0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object p0

    .line 245
    invoke-virtual {p0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    return v3

    :cond_1
    return v2
.end method

.method private isGPSProviderEnable()Z
    .locals 3

    .line 194
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 195
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "GPS is disabled now, Do you want to enable it?"

    .line 196
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$2;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string v2, "No"

    .line 198
    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$1;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string p0, "Yes"

    .line 203
    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object p0

    .line 207
    invoke-virtual {p0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method private launchPackageSettings(Ljava/lang/String;)V
    .locals 3

    .line 216
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.settings.APPLICATION_DETAILS_SETTINGS"

    .line 217
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "package"

    const/4 v2, 0x0

    .line 218
    invoke-static {v1, p1, v2}, Landroid/net/Uri;->fromParts(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 219
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 220
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 222
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Failed to launch package settings: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 223
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x1

    const-string v0, "ERR: start settings failed!!"

    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 224
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "LocationEM_Gps"

    .line 1187
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private msleep(J)V
    .locals 0

    .line 1002
    :try_start_0
    invoke-static {p1, p2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1004
    invoke-virtual {p0}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private openBlackSvSelectDialog(ILjava/lang/String;)V
    .locals 10

    .line 1306
    new-instance v0, Landroid/app/Dialog;

    invoke-direct {v0, p0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string v1, "Select black sv list"

    .line 1307
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setTitle(Ljava/lang/CharSequence;)V

    const v1, 0x7f070008

    .line 1308
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setContentView(I)V

    .line 1310
    invoke-direct {p0, p2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    const v1, 0x7f050003

    .line 1312
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    .line 1313
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    const v3, 0x7f050097

    invoke-virtual {v0, v3}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/CheckBox;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const/4 v2, 0x1

    move v3, v2

    :goto_0
    const/16 v5, 0x29

    if-ge v3, v5, :cond_0

    .line 1315
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "CheckBox_sv"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 1316
    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    invoke-virtual {p0}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v7

    const-string v8, "id"

    invoke-virtual {v6, v5, v8, v7}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    .line 1317
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    invoke-virtual {v0, v5}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v6, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1320
    :cond_0
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {p2, v3}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v3

    const/4 v6, -0x1

    if-eq v3, v6, :cond_1

    move v3, v2

    goto :goto_1

    :cond_1
    move v3, v4

    :goto_1
    move v7, v4

    :goto_2
    if-ge v7, v5, :cond_4

    if-eqz v7, :cond_2

    .line 1323
    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    aget-object v8, v8, v7

    xor-int/lit8 v9, v3, 0x1

    invoke-virtual {v8, v9}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 1325
    :cond_2
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-interface {p2, v8}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v8

    if-eq v8, v6, :cond_3

    .line 1326
    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    aget-object v8, v8, v7

    invoke-virtual {v8, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    :cond_3
    add-int/lit8 v7, v7, 0x1

    goto :goto_2

    .line 1329
    :cond_4
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 1330
    new-instance p2, Lcom/mediatek/lbs/em2/ui/LbsGps$31;

    invoke-direct {p2, p0, p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$31;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;ILandroid/app/Dialog;)V

    invoke-virtual {v1, p2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1337
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    aget-object p1, p1, v4

    new-instance p2, Lcom/mediatek/lbs/em2/ui/LbsGps$32;

    invoke-direct {p2, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$32;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    invoke-virtual {p1, p2}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private openDialogLatlng(Z)V
    .locals 9

    .line 1009
    new-instance v0, Landroid/app/Dialog;

    invoke-direct {v0, p0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string v1, "Change Ref Position"

    .line 1010
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setTitle(Ljava/lang/CharSequence;)V

    const v1, 0x7f070009

    .line 1011
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setContentView(I)V

    const v1, 0x7f05009f

    .line 1013
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/EditText;

    const v2, 0x7f0500a0

    .line 1014
    invoke-virtual {v0, v2}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/EditText;

    const v3, 0x7f05002a

    .line 1015
    invoke-virtual {v0, v3}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    const v4, 0x7f050029

    .line 1016
    invoke-virtual {v0, v4}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/Button;

    const v5, 0x7f050028

    .line 1017
    invoke-virtual {v0, v5}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/Button;

    .line 1019
    sget-wide v6, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    const-string v6, "0123456789.-"

    .line 1020
    invoke-static {v6}, Landroid/text/method/DigitsKeyListener;->getInstance(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;

    move-result-object v7

    invoke-virtual {v1, v7}, Landroid/widget/EditText;->setKeyListener(Landroid/text/method/KeyListener;)V

    .line 1021
    sget-wide v7, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v2, v7}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 1022
    invoke-static {v6}, Landroid/text/method/DigitsKeyListener;->getInstance(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;

    move-result-object v6

    invoke-virtual {v2, v6}, Landroid/widget/EditText;->setKeyListener(Landroid/text/method/KeyListener;)V

    .line 1024
    new-instance v6, Lcom/mediatek/lbs/em2/ui/LbsGps$27;

    invoke-direct {v6, p0, v1, v2, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$27;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/widget/EditText;Landroid/widget/EditText;Landroid/app/Dialog;)V

    invoke-virtual {v3, v6}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1043
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$28;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$28;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/app/Dialog;)V

    invoke-virtual {v4, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1048
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$29;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$29;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/app/Dialog;)V

    invoke-virtual {v5, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1055
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1058
    new-instance p1, Landroid/widget/Button;

    invoke-direct {p1, p0}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    .line 1059
    new-instance v0, Landroid/app/Dialog;

    invoke-direct {v0, p0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    const-string v1, "OK"

    .line 1060
    invoke-virtual {p1, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    const-string v1, "Input lat/lng are incorrect"

    .line 1061
    invoke-virtual {v0, v1}, Landroid/app/Dialog;->setTitle(Ljava/lang/CharSequence;)V

    .line 1062
    invoke-virtual {v0, p1}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 1063
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 1064
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$30;

    invoke-direct {v1, p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$30;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;Landroid/app/Dialog;)V

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    const-string v0, ","

    .line 1287
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 1288
    new-instance v0, Ljava/util/ArrayList;

    array-length v1, p1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 1289
    array-length v1, p1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p1, v3

    .line 1290
    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    const-string v5, "All"

    .line 1291
    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 1292
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_0
    const-string v5, ""

    .line 1293
    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 1294
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    if-gez v4, :cond_1

    const-string p1, "Negative value is invalid for Satellite Blacklist."

    .line 1296
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    goto :goto_2

    .line 1299
    :cond_1
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    :goto_2
    return-object v0
.end method

.method private resetVarialbe()V
    .locals 2

    const/4 v0, 0x0

    .line 543
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFixCount:I

    .line 544
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSatUpdateCount:I

    .line 545
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaCount:I

    const/4 v1, -0x1

    .line 546
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTTFF:I

    .line 547
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFix:Z

    const/4 v1, 0x0

    .line 548
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstLocation:Landroid/location/Location;

    const/4 v1, 0x0

    .line 549
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstDistance:F

    .line 550
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDistance:F

    .line 551
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/ui/StringList;->clear()V

    const-string v1, ""

    .line 552
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvNumStr:Ljava/lang/String;

    .line 553
    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    .line 554
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGotFirstSv:Z

    .line 555
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewTimer:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 556
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewLocation:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 557
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewSatellite:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 558
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewNmea:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 559
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->resetTimer()V

    return-void
.end method

.method private sendMessage(II)V
    .locals 1

    .line 958
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 959
    iput p1, v0, Landroid/os/Message;->what:I

    .line 960
    iput p2, v0, Landroid/os/Message;->arg1:I

    .line 961
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private sendMessage(IIILjava/lang/Object;)V
    .locals 0

    .line 965
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p0

    invoke-virtual {p0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method private setBlacklistData()V
    .locals 8

    const-string v0, ""

    .line 1218
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    .line 1219
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGps:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    const-string v1, ","

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1220
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "GPS Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1221
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1222
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_0
    if-ge v4, v3, :cond_0

    .line 1224
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "1,"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 1227
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockSbas:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1228
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SBAS Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1229
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1230
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_1
    if-ge v4, v3, :cond_1

    .line 1232
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "2,"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 1235
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGlonass:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 1236
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Glonass Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1237
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1238
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_2
    if-ge v4, v3, :cond_2

    .line 1240
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "3,"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_2

    .line 1243
    :cond_2
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockQzss:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_4

    .line 1244
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "QZSS Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1245
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1246
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_3
    if-ge v4, v3, :cond_4

    .line 1248
    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    if-eqz v5, :cond_3

    add-int/lit16 v5, v5, 0xc0

    .line 1252
    :cond_3
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "4,"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 1255
    :cond_4
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockBeidou:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_5

    .line 1256
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Beidou Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1257
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1258
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_4
    if-ge v4, v3, :cond_5

    .line 1260
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "5,"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_4

    .line 1263
    :cond_5
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockGalileo:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_6

    .line 1264
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Galileo Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1265
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1266
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    move v4, v2

    :goto_5
    if-ge v4, v3, :cond_6

    .line 1268
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "6,"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v4, v4, 0x1

    goto :goto_5

    .line 1271
    :cond_6
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxBlockIrnss:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_7

    .line 1272
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "IRNSS Blacklist: "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1273
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->parseSatelliteBlacklist(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 1274
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    :goto_6
    if-ge v2, v3, :cond_7

    .line 1276
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "7,"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    add-int/lit8 v2, v2, 0x1

    goto :goto_6

    .line 1280
    :cond_7
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mBlacklist: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1281
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mBlackList:Ljava/lang/String;

    const-string v1, "gnss_satellite_blacklist"

    invoke-static {v0, v1, p0}, Landroid/provider/Settings$Global;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method private setGpsMode(I)V
    .locals 13

    .line 563
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "rti"

    const/4 v2, 0x1

    if-nez p1, :cond_0

    const-string p1, "Hot Start"

    .line 565
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 566
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 567
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "Hot Start: delete rti"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    :cond_0
    const-string v3, "ephemeris"

    if-ne p1, v2, :cond_1

    const-string p1, "Warm Start"

    .line 569
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 570
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "Warm Start: delete eph"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 571
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    goto/16 :goto_0

    :cond_1
    const/4 v4, 0x2

    const-string v5, "health"

    const-string v6, "time"

    const-string v7, "utc"

    const-string v8, "iono"

    const-string v9, "position"

    if-ne p1, v4, :cond_2

    const-string p1, "Cold Start"

    .line 573
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 574
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 575
    invoke-virtual {v0, v9, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 576
    invoke-virtual {v0, v6, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 577
    invoke-virtual {v0, v8, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 578
    invoke-virtual {v0, v7, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 579
    invoke-virtual {v0, v5, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 580
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "Cold Start: delete eph, pos, time, iono, utc, hlth"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    :cond_2
    const/4 v4, 0x3

    if-ne p1, v4, :cond_3

    const-string p1, "Full Start"

    .line 582
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    const-string p1, "all"

    .line 583
    invoke-virtual {v0, p1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 584
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "Full Start: delete all"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    :cond_3
    const/4 v4, 0x4

    if-ne p1, v4, :cond_4

    const-string p1, "VzW Delete Almanac, Ephemeris"

    .line 586
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 587
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p1, "almanac"

    .line 588
    invoke-virtual {v0, p1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 589
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "delete eph, alm"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    :cond_4
    const/4 v4, 0x5

    if-ne p1, v4, :cond_5

    const-string p1, "VzW Delete Ephemeris"

    .line 591
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 592
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 593
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "delete eph"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    :cond_5
    const/4 v4, 0x6

    if-ne p1, v4, :cond_6

    const-string p1, "VzW Delete Reference Time"

    .line 595
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 596
    invoke-virtual {v0, v6, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 597
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "delete time"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_6
    const/4 v4, 0x7

    const-string v6, "celldb-info"

    const-string v10, "sadata"

    const-string v11, "svsteer"

    const-string v12, "svdir"

    if-ne p1, v4, :cond_7

    const-string p1, "Vzw Delete all except time, alm"

    .line 599
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 600
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 602
    invoke-virtual {v0, v9, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 604
    invoke-virtual {v0, v8, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 605
    invoke-virtual {v0, v7, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 606
    invoke-virtual {v0, v5, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 607
    invoke-virtual {v0, v12, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 608
    invoke-virtual {v0, v11, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 609
    invoke-virtual {v0, v10, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 610
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p1, "hot-still"

    .line 611
    invoke-virtual {v0, p1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p1, "epo"

    .line 612
    invoke-virtual {v0, p1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 613
    invoke-virtual {v0, v6, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 614
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "delete all except time, alm"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_7
    const/16 v4, 0x8

    if-ne p1, v4, :cond_8

    const-string p1, "VzW Delete all except time, alm, epo"

    .line 616
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 617
    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 619
    invoke-virtual {v0, v9, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 621
    invoke-virtual {v0, v8, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 622
    invoke-virtual {v0, v7, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 624
    invoke-virtual {v0, v12, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 625
    invoke-virtual {v0, v11, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 626
    invoke-virtual {v0, v10, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 627
    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 630
    invoke-virtual {v0, v6, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 631
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewDeleteAidingData:Landroid/widget/TextView;

    const-string v1, "delete all except time, alm, epo"

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 636
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    const-string p1, "gps"

    const-string v1, "delete_aiding_data"

    invoke-virtual {p0, p1, v1, v0}, Landroid/location/LocationManager;->sendExtraCommand(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z

    return-void

    :cond_8
    const-string p1, "WARNING: unknown reset type"

    .line 633
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    return-void
.end method

.method private setSvOutCheckStr(I)V
    .locals 3

    const-string v0, ""

    const/4 v1, 0x0

    :goto_0
    const/16 v2, 0x29

    if-ge v1, v2, :cond_1

    .line 1351
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSvArr:[Landroid/widget/CheckBox;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1352
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    const-string v1, "0,"

    .line 1359
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v0, "All,"

    :cond_2
    packed-switch p1, :pswitch_data_0

    goto :goto_2

    .line 1383
    :pswitch_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockIrnss:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1380
    :pswitch_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGalileo:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1377
    :pswitch_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockBeidou:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1374
    :pswitch_3
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockQzss:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1371
    :pswitch_4
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGlonass:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1368
    :pswitch_5
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockSbas:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1365
    :pswitch_6
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewBlockGps:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private showClearLogConfirmDialog()V
    .locals 3

    .line 1410
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Are you sure to delete nmea log?"

    .line 1411
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 1412
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 1414
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$35;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$35;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1420
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$36;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$36;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1425
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 1426
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private showLogNmeaConfirmDialog()V
    .locals 3

    .line 1389
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Data may be accessed by other APP. Are you sure to log nmea data?"

    .line 1390
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 1391
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 1393
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$33;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$33;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1399
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$34;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$34;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 1405
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 1406
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method private startDeletingAidingData()V
    .locals 2

    const-string v0, "startDeletingAidingData"

    .line 849
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 850
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGpsMode:I

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 851
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 853
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_1
    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    .line 855
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_2
    const/4 v1, 0x3

    if-ne v0, v1, :cond_3

    .line 857
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_3
    const/4 v1, 0x4

    if-ne v0, v1, :cond_4

    .line 859
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_4
    const/4 v1, 0x5

    if-ne v0, v1, :cond_5

    .line 861
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_5
    const/4 v1, 0x6

    if-ne v0, v1, :cond_6

    .line 863
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_6
    const/4 v1, 0x7

    if-ne v0, v1, :cond_7

    .line 865
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    goto :goto_0

    :cond_7
    const/16 v1, 0x8

    if-ne v0, v1, :cond_8

    .line 867
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->setGpsMode(I)V

    :cond_8
    :goto_0
    return-void
.end method

.method private startGps()V
    .locals 5

    const-string v0, "startGps"

    .line 517
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 519
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    .line 520
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->startTimer()V

    .line 522
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->getTimeString2(J)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    .line 525
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLowPowerMode:Z

    if-eqz v0, :cond_0

    const v0, 0x493e0

    goto :goto_0

    :cond_0
    const/16 v0, 0x3e8

    :goto_0
    int-to-long v0, v0

    const/4 v2, 0x0

    iget-boolean v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mSingleShot:Z

    const-string v4, "gps"

    .line 523
    invoke-static {v4, v0, v1, v2, v3}, Landroid/location/LocationRequest;->createFromDeprecatedProvider(Ljava/lang/String;JFZ)Landroid/location/LocationRequest;

    move-result-object v0

    .line 526
    iget-boolean v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLowPowerMode:Z

    invoke-virtual {v0, v1}, Landroid/location/LocationRequest;->setLowPowerMode(Z)Landroid/location/LocationRequest;

    const/4 v1, 0x1

    .line 527
    invoke-virtual {v0, v1}, Landroid/location/LocationRequest;->setLocationSettingsIgnored(Z)Landroid/location/LocationRequest;

    .line 528
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationListener:Landroid/location/LocationListener;

    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mHandler:Landroid/os/Handler;

    .line 531
    invoke-virtual {v3}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v3

    .line 528
    invoke-virtual {v1, v0, v2, v3}, Landroid/location/LocationManager;->requestLocationUpdates(Landroid/location/LocationRequest;Landroid/location/LocationListener;Landroid/os/Looper;)V

    .line 532
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->resetVarialbe()V

    return-void
.end method

.method private startStressGps()V
    .locals 10

    const/4 v0, 0x0

    .line 706
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x1

    if-lt v1, v2, :cond_0

    .line 708
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextNumOfLoop:Landroid/widget/EditText;

    .line 709
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay1:Landroid/widget/EditText;

    .line 710
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay2:Landroid/widget/EditText;

    .line 711
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v7

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    .line 712
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v8

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay4:Landroid/widget/EditText;

    .line 713
    invoke-virtual {v2}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v9

    move-object v3, v1

    move-object v4, p0

    invoke-direct/range {v3 .. v9}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;-><init>(Lcom/mediatek/lbs/em2/ui/LbsGps;IIIII)V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    .line 714
    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->startStress()V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 723
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    invoke-virtual {v1, v0}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 724
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextNumOfLoop:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 725
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay1:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 726
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay2:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 727
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay3:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 728
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mEditTextDelay4:Landroid/widget/EditText;

    invoke-virtual {v1, v0}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 729
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonDelete:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 730
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGpsMode:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 731
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mCheckBoxSwitchDelet2First:Landroid/widget/CheckBox;

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 733
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "stress_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v1

    invoke-direct {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->getTimeString2(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFolderName:Ljava/lang/String;

    const/4 v0, 0x0

    .line 734
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    return-void

    .line 707
    :cond_0
    :try_start_1
    new-instance v1, Ljava/lang/NumberFormatException;

    invoke-direct {v1}, Ljava/lang/NumberFormatException;-><init>()V

    throw v1
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception v1

    .line 716
    invoke-virtual {v1}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 717
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "ERR: Parameters error!!"

    invoke-static {v1, v2, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 718
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 719
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    invoke-virtual {p0, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    return-void
.end method

.method private stopGps()V
    .locals 1

    const-string v0, "stopGps"

    .line 536
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 537
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->stopTimer()V

    .line 538
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationListener:Landroid/location/LocationListener;

    invoke-virtual {v0, p0}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    return-void
.end method

.method private stopStressGps()V
    .locals 3

    .line 738
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->enableWidgetAfterStress()V

    .line 739
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "single_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1}, Ljava/util/Date;->getTime()J

    move-result-wide v1

    invoke-direct {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsGps;->getTimeString2(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFolderName:Ljava/lang/String;

    const/4 v0, 0x0

    .line 740
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    return-void
.end method

.method private updateFirstSvStr(Landroid/location/GnssStatus;)V
    .locals 5

    const-string v0, ""

    .line 1121
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    const-string v0, "\n"

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    move v2, v1

    .line 1124
    :goto_0
    invoke-virtual {p1}, Landroid/location/GnssStatus;->getSatelliteCount()I

    move-result v3

    if-ge v1, v3, :cond_1

    .line 1125
    invoke-virtual {p1, v1}, Landroid/location/GnssStatus;->getCn0DbHz(I)F

    move-result v3

    const/4 v4, 0x0

    cmpl-float v3, v3, v4

    if-lez v3, :cond_0

    add-int/lit8 v2, v2, 0x1

    .line 1127
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "SV"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Landroid/location/GnssStatus;->getSvid(I)I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1128
    invoke-virtual {p1, v1}, Landroid/location/GnssStatus;->getCn0DbHz(I)F

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1131
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    move v1, v2

    .line 1133
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "First Satellite Num="

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvNumStr:Ljava/lang/String;

    return-void
.end method

.method private updateGnssHwNameValue()V
    .locals 3

    .line 1212
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {v0}, Landroid/location/LocationManager;->getGnssHardwareModelName()Ljava/lang/String;

    move-result-object v0

    .line 1213
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewGnssHwNameValue:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1214
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateGnssHwNameValue, hwName = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    return-void
.end method

.method private updateHasAlmanacValue()V
    .locals 4

    const-string v0, "vendor.gps.almanac"

    .line 1193
    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    .line 1194
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "0"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    .line 1199
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewAlmanacDateValue:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v1, "Yes"

    goto :goto_1

    .line 1196
    :cond_1
    :goto_0
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewAlmanacDateValue:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v1, "No"

    .line 1201
    :goto_1
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewHasAlmanacValue:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1202
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateHasAlmanacValue, existence = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " date="

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    return-void
.end method

.method private updateLocationInfo(Landroid/location/Location;)V
    .locals 9

    if-nez p1, :cond_0

    return-void

    .line 1094
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Location Count="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFixCount:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1095
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x2

    new-array v3, v0, [Ljava/lang/Object;

    .line 1096
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v4

    const/4 v6, 0x1

    aput-object v4, v3, v6

    const-string v4, "Lat=%.06f Lng=%.06f\n"

    .line 1095
    invoke-static {v4, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1097
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "Time tick="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1098
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "UTC time="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v7

    invoke-direct {p0, v7, v8}, Lcom/mediatek/lbs/em2/ui/LbsGps;->getTimeString(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1099
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "ElapsedtimeNs="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getElapsedRealtimeNanos()J

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1100
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "ElapsedtimeUncertaintyNs="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getElapsedRealtimeUncertaintyNanos()D

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1101
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "Altitude="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getAltitude()D

    move-result-wide v7

    invoke-virtual {v3, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasAltitude()Z

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1102
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "H Accuracy="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getAccuracy()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasAccuracy()Z

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1103
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "V Accuracy="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getVerticalAccuracyMeters()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasVerticalAccuracy()Z

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1104
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Bearing="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getBearing()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasBearing()Z

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1105
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Bearing Accuracy="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getBearingAccuracyDegrees()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasBearingAccuracy()Z

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1106
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Speed="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getSpeed()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasSpeed()Z

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1107
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Speed Accuracy="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->getSpeedAccuracyMetersPerSecond()F

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/location/Location;->hasSpeedAccuracy()Z

    move-result p1

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1109
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "Distance="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mDistance:F

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1110
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "TTFF="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTTFF:I

    if-gez p1, :cond_1

    const-string p1, ""

    goto :goto_0

    :cond_1
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    :goto_0
    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1111
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-array p1, v0, [Ljava/lang/Object;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstLocation:Landroid/location/Location;

    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    aput-object v0, p1, v5

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstLocation:Landroid/location/Location;

    .line 1112
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    aput-object v0, p1, v6

    const-string v0, "First Lat=%.06f Lng=%.06f\n"

    .line 1111
    invoke-static {v0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1113
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "First distance="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstDistance:F

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1114
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvNumStr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1115
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mFirstSvStr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1116
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewLocation:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private updateRefLatLng()V
    .locals 4

    .line 1073
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1075
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v1

    sput-wide v1, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    .line 1076
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v0

    sput-wide v0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    .line 1077
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewRefLatLng:Landroid/widget/TextView;

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    sget-wide v2, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLat:D

    .line 1078
    invoke-static {v2, v3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    aput-object v2, v0, v1

    const/4 v1, 0x1

    sget-wide v2, Lcom/mediatek/lbs/em2/ui/LbsGps;->mRefLng:D

    invoke-static {v2, v3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "Reference Lat=%.06f Lng=%.06f"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 1077
    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method private updateYearOfGnssHwValue()V
    .locals 4

    .line 1206
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {v0}, Landroid/location/LocationManager;->getGnssYearOfHardware()I

    move-result v0

    .line 1207
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTextViewYearOfGnssHwValue:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1208
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateYearOfGnssHwValue, year = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method ClearNmeaLog()V
    .locals 2

    const-string v0, "/sdcard/nmea/"

    .line 1433
    invoke-virtual {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->deleteFilePath(Ljava/lang/String;)Z

    .line 1435
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "/data/data/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/nmea/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1436
    invoke-virtual {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->deleteFilePath(Ljava/lang/String;)Z

    return-void
.end method

.method deleteFilePath(Ljava/lang/String;)Z
    .locals 6

    .line 1440
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1441
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1442
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_1

    aget-object v5, v1, v4

    .line 1443
    invoke-virtual {v5}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0, v5}, Lcom/mediatek/lbs/em2/ui/LbsGps;->deleteFilePath(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    return v3

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 1448
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "The directory is deleted: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1450
    :cond_2
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    move-result p0

    return p0
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3

    const-string v0, "onCreate()"

    .line 154
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 155
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f070007

    .line 156
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const-string p1, "location"

    .line 158
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    if-nez p1, :cond_0

    const-string p1, "ERR: mLocationManager is null"

    .line 160
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 163
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    invoke-virtual {p1, v0}, Landroid/location/LocationManager;->addNmeaListener(Landroid/location/OnNmeaMessageListener;)Z

    .line 164
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {p1, v0}, Landroid/location/LocationManager;->registerGnssStatusCallback(Landroid/location/GnssStatus$Callback;)Z

    .line 166
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->initWidget()V

    .line 167
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateRefLatLng()V

    .line 169
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "single_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->getTimeString2(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFolderName:Ljava/lang/String;

    const/4 p1, 0x0

    .line 170
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaFileName:Ljava/lang/String;

    .line 172
    new-instance p1, Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    invoke-direct {p1}, Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;-><init>()V

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mToMnldSender:Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    .line 173
    new-instance p1, Lcom/mediatek/socket/base/UdpClient;

    sget-object v0, Landroid/net/LocalSocketAddress$Namespace;->ABSTRACT:Landroid/net/LocalSocketAddress$Namespace;

    const/16 v1, 0xc

    const-string v2, "mtk_debugService2mnld"

    invoke-direct {p1, v2, v0, v1}, Lcom/mediatek/socket/base/UdpClient;-><init>(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;I)V

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    const-string v0, "onDestroy()"

    .line 1175
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->log(Ljava/lang/String;)V

    .line 1176
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 1177
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mNmeaListener:Landroid/location/OnNmeaMessageListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeNmeaListener(Landroid/location/OnNmeaMessageListener;)V

    .line 1178
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationListener:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    .line 1179
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mLocationManager:Landroid/location/LocationManager;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mGnssStatusCallback:Landroid/location/GnssStatus$Callback;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->unregisterGnssStatusCallback(Landroid/location/GnssStatus$Callback;)V

    .line 1181
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mTimer:Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$GpsTimer;->stopTimer()V

    .line 1182
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mStressTest:Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsGps$StressTest;->stopStress()V

    .line 1183
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mToMnldSender:Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldNeMsg(Lcom/mediatek/socket/base/UdpClient;Z)Z

    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Bundle;)V
    .locals 1

    .line 179
    invoke-super {p0, p1}, Landroid/app/Activity;->onRestoreInstanceState(Landroid/os/Bundle;)V

    .line 180
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonGps:Landroid/widget/ToggleButton;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    .line 181
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mButtonStress:Landroid/widget/ToggleButton;

    invoke-virtual {p0, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 186
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 187
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateHasAlmanacValue()V

    .line 188
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateYearOfGnssHwValue()V

    .line 189
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->updateGnssHwNameValue()V

    .line 190
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mToMnldSender:Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps;->mUdpClient:Lcom/mediatek/socket/base/UdpClient;

    const/4 v1, 0x1

    invoke-virtual {v0, p0, v1}, Lcom/mediatek/lbs/em2/mnldinterface/Debug2MnldInterface$Debug2MnldInterfaceSender;->debugMnldNeMsg(Lcom/mediatek/socket/base/UdpClient;Z)Z

    return-void
.end method

.method public write2File(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Z
    .locals 2

    const-string v0, "/"

    if-eqz p6, :cond_0

    .line 1142
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p6, "/sdcard/"

    invoke-virtual {p0, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 1144
    :cond_0
    new-instance p6, Ljava/lang/StringBuilder;

    invoke-direct {p6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "/data/data/"

    invoke-virtual {p6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p6, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1146
    :goto_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1147
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    if-eqz p2, :cond_1

    .line 1150
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1151
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1152
    invoke-virtual {p1}, Ljava/io/File;->mkdir()Z

    .line 1155
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1156
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x1

    const/4 p3, 0x0

    if-eqz p5, :cond_2

    .line 1159
    :try_start_0
    new-instance p1, Ljava/io/DataOutputStream;

    new-instance p5, Ljava/io/FileOutputStream;

    invoke-direct {p5, p0, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;Z)V

    invoke-direct {p1, p5}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    goto :goto_1

    .line 1161
    :cond_2
    new-instance p0, Ljava/io/DataOutputStream;

    new-instance p5, Ljava/io/FileOutputStream;

    invoke-direct {p5, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {p0, p5}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object p1, p0

    .line 1162
    :goto_1
    invoke-virtual {p1, p4}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 1163
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return p2

    :catch_0
    move-exception p0

    .line 1168
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    return p3

    :catch_1
    move-exception p0

    .line 1165
    invoke-virtual {p0}, Ljava/io/FileNotFoundException;->printStackTrace()V

    return p3
.end method
