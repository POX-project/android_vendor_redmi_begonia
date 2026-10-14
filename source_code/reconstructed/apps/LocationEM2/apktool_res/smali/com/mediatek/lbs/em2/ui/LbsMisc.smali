.class public Lcom/mediatek/lbs/em2/ui/LbsMisc;
.super Landroid/app/Activity;
.source "LbsMisc.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;,
        Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;
    }
.end annotation


# instance fields
.field SERVER_IP:[Ljava/lang/String;

.field SERVER_NAME:[Ljava/lang/String;

.field SERVER_PORT:[Ljava/lang/String;

.field protected mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

.field private mButtonConnect:Landroid/widget/ToggleButton;

.field private mButton_GPS:Landroid/widget/Button;

.field private mButton_TIME:Landroid/widget/Button;

.field private mButton_WIFI:Landroid/widget/Button;

.field private mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

.field private mCheckBoxE911OpenGpsEnable:Landroid/widget/CheckBox;

.field private mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

.field private mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

.field private mConnectionThread:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

.field private mEditTextIp:Landroid/widget/EditText;

.field private mEditTextPort:Landroid/widget/EditText;

.field private mHandler:Landroid/os/Handler;

.field private mLocationManager:Landroid/location/LocationManager;

.field private mSessionId:I

.field private mSpinnerServer:Landroid/widget/Spinner;

.field private mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

.field private mTelephonyMgr:Landroid/telephony/TelephonyManager;

.field private mTextViewCellInfo:Landroid/widget/TextView;

.field private mTextViewCountryDetectorValue:Landroid/widget/TextView;

.field private mTextViewResult:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 48
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, "LOCAL"

    const-string v1, "CMCC"

    const-string v2, "GOOGLE"

    .line 64
    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_NAME:[Ljava/lang/String;

    const-string v0, "127.0.0.1"

    const-string v1, "221.176.0.55"

    const-string v2, "supl.google.com"

    .line 65
    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_IP:[Ljava/lang/String;

    const-string v0, "7276"

    const-string v1, "7275"

    .line 66
    filled-new-array {v0, v1, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_PORT:[Ljava/lang/String;

    const/4 v0, 0x0

    .line 68
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSessionId:I

    .line 70
    new-instance v0, Lcom/mediatek/lbs/em2/ui/StringList;

    const/16 v1, 0xc

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/ui/StringList;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    const/4 v0, 0x0

    .line 73
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mLocationManager:Landroid/location/LocationManager;

    .line 358
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/Spinner;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSpinnerServer:Landroid/widget/Spinner;

    return-object p0
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mEditTextIp:Landroid/widget/EditText;

    return-object p0
.end method

.method static synthetic access$1000(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$1100(Lcom/mediatek/lbs/em2/ui/LbsMisc;Landroid/content/Context;)V
    .locals 0

    .line 48
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->addPackageInLocationSettingsWhitelist(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic access$1200(Lcom/mediatek/lbs/em2/ui/LbsMisc;Landroid/content/Context;)V
    .locals 0

    .line 48
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->removePackageInLocationSettingsWhitelist(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic access$1400(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/os/Handler;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$1500(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/StringList;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mStringList:Lcom/mediatek/lbs/em2/ui/StringList;

    return-object p0
.end method

.method static synthetic access$1600(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/TextView;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewResult:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic access$1700(Lcom/mediatek/lbs/em2/ui/LbsMisc;Ljava/lang/String;)V
    .locals 0

    .line 48
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$1800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V
    .locals 0

    .line 48
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->updateCellInfo()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/EditText;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mEditTextPort:Landroid/widget/EditText;

    return-object p0
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/ToggleButton;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButtonConnect:Landroid/widget/ToggleButton;

    return-object p0
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mConnectionThread:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    return-object p0
.end method

.method static synthetic access$402(Lcom/mediatek/lbs/em2/ui/LbsMisc;Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;)Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mConnectionThread:Lcom/mediatek/lbs/em2/ui/LbsMisc$ConnectionThread;

    return-object p1
.end method

.method static synthetic access$500(Lcom/mediatek/lbs/em2/ui/LbsMisc;)I
    .locals 0

    .line 48
    iget p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSessionId:I

    return p0
.end method

.method static synthetic access$508(Lcom/mediatek/lbs/em2/ui/LbsMisc;)I
    .locals 2

    .line 48
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSessionId:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSessionId:I

    return v0
.end method

.method static synthetic access$600(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxE911OpenGpsEnable:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$700(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/widget/CheckBox;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

    return-object p0
.end method

.method static synthetic access$900(Lcom/mediatek/lbs/em2/ui/LbsMisc;)Landroid/location/LocationManager;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mLocationManager:Landroid/location/LocationManager;

    return-object p0
.end method

.method private addPackageInLocationSettingsWhitelist(Landroid/content/Context;)V
    .locals 4

    .line 467
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 470
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "location_ignore_settings_package_whitelist"

    .line 469
    invoke-static {v0, v1}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 472
    invoke-virtual {v0, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    const/4 v3, -0x1

    if-ne v2, v3, :cond_2

    :cond_0
    if-nez v0, :cond_1

    const-string v0, ""

    goto :goto_0

    .line 473
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 474
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 475
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Add ignore settings outStr = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 477
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    .line 476
    invoke-static {p0, v1, p1}, Landroid/provider/Settings$Global;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_2
    return-void
.end method

.method private getLocalIpAddress()Ljava/lang/String;
    .locals 5

    .line 402
    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 403
    invoke-interface {v0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/net/NetworkInterface;

    .line 404
    invoke-virtual {v1}, Ljava/net/NetworkInterface;->getInetAddresses()Ljava/util/Enumeration;

    move-result-object v1

    :cond_1
    invoke-interface {v1}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 405
    invoke-interface {v1}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/net/InetAddress;

    .line 406
    invoke-virtual {v2}, Ljava/net/InetAddress;->isLoopbackAddress()Z

    move-result v3

    if-nez v3, :cond_1

    .line 407
    invoke-virtual {v2}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v2

    .line 408
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/16 v4, 0x10

    if-gt v3, v4, :cond_1

    .line 409
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "IP="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    :catch_0
    move-exception p0

    .line 416
    invoke-virtual {p0}, Ljava/net/SocketException;->printStackTrace()V

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private isPackageInLocationSettingsWhitelist(Landroid/content/Context;)Z
    .locals 1

    .line 453
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 456
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "location_ignore_settings_package_whitelist"

    .line 455
    invoke-static {p0, v0}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 458
    invoke-virtual {p0, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result p0

    const/4 p1, -0x1

    if-eq p0, p1, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "LocationEM_Misc"

    .line 516
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private removePackageInLocationSettingsWhitelist(Landroid/content/Context;)V
    .locals 7

    .line 486
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 489
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "location_ignore_settings_package_whitelist"

    .line 488
    invoke-static {v0, v1}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, ""

    const/4 v3, -0x1

    if-eqz v0, :cond_1

    .line 494
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, ","

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v4

    if-eq v4, v3, :cond_0

    .line 496
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    .line 498
    :cond_0
    invoke-virtual {v0, p1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v4

    if-eq v4, v3, :cond_2

    .line 500
    invoke-virtual {v0, p1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_1
    move v4, v3

    :cond_2
    :goto_0
    if-eq v4, v3, :cond_3

    .line 506
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Remove ignore settings outStr = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 508
    invoke-virtual {p0}, Landroid/app/Activity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    .line 507
    invoke-static {p0, v1, v2}, Landroid/provider/Settings$Global;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_3
    return-void
.end method

.method private updateCellInfo()V
    .locals 7

    .line 422
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTelephonyMgr:Landroid/telephony/TelephonyManager;

    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkOperator()Ljava/lang/String;

    move-result-object v0

    .line 423
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTelephonyMgr:Landroid/telephony/TelephonyManager;

    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getCellLocation()Landroid/telephony/CellLocation;

    move-result-object v1

    .line 424
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->getLocalIpAddress()Ljava/lang/String;

    move-result-object v2

    .line 426
    instance-of v3, v1, Landroid/telephony/gsm/GsmCellLocation;

    const/4 v4, -0x1

    if-eqz v3, :cond_1

    .line 427
    check-cast v1, Landroid/telephony/gsm/GsmCellLocation;

    if-eqz v1, :cond_0

    .line 431
    invoke-virtual {v1}, Landroid/telephony/gsm/GsmCellLocation;->getCid()I

    move-result v4

    .line 432
    invoke-virtual {v1}, Landroid/telephony/gsm/GsmCellLocation;->getLac()I

    move-result v1

    move v6, v4

    move v4, v1

    move v1, v6

    goto :goto_0

    :cond_0
    move v1, v4

    .line 434
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCellInfo:Landroid/widget/TextView;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "mccMnc=["

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "] lac=["

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "] cid=["

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "]\nIP="

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 436
    :cond_1
    instance-of v0, v1, Landroid/telephony/cdma/CdmaCellLocation;

    if-eqz v0, :cond_3

    .line 437
    check-cast v1, Landroid/telephony/cdma/CdmaCellLocation;

    if-eqz v1, :cond_2

    .line 441
    invoke-virtual {v1}, Landroid/telephony/cdma/CdmaCellLocation;->getNetworkId()I

    move-result v4

    .line 442
    invoke-virtual {v1}, Landroid/telephony/cdma/CdmaCellLocation;->getSystemId()I

    move-result v0

    goto :goto_1

    :cond_2
    move v0, v4

    .line 444
    :goto_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCellInfo:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "networkId=["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "] systemId=["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "] IP="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 446
    :cond_3
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCellInfo:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Unknown Cell Location IP="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :goto_2
    return-void
.end method


# virtual methods
.method protected applyAgpsConfigToUI()V
    .locals 4

    .line 269
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    if-nez v0, :cond_0

    const-string v0, "agpsInterface is null"

    .line 270
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    return-void

    .line 273
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfigV17()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v0

    .line 274
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxE911OpenGpsEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v0

    iget-boolean v0, v0, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->e911OpenGpsEnable:Z

    invoke-virtual {v1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 278
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "country_detector"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/CountryDetector;

    if-eqz v0, :cond_1

    .line 280
    invoke-virtual {v0}, Landroid/location/CountryDetector;->detectCountry()Landroid/location/Country;

    move-result-object v0

    .line 281
    invoke-virtual {v0}, Landroid/location/Country;->getSource()I

    move-result v1

    .line 282
    invoke-virtual {v0}, Landroid/location/Country;->getCountryIso()Ljava/lang/String;

    move-result-object v0

    .line 283
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "country="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " ,source="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 284
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCountryDetectorValue:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 285
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "countryDetector result: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected initAgpsInterface()V
    .locals 2

    .line 261
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "agps interface connection failure"

    .line 263
    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 264
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3

    const-string v0, "onCreate"

    .line 77
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 78
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 81
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->initAgpsInterface()V
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    const p1, 0x7f07000e

    .line 87
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    const p1, 0x7f050021

    .line 89
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_TIME:Landroid/widget/Button;

    const p1, 0x7f05000b

    .line 90
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_GPS:Landroid/widget/Button;

    const p1, 0x7f050027

    .line 91
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_WIFI:Landroid/widget/Button;

    const p1, 0x7f0500f1

    .line 92
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCellInfo:Landroid/widget/TextView;

    const p1, 0x7f0500c7

    .line 93
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Spinner;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSpinnerServer:Landroid/widget/Spinner;

    const p1, 0x7f0500a1

    .line 94
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/EditText;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mEditTextIp:Landroid/widget/EditText;

    const p1, 0x7f0500a2

    .line 95
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/EditText;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mEditTextPort:Landroid/widget/EditText;

    const p1, 0x7f05002b

    .line 96
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ToggleButton;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButtonConnect:Landroid/widget/ToggleButton;

    const p1, 0x7f050111

    .line 97
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewResult:Landroid/widget/TextView;

    const p1, 0x7f0500f2

    .line 98
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTextViewCountryDetectorValue:Landroid/widget/TextView;

    const p1, 0x7f05003c

    .line 99
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxE911OpenGpsEnable:Landroid/widget/CheckBox;

    const p1, 0x7f05003f

    .line 101
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

    const p1, 0x7f050040

    .line 103
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

    const p1, 0x7f05002e

    .line 105
    invoke-virtual {p0, p1}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

    .line 108
    new-instance p1, Landroid/widget/ArrayAdapter;

    const v0, 0x1090008

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->SERVER_NAME:[Ljava/lang/String;

    invoke-direct {p1, p0, v0, v1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    const v0, 0x1090009

    .line 110
    invoke-virtual {p1, v0}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 111
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSpinnerServer:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    const-string p1, "phone"

    .line 113
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mTelephonyMgr:Landroid/telephony/TelephonyManager;

    .line 114
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$CellStateListener;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    const/16 v1, 0x71

    invoke-virtual {p1, v0, v1}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    .line 119
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->updateCellInfo()V

    const-string p1, "locationem2.data"

    const/4 v0, 0x0

    .line 123
    invoke-virtual {p0, p1, v0}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    const-string v1, "launchForegroundService"

    const/4 v2, 0x1

    .line 125
    invoke-interface {p1, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 127
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

    invoke-virtual {p1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_0

    .line 129
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    :goto_0
    const-string p1, "location"

    .line 132
    invoke-virtual {p0, p1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mLocationManager:Landroid/location/LocationManager;

    if-nez p1, :cond_1

    const-string p1, "ERR: mLocationManager is null"

    .line 134
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 137
    :cond_1
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mLocationManager:Landroid/location/LocationManager;

    invoke-virtual {p1}, Landroid/location/LocationManager;->isLocationEnabled()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 138
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

    invoke-virtual {p1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 140
    :cond_2
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 143
    :goto_1
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->isPackageInLocationSettingsWhitelist(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 144
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

    invoke-virtual {p1, v2}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 146
    :cond_3
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 149
    :goto_2
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mSpinnerServer:Landroid/widget/Spinner;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 163
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_TIME:Landroid/widget/Button;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$2;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 168
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_GPS:Landroid/widget/Button;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$3;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 173
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButton_WIFI:Landroid/widget/Button;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$4;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 178
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mButtonConnect:Landroid/widget/ToggleButton;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 202
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxE911OpenGpsEnable:Landroid/widget/CheckBox;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$6;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 208
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationEMService:Landroid/widget/CheckBox;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 226
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxEnableLocationSettings:Landroid/widget/CheckBox;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$8;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 235
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsMisc;->mCheckBoxAddSettingsExemptWhitelist:Landroid/widget/CheckBox;

    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsMisc;)V

    invoke-virtual {p1, v0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    :catch_0
    const-string p1, "onCreate, Failed to initAgpsInterface"

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    const-string v0, "onDestroy"

    .line 255
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->log(Ljava/lang/String;)V

    .line 256
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onResume()V
    .locals 0

    .line 249
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 250
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsMisc;->applyAgpsConfigToUI()V

    return-void
.end method
